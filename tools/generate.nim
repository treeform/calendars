const skipLoadingTimeZones = true
import ../chrono

import os
import osproc
import strutils
import parsecsv
import algorithm
import streams
import zip/zlib

## Hey, so you want to fetch your own time zones?
## You can use this file to fetch timezone files from the primary source.
## You can tweak the parameters in this file to only get timezones you need and for the years your need.
## This takes about 10 minutes to process all of the timezone data. Hey, I did not write this tool.

# You can modify these parameters here to get the timezone table you want:
# Generating timezones from 2015 to 2025 generates only a 14k dstchanges.bin
# Default time range of 1970 to 2030 generates 94k tzdata/dstchanges.bin

const startYear = 1970
const endYear = 2030
const timeZoneFiles = @[
  "africa",
  "antarctica",
  "asia",
  "australasia",
  "europe",
  "northamerica",
  "southamerica",
  # "pacificnew", # some leagal thing
  # "etcetera",   # mostly present for historical reasons
  # "backward",   # historical renames
  # "backzone"    # historical timezones pre-1970
]


const startYearTs = Calendar(year: startYear, month: 1, day: 1).calendarToTs()
const endYearTs = Calendar(year: endYear, month: 1, day: 1).calendarToTs()


proc runCommand(cmd: string) =
  echo "running: ", cmd
  let ret = execCmdEx(cmd)
  if ret.exitCode != 0:
    echo "Command failed:"
    echo ret.output
    quit()


proc catCommand(cmd: string): string =
  echo "running: ", cmd
  let ret = execCmdEx(cmd)
  if ret.exitCode != 0:
    echo "Command failed:"
    echo ret.output
    quit()
  return ret.output


proc fetchAndCompileTzDb() =
  if not dirExists("tz"):
    echo "It looks like you don't have https://github.com/eggert/tz checkedout"
    runCommand("git clone https://github.com/eggert/tz")
  else:
    runCommand("cd tz; git pull origin master")

  if not dirExists("tz/zic") or not dirExists("tz/zdump"):
    runCommand("cd tz; make")

  runCommand("cd tz; zic -d zic_out " & timeZoneFiles.join(" "))


proc dumpToCsvFiles() =
  let timezones = open("tzdata/timezones.csv", fmWrite)
  let dstchanges = open("tzdata/dstchanges.csv", fmWrite)

  var files = newSeq[string]()
  for file in walkDirRec("tz/zic_out/"):

    if not file[11..^1].contains("/"):
      # ignore non contenental timezones
      #CET CST6CDT EET EST EST5EDT ...
      continue

    files.add(file)
  files.sort(system.cmp)

  for tzId, file in files:
    timezones.write("\"" & $tzId & "\",\"" & "" & "\",\"" & file[11..^1] & "\"\n")
    var prevDstName = ""
    var prevOffset = 0
    # zdump can only do absolute paths
    let output = catCommand("tz/zdump -v -c 2060 " & getCurrentDir() & "/" & file)

    for rawLine in output.split("\L"):
      let line = rawLine.replace(getCurrentDir() & "/tz/zic_out/", "")
      if "NULL" in line or line.len == 0:
        continue
      let parts = line.splitWhitespace()
      let dstName = parts[13]
      let offset = parseInt(parts[15].split("=")[1])
      let date = parts[2..5].join(" ")
      let isDst = parseInt(parts[14].split("=")[1])
      if prevDstName == dstName and prevOffset == offset:
        continue
      let ts = parseTs("{month/n/3} {day} {hour/2}:{minute/2}:{second/2} {year}", date)
      let csvLine = "\"" & $tzId & "\",\"" & dstName & "\",\"" & $(int64(ts)) & "\",\"" & $offset & "\",\"" & $isDst & "\"\n"

      dstchanges.write(csvLine)

      prevDstName = dstName
      prevOffset = offset

  timezones.close()
  dstchanges.close()


iterator readCvs*(fileName: string, readHeader = false): CsvRow =
  var p: CsvParser
  p.open(fileName)
  if readHeader:
    p.readHeaderRow()
  while p.readRow():
    yield p.row
  p.close()


type PackedString[N: static[int]] = array[N, char]


proc pack[N](str: string): PackedString[N] =
  if str.len >= result.len:
    raise newException(ValueError, "Can't pack " & $str.len & " string into " & $result.len)
  for i in 0..<result.len:
    if i >= str.len:
      break
    result[i] = str[i]


proc csvToBin() =
  var timeZones = newSeq[TimeZone]()
  var dstChanges = newSeq[DstChange]()

  block:
    for row in readCvs("tzdata/timezones.csv"):
      timeZones.add TimeZone(
        id: int16 parseInt(row[0]),
        name: pack[32](row[2]),
        )

    timeZones.sort do (x, y: TimeZone) -> int:
      result = cmp($x.name, $y.name)

    var f = newStringStream()
    f.writeData(cast[pointer](addr timeZones[0]), timeZones.len * sizeOf(TimeZone))
    f.setPosition(0)
    let zdata = compress(f.readAll(), level=9)
    writeFile("tzdata/timezones.bin", zdata)
    echo "written file tzdata/timezones.bin ", zdata.len div 1024, "k"

  block:
    var prevDst = DstChange()
    var dst = DstChange()
    var zoneDsts = newSeq[DstChange]()

    proc dumpZone() =
      var startI = 0
      var endI = zoneDsts.len
      for i, innerDst in zoneDsts:
        if Timestamp(innerDst.start) < startYearTs:
          startI = i
        if Timestamp(dst.start) > endYearTs and endI > i:
          endI = i
      if startI > 0:
        dec startI
      for innerDst in zoneDsts[startI..<endI]:
        dstChanges.add(innerDst)

      zoneDsts = newSeq[DstChange]()

    for row in readCvs("tzdata/dstchanges.csv"):
      dst = DstChange(
        tzId: int16 parseInt(row[0]),
        name: pack[6](row[1]),
        start: float64 parseFloat(row[2]),
        offset: int32 parseInt(row[3])
      )

      if prevDst.tzId != dst.tzId:
        dumpZone()

      zoneDsts.add(dst)
      prevDst = dst

    dumpZone()

    echo "dst transitoins: ", dstChanges.len

    var f = newStringStream()
    f.writeData(cast[pointer](addr dstChanges[0]), dstChanges.len * sizeOf(DstChange))
    f.setPosition(0)
    let zdata = compress(f.readAll(), level=9)
    writeFile("tzdata/dstchanges.bin", zdata)
    echo "written file tzdata/dstchanges.bin ", zdata.len div 1024, "k"


fetchAndCompileTzDb()
dumpToCsvFiles()
csvToBin()
/* Generated by Nim Compiler v0.17.1 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/p/Nim/lib -o /p/calendars/test/nimcache/calendars_timestamps.o /p/calendars/test/nimcache/calendars_timestamps.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Calendar_9c6Uvq4R9bot8smiU6DeT9chg Calendar_9c6Uvq4R9bot8smiU6DeT9chg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Calendar_9c6Uvq4R9bot8smiU6DeT9chg {
NI year;
NI month;
NI day;
NI hour;
NI minute;
NI second;
NF secondFraction;
NF tzOffset;
NimStringDesc* tzName;
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NIM_BOOL, eqeq__HAuYWZF9aDSFiEa0WVTQdCA)(NF a, NF b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NIM_BOOL, gt__HAuYWZF9aDSFiEa0WVTQdCA_2)(NF a, NF b);
N_NIMCALL(NIM_BOOL, lt__HAuYWZF9aDSFiEa0WVTQdCA_3)(NF a, NF b);
N_NIMCALL(NIM_BOOL, lteq__HAuYWZF9aDSFiEa0WVTQdCA_4)(NF a, NF b);
N_NIMCALL(NIM_BOOL, gteq__HAuYWZF9aDSFiEa0WVTQdCA_5)(NF a, NF b);
N_NIMCALL(NimStringDesc*, dollar__inM1JYrxFJLqBuI6p8Agmg)(NF a);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f);
N_NIMCALL(void, tsToCalendar_5ag78gdGN7UxwPywmjuNmg)(NF ts, Calendar_9c6Uvq4R9bot8smiU6DeT9chg* Result);
static N_INLINE(NI64, addInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
static N_INLINE(NI, modInt)(NI a, NI b);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(NF, calendarToTimestamp_xZy15zJCBXc639cMcqDdlXQ)(Calendar_9c6Uvq4R9bot8smiU6DeT9chg* cal);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NIMCALL(void, tsToCalendar_MPPw14eDvJHPqdR6gnDJYw)(NF ts, NF tzOffset, Calendar_9c6Uvq4R9bot8smiU6DeT9chg* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(NimStringDesc*, tsToIso_6PjdPPdwxkbiiyyyY0Uabw)(NF ts);
N_NIMCALL(NimStringDesc*, calendarToIso_v4YgZ0q4Apcmm7CxSQ4rUA)(Calendar_9c6Uvq4R9bot8smiU6DeT9chg* cal);
N_NIMCALL(NimStringDesc*, tsToIso_Zmb1d4kB33b8kKK0UZ4QGw)(NF ts, NF tzOffset);
N_NIMCALL(NF, isoToTimestamp_bJRJYKqE9cloMhJBixka7MA)(NimStringDesc* iso);
N_NIMCALL(void, isoToCalendar_lUio13eeuKFCGeZgrVuR8A)(NimStringDesc* iso, Calendar_9c6Uvq4R9bot8smiU6DeT9chg* Result);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_9c6Uvq4R9bot8smiU6DeT9chg_;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(NIM_BOOL, eqeq__HAuYWZF9aDSFiEa0WVTQdCA)(NF a, NF b) {
	NIM_BOOL result;
	nimfr_("==", "timestamps.nim")
	result = (NIM_BOOL)0;
	nimln_(30, "timestamps.nim");
	result = (a == b);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, gt__HAuYWZF9aDSFiEa0WVTQdCA_2)(NF a, NF b) {
	NIM_BOOL result;
	nimfr_(">", "timestamps.nim")
	result = (NIM_BOOL)0;
	nimln_(31, "timestamps.nim");
	result = (b < a);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, lt__HAuYWZF9aDSFiEa0WVTQdCA_3)(NF a, NF b) {
	NIM_BOOL result;
	nimfr_("<", "timestamps.nim")
	result = (NIM_BOOL)0;
	nimln_(32, "timestamps.nim");
	result = (a < b);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, lteq__HAuYWZF9aDSFiEa0WVTQdCA_4)(NF a, NF b) {
	NIM_BOOL result;
	nimfr_("<=", "timestamps.nim")
	result = (NIM_BOOL)0;
	nimln_(33, "timestamps.nim");
	result = (a <= b);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, gteq__HAuYWZF9aDSFiEa0WVTQdCA_5)(NF a, NF b) {
	NIM_BOOL result;
	nimfr_(">=", "timestamps.nim")
	result = (NIM_BOOL)0;
	nimln_(34, "timestamps.nim");
	result = (b <= a);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, dollar__inM1JYrxFJLqBuI6p8Agmg)(NF a) {
	NimStringDesc* result;
	nimfr_("$", "timestamps.nim")
	result = (NimStringDesc*)0;
	nimln_(35, "timestamps.nim");
	result = nimFloatToStr(a);
	popFrame();
	return result;
}

static N_INLINE(NI64, addInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	{
		if (!(b == IL64(0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	result = (NI64)(a % b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	{
		if (!(b == IL64(0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(T7_)) goto LA8_;
		T7_ = (b == IL64(-1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI64)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	result = (NI)(a % b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, tsToCalendar_5ag78gdGN7UxwPywmjuNmg)(NF ts, Calendar_9c6Uvq4R9bot8smiU6DeT9chg* Result) {
	NI64 tss;
	NI64 s;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_3;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_4;
	NI64 h;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_5;
	NI m;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_6;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_7;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_8;
	NI64 x;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_9;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_10;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_11;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_12;
	NI64 b;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_13;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_14;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_15;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_16;
	NI64 c;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_17;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_18;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_19;
	NI64 d;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_20;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_21;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_22;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_23;
	NI64 e;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_24;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_25;
	NI64 f;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_26;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_27;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_28;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_29;
	NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_30;
	nimfr_("tsToCalendar", "timestamps.nim")
{	nimln_(40, "timestamps.nim");
	tss = ((NI64) (((NI) (ts))));
	nimln_(42, "timestamps.nim");
	{
		NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_2;
		if (!(ts < 0.0)) goto LA3_;
		nimln_(44, "timestamps.nim");
		TM_r9bw2lWMIyYtPOVRKUKhZYw_2 = addInt64(tss, IL64(62167132800));
		tss = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_2);
		nimln_(45, "timestamps.nim");
		{
			if (!(tss < IL64(0))) goto LA7_;
			nimln_(46, "timestamps.nim");
			goto BeforeRet_;
		}
		LA7_: ;
	}
	LA3_: ;
	nimln_(48, "timestamps.nim");
	(*Result).secondFraction = ((NF)(ts) - (NF)(((NF) (tss))));
	nimln_(49, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_3 = modInt64(tss, IL64(86400));
	s = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_3);
	nimln_(50, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_4 = divInt64(tss, IL64(86400));
	tss = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_4);
	nimln_(51, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_5 = divInt64(((NI) (s)), ((NI) 3600));
	h = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_5);
	nimln_(52, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_6 = divInt64(((NI) (s)), ((NI) 60));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_7 = modInt(((NI) ((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_6))), ((NI) 60));
	m = (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_7);
	nimln_(53, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_8 = modInt(((NI) (s)), ((NI) 60));
	s = ((NI64) ((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_8)));
	nimln_(55, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_9 = mulInt64(tss, IL64(4));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_10 = addInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_9), IL64(102032));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_11 = divInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_10), IL64(146097));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_12 = addInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_11), IL64(15));
	x = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_12);
	nimln_(56, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_13 = addInt64(tss, IL64(2442113));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_14 = addInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_13), x);
	TM_r9bw2lWMIyYtPOVRKUKhZYw_15 = divInt64(x, IL64(4));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_16 = subInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_14), (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_15));
	b = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_16);
	nimln_(57, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_17 = mulInt64(b, IL64(20));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_18 = subInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_17), IL64(2442));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_19 = divInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_18), IL64(7305));
	c = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_19);
	nimln_(58, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_20 = mulInt64(IL64(365), c);
	TM_r9bw2lWMIyYtPOVRKUKhZYw_21 = subInt64(b, (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_20));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_22 = divInt64(c, IL64(4));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_23 = subInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_21), (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_22));
	d = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_23);
	nimln_(59, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_24 = mulInt64(d, IL64(1000));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_25 = divInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_24), IL64(30601));
	e = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_25);
	nimln_(60, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_26 = mulInt64(e, IL64(30));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_27 = subInt64(d, (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_26));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_28 = mulInt64(e, IL64(601));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_29 = divInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_28), IL64(1000));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_30 = subInt64((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_27), (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_29));
	f = (NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_30);
	nimln_(61, "timestamps.nim");
	(*Result).second = ((NI) (s));
	nimln_(62, "timestamps.nim");
	(*Result).minute = ((NI) (m));
	nimln_(63, "timestamps.nim");
	(*Result).hour = ((NI) (h));
	nimln_(64, "timestamps.nim");
	(*Result).day = ((NI) (f));
	nimln_(65, "timestamps.nim");
	{
		NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_31;
		NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_32;
		if (!(e < IL64(14))) goto LA11_;
		nimln_(66, "timestamps.nim");
		TM_r9bw2lWMIyYtPOVRKUKhZYw_31 = subInt64(e, IL64(1));
		(*Result).month = ((NI) ((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_31)));
		nimln_(67, "timestamps.nim");
		TM_r9bw2lWMIyYtPOVRKUKhZYw_32 = subInt64(c, IL64(4716));
		(*Result).year = ((NI) ((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_32)));
	}
	goto LA9_;
	LA11_: ;
	{
		NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_33;
		NI64 TM_r9bw2lWMIyYtPOVRKUKhZYw_34;
		nimln_(69, "timestamps.nim");
		TM_r9bw2lWMIyYtPOVRKUKhZYw_33 = subInt64(e, IL64(13));
		(*Result).month = ((NI) ((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_33)));
		nimln_(70, "timestamps.nim");
		TM_r9bw2lWMIyYtPOVRKUKhZYw_34 = subInt64(c, IL64(4715));
		(*Result).year = ((NI) ((NI64)(TM_r9bw2lWMIyYtPOVRKUKhZYw_34)));
	}
	LA9_: ;
	nimln_(72, "timestamps.nim");
	{
		NI TM_r9bw2lWMIyYtPOVRKUKhZYw_35;
		if (!(ts < 0.0)) goto LA16_;
		nimln_(74, "timestamps.nim");
		TM_r9bw2lWMIyYtPOVRKUKhZYw_35 = subInt((*Result).year, ((NI) 1970));
		(*Result).year = (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_35);
	}
	LA16_: ;
	}BeforeRet_: ;
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NF, calendarToTimestamp_xZy15zJCBXc639cMcqDdlXQ)(Calendar_9c6Uvq4R9bot8smiU6DeT9chg* cal) {
	NF result;
	NI m;
	NI y;
	NI yearMonthPart;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_38;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_39;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_40;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_41;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_42;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_43;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_44;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_45;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_46;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_47;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_48;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_49;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_50;
	NI tss;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_51;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_52;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_53;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_54;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_55;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_56;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_57;
	NI TM_r9bw2lWMIyYtPOVRKUKhZYw_58;
	nimfr_("calendarToTimestamp", "timestamps.nim")
{	result = (NF)0;
	nimln_(80, "timestamps.nim");
	m = (*cal).month;
	nimln_(81, "timestamps.nim");
	y = (*cal).year;
	nimln_(82, "timestamps.nim");
	{
		NI TM_r9bw2lWMIyYtPOVRKUKhZYw_36;
		NI TM_r9bw2lWMIyYtPOVRKUKhZYw_37;
		if (!(m <= ((NI) 2))) goto LA3_;
		nimln_(83, "timestamps.nim");
		TM_r9bw2lWMIyYtPOVRKUKhZYw_36 = subInt(y, ((NI) 1));
		y = (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_36);
		nimln_(84, "timestamps.nim");
		TM_r9bw2lWMIyYtPOVRKUKhZYw_37 = addInt(m, ((NI) 12));
		m = (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_37);
	}
	LA3_: ;
	nimln_(85, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_38 = mulInt(((NI) 365), y);
	TM_r9bw2lWMIyYtPOVRKUKhZYw_39 = divInt(y, ((NI) 4));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_40 = addInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_38), (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_39));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_41 = divInt(y, ((NI) 100));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_42 = subInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_40), (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_41));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_43 = divInt(y, ((NI) 400));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_44 = addInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_42), (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_43));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_45 = addInt(m, ((NI) 1));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_46 = mulInt(((NI) 3), (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_45));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_47 = divInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_46), ((NI) 5));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_48 = addInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_44), (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_47));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_49 = mulInt(((NI) 30), m);
	TM_r9bw2lWMIyYtPOVRKUKhZYw_50 = addInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_48), (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_49));
	yearMonthPart = (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_50);
	nimln_(86, "timestamps.nim");
	TM_r9bw2lWMIyYtPOVRKUKhZYw_51 = addInt(yearMonthPart, (*cal).day);
	TM_r9bw2lWMIyYtPOVRKUKhZYw_52 = subInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_51), ((NI) 719561));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_53 = mulInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_52), ((NI) 86400));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_54 = mulInt(((NI) 3600), (*cal).hour);
	TM_r9bw2lWMIyYtPOVRKUKhZYw_55 = addInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_53), (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_54));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_56 = mulInt(((NI) 60), (*cal).minute);
	TM_r9bw2lWMIyYtPOVRKUKhZYw_57 = addInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_55), (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_56));
	TM_r9bw2lWMIyYtPOVRKUKhZYw_58 = addInt((NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_57), (*cal).second);
	tss = (NI)(TM_r9bw2lWMIyYtPOVRKUKhZYw_58);
	nimln_(87, "timestamps.nim");
	result = ((NF)(((NF)(((NF) (tss))) + (NF)((*cal).secondFraction))) - (NF)((*cal).tzOffset));
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(void, tsToCalendar_MPPw14eDvJHPqdR6gnDJYw)(NF ts, NF tzOffset, Calendar_9c6Uvq4R9bot8smiU6DeT9chg* Result) {
	NF tsTz;
	nimfr_("tsToCalendar", "timestamps.nim")
	nimln_(93, "timestamps.nim");
	tsTz = ((NF)(ts) + (NF)(tzOffset));
	nimln_(94, "timestamps.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_9c6Uvq4R9bot8smiU6DeT9chg_));
	tsToCalendar_5ag78gdGN7UxwPywmjuNmg(tsTz, Result);
	nimln_(95, "timestamps.nim");
	(*Result).tzOffset = tzOffset;
	popFrame();
}

N_NIMCALL(NimStringDesc*, tsToIso_6PjdPPdwxkbiiyyyY0Uabw)(NF ts) {
	NimStringDesc* result;
	Calendar_9c6Uvq4R9bot8smiU6DeT9chg T1_;
	nimfr_("tsToIso", "timestamps.nim")
{	result = (NimStringDesc*)0;
	nimln_(101, "timestamps.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	tsToCalendar_5ag78gdGN7UxwPywmjuNmg(ts, (&T1_));
	result = calendarToIso_v4YgZ0q4Apcmm7CxSQ4rUA((&T1_));
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, tsToIso_Zmb1d4kB33b8kKK0UZ4QGw)(NF ts, NF tzOffset) {
	NimStringDesc* result;
	Calendar_9c6Uvq4R9bot8smiU6DeT9chg T1_;
	nimfr_("tsToIso", "timestamps.nim")
{	result = (NimStringDesc*)0;
	nimln_(107, "timestamps.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	tsToCalendar_MPPw14eDvJHPqdR6gnDJYw(ts, tzOffset, (&T1_));
	result = calendarToIso_v4YgZ0q4Apcmm7CxSQ4rUA((&T1_));
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NF, isoToTimestamp_bJRJYKqE9cloMhJBixka7MA)(NimStringDesc* iso) {
	NF result;
	Calendar_9c6Uvq4R9bot8smiU6DeT9chg T1_;
	nimfr_("isoToTimestamp", "timestamps.nim")
{	result = (NF)0;
	nimln_(113, "timestamps.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	isoToCalendar_lUio13eeuKFCGeZgrVuR8A(iso, (&T1_));
	result = calendarToTimestamp_xZy15zJCBXc639cMcqDdlXQ((&T1_));
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, calendars_timestampsInit000)(void) {
	nimfr_("timestamps", "timestamps.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, calendars_timestampsDatInit000)(void) {
}

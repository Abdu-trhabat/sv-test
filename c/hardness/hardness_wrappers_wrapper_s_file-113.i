extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch113Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 unsigned short int var_1_4;
 unsigned short int var_1_5;
 unsigned short int var_1_6;
 float var_1_7;
 float var_1_8;
 signed char var_1_9;
 unsigned char var_1_10;
 unsigned short int var_1_11;
 unsigned short int var_1_12;
 signed char var_1_13;
 unsigned long int var_1_14;
 unsigned char var_1_15;
 float var_1_16;
 float var_1_17;
 float var_1_18;
 unsigned long int var_1_19;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 2,
 5,
 32,
 1,
 8,
 64,
 64.25,
 7.5,
 2,
 0,
 22430,
 18561,
 -32,
 256,
 0,
 0.0,
 10.6,
 1.5,
 25
};
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = WrapperStruct00.var_1_3;
 if (WrapperStruct00.var_1_2 >= stepLocal_0) {
  WrapperStruct00.var_1_1 = ((((128) < (WrapperStruct00.var_1_4)) ? (128) : (WrapperStruct00.var_1_4)));
 } else {
  WrapperStruct00.var_1_1 = (((((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6)) < (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_4)));
 }
 if (WrapperStruct00.var_1_10 && WrapperStruct00.var_1_15) {
  if (WrapperStruct00.var_1_8 > ((WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17) - WrapperStruct00.var_1_18)) {
   WrapperStruct00.var_1_14 = WrapperStruct00.var_1_19;
  }
 } else {
  WrapperStruct00.var_1_14 = WrapperStruct00.var_1_6;
 }
 if (WrapperStruct00.var_1_14 >= WrapperStruct00.var_1_6) {
  WrapperStruct00.var_1_7 = WrapperStruct00.var_1_8;
 }
 if (-64 >= WrapperStruct00.var_1_14) {
  if ((-1000 < 256) && (((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_6))) > WrapperStruct00.var_1_4)) {
   if (WrapperStruct00.var_1_4 < ((WrapperStruct00.var_1_11 + WrapperStruct00.var_1_12) - WrapperStruct00.var_1_6)) {
    WrapperStruct00.var_1_9 = WrapperStruct00.var_1_13;
   }
  } else {
   WrapperStruct00.var_1_9 = WrapperStruct00.var_1_13;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 65534);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32767);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32767);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 32768);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 16384);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 32767);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 126);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= 4611686.018427388000e+12F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_17 >= 0.0F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 4611686.018427388000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_18 >= 0.0F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((unsigned short int) ((((128) < (WrapperStruct00.var_1_4)) ? (128) : (WrapperStruct00.var_1_4))))) : (WrapperStruct00.var_1_1 == ((unsigned short int) (((((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6)) < (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_4)))))) && ((WrapperStruct00.var_1_14 >= WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_7 == ((float) WrapperStruct00.var_1_8)) : 1)) && ((-64 >= WrapperStruct00.var_1_14) ? (((-1000 < 256) && (((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_6))) > WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_4 < ((WrapperStruct00.var_1_11 + WrapperStruct00.var_1_12) - WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_13)) : 1) : (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_13))) : 1)) && ((WrapperStruct00.var_1_10 && WrapperStruct00.var_1_15) ? ((WrapperStruct00.var_1_8 > ((WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17) - WrapperStruct00.var_1_18)) ? (WrapperStruct00.var_1_14 == ((unsigned long int) WrapperStruct00.var_1_19)) : 1) : (WrapperStruct00.var_1_14 == ((unsigned long int) WrapperStruct00.var_1_6)))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}

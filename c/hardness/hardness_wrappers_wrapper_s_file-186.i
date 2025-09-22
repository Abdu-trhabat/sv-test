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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 double var_1_2;
 double var_1_3;
 signed short int var_1_4;
 unsigned char var_1_5;
 double var_1_6;
 double var_1_7;
 double var_1_8;
 double var_1_9;
 double var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
 unsigned char var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -5,
 15.5,
 50.4,
 100,
 16,
 199.5,
 1000.99,
 1.8,
 0.0,
 4.2,
 50,
 128,
 1,
 0,
 64,
 8,
 16,
 2
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2 < WrapperStruct00.var_1_3) {
  if (WrapperStruct00.var_1_3 < WrapperStruct00.var_1_2) {
   WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_4 + ((((128) < 0 ) ? -(128) : (128))));
  } else {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
  }
 }
 if (((((WrapperStruct00.var_1_3) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_2))) > WrapperStruct00.var_1_6) {
  if ((WrapperStruct00.var_1_3 / 256.8) >= ((WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8) - (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))) {
   WrapperStruct00.var_1_5 = 64;
  } else {
   WrapperStruct00.var_1_5 = WrapperStruct00.var_1_11;
  }
 }
 if ((WrapperStruct00.var_1_13 || (WrapperStruct00.var_1_6 > WrapperStruct00.var_1_3)) || WrapperStruct00.var_1_14) {
  if (WrapperStruct00.var_1_14) {
   WrapperStruct00.var_1_12 = ((WrapperStruct00.var_1_15 - (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_17)) + (WrapperStruct00.var_1_18 + 8));
  } else {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_18;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 16383);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427388000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427388000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 4611686.018427388000e+12F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427388000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 254);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 32);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 31);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 64);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((WrapperStruct00.var_1_2 < WrapperStruct00.var_1_3) ? ((WrapperStruct00.var_1_3 < WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_1 == ((signed short int) (WrapperStruct00.var_1_4 + ((((128) < 0 ) ? -(128) : (128)))))) : (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_4))) : 1) && ((((((WrapperStruct00.var_1_3) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_2))) > WrapperStruct00.var_1_6) ? (((WrapperStruct00.var_1_3 / 256.8) >= ((WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8) - (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))) ? (WrapperStruct00.var_1_5 == ((unsigned char) 64)) : (WrapperStruct00.var_1_5 == ((unsigned char) WrapperStruct00.var_1_11))) : 1)) && (((WrapperStruct00.var_1_13 || (WrapperStruct00.var_1_6 > WrapperStruct00.var_1_3)) || WrapperStruct00.var_1_14) ? (WrapperStruct00.var_1_14 ? (WrapperStruct00.var_1_12 == ((unsigned char) ((WrapperStruct00.var_1_15 - (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_17)) + (WrapperStruct00.var_1_18 + 8)))) : (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_18))) : 1)
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

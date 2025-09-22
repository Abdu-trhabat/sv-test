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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch20Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 unsigned char var_1_2;
 float var_1_3;
 float var_1_4;
 float var_1_5;
 float var_1_6;
 double var_1_7;
 double var_1_8;
 unsigned long int var_1_9;
 unsigned char var_1_10;
 unsigned long int var_1_11;
 unsigned long int var_1_12;
 unsigned long int var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0.6,
 0,
 0.0,
 2.95,
 8.5,
 999999999999.4,
 10.2,
 4.6,
 256,
 0,
 3724367395,
 25,
 1,
 1,
 128,
 100
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4) - WrapperStruct00.var_1_5);
 } else {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_6);
 }
 WrapperStruct00.var_1_7 = ((15.5 + WrapperStruct00.var_1_4) - (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_8));
 unsigned char stepLocal_0 = WrapperStruct00.var_1_2;
 if (WrapperStruct00.var_1_10 || stepLocal_0) {
  WrapperStruct00.var_1_9 = ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) - WrapperStruct00.var_1_13);
 } else {
  WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_13 + ((((WrapperStruct00.var_1_12) < 0 ) ? -(WrapperStruct00.var_1_12) : (WrapperStruct00.var_1_12))));
 }
 unsigned long int stepLocal_2 = WrapperStruct00.var_1_13;
 unsigned long int stepLocal_1 = WrapperStruct00.var_1_11;
 if (5 >= stepLocal_1) {
  if (WrapperStruct00.var_1_1 >= WrapperStruct00.var_1_8) {
   WrapperStruct00.var_1_14 = (128 - 16);
  } else {
   if (stepLocal_2 >= ((((WrapperStruct00.var_1_12) < 0 ) ? -(WrapperStruct00.var_1_12) : (WrapperStruct00.var_1_12)))) {
    WrapperStruct00.var_1_14 = (WrapperStruct00.var_1_15 - WrapperStruct00.var_1_16);
   } else {
    WrapperStruct00.var_1_14 = WrapperStruct00.var_1_16;
   }
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 3221225470);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967294);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1073741823);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 254);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((float) ((WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4) - WrapperStruct00.var_1_5))) : (WrapperStruct00.var_1_1 == ((float) (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_6)))) && (WrapperStruct00.var_1_7 == ((double) ((15.5 + WrapperStruct00.var_1_4) - (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_8))))) && ((WrapperStruct00.var_1_10 || WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_9 == ((unsigned long int) ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) - WrapperStruct00.var_1_13))) : (WrapperStruct00.var_1_9 == ((unsigned long int) (WrapperStruct00.var_1_13 + ((((WrapperStruct00.var_1_12) < 0 ) ? -(WrapperStruct00.var_1_12) : (WrapperStruct00.var_1_12)))))))) && ((5 >= WrapperStruct00.var_1_11) ? ((WrapperStruct00.var_1_1 >= WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_14 == ((unsigned char) (128 - 16))) : ((WrapperStruct00.var_1_13 >= ((((WrapperStruct00.var_1_12) < 0 ) ? -(WrapperStruct00.var_1_12) : (WrapperStruct00.var_1_12)))) ? (WrapperStruct00.var_1_14 == ((unsigned char) (WrapperStruct00.var_1_15 - WrapperStruct00.var_1_16))) : (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_16)))) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 signed long int var_1_8;
 signed long int var_1_9;
 signed long int var_1_10;
 signed long int var_1_11;
 double var_1_12;
 double var_1_13;
 double var_1_14;
 double var_1_15;
 double var_1_16;
 double var_1_17;
 double var_1_18;
 signed short int var_1_19;
 signed short int var_1_20;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 16,
 4,
 0,
 0,
 0,
 0,
 64,
 -1,
 32,
 128,
 2.8,
 64.5,
 199.15,
 25.2,
 0.0,
 3.5,
 0.5,
 500,
 1
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2 >= (8u * WrapperStruct00.var_1_3)) {
  WrapperStruct00.var_1_1 = (! (WrapperStruct00.var_1_4 || (WrapperStruct00.var_1_5 || WrapperStruct00.var_1_6)));
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
 }
 signed long int stepLocal_1 = WrapperStruct00.var_1_10;
 unsigned long int stepLocal_0 = 1u;
 if (((WrapperStruct00.var_1_3 * WrapperStruct00.var_1_2) * (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)) >= stepLocal_0) {
  if (WrapperStruct00.var_1_3 <= stepLocal_1) {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_11;
  } else {
   WrapperStruct00.var_1_8 = 8;
  }
 } else {
  WrapperStruct00.var_1_8 = WrapperStruct00.var_1_11;
 }
 if ((~ ((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_8)))) <= (WrapperStruct00.var_1_10 % 1u)) {
  WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_13 + (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15));
 } else {
  WrapperStruct00.var_1_12 = ((WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17) - WrapperStruct00.var_1_18);
 }
 WrapperStruct00.var_1_19 = WrapperStruct00.var_1_20;
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 2147483646);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_17 >= 0.0F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_18 >= 0.0F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
 WrapperStruct00.var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_20 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_20 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((WrapperStruct00.var_1_2 >= (8u * WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1 == ((unsigned char) (! (WrapperStruct00.var_1_4 || (WrapperStruct00.var_1_5 || WrapperStruct00.var_1_6))))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_7))) && ((((WrapperStruct00.var_1_3 * WrapperStruct00.var_1_2) * (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)) >= 1u) ? ((WrapperStruct00.var_1_3 <= WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_8 == ((signed long int) WrapperStruct00.var_1_11)) : (WrapperStruct00.var_1_8 == ((signed long int) 8))) : (WrapperStruct00.var_1_8 == ((signed long int) WrapperStruct00.var_1_11)))) && (((~ ((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_8)))) <= (WrapperStruct00.var_1_10 % 1u)) ? (WrapperStruct00.var_1_12 == ((double) (WrapperStruct00.var_1_13 + (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)))) : (WrapperStruct00.var_1_12 == ((double) ((WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17) - WrapperStruct00.var_1_18))))) && (WrapperStruct00.var_1_19 == ((signed short int) WrapperStruct00.var_1_20))
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

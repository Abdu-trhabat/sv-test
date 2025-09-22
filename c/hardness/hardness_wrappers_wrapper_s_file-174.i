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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch174Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 unsigned long int var_1_4;
 unsigned long int var_1_5;
 unsigned char var_1_6;
 unsigned long int var_1_7;
 signed long int var_1_8;
 float var_1_9;
 signed long int var_1_10;
 signed long int var_1_11;
 signed long int var_1_12;
 signed short int var_1_13;
 signed short int var_1_14;
 signed short int var_1_15;
 signed short int var_1_16;
 signed short int var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 128,
 3672536656,
 2030143942,
 16,
 2,
 0,
 16,
 -10,
 32.1,
 1638083155,
 32,
 25,
 -64,
 100,
 32,
 25,
 8
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4));
 if ((WrapperStruct00.var_1_4 < WrapperStruct00.var_1_2) || WrapperStruct00.var_1_6) {
  WrapperStruct00.var_1_5 = (((((((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) > (3934615513u)) ? (((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) : (3934615513u))) - WrapperStruct00.var_1_4);
 } else {
  WrapperStruct00.var_1_5 = WrapperStruct00.var_1_7;
 }
 unsigned char stepLocal_0 = WrapperStruct00.var_1_5 > 1000000000u;
 if (stepLocal_0 || ((- 4.4f) >= WrapperStruct00.var_1_9)) {
  WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_4 - (WrapperStruct00.var_1_10 - ((((WrapperStruct00.var_1_11) < (WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_12)))));
 } else {
  if (WrapperStruct00.var_1_6) {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_12;
  } else {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_11;
  }
 }
 unsigned long int stepLocal_1 = WrapperStruct00.var_1_2;
 if (WrapperStruct00.var_1_7 >= stepLocal_1) {
  if (WrapperStruct00.var_1_6) {
   WrapperStruct00.var_1_13 = ((((WrapperStruct00.var_1_14) < (WrapperStruct00.var_1_15)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_15)));
  }
 } else {
  WrapperStruct00.var_1_13 = (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_17);
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967294);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1073741823);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 4294967294);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483646);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1073741823);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1073741823);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 32766);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 32766);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 16383);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((WrapperStruct00.var_1_1 == ((unsigned long int) (WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4)))) && (((WrapperStruct00.var_1_4 < WrapperStruct00.var_1_2) || WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_5 == ((unsigned long int) (((((((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) > (3934615513u)) ? (((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) : (3934615513u))) - WrapperStruct00.var_1_4))) : (WrapperStruct00.var_1_5 == ((unsigned long int) WrapperStruct00.var_1_7)))) && (((WrapperStruct00.var_1_5 > 1000000000u) || ((- 4.4f) >= WrapperStruct00.var_1_9)) ? (WrapperStruct00.var_1_8 == ((signed long int) (WrapperStruct00.var_1_4 - (WrapperStruct00.var_1_10 - ((((WrapperStruct00.var_1_11) < (WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_12))))))) : (WrapperStruct00.var_1_6 ? (WrapperStruct00.var_1_8 == ((signed long int) WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_8 == ((signed long int) WrapperStruct00.var_1_11))))) && ((WrapperStruct00.var_1_7 >= WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_6 ? (WrapperStruct00.var_1_13 == ((signed short int) ((((WrapperStruct00.var_1_14) < (WrapperStruct00.var_1_15)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_15))))) : 1) : (WrapperStruct00.var_1_13 == ((signed short int) (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_17))))
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

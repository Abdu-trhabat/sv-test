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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch88Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 signed char var_1_2;
 signed char var_1_3;
 signed long int var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 signed char var_1_7;
 signed long int var_1_8;
 float var_1_9;
 unsigned short int var_1_10;
 signed long int var_1_11;
 signed short int var_1_12;
 float var_1_13;
 float var_1_14;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -8,
 -128,
 10,
 32,
 0,
 1,
 -1,
 -1000000000,
 0.65,
 10,
 10,
 -4,
 1.6,
 10.25
};
signed long int last_1_WrapperStruct00_var_1_8 = -1000000000;
void initially(void) {
}
void step(void) {
 if (((WrapperStruct00.var_1_2 | WrapperStruct00.var_1_3) > WrapperStruct00.var_1_4) && WrapperStruct00.var_1_5) {
  if (WrapperStruct00.var_1_5 && WrapperStruct00.var_1_6) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
  } else {
   WrapperStruct00.var_1_1 = -25;
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
 }
 if (15.2f < WrapperStruct00.var_1_9) {
  if ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_10) > last_1_WrapperStruct00_var_1_8) {
   WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11);
  }
 } else {
  if (WrapperStruct00.var_1_10 > WrapperStruct00.var_1_4) {
   if (last_1_WrapperStruct00_var_1_8 == WrapperStruct00.var_1_10) {
    WrapperStruct00.var_1_8 = ((((((((WrapperStruct00.var_1_1) < 0 ) ? -(WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_1)))) > (-16)) ? (((((WrapperStruct00.var_1_1) < 0 ) ? -(WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_1)))) : (-16)));
   } else {
    WrapperStruct00.var_1_8 = WrapperStruct00.var_1_1;
   }
  }
 }
 signed long int stepLocal_0 = WrapperStruct00.var_1_4;
 if ((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_14) > WrapperStruct00.var_1_9) {
  if (WrapperStruct00.var_1_7 > stepLocal_0) {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_3;
  } else {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_1;
  }
 } else {
  WrapperStruct00.var_1_12 = WrapperStruct00.var_1_7;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 127);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 127);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 126);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 65535);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 2147483646);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
}
int property(void) {
 return (((((WrapperStruct00.var_1_2 | WrapperStruct00.var_1_3) > WrapperStruct00.var_1_4) && WrapperStruct00.var_1_5) ? ((WrapperStruct00.var_1_5 && WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_1 == ((signed char) -25))) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_7))) && ((15.2f < WrapperStruct00.var_1_9) ? (((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_10) > last_1_WrapperStruct00_var_1_8) ? (WrapperStruct00.var_1_8 == ((signed long int) (WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11))) : 1) : ((WrapperStruct00.var_1_10 > WrapperStruct00.var_1_4) ? ((last_1_WrapperStruct00_var_1_8 == WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_8 == ((signed long int) ((((((((WrapperStruct00.var_1_1) < 0 ) ? -(WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_1)))) > (-16)) ? (((((WrapperStruct00.var_1_1) < 0 ) ? -(WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_1)))) : (-16))))) : (WrapperStruct00.var_1_8 == ((signed long int) WrapperStruct00.var_1_1))) : 1))) && (((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_14) > WrapperStruct00.var_1_9) ? ((WrapperStruct00.var_1_7 > WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_3)) : (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_1))) : (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_7)))
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

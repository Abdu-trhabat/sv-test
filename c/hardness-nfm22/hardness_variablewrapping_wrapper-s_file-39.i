// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch39Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed short int var_1_2;
 signed short int var_1_3;
 signed short int var_1_4;
 signed short int var_1_5;
 signed long int var_1_6;
 float var_1_7;
 float var_1_8;
 float var_1_9;
 signed long int var_1_10;
 unsigned char var_1_11;
 signed long int var_1_12;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -5,
 0,
 1000,
 10,
 32,
 5,
 1.1,
 7.8,
 1.75,
 32,
 64,
 1230482582
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_1 = ((((((16) > (4)) ? (16) : (4))) + WrapperStruct00.var_1_2) - (WrapperStruct00.var_1_3 + ((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5)))));
 if (WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_1) {
  if (((((WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8))) < WrapperStruct00.var_1_9) {
   WrapperStruct00.var_1_6 = WrapperStruct00.var_1_3;
  } else {
   WrapperStruct00.var_1_6 = WrapperStruct00.var_1_1;
  }
 } else {
  WrapperStruct00.var_1_6 = WrapperStruct00.var_1_4;
 }
 signed long int stepLocal_1 = WrapperStruct00.var_1_6 + (WrapperStruct00.var_1_4 << WrapperStruct00.var_1_2);
 signed long int stepLocal_0 = WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_5);
 if (stepLocal_1 != WrapperStruct00.var_1_5) {
  if ((WrapperStruct00.var_1_3 / WrapperStruct00.var_1_11) < stepLocal_0) {
   WrapperStruct00.var_1_10 = ((((-256) < (((((WrapperStruct00.var_1_4) < (((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_2))))) ? (WrapperStruct00.var_1_4) : (((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_2)))))))) ? (-256) : (((((WrapperStruct00.var_1_4) < (((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_2))))) ? (WrapperStruct00.var_1_4) : (((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_2)))))))));
  } else {
   WrapperStruct00.var_1_10 = WrapperStruct00.var_1_4;
  }
 } else {
  WrapperStruct00.var_1_10 = WrapperStruct00.var_1_2;
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 16383);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 16383);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 16383);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 16383);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 255);
 assume_abort_if_not(WrapperStruct00.var_1_11 != 0);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
}
void updateLastVariables() {
}
int property() {
 return ((WrapperStruct00.var_1_1 == ((signed short int) ((((((16) > (4)) ? (16) : (4))) + WrapperStruct00.var_1_2) - (WrapperStruct00.var_1_3 + ((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))))))) && ((WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_1) ? ((((((WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8))) < WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_6 == ((signed long int) WrapperStruct00.var_1_3)) : (WrapperStruct00.var_1_6 == ((signed long int) WrapperStruct00.var_1_1))) : (WrapperStruct00.var_1_6 == ((signed long int) WrapperStruct00.var_1_4)))) && (((WrapperStruct00.var_1_6 + (WrapperStruct00.var_1_4 << WrapperStruct00.var_1_2)) != WrapperStruct00.var_1_5) ? (((WrapperStruct00.var_1_3 / WrapperStruct00.var_1_11) < (WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_10 == ((signed long int) ((((-256) < (((((WrapperStruct00.var_1_4) < (((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_2))))) ? (WrapperStruct00.var_1_4) : (((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_2)))))))) ? (-256) : (((((WrapperStruct00.var_1_4) < (((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_2))))) ? (WrapperStruct00.var_1_4) : (((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_2))))))))))) : (WrapperStruct00.var_1_10 == ((signed long int) WrapperStruct00.var_1_4))) : (WrapperStruct00.var_1_10 == ((signed long int) WrapperStruct00.var_1_2)))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 double var_1_3;
 double var_1_5;
 double var_1_6;
 double var_1_7;
 double var_1_8;
 float var_1_9;
 float var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 255.3,
 -0.9,
 128.5,
 9.186,
 31.75,
 9.6,
 499.2,
 1.5,
 0,
 1,
 0,
 1
};
float last_1_WrapperStruct00_var_1_10 = 1.5;
void initially(void) {
}
void step(void) {
 if (((- last_1_WrapperStruct00_var_1_10) / WrapperStruct00.var_1_3) != (last_1_WrapperStruct00_var_1_10 / WrapperStruct00.var_1_5)) {
  if (last_1_WrapperStruct00_var_1_10 != (((((WrapperStruct00.var_1_6) > (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_7))) - WrapperStruct00.var_1_8)) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_9;
  } else {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_9;
  }
 } else {
  WrapperStruct00.var_1_1 = 64.51f;
 }
 if (WrapperStruct00.var_1_1 > (((((WrapperStruct00.var_1_9 * 128.4)) > ((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_1))) ? ((WrapperStruct00.var_1_9 * 128.4)) : ((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_1))))) {
  WrapperStruct00.var_1_10 = 1.00000000000004E13f;
 } else {
  WrapperStruct00.var_1_10 = WrapperStruct00.var_1_9;
 }
 if (! (WrapperStruct00.var_1_3 <= WrapperStruct00.var_1_10)) {
  WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_12 && WrapperStruct00.var_1_13);
 } else {
  if ((WrapperStruct00.var_1_7 / WrapperStruct00.var_1_3) < ((((((((WrapperStruct00.var_1_8) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_6)))) < (WrapperStruct00.var_1_5)) ? (((((WrapperStruct00.var_1_8) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_6)))) : (WrapperStruct00.var_1_5)))) {
   WrapperStruct00.var_1_11 = WrapperStruct00.var_1_14;
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_3 != 0.0F);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_5 != 0.0F);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 0);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property() {
 return (((((- last_1_WrapperStruct00_var_1_10) / WrapperStruct00.var_1_3) != (last_1_WrapperStruct00_var_1_10 / WrapperStruct00.var_1_5)) ? ((last_1_WrapperStruct00_var_1_10 != (((((WrapperStruct00.var_1_6) > (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_7))) - WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_9)) : (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_9))) : (WrapperStruct00.var_1_1 == ((float) 64.51f))) && ((WrapperStruct00.var_1_1 > (((((WrapperStruct00.var_1_9 * 128.4)) > ((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_1))) ? ((WrapperStruct00.var_1_9 * 128.4)) : ((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_1))))) ? (WrapperStruct00.var_1_10 == ((float) 1.00000000000004E13f)) : (WrapperStruct00.var_1_10 == ((float) WrapperStruct00.var_1_9)))) && ((! (WrapperStruct00.var_1_3 <= WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_11 == ((unsigned char) (WrapperStruct00.var_1_12 && WrapperStruct00.var_1_13))) : (((WrapperStruct00.var_1_7 / WrapperStruct00.var_1_3) < ((((((((WrapperStruct00.var_1_8) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_6)))) < (WrapperStruct00.var_1_5)) ? (((((WrapperStruct00.var_1_8) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_6)))) : (WrapperStruct00.var_1_5)))) ? (WrapperStruct00.var_1_11 == ((unsigned char) WrapperStruct00.var_1_14)) : 1))
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

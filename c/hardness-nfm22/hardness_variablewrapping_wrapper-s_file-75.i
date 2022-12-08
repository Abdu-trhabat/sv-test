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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_7;
 signed long int var_1_8;
 double var_1_10;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
 float var_1_18;
 float var_1_19;
 signed char var_1_20;
 signed char var_1_21;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 32,
 32,
 -100,
 5.95,
 128,
 200,
 8,
 0,
 128,
 1,
 2.25,
 16.875,
 -4,
 10
};
signed long int last_1_WrapperStruct00_var_1_8 = -100;
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_18 = WrapperStruct00.var_1_19;
 WrapperStruct00.var_1_20 = WrapperStruct00.var_1_21;
 if ((WrapperStruct00.var_1_18 / WrapperStruct00.var_1_10) >= (WrapperStruct00.var_1_18 / 128.6)) {
  WrapperStruct00.var_1_8 = ((WrapperStruct00.var_1_20 + (WrapperStruct00.var_1_7 + last_1_WrapperStruct00_var_1_8)) - WrapperStruct00.var_1_20);
 } else {
  if (WrapperStruct00.var_1_18 <= WrapperStruct00.var_1_10) {
   WrapperStruct00.var_1_8 = 256;
  } else {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_20;
  }
 }
 signed long int stepLocal_0 = (WrapperStruct00.var_1_8 * WrapperStruct00.var_1_20) * WrapperStruct00.var_1_8;
 if (stepLocal_0 < ((((WrapperStruct00.var_1_20) > (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_20) : (WrapperStruct00.var_1_8)))) {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
 }
 if ((WrapperStruct00.var_1_1 == (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_14)) && WrapperStruct00.var_1_15) {
  if (WrapperStruct00.var_1_15) {
   WrapperStruct00.var_1_12 = (((((WrapperStruct00.var_1_16 - WrapperStruct00.var_1_14)) > (WrapperStruct00.var_1_7)) ? ((WrapperStruct00.var_1_16 - WrapperStruct00.var_1_14)) : (WrapperStruct00.var_1_7)));
  }
 } else {
  WrapperStruct00.var_1_12 = WrapperStruct00.var_1_17;
 }
}
void updateVariables() {
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 254);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_10 != 0.0F);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 255);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 254);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 254);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_19 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_19 <= -1.0e-20F) || (WrapperStruct00.var_1_19 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_19 >= 1.0e-20F ));
 WrapperStruct00.var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_21 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_21 <= 126);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
}
int property() {
 return (((((((WrapperStruct00.var_1_8 * WrapperStruct00.var_1_20) * WrapperStruct00.var_1_8) < ((((WrapperStruct00.var_1_20) > (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_20) : (WrapperStruct00.var_1_8)))) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_7))) && (((WrapperStruct00.var_1_18 / WrapperStruct00.var_1_10) >= (WrapperStruct00.var_1_18 / 128.6)) ? (WrapperStruct00.var_1_8 == ((signed long int) ((WrapperStruct00.var_1_20 + (WrapperStruct00.var_1_7 + last_1_WrapperStruct00_var_1_8)) - WrapperStruct00.var_1_20))) : ((WrapperStruct00.var_1_18 <= WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_8 == ((signed long int) 256)) : (WrapperStruct00.var_1_8 == ((signed long int) WrapperStruct00.var_1_20))))) && (((WrapperStruct00.var_1_1 == (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_14)) && WrapperStruct00.var_1_15) ? (WrapperStruct00.var_1_15 ? (WrapperStruct00.var_1_12 == ((unsigned char) (((((WrapperStruct00.var_1_16 - WrapperStruct00.var_1_14)) > (WrapperStruct00.var_1_7)) ? ((WrapperStruct00.var_1_16 - WrapperStruct00.var_1_14)) : (WrapperStruct00.var_1_7))))) : 1) : (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_17)))) && (WrapperStruct00.var_1_18 == ((float) WrapperStruct00.var_1_19))) && (WrapperStruct00.var_1_20 == ((signed char) WrapperStruct00.var_1_21))
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

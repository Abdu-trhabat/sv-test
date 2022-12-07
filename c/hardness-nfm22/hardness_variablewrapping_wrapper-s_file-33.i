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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed short int var_1_5;
 unsigned char var_1_7;
 unsigned char var_1_8;
 float var_1_9;
 float var_1_10;
 float var_1_11;
 float var_1_12;
 signed long int var_1_13;
 unsigned char var_1_14;
 float var_1_15;
 signed long int var_1_16;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -10,
 4,
 200,
 32,
 256.5,
 -0.25,
 0.30000000000000004,
 49.5,
 -8,
 0,
 0.4,
 -256
};
signed long int last_1_WrapperStruct00_var_1_13 = -8;
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_5 < last_1_WrapperStruct00_var_1_13) {
  WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_8 + 1);
 }
 WrapperStruct00.var_1_16 = WrapperStruct00.var_1_7;
 unsigned char stepLocal_1 = WrapperStruct00.var_1_7;
 if (! WrapperStruct00.var_1_14) {
  WrapperStruct00.var_1_13 = WrapperStruct00.var_1_8;
 } else {
  if (stepLocal_1 > (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_7)) {
   WrapperStruct00.var_1_13 = WrapperStruct00.var_1_7;
  } else {
   WrapperStruct00.var_1_13 = WrapperStruct00.var_1_16;
  }
 }
 WrapperStruct00.var_1_15 = WrapperStruct00.var_1_11;
 signed long int stepLocal_0 = (WrapperStruct00.var_1_13 ^ WrapperStruct00.var_1_7) + WrapperStruct00.var_1_16;
 if (stepLocal_0 < -1) {
  WrapperStruct00.var_1_1 = 8;
 } else {
  WrapperStruct00.var_1_1 = (128 - (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_7));
 }
 if (WrapperStruct00.var_1_7 < (WrapperStruct00.var_1_13 & (WrapperStruct00.var_1_7 | WrapperStruct00.var_1_16))) {
  WrapperStruct00.var_1_9 = ((((WrapperStruct00.var_1_10 + (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12)) < 0 ) ? -(WrapperStruct00.var_1_10 + (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_10 + (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12))));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 16383);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
}
int property() {
 return ((((((((WrapperStruct00.var_1_13 ^ WrapperStruct00.var_1_7) + WrapperStruct00.var_1_16) < -1) ? (WrapperStruct00.var_1_1 == ((signed short int) 8)) : (WrapperStruct00.var_1_1 == ((signed short int) (128 - (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_7))))) && ((WrapperStruct00.var_1_5 < last_1_WrapperStruct00_var_1_13) ? (WrapperStruct00.var_1_7 == ((unsigned char) (WrapperStruct00.var_1_8 + 1))) : 1)) && ((WrapperStruct00.var_1_7 < (WrapperStruct00.var_1_13 & (WrapperStruct00.var_1_7 | WrapperStruct00.var_1_16))) ? (WrapperStruct00.var_1_9 == ((float) ((((WrapperStruct00.var_1_10 + (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12)) < 0 ) ? -(WrapperStruct00.var_1_10 + (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_10 + (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12)))))) : 1)) && ((! WrapperStruct00.var_1_14) ? (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_8)) : ((WrapperStruct00.var_1_7 > (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_16))))) && (WrapperStruct00.var_1_15 == ((float) WrapperStruct00.var_1_11))) && (WrapperStruct00.var_1_16 == ((signed long int) WrapperStruct00.var_1_7))
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

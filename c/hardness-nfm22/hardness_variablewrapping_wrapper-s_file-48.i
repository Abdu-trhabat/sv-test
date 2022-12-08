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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 float var_1_2;
 float var_1_3;
 float var_1_4;
 float var_1_5;
 float var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
 unsigned char var_1_18;
 unsigned char var_1_19;
 unsigned long int var_1_20;
 signed long int var_1_21;
 unsigned char var_1_22;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 32.8,
 255.675,
 5.5,
 128.75,
 4.5,
 9.25,
 5,
 200,
 8,
 4,
 100,
 64,
 1,
 200,
 2,
 0,
 1,
 64,
 100
};
unsigned char last_1_WrapperStruct00_var_1_7 = 5;
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) {
  if (WrapperStruct00.var_1_3 < ((WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5) + 1.395f)) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
  } else {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
 }
 WrapperStruct00.var_1_20 = WrapperStruct00.var_1_14;
 WrapperStruct00.var_1_21 = WrapperStruct00.var_1_17;
 WrapperStruct00.var_1_22 = 4;
 signed long int stepLocal_0 = WrapperStruct00.var_1_21;
 if (((WrapperStruct00.var_1_17 - WrapperStruct00.var_1_12) - (8 + WrapperStruct00.var_1_18)) > stepLocal_0) {
  WrapperStruct00.var_1_16 = (! WrapperStruct00.var_1_19);
 } else {
  WrapperStruct00.var_1_16 = WrapperStruct00.var_1_19;
 }
 if (WrapperStruct00.var_1_16) {
  if (last_1_WrapperStruct00_var_1_7 != last_1_WrapperStruct00_var_1_7) {
   WrapperStruct00.var_1_7 = ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) - WrapperStruct00.var_1_13);
  } else {
   WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_11 - (((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_15)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_15))) - WrapperStruct00.var_1_12));
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 190);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 254);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 63);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 191);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 255);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 63);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 0);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_7 = WrapperStruct00.var_1_7;
}
int property() {
 return ((((((WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) ? ((WrapperStruct00.var_1_3 < ((WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5) + 1.395f)) ? (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6))) : (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6))) && (WrapperStruct00.var_1_16 ? ((last_1_WrapperStruct00_var_1_7 != last_1_WrapperStruct00_var_1_7) ? (WrapperStruct00.var_1_7 == ((unsigned char) ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) - WrapperStruct00.var_1_13))) : (WrapperStruct00.var_1_7 == ((unsigned char) (WrapperStruct00.var_1_11 - (((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_15)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_15))) - WrapperStruct00.var_1_12))))) : 1)) && ((((WrapperStruct00.var_1_17 - WrapperStruct00.var_1_12) - (8 + WrapperStruct00.var_1_18)) > WrapperStruct00.var_1_21) ? (WrapperStruct00.var_1_16 == ((unsigned char) (! WrapperStruct00.var_1_19))) : (WrapperStruct00.var_1_16 == ((unsigned char) WrapperStruct00.var_1_19)))) && (WrapperStruct00.var_1_20 == ((unsigned long int) WrapperStruct00.var_1_14))) && (WrapperStruct00.var_1_21 == ((signed long int) WrapperStruct00.var_1_17))) && (WrapperStruct00.var_1_22 == ((unsigned char) 4))
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

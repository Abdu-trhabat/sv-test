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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch68Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 float var_1_2;
 float var_1_3;
 signed long int var_1_8;
 unsigned char var_1_9;
 double var_1_10;
 double var_1_11;
 double var_1_12;
 signed short int var_1_13;
 signed short int var_1_14;
 signed short int var_1_15;
 signed short int var_1_16;
 signed long int var_1_17;
 unsigned long int var_1_18;
 unsigned long int var_1_19;
 float var_1_20;
 signed long int var_1_21;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 32,
 64.5,
 16.8,
 10,
 0,
 25.5,
 9999999999999.729,
 999.8,
 -25,
 -64,
 0,
 -8,
 5,
 0,
 8,
 32.375,
 -10
};
signed short int last_1_WrapperStruct00_var_1_13 = -25;
signed long int last_1_WrapperStruct00_var_1_17 = 5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = WrapperStruct00.var_1_8 + last_1_WrapperStruct00_var_1_17;
 if (WrapperStruct00.var_1_9) {
  if (last_1_WrapperStruct00_var_1_13 <= stepLocal_2) {
   WrapperStruct00.var_1_13 = ((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15) + WrapperStruct00.var_1_16);
  } else {
   WrapperStruct00.var_1_13 = WrapperStruct00.var_1_15;
  }
 } else {
  WrapperStruct00.var_1_13 = WrapperStruct00.var_1_15;
 }
 WrapperStruct00.var_1_17 = (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14);
 WrapperStruct00.var_1_18 = WrapperStruct00.var_1_19;
 WrapperStruct00.var_1_20 = WrapperStruct00.var_1_12;
 WrapperStruct00.var_1_21 = WrapperStruct00.var_1_17;
 signed long int stepLocal_1 = WrapperStruct00.var_1_17;
 if (stepLocal_1 != WrapperStruct00.var_1_21) {
  WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12);
 }
 unsigned long int stepLocal_0 = WrapperStruct00.var_1_18 + WrapperStruct00.var_1_21;
 if ((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) >= WrapperStruct00.var_1_10) {
  if (stepLocal_0 >= (WrapperStruct00.var_1_13 / WrapperStruct00.var_1_8)) {
   WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_21) < 0 ) ? -(WrapperStruct00.var_1_21) : (WrapperStruct00.var_1_21)));
  }
 } else {
  if (WrapperStruct00.var_1_9) {
   WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_21) > (WrapperStruct00.var_1_18)) ? (WrapperStruct00.var_1_21) : (WrapperStruct00.var_1_18)));
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -8191);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 8192);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -8191);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 8191);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 16383);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 4294967294);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
 last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}
int property() {
 return ((((((((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) >= WrapperStruct00.var_1_10) ? (((WrapperStruct00.var_1_18 + WrapperStruct00.var_1_21) >= (WrapperStruct00.var_1_13 / WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_1 == ((signed long int) ((((WrapperStruct00.var_1_21) < 0 ) ? -(WrapperStruct00.var_1_21) : (WrapperStruct00.var_1_21))))) : 1) : (WrapperStruct00.var_1_9 ? (WrapperStruct00.var_1_1 == ((signed long int) ((((WrapperStruct00.var_1_21) > (WrapperStruct00.var_1_18)) ? (WrapperStruct00.var_1_21) : (WrapperStruct00.var_1_18))))) : 1)) && ((WrapperStruct00.var_1_17 != WrapperStruct00.var_1_21) ? (WrapperStruct00.var_1_10 == ((double) (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12))) : 1)) && (WrapperStruct00.var_1_9 ? ((last_1_WrapperStruct00_var_1_13 <= (WrapperStruct00.var_1_8 + last_1_WrapperStruct00_var_1_17)) ? (WrapperStruct00.var_1_13 == ((signed short int) ((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15) + WrapperStruct00.var_1_16))) : (WrapperStruct00.var_1_13 == ((signed short int) WrapperStruct00.var_1_15))) : (WrapperStruct00.var_1_13 == ((signed short int) WrapperStruct00.var_1_15)))) && (WrapperStruct00.var_1_17 == ((signed long int) (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14)))) && (WrapperStruct00.var_1_18 == ((unsigned long int) WrapperStruct00.var_1_19))) && (WrapperStruct00.var_1_20 == ((float) WrapperStruct00.var_1_12))) && (WrapperStruct00.var_1_21 == ((signed long int) WrapperStruct00.var_1_17))
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

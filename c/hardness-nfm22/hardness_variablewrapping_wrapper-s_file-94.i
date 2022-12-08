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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch94Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 float var_1_2;
 float var_1_3;
 double var_1_4;
 double var_1_5;
 double var_1_6;
 unsigned char var_1_7;
 double var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 signed char var_1_11;
 signed char var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 signed long int var_1_17;
 unsigned char var_1_18;
 unsigned char var_1_19;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 63.4,
 25.2,
 3.75,
 0.0,
 63.4,
 3.7,
 0,
 63.75,
 0,
 0,
 -64,
 -32,
 2,
 -4,
 -25,
 5,
 -2,
 2,
 16
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2 != WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5) - WrapperStruct00.var_1_6);
 }
 if (WrapperStruct00.var_1_5 > (WrapperStruct00.var_1_1 / WrapperStruct00.var_1_4)) {
  if (WrapperStruct00.var_1_5 > (WrapperStruct00.var_1_4 / WrapperStruct00.var_1_8)) {
   WrapperStruct00.var_1_7 = WrapperStruct00.var_1_9;
  } else {
   WrapperStruct00.var_1_7 = WrapperStruct00.var_1_10;
  }
 }
 if (WrapperStruct00.var_1_10 || WrapperStruct00.var_1_9) {
  WrapperStruct00.var_1_11 = WrapperStruct00.var_1_12;
 } else {
  WrapperStruct00.var_1_11 = (((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))) + (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16));
 }
 signed char stepLocal_0 = WrapperStruct00.var_1_15;
 if (WrapperStruct00.var_1_6 > WrapperStruct00.var_1_5) {
  if (WrapperStruct00.var_1_1 != (WrapperStruct00.var_1_4 / WrapperStruct00.var_1_8)) {
   if ((WrapperStruct00.var_1_11 % (WrapperStruct00.var_1_18 + WrapperStruct00.var_1_19)) > stepLocal_0) {
    WrapperStruct00.var_1_17 = -64;
   }
  }
 } else {
  WrapperStruct00.var_1_17 = WrapperStruct00.var_1_13;
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= 4611686.018427382800e+12F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_8 != 0.0F);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 0);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 63);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -31);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 32);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -31);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 31);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 128);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 127);
}
void updateLastVariables() {
}
int property() {
 return ((((WrapperStruct00.var_1_2 != WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((double) ((WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5) - WrapperStruct00.var_1_6))) : 1) && ((WrapperStruct00.var_1_5 > (WrapperStruct00.var_1_1 / WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_5 > (WrapperStruct00.var_1_4 / WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_7 == ((unsigned char) WrapperStruct00.var_1_9)) : (WrapperStruct00.var_1_7 == ((unsigned char) WrapperStruct00.var_1_10))) : 1)) && ((WrapperStruct00.var_1_10 || WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_11 == ((signed char) (((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))) + (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16)))))) && ((WrapperStruct00.var_1_6 > WrapperStruct00.var_1_5) ? ((WrapperStruct00.var_1_1 != (WrapperStruct00.var_1_4 / WrapperStruct00.var_1_8)) ? (((WrapperStruct00.var_1_11 % (WrapperStruct00.var_1_18 + WrapperStruct00.var_1_19)) > WrapperStruct00.var_1_15) ? (WrapperStruct00.var_1_17 == ((signed long int) -64)) : 1) : 1) : (WrapperStruct00.var_1_17 == ((signed long int) WrapperStruct00.var_1_13)))
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

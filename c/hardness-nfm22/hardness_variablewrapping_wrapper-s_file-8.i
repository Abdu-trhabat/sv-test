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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 signed long int var_1_8;
 float var_1_12;
 float var_1_13;
 float var_1_14;
 float var_1_15;
 float var_1_16;
 float var_1_17;
 signed long int var_1_18;
 unsigned char var_1_19;
 unsigned char var_1_20;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 0,
 0,
 0,
 0,
 64,
 2.4,
 127.75,
 0.0,
 31.4,
 256.75,
 256.6,
 0,
 32,
 100
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_17 = WrapperStruct00.var_1_14;
 WrapperStruct00.var_1_19 = WrapperStruct00.var_1_20;
 WrapperStruct00.var_1_18 = WrapperStruct00.var_1_19;
 unsigned char stepLocal_1 = WrapperStruct00.var_1_19;
 signed long int stepLocal_0 = (WrapperStruct00.var_1_18 * WrapperStruct00.var_1_18) * (WrapperStruct00.var_1_19 - WrapperStruct00.var_1_19);
 if (stepLocal_0 >= 1u) {
  if (WrapperStruct00.var_1_18 <= stepLocal_1) {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_19;
  } else {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_19;
  }
 } else {
  WrapperStruct00.var_1_8 = WrapperStruct00.var_1_19;
 }
 signed long int stepLocal_2 = WrapperStruct00.var_1_8;
 if (WrapperStruct00.var_1_19 > stepLocal_2) {
  WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_13 + ((WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15) - WrapperStruct00.var_1_16));
 } else {
  WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_16 - (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15));
 }
 if (WrapperStruct00.var_1_18 >= (8u * WrapperStruct00.var_1_8)) {
  WrapperStruct00.var_1_1 = (! (WrapperStruct00.var_1_4 || (WrapperStruct00.var_1_5 || WrapperStruct00.var_1_6)));
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
 }
}
void updateVariables() {
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
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 2305843.009213691390e+12F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 2305843.009213691390e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= 0.0F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
 WrapperStruct00.var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_20 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_20 <= 254);
}
void updateLastVariables() {
}
int property() {
 return ((((((WrapperStruct00.var_1_18 >= (8u * WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_1 == ((unsigned char) (! (WrapperStruct00.var_1_4 || (WrapperStruct00.var_1_5 || WrapperStruct00.var_1_6))))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_7))) && ((((WrapperStruct00.var_1_18 * WrapperStruct00.var_1_18) * (WrapperStruct00.var_1_19 - WrapperStruct00.var_1_19)) >= 1u) ? ((WrapperStruct00.var_1_18 <= WrapperStruct00.var_1_19) ? (WrapperStruct00.var_1_8 == ((signed long int) WrapperStruct00.var_1_19)) : (WrapperStruct00.var_1_8 == ((signed long int) WrapperStruct00.var_1_19))) : (WrapperStruct00.var_1_8 == ((signed long int) WrapperStruct00.var_1_19)))) && ((WrapperStruct00.var_1_19 > WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_12 == ((float) (WrapperStruct00.var_1_13 + ((WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15) - WrapperStruct00.var_1_16)))) : (WrapperStruct00.var_1_12 == ((float) (WrapperStruct00.var_1_16 - (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)))))) && (WrapperStruct00.var_1_17 == ((float) WrapperStruct00.var_1_14))) && (WrapperStruct00.var_1_18 == ((signed long int) WrapperStruct00.var_1_19))) && (WrapperStruct00.var_1_19 == ((unsigned char) WrapperStruct00.var_1_20))
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

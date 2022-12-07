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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch41Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 unsigned char var_1_5;
 signed char var_1_6;
 signed char var_1_7;
 unsigned short int var_1_8;
 unsigned char var_1_11;
 double var_1_12;
 double var_1_13;
 signed long int var_1_14;
 signed char var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -16,
 0,
 -8,
 5,
 2,
 0,
 8.5,
 999999999999.6,
 10,
 -1,
 16,
 64
};
signed char last_1_WrapperStruct00_var_1_1 = -16;
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_5 && (last_1_WrapperStruct00_var_1_1 <= last_1_WrapperStruct00_var_1_1)) {
  WrapperStruct00.var_1_16 = WrapperStruct00.var_1_17;
 }
 WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_13 - 8.3);
 unsigned char stepLocal_1 = WrapperStruct00.var_1_13 >= WrapperStruct00.var_1_12;
 if (WrapperStruct00.var_1_5 && stepLocal_1) {
  WrapperStruct00.var_1_14 = WrapperStruct00.var_1_16;
 } else {
  WrapperStruct00.var_1_14 = WrapperStruct00.var_1_15;
 }
 if (WrapperStruct00.var_1_5) {
  WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_16);
 } else {
  if ((WrapperStruct00.var_1_16 > WrapperStruct00.var_1_14) || WrapperStruct00.var_1_11) {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_16;
  } else {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_16;
  }
 }
 unsigned long int stepLocal_0 = (WrapperStruct00.var_1_8 & 0u) * WrapperStruct00.var_1_16;
 if (stepLocal_0 > WrapperStruct00.var_1_8) {
  if (WrapperStruct00.var_1_5) {
   WrapperStruct00.var_1_1 = ((16 + WrapperStruct00.var_1_6) + WrapperStruct00.var_1_7);
  } else {
   WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_6) < 0 ) ? -(WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_6)));
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
 }
}
void updateVariables() {
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -31);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 31);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
 assume_abort_if_not(WrapperStruct00.var_1_15 != 0);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 254);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}
int property() {
 return (((((((WrapperStruct00.var_1_8 & 0u) * WrapperStruct00.var_1_16) > WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_5 ? (WrapperStruct00.var_1_1 == ((signed char) ((16 + WrapperStruct00.var_1_6) + WrapperStruct00.var_1_7))) : (WrapperStruct00.var_1_1 == ((signed char) ((((WrapperStruct00.var_1_6) < 0 ) ? -(WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_6)))))) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_6))) && (WrapperStruct00.var_1_5 ? (WrapperStruct00.var_1_8 == ((unsigned short int) (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_16))) : (((WrapperStruct00.var_1_16 > WrapperStruct00.var_1_14) || WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_8 == ((unsigned short int) WrapperStruct00.var_1_16)) : (WrapperStruct00.var_1_8 == ((unsigned short int) WrapperStruct00.var_1_16))))) && (WrapperStruct00.var_1_12 == ((double) (WrapperStruct00.var_1_13 - 8.3)))) && ((WrapperStruct00.var_1_5 && (WrapperStruct00.var_1_13 >= WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_14 == ((signed long int) WrapperStruct00.var_1_16)) : (WrapperStruct00.var_1_14 == ((signed long int) WrapperStruct00.var_1_15)))) && ((WrapperStruct00.var_1_5 && (last_1_WrapperStruct00_var_1_1 <= last_1_WrapperStruct00_var_1_1)) ? (WrapperStruct00.var_1_16 == ((unsigned char) WrapperStruct00.var_1_17)) : 1)
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

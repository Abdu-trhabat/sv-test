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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch19Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned long int var_1_4;
 unsigned long int var_1_5;
 signed char var_1_7;
 signed char var_1_8;
 unsigned char var_1_9;
 signed long int var_1_10;
 signed long int var_1_11;
 signed long int var_1_12;
 signed long int var_1_13;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 8,
 128,
 64,
 1,
 5,
 4,
 100,
 1,
 -8,
 10,
 -25,
 -16
};
signed long int last_1_WrapperStruct00_var_1_11 = 10;
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_7 < WrapperStruct00.var_1_3) {
  if (last_1_WrapperStruct00_var_1_11 > WrapperStruct00.var_1_7) {
   WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_8);
  }
 } else {
  if ((WrapperStruct00.var_1_8 + ((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) > WrapperStruct00.var_1_7) {
   WrapperStruct00.var_1_10 = WrapperStruct00.var_1_8;
  }
 }
 WrapperStruct00.var_1_13 = WrapperStruct00.var_1_7;
 signed long int stepLocal_1 = WrapperStruct00.var_1_2 / WrapperStruct00.var_1_12;
 if (((WrapperStruct00.var_1_10 * WrapperStruct00.var_1_13) + WrapperStruct00.var_1_8) > stepLocal_1) {
  if (WrapperStruct00.var_1_9) {
   WrapperStruct00.var_1_11 = WrapperStruct00.var_1_2;
  }
 } else {
  WrapperStruct00.var_1_11 = WrapperStruct00.var_1_7;
 }
 signed long int stepLocal_0 = WrapperStruct00.var_1_11;
 if (((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) << (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5)) <= stepLocal_0) {
  WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_4) > (((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8))))) ? (WrapperStruct00.var_1_4) : (((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8))))));
 } else {
  if (WrapperStruct00.var_1_9) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 255);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 127);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 12);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 11);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 126);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_12 != 0);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
}
int property() {
 return ((((((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) << (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5)) <= WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_1 == ((signed char) ((((WrapperStruct00.var_1_4) > (((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8))))) ? (WrapperStruct00.var_1_4) : (((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8)))))))) : (WrapperStruct00.var_1_9 ? (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_5)) : 1)) && ((WrapperStruct00.var_1_7 < WrapperStruct00.var_1_3) ? ((last_1_WrapperStruct00_var_1_11 > WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_10 == ((signed long int) (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_8))) : 1) : (((WrapperStruct00.var_1_8 + ((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) > WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_10 == ((signed long int) WrapperStruct00.var_1_8)) : 1))) && ((((WrapperStruct00.var_1_10 * WrapperStruct00.var_1_13) + WrapperStruct00.var_1_8) > (WrapperStruct00.var_1_2 / WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_9 ? (WrapperStruct00.var_1_11 == ((signed long int) WrapperStruct00.var_1_2)) : 1) : (WrapperStruct00.var_1_11 == ((signed long int) WrapperStruct00.var_1_7)))) && (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_7))
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

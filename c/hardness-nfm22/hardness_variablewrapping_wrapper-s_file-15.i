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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch15Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_6;
 signed char var_1_7;
 unsigned long int var_1_8;
 unsigned long int var_1_9;
 signed long int var_1_10;
 double var_1_11;
 double var_1_12;
 double var_1_13;
 double var_1_14;
 double var_1_15;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -128,
 1,
 1,
 8,
 1,
 1885310857,
 -10,
 32.6,
 9.75,
 5.1,
 128.1,
 63.9
};
signed long int last_1_WrapperStruct00_var_1_10 = -10;
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_8 = ((1514707036u + ((((WrapperStruct00.var_1_9) < 0 ) ? -(WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_9)))) - last_1_WrapperStruct00_var_1_10);
 } else {
  WrapperStruct00.var_1_8 = ((((last_1_WrapperStruct00_var_1_10) > (WrapperStruct00.var_1_9)) ? (last_1_WrapperStruct00_var_1_10) : (WrapperStruct00.var_1_9)));
 }
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_8 + ((((WrapperStruct00.var_1_7) < 0 ) ? -(WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_7))));
 }
 unsigned char stepLocal_1 = WrapperStruct00.var_1_2;
 signed long int stepLocal_0 = WrapperStruct00.var_1_10;
 if (stepLocal_1 || ((~ WrapperStruct00.var_1_10) >= WrapperStruct00.var_1_10)) {
  if (stepLocal_0 < WrapperStruct00.var_1_8) {
   if (! WrapperStruct00.var_1_6) {
    WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
   }
  } else {
   WrapperStruct00.var_1_1 = 2;
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
 }
 if (WrapperStruct00.var_1_1 >= WrapperStruct00.var_1_1) {
  WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_12 - (((((WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14)) > (WrapperStruct00.var_1_15)) ? ((WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14)) : (WrapperStruct00.var_1_15))));
 } else {
  WrapperStruct00.var_1_11 = ((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_13)));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 126);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 1073741824);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property() {
 return ((((WrapperStruct00.var_1_2 || ((~ WrapperStruct00.var_1_10) >= WrapperStruct00.var_1_10)) ? ((WrapperStruct00.var_1_10 < WrapperStruct00.var_1_8) ? ((! WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_7)) : 1) : (WrapperStruct00.var_1_1 == ((signed char) 2))) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_7))) && (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_8 == ((unsigned long int) ((1514707036u + ((((WrapperStruct00.var_1_9) < 0 ) ? -(WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_9)))) - last_1_WrapperStruct00_var_1_10))) : (WrapperStruct00.var_1_8 == ((unsigned long int) ((((last_1_WrapperStruct00_var_1_10) > (WrapperStruct00.var_1_9)) ? (last_1_WrapperStruct00_var_1_10) : (WrapperStruct00.var_1_9))))))) && (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_10 == ((signed long int) (WrapperStruct00.var_1_8 + ((((WrapperStruct00.var_1_7) < 0 ) ? -(WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_7)))))) : 1)) && ((WrapperStruct00.var_1_1 >= WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_11 == ((double) (WrapperStruct00.var_1_12 - (((((WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14)) > (WrapperStruct00.var_1_15)) ? ((WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14)) : (WrapperStruct00.var_1_15)))))) : (WrapperStruct00.var_1_11 == ((double) ((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_13))))))
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

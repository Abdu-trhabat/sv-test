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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch83Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned char var_1_2;
 unsigned short int var_1_3;
 unsigned char var_1_4;
 double var_1_8;
 double var_1_10;
 double var_1_11;
 double var_1_12;
 signed short int var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 double var_1_17;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 128,
 0,
 25,
 4,
 127.625,
 0.8,
 128.75,
 24.8,
 -128,
 64,
 5,
 1.5
};
unsigned short int last_1_WrapperStruct00_var_1_1 = 128;
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_14 = 200;
 WrapperStruct00.var_1_15 = WrapperStruct00.var_1_16;
 WrapperStruct00.var_1_17 = WrapperStruct00.var_1_10;
 signed long int stepLocal_0 = WrapperStruct00.var_1_3 / WrapperStruct00.var_1_4;
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_1 = (((((((WrapperStruct00.var_1_3) < 0 ) ? -(WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_3))) < 0 ) ? -((((WrapperStruct00.var_1_3) < 0 ) ? -(WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_3))) : ((((WrapperStruct00.var_1_3) < 0 ) ? -(WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_3)))));
 } else {
  if (stepLocal_0 >= (((((last_1_WrapperStruct00_var_1_1 * WrapperStruct00.var_1_15)) < ((~ last_1_WrapperStruct00_var_1_1))) ? ((last_1_WrapperStruct00_var_1_1 * WrapperStruct00.var_1_15)) : ((~ last_1_WrapperStruct00_var_1_1))))) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
  } else {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
  }
 }
 signed long int stepLocal_2 = WrapperStruct00.var_1_3 + WrapperStruct00.var_1_1;
 signed long int stepLocal_1 = WrapperStruct00.var_1_14 ^ WrapperStruct00.var_1_15;
 if (WrapperStruct00.var_1_15 <= stepLocal_2) {
  if (WrapperStruct00.var_1_1 == stepLocal_1) {
   WrapperStruct00.var_1_8 = (((((WrapperStruct00.var_1_10) < 0 ) ? -(WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_10))) + WrapperStruct00.var_1_11);
  } else {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_11;
  }
 } else {
  WrapperStruct00.var_1_8 = WrapperStruct00.var_1_10;
 }
 if (WrapperStruct00.var_1_15 > WrapperStruct00.var_1_15) {
  WrapperStruct00.var_1_12 = ((((WrapperStruct00.var_1_11) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_10)));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 65534);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 255);
 assume_abort_if_not(WrapperStruct00.var_1_4 != 0);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 126);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}
int property() {
 return (((((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((unsigned short int) (((((((WrapperStruct00.var_1_3) < 0 ) ? -(WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_3))) < 0 ) ? -((((WrapperStruct00.var_1_3) < 0 ) ? -(WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_3))) : ((((WrapperStruct00.var_1_3) < 0 ) ? -(WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_3))))))) : (((WrapperStruct00.var_1_3 / WrapperStruct00.var_1_4) >= (((((last_1_WrapperStruct00_var_1_1 * WrapperStruct00.var_1_15)) < ((~ last_1_WrapperStruct00_var_1_1))) ? ((last_1_WrapperStruct00_var_1_1 * WrapperStruct00.var_1_15)) : ((~ last_1_WrapperStruct00_var_1_1))))) ? (WrapperStruct00.var_1_1 == ((unsigned short int) WrapperStruct00.var_1_4)) : (WrapperStruct00.var_1_1 == ((unsigned short int) WrapperStruct00.var_1_3)))) && ((WrapperStruct00.var_1_15 <= (WrapperStruct00.var_1_3 + WrapperStruct00.var_1_1)) ? ((WrapperStruct00.var_1_1 == (WrapperStruct00.var_1_14 ^ WrapperStruct00.var_1_15)) ? (WrapperStruct00.var_1_8 == ((double) (((((WrapperStruct00.var_1_10) < 0 ) ? -(WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_10))) + WrapperStruct00.var_1_11))) : (WrapperStruct00.var_1_8 == ((double) WrapperStruct00.var_1_11))) : (WrapperStruct00.var_1_8 == ((double) WrapperStruct00.var_1_10)))) && ((WrapperStruct00.var_1_15 > WrapperStruct00.var_1_15) ? (WrapperStruct00.var_1_12 == ((double) ((((WrapperStruct00.var_1_11) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_10))))) : 1)) && (WrapperStruct00.var_1_14 == ((signed short int) 200))) && (WrapperStruct00.var_1_15 == ((signed char) WrapperStruct00.var_1_16))) && (WrapperStruct00.var_1_17 == ((double) WrapperStruct00.var_1_10))
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

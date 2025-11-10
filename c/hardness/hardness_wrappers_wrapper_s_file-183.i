// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 double var_1_2;
 double var_1_3;
 double var_1_4;
 unsigned short int var_1_5;
 unsigned short int var_1_6;
 unsigned short int var_1_7;
 signed short int var_1_8;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 signed long int var_1_13;
 signed char var_1_14;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 128,
 7.5,
 255.75,
 99.25,
 55604,
 128,
 16,
 -4,
 1,
 1,
 0,
 -1,
 50
};
void initially(void) {
}
void step(void) {
 if ((WrapperStruct00.var_1_2 / WrapperStruct00.var_1_3) >= WrapperStruct00.var_1_4) {
  WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6) - WrapperStruct00.var_1_7);
 }
 if (WrapperStruct00.var_1_1 > WrapperStruct00.var_1_7) {
  if (WrapperStruct00.var_1_4 > (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3)) {
   WrapperStruct00.var_1_10 = WrapperStruct00.var_1_11;
  } else {
   WrapperStruct00.var_1_10 = 0;
  }
 } else {
  WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_11 && (! WrapperStruct00.var_1_12));
 }
 unsigned short int stepLocal_2 = WrapperStruct00.var_1_5;
 unsigned short int stepLocal_1 = WrapperStruct00.var_1_7;
 if (stepLocal_1 <= WrapperStruct00.var_1_1) {
  if (((((WrapperStruct00.var_1_14) < 0 ) ? -(WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_14))) < stepLocal_2) {
   WrapperStruct00.var_1_13 = WrapperStruct00.var_1_14;
  } else {
   WrapperStruct00.var_1_13 = WrapperStruct00.var_1_7;
  }
 } else {
  WrapperStruct00.var_1_13 = WrapperStruct00.var_1_5;
 }
 signed long int stepLocal_0 = (((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_6));
 if (WrapperStruct00.var_1_5 >= stepLocal_0) {
  if (! WrapperStruct00.var_1_10) {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_6;
  } else {
   WrapperStruct00.var_1_8 = -4;
  }
 } else {
  WrapperStruct00.var_1_8 = WrapperStruct00.var_1_5;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_3 != 0.0F);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 49150);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 65534);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 16383);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 32767);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 0);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((WrapperStruct00.var_1_2 / WrapperStruct00.var_1_3) >= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((unsigned short int) ((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6) - WrapperStruct00.var_1_7))) : 1) && ((WrapperStruct00.var_1_5 >= ((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_6)))) ? ((! WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_8 == ((signed short int) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_8 == ((signed short int) -4))) : (WrapperStruct00.var_1_8 == ((signed short int) WrapperStruct00.var_1_5)))) && ((WrapperStruct00.var_1_1 > WrapperStruct00.var_1_7) ? ((WrapperStruct00.var_1_4 > (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_11)) : (WrapperStruct00.var_1_10 == ((unsigned char) 0))) : (WrapperStruct00.var_1_10 == ((unsigned char) (WrapperStruct00.var_1_11 && (! WrapperStruct00.var_1_12)))))) && ((WrapperStruct00.var_1_7 <= WrapperStruct00.var_1_1) ? ((((((WrapperStruct00.var_1_14) < 0 ) ? -(WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_14))) < WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_14)) : (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_7))) : (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_5)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned char var_1_4;
 float var_1_5;
 signed long int var_1_8;
 float var_1_9;
 float var_1_10;
 float var_1_11;
 unsigned short int var_1_12;
 unsigned short int var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned long int var_1_16;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 1,
 0,
 0,
 0.9,
 5,
 4.5,
 24.5,
 5.25,
 60381,
 0,
 64,
 8,
 4
};
unsigned char last_1_WrapperStruct00_var_1_1 = 0;
unsigned long int last_1_WrapperStruct00_var_1_16 = 4;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13;
 if (last_1_WrapperStruct00_var_1_1) {
  if (stepLocal_1 < last_1_WrapperStruct00_var_1_16) {
   WrapperStruct00.var_1_11 = WrapperStruct00.var_1_9;
  }
 } else {
  WrapperStruct00.var_1_11 = WrapperStruct00.var_1_9;
 }
 if (64.8f <= WrapperStruct00.var_1_11) {
  WrapperStruct00.var_1_14 = WrapperStruct00.var_1_15;
 }
 signed long int stepLocal_2 = WrapperStruct00.var_1_8;
 if (WrapperStruct00.var_1_14 <= stepLocal_2) {
  if (! (WrapperStruct00.var_1_13 <= WrapperStruct00.var_1_12)) {
   WrapperStruct00.var_1_16 = (((((((((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_12)) ? ((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_12)))) > (WrapperStruct00.var_1_13)) ? ((((((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_12)) ? ((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_12)))) : (WrapperStruct00.var_1_13)));
  }
 } else {
  WrapperStruct00.var_1_16 = WrapperStruct00.var_1_13;
 }
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
 } else {
  WrapperStruct00.var_1_1 = (! WrapperStruct00.var_1_4);
 }
 unsigned long int stepLocal_0 = (((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_14));
 if (stepLocal_0 >= WrapperStruct00.var_1_16) {
  WrapperStruct00.var_1_5 = ((((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) < 0 ) ? -(WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)));
 } else {
  WrapperStruct00.var_1_5 = ((((WrapperStruct00.var_1_10) < 0 ) ? -(WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_10)));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 65535);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 32767);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 254);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
 last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}
int property(void) {
 return ((((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_3)) : (WrapperStruct00.var_1_1 == ((unsigned char) (! WrapperStruct00.var_1_4)))) && ((((((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_14))) >= WrapperStruct00.var_1_16) ? (WrapperStruct00.var_1_5 == ((float) ((((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) < 0 ) ? -(WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))))) : (WrapperStruct00.var_1_5 == ((float) ((((WrapperStruct00.var_1_10) < 0 ) ? -(WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_10))))))) && (last_1_WrapperStruct00_var_1_1 ? (((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) < last_1_WrapperStruct00_var_1_16) ? (WrapperStruct00.var_1_11 == ((float) WrapperStruct00.var_1_9)) : 1) : (WrapperStruct00.var_1_11 == ((float) WrapperStruct00.var_1_9)))) && ((64.8f <= WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_15)) : 1)) && ((WrapperStruct00.var_1_14 <= WrapperStruct00.var_1_8) ? ((! (WrapperStruct00.var_1_13 <= WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_16 == ((unsigned long int) (((((((((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_12)) ? ((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_12)))) > (WrapperStruct00.var_1_13)) ? ((((((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_12)) ? ((WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_12)))) : (WrapperStruct00.var_1_13))))) : 1) : (WrapperStruct00.var_1_16 == ((unsigned long int) WrapperStruct00.var_1_13)))
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

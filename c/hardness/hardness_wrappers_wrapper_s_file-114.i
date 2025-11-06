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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed short int var_1_2;
 signed short int var_1_3;
 signed short int var_1_4;
 signed short int var_1_5;
 float var_1_6;
 unsigned char var_1_7;
 float var_1_8;
 unsigned char var_1_9;
 unsigned long int var_1_10;
 unsigned long int var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 float var_1_14;
 signed char var_1_15;
 float var_1_16;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 500,
 -256,
 -10,
 4,
 5,
 8.25,
 0,
 1.6,
 64,
 1,
 128,
 128,
 25,
 127.6,
 -5,
 7.3
};
void initially(void) {
}
void step(void) {
 signed short int stepLocal_0 = WrapperStruct00.var_1_2;
 if (stepLocal_0 > WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5)));
 } else {
  WrapperStruct00.var_1_1 = 32;
 }
 if (((WrapperStruct00.var_1_2 * WrapperStruct00.var_1_1) < WrapperStruct00.var_1_5) || WrapperStruct00.var_1_7) {
  if (WrapperStruct00.var_1_7) {
   WrapperStruct00.var_1_6 = WrapperStruct00.var_1_8;
  }
 }
 if ((WrapperStruct00.var_1_10 / 1u) != (WrapperStruct00.var_1_11 + 10u)) {
  WrapperStruct00.var_1_9 = (((((WrapperStruct00.var_1_12) < (128)) ? (WrapperStruct00.var_1_12) : (128))) - WrapperStruct00.var_1_13);
 }
 if ((WrapperStruct00.var_1_4 / ((((WrapperStruct00.var_1_15) > (-8)) ? (WrapperStruct00.var_1_15) : (-8)))) >= ((WrapperStruct00.var_1_5 | WrapperStruct00.var_1_1) + WrapperStruct00.var_1_13)) {
  WrapperStruct00.var_1_14 = WrapperStruct00.var_1_8;
 } else {
  if (WrapperStruct00.var_1_6 != (((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8))) - WrapperStruct00.var_1_16)) {
   WrapperStruct00.var_1_14 = WrapperStruct00.var_1_8;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 32767);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 32766);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32766);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 4294967295);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967295);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
 assume_abort_if_not(WrapperStruct00.var_1_15 != 0);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= 0.0F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((WrapperStruct00.var_1_2 > WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((signed short int) ((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))))) : (WrapperStruct00.var_1_1 == ((signed short int) 32))) && ((((WrapperStruct00.var_1_2 * WrapperStruct00.var_1_1) < WrapperStruct00.var_1_5) || WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_7 ? (WrapperStruct00.var_1_6 == ((float) WrapperStruct00.var_1_8)) : 1) : 1)) && (((WrapperStruct00.var_1_10 / 1u) != (WrapperStruct00.var_1_11 + 10u)) ? (WrapperStruct00.var_1_9 == ((unsigned char) (((((WrapperStruct00.var_1_12) < (128)) ? (WrapperStruct00.var_1_12) : (128))) - WrapperStruct00.var_1_13))) : 1)) && (((WrapperStruct00.var_1_4 / ((((WrapperStruct00.var_1_15) > (-8)) ? (WrapperStruct00.var_1_15) : (-8)))) >= ((WrapperStruct00.var_1_5 | WrapperStruct00.var_1_1) + WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_14 == ((float) WrapperStruct00.var_1_8)) : ((WrapperStruct00.var_1_6 != (((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8))) - WrapperStruct00.var_1_16)) ? (WrapperStruct00.var_1_14 == ((float) WrapperStruct00.var_1_8)) : 1))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 float var_1_3;
 float var_1_4;
 unsigned short int var_1_5;
 unsigned short int var_1_6;
 unsigned short int var_1_7;
 unsigned short int var_1_8;
 unsigned short int var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 2.5,
 9.3,
 3.4,
 32,
 10,
 64,
 16,
 1,
 8,
 5,
 1,
 1,
 8
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_12 = WrapperStruct00.var_1_13;
 WrapperStruct00.var_1_14 = WrapperStruct00.var_1_11;
 if (WrapperStruct00.var_1_12) {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
 } else {
  if (! (WrapperStruct00.var_1_3 < WrapperStruct00.var_1_4)) {
   WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_3) < 0 ) ? -(WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_3)));
  }
 }
 if ((WrapperStruct00.var_1_1 + 8.125) > (WrapperStruct00.var_1_1 * WrapperStruct00.var_1_3)) {
  WrapperStruct00.var_1_5 = (((((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) > (WrapperStruct00.var_1_8)) ? ((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_8)));
 } else {
  WrapperStruct00.var_1_5 = WrapperStruct00.var_1_8;
 }
 unsigned short int stepLocal_0 = WrapperStruct00.var_1_6;
 if (((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_1)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_1))) == WrapperStruct00.var_1_1) {
  if (stepLocal_0 > (5 * WrapperStruct00.var_1_8)) {
   if (WrapperStruct00.var_1_1 < (WrapperStruct00.var_1_1 * 256.5f)) {
    WrapperStruct00.var_1_9 = WrapperStruct00.var_1_6;
   }
  }
 }
 if (WrapperStruct00.var_1_1 < WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_10 = WrapperStruct00.var_1_11;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32767);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 32767);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 65534);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 254);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((WrapperStruct00.var_1_12 ? (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_3)) : ((! (WrapperStruct00.var_1_3 < WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_1 == ((float) ((((WrapperStruct00.var_1_3) < 0 ) ? -(WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_3))))) : 1)) && (((WrapperStruct00.var_1_1 + 8.125) > (WrapperStruct00.var_1_1 * WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_5 == ((unsigned short int) (((((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) > (WrapperStruct00.var_1_8)) ? ((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_8))))) : (WrapperStruct00.var_1_5 == ((unsigned short int) WrapperStruct00.var_1_8)))) && ((((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_1)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_1))) == WrapperStruct00.var_1_1) ? ((WrapperStruct00.var_1_6 > (5 * WrapperStruct00.var_1_8)) ? ((WrapperStruct00.var_1_1 < (WrapperStruct00.var_1_1 * 256.5f)) ? (WrapperStruct00.var_1_9 == ((unsigned short int) WrapperStruct00.var_1_6)) : 1) : 1) : 1)) && ((WrapperStruct00.var_1_1 < WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_11)) : 1)) && (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_13))) && (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_11))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch167Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned char var_1_4;
 unsigned char var_1_5;
 signed char var_1_6;
 signed char var_1_7;
 signed char var_1_8;
 signed char var_1_9;
 float var_1_10;
 float var_1_11;
 unsigned short int var_1_12;
 unsigned short int var_1_13;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -16,
 100,
 128,
 10,
 10,
 -64,
 50,
 4,
 10,
 -0.875,
 32.46,
 10,
 10
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = WrapperStruct00.var_1_3 * WrapperStruct00.var_1_4;
 signed long int stepLocal_0 = WrapperStruct00.var_1_4 % WrapperStruct00.var_1_5;
 if (WrapperStruct00.var_1_2 <= stepLocal_1) {
  WrapperStruct00.var_1_1 = ((((((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) < ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4))) ? (((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) : ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4))));
 } else {
  if (stepLocal_0 <= WrapperStruct00.var_1_3) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_2;
  }
 }
 signed short int stepLocal_2 = WrapperStruct00.var_1_1;
 if (stepLocal_2 == WrapperStruct00.var_1_5) {
  WrapperStruct00.var_1_6 = (WrapperStruct00.var_1_7 + ((((WrapperStruct00.var_1_8) > (WrapperStruct00.var_1_9)) ? (WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_9))));
 }
 if (WrapperStruct00.var_1_6 > WrapperStruct00.var_1_4) {
  if ((~ 16u) > ((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_4)))) {
   if ((~ (WrapperStruct00.var_1_3 & WrapperStruct00.var_1_2)) <= WrapperStruct00.var_1_5) {
    WrapperStruct00.var_1_10 = WrapperStruct00.var_1_11;
   } else {
    WrapperStruct00.var_1_10 = 24.575f;
   }
  }
 } else {
  WrapperStruct00.var_1_10 = WrapperStruct00.var_1_11;
 }
 WrapperStruct00.var_1_12 = WrapperStruct00.var_1_13;
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 255);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 255);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 255);
 assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 63);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 63);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((WrapperStruct00.var_1_2 <= (WrapperStruct00.var_1_3 * WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_1 == ((signed short int) ((((((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) < ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4))) ? (((((WrapperStruct00.var_1_2) < 0 ) ? -(WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_2)))) : ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)))))) : (((WrapperStruct00.var_1_4 % WrapperStruct00.var_1_5) <= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_2)) : 1)) && ((WrapperStruct00.var_1_1 == WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_6 == ((signed char) (WrapperStruct00.var_1_7 + ((((WrapperStruct00.var_1_8) > (WrapperStruct00.var_1_9)) ? (WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_9)))))) : 1)) && ((WrapperStruct00.var_1_6 > WrapperStruct00.var_1_4) ? (((~ 16u) > ((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_4)))) ? (((~ (WrapperStruct00.var_1_3 & WrapperStruct00.var_1_2)) <= WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_10 == ((float) WrapperStruct00.var_1_11)) : (WrapperStruct00.var_1_10 == ((float) 24.575f))) : 1) : (WrapperStruct00.var_1_10 == ((float) WrapperStruct00.var_1_11)))) && (WrapperStruct00.var_1_12 == ((unsigned short int) WrapperStruct00.var_1_13))
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

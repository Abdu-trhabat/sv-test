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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed short int var_1_3;
 signed short int var_1_4;
 signed short int var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 signed short int var_1_10;
 float var_1_11;
 float var_1_12;
 unsigned char var_1_14;
 signed long int var_1_15;
 unsigned char var_1_16;
 double var_1_17;
 double var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 10,
 -32,
 -4,
 2,
 100,
 2,
 10,
 4,
 4,
 10.8,
 15.2,
 1,
 8,
 0,
 0.4,
 100000000.2
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_14 && WrapperStruct00.var_1_16) {
  WrapperStruct00.var_1_15 = WrapperStruct00.var_1_8;
 }
 WrapperStruct00.var_1_17 = WrapperStruct00.var_1_18;
 signed long int stepLocal_0 = 4;
 if (WrapperStruct00.var_1_15 < stepLocal_0) {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4);
 } else {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_5 - 5);
 }
 signed long int stepLocal_1 = WrapperStruct00.var_1_15;
 if (WrapperStruct00.var_1_4 == stepLocal_1) {
  WrapperStruct00.var_1_6 = (((((WrapperStruct00.var_1_7) < (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_8))) + (((((64 + 8)) > (WrapperStruct00.var_1_9)) ? ((64 + 8)) : (WrapperStruct00.var_1_9))));
 } else {
  WrapperStruct00.var_1_6 = (WrapperStruct00.var_1_7 + 4);
 }
 if ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) < WrapperStruct00.var_1_17) {
  if (WrapperStruct00.var_1_14 || (WrapperStruct00.var_1_15 >= ((((WrapperStruct00.var_1_4) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_3))))) {
   if (WrapperStruct00.var_1_12 >= 127.25f) {
    WrapperStruct00.var_1_10 = WrapperStruct00.var_1_3;
   }
  }
 } else {
  WrapperStruct00.var_1_10 = 16;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 16383);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 16383);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32766);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 127);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_18 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((WrapperStruct00.var_1_15 < 4) ? (WrapperStruct00.var_1_1 == ((signed short int) (WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4))) : (WrapperStruct00.var_1_1 == ((signed short int) (WrapperStruct00.var_1_5 - 5)))) && ((WrapperStruct00.var_1_4 == WrapperStruct00.var_1_15) ? (WrapperStruct00.var_1_6 == ((unsigned char) (((((WrapperStruct00.var_1_7) < (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_8))) + (((((64 + 8)) > (WrapperStruct00.var_1_9)) ? ((64 + 8)) : (WrapperStruct00.var_1_9)))))) : (WrapperStruct00.var_1_6 == ((unsigned char) (WrapperStruct00.var_1_7 + 4))))) && (((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) < WrapperStruct00.var_1_17) ? ((WrapperStruct00.var_1_14 || (WrapperStruct00.var_1_15 >= ((((WrapperStruct00.var_1_4) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_3))))) ? ((WrapperStruct00.var_1_12 >= 127.25f) ? (WrapperStruct00.var_1_10 == ((signed short int) WrapperStruct00.var_1_3)) : 1) : 1) : (WrapperStruct00.var_1_10 == ((signed short int) 16)))) && ((WrapperStruct00.var_1_14 && WrapperStruct00.var_1_16) ? (WrapperStruct00.var_1_15 == ((signed long int) WrapperStruct00.var_1_8)) : 1)) && (WrapperStruct00.var_1_17 == ((double) WrapperStruct00.var_1_18))
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

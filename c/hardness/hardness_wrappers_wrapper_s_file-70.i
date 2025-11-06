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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch70Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned char var_1_2;
 unsigned short int var_1_3;
 unsigned short int var_1_4;
 unsigned short int var_1_5;
 signed char var_1_6;
 signed long int var_1_7;
 double var_1_8;
 double var_1_9;
 double var_1_10;
 double var_1_11;
 double var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 signed char var_1_15;
 signed char var_1_16;
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
 0,
 1,
 19138,
 0,
 25,
 -50,
 8.3,
 255.6,
 10000000.375,
 0.0,
 255.375,
 50,
 2,
 1,
 5
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_1 = ((17222 - WrapperStruct00.var_1_3) + (((((29916) < (WrapperStruct00.var_1_4)) ? (29916) : (WrapperStruct00.var_1_4))) - WrapperStruct00.var_1_5));
 }
 if (WrapperStruct00.var_1_2 && (WrapperStruct00.var_1_4 >= (WrapperStruct00.var_1_3 + WrapperStruct00.var_1_1))) {
  WrapperStruct00.var_1_6 = 8;
 }
 signed long int stepLocal_0 = (((WrapperStruct00.var_1_3) > ((WrapperStruct00.var_1_5 << WrapperStruct00.var_1_1))) ? (WrapperStruct00.var_1_3) : ((WrapperStruct00.var_1_5 << WrapperStruct00.var_1_1)));
 if (WrapperStruct00.var_1_4 <= stepLocal_0) {
  WrapperStruct00.var_1_7 = (((((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_3)) < (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_3)) : (WrapperStruct00.var_1_4)));
 } else {
  WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_5 + (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_4));
 }
 WrapperStruct00.var_1_13 = WrapperStruct00.var_1_14;
 WrapperStruct00.var_1_15 = WrapperStruct00.var_1_16;
 unsigned char stepLocal_1 = WrapperStruct00.var_1_13;
 if (stepLocal_1 < WrapperStruct00.var_1_7) {
  WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10);
 } else {
  WrapperStruct00.var_1_8 = ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) - WrapperStruct00.var_1_9);
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 16383);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 16383);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 254);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((unsigned short int) ((17222 - WrapperStruct00.var_1_3) + (((((29916) < (WrapperStruct00.var_1_4)) ? (29916) : (WrapperStruct00.var_1_4))) - WrapperStruct00.var_1_5)))) : 1) && ((WrapperStruct00.var_1_2 && (WrapperStruct00.var_1_4 >= (WrapperStruct00.var_1_3 + WrapperStruct00.var_1_1))) ? (WrapperStruct00.var_1_6 == ((signed char) 8)) : 1)) && ((WrapperStruct00.var_1_4 <= ((((WrapperStruct00.var_1_3) > ((WrapperStruct00.var_1_5 << WrapperStruct00.var_1_1))) ? (WrapperStruct00.var_1_3) : ((WrapperStruct00.var_1_5 << WrapperStruct00.var_1_1))))) ? (WrapperStruct00.var_1_7 == ((signed long int) (((((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_3)) < (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_3)) : (WrapperStruct00.var_1_4))))) : (WrapperStruct00.var_1_7 == ((signed long int) (WrapperStruct00.var_1_5 + (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_4)))))) && ((WrapperStruct00.var_1_13 < WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_8 == ((double) (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_8 == ((double) ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) - WrapperStruct00.var_1_9))))) && (WrapperStruct00.var_1_13 == ((unsigned char) WrapperStruct00.var_1_14))) && (WrapperStruct00.var_1_15 == ((signed char) WrapperStruct00.var_1_16))
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

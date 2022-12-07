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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch37Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned short int var_1_2;
 unsigned short int var_1_3;
 unsigned char var_1_6;
 signed char var_1_7;
 signed char var_1_8;
 signed char var_1_9;
 signed char var_1_10;
 signed char var_1_11;
 float var_1_12;
 unsigned long int var_1_13;
 signed long int var_1_14;
 signed long int var_1_15;
 signed short int var_1_16;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 8,
 59049,
 100,
 16,
 -25,
 16,
 25,
 -10,
 0,
 25.1,
 2531521428,
 -128,
 256,
 -16
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_14 = WrapperStruct00.var_1_8;
 WrapperStruct00.var_1_16 = WrapperStruct00.var_1_14;
 signed long int stepLocal_0 = (((WrapperStruct00.var_1_14) < 0 ) ? -(WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_14));
 if (WrapperStruct00.var_1_2 <= stepLocal_0) {
  WrapperStruct00.var_1_7 = ((WrapperStruct00.var_1_8 - (1 + WrapperStruct00.var_1_9)) + WrapperStruct00.var_1_10);
 } else {
  WrapperStruct00.var_1_7 = WrapperStruct00.var_1_10;
 }
 WrapperStruct00.var_1_15 = WrapperStruct00.var_1_16;
 if (((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) ^ (WrapperStruct00.var_1_15 * WrapperStruct00.var_1_16)) <= -64) {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
 }
 unsigned char stepLocal_1 = WrapperStruct00.var_1_1;
 if (2.75f > WrapperStruct00.var_1_12) {
  WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_8);
 } else {
  if ((WrapperStruct00.var_1_13 - ((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_8)))) > stepLocal_1) {
   WrapperStruct00.var_1_11 = ((((((((WrapperStruct00.var_1_8) < ((1 + 5))) ? (WrapperStruct00.var_1_8) : ((1 + 5))))) < (WrapperStruct00.var_1_10)) ? (((((WrapperStruct00.var_1_8) < ((1 + 5))) ? (WrapperStruct00.var_1_8) : ((1 + 5))))) : (WrapperStruct00.var_1_10)));
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 65535);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 254);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 63);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 31);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 63);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 4294967295);
}
void updateLastVariables() {
}
int property() {
 return ((((((((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) ^ (WrapperStruct00.var_1_15 * WrapperStruct00.var_1_16)) <= -64) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_6))) && ((WrapperStruct00.var_1_2 <= ((((WrapperStruct00.var_1_14) < 0 ) ? -(WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_14)))) ? (WrapperStruct00.var_1_7 == ((signed char) ((WrapperStruct00.var_1_8 - (1 + WrapperStruct00.var_1_9)) + WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_7 == ((signed char) WrapperStruct00.var_1_10)))) && ((2.75f > WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_11 == ((signed char) (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_8))) : (((WrapperStruct00.var_1_13 - ((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_8)))) > WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_11 == ((signed char) ((((((((WrapperStruct00.var_1_8) < ((1 + 5))) ? (WrapperStruct00.var_1_8) : ((1 + 5))))) < (WrapperStruct00.var_1_10)) ? (((((WrapperStruct00.var_1_8) < ((1 + 5))) ? (WrapperStruct00.var_1_8) : ((1 + 5))))) : (WrapperStruct00.var_1_10))))) : 1))) && (WrapperStruct00.var_1_14 == ((signed long int) WrapperStruct00.var_1_8))) && (WrapperStruct00.var_1_15 == ((signed long int) WrapperStruct00.var_1_16))) && (WrapperStruct00.var_1_16 == ((signed short int) WrapperStruct00.var_1_14))
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

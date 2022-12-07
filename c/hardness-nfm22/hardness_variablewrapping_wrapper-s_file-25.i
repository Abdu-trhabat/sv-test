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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch25Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 unsigned char var_1_2;
 unsigned short int var_1_3;
 unsigned short int var_1_4;
 unsigned long int var_1_5;
 unsigned long int var_1_6;
 unsigned long int var_1_7;
 float var_1_8;
 float var_1_9;
 float var_1_10;
 float var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 256,
 0,
 10,
 500,
 0,
 1509114200,
 10,
 128.9,
 63.363,
 4.575,
 25.5,
 1,
 0,
 1
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_9 != WrapperStruct00.var_1_10) {
  if (WrapperStruct00.var_1_2 || WrapperStruct00.var_1_13) {
   WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_13 || WrapperStruct00.var_1_14);
  } else {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_14;
  }
 } else {
  WrapperStruct00.var_1_12 = WrapperStruct00.var_1_14;
 }
 unsigned short int stepLocal_0 = WrapperStruct00.var_1_3;
 if (WrapperStruct00.var_1_12) {
  if (stepLocal_0 <= WrapperStruct00.var_1_4) {
   WrapperStruct00.var_1_1 = (((((WrapperStruct00.var_1_3) > ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_3) : ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5)))) + (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7));
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
 }
 unsigned long int stepLocal_1 = WrapperStruct00.var_1_1;
 if (WrapperStruct00.var_1_7 >= stepLocal_1) {
  WrapperStruct00.var_1_8 = ((((0.5f) < (WrapperStruct00.var_1_9)) ? (0.5f) : (WrapperStruct00.var_1_9)));
 } else {
  WrapperStruct00.var_1_8 = ((((WrapperStruct00.var_1_9) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_10)));
 }
 if (WrapperStruct00.var_1_10 >= ((((((((128.175f) > (WrapperStruct00.var_1_9)) ? (128.175f) : (WrapperStruct00.var_1_9)))) < (WrapperStruct00.var_1_8)) ? (((((128.175f) > (WrapperStruct00.var_1_9)) ? (128.175f) : (WrapperStruct00.var_1_9)))) : (WrapperStruct00.var_1_8)))) {
  WrapperStruct00.var_1_11 = WrapperStruct00.var_1_10;
 } else {
  if (! (WrapperStruct00.var_1_7 <= WrapperStruct00.var_1_6)) {
   WrapperStruct00.var_1_11 = WrapperStruct00.var_1_9;
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 65535);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 65535);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1073741823);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1073741823);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}
void updateLastVariables() {
}
int property() {
 return (((WrapperStruct00.var_1_12 ? ((WrapperStruct00.var_1_3 <= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((unsigned long int) (((((WrapperStruct00.var_1_3) > ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_3) : ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5)))) + (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7)))) : 1) : (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_7))) && ((WrapperStruct00.var_1_7 >= WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_8 == ((float) ((((0.5f) < (WrapperStruct00.var_1_9)) ? (0.5f) : (WrapperStruct00.var_1_9))))) : (WrapperStruct00.var_1_8 == ((float) ((((WrapperStruct00.var_1_9) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_10))))))) && ((WrapperStruct00.var_1_10 >= ((((((((128.175f) > (WrapperStruct00.var_1_9)) ? (128.175f) : (WrapperStruct00.var_1_9)))) < (WrapperStruct00.var_1_8)) ? (((((128.175f) > (WrapperStruct00.var_1_9)) ? (128.175f) : (WrapperStruct00.var_1_9)))) : (WrapperStruct00.var_1_8)))) ? (WrapperStruct00.var_1_11 == ((float) WrapperStruct00.var_1_10)) : ((! (WrapperStruct00.var_1_7 <= WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_11 == ((float) WrapperStruct00.var_1_9)) : 1))) && ((WrapperStruct00.var_1_9 != WrapperStruct00.var_1_10) ? ((WrapperStruct00.var_1_2 || WrapperStruct00.var_1_13) ? (WrapperStruct00.var_1_12 == ((unsigned char) (WrapperStruct00.var_1_13 || WrapperStruct00.var_1_14))) : (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_14))) : (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_14)))
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

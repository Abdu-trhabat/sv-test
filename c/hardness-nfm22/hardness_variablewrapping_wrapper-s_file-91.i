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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch91Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 float var_1_2;
 unsigned long int var_1_3;
 unsigned long int var_1_4;
 signed short int var_1_5;
 float var_1_6;
 float var_1_7;
 signed short int var_1_8;
 unsigned long int var_1_9;
 unsigned long int var_1_10;
 unsigned long int var_1_11;
 signed short int var_1_12;
 signed short int var_1_14;
 signed short int var_1_15;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 100000000,
 49.25,
 64,
 64,
 1,
 8.4,
 -0.25,
 -4,
 64,
 16,
 10,
 100,
 128,
 10
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2 >= 50.4f) {
  WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_3) > (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4)));
 }
 if (WrapperStruct00.var_1_3 == (WrapperStruct00.var_1_1 * WrapperStruct00.var_1_4)) {
  if (WrapperStruct00.var_1_2 >= (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) {
   WrapperStruct00.var_1_5 = WrapperStruct00.var_1_8;
  } else {
   WrapperStruct00.var_1_5 = 32;
  }
 } else {
  WrapperStruct00.var_1_5 = WrapperStruct00.var_1_8;
 }
 if (! (WrapperStruct00.var_1_4 < WrapperStruct00.var_1_3)) {
  WrapperStruct00.var_1_9 = ((((((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4)))) < (((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11))))) ? (((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4)))) : (((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11))))));
 } else {
  WrapperStruct00.var_1_9 = ((((WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_10)));
 }
 if (WrapperStruct00.var_1_10 > WrapperStruct00.var_1_9) {
  if (63.1 >= WrapperStruct00.var_1_7) {
   if (WrapperStruct00.var_1_7 >= WrapperStruct00.var_1_2) {
    WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15);
   } else {
    WrapperStruct00.var_1_12 = WrapperStruct00.var_1_14;
   }
  }
 } else {
  WrapperStruct00.var_1_12 = WrapperStruct00.var_1_15;
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967294);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967294);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 32766);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 4294967294);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967294);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 32766);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 32766);
}
void updateLastVariables() {
}
int property() {
 return ((((WrapperStruct00.var_1_2 >= 50.4f) ? (WrapperStruct00.var_1_1 == ((unsigned long int) ((((WrapperStruct00.var_1_3) > (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4))))) : 1) && ((WrapperStruct00.var_1_3 == (WrapperStruct00.var_1_1 * WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_2 >= (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_5 == ((signed short int) WrapperStruct00.var_1_8)) : (WrapperStruct00.var_1_5 == ((signed short int) 32))) : (WrapperStruct00.var_1_5 == ((signed short int) WrapperStruct00.var_1_8)))) && ((! (WrapperStruct00.var_1_4 < WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_9 == ((unsigned long int) ((((((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4)))) < (((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11))))) ? (((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4)))) : (((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11)))))))) : (WrapperStruct00.var_1_9 == ((unsigned long int) ((((WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_10))))))) && ((WrapperStruct00.var_1_10 > WrapperStruct00.var_1_9) ? ((63.1 >= WrapperStruct00.var_1_7) ? ((WrapperStruct00.var_1_7 >= WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_12 == ((signed short int) (WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15))) : (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_14))) : 1) : (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_15)))
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

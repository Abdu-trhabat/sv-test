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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch28Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 float var_1_2;
 float var_1_3;
 signed char var_1_5;
 signed char var_1_6;
 signed char var_1_7;
 float var_1_8;
 float var_1_9;
 float var_1_10;
 float var_1_11;
 signed long int var_1_12;
 signed long int var_1_13;
 signed long int var_1_15;
 signed short int var_1_18;
 unsigned short int var_1_19;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 1,
 63.75,
 255.75,
 10,
 4,
 -10,
 4.75,
 99.5,
 255.9,
 24.85,
 -2,
 1629954775,
 1928642731,
 0,
 5
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = -4;
 if (stepLocal_0 < WrapperStruct00.var_1_6) {
  WrapperStruct00.var_1_8 = ((((WrapperStruct00.var_1_9) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_10)));
 }
 WrapperStruct00.var_1_11 = ((((WrapperStruct00.var_1_9) > (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_10)));
 WrapperStruct00.var_1_18 = WrapperStruct00.var_1_5;
 WrapperStruct00.var_1_19 = WrapperStruct00.var_1_6;
 if ((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) <= (- WrapperStruct00.var_1_8)) {
  WrapperStruct00.var_1_1 = (((((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) < (WrapperStruct00.var_1_7)) ? ((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_7)));
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
 }
 signed long int stepLocal_1 = WrapperStruct00.var_1_6 | 5;
 if (stepLocal_1 <= ((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_7)))) {
  WrapperStruct00.var_1_12 = (((((WrapperStruct00.var_1_6) < ((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_19))) ? (WrapperStruct00.var_1_6) : ((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_19)))) - (WrapperStruct00.var_1_15 - ((((WrapperStruct00.var_1_5) < 0 ) ? -(WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_5)))));
 } else {
  WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_6 + (((((WrapperStruct00.var_1_19) < (WrapperStruct00.var_1_19)) ? (WrapperStruct00.var_1_19) : (WrapperStruct00.var_1_19))) - WrapperStruct00.var_1_19));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 126);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 126);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 126);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 1073741822);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483646);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 2147483646);
}
void updateLastVariables() {
}
int property() {
 return (((((((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) <= (- WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_1 == ((signed char) (((((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) < (WrapperStruct00.var_1_7)) ? ((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_7))))) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_5))) && ((-4 < WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_8 == ((float) ((((WrapperStruct00.var_1_9) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_10))))) : 1)) && (WrapperStruct00.var_1_11 == ((float) ((((WrapperStruct00.var_1_9) > (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_10)))))) && (((WrapperStruct00.var_1_6 | 5) <= ((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_7)))) ? (WrapperStruct00.var_1_12 == ((signed long int) (((((WrapperStruct00.var_1_6) < ((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_19))) ? (WrapperStruct00.var_1_6) : ((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_19)))) - (WrapperStruct00.var_1_15 - ((((WrapperStruct00.var_1_5) < 0 ) ? -(WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_5))))))) : (WrapperStruct00.var_1_12 == ((signed long int) (WrapperStruct00.var_1_6 + (((((WrapperStruct00.var_1_19) < (WrapperStruct00.var_1_19)) ? (WrapperStruct00.var_1_19) : (WrapperStruct00.var_1_19))) - WrapperStruct00.var_1_19)))))) && (WrapperStruct00.var_1_18 == ((signed short int) WrapperStruct00.var_1_5))) && (WrapperStruct00.var_1_19 == ((unsigned short int) WrapperStruct00.var_1_6))
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

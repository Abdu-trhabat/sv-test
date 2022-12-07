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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch63Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 float var_1_2;
 float var_1_3;
 float var_1_4;
 unsigned char var_1_6;
 signed long int var_1_7;
 float var_1_8;
 unsigned long int var_1_13;
 unsigned long int var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 signed char var_1_17;
 signed char var_1_18;
 signed char var_1_19;
 signed char var_1_20;
 signed short int var_1_21;
 signed char var_1_22;
 unsigned char var_1_23;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 8.3,
 2.25,
 10.3,
 0,
 128,
 9.8,
 1,
 32,
 -10,
 16,
 25,
 1,
 0,
 32,
 256,
 16,
 0
};
signed short int last_1_WrapperStruct00_var_1_21 = 256;
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_13 = WrapperStruct00.var_1_14;
 WrapperStruct00.var_1_21 = last_1_WrapperStruct00_var_1_21;
 WrapperStruct00.var_1_22 = WrapperStruct00.var_1_16;
 WrapperStruct00.var_1_23 = WrapperStruct00.var_1_6;
 if (((((1.1f) < (WrapperStruct00.var_1_2)) ? (1.1f) : (WrapperStruct00.var_1_2))) > (WrapperStruct00.var_1_3 * WrapperStruct00.var_1_4)) {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_23 && WrapperStruct00.var_1_6);
 }
 signed char stepLocal_0 = WrapperStruct00.var_1_22;
 if (stepLocal_0 != ((((WrapperStruct00.var_1_22) < (WrapperStruct00.var_1_21)) ? (WrapperStruct00.var_1_22) : (WrapperStruct00.var_1_21)))) {
  WrapperStruct00.var_1_15 = ((((((10 + WrapperStruct00.var_1_16)) < (WrapperStruct00.var_1_17)) ? ((10 + WrapperStruct00.var_1_16)) : (WrapperStruct00.var_1_17))) - ((32 - WrapperStruct00.var_1_18) + ((((WrapperStruct00.var_1_19) > (WrapperStruct00.var_1_20)) ? (WrapperStruct00.var_1_19) : (WrapperStruct00.var_1_20)))));
 }
 if (WrapperStruct00.var_1_4 <= (((((WrapperStruct00.var_1_2) < (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_3))) * WrapperStruct00.var_1_8)) {
  WrapperStruct00.var_1_7 = (((((((((WrapperStruct00.var_1_22 + WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_15)) ? ((WrapperStruct00.var_1_22 + WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_15)))) > (((((WrapperStruct00.var_1_15) < 0 ) ? -(WrapperStruct00.var_1_15) : (WrapperStruct00.var_1_15))))) ? ((((((WrapperStruct00.var_1_22 + WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_15)) ? ((WrapperStruct00.var_1_22 + WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_15)))) : (((((WrapperStruct00.var_1_15) < 0 ) ? -(WrapperStruct00.var_1_15) : (WrapperStruct00.var_1_15))))));
 } else {
  WrapperStruct00.var_1_7 = WrapperStruct00.var_1_22;
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 4294967294);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 63);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 126);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 31);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 63);
 WrapperStruct00.var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_20 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_20 <= 63);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_21 = WrapperStruct00.var_1_21;
}
int property() {
 return (((((((((((1.1f) < (WrapperStruct00.var_1_2)) ? (1.1f) : (WrapperStruct00.var_1_2))) > (WrapperStruct00.var_1_3 * WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_1 == ((unsigned char) (WrapperStruct00.var_1_23 && WrapperStruct00.var_1_6))) : 1) && ((WrapperStruct00.var_1_4 <= (((((WrapperStruct00.var_1_2) < (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_2) : (WrapperStruct00.var_1_3))) * WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_7 == ((signed long int) (((((((((WrapperStruct00.var_1_22 + WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_15)) ? ((WrapperStruct00.var_1_22 + WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_15)))) > (((((WrapperStruct00.var_1_15) < 0 ) ? -(WrapperStruct00.var_1_15) : (WrapperStruct00.var_1_15))))) ? ((((((WrapperStruct00.var_1_22 + WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_15)) ? ((WrapperStruct00.var_1_22 + WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_15)))) : (((((WrapperStruct00.var_1_15) < 0 ) ? -(WrapperStruct00.var_1_15) : (WrapperStruct00.var_1_15)))))))) : (WrapperStruct00.var_1_7 == ((signed long int) WrapperStruct00.var_1_22)))) && (WrapperStruct00.var_1_13 == ((unsigned long int) WrapperStruct00.var_1_14))) && ((WrapperStruct00.var_1_22 != ((((WrapperStruct00.var_1_22) < (WrapperStruct00.var_1_21)) ? (WrapperStruct00.var_1_22) : (WrapperStruct00.var_1_21)))) ? (WrapperStruct00.var_1_15 == ((signed char) ((((((10 + WrapperStruct00.var_1_16)) < (WrapperStruct00.var_1_17)) ? ((10 + WrapperStruct00.var_1_16)) : (WrapperStruct00.var_1_17))) - ((32 - WrapperStruct00.var_1_18) + ((((WrapperStruct00.var_1_19) > (WrapperStruct00.var_1_20)) ? (WrapperStruct00.var_1_19) : (WrapperStruct00.var_1_20))))))) : 1)) && (WrapperStruct00.var_1_21 == ((signed short int) last_1_WrapperStruct00_var_1_21))) && (WrapperStruct00.var_1_22 == ((signed char) WrapperStruct00.var_1_16))) && (WrapperStruct00.var_1_23 == ((unsigned char) WrapperStruct00.var_1_6))
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

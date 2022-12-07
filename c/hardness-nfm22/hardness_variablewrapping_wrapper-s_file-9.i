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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct0;
struct WrapperStruct0 {
 unsigned char var_1_1;
 unsigned char var_1_3;
 unsigned char var_1_7;
 signed short int var_1_8;
 unsigned char var_1_9;
 double var_1_10;
 double var_1_11;
 signed short int var_1_12;
 signed long int var_1_14;
};
unsigned char isInitial = 0;
struct WrapperStruct0 WrapperStruct0 = {
 10,
 4,
 0,
 100,
 32,
 9.2,
 0.975,
 1,
 -16
};
unsigned char last_1_WrapperStruct0_var_1_1 = 10;
double last_1_WrapperStruct0_var_1_10 = 9.2;
signed short int last_1_WrapperStruct0_var_1_12 = 1;
signed long int last_1_WrapperStruct0_var_1_14 = -16;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = last_1_WrapperStruct0_var_1_10 > last_1_WrapperStruct0_var_1_10;
 if (((last_1_WrapperStruct0_var_1_12 + last_1_WrapperStruct0_var_1_1) < 10) || stepLocal_0) {
  WrapperStruct0.var_1_12 = ((((((WrapperStruct0.var_1_3 + last_1_WrapperStruct0_var_1_12) - ((((last_1_WrapperStruct0_var_1_14) > (last_1_WrapperStruct0_var_1_12)) ? (last_1_WrapperStruct0_var_1_14) : (last_1_WrapperStruct0_var_1_12))))) > (last_1_WrapperStruct0_var_1_1)) ? (((WrapperStruct0.var_1_3 + last_1_WrapperStruct0_var_1_12) - ((((last_1_WrapperStruct0_var_1_14) > (last_1_WrapperStruct0_var_1_12)) ? (last_1_WrapperStruct0_var_1_14) : (last_1_WrapperStruct0_var_1_12))))) : (last_1_WrapperStruct0_var_1_1)));
 } else {
  WrapperStruct0.var_1_12 = last_1_WrapperStruct0_var_1_12;
 }
 WrapperStruct0.var_1_14 = WrapperStruct0.var_1_12;
 if ((10 << WrapperStruct0.var_1_12) < (WrapperStruct0.var_1_3 * WrapperStruct0.var_1_14)) {
  WrapperStruct0.var_1_8 = (WrapperStruct0.var_1_12 + WrapperStruct0.var_1_14);
 }
 WrapperStruct0.var_1_9 = 64;
 WrapperStruct0.var_1_10 = WrapperStruct0.var_1_11;
 if (WrapperStruct0.var_1_12 <= 16) {
  WrapperStruct0.var_1_1 = WrapperStruct0.var_1_3;
 } else {
  if (((((WrapperStruct0.var_1_10) > (WrapperStruct0.var_1_10)) ? (WrapperStruct0.var_1_10) : (WrapperStruct0.var_1_10))) < WrapperStruct0.var_1_10) {
   if (WrapperStruct0.var_1_7) {
    WrapperStruct0.var_1_1 = WrapperStruct0.var_1_3;
   } else {
    WrapperStruct0.var_1_1 = WrapperStruct0.var_1_3;
   }
  } else {
   WrapperStruct0.var_1_1 = WrapperStruct0.var_1_3;
  }
 }
}
void updateVariables() {
 WrapperStruct0.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct0.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct0.var_1_3 <= 254);
 WrapperStruct0.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct0.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct0.var_1_7 <= 1);
 WrapperStruct0.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct0.var_1_11 >= -922337.2036854765600e+13F && WrapperStruct0.var_1_11 <= -1.0e-20F) || (WrapperStruct0.var_1_11 <= 9223372.036854765600e+12F && WrapperStruct0.var_1_11 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_WrapperStruct0_var_1_1 = WrapperStruct0.var_1_1;
 last_1_WrapperStruct0_var_1_10 = WrapperStruct0.var_1_10;
 last_1_WrapperStruct0_var_1_12 = WrapperStruct0.var_1_12;
 last_1_WrapperStruct0_var_1_14 = WrapperStruct0.var_1_14;
}
int property() {
 return ((((((WrapperStruct0.var_1_12 <= 16) ? (WrapperStruct0.var_1_1 == ((unsigned char) WrapperStruct0.var_1_3)) : ((((((WrapperStruct0.var_1_10) > (WrapperStruct0.var_1_10)) ? (WrapperStruct0.var_1_10) : (WrapperStruct0.var_1_10))) < WrapperStruct0.var_1_10) ? (WrapperStruct0.var_1_7 ? (WrapperStruct0.var_1_1 == ((unsigned char) WrapperStruct0.var_1_3)) : (WrapperStruct0.var_1_1 == ((unsigned char) WrapperStruct0.var_1_3))) : (WrapperStruct0.var_1_1 == ((unsigned char) WrapperStruct0.var_1_3)))) && (((10 << WrapperStruct0.var_1_12) < (WrapperStruct0.var_1_3 * WrapperStruct0.var_1_14)) ? (WrapperStruct0.var_1_8 == ((signed short int) (WrapperStruct0.var_1_12 + WrapperStruct0.var_1_14))) : 1)) && (WrapperStruct0.var_1_9 == ((unsigned char) 64))) && (WrapperStruct0.var_1_10 == ((double) WrapperStruct0.var_1_11))) && ((((last_1_WrapperStruct0_var_1_12 + last_1_WrapperStruct0_var_1_1) < 10) || (last_1_WrapperStruct0_var_1_10 > last_1_WrapperStruct0_var_1_10)) ? (WrapperStruct0.var_1_12 == ((signed short int) ((((((WrapperStruct0.var_1_3 + last_1_WrapperStruct0_var_1_12) - ((((last_1_WrapperStruct0_var_1_14) > (last_1_WrapperStruct0_var_1_12)) ? (last_1_WrapperStruct0_var_1_14) : (last_1_WrapperStruct0_var_1_12))))) > (last_1_WrapperStruct0_var_1_1)) ? (((WrapperStruct0.var_1_3 + last_1_WrapperStruct0_var_1_12) - ((((last_1_WrapperStruct0_var_1_14) > (last_1_WrapperStruct0_var_1_12)) ? (last_1_WrapperStruct0_var_1_14) : (last_1_WrapperStruct0_var_1_12))))) : (last_1_WrapperStruct0_var_1_1))))) : (WrapperStruct0.var_1_12 == ((signed short int) last_1_WrapperStruct0_var_1_12)))) && (WrapperStruct0.var_1_14 == ((signed long int) WrapperStruct0.var_1_12))
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

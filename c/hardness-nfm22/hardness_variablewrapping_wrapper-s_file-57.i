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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch57Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 signed char var_1_9;
 signed char var_1_10;
 signed char var_1_11;
 signed char var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 float var_1_17;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 1,
 0,
 0,
 1,
 64,
 4,
 -4,
 32,
 32,
 -64,
 50,
 16,
 63.5
};
signed char last_1_WrapperStruct00_var_1_9 = 64;
signed char last_1_WrapperStruct00_var_1_14 = -64;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = WrapperStruct00.var_1_6;
 if (! (last_1_WrapperStruct00_var_1_14 >= last_1_WrapperStruct00_var_1_9)) {
  if ((WrapperStruct00.var_1_4 || WrapperStruct00.var_1_5) && stepLocal_0) {
   WrapperStruct00.var_1_1 = ((((last_1_WrapperStruct00_var_1_9) < (last_1_WrapperStruct00_var_1_14)) ? (last_1_WrapperStruct00_var_1_9) : (last_1_WrapperStruct00_var_1_14)));
  } else {
   WrapperStruct00.var_1_1 = last_1_WrapperStruct00_var_1_14;
  }
 } else {
  WrapperStruct00.var_1_1 = last_1_WrapperStruct00_var_1_14;
 }
 signed long int stepLocal_3 = (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16) - ((((64) > (WrapperStruct00.var_1_13)) ? (64) : (WrapperStruct00.var_1_13)));
 if (WrapperStruct00.var_1_12 < stepLocal_3) {
  WrapperStruct00.var_1_14 = ((64 - WrapperStruct00.var_1_16) - WrapperStruct00.var_1_13);
 } else {
  WrapperStruct00.var_1_14 = ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11)));
 }
 WrapperStruct00.var_1_17 = 128.91f;
 unsigned char stepLocal_2 = WrapperStruct00.var_1_14 == WrapperStruct00.var_1_1;
 unsigned char stepLocal_1 = WrapperStruct00.var_1_5;
 if (stepLocal_1 && WrapperStruct00.var_1_4) {
  if (WrapperStruct00.var_1_6 || stepLocal_2) {
   WrapperStruct00.var_1_9 = ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11)));
  }
 } else {
  WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13);
 }
}
void updateVariables() {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 126);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 126);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 64);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 63);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_9 = WrapperStruct00.var_1_9;
 last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
}
int property() {
 return ((((! (last_1_WrapperStruct00_var_1_14 >= last_1_WrapperStruct00_var_1_9)) ? (((WrapperStruct00.var_1_4 || WrapperStruct00.var_1_5) && WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_1 == ((signed long int) ((((last_1_WrapperStruct00_var_1_9) < (last_1_WrapperStruct00_var_1_14)) ? (last_1_WrapperStruct00_var_1_9) : (last_1_WrapperStruct00_var_1_14))))) : (WrapperStruct00.var_1_1 == ((signed long int) last_1_WrapperStruct00_var_1_14))) : (WrapperStruct00.var_1_1 == ((signed long int) last_1_WrapperStruct00_var_1_14))) && ((WrapperStruct00.var_1_5 && WrapperStruct00.var_1_4) ? ((WrapperStruct00.var_1_6 || (WrapperStruct00.var_1_14 == WrapperStruct00.var_1_1)) ? (WrapperStruct00.var_1_9 == ((signed char) ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11))))) : 1) : (WrapperStruct00.var_1_9 == ((signed char) (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13))))) && ((WrapperStruct00.var_1_12 < ((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16) - ((((64) > (WrapperStruct00.var_1_13)) ? (64) : (WrapperStruct00.var_1_13))))) ? (WrapperStruct00.var_1_14 == ((signed char) ((64 - WrapperStruct00.var_1_16) - WrapperStruct00.var_1_13))) : (WrapperStruct00.var_1_14 == ((signed char) ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11))))))) && (WrapperStruct00.var_1_17 == ((float) 128.91f))
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

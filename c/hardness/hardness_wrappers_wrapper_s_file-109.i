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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 signed char var_1_4;
 signed char var_1_5;
 signed long int var_1_6;
 signed long int var_1_7;
 signed short int var_1_8;
 signed short int var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 signed short int var_1_15;
 signed short int var_1_16;
 signed short int var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 16,
 64,
 64,
 8,
 2,
 1,
 2,
 1,
 0,
 1,
 1,
 0,
 4,
 -10,
 5
};
signed char last_1_WrapperStruct00_var_1_1 = 16;
signed short int last_1_WrapperStruct00_var_1_8 = 1;
signed short int last_1_WrapperStruct00_var_1_17 = 5;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = WrapperStruct00.var_1_4;
 if (stepLocal_1 <= WrapperStruct00.var_1_5) {
  WrapperStruct00.var_1_6 = (last_1_WrapperStruct00_var_1_17 + (WrapperStruct00.var_1_4 + last_1_WrapperStruct00_var_1_8));
 } else {
  WrapperStruct00.var_1_6 = ((((last_1_WrapperStruct00_var_1_8) > (((WrapperStruct00.var_1_5 + 16) - WrapperStruct00.var_1_7))) ? (last_1_WrapperStruct00_var_1_8) : (((WrapperStruct00.var_1_5 + 16) - WrapperStruct00.var_1_7))));
 }
 WrapperStruct00.var_1_17 = WrapperStruct00.var_1_6;
 WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_5 - WrapperStruct00.var_1_9);
 signed short int stepLocal_0 = WrapperStruct00.var_1_8;
 if (stepLocal_0 < last_1_WrapperStruct00_var_1_1) {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_4 - (WrapperStruct00.var_1_5 - 5));
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
 }
 WrapperStruct00.var_1_15 = WrapperStruct00.var_1_1;
 WrapperStruct00.var_1_16 = WrapperStruct00.var_1_1;
 signed long int stepLocal_3 = WrapperStruct00.var_1_6;
 signed long int stepLocal_2 = 2 * (WrapperStruct00.var_1_5 - WrapperStruct00.var_1_9);
 if (stepLocal_2 <= WrapperStruct00.var_1_15) {
  if (WrapperStruct00.var_1_5 < stepLocal_3) {
   WrapperStruct00.var_1_10 = ((WrapperStruct00.var_1_11 && WrapperStruct00.var_1_12) && WrapperStruct00.var_1_13);
  }
 } else {
  WrapperStruct00.var_1_10 = WrapperStruct00.var_1_14;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 126);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 126);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483646);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 32766);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 0);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
 last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
 last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}
int property(void) {
 return (((((((WrapperStruct00.var_1_8 < last_1_WrapperStruct00_var_1_1) ? (WrapperStruct00.var_1_1 == ((signed char) (WrapperStruct00.var_1_4 - (WrapperStruct00.var_1_5 - 5)))) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_4))) && ((WrapperStruct00.var_1_4 <= WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_6 == ((signed long int) (last_1_WrapperStruct00_var_1_17 + (WrapperStruct00.var_1_4 + last_1_WrapperStruct00_var_1_8)))) : (WrapperStruct00.var_1_6 == ((signed long int) ((((last_1_WrapperStruct00_var_1_8) > (((WrapperStruct00.var_1_5 + 16) - WrapperStruct00.var_1_7))) ? (last_1_WrapperStruct00_var_1_8) : (((WrapperStruct00.var_1_5 + 16) - WrapperStruct00.var_1_7)))))))) && (WrapperStruct00.var_1_8 == ((signed short int) (WrapperStruct00.var_1_5 - WrapperStruct00.var_1_9)))) && (((2 * (WrapperStruct00.var_1_5 - WrapperStruct00.var_1_9)) <= WrapperStruct00.var_1_15) ? ((WrapperStruct00.var_1_5 < WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_10 == ((unsigned char) ((WrapperStruct00.var_1_11 && WrapperStruct00.var_1_12) && WrapperStruct00.var_1_13))) : 1) : (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_14)))) && (WrapperStruct00.var_1_15 == ((signed short int) WrapperStruct00.var_1_1))) && (WrapperStruct00.var_1_16 == ((signed short int) WrapperStruct00.var_1_1))) && (WrapperStruct00.var_1_17 == ((signed short int) WrapperStruct00.var_1_6))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 unsigned long int var_1_4;
 unsigned long int var_1_5;
 unsigned long int var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 signed short int var_1_9;
 signed short int var_1_10;
 signed short int var_1_11;
 signed char var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 unsigned short int var_1_16;
 unsigned short int var_1_17;
 unsigned short int var_1_18;
 unsigned short int var_1_19;
 unsigned short int var_1_20;
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
 8,
 64,
 64,
 50,
 16,
 0,
 0,
 1000,
 10,
 5,
 -2,
 -16,
 25,
 32,
 32,
 62289,
 8,
 2,
 2
};
void initially(void) {
}
void step(void) {
 if ((~ (WrapperStruct00.var_1_2 * WrapperStruct00.var_1_3)) < (WrapperStruct00.var_1_4 / ((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_6))))) {
  WrapperStruct00.var_1_1 = (! (WrapperStruct00.var_1_7 || WrapperStruct00.var_1_8));
 }
 unsigned long int stepLocal_0 = WrapperStruct00.var_1_5;
 if (stepLocal_0 == (- WrapperStruct00.var_1_3)) {
  WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11);
 } else {
  WrapperStruct00.var_1_9 = WrapperStruct00.var_1_10;
 }
 unsigned long int stepLocal_1 = WrapperStruct00.var_1_4;
 if (stepLocal_1 >= WrapperStruct00.var_1_5) {
  WrapperStruct00.var_1_12 = ((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14)));
 } else {
  WrapperStruct00.var_1_12 = ((((WrapperStruct00.var_1_13) > (((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_15)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_15))))) ? (WrapperStruct00.var_1_13) : (((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_15)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_15))))));
 }
 unsigned long int stepLocal_2 = (WrapperStruct00.var_1_2 / WrapperStruct00.var_1_6) + WrapperStruct00.var_1_5;
 if (WrapperStruct00.var_1_14 <= stepLocal_2) {
  WrapperStruct00.var_1_16 = (WrapperStruct00.var_1_17 - (WrapperStruct00.var_1_18 + ((((WrapperStruct00.var_1_19) < 0 ) ? -(WrapperStruct00.var_1_19) : (WrapperStruct00.var_1_19)))));
 } else {
  WrapperStruct00.var_1_16 = WrapperStruct00.var_1_20;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967295);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967295);
 assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 4294967295);
 assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 0);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 32766);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 32766);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 126);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 126);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 126);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 65534);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 16384);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 16383);
 WrapperStruct00.var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_20 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_20 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((~ (WrapperStruct00.var_1_2 * WrapperStruct00.var_1_3)) < (WrapperStruct00.var_1_4 / ((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_6))))) ? (WrapperStruct00.var_1_1 == ((unsigned char) (! (WrapperStruct00.var_1_7 || WrapperStruct00.var_1_8)))) : 1) && ((WrapperStruct00.var_1_5 == (- WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_9 == ((signed short int) (WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11))) : (WrapperStruct00.var_1_9 == ((signed short int) WrapperStruct00.var_1_10)))) && ((WrapperStruct00.var_1_4 >= WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_12 == ((signed char) ((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))))) : (WrapperStruct00.var_1_12 == ((signed char) ((((WrapperStruct00.var_1_13) > (((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_15)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_15))))) ? (WrapperStruct00.var_1_13) : (((((WrapperStruct00.var_1_14) > (WrapperStruct00.var_1_15)) ? (WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_15)))))))))) && ((WrapperStruct00.var_1_14 <= ((WrapperStruct00.var_1_2 / WrapperStruct00.var_1_6) + WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_16 == ((unsigned short int) (WrapperStruct00.var_1_17 - (WrapperStruct00.var_1_18 + ((((WrapperStruct00.var_1_19) < 0 ) ? -(WrapperStruct00.var_1_19) : (WrapperStruct00.var_1_19))))))) : (WrapperStruct00.var_1_16 == ((unsigned short int) WrapperStruct00.var_1_20)))
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

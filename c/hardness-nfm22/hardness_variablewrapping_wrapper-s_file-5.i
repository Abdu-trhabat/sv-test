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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed short int var_1_6;
 signed short int var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 signed short int var_1_10;
 unsigned char var_1_12;
 unsigned short int var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned short int var_1_16;
 unsigned short int var_1_17;
 signed long int var_1_18;
 signed short int var_1_19;
 signed short int var_1_20;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 10000,
 0,
 4,
 10,
 0,
 2,
 100,
 25,
 4,
 128,
 20416,
 21022,
 0,
 -1,
 -10
};
unsigned short int last_1_WrapperStruct00_var_1_13 = 25;
signed short int last_1_WrapperStruct00_var_1_20 = -10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = last_1_WrapperStruct00_var_1_13 + (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_10);
 signed long int stepLocal_1 = last_1_WrapperStruct00_var_1_13;
 if (WrapperStruct00.var_1_9) {
  if (WrapperStruct00.var_1_7 > stepLocal_2) {
   if (stepLocal_1 < (~ last_1_WrapperStruct00_var_1_20)) {
    WrapperStruct00.var_1_8 = WrapperStruct00.var_1_12;
   } else {
    WrapperStruct00.var_1_8 = WrapperStruct00.var_1_12;
   }
  } else {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_12;
  }
 }
 if (WrapperStruct00.var_1_12 <= ((WrapperStruct00.var_1_8 / WrapperStruct00.var_1_14) * (2 % WrapperStruct00.var_1_15))) {
  WrapperStruct00.var_1_13 = (WrapperStruct00.var_1_8 + (((((WrapperStruct00.var_1_16) > (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17))) - WrapperStruct00.var_1_15));
 }
 signed long int stepLocal_0 = WrapperStruct00.var_1_8 - WrapperStruct00.var_1_8;
 if ((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_13) >= stepLocal_0) {
  WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8 - WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8 - WrapperStruct00.var_1_8)));
 }
 WrapperStruct00.var_1_18 = -4;
 WrapperStruct00.var_1_19 = WrapperStruct00.var_1_8;
 WrapperStruct00.var_1_20 = WrapperStruct00.var_1_12;
}
void updateVariables() {
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32766);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 32766);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 32767);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 255);
 assume_abort_if_not(WrapperStruct00.var_1_14 != 0);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 255);
 assume_abort_if_not(WrapperStruct00.var_1_15 != 0);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 32767);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 32767);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
 last_1_WrapperStruct00_var_1_20 = WrapperStruct00.var_1_20;
}
int property() {
 return (((((((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_13) >= (WrapperStruct00.var_1_8 - WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_1 == ((signed short int) ((((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8 - WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8 - WrapperStruct00.var_1_8))))) : 1) && (WrapperStruct00.var_1_9 ? ((WrapperStruct00.var_1_7 > (last_1_WrapperStruct00_var_1_13 + (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_10))) ? ((last_1_WrapperStruct00_var_1_13 < (~ last_1_WrapperStruct00_var_1_20)) ? (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_12))) : (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_12))) : 1)) && ((WrapperStruct00.var_1_12 <= ((WrapperStruct00.var_1_8 / WrapperStruct00.var_1_14) * (2 % WrapperStruct00.var_1_15))) ? (WrapperStruct00.var_1_13 == ((unsigned short int) (WrapperStruct00.var_1_8 + (((((WrapperStruct00.var_1_16) > (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17))) - WrapperStruct00.var_1_15)))) : 1)) && (WrapperStruct00.var_1_18 == ((signed long int) -4))) && (WrapperStruct00.var_1_19 == ((signed short int) WrapperStruct00.var_1_8))) && (WrapperStruct00.var_1_20 == ((signed short int) WrapperStruct00.var_1_12))
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

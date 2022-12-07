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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch89Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_3;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 signed char var_1_8;
 signed char var_1_9;
 signed char var_1_10;
 unsigned char var_1_11;
 signed long int var_1_13;
 unsigned short int var_1_14;
 unsigned short int var_1_15;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 4,
 0,
 1,
 0,
 -1,
 -1,
 -50,
 0,
 100,
 16,
 25
};
unsigned short int last_1_WrapperStruct00_var_1_14 = 16;
unsigned short int last_1_WrapperStruct00_var_1_15 = 25;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_15;
 if (last_1_WrapperStruct00_var_1_14 > stepLocal_0) {
  WrapperStruct00.var_1_8 = (((((-4 + WrapperStruct00.var_1_9)) < (WrapperStruct00.var_1_10)) ? ((-4 + WrapperStruct00.var_1_9)) : (WrapperStruct00.var_1_10)));
 }
 WrapperStruct00.var_1_14 = WrapperStruct00.var_1_8;
 if ((WrapperStruct00.var_1_14 / WrapperStruct00.var_1_3) >= WrapperStruct00.var_1_14) {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_5 && WrapperStruct00.var_1_6);
 } else {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_5 && WrapperStruct00.var_1_7);
 }
 WrapperStruct00.var_1_13 = WrapperStruct00.var_1_10;
 WrapperStruct00.var_1_15 = WrapperStruct00.var_1_3;
 if ((WrapperStruct00.var_1_13 / WrapperStruct00.var_1_3) > WrapperStruct00.var_1_10) {
  if (WrapperStruct00.var_1_7 && WrapperStruct00.var_1_1) {
   if (WrapperStruct00.var_1_8 < WrapperStruct00.var_1_14) {
    if (WrapperStruct00.var_1_3 <= (8 ^ WrapperStruct00.var_1_8)) {
     WrapperStruct00.var_1_11 = WrapperStruct00.var_1_5;
    } else {
     WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_5 && (! WrapperStruct00.var_1_7));
    }
   } else {
    WrapperStruct00.var_1_11 = WrapperStruct00.var_1_7;
   }
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
 assume_abort_if_not(WrapperStruct00.var_1_3 != 0);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 63);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
 last_1_WrapperStruct00_var_1_15 = WrapperStruct00.var_1_15;
}
int property() {
 return (((((((WrapperStruct00.var_1_14 / WrapperStruct00.var_1_3) >= WrapperStruct00.var_1_14) ? (WrapperStruct00.var_1_1 == ((unsigned char) (WrapperStruct00.var_1_5 && WrapperStruct00.var_1_6))) : (WrapperStruct00.var_1_1 == ((unsigned char) (WrapperStruct00.var_1_5 && WrapperStruct00.var_1_7)))) && ((last_1_WrapperStruct00_var_1_14 > last_1_WrapperStruct00_var_1_15) ? (WrapperStruct00.var_1_8 == ((signed char) (((((-4 + WrapperStruct00.var_1_9)) < (WrapperStruct00.var_1_10)) ? ((-4 + WrapperStruct00.var_1_9)) : (WrapperStruct00.var_1_10))))) : 1)) && (((WrapperStruct00.var_1_13 / WrapperStruct00.var_1_3) > WrapperStruct00.var_1_10) ? ((WrapperStruct00.var_1_7 && WrapperStruct00.var_1_1) ? ((WrapperStruct00.var_1_8 < WrapperStruct00.var_1_14) ? ((WrapperStruct00.var_1_3 <= (8 ^ WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_11 == ((unsigned char) WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_11 == ((unsigned char) (WrapperStruct00.var_1_5 && (! WrapperStruct00.var_1_7))))) : (WrapperStruct00.var_1_11 == ((unsigned char) WrapperStruct00.var_1_7))) : 1) : 1)) && (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_10))) && (WrapperStruct00.var_1_14 == ((unsigned short int) WrapperStruct00.var_1_8))) && (WrapperStruct00.var_1_15 == ((unsigned short int) WrapperStruct00.var_1_3))
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

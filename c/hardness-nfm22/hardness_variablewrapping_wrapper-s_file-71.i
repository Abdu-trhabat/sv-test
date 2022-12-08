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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned short int var_1_8;
 unsigned short int var_1_9;
 unsigned char var_1_10;
 signed char var_1_11;
 signed char var_1_13;
 signed char var_1_14;
 unsigned long int var_1_15;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 16,
 0,
 8,
 8,
 32,
 0,
 1,
 1,
 1,
 128,
 -10,
 -4,
 5,
 2
};
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = WrapperStruct00.var_1_7;
 signed long int stepLocal_0 = WrapperStruct00.var_1_4 - WrapperStruct00.var_1_3;
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_1 = (((((((((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) > (50)) ? ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) : (50)))) > (WrapperStruct00.var_1_5)) ? ((((((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) > (50)) ? ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) : (50)))) : (WrapperStruct00.var_1_5)));
 } else {
  if (WrapperStruct00.var_1_6 && stepLocal_1) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
  } else {
   if (stepLocal_0 < WrapperStruct00.var_1_5) {
    WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
   } else {
    WrapperStruct00.var_1_1 = 5;
   }
  }
 }
 if (WrapperStruct00.var_1_7) {
  WrapperStruct00.var_1_8 = ((((WrapperStruct00.var_1_5) < 0 ) ? -(WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_5)));
 } else {
  WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_1 + WrapperStruct00.var_1_3);
 }
 WrapperStruct00.var_1_13 = WrapperStruct00.var_1_14;
 WrapperStruct00.var_1_15 = WrapperStruct00.var_1_3;
 if (WrapperStruct00.var_1_5 <= ((((WrapperStruct00.var_1_3) > ((WrapperStruct00.var_1_10 - WrapperStruct00.var_1_4))) ? (WrapperStruct00.var_1_3) : ((WrapperStruct00.var_1_10 - WrapperStruct00.var_1_4))))) {
  if ((WrapperStruct00.var_1_4 / WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_15 * (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_5))) {
   WrapperStruct00.var_1_9 = 128;
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 127);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 254);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 255);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
 assume_abort_if_not(WrapperStruct00.var_1_11 != 0);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 126);
}
void updateLastVariables() {
}
int property() {
 return ((((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((unsigned char) (((((((((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) > (50)) ? ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) : (50)))) > (WrapperStruct00.var_1_5)) ? ((((((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) > (50)) ? ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) : (50)))) : (WrapperStruct00.var_1_5))))) : ((WrapperStruct00.var_1_6 && WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_5)) : (((WrapperStruct00.var_1_4 - WrapperStruct00.var_1_3) < WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_4)) : (WrapperStruct00.var_1_1 == ((unsigned char) 5))))) && (WrapperStruct00.var_1_7 ? (WrapperStruct00.var_1_8 == ((unsigned short int) ((((WrapperStruct00.var_1_5) < 0 ) ? -(WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_5))))) : (WrapperStruct00.var_1_8 == ((unsigned short int) (WrapperStruct00.var_1_1 + WrapperStruct00.var_1_3))))) && ((WrapperStruct00.var_1_5 <= ((((WrapperStruct00.var_1_3) > ((WrapperStruct00.var_1_10 - WrapperStruct00.var_1_4))) ? (WrapperStruct00.var_1_3) : ((WrapperStruct00.var_1_10 - WrapperStruct00.var_1_4))))) ? (((WrapperStruct00.var_1_4 / WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_15 * (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_9 == ((unsigned short int) 128)) : 1) : 1)) && (WrapperStruct00.var_1_13 == ((signed char) WrapperStruct00.var_1_14))) && (WrapperStruct00.var_1_15 == ((unsigned long int) WrapperStruct00.var_1_3))
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

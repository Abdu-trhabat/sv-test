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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch16Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 signed short int var_1_3;
 signed short int var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 float var_1_7;
 float var_1_8;
 signed char var_1_9;
 float var_1_10;
 signed char var_1_11;
 signed char var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed short int var_1_15;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 1,
 4,
 256,
 0,
 1,
 1000000.8,
 3.8,
 25,
 2.75,
 0,
 32,
 2,
 2,
 -32
};
signed char last_1_WrapperStruct00_var_1_9 = 25;
void initially(void) {
}
void step(void) {
 if ((last_1_WrapperStruct00_var_1_9 % ((((WrapperStruct00.var_1_3) > (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4)))) <= -1000000) {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_5 || WrapperStruct00.var_1_6);
 }
 WrapperStruct00.var_1_7 = WrapperStruct00.var_1_8;
 signed char stepLocal_2 = WrapperStruct00.var_1_11;
 unsigned char stepLocal_1 = 99999.375 <= WrapperStruct00.var_1_10;
 if (WrapperStruct00.var_1_13 <= stepLocal_2) {
  if ((WrapperStruct00.var_1_8 < WrapperStruct00.var_1_7) && stepLocal_1) {
   WrapperStruct00.var_1_15 = (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14);
  }
 } else {
  WrapperStruct00.var_1_15 = -25;
 }
 unsigned char stepLocal_0 = WrapperStruct00.var_1_6;
 if (WrapperStruct00.var_1_8 < (WrapperStruct00.var_1_7 / WrapperStruct00.var_1_10)) {
  if (WrapperStruct00.var_1_1 || stepLocal_0) {
   WrapperStruct00.var_1_9 = ((((((WrapperStruct00.var_1_11) > (5)) ? (WrapperStruct00.var_1_11) : (5))) + (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13)) - WrapperStruct00.var_1_14);
  } else {
   if (WrapperStruct00.var_1_10 > WrapperStruct00.var_1_8) {
    WrapperStruct00.var_1_9 = WrapperStruct00.var_1_11;
   } else {
    WrapperStruct00.var_1_9 = WrapperStruct00.var_1_12;
   }
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_3 != 0);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_4 != 0);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_10 != 0.0F);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 63);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 31);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 63);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 31);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 126);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_9 = WrapperStruct00.var_1_9;
}
int property() {
 return (((((last_1_WrapperStruct00_var_1_9 % ((((WrapperStruct00.var_1_3) > (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4)))) <= -1000000) ? (WrapperStruct00.var_1_1 == ((unsigned char) (WrapperStruct00.var_1_5 || WrapperStruct00.var_1_6))) : 1) && (WrapperStruct00.var_1_7 == ((float) WrapperStruct00.var_1_8))) && ((WrapperStruct00.var_1_8 < (WrapperStruct00.var_1_7 / WrapperStruct00.var_1_10)) ? ((WrapperStruct00.var_1_1 || WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_9 == ((signed char) ((((((WrapperStruct00.var_1_11) > (5)) ? (WrapperStruct00.var_1_11) : (5))) + (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13)) - WrapperStruct00.var_1_14))) : ((WrapperStruct00.var_1_10 > WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_11)) : (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_12)))) : 1)) && ((WrapperStruct00.var_1_13 <= WrapperStruct00.var_1_11) ? (((WrapperStruct00.var_1_8 < WrapperStruct00.var_1_7) && (99999.375 <= WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_15 == ((signed short int) (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14))) : 1) : (WrapperStruct00.var_1_15 == ((signed short int) -25)))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch62Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 signed char var_1_2;
 unsigned char var_1_3;
 signed char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 signed long int var_1_9;
 signed short int var_1_10;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 32,
 -128,
 1,
 -5,
 16,
 16,
 256,
 1494406358,
 4,
 -32
};
signed char last_1_WrapperStruct00_var_1_1 = 32;
unsigned char last_1_WrapperStruct00_var_1_5 = 16;
signed short int last_1_WrapperStruct00_var_1_10 = -32;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = WrapperStruct00.var_1_4;
 signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_5;
 if (last_1_WrapperStruct00_var_1_5 <= stepLocal_1) {
  if (stepLocal_0 <= WrapperStruct00.var_1_4) {
   WrapperStruct00.var_1_7 = ((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_6) - last_1_WrapperStruct00_var_1_1);
  } else {
   if (! WrapperStruct00.var_1_3) {
    WrapperStruct00.var_1_7 = last_1_WrapperStruct00_var_1_10;
   } else {
    WrapperStruct00.var_1_7 = (last_1_WrapperStruct00_var_1_5 + WrapperStruct00.var_1_6);
   }
  }
 } else {
  WrapperStruct00.var_1_7 = ((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_6) - last_1_WrapperStruct00_var_1_1);
 }
 WrapperStruct00.var_1_10 = WrapperStruct00.var_1_7;
 WrapperStruct00.var_1_1 = (16 - 2);
 if (WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_2 = ((((-4) < 0 ) ? -(-4) : (-4)));
 } else {
  WrapperStruct00.var_1_2 = ((((WrapperStruct00.var_1_4) < 0 ) ? -(WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_4)));
 }
 WrapperStruct00.var_1_9 = WrapperStruct00.var_1_8;
 if (WrapperStruct00.var_1_4 < WrapperStruct00.var_1_9) {
  if (WrapperStruct00.var_1_3) {
   if (WrapperStruct00.var_1_1 != WrapperStruct00.var_1_4) {
    WrapperStruct00.var_1_5 = WrapperStruct00.var_1_6;
   }
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -126);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 126);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 254);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 1073741822);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483646);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
 last_1_WrapperStruct00_var_1_5 = WrapperStruct00.var_1_5;
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property() {
 return (((((WrapperStruct00.var_1_1 == ((signed char) (16 - 2))) && (WrapperStruct00.var_1_3 ? (WrapperStruct00.var_1_2 == ((signed char) ((((-4) < 0 ) ? -(-4) : (-4))))) : (WrapperStruct00.var_1_2 == ((signed char) ((((WrapperStruct00.var_1_4) < 0 ) ? -(WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_4))))))) && ((WrapperStruct00.var_1_4 < WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_3 ? ((WrapperStruct00.var_1_1 != WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_5 == ((unsigned char) WrapperStruct00.var_1_6)) : 1) : 1) : 1)) && ((last_1_WrapperStruct00_var_1_5 <= WrapperStruct00.var_1_4) ? ((last_1_WrapperStruct00_var_1_5 <= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_7 == ((signed long int) ((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_6) - last_1_WrapperStruct00_var_1_1))) : ((! WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_7 == ((signed long int) last_1_WrapperStruct00_var_1_10)) : (WrapperStruct00.var_1_7 == ((signed long int) (last_1_WrapperStruct00_var_1_5 + WrapperStruct00.var_1_6))))) : (WrapperStruct00.var_1_7 == ((signed long int) ((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_6) - last_1_WrapperStruct00_var_1_1))))) && (WrapperStruct00.var_1_9 == ((signed long int) WrapperStruct00.var_1_8))) && (WrapperStruct00.var_1_10 == ((signed short int) WrapperStruct00.var_1_7))
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

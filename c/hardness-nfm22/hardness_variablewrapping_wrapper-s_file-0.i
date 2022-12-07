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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct0;
struct WrapperStruct0 {
 double var_1_1;
 unsigned char var_1_2;
 double var_1_3;
 double var_1_4;
 double var_1_5;
 unsigned char var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_12;
 unsigned short int var_1_13;
};
unsigned char isInitial = 0;
struct WrapperStruct0 WrapperStruct0 = {
 25.8,
 1,
 128.2,
 15.4,
 5.25,
 1,
 100,
 1,
 5
};
double last_1_WrapperStruct0_var_1_5 = 5.25;
unsigned char last_1_WrapperStruct0_var_1_10 = 100;
unsigned short int last_1_WrapperStruct0_var_1_13 = 5;
void initially(void) {
}
void step(void) {
 if (WrapperStruct0.var_1_9) {
  if ((WrapperStruct0.var_1_4 * (WrapperStruct0.var_1_3 - 5.3)) <= last_1_WrapperStruct0_var_1_5) {
   WrapperStruct0.var_1_13 = last_1_WrapperStruct0_var_1_10;
  }
 }
 if ((last_1_WrapperStruct0_var_1_13 + last_1_WrapperStruct0_var_1_13) < last_1_WrapperStruct0_var_1_13) {
  if (last_1_WrapperStruct0_var_1_13 > last_1_WrapperStruct0_var_1_13) {
   WrapperStruct0.var_1_10 = WrapperStruct0.var_1_12;
  }
 }
 if (! WrapperStruct0.var_1_2) {
  WrapperStruct0.var_1_1 = (WrapperStruct0.var_1_3 - WrapperStruct0.var_1_4);
 } else {
  WrapperStruct0.var_1_1 = ((((16.2) < (WrapperStruct0.var_1_3)) ? (16.2) : (WrapperStruct0.var_1_3)));
 }
 if ((WrapperStruct0.var_1_3 + (WrapperStruct0.var_1_4 + WrapperStruct0.var_1_1)) != WrapperStruct0.var_1_1) {
  if (WrapperStruct0.var_1_2) {
   if ((- WrapperStruct0.var_1_13) <= WrapperStruct0.var_1_10) {
    if (WrapperStruct0.var_1_9) {
     WrapperStruct0.var_1_5 = WrapperStruct0.var_1_4;
    }
   } else {
    WrapperStruct0.var_1_5 = WrapperStruct0.var_1_3;
   }
  } else {
   WrapperStruct0.var_1_5 = WrapperStruct0.var_1_3;
  }
 } else {
  WrapperStruct0.var_1_5 = WrapperStruct0.var_1_3;
 }
}
void updateVariables() {
 WrapperStruct0.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct0.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct0.var_1_2 <= 1);
 WrapperStruct0.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct0.var_1_3 >= 0.0F && WrapperStruct0.var_1_3 <= -1.0e-20F) || (WrapperStruct0.var_1_3 <= 9223372.036854765600e+12F && WrapperStruct0.var_1_3 >= 1.0e-20F ));
 WrapperStruct0.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct0.var_1_4 >= 0.0F && WrapperStruct0.var_1_4 <= -1.0e-20F) || (WrapperStruct0.var_1_4 <= 9223372.036854765600e+12F && WrapperStruct0.var_1_4 >= 1.0e-20F ));
 WrapperStruct0.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct0.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct0.var_1_9 <= 1);
 WrapperStruct0.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct0.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct0.var_1_12 <= 254);
}
void updateLastVariables() {
 last_1_WrapperStruct0_var_1_5 = WrapperStruct0.var_1_5;
 last_1_WrapperStruct0_var_1_10 = WrapperStruct0.var_1_10;
 last_1_WrapperStruct0_var_1_13 = WrapperStruct0.var_1_13;
}
int property() {
 return ((((! WrapperStruct0.var_1_2) ? (WrapperStruct0.var_1_1 == ((double) (WrapperStruct0.var_1_3 - WrapperStruct0.var_1_4))) : (WrapperStruct0.var_1_1 == ((double) ((((16.2) < (WrapperStruct0.var_1_3)) ? (16.2) : (WrapperStruct0.var_1_3)))))) && (((WrapperStruct0.var_1_3 + (WrapperStruct0.var_1_4 + WrapperStruct0.var_1_1)) != WrapperStruct0.var_1_1) ? (WrapperStruct0.var_1_2 ? (((- WrapperStruct0.var_1_13) <= WrapperStruct0.var_1_10) ? (WrapperStruct0.var_1_9 ? (WrapperStruct0.var_1_5 == ((double) WrapperStruct0.var_1_4)) : 1) : (WrapperStruct0.var_1_5 == ((double) WrapperStruct0.var_1_3))) : (WrapperStruct0.var_1_5 == ((double) WrapperStruct0.var_1_3))) : (WrapperStruct0.var_1_5 == ((double) WrapperStruct0.var_1_3)))) && (((last_1_WrapperStruct0_var_1_13 + last_1_WrapperStruct0_var_1_13) < last_1_WrapperStruct0_var_1_13) ? ((last_1_WrapperStruct0_var_1_13 > last_1_WrapperStruct0_var_1_13) ? (WrapperStruct0.var_1_10 == ((unsigned char) WrapperStruct0.var_1_12)) : 1) : 1)) && (WrapperStruct0.var_1_9 ? (((WrapperStruct0.var_1_4 * (WrapperStruct0.var_1_3 - 5.3)) <= last_1_WrapperStruct0_var_1_5) ? (WrapperStruct0.var_1_13 == ((unsigned short int) last_1_WrapperStruct0_var_1_10)) : 1) : 1)
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

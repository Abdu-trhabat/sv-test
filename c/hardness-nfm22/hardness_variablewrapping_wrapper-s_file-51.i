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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch51Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 unsigned char var_1_2;
 signed short int var_1_5;
 double var_1_6;
 double var_1_7;
 double var_1_8;
 double var_1_9;
 unsigned long int var_1_10;
 unsigned long int var_1_11;
 unsigned long int var_1_12;
 unsigned long int var_1_13;
 unsigned long int var_1_15;
 unsigned long int var_1_16;
 unsigned long int var_1_17;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 10.8,
 0,
 -16,
 100.01,
 999999999.4,
 10.6,
 127.5,
 1,
 2467894503,
 2565572511,
 500,
 2277019112,
 2745650083,
 8
};
unsigned long int last_1_WrapperStruct00_var_1_17 = 8;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = - last_1_WrapperStruct00_var_1_17;
 if ((((((WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_12))) - WrapperStruct00.var_1_13) != stepLocal_1) {
  WrapperStruct00.var_1_10 = (((((WrapperStruct00.var_1_15) < (WrapperStruct00.var_1_16)) ? (WrapperStruct00.var_1_15) : (WrapperStruct00.var_1_16))) - WrapperStruct00.var_1_13);
 } else {
  WrapperStruct00.var_1_10 = WrapperStruct00.var_1_15;
 }
 if (WrapperStruct00.var_1_10 <= WrapperStruct00.var_1_10) {
  if (WrapperStruct00.var_1_2 && (WrapperStruct00.var_1_10 == ((((WrapperStruct00.var_1_16) > (WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_12))))) {
   if (WrapperStruct00.var_1_10 < WrapperStruct00.var_1_11) {
    WrapperStruct00.var_1_17 = WrapperStruct00.var_1_15;
   }
  }
 } else {
  WrapperStruct00.var_1_17 = WrapperStruct00.var_1_16;
 }
 unsigned long int stepLocal_0 = WrapperStruct00.var_1_10;
 if (WrapperStruct00.var_1_2) {
  if (stepLocal_0 >= (WrapperStruct00.var_1_10 / WrapperStruct00.var_1_5)) {
   WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_6) < 0 ) ? -(WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_6)));
  } else {
   WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_7 + ((((WrapperStruct00.var_1_8) > ((WrapperStruct00.var_1_9 + 63.25))) ? (WrapperStruct00.var_1_8) : ((WrapperStruct00.var_1_9 + 63.25)))));
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -230584.3009213691390e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 2305843.009213691390e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967295);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 4294967295);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 4294967294);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 4294967294);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}
int property() {
 return ((WrapperStruct00.var_1_2 ? ((WrapperStruct00.var_1_10 >= (WrapperStruct00.var_1_10 / WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_1 == ((double) ((((WrapperStruct00.var_1_6) < 0 ) ? -(WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_6))))) : (WrapperStruct00.var_1_1 == ((double) (WrapperStruct00.var_1_7 + ((((WrapperStruct00.var_1_8) > ((WrapperStruct00.var_1_9 + 63.25))) ? (WrapperStruct00.var_1_8) : ((WrapperStruct00.var_1_9 + 63.25)))))))) : (WrapperStruct00.var_1_1 == ((double) WrapperStruct00.var_1_8))) && (((((((WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_12))) - WrapperStruct00.var_1_13) != (- last_1_WrapperStruct00_var_1_17)) ? (WrapperStruct00.var_1_10 == ((unsigned long int) (((((WrapperStruct00.var_1_15) < (WrapperStruct00.var_1_16)) ? (WrapperStruct00.var_1_15) : (WrapperStruct00.var_1_16))) - WrapperStruct00.var_1_13))) : (WrapperStruct00.var_1_10 == ((unsigned long int) WrapperStruct00.var_1_15)))) && ((WrapperStruct00.var_1_10 <= WrapperStruct00.var_1_10) ? ((WrapperStruct00.var_1_2 && (WrapperStruct00.var_1_10 == ((((WrapperStruct00.var_1_16) > (WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_12))))) ? ((WrapperStruct00.var_1_10 < WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_17 == ((unsigned long int) WrapperStruct00.var_1_15)) : 1) : 1) : (WrapperStruct00.var_1_17 == ((unsigned long int) WrapperStruct00.var_1_16)))
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

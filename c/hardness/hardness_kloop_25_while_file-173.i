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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17325_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 4.5;
float var_1_2 = 100000000.75;
float var_1_3 = 0.29600000000000004;
signed char var_1_4 = 5;
signed char var_1_5 = 2;
unsigned char var_1_6 = 5;
signed long int var_1_7 = 1;
signed long int var_1_8 = 2;
double var_1_9 = 15.8;
double var_1_10 = 5.1;
double var_1_11 = 2.8;
double var_1_12 = 15.2;
unsigned long int var_1_13 = 1000000000;
unsigned char var_1_14 = 1;
float var_1_15 = 7.5;
void initially(void) {
}
void step(void) {
 if (var_1_2 < var_1_3) {
  if ((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) << var_1_6) < ((~ var_1_7) / var_1_8)) {
   var_1_1 = (((((var_1_9 - var_1_10)) < ((var_1_11 - var_1_12))) ? ((var_1_9 - var_1_10)) : ((var_1_11 - var_1_12))));
  }
 }
 if ((var_1_12 < var_1_10) || var_1_14) {
  if (var_1_14 || (var_1_9 <= var_1_1)) {
   var_1_13 = 50u;
  }
 } else {
  var_1_13 = var_1_7;
 }
 signed long int stepLocal_0 = ~ ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)));
 if (stepLocal_0 >= var_1_4) {
  var_1_15 = var_1_9;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 24);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 < var_1_3) ? (((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) << var_1_6) < ((~ var_1_7) / var_1_8)) ? (var_1_1 == ((double) (((((var_1_9 - var_1_10)) < ((var_1_11 - var_1_12))) ? ((var_1_9 - var_1_10)) : ((var_1_11 - var_1_12)))))) : 1) : 1) && (((var_1_12 < var_1_10) || var_1_14) ? ((var_1_14 || (var_1_9 <= var_1_1)) ? (var_1_13 == ((unsigned long int) 50u)) : 1) : (var_1_13 == ((unsigned long int) var_1_7)))) && (((~ ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) >= var_1_4) ? (var_1_15 == ((float) var_1_9)) : 1)
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

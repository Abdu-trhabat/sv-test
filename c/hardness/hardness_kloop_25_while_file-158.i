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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15825_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 64;
double var_1_2 = 15.5;
double var_1_3 = 9.3;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 64;
signed long int var_1_6 = -10000;
unsigned char var_1_8 = 0;
double var_1_9 = 500.8;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 200;
float var_1_15 = -0.5;
unsigned char last_1_var_1_11 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_2 / var_1_9) <= var_1_3) {
  if (last_1_var_1_11) {
   var_1_8 = (! var_1_10);
  }
 }
 unsigned char stepLocal_0 = var_1_13;
 if (var_1_8) {
  var_1_11 = (var_1_8 && (! var_1_13));
 } else {
  if (stepLocal_0 && var_1_8) {
   var_1_11 = (var_1_10 || (! var_1_13));
  }
 }
 if (var_1_2 >= var_1_3) {
  var_1_1 = ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)));
 } else {
  var_1_1 = var_1_5;
 }
 if (var_1_8) {
  var_1_6 = (var_1_5 + -128);
 }
 var_1_14 = var_1_5;
 var_1_15 = 32.5f;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 return ((((((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned char) ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) : (var_1_1 == ((unsigned char) var_1_5))) && (var_1_8 ? (var_1_6 == ((signed long int) (var_1_5 + -128))) : 1)) && (((var_1_2 / var_1_9) <= var_1_3) ? (last_1_var_1_11 ? (var_1_8 == ((unsigned char) (! var_1_10))) : 1) : 1)) && (var_1_8 ? (var_1_11 == ((unsigned char) (var_1_8 && (! var_1_13)))) : ((var_1_13 && var_1_8) ? (var_1_11 == ((unsigned char) (var_1_10 || (! var_1_13)))) : 1))) && (var_1_14 == ((unsigned char) var_1_5))) && (var_1_15 == ((float) 32.5f))
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

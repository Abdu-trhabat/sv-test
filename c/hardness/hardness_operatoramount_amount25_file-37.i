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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 8;
unsigned short int var_1_2 = 59049;
unsigned short int var_1_3 = 100;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 64;
unsigned long int var_1_9 = 64;
unsigned long int var_1_10 = 1776833134;
signed long int var_1_11 = -16;
double var_1_12 = 0.25;
double var_1_13 = 5.5;
unsigned char last_1_var_1_1 = 8;
unsigned long int last_1_var_1_9 = 64;
signed long int last_1_var_1_11 = -16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_11;
 if (stepLocal_0 > last_1_var_1_1) {
  var_1_9 = var_1_2;
 } else {
  var_1_9 = ((1228227409u + var_1_10) - last_1_var_1_9);
 }
 var_1_11 = var_1_9;
 if (((var_1_2 - var_1_3) ^ (var_1_9 * var_1_11)) <= -64) {
  var_1_1 = ((((1) < (((((16) > (var_1_6)) ? (16) : (var_1_6))))) ? (1) : (((((16) > (var_1_6)) ? (16) : (var_1_6))))));
 } else {
  if (var_1_7) {
   var_1_1 = var_1_6;
  }
 }
 if (var_1_9 >= ((((var_1_9 / var_1_2) < 0 ) ? -(var_1_9 / var_1_2) : (var_1_9 / var_1_2)))) {
  var_1_8 = var_1_6;
 } else {
  if (var_1_7) {
   var_1_8 = var_1_6;
  }
 }
 var_1_12 = var_1_13;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 32767);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1073741824);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 return (((((((var_1_2 - var_1_3) ^ (var_1_9 * var_1_11)) <= -64) ? (var_1_1 == ((unsigned char) ((((1) < (((((16) > (var_1_6)) ? (16) : (var_1_6))))) ? (1) : (((((16) > (var_1_6)) ? (16) : (var_1_6)))))))) : (var_1_7 ? (var_1_1 == ((unsigned char) var_1_6)) : 1)) && ((var_1_9 >= ((((var_1_9 / var_1_2) < 0 ) ? -(var_1_9 / var_1_2) : (var_1_9 / var_1_2)))) ? (var_1_8 == ((unsigned char) var_1_6)) : (var_1_7 ? (var_1_8 == ((unsigned char) var_1_6)) : 1))) && ((last_1_var_1_11 > last_1_var_1_1) ? (var_1_9 == ((unsigned long int) var_1_2)) : (var_1_9 == ((unsigned long int) ((1228227409u + var_1_10) - last_1_var_1_9))))) && (var_1_11 == ((signed long int) var_1_9))) && (var_1_12 == ((double) var_1_13))
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

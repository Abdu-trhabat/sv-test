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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1825_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 99.25;
signed short int var_1_6 = 32;
signed short int var_1_7 = 18477;
signed short int var_1_8 = 5;
float var_1_9 = 100.8;
unsigned long int var_1_10 = 256;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 10;
unsigned long int var_1_13 = 1879106797;
unsigned long int var_1_14 = 1581421231;
signed long int var_1_15 = -32;
unsigned long int last_1_var_1_10 = 256;
signed long int last_1_var_1_15 = -32;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = last_1_var_1_10;
 unsigned long int stepLocal_0 = last_1_var_1_10 ^ ((((last_1_var_1_15) > (last_1_var_1_10)) ? (last_1_var_1_15) : (last_1_var_1_10)));
 if (stepLocal_0 != last_1_var_1_10) {
  if (stepLocal_1 == (var_1_6 - (var_1_7 - var_1_8))) {
   var_1_1 = var_1_9;
  }
 } else {
  var_1_1 = var_1_9;
 }
 signed short int stepLocal_2 = var_1_6;
 if (var_1_11) {
  if ((var_1_7 % var_1_12) >= stepLocal_2) {
   var_1_10 = ((var_1_13 + var_1_14) - var_1_7);
  } else {
   var_1_10 = var_1_12;
  }
 } else {
  var_1_10 = var_1_7;
 }
 unsigned long int stepLocal_3 = var_1_10;
 if (var_1_1 <= var_1_9) {
  if (stepLocal_3 > (last_1_var_1_15 + (var_1_10 + var_1_7))) {
   var_1_15 = var_1_7;
  } else {
   var_1_15 = -5;
  }
 } else {
  var_1_15 = var_1_7;
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 16383);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 255);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 1073741823);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 1073741824);
 assume_abort_if_not(var_1_14 <= 2147483647);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_15 = var_1_15;
}
int property() {
 return ((((last_1_var_1_10 ^ ((((last_1_var_1_15) > (last_1_var_1_10)) ? (last_1_var_1_15) : (last_1_var_1_10)))) != last_1_var_1_10) ? ((last_1_var_1_10 == (var_1_6 - (var_1_7 - var_1_8))) ? (var_1_1 == ((float) var_1_9)) : 1) : (var_1_1 == ((float) var_1_9))) && (var_1_11 ? (((var_1_7 % var_1_12) >= var_1_6) ? (var_1_10 == ((unsigned long int) ((var_1_13 + var_1_14) - var_1_7))) : (var_1_10 == ((unsigned long int) var_1_12))) : (var_1_10 == ((unsigned long int) var_1_7)))) && ((var_1_1 <= var_1_9) ? ((var_1_10 > (last_1_var_1_15 + (var_1_10 + var_1_7))) ? (var_1_15 == ((signed long int) var_1_7)) : (var_1_15 == ((signed long int) -5))) : (var_1_15 == ((signed long int) var_1_7)))
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

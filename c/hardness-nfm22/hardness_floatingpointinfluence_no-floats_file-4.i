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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch4no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 5;
signed short int var_1_3 = -25;
unsigned short int var_1_7 = 4;
unsigned char var_1_8 = 4;
unsigned char var_1_10 = 4;
unsigned char var_1_11 = 8;
unsigned long int var_1_12 = 10;
signed long int var_1_13 = 99;
signed long int var_1_14 = 127;
signed long int var_1_15 = 16;
signed long int var_1_16 = 256;
unsigned long int var_1_17 = 4288034294;
unsigned char var_1_18 = 0;
unsigned long int last_1_var_1_12 = 10;
unsigned char last_1_var_1_18 = 0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_2 = last_1_var_1_12 / var_1_3;
 if (stepLocal_2 != (last_1_var_1_18 - 64)) {
  var_1_8 = ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)));
 } else {
  var_1_8 = ((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)));
 }
 if ((- (var_1_13 / 0.6f)) > ((var_1_14 + 3.25f) / ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) {
  var_1_12 = (500u + ((((var_1_10) < (var_1_8)) ? (var_1_10) : (var_1_8))));
 } else {
  var_1_12 = (var_1_17 - var_1_10);
 }
 var_1_18 = var_1_11;
 var_1_7 = var_1_18;
 signed long int stepLocal_1 = - var_1_3;
 signed long int stepLocal_0 = var_1_7 / var_1_3;
 if (stepLocal_0 >= var_1_7) {
  if (stepLocal_1 > var_1_7) {
   var_1_1 = ((((var_1_8) < (var_1_18)) ? (var_1_8) : (var_1_18)));
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 assume_abort_if_not(var_1_3 != 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -2147483648);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483648);
 assume_abort_if_not(var_1_15 <= 2147483647);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
}
void updateLastVariables() {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_18 = var_1_18;
}
int property() {
 return ((((((var_1_7 / var_1_3) >= var_1_7) ? (((- var_1_3) > var_1_7) ? (var_1_1 == ((unsigned short int) ((((var_1_8) < (var_1_18)) ? (var_1_8) : (var_1_18))))) : 1) : 1) && (var_1_7 == ((unsigned short int) var_1_18))) && (((last_1_var_1_12 / var_1_3) != (last_1_var_1_18 - 64)) ? (var_1_8 == ((unsigned char) ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))) : (var_1_8 == ((unsigned char) ((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10))))))) && (((- (var_1_13 / 0.6f)) > ((var_1_14 + 3.25f) / ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) ? (var_1_12 == ((unsigned long int) (500u + ((((var_1_10) < (var_1_8)) ? (var_1_10) : (var_1_8)))))) : (var_1_12 == ((unsigned long int) (var_1_17 - var_1_10))))) && (var_1_18 == ((unsigned char) var_1_11))
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

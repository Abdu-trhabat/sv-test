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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2525_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 256;
unsigned short int var_1_3 = 10;
unsigned short int var_1_4 = 500;
unsigned long int var_1_5 = 5;
unsigned char var_1_6 = 0;
signed short int var_1_8 = 16;
signed short int var_1_9 = 21259;
signed short int var_1_10 = 8;
unsigned char var_1_11 = 0;
signed char var_1_12 = -1;
signed short int var_1_13 = -2;
signed char var_1_14 = -10;
signed char var_1_15 = -4;
signed char var_1_16 = -1;
unsigned char last_1_var_1_6 = 0;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_0 = var_1_4;
 if (last_1_var_1_6) {
  if (var_1_3 <= stepLocal_0) {
   var_1_1 = (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) + var_1_5);
  }
 } else {
  var_1_1 = var_1_5;
 }
 unsigned long int stepLocal_1 = var_1_1;
 if (((~ -128) / ((((var_1_9) > (var_1_13)) ? (var_1_9) : (var_1_13)))) > stepLocal_1) {
  var_1_12 = ((var_1_14 + var_1_15) + var_1_16);
 } else {
  var_1_12 = var_1_16;
 }
 if (((1 + var_1_8) - (var_1_9 - var_1_10)) != var_1_1) {
  var_1_6 = ((var_1_8 >= var_1_12) && (! 1));
 } else {
  var_1_6 = var_1_11;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 16383);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32768);
 assume_abort_if_not(var_1_13 <= 32767);
 assume_abort_if_not(var_1_13 != 0);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -31);
 assume_abort_if_not(var_1_14 <= 32);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -31);
 assume_abort_if_not(var_1_15 <= 31);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
}
int property() {
 return ((last_1_var_1_6 ? ((var_1_3 <= var_1_4) ? (var_1_1 == ((unsigned long int) (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) + var_1_5))) : 1) : (var_1_1 == ((unsigned long int) var_1_5))) && ((((1 + var_1_8) - (var_1_9 - var_1_10)) != var_1_1) ? (var_1_6 == ((unsigned char) ((var_1_8 >= var_1_12) && (! 1)))) : (var_1_6 == ((unsigned char) var_1_11)))) && ((((~ -128) / ((((var_1_9) > (var_1_13)) ? (var_1_9) : (var_1_13)))) > var_1_1) ? (var_1_12 == ((signed char) ((var_1_14 + var_1_15) + var_1_16))) : (var_1_12 == ((signed char) var_1_16)))
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

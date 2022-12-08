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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 0;
signed short int var_1_3 = 2;
unsigned char var_1_7 = 4;
signed long int var_1_8 = 4;
signed long int var_1_9 = 5;
signed long int var_1_10 = 64;
unsigned char var_1_11 = 50;
signed short int var_1_12 = -16;
unsigned long int var_1_13 = 3692501140;
unsigned char var_1_16 = 0;
unsigned long int var_1_17 = 3790537729;
unsigned char var_1_18 = 0;
signed short int last_1_var_1_1 = 0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_2 = var_1_13;
 if (((var_1_17 - 100u) - (var_1_11 + last_1_var_1_1)) < stepLocal_2) {
  var_1_16 = var_1_18;
 }
 signed long int stepLocal_0 = var_1_9 - var_1_10;
 if ((var_1_3 / var_1_8) <= stepLocal_0) {
  if (var_1_16) {
   var_1_7 = var_1_11;
  }
 }
 unsigned long int stepLocal_1 = 0u;
 if (stepLocal_1 >= (((((var_1_13 - var_1_7)) > (var_1_7)) ? ((var_1_13 - var_1_7)) : (var_1_7)))) {
  var_1_12 = (var_1_7 - var_1_7);
 }
 if (! var_1_16) {
  var_1_1 = (((((var_1_7 + (var_1_7 + var_1_7))) < (var_1_7)) ? ((var_1_7 + (var_1_7 + var_1_7))) : (var_1_7)));
 } else {
  var_1_1 = ((((var_1_7) < (var_1_7)) ? (var_1_7) : (var_1_7)));
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -16383);
 assume_abort_if_not(var_1_3 <= 16383);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967295);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 3221225471);
 assume_abort_if_not(var_1_17 <= 4294967295);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
}
int property() {
 return ((((! var_1_16) ? (var_1_1 == ((signed short int) (((((var_1_7 + (var_1_7 + var_1_7))) < (var_1_7)) ? ((var_1_7 + (var_1_7 + var_1_7))) : (var_1_7))))) : (var_1_1 == ((signed short int) ((((var_1_7) < (var_1_7)) ? (var_1_7) : (var_1_7)))))) && (((var_1_3 / var_1_8) <= (var_1_9 - var_1_10)) ? (var_1_16 ? (var_1_7 == ((unsigned char) var_1_11)) : 1) : 1)) && ((0u >= (((((var_1_13 - var_1_7)) > (var_1_7)) ? ((var_1_13 - var_1_7)) : (var_1_7)))) ? (var_1_12 == ((signed short int) (var_1_7 - var_1_7))) : 1)) && ((((var_1_17 - 100u) - (var_1_11 + last_1_var_1_1)) < var_1_13) ? (var_1_16 == ((unsigned char) var_1_18)) : 1)
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch29no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 2;
signed long int var_1_3 = 9;
signed long int var_1_4 = 3;
unsigned short int var_1_5 = 32;
unsigned short int var_1_9 = 1;
unsigned char var_1_10 = 8;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 8;
void initially(void) {
}
void step(void) {
 var_1_12 = var_1_13;
 var_1_14 = var_1_11;
 if (var_1_12) {
  var_1_1 = var_1_3;
 } else {
  if (! (var_1_3 < var_1_4)) {
   var_1_1 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
  }
 }
 if ((var_1_1 + 8.125) > (var_1_1 * var_1_3)) {
  var_1_5 = (((((var_1_14 + var_1_14)) > (var_1_14)) ? ((var_1_14 + var_1_14)) : (var_1_14)));
 } else {
  var_1_5 = var_1_14;
 }
 signed long int stepLocal_0 = 5 * var_1_14;
 if (((((var_1_3) < (var_1_1)) ? (var_1_3) : (var_1_1))) == var_1_1) {
  if (var_1_14 > stepLocal_0) {
   if (var_1_1 < (var_1_1 * 256.5f)) {
    var_1_9 = var_1_14;
   }
  }
 }
 if (var_1_1 < var_1_3) {
  var_1_10 = var_1_11;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
}
void updateLastVariables() {
}
int property() {
 return (((((var_1_12 ? (var_1_1 == ((signed long int) var_1_3)) : ((! (var_1_3 < var_1_4)) ? (var_1_1 == ((signed long int) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) : 1)) && (((var_1_1 + 8.125) > (var_1_1 * var_1_3)) ? (var_1_5 == ((unsigned short int) (((((var_1_14 + var_1_14)) > (var_1_14)) ? ((var_1_14 + var_1_14)) : (var_1_14))))) : (var_1_5 == ((unsigned short int) var_1_14)))) && ((((((var_1_3) < (var_1_1)) ? (var_1_3) : (var_1_1))) == var_1_1) ? ((var_1_14 > (5 * var_1_14)) ? ((var_1_1 < (var_1_1 * 256.5f)) ? (var_1_9 == ((unsigned short int) var_1_14)) : 1) : 1) : 1)) && ((var_1_1 < var_1_3) ? (var_1_10 == ((unsigned char) var_1_11)) : 1)) && (var_1_12 == ((unsigned char) var_1_13))) && (var_1_14 == ((unsigned char) var_1_11))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch69no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -100;
unsigned long int var_1_2 = 0;
unsigned long int var_1_3 = 8;
unsigned long int var_1_4 = 256;
unsigned long int var_1_5 = 500;
signed char var_1_7 = -64;
signed char var_1_8 = -8;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
signed long int var_1_11 = 4;
signed long int var_1_13 = 15;
void initially(void) {
}
void step(void) {
 if (var_1_2 < (((((var_1_4 * var_1_5)) > (var_1_3)) ? ((var_1_4 * var_1_5)) : (var_1_3)))) {
  var_1_7 = var_1_8;
 } else {
  if (var_1_9 || var_1_10) {
   var_1_7 = var_1_8;
  } else {
   if (var_1_3 < var_1_4) {
    var_1_7 = var_1_8;
   } else {
    var_1_7 = -4;
   }
  }
 }
 unsigned long int stepLocal_1 = var_1_5;
 unsigned long int stepLocal_0 = var_1_2 * ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)));
 if (stepLocal_0 < var_1_5) {
  if (stepLocal_1 > var_1_2) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = var_1_7;
  }
 }
 unsigned char stepLocal_3 = var_1_9;
 signed long int stepLocal_2 = var_1_1 + var_1_7;
 if (((var_1_7 + var_1_8) == var_1_4) && stepLocal_3) {
  if (! var_1_10) {
   if (stepLocal_2 != var_1_8) {
    var_1_11 = var_1_13;
   } else {
    var_1_11 = var_1_13;
   }
  } else {
   var_1_11 = var_1_13;
  }
 } else {
  var_1_11 = var_1_13;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
}
void updateLastVariables() {
}
int property() {
 return ((((var_1_2 * ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) < var_1_5) ? ((var_1_5 > var_1_2) ? (var_1_1 == ((signed short int) var_1_7)) : (var_1_1 == ((signed short int) var_1_7))) : 1) && ((var_1_2 < (((((var_1_4 * var_1_5)) > (var_1_3)) ? ((var_1_4 * var_1_5)) : (var_1_3)))) ? (var_1_7 == ((signed char) var_1_8)) : ((var_1_9 || var_1_10) ? (var_1_7 == ((signed char) var_1_8)) : ((var_1_3 < var_1_4) ? (var_1_7 == ((signed char) var_1_8)) : (var_1_7 == ((signed char) -4)))))) && ((((var_1_7 + var_1_8) == var_1_4) && var_1_9) ? ((! var_1_10) ? (((var_1_1 + var_1_7) != var_1_8) ? (var_1_11 == ((signed long int) var_1_13)) : (var_1_11 == ((signed long int) var_1_13))) : (var_1_11 == ((signed long int) var_1_13))) : (var_1_11 == ((signed long int) var_1_13)))
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

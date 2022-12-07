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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 1000000000;
unsigned char var_1_3 = 1;
signed long int var_1_4 = 8;
signed long int var_1_5 = -32;
signed long int var_1_9 = 100;
signed long int var_1_12 = 25;
signed long int var_1_13 = 63;
signed long int var_1_14 = 0;
signed long int var_1_15 = 0;
signed char var_1_16 = -8;
signed char var_1_17 = 8;
unsigned short int var_1_18 = 2;
unsigned short int var_1_19 = 50;
unsigned short int var_1_20 = 0;
signed long int last_1_var_1_9 = 100;
void initially(void) {
}
void step(void) {
 if (0.625f > last_1_var_1_9) {
  if (var_1_3) {
   var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  }
 } else {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 var_1_16 = var_1_17;
 var_1_18 = var_1_19;
 var_1_20 = var_1_19;
 if (var_1_3) {
  if (var_1_20 >= ((var_1_18 - var_1_20) * 64)) {
   var_1_9 = (((((var_1_12) < (50.5)) ? (var_1_12) : (50.5))) - var_1_13);
  }
 } else {
  if (var_1_1 <= var_1_1) {
   var_1_9 = (var_1_13 - (var_1_14 - var_1_15));
  }
 }
 if (var_1_4 > var_1_9) {
  var_1_5 = (((((var_1_20) > (-64)) ? (var_1_20) : (-64))) + ((var_1_20 + -2) + var_1_18));
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 65534);
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
}
int property() {
 return ((((((0.625f > last_1_var_1_9) ? (var_1_3 ? (var_1_1 == ((signed long int) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : 1) : (var_1_1 == ((signed long int) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) && ((var_1_4 > var_1_9) ? (var_1_5 == ((signed long int) (((((var_1_20) > (-64)) ? (var_1_20) : (-64))) + ((var_1_20 + -2) + var_1_18)))) : 1)) && (var_1_3 ? ((var_1_20 >= ((var_1_18 - var_1_20) * 64)) ? (var_1_9 == ((signed long int) (((((var_1_12) < (50.5)) ? (var_1_12) : (50.5))) - var_1_13))) : 1) : ((var_1_1 <= var_1_1) ? (var_1_9 == ((signed long int) (var_1_13 - (var_1_14 - var_1_15)))) : 1))) && (var_1_16 == ((signed char) var_1_17))) && (var_1_18 == ((unsigned short int) var_1_19))) && (var_1_20 == ((unsigned short int) var_1_19))
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

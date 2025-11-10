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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 16;
signed char var_1_4 = 0;
signed char var_1_5 = 8;
signed long int var_1_6 = 10;
signed long int var_1_7 = 64;
signed long int var_1_8 = 5;
signed long int var_1_9 = -50;
signed long int var_1_10 = -2;
signed long int var_1_11 = 16;
signed long int var_1_12 = 0;
signed long int var_1_13 = 5;
unsigned long int var_1_14 = 32;
signed short int var_1_15 = 128;
unsigned long int var_1_16 = 4128352951;
unsigned long int var_1_17 = 100;
signed short int var_1_18 = 32;
signed long int var_1_19 = 2;
signed short int var_1_20 = -100;
void initially(void) {
}
void step(void) {
 if (256 <= (- (var_1_13 * var_1_9))) {
  var_1_14 = var_1_5;
 } else {
  var_1_14 = (var_1_5 + ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))));
 }
 unsigned long int stepLocal_1 = var_1_16 - (var_1_5 + var_1_17);
 if (stepLocal_1 != (64u | var_1_14)) {
  var_1_15 = ((((var_1_5 - var_1_18) < 0 ) ? -(var_1_5 - var_1_18) : (var_1_5 - var_1_18)));
 } else {
  var_1_15 = var_1_14;
 }
 var_1_19 = 128;
 var_1_20 = var_1_4;
 unsigned long int stepLocal_0 = var_1_14 + (var_1_4 - var_1_5);
 if (stepLocal_0 > (var_1_6 - var_1_7)) {
  if ((var_1_8 + var_1_9) <= var_1_10) {
   var_1_1 = (var_1_11 + (var_1_12 - var_1_13));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967295);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1073741823);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_14 + (var_1_4 - var_1_5)) > (var_1_6 - var_1_7)) ? (((var_1_8 + var_1_9) <= var_1_10) ? (var_1_1 == ((signed long int) (var_1_11 + (var_1_12 - var_1_13)))) : 1) : 1) && ((256 <= (- (var_1_13 * var_1_9))) ? (var_1_14 == ((unsigned long int) var_1_5)) : (var_1_14 == ((unsigned long int) (var_1_5 + ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))))) && (((var_1_16 - (var_1_5 + var_1_17)) != (64u | var_1_14)) ? (var_1_15 == ((signed short int) ((((var_1_5 - var_1_18) < 0 ) ? -(var_1_5 - var_1_18) : (var_1_5 - var_1_18))))) : (var_1_15 == ((signed short int) var_1_14)))) && (var_1_19 == ((signed long int) 128))) && (var_1_20 == ((signed short int) var_1_4))
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

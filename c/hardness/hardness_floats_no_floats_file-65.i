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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch65no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -1;
unsigned long int var_1_2 = 64;
unsigned long int var_1_3 = 1000000000;
signed long int var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 1;
unsigned long int var_1_7 = 4;
unsigned long int var_1_8 = 5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 200;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 5;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned char last_1_var_1_16 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_2 <= var_1_3) {
  var_1_1 = (var_1_4 - 1);
 }
 unsigned long int stepLocal_0 = (var_1_3 * var_1_7) + var_1_8;
 if (var_1_4 >= ((((-200) > (var_1_1)) ? (-200) : (var_1_1)))) {
  if ((var_1_2 + (40593 - var_1_6)) >= stepLocal_0) {
   var_1_5 = var_1_9;
  } else {
   var_1_5 = 0;
  }
 } else {
  var_1_5 = var_1_10;
 }
 if (var_1_1 >= -8) {
  var_1_11 = ((var_1_12 - var_1_13) - (var_1_14 + (var_1_15 + 16)));
 }
 if (var_1_10) {
  if (last_1_var_1_16 || var_1_9) {
   var_1_16 = var_1_17;
  } else {
   var_1_16 = var_1_9;
  }
 } else {
  if (var_1_9 && var_1_17) {
   var_1_16 = var_1_9;
  } else {
   var_1_16 = 0;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967295);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967295);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 190);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 64);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 return ((((var_1_2 <= var_1_3) ? (var_1_1 == ((signed long int) (var_1_4 - 1))) : 1) && ((var_1_4 >= ((((-200) > (var_1_1)) ? (-200) : (var_1_1)))) ? (((var_1_2 + (40593 - var_1_6)) >= ((var_1_3 * var_1_7) + var_1_8)) ? (var_1_5 == ((unsigned char) var_1_9)) : (var_1_5 == ((unsigned char) 0))) : (var_1_5 == ((unsigned char) var_1_10)))) && ((var_1_1 >= -8) ? (var_1_11 == ((unsigned char) ((var_1_12 - var_1_13) - (var_1_14 + (var_1_15 + 16))))) : 1)) && (var_1_10 ? ((last_1_var_1_16 || var_1_9) ? (var_1_16 == ((unsigned char) var_1_17)) : (var_1_16 == ((unsigned char) var_1_9))) : ((var_1_9 && var_1_17) ? (var_1_16 == ((unsigned char) var_1_9)) : (var_1_16 == ((unsigned char) 0))))
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

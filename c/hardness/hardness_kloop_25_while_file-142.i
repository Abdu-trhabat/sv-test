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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14225_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 5;
unsigned long int var_1_2 = 50;
unsigned long int var_1_3 = 500;
signed long int var_1_4 = 128;
float var_1_5 = 64.8;
signed short int var_1_7 = 32;
signed short int var_1_8 = 200;
unsigned char var_1_9 = 1;
float var_1_10 = 9.75;
signed char var_1_11 = 100;
float var_1_12 = 63.3;
float var_1_13 = 16.8;
float var_1_14 = 25.1;
float var_1_15 = 99.75;
float var_1_16 = 10.6;
signed char var_1_17 = 8;
signed char var_1_18 = 64;
signed char var_1_19 = 64;
void initially(void) {
}
void step(void) {
 if (var_1_2 <= var_1_3) {
  if (var_1_3 <= var_1_2) {
   var_1_1 = (1 - var_1_4);
  } else {
   var_1_1 = var_1_4;
  }
 }
 if (var_1_4 > var_1_2) {
  if ((var_1_7 - var_1_8) >= var_1_4) {
   if (var_1_9) {
    var_1_5 = 127.6f;
   } else {
    var_1_5 = var_1_10;
   }
  } else {
   var_1_5 = var_1_10;
  }
 } else {
  var_1_5 = var_1_10;
 }
 if ((var_1_12 - var_1_13) <= ((var_1_14 + 16.5f) - (var_1_15 + var_1_16))) {
  var_1_11 = (var_1_17 - var_1_18);
 } else {
  var_1_11 = var_1_19;
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
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427388000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427388000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427388000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 <= var_1_3) ? ((var_1_3 <= var_1_2) ? (var_1_1 == ((signed long int) (1 - var_1_4))) : (var_1_1 == ((signed long int) var_1_4))) : 1) && ((var_1_4 > var_1_2) ? (((var_1_7 - var_1_8) >= var_1_4) ? (var_1_9 ? (var_1_5 == ((float) 127.6f)) : (var_1_5 == ((float) var_1_10))) : (var_1_5 == ((float) var_1_10))) : (var_1_5 == ((float) var_1_10)))) && (((var_1_12 - var_1_13) <= ((var_1_14 + 16.5f) - (var_1_15 + var_1_16))) ? (var_1_11 == ((signed char) (var_1_17 - var_1_18))) : (var_1_11 == ((signed char) var_1_19)))
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

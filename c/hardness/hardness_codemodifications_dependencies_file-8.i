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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8dependencies.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 999999999.675;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
signed long int var_1_8 = 64;
unsigned long int var_1_9 = 1;
double var_1_10 = 63.25;
unsigned char var_1_11 = 0;
unsigned long int var_1_12 = 16;
float var_1_13 = 24.5;
float var_1_14 = 127.8;
float var_1_15 = 0.5;
float var_1_16 = 7.25;
signed short int var_1_17 = -256;
signed short int var_1_19 = 10;
signed short int var_1_20 = 32;
signed short int var_1_21 = 5;
signed short int var_1_22 = -4;
signed long int var_1_23 = 256;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 4;
signed long int var_1_26 = 128;
unsigned long int last_1_var_1_9 = 1;
float last_1_var_1_13 = 24.5;
signed long int last_1_var_1_23 = 256;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_9 == (last_1_var_1_23 % var_1_4)) {
  var_1_1 = (var_1_5 - var_1_6);
 }
 if (var_1_1 >= var_1_6) {
  var_1_7 = var_1_8;
 }
 if (((var_1_6 * var_1_5) / var_1_10) > last_1_var_1_13) {
  if (var_1_11) {
   var_1_9 = var_1_12;
  } else {
   var_1_9 = 0u;
  }
 }
 if ((var_1_4 * var_1_9) < var_1_12) {
  var_1_17 = ((var_1_19 - (var_1_20 + var_1_21)) + var_1_22);
 } else {
  if (var_1_20 >= 32) {
   if (var_1_11) {
    var_1_17 = 100;
   } else {
    var_1_17 = var_1_20;
   }
  }
 }
 var_1_24 = 2;
 var_1_25 = var_1_21;
 var_1_26 = var_1_8;
 if (var_1_19 < var_1_7) {
  if (var_1_25 >= var_1_9) {
   if (var_1_6 < var_1_15) {
    var_1_23 = var_1_21;
   }
  }
 } else {
  var_1_23 = var_1_17;
 }
 if (128 <= var_1_23) {
  if (var_1_11) {
   var_1_13 = (var_1_14 + ((((((((3.4f) > (var_1_15)) ? (3.4f) : (var_1_15)))) < (var_1_16)) ? (((((3.4f) > (var_1_15)) ? (3.4f) : (var_1_15)))) : (var_1_16))));
  } else {
   if (var_1_1 < var_1_16) {
    var_1_13 = var_1_6;
   } else {
    var_1_13 = var_1_15;
   }
  }
 } else {
  var_1_13 = var_1_5;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483647);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(var_1_10 != 0.0F);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 8192);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 8191);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= -16383);
 assume_abort_if_not(var_1_22 <= 16383);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_23 = var_1_23;
}
int property(void) {
 return (((((((((last_1_var_1_9 == (last_1_var_1_23 % var_1_4)) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((var_1_1 >= var_1_6) ? (var_1_7 == ((signed long int) var_1_8)) : 1)) && ((((var_1_6 * var_1_5) / var_1_10) > last_1_var_1_13) ? (var_1_11 ? (var_1_9 == ((unsigned long int) var_1_12)) : (var_1_9 == ((unsigned long int) 0u))) : 1)) && ((128 <= var_1_23) ? (var_1_11 ? (var_1_13 == ((float) (var_1_14 + ((((((((3.4f) > (var_1_15)) ? (3.4f) : (var_1_15)))) < (var_1_16)) ? (((((3.4f) > (var_1_15)) ? (3.4f) : (var_1_15)))) : (var_1_16)))))) : ((var_1_1 < var_1_16) ? (var_1_13 == ((float) var_1_6)) : (var_1_13 == ((float) var_1_15)))) : (var_1_13 == ((float) var_1_5)))) && (((var_1_4 * var_1_9) < var_1_12) ? (var_1_17 == ((signed short int) ((var_1_19 - (var_1_20 + var_1_21)) + var_1_22))) : ((var_1_20 >= 32) ? (var_1_11 ? (var_1_17 == ((signed short int) 100)) : (var_1_17 == ((signed short int) var_1_20))) : 1))) && ((var_1_19 < var_1_7) ? ((var_1_25 >= var_1_9) ? ((var_1_6 < var_1_15) ? (var_1_23 == ((signed long int) var_1_21)) : 1) : 1) : (var_1_23 == ((signed long int) var_1_17)))) && (var_1_24 == ((unsigned char) 2))) && (var_1_25 == ((unsigned long int) var_1_21))) && (var_1_26 == ((signed long int) var_1_8))
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

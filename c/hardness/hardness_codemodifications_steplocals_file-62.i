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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch62stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 5.25;
signed long int var_1_2 = 1;
signed long int var_1_3 = -25;
signed long int var_1_4 = -128;
signed long int var_1_5 = 8;
double var_1_6 = 2.75;
double var_1_7 = 24.5;
double var_1_8 = 199.5;
signed char var_1_9 = -1;
signed char var_1_10 = 0;
signed char var_1_11 = 1;
unsigned char var_1_12 = 0;
double var_1_13 = 10000000000000.45;
double var_1_14 = 256.9;
double var_1_15 = 4.55;
float var_1_16 = 1.25;
unsigned char var_1_17 = 50;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
double var_1_20 = 4.25;
double var_1_21 = 127.2;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (var_1_3 % var_1_4) * var_1_5;
 if (var_1_2 > stepLocal_0) {
  var_1_1 = (var_1_6 - (var_1_7 + var_1_8));
 } else {
  if (var_1_8 > var_1_7) {
   var_1_1 = (var_1_7 + var_1_8);
  } else {
   var_1_1 = var_1_8;
  }
 }
 if (var_1_6 > (- var_1_8)) {
  var_1_9 = (var_1_10 - var_1_11);
 } else {
  if (var_1_12) {
   var_1_9 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
  }
 }
 var_1_13 = (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))) + (var_1_14 + var_1_15));
 signed long int stepLocal_1 = - var_1_3;
 if (stepLocal_1 <= -100000) {
  var_1_16 = ((var_1_7 - var_1_8) + var_1_15);
 } else {
  var_1_16 = var_1_15;
 }
 unsigned char stepLocal_2 = var_1_18;
 if ((var_1_12 || (var_1_4 >= var_1_3)) && stepLocal_2) {
  var_1_17 = var_1_11;
 }
 var_1_19 = var_1_11;
 var_1_20 = ((((var_1_7) > (var_1_15)) ? (var_1_7) : (var_1_15)));
 signed long int stepLocal_3 = var_1_17 + var_1_4;
 if (var_1_16 < ((((var_1_7) > (var_1_20)) ? (var_1_7) : (var_1_20)))) {
  if (-5 < stepLocal_3) {
   var_1_21 = ((((var_1_15) > ((var_1_7 - var_1_6))) ? (var_1_15) : ((var_1_7 - var_1_6))));
  } else {
   var_1_21 = var_1_14;
  }
 } else {
  var_1_21 = var_1_15;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 > ((var_1_3 % var_1_4) * var_1_5)) ? (var_1_1 == ((double) (var_1_6 - (var_1_7 + var_1_8)))) : ((var_1_8 > var_1_7) ? (var_1_1 == ((double) (var_1_7 + var_1_8))) : (var_1_1 == ((double) var_1_8)))) && ((var_1_6 > (- var_1_8)) ? (var_1_9 == ((signed char) (var_1_10 - var_1_11))) : (var_1_12 ? (var_1_9 == ((signed char) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) : 1))) && (var_1_13 == ((double) (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))) + (var_1_14 + var_1_15))))) && (((- var_1_3) <= -100000) ? (var_1_16 == ((float) ((var_1_7 - var_1_8) + var_1_15))) : (var_1_16 == ((float) var_1_15)))) && (((var_1_12 || (var_1_4 >= var_1_3)) && var_1_18) ? (var_1_17 == ((unsigned char) var_1_11)) : 1)) && (var_1_19 == ((unsigned char) var_1_11))) && (var_1_20 == ((double) ((((var_1_7) > (var_1_15)) ? (var_1_7) : (var_1_15)))))) && ((var_1_16 < ((((var_1_7) > (var_1_20)) ? (var_1_7) : (var_1_20)))) ? ((-5 < (var_1_17 + var_1_4)) ? (var_1_21 == ((double) ((((var_1_15) > ((var_1_7 - var_1_6))) ? (var_1_15) : ((var_1_7 - var_1_6)))))) : (var_1_21 == ((double) var_1_14))) : (var_1_21 == ((double) var_1_15)))
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

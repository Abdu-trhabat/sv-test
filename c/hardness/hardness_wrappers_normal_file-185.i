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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch185normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -128;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
signed short int var_1_4 = 0;
signed short int var_1_5 = 500;
signed long int var_1_6 = 8;
double var_1_7 = 10000000000000.25;
double var_1_8 = 31.2;
double var_1_9 = 16.475;
signed short int var_1_10 = 100;
signed short int var_1_11 = -1;
signed short int var_1_12 = 16;
double var_1_13 = 128.25;
signed long int var_1_14 = 1227102632;
signed long int var_1_15 = 50;
double var_1_16 = 10.5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_4 - var_1_5;
 unsigned char stepLocal_0 = var_1_3;
 if (var_1_2 && stepLocal_0) {
  if (stepLocal_1 <= var_1_6) {
   var_1_1 = var_1_5;
  }
 }
 signed short int stepLocal_2 = var_1_4;
 if (stepLocal_2 == ((((32) < (var_1_5)) ? (32) : (var_1_5)))) {
  if (! var_1_2) {
   var_1_7 = (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_9);
  } else {
   var_1_7 = var_1_9;
  }
 } else {
  var_1_7 = var_1_8;
 }
 signed long int stepLocal_3 = var_1_6 + var_1_1;
 if (-64 < stepLocal_3) {
  var_1_10 = (var_1_11 - var_1_12);
 } else {
  var_1_10 = var_1_11;
 }
 if (((((- var_1_10) < 0 ) ? -(- var_1_10) : (- var_1_10))) < ((var_1_12 + var_1_5) - (var_1_14 - var_1_15))) {
  var_1_13 = var_1_16;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 1073741823);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 && var_1_3) ? (((var_1_4 - var_1_5) <= var_1_6) ? (var_1_1 == ((signed long int) var_1_5)) : 1) : 1) && ((var_1_4 == ((((32) < (var_1_5)) ? (32) : (var_1_5)))) ? ((! var_1_2) ? (var_1_7 == ((double) (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_9))) : (var_1_7 == ((double) var_1_9))) : (var_1_7 == ((double) var_1_8)))) && ((-64 < (var_1_6 + var_1_1)) ? (var_1_10 == ((signed short int) (var_1_11 - var_1_12))) : (var_1_10 == ((signed short int) var_1_11)))) && ((((((- var_1_10) < 0 ) ? -(- var_1_10) : (- var_1_10))) < ((var_1_12 + var_1_5) - (var_1_14 - var_1_15))) ? (var_1_13 == ((double) var_1_16)) : 1)
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

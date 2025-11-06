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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 8;
unsigned long int var_1_2 = 16;
unsigned long int var_1_3 = 10000;
unsigned char var_1_4 = 1;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 1438530836;
unsigned long int var_1_7 = 1401937267;
unsigned long int var_1_8 = 1707018182;
unsigned long int var_1_9 = 25;
unsigned long int var_1_10 = 5;
unsigned long int var_1_11 = 10;
float var_1_12 = -0.5;
unsigned char var_1_13 = 1;
float var_1_14 = 999999999999.625;
float var_1_15 = 1000.25;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_2 >= var_1_3;
 if (stepLocal_0 || var_1_4) {
  var_1_1 = ((((((((var_1_5) < (32u)) ? (var_1_5) : (32u)))) < (((var_1_6 + var_1_7) - (var_1_8 - var_1_9)))) ? (((((var_1_5) < (32u)) ? (var_1_5) : (32u)))) : (((var_1_6 + var_1_7) - (var_1_8 - var_1_9)))));
 } else {
  var_1_1 = ((var_1_9 + var_1_10) + var_1_8);
 }
 unsigned long int stepLocal_2 = (var_1_8 * var_1_10) / var_1_6;
 unsigned long int stepLocal_1 = var_1_5;
 if (stepLocal_1 <= var_1_8) {
  if (var_1_1 <= stepLocal_2) {
   var_1_11 = var_1_10;
  } else {
   var_1_11 = var_1_5;
  }
 } else {
  var_1_11 = var_1_7;
 }
 unsigned char stepLocal_3 = var_1_4;
 if (stepLocal_3 || var_1_13) {
  var_1_12 = (var_1_14 + var_1_15);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 1073741823);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1073741824);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 1073741823);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 >= var_1_3) || var_1_4) ? (var_1_1 == ((unsigned long int) ((((((((var_1_5) < (32u)) ? (var_1_5) : (32u)))) < (((var_1_6 + var_1_7) - (var_1_8 - var_1_9)))) ? (((((var_1_5) < (32u)) ? (var_1_5) : (32u)))) : (((var_1_6 + var_1_7) - (var_1_8 - var_1_9))))))) : (var_1_1 == ((unsigned long int) ((var_1_9 + var_1_10) + var_1_8)))) && ((var_1_5 <= var_1_8) ? ((var_1_1 <= ((var_1_8 * var_1_10) / var_1_6)) ? (var_1_11 == ((unsigned long int) var_1_10)) : (var_1_11 == ((unsigned long int) var_1_5))) : (var_1_11 == ((unsigned long int) var_1_7)))) && ((var_1_4 || var_1_13) ? (var_1_12 == ((float) (var_1_14 + var_1_15))) : 1)
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch16normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -50;
unsigned char var_1_4 = 0;
signed short int var_1_5 = 8;
signed short int var_1_6 = 64;
unsigned short int var_1_7 = 8;
unsigned short int var_1_8 = 256;
signed long int var_1_9 = 2;
signed long int var_1_10 = 1441729073;
unsigned short int var_1_11 = 32;
double var_1_12 = 7.6;
double var_1_13 = 127.8;
signed char var_1_14 = 32;
signed char var_1_15 = 50;
signed char var_1_16 = 0;
signed char var_1_17 = 16;
float var_1_18 = 0.4;
unsigned char var_1_19 = 0;
float var_1_20 = 24.4;
float var_1_21 = 500.5;
float var_1_22 = 99.324;
unsigned short int var_1_23 = 128;
unsigned short int last_1_var_1_7 = 8;
unsigned short int last_1_var_1_11 = 32;
signed char last_1_var_1_14 = 32;
unsigned short int last_1_var_1_23 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_11;
 if ((last_1_var_1_23 / -50) >= stepLocal_0) {
  if (var_1_4) {
   var_1_1 = (var_1_5 - var_1_6);
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_5;
 }
 if (var_1_4 && (((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))) > var_1_5)) {
  var_1_23 = var_1_6;
 }
 if (var_1_6 > 128) {
  var_1_9 = (var_1_8 - (var_1_10 - var_1_1));
 }
 signed long int stepLocal_2 = var_1_5 | var_1_6;
 if (((var_1_9 + var_1_23) * var_1_9) < stepLocal_2) {
  if (var_1_4) {
   var_1_11 = var_1_8;
  }
 } else {
  var_1_11 = var_1_8;
 }
 signed short int stepLocal_1 = var_1_6;
 if (last_1_var_1_7 < stepLocal_1) {
  var_1_7 = (var_1_6 + var_1_8);
 }
 unsigned short int stepLocal_4 = var_1_8;
 signed long int stepLocal_3 = var_1_9;
 if (stepLocal_3 < (- var_1_10)) {
  if (stepLocal_4 <= var_1_9) {
   var_1_12 = (var_1_13 - 63.75);
  }
 } else {
  var_1_12 = var_1_13;
 }
 unsigned short int stepLocal_5 = var_1_8;
 if (last_1_var_1_14 <= stepLocal_5) {
  var_1_14 = ((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) - var_1_17) + -2);
 }
 if (var_1_4 || var_1_19) {
  var_1_18 = ((((var_1_20 + (var_1_21 + var_1_22)) < 0 ) ? -(var_1_20 + (var_1_21 + var_1_22)) : (var_1_20 + (var_1_21 + var_1_22))));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_23 = var_1_23;
}
int property() {
 return (((((((((last_1_var_1_23 / -50) >= last_1_var_1_11) ? (var_1_4 ? (var_1_1 == ((signed short int) (var_1_5 - var_1_6))) : (var_1_1 == ((signed short int) var_1_5))) : (var_1_1 == ((signed short int) var_1_5))) && ((last_1_var_1_7 < var_1_6) ? (var_1_7 == ((unsigned short int) (var_1_6 + var_1_8))) : 1)) && ((var_1_6 > 128) ? (var_1_9 == ((signed long int) (var_1_8 - (var_1_10 - var_1_1)))) : 1)) && ((((var_1_9 + var_1_23) * var_1_9) < (var_1_5 | var_1_6)) ? (var_1_4 ? (var_1_11 == ((unsigned short int) var_1_8)) : 1) : (var_1_11 == ((unsigned short int) var_1_8)))) && ((var_1_9 < (- var_1_10)) ? ((var_1_8 <= var_1_9) ? (var_1_12 == ((double) (var_1_13 - 63.75))) : 1) : (var_1_12 == ((double) var_1_13)))) && ((last_1_var_1_14 <= var_1_8) ? (var_1_14 == ((signed char) ((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) - var_1_17) + -2))) : 1)) && ((var_1_4 || var_1_19) ? (var_1_18 == ((float) ((((var_1_20 + (var_1_21 + var_1_22)) < 0 ) ? -(var_1_20 + (var_1_21 + var_1_22)) : (var_1_20 + (var_1_21 + var_1_22)))))) : 1)) && ((var_1_4 && (((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))) > var_1_5)) ? (var_1_23 == ((unsigned short int) var_1_6)) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172dependencies.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 10;
signed char var_1_3 = 5;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 100;
signed char var_1_6 = 2;
signed char var_1_7 = -32;
signed short int var_1_8 = -1;
unsigned char var_1_9 = 1;
signed short int var_1_11 = 64;
signed short int var_1_12 = 5;
signed short int var_1_13 = 0;
float var_1_14 = 5.5;
signed long int var_1_15 = 2;
signed long int var_1_16 = 2;
float var_1_17 = 128.5;
float var_1_18 = -0.5;
float var_1_19 = 50.4;
float var_1_20 = 16.75;
signed char var_1_21 = -2;
signed char var_1_22 = 32;
signed char var_1_23 = 5;
unsigned char var_1_24 = 16;
signed char last_1_var_1_6 = 2;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_6 >= ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) || var_1_4) {
  var_1_1 = var_1_5;
 }
 if (var_1_1 > var_1_5) {
  var_1_6 = var_1_7;
 }
 if (var_1_4 && var_1_9) {
  if (var_1_5 == (var_1_1 + (~ var_1_1))) {
   var_1_8 = var_1_1;
  } else {
   var_1_8 = var_1_3;
  }
 } else {
  var_1_8 = var_1_7;
 }
 if (25 < var_1_1) {
  var_1_21 = ((var_1_16 + var_1_15) - (var_1_22 + var_1_23));
 } else {
  var_1_21 = ((((var_1_15) < ((var_1_22 - var_1_16))) ? (var_1_15) : ((var_1_22 - var_1_16))));
 }
 var_1_24 = var_1_16;
 if (var_1_21 != var_1_5) {
  var_1_11 = (((((var_1_12 - var_1_13)) > (var_1_7)) ? ((var_1_12 - var_1_13)) : (var_1_7)));
 }
 if (var_1_11 > (var_1_13 >> (var_1_15 + var_1_16))) {
  var_1_14 = ((((var_1_17 + var_1_18) < 0 ) ? -(var_1_17 + var_1_18) : (var_1_17 + var_1_18)));
 }
 if (((16 * var_1_7) | -1) >= var_1_3) {
  var_1_19 = (var_1_17 + var_1_18);
 } else {
  if ((var_1_14 / 1.00000000000005E13f) < 1.875f) {
   var_1_19 = (15.45f - var_1_20);
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -127);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 7);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 7);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
}
int property(void) {
 return (((((((((last_1_var_1_6 >= ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) || var_1_4) ? (var_1_1 == ((unsigned long int) var_1_5)) : 1) && ((var_1_1 > var_1_5) ? (var_1_6 == ((signed char) var_1_7)) : 1)) && ((var_1_4 && var_1_9) ? ((var_1_5 == (var_1_1 + (~ var_1_1))) ? (var_1_8 == ((signed short int) var_1_1)) : (var_1_8 == ((signed short int) var_1_3))) : (var_1_8 == ((signed short int) var_1_7)))) && ((var_1_21 != var_1_5) ? (var_1_11 == ((signed short int) (((((var_1_12 - var_1_13)) > (var_1_7)) ? ((var_1_12 - var_1_13)) : (var_1_7))))) : 1)) && ((var_1_11 > (var_1_13 >> (var_1_15 + var_1_16))) ? (var_1_14 == ((float) ((((var_1_17 + var_1_18) < 0 ) ? -(var_1_17 + var_1_18) : (var_1_17 + var_1_18))))) : 1)) && ((((16 * var_1_7) | -1) >= var_1_3) ? (var_1_19 == ((float) (var_1_17 + var_1_18))) : (((var_1_14 / 1.00000000000005E13f) < 1.875f) ? (var_1_19 == ((float) (15.45f - var_1_20))) : 1))) && ((25 < var_1_1) ? (var_1_21 == ((signed char) ((var_1_16 + var_1_15) - (var_1_22 + var_1_23)))) : (var_1_21 == ((signed char) ((((var_1_15) < ((var_1_22 - var_1_16))) ? (var_1_15) : ((var_1_22 - var_1_16)))))))) && (var_1_24 == ((unsigned char) var_1_16))
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

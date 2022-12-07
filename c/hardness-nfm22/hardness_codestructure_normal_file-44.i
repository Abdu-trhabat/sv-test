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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch44normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 16;
signed char var_1_2 = -32;
signed char var_1_3 = -64;
signed char var_1_4 = -1;
unsigned char var_1_5 = 1;
signed char var_1_6 = -10;
signed char var_1_7 = 64;
signed short int var_1_8 = -5;
double var_1_9 = 10000000000.4;
double var_1_10 = 256.475;
double var_1_11 = 4.8;
double var_1_12 = 64.2;
signed short int var_1_13 = 256;
unsigned long int var_1_14 = 0;
signed char var_1_15 = -5;
unsigned long int var_1_16 = 500;
unsigned long int var_1_17 = 4182428128;
unsigned long int var_1_18 = 16;
signed char var_1_19 = -5;
signed char var_1_20 = 0;
signed char var_1_21 = 64;
float var_1_22 = 49.375;
signed short int var_1_23 = 256;
signed short int var_1_24 = 8;
float var_1_25 = 255.5;
float var_1_26 = 500.14;
signed long int var_1_27 = -8;
signed long int var_1_29 = -1;
signed short int var_1_30 = -2;
double var_1_31 = 0.3;
signed char var_1_32 = 16;
void initially(void) {
}
void step(void) {
 if (var_1_2 == ((var_1_3 + var_1_4) ^ (var_1_6 + var_1_7))) {
  var_1_1 = var_1_2;
 }
 if (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) < (((((var_1_10 - var_1_11)) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? ((var_1_10 - var_1_11)) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) {
  if (var_1_9 >= var_1_12) {
   var_1_8 = var_1_13;
  } else {
   var_1_8 = var_1_2;
  }
 } else {
  var_1_8 = 0;
 }
 if (var_1_3 == ((((var_1_4) < ((var_1_6 / var_1_15))) ? (var_1_4) : ((var_1_6 / var_1_15))))) {
  var_1_14 = var_1_16;
 } else {
  var_1_14 = (var_1_17 - (16u + var_1_18));
 }
 if (256 > var_1_18) {
  var_1_19 = ((((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) > (var_1_21)) ? (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) : (var_1_21)));
 }
 if ((var_1_23 - var_1_24) > var_1_14) {
  var_1_22 = (var_1_25 - var_1_26);
 }
 if (! var_1_5) {
  var_1_27 = ((var_1_13 + var_1_24) + (var_1_7 + (var_1_20 + var_1_8)));
 } else {
  if (var_1_11 > var_1_22) {
   var_1_27 = var_1_29;
  } else {
   var_1_27 = var_1_6;
  }
 }
 var_1_30 = ((((var_1_15) > (var_1_13)) ? (var_1_15) : (var_1_13)));
 var_1_31 = var_1_26;
 var_1_32 = var_1_21;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -128);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -128);
 assume_abort_if_not(var_1_15 <= 127);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -126);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -127);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -1);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483647);
 assume_abort_if_not(var_1_29 <= 2147483646);
}
void updateLastVariables() {
}
int property() {
 return (((((((((var_1_2 == ((var_1_3 + var_1_4) ^ (var_1_6 + var_1_7))) ? (var_1_1 == ((signed long int) var_1_2)) : 1) && ((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) < (((((var_1_10 - var_1_11)) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? ((var_1_10 - var_1_11)) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) ? ((var_1_9 >= var_1_12) ? (var_1_8 == ((signed short int) var_1_13)) : (var_1_8 == ((signed short int) var_1_2))) : (var_1_8 == ((signed short int) 0)))) && ((var_1_3 == ((((var_1_4) < ((var_1_6 / var_1_15))) ? (var_1_4) : ((var_1_6 / var_1_15))))) ? (var_1_14 == ((unsigned long int) var_1_16)) : (var_1_14 == ((unsigned long int) (var_1_17 - (16u + var_1_18)))))) && ((256 > var_1_18) ? (var_1_19 == ((signed char) ((((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) > (var_1_21)) ? (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) : (var_1_21))))) : 1)) && (((var_1_23 - var_1_24) > var_1_14) ? (var_1_22 == ((float) (var_1_25 - var_1_26))) : 1)) && ((! var_1_5) ? (var_1_27 == ((signed long int) ((var_1_13 + var_1_24) + (var_1_7 + (var_1_20 + var_1_8))))) : ((var_1_11 > var_1_22) ? (var_1_27 == ((signed long int) var_1_29)) : (var_1_27 == ((signed long int) var_1_6))))) && (var_1_30 == ((signed short int) ((((var_1_15) > (var_1_13)) ? (var_1_15) : (var_1_13)))))) && (var_1_31 == ((double) var_1_26))) && (var_1_32 == ((signed char) var_1_21))
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

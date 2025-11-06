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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch196functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
double functionized0(double, double, double);
unsigned char functionized1(unsigned char);
unsigned char functionized2(unsigned long int);
unsigned long int functionized3(void);
signed long int functionized4(signed short int, signed long int);
void functionized5(unsigned short int, unsigned long int, signed long int);
unsigned char functionized6(signed short int);
void functionized7(signed char);
void functionized8(float);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
double var_1_2 = 500.25;
double var_1_3 = 15.55;
double var_1_4 = 127.5;
double var_1_5 = 2.25;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
float var_1_9 = 15.4;
unsigned long int var_1_10 = 2457580018;
unsigned long int var_1_11 = 25;
unsigned long int var_1_12 = 2510016289;
unsigned long int var_1_13 = 32;
float var_1_14 = 1.75;
float var_1_15 = 15.6;
float var_1_16 = 256.081;
signed short int var_1_17 = -2;
signed short int var_1_18 = 4;
unsigned short int var_1_19 = 64;
unsigned short int var_1_20 = 60766;
unsigned short int var_1_21 = 17186;
signed long int var_1_22 = 5;
signed char var_1_23 = -16;
signed char var_1_24 = 16;
signed short int var_1_25 = 2;
signed long int var_1_26 = 16;
float var_1_27 = 999.05;
double functionized0(double functionized0_localFunctionVar0, double functionized0_localFunctionVar1, double functionized0_localFunctionVar2) {
 return (((((functionized0_localFunctionVar2) < (functionized0_localFunctionVar1)) ? (functionized0_localFunctionVar2) : (functionized0_localFunctionVar1))) - functionized0_localFunctionVar0);
}
unsigned char functionized1(unsigned char functionized1_localFunctionVar0) {
 return (functionized1_localFunctionVar0 && var_1_8);
}
unsigned char functionized2(unsigned long int functionized2_localFunctionVar0) {
 return ((~ functionized2_localFunctionVar0) < ((var_1_12 - var_1_11) + var_1_13));
}
unsigned long int functionized3(void) {
 return (((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11))) >> var_1_18);
}
signed long int functionized4(signed short int functionized4_localFunctionVar0, signed long int localFunctionVar1) {
 return ((((functionized4_localFunctionVar0) < (localFunctionVar1)) ? (functionized4_localFunctionVar0) : (localFunctionVar1)));
}
void functionized5(unsigned short int functionized5_localFunctionVar0, unsigned long int functionized5_localFunctionVar1, signed long int localFunctionVar2) {
 if (var_1_18 > functionized5_localFunctionVar1) {
  var_1_19 = (((((((((localFunctionVar2) > (41437)) ? (localFunctionVar2) : (41437)))) > (functionized5_localFunctionVar0)) ? (((((localFunctionVar2) > (41437)) ? (localFunctionVar2) : (41437)))) : (functionized5_localFunctionVar0))) - (var_1_21 - var_1_18));
 }
}
unsigned char functionized6(signed short int functionized6_localFunctionVar0) {
 return ((var_1_13 / functionized6_localFunctionVar0) >= var_1_20);
}
void functionized7(signed char functionized7_localFunctionVar0) {
 if (var_1_18 >= var_1_21) {
  var_1_23 = ((((var_1_18) < (functionized7_localFunctionVar0)) ? (var_1_18) : (functionized7_localFunctionVar0)));
 }
}
void functionized8(float functionized8_localFunctionVar0) {
 var_1_27 = functionized8_localFunctionVar0;
}
void initially(void) {
}
void step(void) {
 if ((var_1_2 + 3.25) >= (functionized0(var_1_5, var_1_4, var_1_3))) {
  var_1_1 = (var_1_6 || functionized1(var_1_7));
 }
 if (functionized2(var_1_10)) {
  var_1_9 = var_1_14;
 } else {
  if (var_1_12 < (var_1_10 * var_1_11)) {
   var_1_9 = var_1_14;
  } else {
   var_1_9 = (var_1_15 - var_1_16);
  }
 }
 if (functionized3() != var_1_10) {
  var_1_17 = (functionized4(var_1_18, -100));
 } else {
  var_1_17 = var_1_18;
 }
 functionized5(var_1_20, var_1_11, 36708);
 if ((var_1_5 + var_1_2) >= 499.6) {
  if (functionized6(var_1_18)) {
   var_1_22 = var_1_17;
  } else {
   var_1_22 = var_1_21;
  }
 } else {
  var_1_22 = var_1_17;
 }
 functionized7(var_1_24);
 var_1_25 = var_1_23;
 var_1_26 = var_1_24;
 functionized8(var_1_16);
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 2147483647);
 assume_abort_if_not(var_1_10 <= 4294967295);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967295);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 4294967295);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 31);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65534);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 16383);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -127);
 assume_abort_if_not(var_1_24 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((var_1_2 + 3.25) >= (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))) - var_1_5)) ? (var_1_1 == ((unsigned char) (var_1_6 || (var_1_7 && var_1_8)))) : 1) && (((~ var_1_10) < ((var_1_12 - var_1_11) + var_1_13)) ? (var_1_9 == ((float) var_1_14)) : ((var_1_12 < (var_1_10 * var_1_11)) ? (var_1_9 == ((float) var_1_14)) : (var_1_9 == ((float) (var_1_15 - var_1_16)))))) && (((((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11))) >> var_1_18) != var_1_10) ? (var_1_17 == ((signed short int) ((((var_1_18) < (-100)) ? (var_1_18) : (-100))))) : (var_1_17 == ((signed short int) var_1_18)))) && ((var_1_18 > var_1_11) ? (var_1_19 == ((unsigned short int) (((((((((36708) > (41437)) ? (36708) : (41437)))) > (var_1_20)) ? (((((36708) > (41437)) ? (36708) : (41437)))) : (var_1_20))) - (var_1_21 - var_1_18)))) : 1)) && (((var_1_5 + var_1_2) >= 499.6) ? (((var_1_13 / var_1_18) >= var_1_20) ? (var_1_22 == ((signed long int) var_1_17)) : (var_1_22 == ((signed long int) var_1_21))) : (var_1_22 == ((signed long int) var_1_17)))) && ((var_1_18 >= var_1_21) ? (var_1_23 == ((signed char) ((((var_1_18) < (var_1_24)) ? (var_1_18) : (var_1_24))))) : 1)) && (var_1_25 == ((signed short int) var_1_23))) && (var_1_26 == ((signed long int) var_1_24))) && (var_1_27 == ((float) var_1_16))
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

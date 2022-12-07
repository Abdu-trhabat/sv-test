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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
signed long int functionized0(signed long int);
signed long int functionized1(unsigned char);
void functionized2(signed long int, unsigned char);
signed long int functionized3(signed long int);
signed long int functionized4(unsigned char);
void functionized5(double, unsigned char, double);
double functionized6(double);
unsigned char isInitial = 0;
signed long int var_1_1 = 0;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 32;
signed long int var_1_4 = -32;
signed long int var_1_5 = 2;
signed short int var_1_6 = -10;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 3470417420;
unsigned char var_1_10 = 0;
double var_1_11 = 32.875;
double var_1_12 = 25.6;
double var_1_13 = 1.75;
float var_1_14 = 5.4;
float var_1_15 = 127.5;
float var_1_16 = 3.5;
signed long int var_1_17 = 64;
unsigned char var_1_18 = 64;
signed long int functionized0(signed long int functionized0_localFunctionVar0) {
 return (var_1_2 + functionized0_localFunctionVar0);
}
signed long int functionized1(unsigned char functionized1_localFunctionVar0) {
 return (1 - functionized1_localFunctionVar0);
}
void functionized2(signed long int functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
 if (functionized2_localFunctionVar1 < var_1_2) {
  var_1_5 = ((var_1_2 - functionized2_localFunctionVar1) + functionized2_localFunctionVar0);
 }
}
signed long int functionized3(signed long int functionized3_localFunctionVar0) {
 return (- functionized3_localFunctionVar0);
}
signed long int functionized4(unsigned char functionized4_localFunctionVar0) {
 return (32 - functionized4_localFunctionVar0);
}
void functionized5(double functionized5_localFunctionVar0, unsigned char functionized5_localFunctionVar1, double functionized5_localFunctionVar2) {
 if ((- 8u) >= (var_1_9 - functionized5_localFunctionVar1)) {
  var_1_8 = (! var_1_10);
 } else {
  var_1_8 = (((functionized5_localFunctionVar0 / var_1_12) >= functionized5_localFunctionVar2) || var_1_10);
 }
}
double functionized6(double functionized6_localFunctionVar0) {
 return ((((functionized6_localFunctionVar0) < (var_1_16)) ? (functionized6_localFunctionVar0) : (var_1_16)));
}
void initially(void) {
}
void step(void) {
 if (var_1_2 > (- var_1_3)) {
  var_1_1 = ((((var_1_3) > (functionized0(var_1_4))) ? (var_1_3) : (functionized0(var_1_4))));
 } else {
  var_1_1 = ((((functionized1(var_1_2)) < (16)) ? (functionized1(var_1_2)) : (16)));
 }
 functionized2(var_1_4, var_1_3);
 if (var_1_2 < functionized3(var_1_5)) {
  var_1_6 = functionized4(var_1_3);
 }
 if (var_1_1 > var_1_3) {
  if (var_1_4 <= var_1_6) {
   var_1_7 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
  }
 }
 functionized5(var_1_11, var_1_2, var_1_13);
 if ((var_1_12 * var_1_11) > var_1_13) {
  if (var_1_9 < var_1_5) {
   var_1_14 = var_1_15;
  } else {
   var_1_14 = var_1_15;
  }
 } else {
  var_1_14 = var_1_16;
 }
 if (((var_1_11 + var_1_14) / 9.2) < functionized6(var_1_13)) {
  var_1_17 = ((((var_1_2) > (var_1_18)) ? (var_1_2) : (var_1_18)));
 } else {
  var_1_17 = var_1_4;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1073741823);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 255);
}
void updateLastVariables() {
}
int property() {
 return (((((((var_1_2 > (- var_1_3)) ? (var_1_1 == ((signed long int) ((((var_1_3) > ((var_1_2 + var_1_4))) ? (var_1_3) : ((var_1_2 + var_1_4)))))) : (var_1_1 == ((signed long int) (((((1 - var_1_2)) < (16)) ? ((1 - var_1_2)) : (16)))))) && ((var_1_3 < var_1_2) ? (var_1_5 == ((signed long int) ((var_1_2 - var_1_3) + var_1_4))) : 1)) && ((var_1_2 < (- var_1_5)) ? (var_1_6 == ((signed short int) (32 - var_1_3))) : 1)) && ((var_1_1 > var_1_3) ? ((var_1_4 <= var_1_6) ? (var_1_7 == ((unsigned long int) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) : 1) : 1)) && (((- 8u) >= (var_1_9 - var_1_2)) ? (var_1_8 == ((unsigned char) (! var_1_10))) : (var_1_8 == ((unsigned char) (((var_1_11 / var_1_12) >= var_1_13) || var_1_10))))) && (((var_1_12 * var_1_11) > var_1_13) ? ((var_1_9 < var_1_5) ? (var_1_14 == ((float) var_1_15)) : (var_1_14 == ((float) var_1_15))) : (var_1_14 == ((float) var_1_16)))) && ((((var_1_11 + var_1_14) / 9.2) < ((((var_1_13) < (var_1_16)) ? (var_1_13) : (var_1_16)))) ? (var_1_17 == ((signed long int) ((((var_1_2) > (var_1_18)) ? (var_1_2) : (var_1_18))))) : (var_1_17 == ((signed long int) var_1_4)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(unsigned long int, signed long int);
void functionized1(unsigned long int, unsigned short int, unsigned short int);
void functionized2(float, unsigned char, float, double);
unsigned char functionized3(unsigned long int, signed long int);
unsigned char functionized4(unsigned long int, signed long int);
float functionized5(float);
double functionized6(double, double);
void functionized7(void);
unsigned char isInitial = 0;
double var_1_1 = 4.35;
unsigned long int var_1_2 = 25;
signed long int var_1_3 = -100;
signed long int var_1_4 = 50;
double var_1_5 = 8.1;
unsigned short int var_1_6 = 256;
unsigned long int var_1_9 = 2597568899;
unsigned long int var_1_10 = 16;
unsigned long int var_1_11 = 4;
unsigned long int var_1_12 = 128;
unsigned short int var_1_13 = 4;
unsigned short int var_1_14 = 16;
float var_1_15 = 10.4;
unsigned char var_1_16 = 1;
float var_1_17 = 255.5;
float var_1_18 = 9.45;
unsigned long int var_1_19 = 8;
double var_1_20 = 500.5;
signed long int var_1_21 = -2;
double var_1_22 = 2.7;
float var_1_23 = 10.85;
float var_1_24 = 7.4;
double var_1_25 = 255.5;
double var_1_26 = 64.576;
double var_1_27 = 15.4;
void functionized0(unsigned long int functionized0_localFunctionVar0, signed long int localFunctionVar1) {
 if (localFunctionVar1 > (((((functionized0_localFunctionVar0) < (var_1_3)) ? (functionized0_localFunctionVar0) : (var_1_3))) + var_1_4)) {
  var_1_1 = var_1_5;
 } else {
  var_1_1 = 256.5;
 }
}
void functionized1(unsigned long int functionized1_localFunctionVar0, unsigned short int functionized1_localFunctionVar1, unsigned short int functionized1_localFunctionVar2) {
 if ((((((functionized1_localFunctionVar0) > (var_1_9)) ? (functionized1_localFunctionVar0) : (var_1_9))) + var_1_3) == (2u * (var_1_12 * var_1_11))) {
  var_1_6 = functionized1_localFunctionVar1;
 } else {
  var_1_6 = ((((((((functionized1_localFunctionVar1) < 0 ) ? -(functionized1_localFunctionVar1) : (functionized1_localFunctionVar1)))) > (functionized1_localFunctionVar2)) ? (((((functionized1_localFunctionVar1) < 0 ) ? -(functionized1_localFunctionVar1) : (functionized1_localFunctionVar1)))) : (functionized1_localFunctionVar2)));
 }
}
void functionized2(float functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1, float functionized2_localFunctionVar2, double localFunctionVar3) {
 if (functionized2_localFunctionVar1) {
  if ((var_1_1 + (var_1_5 + functionized2_localFunctionVar0)) < localFunctionVar3) {
   var_1_15 = var_1_5;
  }
 } else {
  var_1_15 = functionized2_localFunctionVar2;
 }
}
unsigned char functionized3(unsigned long int functionized3_localFunctionVar0, signed long int functionized3_localFunctionVar1) {
 return (functionized3_localFunctionVar1 > functionized3_localFunctionVar0);
}
unsigned char functionized4(unsigned long int functionized4_localFunctionVar0, signed long int functionized4_localFunctionVar1) {
 return (functionized4_localFunctionVar1 > functionized4_localFunctionVar0);
}
float functionized5(float functionized5_localFunctionVar0) {
 return ((((functionized5_localFunctionVar0) < 0 ) ? -(functionized5_localFunctionVar0) : (functionized5_localFunctionVar0)));
}
double functionized6(double functionized6_localFunctionVar0, double functionized6_localFunctionVar1) {
 return (functionized6_localFunctionVar1 + (functionized6_localFunctionVar0 - var_1_27));
}
void functionized7(void) {
 if (var_1_16) {
  var_1_22 = var_1_18;
 }
}
void initially(void) {
}
void step(void) {
 if (8u < var_1_2) {
  functionized0(var_1_2, -8);
 }
 if ((var_1_3 ^ (var_1_9 - var_1_10)) > (var_1_4 * (3512938537u - var_1_11))) {
  functionized1(var_1_2, var_1_13, var_1_14);
 }
 functionized2(var_1_17, var_1_16, var_1_18, 9.25);
 if (((((var_1_1) > (var_1_5)) ? (var_1_1) : (var_1_5))) > var_1_20) {
  var_1_19 = ((((var_1_6) > (var_1_14)) ? (var_1_6) : (var_1_14)));
 }
 if (functionized3(var_1_11, var_1_4)) {
  if (functionized4(var_1_19, var_1_4)) {
   var_1_21 = 8;
  }
 }
 if (! (functionized5(var_1_17) >= (var_1_23 - var_1_24))) {
  var_1_22 = (functionized6(var_1_26, var_1_25));
 } else {
  functionized7();
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 4294967295);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((8u < var_1_2) ? ((-8 > (((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) + var_1_4)) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) 256.5))) : 1) && (((var_1_3 ^ (var_1_9 - var_1_10)) > (var_1_4 * (3512938537u - var_1_11))) ? (((((((var_1_2) > (var_1_9)) ? (var_1_2) : (var_1_9))) + var_1_3) == (2u * (var_1_12 * var_1_11))) ? (var_1_6 == ((unsigned short int) var_1_13)) : (var_1_6 == ((unsigned short int) ((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) > (var_1_14)) ? (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) : (var_1_14)))))) : 1)) && (var_1_16 ? (((var_1_1 + (var_1_5 + var_1_17)) < 9.25) ? (var_1_15 == ((float) var_1_5)) : 1) : (var_1_15 == ((float) var_1_18)))) && ((((((var_1_1) > (var_1_5)) ? (var_1_1) : (var_1_5))) > var_1_20) ? (var_1_19 == ((unsigned long int) ((((var_1_6) > (var_1_14)) ? (var_1_6) : (var_1_14))))) : 1)) && ((var_1_4 > var_1_11) ? ((var_1_4 > var_1_19) ? (var_1_21 == ((signed long int) 8)) : 1) : 1)) && ((! (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) >= (var_1_23 - var_1_24))) ? (var_1_22 == ((double) (var_1_25 + (var_1_26 - var_1_27)))) : (var_1_16 ? (var_1_22 == ((double) var_1_18)) : 1))
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

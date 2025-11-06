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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(double, double);
void functionized1(double, float, double, float);
signed long int functionized2(signed char);
void functionized3(unsigned char, signed long int, unsigned char, signed char, signed short int);
unsigned char functionized4(unsigned char, unsigned char, signed long int);
void functionized5(signed long int, signed char, unsigned char, signed char);
void functionized6(void);
unsigned char isInitial = 0;
double var_1_1 = 0.17500000000000004;
unsigned char var_1_2 = 1;
float var_1_3 = 10000000.75;
float var_1_4 = 15.6;
double var_1_5 = 1.6;
double var_1_6 = 7.75;
double var_1_7 = 31.8;
float var_1_8 = 15.2;
signed char var_1_9 = 1;
signed char var_1_10 = 0;
signed char var_1_11 = 32;
signed char var_1_12 = 16;
unsigned char var_1_13 = 0;
signed short int var_1_14 = -1;
signed short int var_1_15 = 5;
signed long int var_1_16 = 4;
unsigned char var_1_17 = 4;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 32;
float var_1_21 = 0.625;
signed short int var_1_22 = -128;
unsigned short int var_1_23 = 16;
unsigned char var_1_24 = 32;
unsigned char var_1_25 = 1;
void functionized0(double functionized0_localFunctionVar0, double functionized0_localFunctionVar1) {
 if (var_1_3 != var_1_4) {
  var_1_1 = functionized0_localFunctionVar1;
 } else {
  if (((- var_1_3) * functionized0_localFunctionVar0) < var_1_4) {
   var_1_1 = functionized0_localFunctionVar1;
  } else {
   var_1_1 = 199.4;
  }
 }
}
void functionized1(double functionized1_localFunctionVar0, float functionized1_localFunctionVar1, double functionized1_localFunctionVar2, float functionized1_localFunctionVar3) {
 if ((functionized1_localFunctionVar2 / functionized1_localFunctionVar1) < functionized1_localFunctionVar3) {
  if (functionized1_localFunctionVar2 < functionized1_localFunctionVar0) {
   var_1_7 = functionized1_localFunctionVar0;
  }
 }
}
signed long int functionized2(signed char functionized2_localFunctionVar0) {
 return ((((var_1_10) > (functionized2_localFunctionVar0)) ? (var_1_10) : (functionized2_localFunctionVar0)));
}
void functionized3(unsigned char functionized3_localFunctionVar0, signed long int functionized3_localFunctionVar1, unsigned char functionized3_localFunctionVar2, signed char functionized3_localFunctionVar3, signed short int functionized3_localFunctionVar4) {
 if ((var_1_14 - functionized3_localFunctionVar4) > ((functionized3_localFunctionVar3 + 1000000000) / functionized3_localFunctionVar1)) {
  var_1_13 = (var_1_17 + var_1_18);
 } else {
  var_1_13 = (functionized3_localFunctionVar2 - functionized3_localFunctionVar0);
 }
}
unsigned char functionized4(unsigned char functionized4_localFunctionVar0, unsigned char functionized4_localFunctionVar1, signed long int localFunctionVar2) {
 return (((~ var_1_17) / functionized4_localFunctionVar0) >= (functionized4_localFunctionVar1 << (1 - localFunctionVar2)));
}
void functionized5(signed long int functionized5_localFunctionVar0, signed char functionized5_localFunctionVar1, unsigned char functionized5_localFunctionVar2, signed char functionized5_localFunctionVar3) {
 if ((functionized5_localFunctionVar2 % ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) >= (functionized5_localFunctionVar3 * functionized5_localFunctionVar0)) {
  if (((2 ^ var_1_19) + functionized5_localFunctionVar0) < functionized5_localFunctionVar1) {
   var_1_22 = var_1_18;
  }
 }
}
void functionized6(void) {
 var_1_23 = var_1_18;
}
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  functionized0(var_1_6, var_1_5);
 }
 functionized1(var_1_5, var_1_8, var_1_1, var_1_3);
 if (var_1_2) {
  var_1_9 = ((((functionized2(var_1_11)) > (var_1_12)) ? (functionized2(var_1_11)) : (var_1_12)));
 }
 functionized3(var_1_20, var_1_16, var_1_19, var_1_10, var_1_15);
 if (functionized4(var_1_19, var_1_18, 0)) {
  var_1_21 = 25.8f;
 } else {
  var_1_21 = var_1_5;
 }
 functionized5(var_1_16, var_1_11, var_1_13, var_1_9);
 functionized6();
 var_1_24 = 32;
 var_1_25 = var_1_18;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 assume_abort_if_not(var_1_8 != 0.0F);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 127);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 ? ((var_1_3 != var_1_4) ? (var_1_1 == ((double) var_1_5)) : ((((- var_1_3) * var_1_6) < var_1_4) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) 199.4)))) : 1) && (((var_1_1 / var_1_8) < var_1_3) ? ((var_1_1 < var_1_5) ? (var_1_7 == ((double) var_1_5)) : 1) : 1)) && (var_1_2 ? (var_1_9 == ((signed char) ((((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))) > (var_1_12)) ? (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))) : (var_1_12))))) : 1)) && (((var_1_14 - var_1_15) > ((var_1_10 + 1000000000) / var_1_16)) ? (var_1_13 == ((unsigned char) (var_1_17 + var_1_18))) : (var_1_13 == ((unsigned char) (var_1_19 - var_1_20))))) && ((((~ var_1_17) / var_1_19) >= (var_1_18 << (1 - 0))) ? (var_1_21 == ((float) 25.8f)) : (var_1_21 == ((float) var_1_5)))) && (((var_1_13 % ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) >= (var_1_9 * var_1_16)) ? ((((2 ^ var_1_19) + var_1_16) < var_1_11) ? (var_1_22 == ((signed short int) var_1_18)) : 1) : 1)) && (var_1_23 == ((unsigned short int) var_1_18))) && (var_1_24 == ((unsigned char) 32))) && (var_1_25 == ((unsigned char) var_1_18))
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

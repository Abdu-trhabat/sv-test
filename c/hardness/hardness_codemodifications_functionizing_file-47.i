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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch47functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(unsigned char, unsigned char, float);
void functionized1(unsigned short int, unsigned char, unsigned short int);
void functionized2(unsigned char, unsigned char);
unsigned char functionized3(unsigned short int, unsigned short int);
void functionized4(unsigned char, unsigned char, unsigned short int, unsigned short int);
signed long int functionized5(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 8;
double var_1_2 = 50.5;
double var_1_3 = 0.875;
unsigned short int var_1_4 = 49926;
unsigned short int var_1_5 = 500;
unsigned short int var_1_6 = 10;
unsigned short int var_1_7 = 2;
unsigned char var_1_8 = 64;
unsigned short int var_1_9 = 5;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 10;
float var_1_12 = 0.19999999999999996;
float var_1_13 = 9.2;
float var_1_14 = 5.8;
float var_1_15 = 31.25;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
unsigned short int var_1_20 = 256;
unsigned short int var_1_21 = 23544;
unsigned long int var_1_22 = 64;
void functionized0(unsigned char functionized0_localFunctionVar0, unsigned char functionized0_localFunctionVar1, float functionized0_localFunctionVar2) {
 if ((functionized0_localFunctionVar0 * var_1_7) < functionized0_localFunctionVar1) {
  var_1_12 = ((((((((functionized0_localFunctionVar2) < (var_1_14)) ? (functionized0_localFunctionVar2) : (var_1_14)))) > (var_1_15)) ? (((((functionized0_localFunctionVar2) < (var_1_14)) ? (functionized0_localFunctionVar2) : (var_1_14)))) : (var_1_15)));
 }
}
void functionized1(unsigned short int functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1, unsigned short int functionized1_localFunctionVar2) {
 if ((var_1_6 + var_1_8) > (((((functionized1_localFunctionVar0) < 0 ) ? -(functionized1_localFunctionVar0) : (functionized1_localFunctionVar0))) + functionized1_localFunctionVar2)) {
  var_1_16 = (functionized1_localFunctionVar1 || var_1_17);
 } else {
  var_1_16 = var_1_18;
 }
}
void functionized2(unsigned char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
 if (var_1_16) {
  if ((var_1_1 < 64) || functionized2_localFunctionVar1) {
   var_1_19 = functionized2_localFunctionVar0;
  }
 }
}
unsigned char functionized3(unsigned short int functionized3_localFunctionVar0, unsigned short int functionized3_localFunctionVar1) {
 return (functionized3_localFunctionVar0 <= functionized3_localFunctionVar1);
}
void functionized4(unsigned char functionized4_localFunctionVar0, unsigned char functionized4_localFunctionVar1, unsigned short int functionized4_localFunctionVar2, unsigned short int functionized4_localFunctionVar3) {
 if (functionized4_localFunctionVar0) {
  var_1_20 = (functionized4_localFunctionVar3 - ((((functionized4_localFunctionVar2 - functionized4_localFunctionVar1) < 0 ) ? -(functionized4_localFunctionVar2 - functionized4_localFunctionVar1) : (functionized4_localFunctionVar2 - functionized4_localFunctionVar1))));
 } else {
  var_1_20 = 16;
 }
}
signed long int functionized5(void) {
 return (var_1_4 - var_1_5);
}
void initially(void) {
}
void step(void) {
 if (var_1_2 >= (1.3 / var_1_3)) {
  var_1_1 = ((var_1_4 - var_1_5) - var_1_6);
 } else {
  var_1_1 = ((((var_1_7) < (var_1_4)) ? (var_1_7) : (var_1_4)));
 }
 if (var_1_5 >= (32796 - ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9))))) {
  if (var_1_10) {
   var_1_8 = var_1_11;
  }
 }
 if (var_1_10) {
  functionized0(var_1_8, var_1_11, var_1_13);
 } else {
  var_1_12 = var_1_14;
 }
 functionized1(var_1_7, var_1_10, var_1_1);
 functionized2(var_1_17, var_1_10);
 if (functionized3(var_1_6, var_1_4)) {
  functionized4(var_1_16, var_1_8, var_1_21, var_1_4);
 } else {
  var_1_20 = functionized5();
 }
 if (var_1_8 >= (((((var_1_4 * var_1_6)) > ((2 ^ var_1_1))) ? ((var_1_4 * var_1_6)) : ((2 ^ var_1_1))))) {
  var_1_22 = var_1_8;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 49150);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 16383);
 assume_abort_if_not(var_1_21 <= 32767);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2 >= (1.3 / var_1_3)) ? (var_1_1 == ((unsigned short int) ((var_1_4 - var_1_5) - var_1_6))) : (var_1_1 == ((unsigned short int) ((((var_1_7) < (var_1_4)) ? (var_1_7) : (var_1_4)))))) && ((var_1_5 >= (32796 - ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9))))) ? (var_1_10 ? (var_1_8 == ((unsigned char) var_1_11)) : 1) : 1)) && (var_1_10 ? (((var_1_8 * var_1_7) < var_1_11) ? (var_1_12 == ((float) ((((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) > (var_1_15)) ? (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) : (var_1_15))))) : 1) : (var_1_12 == ((float) var_1_14)))) && (((var_1_6 + var_1_8) > (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_1)) ? (var_1_16 == ((unsigned char) (var_1_10 || var_1_17))) : (var_1_16 == ((unsigned char) var_1_18)))) && (var_1_16 ? (((var_1_1 < 64) || var_1_10) ? (var_1_19 == ((unsigned char) var_1_17)) : 1) : 1)) && ((var_1_6 <= var_1_4) ? (var_1_16 ? (var_1_20 == ((unsigned short int) (var_1_4 - ((((var_1_21 - var_1_8) < 0 ) ? -(var_1_21 - var_1_8) : (var_1_21 - var_1_8)))))) : (var_1_20 == ((unsigned short int) 16))) : (var_1_20 == ((unsigned short int) (var_1_4 - var_1_5))))) && ((var_1_8 >= (((((var_1_4 * var_1_6)) > ((2 ^ var_1_1))) ? ((var_1_4 * var_1_6)) : ((2 ^ var_1_1))))) ? (var_1_22 == ((unsigned long int) var_1_8)) : 1)
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

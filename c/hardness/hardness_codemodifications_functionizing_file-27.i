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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch27functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char functionized0(void);
void functionized1(float, float, unsigned char);
unsigned char functionized2(unsigned long int);
void functionized3(unsigned char, unsigned long int, unsigned long int, unsigned char);
void functionized4(unsigned long int);
unsigned char isInitial = 0;
float var_1_1 = 3.9;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
float var_1_4 = 31.5;
float var_1_5 = 25.4;
float var_1_6 = 9.5;
float var_1_7 = 63.2;
unsigned long int var_1_8 = 1;
unsigned long int var_1_9 = 128;
signed short int var_1_10 = -50;
unsigned long int var_1_11 = 16;
unsigned char var_1_12 = 32;
float var_1_13 = 15.625;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 128;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 8;
unsigned short int var_1_21 = 16;
unsigned short int var_1_22 = 128;
unsigned char functionized0(void) {
 return (var_1_2 || var_1_3);
}
void functionized1(float functionized1_localFunctionVar0, float functionized1_localFunctionVar1, unsigned char functionized1_localFunctionVar2) {
 if (var_1_2 || functionized1_localFunctionVar2) {
  var_1_1 = (((((((((functionized1_localFunctionVar1) < (functionized1_localFunctionVar0)) ? (functionized1_localFunctionVar1) : (functionized1_localFunctionVar0)))) > (var_1_6)) ? (((((functionized1_localFunctionVar1) < (functionized1_localFunctionVar0)) ? (functionized1_localFunctionVar1) : (functionized1_localFunctionVar0)))) : (var_1_6))) - var_1_7);
 } else {
  var_1_1 = 1.0000000075E8f;
 }
}
unsigned char functionized2(unsigned long int functionized2_localFunctionVar0) {
 return (var_1_8 != functionized2_localFunctionVar0);
}
void functionized3(unsigned char functionized3_localFunctionVar0, unsigned long int functionized3_localFunctionVar1, unsigned long int functionized3_localFunctionVar2, unsigned char functionized3_localFunctionVar3) {
 if (! var_1_2) {
  if (var_1_2 || var_1_3) {
   var_1_14 = ((! (! var_1_15)) && (var_1_16 && var_1_17));
  } else {
   if (((((functionized3_localFunctionVar2) > (functionized3_localFunctionVar3)) ? (functionized3_localFunctionVar2) : (functionized3_localFunctionVar3))) >= functionized3_localFunctionVar1) {
    var_1_14 = (var_1_2 || var_1_16);
   } else {
    var_1_14 = (! functionized3_localFunctionVar0);
   }
  }
 }
}
void functionized4(unsigned long int functionized4_localFunctionVar0) {
 var_1_20 = functionized4_localFunctionVar0;
}
void initially(void) {
}
void step(void) {
 if (functionized0()) {
  functionized1(var_1_5, var_1_4, var_1_3);
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_6 > (- var_1_7)) {
  if (var_1_5 == (((((var_1_6 * var_1_7)) > (var_1_1)) ? ((var_1_6 * var_1_7)) : (var_1_1)))) {
   var_1_8 = 8u;
  }
 } else {
  var_1_8 = var_1_9;
 }
 if ((var_1_9 + var_1_8) > (2u >> var_1_11)) {
  if (functionized2(var_1_9)) {
   var_1_10 = var_1_11;
  } else {
   var_1_10 = 128;
  }
 }
 if (var_1_6 == (var_1_4 / var_1_13)) {
  var_1_12 = var_1_11;
 }
 functionized3(var_1_19, var_1_18, var_1_9, var_1_12);
 functionized4(var_1_11);
 var_1_21 = 8;
 var_1_22 = var_1_12;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 31);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 4294967295);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 || var_1_3) ? ((var_1_2 || var_1_3) ? (var_1_1 == ((float) (((((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) > (var_1_6)) ? (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_6))) - var_1_7))) : (var_1_1 == ((float) 1.0000000075E8f))) : (var_1_1 == ((float) var_1_7))) && ((var_1_6 > (- var_1_7)) ? ((var_1_5 == (((((var_1_6 * var_1_7)) > (var_1_1)) ? ((var_1_6 * var_1_7)) : (var_1_1)))) ? (var_1_8 == ((unsigned long int) 8u)) : 1) : (var_1_8 == ((unsigned long int) var_1_9)))) && (((var_1_9 + var_1_8) > (2u >> var_1_11)) ? ((var_1_8 != var_1_9) ? (var_1_10 == ((signed short int) var_1_11)) : (var_1_10 == ((signed short int) 128))) : 1)) && ((var_1_6 == (var_1_4 / var_1_13)) ? (var_1_12 == ((unsigned char) var_1_11)) : 1)) && ((! var_1_2) ? ((var_1_2 || var_1_3) ? (var_1_14 == ((unsigned char) ((! (! var_1_15)) && (var_1_16 && var_1_17)))) : ((((((var_1_9) > (var_1_12)) ? (var_1_9) : (var_1_12))) >= var_1_18) ? (var_1_14 == ((unsigned char) (var_1_2 || var_1_16))) : (var_1_14 == ((unsigned char) (! var_1_19))))) : 1)) && (var_1_20 == ((unsigned char) var_1_11))) && (var_1_21 == ((unsigned short int) 8))) && (var_1_22 == ((unsigned short int) var_1_12))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(unsigned char, signed char);
void functionized1(unsigned char, signed char, signed char);
void functionized2(signed char, signed char);
unsigned char functionized3(unsigned char, signed long int);
signed long int functionized4(unsigned short int);
unsigned char functionized5(unsigned short int);
unsigned char isInitial = 0;
unsigned char var_1_1 = 10;
signed char var_1_2 = 10;
signed char var_1_3 = -32;
signed char var_1_4 = 1;
unsigned char var_1_5 = 50;
unsigned char var_1_6 = 8;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 4;
unsigned char var_1_10 = 32;
unsigned short int var_1_11 = 10;
unsigned char var_1_12 = 2;
unsigned short int var_1_13 = 0;
unsigned short int var_1_14 = 17724;
unsigned short int var_1_15 = 32612;
unsigned long int var_1_16 = 8;
void functionized0(unsigned char functionized0_localFunctionVar0, signed char functionized0_localFunctionVar1) {
 if (functionized0_localFunctionVar1 < 2) {
  var_1_1 = functionized0_localFunctionVar0;
 } else {
  if (functionized0_localFunctionVar1 < var_1_3) {
   var_1_1 = functionized0_localFunctionVar0;
  } else {
   var_1_1 = 25;
  }
 }
}
void functionized1(unsigned char functionized1_localFunctionVar0, signed char functionized1_localFunctionVar1, signed char functionized1_localFunctionVar2) {
 if (var_1_7) {
  if (var_1_8 && (functionized1_localFunctionVar2 <= functionized1_localFunctionVar1)) {
   var_1_6 = (128 - ((((var_1_9) < (functionized1_localFunctionVar0)) ? (var_1_9) : (functionized1_localFunctionVar0))));
  } else {
   var_1_6 = functionized1_localFunctionVar0;
  }
 }
}
void functionized2(signed char functionized2_localFunctionVar0, signed char functionized2_localFunctionVar1) {
 if (((((functionized2_localFunctionVar1) < (functionized2_localFunctionVar0)) ? (functionized2_localFunctionVar1) : (functionized2_localFunctionVar0))) > ((((var_1_9) > ((var_1_4 + var_1_1))) ? (var_1_9) : ((var_1_4 + var_1_1))))) {
  var_1_12 = var_1_5;
 } else {
  var_1_12 = var_1_9;
 }
}
unsigned char functionized3(unsigned char functionized3_localFunctionVar0, signed long int localFunctionVar1) {
 return (localFunctionVar1 < functionized3_localFunctionVar0);
}
signed long int functionized4(unsigned short int functionized4_localFunctionVar0) {
 return ((((((var_1_14 + functionized4_localFunctionVar0) - var_1_12)) > (100)) ? (((var_1_14 + functionized4_localFunctionVar0) - var_1_12)) : (100)));
}
unsigned char functionized5(unsigned short int functionized5_localFunctionVar0) {
 return (var_1_4 != functionized5_localFunctionVar0);
}
void initially(void) {
}
void step(void) {
 if (var_1_2 > (var_1_3 * var_1_4)) {
  var_1_1 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 } else {
  functionized0(var_1_5, var_1_2);
 }
 functionized1(var_1_10, var_1_4, var_1_3);
 if (var_1_10 > (var_1_5 + var_1_1)) {
  if (((- var_1_6) < var_1_4) && var_1_7) {
   if (var_1_10 <= var_1_1) {
    var_1_11 = var_1_10;
   }
  } else {
   var_1_11 = var_1_9;
  }
 } else {
  var_1_11 = var_1_5;
 }
 functionized2(var_1_2, var_1_3);
 if (functionized3(var_1_6, 1)) {
  var_1_13 = functionized4(var_1_15);
 }
 if (functionized5(var_1_15)) {
  if (! (var_1_11 != var_1_12)) {
   var_1_16 = 1000u;
  }
 }
}
void updateVariables(void) {
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
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 16384);
 assume_abort_if_not(var_1_15 <= 32767);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 > (var_1_3 * var_1_4)) ? (var_1_1 == ((unsigned char) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : ((var_1_2 < 2) ? (var_1_1 == ((unsigned char) var_1_5)) : ((var_1_2 < var_1_3) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) 25))))) && (var_1_7 ? ((var_1_8 && (var_1_3 <= var_1_4)) ? (var_1_6 == ((unsigned char) (128 - ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)))))) : (var_1_6 == ((unsigned char) var_1_10))) : 1)) && ((var_1_10 > (var_1_5 + var_1_1)) ? ((((- var_1_6) < var_1_4) && var_1_7) ? ((var_1_10 <= var_1_1) ? (var_1_11 == ((unsigned short int) var_1_10)) : 1) : (var_1_11 == ((unsigned short int) var_1_9))) : (var_1_11 == ((unsigned short int) var_1_5)))) && ((((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))) > ((((var_1_9) > ((var_1_4 + var_1_1))) ? (var_1_9) : ((var_1_4 + var_1_1))))) ? (var_1_12 == ((unsigned char) var_1_5)) : (var_1_12 == ((unsigned char) var_1_9)))) && ((1 < var_1_6) ? (var_1_13 == ((unsigned short int) ((((((var_1_14 + var_1_15) - var_1_12)) > (100)) ? (((var_1_14 + var_1_15) - var_1_12)) : (100))))) : 1)) && ((var_1_4 != var_1_15) ? ((! (var_1_11 != var_1_12)) ? (var_1_16 == ((unsigned long int) 1000u)) : 1) : 1)
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

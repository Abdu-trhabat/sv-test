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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char functionized0(unsigned char, unsigned char, unsigned char, signed long int);
signed long int functionized1(unsigned char);
void functionized2(unsigned char);
void functionized3(unsigned short int, unsigned char, unsigned char);
signed long int functionized4(unsigned short int);
void functionized5(unsigned char, signed long int);
unsigned char functionized6(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 25;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 62100;
unsigned short int var_1_7 = 27651;
double var_1_8 = 128.9;
unsigned char var_1_9 = 1;
double var_1_10 = 16.5;
double var_1_11 = 25.5;
double var_1_12 = 199.75;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned short int var_1_17 = 32;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 1;
unsigned char functionized0(unsigned char functionized0_localFunctionVar0, unsigned char functionized0_localFunctionVar1, unsigned char functionized0_localFunctionVar2, signed long int localFunctionVar3) {
 return ((functionized0_localFunctionVar2 != (localFunctionVar3 / functionized0_localFunctionVar1)) && functionized0_localFunctionVar0);
}
signed long int functionized1(unsigned char functionized1_localFunctionVar0) {
 return (var_1_4 + functionized1_localFunctionVar0);
}
void functionized2(unsigned char functionized2_localFunctionVar0) {
 if (functionized2_localFunctionVar0) {
  var_1_1 = var_1_3;
 } else {
  var_1_1 = var_1_4;
 }
}
void functionized3(unsigned short int functionized3_localFunctionVar0, unsigned char functionized3_localFunctionVar1, unsigned char functionized3_localFunctionVar2) {
 if (! functionized3_localFunctionVar1) {
  var_1_5 = ((((functionized3_localFunctionVar2) > ((functionized3_localFunctionVar0 + var_1_4))) ? (functionized3_localFunctionVar2) : ((functionized3_localFunctionVar0 + var_1_4))));
 }
}
signed long int functionized4(unsigned short int functionized4_localFunctionVar0) {
 return ((((var_1_1) > (functionized4_localFunctionVar0)) ? (var_1_1) : (functionized4_localFunctionVar0)));
}
void functionized5(unsigned char functionized5_localFunctionVar0, signed long int localFunctionVar1) {
 if (functionized5_localFunctionVar0 <= var_1_6) {
  var_1_13 = localFunctionVar1;
 } else {
  var_1_13 = var_1_14;
 }
}
unsigned char functionized6(void) {
 return (! var_1_16);
}
void initially(void) {
}
void step(void) {
 if (functionized0(var_1_2, var_1_4, var_1_3, 16)) {
  if (var_1_3 > var_1_4) {
   var_1_1 = functionized1(var_1_3);
  } else {
   functionized2(var_1_2);
  }
 } else {
  var_1_1 = var_1_3;
 }
 if (var_1_1 < var_1_3) {
  var_1_5 = (var_1_6 - (var_1_7 - var_1_3));
 } else {
  functionized3(var_1_7, var_1_2, var_1_3);
 }
 if (var_1_2) {
  if ((! var_1_9) || (var_1_5 < var_1_6)) {
   var_1_8 = ((((127.25) > (var_1_10)) ? (127.25) : (var_1_10)));
  } else {
   var_1_8 = (var_1_11 + var_1_12);
  }
 } else {
  var_1_8 = var_1_11;
 }
 if (var_1_3 != ((var_1_6 / var_1_4) * functionized4(var_1_5))) {
  functionized5(var_1_3, 32);
 } else {
  var_1_13 = var_1_14;
 }
 if (var_1_12 != var_1_8) {
  var_1_15 = functionized6();
 } else {
  var_1_15 = var_1_16;
 }
 var_1_17 = var_1_4;
 var_1_18 = var_1_16;
 var_1_19 = var_1_4;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 32767);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 16383);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_3 != (16 / var_1_4)) && var_1_2) ? ((var_1_3 > var_1_4) ? (var_1_1 == ((unsigned short int) (var_1_4 + var_1_3))) : (var_1_2 ? (var_1_1 == ((unsigned short int) var_1_3)) : (var_1_1 == ((unsigned short int) var_1_4)))) : (var_1_1 == ((unsigned short int) var_1_3))) && ((var_1_1 < var_1_3) ? (var_1_5 == ((unsigned short int) (var_1_6 - (var_1_7 - var_1_3)))) : ((! var_1_2) ? (var_1_5 == ((unsigned short int) ((((var_1_3) > ((var_1_7 + var_1_4))) ? (var_1_3) : ((var_1_7 + var_1_4)))))) : 1))) && (var_1_2 ? (((! var_1_9) || (var_1_5 < var_1_6)) ? (var_1_8 == ((double) ((((127.25) > (var_1_10)) ? (127.25) : (var_1_10))))) : (var_1_8 == ((double) (var_1_11 + var_1_12)))) : (var_1_8 == ((double) var_1_11)))) && ((var_1_3 != ((var_1_6 / var_1_4) * ((((var_1_1) > (var_1_5)) ? (var_1_1) : (var_1_5))))) ? ((var_1_3 <= var_1_6) ? (var_1_13 == ((unsigned char) 32)) : (var_1_13 == ((unsigned char) var_1_14))) : (var_1_13 == ((unsigned char) var_1_14)))) && ((var_1_12 != var_1_8) ? (var_1_15 == ((unsigned char) (! var_1_16))) : (var_1_15 == ((unsigned char) var_1_16)))) && (var_1_17 == ((unsigned short int) var_1_4))) && (var_1_18 == ((unsigned char) var_1_16))) && (var_1_19 == ((unsigned long int) var_1_4))
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

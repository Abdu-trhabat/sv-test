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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch108functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(float, signed char);
signed long int functionized1(unsigned short int);
signed long int functionized2(unsigned short int);
unsigned char functionized3(signed long int);
unsigned char functionized4(signed long int);
signed long int functionized5(unsigned char);
signed long int functionized6(unsigned char);
unsigned char isInitial = 0;
float var_1_1 = 31.625;
signed char var_1_2 = -8;
signed char var_1_3 = 0;
signed char var_1_4 = 0;
float var_1_5 = 1.25;
float var_1_6 = 10000000000.8;
unsigned short int var_1_7 = 256;
unsigned short int var_1_8 = 256;
unsigned short int var_1_9 = 10000;
unsigned short int var_1_10 = 10000;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 55248;
signed long int var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed long int var_1_16 = 4;
unsigned short int var_1_17 = 4;
signed short int var_1_18 = -128;
unsigned short int var_1_19 = 28085;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 16;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 0;
signed short int var_1_26 = 1;
void functionized0(float functionized0_localFunctionVar0, signed char functionized0_localFunctionVar1) {
 if ((functionized0_localFunctionVar1 * ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) != 4) {
  var_1_1 = (functionized0_localFunctionVar0 + var_1_6);
 } else {
  var_1_1 = functionized0_localFunctionVar0;
 }
}
signed long int functionized1(unsigned short int functionized1_localFunctionVar0) {
 return (functionized1_localFunctionVar0 | 32);
}
signed long int functionized2(unsigned short int functionized2_localFunctionVar0) {
 return (var_1_9 + functionized2_localFunctionVar0);
}
unsigned char functionized3(signed long int functionized3_localFunctionVar0) {
 return ((var_1_18 + functionized3_localFunctionVar0) >= ((((var_1_7 + var_1_10) < 0 ) ? -(var_1_7 + var_1_10) : (var_1_7 + var_1_10))));
}
unsigned char functionized4(signed long int localFunctionVar0) {
 return (var_1_7 >= localFunctionVar0);
}
signed long int functionized5(unsigned char functionized5_localFunctionVar0) {
 return (((((functionized5_localFunctionVar0) > (var_1_24)) ? (functionized5_localFunctionVar0) : (var_1_24))) - var_1_25);
}
signed long int functionized6(unsigned char functionized6_localFunctionVar0) {
 return (4 + (16 + functionized6_localFunctionVar0));
}
void initially(void) {
}
void step(void) {
 functionized0(var_1_5, var_1_2);
 if (functionized1(var_1_8) > (var_1_2 + var_1_4)) {
  var_1_7 = (256 + (functionized2(var_1_10) - var_1_11));
 } else {
  var_1_7 = (var_1_12 - var_1_9);
 }
 if (var_1_14) {
  var_1_13 = var_1_9;
 } else {
  if (var_1_15) {
   var_1_13 = (var_1_8 - var_1_16);
  }
 }
 if (functionized3(var_1_13)) {
  var_1_17 = (((var_1_10 + 10000) + var_1_19) - var_1_9);
 } else {
  var_1_17 = var_1_11;
 }
 if (var_1_9 < var_1_19) {
  if (functionized4(0)) {
   var_1_20 = var_1_21;
  }
 }
 if (var_1_15) {
  var_1_22 = functionized5(var_1_23);
 }
 if (var_1_15) {
  if (var_1_21 >= 2) {
   var_1_26 = var_1_10;
  } else {
   var_1_26 = functionized6(var_1_20);
  }
 } else {
  var_1_26 = (var_1_21 - var_1_20);
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
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65535);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 8191);
 assume_abort_if_not(var_1_9 <= 16384);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 8192);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= -32768);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 16384);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 127);
 assume_abort_if_not(var_1_23 <= 254);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 127);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 * ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) != 4) ? (var_1_1 == ((float) (var_1_5 + var_1_6))) : (var_1_1 == ((float) var_1_5))) && (((var_1_8 | 32) > (var_1_2 + var_1_4)) ? (var_1_7 == ((unsigned short int) (256 + ((var_1_9 + var_1_10) - var_1_11)))) : (var_1_7 == ((unsigned short int) (var_1_12 - var_1_9))))) && (var_1_14 ? (var_1_13 == ((signed long int) var_1_9)) : (var_1_15 ? (var_1_13 == ((signed long int) (var_1_8 - var_1_16))) : 1))) && (((var_1_18 + var_1_13) >= ((((var_1_7 + var_1_10) < 0 ) ? -(var_1_7 + var_1_10) : (var_1_7 + var_1_10)))) ? (var_1_17 == ((unsigned short int) (((var_1_10 + 10000) + var_1_19) - var_1_9))) : (var_1_17 == ((unsigned short int) var_1_11)))) && ((var_1_9 < var_1_19) ? ((var_1_7 >= 0) ? (var_1_20 == ((unsigned char) var_1_21)) : 1) : 1)) && (var_1_15 ? (var_1_22 == ((unsigned char) (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))) - var_1_25))) : 1)) && (var_1_15 ? ((var_1_21 >= 2) ? (var_1_26 == ((signed short int) var_1_10)) : (var_1_26 == ((signed short int) (4 + (16 + var_1_20))))) : (var_1_26 == ((signed short int) (var_1_21 - var_1_20))))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(unsigned short int, double, unsigned char, unsigned short int, double);
void functionized1(unsigned char, unsigned char, unsigned short int, unsigned short int);
signed long int functionized2(unsigned short int, signed long int);
signed long int functionized3(void);
void functionized4(double, double);
unsigned long int functionized5(void);
signed long int functionized6(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 50;
unsigned short int var_1_2 = 64;
unsigned short int var_1_3 = 0;
unsigned short int var_1_4 = 128;
unsigned short int var_1_5 = 8;
double var_1_6 = -0.75;
unsigned char var_1_7 = 1;
double var_1_8 = 32.8;
double var_1_9 = 128.8;
unsigned short int var_1_10 = 64;
unsigned char var_1_11 = 1;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 8;
signed long int var_1_14 = 128;
signed long int var_1_15 = -1;
signed char var_1_16 = 16;
signed char var_1_17 = 1;
signed long int var_1_18 = 100;
float var_1_19 = 3.6;
signed long int var_1_20 = 32;
unsigned char var_1_21 = 2;
void functionized0(unsigned short int functionized0_localFunctionVar0, double functionized0_localFunctionVar1, unsigned char functionized0_localFunctionVar2, unsigned short int functionized0_localFunctionVar3, double functionized0_localFunctionVar4) {
 if (var_1_3 >= var_1_1) {
  if (functionized0_localFunctionVar2) {
   var_1_6 = ((((functionized0_localFunctionVar1) > ((4.75 + functionized0_localFunctionVar4))) ? (functionized0_localFunctionVar1) : ((4.75 + functionized0_localFunctionVar4))));
  }
 } else {
  if (((((var_1_1) < (functionized0_localFunctionVar3)) ? (var_1_1) : (functionized0_localFunctionVar3))) >= functionized0_localFunctionVar0) {
   var_1_6 = functionized0_localFunctionVar4;
  }
 }
}
void functionized1(unsigned char functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1, unsigned short int functionized1_localFunctionVar2, unsigned short int functionized1_localFunctionVar3) {
 if (functionized1_localFunctionVar1) {
  if (! functionized1_localFunctionVar0) {
   var_1_10 = (functionized1_localFunctionVar3 + functionized1_localFunctionVar2);
  } else {
   if (var_1_5 > var_1_2) {
    var_1_10 = functionized1_localFunctionVar2;
   }
  }
 }
}
signed long int functionized2(unsigned short int functionized2_localFunctionVar0, signed long int functionized2_localFunctionVar1) {
 return (((((var_1_4 - functionized2_localFunctionVar0)) < (functionized2_localFunctionVar1)) ? ((var_1_4 - functionized2_localFunctionVar0)) : (functionized2_localFunctionVar1)));
}
signed long int functionized3(void) {
 return (var_1_12 - (var_1_4 + var_1_5));
}
void functionized4(double functionized4_localFunctionVar0, double functionized4_localFunctionVar1) {
 var_1_19 = ((((functionized4_localFunctionVar0) < (functionized4_localFunctionVar1)) ? (functionized4_localFunctionVar0) : (functionized4_localFunctionVar1)));
}
unsigned long int functionized5(void) {
 return (var_1_1 * var_1_4);
}
signed long int functionized6(void) {
 return ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
}
void initially(void) {
}
void step(void) {
 if (var_1_2 != (var_1_3 & (var_1_4 / var_1_5))) {
  var_1_1 = (var_1_5 + var_1_2);
 } else {
  var_1_1 = var_1_5;
 }
 functionized0(var_1_5, var_1_8, var_1_7, var_1_2, var_1_9);
 functionized1(var_1_11, var_1_7, var_1_13, var_1_12);
 var_1_14 = (functionized2(var_1_12, var_1_15));
 if (var_1_14 > (var_1_12 + (var_1_1 / var_1_5))) {
  if (var_1_7) {
   var_1_16 = var_1_17;
  }
 }
 if (5 >= var_1_2) {
  var_1_18 = functionized3();
 }
 functionized4(var_1_8, var_1_9);
 if (var_1_17 > functionized5()) {
  var_1_20 = functionized6();
 } else {
  if ((var_1_15 * (var_1_21 | var_1_14)) != var_1_10) {
   var_1_20 = -32;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65535);
 assume_abort_if_not(var_1_5 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483647);
 assume_abort_if_not(var_1_15 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 255);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 != (var_1_3 & (var_1_4 / var_1_5))) ? (var_1_1 == ((unsigned long int) (var_1_5 + var_1_2))) : (var_1_1 == ((unsigned long int) var_1_5))) && ((var_1_3 >= var_1_1) ? (var_1_7 ? (var_1_6 == ((double) ((((var_1_8) > ((4.75 + var_1_9))) ? (var_1_8) : ((4.75 + var_1_9)))))) : 1) : ((((((var_1_1) < (var_1_2)) ? (var_1_1) : (var_1_2))) >= var_1_5) ? (var_1_6 == ((double) var_1_9)) : 1))) && (var_1_7 ? ((! var_1_11) ? (var_1_10 == ((unsigned short int) (var_1_12 + var_1_13))) : ((var_1_5 > var_1_2) ? (var_1_10 == ((unsigned short int) var_1_13)) : 1)) : 1)) && (var_1_14 == ((signed long int) (((((var_1_4 - var_1_12)) < (var_1_15)) ? ((var_1_4 - var_1_12)) : (var_1_15)))))) && ((var_1_14 > (var_1_12 + (var_1_1 / var_1_5))) ? (var_1_7 ? (var_1_16 == ((signed char) var_1_17)) : 1) : 1)) && ((5 >= var_1_2) ? (var_1_18 == ((signed long int) (var_1_12 - (var_1_4 + var_1_5)))) : 1)) && (var_1_19 == ((float) ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)))))) && ((var_1_17 > (var_1_1 * var_1_4)) ? (var_1_20 == ((signed long int) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (((var_1_15 * (var_1_21 | var_1_14)) != var_1_10) ? (var_1_20 == ((signed long int) -32)) : 1))
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

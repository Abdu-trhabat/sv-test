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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch140functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(signed char, signed short int, signed char, unsigned char);
void functionized1(double, double);
void functionized2(signed short int);
void functionized3(float, signed short int, float);
void functionized4(signed short int, signed char, signed short int, signed short int, unsigned char, signed long int);
void functionized5(signed short int);
unsigned char isInitial = 0;
signed short int var_1_1 = -10;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed char var_1_4 = -32;
signed char var_1_5 = 8;
signed short int var_1_6 = 32;
signed short int var_1_7 = 1;
double var_1_8 = 5.5;
double var_1_9 = 31.6;
double var_1_10 = 0.25;
double var_1_11 = 32.9;
double var_1_12 = 255.5;
double var_1_13 = 500.8;
signed short int var_1_14 = 0;
float var_1_15 = 25.25;
float var_1_16 = 127.25;
unsigned char var_1_17 = 0;
signed char var_1_18 = -10;
float var_1_19 = 4.5;
signed char var_1_20 = -1;
signed char var_1_21 = 2;
signed char var_1_22 = 32;
unsigned long int var_1_23 = 64;
unsigned long int var_1_24 = 1;
signed char var_1_25 = 64;
void functionized0(signed char functionized0_localFunctionVar0, signed short int functionized0_localFunctionVar1, signed char functionized0_localFunctionVar2, unsigned char functionized0_localFunctionVar3) {
 if (var_1_2 && functionized0_localFunctionVar3) {
  if (functionized0_localFunctionVar2 < functionized0_localFunctionVar0) {
   if (functionized0_localFunctionVar3) {
    var_1_1 = (var_1_6 - functionized0_localFunctionVar1);
   } else {
    var_1_1 = functionized0_localFunctionVar1;
   }
  } else {
   var_1_1 = functionized0_localFunctionVar1;
  }
 } else {
  var_1_1 = functionized0_localFunctionVar0;
 }
}
void functionized1(double functionized1_localFunctionVar0, double functionized1_localFunctionVar1) {
 if (var_1_3) {
  var_1_8 = (functionized1_localFunctionVar1 + functionized1_localFunctionVar0);
 }
}
void functionized2(signed short int functionized2_localFunctionVar0) {
 var_1_14 = ((((functionized2_localFunctionVar0) > (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) ? (functionized2_localFunctionVar0) : (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))));
}
void functionized3(float functionized3_localFunctionVar0, signed short int functionized3_localFunctionVar1, float localFunctionVar2) {
 if (functionized3_localFunctionVar1 <= var_1_6) {
  var_1_15 = (var_1_12 - ((((var_1_13) < ((localFunctionVar2 - functionized3_localFunctionVar0))) ? (var_1_13) : ((localFunctionVar2 - functionized3_localFunctionVar0)))));
 } else {
  if (var_1_17) {
   var_1_15 = var_1_9;
  }
 }
}
void functionized4(signed short int functionized4_localFunctionVar0, signed char functionized4_localFunctionVar1, signed short int functionized4_localFunctionVar2, signed short int functionized4_localFunctionVar3, unsigned char functionized4_localFunctionVar4, signed long int localFunctionVar5) {
 if (functionized4_localFunctionVar0 > var_1_5) {
  if (((functionized4_localFunctionVar0 - functionized4_localFunctionVar2) | var_1_4) >= functionized4_localFunctionVar3) {
   if (functionized4_localFunctionVar4 && (var_1_15 >= (var_1_13 - var_1_19))) {
    var_1_18 = (var_1_20 - var_1_21);
   } else {
    var_1_18 = ((((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)))) < (-16)) ? (((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)))) : (-16)));
   }
  } else {
   var_1_18 = (-10 + (functionized4_localFunctionVar1 + localFunctionVar5));
  }
 }
}
void functionized5(signed short int functionized5_localFunctionVar0) {
 var_1_23 = ((((((((functionized5_localFunctionVar0) > (var_1_21)) ? (functionized5_localFunctionVar0) : (var_1_21)))) > (var_1_24)) ? (((((functionized5_localFunctionVar0) > (var_1_21)) ? (functionized5_localFunctionVar0) : (var_1_21)))) : (var_1_24)));
}
void initially(void) {
}
void step(void) {
 functionized0(var_1_5, var_1_7, var_1_4, var_1_3);
 functionized1(var_1_10, var_1_9);
 if (var_1_10 >= var_1_8) {
  var_1_11 = (var_1_12 - var_1_13);
 }
 functionized2(var_1_6);
 functionized3(var_1_16, var_1_1, 5.410574086893798E18f);
 functionized4(var_1_6, var_1_22, var_1_7, var_1_1, var_1_3, 5);
 functionized5(var_1_7);
 var_1_25 = -1;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -128);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -31);
 assume_abort_if_not(var_1_22 <= 32);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 && var_1_3) ? ((var_1_4 < var_1_5) ? (var_1_3 ? (var_1_1 == ((signed short int) (var_1_6 - var_1_7))) : (var_1_1 == ((signed short int) var_1_7))) : (var_1_1 == ((signed short int) var_1_7))) : (var_1_1 == ((signed short int) var_1_5))) && (var_1_3 ? (var_1_8 == ((double) (var_1_9 + var_1_10))) : 1)) && ((var_1_10 >= var_1_8) ? (var_1_11 == ((double) (var_1_12 - var_1_13))) : 1)) && (var_1_14 == ((signed short int) ((((var_1_6) > (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) ? (var_1_6) : (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))))))) && ((var_1_1 <= var_1_6) ? (var_1_15 == ((float) (var_1_12 - ((((var_1_13) < ((5.410574086893798E18f - var_1_16))) ? (var_1_13) : ((5.410574086893798E18f - var_1_16))))))) : (var_1_17 ? (var_1_15 == ((float) var_1_9)) : 1))) && ((var_1_6 > var_1_5) ? ((((var_1_6 - var_1_7) | var_1_4) >= var_1_1) ? ((var_1_3 && (var_1_15 >= (var_1_13 - var_1_19))) ? (var_1_18 == ((signed char) (var_1_20 - var_1_21))) : (var_1_18 == ((signed char) ((((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)))) < (-16)) ? (((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)))) : (-16)))))) : (var_1_18 == ((signed char) (-10 + (var_1_22 + 5))))) : 1)) && (var_1_23 == ((unsigned long int) ((((((((var_1_7) > (var_1_21)) ? (var_1_7) : (var_1_21)))) > (var_1_24)) ? (((((var_1_7) > (var_1_21)) ? (var_1_7) : (var_1_21)))) : (var_1_24)))))) && (var_1_25 == ((signed char) -1))
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

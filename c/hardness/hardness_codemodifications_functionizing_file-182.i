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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(float, float, float, float, float, unsigned short int);
void functionized1(unsigned short int, signed long int, unsigned short int, float);
signed long int functionized2(signed short int);
unsigned char functionized3(float);
unsigned char functionized4(unsigned short int);
void functionized5(float, signed short int);
void functionized6(float, signed short int, float, float);
unsigned char isInitial = 0;
float var_1_1 = -0.5;
unsigned short int var_1_2 = 50;
unsigned short int var_1_3 = 8;
signed long int var_1_4 = 100000000;
float var_1_5 = 16.625;
float var_1_6 = 24.25;
float var_1_7 = 199.5;
float var_1_8 = 8.25;
unsigned char var_1_9 = 1;
float var_1_10 = 8.1;
float var_1_11 = 25.375;
float var_1_12 = 0.55;
float var_1_13 = 24.75;
unsigned short int var_1_14 = 57387;
unsigned short int var_1_15 = 64;
signed short int var_1_16 = 256;
float var_1_17 = 1.2;
signed short int var_1_18 = 30236;
signed short int var_1_19 = 0;
unsigned long int var_1_20 = 1;
unsigned short int var_1_21 = 2;
unsigned short int var_1_22 = 54553;
unsigned short int var_1_23 = 8;
signed short int var_1_24 = 32;
signed short int var_1_25 = 32;
signed short int var_1_26 = -256;
void functionized0(float functionized0_localFunctionVar0, float functionized0_localFunctionVar1, float functionized0_localFunctionVar2, float functionized0_localFunctionVar3, float functionized0_localFunctionVar4, unsigned short int functionized0_localFunctionVar5) {
 if (var_1_1 >= functionized0_localFunctionVar2) {
  if (var_1_9) {
   var_1_7 = (var_1_10 + (functionized0_localFunctionVar3 - functionized0_localFunctionVar4));
  } else {
   if (functionized0_localFunctionVar5 >= var_1_2) {
    var_1_7 = functionized0_localFunctionVar1;
   } else {
    var_1_7 = functionized0_localFunctionVar0;
   }
  }
 }
}
void functionized1(unsigned short int functionized1_localFunctionVar0, signed long int functionized1_localFunctionVar1, unsigned short int functionized1_localFunctionVar2, float localFunctionVar3) {
 if ((functionized1_localFunctionVar2 - functionized1_localFunctionVar0) != functionized1_localFunctionVar1) {
  var_1_13 = localFunctionVar3;
 }
}
signed long int functionized2(signed short int functionized2_localFunctionVar0) {
 return (functionized2_localFunctionVar0 - 1);
}
unsigned char functionized3(float functionized3_localFunctionVar0) {
 return (functionized3_localFunctionVar0 >= var_1_12);
}
unsigned char functionized4(unsigned short int functionized4_localFunctionVar0) {
 return (var_1_21 != (((((var_1_14) > (functionized4_localFunctionVar0)) ? (var_1_14) : (functionized4_localFunctionVar0))) - (5 + var_1_23)));
}
void functionized5(float functionized5_localFunctionVar0, signed short int functionized5_localFunctionVar1) {
 if (functionized5_localFunctionVar0 < var_1_12) {
  var_1_24 = (var_1_23 + var_1_25);
 } else {
  var_1_24 = ((((functionized5_localFunctionVar1) > (-2)) ? (functionized5_localFunctionVar1) : (-2)));
 }
}
void functionized6(float functionized6_localFunctionVar0, signed short int functionized6_localFunctionVar1, float functionized6_localFunctionVar2, float functionized6_localFunctionVar3) {
 if (((((functionized6_localFunctionVar3) > (functionized6_localFunctionVar0)) ? (functionized6_localFunctionVar3) : (functionized6_localFunctionVar0))) >= (var_1_10 + (functionized6_localFunctionVar2 / 128.9f))) {
  if (var_1_9) {
   var_1_26 = var_1_25;
  } else {
   var_1_26 = var_1_18;
  }
 } else {
  var_1_26 = functionized6_localFunctionVar1;
 }
}
void initially(void) {
}
void step(void) {
 if (((var_1_2 * 16) / var_1_3) <= var_1_4) {
  var_1_1 = ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)));
 }
 functionized0(var_1_6, var_1_5, var_1_8, var_1_11, var_1_12, var_1_3);
 functionized1(var_1_15, var_1_4, var_1_14, 0.8f);
 if ((var_1_12 - var_1_11) >= (var_1_10 / var_1_17)) {
  var_1_16 = (functionized2(var_1_18) - var_1_19);
 }
 if (functionized3(var_1_17)) {
  if (functionized4(var_1_22)) {
   var_1_20 = ((((var_1_22) < (var_1_3)) ? (var_1_22) : (var_1_3)));
  } else {
   var_1_20 = var_1_21;
  }
 }
 functionized5(var_1_10, var_1_18);
 functionized6(var_1_17, var_1_19, var_1_7, var_1_13);
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65535);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 16382);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 65535);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 32767);
 assume_abort_if_not(var_1_22 <= 65535);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -16383);
 assume_abort_if_not(var_1_25 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_2 * 16) / var_1_3) <= var_1_4) ? (var_1_1 == ((float) ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) : 1) && ((var_1_1 >= var_1_8) ? (var_1_9 ? (var_1_7 == ((float) (var_1_10 + (var_1_11 - var_1_12)))) : ((var_1_3 >= var_1_2) ? (var_1_7 == ((float) var_1_5)) : (var_1_7 == ((float) var_1_6)))) : 1)) && (((var_1_14 - var_1_15) != var_1_4) ? (var_1_13 == ((float) 0.8f)) : 1)) && (((var_1_12 - var_1_11) >= (var_1_10 / var_1_17)) ? (var_1_16 == ((signed short int) ((var_1_18 - 1) - var_1_19))) : 1)) && ((var_1_17 >= var_1_12) ? ((var_1_21 != (((((var_1_14) > (var_1_22)) ? (var_1_14) : (var_1_22))) - (5 + var_1_23))) ? (var_1_20 == ((unsigned long int) ((((var_1_22) < (var_1_3)) ? (var_1_22) : (var_1_3))))) : (var_1_20 == ((unsigned long int) var_1_21))) : 1)) && ((var_1_10 < var_1_12) ? (var_1_24 == ((signed short int) (var_1_23 + var_1_25))) : (var_1_24 == ((signed short int) ((((var_1_18) > (-2)) ? (var_1_18) : (-2))))))) && ((((((var_1_13) > (var_1_17)) ? (var_1_13) : (var_1_17))) >= (var_1_10 + (var_1_7 / 128.9f))) ? (var_1_9 ? (var_1_26 == ((signed short int) var_1_25)) : (var_1_26 == ((signed short int) var_1_18))) : (var_1_26 == ((signed short int) var_1_19)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch185functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(float, unsigned char, unsigned short int);
unsigned char functionized1(unsigned char);
void functionized2(unsigned char, unsigned char);
unsigned char functionized3(float, float);
signed long int functionized4(signed long int, signed long int, unsigned short int);
void functionized5(float, float, signed short int);
void functionized6(float, unsigned char);
unsigned char functionized7(unsigned char, unsigned char);
unsigned char isInitial = 0;
float var_1_1 = 31.25;
unsigned short int var_1_2 = 45232;
unsigned short int var_1_3 = 16;
signed long int var_1_4 = -32;
signed long int var_1_5 = -8;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
float var_1_8 = 256.875;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 10;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 50;
unsigned short int var_1_17 = 4;
signed short int var_1_18 = 128;
float var_1_19 = 64.4;
float var_1_20 = 32.5;
float var_1_21 = 128.3;
float var_1_22 = 24.8;
float var_1_23 = 31.75;
signed short int var_1_24 = -2;
signed short int var_1_25 = 4;
float var_1_26 = 256.8;
float var_1_27 = 999999.6;
float var_1_28 = 3.2;
float var_1_29 = 50.75;
void functionized0(float functionized0_localFunctionVar0, unsigned char functionized0_localFunctionVar1, unsigned short int functionized0_localFunctionVar2) {
 if ((var_1_2 - functionized0_localFunctionVar2) <= ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) {
  if (var_1_6 || functionized0_localFunctionVar1) {
   var_1_1 = functionized0_localFunctionVar0;
  }
 } else {
  var_1_1 = functionized0_localFunctionVar0;
 }
}
unsigned char functionized1(unsigned char functionized1_localFunctionVar0) {
 return ((var_1_8 >= var_1_1) || functionized1_localFunctionVar0);
}
void functionized2(unsigned char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
 if (var_1_8 > var_1_1) {
  if (var_1_10 >= var_1_3) {
   var_1_13 = (! var_1_11);
  }
 } else {
  var_1_13 = (functionized2_localFunctionVar1 || functionized2_localFunctionVar0);
 }
}
unsigned char functionized3(float functionized3_localFunctionVar0, float functionized3_localFunctionVar1) {
 return (functionized3_localFunctionVar0 < functionized3_localFunctionVar1);
}
signed long int functionized4(signed long int functionized4_localFunctionVar0, signed long int functionized4_localFunctionVar1, unsigned short int functionized4_localFunctionVar2) {
 return ((functionized4_localFunctionVar1 * functionized4_localFunctionVar0) + (functionized4_localFunctionVar2 >> 2));
}
void functionized5(float functionized5_localFunctionVar0, float functionized5_localFunctionVar1, signed short int functionized5_localFunctionVar2) {
 if ((((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))) - functionized5_localFunctionVar0) >= (var_1_22 - functionized5_localFunctionVar1)) {
  var_1_18 = ((((var_1_24) < (functionized5_localFunctionVar2)) ? (var_1_24) : (functionized5_localFunctionVar2)));
 }
}
void functionized6(float functionized6_localFunctionVar0, unsigned char functionized6_localFunctionVar1) {
 if (functionized6_localFunctionVar1) {
  var_1_26 = (var_1_27 + functionized6_localFunctionVar0);
 } else {
  var_1_26 = functionized6_localFunctionVar0;
 }
}
unsigned char functionized7(unsigned char functionized7_localFunctionVar0, unsigned char functionized7_localFunctionVar1) {
 return (functionized7_localFunctionVar0 || functionized7_localFunctionVar1);
}
void initially(void) {
}
void step(void) {
 functionized0(var_1_8, var_1_7, var_1_3);
 if ((var_1_3 / var_1_10) <= var_1_4) {
  var_1_9 = (functionized1(var_1_11) && var_1_12);
 }
 functionized2(var_1_15, var_1_14);
 if (functionized3(var_1_8, var_1_1)) {
  if (var_1_10 == (functionized4(var_1_5, var_1_4, var_1_3))) {
   var_1_16 = var_1_3;
  } else {
   var_1_16 = var_1_17;
  }
 } else {
  var_1_16 = var_1_17;
 }
 functionized5(var_1_21, var_1_23, var_1_25);
 functionized6(var_1_28, var_1_11);
 if (var_1_10 >= var_1_3) {
  var_1_29 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
 } else {
  if (functionized7(var_1_13, var_1_14)) {
   var_1_29 = 64.125f;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 32767);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32768);
 assume_abort_if_not(var_1_10 <= 32767);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32767);
 assume_abort_if_not(var_1_24 <= 32766);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32767);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 - var_1_3) <= ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) ? ((var_1_6 || var_1_7) ? (var_1_1 == ((float) var_1_8)) : 1) : (var_1_1 == ((float) var_1_8))) && (((var_1_3 / var_1_10) <= var_1_4) ? (var_1_9 == ((unsigned char) (((var_1_8 >= var_1_1) || var_1_11) && var_1_12))) : 1)) && ((var_1_8 > var_1_1) ? ((var_1_10 >= var_1_3) ? (var_1_13 == ((unsigned char) (! var_1_11))) : 1) : (var_1_13 == ((unsigned char) (var_1_14 || var_1_15))))) && ((var_1_8 < var_1_1) ? ((var_1_10 == ((var_1_4 * var_1_5) + (var_1_3 >> 2))) ? (var_1_16 == ((unsigned short int) var_1_3)) : (var_1_16 == ((unsigned short int) var_1_17))) : (var_1_16 == ((unsigned short int) var_1_17)))) && (((((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))) - var_1_21) >= (var_1_22 - var_1_23)) ? (var_1_18 == ((signed short int) ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) : 1)) && (var_1_11 ? (var_1_26 == ((float) (var_1_27 + var_1_28))) : (var_1_26 == ((float) var_1_28)))) && ((var_1_10 >= var_1_3) ? (var_1_29 == ((float) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) : ((var_1_13 || var_1_14) ? (var_1_29 == ((float) 64.125f)) : 1))
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

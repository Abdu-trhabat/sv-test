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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch93functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char functionized0(signed long int);
float functionized1(float, float);
unsigned char functionized2(float, float);
void functionized3(float);
unsigned char functionized4(unsigned char);
signed long int functionized5(signed long int);
void functionized6(unsigned char, signed short int);
unsigned char isInitial = 0;
float var_1_1 = 0.5;
unsigned short int var_1_2 = 0;
unsigned short int var_1_3 = 64;
signed long int var_1_4 = 2;
float var_1_5 = 0.0;
float var_1_6 = 4.2;
float var_1_7 = 31.25;
float var_1_8 = 1.375;
unsigned short int var_1_9 = 32;
unsigned char var_1_10 = 1;
float var_1_11 = 0.625;
unsigned short int var_1_12 = 1;
float var_1_13 = -0.25;
signed short int var_1_14 = 4;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 8;
signed short int var_1_18 = 5;
signed short int var_1_19 = 128;
signed long int var_1_20 = -50;
signed short int var_1_21 = -16;
signed short int var_1_22 = 16;
signed short int var_1_23 = 32;
signed short int var_1_24 = 2;
signed short int var_1_25 = -4;
unsigned char functionized0(signed long int functionized0_localFunctionVar0) {
 return (functionized0_localFunctionVar0 < var_1_3);
}
float functionized1(float functionized1_localFunctionVar0, float localFunctionVar1) {
 return (((((functionized1_localFunctionVar0) < (var_1_8)) ? (functionized1_localFunctionVar0) : (var_1_8))) + localFunctionVar1);
}
unsigned char functionized2(float functionized2_localFunctionVar0, float functionized2_localFunctionVar1) {
 return (var_1_10 || (functionized2_localFunctionVar1 < (var_1_8 / functionized2_localFunctionVar0)));
}
void functionized3(float functionized3_localFunctionVar0) {
 if (var_1_10) {
  var_1_13 = ((((var_1_7) > (functionized3_localFunctionVar0)) ? (var_1_7) : (functionized3_localFunctionVar0)));
 } else {
  var_1_13 = ((((10.15f) < ((var_1_6 + var_1_8))) ? (10.15f) : ((var_1_6 + var_1_8))));
 }
}
unsigned char functionized4(unsigned char functionized4_localFunctionVar0) {
 return (! (functionized4_localFunctionVar0 || var_1_15));
}
signed long int functionized5(signed long int localFunctionVar0) {
 return (var_1_22 + localFunctionVar0);
}
void functionized6(unsigned char functionized6_localFunctionVar0, signed short int functionized6_localFunctionVar1) {
 if (functionized6_localFunctionVar0) {
  var_1_23 = (var_1_22 + (((((functionized6_localFunctionVar1) < 0 ) ? -(functionized6_localFunctionVar1) : (functionized6_localFunctionVar1))) + var_1_25));
 } else {
  if (var_1_16) {
   var_1_23 = functionized6_localFunctionVar1;
  } else {
   var_1_23 = var_1_17;
  }
 }
}
void initially(void) {
}
void step(void) {
 if ((var_1_2 + var_1_3) < var_1_4) {
  if (var_1_4 <= (var_1_3 - var_1_2)) {
   if (functionized0(var_1_4)) {
    var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
   }
  } else {
   var_1_1 = (functionized1(var_1_6, 3.25f));
  }
 } else {
  var_1_1 = var_1_8;
 }
 if (functionized2(var_1_11, var_1_1)) {
  if (var_1_10 || (var_1_1 != var_1_11)) {
   var_1_9 = 8;
  }
 } else {
  var_1_9 = var_1_12;
 }
 functionized3(var_1_5);
 if (functionized4(var_1_10) || var_1_16) {
  var_1_14 = ((((var_1_17) > ((var_1_18 - var_1_19))) ? (var_1_17) : ((var_1_18 - var_1_19))));
 }
 if (var_1_16) {
  var_1_20 = (var_1_3 - 50);
 }
 if (var_1_15) {
  var_1_21 = (functionized5(25) - var_1_19);
 }
 functionized6(var_1_10, var_1_24);
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 4611686.018427383000e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -32767);
 assume_abort_if_not(var_1_17 <= 32766);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= -1);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -8192);
 assume_abort_if_not(var_1_24 <= 8192);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -8191);
 assume_abort_if_not(var_1_25 <= 8191);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 + var_1_3) < var_1_4) ? ((var_1_4 <= (var_1_3 - var_1_2)) ? ((var_1_4 < var_1_3) ? (var_1_1 == ((float) ((var_1_5 - var_1_6) - var_1_7))) : 1) : (var_1_1 == ((float) (((((var_1_6) < (var_1_8)) ? (var_1_6) : (var_1_8))) + 3.25f)))) : (var_1_1 == ((float) var_1_8))) && ((var_1_10 || (var_1_1 < (var_1_8 / var_1_11))) ? ((var_1_10 || (var_1_1 != var_1_11)) ? (var_1_9 == ((unsigned short int) 8)) : 1) : (var_1_9 == ((unsigned short int) var_1_12)))) && (var_1_10 ? (var_1_13 == ((float) ((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5))))) : (var_1_13 == ((float) ((((10.15f) < ((var_1_6 + var_1_8))) ? (10.15f) : ((var_1_6 + var_1_8)))))))) && (((! (var_1_10 || var_1_15)) || var_1_16) ? (var_1_14 == ((signed short int) ((((var_1_17) > ((var_1_18 - var_1_19))) ? (var_1_17) : ((var_1_18 - var_1_19)))))) : 1)) && (var_1_16 ? (var_1_20 == ((signed long int) (var_1_3 - 50))) : 1)) && (var_1_15 ? (var_1_21 == ((signed short int) ((var_1_22 + 25) - var_1_19))) : 1)) && (var_1_10 ? (var_1_23 == ((signed short int) (var_1_22 + (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + var_1_25)))) : (var_1_16 ? (var_1_23 == ((signed short int) var_1_24)) : (var_1_23 == ((signed short int) var_1_17))))
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

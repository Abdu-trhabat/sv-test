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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch89functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(signed long int, signed long int);
unsigned char functionized1(signed long int, signed long int);
unsigned char functionized2(signed long int);
unsigned char functionized3(unsigned short int);
signed long int functionized4(unsigned short int);
unsigned char functionized5(void);
void functionized6(float, float, float, float, float);
signed long int functionized7(unsigned short int);
signed long int functionized8(void);
void functionized9(signed long int, signed long int, unsigned char, unsigned long int);
unsigned char isInitial = 0;
signed long int var_1_1 = 32;
signed long int var_1_2 = 16;
signed long int var_1_3 = 4;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 4;
signed long int var_1_6 = 256;
signed long int var_1_7 = -1;
unsigned short int var_1_8 = 32;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 5;
unsigned short int var_1_11 = 128;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 1;
float var_1_14 = 1.2;
float var_1_15 = 50.5;
float var_1_16 = 4.2;
float var_1_17 = 9.75;
float var_1_18 = 9.89;
float var_1_19 = 4.5;
float var_1_20 = 31.2;
float var_1_21 = 0.8;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned long int var_1_25 = 8;
unsigned short int var_1_26 = 32;
void functionized0(signed long int functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1) {
 if (var_1_2 != functionized0_localFunctionVar1) {
  if (var_1_4) {
   var_1_1 = ((((((((-5) > (var_1_5)) ? (-5) : (var_1_5)))) < (((((functionized0_localFunctionVar0) < (var_1_7)) ? (functionized0_localFunctionVar0) : (var_1_7))))) ? (((((-5) > (var_1_5)) ? (-5) : (var_1_5)))) : (((((functionized0_localFunctionVar0) < (var_1_7)) ? (functionized0_localFunctionVar0) : (var_1_7))))));
  }
 }
}
unsigned char functionized1(signed long int functionized1_localFunctionVar0, signed long int functionized1_localFunctionVar1) {
 return (functionized1_localFunctionVar0 >= (functionized1_localFunctionVar1 / var_1_9));
}
unsigned char functionized2(signed long int functionized2_localFunctionVar0) {
 return (functionized2_localFunctionVar0 < (var_1_2 * 256));
}
unsigned char functionized3(unsigned short int functionized3_localFunctionVar0) {
 return (functionized3_localFunctionVar0 < var_1_1);
}
signed long int functionized4(unsigned short int functionized4_localFunctionVar0) {
 return (5 - functionized4_localFunctionVar0);
}
unsigned char functionized5(void) {
 return (var_1_3 == var_1_6);
}
void functionized6(float functionized6_localFunctionVar0, float functionized6_localFunctionVar1, float functionized6_localFunctionVar2, float functionized6_localFunctionVar3, float localFunctionVar4) {
 if ((((((functionized6_localFunctionVar3) < (localFunctionVar4)) ? (functionized6_localFunctionVar3) : (localFunctionVar4))) / ((((functionized6_localFunctionVar0) < 0 ) ? -(functionized6_localFunctionVar0) : (functionized6_localFunctionVar0)))) != var_1_17) {
  var_1_14 = ((((((((functionized6_localFunctionVar2) > (functionized6_localFunctionVar1)) ? (functionized6_localFunctionVar2) : (functionized6_localFunctionVar1)))) < (var_1_20)) ? (((((functionized6_localFunctionVar2) > (functionized6_localFunctionVar1)) ? (functionized6_localFunctionVar2) : (functionized6_localFunctionVar1)))) : (var_1_20)));
 } else {
  var_1_14 = var_1_21;
 }
}
signed long int functionized7(unsigned short int functionized7_localFunctionVar0) {
 return (var_1_8 + functionized7_localFunctionVar0);
}
signed long int functionized8(void) {
 return ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)));
}
void functionized9(signed long int functionized9_localFunctionVar0, signed long int functionized9_localFunctionVar1, unsigned char functionized9_localFunctionVar2, unsigned long int functionized9_localFunctionVar3) {
 if (functionized9_localFunctionVar1 < ((functionized9_localFunctionVar2 ^ functionized9_localFunctionVar3) | functionized9_localFunctionVar0)) {
  if (var_1_23) {
   var_1_26 = var_1_10;
  }
 }
}
void initially(void) {
}
void step(void) {
 functionized0(var_1_6, var_1_3);
 if (functionized1(var_1_6, var_1_5)) {
  if (functionized2(var_1_3)) {
   var_1_8 = ((((var_1_10) < (((((128) < (var_1_11)) ? (128) : (var_1_11))))) ? (var_1_10) : (((((128) < (var_1_11)) ? (128) : (var_1_11))))));
  } else {
   var_1_8 = var_1_11;
  }
 } else {
  var_1_8 = var_1_10;
 }
 if (functionized3(var_1_10)) {
  if (var_1_3 <= functionized4(var_1_8)) {
   var_1_12 = var_1_13;
  } else {
   if (functionized5()) {
    var_1_12 = var_1_13;
   } else {
    var_1_12 = 4;
   }
  }
 }
 functionized6(var_1_16, var_1_19, var_1_18, var_1_15, 1.75f);
 var_1_22 = (var_1_23 && var_1_24);
 if (var_1_24) {
  var_1_25 = (2957161658u - functionized7(var_1_10));
 } else {
  var_1_25 = functionized8();
 }
 functionized9(var_1_7, var_1_1, var_1_12, var_1_25);
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483647);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483647);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483647);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(var_1_16 != 0.0F);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2 != var_1_3) ? (var_1_4 ? (var_1_1 == ((signed long int) ((((((((-5) > (var_1_5)) ? (-5) : (var_1_5)))) < (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) ? (((((-5) > (var_1_5)) ? (-5) : (var_1_5)))) : (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))))))) : 1) : 1) && ((var_1_6 >= (var_1_5 / var_1_9)) ? ((var_1_3 < (var_1_2 * 256)) ? (var_1_8 == ((unsigned short int) ((((var_1_10) < (((((128) < (var_1_11)) ? (128) : (var_1_11))))) ? (var_1_10) : (((((128) < (var_1_11)) ? (128) : (var_1_11)))))))) : (var_1_8 == ((unsigned short int) var_1_11))) : (var_1_8 == ((unsigned short int) var_1_10)))) && ((var_1_10 < var_1_1) ? ((var_1_3 <= (5 - var_1_8)) ? (var_1_12 == ((unsigned char) var_1_13)) : ((var_1_3 == var_1_6) ? (var_1_12 == ((unsigned char) var_1_13)) : (var_1_12 == ((unsigned char) 4)))) : 1)) && (((((((var_1_15) < (1.75f)) ? (var_1_15) : (1.75f))) / ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) != var_1_17) ? (var_1_14 == ((float) ((((((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19)))) < (var_1_20)) ? (((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19)))) : (var_1_20))))) : (var_1_14 == ((float) var_1_21)))) && (var_1_22 == ((unsigned char) (var_1_23 && var_1_24)))) && (var_1_24 ? (var_1_25 == ((unsigned long int) (2957161658u - (var_1_8 + var_1_10)))) : (var_1_25 == ((unsigned long int) ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))))) && ((var_1_1 < ((var_1_12 ^ var_1_25) | var_1_7)) ? (var_1_23 ? (var_1_26 == ((unsigned short int) var_1_10)) : 1) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(signed long int, signed long int, unsigned char, signed long int);
void functionized1(unsigned char);
float functionized2(float);
float functionized3(float);
float functionized4(float, float);
void functionized5(unsigned char, signed long int, unsigned char, unsigned char, signed long int, signed long int);
void functionized6(unsigned char, unsigned char, signed long int, signed long int);
signed long int functionized7(unsigned char);
unsigned char isInitial = 0;
signed long int var_1_1 = -25;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 1230640054;
signed long int var_1_4 = 32;
signed long int var_1_5 = 128;
signed long int var_1_6 = 1508873667;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
float var_1_13 = 10000.2;
float var_1_14 = 0.8;
float var_1_15 = 32.75;
float var_1_16 = 10000000000000.375;
float var_1_17 = 16.4;
float var_1_18 = 8.5;
float var_1_19 = 64.75;
unsigned char var_1_20 = 16;
signed char var_1_22 = 0;
unsigned char var_1_23 = 16;
void functionized0(signed long int functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1, unsigned char functionized0_localFunctionVar2, signed long int functionized0_localFunctionVar3) {
 if (functionized0_localFunctionVar2) {
  var_1_1 = ((var_1_3 - functionized0_localFunctionVar3) - functionized0_localFunctionVar1);
 } else {
  var_1_1 = (((((var_1_3) > ((functionized0_localFunctionVar0 - functionized0_localFunctionVar3))) ? (var_1_3) : ((functionized0_localFunctionVar0 - functionized0_localFunctionVar3)))) - functionized0_localFunctionVar1);
 }
}
void functionized1(unsigned char functionized1_localFunctionVar0) {
 var_1_7 = ((var_1_8 - var_1_9) - (100 - (functionized1_localFunctionVar0 + var_1_11)));
}
float functionized2(float functionized2_localFunctionVar0) {
 return ((((var_1_13) > (functionized2_localFunctionVar0)) ? (var_1_13) : (functionized2_localFunctionVar0)));
}
float functionized3(float functionized3_localFunctionVar0) {
 return (functionized3_localFunctionVar0 / 4.9f);
}
float functionized4(float functionized4_localFunctionVar0, float functionized4_localFunctionVar1) {
 return (functionized4_localFunctionVar0 + ((((functionized4_localFunctionVar1) < 0 ) ? -(functionized4_localFunctionVar1) : (functionized4_localFunctionVar1))));
}
void functionized5(unsigned char functionized5_localFunctionVar0, signed long int functionized5_localFunctionVar1, unsigned char functionized5_localFunctionVar2, unsigned char functionized5_localFunctionVar3, signed long int functionized5_localFunctionVar4, signed long int functionized5_localFunctionVar5) {
 if ((functionized5_localFunctionVar3 % (var_1_8 - functionized5_localFunctionVar0)) > ((((functionized5_localFunctionVar1) < 0 ) ? -(functionized5_localFunctionVar1) : (functionized5_localFunctionVar1)))) {
  if ((functionized5_localFunctionVar5 ^ functionized5_localFunctionVar1) <= (functionized5_localFunctionVar4 ^ functionized5_localFunctionVar2)) {
   var_1_19 = var_1_17;
  }
 }
}
void functionized6(unsigned char functionized6_localFunctionVar0, unsigned char functionized6_localFunctionVar1, signed long int functionized6_localFunctionVar2, signed long int localFunctionVar3) {
 if ((var_1_11 % functionized6_localFunctionVar0) < functionized6_localFunctionVar2) {
  var_1_22 = ((((localFunctionVar3) > (functionized6_localFunctionVar1)) ? (localFunctionVar3) : (functionized6_localFunctionVar1)));
 }
}
signed long int functionized7(unsigned char functionized7_localFunctionVar0) {
 return (var_1_8 - functionized7_localFunctionVar0);
}
void initially(void) {
}
void step(void) {
 functionized0(var_1_6, var_1_5, var_1_2, var_1_4);
 functionized1(var_1_10);
 if (functionized2(var_1_14) <= (- functionized3(var_1_15))) {
  var_1_12 = 31.5f;
 }
 var_1_16 = (functionized4(var_1_17, var_1_18));
 functionized5(var_1_20, var_1_5, var_1_10, var_1_9, var_1_4, var_1_3);
 functionized6(var_1_20, var_1_10, var_1_1, 10);
 if ((3886175339u - var_1_9) <= (var_1_20 / var_1_3)) {
  if (var_1_10 > var_1_7) {
   var_1_23 = ((((var_1_20) < (functionized7(var_1_9))) ? (var_1_20) : (functionized7(var_1_9))));
  } else {
   var_1_23 = (((((var_1_20) > (64)) ? (var_1_20) : (64))) + var_1_11);
  }
 } else {
  var_1_23 = var_1_20;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 1073741822);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 1073741822);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 190);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 31);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 126);
 assume_abort_if_not(var_1_20 != 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 ? (var_1_1 == ((signed long int) ((var_1_3 - var_1_4) - var_1_5))) : (var_1_1 == ((signed long int) (((((var_1_3) > ((var_1_6 - var_1_4))) ? (var_1_3) : ((var_1_6 - var_1_4)))) - var_1_5)))) && (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)))))) && ((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) <= (- (var_1_15 / 4.9f))) ? (var_1_12 == ((float) 31.5f)) : 1)) && (var_1_16 == ((float) (var_1_17 + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))) && (((var_1_9 % (var_1_8 - var_1_20)) > ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) ? (((var_1_3 ^ var_1_5) <= (var_1_4 ^ var_1_10)) ? (var_1_19 == ((float) var_1_17)) : 1) : 1)) && (((var_1_11 % var_1_20) < var_1_1) ? (var_1_22 == ((signed char) ((((10) > (var_1_10)) ? (10) : (var_1_10))))) : 1)) && (((3886175339u - var_1_9) <= (var_1_20 / var_1_3)) ? ((var_1_10 > var_1_7) ? (var_1_23 == ((unsigned char) ((((var_1_20) < ((var_1_8 - var_1_9))) ? (var_1_20) : ((var_1_8 - var_1_9)))))) : (var_1_23 == ((unsigned char) (((((var_1_20) > (64)) ? (var_1_20) : (64))) + var_1_11)))) : (var_1_23 == ((unsigned char) var_1_20)))
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

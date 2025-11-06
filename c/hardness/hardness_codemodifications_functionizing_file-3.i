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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char functionized0(void);
void functionized1(signed char, unsigned char, signed long int);
void functionized2(float, unsigned char);
unsigned char functionized3(void);
signed long int functionized4(unsigned char);
signed long int functionized5(unsigned char);
void functionized6(unsigned char, unsigned char, float, float);
unsigned char isInitial = 0;
signed char var_1_1 = -64;
float var_1_2 = 128.2;
unsigned char var_1_3 = 1;
float var_1_4 = 32.32;
signed char var_1_5 = -32;
unsigned long int var_1_6 = 10;
unsigned long int var_1_7 = 8;
unsigned short int var_1_8 = 8;
unsigned char var_1_9 = 0;
float var_1_10 = 100.4;
unsigned short int var_1_11 = 100;
unsigned short int var_1_12 = 0;
unsigned long int var_1_13 = 64;
signed short int var_1_14 = 10;
unsigned char var_1_15 = 128;
signed long int var_1_16 = -10;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 64;
unsigned char var_1_20 = 10;
float var_1_21 = 49.75;
double var_1_22 = 64.75;
double var_1_23 = 10.5;
signed char var_1_24 = 2;
signed long int var_1_25 = 64;
unsigned char functionized0(void) {
 return (! var_1_3);
}
void functionized1(signed char functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1, signed long int localFunctionVar2) {
 if (functionized1_localFunctionVar1) {
  var_1_1 = functionized1_localFunctionVar0;
 } else {
  var_1_1 = localFunctionVar2;
 }
}
void functionized2(float functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
 if (functionized2_localFunctionVar1 || ((var_1_2 + functionized2_localFunctionVar0) > var_1_10)) {
  var_1_8 = (var_1_11 + var_1_12);
 } else {
  var_1_8 = var_1_12;
 }
}
unsigned char functionized3(void) {
 return (var_1_12 > var_1_8);
}
signed long int functionized4(unsigned char functionized4_localFunctionVar0) {
 return ((((var_1_17) < (functionized4_localFunctionVar0)) ? (var_1_17) : (functionized4_localFunctionVar0)));
}
signed long int functionized5(unsigned char functionized5_localFunctionVar0) {
 return (functionized5_localFunctionVar0 - var_1_20);
}
void functionized6(unsigned char functionized6_localFunctionVar0, unsigned char functionized6_localFunctionVar1, float functionized6_localFunctionVar2, float functionized6_localFunctionVar3) {
 if (((((var_1_10) < ((var_1_2 / functionized6_localFunctionVar2))) ? (var_1_10) : ((var_1_2 / functionized6_localFunctionVar2)))) > functionized6_localFunctionVar3) {
  var_1_15 = ((((((((5) < (((((functionized6_localFunctionVar1) < 0 ) ? -(functionized6_localFunctionVar1) : (functionized6_localFunctionVar1))))) ? (5) : (((((functionized6_localFunctionVar1) < 0 ) ? -(functionized6_localFunctionVar1) : (functionized6_localFunctionVar1))))))) < (((((functionized6_localFunctionVar0) > (var_1_17)) ? (functionized6_localFunctionVar0) : (var_1_17))))) ? (((((5) < (((((functionized6_localFunctionVar1) < 0 ) ? -(functionized6_localFunctionVar1) : (functionized6_localFunctionVar1))))) ? (5) : (((((functionized6_localFunctionVar1) < 0 ) ? -(functionized6_localFunctionVar1) : (functionized6_localFunctionVar1))))))) : (((((functionized6_localFunctionVar0) > (var_1_17)) ? (functionized6_localFunctionVar0) : (var_1_17))))));
 } else {
  var_1_15 = var_1_18;
 }
}
void initially(void) {
}
void step(void) {
 if (99999.8f < var_1_2) {
  if (functionized0()) {
   if (var_1_2 >= (var_1_4 / 2.5f)) {
    functionized1(var_1_5, var_1_3, -2);
   }
  }
 }
 if ((- ((((2.45f) < 0 ) ? -(2.45f) : (2.45f)))) < var_1_2) {
  var_1_6 = var_1_7;
 }
 functionized2(var_1_4, var_1_3);
 if (functionized3()) {
  if (15.8f != var_1_10) {
   var_1_13 = var_1_8;
  }
 }
 if (! var_1_9) {
  var_1_14 = var_1_1;
 }
 if (((((var_1_16) > (var_1_6)) ? (var_1_16) : (var_1_6))) > var_1_13) {
  var_1_15 = (functionized4(var_1_18) - functionized5(var_1_19));
 } else {
  functionized6(var_1_20, var_1_19, var_1_21, var_1_4);
 }
 var_1_22 = var_1_23;
 var_1_24 = var_1_20;
 var_1_25 = 10;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 127);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 63);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((99999.8f < var_1_2) ? ((! var_1_3) ? ((var_1_2 >= (var_1_4 / 2.5f)) ? (var_1_3 ? (var_1_1 == ((signed char) var_1_5)) : (var_1_1 == ((signed char) -2))) : 1) : 1) : 1) && (((- ((((2.45f) < 0 ) ? -(2.45f) : (2.45f)))) < var_1_2) ? (var_1_6 == ((unsigned long int) var_1_7)) : 1)) && ((var_1_3 || ((var_1_2 + var_1_4) > var_1_10)) ? (var_1_8 == ((unsigned short int) (var_1_11 + var_1_12))) : (var_1_8 == ((unsigned short int) var_1_12)))) && ((var_1_12 > var_1_8) ? ((15.8f != var_1_10) ? (var_1_13 == ((unsigned long int) var_1_8)) : 1) : 1)) && ((! var_1_9) ? (var_1_14 == ((signed short int) var_1_1)) : 1)) && ((((((var_1_16) > (var_1_6)) ? (var_1_16) : (var_1_6))) > var_1_13) ? (var_1_15 == ((unsigned char) (((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - (var_1_19 - var_1_20)))) : ((((((var_1_10) < ((var_1_2 / var_1_21))) ? (var_1_10) : ((var_1_2 / var_1_21)))) > var_1_4) ? (var_1_15 == ((unsigned char) ((((((((5) < (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (5) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))))) < (((((var_1_20) > (var_1_17)) ? (var_1_20) : (var_1_17))))) ? (((((5) < (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (5) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))))) : (((((var_1_20) > (var_1_17)) ? (var_1_20) : (var_1_17)))))))) : (var_1_15 == ((unsigned char) var_1_18))))) && (var_1_22 == ((double) var_1_23))) && (var_1_24 == ((signed char) var_1_20))) && (var_1_25 == ((signed long int) 10))
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

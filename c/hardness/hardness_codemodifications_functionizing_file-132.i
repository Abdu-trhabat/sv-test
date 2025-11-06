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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
signed long int functionized0(unsigned char);
void functionized1(unsigned char);
unsigned char functionized2(void);
void functionized3(float, unsigned char, float);
unsigned char isInitial = 0;
signed long int var_1_1 = 8;
unsigned char var_1_2 = 2;
unsigned char var_1_3 = 0;
signed long int var_1_4 = 128;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 5;
unsigned char var_1_7 = 100;
unsigned char var_1_8 = 2;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 4;
unsigned char var_1_13 = 32;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 0;
signed char var_1_16 = 25;
unsigned char var_1_17 = 2;
signed char var_1_18 = 8;
signed char var_1_19 = -8;
float var_1_20 = 0.75;
float var_1_21 = 2.25;
signed long int functionized0(unsigned char functionized0_localFunctionVar0) {
 return (functionized0_localFunctionVar0 - var_1_12);
}
void functionized1(unsigned char functionized1_localFunctionVar0) {
 if (((((functionized1_localFunctionVar0) < (var_1_7)) ? (functionized1_localFunctionVar0) : (var_1_7))) > var_1_11) {
  var_1_16 = var_1_19;
 }
}
unsigned char functionized2(void) {
 return (5 <= var_1_15);
}
void functionized3(float functionized3_localFunctionVar0, unsigned char functionized3_localFunctionVar1, float localFunctionVar2) {
 if (functionized3_localFunctionVar1) {
  var_1_20 = ((((functionized3_localFunctionVar0) > (localFunctionVar2)) ? (functionized3_localFunctionVar0) : (localFunctionVar2)));
 } else {
  var_1_20 = ((((functionized3_localFunctionVar0) < 0 ) ? -(functionized3_localFunctionVar0) : (functionized3_localFunctionVar0)));
 }
}
void initially(void) {
}
void step(void) {
 if ((var_1_2 + var_1_3) > (var_1_4 + ((((256) < 0 ) ? -(256) : (256))))) {
  var_1_1 = -1;
 }
 if (var_1_3 <= ((var_1_2 * var_1_4) * ((((var_1_1) < (var_1_6)) ? (var_1_1) : (var_1_6))))) {
  var_1_5 = (var_1_7 + var_1_8);
 } else {
  var_1_5 = var_1_7;
 }
 var_1_9 = (! 0);
 if (var_1_9) {
  if (var_1_7 != (- (var_1_4 ^ var_1_3))) {
   var_1_10 = functionized0(var_1_11);
  }
 }
 if (var_1_9 || var_1_14) {
  if ((var_1_3 * var_1_12) >= var_1_2) {
   if (var_1_4 >= var_1_15) {
    var_1_13 = 32;
   } else {
    var_1_13 = var_1_7;
   }
  } else {
   var_1_13 = 64;
  }
 }
 if (var_1_5 != var_1_17) {
  if (var_1_13 <= var_1_10) {
   var_1_16 = (var_1_18 + var_1_19);
  }
 } else {
  functionized1(var_1_13);
 }
 if (functionized2()) {
  functionized3(var_1_21, var_1_9, 10.8f);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 255);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 127);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483648);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 255);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 + var_1_3) > (var_1_4 + ((((256) < 0 ) ? -(256) : (256))))) ? (var_1_1 == ((signed long int) -1)) : 1) && ((var_1_3 <= ((var_1_2 * var_1_4) * ((((var_1_1) < (var_1_6)) ? (var_1_1) : (var_1_6))))) ? (var_1_5 == ((unsigned char) (var_1_7 + var_1_8))) : (var_1_5 == ((unsigned char) var_1_7)))) && (var_1_9 == ((unsigned char) (! 0)))) && (var_1_9 ? ((var_1_7 != (- (var_1_4 ^ var_1_3))) ? (var_1_10 == ((unsigned char) (var_1_11 - var_1_12))) : 1) : 1)) && ((var_1_9 || var_1_14) ? (((var_1_3 * var_1_12) >= var_1_2) ? ((var_1_4 >= var_1_15) ? (var_1_13 == ((unsigned char) 32)) : (var_1_13 == ((unsigned char) var_1_7))) : (var_1_13 == ((unsigned char) 64))) : 1)) && ((var_1_5 != var_1_17) ? ((var_1_13 <= var_1_10) ? (var_1_16 == ((signed char) (var_1_18 + var_1_19))) : 1) : ((((((var_1_13) < (var_1_7)) ? (var_1_13) : (var_1_7))) > var_1_11) ? (var_1_16 == ((signed char) var_1_19)) : 1))) && ((5 <= var_1_15) ? (var_1_9 ? (var_1_20 == ((float) ((((var_1_21) > (10.8f)) ? (var_1_21) : (10.8f))))) : (var_1_20 == ((float) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))) : 1)
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

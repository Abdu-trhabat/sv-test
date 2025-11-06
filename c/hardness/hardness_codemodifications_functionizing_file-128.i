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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch128functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned long int functionized0(void);
void functionized1(double, unsigned char, double);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 32;
unsigned char var_1_2 = 0;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 16;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 256;
signed long int var_1_7 = -128;
signed long int var_1_8 = 25;
signed long int var_1_9 = 4;
double var_1_10 = 4.25;
unsigned char var_1_11 = 0;
double var_1_12 = 256.5;
double var_1_13 = 10.5;
double var_1_14 = 8.2;
double var_1_15 = 1000000000000.4;
double var_1_16 = 15.75;
double var_1_17 = 128.6;
double var_1_18 = 25.4;
signed char var_1_19 = -32;
signed char var_1_20 = 32;
unsigned long int var_1_21 = 5;
unsigned long int var_1_22 = 3753087255;
unsigned long int var_1_23 = 16;
signed short int var_1_24 = -32;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 4;
unsigned long int functionized0(void) {
 return (~ var_1_3);
}
void functionized1(double functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1, double functionized1_localFunctionVar2) {
 if (functionized1_localFunctionVar1) {
  var_1_10 = ((((var_1_12) < (((((((((functionized1_localFunctionVar2) < (var_1_14)) ? (functionized1_localFunctionVar2) : (var_1_14)))) < (var_1_15)) ? (((((functionized1_localFunctionVar2) < (var_1_14)) ? (functionized1_localFunctionVar2) : (var_1_14)))) : (var_1_15))))) ? (var_1_12) : (((((((((functionized1_localFunctionVar2) < (var_1_14)) ? (functionized1_localFunctionVar2) : (var_1_14)))) < (var_1_15)) ? (((((functionized1_localFunctionVar2) < (var_1_14)) ? (functionized1_localFunctionVar2) : (var_1_14)))) : (var_1_15))))));
 } else {
  var_1_10 = (var_1_16 - ((((functionized1_localFunctionVar0) > (var_1_18)) ? (functionized1_localFunctionVar0) : (var_1_18))));
 }
}
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if ((functionized0() >= var_1_4) && var_1_5) {
   if (var_1_5) {
    var_1_1 = var_1_6;
   } else {
    var_1_1 = 1u;
   }
  } else {
   var_1_1 = var_1_6;
  }
 } else {
  var_1_1 = var_1_6;
 }
 if ((! 0) || var_1_2) {
  if (var_1_2) {
   if (var_1_3 > var_1_4) {
    var_1_7 = var_1_8;
   } else {
    var_1_7 = var_1_9;
   }
  } else {
   var_1_7 = var_1_9;
  }
 }
 if (var_1_5 || (var_1_2 || var_1_11)) {
  functionized1(var_1_17, var_1_11, var_1_13);
 } else {
  if (var_1_1 != var_1_6) {
   var_1_10 = ((((15.5) < 0 ) ? -(15.5) : (15.5)));
  } else {
   var_1_10 = var_1_15;
  }
 }
 if ((var_1_8 + 200) > var_1_7) {
  var_1_19 = var_1_20;
 }
 if (var_1_13 == 0.8) {
  var_1_21 = (var_1_22 - (1281391062u - var_1_23));
 }
 if ((var_1_26 - (var_1_27 + var_1_28)) == (var_1_23 << var_1_21)) {
  if (var_1_11) {
   var_1_24 = var_1_20;
  } else {
   var_1_24 = var_1_27;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483647);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483647);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -127);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1073741823);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 127);
 assume_abort_if_not(var_1_26 <= 255);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 64);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 ? ((((~ var_1_3) >= var_1_4) && var_1_5) ? (var_1_5 ? (var_1_1 == ((unsigned long int) var_1_6)) : (var_1_1 == ((unsigned long int) 1u))) : (var_1_1 == ((unsigned long int) var_1_6))) : (var_1_1 == ((unsigned long int) var_1_6))) && (((! 0) || var_1_2) ? (var_1_2 ? ((var_1_3 > var_1_4) ? (var_1_7 == ((signed long int) var_1_8)) : (var_1_7 == ((signed long int) var_1_9))) : (var_1_7 == ((signed long int) var_1_9))) : 1)) && ((var_1_5 || (var_1_2 || var_1_11)) ? (var_1_11 ? (var_1_10 == ((double) ((((var_1_12) < (((((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) < (var_1_15)) ? (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) : (var_1_15))))) ? (var_1_12) : (((((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) < (var_1_15)) ? (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) : (var_1_15)))))))) : (var_1_10 == ((double) (var_1_16 - ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))))))) : ((var_1_1 != var_1_6) ? (var_1_10 == ((double) ((((15.5) < 0 ) ? -(15.5) : (15.5))))) : (var_1_10 == ((double) var_1_15))))) && (((var_1_8 + 200) > var_1_7) ? (var_1_19 == ((signed char) var_1_20)) : 1)) && ((var_1_13 == 0.8) ? (var_1_21 == ((unsigned long int) (var_1_22 - (1281391062u - var_1_23)))) : 1)) && (((var_1_26 - (var_1_27 + var_1_28)) == (var_1_23 << var_1_21)) ? (var_1_11 ? (var_1_24 == ((signed short int) var_1_20)) : (var_1_24 == ((signed short int) var_1_27))) : 1)
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

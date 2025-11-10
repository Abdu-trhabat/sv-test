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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch119normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 1.875;
double var_1_2 = 0.75;
double var_1_3 = 255.75;
float var_1_4 = 9999999999999.25;
unsigned char var_1_5 = 1;
float var_1_6 = 0.0;
float var_1_7 = 15.9;
signed short int var_1_8 = -256;
float var_1_9 = 127.25;
unsigned long int var_1_10 = 8;
unsigned long int var_1_11 = 1;
unsigned long int var_1_12 = 0;
signed short int var_1_13 = -16;
signed short int var_1_14 = -64;
signed short int var_1_15 = 16;
signed short int var_1_16 = 32;
unsigned short int var_1_17 = 1;
unsigned short int var_1_18 = 4;
unsigned short int var_1_19 = 33881;
double var_1_20 = 0.19999999999999996;
unsigned char var_1_21 = 0;
double var_1_22 = 63.75;
signed long int var_1_23 = 1;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 - var_1_3);
 if (var_1_5) {
  var_1_4 = (var_1_3 - (var_1_6 - var_1_7));
 }
 unsigned long int stepLocal_0 = var_1_12;
 if (var_1_1 <= (var_1_6 / var_1_9)) {
  if ((var_1_10 / var_1_11) == stepLocal_0) {
   var_1_8 = var_1_13;
  }
 } else {
  var_1_8 = var_1_13;
 }
 var_1_14 = ((((((10 + var_1_15) - var_1_16)) < (var_1_13)) ? (((10 + var_1_15) - var_1_16)) : (var_1_13)));
 if (var_1_5) {
  var_1_17 = (((((var_1_16) < (var_1_15)) ? (var_1_16) : (var_1_15))) + var_1_18);
 } else {
  var_1_17 = (var_1_19 - var_1_18);
 }
 unsigned long int stepLocal_1 = var_1_11;
 if (stepLocal_1 < var_1_10) {
  var_1_20 = var_1_2;
 } else {
  if (! (var_1_5 || var_1_21)) {
   var_1_20 = (((((var_1_7 + var_1_22)) > (((((99.9) < (var_1_3)) ? (99.9) : (var_1_3))))) ? ((var_1_7 + var_1_22)) : (((((99.9) < (var_1_3)) ? (99.9) : (var_1_3))))));
  }
 }
 if (! (var_1_16 < var_1_8)) {
  if (var_1_11 <= var_1_16) {
   var_1_23 = (var_1_15 + var_1_8);
  } else {
   var_1_23 = (-1 - var_1_18);
  }
 } else {
  if (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) > var_1_3) {
   var_1_23 = (((((var_1_16 - 10)) > (var_1_8)) ? ((var_1_16 - 10)) : (var_1_8)));
  } else {
   var_1_23 = var_1_13;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 4611686.018427383000e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 4294967295);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967295);
 assume_abort_if_not(var_1_11 != 0);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 4294967295);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_1 == ((double) (var_1_2 - var_1_3))) && (var_1_5 ? (var_1_4 == ((float) (var_1_3 - (var_1_6 - var_1_7)))) : 1)) && ((var_1_1 <= (var_1_6 / var_1_9)) ? (((var_1_10 / var_1_11) == var_1_12) ? (var_1_8 == ((signed short int) var_1_13)) : 1) : (var_1_8 == ((signed short int) var_1_13)))) && (var_1_14 == ((signed short int) ((((((10 + var_1_15) - var_1_16)) < (var_1_13)) ? (((10 + var_1_15) - var_1_16)) : (var_1_13)))))) && (var_1_5 ? (var_1_17 == ((unsigned short int) (((((var_1_16) < (var_1_15)) ? (var_1_16) : (var_1_15))) + var_1_18))) : (var_1_17 == ((unsigned short int) (var_1_19 - var_1_18))))) && ((var_1_11 < var_1_10) ? (var_1_20 == ((double) var_1_2)) : ((! (var_1_5 || var_1_21)) ? (var_1_20 == ((double) (((((var_1_7 + var_1_22)) > (((((99.9) < (var_1_3)) ? (99.9) : (var_1_3))))) ? ((var_1_7 + var_1_22)) : (((((99.9) < (var_1_3)) ? (99.9) : (var_1_3)))))))) : 1))) && ((! (var_1_16 < var_1_8)) ? ((var_1_11 <= var_1_16) ? (var_1_23 == ((signed long int) (var_1_15 + var_1_8))) : (var_1_23 == ((signed long int) (-1 - var_1_18)))) : ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) > var_1_3) ? (var_1_23 == ((signed long int) (((((var_1_16 - 10)) > (var_1_8)) ? ((var_1_16 - 10)) : (var_1_8))))) : (var_1_23 == ((signed long int) var_1_13))))
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

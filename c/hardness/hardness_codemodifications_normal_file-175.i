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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 256;
unsigned short int var_1_2 = 64859;
unsigned short int var_1_3 = 10;
unsigned short int var_1_4 = 50;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
float var_1_9 = 8.8;
float var_1_10 = 9999.5;
float var_1_11 = 200.65;
float var_1_12 = 8.75;
unsigned char var_1_13 = 1;
float var_1_15 = 256.9;
unsigned char var_1_16 = 16;
float var_1_17 = 64.375;
float var_1_18 = 16.6;
float var_1_19 = 2.75;
float var_1_20 = -0.7;
float var_1_21 = 255.8;
signed short int var_1_22 = 0;
unsigned char var_1_23 = 5;
signed short int var_1_24 = -128;
signed short int var_1_25 = 10000;
signed short int var_1_26 = 25;
signed short int var_1_27 = 1;
signed long int var_1_28 = -500;
void initially(void) {
}
void step(void) {
 if (((var_1_2 - var_1_3) - var_1_4) > 2) {
  if (var_1_2 < var_1_3) {
   var_1_1 = (32 + var_1_3);
  }
 }
 var_1_5 = (! (var_1_6 && var_1_7));
 if ((var_1_9 * (var_1_10 + var_1_11)) > var_1_12) {
  var_1_8 = var_1_7;
 }
 var_1_13 = (((var_1_2 * var_1_4) > var_1_1) && (! var_1_6));
 if ((var_1_2 & var_1_3) > var_1_4) {
  if (var_1_16 > var_1_3) {
   var_1_15 = (var_1_17 - (var_1_18 + var_1_19));
  }
 } else {
  var_1_15 = (var_1_19 + var_1_18);
 }
 var_1_20 = (var_1_18 + (((((var_1_19 - 5.9f)) > (var_1_21)) ? ((var_1_19 - 5.9f)) : (var_1_21))));
 if (((var_1_3 >> var_1_23) + var_1_16) < ((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2)))) {
  var_1_22 = (((((var_1_23) < ((var_1_16 + var_1_24))) ? (var_1_23) : ((var_1_16 + var_1_24)))) + ((var_1_25 - var_1_26) - var_1_27));
 } else {
  if (var_1_1 <= var_1_26) {
   var_1_22 = 128;
  }
 }
 var_1_28 = var_1_2;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 49151);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 16384);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 255);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 15);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -8191);
 assume_abort_if_not(var_1_24 <= 8191);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 8191);
 assume_abort_if_not(var_1_25 <= 16383);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 8191);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((var_1_2 - var_1_3) - var_1_4) > 2) ? ((var_1_2 < var_1_3) ? (var_1_1 == ((unsigned short int) (32 + var_1_3))) : 1) : 1) && (var_1_5 == ((unsigned char) (! (var_1_6 && var_1_7))))) && (((var_1_9 * (var_1_10 + var_1_11)) > var_1_12) ? (var_1_8 == ((unsigned char) var_1_7)) : 1)) && (var_1_13 == ((unsigned char) (((var_1_2 * var_1_4) > var_1_1) && (! var_1_6))))) && (((var_1_2 & var_1_3) > var_1_4) ? ((var_1_16 > var_1_3) ? (var_1_15 == ((float) (var_1_17 - (var_1_18 + var_1_19)))) : 1) : (var_1_15 == ((float) (var_1_19 + var_1_18))))) && (var_1_20 == ((float) (var_1_18 + (((((var_1_19 - 5.9f)) > (var_1_21)) ? ((var_1_19 - 5.9f)) : (var_1_21))))))) && ((((var_1_3 >> var_1_23) + var_1_16) < ((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2)))) ? (var_1_22 == ((signed short int) (((((var_1_23) < ((var_1_16 + var_1_24))) ? (var_1_23) : ((var_1_16 + var_1_24)))) + ((var_1_25 - var_1_26) - var_1_27)))) : ((var_1_1 <= var_1_26) ? (var_1_22 == ((signed short int) 128)) : 1))) && (var_1_28 == ((signed long int) var_1_2))
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

// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch41Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
signed char var_1_8 = 64;
signed char var_1_11 = -10;
signed char var_1_12 = 64;
float var_1_13 = 1.6;
float var_1_14 = 3.5;
unsigned char var_1_15 = 8;
unsigned char var_1_16 = 4;
unsigned short int var_1_17 = 2;
unsigned short int var_1_18 = 10000;
signed short int var_1_20 = 4;
signed char var_1_22 = -32;
unsigned long int var_1_23 = 0;
signed short int var_1_24 = 25;
unsigned char var_1_27 = 50;
signed short int var_1_29 = 10;
double var_1_33 = 7.125;
float var_1_34 = 0.75;
float var_1_35 = 25.5;
float var_1_36 = 9.038;
float var_1_39 = 128.5;
float var_1_41 = 15.25;
float var_1_42 = 64.5;
float var_1_43 = 256.3;
unsigned long int var_1_44 = 32;
double var_1_45 = 63.25;
unsigned char last_1_var_1_15 = 8;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = ! var_1_5;
 if (stepLocal_1 || (var_1_12 < last_1_var_1_15)) {
  if (! var_1_5) {
   var_1_13 = var_1_14;
  } else {
   var_1_13 = var_1_14;
  }
 }
 if (var_1_5) {
  var_1_45 = (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) + var_1_42);
 }
 if ((127.35 + var_1_13) <= var_1_13) {
  if (4.5 <= (var_1_13 * var_1_13)) {
   var_1_6 = var_1_5;
  }
 }
 if (var_1_14 <= ((((var_1_13) < (var_1_13)) ? (var_1_13) : (var_1_13)))) {
  if (var_1_18 == var_1_16) {
   var_1_29 = var_1_15;
  } else {
   var_1_29 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
  }
 }
 if ((- var_1_13) > 31.9f) {
  var_1_1 = ((var_1_6 || var_1_4) && var_1_5);
 } else {
  var_1_1 = var_1_5;
 }
 if (32.2f > (25.5f - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) {
  var_1_24 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 }
 if (var_1_14 > (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))) - var_1_36)) {
  if ((((((var_1_18) < (var_1_16)) ? (var_1_18) : (var_1_16))) - var_1_18) > var_1_15) {
   if (var_1_18 < var_1_12) {
    var_1_33 = 0.6;
   } else {
    var_1_33 = var_1_14;
   }
  }
 } else {
  var_1_33 = 10000.5;
 }
 if (var_1_1) {
  var_1_15 = var_1_16;
 }
 var_1_27 = var_1_16;
 var_1_22 = 1;
 var_1_23 = var_1_22;
 if (var_1_4) {
  var_1_39 = var_1_14;
 } else {
  if (var_1_15 < (var_1_15 | var_1_18)) {
   var_1_39 = ((((((var_1_41 - var_1_42) + var_1_43)) > (4.38f)) ? (((var_1_41 - var_1_42) + var_1_43)) : (4.38f)));
  }
 }
 unsigned long int stepLocal_0 = var_1_23;
 if (var_1_15 > stepLocal_0) {
  var_1_8 = ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)));
 }
 unsigned char stepLocal_2 = var_1_23 < var_1_15;
 if (var_1_1 || stepLocal_2) {
  var_1_17 = (var_1_15 + ((var_1_18 - var_1_16) + var_1_15));
 } else {
  var_1_17 = (var_1_16 + var_1_18);
 }
 signed long int stepLocal_3 = -10;
 if (((var_1_15 / var_1_18) * var_1_15) < stepLocal_3) {
  var_1_20 = ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)));
 } else {
  if (! (var_1_17 <= var_1_17)) {
   var_1_20 = var_1_11;
  } else {
   var_1_20 = var_1_12;
  }
 }
 if (((var_1_14 + var_1_14) * ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) >= var_1_35) {
  var_1_44 = ((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 8192);
 assume_abort_if_not(var_1_18 <= 16384);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_15 = var_1_15;
}
int property() {
 return ((((((((((- var_1_13) > 31.9f) ? (var_1_1 == ((unsigned char) ((var_1_6 || var_1_4) && var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) && (((127.35 + var_1_13) <= var_1_13) ? ((4.5 <= (var_1_13 * var_1_13)) ? (var_1_6 == ((unsigned char) var_1_5)) : 1) : 1)) && ((var_1_15 > var_1_23) ? (var_1_8 == ((signed char) ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))))) : 1)) && (((! var_1_5) || (var_1_12 < last_1_var_1_15)) ? ((! var_1_5) ? (var_1_13 == ((float) var_1_14)) : (var_1_13 == ((float) var_1_14))) : 1)) && (var_1_1 ? (var_1_15 == ((unsigned char) var_1_16)) : 1)) && ((var_1_1 || (var_1_23 < var_1_15)) ? (var_1_17 == ((unsigned short int) (var_1_15 + ((var_1_18 - var_1_16) + var_1_15)))) : (var_1_17 == ((unsigned short int) (var_1_16 + var_1_18))))) && ((((var_1_15 / var_1_18) * var_1_15) < -10) ? (var_1_20 == ((signed short int) ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))))) : ((! (var_1_17 <= var_1_17)) ? (var_1_20 == ((signed short int) var_1_11)) : (var_1_20 == ((signed short int) var_1_12))))) && (var_1_22 == ((signed char) 1))) && (var_1_23 == ((unsigned long int) var_1_22))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 5.5;
signed short int var_1_3 = 1;
signed long int var_1_5 = -64;
signed char var_1_6 = 10;
signed char var_1_7 = 5;
double var_1_8 = 16.25;
double var_1_9 = 1.8;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 16;
unsigned long int var_1_13 = 128;
unsigned char var_1_15 = 1;
unsigned short int var_1_16 = 256;
signed char var_1_18 = -2;
unsigned long int var_1_19 = 50;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 0;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 2;
unsigned short int var_1_26 = 32;
unsigned long int var_1_27 = 100;
unsigned short int var_1_28 = 64;
float var_1_29 = 499.875;
float var_1_30 = -0.2;
float var_1_31 = 7.4;
float var_1_32 = -0.375;
float var_1_33 = 1.4;
float var_1_34 = 200.4;
float var_1_35 = 1.5;
unsigned char var_1_36 = 0;
unsigned char last_1_var_1_10 = 32;
unsigned short int last_1_var_1_12 = 16;
unsigned long int last_1_var_1_13 = 128;
void initially(void) {
}
void step(void) {
 if (((var_1_6 >> 2) * last_1_var_1_13) > last_1_var_1_10) {
  var_1_12 = var_1_6;
 }
 if (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) == (~ 16u)) {
  if (var_1_21 || var_1_20) {
   var_1_23 = ((((10) > (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) ? (10) : (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))));
  }
 }
 var_1_33 = var_1_34;
 signed long int stepLocal_2 = last_1_var_1_12 + var_1_7;
 if (var_1_6 <= stepLocal_2) {
  var_1_10 = var_1_11;
 } else {
  var_1_10 = (var_1_3 + var_1_7);
 }
 if ((1 << var_1_10) != (-500 / -100)) {
  if ((var_1_6 - var_1_3) >= (var_1_12 + 256)) {
   var_1_13 = var_1_11;
  } else {
   var_1_13 = var_1_12;
  }
 } else {
  var_1_13 = var_1_6;
 }
 var_1_18 = var_1_3;
 if (var_1_22 <= var_1_19) {
  if (var_1_22 <= (((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24))) / var_1_27)) {
   var_1_26 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)));
  }
 } else {
  if (var_1_25 > (2 ^ ((((var_1_22) > (var_1_27)) ? (var_1_22) : (var_1_27))))) {
   if (var_1_23 > var_1_22) {
    var_1_26 = var_1_25;
   } else {
    var_1_26 = var_1_25;
   }
  } else {
   var_1_26 = var_1_23;
  }
 }
 signed long int stepLocal_4 = (((var_1_11) > ((var_1_12 * -64))) ? (var_1_11) : ((var_1_12 * -64)));
 unsigned char stepLocal_3 = var_1_10;
 if ((- var_1_9) <= var_1_8) {
  if (var_1_15) {
   if (stepLocal_4 < var_1_12) {
    if (var_1_13 == stepLocal_3) {
     var_1_16 = var_1_11;
    }
   } else {
    var_1_16 = 256;
   }
  } else {
   var_1_16 = var_1_3;
  }
 } else {
  var_1_16 = var_1_10;
 }
 if ((var_1_29 / var_1_30) > ((((var_1_31 / var_1_32) < 0 ) ? -(var_1_31 / var_1_32) : (var_1_31 / var_1_32)))) {
  if (var_1_23 > var_1_27) {
   var_1_28 = var_1_23;
  }
 }
 signed long int stepLocal_1 = (var_1_10 & 0) * var_1_5;
 signed long int stepLocal_0 = var_1_16 >> var_1_3;
 if (stepLocal_0 == (var_1_10 / var_1_5)) {
  if ((var_1_3 << (var_1_6 - var_1_7)) > stepLocal_1) {
   var_1_1 = ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)));
  } else {
   var_1_1 = var_1_8;
  }
 }
 if (var_1_20 || var_1_21) {
  var_1_19 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 }
 if (((256 - var_1_25) <= (var_1_28 + var_1_19)) || var_1_20) {
  if (var_1_20) {
   if (((var_1_26 == var_1_27) && var_1_21) && var_1_36) {
    var_1_35 = var_1_34;
   }
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 8);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 6);
 assume_abort_if_not(var_1_6 <= 12);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 6);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 4294967295);
 assume_abort_if_not(var_1_27 != 0);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 assume_abort_if_not(var_1_30 != 0.0F);
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 1);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
}
int property() {
 return (((((((var_1_16 >> var_1_3) == (var_1_10 / var_1_5)) ? (((var_1_3 << (var_1_6 - var_1_7)) > ((var_1_10 & 0) * var_1_5)) ? (var_1_1 == ((double) ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) : (var_1_1 == ((double) var_1_8))) : 1) && ((var_1_6 <= (last_1_var_1_12 + var_1_7)) ? (var_1_10 == ((unsigned char) var_1_11)) : (var_1_10 == ((unsigned char) (var_1_3 + var_1_7))))) && ((((var_1_6 >> 2) * last_1_var_1_13) > last_1_var_1_10) ? (var_1_12 == ((unsigned short int) var_1_6)) : 1)) && (((1 << var_1_10) != (-500 / -100)) ? (((var_1_6 - var_1_3) >= (var_1_12 + 256)) ? (var_1_13 == ((unsigned long int) var_1_11)) : (var_1_13 == ((unsigned long int) var_1_12))) : (var_1_13 == ((unsigned long int) var_1_6)))) && (((- var_1_9) <= var_1_8) ? (var_1_15 ? ((((((var_1_11) > ((var_1_12 * -64))) ? (var_1_11) : ((var_1_12 * -64)))) < var_1_12) ? ((var_1_13 == var_1_10) ? (var_1_16 == ((unsigned short int) var_1_11)) : 1) : (var_1_16 == ((unsigned short int) 256))) : (var_1_16 == ((unsigned short int) var_1_3))) : (var_1_16 == ((unsigned short int) var_1_10)))) && (var_1_18 == ((signed char) var_1_3))
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

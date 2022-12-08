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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch20Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 2;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 32;
unsigned short int var_1_8 = 100;
float var_1_9 = 255.75;
signed char var_1_10 = 64;
signed char var_1_11 = 32;
signed char var_1_12 = 4;
float var_1_13 = 0.0;
float var_1_14 = 7.25;
float var_1_15 = 8.125;
float var_1_16 = 24.5;
signed short int var_1_17 = -256;
double var_1_18 = 31.5;
float var_1_19 = 255.2;
float var_1_20 = 5.5;
signed long int var_1_21 = -8;
double var_1_22 = 0.5;
unsigned short int var_1_23 = 200;
unsigned char var_1_24 = 0;
double var_1_25 = 127.9;
double var_1_26 = 1.8;
unsigned char var_1_27 = 1;
float var_1_28 = 5.65;
unsigned short int var_1_29 = 8;
signed short int var_1_30 = -64;
signed long int var_1_31 = 1000;
unsigned short int var_1_32 = 64;
unsigned short int var_1_33 = 0;
unsigned short int var_1_34 = 2;
unsigned short int var_1_35 = 8;
unsigned short int var_1_36 = 2;
unsigned char var_1_37 = 1;
unsigned short int var_1_38 = 5;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned long int var_1_41 = 10;
unsigned char last_1_var_1_6 = 32;
unsigned short int last_1_var_1_8 = 100;
void initially(void) {
}
void step(void) {
 var_1_19 = var_1_20;
 var_1_21 = -16;
 var_1_22 = var_1_20;
 if (var_1_24) {
  if (var_1_22 > (var_1_20 / ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) {
   var_1_23 = 100;
  } else {
   var_1_23 = 10;
  }
 }
 if (var_1_21 > var_1_23) {
  var_1_26 = var_1_20;
 } else {
  if ((var_1_24 || var_1_27) || ((- var_1_20) <= var_1_28)) {
   var_1_26 = ((((9.99999999739E8) < (var_1_20)) ? (9.99999999739E8) : (var_1_20)));
  }
 }
 if (var_1_27 || (var_1_22 <= var_1_19)) {
  if ((var_1_21 | (var_1_23 * var_1_30)) == ((((var_1_31) < (-32)) ? (var_1_31) : (-32)))) {
   var_1_29 = ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) > (var_1_33)) ? (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : (var_1_33)));
  } else {
   var_1_29 = (((((((var_1_32) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_32) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) < 0 ) ? -((((var_1_32) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_32) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) : ((((var_1_32) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_32) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))))));
  }
 } else {
  var_1_29 = (var_1_34 + (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) + var_1_36));
 }
 if (var_1_24 || (var_1_29 <= (var_1_23 / var_1_38))) {
  var_1_37 = (var_1_39 || var_1_40);
 }
 if ((var_1_21 + ((((var_1_32) < (var_1_38)) ? (var_1_32) : (var_1_38)))) <= var_1_30) {
  if (var_1_37) {
   var_1_41 = var_1_38;
  }
 }
 signed long int stepLocal_0 = 64 + (var_1_5 / var_1_3);
 if (stepLocal_0 != (last_1_var_1_8 - (var_1_4 + last_1_var_1_6))) {
  var_1_6 = var_1_4;
 } else {
  var_1_6 = 128;
 }
 if (var_1_2) {
  var_1_1 = (var_1_3 - var_1_4);
 } else {
  var_1_1 = (var_1_4 + var_1_5);
 }
 if (((var_1_10 - var_1_11) - (16 + var_1_12)) != var_1_5) {
  var_1_9 = (64.8f - (var_1_13 - var_1_14));
 } else {
  var_1_9 = var_1_13;
 }
 var_1_15 = (var_1_14 + var_1_16);
 if (var_1_2) {
  var_1_17 = (var_1_3 + var_1_12);
 } else {
  if (var_1_14 == (((((99.8f) < (var_1_16)) ? (99.8f) : (var_1_16))) / ((((255.6f) > (var_1_13)) ? (255.6f) : (var_1_13))))) {
   var_1_17 = var_1_4;
  } else {
   var_1_17 = (var_1_5 - var_1_3);
  }
 }
 if ((var_1_2 || (var_1_16 > var_1_13)) && (var_1_3 < var_1_1)) {
  if ((var_1_11 << var_1_12) > var_1_5) {
   var_1_18 = var_1_13;
  }
 } else {
  var_1_18 = var_1_16;
 }
 signed long int stepLocal_1 = var_1_3 - var_1_5;
 if ((var_1_17 + var_1_6) >= stepLocal_1) {
  var_1_8 = ((((var_1_6) > (var_1_3)) ? (var_1_6) : (var_1_3)));
 } else {
  var_1_8 = var_1_6;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 127);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 63);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 64);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 4611686.018427382800e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32768);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 65534);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 65534);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 32767);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 16384);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 16383);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 65535);
 assume_abort_if_not(var_1_38 != 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_8 = var_1_8;
}
int property() {
 return ((((((var_1_2 ? (var_1_1 == ((unsigned char) (var_1_3 - var_1_4))) : (var_1_1 == ((unsigned char) (var_1_4 + var_1_5)))) && (((64 + (var_1_5 / var_1_3)) != (last_1_var_1_8 - (var_1_4 + last_1_var_1_6))) ? (var_1_6 == ((unsigned char) var_1_4)) : (var_1_6 == ((unsigned char) 128)))) && (((var_1_17 + var_1_6) >= (var_1_3 - var_1_5)) ? (var_1_8 == ((unsigned short int) ((((var_1_6) > (var_1_3)) ? (var_1_6) : (var_1_3))))) : (var_1_8 == ((unsigned short int) var_1_6)))) && ((((var_1_10 - var_1_11) - (16 + var_1_12)) != var_1_5) ? (var_1_9 == ((float) (64.8f - (var_1_13 - var_1_14)))) : (var_1_9 == ((float) var_1_13)))) && (var_1_15 == ((float) (var_1_14 + var_1_16)))) && (var_1_2 ? (var_1_17 == ((signed short int) (var_1_3 + var_1_12))) : ((var_1_14 == (((((99.8f) < (var_1_16)) ? (99.8f) : (var_1_16))) / ((((255.6f) > (var_1_13)) ? (255.6f) : (var_1_13))))) ? (var_1_17 == ((signed short int) var_1_4)) : (var_1_17 == ((signed short int) (var_1_5 - var_1_3)))))) && (((var_1_2 || (var_1_16 > var_1_13)) && (var_1_3 < var_1_1)) ? (((var_1_11 << var_1_12) > var_1_5) ? (var_1_18 == ((double) var_1_13)) : 1) : (var_1_18 == ((double) var_1_16)))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch44PS_CN_10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 16;
unsigned char var_1_5 = 1;
signed short int var_1_8 = -5;
double var_1_10 = 256.475;
double var_1_11 = 4.8;
unsigned long int var_1_14 = 0;
signed char var_1_15 = -5;
unsigned long int var_1_16 = 500;
unsigned long int var_1_17 = 4182428128;
unsigned long int var_1_18 = 16;
signed char var_1_19 = -5;
signed char var_1_20 = 0;
signed char var_1_21 = 64;
float var_1_22 = 49.375;
signed short int var_1_23 = 256;
signed short int var_1_24 = 8;
float var_1_25 = 255.5;
float var_1_26 = 500.14;
signed long int var_1_27 = -8;
signed short int var_1_30 = -2;
double var_1_31 = 0.3;
signed char var_1_32 = 16;
unsigned char var_1_33 = 25;
unsigned char var_1_34 = 50;
unsigned short int var_1_35 = 32;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned long int var_1_38 = 2;
signed char var_1_39 = 64;
signed char var_1_40 = 8;
signed char var_1_41 = -2;
float last_1_var_1_22 = 49.375;
signed short int last_1_var_1_30 = -2;
signed char last_1_var_1_32 = 16;
void initially(void) {
}
void step(void) {
 var_1_33 = var_1_34;
 var_1_35 = var_1_33;
 var_1_36 = var_1_37;
 var_1_38 = var_1_34;
 if (((((var_1_35) < (var_1_38)) ? (var_1_35) : (var_1_38))) != var_1_34) {
  if (var_1_36) {
   var_1_39 = var_1_40;
  }
 }
 var_1_41 = var_1_40;
 if (((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22))) < (((((var_1_10 - var_1_11)) < (((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22))))) ? ((var_1_10 - var_1_11)) : (((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22))))))) {
  if (last_1_var_1_22 >= last_1_var_1_22) {
   var_1_8 = last_1_var_1_32;
  } else {
   var_1_8 = last_1_var_1_30;
  }
 } else {
  var_1_8 = 0;
 }
 unsigned long int stepLocal_1 = var_1_18;
 if (256 > stepLocal_1) {
  var_1_19 = ((((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) > (var_1_21)) ? (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) : (var_1_21)));
 }
 var_1_31 = var_1_26;
 var_1_32 = var_1_21;
 var_1_30 = ((((var_1_15) > (var_1_32)) ? (var_1_15) : (var_1_32)));
 signed short int stepLocal_0 = var_1_8;
 if (stepLocal_0 == ((var_1_32 + var_1_19) ^ (var_1_30 + var_1_32))) {
  var_1_1 = var_1_8;
 }
 if (var_1_30 == ((((var_1_30) < ((var_1_8 / var_1_15))) ? (var_1_30) : ((var_1_8 / var_1_15))))) {
  var_1_14 = var_1_16;
 } else {
  var_1_14 = (var_1_17 - (16u + var_1_18));
 }
 signed long int stepLocal_2 = var_1_23 - var_1_24;
 if (stepLocal_2 > var_1_14) {
  var_1_22 = (var_1_25 - var_1_26);
 }
 if (! var_1_5) {
  var_1_27 = ((var_1_32 + var_1_24) + (var_1_30 + (var_1_20 + var_1_32)));
 } else {
  if (var_1_11 > var_1_22) {
   var_1_27 = var_1_19;
  } else {
   var_1_27 = var_1_32;
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -128);
 assume_abort_if_not(var_1_15 <= 127);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -126);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -127);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -1);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 0);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -127);
 assume_abort_if_not(var_1_40 <= 126);
}
void updateLastVariables() {
 last_1_var_1_22 = var_1_22;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_32 = var_1_32;
}
int property() {
 return (((((((((var_1_8 == ((var_1_32 + var_1_19) ^ (var_1_30 + var_1_32))) ? (var_1_1 == ((signed long int) var_1_8)) : 1) && ((((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22))) < (((((var_1_10 - var_1_11)) < (((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22))))) ? ((var_1_10 - var_1_11)) : (((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22))))))) ? ((last_1_var_1_22 >= last_1_var_1_22) ? (var_1_8 == ((signed short int) last_1_var_1_32)) : (var_1_8 == ((signed short int) last_1_var_1_30))) : (var_1_8 == ((signed short int) 0)))) && ((var_1_30 == ((((var_1_30) < ((var_1_8 / var_1_15))) ? (var_1_30) : ((var_1_8 / var_1_15))))) ? (var_1_14 == ((unsigned long int) var_1_16)) : (var_1_14 == ((unsigned long int) (var_1_17 - (16u + var_1_18)))))) && ((256 > var_1_18) ? (var_1_19 == ((signed char) ((((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) > (var_1_21)) ? (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) : (var_1_21))))) : 1)) && (((var_1_23 - var_1_24) > var_1_14) ? (var_1_22 == ((float) (var_1_25 - var_1_26))) : 1)) && ((! var_1_5) ? (var_1_27 == ((signed long int) ((var_1_32 + var_1_24) + (var_1_30 + (var_1_20 + var_1_32))))) : ((var_1_11 > var_1_22) ? (var_1_27 == ((signed long int) var_1_19)) : (var_1_27 == ((signed long int) var_1_32))))) && (var_1_30 == ((signed short int) ((((var_1_15) > (var_1_32)) ? (var_1_15) : (var_1_32)))))) && (var_1_31 == ((double) var_1_26))) && (var_1_32 == ((signed char) var_1_21))
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

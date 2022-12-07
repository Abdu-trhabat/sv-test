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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch68PS_CN_10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 32;
double var_1_9 = 4.6;
double var_1_10 = 9.25;
double var_1_11 = 1.25;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 0;
float var_1_15 = 7.5;
signed long int var_1_16 = 0;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
double var_1_21 = 4.65;
signed long int var_1_22 = 256;
signed long int var_1_23 = 64;
unsigned char var_1_24 = 5;
unsigned char var_1_25 = 2;
signed short int var_1_26 = 10;
double var_1_27 = 16.8;
double var_1_28 = 10.6;
float var_1_29 = 8.25;
signed char var_1_30 = 8;
signed char var_1_31 = 1;
double last_1_var_1_9 = 4.6;
unsigned char last_1_var_1_12 = 100;
unsigned char last_1_var_1_14 = 0;
signed long int last_1_var_1_16 = 0;
void initially(void) {
}
void step(void) {
 var_1_17 = (var_1_18 || (var_1_19 && var_1_20));
 var_1_21 = -0.5;
 var_1_22 = var_1_23;
 var_1_24 = var_1_25;
 var_1_26 = var_1_25;
 var_1_27 = var_1_28;
 var_1_29 = var_1_28;
 var_1_30 = var_1_31;
 signed long int stepLocal_4 = last_1_var_1_16;
 if (last_1_var_1_14) {
  if (var_1_10 >= (- last_1_var_1_9)) {
   if (var_1_8 != stepLocal_4) {
    var_1_12 = var_1_13;
   } else {
    var_1_12 = 50;
   }
  } else {
   var_1_12 = var_1_13;
  }
 } else {
  var_1_12 = var_1_13;
 }
 var_1_16 = last_1_var_1_12;
 unsigned long int stepLocal_6 = var_1_13 % (5u + 256u);
 signed long int stepLocal_5 = var_1_13 + 16;
 if (stepLocal_6 <= var_1_16) {
  if (stepLocal_5 >= var_1_16) {
   var_1_14 = var_1_7;
  } else {
   var_1_14 = var_1_7;
  }
 }
 unsigned char stepLocal_0 = var_1_12;
 if (stepLocal_0 <= (var_1_12 ^ var_1_12)) {
  var_1_1 = (! var_1_5);
 } else {
  var_1_1 = (! var_1_5);
 }
 unsigned char stepLocal_2 = var_1_12 < (var_1_16 / var_1_8);
 signed long int stepLocal_1 = var_1_16;
 if (-256 >= stepLocal_1) {
  var_1_6 = (var_1_1 || var_1_7);
 } else {
  if (stepLocal_2 || ((var_1_5 && var_1_7) && var_1_1)) {
   var_1_6 = var_1_7;
  }
 }
 unsigned char stepLocal_3 = ! var_1_5;
 if ((var_1_7 && var_1_14) || stepLocal_3) {
  var_1_11 = var_1_10;
 }
 var_1_15 = var_1_10;
 if (((((((((var_1_16) < (var_1_12)) ? (var_1_16) : (var_1_12)))) > (var_1_12)) ? (((((var_1_16) < (var_1_12)) ? (var_1_16) : (var_1_12)))) : (var_1_12))) <= (50 * var_1_8)) {
  var_1_9 = var_1_10;
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 255);
 assume_abort_if_not(var_1_8 != 0);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483647);
 assume_abort_if_not(var_1_23 <= 2147483646);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -127);
 assume_abort_if_not(var_1_31 <= 126);
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_16 = var_1_16;
}
int property() {
 return ((((((((var_1_12 <= (var_1_12 ^ var_1_12)) ? (var_1_1 == ((unsigned char) (! var_1_5))) : (var_1_1 == ((unsigned char) (! var_1_5)))) && ((-256 >= var_1_16) ? (var_1_6 == ((unsigned char) (var_1_1 || var_1_7))) : (((var_1_12 < (var_1_16 / var_1_8)) || ((var_1_5 && var_1_7) && var_1_1)) ? (var_1_6 == ((unsigned char) var_1_7)) : 1))) && ((((((((((var_1_16) < (var_1_12)) ? (var_1_16) : (var_1_12)))) > (var_1_12)) ? (((((var_1_16) < (var_1_12)) ? (var_1_16) : (var_1_12)))) : (var_1_12))) <= (50 * var_1_8)) ? (var_1_9 == ((double) var_1_10)) : 1)) && (((var_1_7 && var_1_14) || (! var_1_5)) ? (var_1_11 == ((double) var_1_10)) : 1)) && (last_1_var_1_14 ? ((var_1_10 >= (- last_1_var_1_9)) ? ((var_1_8 != last_1_var_1_16) ? (var_1_12 == ((unsigned char) var_1_13)) : (var_1_12 == ((unsigned char) 50))) : (var_1_12 == ((unsigned char) var_1_13))) : (var_1_12 == ((unsigned char) var_1_13)))) && (((var_1_13 % (5u + 256u)) <= var_1_16) ? (((var_1_13 + 16) >= var_1_16) ? (var_1_14 == ((unsigned char) var_1_7)) : (var_1_14 == ((unsigned char) var_1_7))) : 1)) && (var_1_15 == ((float) var_1_10))) && (var_1_16 == ((signed long int) last_1_var_1_12))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch22stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
float var_1_2 = 0.625;
float var_1_3 = 1000000000000.5;
unsigned short int var_1_4 = 256;
unsigned short int var_1_5 = 100;
unsigned short int var_1_6 = 10000;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 128;
unsigned short int var_1_9 = 8;
unsigned char var_1_10 = 100;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 16;
unsigned short int var_1_13 = 256;
unsigned char var_1_14 = 1;
unsigned short int var_1_15 = 256;
unsigned short int var_1_16 = 1;
unsigned short int var_1_17 = 4;
double var_1_18 = 64.2;
unsigned short int var_1_19 = 53045;
double var_1_20 = 1.75;
double var_1_21 = 50.35;
double var_1_22 = 5.5;
double var_1_23 = 7.125;
unsigned long int var_1_24 = 50;
unsigned long int var_1_25 = 1907531378;
unsigned long int var_1_26 = 8;
unsigned char var_1_27 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_2 < var_1_3) {
  var_1_1 = ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)));
 } else {
  var_1_1 = (((var_1_6 + var_1_7) - var_1_8) + var_1_9);
 }
 if (var_1_9 < (var_1_8 << var_1_4)) {
  var_1_10 = (var_1_11 + var_1_12);
 } else {
  var_1_10 = var_1_11;
 }
 unsigned char stepLocal_0 = var_1_4 <= var_1_9;
 if (stepLocal_0 || var_1_14) {
  var_1_13 = ((((((((var_1_5) > (var_1_8)) ? (var_1_5) : (var_1_8)))) > (var_1_15)) ? (((((var_1_5) > (var_1_8)) ? (var_1_5) : (var_1_8)))) : (var_1_15)));
 } else {
  var_1_13 = var_1_16;
 }
 if ((var_1_3 / var_1_18) > var_1_2) {
  var_1_17 = ((var_1_19 - ((((var_1_10) > (var_1_12)) ? (var_1_10) : (var_1_12)))) - var_1_7);
 }
 if (var_1_14) {
  var_1_20 = (((((((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)))) > (16.6)) ? (((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)))) : (16.6))) - var_1_23);
 } else {
  var_1_20 = var_1_22;
 }
 unsigned char stepLocal_1 = var_1_10;
 if (var_1_7 == stepLocal_1) {
  var_1_24 = (2332545940u - (1490203111u - var_1_11));
 } else {
  var_1_24 = (var_1_5 + (var_1_25 - var_1_11));
 }
 unsigned short int stepLocal_2 = var_1_4;
 if (stepLocal_2 > (var_1_19 - var_1_7)) {
  var_1_26 = var_1_8;
 }
 if ((- 3.75) < ((((var_1_3) < (var_1_22)) ? (var_1_3) : (var_1_22)))) {
  var_1_27 = 0;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 8191);
 assume_abort_if_not(var_1_6 <= 16384);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8192);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 49150);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483647);
}
void updateLastVariables() {
}
int property() {
 return ((((((((var_1_2 < var_1_3) ? (var_1_1 == ((unsigned short int) ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) : (var_1_1 == ((unsigned short int) (((var_1_6 + var_1_7) - var_1_8) + var_1_9)))) && ((var_1_9 < (var_1_8 << var_1_4)) ? (var_1_10 == ((unsigned char) (var_1_11 + var_1_12))) : (var_1_10 == ((unsigned char) var_1_11)))) && (((var_1_4 <= var_1_9) || var_1_14) ? (var_1_13 == ((unsigned short int) ((((((((var_1_5) > (var_1_8)) ? (var_1_5) : (var_1_8)))) > (var_1_15)) ? (((((var_1_5) > (var_1_8)) ? (var_1_5) : (var_1_8)))) : (var_1_15))))) : (var_1_13 == ((unsigned short int) var_1_16)))) && (((var_1_3 / var_1_18) > var_1_2) ? (var_1_17 == ((unsigned short int) ((var_1_19 - ((((var_1_10) > (var_1_12)) ? (var_1_10) : (var_1_12)))) - var_1_7))) : 1)) && (var_1_14 ? (var_1_20 == ((double) (((((((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)))) > (16.6)) ? (((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)))) : (16.6))) - var_1_23))) : (var_1_20 == ((double) var_1_22)))) && ((var_1_7 == var_1_10) ? (var_1_24 == ((unsigned long int) (2332545940u - (1490203111u - var_1_11)))) : (var_1_24 == ((unsigned long int) (var_1_5 + (var_1_25 - var_1_11)))))) && ((var_1_4 > (var_1_19 - var_1_7)) ? (var_1_26 == ((unsigned long int) var_1_8)) : 1)) && (((- 3.75) < ((((var_1_3) < (var_1_22)) ? (var_1_3) : (var_1_22)))) ? (var_1_27 == ((unsigned char) 0)) : 1)
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

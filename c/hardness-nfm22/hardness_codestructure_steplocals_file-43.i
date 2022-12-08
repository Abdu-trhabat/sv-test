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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch43stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 1000.6;
float var_1_2 = 255.675;
float var_1_3 = 10.4;
float var_1_4 = 31.4;
double var_1_5 = 7.75;
double var_1_6 = 63.1;
signed char var_1_7 = 32;
signed long int var_1_8 = -1;
signed long int var_1_9 = 50;
signed char var_1_10 = 64;
signed short int var_1_11 = 5;
unsigned short int var_1_12 = 4;
unsigned char var_1_13 = 1;
unsigned short int var_1_14 = 49632;
unsigned short int var_1_15 = 0;
signed char var_1_16 = 50;
float var_1_17 = 128.5;
signed char var_1_18 = 2;
signed char var_1_19 = 25;
signed char var_1_20 = 10;
signed char var_1_21 = 1;
signed char var_1_22 = 8;
unsigned long int var_1_23 = 25;
unsigned short int var_1_24 = 32;
unsigned long int var_1_25 = 16;
signed long int var_1_26 = 50;
void initially(void) {
}
void step(void) {
 if ((- 1000.5f) != (var_1_2 * (var_1_3 / var_1_4))) {
  var_1_1 = ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)));
 } else {
  var_1_1 = var_1_5;
 }
 if (-4 > (var_1_8 & var_1_9)) {
  var_1_7 = var_1_10;
 }
 if (var_1_1 > var_1_4) {
  var_1_11 = var_1_10;
 } else {
  var_1_11 = ((((var_1_7) < (((16 - 32) + (64 + var_1_10)))) ? (var_1_7) : (((16 - 32) + (64 + var_1_10)))));
 }
 if (var_1_13) {
  var_1_12 = (var_1_14 - var_1_15);
 }
 signed char stepLocal_0 = var_1_19;
 if (var_1_2 <= (((((var_1_3) < (var_1_17)) ? (var_1_3) : (var_1_17))) + var_1_1)) {
  var_1_16 = ((((var_1_10) < ((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) + var_1_20))) ? (var_1_10) : ((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) + var_1_20))));
 } else {
  if (stepLocal_0 < var_1_20) {
   var_1_16 = (var_1_21 - var_1_22);
  } else {
   var_1_16 = var_1_10;
  }
 }
 if ((- (var_1_14 - var_1_24)) < var_1_10) {
  var_1_23 = (var_1_24 + (var_1_22 + 4u));
 } else {
  var_1_23 = ((((var_1_14) < (var_1_25)) ? (var_1_14) : (var_1_25)));
 }
 if (var_1_6 != 49.125) {
  if (((((64u) < 0 ) ? -(64u) : (64u))) < var_1_9) {
   var_1_26 = var_1_15;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854765600e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -1);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 4294967294);
}
void updateLastVariables() {
}
int property() {
 return ((((((((- 1000.5f) != (var_1_2 * (var_1_3 / var_1_4))) ? (var_1_1 == ((double) ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) : (var_1_1 == ((double) var_1_5))) && ((-4 > (var_1_8 & var_1_9)) ? (var_1_7 == ((signed char) var_1_10)) : 1)) && ((var_1_1 > var_1_4) ? (var_1_11 == ((signed short int) var_1_10)) : (var_1_11 == ((signed short int) ((((var_1_7) < (((16 - 32) + (64 + var_1_10)))) ? (var_1_7) : (((16 - 32) + (64 + var_1_10))))))))) && (var_1_13 ? (var_1_12 == ((unsigned short int) (var_1_14 - var_1_15))) : 1)) && ((var_1_2 <= (((((var_1_3) < (var_1_17)) ? (var_1_3) : (var_1_17))) + var_1_1)) ? (var_1_16 == ((signed char) ((((var_1_10) < ((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) + var_1_20))) ? (var_1_10) : ((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) + var_1_20)))))) : ((var_1_19 < var_1_20) ? (var_1_16 == ((signed char) (var_1_21 - var_1_22))) : (var_1_16 == ((signed char) var_1_10))))) && (((- (var_1_14 - var_1_24)) < var_1_10) ? (var_1_23 == ((unsigned long int) (var_1_24 + (var_1_22 + 4u)))) : (var_1_23 == ((unsigned long int) ((((var_1_14) < (var_1_25)) ? (var_1_14) : (var_1_25))))))) && ((var_1_6 != 49.125) ? ((((((64u) < 0 ) ? -(64u) : (64u))) < var_1_9) ? (var_1_26 == ((signed long int) var_1_15)) : 1) : 1)
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

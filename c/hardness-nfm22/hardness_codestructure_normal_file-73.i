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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 7.325;
double var_1_2 = 9.2;
double var_1_3 = 63.8;
double var_1_4 = 256.6;
double var_1_5 = 2.375;
double var_1_6 = 25.8;
unsigned char var_1_7 = 1;
double var_1_8 = 1.5;
unsigned long int var_1_9 = 32;
unsigned long int var_1_10 = 3567543019;
unsigned long int var_1_11 = 32;
float var_1_12 = 31.875;
signed long int var_1_13 = 128;
unsigned char var_1_14 = 8;
signed long int var_1_15 = -16;
unsigned char var_1_16 = 4;
double var_1_17 = 1.2;
unsigned char var_1_18 = 16;
signed long int var_1_19 = 64;
unsigned char var_1_20 = 0;
signed long int var_1_21 = 1897833385;
unsigned char var_1_22 = 2;
signed char var_1_23 = -5;
signed char var_1_24 = -4;
signed char var_1_25 = 2;
signed long int var_1_26 = -1000000;
void initially(void) {
}
void step(void) {
 if (var_1_2 > ((var_1_3 - var_1_4) / ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) {
  if (var_1_7) {
   var_1_1 = var_1_8;
  } else {
   var_1_1 = var_1_8;
  }
 } else {
  var_1_1 = var_1_8;
 }
 if (var_1_2 < (var_1_4 - var_1_3)) {
  var_1_9 = (var_1_10 - var_1_11);
 }
 if ((((((var_1_9 / 2)) > ((~ var_1_11))) ? ((var_1_9 / 2)) : ((~ var_1_11)))) <= var_1_10) {
  var_1_12 = var_1_8;
 }
 if ((var_1_14 >> var_1_10) < var_1_9) {
  var_1_13 = ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)));
 }
 if (var_1_3 >= (var_1_17 * var_1_4)) {
  var_1_16 = var_1_18;
 }
 if (var_1_7 && var_1_20) {
  var_1_19 = ((1827081742 - var_1_16) - (var_1_21 - (var_1_18 + var_1_14)));
 } else {
  if (2u >= ((((var_1_21) > (var_1_9)) ? (var_1_21) : (var_1_9)))) {
   var_1_19 = var_1_15;
  } else {
   var_1_19 = var_1_15;
  }
 }
 var_1_22 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
 if (var_1_2 > var_1_5) {
  var_1_23 = (((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) < 0 ) ? -((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) : ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25)))));
 } else {
  var_1_23 = var_1_24;
 }
 var_1_26 = var_1_25;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 assume_abort_if_not(var_1_5 != 0.0F);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 assume_abort_if_not(var_1_6 != 0.0F);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 2147483647);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 255);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483647);
 assume_abort_if_not(var_1_15 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483646);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -126);
 assume_abort_if_not(var_1_24 <= 126);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -126);
 assume_abort_if_not(var_1_25 <= 126);
}
void updateLastVariables() {
}
int property() {
 return (((((((((var_1_2 > ((var_1_3 - var_1_4) / ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? (var_1_7 ? (var_1_1 == ((double) var_1_8)) : (var_1_1 == ((double) var_1_8))) : (var_1_1 == ((double) var_1_8))) && ((var_1_2 < (var_1_4 - var_1_3)) ? (var_1_9 == ((unsigned long int) (var_1_10 - var_1_11))) : 1)) && (((((((var_1_9 / 2)) > ((~ var_1_11))) ? ((var_1_9 / 2)) : ((~ var_1_11)))) <= var_1_10) ? (var_1_12 == ((float) var_1_8)) : 1)) && (((var_1_14 >> var_1_10) < var_1_9) ? (var_1_13 == ((signed long int) ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))))) : 1)) && ((var_1_3 >= (var_1_17 * var_1_4)) ? (var_1_16 == ((unsigned char) var_1_18)) : 1)) && ((var_1_7 && var_1_20) ? (var_1_19 == ((signed long int) ((1827081742 - var_1_16) - (var_1_21 - (var_1_18 + var_1_14))))) : ((2u >= ((((var_1_21) > (var_1_9)) ? (var_1_21) : (var_1_9)))) ? (var_1_19 == ((signed long int) var_1_15)) : (var_1_19 == ((signed long int) var_1_15))))) && (var_1_22 == ((unsigned char) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))) && ((var_1_2 > var_1_5) ? (var_1_23 == ((signed char) (((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) < 0 ) ? -((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) : ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))))) : (var_1_23 == ((signed char) var_1_24)))) && (var_1_26 == ((signed long int) var_1_25))
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

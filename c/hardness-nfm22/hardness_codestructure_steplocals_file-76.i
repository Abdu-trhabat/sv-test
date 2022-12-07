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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch76stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 256.5;
unsigned char var_1_2 = 0;
double var_1_3 = 7.5;
double var_1_4 = 256.2;
double var_1_5 = 2.75;
signed long int var_1_6 = -64;
double var_1_7 = 8.05;
float var_1_8 = 5.25;
signed char var_1_9 = -16;
signed long int var_1_10 = 1;
signed long int var_1_11 = 4;
signed long int var_1_12 = 0;
signed long int var_1_13 = -16;
unsigned short int var_1_14 = 10000;
unsigned short int var_1_15 = 5;
unsigned short int var_1_16 = 5;
unsigned short int var_1_17 = 4;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 8;
void initially(void) {
}
void step(void) {
 if (! var_1_2) {
  var_1_1 = ((((((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_5)) ? (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_5)));
 } else {
  var_1_1 = var_1_4;
 }
 if (var_1_5 > (var_1_3 / var_1_7)) {
  if (! var_1_2) {
   var_1_6 = -10;
  }
 }
 signed long int stepLocal_0 = var_1_10;
 if ((var_1_6 * var_1_9) >= stepLocal_0) {
  if (var_1_2) {
   var_1_8 = var_1_4;
  }
 }
 if (var_1_4 <= var_1_1) {
  var_1_11 = (var_1_9 + -128);
 } else {
  var_1_11 = (((((-256) < (var_1_9)) ? (-256) : (var_1_9))) + ((((var_1_12) < (((((var_1_13) > (256)) ? (var_1_13) : (256))))) ? (var_1_12) : (((((var_1_13) > (256)) ? (var_1_13) : (256)))))));
 }
 if (var_1_5 >= var_1_1) {
  if (((((1.2) < 0 ) ? -(1.2) : (1.2))) < var_1_4) {
   var_1_14 = var_1_15;
  } else {
   var_1_14 = var_1_16;
  }
 }
 if (var_1_2) {
  if (var_1_1 == var_1_5) {
   if ((128 * ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)))) > 1) {
    var_1_17 = var_1_16;
   }
  } else {
   var_1_17 = var_1_15;
  }
 } else {
  var_1_17 = var_1_16;
 }
 unsigned short int stepLocal_1 = var_1_16;
 if ((var_1_14 + (var_1_11 | var_1_6)) > stepLocal_1) {
  var_1_18 = (128 - (var_1_19 + var_1_20));
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 assume_abort_if_not(var_1_7 != 0.0F);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -128);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -1073741823);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -1073741823);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 64);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
}
void updateLastVariables() {
}
int property() {
 return (((((((! var_1_2) ? (var_1_1 == ((double) ((((((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_5)) ? (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_5))))) : (var_1_1 == ((double) var_1_4))) && ((var_1_5 > (var_1_3 / var_1_7)) ? ((! var_1_2) ? (var_1_6 == ((signed long int) -10)) : 1) : 1)) && (((var_1_6 * var_1_9) >= var_1_10) ? (var_1_2 ? (var_1_8 == ((float) var_1_4)) : 1) : 1)) && ((var_1_4 <= var_1_1) ? (var_1_11 == ((signed long int) (var_1_9 + -128))) : (var_1_11 == ((signed long int) (((((-256) < (var_1_9)) ? (-256) : (var_1_9))) + ((((var_1_12) < (((((var_1_13) > (256)) ? (var_1_13) : (256))))) ? (var_1_12) : (((((var_1_13) > (256)) ? (var_1_13) : (256))))))))))) && ((var_1_5 >= var_1_1) ? ((((((1.2) < 0 ) ? -(1.2) : (1.2))) < var_1_4) ? (var_1_14 == ((unsigned short int) var_1_15)) : (var_1_14 == ((unsigned short int) var_1_16))) : 1)) && (var_1_2 ? ((var_1_1 == var_1_5) ? (((128 * ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)))) > 1) ? (var_1_17 == ((unsigned short int) var_1_16)) : 1) : (var_1_17 == ((unsigned short int) var_1_15))) : (var_1_17 == ((unsigned short int) var_1_16)))) && (((var_1_14 + (var_1_11 | var_1_6)) > var_1_16) ? (var_1_18 == ((unsigned char) (128 - (var_1_19 + var_1_20)))) : 1)
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

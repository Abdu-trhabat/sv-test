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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -2;
signed char var_1_10 = -32;
signed long int var_1_11 = 4;
signed long int var_1_12 = 1731242407;
signed long int var_1_13 = 0;
signed char var_1_14 = 10;
signed char var_1_15 = 8;
signed char var_1_16 = -25;
signed char var_1_17 = -16;
unsigned long int var_1_18 = 0;
signed short int var_1_19 = 256;
signed short int var_1_20 = 28075;
signed short int var_1_21 = 256;
signed short int var_1_22 = 25;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed char var_1_25 = 1;
signed char var_1_26 = 0;
signed char var_1_27 = 10;
unsigned long int var_1_28 = 64;
float var_1_30 = 127.75;
float var_1_34 = 9.5;
float var_1_35 = 256.5;
unsigned long int var_1_36 = 0;
signed long int var_1_38 = 4;
unsigned long int var_1_40 = 128;
unsigned char var_1_42 = 128;
unsigned short int var_1_45 = 256;
signed long int var_1_46 = 5;
unsigned char var_1_47 = 1;
signed short int var_1_49 = 16;
signed long int last_1_var_1_1 = -2;
void initially(void) {
}
void step(void) {
 var_1_19 = ((var_1_20 - var_1_21) - var_1_22);
 signed long int stepLocal_1 = (var_1_26 - var_1_27) + var_1_19;
 if (stepLocal_1 > var_1_22) {
  var_1_25 = ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)));
 } else {
  var_1_25 = ((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))));
 }
 if ((var_1_22 + var_1_22) < var_1_19) {
  var_1_30 = ((((var_1_34) < (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (var_1_34) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))));
 }
 if (var_1_27 <= 100u) {
  if ((var_1_27 - ((((-2) < 0 ) ? -(-2) : (-2)))) == (var_1_10 + -4)) {
   var_1_42 = var_1_27;
  }
 } else {
  var_1_42 = 16;
 }
 if (var_1_35 > var_1_34) {
  var_1_46 = (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) - ((((var_1_27) < (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_27) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))));
 } else {
  if (var_1_35 <= var_1_30) {
   var_1_46 = (var_1_18 - var_1_1);
  } else {
   var_1_46 = var_1_13;
  }
 }
 signed long int stepLocal_0 = var_1_11 - (var_1_12 - var_1_13);
 if ((var_1_25 >> var_1_19) < stepLocal_0) {
  var_1_10 = (var_1_14 + ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))));
 } else {
  var_1_10 = (var_1_17 + var_1_16);
 }
 if (var_1_34 > var_1_30) {
  if (((((32) > (var_1_16)) ? (32) : (var_1_16))) <= var_1_20) {
   var_1_40 = ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)));
  } else {
   var_1_40 = (((((((128u) < (((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13))))) ? (128u) : (((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13)))))) < 0 ) ? -((((128u) < (((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13))))) ? (128u) : (((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13)))))) : ((((128u) < (((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13))))) ? (128u) : (((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13))))))));
  }
 } else {
  var_1_40 = var_1_13;
 }
 if (var_1_10 != var_1_25) {
  var_1_18 = ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12)));
 }
 if (! ((64 * var_1_18) < var_1_18)) {
  var_1_23 = var_1_24;
 }
 var_1_47 = var_1_24;
 if (-8 <= var_1_10) {
  if (var_1_10 == last_1_var_1_1) {
   var_1_1 = ((((((var_1_10 + var_1_19)) < (var_1_19)) ? ((var_1_10 + var_1_19)) : (var_1_19))) + (var_1_10 + var_1_10));
  }
 } else {
  if (128 < var_1_19) {
   var_1_1 = var_1_10;
  } else {
   var_1_1 = var_1_19;
  }
 }
 if ((var_1_1 * var_1_1) < var_1_18) {
  if (var_1_1 < var_1_13) {
   var_1_28 = 64u;
  }
 }
 var_1_36 = var_1_13;
 if (var_1_34 < var_1_30) {
  var_1_38 = (((((((var_1_17) > (((((var_1_11) < (var_1_26)) ? (var_1_11) : (var_1_26))))) ? (var_1_17) : (((((var_1_11) < (var_1_26)) ? (var_1_11) : (var_1_26)))))) < 0 ) ? -((((var_1_17) > (((((var_1_11) < (var_1_26)) ? (var_1_11) : (var_1_26))))) ? (var_1_17) : (((((var_1_11) < (var_1_26)) ? (var_1_11) : (var_1_26)))))) : ((((var_1_17) > (((((var_1_11) < (var_1_26)) ? (var_1_11) : (var_1_26))))) ? (var_1_17) : (((((var_1_11) < (var_1_26)) ? (var_1_11) : (var_1_26))))))));
 }
 var_1_45 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
 var_1_49 = var_1_26;
}
void updateVariables() {
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1073741823);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 16382);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 16383);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32766);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -1);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
}
int property() {
 return (((((((-8 <= var_1_10) ? ((var_1_10 == last_1_var_1_1) ? (var_1_1 == ((signed long int) ((((((var_1_10 + var_1_19)) < (var_1_19)) ? ((var_1_10 + var_1_19)) : (var_1_19))) + (var_1_10 + var_1_10)))) : 1) : ((128 < var_1_19) ? (var_1_1 == ((signed long int) var_1_10)) : (var_1_1 == ((signed long int) var_1_19)))) && (((var_1_25 >> var_1_19) < (var_1_11 - (var_1_12 - var_1_13))) ? (var_1_10 == ((signed char) (var_1_14 + ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))))) : (var_1_10 == ((signed char) (var_1_17 + var_1_16))))) && ((var_1_10 != var_1_25) ? (var_1_18 == ((unsigned long int) ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12))))) : 1)) && (var_1_19 == ((signed short int) ((var_1_20 - var_1_21) - var_1_22)))) && ((! ((64 * var_1_18) < var_1_18)) ? (var_1_23 == ((unsigned char) var_1_24)) : 1)) && ((((var_1_26 - var_1_27) + var_1_19) > var_1_22) ? (var_1_25 == ((signed char) ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) : (var_1_25 == ((signed char) ((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))))))) && (((var_1_1 * var_1_1) < var_1_18) ? ((var_1_1 < var_1_13) ? (var_1_28 == ((unsigned long int) 64u)) : 1) : 1)
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch18Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -1;
float var_1_3 = 32.4;
float var_1_4 = 5.5;
float var_1_5 = 255.475;
unsigned char var_1_7 = 0;
signed char var_1_8 = -5;
signed char var_1_9 = 2;
unsigned char var_1_10 = 16;
unsigned char var_1_11 = 16;
float var_1_12 = 10000000.8;
float var_1_13 = 127.7;
float var_1_14 = 199.2;
float var_1_15 = 999999.5;
signed long int var_1_16 = -8;
signed short int var_1_18 = -8;
double var_1_19 = 5.4;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed char var_1_22 = 1;
signed short int var_1_25 = 32;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned long int var_1_29 = 5;
unsigned long int var_1_30 = 4;
unsigned char var_1_31 = 2;
unsigned char var_1_34 = 5;
unsigned char var_1_35 = 25;
unsigned char var_1_36 = 10;
unsigned short int var_1_37 = 64;
unsigned short int var_1_38 = 16;
signed long int var_1_39 = -50;
signed char last_1_var_1_1 = -1;
unsigned char last_1_var_1_10 = 16;
signed long int last_1_var_1_16 = -8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_16;
 if (var_1_9 < stepLocal_0) {
  if ((var_1_4 - var_1_5) > var_1_3) {
   var_1_10 = 8;
  }
 } else {
  var_1_10 = var_1_11;
 }
 if (var_1_7) {
  var_1_16 = var_1_8;
 } else {
  var_1_16 = (var_1_11 - ((((var_1_10 - var_1_10) < 0 ) ? -(var_1_10 - var_1_10) : (var_1_10 - var_1_10))));
 }
 signed long int stepLocal_2 = last_1_var_1_10;
 if (! (last_1_var_1_1 > last_1_var_1_10)) {
  var_1_19 = ((((var_1_13) > ((((((0.05 + var_1_15)) < (var_1_14)) ? ((0.05 + var_1_15)) : (var_1_14))))) ? (var_1_13) : ((((((0.05 + var_1_15)) < (var_1_14)) ? ((0.05 + var_1_15)) : (var_1_14))))));
 } else {
  if (stepLocal_2 > var_1_9) {
   var_1_19 = var_1_15;
  }
 }
 if (var_1_5 <= (var_1_19 / var_1_3)) {
  var_1_12 = ((((var_1_13) > ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15))));
 } else {
  var_1_12 = var_1_14;
 }
 if ((var_1_12 / var_1_3) > ((var_1_4 - var_1_5) * var_1_19)) {
  if (var_1_7) {
   var_1_1 = var_1_8;
  } else {
   var_1_1 = var_1_9;
  }
 } else {
  var_1_1 = var_1_8;
 }
 signed char stepLocal_1 = var_1_1;
 if (stepLocal_1 >= (var_1_16 + var_1_10)) {
  if (var_1_5 < 999.5f) {
   if (var_1_7) {
    var_1_18 = (var_1_16 + var_1_16);
   } else {
    var_1_18 = var_1_8;
   }
  } else {
   var_1_18 = var_1_9;
  }
 } else {
  var_1_18 = var_1_8;
 }
 var_1_20 = var_1_21;
 if (var_1_1 > ((var_1_16 >> var_1_25) * var_1_10)) {
  var_1_22 = var_1_25;
 }
 if ((-128 >> 10u) >= var_1_18) {
  if (var_1_18 >= (var_1_18 + var_1_25)) {
   var_1_27 = (var_1_21 || var_1_28);
  }
 }
 if (64 >= (10 * var_1_1)) {
  if (var_1_25 <= (var_1_1 >> var_1_30)) {
   var_1_29 = var_1_25;
  } else {
   var_1_29 = var_1_25;
  }
 }
 if (var_1_1 < (var_1_30 & var_1_10)) {
  if ((var_1_19 * var_1_12) < 100.75f) {
   var_1_31 = ((((((var_1_25 + var_1_30)) < (var_1_34)) ? ((var_1_25 + var_1_30)) : (var_1_34))) + ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))));
  }
 }
 if (var_1_16 >= var_1_10) {
  var_1_37 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
 } else {
  var_1_37 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
 }
 if (var_1_18 < var_1_16) {
  var_1_38 = (((((((5) < (var_1_25)) ? (5) : (var_1_25))) < 0 ) ? -((((5) < (var_1_25)) ? (5) : (var_1_25))) : ((((5) < (var_1_25)) ? (5) : (var_1_25)))));
 }
 if (100.75 >= ((((var_1_12 + var_1_19) < 0 ) ? -(var_1_12 + var_1_19) : (var_1_12 + var_1_19)))) {
  var_1_39 = ((((var_1_16) < (var_1_34)) ? (var_1_16) : (var_1_34)));
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 8);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 127);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_16 = var_1_16;
}
int property() {
 return (((((((var_1_12 / var_1_3) > ((var_1_4 - var_1_5) * var_1_19)) ? (var_1_7 ? (var_1_1 == ((signed char) var_1_8)) : (var_1_1 == ((signed char) var_1_9))) : (var_1_1 == ((signed char) var_1_8))) && ((var_1_9 < last_1_var_1_16) ? (((var_1_4 - var_1_5) > var_1_3) ? (var_1_10 == ((unsigned char) 8)) : 1) : (var_1_10 == ((unsigned char) var_1_11)))) && ((var_1_5 <= (var_1_19 / var_1_3)) ? (var_1_12 == ((float) ((((var_1_13) > ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))) : (var_1_12 == ((float) var_1_14)))) && (var_1_7 ? (var_1_16 == ((signed long int) var_1_8)) : (var_1_16 == ((signed long int) (var_1_11 - ((((var_1_10 - var_1_10) < 0 ) ? -(var_1_10 - var_1_10) : (var_1_10 - var_1_10)))))))) && ((var_1_1 >= (var_1_16 + var_1_10)) ? ((var_1_5 < 999.5f) ? (var_1_7 ? (var_1_18 == ((signed short int) (var_1_16 + var_1_16))) : (var_1_18 == ((signed short int) var_1_8))) : (var_1_18 == ((signed short int) var_1_9))) : (var_1_18 == ((signed short int) var_1_8)))) && ((! (last_1_var_1_1 > last_1_var_1_10)) ? (var_1_19 == ((double) ((((var_1_13) > ((((((0.05 + var_1_15)) < (var_1_14)) ? ((0.05 + var_1_15)) : (var_1_14))))) ? (var_1_13) : ((((((0.05 + var_1_15)) < (var_1_14)) ? ((0.05 + var_1_15)) : (var_1_14)))))))) : ((last_1_var_1_10 > var_1_9) ? (var_1_19 == ((double) var_1_15)) : 1))
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

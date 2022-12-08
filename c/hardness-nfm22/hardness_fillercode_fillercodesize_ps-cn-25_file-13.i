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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13PS_CN_25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
signed char var_1_4 = 16;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 64;
signed char var_1_12 = -10;
signed char var_1_13 = -10;
signed char var_1_14 = -25;
double var_1_15 = 64.875;
double var_1_17 = 1.625;
double var_1_18 = 32.2;
double var_1_19 = 8.6;
double var_1_20 = 10.5;
signed short int var_1_21 = -64;
unsigned char var_1_22 = 25;
unsigned char var_1_23 = 0;
unsigned long int var_1_24 = 5;
double var_1_25 = 0.75;
double var_1_26 = 99999999999999.5;
unsigned char var_1_27 = 4;
unsigned char var_1_28 = 64;
signed long int var_1_29 = 128;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 4;
signed long int var_1_33 = -256;
signed short int var_1_34 = 100;
double var_1_35 = 2.75;
double var_1_36 = -0.4;
double var_1_37 = 5.25;
signed short int last_1_var_1_21 = -64;
unsigned char last_1_var_1_22 = 25;
void initially(void) {
}
void step(void) {
 var_1_25 = var_1_26;
 var_1_27 = var_1_28;
 if (var_1_30) {
  if (var_1_31) {
   if ((var_1_27 % var_1_32) != var_1_28) {
    var_1_29 = (var_1_33 + var_1_28);
   } else {
    var_1_29 = ((((var_1_28) < (var_1_27)) ? (var_1_28) : (var_1_27)));
   }
  } else {
   if (var_1_27 < (var_1_32 % 10)) {
    var_1_29 = var_1_27;
   }
  }
 }
 if (var_1_26 >= (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) + var_1_35)) {
  var_1_34 = var_1_27;
 }
 if (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) >= (var_1_35 * var_1_37)) {
  var_1_36 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 } else {
  var_1_36 = 10.2;
 }
 signed long int stepLocal_1 = ~ last_1_var_1_21;
 unsigned char stepLocal_0 = var_1_5;
 if (stepLocal_1 != (last_1_var_1_22 >> var_1_4)) {
  if (stepLocal_0 || var_1_6) {
   var_1_1 = var_1_4;
  } else {
   var_1_1 = last_1_var_1_22;
  }
 } else {
  var_1_1 = 100;
 }
 if (var_1_9) {
  var_1_8 = (var_1_10 - (var_1_11 - var_1_4));
 }
 unsigned short int stepLocal_3 = var_1_1;
 if (var_1_4 > stepLocal_3) {
  var_1_15 = ((var_1_17 - var_1_18) + (((((var_1_19) > (499.25)) ? (var_1_19) : (499.25))) + var_1_20));
 } else {
  var_1_15 = var_1_17;
 }
 if (((- var_1_11) < 8) || var_1_9) {
  var_1_22 = (var_1_4 + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))));
 }
 var_1_23 = (var_1_11 + var_1_4);
 if (var_1_18 <= var_1_20) {
  var_1_24 = ((((var_1_8) < ((var_1_8 + var_1_11))) ? (var_1_8) : ((var_1_8 + var_1_11))));
 } else {
  if (9.99999999999998E13 < var_1_20) {
   var_1_24 = var_1_1;
  }
 }
 if (var_1_6 || var_1_9) {
  if ((var_1_24 % var_1_10) > var_1_22) {
   var_1_21 = (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + var_1_14);
  }
 }
 signed short int stepLocal_2 = var_1_21;
 if (var_1_10 > stepLocal_2) {
  var_1_12 = ((var_1_4 + var_1_13) + var_1_14);
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 63);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -31);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -230584.3009213691390e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -230584.3009213691390e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691390e+12F && var_1_20 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 254);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 255);
 assume_abort_if_not(var_1_32 != 0);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -1073741823);
 assume_abort_if_not(var_1_33 <= 1073741823);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_21 = var_1_21;
 last_1_var_1_22 = var_1_22;
}
int property() {
 return (((((((((~ last_1_var_1_21) != (last_1_var_1_22 >> var_1_4)) ? ((var_1_5 || var_1_6) ? (var_1_1 == ((unsigned short int) var_1_4)) : (var_1_1 == ((unsigned short int) last_1_var_1_22))) : (var_1_1 == ((unsigned short int) 100))) && (var_1_9 ? (var_1_8 == ((unsigned char) (var_1_10 - (var_1_11 - var_1_4)))) : 1)) && ((var_1_10 > var_1_21) ? (var_1_12 == ((signed char) ((var_1_4 + var_1_13) + var_1_14))) : 1)) && ((var_1_4 > var_1_1) ? (var_1_15 == ((double) ((var_1_17 - var_1_18) + (((((var_1_19) > (499.25)) ? (var_1_19) : (499.25))) + var_1_20)))) : (var_1_15 == ((double) var_1_17)))) && ((var_1_6 || var_1_9) ? (((var_1_24 % var_1_10) > var_1_22) ? (var_1_21 == ((signed short int) (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + var_1_14))) : 1) : 1)) && ((((- var_1_11) < 8) || var_1_9) ? (var_1_22 == ((unsigned char) (var_1_4 + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) : 1)) && (var_1_23 == ((unsigned char) (var_1_11 + var_1_4)))) && ((var_1_18 <= var_1_20) ? (var_1_24 == ((unsigned long int) ((((var_1_8) < ((var_1_8 + var_1_11))) ? (var_1_8) : ((var_1_8 + var_1_11)))))) : ((9.99999999999998E13 < var_1_20) ? (var_1_24 == ((unsigned long int) var_1_1)) : 1))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch70PS_CN_25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 5.05;
double var_1_6 = 0.0;
double var_1_7 = 49.5;
double var_1_8 = 16.75;
unsigned short int var_1_9 = 1;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 50;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 32;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 3876014737;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 25;
unsigned short int var_1_22 = 5;
unsigned short int var_1_23 = 8;
signed long int var_1_24 = 0;
unsigned short int var_1_25 = 5;
unsigned short int var_1_26 = 1;
unsigned long int var_1_27 = 16;
unsigned short int var_1_30 = 50;
signed long int var_1_31 = 1000;
float var_1_32 = 32.5;
double var_1_33 = 9999999999.2;
double var_1_34 = 5.5;
double var_1_35 = 4.25;
signed long int var_1_36 = 2;
double last_1_var_1_1 = 5.05;
unsigned short int last_1_var_1_9 = 1;
unsigned long int last_1_var_1_11 = 8;
unsigned char last_1_var_1_14 = 32;
unsigned char last_1_var_1_20 = 0;
void initially(void) {
}
void step(void) {
 if (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) > var_1_24) {
  var_1_21 = (((((10 + var_1_25)) < (var_1_26)) ? ((10 + var_1_25)) : (var_1_26)));
 }
 if (var_1_25 < (- var_1_23)) {
  if (var_1_22 > var_1_30) {
   var_1_27 = 32u;
  }
 }
 var_1_31 = var_1_30;
 var_1_32 = 256.25f;
 if (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) <= var_1_30) {
  var_1_33 = ((((((((5.8) > (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (5.8) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))))) > (var_1_35)) ? (((((5.8) > (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (5.8) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))))) : (var_1_35)));
 }
 if (var_1_23 > (var_1_24 + (var_1_21 | 100))) {
  var_1_36 = var_1_25;
 }
 if (var_1_13) {
  var_1_18 = ((var_1_19 - last_1_var_1_9) - last_1_var_1_11);
 } else {
  var_1_18 = (((((var_1_19 - var_1_17)) > (var_1_15)) ? ((var_1_19 - var_1_17)) : (var_1_15)));
 }
 if (var_1_6 > ((((var_1_8) < (last_1_var_1_1)) ? (var_1_8) : (last_1_var_1_1)))) {
  if (! ((last_1_var_1_1 == var_1_7) && (last_1_var_1_20 || last_1_var_1_20))) {
   if (! (var_1_6 <= var_1_7)) {
    var_1_9 = ((((last_1_var_1_14) < (last_1_var_1_14)) ? (last_1_var_1_14) : (last_1_var_1_14)));
   }
  } else {
   var_1_9 = last_1_var_1_14;
  }
 }
 if ((8 - 64) <= (var_1_9 - var_1_9)) {
  var_1_14 = (((((var_1_15 + var_1_16)) < (var_1_17)) ? ((var_1_15 + var_1_16)) : (var_1_17)));
 } else {
  var_1_14 = var_1_17;
 }
 signed long int stepLocal_0 = - ((((var_1_9) < (var_1_9)) ? (var_1_9) : (var_1_9)));
 if (var_1_18 >= stepLocal_0) {
  var_1_1 = (((var_1_6 - var_1_7) - ((((64.75) > (128.725)) ? (64.75) : (128.725)))) + var_1_8);
 } else {
  var_1_1 = var_1_7;
 }
 if ((var_1_14 / var_1_19) <= ((((var_1_18) < (var_1_14)) ? (var_1_18) : (var_1_14)))) {
  var_1_20 = var_1_13;
 }
 if (var_1_20) {
  var_1_12 = var_1_13;
 }
 var_1_11 = (var_1_9 + (((((var_1_18) < (var_1_9)) ? (var_1_18) : (var_1_9))) + 2u));
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 2305843.009213691390e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691390e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 3221225470);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 65535);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65535);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 65535);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((var_1_18 >= (- ((((var_1_9) < (var_1_9)) ? (var_1_9) : (var_1_9))))) ? (var_1_1 == ((double) (((var_1_6 - var_1_7) - ((((64.75) > (128.725)) ? (64.75) : (128.725)))) + var_1_8))) : (var_1_1 == ((double) var_1_7))) && ((var_1_6 > ((((var_1_8) < (last_1_var_1_1)) ? (var_1_8) : (last_1_var_1_1)))) ? ((! ((last_1_var_1_1 == var_1_7) && (last_1_var_1_20 || last_1_var_1_20))) ? ((! (var_1_6 <= var_1_7)) ? (var_1_9 == ((unsigned short int) ((((last_1_var_1_14) < (last_1_var_1_14)) ? (last_1_var_1_14) : (last_1_var_1_14))))) : 1) : (var_1_9 == ((unsigned short int) last_1_var_1_14))) : 1)) && (var_1_11 == ((unsigned long int) (var_1_9 + (((((var_1_18) < (var_1_9)) ? (var_1_18) : (var_1_9))) + 2u))))) && (var_1_20 ? (var_1_12 == ((unsigned char) var_1_13)) : 1)) && (((8 - 64) <= (var_1_9 - var_1_9)) ? (var_1_14 == ((unsigned char) (((((var_1_15 + var_1_16)) < (var_1_17)) ? ((var_1_15 + var_1_16)) : (var_1_17))))) : (var_1_14 == ((unsigned char) var_1_17)))) && (var_1_13 ? (var_1_18 == ((unsigned long int) ((var_1_19 - last_1_var_1_9) - last_1_var_1_11))) : (var_1_18 == ((unsigned long int) (((((var_1_19 - var_1_17)) > (var_1_15)) ? ((var_1_19 - var_1_17)) : (var_1_15))))))) && (((var_1_14 / var_1_19) <= ((((var_1_18) < (var_1_14)) ? (var_1_18) : (var_1_14)))) ? (var_1_20 == ((unsigned char) var_1_13)) : 1)
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

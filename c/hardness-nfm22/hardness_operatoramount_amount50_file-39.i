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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch39Amount50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -1;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 8;
signed short int var_1_8 = 4;
unsigned long int var_1_9 = 256;
unsigned long int var_1_10 = 10;
unsigned long int var_1_11 = 3084274888;
unsigned long int var_1_13 = 50;
signed long int var_1_14 = -10;
unsigned char var_1_16 = 0;
float var_1_19 = 4.5;
float var_1_20 = 15.375;
float var_1_21 = 32.725;
float var_1_22 = 63.5;
float var_1_23 = 16.375;
signed char var_1_24 = -32;
signed char var_1_25 = 0;
unsigned short int var_1_26 = 64;
unsigned long int last_1_var_1_9 = 256;
unsigned long int last_1_var_1_10 = 10;
signed long int last_1_var_1_14 = -10;
signed char last_1_var_1_24 = -32;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = (last_1_var_1_10 + last_1_var_1_14) ^ last_1_var_1_10;
 if (stepLocal_0 < (last_1_var_1_24 | -4)) {
  var_1_1 = (var_1_7 - var_1_8);
 } else {
  var_1_1 = (last_1_var_1_10 + -16);
 }
 var_1_24 = var_1_25;
 var_1_26 = var_1_8;
 if (var_1_26 >= var_1_7) {
  if (var_1_1 > var_1_11) {
   if (var_1_6 && var_1_16) {
    var_1_14 = (var_1_7 - (var_1_26 + var_1_8));
   } else {
    var_1_14 = var_1_26;
   }
  }
 } else {
  var_1_14 = var_1_24;
 }
 var_1_10 = ((((((((var_1_11 - var_1_8) < 0 ) ? -(var_1_11 - var_1_8) : (var_1_11 - var_1_8)))) < (((((0u) > (var_1_26)) ? (0u) : (var_1_26))))) ? (((((var_1_11 - var_1_8) < 0 ) ? -(var_1_11 - var_1_8) : (var_1_11 - var_1_8)))) : (((((0u) > (var_1_26)) ? (0u) : (var_1_26))))));
 unsigned long int stepLocal_3 = var_1_8 / (1u + 16u);
 unsigned long int stepLocal_2 = var_1_11;
 if (var_1_26 < stepLocal_3) {
  if (stepLocal_2 > (var_1_26 + 5u)) {
   var_1_13 = ((((var_1_26) > (var_1_11)) ? (var_1_26) : (var_1_11)));
  } else {
   var_1_13 = 5u;
  }
 } else {
  var_1_13 = var_1_8;
 }
 signed short int stepLocal_4 = var_1_8;
 if (stepLocal_4 <= var_1_13) {
  var_1_19 = (((((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) + var_1_22)) > (var_1_23)) ? ((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) + var_1_22)) : (var_1_23)));
 } else {
  var_1_19 = var_1_22;
 }
 unsigned long int stepLocal_1 = var_1_10;
 if (stepLocal_1 >= ((((var_1_1) < (last_1_var_1_9)) ? (var_1_1) : (last_1_var_1_9)))) {
  if (var_1_6) {
   var_1_9 = var_1_8;
  }
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -127);
 assume_abort_if_not(var_1_25 <= 126);
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_24 = var_1_24;
}
int property() {
 return ((((((((((last_1_var_1_10 + last_1_var_1_14) ^ last_1_var_1_10) < (last_1_var_1_24 | -4)) ? (var_1_1 == ((signed short int) (var_1_7 - var_1_8))) : (var_1_1 == ((signed short int) (last_1_var_1_10 + -16)))) && ((var_1_10 >= ((((var_1_1) < (last_1_var_1_9)) ? (var_1_1) : (last_1_var_1_9)))) ? (var_1_6 ? (var_1_9 == ((unsigned long int) var_1_8)) : 1) : 1)) && (var_1_10 == ((unsigned long int) ((((((((var_1_11 - var_1_8) < 0 ) ? -(var_1_11 - var_1_8) : (var_1_11 - var_1_8)))) < (((((0u) > (var_1_26)) ? (0u) : (var_1_26))))) ? (((((var_1_11 - var_1_8) < 0 ) ? -(var_1_11 - var_1_8) : (var_1_11 - var_1_8)))) : (((((0u) > (var_1_26)) ? (0u) : (var_1_26))))))))) && ((var_1_26 < (var_1_8 / (1u + 16u))) ? ((var_1_11 > (var_1_26 + 5u)) ? (var_1_13 == ((unsigned long int) ((((var_1_26) > (var_1_11)) ? (var_1_26) : (var_1_11))))) : (var_1_13 == ((unsigned long int) 5u))) : (var_1_13 == ((unsigned long int) var_1_8)))) && ((var_1_26 >= var_1_7) ? ((var_1_1 > var_1_11) ? ((var_1_6 && var_1_16) ? (var_1_14 == ((signed long int) (var_1_7 - (var_1_26 + var_1_8)))) : (var_1_14 == ((signed long int) var_1_26))) : 1) : (var_1_14 == ((signed long int) var_1_24)))) && ((var_1_8 <= var_1_13) ? (var_1_19 == ((float) (((((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) + var_1_22)) > (var_1_23)) ? ((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) + var_1_22)) : (var_1_23))))) : (var_1_19 == ((float) var_1_22)))) && (var_1_24 == ((signed char) var_1_25))) && (var_1_26 == ((unsigned short int) var_1_8))
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

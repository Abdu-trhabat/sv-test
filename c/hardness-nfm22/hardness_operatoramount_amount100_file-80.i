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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 0.8;
float var_1_6 = 16.375;
float var_1_7 = 0.25;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 128;
double var_1_13 = 255.5;
double var_1_14 = 0.0;
double var_1_15 = 0.0;
double var_1_16 = 100.3;
unsigned long int var_1_17 = 32;
unsigned short int var_1_19 = 100;
double var_1_21 = 10000000000.5;
double var_1_22 = 32.2;
signed short int var_1_23 = -2;
signed char var_1_24 = 32;
signed char var_1_25 = 10;
signed char var_1_26 = -128;
double var_1_27 = 5.8;
unsigned short int var_1_28 = 16;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned long int var_1_33 = 256;
unsigned char var_1_34 = 0;
float var_1_35 = 3.625;
float var_1_36 = 9.8;
unsigned char var_1_37 = 4;
unsigned long int last_1_var_1_17 = 32;
double last_1_var_1_22 = 32.2;
double last_1_var_1_27 = 5.8;
unsigned char last_1_var_1_37 = 4;
void initially(void) {
}
void step(void) {
 if ((- last_1_var_1_27) < var_1_7) {
  var_1_21 = 0.19999999999999996;
 } else {
  var_1_21 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 }
 if (((((8.25) < (last_1_var_1_22)) ? (8.25) : (last_1_var_1_22))) >= (var_1_15 * var_1_16)) {
  var_1_28 = ((var_1_25 + (100 + 64)) + last_1_var_1_37);
 } else {
  var_1_28 = last_1_var_1_37;
 }
 if (var_1_9) {
  var_1_11 = 0u;
 } else {
  if (var_1_10) {
   var_1_11 = ((((8u + var_1_28) < 0 ) ? -(8u + var_1_28) : (8u + var_1_28)));
  } else {
   if (var_1_6 < 127.5f) {
    var_1_11 = var_1_28;
   }
  }
 }
 if (var_1_9) {
  var_1_30 = (! var_1_31);
 }
 var_1_35 = var_1_16;
 var_1_36 = var_1_14;
 var_1_37 = var_1_25;
 unsigned char stepLocal_3 = var_1_37;
 if (var_1_28 <= stepLocal_3) {
  var_1_19 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
 } else {
  var_1_19 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
 }
 unsigned long int stepLocal_0 = 1u;
 if (((((var_1_7) < (var_1_35)) ? (var_1_7) : (var_1_35))) <= var_1_6) {
  if (stepLocal_0 < var_1_37) {
   var_1_8 = (var_1_9 && var_1_10);
  }
 }
 signed long int stepLocal_4 = (var_1_24 - var_1_25) / ((((var_1_26) < (4)) ? (var_1_26) : (4)));
 if (stepLocal_4 > var_1_37) {
  var_1_23 = var_1_24;
 }
 signed long int stepLocal_2 = var_1_19 - var_1_19;
 if (var_1_9) {
  if (var_1_10) {
   if (((last_1_var_1_17 / -64) << var_1_11) >= stepLocal_2) {
    var_1_17 = var_1_19;
   }
  } else {
   var_1_17 = var_1_19;
  }
 } else {
  var_1_17 = 2u;
 }
 if ((var_1_37 ^ (4u / var_1_33)) != var_1_17) {
  var_1_32 = ((99.6f != var_1_7) || var_1_10);
 } else {
  var_1_32 = (var_1_31 || var_1_34);
 }
 if (((~ var_1_17) + (var_1_19 + var_1_37)) <= var_1_23) {
  var_1_1 = (var_1_6 - var_1_7);
 }
 signed long int stepLocal_5 = var_1_19 + var_1_37;
 if (var_1_28 != stepLocal_5) {
  if (var_1_1 < var_1_21) {
   var_1_27 = (var_1_15 - var_1_16);
  }
 }
 if (((var_1_16 * var_1_6) > var_1_15) && var_1_32) {
  var_1_22 = var_1_6;
 } else {
  var_1_22 = ((((var_1_15) < (var_1_7)) ? (var_1_15) : (var_1_7)));
 }
 unsigned short int stepLocal_1 = var_1_28;
 if (var_1_7 != (var_1_27 * var_1_6)) {
  var_1_13 = ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_16) - var_1_7);
 } else {
  if (var_1_28 > stepLocal_1) {
   var_1_13 = 10.6;
  } else {
   var_1_13 = var_1_15;
  }
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 4611686.018427382800e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 4611686.018427382800e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -1);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -128);
 assume_abort_if_not(var_1_26 <= 127);
 assume_abort_if_not(var_1_26 != 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 4294967295);
 assume_abort_if_not(var_1_33 != 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
}
void updateLastVariables() {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_37 = var_1_37;
}
int property() {
 return ((((((((((((((((((~ var_1_17) + (var_1_19 + var_1_37)) <= var_1_23) ? (var_1_1 == ((float) (var_1_6 - var_1_7))) : 1) && ((((((var_1_7) < (var_1_35)) ? (var_1_7) : (var_1_35))) <= var_1_6) ? ((1u < var_1_37) ? (var_1_8 == ((unsigned char) (var_1_9 && var_1_10))) : 1) : 1)) && (var_1_9 ? (var_1_11 == ((unsigned long int) 0u)) : (var_1_10 ? (var_1_11 == ((unsigned long int) ((((8u + var_1_28) < 0 ) ? -(8u + var_1_28) : (8u + var_1_28))))) : ((var_1_6 < 127.5f) ? (var_1_11 == ((unsigned long int) var_1_28)) : 1)))) && ((var_1_7 != (var_1_27 * var_1_6)) ? (var_1_13 == ((double) ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_16) - var_1_7))) : ((var_1_28 > var_1_28) ? (var_1_13 == ((double) 10.6)) : (var_1_13 == ((double) var_1_15))))) && (var_1_9 ? (var_1_10 ? ((((last_1_var_1_17 / -64) << var_1_11) >= (var_1_19 - var_1_19)) ? (var_1_17 == ((unsigned long int) var_1_19)) : 1) : (var_1_17 == ((unsigned long int) var_1_19))) : (var_1_17 == ((unsigned long int) 2u)))) && ((var_1_28 <= var_1_37) ? (var_1_19 == ((unsigned short int) ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) : (var_1_19 == ((unsigned short int) ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))))) && (((- last_1_var_1_27) < var_1_7) ? (var_1_21 == ((double) 0.19999999999999996)) : (var_1_21 == ((double) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))) && ((((var_1_16 * var_1_6) > var_1_15) && var_1_32) ? (var_1_22 == ((double) var_1_6)) : (var_1_22 == ((double) ((((var_1_15) < (var_1_7)) ? (var_1_15) : (var_1_7))))))) && ((((var_1_24 - var_1_25) / ((((var_1_26) < (4)) ? (var_1_26) : (4)))) > var_1_37) ? (var_1_23 == ((signed short int) var_1_24)) : 1)) && ((var_1_28 != (var_1_19 + var_1_37)) ? ((var_1_1 < var_1_21) ? (var_1_27 == ((double) (var_1_15 - var_1_16))) : 1) : 1)) && ((((((8.25) < (last_1_var_1_22)) ? (8.25) : (last_1_var_1_22))) >= (var_1_15 * var_1_16)) ? (var_1_28 == ((unsigned short int) ((var_1_25 + (100 + 64)) + last_1_var_1_37))) : (var_1_28 == ((unsigned short int) last_1_var_1_37)))) && (var_1_9 ? (var_1_30 == ((unsigned char) (! var_1_31))) : 1)) && (((var_1_37 ^ (4u / var_1_33)) != var_1_17) ? (var_1_32 == ((unsigned char) ((99.6f != var_1_7) || var_1_10))) : (var_1_32 == ((unsigned char) (var_1_31 || var_1_34))))) && (var_1_35 == ((float) var_1_16))) && (var_1_36 == ((float) var_1_14))) && (var_1_37 == ((unsigned char) var_1_25))
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

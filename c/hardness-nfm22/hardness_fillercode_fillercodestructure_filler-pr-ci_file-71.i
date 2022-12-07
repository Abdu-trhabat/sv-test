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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed char var_1_4 = -1;
signed char var_1_5 = 4;
unsigned short int var_1_9 = 35831;
float var_1_10 = 1.875;
float var_1_11 = 5.8;
float var_1_12 = 2.375;
float var_1_13 = 999999999999.75;
signed short int var_1_14 = 32;
signed short int var_1_15 = 25;
signed short int var_1_16 = 23809;
signed short int var_1_17 = 2;
float var_1_18 = 499.25;
signed long int var_1_19 = -4;
unsigned short int var_1_20 = 10;
unsigned short int var_1_21 = 16;
signed char var_1_22 = -10;
signed char var_1_23 = 25;
signed char var_1_24 = 4;
float var_1_25 = 3.5;
float var_1_26 = 0.94;
float var_1_27 = 32.5;
signed char var_1_34 = 5;
signed char var_1_35 = -4;
signed char var_1_36 = 4;
signed long int var_1_37 = 2;
signed short int var_1_41 = 128;
double var_1_42 = 32.75;
unsigned char var_1_43 = 0;
unsigned char var_1_45 = 0;
signed char var_1_46 = -1;
signed char var_1_47 = 25;
signed char var_1_48 = 25;
unsigned long int var_1_49 = 5;
signed char var_1_50 = 25;
float last_1_var_1_12 = 2.375;
signed short int last_1_var_1_14 = 32;
unsigned short int last_1_var_1_20 = 10;
unsigned short int last_1_var_1_21 = 16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = var_1_4 - var_1_5;
 if (var_1_2) {
  if (stepLocal_0 > ((last_1_var_1_14 + last_1_var_1_20) * last_1_var_1_21)) {
   var_1_1 = (var_1_9 - var_1_5);
  }
 } else {
  if (var_1_3) {
   var_1_1 = 32;
  } else {
   var_1_1 = var_1_5;
  }
 }
 unsigned short int stepLocal_2 = var_1_1;
 if (! (var_1_5 < var_1_1)) {
  if (last_1_var_1_14 >= stepLocal_2) {
   var_1_14 = (((((128) < (((((2) < (var_1_4)) ? (2) : (var_1_4))))) ? (128) : (((((2) < (var_1_4)) ? (2) : (var_1_4)))))) + var_1_5);
  } else {
   var_1_14 = ((var_1_5 - var_1_15) + var_1_4);
  }
 } else {
  var_1_14 = ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : ((var_1_15 - (var_1_16 - var_1_17)))));
 }
 var_1_41 = -100;
 if (var_1_2 || var_1_2) {
  if (var_1_2) {
   var_1_43 = var_1_45;
  }
 }
 if (var_1_17 < ((((var_1_9) < (var_1_36)) ? (var_1_9) : (var_1_36)))) {
  if (var_1_45) {
   var_1_50 = var_1_23;
  }
 }
 var_1_10 = var_1_11;
 signed char stepLocal_1 = var_1_4;
 if (last_1_var_1_12 >= ((var_1_11 / var_1_13) / 31.9f)) {
  if (var_1_14 > stepLocal_1) {
   var_1_12 = var_1_11;
  } else {
   var_1_12 = var_1_11;
  }
 }
 var_1_18 = ((((((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) > (5.5f)) ? (((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) : (5.5f)));
 if (var_1_3) {
  var_1_46 = ((((var_1_36 - var_1_47) < 0 ) ? -(var_1_36 - var_1_47) : (var_1_36 - var_1_47)));
 } else {
  var_1_46 = (var_1_47 - ((((var_1_36) < (var_1_48)) ? (var_1_36) : (var_1_48))));
 }
 var_1_20 = var_1_15;
 var_1_42 = 8.25;
 var_1_21 = var_1_5;
 if ((var_1_4 * ((((var_1_16) < (var_1_47)) ? (var_1_16) : (var_1_47)))) < var_1_16) {
  var_1_49 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 }
 var_1_22 = var_1_23;
 if ((var_1_21 % ((((var_1_16) < (var_1_16)) ? (var_1_16) : (var_1_16)))) <= var_1_1) {
  if ((var_1_36 <= var_1_21) || var_1_2) {
   var_1_37 = var_1_14;
  } else {
   var_1_37 = var_1_34;
  }
 }
 if (var_1_3) {
  var_1_19 = ((((var_1_17) > ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21)))))) ? (var_1_17) : ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21)))))));
 } else {
  var_1_19 = var_1_5;
 }
 if ((((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_27) <= (var_1_13 + var_1_11)) {
  if (((((var_1_4) > ((var_1_20 / var_1_9))) ? (var_1_4) : ((var_1_20 / var_1_9)))) < var_1_5) {
   var_1_24 = ((var_1_34 + var_1_35) + ((((var_1_36 - 50) < 0 ) ? -(var_1_36 - 50) : (var_1_36 - 50))));
  }
 } else {
  var_1_24 = (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))));
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -31);
 assume_abort_if_not(var_1_34 <= 32);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -31);
 assume_abort_if_not(var_1_35 <= 31);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 126);
}
void updateLastVariables() {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
}
int property() {
 return ((((((((var_1_2 ? (((var_1_4 - var_1_5) > ((last_1_var_1_14 + last_1_var_1_20) * last_1_var_1_21)) ? (var_1_1 == ((unsigned short int) (var_1_9 - var_1_5))) : 1) : (var_1_3 ? (var_1_1 == ((unsigned short int) 32)) : (var_1_1 == ((unsigned short int) var_1_5)))) && (var_1_10 == ((float) var_1_11))) && ((last_1_var_1_12 >= ((var_1_11 / var_1_13) / 31.9f)) ? ((var_1_14 > var_1_4) ? (var_1_12 == ((float) var_1_11)) : (var_1_12 == ((float) var_1_11))) : 1)) && ((! (var_1_5 < var_1_1)) ? ((last_1_var_1_14 >= var_1_1) ? (var_1_14 == ((signed short int) (((((128) < (((((2) < (var_1_4)) ? (2) : (var_1_4))))) ? (128) : (((((2) < (var_1_4)) ? (2) : (var_1_4)))))) + var_1_5))) : (var_1_14 == ((signed short int) ((var_1_5 - var_1_15) + var_1_4)))) : (var_1_14 == ((signed short int) ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : ((var_1_15 - (var_1_16 - var_1_17))))))))) && (var_1_18 == ((float) ((((((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) > (5.5f)) ? (((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) : (5.5f)))))) && (var_1_3 ? (var_1_19 == ((signed long int) ((((var_1_17) > ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21)))))) ? (var_1_17) : ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21))))))))) : (var_1_19 == ((signed long int) var_1_5)))) && (var_1_20 == ((unsigned short int) var_1_15))) && (var_1_21 == ((unsigned short int) var_1_5))) && (var_1_22 == ((signed char) var_1_23))
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

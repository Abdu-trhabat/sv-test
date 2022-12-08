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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 128.25;
float var_1_4 = 63.4;
float var_1_5 = 15.5;
float var_1_6 = 100.75;
signed long int var_1_8 = -16;
double var_1_11 = 1.625;
double var_1_12 = 16.4;
double var_1_13 = 7.38;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed short int var_1_16 = 256;
unsigned long int var_1_17 = 8;
unsigned long int var_1_18 = 2670311060;
signed char var_1_19 = -32;
signed char var_1_20 = 50;
signed char var_1_21 = 64;
signed char var_1_22 = 0;
unsigned long int var_1_23 = 1;
signed short int var_1_24 = 21669;
double var_1_25 = 63.6;
double var_1_26 = 2.5;
double var_1_27 = 999999999999999.1;
unsigned char var_1_28 = 64;
unsigned char var_1_29 = 4;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 64;
signed char var_1_32 = -32;
signed char var_1_33 = 0;
signed char var_1_34 = 16;
signed char var_1_35 = 32;
float last_1_var_1_1 = 128.25;
signed long int last_1_var_1_8 = -16;
signed short int last_1_var_1_16 = 256;
unsigned long int last_1_var_1_17 = 8;
unsigned long int last_1_var_1_23 = 1;
unsigned char last_1_var_1_29 = 4;
signed char last_1_var_1_32 = -32;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_4 = last_1_var_1_32;
 unsigned long int stepLocal_3 = 128u;
 if ((last_1_var_1_8 * ((((var_1_21) > (last_1_var_1_29)) ? (var_1_21) : (last_1_var_1_29)))) >= stepLocal_4) {
  if (var_1_18 <= stepLocal_3) {
   if (var_1_4 == ((((var_1_5) < (last_1_var_1_1)) ? (var_1_5) : (last_1_var_1_1)))) {
    var_1_28 = var_1_22;
   } else {
    var_1_28 = var_1_22;
   }
  } else {
   var_1_28 = var_1_21;
  }
 } else {
  var_1_28 = var_1_22;
 }
 var_1_17 = (var_1_18 - var_1_28);
 unsigned long int stepLocal_5 = var_1_20 + last_1_var_1_23;
 if (stepLocal_5 <= var_1_21) {
  var_1_29 = (((((((((var_1_30 - var_1_21)) < (var_1_22)) ? ((var_1_30 - var_1_21)) : (var_1_22)))) > ((1 + var_1_31))) ? ((((((var_1_30 - var_1_21)) < (var_1_22)) ? ((var_1_30 - var_1_21)) : (var_1_22)))) : ((1 + var_1_31))));
 }
 signed long int stepLocal_7 = (((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31));
 signed long int stepLocal_6 = last_1_var_1_8 / var_1_24;
 if (128 >= stepLocal_7) {
  if (stepLocal_6 < (((((last_1_var_1_17 | var_1_20)) > (last_1_var_1_16)) ? ((last_1_var_1_17 | var_1_20)) : (last_1_var_1_16)))) {
   var_1_32 = (((var_1_33 + var_1_34) + var_1_22) - ((((var_1_21) < (var_1_35)) ? (var_1_21) : (var_1_35))));
  } else {
   var_1_32 = var_1_34;
  }
 } else {
  var_1_32 = var_1_21;
 }
 if (var_1_5 <= var_1_13) {
  var_1_16 = var_1_32;
 } else {
  var_1_16 = (var_1_32 - 4);
 }
 if (var_1_5 > var_1_4) {
  var_1_11 = (var_1_5 - (var_1_6 + ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))));
 }
 var_1_19 = (var_1_20 - (var_1_21 - var_1_22));
 unsigned char stepLocal_0 = var_1_29;
 if (var_1_11 <= ((((49.4f) > (var_1_5)) ? (49.4f) : (var_1_5)))) {
  if (var_1_6 <= var_1_11) {
   if ((((((var_1_32) > (var_1_19)) ? (var_1_32) : (var_1_19))) * var_1_19) <= stepLocal_0) {
    var_1_8 = var_1_32;
   } else {
    var_1_8 = var_1_19;
   }
  } else {
   var_1_8 = var_1_32;
  }
 } else {
  var_1_8 = var_1_19;
 }
 if (((((7.2) > (10.86)) ? (7.2) : (10.86))) >= (var_1_12 - var_1_5)) {
  var_1_23 = ((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)));
 } else {
  if (var_1_19 >= ((var_1_24 - var_1_8) - ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) {
   var_1_23 = var_1_22;
  } else {
   var_1_23 = var_1_29;
  }
 }
 unsigned long int stepLocal_1 = (((var_1_16) < ((var_1_29 - var_1_23))) ? (var_1_16) : ((var_1_29 - var_1_23)));
 if (stepLocal_1 >= var_1_32) {
  var_1_14 = var_1_15;
 }
 if (var_1_28 <= var_1_19) {
  var_1_1 = ((((var_1_4 + (var_1_5 - var_1_6)) < 0 ) ? -(var_1_4 + (var_1_5 - var_1_6)) : (var_1_4 + (var_1_5 - var_1_6))));
 } else {
  if (var_1_14) {
   var_1_1 = ((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5)));
  }
 }
 unsigned char stepLocal_2 = var_1_28;
 if (stepLocal_2 >= var_1_32) {
  var_1_25 = ((var_1_26 + var_1_27) + var_1_13);
 } else {
  if (var_1_1 >= var_1_11) {
   var_1_25 = var_1_4;
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 2147483647);
 assume_abort_if_not(var_1_18 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 63);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 16383);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -230584.3009213691390e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691390e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -230584.3009213691390e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691390e+12F && var_1_27 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 127);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 31);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 126);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_32 = var_1_32;
}
int property() {
 return ((((((((((((var_1_28 <= var_1_19) ? (var_1_1 == ((float) ((((var_1_4 + (var_1_5 - var_1_6)) < 0 ) ? -(var_1_4 + (var_1_5 - var_1_6)) : (var_1_4 + (var_1_5 - var_1_6)))))) : (var_1_14 ? (var_1_1 == ((float) ((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))))) : 1)) && ((var_1_11 <= ((((49.4f) > (var_1_5)) ? (49.4f) : (var_1_5)))) ? ((var_1_6 <= var_1_11) ? (((((((var_1_32) > (var_1_19)) ? (var_1_32) : (var_1_19))) * var_1_19) <= var_1_29) ? (var_1_8 == ((signed long int) var_1_32)) : (var_1_8 == ((signed long int) var_1_19))) : (var_1_8 == ((signed long int) var_1_32))) : (var_1_8 == ((signed long int) var_1_19)))) && ((var_1_5 > var_1_4) ? (var_1_11 == ((double) (var_1_5 - (var_1_6 + ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))))) : 1)) && ((((((var_1_16) < ((var_1_29 - var_1_23))) ? (var_1_16) : ((var_1_29 - var_1_23)))) >= var_1_32) ? (var_1_14 == ((unsigned char) var_1_15)) : 1)) && ((var_1_5 <= var_1_13) ? (var_1_16 == ((signed short int) var_1_32)) : (var_1_16 == ((signed short int) (var_1_32 - 4))))) && (var_1_17 == ((unsigned long int) (var_1_18 - var_1_28)))) && (var_1_19 == ((signed char) (var_1_20 - (var_1_21 - var_1_22))))) && ((((((7.2) > (10.86)) ? (7.2) : (10.86))) >= (var_1_12 - var_1_5)) ? (var_1_23 == ((unsigned long int) ((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22))))) : ((var_1_19 >= ((var_1_24 - var_1_8) - ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? (var_1_23 == ((unsigned long int) var_1_22)) : (var_1_23 == ((unsigned long int) var_1_29))))) && ((var_1_28 >= var_1_32) ? (var_1_25 == ((double) ((var_1_26 + var_1_27) + var_1_13))) : ((var_1_1 >= var_1_11) ? (var_1_25 == ((double) var_1_4)) : 1))) && (((last_1_var_1_8 * ((((var_1_21) > (last_1_var_1_29)) ? (var_1_21) : (last_1_var_1_29)))) >= last_1_var_1_32) ? ((var_1_18 <= 128u) ? ((var_1_4 == ((((var_1_5) < (last_1_var_1_1)) ? (var_1_5) : (last_1_var_1_1)))) ? (var_1_28 == ((unsigned char) var_1_22)) : (var_1_28 == ((unsigned char) var_1_22))) : (var_1_28 == ((unsigned char) var_1_21))) : (var_1_28 == ((unsigned char) var_1_22)))) && (((var_1_20 + last_1_var_1_23) <= var_1_21) ? (var_1_29 == ((unsigned char) (((((((((var_1_30 - var_1_21)) < (var_1_22)) ? ((var_1_30 - var_1_21)) : (var_1_22)))) > ((1 + var_1_31))) ? ((((((var_1_30 - var_1_21)) < (var_1_22)) ? ((var_1_30 - var_1_21)) : (var_1_22)))) : ((1 + var_1_31)))))) : 1)) && ((128 >= ((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)))) ? (((last_1_var_1_8 / var_1_24) < (((((last_1_var_1_17 | var_1_20)) > (last_1_var_1_16)) ? ((last_1_var_1_17 | var_1_20)) : (last_1_var_1_16)))) ? (var_1_32 == ((signed char) (((var_1_33 + var_1_34) + var_1_22) - ((((var_1_21) < (var_1_35)) ? (var_1_21) : (var_1_35)))))) : (var_1_32 == ((signed char) var_1_34))) : (var_1_32 == ((signed char) var_1_21)))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}

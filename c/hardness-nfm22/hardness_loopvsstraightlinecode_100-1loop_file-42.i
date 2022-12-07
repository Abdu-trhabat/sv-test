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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch42100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 50.75;
double var_1_3 = 8.5;
double var_1_4 = 64.5;
double var_1_5 = 9.3;
unsigned char var_1_6 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 2;
double var_1_12 = 127.6;
unsigned char var_1_13 = 0;
signed long int var_1_14 = 1;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 16;
unsigned char var_1_19 = 0;
signed char var_1_21 = -32;
signed char var_1_22 = 2;
double var_1_23 = 15.5;
float var_1_24 = 2.625;
double var_1_25 = 4.375;
double var_1_26 = 2.35;
double var_1_27 = 64.25;
signed short int var_1_28 = -5;
float var_1_29 = 0.0;
unsigned char var_1_30 = 2;
unsigned long int var_1_31 = 2;
double last_1_var_1_1 = 50.75;
unsigned char last_1_var_1_13 = 0;
signed long int last_1_var_1_14 = 1;
unsigned char last_1_var_1_15 = 128;
unsigned char last_1_var_1_30 = 2;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_var_1_30 | ((((var_1_17) < (var_1_11)) ? (var_1_17) : (var_1_11)));
 if (last_1_var_1_14 > stepLocal_1) {
  var_1_25 = ((((((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) < (var_1_3)) ? (((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) : (var_1_3)));
 } else {
  if (99.3f <= var_1_3) {
   var_1_25 = (var_1_4 + var_1_5);
  } else {
   var_1_25 = (((((var_1_3 + (var_1_26 - var_1_27))) > (var_1_4)) ? ((var_1_3 + (var_1_26 - var_1_27))) : (var_1_4)));
  }
 }
 if (var_1_25 <= var_1_4) {
  var_1_15 = (var_1_16 - var_1_17);
 } else {
  var_1_15 = (var_1_17 + var_1_18);
 }
 if (last_1_var_1_1 <= 2.25) {
  var_1_1 = ((((2.5) < (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) ? (2.5) : (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))));
 } else {
  var_1_1 = ((((((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) > (var_1_4)) ? (((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) : (var_1_4)));
 }
 var_1_10 = var_1_11;
 var_1_12 = (var_1_3 + ((((1000000.75) < (var_1_5)) ? (1000000.75) : (var_1_5))));
 var_1_23 = var_1_5;
 if (7.75 > (- var_1_12)) {
  var_1_24 = (var_1_3 + var_1_5);
 } else {
  var_1_24 = ((((9999.2f) < ((var_1_5 + var_1_4))) ? (9999.2f) : ((var_1_5 + var_1_4))));
 }
 var_1_30 = var_1_11;
 if (((((var_1_23) < (24.4f)) ? (var_1_23) : (24.4f))) != var_1_5) {
  var_1_21 = ((((var_1_22) < (5)) ? (var_1_22) : (5)));
 }
 if (var_1_17 == ((last_1_var_1_15 * var_1_16) + var_1_18)) {
  var_1_19 = (var_1_8 || var_1_9);
 } else {
  var_1_19 = (var_1_8 && var_1_9);
 }
 if (var_1_24 > var_1_25) {
  if (var_1_19 && var_1_9) {
   if (var_1_11 > last_1_var_1_13) {
    var_1_13 = var_1_11;
   } else {
    var_1_13 = var_1_11;
   }
  } else {
   var_1_13 = var_1_11;
  }
 } else {
  var_1_13 = var_1_11;
 }
 unsigned char stepLocal_0 = var_1_19 && var_1_8;
 if (var_1_9 || stepLocal_0) {
  var_1_14 = ((((((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13)))) < (last_1_var_1_14)) ? (((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13)))) : (last_1_var_1_14)));
 } else {
  var_1_14 = last_1_var_1_14;
 }
 if (var_1_5 != (- var_1_4)) {
  var_1_6 = (var_1_19 && var_1_8);
 } else {
  var_1_6 = var_1_9;
 }
 if (((var_1_29 - 7.25f) - var_1_27) > var_1_23) {
  if (var_1_26 != (var_1_23 * ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) {
   var_1_28 = (var_1_14 + (((((var_1_16) > (var_1_13)) ? (var_1_16) : (var_1_13))) - (var_1_14 + var_1_11)));
  } else {
   var_1_28 = var_1_18;
  }
 } else {
  if (var_1_12 <= var_1_23) {
   var_1_28 = var_1_17;
  } else {
   var_1_28 = var_1_14;
  }
 }
 var_1_31 = var_1_14;
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -230584.3009213691390e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 2305843.009213691390e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -230584.3009213691390e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691390e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -127);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 4611686.018427387900e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_30 = var_1_30;
}
int property() {
 return (((((((((((((((last_1_var_1_1 <= 2.25) ? (var_1_1 == ((double) ((((2.5) < (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) ? (2.5) : (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))))))) : (var_1_1 == ((double) ((((((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) > (var_1_4)) ? (((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) : (var_1_4)))))) && ((var_1_5 != (- var_1_4)) ? (var_1_6 == ((unsigned char) (var_1_19 && var_1_8))) : (var_1_6 == ((unsigned char) var_1_9)))) && (var_1_10 == ((unsigned char) var_1_11))) && (var_1_12 == ((double) (var_1_3 + ((((1000000.75) < (var_1_5)) ? (1000000.75) : (var_1_5))))))) && ((var_1_24 > var_1_25) ? ((var_1_19 && var_1_9) ? ((var_1_11 > last_1_var_1_13) ? (var_1_13 == ((unsigned char) var_1_11)) : (var_1_13 == ((unsigned char) var_1_11))) : (var_1_13 == ((unsigned char) var_1_11))) : (var_1_13 == ((unsigned char) var_1_11)))) && ((var_1_9 || (var_1_19 && var_1_8)) ? (var_1_14 == ((signed long int) ((((((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13)))) < (last_1_var_1_14)) ? (((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13)))) : (last_1_var_1_14))))) : (var_1_14 == ((signed long int) last_1_var_1_14)))) && ((var_1_25 <= var_1_4) ? (var_1_15 == ((unsigned char) (var_1_16 - var_1_17))) : (var_1_15 == ((unsigned char) (var_1_17 + var_1_18))))) && ((var_1_17 == ((last_1_var_1_15 * var_1_16) + var_1_18)) ? (var_1_19 == ((unsigned char) (var_1_8 || var_1_9))) : (var_1_19 == ((unsigned char) (var_1_8 && var_1_9))))) && ((((((var_1_23) < (24.4f)) ? (var_1_23) : (24.4f))) != var_1_5) ? (var_1_21 == ((signed char) ((((var_1_22) < (5)) ? (var_1_22) : (5))))) : 1)) && (var_1_23 == ((double) var_1_5))) && ((7.75 > (- var_1_12)) ? (var_1_24 == ((float) (var_1_3 + var_1_5))) : (var_1_24 == ((float) ((((9999.2f) < ((var_1_5 + var_1_4))) ? (9999.2f) : ((var_1_5 + var_1_4)))))))) && ((last_1_var_1_14 > (last_1_var_1_30 | ((((var_1_17) < (var_1_11)) ? (var_1_17) : (var_1_11))))) ? (var_1_25 == ((double) ((((((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) < (var_1_3)) ? (((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) : (var_1_3))))) : ((99.3f <= var_1_3) ? (var_1_25 == ((double) (var_1_4 + var_1_5))) : (var_1_25 == ((double) (((((var_1_3 + (var_1_26 - var_1_27))) > (var_1_4)) ? ((var_1_3 + (var_1_26 - var_1_27))) : (var_1_4)))))))) && ((((var_1_29 - 7.25f) - var_1_27) > var_1_23) ? ((var_1_26 != (var_1_23 * ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) ? (var_1_28 == ((signed short int) (var_1_14 + (((((var_1_16) > (var_1_13)) ? (var_1_16) : (var_1_13))) - (var_1_14 + var_1_11))))) : (var_1_28 == ((signed short int) var_1_18))) : ((var_1_12 <= var_1_23) ? (var_1_28 == ((signed short int) var_1_17)) : (var_1_28 == ((signed short int) var_1_14))))) && (var_1_30 == ((unsigned char) var_1_11))) && (var_1_31 == ((unsigned long int) var_1_14))
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

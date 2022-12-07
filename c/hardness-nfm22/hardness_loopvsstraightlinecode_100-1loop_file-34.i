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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 64;
unsigned char var_1_3 = 200;
unsigned char var_1_4 = 16;
unsigned char var_1_5 = 0;
double var_1_7 = 31.75;
double var_1_8 = 64.75;
double var_1_9 = 1.625;
double var_1_10 = 0.0;
double var_1_11 = 15.75;
double var_1_12 = 199.6;
double var_1_13 = 31.625;
float var_1_14 = 2.575;
float var_1_15 = 0.0;
double var_1_16 = 64.8;
double var_1_18 = 8.01;
double var_1_19 = 1000000.5;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
double var_1_26 = 49.31;
signed long int var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned short int last_1_var_1_1 = 64;
unsigned char last_1_var_1_22 = 1;
signed long int last_1_var_1_28 = 1;
unsigned char last_1_var_1_29 = 1;
unsigned char last_1_var_1_31 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_8 <= (((((- var_1_12)) < ((var_1_11 - 99999.75))) ? ((- var_1_12)) : ((var_1_11 - 99999.75))))) {
  if (last_1_var_1_29 && last_1_var_1_31) {
   var_1_28 = last_1_var_1_1;
  } else {
   var_1_28 = last_1_var_1_1;
  }
 }
 signed long int stepLocal_7 = 100;
 if (! (var_1_10 <= 16.8)) {
  var_1_29 = (var_1_23 && ((var_1_24 || last_1_var_1_22) || var_1_30));
 } else {
  if ((last_1_var_1_28 * (- 2)) <= stepLocal_7) {
   if (last_1_var_1_22) {
    var_1_29 = 0;
   } else {
    var_1_29 = (var_1_23 && var_1_24);
   }
  }
 }
 unsigned char stepLocal_1 = var_1_4;
 if (stepLocal_1 >= var_1_28) {
  var_1_7 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
 }
 unsigned char stepLocal_4 = var_1_4;
 if (stepLocal_4 <= ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) {
  var_1_14 = ((((var_1_12) < ((var_1_10 - (var_1_15 - var_1_11)))) ? (var_1_12) : ((var_1_10 - (var_1_15 - var_1_11)))));
 } else {
  var_1_14 = var_1_15;
 }
 if ((- var_1_7) == var_1_10) {
  var_1_16 = (((((var_1_18 - var_1_15)) > (var_1_11)) ? ((var_1_18 - var_1_15)) : (var_1_11)));
 }
 var_1_31 = var_1_25;
 signed long int stepLocal_0 = var_1_28;
 if (var_1_29) {
  if (((var_1_3 - var_1_4) - var_1_5) <= stepLocal_0) {
   var_1_1 = var_1_3;
  }
 }
 unsigned char stepLocal_6 = var_1_31;
 if (var_1_31 && stepLocal_6) {
  var_1_22 = ((var_1_29 || var_1_23) && var_1_24);
 } else {
  var_1_22 = (! (var_1_24 && (! var_1_25)));
 }
 if (var_1_22) {
  if (var_1_1 >= var_1_5) {
   var_1_9 = ((((((var_1_10 - var_1_11) - var_1_12)) < (var_1_8)) ? (((var_1_10 - var_1_11) - var_1_12)) : (var_1_8)));
  }
 } else {
  if (var_1_12 == var_1_8) {
   var_1_9 = var_1_11;
  } else {
   var_1_9 = var_1_12;
  }
 }
 unsigned char stepLocal_3 = var_1_3;
 unsigned char stepLocal_2 = var_1_10 != var_1_9;
 if (stepLocal_2 && var_1_29) {
  if (var_1_11 >= (127.5 / var_1_10)) {
   if (stepLocal_3 >= var_1_28) {
    var_1_13 = var_1_10;
   } else {
    var_1_13 = 9.9999999999996E12;
   }
  } else {
   var_1_13 = var_1_11;
  }
 } else {
  var_1_13 = var_1_12;
 }
 unsigned char stepLocal_5 = var_1_22;
 if (var_1_22) {
  if (var_1_10 >= (var_1_8 * var_1_13)) {
   var_1_19 = (var_1_18 - (var_1_15 - var_1_11));
  } else {
   var_1_19 = ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))));
  }
 } else {
  if (stepLocal_5 || var_1_22) {
   var_1_19 = var_1_12;
  }
 }
 if (var_1_23 || (((((var_1_3) > (var_1_5)) ? (var_1_3) : (var_1_5))) < var_1_1)) {
  var_1_26 = 25.5;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 191);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 64);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 4611686.018427382800e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 4611686.018427382800e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
}
int property() {
 return (((((((((((var_1_29 ? ((((var_1_3 - var_1_4) - var_1_5) <= var_1_28) ? (var_1_1 == ((unsigned short int) var_1_3)) : 1) : 1) && ((var_1_4 >= var_1_28) ? (var_1_7 == ((double) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) : 1)) && (var_1_22 ? ((var_1_1 >= var_1_5) ? (var_1_9 == ((double) ((((((var_1_10 - var_1_11) - var_1_12)) < (var_1_8)) ? (((var_1_10 - var_1_11) - var_1_12)) : (var_1_8))))) : 1) : ((var_1_12 == var_1_8) ? (var_1_9 == ((double) var_1_11)) : (var_1_9 == ((double) var_1_12))))) && (((var_1_10 != var_1_9) && var_1_29) ? ((var_1_11 >= (127.5 / var_1_10)) ? ((var_1_3 >= var_1_28) ? (var_1_13 == ((double) var_1_10)) : (var_1_13 == ((double) 9.9999999999996E12))) : (var_1_13 == ((double) var_1_11))) : (var_1_13 == ((double) var_1_12)))) && ((var_1_4 <= ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) ? (var_1_14 == ((float) ((((var_1_12) < ((var_1_10 - (var_1_15 - var_1_11)))) ? (var_1_12) : ((var_1_10 - (var_1_15 - var_1_11))))))) : (var_1_14 == ((float) var_1_15)))) && (((- var_1_7) == var_1_10) ? (var_1_16 == ((double) (((((var_1_18 - var_1_15)) > (var_1_11)) ? ((var_1_18 - var_1_15)) : (var_1_11))))) : 1)) && (var_1_22 ? ((var_1_10 >= (var_1_8 * var_1_13)) ? (var_1_19 == ((double) (var_1_18 - (var_1_15 - var_1_11)))) : (var_1_19 == ((double) ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))))) : ((var_1_22 || var_1_22) ? (var_1_19 == ((double) var_1_12)) : 1))) && ((var_1_31 && var_1_31) ? (var_1_22 == ((unsigned char) ((var_1_29 || var_1_23) && var_1_24))) : (var_1_22 == ((unsigned char) (! (var_1_24 && (! var_1_25))))))) && ((var_1_23 || (((((var_1_3) > (var_1_5)) ? (var_1_3) : (var_1_5))) < var_1_1)) ? (var_1_26 == ((double) 25.5)) : 1)) && ((var_1_8 <= (((((- var_1_12)) < ((var_1_11 - 99999.75))) ? ((- var_1_12)) : ((var_1_11 - 99999.75))))) ? ((last_1_var_1_29 && last_1_var_1_31) ? (var_1_28 == ((signed long int) last_1_var_1_1)) : (var_1_28 == ((signed long int) last_1_var_1_1))) : 1)) && ((! (var_1_10 <= 16.8)) ? (var_1_29 == ((unsigned char) (var_1_23 && ((var_1_24 || last_1_var_1_22) || var_1_30)))) : (((last_1_var_1_28 * (- 2)) <= 100) ? (last_1_var_1_22 ? (var_1_29 == ((unsigned char) 0)) : (var_1_29 == ((unsigned char) (var_1_23 && var_1_24)))) : 1))) && (var_1_31 == ((unsigned char) var_1_25))
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

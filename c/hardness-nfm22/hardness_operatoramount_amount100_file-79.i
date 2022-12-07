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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch79Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 0;
signed short int var_1_6 = 256;
signed short int var_1_7 = 8;
double var_1_8 = 5.3;
double var_1_9 = 5.575;
double var_1_10 = 31.5;
double var_1_11 = 2.38;
double var_1_12 = 1.25;
unsigned short int var_1_13 = 100;
unsigned long int var_1_16 = 8;
unsigned long int var_1_17 = 4;
unsigned short int var_1_19 = 49755;
unsigned short int var_1_20 = 0;
unsigned short int var_1_21 = 10;
unsigned short int var_1_22 = 5;
float var_1_23 = 200.8;
signed long int var_1_24 = 256;
unsigned short int var_1_25 = 16;
double var_1_26 = 0.625;
double var_1_27 = 2.25;
double var_1_28 = 25.8;
double var_1_29 = 15.5;
unsigned long int var_1_30 = 1;
unsigned long int var_1_31 = 2553598654;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
signed char var_1_34 = -1;
signed char var_1_35 = -8;
signed char var_1_36 = 25;
signed char var_1_37 = 10;
signed char var_1_38 = 64;
unsigned long int var_1_39 = 128;
signed short int last_1_var_1_1 = 0;
double last_1_var_1_8 = 5.3;
unsigned short int last_1_var_1_13 = 100;
signed long int last_1_var_1_24 = 256;
unsigned long int last_1_var_1_30 = 1;
unsigned char last_1_var_1_32 = 1;
unsigned long int last_1_var_1_39 = 128;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_5 = var_1_7;
 signed long int stepLocal_4 = last_1_var_1_24 | var_1_22;
 signed long int stepLocal_3 = last_1_var_1_1;
 if (stepLocal_4 > last_1_var_1_39) {
  if (last_1_var_1_32) {
   if (stepLocal_3 == ((var_1_20 + last_1_var_1_13) / var_1_19)) {
    var_1_30 = ((((var_1_22) > (10u)) ? (var_1_22) : (10u)));
   }
  } else {
   var_1_30 = ((((var_1_22) > ((var_1_31 - var_1_20))) ? (var_1_22) : ((var_1_31 - var_1_20))));
  }
 } else {
  if (stepLocal_5 > last_1_var_1_13) {
   var_1_30 = var_1_21;
  } else {
   var_1_30 = var_1_31;
  }
 }
 unsigned long int stepLocal_1 = last_1_var_1_30;
 if (last_1_var_1_32) {
  if (-10000000 <= stepLocal_1) {
   var_1_24 = (last_1_var_1_30 - var_1_20);
  }
 }
 signed long int stepLocal_2 = 32;
 if (stepLocal_2 >= var_1_24) {
  var_1_26 = (var_1_9 - 8.625);
 }
 unsigned short int stepLocal_6 = var_1_19;
 if ((var_1_29 - var_1_11) <= last_1_var_1_8) {
  if (last_1_var_1_39 == stepLocal_6) {
   var_1_32 = var_1_33;
  }
 }
 if (var_1_32) {
  var_1_8 = ((var_1_9 + ((((31.5) > (var_1_10)) ? (31.5) : (var_1_10)))) - ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))));
 }
 var_1_23 = (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - var_1_9);
 if (! ((var_1_12 < 9999999.625) && var_1_32)) {
  var_1_25 = var_1_19;
 } else {
  var_1_25 = ((((var_1_20) < (((((var_1_7) < (var_1_19)) ? (var_1_7) : (var_1_19))))) ? (var_1_20) : (((((var_1_7) < (var_1_19)) ? (var_1_7) : (var_1_19))))));
 }
 if (-32 > var_1_20) {
  var_1_27 = (((((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))) + (var_1_28 - var_1_29))) < (var_1_11)) ? ((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))) + (var_1_28 - var_1_29))) : (var_1_11)));
 } else {
  var_1_27 = 63.75;
 }
 if (var_1_20 >= var_1_16) {
  if (var_1_30 > var_1_24) {
   var_1_34 = (var_1_35 + var_1_36);
  } else {
   var_1_34 = (var_1_37 - var_1_38);
  }
 }
 if (var_1_26 == var_1_27) {
  var_1_39 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
 } else {
  if ((var_1_19 * 64u) < var_1_38) {
   var_1_39 = var_1_19;
  } else {
   var_1_39 = var_1_16;
  }
 }
 if (var_1_32 && var_1_32) {
  if (var_1_27 != 16.5) {
   var_1_1 = ((((-256) > (var_1_34)) ? (-256) : (var_1_34)));
  } else {
   var_1_1 = (var_1_6 - var_1_7);
  }
 } else {
  var_1_1 = var_1_6;
 }
 unsigned long int stepLocal_0 = var_1_7 * var_1_30;
 if (stepLocal_0 != (var_1_39 / (var_1_16 + var_1_17))) {
  if (var_1_23 >= (((((var_1_12 * var_1_26)) < (var_1_8)) ? ((var_1_12 * var_1_26)) : (var_1_8)))) {
   var_1_13 = var_1_7;
  } else {
   if (var_1_32) {
    var_1_13 = ((var_1_19 - var_1_20) - (((((8 + var_1_21)) > (var_1_22)) ? ((8 + var_1_21)) : (var_1_22))));
   }
  }
 } else {
  var_1_13 = ((((var_1_19) > ((var_1_7 + var_1_20))) ? (var_1_19) : ((var_1_7 + var_1_20))));
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 2147483648);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 49150);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 16383);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 16383);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 2147483647);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -63);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -63);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -1);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 126);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_39 = var_1_39;
}
int property() {
 return ((((((((((((var_1_32 && var_1_32) ? ((var_1_27 != 16.5) ? (var_1_1 == ((signed short int) ((((-256) > (var_1_34)) ? (-256) : (var_1_34))))) : (var_1_1 == ((signed short int) (var_1_6 - var_1_7)))) : (var_1_1 == ((signed short int) var_1_6))) && (var_1_32 ? (var_1_8 == ((double) ((var_1_9 + ((((31.5) > (var_1_10)) ? (31.5) : (var_1_10)))) - ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))))) : 1)) && (((var_1_7 * var_1_30) != (var_1_39 / (var_1_16 + var_1_17))) ? ((var_1_23 >= (((((var_1_12 * var_1_26)) < (var_1_8)) ? ((var_1_12 * var_1_26)) : (var_1_8)))) ? (var_1_13 == ((unsigned short int) var_1_7)) : (var_1_32 ? (var_1_13 == ((unsigned short int) ((var_1_19 - var_1_20) - (((((8 + var_1_21)) > (var_1_22)) ? ((8 + var_1_21)) : (var_1_22)))))) : 1)) : (var_1_13 == ((unsigned short int) ((((var_1_19) > ((var_1_7 + var_1_20))) ? (var_1_19) : ((var_1_7 + var_1_20)))))))) && (var_1_23 == ((float) (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - var_1_9)))) && (last_1_var_1_32 ? ((-10000000 <= last_1_var_1_30) ? (var_1_24 == ((signed long int) (last_1_var_1_30 - var_1_20))) : 1) : 1)) && ((! ((var_1_12 < 9999999.625) && var_1_32)) ? (var_1_25 == ((unsigned short int) var_1_19)) : (var_1_25 == ((unsigned short int) ((((var_1_20) < (((((var_1_7) < (var_1_19)) ? (var_1_7) : (var_1_19))))) ? (var_1_20) : (((((var_1_7) < (var_1_19)) ? (var_1_7) : (var_1_19)))))))))) && ((32 >= var_1_24) ? (var_1_26 == ((double) (var_1_9 - 8.625))) : 1)) && ((-32 > var_1_20) ? (var_1_27 == ((double) (((((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))) + (var_1_28 - var_1_29))) < (var_1_11)) ? ((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))) + (var_1_28 - var_1_29))) : (var_1_11))))) : (var_1_27 == ((double) 63.75)))) && (((last_1_var_1_24 | var_1_22) > last_1_var_1_39) ? (last_1_var_1_32 ? ((last_1_var_1_1 == ((var_1_20 + last_1_var_1_13) / var_1_19)) ? (var_1_30 == ((unsigned long int) ((((var_1_22) > (10u)) ? (var_1_22) : (10u))))) : 1) : (var_1_30 == ((unsigned long int) ((((var_1_22) > ((var_1_31 - var_1_20))) ? (var_1_22) : ((var_1_31 - var_1_20))))))) : ((var_1_7 > last_1_var_1_13) ? (var_1_30 == ((unsigned long int) var_1_21)) : (var_1_30 == ((unsigned long int) var_1_31))))) && (((var_1_29 - var_1_11) <= last_1_var_1_8) ? ((last_1_var_1_39 == var_1_19) ? (var_1_32 == ((unsigned char) var_1_33)) : 1) : 1)) && ((var_1_20 >= var_1_16) ? ((var_1_30 > var_1_24) ? (var_1_34 == ((signed char) (var_1_35 + var_1_36))) : (var_1_34 == ((signed char) (var_1_37 - var_1_38)))) : 1)) && ((var_1_26 == var_1_27) ? (var_1_39 == ((unsigned long int) ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) : (((var_1_19 * 64u) < var_1_38) ? (var_1_39 == ((unsigned long int) var_1_19)) : (var_1_39 == ((unsigned long int) var_1_16))))
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

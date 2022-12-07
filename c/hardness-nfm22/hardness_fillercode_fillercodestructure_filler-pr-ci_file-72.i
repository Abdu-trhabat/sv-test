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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed char var_1_10 = 2;
signed char var_1_11 = 1;
float var_1_14 = 64.3;
signed char var_1_16 = 32;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 9.25;
double var_1_21 = 255.05;
double var_1_22 = 25.5;
unsigned char var_1_23 = 2;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 5;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 1;
signed long int var_1_29 = 128;
unsigned long int var_1_31 = 1;
unsigned long int var_1_32 = 64;
unsigned long int var_1_37 = 3773873024;
unsigned long int var_1_38 = 2296504360;
unsigned long int var_1_39 = 16;
unsigned long int var_1_40 = 2753961414;
unsigned char var_1_41 = 8;
signed short int var_1_43 = -50;
signed char var_1_44 = -1;
double var_1_47 = 255.2;
double var_1_50 = 50.4;
double var_1_51 = 49.25;
double var_1_52 = 1000000.4;
double var_1_53 = 256.2;
signed char var_1_54 = -8;
unsigned char last_1_var_1_17 = 1;
double last_1_var_1_20 = 9.25;
unsigned char last_1_var_1_23 = 2;
unsigned short int last_1_var_1_26 = 5;
signed long int last_1_var_1_29 = 128;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_29 * last_1_var_1_23) <= last_1_var_1_29) {
  var_1_10 = (var_1_11 + 10);
 } else {
  if (last_1_var_1_17 || last_1_var_1_17) {
   if ((((((last_1_var_1_20) < 0 ) ? -(last_1_var_1_20) : (last_1_var_1_20))) - var_1_14) == (last_1_var_1_20 + last_1_var_1_20)) {
    var_1_10 = (var_1_11 + var_1_16);
   } else {
    var_1_10 = var_1_11;
   }
  } else {
   var_1_10 = var_1_16;
  }
 }
 if ((last_1_var_1_29 + last_1_var_1_29) > last_1_var_1_26) {
  var_1_23 = var_1_25;
 }
 if (var_1_17 || var_1_18) {
  if (var_1_11 >= var_1_16) {
   var_1_47 = var_1_22;
  }
 } else {
  if (var_1_18) {
   var_1_47 = ((((var_1_22) > (var_1_21)) ? (var_1_22) : (var_1_21)));
  } else {
   if (var_1_38 >= var_1_25) {
    var_1_47 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
   } else {
    var_1_47 = (var_1_50 - ((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52))));
   }
  }
 }
 var_1_17 = (var_1_18 && var_1_19);
 if (! var_1_18) {
  var_1_20 = ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)));
 }
 if (256 >= var_1_10) {
  if (var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) {
   var_1_26 = 16;
  } else {
   var_1_26 = var_1_28;
  }
 } else {
  var_1_26 = var_1_25;
 }
 var_1_41 = var_1_25;
 if (var_1_23 <= ((((-8) > ((var_1_37 ^ var_1_40))) ? (-8) : ((var_1_37 ^ var_1_40))))) {
  if (var_1_18) {
   var_1_44 = ((((var_1_16) > (var_1_11)) ? (var_1_16) : (var_1_11)));
  }
 } else {
  var_1_44 = 64;
 }
 signed long int stepLocal_0 = var_1_23 * var_1_26;
 if (((((var_1_20) < (63.5)) ? (var_1_20) : (63.5))) > (2.4 * var_1_20)) {
  if (stepLocal_0 <= (~ var_1_26)) {
   var_1_1 = (((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10))) + var_1_23);
  } else {
   var_1_1 = var_1_10;
  }
 } else {
  var_1_1 = -50;
 }
 var_1_53 = 5.5;
 var_1_31 = var_1_26;
 if (var_1_37 <= ((((var_1_26) > (var_1_26)) ? (var_1_26) : (var_1_26)))) {
  var_1_43 = var_1_25;
 }
 var_1_29 = var_1_1;
 if (var_1_18 && var_1_18) {
  if (var_1_29 <= var_1_26) {
   var_1_32 = (((((var_1_37) < (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_37) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) - var_1_29);
  }
 }
 if ((- var_1_38) <= (- var_1_37)) {
  var_1_39 = (2368197193u - var_1_23);
 } else {
  if (var_1_17) {
   var_1_39 = ((((var_1_37) < ((((((var_1_38) > (var_1_40)) ? (var_1_38) : (var_1_40))) - var_1_25))) ? (var_1_37) : ((((((var_1_38) > (var_1_40)) ? (var_1_38) : (var_1_40))) - var_1_25))));
  } else {
   var_1_39 = var_1_40;
  }
 }
 var_1_54 = var_1_11;
}
void updateVariables() {
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 255);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967294);
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_29 = var_1_29;
}
int property() {
 return ((((((((((((var_1_20) < (63.5)) ? (var_1_20) : (63.5))) > (2.4 * var_1_20)) ? (((var_1_23 * var_1_26) <= (~ var_1_26)) ? (var_1_1 == ((signed short int) (((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10))) + var_1_23))) : (var_1_1 == ((signed short int) var_1_10))) : (var_1_1 == ((signed short int) -50))) && (((last_1_var_1_29 * last_1_var_1_23) <= last_1_var_1_29) ? (var_1_10 == ((signed char) (var_1_11 + 10))) : ((last_1_var_1_17 || last_1_var_1_17) ? (((((((last_1_var_1_20) < 0 ) ? -(last_1_var_1_20) : (last_1_var_1_20))) - var_1_14) == (last_1_var_1_20 + last_1_var_1_20)) ? (var_1_10 == ((signed char) (var_1_11 + var_1_16))) : (var_1_10 == ((signed char) var_1_11))) : (var_1_10 == ((signed char) var_1_16))))) && (var_1_17 == ((unsigned char) (var_1_18 && var_1_19)))) && ((! var_1_18) ? (var_1_20 == ((double) ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))))) : 1)) && (((last_1_var_1_29 + last_1_var_1_29) > last_1_var_1_26) ? (var_1_23 == ((unsigned char) var_1_25)) : 1)) && ((256 >= var_1_10) ? ((var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) ? (var_1_26 == ((unsigned short int) 16)) : (var_1_26 == ((unsigned short int) var_1_28))) : (var_1_26 == ((unsigned short int) var_1_25)))) && (var_1_29 == ((signed long int) var_1_1))) && (var_1_31 == ((unsigned long int) var_1_26))
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

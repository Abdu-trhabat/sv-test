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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch23100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -16;
unsigned long int var_1_2 = 2645914509;
signed char var_1_5 = -50;
signed char var_1_6 = 2;
signed char var_1_7 = 5;
float var_1_8 = 64.1;
float var_1_10 = 8.4;
float var_1_11 = 2.75;
float var_1_12 = 0.9;
unsigned long int var_1_14 = 10;
unsigned long int var_1_15 = 2626053835;
float var_1_17 = 64.625;
float var_1_18 = 15.25;
float var_1_19 = 10000000000.375;
float var_1_20 = 0.0;
float var_1_21 = 25.5;
float var_1_22 = 4.5;
float var_1_23 = 255.125;
float var_1_24 = 15.775;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 10;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 100;
unsigned long int var_1_35 = 32;
unsigned short int var_1_36 = 128;
unsigned short int var_1_37 = 36168;
unsigned char var_1_38 = 0;
signed short int var_1_39 = -1;
double var_1_40 = 8.7;
signed char last_1_var_1_1 = -16;
unsigned long int last_1_var_1_14 = 10;
float last_1_var_1_17 = 64.625;
void initially(void) {
}
void step(void) {
 if (var_1_24 < last_1_var_1_17) {
  var_1_36 = (var_1_37 - last_1_var_1_14);
 } else {
  var_1_36 = (var_1_37 - last_1_var_1_14);
 }
 signed long int stepLocal_7 = last_1_var_1_1;
 if (stepLocal_7 > var_1_7) {
  var_1_38 = (var_1_30 || var_1_27);
 } else {
  var_1_38 = var_1_26;
 }
 if (var_1_38) {
  var_1_25 = (((! var_1_26) && var_1_27) && var_1_28);
 } else {
  if (var_1_27) {
   var_1_25 = (! (var_1_26 && var_1_29));
  } else {
   var_1_25 = (var_1_28 && var_1_30);
  }
 }
 if (var_1_11 < var_1_10) {
  var_1_35 = (var_1_15 - var_1_36);
 } else {
  if (var_1_38) {
   var_1_35 = ((((var_1_15) > (var_1_6)) ? (var_1_15) : (var_1_6)));
  } else {
   var_1_35 = var_1_36;
  }
 }
 unsigned char stepLocal_0 = var_1_38;
 if (((var_1_2 - 16u) != var_1_35) || stepLocal_0) {
  var_1_1 = (var_1_5 + (var_1_6 - var_1_7));
 } else {
  var_1_1 = (((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) < 0 ) ? -((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) : ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))));
 }
 if (var_1_25) {
  var_1_19 = var_1_11;
 } else {
  var_1_19 = (((var_1_20 - var_1_21) - (var_1_22 + var_1_23)) + var_1_24);
 }
 var_1_40 = var_1_10;
 var_1_39 = var_1_1;
 unsigned char stepLocal_6 = var_1_30;
 if (var_1_29) {
  if (var_1_25 && stepLocal_6) {
   var_1_33 = var_1_7;
  } else {
   var_1_33 = (var_1_6 + (var_1_34 - var_1_7));
  }
 }
 unsigned char stepLocal_4 = var_1_38;
 unsigned char stepLocal_3 = (- var_1_12) != 1.9f;
 if (stepLocal_3 || ((var_1_36 * var_1_7) < var_1_33)) {
  var_1_14 = ((((var_1_7) < ((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) - var_1_36))) ? (var_1_7) : ((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) - var_1_36))));
 } else {
  if (stepLocal_4 && var_1_25) {
   var_1_14 = var_1_36;
  } else {
   var_1_14 = var_1_15;
  }
 }
 if ((var_1_14 * var_1_14) <= var_1_5) {
  var_1_31 = ((((var_1_33) > (var_1_15)) ? (var_1_33) : (var_1_15)));
 } else {
  var_1_31 = var_1_33;
 }
 unsigned long int stepLocal_5 = var_1_36 + var_1_15;
 if (var_1_12 < (var_1_11 / var_1_18)) {
  if ((var_1_7 + ((((var_1_31) > (var_1_33)) ? (var_1_31) : (var_1_33)))) <= stepLocal_5) {
   var_1_17 = var_1_10;
  } else {
   var_1_17 = var_1_10;
  }
 } else {
  var_1_17 = var_1_11;
 }
 unsigned char stepLocal_2 = var_1_25;
 unsigned long int stepLocal_1 = var_1_14;
 if (var_1_38) {
  if ((8u * (var_1_2 * var_1_7)) >= stepLocal_1) {
   var_1_8 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
  }
 } else {
  if (((var_1_11 / var_1_12) == var_1_10) && stepLocal_2) {
   var_1_8 = var_1_10;
  } else {
   var_1_8 = 7.6f;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 2147483647);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 2147483647);
 assume_abort_if_not(var_1_15 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 2305843.009213691390e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691390e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 63);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 32767);
 assume_abort_if_not(var_1_37 <= 65534);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_17 = var_1_17;
}
int property() {
 return (((((((((((((((var_1_2 - 16u) != var_1_35) || var_1_38) ? (var_1_1 == ((signed char) (var_1_5 + (var_1_6 - var_1_7)))) : (var_1_1 == ((signed char) (((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) < 0 ) ? -((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) : ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))))) && (var_1_38 ? (((8u * (var_1_2 * var_1_7)) >= var_1_14) ? (var_1_8 == ((float) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) : 1) : ((((var_1_11 / var_1_12) == var_1_10) && var_1_25) ? (var_1_8 == ((float) var_1_10)) : (var_1_8 == ((float) 7.6f))))) && ((((- var_1_12) != 1.9f) || ((var_1_36 * var_1_7) < var_1_33)) ? (var_1_14 == ((unsigned long int) ((((var_1_7) < ((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) - var_1_36))) ? (var_1_7) : ((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) - var_1_36)))))) : ((var_1_38 && var_1_25) ? (var_1_14 == ((unsigned long int) var_1_36)) : (var_1_14 == ((unsigned long int) var_1_15))))) && ((var_1_12 < (var_1_11 / var_1_18)) ? (((var_1_7 + ((((var_1_31) > (var_1_33)) ? (var_1_31) : (var_1_33)))) <= (var_1_36 + var_1_15)) ? (var_1_17 == ((float) var_1_10)) : (var_1_17 == ((float) var_1_10))) : (var_1_17 == ((float) var_1_11)))) && (var_1_25 ? (var_1_19 == ((float) var_1_11)) : (var_1_19 == ((float) (((var_1_20 - var_1_21) - (var_1_22 + var_1_23)) + var_1_24))))) && (var_1_38 ? (var_1_25 == ((unsigned char) (((! var_1_26) && var_1_27) && var_1_28))) : (var_1_27 ? (var_1_25 == ((unsigned char) (! (var_1_26 && var_1_29)))) : (var_1_25 == ((unsigned char) (var_1_28 && var_1_30)))))) && (((var_1_14 * var_1_14) <= var_1_5) ? (var_1_31 == ((unsigned long int) ((((var_1_33) > (var_1_15)) ? (var_1_33) : (var_1_15))))) : (var_1_31 == ((unsigned long int) var_1_33)))) && (var_1_29 ? ((var_1_25 && var_1_30) ? (var_1_33 == ((unsigned char) var_1_7)) : (var_1_33 == ((unsigned char) (var_1_6 + (var_1_34 - var_1_7))))) : 1)) && ((var_1_11 < var_1_10) ? (var_1_35 == ((unsigned long int) (var_1_15 - var_1_36))) : (var_1_38 ? (var_1_35 == ((unsigned long int) ((((var_1_15) > (var_1_6)) ? (var_1_15) : (var_1_6))))) : (var_1_35 == ((unsigned long int) var_1_36))))) && ((var_1_24 < last_1_var_1_17) ? (var_1_36 == ((unsigned short int) (var_1_37 - last_1_var_1_14))) : (var_1_36 == ((unsigned short int) (var_1_37 - last_1_var_1_14))))) && ((last_1_var_1_1 > var_1_7) ? (var_1_38 == ((unsigned char) (var_1_30 || var_1_27))) : (var_1_38 == ((unsigned char) var_1_26)))) && (var_1_39 == ((signed short int) var_1_1))) && (var_1_40 == ((double) var_1_10))
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

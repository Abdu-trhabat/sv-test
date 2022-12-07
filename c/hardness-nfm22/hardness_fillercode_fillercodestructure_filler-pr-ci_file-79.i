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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch79Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 0;
double var_1_9 = 127.625;
double var_1_10 = 256.8;
double var_1_11 = 0.30000000000000004;
signed long int var_1_12 = -2;
double var_1_13 = 2.475;
double var_1_14 = 25.2;
double var_1_15 = 500.125;
double var_1_16 = 10.75;
double var_1_17 = 255.4;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 8;
unsigned char var_1_25 = 10;
float var_1_26 = 16.8;
unsigned long int var_1_27 = 64;
unsigned long int var_1_28 = 256;
double var_1_32 = 255.5;
signed long int var_1_36 = 4;
double var_1_38 = 63.6;
double var_1_40 = 0.0;
signed short int var_1_42 = 128;
unsigned char var_1_45 = 0;
unsigned char var_1_48 = 0;
float var_1_49 = 256.5;
unsigned long int var_1_50 = 100;
double var_1_51 = 63.5;
unsigned char var_1_52 = 50;
unsigned char last_1_var_1_18 = 1;
unsigned char last_1_var_1_20 = 100;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_var_1_20;
 unsigned char stepLocal_0 = last_1_var_1_18;
 if (stepLocal_0 && last_1_var_1_18) {
  if (((((last_1_var_1_20) < ((last_1_var_1_20 * last_1_var_1_20))) ? (last_1_var_1_20) : ((last_1_var_1_20 * last_1_var_1_20)))) > stepLocal_1) {
   var_1_7 = var_1_8;
  } else {
   var_1_7 = var_1_8;
  }
 } else {
  var_1_7 = var_1_8;
 }
 if (var_1_3) {
  if (var_1_2) {
   var_1_18 = (! var_1_19);
  }
 }
 var_1_36 = (((((var_1_8) > (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_8) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) + var_1_7);
 if (0.83f > var_1_10) {
  if ((var_1_8 + ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) <= var_1_23) {
   var_1_49 = var_1_10;
  }
 } else {
  var_1_49 = var_1_10;
 }
 var_1_26 = var_1_16;
 if ((var_1_25 - var_1_23) <= var_1_8) {
  var_1_28 = var_1_23;
 }
 var_1_32 = ((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) > (var_1_16)) ? (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) : (var_1_16)));
 var_1_50 = var_1_8;
 var_1_27 = 10u;
 if (((var_1_8 * var_1_24) | var_1_7) <= (var_1_7 + 8u)) {
  if (((((16u) < (var_1_7)) ? (16u) : (var_1_7))) < var_1_24) {
   var_1_45 = var_1_19;
  } else {
   var_1_45 = ((var_1_24 != (var_1_7 % var_1_21)) || var_1_48);
  }
 }
 var_1_51 = var_1_11;
 var_1_52 = var_1_8;
 unsigned long int stepLocal_2 = var_1_27;
 if (stepLocal_2 != (var_1_8 + var_1_7)) {
  var_1_9 = ((((var_1_10) < (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6))))) ? (var_1_10) : (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6))))));
 } else {
  var_1_9 = ((((var_1_11) < (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? (var_1_11) : (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))));
 }
 if (var_1_8 >= var_1_7) {
  if (var_1_15 >= var_1_26) {
   var_1_20 = (var_1_21 - ((((((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) > (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) ? (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) : (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25)))))));
  } else {
   var_1_20 = var_1_24;
  }
 } else {
  var_1_20 = var_1_22;
 }
 if (! (var_1_11 >= (var_1_16 - var_1_40))) {
  var_1_42 = (((((var_1_24 - 256)) < (var_1_24)) ? ((var_1_24 - 256)) : (var_1_24)));
 }
 if (var_1_18) {
  if (! var_1_18) {
   var_1_1 = (var_1_7 + 5);
  } else {
   var_1_1 = (var_1_20 - var_1_20);
  }
 } else {
  var_1_1 = var_1_20;
 }
 if (256 > (-10 >> var_1_20)) {
  var_1_38 = (var_1_16 - (((((var_1_40 - 128.375)) < (var_1_17)) ? ((var_1_40 - 128.375)) : (var_1_17))));
 } else {
  var_1_38 = var_1_17;
 }
 if ((var_1_13 - var_1_14) >= (var_1_15 - (var_1_16 + var_1_17))) {
  var_1_12 = (var_1_20 + var_1_20);
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427387900e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427387900e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 4611686.018427382800e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 1);
}
void updateLastVariables() {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((var_1_18 ? ((! var_1_18) ? (var_1_1 == ((signed short int) (var_1_7 + 5))) : (var_1_1 == ((signed short int) (var_1_20 - var_1_20)))) : (var_1_1 == ((signed short int) var_1_20))) && ((last_1_var_1_18 && last_1_var_1_18) ? ((((((last_1_var_1_20) < ((last_1_var_1_20 * last_1_var_1_20))) ? (last_1_var_1_20) : ((last_1_var_1_20 * last_1_var_1_20)))) > last_1_var_1_20) ? (var_1_7 == ((unsigned char) var_1_8)) : (var_1_7 == ((unsigned char) var_1_8))) : (var_1_7 == ((unsigned char) var_1_8)))) && ((var_1_27 != (var_1_8 + var_1_7)) ? (var_1_9 == ((double) ((((var_1_10) < (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6))))) ? (var_1_10) : (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6)))))))) : (var_1_9 == ((double) ((((var_1_11) < (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? (var_1_11) : (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))))))) && (((var_1_13 - var_1_14) >= (var_1_15 - (var_1_16 + var_1_17))) ? (var_1_12 == ((signed long int) (var_1_20 + var_1_20))) : 1)) && (var_1_3 ? (var_1_2 ? (var_1_18 == ((unsigned char) (! var_1_19))) : 1) : 1)) && ((var_1_8 >= var_1_7) ? ((var_1_15 >= var_1_26) ? (var_1_20 == ((unsigned char) (var_1_21 - ((((((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) > (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) ? (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) : (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))))))) : (var_1_20 == ((unsigned char) var_1_24))) : (var_1_20 == ((unsigned char) var_1_22)))) && (var_1_26 == ((float) var_1_16))) && (var_1_27 == ((unsigned long int) 10u))
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

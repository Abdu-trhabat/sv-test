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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch45PS_CN_25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -256;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -10;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 57653;
unsigned short int var_1_9 = 4;
signed char var_1_10 = -4;
signed char var_1_11 = 2;
signed char var_1_12 = 64;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed char var_1_15 = 32;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 50;
float var_1_19 = 100.875;
unsigned char var_1_20 = 1;
float var_1_21 = 24.5;
float var_1_22 = 499.8;
float var_1_23 = 8.25;
float var_1_24 = 100.75;
double var_1_25 = 32.15;
signed short int var_1_26 = -16;
signed short int var_1_27 = 16;
signed long int var_1_28 = 10;
signed short int var_1_29 = 4;
signed short int var_1_30 = -256;
signed short int var_1_31 = 64;
double var_1_32 = 127.5;
double var_1_33 = 9.85;
double var_1_34 = 15.75;
double var_1_35 = 32.5;
double var_1_36 = 100.8;
void initially(void) {
}
void step(void) {
 if (var_1_20) {
  var_1_19 = ((((((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)))) > (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))))) ? (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)))) : (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))))));
 }
 var_1_25 = var_1_22;
 var_1_26 = var_1_27;
 var_1_28 = var_1_27;
 if (var_1_19 >= var_1_24) {
  var_1_29 = ((((((((-100) < 0 ) ? -(-100) : (-100))) < 0 ) ? -((((-100) < 0 ) ? -(-100) : (-100))) : ((((-100) < 0 ) ? -(-100) : (-100))))) + ((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))));
 }
 if (((((var_1_19) < (var_1_21)) ? (var_1_19) : (var_1_21))) < (((((((9.99999999995E10f) < (var_1_22)) ? (9.99999999995E10f) : (var_1_22))) < 0 ) ? -((((9.99999999995E10f) < (var_1_22)) ? (9.99999999995E10f) : (var_1_22))) : ((((9.99999999995E10f) < (var_1_22)) ? (9.99999999995E10f) : (var_1_22)))))) {
  var_1_32 = ((var_1_33 + ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) + var_1_35);
 }
 var_1_36 = var_1_23;
 if (var_1_8 > var_1_9) {
  var_1_10 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 } else {
  var_1_10 = (var_1_12 - (var_1_13 - 8));
 }
 if (var_1_2) {
  var_1_16 = (var_1_5 || var_1_17);
 }
 var_1_18 = var_1_8;
 unsigned long int stepLocal_2 = var_1_18;
 signed char stepLocal_1 = var_1_10;
 if (stepLocal_2 <= var_1_10) {
  if (var_1_10 <= stepLocal_1) {
   var_1_6 = var_1_10;
  }
 }
 var_1_7 = (((((var_1_8 - var_1_18)) < (var_1_9)) ? ((var_1_8 - var_1_18)) : (var_1_9)));
 if (! var_1_16) {
  if (var_1_16) {
   var_1_14 = ((32 + var_1_10) + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))));
  } else {
   var_1_14 = -50;
  }
 }
 signed long int stepLocal_3 = var_1_6 * (var_1_6 + var_1_8);
 if (var_1_14 >= stepLocal_3) {
  var_1_15 = ((((((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))));
 } else {
  var_1_15 = ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)));
 }
 signed long int stepLocal_0 = ~ var_1_15;
 if (var_1_16) {
  if (stepLocal_0 <= (var_1_10 + 100000000)) {
   if (! var_1_16) {
    var_1_1 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
   } else {
    var_1_1 = (var_1_15 + 32);
   }
  } else {
   var_1_1 = var_1_15;
  }
 } else {
  var_1_1 = var_1_15;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -126);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 63);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -32767);
 assume_abort_if_not(var_1_27 <= 32766);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -16383);
 assume_abort_if_not(var_1_30 <= 16383);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= -16383);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -230584.3009213691390e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691390e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -230584.3009213691390e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691390e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((((((var_1_16 ? (((~ var_1_15) <= (var_1_10 + 100000000)) ? ((! var_1_16) ? (var_1_1 == ((signed short int) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) : (var_1_1 == ((signed short int) (var_1_15 + 32)))) : (var_1_1 == ((signed short int) var_1_15))) : (var_1_1 == ((signed short int) var_1_15))) && ((var_1_18 <= var_1_10) ? ((var_1_10 <= var_1_10) ? (var_1_6 == ((signed long int) var_1_10)) : 1) : 1)) && (var_1_7 == ((unsigned short int) (((((var_1_8 - var_1_18)) < (var_1_9)) ? ((var_1_8 - var_1_18)) : (var_1_9)))))) && ((var_1_8 > var_1_9) ? (var_1_10 == ((signed char) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (var_1_10 == ((signed char) (var_1_12 - (var_1_13 - 8)))))) && ((! var_1_16) ? (var_1_16 ? (var_1_14 == ((signed short int) ((32 + var_1_10) + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) : (var_1_14 == ((signed short int) -50))) : 1)) && ((var_1_14 >= (var_1_6 * (var_1_6 + var_1_8))) ? (var_1_15 == ((signed char) ((((((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))))))) : (var_1_15 == ((signed char) ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))))))) && (var_1_2 ? (var_1_16 == ((unsigned char) (var_1_5 || var_1_17))) : 1)) && (var_1_18 == ((unsigned long int) var_1_8))
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

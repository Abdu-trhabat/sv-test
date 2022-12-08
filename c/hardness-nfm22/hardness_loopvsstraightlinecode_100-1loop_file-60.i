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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch60100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 128;
signed short int var_1_7 = 0;
signed short int var_1_8 = 28520;
signed short int var_1_9 = 128;
signed long int var_1_10 = 16;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 1;
double var_1_14 = 255.25;
float var_1_15 = 64.75;
double var_1_16 = 128.25;
double var_1_17 = 128.5;
float var_1_18 = -0.2;
double var_1_19 = 8.25;
double var_1_20 = 63.8;
double var_1_21 = 255.2;
double var_1_22 = 100000000000.35;
double var_1_23 = 5.4;
unsigned char var_1_24 = 1;
double var_1_25 = 32.25;
double var_1_26 = 63.5;
double var_1_27 = 32.8;
unsigned char var_1_28 = 1;
signed char var_1_29 = -32;
unsigned char var_1_30 = 0;
signed long int var_1_31 = -64;
signed long int var_1_33 = -2;
unsigned long int var_1_34 = 4;
unsigned long int var_1_35 = 3641277458;
float var_1_36 = 100.25;
unsigned short int var_1_38 = 32;
unsigned short int var_1_39 = 62252;
signed char var_1_40 = 64;
signed char var_1_41 = 100;
signed char var_1_42 = 1;
signed short int last_1_var_1_1 = 128;
double last_1_var_1_14 = 255.25;
unsigned char last_1_var_1_24 = 1;
unsigned char last_1_var_1_28 = 1;
signed long int last_1_var_1_31 = -64;
void initially(void) {
}
void step(void) {
 if ((((((last_1_var_1_1) > (var_1_12)) ? (last_1_var_1_1) : (var_1_12))) ^ last_1_var_1_31) > var_1_8) {
  var_1_38 = (var_1_39 - var_1_8);
 }
 signed long int stepLocal_4 = 128 + ((((var_1_7) < (var_1_38)) ? (var_1_7) : (var_1_38)));
 if (stepLocal_4 != ((((var_1_12) > (var_1_29)) ? (var_1_12) : (var_1_29)))) {
  var_1_34 = ((var_1_35 - var_1_9) - ((((var_1_8) > (var_1_12)) ? (var_1_8) : (var_1_12))));
 }
 signed long int stepLocal_1 = (32 % var_1_12) * var_1_38;
 if (stepLocal_1 >= (var_1_34 + ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) {
  var_1_11 = var_1_13;
 }
 if (! last_1_var_1_24) {
  if (last_1_var_1_14 == 2.94f) {
   if (var_1_20 > var_1_27) {
    if (var_1_8 <= var_1_9) {
     var_1_31 = var_1_7;
    }
   } else {
    var_1_31 = last_1_var_1_1;
   }
  } else {
   var_1_31 = -16;
  }
 } else {
  var_1_31 = var_1_29;
 }
 signed short int stepLocal_5 = var_1_8;
 if (var_1_31 >= stepLocal_5) {
  var_1_36 = (var_1_22 + 64.8f);
 }
 if (var_1_36 >= ((var_1_16 * var_1_15) / ((((1.2f) > (var_1_18)) ? (1.2f) : (var_1_18))))) {
  var_1_17 = (((((var_1_19 - ((((var_1_20) > (4.4)) ? (var_1_20) : (4.4))))) > ((var_1_21 + (var_1_22 + var_1_23)))) ? ((var_1_19 - ((((var_1_20) > (4.4)) ? (var_1_20) : (4.4))))) : ((var_1_21 + (var_1_22 + var_1_23)))));
 } else {
  var_1_17 = var_1_20;
 }
 signed long int stepLocal_3 = var_1_31 % ((((var_1_12) < (var_1_29)) ? (var_1_12) : (var_1_29)));
 if (stepLocal_3 <= var_1_7) {
  var_1_28 = (last_1_var_1_28 && var_1_30);
 }
 var_1_10 = (((((var_1_9 - var_1_8)) > (var_1_7)) ? ((var_1_9 - var_1_8)) : (var_1_7)));
 if ((var_1_18 / ((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) >= (var_1_19 - (var_1_26 + var_1_27))) {
  var_1_24 = (! var_1_13);
 }
 var_1_33 = (-10 + var_1_38);
 unsigned long int stepLocal_7 = var_1_35;
 unsigned char stepLocal_6 = var_1_24;
 if (stepLocal_6 && (! var_1_28)) {
  var_1_40 = (((((1) < (var_1_41)) ? (1) : (var_1_41))) - (var_1_42 + 4));
 } else {
  if (var_1_7 >= stepLocal_7) {
   var_1_40 = var_1_42;
  } else {
   var_1_40 = var_1_42;
  }
 }
 unsigned char stepLocal_0 = var_1_28;
 if (var_1_11) {
  if (stepLocal_0 && (var_1_17 <= ((((var_1_36) > (var_1_17)) ? (var_1_36) : (var_1_17))))) {
   if (var_1_17 >= var_1_17) {
    var_1_1 = (var_1_7 - (var_1_8 - var_1_9));
   } else {
    var_1_1 = var_1_9;
   }
  } else {
   var_1_1 = var_1_7;
  }
 }
 signed long int stepLocal_2 = var_1_10;
 if (var_1_12 < stepLocal_2) {
  if (var_1_36 >= ((var_1_36 + var_1_36) / var_1_15)) {
   var_1_14 = var_1_16;
  } else {
   var_1_14 = var_1_16;
  }
 } else {
  var_1_14 = var_1_16;
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 255);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -230584.3009213691390e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691390e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427387900e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427387900e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -128);
 assume_abort_if_not(var_1_29 <= 127);
 assume_abort_if_not(var_1_29 != 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 3221225470);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 32767);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -1);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_31 = var_1_31;
}
int property() {
 return ((((((((((((var_1_11 ? ((var_1_28 && (var_1_17 <= ((((var_1_36) > (var_1_17)) ? (var_1_36) : (var_1_17))))) ? ((var_1_17 >= var_1_17) ? (var_1_1 == ((signed short int) (var_1_7 - (var_1_8 - var_1_9)))) : (var_1_1 == ((signed short int) var_1_9))) : (var_1_1 == ((signed short int) var_1_7))) : 1) && (var_1_10 == ((signed long int) (((((var_1_9 - var_1_8)) > (var_1_7)) ? ((var_1_9 - var_1_8)) : (var_1_7)))))) && ((((32 % var_1_12) * var_1_38) >= (var_1_34 + ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_11 == ((unsigned char) var_1_13)) : 1)) && ((var_1_12 < var_1_10) ? ((var_1_36 >= ((var_1_36 + var_1_36) / var_1_15)) ? (var_1_14 == ((double) var_1_16)) : (var_1_14 == ((double) var_1_16))) : (var_1_14 == ((double) var_1_16)))) && ((var_1_36 >= ((var_1_16 * var_1_15) / ((((1.2f) > (var_1_18)) ? (1.2f) : (var_1_18))))) ? (var_1_17 == ((double) (((((var_1_19 - ((((var_1_20) > (4.4)) ? (var_1_20) : (4.4))))) > ((var_1_21 + (var_1_22 + var_1_23)))) ? ((var_1_19 - ((((var_1_20) > (4.4)) ? (var_1_20) : (4.4))))) : ((var_1_21 + (var_1_22 + var_1_23))))))) : (var_1_17 == ((double) var_1_20)))) && (((var_1_18 / ((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) >= (var_1_19 - (var_1_26 + var_1_27))) ? (var_1_24 == ((unsigned char) (! var_1_13))) : 1)) && (((var_1_31 % ((((var_1_12) < (var_1_29)) ? (var_1_12) : (var_1_29)))) <= var_1_7) ? (var_1_28 == ((unsigned char) (last_1_var_1_28 && var_1_30))) : 1)) && ((! last_1_var_1_24) ? ((last_1_var_1_14 == 2.94f) ? ((var_1_20 > var_1_27) ? ((var_1_8 <= var_1_9) ? (var_1_31 == ((signed long int) var_1_7)) : 1) : (var_1_31 == ((signed long int) last_1_var_1_1))) : (var_1_31 == ((signed long int) -16))) : (var_1_31 == ((signed long int) var_1_29)))) && (var_1_33 == ((signed long int) (-10 + var_1_38)))) && (((128 + ((((var_1_7) < (var_1_38)) ? (var_1_7) : (var_1_38)))) != ((((var_1_12) > (var_1_29)) ? (var_1_12) : (var_1_29)))) ? (var_1_34 == ((unsigned long int) ((var_1_35 - var_1_9) - ((((var_1_8) > (var_1_12)) ? (var_1_8) : (var_1_12)))))) : 1)) && ((var_1_31 >= var_1_8) ? (var_1_36 == ((float) (var_1_22 + 64.8f))) : 1)) && (((((((last_1_var_1_1) > (var_1_12)) ? (last_1_var_1_1) : (var_1_12))) ^ last_1_var_1_31) > var_1_8) ? (var_1_38 == ((unsigned short int) (var_1_39 - var_1_8))) : 1)) && ((var_1_24 && (! var_1_28)) ? (var_1_40 == ((signed char) (((((1) < (var_1_41)) ? (1) : (var_1_41))) - (var_1_42 + 4)))) : ((var_1_7 >= var_1_35) ? (var_1_40 == ((signed char) var_1_42)) : (var_1_40 == ((signed char) var_1_42))))
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

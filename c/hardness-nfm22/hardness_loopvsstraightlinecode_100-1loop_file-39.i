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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch39100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 200;
unsigned short int var_1_4 = 8;
unsigned short int var_1_5 = 5;
unsigned long int var_1_6 = 256;
float var_1_7 = 9999999999999.2;
float var_1_8 = 499.5;
float var_1_9 = 64.4;
float var_1_10 = 0.5;
float var_1_11 = 5.8;
float var_1_12 = 16.75;
float var_1_13 = 99.5;
signed short int var_1_15 = -10;
unsigned char var_1_17 = 0;
unsigned long int var_1_19 = 2743323310;
unsigned long int var_1_20 = 4162860161;
unsigned char var_1_21 = 0;
double var_1_22 = 99.7;
unsigned long int var_1_23 = 8;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 200;
float var_1_29 = 16.1;
float var_1_30 = 7.9;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 8;
signed short int last_1_var_1_15 = -10;
double last_1_var_1_22 = 99.7;
unsigned long int last_1_var_1_23 = 8;
unsigned char last_1_var_1_24 = 1;
unsigned char last_1_var_1_27 = 32;
unsigned char last_1_var_1_31 = 0;
void initially(void) {
}
void step(void) {
 if ((var_1_4 >= last_1_var_1_24) && (last_1_var_1_27 >= ((((var_1_5) < (last_1_var_1_24)) ? (var_1_5) : (last_1_var_1_24))))) {
  var_1_6 = 200u;
 }
 if (last_1_var_1_31) {
  if (last_1_var_1_31) {
   if ((((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))) - ((((10u) > (var_1_5)) ? (10u) : (var_1_5)))) != var_1_4) {
    var_1_17 = 0;
   } else {
    var_1_17 = 0;
   }
  } else {
   var_1_17 = var_1_21;
  }
 } else {
  var_1_17 = var_1_21;
 }
 if (var_1_17) {
  var_1_31 = (! var_1_32);
 } else {
  var_1_31 = (! 1);
 }
 unsigned long int stepLocal_0 = (last_1_var_1_23 * last_1_var_1_15) << (var_1_4 - var_1_5);
 if (stepLocal_0 <= -128) {
  var_1_1 = (var_1_5 + var_1_4);
 } else {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 unsigned char stepLocal_4 = var_1_17;
 if (stepLocal_4 || (last_1_var_1_22 <= var_1_12)) {
  var_1_22 = ((((200.3) < (var_1_9)) ? (200.3) : (var_1_9)));
 } else {
  var_1_22 = (var_1_8 - var_1_9);
 }
 signed long int stepLocal_6 = (((var_1_25) > (256)) ? (var_1_25) : (256));
 if (var_1_5 <= stepLocal_6) {
  var_1_27 = ((var_1_28 - var_1_4) - var_1_5);
 } else {
  var_1_27 = (((((var_1_25) > (var_1_28)) ? (var_1_25) : (var_1_28))) - var_1_5);
 }
 var_1_29 = (var_1_12 + ((((9.999999999999995E14f) > (var_1_13)) ? (9.999999999999995E14f) : (var_1_13))));
 if (var_1_19 != 25u) {
  if (! var_1_21) {
   var_1_30 = var_1_8;
  }
 } else {
  var_1_30 = (var_1_10 - var_1_9);
 }
 if (var_1_31) {
  if ((var_1_6 / var_1_25) <= var_1_4) {
   var_1_33 = var_1_5;
  }
 }
 signed long int stepLocal_5 = var_1_33 % var_1_4;
 if (stepLocal_5 > var_1_5) {
  var_1_24 = (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_4);
 }
 unsigned long int stepLocal_3 = var_1_6;
 signed long int stepLocal_2 = 128;
 if (var_1_1 > stepLocal_3) {
  var_1_15 = last_1_var_1_15;
 } else {
  if (var_1_33 != stepLocal_2) {
   var_1_15 = (var_1_5 - 1);
  } else {
   var_1_15 = var_1_27;
  }
 }
 if (((((var_1_1) < ((var_1_4 - var_1_5))) ? (var_1_1) : ((var_1_4 - var_1_5)))) > var_1_27) {
  if ((5 * var_1_27) <= var_1_24) {
   if (var_1_5 >= var_1_1) {
    var_1_23 = var_1_24;
   } else {
    var_1_23 = var_1_5;
   }
  } else {
   var_1_23 = var_1_4;
  }
 }
 signed long int stepLocal_1 = var_1_33 + var_1_5;
 if (stepLocal_1 > var_1_24) {
  var_1_7 = (((((((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10)) > (((((var_1_11) > ((var_1_12 + var_1_13))) ? (var_1_11) : ((var_1_12 + var_1_13)))))) ? ((((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10)) : (((((var_1_11) > ((var_1_12 + var_1_13))) ? (var_1_11) : ((var_1_12 + var_1_13)))))));
 } else {
  if (! var_1_31) {
   var_1_7 = ((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13)));
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 8);
 assume_abort_if_not(var_1_4 <= 17);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 8);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967295);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967295);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 127);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 127);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 190);
 assume_abort_if_not(var_1_28 <= 254);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
}
void updateLastVariables() {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_31 = var_1_31;
}
int property() {
 return (((((((((((((((last_1_var_1_23 * last_1_var_1_15) << (var_1_4 - var_1_5)) <= -128) ? (var_1_1 == ((unsigned char) (var_1_5 + var_1_4))) : (var_1_1 == ((unsigned char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) && (((var_1_4 >= last_1_var_1_24) && (last_1_var_1_27 >= ((((var_1_5) < (last_1_var_1_24)) ? (var_1_5) : (last_1_var_1_24))))) ? (var_1_6 == ((unsigned long int) 200u)) : 1)) && (((var_1_33 + var_1_5) > var_1_24) ? (var_1_7 == ((float) (((((((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10)) > (((((var_1_11) > ((var_1_12 + var_1_13))) ? (var_1_11) : ((var_1_12 + var_1_13)))))) ? ((((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10)) : (((((var_1_11) > ((var_1_12 + var_1_13))) ? (var_1_11) : ((var_1_12 + var_1_13))))))))) : ((! var_1_31) ? (var_1_7 == ((float) ((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))))) : 1))) && ((var_1_1 > var_1_6) ? (var_1_15 == ((signed short int) last_1_var_1_15)) : ((var_1_33 != 128) ? (var_1_15 == ((signed short int) (var_1_5 - 1))) : (var_1_15 == ((signed short int) var_1_27))))) && (last_1_var_1_31 ? (last_1_var_1_31 ? (((((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))) - ((((10u) > (var_1_5)) ? (10u) : (var_1_5)))) != var_1_4) ? (var_1_17 == ((unsigned char) 0)) : (var_1_17 == ((unsigned char) 0))) : (var_1_17 == ((unsigned char) var_1_21))) : (var_1_17 == ((unsigned char) var_1_21)))) && ((var_1_17 || (last_1_var_1_22 <= var_1_12)) ? (var_1_22 == ((double) ((((200.3) < (var_1_9)) ? (200.3) : (var_1_9))))) : (var_1_22 == ((double) (var_1_8 - var_1_9))))) && ((((((var_1_1) < ((var_1_4 - var_1_5))) ? (var_1_1) : ((var_1_4 - var_1_5)))) > var_1_27) ? (((5 * var_1_27) <= var_1_24) ? ((var_1_5 >= var_1_1) ? (var_1_23 == ((unsigned long int) var_1_24)) : (var_1_23 == ((unsigned long int) var_1_5))) : (var_1_23 == ((unsigned long int) var_1_4))) : 1)) && (((var_1_33 % var_1_4) > var_1_5) ? (var_1_24 == ((unsigned char) (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_4))) : 1)) && ((var_1_5 <= ((((var_1_25) > (256)) ? (var_1_25) : (256)))) ? (var_1_27 == ((unsigned char) ((var_1_28 - var_1_4) - var_1_5))) : (var_1_27 == ((unsigned char) (((((var_1_25) > (var_1_28)) ? (var_1_25) : (var_1_28))) - var_1_5))))) && (var_1_29 == ((float) (var_1_12 + ((((9.999999999999995E14f) > (var_1_13)) ? (9.999999999999995E14f) : (var_1_13))))))) && ((var_1_19 != 25u) ? ((! var_1_21) ? (var_1_30 == ((float) var_1_8)) : 1) : (var_1_30 == ((float) (var_1_10 - var_1_9))))) && (var_1_17 ? (var_1_31 == ((unsigned char) (! var_1_32))) : (var_1_31 == ((unsigned char) (! 1))))) && (var_1_31 ? (((var_1_6 / var_1_25) <= var_1_4) ? (var_1_33 == ((unsigned char) var_1_5)) : 1) : 1)
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

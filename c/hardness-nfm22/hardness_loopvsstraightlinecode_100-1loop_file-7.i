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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 5;
signed char var_1_6 = -8;
unsigned short int var_1_7 = 16;
unsigned char var_1_8 = 1;
unsigned short int var_1_10 = 47037;
unsigned char var_1_12 = 1;
float var_1_13 = 1.2;
float var_1_14 = 100000000000.25;
float var_1_15 = 25.4;
float var_1_16 = -0.8;
float var_1_17 = 10000000.625;
float var_1_18 = 0.19999999999999996;
float var_1_19 = -0.25;
float var_1_20 = 0.6;
signed char var_1_21 = -128;
signed char var_1_22 = 4;
signed char var_1_23 = 10;
unsigned char var_1_24 = 64;
signed long int var_1_25 = 1939664001;
unsigned char var_1_26 = 1;
signed short int var_1_27 = 1;
signed char var_1_28 = -100;
signed long int var_1_30 = -2;
unsigned long int var_1_31 = 64;
double var_1_32 = 99.4;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 200;
unsigned char var_1_37 = 2;
signed char var_1_38 = -5;
signed char var_1_39 = -10;
signed short int last_1_var_1_27 = 1;
unsigned char last_1_var_1_33 = 128;
signed char last_1_var_1_38 = -5;
void initially(void) {
}
void step(void) {
 if (-64 <= last_1_var_1_38) {
  if (((last_1_var_1_33 - last_1_var_1_33) / var_1_10) > (var_1_23 - (var_1_25 - last_1_var_1_27))) {
   var_1_24 = ((((var_1_23) > (var_1_26)) ? (var_1_23) : (var_1_26)));
  } else {
   var_1_24 = 4;
  }
 } else {
  var_1_24 = var_1_23;
 }
 if (var_1_8) {
  var_1_20 = var_1_15;
 }
 if (var_1_16 >= (9.99999999999994E13f * var_1_20)) {
  var_1_21 = (var_1_22 - ((((4) > (var_1_23)) ? (4) : (var_1_23))));
 }
 if ((((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16))) * var_1_19) <= (0.25f / 5.75f)) {
  if (var_1_12) {
   var_1_30 = var_1_26;
  } else {
   var_1_30 = var_1_22;
  }
 } else {
  var_1_30 = -1;
 }
 var_1_33 = ((((((var_1_34 + var_1_35)) > ((var_1_36 - var_1_37))) ? ((var_1_34 + var_1_35)) : ((var_1_36 - var_1_37)))) - var_1_23);
 unsigned char stepLocal_3 = var_1_37;
 if (var_1_34 <= stepLocal_3) {
  if (var_1_20 > var_1_20) {
   var_1_38 = ((((((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) > (var_1_22)) ? (((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) : (var_1_22)));
  } else {
   var_1_38 = (var_1_37 + var_1_39);
  }
 } else {
  var_1_38 = var_1_22;
 }
 unsigned char stepLocal_1 = var_1_33;
 if (stepLocal_1 <= var_1_30) {
  if (var_1_8) {
   var_1_7 = ((((var_1_33) > ((var_1_10 - var_1_24))) ? (var_1_33) : ((var_1_10 - var_1_24))));
  } else {
   var_1_7 = (var_1_10 - var_1_24);
  }
 } else {
  if (var_1_12) {
   var_1_7 = var_1_33;
  } else {
   var_1_7 = var_1_10;
  }
 }
 signed long int stepLocal_2 = - var_1_7;
 if (stepLocal_2 <= var_1_24) {
  var_1_13 = ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)));
 } else {
  var_1_13 = (((((var_1_16) > ((var_1_17 + var_1_18))) ? (var_1_16) : ((var_1_17 + var_1_18)))) + var_1_19);
 }
 if ((var_1_22 / var_1_28) == 32) {
  var_1_31 = ((((var_1_25) < (var_1_38)) ? (var_1_25) : (var_1_38)));
 } else {
  if ((((((- var_1_13)) < ((- var_1_19))) ? ((- var_1_13)) : ((- var_1_19)))) > 8.95f) {
   if (var_1_33 <= var_1_33) {
    var_1_31 = var_1_33;
   }
  } else {
   var_1_31 = var_1_33;
  }
 }
 if ((~ (var_1_7 ^ var_1_33)) >= var_1_7) {
  var_1_32 = var_1_15;
 } else {
  if (var_1_8) {
   var_1_32 = var_1_19;
  }
 }
 unsigned char stepLocal_0 = var_1_24;
 if (var_1_30 > stepLocal_0) {
  if (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) < var_1_32) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = var_1_6;
  }
 } else {
  var_1_1 = var_1_6;
 }
 if (var_1_14 <= var_1_15) {
  var_1_27 = (var_1_26 - ((((var_1_21) < ((var_1_23 + var_1_24))) ? (var_1_21) : ((var_1_23 + var_1_24)))));
 } else {
  var_1_27 = var_1_30;
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -1);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -128);
 assume_abort_if_not(var_1_28 <= 127);
 assume_abort_if_not(var_1_28 != 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 63);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 64);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 190);
 assume_abort_if_not(var_1_36 <= 254);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -63);
 assume_abort_if_not(var_1_39 <= 63);
}
void updateLastVariables() {
 last_1_var_1_27 = var_1_27;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_38 = var_1_38;
}
int property() {
 return ((((((((((((var_1_30 > var_1_24) ? ((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) < var_1_32) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) var_1_6))) : (var_1_1 == ((signed char) var_1_6))) && ((var_1_33 <= var_1_30) ? (var_1_8 ? (var_1_7 == ((unsigned short int) ((((var_1_33) > ((var_1_10 - var_1_24))) ? (var_1_33) : ((var_1_10 - var_1_24)))))) : (var_1_7 == ((unsigned short int) (var_1_10 - var_1_24)))) : (var_1_12 ? (var_1_7 == ((unsigned short int) var_1_33)) : (var_1_7 == ((unsigned short int) var_1_10))))) && (((- var_1_7) <= var_1_24) ? (var_1_13 == ((float) ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))))) : (var_1_13 == ((float) (((((var_1_16) > ((var_1_17 + var_1_18))) ? (var_1_16) : ((var_1_17 + var_1_18)))) + var_1_19))))) && (var_1_8 ? (var_1_20 == ((float) var_1_15)) : 1)) && ((var_1_16 >= (9.99999999999994E13f * var_1_20)) ? (var_1_21 == ((signed char) (var_1_22 - ((((4) > (var_1_23)) ? (4) : (var_1_23)))))) : 1)) && ((-64 <= last_1_var_1_38) ? ((((last_1_var_1_33 - last_1_var_1_33) / var_1_10) > (var_1_23 - (var_1_25 - last_1_var_1_27))) ? (var_1_24 == ((unsigned char) ((((var_1_23) > (var_1_26)) ? (var_1_23) : (var_1_26))))) : (var_1_24 == ((unsigned char) 4))) : (var_1_24 == ((unsigned char) var_1_23)))) && ((var_1_14 <= var_1_15) ? (var_1_27 == ((signed short int) (var_1_26 - ((((var_1_21) < ((var_1_23 + var_1_24))) ? (var_1_21) : ((var_1_23 + var_1_24))))))) : (var_1_27 == ((signed short int) var_1_30)))) && (((((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16))) * var_1_19) <= (0.25f / 5.75f)) ? (var_1_12 ? (var_1_30 == ((signed long int) var_1_26)) : (var_1_30 == ((signed long int) var_1_22))) : (var_1_30 == ((signed long int) -1)))) && (((var_1_22 / var_1_28) == 32) ? (var_1_31 == ((unsigned long int) ((((var_1_25) < (var_1_38)) ? (var_1_25) : (var_1_38))))) : (((((((- var_1_13)) < ((- var_1_19))) ? ((- var_1_13)) : ((- var_1_19)))) > 8.95f) ? ((var_1_33 <= var_1_33) ? (var_1_31 == ((unsigned long int) var_1_33)) : 1) : (var_1_31 == ((unsigned long int) var_1_33))))) && (((~ (var_1_7 ^ var_1_33)) >= var_1_7) ? (var_1_32 == ((double) var_1_15)) : (var_1_8 ? (var_1_32 == ((double) var_1_19)) : 1))) && (var_1_33 == ((unsigned char) ((((((var_1_34 + var_1_35)) > ((var_1_36 - var_1_37))) ? ((var_1_34 + var_1_35)) : ((var_1_36 - var_1_37)))) - var_1_23)))) && ((var_1_34 <= var_1_37) ? ((var_1_20 > var_1_20) ? (var_1_38 == ((signed char) ((((((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) > (var_1_22)) ? (((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) : (var_1_22))))) : (var_1_38 == ((signed char) (var_1_37 + var_1_39)))) : (var_1_38 == ((signed char) var_1_22)))
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

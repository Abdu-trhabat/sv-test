// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -2;
signed char var_1_4 = 0;
signed char var_1_5 = -5;
signed short int var_1_6 = -32;
signed char var_1_7 = 8;
unsigned char var_1_8 = 2;
float var_1_10 = 15.6;
unsigned char var_1_11 = 10;
unsigned short int var_1_12 = 64;
signed long int var_1_13 = -8;
unsigned long int var_1_14 = 64;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
float var_1_17 = 9.75;
float var_1_18 = 0.5;
signed short int var_1_19 = -128;
unsigned char var_1_21 = 1;
unsigned long int var_1_22 = 3552880340;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned long int var_1_25 = 16;
float var_1_26 = 7.25;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 16;
float var_1_29 = 99999999999999.8;
float last_1_var_1_17 = 9.75;
unsigned char last_1_var_1_21 = 1;
unsigned long int last_1_var_1_25 = 16;
float last_1_var_1_26 = 7.25;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_21) {
  if ((last_1_var_1_26 * last_1_var_1_17) < (last_1_var_1_17 * var_1_10)) {
   var_1_25 = (var_1_11 + (1556814297u - var_1_4));
  } else {
   if (last_1_var_1_21) {
    var_1_25 = last_1_var_1_25;
   }
  }
 }
 if (var_1_15 || var_1_16) {
  var_1_14 = ((last_1_var_1_25 + 1u) + var_1_11);
 }
 if (var_1_5 > (var_1_14 % var_1_7)) {
  var_1_6 = var_1_5;
 } else {
  var_1_6 = (var_1_5 + var_1_7);
 }
 if ((64 - ((((-64) < 0 ) ? -(-64) : (-64)))) <= (var_1_6 + (var_1_25 * var_1_4))) {
  var_1_17 = 100.5f;
 } else {
  var_1_17 = var_1_18;
 }
 var_1_12 = var_1_11;
 unsigned char stepLocal_3 = (256u & var_1_14) == (var_1_22 - var_1_14);
 unsigned long int stepLocal_2 = var_1_14;
 if (stepLocal_3 || last_1_var_1_21) {
  if (var_1_12 != stepLocal_2) {
   var_1_21 = var_1_23;
  } else {
   var_1_21 = var_1_24;
  }
 } else {
  var_1_21 = var_1_24;
 }
 if (var_1_21) {
  if ((var_1_27 - (100 - var_1_28)) <= (var_1_25 * var_1_12)) {
   if (var_1_14 <= ((((var_1_28) > (var_1_11)) ? (var_1_28) : (var_1_11)))) {
    if (var_1_4 >= var_1_25) {
     var_1_26 = ((((var_1_18) < (var_1_29)) ? (var_1_18) : (var_1_29)));
    } else {
     var_1_26 = var_1_18;
    }
   } else {
    var_1_26 = var_1_18;
   }
  }
 } else {
  var_1_26 = var_1_29;
 }
 unsigned char stepLocal_0 = var_1_7 < (var_1_5 * -100);
 if (((var_1_26 / var_1_10) < 255.625f) && stepLocal_0) {
  var_1_8 = (((((128 - var_1_4)) > (var_1_11)) ? ((128 - var_1_4)) : (var_1_11)));
 } else {
  var_1_8 = var_1_4;
 }
 if ((var_1_17 + (var_1_10 + var_1_26)) > (var_1_18 * var_1_17)) {
  if (var_1_21) {
   var_1_19 = var_1_7;
  } else {
   var_1_19 = var_1_12;
  }
 }
 if (-2 == var_1_25) {
  if ((var_1_25 * var_1_19) <= -500) {
   var_1_1 = ((((2 - var_1_4) < 0 ) ? -(2 - var_1_4) : (2 - var_1_4)));
  } else {
   var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  }
 } else {
  var_1_1 = (var_1_5 + 5);
 }
 unsigned long int stepLocal_1 = (var_1_25 * var_1_11) / 10;
 if (stepLocal_1 <= var_1_5) {
  var_1_13 = (var_1_7 + (var_1_11 - ((((var_1_14) < (var_1_19)) ? (var_1_14) : (var_1_19)))));
 } else {
  if ((- (- var_1_17)) < var_1_10) {
   var_1_13 = (var_1_7 + var_1_5);
  } else {
   var_1_13 = var_1_4;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 assume_abort_if_not(var_1_7 != 0);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(var_1_10 != 0.0F);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 255);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_26 = var_1_26;
}
int property(void) {
 return (((((((((((-2 == var_1_25) ? (((var_1_25 * var_1_19) <= -500) ? (var_1_1 == ((signed char) ((((2 - var_1_4) < 0 ) ? -(2 - var_1_4) : (2 - var_1_4))))) : (var_1_1 == ((signed char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) : (var_1_1 == ((signed char) (var_1_5 + 5)))) && ((var_1_5 > (var_1_14 % var_1_7)) ? (var_1_6 == ((signed short int) var_1_5)) : (var_1_6 == ((signed short int) (var_1_5 + var_1_7))))) && ((((var_1_26 / var_1_10) < 255.625f) && (var_1_7 < (var_1_5 * -100))) ? (var_1_8 == ((unsigned char) (((((128 - var_1_4)) > (var_1_11)) ? ((128 - var_1_4)) : (var_1_11))))) : (var_1_8 == ((unsigned char) var_1_4)))) && (var_1_12 == ((unsigned short int) var_1_11))) && ((((var_1_25 * var_1_11) / 10) <= var_1_5) ? (var_1_13 == ((signed long int) (var_1_7 + (var_1_11 - ((((var_1_14) < (var_1_19)) ? (var_1_14) : (var_1_19))))))) : (((- (- var_1_17)) < var_1_10) ? (var_1_13 == ((signed long int) (var_1_7 + var_1_5))) : (var_1_13 == ((signed long int) var_1_4))))) && ((var_1_15 || var_1_16) ? (var_1_14 == ((unsigned long int) ((last_1_var_1_25 + 1u) + var_1_11))) : 1)) && (((64 - ((((-64) < 0 ) ? -(-64) : (-64)))) <= (var_1_6 + (var_1_25 * var_1_4))) ? (var_1_17 == ((float) 100.5f)) : (var_1_17 == ((float) var_1_18)))) && (((var_1_17 + (var_1_10 + var_1_26)) > (var_1_18 * var_1_17)) ? (var_1_21 ? (var_1_19 == ((signed short int) var_1_7)) : (var_1_19 == ((signed short int) var_1_12))) : 1)) && ((((256u & var_1_14) == (var_1_22 - var_1_14)) || last_1_var_1_21) ? ((var_1_12 != var_1_14) ? (var_1_21 == ((unsigned char) var_1_23)) : (var_1_21 == ((unsigned char) var_1_24))) : (var_1_21 == ((unsigned char) var_1_24)))) && (last_1_var_1_21 ? (((last_1_var_1_26 * last_1_var_1_17) < (last_1_var_1_17 * var_1_10)) ? (var_1_25 == ((unsigned long int) (var_1_11 + (1556814297u - var_1_4)))) : (last_1_var_1_21 ? (var_1_25 == ((unsigned long int) last_1_var_1_25)) : 1)) : 1)) && (var_1_21 ? (((var_1_27 - (100 - var_1_28)) <= (var_1_25 * var_1_12)) ? ((var_1_14 <= ((((var_1_28) > (var_1_11)) ? (var_1_28) : (var_1_11)))) ? ((var_1_4 >= var_1_25) ? (var_1_26 == ((float) ((((var_1_18) < (var_1_29)) ? (var_1_18) : (var_1_29))))) : (var_1_26 == ((float) var_1_18))) : (var_1_26 == ((float) var_1_18))) : 1) : (var_1_26 == ((float) var_1_29)))
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

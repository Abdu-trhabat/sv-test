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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 4;
signed long int var_1_5 = 5;
signed long int var_1_6 = 128;
signed char var_1_7 = 4;
signed char var_1_8 = 32;
signed char var_1_9 = 10;
signed long int var_1_10 = -256;
unsigned char var_1_11 = 1;
float var_1_12 = 8.52;
float var_1_13 = 7.75;
float var_1_14 = 10.5;
float var_1_15 = 32.25;
float var_1_16 = 3.75;
float var_1_17 = 1000000000.6;
float var_1_18 = 10.5;
signed char var_1_19 = 32;
unsigned short int var_1_20 = 0;
signed long int var_1_21 = 1221684014;
unsigned char var_1_22 = 10;
signed char var_1_23 = -4;
signed char var_1_24 = 2;
unsigned short int var_1_25 = 0;
unsigned long int var_1_26 = 25;
unsigned long int var_1_27 = 256;
unsigned long int var_1_28 = 0;
unsigned long int var_1_29 = 64;
signed long int var_1_30 = 5;
unsigned long int last_1_var_1_29 = 64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = var_1_8 / var_1_4;
 if (last_1_var_1_29 >= stepLocal_0) {
  var_1_15 = (var_1_16 + (var_1_17 + var_1_18));
 } else {
  var_1_15 = var_1_16;
 }
 if (var_1_11) {
  var_1_10 = (var_1_7 - (var_1_3 + 25));
 } else {
  var_1_10 = var_1_8;
 }
 if (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) <= var_1_4) {
  var_1_12 = ((((var_1_13 - 4.25f) < 0 ) ? -(var_1_13 - 4.25f) : (var_1_13 - 4.25f)));
 } else {
  var_1_12 = (var_1_13 - (8.966829933912052E18f - var_1_14));
 }
 if ((var_1_5 > (~ var_1_7)) || var_1_11) {
  var_1_27 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
 }
 if (((var_1_10 / var_1_3) / var_1_4) >= (var_1_5 - var_1_6)) {
  var_1_1 = (var_1_7 - (var_1_8 + var_1_9));
 } else {
  var_1_1 = var_1_8;
 }
 unsigned long int stepLocal_1 = var_1_9 + var_1_27;
 if (var_1_6 <= stepLocal_1) {
  if (var_1_13 != ((((-0.8f) < (var_1_18)) ? (-0.8f) : (var_1_18)))) {
   if (var_1_11) {
    var_1_19 = var_1_7;
   } else {
    var_1_19 = var_1_8;
   }
  } else {
   var_1_19 = var_1_7;
  }
 }
 signed long int stepLocal_3 = var_1_6;
 unsigned char stepLocal_2 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) <= var_1_5;
 if (var_1_10 >= stepLocal_3) {
  if (stepLocal_2 || var_1_11) {
   var_1_23 = var_1_8;
  }
 } else {
  var_1_23 = var_1_9;
 }
 if ((var_1_8 | var_1_9) > ((var_1_21 - 50) >> (var_1_22 + 4))) {
  if (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) != var_1_14) {
   if ((- var_1_15) >= var_1_12) {
    var_1_20 = var_1_4;
   } else {
    var_1_20 = var_1_9;
   }
  } else {
   var_1_20 = var_1_3;
  }
 }
 unsigned char stepLocal_7 = var_1_11;
 signed long int stepLocal_6 = 128;
 if (! (last_1_var_1_29 >= var_1_20)) {
  if ((var_1_16 <= var_1_18) || stepLocal_7) {
   if (stepLocal_6 == ((var_1_10 + var_1_22) >> var_1_30)) {
    var_1_29 = var_1_20;
   }
  }
 } else {
  var_1_29 = var_1_10;
 }
 if (var_1_11) {
  if (var_1_5 > (var_1_29 / var_1_4)) {
   var_1_26 = ((((var_1_21) > (var_1_3)) ? (var_1_21) : (var_1_3)));
  }
 }
 unsigned long int stepLocal_5 = var_1_10 + (var_1_27 - var_1_3);
 if ((var_1_9 | var_1_26) != stepLocal_5) {
  var_1_25 = (var_1_8 + var_1_9);
 }
 unsigned short int stepLocal_4 = var_1_25;
 if (stepLocal_4 < (var_1_7 - var_1_22)) {
  var_1_24 = (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) + var_1_22);
 } else {
  var_1_24 = var_1_7;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 15);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 4294967294);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 30);
}
void updateLastVariables(void) {
 last_1_var_1_29 = var_1_29;
}
int property(void) {
 return ((((((((((((((var_1_10 / var_1_3) / var_1_4) >= (var_1_5 - var_1_6)) ? (var_1_1 == ((signed char) (var_1_7 - (var_1_8 + var_1_9)))) : (var_1_1 == ((signed char) var_1_8))) && (var_1_11 ? (var_1_10 == ((signed long int) (var_1_7 - (var_1_3 + 25)))) : (var_1_10 == ((signed long int) var_1_8)))) && ((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) <= var_1_4) ? (var_1_12 == ((float) ((((var_1_13 - 4.25f) < 0 ) ? -(var_1_13 - 4.25f) : (var_1_13 - 4.25f))))) : (var_1_12 == ((float) (var_1_13 - (8.966829933912052E18f - var_1_14)))))) && ((last_1_var_1_29 >= (var_1_8 / var_1_4)) ? (var_1_15 == ((float) (var_1_16 + (var_1_17 + var_1_18)))) : (var_1_15 == ((float) var_1_16)))) && ((var_1_6 <= (var_1_9 + var_1_27)) ? ((var_1_13 != ((((-0.8f) < (var_1_18)) ? (-0.8f) : (var_1_18)))) ? (var_1_11 ? (var_1_19 == ((signed char) var_1_7)) : (var_1_19 == ((signed char) var_1_8))) : (var_1_19 == ((signed char) var_1_7))) : 1)) && (((var_1_8 | var_1_9) > ((var_1_21 - 50) >> (var_1_22 + 4))) ? ((((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) != var_1_14) ? (((- var_1_15) >= var_1_12) ? (var_1_20 == ((unsigned short int) var_1_4)) : (var_1_20 == ((unsigned short int) var_1_9))) : (var_1_20 == ((unsigned short int) var_1_3))) : 1)) && ((var_1_10 >= var_1_6) ? (((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) <= var_1_5) || var_1_11) ? (var_1_23 == ((signed char) var_1_8)) : 1) : (var_1_23 == ((signed char) var_1_9)))) && ((var_1_25 < (var_1_7 - var_1_22)) ? (var_1_24 == ((signed char) (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) + var_1_22))) : (var_1_24 == ((signed char) var_1_7)))) && (((var_1_9 | var_1_26) != (var_1_10 + (var_1_27 - var_1_3))) ? (var_1_25 == ((unsigned short int) (var_1_8 + var_1_9))) : 1)) && (var_1_11 ? ((var_1_5 > (var_1_29 / var_1_4)) ? (var_1_26 == ((unsigned long int) ((((var_1_21) > (var_1_3)) ? (var_1_21) : (var_1_3))))) : 1) : 1)) && (((var_1_5 > (~ var_1_7)) || var_1_11) ? (var_1_27 == ((unsigned long int) ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) : 1)) && ((! (last_1_var_1_29 >= var_1_20)) ? (((var_1_16 <= var_1_18) || var_1_11) ? ((128 == ((var_1_10 + var_1_22) >> var_1_30)) ? (var_1_29 == ((unsigned long int) var_1_20)) : 1) : 1) : (var_1_29 == ((unsigned long int) var_1_10)))
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

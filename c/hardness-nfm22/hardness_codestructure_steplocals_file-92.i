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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 100;
unsigned long int var_1_2 = 1;
unsigned long int var_1_3 = 4;
float var_1_4 = 15.4;
float var_1_5 = 8.35;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 53946;
unsigned short int var_1_11 = 1;
unsigned long int var_1_12 = 8;
double var_1_13 = 8.25;
signed long int var_1_14 = -256;
double var_1_15 = 0.19999999999999996;
signed long int var_1_16 = -16;
signed char var_1_17 = 1;
signed char var_1_18 = 4;
signed char var_1_19 = 64;
signed long int var_1_20 = 1;
signed long int var_1_21 = 1000000000;
signed long int var_1_22 = 32;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_2 == var_1_3;
 if (stepLocal_0 && (var_1_4 >= var_1_5)) {
  if (var_1_6) {
   if (var_1_7) {
    var_1_1 = ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)));
   } else {
    var_1_1 = ((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)));
   }
  } else {
   var_1_1 = (((((46167) > (var_1_10)) ? (46167) : (var_1_10))) - var_1_11);
  }
 } else {
  var_1_1 = var_1_10;
 }
 if ((((((var_1_11) < (16)) ? (var_1_11) : (16))) >> var_1_10) >= var_1_3) {
  if (var_1_7) {
   var_1_12 = var_1_10;
  }
 }
 unsigned long int stepLocal_1 = (((var_1_12) < (var_1_8)) ? (var_1_12) : (var_1_8));
 if ((((((var_1_10) < (var_1_3)) ? (var_1_10) : (var_1_3))) + (var_1_9 % var_1_14)) >= stepLocal_1) {
  var_1_13 = var_1_15;
 } else {
  var_1_13 = var_1_15;
 }
 unsigned char stepLocal_3 = var_1_7;
 unsigned char stepLocal_2 = var_1_6;
 if (stepLocal_2 && (var_1_9 < (var_1_10 + var_1_12))) {
  if (stepLocal_3 && var_1_6) {
   var_1_16 = var_1_10;
  }
 } else {
  var_1_16 = var_1_8;
 }
 var_1_17 = (4 - ((((var_1_18) < ((var_1_19 - 1))) ? (var_1_18) : ((var_1_19 - 1)))));
 unsigned long int stepLocal_4 = var_1_12;
 if (var_1_6) {
  var_1_20 = ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10);
 } else {
  if ((~ var_1_19) == stepLocal_4) {
   var_1_20 = var_1_22;
  } else {
   var_1_20 = var_1_10;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -2147483648);
 assume_abort_if_not(var_1_14 <= 2147483647);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 63);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 536870911);
 assume_abort_if_not(var_1_21 <= 1073741823);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= -2147483647);
 assume_abort_if_not(var_1_22 <= 2147483646);
}
void updateLastVariables() {
}
int property() {
 return (((((((var_1_2 == var_1_3) && (var_1_4 >= var_1_5)) ? (var_1_6 ? (var_1_7 ? (var_1_1 == ((unsigned short int) ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) : (var_1_1 == ((unsigned short int) ((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))))) : (var_1_1 == ((unsigned short int) (((((46167) > (var_1_10)) ? (46167) : (var_1_10))) - var_1_11)))) : (var_1_1 == ((unsigned short int) var_1_10))) && (((((((var_1_11) < (16)) ? (var_1_11) : (16))) >> var_1_10) >= var_1_3) ? (var_1_7 ? (var_1_12 == ((unsigned long int) var_1_10)) : 1) : 1)) && (((((((var_1_10) < (var_1_3)) ? (var_1_10) : (var_1_3))) + (var_1_9 % var_1_14)) >= ((((var_1_12) < (var_1_8)) ? (var_1_12) : (var_1_8)))) ? (var_1_13 == ((double) var_1_15)) : (var_1_13 == ((double) var_1_15)))) && ((var_1_6 && (var_1_9 < (var_1_10 + var_1_12))) ? ((var_1_7 && var_1_6) ? (var_1_16 == ((signed long int) var_1_10)) : 1) : (var_1_16 == ((signed long int) var_1_8)))) && (var_1_17 == ((signed char) (4 - ((((var_1_18) < ((var_1_19 - 1))) ? (var_1_18) : ((var_1_19 - 1)))))))) && (var_1_6 ? (var_1_20 == ((signed long int) ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10))) : (((~ var_1_19) == var_1_12) ? (var_1_20 == ((signed long int) var_1_22)) : (var_1_20 == ((signed long int) var_1_10))))
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

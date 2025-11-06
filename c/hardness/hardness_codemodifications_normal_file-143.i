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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.02;
unsigned short int var_1_2 = 50;
signed long int var_1_3 = 5;
float var_1_4 = 32.2;
float var_1_5 = 10.25;
float var_1_6 = 49.4;
signed short int var_1_7 = 2;
signed long int var_1_8 = -2;
signed short int var_1_9 = -50;
unsigned char var_1_10 = 4;
unsigned char var_1_11 = 100;
unsigned char var_1_12 = 10;
unsigned char var_1_13 = 64;
signed short int var_1_14 = 100;
signed short int var_1_15 = 23466;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
signed long int var_1_18 = -8;
signed short int var_1_19 = 8;
signed short int var_1_20 = 10000;
signed short int var_1_21 = -10;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
void initially(void) {
}
void step(void) {
 if (((((64) > (var_1_2)) ? (64) : (var_1_2))) <= var_1_3) {
  var_1_1 = (var_1_4 - (var_1_5 + var_1_6));
 } else {
  if (var_1_5 == var_1_6) {
   var_1_1 = (var_1_6 + var_1_5);
  } else {
   var_1_1 = var_1_4;
  }
 }
 if (var_1_6 > var_1_4) {
  if (25 <= ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2)))) {
   if ((~ (var_1_2 ^ var_1_3)) <= var_1_8) {
    var_1_7 = 32;
   } else {
    var_1_7 = var_1_9;
   }
  }
 }
 var_1_10 = ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)));
 var_1_13 = var_1_12;
 var_1_14 = ((var_1_15 - (4 + var_1_13)) - var_1_12);
 if (var_1_2 > var_1_10) {
  var_1_16 = ((var_1_8 > var_1_7) && var_1_17);
 } else {
  var_1_16 = ((var_1_4 < ((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) && var_1_17);
 }
 if (var_1_9 <= -16) {
  var_1_18 = (((((var_1_11 + var_1_10) + var_1_2) < 0 ) ? -((var_1_11 + var_1_10) + var_1_2) : ((var_1_11 + var_1_10) + var_1_2)));
 }
 var_1_19 = (((var_1_20 - var_1_10) + var_1_12) - var_1_13);
 var_1_21 = var_1_9;
 var_1_22 = var_1_23;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32767);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 16382);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 0);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 8191);
 assume_abort_if_not(var_1_20 <= 16383);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((((64) > (var_1_2)) ? (64) : (var_1_2))) <= var_1_3) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 + var_1_6)))) : ((var_1_5 == var_1_6) ? (var_1_1 == ((float) (var_1_6 + var_1_5))) : (var_1_1 == ((float) var_1_4)))) && ((var_1_6 > var_1_4) ? ((25 <= ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2)))) ? (((~ (var_1_2 ^ var_1_3)) <= var_1_8) ? (var_1_7 == ((signed short int) 32)) : (var_1_7 == ((signed short int) var_1_9))) : 1) : 1)) && (var_1_10 == ((unsigned char) ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))))) && (var_1_13 == ((unsigned char) var_1_12))) && (var_1_14 == ((signed short int) ((var_1_15 - (4 + var_1_13)) - var_1_12)))) && ((var_1_2 > var_1_10) ? (var_1_16 == ((unsigned char) ((var_1_8 > var_1_7) && var_1_17))) : (var_1_16 == ((unsigned char) ((var_1_4 < ((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) && var_1_17))))) && ((var_1_9 <= -16) ? (var_1_18 == ((signed long int) (((((var_1_11 + var_1_10) + var_1_2) < 0 ) ? -((var_1_11 + var_1_10) + var_1_2) : ((var_1_11 + var_1_10) + var_1_2))))) : 1)) && (var_1_19 == ((signed short int) (((var_1_20 - var_1_10) + var_1_12) - var_1_13)))) && (var_1_21 == ((signed short int) var_1_9))) && (var_1_22 == ((unsigned char) var_1_23))
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

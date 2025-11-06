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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch64stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -2;
signed long int var_1_2 = -50;
signed long int var_1_3 = 128;
signed long int var_1_4 = -100;
signed long int var_1_5 = -1;
signed long int var_1_6 = 128;
signed long int var_1_7 = 32;
signed long int var_1_8 = -10;
signed long int var_1_9 = 200;
signed char var_1_10 = -32;
unsigned char var_1_11 = 4;
signed long int var_1_12 = 4;
signed long int var_1_13 = 1731242407;
signed long int var_1_14 = 0;
signed char var_1_15 = 8;
signed char var_1_16 = -25;
signed char var_1_17 = -16;
unsigned long int var_1_18 = 0;
signed short int var_1_19 = 256;
signed short int var_1_20 = 28075;
signed short int var_1_21 = 25;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed char var_1_24 = 1;
signed char var_1_25 = 10;
unsigned long int var_1_26 = 64;
unsigned long int var_1_27 = 0;
void initially(void) {
}
void step(void) {
 if (-8 <= var_1_2) {
  if (var_1_2 == var_1_3) {
   var_1_1 = ((((((var_1_4 + var_1_5)) < (var_1_6)) ? ((var_1_4 + var_1_5)) : (var_1_6))) + (var_1_7 + var_1_8));
  }
 } else {
  if (128 < var_1_5) {
   var_1_1 = var_1_8;
  } else {
   var_1_1 = var_1_9;
  }
 }
 signed long int stepLocal_0 = var_1_4 >> var_1_11;
 if (stepLocal_0 < (var_1_12 - (var_1_13 - var_1_14))) {
  var_1_10 = (var_1_11 + ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))));
 } else {
  var_1_10 = (var_1_17 + var_1_11);
 }
 if (var_1_10 != var_1_8) {
  var_1_18 = ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13)));
 }
 var_1_19 = ((var_1_20 - var_1_11) - var_1_21);
 if (! ((64 * var_1_18) < var_1_1)) {
  var_1_22 = var_1_23;
 }
 signed short int stepLocal_1 = var_1_21;
 if (((var_1_11 - var_1_25) + var_1_17) > stepLocal_1) {
  var_1_24 = ((((var_1_11) > (var_1_16)) ? (var_1_11) : (var_1_16)));
 } else {
  var_1_24 = ((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))));
 }
 if ((var_1_18 * var_1_1) < var_1_27) {
  if (var_1_24 < var_1_11) {
   var_1_26 = 64u;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -536870911);
 assume_abort_if_not(var_1_4 <= 536870912);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -536870911);
 assume_abort_if_not(var_1_5 <= 536870911);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1073741823);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -536870911);
 assume_abort_if_not(var_1_7 <= 536870912);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -536870911);
 assume_abort_if_not(var_1_8 <= 536870911);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483647);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 30);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 1073741823);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 16382);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32766);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((-8 <= var_1_2) ? ((var_1_2 == var_1_3) ? (var_1_1 == ((signed long int) ((((((var_1_4 + var_1_5)) < (var_1_6)) ? ((var_1_4 + var_1_5)) : (var_1_6))) + (var_1_7 + var_1_8)))) : 1) : ((128 < var_1_5) ? (var_1_1 == ((signed long int) var_1_8)) : (var_1_1 == ((signed long int) var_1_9)))) && (((var_1_4 >> var_1_11) < (var_1_12 - (var_1_13 - var_1_14))) ? (var_1_10 == ((signed char) (var_1_11 + ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))))) : (var_1_10 == ((signed char) (var_1_17 + var_1_11))))) && ((var_1_10 != var_1_8) ? (var_1_18 == ((unsigned long int) ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13))))) : 1)) && (var_1_19 == ((signed short int) ((var_1_20 - var_1_11) - var_1_21)))) && ((! ((64 * var_1_18) < var_1_1)) ? (var_1_22 == ((unsigned char) var_1_23)) : 1)) && ((((var_1_11 - var_1_25) + var_1_17) > var_1_21) ? (var_1_24 == ((signed char) ((((var_1_11) > (var_1_16)) ? (var_1_11) : (var_1_16))))) : (var_1_24 == ((signed char) ((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))))))) && (((var_1_18 * var_1_1) < var_1_27) ? ((var_1_24 < var_1_11) ? (var_1_26 == ((unsigned long int) 64u)) : 1) : 1)
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

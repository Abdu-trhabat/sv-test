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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch61stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 8.5;
unsigned long int var_1_2 = 100;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 4;
float var_1_7 = 15.8;
float var_1_8 = 64.25;
signed long int var_1_9 = -50;
signed long int var_1_10 = 10;
signed long int var_1_11 = -5;
signed long int var_1_12 = 256;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 3207304078;
unsigned long int var_1_15 = 50;
unsigned long int var_1_16 = 25;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 1;
unsigned long int var_1_21 = 50;
signed char var_1_22 = -4;
signed char var_1_23 = -10;
void initially(void) {
}
void step(void) {
 if ((var_1_2 / ((((64u) < 0 ) ? -(64u) : (64u)))) == var_1_3) {
  var_1_1 = (8.8 - 255.2);
 }
 unsigned long int stepLocal_0 = var_1_3;
 if (stepLocal_0 < var_1_2) {
  var_1_4 = ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)));
 }
 unsigned long int stepLocal_3 = var_1_4;
 unsigned long int stepLocal_2 = var_1_5;
 unsigned long int stepLocal_1 = (((var_1_3) > (var_1_5)) ? (var_1_3) : (var_1_5));
 if (var_1_4 <= stepLocal_1) {
  if (var_1_4 < stepLocal_2) {
   if (stepLocal_3 >= (var_1_3 ^ 4u)) {
    var_1_7 = var_1_8;
   }
  } else {
   var_1_7 = var_1_8;
  }
 } else {
  var_1_7 = var_1_8;
 }
 unsigned long int stepLocal_4 = var_1_4;
 if (stepLocal_4 >= (4256310412u - 128u)) {
  var_1_9 = (((((var_1_10 + var_1_11) < 0 ) ? -(var_1_10 + var_1_11) : (var_1_10 + var_1_11))) + var_1_12);
 }
 if (var_1_2 >= (var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) {
  if (var_1_16 < var_1_9) {
   var_1_13 = var_1_17;
  } else {
   var_1_13 = var_1_17;
  }
 } else {
  var_1_13 = var_1_18;
 }
 signed long int stepLocal_5 = ~ 100;
 if (((var_1_12 / 2) / var_1_20) >= stepLocal_5) {
  if (var_1_13) {
   var_1_19 = (var_1_17 && var_1_18);
  }
 } else {
  if (var_1_17) {
   var_1_19 = var_1_18;
  } else {
   var_1_19 = var_1_18;
  }
 }
 var_1_21 = var_1_6;
 var_1_22 = var_1_23;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -536870911);
 assume_abort_if_not(var_1_10 <= 536870912);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -536870911);
 assume_abort_if_not(var_1_11 <= 536870911);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -1073741823);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967295);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 65535);
 assume_abort_if_not(var_1_20 != 0);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
}
void updateLastVariables() {
}
int property() {
 return (((((((((var_1_2 / ((((64u) < 0 ) ? -(64u) : (64u)))) == var_1_3) ? (var_1_1 == ((double) (8.8 - 255.2))) : 1) && ((var_1_3 < var_1_2) ? (var_1_4 == ((unsigned long int) ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) : 1)) && ((var_1_4 <= ((((var_1_3) > (var_1_5)) ? (var_1_3) : (var_1_5)))) ? ((var_1_4 < var_1_5) ? ((var_1_4 >= (var_1_3 ^ 4u)) ? (var_1_7 == ((float) var_1_8)) : 1) : (var_1_7 == ((float) var_1_8))) : (var_1_7 == ((float) var_1_8)))) && ((var_1_4 >= (4256310412u - 128u)) ? (var_1_9 == ((signed long int) (((((var_1_10 + var_1_11) < 0 ) ? -(var_1_10 + var_1_11) : (var_1_10 + var_1_11))) + var_1_12))) : 1)) && ((var_1_2 >= (var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) ? ((var_1_16 < var_1_9) ? (var_1_13 == ((unsigned char) var_1_17)) : (var_1_13 == ((unsigned char) var_1_17))) : (var_1_13 == ((unsigned char) var_1_18)))) && ((((var_1_12 / 2) / var_1_20) >= (~ 100)) ? (var_1_13 ? (var_1_19 == ((unsigned char) (var_1_17 && var_1_18))) : 1) : (var_1_17 ? (var_1_19 == ((unsigned char) var_1_18)) : (var_1_19 == ((unsigned char) var_1_18))))) && (var_1_21 == ((unsigned long int) var_1_6))) && (var_1_22 == ((signed char) var_1_23))
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

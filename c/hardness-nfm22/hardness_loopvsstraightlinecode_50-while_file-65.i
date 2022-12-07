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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6550_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 4;
unsigned short int var_1_8 = 64;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 64;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed char var_1_16 = 50;
signed char var_1_19 = -100;
double var_1_20 = 100000000.8;
double var_1_21 = 15.125;
double var_1_22 = 99.22;
signed long int var_1_23 = -16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 10;
signed char var_1_26 = 16;
unsigned char var_1_27 = 0;
double var_1_28 = 5.5;
signed short int last_1_var_1_1 = 4;
unsigned char last_1_var_1_14 = 1;
signed char last_1_var_1_16 = 50;
signed long int last_1_var_1_23 = -16;
unsigned char last_1_var_1_24 = 1;
double last_1_var_1_28 = 5.5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_3 = last_1_var_1_23;
 unsigned char stepLocal_2 = ! (last_1_var_1_14 || last_1_var_1_14);
 if (last_1_var_1_23 < stepLocal_3) {
  if (stepLocal_2 && last_1_var_1_24) {
   if (((((2.75f) > (((((last_1_var_1_28) < (999999.95f)) ? (last_1_var_1_28) : (999999.95f))))) ? (2.75f) : (((((last_1_var_1_28) < (999999.95f)) ? (last_1_var_1_28) : (999999.95f)))))) != last_1_var_1_28) {
    var_1_16 = 10;
   } else {
    var_1_16 = var_1_19;
   }
  } else {
   var_1_16 = var_1_19;
  }
 } else {
  var_1_16 = 100;
 }
 if ((((((last_1_var_1_1) > (last_1_var_1_16)) ? (last_1_var_1_1) : (last_1_var_1_16))) | last_1_var_1_16) >= last_1_var_1_23) {
  var_1_23 = (5 - var_1_12);
 } else {
  var_1_23 = ((((var_1_11) > (last_1_var_1_1)) ? (var_1_11) : (last_1_var_1_1)));
 }
 var_1_20 = (var_1_21 - (var_1_22 + 1.5));
 var_1_28 = var_1_21;
 unsigned char stepLocal_0 = var_1_23 > 4;
 if ((var_1_23 <= var_1_23) || stepLocal_0) {
  var_1_1 = (((((var_1_16 + (var_1_16 + var_1_16))) > (-100)) ? ((var_1_16 + (var_1_16 + var_1_16))) : (-100)));
 } else {
  var_1_1 = var_1_16;
 }
 var_1_24 = ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27);
 signed char stepLocal_1 = var_1_16;
 if (stepLocal_1 > (var_1_23 + (var_1_16 ^ var_1_16))) {
  var_1_14 = (var_1_24 || var_1_15);
 }
 if (var_1_14) {
  if (var_1_24) {
   var_1_8 = (((((var_1_11 + var_1_12)) > (var_1_13)) ? ((var_1_11 + var_1_12)) : (var_1_13)));
  }
 }
}
void updateVariables() {
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_28 = var_1_28;
}
int property() {
 return (((((((((var_1_23 <= var_1_23) || (var_1_23 > 4)) ? (var_1_1 == ((signed short int) (((((var_1_16 + (var_1_16 + var_1_16))) > (-100)) ? ((var_1_16 + (var_1_16 + var_1_16))) : (-100))))) : (var_1_1 == ((signed short int) var_1_16))) && (var_1_14 ? (var_1_24 ? (var_1_8 == ((unsigned short int) (((((var_1_11 + var_1_12)) > (var_1_13)) ? ((var_1_11 + var_1_12)) : (var_1_13))))) : 1) : 1)) && ((var_1_16 > (var_1_23 + (var_1_16 ^ var_1_16))) ? (var_1_14 == ((unsigned char) (var_1_24 || var_1_15))) : 1)) && ((last_1_var_1_23 < last_1_var_1_23) ? (((! (last_1_var_1_14 || last_1_var_1_14)) && last_1_var_1_24) ? ((((((2.75f) > (((((last_1_var_1_28) < (999999.95f)) ? (last_1_var_1_28) : (999999.95f))))) ? (2.75f) : (((((last_1_var_1_28) < (999999.95f)) ? (last_1_var_1_28) : (999999.95f)))))) != last_1_var_1_28) ? (var_1_16 == ((signed char) 10)) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) 100)))) && (var_1_20 == ((double) (var_1_21 - (var_1_22 + 1.5))))) && (((((((last_1_var_1_1) > (last_1_var_1_16)) ? (last_1_var_1_1) : (last_1_var_1_16))) | last_1_var_1_16) >= last_1_var_1_23) ? (var_1_23 == ((signed long int) (5 - var_1_12))) : (var_1_23 == ((signed long int) ((((var_1_11) > (last_1_var_1_1)) ? (var_1_11) : (last_1_var_1_1))))))) && (var_1_24 == ((unsigned char) ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27)))) && (var_1_28 == ((double) var_1_21))
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

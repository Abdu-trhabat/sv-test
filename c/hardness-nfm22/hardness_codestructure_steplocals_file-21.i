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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch21stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 10;
signed long int var_1_2 = -500;
signed char var_1_3 = 1;
signed char var_1_4 = 100;
signed char var_1_5 = 5;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 25;
unsigned short int var_1_10 = 21451;
unsigned short int var_1_11 = 16;
unsigned char var_1_12 = 8;
unsigned short int var_1_13 = 16;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 0;
unsigned short int var_1_16 = 53444;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 1.2;
signed char var_1_20 = 1;
double var_1_21 = 10.5;
double var_1_22 = 0.0;
double var_1_23 = 10.4;
double var_1_24 = 50.5;
unsigned short int var_1_25 = 2;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = -1000000;
 if (var_1_2 >= stepLocal_0) {
  var_1_1 = ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)));
 } else {
  var_1_1 = (var_1_5 - ((var_1_6 - 8) + var_1_7));
 }
 var_1_8 = (((var_1_7 + var_1_6) + var_1_9) + (var_1_10 - var_1_11));
 signed long int stepLocal_1 = var_1_2;
 if (var_1_8 == stepLocal_1) {
  var_1_12 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 }
 signed long int stepLocal_2 = var_1_15;
 if (var_1_14) {
  if (((var_1_10 + var_1_9) << var_1_5) < stepLocal_2) {
   var_1_13 = ((((var_1_7) < (((((var_1_12) > (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6))))) ? (var_1_12) : (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6)))))))) ? (var_1_7) : (((((var_1_12) > (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6))))) ? (var_1_12) : (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6)))))))));
  } else {
   var_1_13 = (var_1_16 - (var_1_9 + var_1_11));
  }
 } else {
  var_1_13 = (var_1_16 - var_1_10);
 }
 if (((((((((var_1_11) > (var_1_6)) ? (var_1_11) : (var_1_6)))) < (var_1_8)) ? (((((var_1_11) > (var_1_6)) ? (var_1_11) : (var_1_6)))) : (var_1_8))) > (var_1_3 * var_1_12)) {
  var_1_17 = var_1_18;
 }
 signed long int stepLocal_3 = var_1_5 - var_1_20;
 if (var_1_1 >= stepLocal_3) {
  var_1_19 = (((((var_1_21) < ((var_1_22 - var_1_23))) ? (var_1_21) : ((var_1_22 - var_1_23)))) - var_1_24);
 }
 if ((var_1_13 < var_1_12) || var_1_14) {
  var_1_25 = (((((var_1_11) > (var_1_9)) ? (var_1_11) : (var_1_9))) + var_1_7);
 } else {
  var_1_25 = var_1_7;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -127);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -127);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 31);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 16383);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483648);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 4611686.018427382800e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((((((var_1_2 >= -1000000) ? (var_1_1 == ((signed char) ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))))) : (var_1_1 == ((signed char) (var_1_5 - ((var_1_6 - 8) + var_1_7))))) && (var_1_8 == ((unsigned short int) (((var_1_7 + var_1_6) + var_1_9) + (var_1_10 - var_1_11))))) && ((var_1_8 == var_1_2) ? (var_1_12 == ((unsigned char) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) : 1)) && (var_1_14 ? ((((var_1_10 + var_1_9) << var_1_5) < var_1_15) ? (var_1_13 == ((unsigned short int) ((((var_1_7) < (((((var_1_12) > (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6))))) ? (var_1_12) : (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6)))))))) ? (var_1_7) : (((((var_1_12) > (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6))))) ? (var_1_12) : (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6))))))))))) : (var_1_13 == ((unsigned short int) (var_1_16 - (var_1_9 + var_1_11))))) : (var_1_13 == ((unsigned short int) (var_1_16 - var_1_10))))) && ((((((((((var_1_11) > (var_1_6)) ? (var_1_11) : (var_1_6)))) < (var_1_8)) ? (((((var_1_11) > (var_1_6)) ? (var_1_11) : (var_1_6)))) : (var_1_8))) > (var_1_3 * var_1_12)) ? (var_1_17 == ((unsigned char) var_1_18)) : 1)) && ((var_1_1 >= (var_1_5 - var_1_20)) ? (var_1_19 == ((double) (((((var_1_21) < ((var_1_22 - var_1_23))) ? (var_1_21) : ((var_1_22 - var_1_23)))) - var_1_24))) : 1)) && (((var_1_13 < var_1_12) || var_1_14) ? (var_1_25 == ((unsigned short int) (((((var_1_11) > (var_1_9)) ? (var_1_11) : (var_1_9))) + var_1_7))) : (var_1_25 == ((unsigned short int) var_1_7)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch110normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -1;
signed long int var_1_2 = 1;
signed long int var_1_3 = -10;
signed long int var_1_4 = -1000;
signed long int var_1_5 = -16;
signed char var_1_6 = 1;
signed char var_1_7 = 4;
signed char var_1_8 = 64;
signed char var_1_9 = 4;
signed long int var_1_10 = 10;
signed long int var_1_11 = 10;
signed long int var_1_12 = -1;
signed char var_1_14 = 1;
signed short int var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 16.5;
double var_1_21 = 1.075;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed long int last_1_var_1_11 = 10;
void initially(void) {
}
void step(void) {
 if (var_1_5 < (var_1_8 - var_1_9)) {
  if (last_1_var_1_11 >= var_1_6) {
   var_1_10 = 128;
  }
 }
 if (var_1_2 != (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))) / var_1_5)) {
  var_1_1 = (((((var_1_6 + 25)) > (var_1_7)) ? ((var_1_6 + 25)) : (var_1_7)));
 } else {
  var_1_1 = ((var_1_8 - (var_1_9 + 2)) - 10);
 }
 var_1_20 = ((((var_1_21) < (8.25)) ? (var_1_21) : (8.25)));
 if ((var_1_8 == var_1_6) && var_1_19) {
  var_1_22 = ((var_1_23 || var_1_24) || var_1_25);
 } else {
  var_1_22 = var_1_25;
 }
 if (var_1_22) {
  var_1_17 = (var_1_18 && var_1_19);
 }
 if ((- (last_1_var_1_11 + var_1_10)) != (((((var_1_9) < (var_1_5)) ? (var_1_9) : (var_1_5))) * (var_1_12 / var_1_8))) {
  if (var_1_22) {
   var_1_11 = var_1_7;
  } else {
   var_1_11 = var_1_6;
  }
 } else {
  var_1_11 = var_1_7;
 }
 signed long int stepLocal_1 = var_1_11;
 signed long int stepLocal_0 = (var_1_8 >> var_1_16) + var_1_6;
 if ((var_1_8 - var_1_9) < stepLocal_1) {
  if (((((var_1_7) > ((var_1_5 ^ var_1_10))) ? (var_1_7) : ((var_1_5 ^ var_1_10)))) <= stepLocal_0) {
   var_1_14 = var_1_7;
  } else {
   var_1_14 = 32;
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
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 62);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 6);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 return (((((((var_1_2 != (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))) / var_1_5)) ? (var_1_1 == ((signed char) (((((var_1_6 + 25)) > (var_1_7)) ? ((var_1_6 + 25)) : (var_1_7))))) : (var_1_1 == ((signed char) ((var_1_8 - (var_1_9 + 2)) - 10)))) && ((var_1_5 < (var_1_8 - var_1_9)) ? ((last_1_var_1_11 >= var_1_6) ? (var_1_10 == ((signed long int) 128)) : 1) : 1)) && (((- (last_1_var_1_11 + var_1_10)) != (((((var_1_9) < (var_1_5)) ? (var_1_9) : (var_1_5))) * (var_1_12 / var_1_8))) ? (var_1_22 ? (var_1_11 == ((signed long int) var_1_7)) : (var_1_11 == ((signed long int) var_1_6))) : (var_1_11 == ((signed long int) var_1_7)))) && (((var_1_8 - var_1_9) < var_1_11) ? ((((((var_1_7) > ((var_1_5 ^ var_1_10))) ? (var_1_7) : ((var_1_5 ^ var_1_10)))) <= ((var_1_8 >> var_1_16) + var_1_6)) ? (var_1_14 == ((signed char) var_1_7)) : (var_1_14 == ((signed char) 32))) : 1)) && (var_1_22 ? (var_1_17 == ((unsigned char) (var_1_18 && var_1_19))) : 1)) && (var_1_20 == ((double) ((((var_1_21) < (8.25)) ? (var_1_21) : (8.25)))))) && (((var_1_8 == var_1_6) && var_1_19) ? (var_1_22 == ((unsigned char) ((var_1_23 || var_1_24) || var_1_25))) : (var_1_22 == ((unsigned char) var_1_25)))
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

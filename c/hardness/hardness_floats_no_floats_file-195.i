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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 16;
unsigned char var_1_3 = 64;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -256;
signed long int var_1_7 = 16;
signed long int var_1_8 = -16;
signed long int var_1_9 = 100;
signed long int var_1_10 = -2;
signed long int var_1_11 = -25;
unsigned char var_1_12 = 1;
signed char var_1_13 = -1;
signed char var_1_14 = -4;
signed char var_1_15 = 8;
signed char var_1_16 = 32;
signed char var_1_17 = 4;
signed char var_1_18 = 16;
signed char var_1_19 = 1;
signed long int last_1_var_1_6 = -256;
void initially(void) {
}
void step(void) {
 if (var_1_2 < var_1_3) {
  var_1_1 = var_1_4;
 } else {
  var_1_1 = (var_1_4 && var_1_5);
 }
 if (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) != last_1_var_1_6) {
  var_1_6 = ((((var_1_9) > (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (var_1_9) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))));
 } else {
  var_1_6 = var_1_10;
 }
 if (var_1_11 != (var_1_7 * var_1_8)) {
  var_1_12 = (var_1_5 || var_1_4);
 } else {
  var_1_12 = (! ((var_1_9 > var_1_6) || var_1_4));
 }
 if (var_1_12) {
  var_1_13 = (((((var_1_14) > (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (var_1_14) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) + ((var_1_16 - var_1_17) - (var_1_18 + var_1_19)));
 } else {
  if (var_1_4) {
   var_1_13 = var_1_18;
  } else {
   var_1_13 = var_1_19;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 31);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 31);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 31);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
}
int property(void) {
 return ((((var_1_2 < var_1_3) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) (var_1_4 && var_1_5)))) && ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) != last_1_var_1_6) ? (var_1_6 == ((signed long int) ((((var_1_9) > (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (var_1_9) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))))) : (var_1_6 == ((signed long int) var_1_10)))) && ((var_1_11 != (var_1_7 * var_1_8)) ? (var_1_12 == ((unsigned char) (var_1_5 || var_1_4))) : (var_1_12 == ((unsigned char) (! ((var_1_9 > var_1_6) || var_1_4)))))) && (var_1_12 ? (var_1_13 == ((signed char) (((((var_1_14) > (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (var_1_14) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) + ((var_1_16 - var_1_17) - (var_1_18 + var_1_19))))) : (var_1_4 ? (var_1_13 == ((signed char) var_1_18)) : (var_1_13 == ((signed char) var_1_19))))
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

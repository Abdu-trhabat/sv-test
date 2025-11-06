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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 1;
signed char var_1_4 = 5;
signed char var_1_5 = 8;
unsigned char var_1_6 = 1;
unsigned short int var_1_7 = 128;
unsigned short int var_1_8 = 4;
signed short int var_1_9 = -256;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char last_1_var_1_6 = 1;
unsigned char last_1_var_1_10 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_10 || last_1_var_1_6) {
  var_1_1 = ((var_1_4 - 50) + var_1_5);
 }
 if ((128 | var_1_4) < (var_1_7 - var_1_8)) {
  if (((var_1_4 + var_1_8) + (50 << var_1_5)) > -128) {
   var_1_9 = var_1_4;
  } else {
   var_1_9 = var_1_5;
  }
 } else {
  var_1_9 = var_1_1;
 }
 if (var_1_8 > (var_1_7 + (var_1_9 & var_1_4))) {
  if ((4 / var_1_7) <= var_1_4) {
   var_1_10 = var_1_11;
  } else {
   var_1_10 = var_1_12;
  }
 } else {
  var_1_10 = var_1_12;
 }
 signed char stepLocal_0 = var_1_5;
 if (((10 / var_1_7) / var_1_8) >= stepLocal_0) {
  var_1_6 = 1;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 65535);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65535);
 assume_abort_if_not(var_1_8 != 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return ((((last_1_var_1_10 || last_1_var_1_6) ? (var_1_1 == ((signed char) ((var_1_4 - 50) + var_1_5))) : 1) && ((((10 / var_1_7) / var_1_8) >= var_1_5) ? (var_1_6 == ((unsigned char) 1)) : 1)) && (((128 | var_1_4) < (var_1_7 - var_1_8)) ? ((((var_1_4 + var_1_8) + (50 << var_1_5)) > -128) ? (var_1_9 == ((signed short int) var_1_4)) : (var_1_9 == ((signed short int) var_1_5))) : (var_1_9 == ((signed short int) var_1_1)))) && ((var_1_8 > (var_1_7 + (var_1_9 & var_1_4))) ? (((4 / var_1_7) <= var_1_4) ? (var_1_10 == ((unsigned char) var_1_11)) : (var_1_10 == ((unsigned char) var_1_12))) : (var_1_10 == ((unsigned char) var_1_12)))
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

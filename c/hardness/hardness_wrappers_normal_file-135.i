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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 31.6;
unsigned char var_1_2 = 1;
signed long int var_1_3 = -4;
unsigned char var_1_4 = 1;
float var_1_5 = 500.25;
float var_1_6 = 9999.75;
float var_1_7 = 99999999999.2;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 128;
unsigned short int var_1_10 = 128;
double var_1_13 = 1.75;
unsigned long int var_1_14 = 256;
unsigned long int var_1_15 = 16;
unsigned short int last_1_var_1_10 = 128;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if (! var_1_4) {
   var_1_1 = ((var_1_5 + 256.4f) - var_1_6);
  } else {
   var_1_1 = (var_1_5 + var_1_7);
  }
 }
 if ((var_1_4 && var_1_2) || (var_1_7 >= 127.5f)) {
  var_1_8 = var_1_9;
 } else {
  if (var_1_2) {
   var_1_8 = 100;
  }
 }
 unsigned char stepLocal_0 = var_1_8;
 if (stepLocal_0 < ((var_1_3 * var_1_9) * (var_1_8 * last_1_var_1_10))) {
  var_1_10 = ((((((((last_1_var_1_10) < (var_1_8)) ? (last_1_var_1_10) : (var_1_8)))) > (var_1_9)) ? (((((last_1_var_1_10) < (var_1_8)) ? (last_1_var_1_10) : (var_1_8)))) : (var_1_9)));
 } else {
  var_1_10 = (((((var_1_8) > (last_1_var_1_10)) ? (var_1_8) : (last_1_var_1_10))) + var_1_8);
 }
 if ((var_1_10 / ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))) > var_1_8) {
  var_1_13 = var_1_5;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 4294967295);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 4294967295);
 assume_abort_if_not(var_1_15 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((var_1_2 ? ((! var_1_4) ? (var_1_1 == ((float) ((var_1_5 + 256.4f) - var_1_6))) : (var_1_1 == ((float) (var_1_5 + var_1_7)))) : 1) && (((var_1_4 && var_1_2) || (var_1_7 >= 127.5f)) ? (var_1_8 == ((unsigned char) var_1_9)) : (var_1_2 ? (var_1_8 == ((unsigned char) 100)) : 1))) && ((var_1_8 < ((var_1_3 * var_1_9) * (var_1_8 * last_1_var_1_10))) ? (var_1_10 == ((unsigned short int) ((((((((last_1_var_1_10) < (var_1_8)) ? (last_1_var_1_10) : (var_1_8)))) > (var_1_9)) ? (((((last_1_var_1_10) < (var_1_8)) ? (last_1_var_1_10) : (var_1_8)))) : (var_1_9))))) : (var_1_10 == ((unsigned short int) (((((var_1_8) > (last_1_var_1_10)) ? (var_1_8) : (last_1_var_1_10))) + var_1_8))))) && (((var_1_10 / ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))) > var_1_8) ? (var_1_13 == ((double) var_1_5)) : 1)
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

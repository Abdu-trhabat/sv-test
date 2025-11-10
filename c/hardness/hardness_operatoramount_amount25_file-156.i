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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch156Amount25.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 5;
unsigned short int var_1_6 = 256;
signed long int var_1_7 = 1;
double var_1_8 = 128.6;
signed char var_1_9 = -2;
double var_1_10 = 3.33;
signed long int var_1_11 = 5;
signed long int var_1_13 = 8;
float var_1_14 = 3.375;
double var_1_15 = 4.02;
signed short int var_1_16 = -1;
signed short int var_1_17 = -32;
unsigned char last_1_var_1_1 = 1;
unsigned short int last_1_var_1_6 = 256;
signed long int last_1_var_1_11 = 5;
signed short int last_1_var_1_16 = -1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_var_1_1;
 signed long int stepLocal_0 = var_1_5 + last_1_var_1_1;
 if (stepLocal_1 < last_1_var_1_11) {
  if (stepLocal_0 >= (var_1_4 % var_1_7)) {
   var_1_6 = var_1_5;
  } else {
   var_1_6 = 128;
  }
 }
 if (last_1_var_1_16 <= last_1_var_1_6) {
  var_1_1 = ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)));
 }
 var_1_14 = var_1_10;
 var_1_15 = var_1_10;
 var_1_16 = var_1_17;
 signed long int stepLocal_3 = (var_1_9 * var_1_6) / var_1_13;
 if (var_1_7 <= stepLocal_3) {
  var_1_11 = (var_1_1 + var_1_5);
 }
 signed short int stepLocal_2 = var_1_16;
 if (stepLocal_2 <= ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) {
  var_1_8 = var_1_10;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
 assume_abort_if_not(var_1_13 != 0);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -32767);
 assume_abort_if_not(var_1_17 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 return (((((((last_1_var_1_16 <= last_1_var_1_6) ? (var_1_1 == ((unsigned char) ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) : 1) && ((last_1_var_1_1 < last_1_var_1_11) ? (((var_1_5 + last_1_var_1_1) >= (var_1_4 % var_1_7)) ? (var_1_6 == ((unsigned short int) var_1_5)) : (var_1_6 == ((unsigned short int) 128))) : 1)) && ((var_1_16 <= ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) ? (var_1_8 == ((double) var_1_10)) : 1)) && ((var_1_7 <= ((var_1_9 * var_1_6) / var_1_13)) ? (var_1_11 == ((signed long int) (var_1_1 + var_1_5))) : 1)) && (var_1_14 == ((float) var_1_10))) && (var_1_15 == ((double) var_1_10))) && (var_1_16 == ((signed short int) var_1_17))
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

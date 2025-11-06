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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 1.46;
signed char var_1_2 = 32;
signed long int var_1_3 = -200;
signed long int var_1_4 = -5;
unsigned char var_1_5 = 1;
float var_1_6 = 128.2;
float var_1_7 = 10.6;
unsigned short int var_1_8 = 4;
double var_1_9 = 0.75;
double var_1_10 = 32.6;
signed char var_1_11 = 4;
signed char var_1_12 = 2;
signed char var_1_13 = 8;
signed char var_1_14 = 32;
unsigned long int var_1_15 = 25;
unsigned short int var_1_16 = 128;
unsigned short int var_1_18 = 2;
unsigned short int var_1_19 = 16;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 100;
float var_1_24 = 500.25;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 200;
unsigned char var_1_27 = 5;
unsigned char var_1_28 = 64;
void initially(void) {
}
void step(void) {
 var_1_15 = (3443154167u - var_1_2);
 if (100 <= var_1_15) {
  if (var_1_15 <= var_1_14) {
   var_1_16 = ((((var_1_2) > (var_1_18)) ? (var_1_2) : (var_1_18)));
  }
 } else {
  var_1_16 = (var_1_2 + var_1_19);
 }
 if (var_1_5 || var_1_21) {
  var_1_20 = (! var_1_22);
 }
 signed char stepLocal_1 = var_1_2;
 if (var_1_7 >= (4.125f / var_1_24)) {
  var_1_23 = (var_1_25 - var_1_2);
 } else {
  if (var_1_25 < stepLocal_1) {
   var_1_23 = ((var_1_26 - var_1_27) - ((((var_1_2) > (var_1_28)) ? (var_1_2) : (var_1_28))));
  } else {
   var_1_23 = var_1_28;
  }
 }
 signed long int stepLocal_0 = -1 - var_1_2;
 if (stepLocal_0 > (var_1_3 + var_1_4)) {
  if (! var_1_20) {
   var_1_1 = var_1_6;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_15 <= var_1_2) {
  var_1_8 = var_1_2;
 }
 if (var_1_20) {
  if (var_1_16 <= (- var_1_15)) {
   var_1_9 = ((((var_1_7) < (((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10))))) ? (var_1_7) : (((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10))))));
  }
 } else {
  var_1_9 = var_1_10;
 }
 if (! var_1_20) {
  var_1_11 = ((((var_1_12) > ((var_1_13 + var_1_14))) ? (var_1_12) : ((var_1_13 + var_1_14))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -63);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 assume_abort_if_not(var_1_24 != 0.0F);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 127);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 190);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((-1 - var_1_2) > (var_1_3 + var_1_4)) ? ((! var_1_20) ? (var_1_1 == ((float) var_1_6)) : 1) : (var_1_1 == ((float) var_1_7))) && ((var_1_15 <= var_1_2) ? (var_1_8 == ((unsigned short int) var_1_2)) : 1)) && (var_1_20 ? ((var_1_16 <= (- var_1_15)) ? (var_1_9 == ((double) ((((var_1_7) < (((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10))))) ? (var_1_7) : (((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10)))))))) : 1) : (var_1_9 == ((double) var_1_10)))) && ((! var_1_20) ? (var_1_11 == ((signed char) ((((var_1_12) > ((var_1_13 + var_1_14))) ? (var_1_12) : ((var_1_13 + var_1_14)))))) : 1)) && (var_1_15 == ((unsigned long int) (3443154167u - var_1_2)))) && ((100 <= var_1_15) ? ((var_1_15 <= var_1_14) ? (var_1_16 == ((unsigned short int) ((((var_1_2) > (var_1_18)) ? (var_1_2) : (var_1_18))))) : 1) : (var_1_16 == ((unsigned short int) (var_1_2 + var_1_19))))) && ((var_1_5 || var_1_21) ? (var_1_20 == ((unsigned char) (! var_1_22))) : 1)) && ((var_1_7 >= (4.125f / var_1_24)) ? (var_1_23 == ((unsigned char) (var_1_25 - var_1_2))) : ((var_1_25 < var_1_2) ? (var_1_23 == ((unsigned char) ((var_1_26 - var_1_27) - ((((var_1_2) > (var_1_28)) ? (var_1_2) : (var_1_28)))))) : (var_1_23 == ((unsigned char) var_1_28))))
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

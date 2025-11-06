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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13850_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 1.8;
double var_1_3 = 64.2;
double var_1_4 = 63.1;
double var_1_5 = 8.4;
unsigned char var_1_6 = 0;
signed char var_1_8 = 1;
unsigned char var_1_10 = 0;
signed long int var_1_11 = 200;
signed short int var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 4202484595;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
float var_1_17 = 1000000.5;
float var_1_18 = 8.31;
signed short int var_1_19 = 4;
signed short int var_1_20 = 5;
signed short int var_1_21 = -5;
signed short int var_1_22 = 2;
unsigned char var_1_23 = 0;
signed long int last_1_var_1_11 = 200;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_11 >> var_1_8;
 if (stepLocal_0 != last_1_var_1_11) {
  var_1_6 = (! var_1_10);
 }
 unsigned char stepLocal_1 = var_1_6;
 if (((var_1_8 - var_1_12) == last_1_var_1_11) || stepLocal_1) {
  var_1_11 = var_1_8;
 } else {
  var_1_11 = -32;
 }
 if (64u < (var_1_14 - (var_1_8 + var_1_11))) {
  var_1_13 = var_1_15;
 } else {
  var_1_13 = (((var_1_10 && var_1_6) && var_1_15) || (var_1_6 && var_1_16));
 }
 if (var_1_16) {
  if (var_1_15) {
   var_1_17 = ((((((((var_1_18) < (var_1_4)) ? (var_1_18) : (var_1_4)))) < (9.99999999975E9f)) ? (((((var_1_18) < (var_1_4)) ? (var_1_18) : (var_1_4)))) : (9.99999999975E9f)));
  }
 }
 if (var_1_14 < (var_1_11 / var_1_8)) {
  var_1_19 = (var_1_8 + ((var_1_20 + var_1_21) + var_1_22));
 } else {
  var_1_19 = ((((var_1_8) > (var_1_21)) ? (var_1_8) : (var_1_21)));
 }
 if (((var_1_12 & var_1_22) + var_1_11) <= var_1_21) {
  if (var_1_11 > ((((var_1_11) > (var_1_20)) ? (var_1_11) : (var_1_20)))) {
   var_1_23 = var_1_8;
  } else {
   var_1_23 = 8;
  }
 }
 if (! var_1_13) {
  var_1_1 = (var_1_3 + ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))));
 } else {
  if (var_1_13) {
   var_1_1 = var_1_4;
  } else {
   var_1_1 = 5.35;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -461168.6018427383000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 15);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967295);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -4095);
 assume_abort_if_not(var_1_20 <= 4096);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= -4095);
 assume_abort_if_not(var_1_21 <= 4096);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= -8191);
 assume_abort_if_not(var_1_22 <= 8191);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 return (((((((! var_1_13) ? (var_1_1 == ((double) (var_1_3 + ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))))) : (var_1_13 ? (var_1_1 == ((double) var_1_4)) : (var_1_1 == ((double) 5.35)))) && (((last_1_var_1_11 >> var_1_8) != last_1_var_1_11) ? (var_1_6 == ((unsigned char) (! var_1_10))) : 1)) && ((((var_1_8 - var_1_12) == last_1_var_1_11) || var_1_6) ? (var_1_11 == ((signed long int) var_1_8)) : (var_1_11 == ((signed long int) -32)))) && ((64u < (var_1_14 - (var_1_8 + var_1_11))) ? (var_1_13 == ((unsigned char) var_1_15)) : (var_1_13 == ((unsigned char) (((var_1_10 && var_1_6) && var_1_15) || (var_1_6 && var_1_16)))))) && (var_1_16 ? (var_1_15 ? (var_1_17 == ((float) ((((((((var_1_18) < (var_1_4)) ? (var_1_18) : (var_1_4)))) < (9.99999999975E9f)) ? (((((var_1_18) < (var_1_4)) ? (var_1_18) : (var_1_4)))) : (9.99999999975E9f))))) : 1) : 1)) && ((var_1_14 < (var_1_11 / var_1_8)) ? (var_1_19 == ((signed short int) (var_1_8 + ((var_1_20 + var_1_21) + var_1_22)))) : (var_1_19 == ((signed short int) ((((var_1_8) > (var_1_21)) ? (var_1_8) : (var_1_21))))))) && ((((var_1_12 & var_1_22) + var_1_11) <= var_1_21) ? ((var_1_11 > ((((var_1_11) > (var_1_20)) ? (var_1_11) : (var_1_20)))) ? (var_1_23 == ((unsigned char) var_1_8)) : (var_1_23 == ((unsigned char) 8))) : 1)
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch30has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 64;
unsigned char var_1_2 = 0;
signed short int var_1_3 = -256;
signed short int var_1_4 = -1000;
signed short int var_1_5 = 8;
signed short int var_1_6 = -32;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 10;
unsigned char var_1_9 = 2;
signed long int var_1_10 = 0;
float var_1_11 = -256.0;
float var_1_12 = 10.0;
float var_1_13 = 5.0;
float var_1_14 = -2.0;
float var_1_15 = 8.0;
unsigned long int var_1_16 = 64;
signed long int last_1_var_1_10 = 0;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_2 = var_1_5;
 signed short int stepLocal_1 = var_1_6;
 if ((last_1_var_1_10 + var_1_4) < stepLocal_1) {
  if (var_1_2) {
   if (stepLocal_2 > var_1_3) {
    var_1_10 = var_1_3;
   }
  } else {
   var_1_10 = var_1_8;
  }
 } else {
  var_1_10 = var_1_9;
 }
 var_1_16 = 200u;
 signed long int stepLocal_0 = var_1_10;
 if (var_1_2) {
  if (stepLocal_0 > ((var_1_16 / var_1_5) % var_1_6)) {
   var_1_1 = ((((((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) > (var_1_9)) ? (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_9)));
  }
 } else {
  var_1_1 = var_1_9;
 }
 if (var_1_6 >= var_1_16) {
  var_1_11 = ((((var_1_12) > ((var_1_13 + ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))))) ? (var_1_12) : ((var_1_13 + ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))))));
 } else {
  if (((var_1_8 / var_1_6) / var_1_5) >= var_1_16) {
   var_1_11 = var_1_13;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -32768);
 assume_abort_if_not(var_1_6 <= 32767);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((var_1_2 ? ((var_1_10 > ((var_1_16 / var_1_5) % var_1_6)) ? (var_1_1 == ((unsigned char) ((((((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) > (var_1_9)) ? (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_9))))) : 1) : (var_1_1 == ((unsigned char) var_1_9))) && (((last_1_var_1_10 + var_1_4) < var_1_6) ? (var_1_2 ? ((var_1_5 > var_1_3) ? (var_1_10 == ((signed long int) var_1_3)) : 1) : (var_1_10 == ((signed long int) var_1_8))) : (var_1_10 == ((signed long int) var_1_9)))) && ((var_1_6 >= var_1_16) ? (var_1_11 == ((float) ((((var_1_12) > ((var_1_13 + ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))))) ? (var_1_12) : ((var_1_13 + ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))))))))) : ((((var_1_8 / var_1_6) / var_1_5) >= var_1_16) ? (var_1_11 == ((float) var_1_13)) : 1))) && (var_1_16 == ((unsigned long int) 200u))
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

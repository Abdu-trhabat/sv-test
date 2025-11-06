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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 5.2;
float var_1_2 = 128.4;
float var_1_4 = 63.8;
float var_1_5 = 255.625;
double var_1_6 = 10.2;
double var_1_7 = 5.75;
unsigned long int var_1_8 = 0;
unsigned long int var_1_9 = 2655377620;
unsigned long int var_1_10 = 1969456671;
unsigned long int var_1_11 = 16;
signed short int var_1_12 = 64;
signed short int var_1_13 = 256;
signed short int var_1_14 = 1;
signed short int var_1_15 = -16;
double var_1_16 = 1000000000000.5;
double last_1_var_1_1 = 5.2;
void initially(void) {
}
void step(void) {
 if ((var_1_2 * last_1_var_1_1) >= ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) {
  var_1_1 = (var_1_6 + var_1_7);
 } else {
  if (last_1_var_1_1 <= var_1_7) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = 3.2;
  }
 }
 var_1_12 = (((((var_1_13 - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) < (var_1_15)) ? ((var_1_13 - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : (var_1_15)));
 if ((var_1_12 ^ var_1_11) < (- var_1_9)) {
  if (var_1_6 >= var_1_7) {
   if (var_1_1 > (- var_1_1)) {
    var_1_16 = var_1_6;
   }
  } else {
   var_1_16 = var_1_7;
  }
 } else {
  var_1_16 = var_1_6;
 }
 if (var_1_16 > (- var_1_6)) {
  var_1_8 = (var_1_9 - (var_1_10 - var_1_11));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32766);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32767);
 assume_abort_if_not(var_1_15 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
}
int property(void) {
 return (((((var_1_2 * last_1_var_1_1) >= ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) ? (var_1_1 == ((double) (var_1_6 + var_1_7))) : ((last_1_var_1_1 <= var_1_7) ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) 3.2)))) && ((var_1_16 > (- var_1_6)) ? (var_1_8 == ((unsigned long int) (var_1_9 - (var_1_10 - var_1_11)))) : 1)) && (var_1_12 == ((signed short int) (((((var_1_13 - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) < (var_1_15)) ? ((var_1_13 - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : (var_1_15)))))) && (((var_1_12 ^ var_1_11) < (- var_1_9)) ? ((var_1_6 >= var_1_7) ? ((var_1_1 > (- var_1_1)) ? (var_1_16 == ((double) var_1_6)) : 1) : (var_1_16 == ((double) var_1_7))) : (var_1_16 == ((double) var_1_6)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 10.8;
unsigned char var_1_2 = 0;
signed short int var_1_4 = -32;
signed short int var_1_5 = -16;
double var_1_6 = 100.01;
double var_1_7 = 999999999.4;
double var_1_8 = 10.6;
double var_1_9 = 127.5;
unsigned long int var_1_10 = 1;
unsigned long int var_1_11 = 2467894503;
unsigned long int var_1_12 = 2565572511;
unsigned long int var_1_13 = 500;
unsigned long int var_1_15 = 2277019112;
unsigned long int var_1_16 = 2745650083;
unsigned long int var_1_17 = 8;
unsigned long int last_1_var_1_17 = 8;
void initially(void) {
}
void step(void) {
 if (var_1_4 <= last_1_var_1_17) {
  if (var_1_2 && (last_1_var_1_17 == ((((var_1_16) > (var_1_12)) ? (var_1_16) : (var_1_12))))) {
   if (last_1_var_1_17 < var_1_11) {
    var_1_17 = var_1_15;
   }
  }
 } else {
  var_1_17 = var_1_16;
 }
 unsigned long int stepLocal_1 = ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))) - var_1_13;
 if (stepLocal_1 != (- var_1_17)) {
  var_1_10 = (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))) - var_1_13);
 } else {
  var_1_10 = var_1_15;
 }
 unsigned long int stepLocal_0 = var_1_10 / var_1_5;
 if (var_1_2) {
  if (var_1_10 >= stepLocal_0) {
   var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  } else {
   var_1_1 = (var_1_7 + ((((var_1_8) > ((var_1_9 + 63.25))) ? (var_1_8) : ((var_1_9 + 63.25)))));
  }
 } else {
  var_1_1 = var_1_8;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -230584.3009213691400e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967295);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 2147483647);
 assume_abort_if_not(var_1_15 <= 4294967294);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 return ((var_1_2 ? ((var_1_10 >= (var_1_10 / var_1_5)) ? (var_1_1 == ((double) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_1 == ((double) (var_1_7 + ((((var_1_8) > ((var_1_9 + 63.25))) ? (var_1_8) : ((var_1_9 + 63.25)))))))) : (var_1_1 == ((double) var_1_8))) && (((((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))) - var_1_13) != (- var_1_17)) ? (var_1_10 == ((unsigned long int) (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))) - var_1_13))) : (var_1_10 == ((unsigned long int) var_1_15)))) && ((var_1_4 <= last_1_var_1_17) ? ((var_1_2 && (last_1_var_1_17 == ((((var_1_16) > (var_1_12)) ? (var_1_16) : (var_1_12))))) ? ((last_1_var_1_17 < var_1_11) ? (var_1_17 == ((unsigned long int) var_1_15)) : 1) : 1) : (var_1_17 == ((unsigned long int) var_1_16)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 2.5;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
signed long int var_1_4 = 8;
signed long int var_1_5 = -256;
double var_1_6 = 100000000000000.5;
signed long int var_1_7 = -1000;
signed long int var_1_8 = -100000;
double var_1_9 = 31.375;
double var_1_10 = 63.3;
unsigned short int var_1_11 = 64;
signed long int var_1_12 = -1;
signed long int var_1_13 = 100;
unsigned short int var_1_14 = 2;
unsigned short int var_1_15 = 1;
signed short int var_1_16 = 32;
unsigned short int var_1_17 = 10000;
unsigned short int var_1_18 = 0;
unsigned short int var_1_19 = 500;
void initially(void) {
}
void step(void) {
 if (var_1_2 || var_1_3) {
  if ((var_1_4 + var_1_5) <= -1) {
   var_1_1 = var_1_6;
  } else {
   if (var_1_5 > (((((var_1_4) < (var_1_7)) ? (var_1_4) : (var_1_7))) * var_1_8)) {
    var_1_1 = (var_1_9 - var_1_10);
   } else {
    var_1_1 = ((((99.5) < (var_1_6)) ? (99.5) : (var_1_6)));
   }
  }
 } else {
  var_1_1 = var_1_6;
 }
 signed long int stepLocal_0 = var_1_8;
 if ((var_1_12 - var_1_13) <= stepLocal_0) {
  var_1_11 = ((((5) < (var_1_14)) ? (5) : (var_1_14)));
 }
 if (var_1_2) {
  if (! ((var_1_4 / var_1_16) < var_1_11)) {
   var_1_15 = (10 + ((var_1_17 - var_1_18) + var_1_19));
  }
 } else {
  var_1_15 = var_1_14;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -32768);
 assume_abort_if_not(var_1_16 <= 32767);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 8192);
 assume_abort_if_not(var_1_17 <= 16384);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 8192);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 || var_1_3) ? (((var_1_4 + var_1_5) <= -1) ? (var_1_1 == ((double) var_1_6)) : ((var_1_5 > (((((var_1_4) < (var_1_7)) ? (var_1_4) : (var_1_7))) * var_1_8)) ? (var_1_1 == ((double) (var_1_9 - var_1_10))) : (var_1_1 == ((double) ((((99.5) < (var_1_6)) ? (99.5) : (var_1_6))))))) : (var_1_1 == ((double) var_1_6))) && (((var_1_12 - var_1_13) <= var_1_8) ? (var_1_11 == ((unsigned short int) ((((5) < (var_1_14)) ? (5) : (var_1_14))))) : 1)) && (var_1_2 ? ((! ((var_1_4 / var_1_16) < var_1_11)) ? (var_1_15 == ((unsigned short int) (10 + ((var_1_17 - var_1_18) + var_1_19)))) : 1) : (var_1_15 == ((unsigned short int) var_1_14)))
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

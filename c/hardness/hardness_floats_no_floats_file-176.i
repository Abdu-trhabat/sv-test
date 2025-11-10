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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 64;
signed long int var_1_2 = 1192640562;
signed long int var_1_3 = 2;
signed long int var_1_4 = -256;
signed long int var_1_5 = -128;
signed long int var_1_6 = 16;
signed long int var_1_7 = 64;
signed long int var_1_8 = 50;
unsigned char var_1_9 = 5;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 4;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 64;
unsigned char var_1_19 = 8;
unsigned char var_1_20 = 0;
void initially(void) {
}
void step(void) {
 var_1_1 = ((10000000 + 5) - (var_1_2 - var_1_3));
 if (var_1_2 > 32) {
  var_1_4 = var_1_5;
 } else {
  var_1_4 = (((((var_1_6 - var_1_7)) < (((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8))))) ? ((var_1_6 - var_1_7)) : (((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8))))));
 }
 if (var_1_10 || var_1_11) {
  var_1_9 = ((((((((((((64) < (var_1_12)) ? (64) : (var_1_12)))) < ((var_1_13 + var_1_14))) ? (((((64) < (var_1_12)) ? (64) : (var_1_12)))) : ((var_1_13 + var_1_14))))) > (var_1_15)) ? (((((((((64) < (var_1_12)) ? (64) : (var_1_12)))) < ((var_1_13 + var_1_14))) ? (((((64) < (var_1_12)) ? (64) : (var_1_12)))) : ((var_1_13 + var_1_14))))) : (var_1_15)));
 } else {
  if ((- var_1_5) == var_1_8) {
   if (var_1_8 > var_1_4) {
    var_1_9 = var_1_15;
   }
  } else {
   var_1_9 = var_1_14;
  }
 }
 if ((var_1_17 - (var_1_18 + var_1_19)) > (-16 * var_1_15)) {
  var_1_16 = var_1_20;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= 1073741823);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 127);
 assume_abort_if_not(var_1_17 <= 255);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 64);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_1 == ((signed long int) ((10000000 + 5) - (var_1_2 - var_1_3)))) && ((var_1_2 > 32) ? (var_1_4 == ((signed long int) var_1_5)) : (var_1_4 == ((signed long int) (((((var_1_6 - var_1_7)) < (((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8))))) ? ((var_1_6 - var_1_7)) : (((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8)))))))))) && ((var_1_10 || var_1_11) ? (var_1_9 == ((unsigned char) ((((((((((((64) < (var_1_12)) ? (64) : (var_1_12)))) < ((var_1_13 + var_1_14))) ? (((((64) < (var_1_12)) ? (64) : (var_1_12)))) : ((var_1_13 + var_1_14))))) > (var_1_15)) ? (((((((((64) < (var_1_12)) ? (64) : (var_1_12)))) < ((var_1_13 + var_1_14))) ? (((((64) < (var_1_12)) ? (64) : (var_1_12)))) : ((var_1_13 + var_1_14))))) : (var_1_15))))) : (((- var_1_5) == var_1_8) ? ((var_1_8 > var_1_4) ? (var_1_9 == ((unsigned char) var_1_15)) : 1) : (var_1_9 == ((unsigned char) var_1_14))))) && (((var_1_17 - (var_1_18 + var_1_19)) > (-16 * var_1_15)) ? (var_1_16 == ((unsigned char) var_1_20)) : 1)
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

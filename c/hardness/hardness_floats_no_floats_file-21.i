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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned char var_1_2 = 8;
unsigned char var_1_3 = 4;
unsigned char var_1_4 = 32;
signed long int var_1_5 = -128;
signed long int var_1_6 = -1000000000;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 256;
signed long int var_1_9 = 16;
signed long int var_1_10 = 2;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned short int var_1_13 = 16;
unsigned short int var_1_15 = 57438;
unsigned short int var_1_16 = 64;
signed short int var_1_17 = 8;
void initially(void) {
}
void step(void) {
 if ((var_1_2 + ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_5 * var_1_6)) {
  if (var_1_5 < (var_1_2 - var_1_3)) {
   if (var_1_5 != (((((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2))) < 0 ) ? -((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2))) : ((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2)))))) {
    var_1_1 = var_1_2;
   }
  }
 } else {
  var_1_1 = var_1_4;
 }
 if (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) <= (- var_1_10)) {
  var_1_7 = (! var_1_11);
 } else {
  var_1_7 = var_1_12;
 }
 signed long int stepLocal_0 = ~ var_1_2;
 if (stepLocal_0 > -128) {
  var_1_13 = (((((((((var_1_15 - var_1_4)) < (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))) ? ((var_1_15 - var_1_4)) : (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))))) < (var_1_16)) ? ((((((var_1_15 - var_1_4)) < (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))) ? ((var_1_15 - var_1_4)) : (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))))) : (var_1_16)));
 }
 var_1_17 = var_1_13;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 32767);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 + ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_5 * var_1_6)) ? ((var_1_5 < (var_1_2 - var_1_3)) ? ((var_1_5 != (((((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2))) < 0 ) ? -((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2))) : ((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2)))))) ? (var_1_1 == ((unsigned short int) var_1_2)) : 1) : 1) : (var_1_1 == ((unsigned short int) var_1_4))) && ((((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) <= (- var_1_10)) ? (var_1_7 == ((unsigned char) (! var_1_11))) : (var_1_7 == ((unsigned char) var_1_12)))) && (((~ var_1_2) > -128) ? (var_1_13 == ((unsigned short int) (((((((((var_1_15 - var_1_4)) < (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))) ? ((var_1_15 - var_1_4)) : (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))))) < (var_1_16)) ? ((((((var_1_15 - var_1_4)) < (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))) ? ((var_1_15 - var_1_4)) : (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))))) : (var_1_16))))) : 1)) && (var_1_17 == ((signed short int) var_1_13))
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

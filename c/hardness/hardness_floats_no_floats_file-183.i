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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
signed long int var_1_2 = 0;
signed long int var_1_3 = -10;
signed long int var_1_4 = -1;
signed long int var_1_5 = -64;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 16;
unsigned short int var_1_9 = 16;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 4;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 32;
unsigned char var_1_14 = 16;
unsigned long int var_1_15 = 2;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_6;
 if ((var_1_2 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) >= var_1_5) {
  if (stepLocal_0 || var_1_7) {
   var_1_1 = var_1_8;
  } else {
   var_1_1 = var_1_9;
  }
 }
 if (var_1_2 >= var_1_4) {
  var_1_10 = (var_1_11 + (var_1_12 - (var_1_13 - var_1_14)));
 } else {
  var_1_10 = var_1_14;
 }
 signed long int stepLocal_1 = var_1_10 * var_1_1;
 if (! (! var_1_7)) {
  if (stepLocal_1 == var_1_12) {
   if (! ((var_1_9 * var_1_11) > -256)) {
    var_1_15 = (((((var_1_9) > (128u)) ? (var_1_9) : (128u))) + ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))));
   } else {
    var_1_15 = 0u;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 63);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 31);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 31);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) >= var_1_5) ? ((var_1_6 || var_1_7) ? (var_1_1 == ((unsigned short int) var_1_8)) : (var_1_1 == ((unsigned short int) var_1_9))) : 1) && ((var_1_2 >= var_1_4) ? (var_1_10 == ((unsigned char) (var_1_11 + (var_1_12 - (var_1_13 - var_1_14))))) : (var_1_10 == ((unsigned char) var_1_14)))) && ((! (! var_1_7)) ? (((var_1_10 * var_1_1) == var_1_12) ? ((! ((var_1_9 * var_1_11) > -256)) ? (var_1_15 == ((unsigned long int) (((((var_1_9) > (128u)) ? (var_1_9) : (128u))) + ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))))) : (var_1_15 == ((unsigned long int) 0u))) : 1) : 1)
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

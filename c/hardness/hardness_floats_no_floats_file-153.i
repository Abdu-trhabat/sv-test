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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 50;
unsigned long int var_1_3 = 256;
signed short int var_1_4 = -50;
unsigned short int var_1_6 = 32;
unsigned short int var_1_7 = 1;
unsigned short int var_1_8 = 32;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
signed long int var_1_13 = 8;
signed long int var_1_14 = 32;
signed long int var_1_15 = 4;
signed long int var_1_16 = 50;
signed long int var_1_17 = -64;
signed short int last_1_var_1_4 = -50;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_4 <= (((((-32) < 0 ) ? -(-32) : (-32))) + 16)) {
  var_1_1 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
 } else {
  var_1_1 = var_1_3;
 }
 var_1_6 = (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_8);
 unsigned long int stepLocal_0 = var_1_1;
 if (stepLocal_0 <= var_1_6) {
  var_1_9 = (! var_1_10);
 } else {
  var_1_9 = (var_1_11 && var_1_12);
 }
 if (var_1_6 <= var_1_3) {
  if (var_1_6 <= var_1_1) {
   if (var_1_9) {
    var_1_4 = var_1_6;
   }
  }
 }
 if (! (var_1_9 || var_1_12)) {
  var_1_13 = (((((((((var_1_14 - var_1_15)) > (var_1_16)) ? ((var_1_14 - var_1_15)) : (var_1_16)))) < (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? ((((((var_1_14 - var_1_15)) > (var_1_16)) ? ((var_1_14 - var_1_15)) : (var_1_16)))) : (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))));
 } else {
  var_1_13 = var_1_14;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483648);
 assume_abort_if_not(var_1_17 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_4 = var_1_4;
}
int property(void) {
 return (((((last_1_var_1_4 <= (((((-32) < 0 ) ? -(-32) : (-32))) + 16)) ? (var_1_1 == ((unsigned long int) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) : (var_1_1 == ((unsigned long int) var_1_3))) && ((var_1_6 <= var_1_3) ? ((var_1_6 <= var_1_1) ? (var_1_9 ? (var_1_4 == ((signed short int) var_1_6)) : 1) : 1) : 1)) && (var_1_6 == ((unsigned short int) (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_8)))) && ((var_1_1 <= var_1_6) ? (var_1_9 == ((unsigned char) (! var_1_10))) : (var_1_9 == ((unsigned char) (var_1_11 && var_1_12))))) && ((! (var_1_9 || var_1_12)) ? (var_1_13 == ((signed long int) (((((((((var_1_14 - var_1_15)) > (var_1_16)) ? ((var_1_14 - var_1_15)) : (var_1_16)))) < (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? ((((((var_1_14 - var_1_15)) > (var_1_16)) ? ((var_1_14 - var_1_15)) : (var_1_16)))) : (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))))) : (var_1_13 == ((signed long int) var_1_14)))
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

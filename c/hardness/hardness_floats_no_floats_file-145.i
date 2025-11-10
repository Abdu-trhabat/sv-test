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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 25;
signed long int var_1_2 = 32;
signed long int var_1_3 = 1;
signed long int var_1_4 = 32;
unsigned short int var_1_5 = 30958;
unsigned short int var_1_6 = 10000;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 10;
signed long int var_1_9 = 2;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
signed long int var_1_13 = 5;
signed long int var_1_14 = 64;
signed long int var_1_15 = 1;
signed long int var_1_16 = 10;
signed long int var_1_17 = 10;
signed long int last_1_var_1_17 = 10;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = (10 > last_1_var_1_17) && var_1_11;
 unsigned short int stepLocal_0 = var_1_5;
 if (stepLocal_1 || var_1_12) {
  if (stepLocal_0 >= last_1_var_1_17) {
   var_1_9 = var_1_8;
  }
 } else {
  var_1_9 = last_1_var_1_17;
 }
 if ((var_1_2 + var_1_3) <= var_1_4) {
  var_1_1 = ((var_1_5 + (var_1_6 + var_1_7)) - var_1_8);
 }
 unsigned short int stepLocal_3 = var_1_1;
 if (((((var_1_9) > ((var_1_9 ^ var_1_5))) ? (var_1_9) : ((var_1_9 ^ var_1_5)))) >= stepLocal_3) {
  var_1_17 = (var_1_6 + var_1_5);
 } else {
  var_1_17 = var_1_5;
 }
 unsigned short int stepLocal_2 = var_1_8;
 if (stepLocal_2 > (var_1_17 * (var_1_1 + var_1_7))) {
  var_1_13 = (((((var_1_14 - var_1_15)) > (var_1_16)) ? ((var_1_14 - var_1_15)) : (var_1_16)));
 } else {
  var_1_13 = ((((var_1_16) < (var_1_15)) ? (var_1_16) : (var_1_15)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 16383);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 8192);
 assume_abort_if_not(var_1_6 <= 16384);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8192);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
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
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 return (((((var_1_2 + var_1_3) <= var_1_4) ? (var_1_1 == ((unsigned short int) ((var_1_5 + (var_1_6 + var_1_7)) - var_1_8))) : 1) && ((((10 > last_1_var_1_17) && var_1_11) || var_1_12) ? ((var_1_5 >= last_1_var_1_17) ? (var_1_9 == ((signed long int) var_1_8)) : 1) : (var_1_9 == ((signed long int) last_1_var_1_17)))) && ((var_1_8 > (var_1_17 * (var_1_1 + var_1_7))) ? (var_1_13 == ((signed long int) (((((var_1_14 - var_1_15)) > (var_1_16)) ? ((var_1_14 - var_1_15)) : (var_1_16))))) : (var_1_13 == ((signed long int) ((((var_1_16) < (var_1_15)) ? (var_1_16) : (var_1_15))))))) && ((((((var_1_9) > ((var_1_9 ^ var_1_5))) ? (var_1_9) : ((var_1_9 ^ var_1_5)))) >= var_1_1) ? (var_1_17 == ((signed long int) (var_1_6 + var_1_5))) : (var_1_17 == ((signed long int) var_1_5)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch96normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 8;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 8;
unsigned short int var_1_4 = 1000;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 100;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 4.575;
signed long int var_1_12 = 128;
double var_1_13 = 2.75;
double var_1_14 = 128.5;
signed long int var_1_15 = -1000000000;
float var_1_16 = 99999.25;
signed char var_1_17 = 1;
signed char var_1_18 = 50;
unsigned char last_1_var_1_5 = 1;
void initially(void) {
}
void step(void) {
 if (! last_1_var_1_5) {
  var_1_1 = ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)));
 } else {
  var_1_1 = var_1_4;
 }
 unsigned char stepLocal_0 = var_1_6;
 if (var_1_2) {
  if (stepLocal_0 && ((var_1_3 >= 16) || var_1_7)) {
   if (var_1_6) {
    var_1_5 = ((var_1_1 < var_1_8) && var_1_9);
   } else {
    var_1_5 = var_1_10;
   }
  }
 }
 var_1_15 = var_1_1;
 var_1_16 = var_1_13;
 var_1_17 = var_1_18;
 if (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) > var_1_1) {
  if ((var_1_15 / -5) >= ((var_1_4 + var_1_1) - ((((var_1_12) < (var_1_3)) ? (var_1_12) : (var_1_3))))) {
   var_1_11 = (var_1_13 + var_1_14);
  } else {
   var_1_11 = var_1_14;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65535);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -127);
 assume_abort_if_not(var_1_18 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_5 = var_1_5;
}
int property(void) {
 return ((((((! last_1_var_1_5) ? (var_1_1 == ((unsigned short int) ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))))) : (var_1_1 == ((unsigned short int) var_1_4))) && (var_1_2 ? ((var_1_6 && ((var_1_3 >= 16) || var_1_7)) ? (var_1_6 ? (var_1_5 == ((unsigned char) ((var_1_1 < var_1_8) && var_1_9))) : (var_1_5 == ((unsigned char) var_1_10))) : 1) : 1)) && ((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) > var_1_1) ? (((var_1_15 / -5) >= ((var_1_4 + var_1_1) - ((((var_1_12) < (var_1_3)) ? (var_1_12) : (var_1_3))))) ? (var_1_11 == ((double) (var_1_13 + var_1_14))) : (var_1_11 == ((double) var_1_14))) : 1)) && (var_1_15 == ((signed long int) var_1_1))) && (var_1_16 == ((float) var_1_13))) && (var_1_17 == ((signed char) var_1_18))
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

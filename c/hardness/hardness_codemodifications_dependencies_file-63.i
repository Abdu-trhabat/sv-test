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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch63dependencies.c", 13, "reach_error"); }
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
unsigned long int var_1_2 = 50;
unsigned long int var_1_3 = 8;
signed long int var_1_4 = 25;
signed long int var_1_5 = -100;
signed long int var_1_6 = 8;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 128;
signed long int var_1_9 = 2;
signed long int var_1_10 = 128;
unsigned short int var_1_11 = 500;
signed char var_1_12 = 1;
unsigned char var_1_13 = 64;
signed char var_1_14 = -5;
double var_1_15 = 499.5;
double var_1_16 = 64.1;
double var_1_17 = 10.5;
double var_1_18 = 2.5;
double var_1_19 = 127.8;
double var_1_20 = 2.051;
double var_1_21 = 128.25;
signed char var_1_22 = -10;
unsigned short int var_1_23 = 100;
unsigned short int var_1_24 = 64;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 4;
signed short int var_1_27 = -16;
void initially(void) {
}
void step(void) {
 if (32u < ((var_1_2 + 4u) | var_1_3)) {
  var_1_1 = (var_1_4 + (var_1_5 + var_1_6));
 } else {
  if (! var_1_7) {
   var_1_1 = ((((var_1_4) < ((var_1_8 - var_1_9))) ? (var_1_4) : ((var_1_8 - var_1_9))));
  } else {
   var_1_1 = (var_1_9 - var_1_10);
  }
 }
 if ((var_1_9 >> var_1_12) < var_1_3) {
  var_1_11 = var_1_12;
 }
 if ((var_1_3 + (var_1_12 / var_1_14)) >= var_1_9) {
  var_1_13 = var_1_12;
 }
 if ((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) >= (var_1_1 & var_1_10)) && var_1_7) {
  var_1_15 = (((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) - var_1_18);
 } else {
  var_1_15 = var_1_18;
 }
 if (var_1_18 != 999999.5) {
  var_1_19 = (15.75 + (var_1_20 - var_1_21));
 }
 if (var_1_7) {
  if (-128 < var_1_5) {
   var_1_22 = var_1_12;
  }
 }
 var_1_25 = var_1_12;
 var_1_26 = var_1_12;
 var_1_27 = var_1_26;
 if (var_1_16 > var_1_21) {
  var_1_23 = ((((var_1_26) < (((((var_1_12) < (((((8) < (var_1_24)) ? (8) : (var_1_24))))) ? (var_1_12) : (((((8) < (var_1_24)) ? (8) : (var_1_24)))))))) ? (var_1_26) : (((((var_1_12) < (((((8) < (var_1_24)) ? (8) : (var_1_24))))) ? (var_1_12) : (((((8) < (var_1_24)) ? (8) : (var_1_24)))))))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1073741823);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -536870911);
 assume_abort_if_not(var_1_5 <= 536870912);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -536870911);
 assume_abort_if_not(var_1_6 <= 536870911);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 30);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -128);
 assume_abort_if_not(var_1_14 <= 127);
 assume_abort_if_not(var_1_14 != 0);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((32u < ((var_1_2 + 4u) | var_1_3)) ? (var_1_1 == ((signed long int) (var_1_4 + (var_1_5 + var_1_6)))) : ((! var_1_7) ? (var_1_1 == ((signed long int) ((((var_1_4) < ((var_1_8 - var_1_9))) ? (var_1_4) : ((var_1_8 - var_1_9)))))) : (var_1_1 == ((signed long int) (var_1_9 - var_1_10))))) && (((var_1_9 >> var_1_12) < var_1_3) ? (var_1_11 == ((unsigned short int) var_1_12)) : 1)) && (((var_1_3 + (var_1_12 / var_1_14)) >= var_1_9) ? (var_1_13 == ((unsigned char) var_1_12)) : 1)) && (((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) >= (var_1_1 & var_1_10)) && var_1_7) ? (var_1_15 == ((double) (((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) - var_1_18))) : (var_1_15 == ((double) var_1_18)))) && ((var_1_18 != 999999.5) ? (var_1_19 == ((double) (15.75 + (var_1_20 - var_1_21)))) : 1)) && (var_1_7 ? ((-128 < var_1_5) ? (var_1_22 == ((signed char) var_1_12)) : 1) : 1)) && ((var_1_16 > var_1_21) ? (var_1_23 == ((unsigned short int) ((((var_1_26) < (((((var_1_12) < (((((8) < (var_1_24)) ? (8) : (var_1_24))))) ? (var_1_12) : (((((8) < (var_1_24)) ? (8) : (var_1_24)))))))) ? (var_1_26) : (((((var_1_12) < (((((8) < (var_1_24)) ? (8) : (var_1_24))))) ? (var_1_12) : (((((8) < (var_1_24)) ? (8) : (var_1_24))))))))))) : 1)) && (var_1_25 == ((unsigned char) var_1_12))) && (var_1_26 == ((unsigned char) var_1_12))) && (var_1_27 == ((signed short int) var_1_26))
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

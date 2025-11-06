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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch98normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -64;
signed short int var_1_2 = 2;
signed short int var_1_3 = 100;
signed short int var_1_4 = -10;
signed short int var_1_5 = 100;
double var_1_6 = 0.5;
double var_1_7 = 16.5;
double var_1_8 = 7.4;
unsigned short int var_1_9 = 4;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 1000000000;
unsigned short int var_1_12 = 256;
signed short int var_1_13 = 64;
unsigned short int var_1_14 = 63836;
signed char var_1_15 = -8;
signed char var_1_16 = 8;
signed short int var_1_17 = 50;
signed short int var_1_18 = 10;
signed short int var_1_19 = 10000;
signed char var_1_20 = -2;
void initially(void) {
}
void step(void) {
 if (var_1_2 <= ((var_1_3 / var_1_4) & 8)) {
  if (-16 <= var_1_3) {
   if (var_1_2 != (var_1_3 / ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) {
    var_1_1 = ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2)));
   } else {
    var_1_1 = ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)));
   }
  }
 } else {
  if (var_1_3 <= var_1_2) {
   var_1_1 = var_1_4;
  } else {
   var_1_1 = var_1_3;
  }
 }
 if (var_1_2 <= var_1_3) {
  var_1_6 = (var_1_7 + var_1_8);
 }
 if (var_1_10) {
  if (var_1_4 < (var_1_1 + var_1_5)) {
   var_1_9 = 16;
  }
 }
 var_1_11 = (((((((2u) > ((3986216790u - var_1_9))) ? (2u) : ((3986216790u - var_1_9)))) < 0 ) ? -((((2u) > ((3986216790u - var_1_9))) ? (2u) : ((3986216790u - var_1_9)))) : ((((2u) > ((3986216790u - var_1_9))) ? (2u) : ((3986216790u - var_1_9))))));
 if ((var_1_5 * (var_1_3 - var_1_13)) <= var_1_4) {
  var_1_12 = (var_1_14 - ((((var_1_3) > (var_1_13)) ? (var_1_3) : (var_1_13))));
 }
 var_1_15 = var_1_16;
 if (var_1_6 <= var_1_8) {
  var_1_17 = ((var_1_16 + 25) + (var_1_18 - (var_1_19 - 1)));
 } else {
  var_1_17 = ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) > (var_1_18)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (var_1_18)));
 }
 var_1_20 = var_1_16;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 assume_abort_if_not(var_1_5 != 0);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 16383);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 8191);
 assume_abort_if_not(var_1_19 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 <= ((var_1_3 / var_1_4) & 8)) ? ((-16 <= var_1_3) ? ((var_1_2 != (var_1_3 / ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) ? (var_1_1 == ((signed long int) ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))))) : (var_1_1 == ((signed long int) ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))))) : 1) : ((var_1_3 <= var_1_2) ? (var_1_1 == ((signed long int) var_1_4)) : (var_1_1 == ((signed long int) var_1_3)))) && ((var_1_2 <= var_1_3) ? (var_1_6 == ((double) (var_1_7 + var_1_8))) : 1)) && (var_1_10 ? ((var_1_4 < (var_1_1 + var_1_5)) ? (var_1_9 == ((unsigned short int) 16)) : 1) : 1)) && (var_1_11 == ((unsigned long int) (((((((2u) > ((3986216790u - var_1_9))) ? (2u) : ((3986216790u - var_1_9)))) < 0 ) ? -((((2u) > ((3986216790u - var_1_9))) ? (2u) : ((3986216790u - var_1_9)))) : ((((2u) > ((3986216790u - var_1_9))) ? (2u) : ((3986216790u - var_1_9))))))))) && (((var_1_5 * (var_1_3 - var_1_13)) <= var_1_4) ? (var_1_12 == ((unsigned short int) (var_1_14 - ((((var_1_3) > (var_1_13)) ? (var_1_3) : (var_1_13)))))) : 1)) && (var_1_15 == ((signed char) var_1_16))) && ((var_1_6 <= var_1_8) ? (var_1_17 == ((signed short int) ((var_1_16 + 25) + (var_1_18 - (var_1_19 - 1))))) : (var_1_17 == ((signed short int) ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) > (var_1_18)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (var_1_18))))))) && (var_1_20 == ((signed char) var_1_16))
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

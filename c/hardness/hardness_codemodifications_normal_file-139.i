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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 128;
unsigned char var_1_2 = 1;
float var_1_3 = 3.5;
float var_1_4 = 5.6;
float var_1_5 = 2.1;
float var_1_6 = 9.625;
unsigned long int var_1_7 = 5;
unsigned long int var_1_8 = 0;
float var_1_9 = 100.5;
double var_1_10 = 16.524;
float var_1_11 = 4.5;
float var_1_12 = 256.5;
float var_1_13 = 256.25;
float var_1_14 = 8.5;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 16;
signed short int var_1_17 = 1;
signed long int var_1_18 = 10;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 10;
unsigned short int var_1_21 = 57151;
void initially(void) {
}
void step(void) {
 if ((var_1_3 * (255.8f / var_1_4)) >= (var_1_5 - var_1_6)) {
  var_1_1 = ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)));
 } else {
  if (var_1_2) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = var_1_8;
  }
 }
 if (var_1_10 <= var_1_6) {
  var_1_9 = ((var_1_11 + ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) - var_1_14);
 } else {
  var_1_9 = ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13)));
 }
 if (var_1_10 == (- (var_1_5 - var_1_12))) {
  var_1_15 = (((((var_1_16 + 8)) > (50)) ? ((var_1_16 + 8)) : (50)));
 } else {
  var_1_15 = 25;
 }
 if (var_1_10 >= ((var_1_5 + var_1_4) + var_1_13)) {
  var_1_17 = var_1_16;
 }
 if (var_1_2) {
  var_1_18 = var_1_16;
 } else {
  if (var_1_10 == var_1_12) {
   if (var_1_15 <= (var_1_17 % var_1_19)) {
    var_1_18 = var_1_19;
   } else {
    var_1_18 = var_1_16;
   }
  }
 }
 if (((((var_1_7) > ((var_1_21 - var_1_15))) ? (var_1_7) : ((var_1_21 - var_1_15)))) > ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) {
  var_1_20 = ((((var_1_16) < (((((1) > (5)) ? (1) : (5))))) ? (var_1_16) : (((((1) > (5)) ? (1) : (5))))));
 } else {
  if (var_1_2) {
   var_1_20 = var_1_16;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 255);
 assume_abort_if_not(var_1_19 != 0);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_3 * (255.8f / var_1_4)) >= (var_1_5 - var_1_6)) ? (var_1_1 == ((unsigned long int) ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) : (var_1_2 ? (var_1_1 == ((unsigned long int) var_1_7)) : (var_1_1 == ((unsigned long int) var_1_8)))) && ((var_1_10 <= var_1_6) ? (var_1_9 == ((float) ((var_1_11 + ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) - var_1_14))) : (var_1_9 == ((float) ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13))))))) && ((var_1_10 == (- (var_1_5 - var_1_12))) ? (var_1_15 == ((unsigned char) (((((var_1_16 + 8)) > (50)) ? ((var_1_16 + 8)) : (50))))) : (var_1_15 == ((unsigned char) 25)))) && ((var_1_10 >= ((var_1_5 + var_1_4) + var_1_13)) ? (var_1_17 == ((signed short int) var_1_16)) : 1)) && (var_1_2 ? (var_1_18 == ((signed long int) var_1_16)) : ((var_1_10 == var_1_12) ? ((var_1_15 <= (var_1_17 % var_1_19)) ? (var_1_18 == ((signed long int) var_1_19)) : (var_1_18 == ((signed long int) var_1_16))) : 1))) && ((((((var_1_7) > ((var_1_21 - var_1_15))) ? (var_1_7) : ((var_1_21 - var_1_15)))) > ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) ? (var_1_20 == ((unsigned char) ((((var_1_16) < (((((1) > (5)) ? (1) : (5))))) ? (var_1_16) : (((((1) > (5)) ? (1) : (5)))))))) : (var_1_2 ? (var_1_20 == ((unsigned char) var_1_16)) : 1))
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

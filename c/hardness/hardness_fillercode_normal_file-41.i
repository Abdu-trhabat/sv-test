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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch41normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
double var_1_7 = 4.8;
signed char var_1_8 = 64;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 0;
signed char var_1_11 = -10;
signed char var_1_12 = 64;
float var_1_13 = 1.6;
float var_1_14 = 3.5;
unsigned short int var_1_15 = 32;
unsigned short int var_1_16 = 32;
double var_1_17 = 5.3;
float var_1_18 = 31.28;
float var_1_19 = 0.0;
float var_1_20 = 1.5;
float var_1_21 = 0.0;
float var_1_22 = 127.85;
float var_1_23 = 9.5;
float var_1_24 = 7.5;
float var_1_25 = 64.8;
unsigned short int last_1_var_1_15 = 32;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = ! var_1_5;
 if (stepLocal_1 || (var_1_12 < last_1_var_1_15)) {
  if (! var_1_5) {
   var_1_13 = var_1_14;
  } else {
   var_1_13 = 256.5f;
  }
 }
 if ((127.35 + var_1_13) <= var_1_7) {
  if (4.5 <= (var_1_7 * var_1_13)) {
   var_1_6 = var_1_5;
  }
 }
 unsigned short int stepLocal_0 = var_1_9;
 if (stepLocal_0 > var_1_10) {
  var_1_8 = ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)));
 }
 signed char stepLocal_2 = var_1_8;
 if (stepLocal_2 > var_1_9) {
  if (var_1_13 > (var_1_13 + var_1_14)) {
   var_1_15 = var_1_16;
  }
 }
 unsigned short int stepLocal_3 = var_1_10;
 if (stepLocal_3 >= var_1_15) {
  var_1_17 = var_1_14;
 }
 unsigned char stepLocal_4 = var_1_14 == var_1_17;
 if (var_1_6 || stepLocal_4) {
  if (((var_1_19 - var_1_20) - var_1_21) > var_1_17) {
   var_1_18 = ((((var_1_14) > (((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22))))) ? (var_1_14) : (((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22))))));
  } else {
   var_1_18 = (((((var_1_20) < (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))))) ? (var_1_20) : (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))))) - var_1_25);
  }
 } else {
  var_1_18 = 5.75f;
 }
 if ((- var_1_17) > 31.9f) {
  var_1_1 = ((var_1_6 || var_1_4) && var_1_5);
 } else {
  var_1_1 = var_1_5;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65535);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 4611686.018427388000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427388000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 return ((((((((- var_1_17) > 31.9f) ? (var_1_1 == ((unsigned char) ((var_1_6 || var_1_4) && var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) && (((127.35 + var_1_13) <= var_1_7) ? ((4.5 <= (var_1_7 * var_1_13)) ? (var_1_6 == ((unsigned char) var_1_5)) : 1) : 1)) && ((var_1_9 > var_1_10) ? (var_1_8 == ((signed char) ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))))) : 1)) && (((! var_1_5) || (var_1_12 < last_1_var_1_15)) ? ((! var_1_5) ? (var_1_13 == ((float) var_1_14)) : (var_1_13 == ((float) 256.5f))) : 1)) && ((var_1_8 > var_1_9) ? ((var_1_13 > (var_1_13 + var_1_14)) ? (var_1_15 == ((unsigned short int) var_1_16)) : 1) : 1)) && ((var_1_10 >= var_1_15) ? (var_1_17 == ((double) var_1_14)) : 1)) && ((var_1_6 || (var_1_14 == var_1_17)) ? ((((var_1_19 - var_1_20) - var_1_21) > var_1_17) ? (var_1_18 == ((float) ((((var_1_14) > (((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22))))) ? (var_1_14) : (((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)))))))) : (var_1_18 == ((float) (((((var_1_20) < (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))))) ? (var_1_20) : (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))))) - var_1_25)))) : (var_1_18 == ((float) 5.75f)))
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

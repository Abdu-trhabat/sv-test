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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 8.4;
float var_1_2 = 9999999999.14;
float var_1_3 = 16.2;
float var_1_4 = 15.125;
float var_1_5 = 256.4;
float var_1_6 = 256.75;
float var_1_7 = 8.8;
unsigned char var_1_8 = 1;
float var_1_9 = 25.75;
float var_1_10 = 8.6;
unsigned short int var_1_11 = 128;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 10;
unsigned char var_1_14 = 1;
signed char var_1_16 = 5;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 128;
float last_1_var_1_7 = 8.8;
void initially(void) {
}
void step(void) {
 if (var_1_2 <= var_1_3) {
  var_1_1 = ((((var_1_4) < (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? (var_1_4) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))));
 }
 if (var_1_8) {
  if (last_1_var_1_7 < var_1_1) {
   var_1_7 = (((((var_1_9) > (32.75f)) ? (var_1_9) : (32.75f))) + var_1_10);
  }
 } else {
  var_1_7 = var_1_9;
 }
 var_1_11 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
 signed long int stepLocal_0 = 0;
 if (stepLocal_0 <= (var_1_12 >> var_1_16)) {
  if (! (var_1_1 != var_1_2)) {
   if (var_1_8) {
    var_1_14 = (((((128) > (var_1_17)) ? (128) : (var_1_17))) - var_1_16);
   } else {
    if (var_1_7 >= var_1_10) {
     var_1_14 = (var_1_16 + var_1_18);
    } else {
     if (var_1_19) {
      var_1_14 = var_1_18;
     } else {
      var_1_14 = var_1_20;
     }
    }
   }
  }
 } else {
  var_1_14 = var_1_18;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 15);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 127);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
}
int property(void) {
 return ((((var_1_2 <= var_1_3) ? (var_1_1 == ((float) ((((var_1_4) < (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? (var_1_4) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))))) : 1) && (var_1_8 ? ((last_1_var_1_7 < var_1_1) ? (var_1_7 == ((float) (((((var_1_9) > (32.75f)) ? (var_1_9) : (32.75f))) + var_1_10))) : 1) : (var_1_7 == ((float) var_1_9)))) && (var_1_11 == ((unsigned short int) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))))) && ((0 <= (var_1_12 >> var_1_16)) ? ((! (var_1_1 != var_1_2)) ? (var_1_8 ? (var_1_14 == ((unsigned char) (((((128) > (var_1_17)) ? (128) : (var_1_17))) - var_1_16))) : ((var_1_7 >= var_1_10) ? (var_1_14 == ((unsigned char) (var_1_16 + var_1_18))) : (var_1_19 ? (var_1_14 == ((unsigned char) var_1_18)) : (var_1_14 == ((unsigned char) var_1_20))))) : 1) : (var_1_14 == ((unsigned char) var_1_18)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 31.9;
float var_1_2 = 9.25;
float var_1_3 = 128.25;
float var_1_4 = 10.65;
float var_1_5 = 100.7;
float var_1_6 = 100.8;
float var_1_7 = 2.6;
signed long int var_1_8 = 32;
signed long int var_1_9 = 8;
signed long int var_1_10 = -1;
float var_1_11 = 64.5;
float var_1_12 = 0.25;
float var_1_13 = 100.25;
float var_1_14 = 100.5;
double var_1_15 = 32.125;
unsigned short int var_1_16 = 0;
unsigned short int var_1_17 = 1000;
signed long int var_1_18 = 1000;
void initially(void) {
}
void step(void) {
 if (var_1_2 >= var_1_3) {
  if (var_1_3 == var_1_2) {
   if (var_1_2 != 4.15f) {
    if (((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) >= (((((var_1_4 - var_1_5)) < (3.9f)) ? ((var_1_4 - var_1_5)) : (3.9f)))) {
     var_1_1 = var_1_6;
    } else {
     var_1_1 = 63.42f;
    }
   } else {
    var_1_1 = var_1_6;
   }
  }
 }
 if ((var_1_8 + var_1_9) < var_1_10) {
  var_1_7 = ((var_1_11 - ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))) + var_1_14);
 } else {
  if (var_1_10 < var_1_9) {
   var_1_7 = var_1_13;
  } else {
   var_1_7 = var_1_12;
  }
 }
 var_1_15 = ((((var_1_11 + var_1_13) < 0 ) ? -(var_1_11 + var_1_13) : (var_1_11 + var_1_13)));
 var_1_16 = var_1_17;
 var_1_18 = var_1_17;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 >= var_1_3) ? ((var_1_3 == var_1_2) ? ((var_1_2 != 4.15f) ? ((((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) >= (((((var_1_4 - var_1_5)) < (3.9f)) ? ((var_1_4 - var_1_5)) : (3.9f)))) ? (var_1_1 == ((float) var_1_6)) : (var_1_1 == ((float) 63.42f))) : (var_1_1 == ((float) var_1_6))) : 1) : 1) && (((var_1_8 + var_1_9) < var_1_10) ? (var_1_7 == ((float) ((var_1_11 - ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))) + var_1_14))) : ((var_1_10 < var_1_9) ? (var_1_7 == ((float) var_1_13)) : (var_1_7 == ((float) var_1_12))))) && (var_1_15 == ((double) ((((var_1_11 + var_1_13) < 0 ) ? -(var_1_11 + var_1_13) : (var_1_11 + var_1_13)))))) && (var_1_16 == ((unsigned short int) var_1_17))) && (var_1_18 == ((signed long int) var_1_17))
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

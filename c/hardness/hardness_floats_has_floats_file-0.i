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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch0has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 4.0;
double var_1_2 = 64.0;
double var_1_3 = -1.0;
double var_1_4 = 8.0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
double var_1_7 = 32.0;
double var_1_8 = 1.0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 128;
signed short int var_1_13 = -256;
signed short int var_1_14 = 128;
signed long int var_1_15 = 32;
signed long int var_1_16 = 4;
unsigned char var_1_17 = 8;
unsigned char var_1_18 = 4;
unsigned char var_1_19 = 128;
double var_1_20 = -50.0;
double var_1_21 = -1.0;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 + (((((var_1_3 + -64.0)) < (var_1_4)) ? ((var_1_3 + -64.0)) : (var_1_4))));
 if (var_1_6) {
  if (var_1_3 >= ((var_1_7 - var_1_8) + var_1_4)) {
   if (var_1_7 >= var_1_4) {
    var_1_5 = (var_1_9 || var_1_10);
   } else {
    var_1_5 = var_1_11;
   }
  } else {
   var_1_5 = var_1_10;
  }
 }
 signed long int stepLocal_0 = var_1_15 * var_1_16;
 if ((var_1_13 / var_1_14) >= stepLocal_0) {
  if (! var_1_5) {
   var_1_12 = (((((((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) < 0 ) ? -((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) : ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))))) < (var_1_19)) ? ((((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) < 0 ) ? -((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) : ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))))) : (var_1_19)));
  } else {
   if (var_1_7 <= ((var_1_8 / var_1_20) / var_1_21)) {
    var_1_12 = var_1_17;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -461168.6018427383000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -230584.3009213691400e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 2305843.009213691400e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32768);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32768);
 assume_abort_if_not(var_1_14 <= 32767);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483648);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 assume_abort_if_not(var_1_20 != 0.0F);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((var_1_1 == ((double) (var_1_2 + (((((var_1_3 + -64.0)) < (var_1_4)) ? ((var_1_3 + -64.0)) : (var_1_4)))))) && (var_1_6 ? ((var_1_3 >= ((var_1_7 - var_1_8) + var_1_4)) ? ((var_1_7 >= var_1_4) ? (var_1_5 == ((unsigned char) (var_1_9 || var_1_10))) : (var_1_5 == ((unsigned char) var_1_11))) : (var_1_5 == ((unsigned char) var_1_10))) : 1)) && (((var_1_13 / var_1_14) >= (var_1_15 * var_1_16)) ? ((! var_1_5) ? (var_1_12 == ((unsigned char) (((((((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) < 0 ) ? -((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) : ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))))) < (var_1_19)) ? ((((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) < 0 ) ? -((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) : ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))))) : (var_1_19))))) : ((var_1_7 <= ((var_1_8 / var_1_20) / var_1_21)) ? (var_1_12 == ((unsigned char) var_1_17)) : 1)) : 1)
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

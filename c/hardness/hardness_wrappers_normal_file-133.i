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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch133normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -64;
signed long int var_1_2 = 16;
signed long int var_1_3 = 1;
signed short int var_1_4 = -16;
signed short int var_1_5 = 2;
unsigned short int var_1_6 = 5;
unsigned short int var_1_7 = 256;
unsigned short int var_1_8 = 4;
double var_1_9 = 49.5;
unsigned char var_1_11 = 1;
double var_1_12 = 0.5;
double var_1_13 = 9.4;
double var_1_14 = 0.30000000000000004;
signed short int var_1_15 = -10000;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 1;
void initially(void) {
}
void step(void) {
 if (8 >= (var_1_2 + var_1_3)) {
  var_1_1 = ((((var_1_4) < ((var_1_5 + 10))) ? (var_1_4) : ((var_1_5 + 10))));
 }
 signed long int stepLocal_0 = var_1_3;
 if (stepLocal_0 <= var_1_2) {
  var_1_6 = (var_1_7 + var_1_8);
 }
 unsigned short int stepLocal_4 = var_1_6;
 unsigned char stepLocal_3 = var_1_11 || var_1_16;
 if (stepLocal_3 || (! var_1_17)) {
  if (stepLocal_4 < var_1_7) {
   var_1_15 = ((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4)));
  } else {
   if (var_1_17) {
    var_1_15 = var_1_5;
   }
  }
 } else {
  var_1_15 = var_1_5;
 }
 signed long int stepLocal_2 = var_1_6 + var_1_15;
 unsigned short int stepLocal_1 = var_1_7;
 if (var_1_7 <= stepLocal_2) {
  if (var_1_3 >= stepLocal_1) {
   var_1_9 = (var_1_12 + (((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))) < 0 ) ? -((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))) : ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))))));
  }
 } else {
  var_1_9 = (var_1_14 + var_1_12);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((8 >= (var_1_2 + var_1_3)) ? (var_1_1 == ((signed short int) ((((var_1_4) < ((var_1_5 + 10))) ? (var_1_4) : ((var_1_5 + 10)))))) : 1) && ((var_1_3 <= var_1_2) ? (var_1_6 == ((unsigned short int) (var_1_7 + var_1_8))) : 1)) && ((var_1_7 <= (var_1_6 + var_1_15)) ? ((var_1_3 >= var_1_7) ? (var_1_9 == ((double) (var_1_12 + (((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))) < 0 ) ? -((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))) : ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))))))) : 1) : (var_1_9 == ((double) (var_1_14 + var_1_12))))) && (((var_1_11 || var_1_16) || (! var_1_17)) ? ((var_1_6 < var_1_7) ? (var_1_15 == ((signed short int) ((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))) : (var_1_17 ? (var_1_15 == ((signed short int) var_1_5)) : 1)) : (var_1_15 == ((signed short int) var_1_5)))
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

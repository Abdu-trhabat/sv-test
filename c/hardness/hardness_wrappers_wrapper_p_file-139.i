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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 32;
signed short int* var_1_1_Pointer = &(var_1_1);
signed short int var_1_5 = 64;
signed short int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = 8;
signed short int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 100;
unsigned char* var_1_7_Pointer = &(var_1_7);
signed char var_1_8 = -4;
signed char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 200;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 64;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 10.45;
double* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 49.6;
double* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 128.5;
double* var_1_16_Pointer = &(var_1_16);
double var_1_17 = 10.3;
double* var_1_17_Pointer = &(var_1_17);
double last_1_var_1_14 = 10.45;
double last_1_var_1_17 = 10.3;
void initially(void) {
}
void step(void) {
 if (((((last_1_var_1_17) < (((((last_1_var_1_14) < 0 ) ? -(last_1_var_1_14) : (last_1_var_1_14))))) ? (last_1_var_1_17) : (((((last_1_var_1_14) < 0 ) ? -(last_1_var_1_14) : (last_1_var_1_14)))))) <= last_1_var_1_14) {
  (*(var_1_1_Pointer)) = ((((32 - ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))) < 0 ) ? -(32 - ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))) : (32 - ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))))));
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
 }
 if (((*(var_1_1_Pointer)) / (*(var_1_8_Pointer))) == ((*(var_1_5_Pointer)) << (*(var_1_6_Pointer)))) {
  (*(var_1_7_Pointer)) = (((*(var_1_9_Pointer)) - ((*(var_1_10_Pointer)) + (*(var_1_11_Pointer)))) - ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer))));
 } else {
  (*(var_1_7_Pointer)) = (*(var_1_12_Pointer));
 }
 unsigned char stepLocal_1 = (*(var_1_7_Pointer));
 unsigned char stepLocal_0 = (*(var_1_7_Pointer));
 if (stepLocal_1 < (*(var_1_9_Pointer))) {
  if (stepLocal_0 >= (*(var_1_1_Pointer))) {
   (*(var_1_14_Pointer)) = ((64.2 + (*(var_1_15_Pointer))) - (*(var_1_16_Pointer)));
  }
 }
 signed long int stepLocal_2 = (*(var_1_6_Pointer)) * (*(var_1_7_Pointer));
 if ((- (*(var_1_13_Pointer))) <= stepLocal_2) {
  (*(var_1_17_Pointer)) = (*(var_1_15_Pointer));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -128);
 assume_abort_if_not(var_1_8 <= 127);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 190);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 31);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 64);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 return ((((((((last_1_var_1_17) < (((((last_1_var_1_14) < 0 ) ? -(last_1_var_1_14) : (last_1_var_1_14))))) ? (last_1_var_1_17) : (((((last_1_var_1_14) < 0 ) ? -(last_1_var_1_14) : (last_1_var_1_14)))))) <= last_1_var_1_14) ? ((*(var_1_1_Pointer)) == ((signed short int) ((((32 - ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))) < 0 ) ? -(32 - ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))) : (32 - ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))))))) : ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_6_Pointer))))) && ((((*(var_1_1_Pointer)) / (*(var_1_8_Pointer))) == ((*(var_1_5_Pointer)) << (*(var_1_6_Pointer)))) ? ((*(var_1_7_Pointer)) == ((unsigned char) (((*(var_1_9_Pointer)) - ((*(var_1_10_Pointer)) + (*(var_1_11_Pointer)))) - ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))))) : ((*(var_1_7_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))))) && (((*(var_1_7_Pointer)) < (*(var_1_9_Pointer))) ? (((*(var_1_7_Pointer)) >= (*(var_1_1_Pointer))) ? ((*(var_1_14_Pointer)) == ((double) ((64.2 + (*(var_1_15_Pointer))) - (*(var_1_16_Pointer))))) : 1) : 1)) && (((- (*(var_1_13_Pointer))) <= ((*(var_1_6_Pointer)) * (*(var_1_7_Pointer)))) ? ((*(var_1_17_Pointer)) == ((double) (*(var_1_15_Pointer)))) : 1)
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

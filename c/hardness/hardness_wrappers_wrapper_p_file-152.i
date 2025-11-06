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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed short int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = -5;
signed long int* var_1_2_Pointer = &(var_1_2);
signed short int var_1_4 = 128;
signed short int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = -50;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 100000;
signed long int* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 127.8;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 3.5;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 9.7;
double* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 128;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 10;
unsigned char* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 200;
signed long int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 63.25;
double* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = 64;
signed long int* var_1_15_Pointer = &(var_1_15);
void initially(void) {
}
void step(void) {
 (*(var_1_5_Pointer)) = (32 - (*(var_1_6_Pointer)));
 signed long int stepLocal_2 = (*(var_1_5_Pointer));
 signed long int stepLocal_1 = ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) * (*(var_1_5_Pointer));
 if ((*(var_1_2_Pointer)) >= stepLocal_2) {
  (*(var_1_7_Pointer)) = ((*(var_1_8_Pointer)) - (*(var_1_9_Pointer)));
 } else {
  if (stepLocal_1 <= ((*(var_1_6_Pointer)) / (*(var_1_12_Pointer)))) {
   (*(var_1_7_Pointer)) = (*(var_1_8_Pointer));
  } else {
   if ((*(var_1_13_Pointer))) {
    (*(var_1_7_Pointer)) = (5.2 + (*(var_1_14_Pointer)));
   }
  }
 }
 if ((*(var_1_4_Pointer)) >= ((*(var_1_11_Pointer)) << (*(var_1_6_Pointer)))) {
  (*(var_1_15_Pointer)) = (((((*(var_1_11_Pointer))) < 0 ) ? -((*(var_1_11_Pointer))) : ((*(var_1_11_Pointer)))));
 } else {
  if ((*(var_1_13_Pointer))) {
   (*(var_1_15_Pointer)) = -4;
  }
 }
 signed long int stepLocal_0 = (*(var_1_15_Pointer)) + 5;
 if (10 > stepLocal_0) {
  if (127.625f != (- (*(var_1_7_Pointer)))) {
   (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
  } else {
   (*(var_1_1_Pointer)) = -10;
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 255);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((10 > ((*(var_1_15_Pointer)) + 5)) ? ((127.625f != (- (*(var_1_7_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_4_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed short int) -10))) : ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_4_Pointer))))) && ((*(var_1_5_Pointer)) == ((signed long int) (32 - (*(var_1_6_Pointer)))))) && (((*(var_1_2_Pointer)) >= (*(var_1_5_Pointer))) ? ((*(var_1_7_Pointer)) == ((double) ((*(var_1_8_Pointer)) - (*(var_1_9_Pointer))))) : (((((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) * (*(var_1_5_Pointer))) <= ((*(var_1_6_Pointer)) / (*(var_1_12_Pointer)))) ? ((*(var_1_7_Pointer)) == ((double) (*(var_1_8_Pointer)))) : ((*(var_1_13_Pointer)) ? ((*(var_1_7_Pointer)) == ((double) (5.2 + (*(var_1_14_Pointer))))) : 1)))) && (((*(var_1_4_Pointer)) >= ((*(var_1_11_Pointer)) << (*(var_1_6_Pointer)))) ? ((*(var_1_15_Pointer)) == ((signed long int) (((((*(var_1_11_Pointer))) < 0 ) ? -((*(var_1_11_Pointer))) : ((*(var_1_11_Pointer))))))) : ((*(var_1_13_Pointer)) ? ((*(var_1_15_Pointer)) == ((signed long int) -4)) : 1))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8Wrapper_P.c", 13, "reach_error"); }
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
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 16;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 4;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 64;
signed long int* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = -1;
signed long int* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = 32;
signed long int* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 128;
signed long int* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 2.8;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 64.5;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 199.15;
double* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 25.2;
double* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 0.0;
double* var_1_16_Pointer = &(var_1_16);
double var_1_17 = 3.5;
double* var_1_17_Pointer = &(var_1_17);
double var_1_18 = 0.5;
double* var_1_18_Pointer = &(var_1_18);
signed short int var_1_19 = 500;
signed short int* var_1_19_Pointer = &(var_1_19);
signed short int var_1_20 = 1;
signed short int* var_1_20_Pointer = &(var_1_20);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) >= (8u * (*(var_1_3_Pointer)))) {
  (*(var_1_1_Pointer)) = (! ((*(var_1_4_Pointer)) || ((*(var_1_5_Pointer)) || (*(var_1_6_Pointer)))));
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
 }
 signed long int stepLocal_1 = (*(var_1_10_Pointer));
 unsigned long int stepLocal_0 = 1u;
 if ((((*(var_1_3_Pointer)) * (*(var_1_2_Pointer))) * ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer)))) >= stepLocal_0) {
  if ((*(var_1_3_Pointer)) <= stepLocal_1) {
   (*(var_1_8_Pointer)) = (*(var_1_11_Pointer));
  } else {
   (*(var_1_8_Pointer)) = 8;
  }
 } else {
  (*(var_1_8_Pointer)) = (*(var_1_11_Pointer));
 }
 if ((~ (((((*(var_1_3_Pointer))) < ((*(var_1_8_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_8_Pointer)))))) <= ((*(var_1_10_Pointer)) % 1u)) {
  (*(var_1_12_Pointer)) = ((*(var_1_13_Pointer)) + ((*(var_1_14_Pointer)) + (*(var_1_15_Pointer))));
 } else {
  (*(var_1_12_Pointer)) = (((*(var_1_16_Pointer)) - (*(var_1_17_Pointer))) - (*(var_1_18_Pointer)));
 }
 (*(var_1_19_Pointer)) = (*(var_1_20_Pointer));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483647);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 4611686.018427383000e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -32767);
 assume_abort_if_not(var_1_20 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) >= (8u * (*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (! ((*(var_1_4_Pointer)) || ((*(var_1_5_Pointer)) || (*(var_1_6_Pointer))))))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_7_Pointer))))) && (((((*(var_1_3_Pointer)) * (*(var_1_2_Pointer))) * ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer)))) >= 1u) ? (((*(var_1_3_Pointer)) <= (*(var_1_10_Pointer))) ? ((*(var_1_8_Pointer)) == ((signed long int) (*(var_1_11_Pointer)))) : ((*(var_1_8_Pointer)) == ((signed long int) 8))) : ((*(var_1_8_Pointer)) == ((signed long int) (*(var_1_11_Pointer)))))) && (((~ (((((*(var_1_3_Pointer))) < ((*(var_1_8_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_8_Pointer)))))) <= ((*(var_1_10_Pointer)) % 1u)) ? ((*(var_1_12_Pointer)) == ((double) ((*(var_1_13_Pointer)) + ((*(var_1_14_Pointer)) + (*(var_1_15_Pointer)))))) : ((*(var_1_12_Pointer)) == ((double) (((*(var_1_16_Pointer)) - (*(var_1_17_Pointer))) - (*(var_1_18_Pointer))))))) && ((*(var_1_19_Pointer)) == ((signed short int) (*(var_1_20_Pointer))))
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

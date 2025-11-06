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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 25;
unsigned short int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 4;
unsigned char* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 1000000000;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 128;
signed long int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 2;
signed long int* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 127.625;
double* var_1_8_Pointer = &(var_1_8);
double var_1_10 = 0.8;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 128.75;
double* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 24.8;
double* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = -64;
signed long int* var_1_13_Pointer = &(var_1_13);
signed short int var_1_14 = -128;
signed short int* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 64;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 5;
signed char* var_1_16_Pointer = &(var_1_16);
double var_1_17 = 1.5;
double* var_1_17_Pointer = &(var_1_17);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((((*(var_1_5_Pointer)) * (*(var_1_6_Pointer)))) < ((~ (*(var_1_7_Pointer))))) ? (((*(var_1_5_Pointer)) * (*(var_1_6_Pointer)))) : ((~ (*(var_1_7_Pointer)))));
 if ((*(var_1_2_Pointer))) {
  (*(var_1_1_Pointer)) = ((((((((*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_3_Pointer))) : ((*(var_1_3_Pointer))))) < 0 ) ? -(((((*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_3_Pointer))) : ((*(var_1_3_Pointer))))) : (((((*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_3_Pointer))) : ((*(var_1_3_Pointer)))))));
 } else {
  if (((*(var_1_3_Pointer)) / (*(var_1_4_Pointer))) >= stepLocal_0) {
   (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
  }
 }
 signed long int stepLocal_2 = (*(var_1_1_Pointer)) ^ (*(var_1_5_Pointer));
 signed long int stepLocal_1 = (*(var_1_3_Pointer)) + (*(var_1_1_Pointer));
 if ((*(var_1_6_Pointer)) <= stepLocal_1) {
  if ((*(var_1_1_Pointer)) == stepLocal_2) {
   (*(var_1_8_Pointer)) = ((((((*(var_1_10_Pointer))) < 0 ) ? -((*(var_1_10_Pointer))) : ((*(var_1_10_Pointer))))) + (*(var_1_11_Pointer)));
  } else {
   (*(var_1_8_Pointer)) = (*(var_1_11_Pointer));
  }
 } else {
  (*(var_1_8_Pointer)) = (*(var_1_10_Pointer));
 }
 if ((*(var_1_6_Pointer)) > (*(var_1_13_Pointer))) {
  (*(var_1_12_Pointer)) = (((((*(var_1_11_Pointer))) < ((*(var_1_10_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_10_Pointer)))));
 }
 (*(var_1_14_Pointer)) = 200;
 (*(var_1_15_Pointer)) = (*(var_1_16_Pointer));
 (*(var_1_17_Pointer)) = (*(var_1_10_Pointer));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned short int) ((((((((*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_3_Pointer))) : ((*(var_1_3_Pointer))))) < 0 ) ? -(((((*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_3_Pointer))) : ((*(var_1_3_Pointer))))) : (((((*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_3_Pointer))) : ((*(var_1_3_Pointer))))))))) : ((((*(var_1_3_Pointer)) / (*(var_1_4_Pointer))) >= ((((((*(var_1_5_Pointer)) * (*(var_1_6_Pointer)))) < ((~ (*(var_1_7_Pointer))))) ? (((*(var_1_5_Pointer)) * (*(var_1_6_Pointer)))) : ((~ (*(var_1_7_Pointer))))))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_4_Pointer)))) : ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_3_Pointer)))))) && (((*(var_1_6_Pointer)) <= ((*(var_1_3_Pointer)) + (*(var_1_1_Pointer)))) ? (((*(var_1_1_Pointer)) == ((*(var_1_1_Pointer)) ^ (*(var_1_5_Pointer)))) ? ((*(var_1_8_Pointer)) == ((double) ((((((*(var_1_10_Pointer))) < 0 ) ? -((*(var_1_10_Pointer))) : ((*(var_1_10_Pointer))))) + (*(var_1_11_Pointer))))) : ((*(var_1_8_Pointer)) == ((double) (*(var_1_11_Pointer))))) : ((*(var_1_8_Pointer)) == ((double) (*(var_1_10_Pointer)))))) && (((*(var_1_6_Pointer)) > (*(var_1_13_Pointer))) ? ((*(var_1_12_Pointer)) == ((double) (((((*(var_1_11_Pointer))) < ((*(var_1_10_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_10_Pointer))))))) : 1)) && ((*(var_1_14_Pointer)) == ((signed short int) 200))) && ((*(var_1_15_Pointer)) == ((signed char) (*(var_1_16_Pointer))))) && ((*(var_1_17_Pointer)) == ((double) (*(var_1_10_Pointer))))
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

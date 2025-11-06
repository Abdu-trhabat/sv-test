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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 256.6;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 5;
unsigned short int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 32;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 16;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = -5;
signed long int* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 500.35;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 7.375;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 7.25;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 8.2;
double* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 8;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 16;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 32;
unsigned char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = -4;
signed char* var_1_14_Pointer = &(var_1_14);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = (200 - (*(var_1_12_Pointer))) - (*(var_1_13_Pointer));
 signed long int stepLocal_1 = (*(var_1_5_Pointer));
 if (stepLocal_1 < (*(var_1_3_Pointer))) {
  if (stepLocal_2 >= -100) {
   (*(var_1_11_Pointer)) = (*(var_1_12_Pointer));
  } else {
   (*(var_1_11_Pointer)) = (*(var_1_13_Pointer));
  }
 }
 signed long int stepLocal_3 = 1 - (*(var_1_13_Pointer));
 if ((((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer))))) >= (*(var_1_7_Pointer))) {
  if ((-4 + ((*(var_1_12_Pointer)) * (*(var_1_11_Pointer)))) < stepLocal_3) {
   (*(var_1_14_Pointer)) = (*(var_1_12_Pointer));
  } else {
   (*(var_1_14_Pointer)) = -8;
  }
 } else {
  (*(var_1_14_Pointer)) = (*(var_1_12_Pointer));
 }
 signed long int stepLocal_0 = (((((*(var_1_4_Pointer))) < (-5)) ? ((*(var_1_4_Pointer))) : (-5))) + (((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer)))));
 if ((*(var_1_2_Pointer))) {
  if ((((((*(var_1_11_Pointer))) < (0)) ? ((*(var_1_11_Pointer))) : (0))) <= stepLocal_0) {
   (*(var_1_1_Pointer)) = (((((*(var_1_7_Pointer))) < 0 ) ? -((*(var_1_7_Pointer))) : ((*(var_1_7_Pointer)))));
  } else {
   (*(var_1_1_Pointer)) = (((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) - (*(var_1_10_Pointer)));
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 64);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((*(var_1_2_Pointer)) ? (((((((*(var_1_11_Pointer))) < (0)) ? ((*(var_1_11_Pointer))) : (0))) <= ((((((*(var_1_4_Pointer))) < (-5)) ? ((*(var_1_4_Pointer))) : (-5))) + (((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer))))))) ? ((*(var_1_1_Pointer)) == ((double) (((((*(var_1_7_Pointer))) < 0 ) ? -((*(var_1_7_Pointer))) : ((*(var_1_7_Pointer))))))) : ((*(var_1_1_Pointer)) == ((double) (((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) - (*(var_1_10_Pointer)))))) : ((*(var_1_1_Pointer)) == ((double) (*(var_1_8_Pointer))))) && (((*(var_1_5_Pointer)) < (*(var_1_3_Pointer))) ? ((((200 - (*(var_1_12_Pointer))) - (*(var_1_13_Pointer))) >= -100) ? ((*(var_1_11_Pointer)) == ((unsigned short int) (*(var_1_12_Pointer)))) : ((*(var_1_11_Pointer)) == ((unsigned short int) (*(var_1_13_Pointer))))) : 1)) && (((((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer))))) >= (*(var_1_7_Pointer))) ? (((-4 + ((*(var_1_12_Pointer)) * (*(var_1_11_Pointer)))) < (1 - (*(var_1_13_Pointer)))) ? ((*(var_1_14_Pointer)) == ((signed char) (*(var_1_12_Pointer)))) : ((*(var_1_14_Pointer)) == ((signed char) -8))) : ((*(var_1_14_Pointer)) == ((signed char) (*(var_1_12_Pointer)))))
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

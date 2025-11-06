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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch22Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -5;
signed short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 5;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 25;
unsigned char* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 256;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 44772;
unsigned short int* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 5.9;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 7.6;
float* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 64.2;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 128.75;
float* var_1_10_Pointer = &(var_1_10);
unsigned long int var_1_11 = 8;
unsigned long int* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 3135928546;
unsigned long int* var_1_12_Pointer = &(var_1_12);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) == (*(var_1_3_Pointer))) {
  (*(var_1_1_Pointer)) = ((*(var_1_2_Pointer)) + -16);
 } else {
  if ((*(var_1_4_Pointer))) {
   (*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
  }
 }
 signed short int stepLocal_0 = (*(var_1_1_Pointer));
 if ((*(var_1_4_Pointer))) {
  (*(var_1_5_Pointer)) = (*(var_1_2_Pointer));
 } else {
  if ((*(var_1_2_Pointer)) <= stepLocal_0) {
   (*(var_1_5_Pointer)) = (((((*(var_1_3_Pointer))) > (((*(var_1_6_Pointer)) - 8))) ? ((*(var_1_3_Pointer))) : (((*(var_1_6_Pointer)) - 8))));
  }
 }
 unsigned short int stepLocal_1 = (*(var_1_5_Pointer));
 if (stepLocal_1 >= ((*(var_1_2_Pointer)) & (*(var_1_3_Pointer)))) {
  (*(var_1_11_Pointer)) = ((((((((((((50u) < ((*(var_1_3_Pointer)))) ? (50u) : ((*(var_1_3_Pointer)))))) < ((*(var_1_6_Pointer)))) ? (((((50u) < ((*(var_1_3_Pointer)))) ? (50u) : ((*(var_1_3_Pointer)))))) : ((*(var_1_6_Pointer)))))) < (((*(var_1_12_Pointer)) - (*(var_1_5_Pointer))))) ? (((((((((50u) < ((*(var_1_3_Pointer)))) ? (50u) : ((*(var_1_3_Pointer)))))) < ((*(var_1_6_Pointer)))) ? (((((50u) < ((*(var_1_3_Pointer)))) ? (50u) : ((*(var_1_3_Pointer)))))) : ((*(var_1_6_Pointer)))))) : (((*(var_1_12_Pointer)) - (*(var_1_5_Pointer))))));
 } else {
  if (5.7 < (*(var_1_9_Pointer))) {
   (*(var_1_11_Pointer)) = (*(var_1_5_Pointer));
  } else {
   (*(var_1_11_Pointer)) = (*(var_1_3_Pointer));
  }
 }
 if ((*(var_1_11_Pointer)) < (*(var_1_5_Pointer))) {
  (*(var_1_7_Pointer)) = (((10.25f + (*(var_1_8_Pointer))) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 32767);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -115292.1504606845700e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 1152921.504606845700e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -230584.3009213691400e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) == (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed short int) ((*(var_1_2_Pointer)) + -16))) : ((*(var_1_4_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_3_Pointer)))) : 1)) && ((*(var_1_4_Pointer)) ? ((*(var_1_5_Pointer)) == ((unsigned short int) (*(var_1_2_Pointer)))) : (((*(var_1_2_Pointer)) <= (*(var_1_1_Pointer))) ? ((*(var_1_5_Pointer)) == ((unsigned short int) (((((*(var_1_3_Pointer))) > (((*(var_1_6_Pointer)) - 8))) ? ((*(var_1_3_Pointer))) : (((*(var_1_6_Pointer)) - 8)))))) : 1))) && (((*(var_1_11_Pointer)) < (*(var_1_5_Pointer))) ? ((*(var_1_7_Pointer)) == ((float) (((10.25f + (*(var_1_8_Pointer))) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer))))) : 1)) && (((*(var_1_5_Pointer)) >= ((*(var_1_2_Pointer)) & (*(var_1_3_Pointer)))) ? ((*(var_1_11_Pointer)) == ((unsigned long int) ((((((((((((50u) < ((*(var_1_3_Pointer)))) ? (50u) : ((*(var_1_3_Pointer)))))) < ((*(var_1_6_Pointer)))) ? (((((50u) < ((*(var_1_3_Pointer)))) ? (50u) : ((*(var_1_3_Pointer)))))) : ((*(var_1_6_Pointer)))))) < (((*(var_1_12_Pointer)) - (*(var_1_5_Pointer))))) ? (((((((((50u) < ((*(var_1_3_Pointer)))) ? (50u) : ((*(var_1_3_Pointer)))))) < ((*(var_1_6_Pointer)))) ? (((((50u) < ((*(var_1_3_Pointer)))) ? (50u) : ((*(var_1_3_Pointer)))))) : ((*(var_1_6_Pointer)))))) : (((*(var_1_12_Pointer)) - (*(var_1_5_Pointer)))))))) : ((5.7 < (*(var_1_9_Pointer))) ? ((*(var_1_11_Pointer)) == ((unsigned long int) (*(var_1_5_Pointer)))) : ((*(var_1_11_Pointer)) == ((unsigned long int) (*(var_1_3_Pointer))))))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch48Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 32.8;
float* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 255.675;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 5.5;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 128.75;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 4.5;
float* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 9.25;
float* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 4;
unsigned short int* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned short int var_1_9 = 0;
unsigned short int* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = -128;
signed long int* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 0;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned short int var_1_12 = 256;
unsigned short int* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 2.35;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 63.8;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 128.5;
float* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 15.6;
float* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) {
  if ((*(var_1_3_Pointer)) < (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))) + 1.395f)) {
   (*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
  } else {
   (*(var_1_1_Pointer)) = 3.25f;
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
 }
 if ((*(var_1_8_Pointer))) {
  if ((((((16) < 0 ) ? -(16) : (16))) + (*(var_1_9_Pointer))) <= (*(var_1_10_Pointer))) {
   (*(var_1_7_Pointer)) = ((((0) > ((*(var_1_11_Pointer)))) ? (0) : ((*(var_1_11_Pointer)))));
  } else {
   (*(var_1_7_Pointer)) = ((*(var_1_12_Pointer)) + ((((5) < 0 ) ? -(5) : (5))));
  }
 }
 if (((*(var_1_12_Pointer)) * (*(var_1_10_Pointer))) < (*(var_1_7_Pointer))) {
  (*(var_1_13_Pointer)) = (((((*(var_1_6_Pointer))) > (((*(var_1_14_Pointer)) + ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))))) ? ((*(var_1_6_Pointer))) : (((*(var_1_14_Pointer)) + ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))))));
 } else {
  if ((((((*(var_1_7_Pointer))) > ((*(var_1_10_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_10_Pointer))))) <= 50) {
   (*(var_1_13_Pointer)) = (*(var_1_16_Pointer));
  } else {
   (*(var_1_13_Pointer)) = (*(var_1_15_Pointer));
  }
 }
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
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) ? (((*(var_1_3_Pointer)) < (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))) + 1.395f)) ? ((*(var_1_1_Pointer)) == ((float) (*(var_1_6_Pointer)))) : ((*(var_1_1_Pointer)) == ((float) 3.25f))) : ((*(var_1_1_Pointer)) == ((float) (*(var_1_6_Pointer))))) && ((*(var_1_8_Pointer)) ? (((((((16) < 0 ) ? -(16) : (16))) + (*(var_1_9_Pointer))) <= (*(var_1_10_Pointer))) ? ((*(var_1_7_Pointer)) == ((unsigned short int) ((((0) > ((*(var_1_11_Pointer)))) ? (0) : ((*(var_1_11_Pointer))))))) : ((*(var_1_7_Pointer)) == ((unsigned short int) ((*(var_1_12_Pointer)) + ((((5) < 0 ) ? -(5) : (5))))))) : 1)) && ((((*(var_1_12_Pointer)) * (*(var_1_10_Pointer))) < (*(var_1_7_Pointer))) ? ((*(var_1_13_Pointer)) == ((float) (((((*(var_1_6_Pointer))) > (((*(var_1_14_Pointer)) + ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))))) ? ((*(var_1_6_Pointer))) : (((*(var_1_14_Pointer)) + ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer))))))))) : (((((((*(var_1_7_Pointer))) > ((*(var_1_10_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_10_Pointer))))) <= 50) ? ((*(var_1_13_Pointer)) == ((float) (*(var_1_16_Pointer)))) : ((*(var_1_13_Pointer)) == ((float) (*(var_1_15_Pointer))))))
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

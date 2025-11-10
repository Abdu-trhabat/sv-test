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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char* var_1_1_Pointer = &(var_1_1);
float var_1_3 = 8.2;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 100000000000.4;
float* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_6 = 4;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 25;
unsigned short int* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = 4;
signed long int* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 63.6;
float* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 1;
unsigned char* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 0.0;
float* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 4.6;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 31.4;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 9.9;
float* var_1_15_Pointer = &(var_1_15);
unsigned long int var_1_16 = 64;
unsigned long int* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 (*(var_1_16_Pointer)) = (*(var_1_6_Pointer));
 signed long int stepLocal_0 = ~ (*(var_1_6_Pointer));
 if ((*(var_1_8_Pointer))) {
  if (stepLocal_0 < ((*(var_1_16_Pointer)) - (*(var_1_9_Pointer)))) {
   (*(var_1_7_Pointer)) = (*(var_1_6_Pointer));
  }
 }
 unsigned char stepLocal_1 = -256 == ((*(var_1_6_Pointer)) * (*(var_1_16_Pointer)));
 if ((*(var_1_8_Pointer))) {
  if (stepLocal_1 || (*(var_1_11_Pointer))) {
   (*(var_1_10_Pointer)) = (((*(var_1_12_Pointer)) - (*(var_1_13_Pointer))) - (*(var_1_14_Pointer)));
  } else {
   (*(var_1_10_Pointer)) = (((((*(var_1_14_Pointer)) - ((*(var_1_13_Pointer)) + (*(var_1_15_Pointer)))) < 0 ) ? -((*(var_1_14_Pointer)) - ((*(var_1_13_Pointer)) + (*(var_1_15_Pointer)))) : ((*(var_1_14_Pointer)) - ((*(var_1_13_Pointer)) + (*(var_1_15_Pointer))))));
  }
 } else {
  (*(var_1_10_Pointer)) = (((((*(var_1_12_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_12_Pointer))) : ((*(var_1_15_Pointer)))));
 }
 if (! ((*(var_1_10_Pointer)) <= ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))))) {
  if (-1 < (*(var_1_16_Pointer))) {
   (*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
  } else {
   (*(var_1_1_Pointer)) = 128;
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 4611686.018427383000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((! ((*(var_1_10_Pointer)) <= ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))))) ? ((-1 < (*(var_1_16_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_6_Pointer)))) : ((*(var_1_1_Pointer)) == ((unsigned char) 128))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_6_Pointer))))) && ((*(var_1_8_Pointer)) ? (((~ (*(var_1_6_Pointer))) < ((*(var_1_16_Pointer)) - (*(var_1_9_Pointer)))) ? ((*(var_1_7_Pointer)) == ((unsigned short int) (*(var_1_6_Pointer)))) : 1) : 1)) && ((*(var_1_8_Pointer)) ? (((-256 == ((*(var_1_6_Pointer)) * (*(var_1_16_Pointer)))) || (*(var_1_11_Pointer))) ? ((*(var_1_10_Pointer)) == ((float) (((*(var_1_12_Pointer)) - (*(var_1_13_Pointer))) - (*(var_1_14_Pointer))))) : ((*(var_1_10_Pointer)) == ((float) (((((*(var_1_14_Pointer)) - ((*(var_1_13_Pointer)) + (*(var_1_15_Pointer)))) < 0 ) ? -((*(var_1_14_Pointer)) - ((*(var_1_13_Pointer)) + (*(var_1_15_Pointer)))) : ((*(var_1_14_Pointer)) - ((*(var_1_13_Pointer)) + (*(var_1_15_Pointer))))))))) : ((*(var_1_10_Pointer)) == ((float) (((((*(var_1_12_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_12_Pointer))) : ((*(var_1_15_Pointer))))))))) && ((*(var_1_16_Pointer)) == ((unsigned long int) (*(var_1_6_Pointer))))
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

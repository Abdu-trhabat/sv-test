// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch99Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 255.5;
float* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 16;
unsigned char* var_1_2_Pointer = &(var_1_2);
float var_1_4 = 1000000000000000.6;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 500.5;
float* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 99999999999.5;
float* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 1;
unsigned char* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 127.25;
float* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 4.8;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 0.4;
float* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 0;
signed long int* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 256;
signed long int* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = 25;
signed long int* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = -5;
signed long int* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = 2;
signed short int* var_1_15_Pointer = &(var_1_15);
signed long int var_1_16 = -50;
signed long int* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((8) < 0 ) ? -(8) : (8));
 if ((((((200) < (128)) ? (200) : (128))) - (*(var_1_2_Pointer))) > stepLocal_0) {
  (*(var_1_1_Pointer)) = ((((((*(var_1_4_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer))))) - (*(var_1_6_Pointer)));
 } else {
  if ((*(var_1_7_Pointer))) {
   (*(var_1_1_Pointer)) = ((((((*(var_1_8_Pointer))) < ((*(var_1_9_Pointer)))) ? ((*(var_1_8_Pointer))) : ((*(var_1_9_Pointer))))) + (*(var_1_10_Pointer)));
  }
 }
 if (((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))) == (*(var_1_1_Pointer))) {
  (*(var_1_11_Pointer)) = ((((((*(var_1_2_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_2_Pointer))) : ((*(var_1_12_Pointer))))) - (*(var_1_13_Pointer)));
 } else {
  (*(var_1_11_Pointer)) = (*(var_1_13_Pointer));
 }
 signed long int stepLocal_1 = (*(var_1_12_Pointer)) % (*(var_1_15_Pointer));
 if ((*(var_1_9_Pointer)) == (*(var_1_4_Pointer))) {
  (*(var_1_14_Pointer)) = (*(var_1_13_Pointer));
 } else {
  if (stepLocal_1 != (*(var_1_13_Pointer))) {
   (*(var_1_14_Pointer)) = (((((((*(var_1_15_Pointer)) + (*(var_1_2_Pointer))) + (*(var_1_16_Pointer)))) > ((*(var_1_13_Pointer)))) ? ((((*(var_1_15_Pointer)) + (*(var_1_2_Pointer))) + (*(var_1_16_Pointer)))) : ((*(var_1_13_Pointer)))));
  } else {
   (*(var_1_14_Pointer)) = (*(var_1_16_Pointer));
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -461168.6018427382800e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483646);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32768);
 assume_abort_if_not(var_1_15 <= 32767);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -1073741823);
 assume_abort_if_not(var_1_16 <= 1073741823);
}
void updateLastVariables() {
}
int property() {
 return ((((((((200) < (128)) ? (200) : (128))) - (*(var_1_2_Pointer))) > ((((8) < 0 ) ? -(8) : (8)))) ? ((*(var_1_1_Pointer)) == ((float) ((((((*(var_1_4_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer))))) - (*(var_1_6_Pointer))))) : ((*(var_1_7_Pointer)) ? ((*(var_1_1_Pointer)) == ((float) ((((((*(var_1_8_Pointer))) < ((*(var_1_9_Pointer)))) ? ((*(var_1_8_Pointer))) : ((*(var_1_9_Pointer))))) + (*(var_1_10_Pointer))))) : 1)) && ((((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))) == (*(var_1_1_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed long int) ((((((*(var_1_2_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_2_Pointer))) : ((*(var_1_12_Pointer))))) - (*(var_1_13_Pointer))))) : ((*(var_1_11_Pointer)) == ((signed long int) (*(var_1_13_Pointer)))))) && (((*(var_1_9_Pointer)) == (*(var_1_4_Pointer))) ? ((*(var_1_14_Pointer)) == ((signed long int) (*(var_1_13_Pointer)))) : ((((*(var_1_12_Pointer)) % (*(var_1_15_Pointer))) != (*(var_1_13_Pointer))) ? ((*(var_1_14_Pointer)) == ((signed long int) (((((((*(var_1_15_Pointer)) + (*(var_1_2_Pointer))) + (*(var_1_16_Pointer)))) > ((*(var_1_13_Pointer)))) ? ((((*(var_1_15_Pointer)) + (*(var_1_2_Pointer))) + (*(var_1_16_Pointer)))) : ((*(var_1_13_Pointer))))))) : ((*(var_1_14_Pointer)) == ((signed long int) (*(var_1_16_Pointer))))))
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

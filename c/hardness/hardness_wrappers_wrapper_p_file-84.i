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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch84Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 128;
unsigned char* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 2;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 256;
signed long int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 25;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 64;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 8;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 64;
unsigned short int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 27843;
unsigned short int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = -4;
signed short int* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_13 = 128;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 5;
unsigned char* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = 28020;
signed short int* var_1_15_Pointer = &(var_1_15);
signed short int var_1_16 = 128;
signed short int* var_1_16_Pointer = &(var_1_16);
float var_1_17 = 10000000000000.926;
float* var_1_17_Pointer = &(var_1_17);
float var_1_18 = 1000000.6;
float* var_1_18_Pointer = &(var_1_18);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (*(var_1_3_Pointer));
 if ((*(var_1_2_Pointer)) != stepLocal_0) {
  (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + (((((((((*(var_1_5_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer)))))) > ((*(var_1_7_Pointer)))) ? ((((((*(var_1_5_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer)))))) : ((*(var_1_7_Pointer))))));
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
 }
 if ((*(var_1_9_Pointer))) {
  (*(var_1_8_Pointer)) = (((*(var_1_10_Pointer)) + 23103) - (32 + (*(var_1_6_Pointer))));
 }
 if ((*(var_1_3_Pointer)) < (*(var_1_8_Pointer))) {
  if (((- 8) / ((*(var_1_13_Pointer)) - (*(var_1_14_Pointer)))) >= (*(var_1_6_Pointer))) {
   (*(var_1_11_Pointer)) = ((*(var_1_1_Pointer)) - ((*(var_1_15_Pointer)) - (*(var_1_14_Pointer))));
  }
 }
 if (! ((*(var_1_5_Pointer)) > (*(var_1_10_Pointer)))) {
  (*(var_1_16_Pointer)) = (32 - 8);
 } else {
  (*(var_1_16_Pointer)) = ((*(var_1_13_Pointer)) - (*(var_1_4_Pointer)));
 }
 (*(var_1_17_Pointer)) = (*(var_1_18_Pointer));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 16383);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 127);
 assume_abort_if_not(var_1_13 <= 255);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 126);
 assume_abort_if_not(var_1_14 != 127);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 16383);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) != (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_4_Pointer)) + (((((((((*(var_1_5_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer)))))) > ((*(var_1_7_Pointer)))) ? ((((((*(var_1_5_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer)))))) : ((*(var_1_7_Pointer)))))))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_4_Pointer))))) && ((*(var_1_9_Pointer)) ? ((*(var_1_8_Pointer)) == ((unsigned short int) (((*(var_1_10_Pointer)) + 23103) - (32 + (*(var_1_6_Pointer)))))) : 1)) && (((*(var_1_3_Pointer)) < (*(var_1_8_Pointer))) ? ((((- 8) / ((*(var_1_13_Pointer)) - (*(var_1_14_Pointer)))) >= (*(var_1_6_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed short int) ((*(var_1_1_Pointer)) - ((*(var_1_15_Pointer)) - (*(var_1_14_Pointer)))))) : 1) : 1)) && ((! ((*(var_1_5_Pointer)) > (*(var_1_10_Pointer)))) ? ((*(var_1_16_Pointer)) == ((signed short int) (32 - 8))) : ((*(var_1_16_Pointer)) == ((signed short int) ((*(var_1_13_Pointer)) - (*(var_1_4_Pointer))))))) && ((*(var_1_17_Pointer)) == ((float) (*(var_1_18_Pointer))))
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

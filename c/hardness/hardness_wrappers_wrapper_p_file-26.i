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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch26Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -1;
signed short int* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 255.5;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 1.25;
double* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 1;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = -10;
signed short int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = -1;
signed short int* var_1_6_Pointer = &(var_1_6);
signed short int var_1_7 = 5;
signed short int* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = 4;
signed short int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 0;
signed short int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = -32;
signed short int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = 1;
signed short int* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 1.125;
float* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 199.5;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 100000000000000.3;
float* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 64;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 2;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned long int var_1_17 = 50;
unsigned long int* var_1_17_Pointer = &(var_1_17);
signed long int var_1_19 = -32;
signed long int* var_1_19_Pointer = &(var_1_19);
float var_1_20 = 8.75;
float* var_1_20_Pointer = &(var_1_20);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) {
  (*(var_1_1_Pointer)) = (((((*(var_1_4_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer)))));
 } else {
  (*(var_1_1_Pointer)) = ((((((*(var_1_6_Pointer)) - (((((*(var_1_7_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))))) < (((*(var_1_9_Pointer)) + (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer)))))))) ? (((*(var_1_6_Pointer)) - (((((*(var_1_7_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))))) : (((*(var_1_9_Pointer)) + (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer)))))))));
 }
 (*(var_1_12_Pointer)) = ((0.85f - (*(var_1_13_Pointer))) + (*(var_1_14_Pointer)));
 if ((- (*(var_1_8_Pointer))) >= ((*(var_1_4_Pointer)) / ((((-4) < 0 ) ? -(-4) : (-4))))) {
  (*(var_1_15_Pointer)) = (*(var_1_16_Pointer));
 }
 signed long int stepLocal_0 = (*(var_1_7_Pointer)) * ((*(var_1_1_Pointer)) / (*(var_1_19_Pointer)));
 if (((*(var_1_5_Pointer)) + ((*(var_1_11_Pointer)) + (*(var_1_15_Pointer)))) != stepLocal_0) {
  (*(var_1_17_Pointer)) = (((((10u) < (((*(var_1_15_Pointer)) + (*(var_1_8_Pointer))))) ? (10u) : (((*(var_1_15_Pointer)) + (*(var_1_8_Pointer)))))) + (*(var_1_7_Pointer)));
 }
 (*(var_1_20_Pointer)) = (*(var_1_13_Pointer));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -16383);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -16383);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483648);
 assume_abort_if_not(var_1_19 <= 2147483647);
 assume_abort_if_not(var_1_19 != 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed short int) (((((*(var_1_4_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer))))))) : ((*(var_1_1_Pointer)) == ((signed short int) ((((((*(var_1_6_Pointer)) - (((((*(var_1_7_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))))) < (((*(var_1_9_Pointer)) + (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer)))))))) ? (((*(var_1_6_Pointer)) - (((((*(var_1_7_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))))) : (((*(var_1_9_Pointer)) + (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer)))))))))))) && ((*(var_1_12_Pointer)) == ((float) ((0.85f - (*(var_1_13_Pointer))) + (*(var_1_14_Pointer)))))) && (((- (*(var_1_8_Pointer))) >= ((*(var_1_4_Pointer)) / ((((-4) < 0 ) ? -(-4) : (-4))))) ? ((*(var_1_15_Pointer)) == ((unsigned char) (*(var_1_16_Pointer)))) : 1)) && ((((*(var_1_5_Pointer)) + ((*(var_1_11_Pointer)) + (*(var_1_15_Pointer)))) != ((*(var_1_7_Pointer)) * ((*(var_1_1_Pointer)) / (*(var_1_19_Pointer))))) ? ((*(var_1_17_Pointer)) == ((unsigned long int) (((((10u) < (((*(var_1_15_Pointer)) + (*(var_1_8_Pointer))))) ? (10u) : (((*(var_1_15_Pointer)) + (*(var_1_8_Pointer)))))) + (*(var_1_7_Pointer))))) : 1)) && ((*(var_1_20_Pointer)) == ((float) (*(var_1_13_Pointer))))
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

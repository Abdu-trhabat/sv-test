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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195Wrapper_P.c", 13, "reach_error"); }
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
unsigned char var_1_3 = 64;
unsigned char* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 1;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 0.04;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 24.625;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 199.2;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 31.5;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 4.8;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 99999999999.2;
double* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 1000;
signed long int* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 4.78;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 31.95;
float* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = 50;
signed long int* var_1_15_Pointer = &(var_1_15);
signed long int var_1_16 = 25;
signed long int* var_1_16_Pointer = &(var_1_16);
signed long int var_1_17 = 128;
signed long int* var_1_17_Pointer = &(var_1_17);
unsigned long int var_1_18 = 10;
unsigned long int* var_1_18_Pointer = &(var_1_18);
unsigned long int var_1_19 = 5;
unsigned long int* var_1_19_Pointer = &(var_1_19);
double last_1_var_1_6 = 0.04;
signed long int last_1_var_1_12 = 1000;
void initially(void) {
}
void step(void) {
 if (((*(var_1_13_Pointer)) - (*(var_1_14_Pointer))) > last_1_var_1_6) {
  (*(var_1_12_Pointer)) = ((((((*(var_1_3_Pointer)) - last_1_var_1_12)) < ((((((*(var_1_15_Pointer))) < ((*(var_1_16_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_16_Pointer))))))) ? (((*(var_1_3_Pointer)) - last_1_var_1_12)) : ((((((*(var_1_15_Pointer))) < ((*(var_1_16_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_16_Pointer))))))));
 } else {
  (*(var_1_12_Pointer)) = (last_1_var_1_12 - (((((*(var_1_17_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_17_Pointer))) : ((*(var_1_3_Pointer))))));
 }
 if ((*(var_1_12_Pointer)) <= ((*(var_1_17_Pointer)) * (- (*(var_1_12_Pointer))))) {
  (*(var_1_18_Pointer)) = (((((*(var_1_12_Pointer))) > ((*(var_1_19_Pointer)))) ? ((*(var_1_12_Pointer))) : ((*(var_1_19_Pointer)))));
 } else {
  (*(var_1_18_Pointer)) = (*(var_1_12_Pointer));
 }
 signed long int stepLocal_0 = (*(var_1_12_Pointer));
 if (stepLocal_0 <= (*(var_1_18_Pointer))) {
  (*(var_1_6_Pointer)) = ((((((((((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) < ((*(var_1_9_Pointer)))) ? (((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) : ((*(var_1_9_Pointer)))))) > ((((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))))) ? (((((((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) < ((*(var_1_9_Pointer)))) ? (((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) : ((*(var_1_9_Pointer)))))) : ((((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))))));
 } else {
  (*(var_1_6_Pointer)) = 16.2;
 }
 if ((*(var_1_12_Pointer)) < (*(var_1_18_Pointer))) {
  (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
 } else {
  (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) && (*(var_1_5_Pointer)));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483647);
 assume_abort_if_not(var_1_15 <= 2147483646);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483647);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483646);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_12 = var_1_12;
}
int property(void) {
 return (((((*(var_1_12_Pointer)) < (*(var_1_18_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_4_Pointer)))) : ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_4_Pointer)) && (*(var_1_5_Pointer)))))) && (((*(var_1_12_Pointer)) <= (*(var_1_18_Pointer))) ? ((*(var_1_6_Pointer)) == ((double) ((((((((((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) < ((*(var_1_9_Pointer)))) ? (((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) : ((*(var_1_9_Pointer)))))) > ((((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))))) ? (((((((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) < ((*(var_1_9_Pointer)))) ? (((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) : ((*(var_1_9_Pointer)))))) : ((((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer)))))))))) : ((*(var_1_6_Pointer)) == ((double) 16.2)))) && ((((*(var_1_13_Pointer)) - (*(var_1_14_Pointer))) > last_1_var_1_6) ? ((*(var_1_12_Pointer)) == ((signed long int) ((((((*(var_1_3_Pointer)) - last_1_var_1_12)) < ((((((*(var_1_15_Pointer))) < ((*(var_1_16_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_16_Pointer))))))) ? (((*(var_1_3_Pointer)) - last_1_var_1_12)) : ((((((*(var_1_15_Pointer))) < ((*(var_1_16_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_16_Pointer)))))))))) : ((*(var_1_12_Pointer)) == ((signed long int) (last_1_var_1_12 - (((((*(var_1_17_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_17_Pointer))) : ((*(var_1_3_Pointer)))))))))) && (((*(var_1_12_Pointer)) <= ((*(var_1_17_Pointer)) * (- (*(var_1_12_Pointer))))) ? ((*(var_1_18_Pointer)) == ((unsigned long int) (((((*(var_1_12_Pointer))) > ((*(var_1_19_Pointer)))) ? ((*(var_1_12_Pointer))) : ((*(var_1_19_Pointer))))))) : ((*(var_1_18_Pointer)) == ((unsigned long int) (*(var_1_12_Pointer)))))
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

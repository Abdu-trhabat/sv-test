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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned short int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = -2;
signed long int* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 9999.5;
double* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 1;
unsigned char* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 999999.6;
double* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 16.6;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 0.375;
double* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 8;
unsigned short int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 50;
unsigned short int* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 256;
unsigned short int* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = -5;
signed short int* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = 10;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = 2;
signed char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 2;
signed char* var_1_15_Pointer = &(var_1_15);
signed short int var_1_16 = 31574;
signed short int* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = 64;
signed char* var_1_17_Pointer = &(var_1_17);
void initially(void) {
}
void step(void) {
 if (128 <= (*(var_1_2_Pointer))) {
  (*(var_1_1_Pointer)) = 25;
 }
 if ((*(var_1_4_Pointer))) {
  (*(var_1_3_Pointer)) = (*(var_1_5_Pointer));
 } else {
  (*(var_1_3_Pointer)) = ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)));
 }
 if ((*(var_1_4_Pointer)) || (*(var_1_9_Pointer))) {
  (*(var_1_8_Pointer)) = ((((((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))) < 0 ) ? -(((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))) : (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer)))))));
 } else {
  (*(var_1_8_Pointer)) = (*(var_1_10_Pointer));
 }
 signed long int stepLocal_0 = 1000 - (*(var_1_11_Pointer));
 if (7.2 < (*(var_1_6_Pointer))) {
  if (((*(var_1_13_Pointer)) - ((*(var_1_14_Pointer)) + (*(var_1_15_Pointer)))) >= stepLocal_0) {
   (*(var_1_12_Pointer)) = (((((*(var_1_14_Pointer))) < 0 ) ? -((*(var_1_14_Pointer))) : ((*(var_1_14_Pointer)))));
  } else {
   (*(var_1_12_Pointer)) = ((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))) - ((*(var_1_16_Pointer)) - (*(var_1_15_Pointer))));
  }
 }
 if ((*(var_1_8_Pointer)) > ((- 128) + (*(var_1_16_Pointer)))) {
  (*(var_1_17_Pointer)) = (*(var_1_15_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 64);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((128 <= (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) 25)) : 1) && ((*(var_1_4_Pointer)) ? ((*(var_1_3_Pointer)) == ((double) (*(var_1_5_Pointer)))) : ((*(var_1_3_Pointer)) == ((double) ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))))))) && (((*(var_1_4_Pointer)) || (*(var_1_9_Pointer))) ? ((*(var_1_8_Pointer)) == ((unsigned short int) ((((((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))) < 0 ) ? -(((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))) : (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))))))) : ((*(var_1_8_Pointer)) == ((unsigned short int) (*(var_1_10_Pointer)))))) && ((7.2 < (*(var_1_6_Pointer))) ? ((((*(var_1_13_Pointer)) - ((*(var_1_14_Pointer)) + (*(var_1_15_Pointer)))) >= (1000 - (*(var_1_11_Pointer)))) ? ((*(var_1_12_Pointer)) == ((signed short int) (((((*(var_1_14_Pointer))) < 0 ) ? -((*(var_1_14_Pointer))) : ((*(var_1_14_Pointer))))))) : ((*(var_1_12_Pointer)) == ((signed short int) ((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))) - ((*(var_1_16_Pointer)) - (*(var_1_15_Pointer))))))) : 1)) && (((*(var_1_8_Pointer)) > ((- 128) + (*(var_1_16_Pointer)))) ? ((*(var_1_17_Pointer)) == ((signed char) (*(var_1_15_Pointer)))) : 1)
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

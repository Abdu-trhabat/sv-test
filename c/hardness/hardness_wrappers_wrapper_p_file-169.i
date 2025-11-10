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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch169Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -25;
signed short int* var_1_1_Pointer = &(var_1_1);
double var_1_2 = -0.6;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 9999999999999.625;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 9.2;
double* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 5;
signed short int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = 1;
signed short int* var_1_6_Pointer = &(var_1_6);
unsigned long int var_1_7 = 128;
unsigned long int* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = 21123;
signed short int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 2;
signed short int* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 31.8;
double* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 15.6;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 199.5;
double* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = 32;
signed long int* var_1_14_Pointer = &(var_1_14);
unsigned short int var_1_15 = 25;
unsigned short int* var_1_15_Pointer = &(var_1_15);
signed short int var_1_16 = -8;
signed short int* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) >= ((*(var_1_3_Pointer)) + (*(var_1_4_Pointer)))) {
  (*(var_1_1_Pointer)) = ((*(var_1_5_Pointer)) - (*(var_1_6_Pointer)));
 }
 signed short int stepLocal_0 = (*(var_1_5_Pointer));
 if (stepLocal_0 >= (((*(var_1_8_Pointer)) - (*(var_1_9_Pointer))) - (*(var_1_6_Pointer)))) {
  if ((*(var_1_2_Pointer)) == (((((*(var_1_3_Pointer))) > ((- (*(var_1_4_Pointer))))) ? ((*(var_1_3_Pointer))) : ((- (*(var_1_4_Pointer))))))) {
   (*(var_1_7_Pointer)) = ((*(var_1_6_Pointer)) + (*(var_1_8_Pointer)));
  } else {
   if ((*(var_1_4_Pointer)) >= (*(var_1_3_Pointer))) {
    (*(var_1_7_Pointer)) = (*(var_1_9_Pointer));
   }
  }
 } else {
  (*(var_1_7_Pointer)) = (*(var_1_6_Pointer));
 }
 (*(var_1_14_Pointer)) = (*(var_1_9_Pointer));
 (*(var_1_15_Pointer)) = (*(var_1_8_Pointer));
 (*(var_1_16_Pointer)) = (*(var_1_5_Pointer));
 if ((*(var_1_6_Pointer)) > (*(var_1_14_Pointer))) {
  if ((*(var_1_11_Pointer))) {
   (*(var_1_10_Pointer)) = ((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer))))) - (*(var_1_13_Pointer)));
  } else {
   (*(var_1_10_Pointer)) = (*(var_1_12_Pointer));
  }
 } else {
  (*(var_1_10_Pointer)) = (*(var_1_13_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16384);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((*(var_1_2_Pointer)) >= ((*(var_1_3_Pointer)) + (*(var_1_4_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed short int) ((*(var_1_5_Pointer)) - (*(var_1_6_Pointer))))) : 1) && (((*(var_1_5_Pointer)) >= (((*(var_1_8_Pointer)) - (*(var_1_9_Pointer))) - (*(var_1_6_Pointer)))) ? (((*(var_1_2_Pointer)) == (((((*(var_1_3_Pointer))) > ((- (*(var_1_4_Pointer))))) ? ((*(var_1_3_Pointer))) : ((- (*(var_1_4_Pointer))))))) ? ((*(var_1_7_Pointer)) == ((unsigned long int) ((*(var_1_6_Pointer)) + (*(var_1_8_Pointer))))) : (((*(var_1_4_Pointer)) >= (*(var_1_3_Pointer))) ? ((*(var_1_7_Pointer)) == ((unsigned long int) (*(var_1_9_Pointer)))) : 1)) : ((*(var_1_7_Pointer)) == ((unsigned long int) (*(var_1_6_Pointer)))))) && (((*(var_1_6_Pointer)) > (*(var_1_14_Pointer))) ? ((*(var_1_11_Pointer)) ? ((*(var_1_10_Pointer)) == ((double) ((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer))))) - (*(var_1_13_Pointer))))) : ((*(var_1_10_Pointer)) == ((double) (*(var_1_12_Pointer))))) : ((*(var_1_10_Pointer)) == ((double) (*(var_1_13_Pointer)))))) && ((*(var_1_14_Pointer)) == ((signed long int) (*(var_1_9_Pointer))))) && ((*(var_1_15_Pointer)) == ((unsigned short int) (*(var_1_8_Pointer))))) && ((*(var_1_16_Pointer)) == ((signed short int) (*(var_1_5_Pointer))))
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

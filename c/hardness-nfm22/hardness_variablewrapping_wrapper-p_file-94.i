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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch94Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 63.4;
double* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 25.2;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 3.75;
float* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 0.0;
double* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 63.4;
double* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 3.7;
double* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 63.75;
double* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = -64;
signed char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = -32;
signed char* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = 2;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = -4;
signed char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = -25;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 5;
signed char* var_1_16_Pointer = &(var_1_16);
signed long int var_1_17 = -2;
signed long int* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 2;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 16;
unsigned char* var_1_19_Pointer = &(var_1_19);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) != (*(var_1_3_Pointer))) {
  (*(var_1_1_Pointer)) = (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))) - (*(var_1_6_Pointer)));
 }
 if ((*(var_1_5_Pointer)) > ((*(var_1_1_Pointer)) / (*(var_1_4_Pointer)))) {
  if ((*(var_1_5_Pointer)) > ((*(var_1_4_Pointer)) / (*(var_1_8_Pointer)))) {
   (*(var_1_7_Pointer)) = (*(var_1_9_Pointer));
  } else {
   (*(var_1_7_Pointer)) = (*(var_1_10_Pointer));
  }
 }
 if ((*(var_1_10_Pointer)) || (*(var_1_9_Pointer))) {
  (*(var_1_11_Pointer)) = (*(var_1_12_Pointer));
 } else {
  (*(var_1_11_Pointer)) = ((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))) + ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer))));
 }
 signed char stepLocal_0 = (*(var_1_15_Pointer));
 if ((*(var_1_6_Pointer)) > (*(var_1_5_Pointer))) {
  if ((*(var_1_1_Pointer)) != ((*(var_1_4_Pointer)) / (*(var_1_8_Pointer)))) {
   if (((*(var_1_11_Pointer)) % ((*(var_1_18_Pointer)) + (*(var_1_19_Pointer)))) > stepLocal_0) {
    (*(var_1_17_Pointer)) = -64;
   }
  }
 } else {
  (*(var_1_17_Pointer)) = (*(var_1_13_Pointer));
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 4611686.018427382800e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 assume_abort_if_not(var_1_8 != 0.0F);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -63);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -31);
 assume_abort_if_not(var_1_15 <= 32);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -31);
 assume_abort_if_not(var_1_16 <= 31);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 128);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 127);
}
void updateLastVariables() {
}
int property() {
 return (((((*(var_1_2_Pointer)) != (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((double) (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))) - (*(var_1_6_Pointer))))) : 1) && (((*(var_1_5_Pointer)) > ((*(var_1_1_Pointer)) / (*(var_1_4_Pointer)))) ? (((*(var_1_5_Pointer)) > ((*(var_1_4_Pointer)) / (*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer)) == ((unsigned char) (*(var_1_9_Pointer)))) : ((*(var_1_7_Pointer)) == ((unsigned char) (*(var_1_10_Pointer))))) : 1)) && (((*(var_1_10_Pointer)) || (*(var_1_9_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed char) (*(var_1_12_Pointer)))) : ((*(var_1_11_Pointer)) == ((signed char) ((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))) + ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))))))) && (((*(var_1_6_Pointer)) > (*(var_1_5_Pointer))) ? (((*(var_1_1_Pointer)) != ((*(var_1_4_Pointer)) / (*(var_1_8_Pointer)))) ? ((((*(var_1_11_Pointer)) % ((*(var_1_18_Pointer)) + (*(var_1_19_Pointer)))) > (*(var_1_15_Pointer))) ? ((*(var_1_17_Pointer)) == ((signed long int) -64)) : 1) : 1) : ((*(var_1_17_Pointer)) == ((signed long int) (*(var_1_13_Pointer)))))
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

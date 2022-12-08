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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 2;
unsigned long int* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = -16;
signed char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = -2;
signed char* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = -10;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = 4;
signed char* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 256.4;
double* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 0.25;
float* var_1_16_Pointer = &(var_1_16);
double var_1_17 = 100000000000.2;
double* var_1_17_Pointer = &(var_1_17);
double var_1_18 = 50.5;
double* var_1_18_Pointer = &(var_1_18);
double var_1_19 = 9.5;
double* var_1_19_Pointer = &(var_1_19);
double var_1_20 = 100000000000.4;
double* var_1_20_Pointer = &(var_1_20);
signed char var_1_21 = 4;
signed char* var_1_21_Pointer = &(var_1_21);
unsigned short int var_1_22 = 10000;
unsigned short int* var_1_22_Pointer = &(var_1_22);
unsigned char last_1_var_1_1 = 1;
double last_1_var_1_15 = 256.4;
void initially(void) {
}
void step(void) {
 if ((*(var_1_9_Pointer))) {
  (*(var_1_10_Pointer)) = 2u;
 }
 (*(var_1_11_Pointer)) = ((((((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))) < ((10 - (*(var_1_14_Pointer))))) ? (((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))) : ((10 - (*(var_1_14_Pointer))))));
 (*(var_1_20_Pointer)) = (*(var_1_19_Pointer));
 (*(var_1_21_Pointer)) = 1;
 (*(var_1_22_Pointer)) = 10;
 if (((*(var_1_20_Pointer)) + ((*(var_1_20_Pointer)) / (*(var_1_16_Pointer)))) == (*(var_1_20_Pointer))) {
  if ((*(var_1_20_Pointer)) >= last_1_var_1_15) {
   (*(var_1_15_Pointer)) = ((*(var_1_17_Pointer)) - ((((((*(var_1_18_Pointer)) + (*(var_1_19_Pointer)))) < (9.9999999999995E12)) ? (((*(var_1_18_Pointer)) + (*(var_1_19_Pointer)))) : (9.9999999999995E12))));
  } else {
   (*(var_1_15_Pointer)) = (((((*(var_1_17_Pointer))) < ((5.75 + (*(var_1_19_Pointer))))) ? ((*(var_1_17_Pointer))) : ((5.75 + (*(var_1_19_Pointer))))));
  }
 }
 if ((*(var_1_20_Pointer)) < ((((((*(var_1_15_Pointer))) < ((*(var_1_15_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_15_Pointer))))) * (*(var_1_15_Pointer)))) {
  (*(var_1_1_Pointer)) = ((*(var_1_6_Pointer)) && ((last_1_var_1_1 || (*(var_1_8_Pointer))) && (*(var_1_9_Pointer))));
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -63);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(var_1_16 != 0.0F);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
}
int property() {
 return ((((((((*(var_1_20_Pointer)) < ((((((*(var_1_15_Pointer))) < ((*(var_1_15_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_15_Pointer))))) * (*(var_1_15_Pointer)))) ? ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_6_Pointer)) && ((last_1_var_1_1 || (*(var_1_8_Pointer))) && (*(var_1_9_Pointer)))))) : 1) && ((*(var_1_9_Pointer)) ? ((*(var_1_10_Pointer)) == ((unsigned long int) 2u)) : 1)) && ((*(var_1_11_Pointer)) == ((signed char) ((((((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))) < ((10 - (*(var_1_14_Pointer))))) ? (((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))) : ((10 - (*(var_1_14_Pointer))))))))) && ((((*(var_1_20_Pointer)) + ((*(var_1_20_Pointer)) / (*(var_1_16_Pointer)))) == (*(var_1_20_Pointer))) ? (((*(var_1_20_Pointer)) >= last_1_var_1_15) ? ((*(var_1_15_Pointer)) == ((double) ((*(var_1_17_Pointer)) - ((((((*(var_1_18_Pointer)) + (*(var_1_19_Pointer)))) < (9.9999999999995E12)) ? (((*(var_1_18_Pointer)) + (*(var_1_19_Pointer)))) : (9.9999999999995E12)))))) : ((*(var_1_15_Pointer)) == ((double) (((((*(var_1_17_Pointer))) < ((5.75 + (*(var_1_19_Pointer))))) ? ((*(var_1_17_Pointer))) : ((5.75 + (*(var_1_19_Pointer))))))))) : 1)) && ((*(var_1_20_Pointer)) == ((double) (*(var_1_19_Pointer))))) && ((*(var_1_21_Pointer)) == ((signed char) 1))) && ((*(var_1_22_Pointer)) == ((unsigned short int) 10))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch15Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -128;
signed char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = 8;
signed char* var_1_7_Pointer = &(var_1_7);
unsigned long int var_1_8 = 1;
unsigned long int* var_1_8_Pointer = &(var_1_8);
unsigned long int var_1_9 = 1885310857;
unsigned long int* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = -10;
signed long int* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 32.6;
double* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 9.75;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 5.1;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 128.1;
double* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 63.9;
double* var_1_15_Pointer = &(var_1_15);
signed long int last_1_var_1_10 = -10;
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer))) {
  (*(var_1_8_Pointer)) = ((1514707036u + (((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer)))))) - last_1_var_1_10);
 } else {
  (*(var_1_8_Pointer)) = ((((last_1_var_1_10) > ((*(var_1_9_Pointer)))) ? (last_1_var_1_10) : ((*(var_1_9_Pointer)))));
 }
 if ((*(var_1_2_Pointer))) {
  (*(var_1_10_Pointer)) = ((*(var_1_8_Pointer)) + (((((*(var_1_7_Pointer))) < 0 ) ? -((*(var_1_7_Pointer))) : ((*(var_1_7_Pointer))))));
 }
 unsigned char stepLocal_1 = (*(var_1_2_Pointer));
 signed long int stepLocal_0 = (*(var_1_10_Pointer));
 if (stepLocal_1 || ((~ (*(var_1_10_Pointer))) >= (*(var_1_10_Pointer)))) {
  if (stepLocal_0 < (*(var_1_8_Pointer))) {
   if (! (*(var_1_6_Pointer))) {
    (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
   }
  } else {
   (*(var_1_1_Pointer)) = 2;
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
 }
 if ((*(var_1_1_Pointer)) >= (*(var_1_1_Pointer))) {
  (*(var_1_11_Pointer)) = ((*(var_1_12_Pointer)) - ((((((*(var_1_13_Pointer)) + (*(var_1_14_Pointer)))) > ((*(var_1_15_Pointer)))) ? (((*(var_1_13_Pointer)) + (*(var_1_14_Pointer)))) : ((*(var_1_15_Pointer))))));
 } else {
  (*(var_1_11_Pointer)) = (((((*(var_1_14_Pointer))) > ((*(var_1_13_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_13_Pointer)))));
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 1073741824);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
}
int property() {
 return (((((*(var_1_2_Pointer)) || ((~ (*(var_1_10_Pointer))) >= (*(var_1_10_Pointer)))) ? (((*(var_1_10_Pointer)) < (*(var_1_8_Pointer))) ? ((! (*(var_1_6_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_7_Pointer)))) : 1) : ((*(var_1_1_Pointer)) == ((signed char) 2))) : ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_7_Pointer))))) && ((*(var_1_2_Pointer)) ? ((*(var_1_8_Pointer)) == ((unsigned long int) ((1514707036u + (((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer)))))) - last_1_var_1_10))) : ((*(var_1_8_Pointer)) == ((unsigned long int) ((((last_1_var_1_10) > ((*(var_1_9_Pointer)))) ? (last_1_var_1_10) : ((*(var_1_9_Pointer))))))))) && ((*(var_1_2_Pointer)) ? ((*(var_1_10_Pointer)) == ((signed long int) ((*(var_1_8_Pointer)) + (((((*(var_1_7_Pointer))) < 0 ) ? -((*(var_1_7_Pointer))) : ((*(var_1_7_Pointer)))))))) : 1)) && (((*(var_1_1_Pointer)) >= (*(var_1_1_Pointer))) ? ((*(var_1_11_Pointer)) == ((double) ((*(var_1_12_Pointer)) - ((((((*(var_1_13_Pointer)) + (*(var_1_14_Pointer)))) > ((*(var_1_15_Pointer)))) ? (((*(var_1_13_Pointer)) + (*(var_1_14_Pointer)))) : ((*(var_1_15_Pointer)))))))) : ((*(var_1_11_Pointer)) == ((double) (((((*(var_1_14_Pointer))) > ((*(var_1_13_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_13_Pointer))))))))
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

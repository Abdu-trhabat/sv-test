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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch51Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 10.8;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
signed short int var_1_5 = -16;
signed short int* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 100.01;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 999999999.4;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 10.6;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 127.5;
double* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 1;
unsigned long int* var_1_10_Pointer = &(var_1_10);
unsigned long int var_1_11 = 2467894503;
unsigned long int* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 2565572511;
unsigned long int* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 500;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_15 = 2277019112;
unsigned long int* var_1_15_Pointer = &(var_1_15);
unsigned long int var_1_16 = 2745650083;
unsigned long int* var_1_16_Pointer = &(var_1_16);
unsigned long int var_1_17 = 8;
unsigned long int* var_1_17_Pointer = &(var_1_17);
unsigned long int last_1_var_1_17 = 8;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = - last_1_var_1_17;
 if (((((((*(var_1_11_Pointer))) > ((*(var_1_12_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_12_Pointer))))) - (*(var_1_13_Pointer))) != stepLocal_1) {
  (*(var_1_10_Pointer)) = ((((((*(var_1_15_Pointer))) < ((*(var_1_16_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_16_Pointer))))) - (*(var_1_13_Pointer)));
 } else {
  (*(var_1_10_Pointer)) = (*(var_1_15_Pointer));
 }
 if ((*(var_1_10_Pointer)) <= (*(var_1_10_Pointer))) {
  if ((*(var_1_2_Pointer)) && ((*(var_1_10_Pointer)) == (((((*(var_1_16_Pointer))) > ((*(var_1_12_Pointer)))) ? ((*(var_1_16_Pointer))) : ((*(var_1_12_Pointer))))))) {
   if ((*(var_1_10_Pointer)) < (*(var_1_11_Pointer))) {
    (*(var_1_17_Pointer)) = (*(var_1_15_Pointer));
   }
  }
 } else {
  (*(var_1_17_Pointer)) = (*(var_1_16_Pointer));
 }
 unsigned long int stepLocal_0 = (*(var_1_10_Pointer));
 if ((*(var_1_2_Pointer))) {
  if (stepLocal_0 >= ((*(var_1_10_Pointer)) / (*(var_1_5_Pointer)))) {
   (*(var_1_1_Pointer)) = (((((*(var_1_6_Pointer))) < 0 ) ? -((*(var_1_6_Pointer))) : ((*(var_1_6_Pointer)))));
  } else {
   (*(var_1_1_Pointer)) = ((*(var_1_7_Pointer)) + (((((*(var_1_8_Pointer))) > (((*(var_1_9_Pointer)) + 63.25))) ? ((*(var_1_8_Pointer))) : (((*(var_1_9_Pointer)) + 63.25)))));
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854765600e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -230584.3009213691390e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691390e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967295);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 2147483647);
 assume_abort_if_not(var_1_15 <= 4294967294);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967294);
}
void updateLastVariables() {
 last_1_var_1_17 = var_1_17;
}
int property() {
 return (((*(var_1_2_Pointer)) ? (((*(var_1_10_Pointer)) >= ((*(var_1_10_Pointer)) / (*(var_1_5_Pointer)))) ? ((*(var_1_1_Pointer)) == ((double) (((((*(var_1_6_Pointer))) < 0 ) ? -((*(var_1_6_Pointer))) : ((*(var_1_6_Pointer))))))) : ((*(var_1_1_Pointer)) == ((double) ((*(var_1_7_Pointer)) + (((((*(var_1_8_Pointer))) > (((*(var_1_9_Pointer)) + 63.25))) ? ((*(var_1_8_Pointer))) : (((*(var_1_9_Pointer)) + 63.25)))))))) : ((*(var_1_1_Pointer)) == ((double) (*(var_1_8_Pointer))))) && ((((((((*(var_1_11_Pointer))) > ((*(var_1_12_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_12_Pointer))))) - (*(var_1_13_Pointer))) != (- last_1_var_1_17)) ? ((*(var_1_10_Pointer)) == ((unsigned long int) ((((((*(var_1_15_Pointer))) < ((*(var_1_16_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_16_Pointer))))) - (*(var_1_13_Pointer))))) : ((*(var_1_10_Pointer)) == ((unsigned long int) (*(var_1_15_Pointer)))))) && (((*(var_1_10_Pointer)) <= (*(var_1_10_Pointer))) ? (((*(var_1_2_Pointer)) && ((*(var_1_10_Pointer)) == (((((*(var_1_16_Pointer))) > ((*(var_1_12_Pointer)))) ? ((*(var_1_16_Pointer))) : ((*(var_1_12_Pointer))))))) ? (((*(var_1_10_Pointer)) < (*(var_1_11_Pointer))) ? ((*(var_1_17_Pointer)) == ((unsigned long int) (*(var_1_15_Pointer)))) : 1) : 1) : ((*(var_1_17_Pointer)) == ((unsigned long int) (*(var_1_16_Pointer)))))
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

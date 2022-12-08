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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch11Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -16;
signed char* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 50.75;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 7.675;
double* var_1_3_Pointer = &(var_1_3);
signed char var_1_7 = 10;
signed char* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 32.5;
float* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 1000000.7;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 2.4;
float* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 1;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 5;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 200;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 10;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 1;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char last_1_var_1_11 = 1;
void initially(void) {
}
void step(void) {
 if ((*(var_1_3_Pointer)) >= (*(var_1_2_Pointer))) {
  if (last_1_var_1_11) {
   if (! last_1_var_1_11) {
    (*(var_1_8_Pointer)) = (((((*(var_1_9_Pointer))) > ((10.25f + (*(var_1_10_Pointer))))) ? ((*(var_1_9_Pointer))) : ((10.25f + (*(var_1_10_Pointer))))));
   } else {
    (*(var_1_8_Pointer)) = (*(var_1_9_Pointer));
   }
  }
 }
 if ((*(var_1_8_Pointer)) <= (*(var_1_8_Pointer))) {
  (*(var_1_11_Pointer)) = ((*(var_1_12_Pointer)) || (*(var_1_13_Pointer)));
 }
 unsigned char stepLocal_0 = (*(var_1_11_Pointer));
 if (((*(var_1_2_Pointer)) - 5.25) < ((*(var_1_8_Pointer)) * ((*(var_1_8_Pointer)) * 199.4))) {
  if (stepLocal_0 && (*(var_1_11_Pointer))) {
   if ((*(var_1_8_Pointer)) < (*(var_1_8_Pointer))) {
    (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
   } else {
    (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
   }
  }
 }
 if (! (*(var_1_11_Pointer))) {
  (*(var_1_14_Pointer)) = (((((((((*(var_1_15_Pointer))) < ((((((*(var_1_16_Pointer))) > (5)) ? ((*(var_1_16_Pointer))) : (5))))) ? ((*(var_1_15_Pointer))) : ((((((*(var_1_16_Pointer))) > (5)) ? ((*(var_1_16_Pointer))) : (5))))))) < ((*(var_1_17_Pointer)))) ? ((((((*(var_1_15_Pointer))) < ((((((*(var_1_16_Pointer))) > (5)) ? ((*(var_1_16_Pointer))) : (5))))) ? ((*(var_1_15_Pointer))) : ((((((*(var_1_16_Pointer))) > (5)) ? ((*(var_1_16_Pointer))) : (5))))))) : ((*(var_1_17_Pointer)))));
 } else {
  (*(var_1_14_Pointer)) = (*(var_1_16_Pointer));
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
}
void updateLastVariables() {
 last_1_var_1_11 = var_1_11;
}
int property() {
 return ((((((*(var_1_2_Pointer)) - 5.25) < ((*(var_1_8_Pointer)) * ((*(var_1_8_Pointer)) * 199.4))) ? (((*(var_1_11_Pointer)) && (*(var_1_11_Pointer))) ? (((*(var_1_8_Pointer)) < (*(var_1_8_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_7_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_7_Pointer))))) : 1) : 1) && (((*(var_1_3_Pointer)) >= (*(var_1_2_Pointer))) ? (last_1_var_1_11 ? ((! last_1_var_1_11) ? ((*(var_1_8_Pointer)) == ((float) (((((*(var_1_9_Pointer))) > ((10.25f + (*(var_1_10_Pointer))))) ? ((*(var_1_9_Pointer))) : ((10.25f + (*(var_1_10_Pointer)))))))) : ((*(var_1_8_Pointer)) == ((float) (*(var_1_9_Pointer))))) : 1) : 1)) && (((*(var_1_8_Pointer)) <= (*(var_1_8_Pointer))) ? ((*(var_1_11_Pointer)) == ((unsigned char) ((*(var_1_12_Pointer)) || (*(var_1_13_Pointer))))) : 1)) && ((! (*(var_1_11_Pointer))) ? ((*(var_1_14_Pointer)) == ((unsigned char) (((((((((*(var_1_15_Pointer))) < ((((((*(var_1_16_Pointer))) > (5)) ? ((*(var_1_16_Pointer))) : (5))))) ? ((*(var_1_15_Pointer))) : ((((((*(var_1_16_Pointer))) > (5)) ? ((*(var_1_16_Pointer))) : (5))))))) < ((*(var_1_17_Pointer)))) ? ((((((*(var_1_15_Pointer))) < ((((((*(var_1_16_Pointer))) > (5)) ? ((*(var_1_16_Pointer))) : (5))))) ? ((*(var_1_15_Pointer))) : ((((((*(var_1_16_Pointer))) > (5)) ? ((*(var_1_16_Pointer))) : (5))))))) : ((*(var_1_17_Pointer))))))) : ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_16_Pointer)))))
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

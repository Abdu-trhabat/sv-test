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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch22Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -5;
signed short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 256;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 44772;
unsigned short int* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 5.9;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 7.6;
float* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 64.2;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 128.75;
float* var_1_10_Pointer = &(var_1_10);
unsigned long int var_1_11 = 8;
unsigned long int* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 3135928546;
unsigned long int* var_1_12_Pointer = &(var_1_12);
signed short int last_1_var_1_1 = -5;
unsigned long int last_1_var_1_11 = 8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_1;
 if ((*(var_1_4_Pointer))) {
  (*(var_1_5_Pointer)) = last_1_var_1_1;
 } else {
  if (stepLocal_0 <= last_1_var_1_1) {
   (*(var_1_5_Pointer)) = ((((last_1_var_1_11) > (((*(var_1_6_Pointer)) - 8))) ? (last_1_var_1_11) : (((*(var_1_6_Pointer)) - 8))));
  }
 }
 if ((*(var_1_5_Pointer)) == (*(var_1_5_Pointer))) {
  (*(var_1_1_Pointer)) = ((*(var_1_5_Pointer)) + -16);
 } else {
  if ((*(var_1_4_Pointer))) {
   (*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
  }
 }
 if (last_1_var_1_11 >= ((*(var_1_5_Pointer)) & last_1_var_1_11)) {
  (*(var_1_11_Pointer)) = ((((((((((((50u) < (last_1_var_1_11)) ? (50u) : (last_1_var_1_11)))) < ((*(var_1_6_Pointer)))) ? (((((50u) < (last_1_var_1_11)) ? (50u) : (last_1_var_1_11)))) : ((*(var_1_6_Pointer)))))) < (((*(var_1_12_Pointer)) - last_1_var_1_11))) ? (((((((((50u) < (last_1_var_1_11)) ? (50u) : (last_1_var_1_11)))) < ((*(var_1_6_Pointer)))) ? (((((50u) < (last_1_var_1_11)) ? (50u) : (last_1_var_1_11)))) : ((*(var_1_6_Pointer)))))) : (((*(var_1_12_Pointer)) - last_1_var_1_11))));
 } else {
  if (5.7 < (*(var_1_9_Pointer))) {
   (*(var_1_11_Pointer)) = last_1_var_1_11;
  } else {
   (*(var_1_11_Pointer)) = last_1_var_1_11;
  }
 }
 if ((*(var_1_1_Pointer)) < (*(var_1_5_Pointer))) {
  (*(var_1_7_Pointer)) = (((10.25f + (*(var_1_8_Pointer))) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer)));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 32767);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -115292.1504606845700e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 1152921.504606845700e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -230584.3009213691390e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691390e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967294);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
}
int property() {
 return (((((*(var_1_5_Pointer)) == (*(var_1_5_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed short int) ((*(var_1_5_Pointer)) + -16))) : ((*(var_1_4_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_5_Pointer)))) : 1)) && ((*(var_1_4_Pointer)) ? ((*(var_1_5_Pointer)) == ((unsigned short int) last_1_var_1_1)) : ((last_1_var_1_1 <= last_1_var_1_1) ? ((*(var_1_5_Pointer)) == ((unsigned short int) ((((last_1_var_1_11) > (((*(var_1_6_Pointer)) - 8))) ? (last_1_var_1_11) : (((*(var_1_6_Pointer)) - 8)))))) : 1))) && (((*(var_1_1_Pointer)) < (*(var_1_5_Pointer))) ? ((*(var_1_7_Pointer)) == ((float) (((10.25f + (*(var_1_8_Pointer))) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer))))) : 1)) && ((last_1_var_1_11 >= ((*(var_1_5_Pointer)) & last_1_var_1_11)) ? ((*(var_1_11_Pointer)) == ((unsigned long int) ((((((((((((50u) < (last_1_var_1_11)) ? (50u) : (last_1_var_1_11)))) < ((*(var_1_6_Pointer)))) ? (((((50u) < (last_1_var_1_11)) ? (50u) : (last_1_var_1_11)))) : ((*(var_1_6_Pointer)))))) < (((*(var_1_12_Pointer)) - last_1_var_1_11))) ? (((((((((50u) < (last_1_var_1_11)) ? (50u) : (last_1_var_1_11)))) < ((*(var_1_6_Pointer)))) ? (((((50u) < (last_1_var_1_11)) ? (50u) : (last_1_var_1_11)))) : ((*(var_1_6_Pointer)))))) : (((*(var_1_12_Pointer)) - last_1_var_1_11)))))) : ((5.7 < (*(var_1_9_Pointer))) ? ((*(var_1_11_Pointer)) == ((unsigned long int) last_1_var_1_11)) : ((*(var_1_11_Pointer)) == ((unsigned long int) last_1_var_1_11))))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch35Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 4.8;
float* var_1_1_Pointer = &(var_1_1);
float var_1_4 = 255.1;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = -0.6;
float* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = -10;
signed short int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
signed char var_1_11 = -2;
signed char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = 10;
signed char* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = 5;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = -1;
signed char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 1;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 1;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 5;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 64;
unsigned char* var_1_19_Pointer = &(var_1_19);
unsigned char var_1_20 = 5;
unsigned char* var_1_20_Pointer = &(var_1_20);
unsigned char last_1_var_1_18 = 5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = ~ last_1_var_1_18;
 if (last_1_var_1_18 >= stepLocal_0) {
  (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)));
 }
 unsigned char stepLocal_1 = ((*(var_1_1_Pointer)) * (*(var_1_5_Pointer))) >= (*(var_1_4_Pointer));
 if ((*(var_1_17_Pointer)) && stepLocal_1) {
  (*(var_1_18_Pointer)) = (2 + (((*(var_1_19_Pointer)) - (*(var_1_20_Pointer))) + 32));
 } else {
  (*(var_1_18_Pointer)) = (*(var_1_19_Pointer));
 }
 if ((*(var_1_8_Pointer))) {
  (*(var_1_15_Pointer)) = (! (*(var_1_16_Pointer)));
 } else {
  (*(var_1_15_Pointer)) = (! (*(var_1_17_Pointer)));
 }
 if ((*(var_1_15_Pointer))) {
  (*(var_1_11_Pointer)) = (((*(var_1_12_Pointer)) + ((((10) < ((*(var_1_13_Pointer)))) ? (10) : ((*(var_1_13_Pointer)))))) + (*(var_1_14_Pointer)));
 }
 if ((*(var_1_15_Pointer))) {
  if ((*(var_1_15_Pointer))) {
   (*(var_1_6_Pointer)) = ((*(var_1_11_Pointer)) + (*(var_1_11_Pointer)));
  } else {
   (*(var_1_6_Pointer)) = ((*(var_1_11_Pointer)) + (*(var_1_11_Pointer)));
  }
 } else {
  (*(var_1_6_Pointer)) = (*(var_1_11_Pointer));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -31);
 assume_abort_if_not(var_1_12 <= 32);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -31);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 32);
 assume_abort_if_not(var_1_19 <= 64);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 32);
}
void updateLastVariables() {
 last_1_var_1_18 = var_1_18;
}
int property() {
 return (((((last_1_var_1_18 >= (~ last_1_var_1_18)) ? ((*(var_1_1_Pointer)) == ((float) ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) : 1) && ((*(var_1_15_Pointer)) ? ((*(var_1_15_Pointer)) ? ((*(var_1_6_Pointer)) == ((signed short int) ((*(var_1_11_Pointer)) + (*(var_1_11_Pointer))))) : ((*(var_1_6_Pointer)) == ((signed short int) ((*(var_1_11_Pointer)) + (*(var_1_11_Pointer)))))) : ((*(var_1_6_Pointer)) == ((signed short int) (*(var_1_11_Pointer)))))) && ((*(var_1_15_Pointer)) ? ((*(var_1_11_Pointer)) == ((signed char) (((*(var_1_12_Pointer)) + ((((10) < ((*(var_1_13_Pointer)))) ? (10) : ((*(var_1_13_Pointer)))))) + (*(var_1_14_Pointer))))) : 1)) && ((*(var_1_8_Pointer)) ? ((*(var_1_15_Pointer)) == ((unsigned char) (! (*(var_1_16_Pointer))))) : ((*(var_1_15_Pointer)) == ((unsigned char) (! (*(var_1_17_Pointer))))))) && (((*(var_1_17_Pointer)) && (((*(var_1_1_Pointer)) * (*(var_1_5_Pointer))) >= (*(var_1_4_Pointer)))) ? ((*(var_1_18_Pointer)) == ((unsigned char) (2 + (((*(var_1_19_Pointer)) - (*(var_1_20_Pointer))) + 32)))) : ((*(var_1_18_Pointer)) == ((unsigned char) (*(var_1_19_Pointer)))))
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

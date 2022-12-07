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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch57Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 1;
signed long int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed char var_1_9 = 64;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = 4;
signed char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = -4;
signed char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = 32;
signed char* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = 32;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = -64;
signed char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 50;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 16;
signed char* var_1_16_Pointer = &(var_1_16);
float var_1_17 = 63.5;
float* var_1_17_Pointer = &(var_1_17);
signed char last_1_var_1_9 = 64;
signed char last_1_var_1_14 = -64;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = (*(var_1_6_Pointer));
 if (! (last_1_var_1_14 >= last_1_var_1_9)) {
  if (((*(var_1_4_Pointer)) || (*(var_1_5_Pointer))) && stepLocal_0) {
   (*(var_1_1_Pointer)) = ((((last_1_var_1_9) < (last_1_var_1_14)) ? (last_1_var_1_9) : (last_1_var_1_14)));
  } else {
   (*(var_1_1_Pointer)) = last_1_var_1_14;
  }
 } else {
  (*(var_1_1_Pointer)) = last_1_var_1_14;
 }
 signed long int stepLocal_3 = ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer))) - ((((64) > ((*(var_1_13_Pointer)))) ? (64) : ((*(var_1_13_Pointer)))));
 if ((*(var_1_12_Pointer)) < stepLocal_3) {
  (*(var_1_14_Pointer)) = ((64 - (*(var_1_16_Pointer))) - (*(var_1_13_Pointer)));
 } else {
  (*(var_1_14_Pointer)) = (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer)))));
 }
 (*(var_1_17_Pointer)) = 128.91f;
 unsigned char stepLocal_2 = (*(var_1_14_Pointer)) == (*(var_1_1_Pointer));
 unsigned char stepLocal_1 = (*(var_1_5_Pointer));
 if (stepLocal_1 && (*(var_1_4_Pointer))) {
  if ((*(var_1_6_Pointer)) || stepLocal_2) {
   (*(var_1_9_Pointer)) = (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer)))));
  }
 } else {
  (*(var_1_9_Pointer)) = ((*(var_1_12_Pointer)) - (*(var_1_13_Pointer)));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 64);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_14 = var_1_14;
}
int property() {
 return ((((! (last_1_var_1_14 >= last_1_var_1_9)) ? ((((*(var_1_4_Pointer)) || (*(var_1_5_Pointer))) && (*(var_1_6_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) ((((last_1_var_1_9) < (last_1_var_1_14)) ? (last_1_var_1_9) : (last_1_var_1_14))))) : ((*(var_1_1_Pointer)) == ((signed long int) last_1_var_1_14))) : ((*(var_1_1_Pointer)) == ((signed long int) last_1_var_1_14))) && (((*(var_1_5_Pointer)) && (*(var_1_4_Pointer))) ? (((*(var_1_6_Pointer)) || ((*(var_1_14_Pointer)) == (*(var_1_1_Pointer)))) ? ((*(var_1_9_Pointer)) == ((signed char) (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))))) : 1) : ((*(var_1_9_Pointer)) == ((signed char) ((*(var_1_12_Pointer)) - (*(var_1_13_Pointer))))))) && (((*(var_1_12_Pointer)) < (((*(var_1_15_Pointer)) + (*(var_1_16_Pointer))) - ((((64) > ((*(var_1_13_Pointer)))) ? (64) : ((*(var_1_13_Pointer))))))) ? ((*(var_1_14_Pointer)) == ((signed char) ((64 - (*(var_1_16_Pointer))) - (*(var_1_13_Pointer))))) : ((*(var_1_14_Pointer)) == ((signed char) (((((*(var_1_10_Pointer))) < ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))))))) && ((*(var_1_17_Pointer)) == ((float) 128.91f))
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

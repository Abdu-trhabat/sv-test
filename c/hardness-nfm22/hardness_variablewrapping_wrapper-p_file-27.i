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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch27Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 0;
signed long int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_3 = 5;
signed long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 0;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 64;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 25;
signed long int* var_1_6_Pointer = &(var_1_6);
unsigned long int var_1_7 = 500;
unsigned long int* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 2648415615;
unsigned long int* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 10;
signed long int* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 128;
unsigned long int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 2;
unsigned char* var_1_13_Pointer = &(var_1_13);
void initially(void) {
}
void step(void) {
 if ((*(var_1_8_Pointer)) || (! (*(var_1_9_Pointer)))) {
  (*(var_1_7_Pointer)) = ((*(var_1_10_Pointer)) - (*(var_1_4_Pointer)));
 }
 unsigned long int stepLocal_1 = (*(var_1_7_Pointer));
 if ((*(var_1_6_Pointer)) > stepLocal_1) {
  (*(var_1_11_Pointer)) = ((*(var_1_4_Pointer)) + ((((-4) > ((*(var_1_5_Pointer)))) ? (-4) : ((*(var_1_5_Pointer))))));
 } else {
  if ((*(var_1_8_Pointer))) {
   (*(var_1_11_Pointer)) = (*(var_1_6_Pointer));
  }
 }
 signed long int stepLocal_0 = (*(var_1_11_Pointer));
 if (32 >= stepLocal_0) {
  (*(var_1_1_Pointer)) = ((*(var_1_3_Pointer)) + ((((((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))) > ((*(var_1_6_Pointer)))) ? (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))) : ((*(var_1_6_Pointer))))));
 } else {
  (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)));
 }
 signed long int stepLocal_2 = (((((*(var_1_5_Pointer)) - (*(var_1_4_Pointer)))) > ((*(var_1_1_Pointer)))) ? (((*(var_1_5_Pointer)) - (*(var_1_4_Pointer)))) : ((*(var_1_1_Pointer))));
 if ((*(var_1_8_Pointer))) {
  if ((((*(var_1_7_Pointer)) * 128) / (*(var_1_13_Pointer))) != stepLocal_2) {
   (*(var_1_12_Pointer)) = ((*(var_1_10_Pointer)) - (*(var_1_13_Pointer)));
  } else {
   (*(var_1_12_Pointer)) = (*(var_1_10_Pointer));
  }
 } else {
  (*(var_1_12_Pointer)) = (*(var_1_13_Pointer));
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1073741823);
 assume_abort_if_not(var_1_3 <= 1073741823);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1073741823);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 2147483647);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 255);
 assume_abort_if_not(var_1_13 != 0);
}
void updateLastVariables() {
}
int property() {
 return ((((32 >= (*(var_1_11_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) ((*(var_1_3_Pointer)) + ((((((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))) > ((*(var_1_6_Pointer)))) ? (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))) : ((*(var_1_6_Pointer)))))))) : ((*(var_1_1_Pointer)) == ((signed long int) ((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))))) && (((*(var_1_8_Pointer)) || (! (*(var_1_9_Pointer)))) ? ((*(var_1_7_Pointer)) == ((unsigned long int) ((*(var_1_10_Pointer)) - (*(var_1_4_Pointer))))) : 1)) && (((*(var_1_6_Pointer)) > (*(var_1_7_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed long int) ((*(var_1_4_Pointer)) + ((((-4) > ((*(var_1_5_Pointer)))) ? (-4) : ((*(var_1_5_Pointer)))))))) : ((*(var_1_8_Pointer)) ? ((*(var_1_11_Pointer)) == ((signed long int) (*(var_1_6_Pointer)))) : 1))) && ((*(var_1_8_Pointer)) ? (((((*(var_1_7_Pointer)) * 128) / (*(var_1_13_Pointer))) != ((((((*(var_1_5_Pointer)) - (*(var_1_4_Pointer)))) > ((*(var_1_1_Pointer)))) ? (((*(var_1_5_Pointer)) - (*(var_1_4_Pointer)))) : ((*(var_1_1_Pointer)))))) ? ((*(var_1_12_Pointer)) == ((unsigned long int) ((*(var_1_10_Pointer)) - (*(var_1_13_Pointer))))) : ((*(var_1_12_Pointer)) == ((unsigned long int) (*(var_1_10_Pointer))))) : ((*(var_1_12_Pointer)) == ((unsigned long int) (*(var_1_13_Pointer)))))
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

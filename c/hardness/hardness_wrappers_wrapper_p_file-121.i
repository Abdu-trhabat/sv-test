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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -100000000;
signed long int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 2032620576;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 1443780595;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_4 = 1;
unsigned long int* var_1_4_Pointer = &(var_1_4);
unsigned long int var_1_5 = 4;
unsigned long int* var_1_5_Pointer = &(var_1_5);
unsigned long int var_1_6 = 8;
unsigned long int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned long int var_1_8 = 32;
unsigned long int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = -32;
signed short int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = -100;
signed short int* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = -4;
signed short int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 10;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 4;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 1;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = ((*(var_1_2_Pointer)) + (*(var_1_3_Pointer))) - ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)));
 unsigned long int stepLocal_0 = (*(var_1_2_Pointer));
 if (stepLocal_1 == (- (- (*(var_1_6_Pointer))))) {
  if ((*(var_1_3_Pointer)) != stepLocal_0) {
   (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
 }
 unsigned long int stepLocal_2 = (((((*(var_1_4_Pointer)) / (*(var_1_8_Pointer)))) > ((*(var_1_6_Pointer)))) ? (((*(var_1_4_Pointer)) / (*(var_1_8_Pointer)))) : ((*(var_1_6_Pointer))));
 if ((*(var_1_3_Pointer)) <= stepLocal_2) {
  (*(var_1_7_Pointer)) = (! (*(var_1_9_Pointer)));
 } else {
  (*(var_1_7_Pointer)) = 0;
 }
 (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
 (*(var_1_15_Pointer)) = (*(var_1_16_Pointer));
 if ((*(var_1_2_Pointer)) <= (*(var_1_5_Pointer))) {
  if (! (*(var_1_15_Pointer))) {
   (*(var_1_10_Pointer)) = (((((*(var_1_11_Pointer))) < (((*(var_1_12_Pointer)) + 2))) ? ((*(var_1_11_Pointer))) : (((*(var_1_12_Pointer)) + 2))));
  } else {
   (*(var_1_10_Pointer)) = (((((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer)))))) < ((*(var_1_11_Pointer)))) ? ((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer)))))) : ((*(var_1_11_Pointer)))));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 1073741823);
 assume_abort_if_not(var_1_2 <= 2147483648);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 1073741824);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741824);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967295);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967295);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32767);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -16383);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((*(var_1_2_Pointer)) + (*(var_1_3_Pointer))) - ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)))) == (- (- (*(var_1_6_Pointer))))) ? (((*(var_1_3_Pointer)) != (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_4_Pointer)))) : 1) : ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_5_Pointer))))) && (((*(var_1_3_Pointer)) <= ((((((*(var_1_4_Pointer)) / (*(var_1_8_Pointer)))) > ((*(var_1_6_Pointer)))) ? (((*(var_1_4_Pointer)) / (*(var_1_8_Pointer)))) : ((*(var_1_6_Pointer)))))) ? ((*(var_1_7_Pointer)) == ((unsigned char) (! (*(var_1_9_Pointer))))) : ((*(var_1_7_Pointer)) == ((unsigned char) 0)))) && (((*(var_1_2_Pointer)) <= (*(var_1_5_Pointer))) ? ((! (*(var_1_15_Pointer))) ? ((*(var_1_10_Pointer)) == ((signed short int) (((((*(var_1_11_Pointer))) < (((*(var_1_12_Pointer)) + 2))) ? ((*(var_1_11_Pointer))) : (((*(var_1_12_Pointer)) + 2)))))) : ((*(var_1_10_Pointer)) == ((signed short int) (((((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer)))))) < ((*(var_1_11_Pointer)))) ? ((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer)))))) : ((*(var_1_11_Pointer)))))))) : 1)) && ((*(var_1_13_Pointer)) == ((unsigned char) (*(var_1_14_Pointer))))) && ((*(var_1_15_Pointer)) == ((unsigned char) (*(var_1_16_Pointer))))
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

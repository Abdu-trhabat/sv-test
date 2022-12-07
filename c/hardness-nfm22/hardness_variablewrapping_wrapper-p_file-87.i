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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch87Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1;
unsigned long int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_3 = 3164414017;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_4 = 128;
unsigned long int* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = -128;
signed char* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = 10;
signed char* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = 0;
signed char* var_1_7_Pointer = &(var_1_7);
signed char var_1_8 = 8;
signed char* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 16;
signed char* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = 10;
signed long int* var_1_10_Pointer = &(var_1_10);
signed long int var_1_12 = 8;
signed long int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned long int var_1_15 = 64;
unsigned long int* var_1_15_Pointer = &(var_1_15);
signed long int last_1_var_1_10 = 10;
void initially(void) {
}
void step(void) {
 (*(var_1_12_Pointer)) = (*(var_1_8_Pointer));
 (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
 (*(var_1_15_Pointer)) = (*(var_1_9_Pointer));
 if ((*(var_1_13_Pointer))) {
  (*(var_1_1_Pointer)) = (((((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))) : ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer)))));
 }
 unsigned long int stepLocal_1 = (*(var_1_4_Pointer));
 signed long int stepLocal_0 = -8;
 if (stepLocal_0 < (*(var_1_4_Pointer))) {
  if (stepLocal_1 != (*(var_1_12_Pointer))) {
   (*(var_1_5_Pointer)) = ((((((*(var_1_6_Pointer))) < 0 ) ? -((*(var_1_6_Pointer))) : ((*(var_1_6_Pointer))))) - ((((((*(var_1_7_Pointer))) < ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))) + (*(var_1_9_Pointer))));
  } else {
   (*(var_1_5_Pointer)) = -8;
  }
 } else {
  (*(var_1_5_Pointer)) = (*(var_1_8_Pointer));
 }
 if ((last_1_var_1_10 * (*(var_1_3_Pointer))) <= (*(var_1_4_Pointer))) {
  if (((*(var_1_9_Pointer)) - ((((-1) < 0 ) ? -(-1) : (-1)))) <= ((*(var_1_15_Pointer)) * (*(var_1_8_Pointer)))) {
   (*(var_1_10_Pointer)) = ((*(var_1_8_Pointer)) - (*(var_1_9_Pointer)));
  } else {
   (*(var_1_10_Pointer)) = (*(var_1_7_Pointer));
  }
 } else {
  (*(var_1_10_Pointer)) = (*(var_1_7_Pointer));
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 2147483647);
 assume_abort_if_not(var_1_3 <= 4294967294);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -126);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
}
int property() {
 return ((((((*(var_1_13_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned long int) (((((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))) : ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))))))) : 1) && ((-8 < (*(var_1_4_Pointer))) ? (((*(var_1_4_Pointer)) != (*(var_1_12_Pointer))) ? ((*(var_1_5_Pointer)) == ((signed char) ((((((*(var_1_6_Pointer))) < 0 ) ? -((*(var_1_6_Pointer))) : ((*(var_1_6_Pointer))))) - ((((((*(var_1_7_Pointer))) < ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))) + (*(var_1_9_Pointer)))))) : ((*(var_1_5_Pointer)) == ((signed char) -8))) : ((*(var_1_5_Pointer)) == ((signed char) (*(var_1_8_Pointer)))))) && (((last_1_var_1_10 * (*(var_1_3_Pointer))) <= (*(var_1_4_Pointer))) ? ((((*(var_1_9_Pointer)) - ((((-1) < 0 ) ? -(-1) : (-1)))) <= ((*(var_1_15_Pointer)) * (*(var_1_8_Pointer)))) ? ((*(var_1_10_Pointer)) == ((signed long int) ((*(var_1_8_Pointer)) - (*(var_1_9_Pointer))))) : ((*(var_1_10_Pointer)) == ((signed long int) (*(var_1_7_Pointer))))) : ((*(var_1_10_Pointer)) == ((signed long int) (*(var_1_7_Pointer)))))) && ((*(var_1_12_Pointer)) == ((signed long int) (*(var_1_8_Pointer))))) && ((*(var_1_13_Pointer)) == ((unsigned char) (*(var_1_14_Pointer))))) && ((*(var_1_15_Pointer)) == ((unsigned long int) (*(var_1_9_Pointer))))
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

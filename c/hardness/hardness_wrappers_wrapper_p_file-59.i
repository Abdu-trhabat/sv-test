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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -128;
signed long int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 50;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = -1;
signed long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 0;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 10000;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 0;
signed long int* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = -1;
signed char* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 32;
signed long int* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 32;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = -4;
signed char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = -4;
signed char* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = -32;
signed short int* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 128;
signed short int* var_1_13_Pointer = &(var_1_13);
signed short int var_1_14 = 1000;
signed short int* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
signed short int last_1_var_1_12 = -32;
void initially(void) {
}
void step(void) {
 if ((((((*(var_1_2_Pointer))) > (1)) ? ((*(var_1_2_Pointer))) : (1))) <= (256 + (*(var_1_3_Pointer)))) {
  (*(var_1_1_Pointer)) = ((((*(var_1_4_Pointer)) - 128) + (*(var_1_5_Pointer))) + (*(var_1_6_Pointer)));
 } else {
  (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)));
 }
 if ((*(var_1_6_Pointer)) > ((*(var_1_2_Pointer)) * ((*(var_1_4_Pointer)) - (*(var_1_8_Pointer))))) {
  if ((*(var_1_8_Pointer)) > (*(var_1_2_Pointer))) {
   (*(var_1_7_Pointer)) = (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))) + (*(var_1_11_Pointer)));
  } else {
   (*(var_1_7_Pointer)) = (*(var_1_10_Pointer));
  }
 } else {
  (*(var_1_7_Pointer)) = (*(var_1_11_Pointer));
 }
 if ((*(var_1_1_Pointer)) > (((((*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_4_Pointer))) : ((*(var_1_4_Pointer)))))) {
  (*(var_1_12_Pointer)) = ((*(var_1_13_Pointer)) - (*(var_1_14_Pointer)));
 } else {
  if ((*(var_1_15_Pointer)) || (*(var_1_16_Pointer))) {
   if (2 < (*(var_1_5_Pointer))) {
    (*(var_1_12_Pointer)) = last_1_var_1_12;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 536870912);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -536870911);
 assume_abort_if_not(var_1_5 <= 536870911);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1073741823);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -31);
 assume_abort_if_not(var_1_9 <= 32);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -31);
 assume_abort_if_not(var_1_10 <= 31);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
}
int property(void) {
 return ((((((((*(var_1_2_Pointer))) > (1)) ? ((*(var_1_2_Pointer))) : (1))) <= (256 + (*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed long int) ((((*(var_1_4_Pointer)) - 128) + (*(var_1_5_Pointer))) + (*(var_1_6_Pointer))))) : ((*(var_1_1_Pointer)) == ((signed long int) ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)))))) && (((*(var_1_6_Pointer)) > ((*(var_1_2_Pointer)) * ((*(var_1_4_Pointer)) - (*(var_1_8_Pointer))))) ? (((*(var_1_8_Pointer)) > (*(var_1_2_Pointer))) ? ((*(var_1_7_Pointer)) == ((signed char) (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))) + (*(var_1_11_Pointer))))) : ((*(var_1_7_Pointer)) == ((signed char) (*(var_1_10_Pointer))))) : ((*(var_1_7_Pointer)) == ((signed char) (*(var_1_11_Pointer)))))) && (((*(var_1_1_Pointer)) > (((((*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_4_Pointer))) : ((*(var_1_4_Pointer)))))) ? ((*(var_1_12_Pointer)) == ((signed short int) ((*(var_1_13_Pointer)) - (*(var_1_14_Pointer))))) : (((*(var_1_15_Pointer)) || (*(var_1_16_Pointer))) ? ((2 < (*(var_1_5_Pointer))) ? ((*(var_1_12_Pointer)) == ((signed short int) last_1_var_1_12)) : 1) : 1))
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

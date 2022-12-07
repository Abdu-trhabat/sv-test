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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch31Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 200;
signed long int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 1107940323;
signed long int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 4;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = -32;
signed long int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 64;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_12 = 4;
unsigned char* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 0.97;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 32.6;
double* var_1_14_Pointer = &(var_1_14);
signed long int last_1_var_1_7 = 4;
double last_1_var_1_13 = 0.97;
void initially(void) {
}
void step(void) {
 if (! ((*(var_1_3_Pointer)) < ((*(var_1_8_Pointer)) * last_1_var_1_7))) {
  if (((((last_1_var_1_13) < 0 ) ? -(last_1_var_1_13) : (last_1_var_1_13))) < last_1_var_1_13) {
   if ((*(var_1_6_Pointer))) {
    (*(var_1_9_Pointer)) = (*(var_1_12_Pointer));
   }
  }
 } else {
  (*(var_1_9_Pointer)) = (*(var_1_12_Pointer));
 }
 if ((*(var_1_9_Pointer)) < (*(var_1_9_Pointer))) {
  (*(var_1_7_Pointer)) = ((*(var_1_9_Pointer)) + (*(var_1_9_Pointer)));
 } else {
  (*(var_1_7_Pointer)) = ((*(var_1_9_Pointer)) - (*(var_1_3_Pointer)));
 }
 if (((*(var_1_9_Pointer)) + (*(var_1_3_Pointer))) < (*(var_1_9_Pointer))) {
  if ((*(var_1_2_Pointer)) && (*(var_1_6_Pointer))) {
   if ((*(var_1_6_Pointer))) {
    (*(var_1_13_Pointer)) = 0.8;
   } else {
    (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
   }
  } else {
   (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
  }
 } else {
  (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
 }
 if ((*(var_1_2_Pointer))) {
  (*(var_1_1_Pointer)) = (((*(var_1_3_Pointer)) - (*(var_1_9_Pointer))) - (*(var_1_9_Pointer)));
 } else {
  if ((*(var_1_6_Pointer)) && ((*(var_1_3_Pointer)) < (*(var_1_9_Pointer)))) {
   (*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 1073741822);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1073741823);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_13 = var_1_13;
}
int property() {
 return ((((*(var_1_2_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed long int) (((*(var_1_3_Pointer)) - (*(var_1_9_Pointer))) - (*(var_1_9_Pointer))))) : (((*(var_1_6_Pointer)) && ((*(var_1_3_Pointer)) < (*(var_1_9_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_3_Pointer)))) : 1)) && (((*(var_1_9_Pointer)) < (*(var_1_9_Pointer))) ? ((*(var_1_7_Pointer)) == ((signed long int) ((*(var_1_9_Pointer)) + (*(var_1_9_Pointer))))) : ((*(var_1_7_Pointer)) == ((signed long int) ((*(var_1_9_Pointer)) - (*(var_1_3_Pointer))))))) && ((! ((*(var_1_3_Pointer)) < ((*(var_1_8_Pointer)) * last_1_var_1_7))) ? ((((((last_1_var_1_13) < 0 ) ? -(last_1_var_1_13) : (last_1_var_1_13))) < last_1_var_1_13) ? ((*(var_1_6_Pointer)) ? ((*(var_1_9_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))) : 1) : 1) : ((*(var_1_9_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))))) && ((((*(var_1_9_Pointer)) + (*(var_1_3_Pointer))) < (*(var_1_9_Pointer))) ? (((*(var_1_2_Pointer)) && (*(var_1_6_Pointer))) ? ((*(var_1_6_Pointer)) ? ((*(var_1_13_Pointer)) == ((double) 0.8)) : ((*(var_1_13_Pointer)) == ((double) (*(var_1_14_Pointer))))) : ((*(var_1_13_Pointer)) == ((double) (*(var_1_14_Pointer))))) : ((*(var_1_13_Pointer)) == ((double) (*(var_1_14_Pointer)))))
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

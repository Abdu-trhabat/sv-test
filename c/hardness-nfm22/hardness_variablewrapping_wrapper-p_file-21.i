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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch21Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 15.6;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 15.4;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 32.2;
double* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 256;
signed short int* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 5.75;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 8.6;
float* var_1_15_Pointer = &(var_1_15);
unsigned char last_1_var_1_7 = 0;
signed short int last_1_var_1_13 = 256;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_13 + ((((last_1_var_1_13) > (last_1_var_1_13)) ? (last_1_var_1_13) : (last_1_var_1_13)))) < (last_1_var_1_13 * last_1_var_1_13)) {
  if (last_1_var_1_13 < (last_1_var_1_13 - last_1_var_1_13)) {
   if (last_1_var_1_13 != (((((((last_1_var_1_13) < (last_1_var_1_13)) ? (last_1_var_1_13) : (last_1_var_1_13))) < 0 ) ? -((((last_1_var_1_13) < (last_1_var_1_13)) ? (last_1_var_1_13) : (last_1_var_1_13))) : ((((last_1_var_1_13) < (last_1_var_1_13)) ? (last_1_var_1_13) : (last_1_var_1_13)))))) {
    (*(var_1_1_Pointer)) = last_1_var_1_13;
   }
  }
 } else {
  (*(var_1_1_Pointer)) = last_1_var_1_13;
 }
 if ((*(var_1_12_Pointer))) {
  if (((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))) >= (((*(var_1_8_Pointer)) + (*(var_1_10_Pointer))) + (*(var_1_9_Pointer)))) {
   (*(var_1_13_Pointer)) = (((((*(var_1_1_Pointer))) > ((*(var_1_1_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_1_Pointer)))));
  } else {
   (*(var_1_13_Pointer)) = (*(var_1_1_Pointer));
  }
 }
 if ((((((*(var_1_8_Pointer))) < ((*(var_1_9_Pointer)))) ? ((*(var_1_8_Pointer))) : ((*(var_1_9_Pointer))))) <= (*(var_1_10_Pointer))) {
  if (last_1_var_1_7 && ((*(var_1_1_Pointer)) >= (*(var_1_1_Pointer)))) {
   (*(var_1_7_Pointer)) = 0;
  }
 } else {
  (*(var_1_7_Pointer)) = (*(var_1_12_Pointer));
 }
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_13 = var_1_13;
}
int property() {
 return ((((last_1_var_1_13 + ((((last_1_var_1_13) > (last_1_var_1_13)) ? (last_1_var_1_13) : (last_1_var_1_13)))) < (last_1_var_1_13 * last_1_var_1_13)) ? ((last_1_var_1_13 < (last_1_var_1_13 - last_1_var_1_13)) ? ((last_1_var_1_13 != (((((((last_1_var_1_13) < (last_1_var_1_13)) ? (last_1_var_1_13) : (last_1_var_1_13))) < 0 ) ? -((((last_1_var_1_13) < (last_1_var_1_13)) ? (last_1_var_1_13) : (last_1_var_1_13))) : ((((last_1_var_1_13) < (last_1_var_1_13)) ? (last_1_var_1_13) : (last_1_var_1_13)))))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) last_1_var_1_13)) : 1) : 1) : ((*(var_1_1_Pointer)) == ((unsigned short int) last_1_var_1_13))) && (((((((*(var_1_8_Pointer))) < ((*(var_1_9_Pointer)))) ? ((*(var_1_8_Pointer))) : ((*(var_1_9_Pointer))))) <= (*(var_1_10_Pointer))) ? ((last_1_var_1_7 && ((*(var_1_1_Pointer)) >= (*(var_1_1_Pointer)))) ? ((*(var_1_7_Pointer)) == ((unsigned char) 0)) : 1) : ((*(var_1_7_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))))) && ((*(var_1_12_Pointer)) ? ((((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))) >= (((*(var_1_8_Pointer)) + (*(var_1_10_Pointer))) + (*(var_1_9_Pointer)))) ? ((*(var_1_13_Pointer)) == ((signed short int) (((((*(var_1_1_Pointer))) > ((*(var_1_1_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_1_Pointer))))))) : ((*(var_1_13_Pointer)) == ((signed short int) (*(var_1_1_Pointer))))) : 1)
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

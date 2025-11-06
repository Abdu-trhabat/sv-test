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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 10;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_3 = 4;
unsigned char* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 3.25;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 2.625;
float* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 32.4;
float* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 200;
unsigned short int* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = 10;
signed long int* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = 1653905226;
signed long int* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 15.6;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 31.2;
float* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 7.3;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 4.75;
float* var_1_14_Pointer = &(var_1_14);
unsigned char last_1_var_1_1 = 10;
unsigned short int last_1_var_1_8 = 200;
signed long int last_1_var_1_9 = 10;
float last_1_var_1_11 = 15.6;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_11 > 9999999.5f) {
  (*(var_1_9_Pointer)) = (((*(var_1_10_Pointer)) - last_1_var_1_9) - (*(var_1_3_Pointer)));
 } else {
  (*(var_1_9_Pointer)) = ((((((last_1_var_1_1 - (*(var_1_3_Pointer))) + (last_1_var_1_8 - last_1_var_1_9))) > ((*(var_1_10_Pointer)))) ? (((last_1_var_1_1 - (*(var_1_3_Pointer))) + (last_1_var_1_8 - last_1_var_1_9))) : ((*(var_1_10_Pointer)))));
 }
 if (last_1_var_1_9 <= 16) {
  (*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
 } else {
  if ((((((*(var_1_4_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer))))) < (*(var_1_6_Pointer))) {
   if ((*(var_1_7_Pointer))) {
    (*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
   } else {
    (*(var_1_1_Pointer)) = 64;
   }
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
  }
 }
 signed long int stepLocal_0 = (*(var_1_9_Pointer));
 if ((*(var_1_7_Pointer))) {
  if ((- (*(var_1_9_Pointer))) >= stepLocal_0) {
   (*(var_1_11_Pointer)) = ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)));
  }
 } else {
  (*(var_1_11_Pointer)) = (((((*(var_1_13_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer)))));
 }
 (*(var_1_8_Pointer)) = (((((*(var_1_1_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_3_Pointer)))));
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 1073741822);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 return ((((last_1_var_1_9 <= 16) ? ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_3_Pointer)))) : (((((((*(var_1_4_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer))))) < (*(var_1_6_Pointer))) ? ((*(var_1_7_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_3_Pointer)))) : ((*(var_1_1_Pointer)) == ((unsigned char) 64))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_3_Pointer)))))) && ((*(var_1_8_Pointer)) == ((unsigned short int) (((((*(var_1_1_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_3_Pointer)))))))) && ((last_1_var_1_11 > 9999999.5f) ? ((*(var_1_9_Pointer)) == ((signed long int) (((*(var_1_10_Pointer)) - last_1_var_1_9) - (*(var_1_3_Pointer))))) : ((*(var_1_9_Pointer)) == ((signed long int) ((((((last_1_var_1_1 - (*(var_1_3_Pointer))) + (last_1_var_1_8 - last_1_var_1_9))) > ((*(var_1_10_Pointer)))) ? (((last_1_var_1_1 - (*(var_1_3_Pointer))) + (last_1_var_1_8 - last_1_var_1_9))) : ((*(var_1_10_Pointer))))))))) && ((*(var_1_7_Pointer)) ? (((- (*(var_1_9_Pointer))) >= (*(var_1_9_Pointer))) ? ((*(var_1_11_Pointer)) == ((float) ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer))))) : 1) : ((*(var_1_11_Pointer)) == ((float) (((((*(var_1_13_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))))))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 0.8;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 99.25;
float* var_1_3_Pointer = &(var_1_3);
signed char var_1_4 = 50;
signed char* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = 4;
signed char* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = 4;
signed char* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = 10;
signed char* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = 64;
signed short int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 8;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 2;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 128;
unsigned char* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 5.2;
double* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = 10;
signed long int* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 9.7;
double* var_1_15_Pointer = &(var_1_15);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) < (*(var_1_3_Pointer))) {
  (*(var_1_1_Pointer)) = (((((-32 + (*(var_1_4_Pointer)))) > ((((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer))))))) ? ((-32 + (*(var_1_4_Pointer)))) : ((((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer))))))));
 } else {
  (*(var_1_1_Pointer)) = ((1 - (*(var_1_7_Pointer))) + (*(var_1_4_Pointer)));
 }
 if ((*(var_1_9_Pointer)) || (((*(var_1_7_Pointer)) / (*(var_1_10_Pointer))) <= ((*(var_1_6_Pointer)) * (*(var_1_4_Pointer))))) {
  (*(var_1_8_Pointer)) = (*(var_1_7_Pointer));
 }
 (*(var_1_11_Pointer)) = ((*(var_1_12_Pointer)) - (*(var_1_7_Pointer)));
 signed long int stepLocal_1 = -100;
 signed long int stepLocal_0 = 4;
 if (stepLocal_1 >= (*(var_1_4_Pointer))) {
  if ((*(var_1_2_Pointer)) > 63.5f) {
   if (! ((64 >> (*(var_1_14_Pointer))) >= (*(var_1_5_Pointer)))) {
    if (stepLocal_0 >= (*(var_1_8_Pointer))) {
     (*(var_1_13_Pointer)) = (((((*(var_1_15_Pointer))) > (10.2)) ? ((*(var_1_15_Pointer))) : (10.2)));
    }
   } else {
    (*(var_1_13_Pointer)) = (*(var_1_15_Pointer));
   }
  } else {
   (*(var_1_13_Pointer)) = (*(var_1_15_Pointer));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -63);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 255);
 assume_abort_if_not(var_1_10 != 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 127);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 30);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) < (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed char) (((((-32 + (*(var_1_4_Pointer)))) > ((((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer))))))) ? ((-32 + (*(var_1_4_Pointer)))) : ((((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer)))))))))) : ((*(var_1_1_Pointer)) == ((signed char) ((1 - (*(var_1_7_Pointer))) + (*(var_1_4_Pointer)))))) && (((*(var_1_9_Pointer)) || (((*(var_1_7_Pointer)) / (*(var_1_10_Pointer))) <= ((*(var_1_6_Pointer)) * (*(var_1_4_Pointer))))) ? ((*(var_1_8_Pointer)) == ((signed short int) (*(var_1_7_Pointer)))) : 1)) && ((*(var_1_11_Pointer)) == ((unsigned char) ((*(var_1_12_Pointer)) - (*(var_1_7_Pointer)))))) && ((-100 >= (*(var_1_4_Pointer))) ? (((*(var_1_2_Pointer)) > 63.5f) ? ((! ((64 >> (*(var_1_14_Pointer))) >= (*(var_1_5_Pointer)))) ? ((4 >= (*(var_1_8_Pointer))) ? ((*(var_1_13_Pointer)) == ((double) (((((*(var_1_15_Pointer))) > (10.2)) ? ((*(var_1_15_Pointer))) : (10.2))))) : 1) : ((*(var_1_13_Pointer)) == ((double) (*(var_1_15_Pointer))))) : ((*(var_1_13_Pointer)) == ((double) (*(var_1_15_Pointer))))) : 1)
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

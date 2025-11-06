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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -64;
signed long int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = -4;
signed long int* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 4.95;
float* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 1;
unsigned char* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 63.5;
float* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 127.5;
float* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 100.875;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 15.2;
float* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 32;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = 2;
signed char* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 25;
signed long int* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = -2;
signed short int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
void initially(void) {
}
void step(void) {
 (*(var_1_1_Pointer)) = (*(var_1_2_Pointer));
 signed long int stepLocal_1 = (*(var_1_1_Pointer));
 signed long int stepLocal_0 = (*(var_1_2_Pointer));
 if (! (*(var_1_4_Pointer))) {
  if (stepLocal_0 >= (*(var_1_1_Pointer))) {
   (*(var_1_3_Pointer)) = ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)));
  } else {
   if (stepLocal_1 <= (*(var_1_2_Pointer))) {
    (*(var_1_3_Pointer)) = (((((((((*(var_1_6_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_6_Pointer))) : ((*(var_1_5_Pointer)))))) < ((*(var_1_7_Pointer)))) ? ((((((*(var_1_6_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_6_Pointer))) : ((*(var_1_5_Pointer)))))) : ((*(var_1_7_Pointer)))));
   }
  }
 } else {
  (*(var_1_3_Pointer)) = 64.6f;
 }
 signed long int stepLocal_3 = (((((*(var_1_9_Pointer))) > ((*(var_1_10_Pointer)))) ? ((*(var_1_9_Pointer))) : ((*(var_1_10_Pointer))))) >> (*(var_1_11_Pointer));
 unsigned char stepLocal_2 = (*(var_1_4_Pointer));
 if (((*(var_1_5_Pointer)) == (*(var_1_7_Pointer))) || stepLocal_2) {
  if (stepLocal_3 >= ((*(var_1_2_Pointer)) + -32)) {
   (*(var_1_8_Pointer)) = (*(var_1_5_Pointer));
  } else {
   (*(var_1_8_Pointer)) = (*(var_1_6_Pointer));
  }
 } else {
  (*(var_1_8_Pointer)) = (*(var_1_5_Pointer));
 }
 unsigned char stepLocal_4 = (*(var_1_13_Pointer));
 if ((*(var_1_4_Pointer))) {
  if ((8 > (*(var_1_10_Pointer))) || stepLocal_4) {
   if ((*(var_1_13_Pointer))) {
    (*(var_1_12_Pointer)) = (*(var_1_11_Pointer));
   } else {
    (*(var_1_12_Pointer)) = (*(var_1_9_Pointer));
   }
  } else {
   (*(var_1_12_Pointer)) = (*(var_1_11_Pointer));
  }
 } else {
  (*(var_1_12_Pointer)) = (*(var_1_11_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483647);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 30);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_2_Pointer)))) && ((! (*(var_1_4_Pointer))) ? (((*(var_1_2_Pointer)) >= (*(var_1_1_Pointer))) ? ((*(var_1_3_Pointer)) == ((float) ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))))) : (((*(var_1_1_Pointer)) <= (*(var_1_2_Pointer))) ? ((*(var_1_3_Pointer)) == ((float) (((((((((*(var_1_6_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_6_Pointer))) : ((*(var_1_5_Pointer)))))) < ((*(var_1_7_Pointer)))) ? ((((((*(var_1_6_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_6_Pointer))) : ((*(var_1_5_Pointer)))))) : ((*(var_1_7_Pointer))))))) : 1)) : ((*(var_1_3_Pointer)) == ((float) 64.6f)))) && ((((*(var_1_5_Pointer)) == (*(var_1_7_Pointer))) || (*(var_1_4_Pointer))) ? ((((((((*(var_1_9_Pointer))) > ((*(var_1_10_Pointer)))) ? ((*(var_1_9_Pointer))) : ((*(var_1_10_Pointer))))) >> (*(var_1_11_Pointer))) >= ((*(var_1_2_Pointer)) + -32)) ? ((*(var_1_8_Pointer)) == ((float) (*(var_1_5_Pointer)))) : ((*(var_1_8_Pointer)) == ((float) (*(var_1_6_Pointer))))) : ((*(var_1_8_Pointer)) == ((float) (*(var_1_5_Pointer)))))) && ((*(var_1_4_Pointer)) ? (((8 > (*(var_1_10_Pointer))) || (*(var_1_13_Pointer))) ? ((*(var_1_13_Pointer)) ? ((*(var_1_12_Pointer)) == ((signed short int) (*(var_1_11_Pointer)))) : ((*(var_1_12_Pointer)) == ((signed short int) (*(var_1_9_Pointer))))) : ((*(var_1_12_Pointer)) == ((signed short int) (*(var_1_11_Pointer))))) : ((*(var_1_12_Pointer)) == ((signed short int) (*(var_1_11_Pointer)))))
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

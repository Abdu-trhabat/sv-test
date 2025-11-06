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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch113Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 5;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 32;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 1;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 8;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 64;
unsigned short int* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 64.25;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 7.5;
float* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 2;
signed char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 22430;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned short int var_1_12 = 18561;
unsigned short int* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = -32;
signed char* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_14 = 256;
unsigned long int* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 0.0;
float* var_1_16_Pointer = &(var_1_16);
float var_1_17 = 10.6;
float* var_1_17_Pointer = &(var_1_17);
float var_1_18 = 1.5;
float* var_1_18_Pointer = &(var_1_18);
unsigned long int var_1_19 = 25;
unsigned long int* var_1_19_Pointer = &(var_1_19);
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = (*(var_1_3_Pointer));
 if ((*(var_1_2_Pointer)) >= stepLocal_0) {
  (*(var_1_1_Pointer)) = ((((128) < ((*(var_1_4_Pointer)))) ? (128) : ((*(var_1_4_Pointer)))));
 } else {
  (*(var_1_1_Pointer)) = ((((((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))) < ((*(var_1_4_Pointer)))) ? (((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))) : ((*(var_1_4_Pointer)))));
 }
 if ((*(var_1_10_Pointer)) && (*(var_1_15_Pointer))) {
  if ((*(var_1_8_Pointer)) > (((*(var_1_16_Pointer)) - (*(var_1_17_Pointer))) - (*(var_1_18_Pointer)))) {
   (*(var_1_14_Pointer)) = (*(var_1_19_Pointer));
  }
 } else {
  (*(var_1_14_Pointer)) = (*(var_1_6_Pointer));
 }
 if ((*(var_1_14_Pointer)) >= (*(var_1_6_Pointer))) {
  (*(var_1_7_Pointer)) = (*(var_1_8_Pointer));
 }
 if (-64 >= (*(var_1_14_Pointer))) {
  if ((-1000 < 256) && ((((((*(var_1_14_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_6_Pointer))))) > (*(var_1_4_Pointer)))) {
   if ((*(var_1_4_Pointer)) < (((*(var_1_11_Pointer)) + (*(var_1_12_Pointer))) - (*(var_1_6_Pointer)))) {
    (*(var_1_9_Pointer)) = (*(var_1_13_Pointer));
   }
  } else {
   (*(var_1_9_Pointer)) = (*(var_1_13_Pointer));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 16383);
 assume_abort_if_not(var_1_11 <= 32768);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 16384);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 4611686.018427388000e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427388000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) ((((128) < ((*(var_1_4_Pointer)))) ? (128) : ((*(var_1_4_Pointer))))))) : ((*(var_1_1_Pointer)) == ((unsigned short int) ((((((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))) < ((*(var_1_4_Pointer)))) ? (((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))) : ((*(var_1_4_Pointer)))))))) && (((*(var_1_14_Pointer)) >= (*(var_1_6_Pointer))) ? ((*(var_1_7_Pointer)) == ((float) (*(var_1_8_Pointer)))) : 1)) && ((-64 >= (*(var_1_14_Pointer))) ? (((-1000 < 256) && ((((((*(var_1_14_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_6_Pointer))))) > (*(var_1_4_Pointer)))) ? (((*(var_1_4_Pointer)) < (((*(var_1_11_Pointer)) + (*(var_1_12_Pointer))) - (*(var_1_6_Pointer)))) ? ((*(var_1_9_Pointer)) == ((signed char) (*(var_1_13_Pointer)))) : 1) : ((*(var_1_9_Pointer)) == ((signed char) (*(var_1_13_Pointer))))) : 1)) && (((*(var_1_10_Pointer)) && (*(var_1_15_Pointer))) ? (((*(var_1_8_Pointer)) > (((*(var_1_16_Pointer)) - (*(var_1_17_Pointer))) - (*(var_1_18_Pointer)))) ? ((*(var_1_14_Pointer)) == ((unsigned long int) (*(var_1_19_Pointer)))) : 1) : ((*(var_1_14_Pointer)) == ((unsigned long int) (*(var_1_6_Pointer)))))
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

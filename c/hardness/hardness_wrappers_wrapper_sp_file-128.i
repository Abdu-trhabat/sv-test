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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch128Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 unsigned long int var_1_4;
 unsigned long int var_1_5;
 unsigned long int var_1_6;
 unsigned long int var_1_7;
 double var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned short int var_1_12;
 float var_1_13;
 float var_1_14;
 float var_1_15;
 double var_1_16;
 signed char var_1_17;
 signed char var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 500.5,
 1,
 2,
 8,
 4,
 4136859421,
 8,
 64.5,
 1,
 0,
 0,
 10,
 99.8,
 0.0,
 256.9,
 5.74,
 0,
 32
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
float* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
double* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer));
 unsigned long int stepLocal_0 = (*(WrapperStruct00_var_1_3_Pointer)) + ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer)));
 if ((*(WrapperStruct00_var_1_2_Pointer)) > stepLocal_0) {
  if (stepLocal_1 >= ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer)))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
  }
 }
 unsigned long int stepLocal_3 = (*(WrapperStruct00_var_1_5_Pointer));
 unsigned char stepLocal_2 = (*(WrapperStruct00_var_1_10_Pointer));
 if (((*(WrapperStruct00_var_1_4_Pointer)) < (*(WrapperStruct00_var_1_3_Pointer))) || stepLocal_2) {
  (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
 } else {
  if (((*(WrapperStruct00_var_1_2_Pointer)) / (*(WrapperStruct00_var_1_12_Pointer))) < stepLocal_3) {
   (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
  } else {
   (*(WrapperStruct00_var_1_9_Pointer)) = 0;
  }
 }
 if ((~ (*(WrapperStruct00_var_1_6_Pointer))) < ((*(WrapperStruct00_var_1_3_Pointer)) ^ (*(WrapperStruct00_var_1_4_Pointer)))) {
  (*(WrapperStruct00_var_1_13_Pointer)) = ((((((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) - (((((*(WrapperStruct00_var_1_8_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer)))))) < 0 ) ? -(((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) - (((((*(WrapperStruct00_var_1_8_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer)))))) : (((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) - (((((*(WrapperStruct00_var_1_8_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer))))))));
 }
 unsigned long int stepLocal_4 = (*(WrapperStruct00_var_1_7_Pointer)) << (*(WrapperStruct00_var_1_5_Pointer));
 if (((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer))) <= stepLocal_4) {
  (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967295);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967295);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 4294967295);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 0);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 65535);
 assume_abort_if_not(WrapperStruct00.var_1_12 != 0);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 127);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) > ((*(WrapperStruct00_var_1_3_Pointer)) + ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))))) ? (((*(WrapperStruct00_var_1_4_Pointer)) >= ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (*(WrapperStruct00_var_1_8_Pointer)))) : 1) : 1) && ((((*(WrapperStruct00_var_1_4_Pointer)) < (*(WrapperStruct00_var_1_3_Pointer))) || (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer)))) : ((((*(WrapperStruct00_var_1_2_Pointer)) / (*(WrapperStruct00_var_1_12_Pointer))) < (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer)))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) 0))))) && (((~ (*(WrapperStruct00_var_1_6_Pointer))) < ((*(WrapperStruct00_var_1_3_Pointer)) ^ (*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((float) ((((((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) - (((((*(WrapperStruct00_var_1_8_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer)))))) < 0 ) ? -(((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) - (((((*(WrapperStruct00_var_1_8_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer)))))) : (((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) - (((((*(WrapperStruct00_var_1_8_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer)))))))))) : 1)) && ((((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer))) <= ((*(WrapperStruct00_var_1_7_Pointer)) << (*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((double) (*(WrapperStruct00_var_1_8_Pointer)))) : 1)
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

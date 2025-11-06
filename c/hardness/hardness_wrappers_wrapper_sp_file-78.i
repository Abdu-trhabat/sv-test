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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch78Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned long int var_1_4;
 unsigned long int var_1_5;
 signed long int var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 float var_1_9;
 float var_1_10;
 float var_1_11;
 double var_1_12;
 double var_1_13;
 double var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -200,
 0,
 1,
 4,
 0,
 128,
 10,
 1000000,
 100.55,
 4.75,
 128.75,
 128.5,
 0.0,
 127.875,
 1,
 16
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_3_Pointer));
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
 if ((*(WrapperStruct00_var_1_2_Pointer)) && stepLocal_1) {
  if (stepLocal_0 && ((*(WrapperStruct00_var_1_4_Pointer)) > (*(WrapperStruct00_var_1_5_Pointer)))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (((*(WrapperStruct00_var_1_8_Pointer)) + 5) - (*(WrapperStruct00_var_1_7_Pointer)));
  }
 }
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer)));
 } else {
  if ((*(WrapperStruct00_var_1_4_Pointer)) < (*(WrapperStruct00_var_1_5_Pointer))) {
   (*(WrapperStruct00_var_1_9_Pointer)) = (((((*(WrapperStruct00_var_1_11_Pointer))) > ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))));
  } else {
   (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
  }
 }
 unsigned long int stepLocal_2 = (((8u) < 0 ) ? -(8u) : (8u));
 if ((*(WrapperStruct00_var_1_4_Pointer)) <= stepLocal_2) {
  (*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_10_Pointer)) - 99.5);
 } else {
  (*(WrapperStruct00_var_1_12_Pointer)) = (((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) - (*(WrapperStruct00_var_1_11_Pointer)));
 }
 if (0.8f > (- (*(WrapperStruct00_var_1_10_Pointer)))) {
  (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967295);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967295);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483646);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483646);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1073741823);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) && (*(WrapperStruct00_var_1_3_Pointer))) ? (((*(WrapperStruct00_var_1_2_Pointer)) && ((*(WrapperStruct00_var_1_4_Pointer)) > (*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (((*(WrapperStruct00_var_1_8_Pointer)) + 5) - (*(WrapperStruct00_var_1_7_Pointer)))))) : 1) && ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((float) ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))) : (((*(WrapperStruct00_var_1_4_Pointer)) < (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((float) (((((*(WrapperStruct00_var_1_11_Pointer))) > ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer))))))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((float) (*(WrapperStruct00_var_1_10_Pointer))))))) && (((*(WrapperStruct00_var_1_4_Pointer)) <= ((((8u) < 0 ) ? -(8u) : (8u)))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((double) ((*(WrapperStruct00_var_1_10_Pointer)) - 99.5))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((double) (((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) - (*(WrapperStruct00_var_1_11_Pointer))))))) && ((0.8f > (- (*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_16_Pointer)))) : 1)
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

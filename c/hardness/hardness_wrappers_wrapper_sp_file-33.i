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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch33Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed long int var_1_2;
 signed short int var_1_5;
 signed short int var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 float var_1_9;
 float var_1_10;
 float var_1_11;
 float var_1_12;
 signed long int var_1_13;
 unsigned char var_1_14;
 float var_1_15;
 signed long int var_1_16;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -10,
 100,
 4,
 0,
 200,
 32,
 256.5,
 -0.25,
 0.30000000000000004,
 49.5,
 -8,
 0,
 0.4,
 -256
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
float* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed long int last_1_WrapperStruct00_var_1_13 = -8;
signed long int last_1_WrapperStruct00_var_1_16 = -256;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (last_1_WrapperStruct00_var_1_16 ^ last_1_WrapperStruct00_var_1_13) + last_1_WrapperStruct00_var_1_13;
 if (stepLocal_0 < -1) {
  (*(WrapperStruct00_var_1_1_Pointer)) = 8;
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (128 - ((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer))));
 }
 (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
 (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
 if ((*(WrapperStruct00_var_1_5_Pointer)) < (*(WrapperStruct00_var_1_16_Pointer))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_8_Pointer)) + 1);
 }
 if ((*(WrapperStruct00_var_1_6_Pointer)) < ((*(WrapperStruct00_var_1_16_Pointer)) & ((*(WrapperStruct00_var_1_5_Pointer)) | (*(WrapperStruct00_var_1_16_Pointer))))) {
  (*(WrapperStruct00_var_1_9_Pointer)) = (((((*(WrapperStruct00_var_1_10_Pointer)) + ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer)))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer)) + ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) + ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))))));
 }
 signed short int stepLocal_1 = (*(WrapperStruct00_var_1_6_Pointer));
 if (! (*(WrapperStruct00_var_1_14_Pointer))) {
  (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
 } else {
  if (stepLocal_1 > ((*(WrapperStruct00_var_1_2_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) {
   (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
  } else {
   (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_1_Pointer));
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 16383);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 16383);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
 last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}
int property(void) {
 return ((((((((last_1_WrapperStruct00_var_1_16 ^ last_1_WrapperStruct00_var_1_13) + last_1_WrapperStruct00_var_1_13) < -1) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) 8)) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (128 - ((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer))))))) && (((*(WrapperStruct00_var_1_5_Pointer)) < (*(WrapperStruct00_var_1_16_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_8_Pointer)) + 1))) : 1)) && (((*(WrapperStruct00_var_1_6_Pointer)) < ((*(WrapperStruct00_var_1_16_Pointer)) & ((*(WrapperStruct00_var_1_5_Pointer)) | (*(WrapperStruct00_var_1_16_Pointer))))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((float) (((((*(WrapperStruct00_var_1_10_Pointer)) + ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer)))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer)) + ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) + ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer)))))))) : 1)) && ((! (*(WrapperStruct00_var_1_14_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_8_Pointer)))) : (((*(WrapperStruct00_var_1_6_Pointer)) > ((*(WrapperStruct00_var_1_2_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_1_Pointer))))))) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((float) (*(WrapperStruct00_var_1_11_Pointer))))) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_6_Pointer))))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch22Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned char var_1_4;
 unsigned short int var_1_5;
 unsigned short int var_1_6;
 float var_1_7;
 float var_1_8;
 float var_1_9;
 float var_1_10;
 unsigned long int var_1_11;
 unsigned long int var_1_12;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -5,
 5,
 25,
 0,
 256,
 44772,
 5.9,
 7.6,
 64.2,
 128.75,
 8,
 3135928546
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
float* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
float* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer)) == (*(WrapperStruct00_var_1_3_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_2_Pointer)) + -16);
 } else {
  if ((*(WrapperStruct00_var_1_4_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
  }
 }
 signed short int stepLocal_0 = (*(WrapperStruct00_var_1_1_Pointer));
 if ((*(WrapperStruct00_var_1_4_Pointer))) {
  (*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_2_Pointer));
 } else {
  if ((*(WrapperStruct00_var_1_2_Pointer)) <= stepLocal_0) {
   (*(WrapperStruct00_var_1_5_Pointer)) = (((((*(WrapperStruct00_var_1_3_Pointer))) > (((*(WrapperStruct00_var_1_6_Pointer)) - 8))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : (((*(WrapperStruct00_var_1_6_Pointer)) - 8))));
  }
 }
 unsigned short int stepLocal_1 = (*(WrapperStruct00_var_1_5_Pointer));
 if (stepLocal_1 >= ((*(WrapperStruct00_var_1_2_Pointer)) & (*(WrapperStruct00_var_1_3_Pointer)))) {
  (*(WrapperStruct00_var_1_11_Pointer)) = ((((((((((((50u) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? (50u) : ((*(WrapperStruct00_var_1_3_Pointer)))))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (((((50u) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? (50u) : ((*(WrapperStruct00_var_1_3_Pointer)))))) : ((*(WrapperStruct00_var_1_6_Pointer)))))) < (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))))) ? (((((((((50u) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? (50u) : ((*(WrapperStruct00_var_1_3_Pointer)))))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (((((50u) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? (50u) : ((*(WrapperStruct00_var_1_3_Pointer)))))) : ((*(WrapperStruct00_var_1_6_Pointer)))))) : (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))))));
 } else {
  if (5.7 < (*(WrapperStruct00_var_1_9_Pointer))) {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  } else {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
  }
 }
 if ((*(WrapperStruct00_var_1_11_Pointer)) < (*(WrapperStruct00_var_1_5_Pointer))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = (((10.25f + (*(WrapperStruct00_var_1_8_Pointer))) + (*(WrapperStruct00_var_1_9_Pointer))) + (*(WrapperStruct00_var_1_10_Pointer)));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 255);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 65534);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -115292.1504606845700e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 1152921.504606845700e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) == (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_2_Pointer)) + -16))) : ((*(WrapperStruct00_var_1_4_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_3_Pointer)))) : 1)) && ((*(WrapperStruct00_var_1_4_Pointer)) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_2_Pointer)))) : (((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_1_Pointer))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned short int) (((((*(WrapperStruct00_var_1_3_Pointer))) > (((*(WrapperStruct00_var_1_6_Pointer)) - 8))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : (((*(WrapperStruct00_var_1_6_Pointer)) - 8)))))) : 1))) && (((*(WrapperStruct00_var_1_11_Pointer)) < (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((float) (((10.25f + (*(WrapperStruct00_var_1_8_Pointer))) + (*(WrapperStruct00_var_1_9_Pointer))) + (*(WrapperStruct00_var_1_10_Pointer))))) : 1)) && (((*(WrapperStruct00_var_1_5_Pointer)) >= ((*(WrapperStruct00_var_1_2_Pointer)) & (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned long int) ((((((((((((50u) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? (50u) : ((*(WrapperStruct00_var_1_3_Pointer)))))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (((((50u) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? (50u) : ((*(WrapperStruct00_var_1_3_Pointer)))))) : ((*(WrapperStruct00_var_1_6_Pointer)))))) < (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))))) ? (((((((((50u) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? (50u) : ((*(WrapperStruct00_var_1_3_Pointer)))))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (((((50u) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? (50u) : ((*(WrapperStruct00_var_1_3_Pointer)))))) : ((*(WrapperStruct00_var_1_6_Pointer)))))) : (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))))))) : ((5.7 < (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_3_Pointer))))))
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

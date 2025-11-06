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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned char var_1_2;
 unsigned short int var_1_3;
 unsigned char var_1_4;
 signed long int var_1_5;
 signed long int var_1_6;
 signed long int var_1_7;
 double var_1_8;
 double var_1_10;
 double var_1_11;
 double var_1_12;
 signed long int var_1_13;
 signed short int var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 double var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 128,
 0,
 25,
 4,
 1000000000,
 128,
 2,
 127.625,
 0.8,
 128.75,
 24.8,
 -64,
 -128,
 64,
 5,
 1.5
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
double* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((((*(WrapperStruct00_var_1_5_Pointer)) * (*(WrapperStruct00_var_1_6_Pointer)))) < ((~ (*(WrapperStruct00_var_1_7_Pointer))))) ? (((*(WrapperStruct00_var_1_5_Pointer)) * (*(WrapperStruct00_var_1_6_Pointer)))) : ((~ (*(WrapperStruct00_var_1_7_Pointer)))));
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((((((((*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) : (((((*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer)))))));
 } else {
  if (((*(WrapperStruct00_var_1_3_Pointer)) / (*(WrapperStruct00_var_1_4_Pointer))) >= stepLocal_0) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
  }
 }
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_1_Pointer)) ^ (*(WrapperStruct00_var_1_5_Pointer));
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer));
 if ((*(WrapperStruct00_var_1_6_Pointer)) <= stepLocal_1) {
  if ((*(WrapperStruct00_var_1_1_Pointer)) == stepLocal_2) {
   (*(WrapperStruct00_var_1_8_Pointer)) = ((((((*(WrapperStruct00_var_1_10_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer))))) + (*(WrapperStruct00_var_1_11_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
 }
 if ((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_13_Pointer))) {
  (*(WrapperStruct00_var_1_12_Pointer)) = (((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))));
 }
 (*(WrapperStruct00_var_1_14_Pointer)) = 200;
 (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
 (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 65534);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 255);
 assume_abort_if_not(WrapperStruct00.var_1_4 != 0);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) ((((((((*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) : (((((*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))))))) : ((((*(WrapperStruct00_var_1_3_Pointer)) / (*(WrapperStruct00_var_1_4_Pointer))) >= ((((((*(WrapperStruct00_var_1_5_Pointer)) * (*(WrapperStruct00_var_1_6_Pointer)))) < ((~ (*(WrapperStruct00_var_1_7_Pointer))))) ? (((*(WrapperStruct00_var_1_5_Pointer)) * (*(WrapperStruct00_var_1_6_Pointer)))) : ((~ (*(WrapperStruct00_var_1_7_Pointer))))))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_3_Pointer)))))) && (((*(WrapperStruct00_var_1_6_Pointer)) <= ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer)))) ? (((*(WrapperStruct00_var_1_1_Pointer)) == ((*(WrapperStruct00_var_1_1_Pointer)) ^ (*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((double) ((((((*(WrapperStruct00_var_1_10_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer))))) + (*(WrapperStruct00_var_1_11_Pointer))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((double) (*(WrapperStruct00_var_1_11_Pointer))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((double) (*(WrapperStruct00_var_1_10_Pointer)))))) && (((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_13_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer))))))) : 1)) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed short int) 200))) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_16_Pointer))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((double) (*(WrapperStruct00_var_1_10_Pointer))))
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

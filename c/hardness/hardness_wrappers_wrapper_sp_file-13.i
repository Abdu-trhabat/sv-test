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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned char var_1_2;
 unsigned short int var_1_3;
 unsigned short int var_1_4;
 signed char var_1_5;
 signed char var_1_6;
 signed char var_1_7;
 unsigned char var_1_8;
 unsigned short int var_1_9;
 unsigned short int var_1_10;
 signed long int var_1_11;
 float var_1_12;
 float var_1_13;
 float var_1_14;
 float var_1_15;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 25,
 1,
 8,
 256,
 16,
 10,
 16,
 0,
 4,
 50,
 1,
 4.375,
 7.65,
 100.75,
 32.4
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
float* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
float* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_3_Pointer))) > ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))));
 }
 if (((*(WrapperStruct00_var_1_1_Pointer)) == (*(WrapperStruct00_var_1_4_Pointer))) || (*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_5_Pointer)) = ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer)));
 } else {
  if ((*(WrapperStruct00_var_1_2_Pointer)) || (*(WrapperStruct00_var_1_8_Pointer))) {
   (*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  }
 }
 signed char stepLocal_0 = (*(WrapperStruct00_var_1_7_Pointer));
 if ((*(WrapperStruct00_var_1_4_Pointer)) < stepLocal_0) {
  (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
 } else {
  (*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer)));
 }
 unsigned short int stepLocal_1 = (*(WrapperStruct00_var_1_10_Pointer));
 if ((*(WrapperStruct00_var_1_3_Pointer)) > stepLocal_1) {
  if (((*(WrapperStruct00_var_1_12_Pointer)) * (- (*(WrapperStruct00_var_1_13_Pointer)))) < (- (*(WrapperStruct00_var_1_14_Pointer)))) {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
  }
 } else {
  if ((*(WrapperStruct00_var_1_12_Pointer)) < ((*(WrapperStruct00_var_1_13_Pointer)) / (*(WrapperStruct00_var_1_15_Pointer)))) {
   if ((*(WrapperStruct00_var_1_15_Pointer)) > (*(WrapperStruct00_var_1_14_Pointer))) {
    (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
   }
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 65534);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 65534);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 126);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 126);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 32767);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_15 != 0.0F);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (((((*(WrapperStruct00_var_1_3_Pointer))) > ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer))))))) : 1) && ((((*(WrapperStruct00_var_1_1_Pointer)) == (*(WrapperStruct00_var_1_4_Pointer))) || (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))))) : (((*(WrapperStruct00_var_1_2_Pointer)) || (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_6_Pointer)))) : 1))) && (((*(WrapperStruct00_var_1_4_Pointer)) < (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_3_Pointer)))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer))))))) && (((*(WrapperStruct00_var_1_3_Pointer)) > (*(WrapperStruct00_var_1_10_Pointer))) ? ((((*(WrapperStruct00_var_1_12_Pointer)) * (- (*(WrapperStruct00_var_1_13_Pointer)))) < (- (*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_4_Pointer)))) : 1) : (((*(WrapperStruct00_var_1_12_Pointer)) < ((*(WrapperStruct00_var_1_13_Pointer)) / (*(WrapperStruct00_var_1_15_Pointer)))) ? (((*(WrapperStruct00_var_1_15_Pointer)) > (*(WrapperStruct00_var_1_14_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_4_Pointer)))) : 1) : 1))
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

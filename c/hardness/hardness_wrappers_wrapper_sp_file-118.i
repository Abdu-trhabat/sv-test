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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed short int var_1_3;
 signed short int var_1_4;
 signed short int var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 signed short int var_1_10;
 float var_1_11;
 float var_1_12;
 unsigned char var_1_14;
 signed long int var_1_15;
 unsigned char var_1_16;
 double var_1_17;
 double var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 10,
 -32,
 -4,
 2,
 100,
 2,
 10,
 4,
 4,
 10.8,
 15.2,
 1,
 8,
 0,
 0.4,
 100000000.2
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
float* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
double* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
double* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_14_Pointer)) && (*(WrapperStruct00_var_1_16_Pointer))) {
  (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
 }
 (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
 signed long int stepLocal_0 = 4;
 if ((*(WrapperStruct00_var_1_15_Pointer)) < stepLocal_0) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) - 5);
 }
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_15_Pointer));
 if ((*(WrapperStruct00_var_1_4_Pointer)) == stepLocal_1) {
  (*(WrapperStruct00_var_1_6_Pointer)) = ((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer))))) + (((((64 + 8)) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((64 + 8)) : ((*(WrapperStruct00_var_1_9_Pointer))))));
 } else {
  (*(WrapperStruct00_var_1_6_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) + 4);
 }
 if (((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))) < (*(WrapperStruct00_var_1_17_Pointer))) {
  if ((*(WrapperStruct00_var_1_14_Pointer)) || ((*(WrapperStruct00_var_1_15_Pointer)) >= (((((*(WrapperStruct00_var_1_4_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))))) {
   if ((*(WrapperStruct00_var_1_12_Pointer)) >= 127.25f) {
    (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
   }
  }
 } else {
  (*(WrapperStruct00_var_1_10_Pointer)) = 16;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 16383);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 16383);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32766);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 127);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_18 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_15_Pointer)) < 4) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_5_Pointer)) - 5)))) && (((*(WrapperStruct00_var_1_4_Pointer)) == (*(WrapperStruct00_var_1_15_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned char) ((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer))))) + (((((64 + 8)) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((64 + 8)) : ((*(WrapperStruct00_var_1_9_Pointer)))))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_7_Pointer)) + 4))))) && ((((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))) < (*(WrapperStruct00_var_1_17_Pointer))) ? (((*(WrapperStruct00_var_1_14_Pointer)) || ((*(WrapperStruct00_var_1_15_Pointer)) >= (((((*(WrapperStruct00_var_1_4_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))))) ? (((*(WrapperStruct00_var_1_12_Pointer)) >= 127.25f) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_3_Pointer)))) : 1) : 1) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed short int) 16)))) && (((*(WrapperStruct00_var_1_14_Pointer)) && (*(WrapperStruct00_var_1_16_Pointer))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_8_Pointer)))) : 1)) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((double) (*(WrapperStruct00_var_1_18_Pointer))))
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

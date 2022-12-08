// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 unsigned char var_1_2;
 signed short int var_1_3;
 signed short int var_1_4;
 signed short int var_1_5;
 signed short int var_1_6;
 float var_1_7;
 float var_1_8;
 float var_1_9;
 float var_1_10;
 unsigned short int var_1_11;
 unsigned char var_1_12;
 unsigned short int var_1_13;
 unsigned short int var_1_14;
 unsigned short int var_1_15;
 unsigned short int var_1_16;
 unsigned short int var_1_17;
 unsigned long int var_1_18;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 0,
 2,
 256,
 -256,
 2,
 255.8,
 127.8,
 128.5,
 499.3,
 10,
 1,
 8,
 256,
 1,
 16,
 57705,
 64
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
float* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
float* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned short int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned short int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned long int* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
void initially(void) {
}
void step(void) {
 if (! (*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((((((*(WrapperStruct00_var_1_3_Pointer)) + ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (((*(WrapperStruct00_var_1_3_Pointer)) + ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 }
 signed short int stepLocal_0 = (*(WrapperStruct00_var_1_5_Pointer));
 if (stepLocal_0 > 2) {
  (*(WrapperStruct00_var_1_7_Pointer)) = (((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_9_Pointer))) - (*(WrapperStruct00_var_1_10_Pointer)));
 }
 (*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
 if ((*(WrapperStruct00_var_1_2_Pointer)) && (*(WrapperStruct00_var_1_12_Pointer))) {
  (*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) + (((((((((*(WrapperStruct00_var_1_14_Pointer))) > ((*(WrapperStruct00_var_1_15_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_15_Pointer)))))) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? ((((((*(WrapperStruct00_var_1_14_Pointer))) > ((*(WrapperStruct00_var_1_15_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_15_Pointer)))))) : ((*(WrapperStruct00_var_1_16_Pointer))))));
 } else {
  if ((*(WrapperStruct00_var_1_3_Pointer)) < (200 * (-25 << (*(WrapperStruct00_var_1_18_Pointer))))) {
   (*(WrapperStruct00_var_1_11_Pointer)) = (((((((((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) > ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) ? (((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) : ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))))) < 0 ) ? -((((((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) > ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) ? (((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) : ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))))) : ((((((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) > ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) ? (((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) : ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))))));
  } else {
   (*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer)));
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 16383);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -8191);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 8192);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -8191);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 8191);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32766);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 32767);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 32767);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 32767);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 32767);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 65534);
}
void updateLastVariables() {
}
int property() {
 return ((((! (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) ((((((*(WrapperStruct00_var_1_3_Pointer)) + ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (((*(WrapperStruct00_var_1_3_Pointer)) + ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_5_Pointer))))) && (((*(WrapperStruct00_var_1_5_Pointer)) > 2) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((float) (((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_9_Pointer))) - (*(WrapperStruct00_var_1_10_Pointer))))) : 1)) && (((*(WrapperStruct00_var_1_2_Pointer)) && (*(WrapperStruct00_var_1_12_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_13_Pointer)) + (((((((((*(WrapperStruct00_var_1_14_Pointer))) > ((*(WrapperStruct00_var_1_15_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_15_Pointer)))))) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? ((((((*(WrapperStruct00_var_1_14_Pointer))) > ((*(WrapperStruct00_var_1_15_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_15_Pointer)))))) : ((*(WrapperStruct00_var_1_16_Pointer)))))))) : (((*(WrapperStruct00_var_1_3_Pointer)) < (200 * (-25 << (*(WrapperStruct00_var_1_18_Pointer))))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned short int) (((((((((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) > ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) ? (((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) : ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))))) < 0 ) ? -((((((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) > ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) ? (((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) : ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))))) : ((((((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) > ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) ? (((*(WrapperStruct00_var_1_17_Pointer)) - 10000)) : ((((((*(WrapperStruct00_var_1_15_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))))))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer)))))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_17_Pointer))))
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

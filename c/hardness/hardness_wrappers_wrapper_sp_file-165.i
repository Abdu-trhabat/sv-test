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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 float var_1_2;
 float var_1_3;
 float var_1_4;
 float var_1_5;
 float var_1_6;
 float var_1_7;
 float var_1_8;
 signed short int var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 signed short int var_1_12;
 signed short int var_1_13;
 signed short int var_1_14;
 signed short int var_1_15;
 signed short int var_1_16;
 signed short int var_1_17;
 signed short int var_1_18;
 signed short int var_1_19;
 unsigned short int var_1_20;
 unsigned short int var_1_21;
 unsigned short int var_1_22;
 unsigned short int var_1_23;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 10.5,
 255.6,
 128.75,
 2.7,
 7.5,
 0.25,
 15.25,
 31.2,
 25,
 1,
 0,
 -32,
 -64,
 -256,
 -10,
 10,
 128,
 16,
 100,
 100,
 33508,
 21271,
 58974
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
float* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
float* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
float* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
float* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed short int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed short int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed short int* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
signed short int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
unsigned short int* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
unsigned short int* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);
unsigned short int* WrapperStruct00_var_1_22_Pointer = &(WrapperStruct00.var_1_22);
unsigned short int* WrapperStruct00_var_1_23_Pointer = &(WrapperStruct00.var_1_23);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer)) >= ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer)))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_5_Pointer))) > ((((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))) + ((*(WrapperStruct00_var_1_8_Pointer)) - 200.2f)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))) + ((*(WrapperStruct00_var_1_8_Pointer)) - 200.2f)))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
 }
 if ((*(WrapperStruct00_var_1_10_Pointer)) && (*(WrapperStruct00_var_1_11_Pointer))) {
  (*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_9_Pointer)) = (((((*(WrapperStruct00_var_1_13_Pointer))) < (((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : (((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))))));
 }
 if ((*(WrapperStruct00_var_1_10_Pointer))) {
  (*(WrapperStruct00_var_1_15_Pointer)) = ((((((*(WrapperStruct00_var_1_16_Pointer))) > (((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer))))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : (((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer)))))) + ((*(WrapperStruct00_var_1_19_Pointer)) - 100));
 }
 if ((*(WrapperStruct00_var_1_10_Pointer))) {
  (*(WrapperStruct00_var_1_20_Pointer)) = ((*(WrapperStruct00_var_1_21_Pointer)) - ((*(WrapperStruct00_var_1_22_Pointer)) - (((((*(WrapperStruct00_var_1_19_Pointer))) > ((*(WrapperStruct00_var_1_18_Pointer)))) ? ((*(WrapperStruct00_var_1_19_Pointer))) : ((*(WrapperStruct00_var_1_18_Pointer)))))));
 } else {
  (*(WrapperStruct00_var_1_20_Pointer)) = (((*(WrapperStruct00_var_1_23_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer))) - (*(WrapperStruct00_var_1_17_Pointer)));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 16383);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 16383);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 16383);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 16383);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 16383);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 16383);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 16383);
 WrapperStruct00.var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_21 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_21 <= 65534);
 WrapperStruct00.var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_22 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_22 <= 32767);
 WrapperStruct00.var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_23 >= 49150);
 assume_abort_if_not(WrapperStruct00.var_1_23 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) >= ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (((((*(WrapperStruct00_var_1_5_Pointer))) > ((((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))) + ((*(WrapperStruct00_var_1_8_Pointer)) - 200.2f)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))) + ((*(WrapperStruct00_var_1_8_Pointer)) - 200.2f))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (*(WrapperStruct00_var_1_7_Pointer))))) && (((*(WrapperStruct00_var_1_10_Pointer)) && (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer))))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed short int) (((((*(WrapperStruct00_var_1_13_Pointer))) < (((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : (((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer)))))))))) && ((*(WrapperStruct00_var_1_10_Pointer)) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed short int) ((((((*(WrapperStruct00_var_1_16_Pointer))) > (((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer))))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : (((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer)))))) + ((*(WrapperStruct00_var_1_19_Pointer)) - 100)))) : 1)) && ((*(WrapperStruct00_var_1_10_Pointer)) ? ((*(WrapperStruct00_var_1_20_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_21_Pointer)) - ((*(WrapperStruct00_var_1_22_Pointer)) - (((((*(WrapperStruct00_var_1_19_Pointer))) > ((*(WrapperStruct00_var_1_18_Pointer)))) ? ((*(WrapperStruct00_var_1_19_Pointer))) : ((*(WrapperStruct00_var_1_18_Pointer))))))))) : ((*(WrapperStruct00_var_1_20_Pointer)) == ((unsigned short int) (((*(WrapperStruct00_var_1_23_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer))) - (*(WrapperStruct00_var_1_17_Pointer))))))
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

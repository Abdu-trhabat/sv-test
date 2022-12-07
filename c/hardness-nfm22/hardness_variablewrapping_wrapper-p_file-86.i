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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 0;
signed short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
signed short int var_1_3 = 2;
signed short int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 256;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = -256;
signed short int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = 2;
signed short int* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 255.8;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 127.8;
float* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 128.5;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 499.3;
float* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 10;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned short int var_1_13 = 8;
unsigned short int* var_1_13_Pointer = &(var_1_13);
unsigned short int var_1_14 = 256;
unsigned short int* var_1_14_Pointer = &(var_1_14);
unsigned short int var_1_15 = 1;
unsigned short int* var_1_15_Pointer = &(var_1_15);
unsigned short int var_1_16 = 16;
unsigned short int* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 57705;
unsigned short int* var_1_17_Pointer = &(var_1_17);
unsigned long int var_1_18 = 64;
unsigned long int* var_1_18_Pointer = &(var_1_18);
void initially(void) {
}
void step(void) {
 if (! (*(var_1_2_Pointer))) {
  (*(var_1_1_Pointer)) = ((((((*(var_1_3_Pointer)) + ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) < ((*(var_1_6_Pointer)))) ? (((*(var_1_3_Pointer)) + ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) : ((*(var_1_6_Pointer)))));
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
 }
 signed short int stepLocal_0 = (*(var_1_5_Pointer));
 if (stepLocal_0 > 2) {
  (*(var_1_7_Pointer)) = (((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) - (*(var_1_10_Pointer)));
 }
 (*(var_1_18_Pointer)) = (*(var_1_17_Pointer));
 if ((*(var_1_2_Pointer)) && (*(var_1_12_Pointer))) {
  (*(var_1_11_Pointer)) = ((*(var_1_13_Pointer)) + (((((((((*(var_1_14_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer)))))) < ((*(var_1_16_Pointer)))) ? ((((((*(var_1_14_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer)))))) : ((*(var_1_16_Pointer))))));
 } else {
  if ((*(var_1_3_Pointer)) < (200 * (-25 << (*(var_1_18_Pointer))))) {
   (*(var_1_11_Pointer)) = (((((((((*(var_1_17_Pointer)) - 10000)) > ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer))))))) ? (((*(var_1_17_Pointer)) - 10000)) : ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer)))))))) < 0 ) ? -((((((*(var_1_17_Pointer)) - 10000)) > ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer))))))) ? (((*(var_1_17_Pointer)) - 10000)) : ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer)))))))) : ((((((*(var_1_17_Pointer)) - 10000)) > ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer))))))) ? (((*(var_1_17_Pointer)) - 10000)) : ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer))))))))));
  } else {
   (*(var_1_11_Pointer)) = ((*(var_1_17_Pointer)) - (*(var_1_15_Pointer)));
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -16383);
 assume_abort_if_not(var_1_3 <= 16383);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -8191);
 assume_abort_if_not(var_1_4 <= 8192);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -8191);
 assume_abort_if_not(var_1_5 <= 8191);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -32767);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 32767);
 assume_abort_if_not(var_1_17 <= 65534);
}
void updateLastVariables() {
}
int property() {
 return ((((! (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed short int) ((((((*(var_1_3_Pointer)) + ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) < ((*(var_1_6_Pointer)))) ? (((*(var_1_3_Pointer)) + ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) : ((*(var_1_6_Pointer))))))) : ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_5_Pointer))))) && (((*(var_1_5_Pointer)) > 2) ? ((*(var_1_7_Pointer)) == ((float) (((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) - (*(var_1_10_Pointer))))) : 1)) && (((*(var_1_2_Pointer)) && (*(var_1_12_Pointer))) ? ((*(var_1_11_Pointer)) == ((unsigned short int) ((*(var_1_13_Pointer)) + (((((((((*(var_1_14_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer)))))) < ((*(var_1_16_Pointer)))) ? ((((((*(var_1_14_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer)))))) : ((*(var_1_16_Pointer)))))))) : (((*(var_1_3_Pointer)) < (200 * (-25 << (*(var_1_18_Pointer))))) ? ((*(var_1_11_Pointer)) == ((unsigned short int) (((((((((*(var_1_17_Pointer)) - 10000)) > ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer))))))) ? (((*(var_1_17_Pointer)) - 10000)) : ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer)))))))) < 0 ) ? -((((((*(var_1_17_Pointer)) - 10000)) > ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer))))))) ? (((*(var_1_17_Pointer)) - 10000)) : ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer)))))))) : ((((((*(var_1_17_Pointer)) - 10000)) > ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer))))))) ? (((*(var_1_17_Pointer)) - 10000)) : ((((((*(var_1_15_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_14_Pointer)))))))))))) : ((*(var_1_11_Pointer)) == ((unsigned short int) ((*(var_1_17_Pointer)) - (*(var_1_15_Pointer)))))))) && ((*(var_1_18_Pointer)) == ((unsigned long int) (*(var_1_17_Pointer))))
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

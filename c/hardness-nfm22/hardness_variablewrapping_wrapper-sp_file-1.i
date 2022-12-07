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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 float var_1_2;
 float var_1_3;
 float var_1_4;
 unsigned char var_1_5;
 signed long int var_1_6;
 unsigned char var_1_7;
 signed long int var_1_10;
 signed long int var_1_11;
 unsigned long int var_1_12;
 unsigned char var_1_13;
 signed long int var_1_15;
 signed short int var_1_16;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 5.5,
 10.375,
 127.5,
 256.2,
 1,
 5,
 1,
 32,
 2,
 16,
 50,
 100000000,
 2
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
float* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed short int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned long int last_1_WrapperStruct00_var_1_12 = 16;
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer)) <= (- (*(WrapperStruct00_var_1_3_Pointer)))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_4_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))));
 } else {
  if ((*(WrapperStruct00_var_1_5_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
  }
 }
 (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_7_Pointer));
 if ((*(WrapperStruct00_var_1_5_Pointer)) || stepLocal_0) {
  (*(WrapperStruct00_var_1_6_Pointer)) = (((((*(WrapperStruct00_var_1_16_Pointer))) > ((*(WrapperStruct00_var_1_16_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : ((*(WrapperStruct00_var_1_16_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_6_Pointer)) = (((*(WrapperStruct00_var_1_10_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer))) - 4);
 }
 signed long int stepLocal_3 = (*(WrapperStruct00_var_1_11_Pointer));
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer));
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_11_Pointer)) << (*(WrapperStruct00_var_1_16_Pointer));
 if (stepLocal_1 != (((((*(WrapperStruct00_var_1_10_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))))) {
  if (((*(WrapperStruct00_var_1_16_Pointer)) % (*(WrapperStruct00_var_1_13_Pointer))) >= stepLocal_3) {
   if (stepLocal_2 > (last_1_WrapperStruct00_var_1_12 * (*(WrapperStruct00_var_1_16_Pointer)))) {
    (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
   } else {
    (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
   }
  }
 }
 (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1073741823);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1073741823);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 255);
 assume_abort_if_not(WrapperStruct00.var_1_13 != 0);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
}
int property() {
 return ((((((*(WrapperStruct00_var_1_2_Pointer)) <= (- (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (((((*(WrapperStruct00_var_1_4_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer))))))) : ((*(WrapperStruct00_var_1_5_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (*(WrapperStruct00_var_1_4_Pointer)))))) && (((*(WrapperStruct00_var_1_5_Pointer)) || (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (((((*(WrapperStruct00_var_1_16_Pointer))) > ((*(WrapperStruct00_var_1_16_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : ((*(WrapperStruct00_var_1_16_Pointer))))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (((*(WrapperStruct00_var_1_10_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer))) - 4))))) && ((((*(WrapperStruct00_var_1_11_Pointer)) << (*(WrapperStruct00_var_1_16_Pointer))) != (((((*(WrapperStruct00_var_1_10_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))))) ? ((((*(WrapperStruct00_var_1_16_Pointer)) % (*(WrapperStruct00_var_1_13_Pointer))) >= (*(WrapperStruct00_var_1_11_Pointer))) ? ((((*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer))) > (last_1_WrapperStruct00_var_1_12 * (*(WrapperStruct00_var_1_16_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_13_Pointer)))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_10_Pointer))))) : 1) : 1)) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_16_Pointer))))) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_13_Pointer))))
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

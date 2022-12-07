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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 unsigned char var_1_2;
 float var_1_3;
 float var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_14;
 unsigned char var_1_15;
 double var_1_16;
 unsigned char var_1_17;
 double var_1_18;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 128.75,
 1,
 63.5,
 255.5,
 32,
 25,
 128,
 16,
 2,
 5,
 10,
 3.75,
 0,
 255.5
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
double* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
double* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned char last_1_WrapperStruct00_var_1_5 = 32;
unsigned char last_1_WrapperStruct00_var_1_12 = 2;
unsigned char last_1_WrapperStruct00_var_1_17 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_17 | last_1_WrapperStruct00_var_1_12;
 if ((last_1_WrapperStruct00_var_1_5 / -2) >= stepLocal_0) {
  (*(WrapperStruct00_var_1_5_Pointer)) = (((((*(WrapperStruct00_var_1_9_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_5_Pointer)) = ((*(WrapperStruct00_var_1_10_Pointer)) - (((((*(WrapperStruct00_var_1_11_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))))));
 }
 if (! (*(WrapperStruct00_var_1_2_Pointer))) {
  if ((*(WrapperStruct00_var_1_2_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_3_Pointer))) > ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))));
  }
 }
 (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
 (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 (*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
 unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_9_Pointer));
 if (((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer))) >= stepLocal_1) {
  if ((((((*(WrapperStruct00_var_1_4_Pointer))) > (((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer))))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : (((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer)))))) <= (*(WrapperStruct00_var_1_1_Pointer))) {
   (*(WrapperStruct00_var_1_12_Pointer)) = (((((*(WrapperStruct00_var_1_11_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))));
  } else {
   if ((*(WrapperStruct00_var_1_2_Pointer))) {
    (*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer)));
   }
  }
 } else {
  (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 254);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 254);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_5 = WrapperStruct00.var_1_5;
 last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
 last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}
int property() {
 return ((((((! (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (((((*(WrapperStruct00_var_1_3_Pointer))) > ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer))))))) : 1) : 1) && (((last_1_WrapperStruct00_var_1_5 / -2) >= (last_1_WrapperStruct00_var_1_17 | last_1_WrapperStruct00_var_1_12)) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (((((*(WrapperStruct00_var_1_9_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer))))))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_10_Pointer)) - (((((*(WrapperStruct00_var_1_11_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer)))))))))) && ((((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer))) >= (*(WrapperStruct00_var_1_9_Pointer))) ? (((((((*(WrapperStruct00_var_1_4_Pointer))) > (((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer))))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : (((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer)))))) <= (*(WrapperStruct00_var_1_1_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (((((*(WrapperStruct00_var_1_11_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) : ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer))))) : 1)) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_9_Pointer)))))) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((double) (*(WrapperStruct00_var_1_4_Pointer))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_9_Pointer))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((double) (*(WrapperStruct00_var_1_3_Pointer))))
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

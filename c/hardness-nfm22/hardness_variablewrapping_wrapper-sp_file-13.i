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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned char var_1_2;
 signed char var_1_5;
 unsigned short int var_1_6;
 signed char var_1_7;
 unsigned short int var_1_8;
 signed char var_1_9;
 signed char var_1_10;
 unsigned char var_1_11;
 double var_1_12;
 double var_1_13;
 double var_1_14;
 double var_1_15;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 25,
 1,
 16,
 16,
 4,
 2,
 64,
 0,
 16,
 128.4,
 50.2,
 3.8,
 25.1
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
void initially(void) {
}
void step(void) {
 if ((((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer))) + (*(WrapperStruct00_var_1_14_Pointer))) <= (256.625 * ((((1.875) > ((*(WrapperStruct00_var_1_15_Pointer)))) ? (1.875) : ((*(WrapperStruct00_var_1_15_Pointer))))))) {
  (*(WrapperStruct00_var_1_11_Pointer)) = (((((5) < 0 ) ? -(5) : (5))) + 5);
 }
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_11_Pointer))) > ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer)))));
 }
 if (((*(WrapperStruct00_var_1_1_Pointer)) == 16) || ((*(WrapperStruct00_var_1_11_Pointer)) < (10 / (*(WrapperStruct00_var_1_6_Pointer))))) {
  (*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
 } else {
  (*(WrapperStruct00_var_1_5_Pointer)) = 5;
 }
 unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_11_Pointer));
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
 if (stepLocal_0 || ((*(WrapperStruct00_var_1_11_Pointer)) >= (*(WrapperStruct00_var_1_11_Pointer)))) {
  if (stepLocal_1 < (((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))) - 16)) {
   (*(WrapperStruct00_var_1_8_Pointer)) = (((((*(WrapperStruct00_var_1_10_Pointer))) > (32)) ? ((*(WrapperStruct00_var_1_10_Pointer))) : (32)));
  }
 } else {
  (*(WrapperStruct00_var_1_8_Pointer)) = (((((*(WrapperStruct00_var_1_9_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer)))));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 65535);
 assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 126);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 64);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return ((((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (((((*(WrapperStruct00_var_1_11_Pointer))) > ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))))))) : 1) && ((((*(WrapperStruct00_var_1_1_Pointer)) == 16) || ((*(WrapperStruct00_var_1_11_Pointer)) < (10 / (*(WrapperStruct00_var_1_6_Pointer))))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed char) 5)))) && (((*(WrapperStruct00_var_1_2_Pointer)) || ((*(WrapperStruct00_var_1_11_Pointer)) >= (*(WrapperStruct00_var_1_11_Pointer)))) ? (((*(WrapperStruct00_var_1_11_Pointer)) < (((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))) - 16)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) (((((*(WrapperStruct00_var_1_10_Pointer))) > (32)) ? ((*(WrapperStruct00_var_1_10_Pointer))) : (32))))) : 1) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) (((((*(WrapperStruct00_var_1_9_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))))))))) && (((((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer))) + (*(WrapperStruct00_var_1_14_Pointer))) <= (256.625 * ((((1.875) > ((*(WrapperStruct00_var_1_15_Pointer)))) ? (1.875) : ((*(WrapperStruct00_var_1_15_Pointer))))))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) (((((5) < 0 ) ? -(5) : (5))) + 5))) : 1)
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

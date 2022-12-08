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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch79Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 signed char var_1_3;
 signed char var_1_4;
 signed char var_1_5;
 signed long int var_1_6;
 double var_1_8;
 double var_1_9;
 unsigned short int var_1_10;
 float var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -16,
 0,
 64,
 64,
 -64,
 32.5,
 1.6,
 32,
 15.5,
 0,
 0
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned short int last_1_WrapperStruct00_var_1_10 = 32;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = ((((*(WrapperStruct00_var_1_5_Pointer))) > (last_1_WrapperStruct00_var_1_10)) ? ((*(WrapperStruct00_var_1_5_Pointer))) : (last_1_WrapperStruct00_var_1_10));
 if (stepLocal_0 <= ((*(WrapperStruct00_var_1_4_Pointer)) * (last_1_WrapperStruct00_var_1_10 >> (*(WrapperStruct00_var_1_3_Pointer))))) {
  if ((- (*(WrapperStruct00_var_1_8_Pointer))) >= (*(WrapperStruct00_var_1_9_Pointer))) {
   (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
  } else {
   (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 }
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer));
 if ((*(WrapperStruct00_var_1_11_Pointer)) < (*(WrapperStruct00_var_1_9_Pointer))) {
  if (stepLocal_1 <= (~ ((*(WrapperStruct00_var_1_6_Pointer)) % -32))) {
   (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  } else {
   (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  }
 }
 (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 if (! (*(WrapperStruct00_var_1_12_Pointer))) {
  if (! (*(WrapperStruct00_var_1_12_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_3_Pointer)) + -32);
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) - (((((*(WrapperStruct00_var_1_5_Pointer))) < (16)) ? ((*(WrapperStruct00_var_1_5_Pointer))) : (16))));
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 63);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 126);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 126);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 0);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property() {
 return ((((! (*(WrapperStruct00_var_1_12_Pointer))) ? ((! (*(WrapperStruct00_var_1_12_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_3_Pointer)) + -32))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_4_Pointer)) - (((((*(WrapperStruct00_var_1_5_Pointer))) < (16)) ? ((*(WrapperStruct00_var_1_5_Pointer))) : (16))))))) : 1) && (((((((*(WrapperStruct00_var_1_5_Pointer))) > (last_1_WrapperStruct00_var_1_10)) ? ((*(WrapperStruct00_var_1_5_Pointer))) : (last_1_WrapperStruct00_var_1_10))) <= ((*(WrapperStruct00_var_1_4_Pointer)) * (last_1_WrapperStruct00_var_1_10 >> (*(WrapperStruct00_var_1_3_Pointer))))) ? (((- (*(WrapperStruct00_var_1_8_Pointer))) >= (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_5_Pointer)))))) && (((*(WrapperStruct00_var_1_11_Pointer)) < (*(WrapperStruct00_var_1_9_Pointer))) ? ((((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer))) <= (~ ((*(WrapperStruct00_var_1_6_Pointer)) % -32))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_5_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_13_Pointer))))
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

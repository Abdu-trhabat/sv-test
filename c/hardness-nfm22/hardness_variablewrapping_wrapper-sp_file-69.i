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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch69Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 unsigned long int var_1_4;
 unsigned long int var_1_5;
 signed char var_1_7;
 signed char var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 double var_1_11;
 double var_1_13;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -100,
 0,
 8,
 256,
 500,
 -64,
 -8,
 0,
 0,
 4.625,
 15.5
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer)) < ((((((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_5_Pointer)))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? (((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_3_Pointer)))))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
 } else {
  if ((*(WrapperStruct00_var_1_9_Pointer)) || (*(WrapperStruct00_var_1_10_Pointer))) {
   (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
  } else {
   if ((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_4_Pointer))) {
    (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
   } else {
    (*(WrapperStruct00_var_1_7_Pointer)) = -4;
   }
  }
 }
 unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_5_Pointer));
 unsigned long int stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer)) * (((((*(WrapperStruct00_var_1_3_Pointer))) < ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))));
 if (stepLocal_0 < (*(WrapperStruct00_var_1_5_Pointer))) {
  if (stepLocal_1 > (*(WrapperStruct00_var_1_2_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
  }
 }
 unsigned char stepLocal_3 = (*(WrapperStruct00_var_1_9_Pointer));
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_1_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer));
 if ((((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) == (*(WrapperStruct00_var_1_4_Pointer))) && stepLocal_3) {
  if (! (*(WrapperStruct00_var_1_10_Pointer))) {
   if (stepLocal_2 != (*(WrapperStruct00_var_1_8_Pointer))) {
    (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
   } else {
    (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967295);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967295);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 126);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) * (((((*(WrapperStruct00_var_1_3_Pointer))) < ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))))) < (*(WrapperStruct00_var_1_5_Pointer))) ? (((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_7_Pointer))))) : 1) && (((*(WrapperStruct00_var_1_2_Pointer)) < ((((((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_5_Pointer)))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? (((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_3_Pointer)))))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_8_Pointer)))) : (((*(WrapperStruct00_var_1_9_Pointer)) || (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_8_Pointer)))) : (((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_8_Pointer)))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed char) -4)))))) && (((((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) == (*(WrapperStruct00_var_1_4_Pointer))) && (*(WrapperStruct00_var_1_9_Pointer))) ? ((! (*(WrapperStruct00_var_1_10_Pointer))) ? ((((*(WrapperStruct00_var_1_1_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))) != (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((double) (*(WrapperStruct00_var_1_13_Pointer)))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((double) (*(WrapperStruct00_var_1_13_Pointer))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((double) (*(WrapperStruct00_var_1_13_Pointer))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((double) (*(WrapperStruct00_var_1_13_Pointer)))))
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

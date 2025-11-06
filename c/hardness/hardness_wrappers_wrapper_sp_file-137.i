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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch137Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 signed short int var_1_2;
 signed short int var_1_3;
 signed long int var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 signed char var_1_8;
 signed char var_1_10;
 unsigned char var_1_11;
 double var_1_12;
 double var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 unsigned long int var_1_17;
 unsigned char var_1_18;
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
 16,
 -256,
 -5,
 50,
 4,
 10,
 32,
 1,
 10.5,
 7.2,
 0,
 1,
 1,
 32,
 1
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned long int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
void initially(void) {
}
void step(void) {
 (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
 (*(WrapperStruct00_var_1_17_Pointer)) = 16u;
 (*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
 signed short int stepLocal_1 = (*(WrapperStruct00_var_1_2_Pointer));
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_4_Pointer));
 if (((*(WrapperStruct00_var_1_2_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer))) < stepLocal_0) {
  if (stepLocal_1 <= (*(WrapperStruct00_var_1_4_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_5_Pointer))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer)))));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  }
 } else {
  if ((*(WrapperStruct00_var_1_18_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  }
 }
 if (((*(WrapperStruct00_var_1_12_Pointer)) / 1.3) <= (*(WrapperStruct00_var_1_13_Pointer))) {
  if ((((*(WrapperStruct00_var_1_5_Pointer)) * (*(WrapperStruct00_var_1_17_Pointer))) >= (*(WrapperStruct00_var_1_6_Pointer))) && (*(WrapperStruct00_var_1_18_Pointer))) {
   (*(WrapperStruct00_var_1_11_Pointer)) = (! (*(WrapperStruct00_var_1_14_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
  }
 }
 if ((*(WrapperStruct00_var_1_11_Pointer))) {
  if ((*(WrapperStruct00_var_1_11_Pointer))) {
   (*(WrapperStruct00_var_1_8_Pointer)) = (((((*(WrapperStruct00_var_1_10_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))));
  } else {
   (*(WrapperStruct00_var_1_8_Pointer)) = (((((*(WrapperStruct00_var_1_10_Pointer))) > (2)) ? ((*(WrapperStruct00_var_1_10_Pointer))) : (2)));
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 32767);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 254);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 254);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -126);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 0);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((*(WrapperStruct00_var_1_2_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer))) < (*(WrapperStruct00_var_1_4_Pointer))) ? (((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (((((*(WrapperStruct00_var_1_5_Pointer))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_6_Pointer))))) : ((*(WrapperStruct00_var_1_18_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_6_Pointer)))))) && ((*(WrapperStruct00_var_1_11_Pointer)) ? ((*(WrapperStruct00_var_1_11_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) (((((*(WrapperStruct00_var_1_10_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer))))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) (((((*(WrapperStruct00_var_1_10_Pointer))) > (2)) ? ((*(WrapperStruct00_var_1_10_Pointer))) : (2)))))) : 1)) && ((((*(WrapperStruct00_var_1_12_Pointer)) / 1.3) <= (*(WrapperStruct00_var_1_13_Pointer))) ? (((((*(WrapperStruct00_var_1_5_Pointer)) * (*(WrapperStruct00_var_1_17_Pointer))) >= (*(WrapperStruct00_var_1_6_Pointer))) && (*(WrapperStruct00_var_1_18_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_14_Pointer))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_15_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_15_Pointer))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned long int) 16u))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_14_Pointer))))
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

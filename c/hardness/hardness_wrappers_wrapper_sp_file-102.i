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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch102Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 double var_1_2;
 double var_1_3;
 unsigned long int var_1_6;
 signed long int var_1_7;
 unsigned long int var_1_9;
 unsigned long int var_1_10;
 signed long int var_1_11;
 signed long int var_1_12;
 double var_1_13;
 unsigned short int var_1_14;
 double var_1_15;
 signed long int var_1_16;
 unsigned char var_1_17;
 unsigned char var_1_18;
 signed long int var_1_19;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 256,
 9999999.6,
 9999999999999.6,
 4,
 5,
 2796236537,
 64,
 1656367899,
 10000,
 100000000000.825,
 64,
 31.8,
 100,
 1,
 0,
 1
};
unsigned long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
signed long int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
double last_1_WrapperStruct00_var_1_13 = 100000000000.825;
void initially(void) {
}
void step(void) {
 if ((((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))) * last_1_WrapperStruct00_var_1_13) <= last_1_WrapperStruct00_var_1_13) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_6_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
 }
 unsigned long int stepLocal_1 = (60423 - (*(WrapperStruct00_var_1_14_Pointer))) | (*(WrapperStruct00_var_1_1_Pointer));
 unsigned long int stepLocal_0 = (*(WrapperStruct00_var_1_6_Pointer));
 if (stepLocal_1 <= (((((*(WrapperStruct00_var_1_10_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))))) {
  if ((*(WrapperStruct00_var_1_9_Pointer)) != stepLocal_0) {
   (*(WrapperStruct00_var_1_13_Pointer)) = ((31.5 - (*(WrapperStruct00_var_1_15_Pointer))) + 63.3);
  } else {
   (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
  }
 }
 if ((*(WrapperStruct00_var_1_1_Pointer)) < ((*(WrapperStruct00_var_1_1_Pointer)) & ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = (((((((*(WrapperStruct00_var_1_11_Pointer)) - 128) - 2)) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((((*(WrapperStruct00_var_1_11_Pointer)) - 128) - 2)) : ((*(WrapperStruct00_var_1_12_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 }
 (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
 (*(WrapperStruct00_var_1_19_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 4294967294);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 4294967295);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 1073741822);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 2147483646);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483646);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 32767);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 0);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
}
int property(void) {
 return (((((((((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))) * last_1_WrapperStruct00_var_1_13) <= last_1_WrapperStruct00_var_1_13) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (((((*(WrapperStruct00_var_1_6_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_6_Pointer))))) && (((*(WrapperStruct00_var_1_1_Pointer)) < ((*(WrapperStruct00_var_1_1_Pointer)) & ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) (((((((*(WrapperStruct00_var_1_11_Pointer)) - 128) - 2)) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((((*(WrapperStruct00_var_1_11_Pointer)) - 128) - 2)) : ((*(WrapperStruct00_var_1_12_Pointer))))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_12_Pointer)))))) && ((((60423 - (*(WrapperStruct00_var_1_14_Pointer))) | (*(WrapperStruct00_var_1_1_Pointer))) <= (((((*(WrapperStruct00_var_1_10_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))))) ? (((*(WrapperStruct00_var_1_9_Pointer)) != (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) ((31.5 - (*(WrapperStruct00_var_1_15_Pointer))) + 63.3))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) (*(WrapperStruct00_var_1_15_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_12_Pointer))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_18_Pointer))))) && ((*(WrapperStruct00_var_1_19_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_11_Pointer))))
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

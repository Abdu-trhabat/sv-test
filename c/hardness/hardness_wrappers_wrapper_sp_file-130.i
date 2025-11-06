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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 signed long int var_1_2;
 signed long int var_1_3;
 signed long int var_1_4;
 signed long int var_1_5;
 signed char var_1_6;
 signed long int var_1_7;
 double var_1_8;
 double var_1_9;
 double var_1_10;
 signed long int var_1_12;
 signed long int var_1_13;
 double var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 double var_1_17;
 signed char var_1_18;
 signed char var_1_19;
 double var_1_20;
 double var_1_21;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -128,
 256,
 0,
 4,
 16,
 -16,
 4,
 10.9,
 32.6,
 4.5,
 64,
 1,
 128.2,
 1,
 1,
 15.25,
 100,
 5,
 15.125,
 25.25
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
double* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
signed char* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
double* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
double* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);
double last_1_WrapperStruct00_var_1_14 = 128.2;
void initially(void) {
}
void step(void) {
 if (((*(WrapperStruct00_var_1_8_Pointer)) - (((((*(WrapperStruct00_var_1_9_Pointer))) > ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))))) <= last_1_WrapperStruct00_var_1_14) {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((((((*(WrapperStruct00_var_1_12_Pointer))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer))))) - 50);
 }
 signed long int stepLocal_3 = (*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer));
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_18_Pointer)) - (100 - (*(WrapperStruct00_var_1_19_Pointer)));
 if ((*(WrapperStruct00_var_1_15_Pointer))) {
  if ((*(WrapperStruct00_var_1_12_Pointer)) <= stepLocal_3) {
   if ((*(WrapperStruct00_var_1_16_Pointer))) {
    (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
   } else {
    if (stepLocal_2 <= (*(WrapperStruct00_var_1_7_Pointer))) {
     (*(WrapperStruct00_var_1_14_Pointer)) = ((*(WrapperStruct00_var_1_20_Pointer)) + (*(WrapperStruct00_var_1_21_Pointer)));
    } else {
     (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
    }
   }
  } else {
   (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_20_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_20_Pointer));
 }
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_2_Pointer)) & (*(WrapperStruct00_var_1_3_Pointer));
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_4_Pointer));
 if (stepLocal_1 <= ((*(WrapperStruct00_var_1_4_Pointer)) / ((((-25) < ((*(WrapperStruct00_var_1_5_Pointer)))) ? (-25) : ((*(WrapperStruct00_var_1_5_Pointer))))))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
 } else {
  if ((*(WrapperStruct00_var_1_5_Pointer)) != stepLocal_0) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = 5;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 126);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483646);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483646);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_17 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 127);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 63);
 WrapperStruct00.var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_20 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_20 <= -1.0e-20F) || (WrapperStruct00.var_1_20 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_20 >= 1.0e-20F ));
 WrapperStruct00.var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_21 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_21 <= -1.0e-20F) || (WrapperStruct00.var_1_21 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_21 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) & (*(WrapperStruct00_var_1_3_Pointer))) <= ((*(WrapperStruct00_var_1_4_Pointer)) / ((((-25) < ((*(WrapperStruct00_var_1_5_Pointer)))) ? (-25) : ((*(WrapperStruct00_var_1_5_Pointer))))))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_6_Pointer)))) : (((*(WrapperStruct00_var_1_5_Pointer)) != (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) 5)))) && ((((*(WrapperStruct00_var_1_8_Pointer)) - (((((*(WrapperStruct00_var_1_9_Pointer))) > ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))))) <= last_1_WrapperStruct00_var_1_14) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) ((((((*(WrapperStruct00_var_1_12_Pointer))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer))))) - 50))) : 1)) && ((*(WrapperStruct00_var_1_15_Pointer)) ? (((*(WrapperStruct00_var_1_12_Pointer)) <= ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer)) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((double) (*(WrapperStruct00_var_1_17_Pointer)))) : ((((*(WrapperStruct00_var_1_18_Pointer)) - (100 - (*(WrapperStruct00_var_1_19_Pointer)))) <= (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((double) ((*(WrapperStruct00_var_1_20_Pointer)) + (*(WrapperStruct00_var_1_21_Pointer))))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((double) (*(WrapperStruct00_var_1_17_Pointer)))))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((double) (*(WrapperStruct00_var_1_20_Pointer))))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((double) (*(WrapperStruct00_var_1_20_Pointer)))))
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

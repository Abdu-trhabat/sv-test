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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch30Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_2;
 signed short int var_1_3;
 signed short int var_1_4;
 signed short int var_1_5;
 signed short int var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 signed long int var_1_10;
 float var_1_11;
 signed short int var_1_12;
 signed short int var_1_13;
 signed short int var_1_14;
 float var_1_15;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 64,
 0,
 -256,
 -1000,
 8,
 -32,
 128,
 10,
 2,
 0,
 32.5,
 -256,
 16,
 8,
 5.2
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int last_1_WrapperStruct00_var_1_10 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_10;
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  if (stepLocal_0 > ((last_1_WrapperStruct00_var_1_10 / (*(WrapperStruct00_var_1_5_Pointer))) % (*(WrapperStruct00_var_1_6_Pointer)))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (((((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer)))))) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer)))))) : ((*(WrapperStruct00_var_1_9_Pointer)))));
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 }
 signed short int stepLocal_2 = (*(WrapperStruct00_var_1_5_Pointer));
 signed short int stepLocal_1 = (*(WrapperStruct00_var_1_6_Pointer));
 if (((*(WrapperStruct00_var_1_1_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer))) < stepLocal_1) {
  if ((*(WrapperStruct00_var_1_2_Pointer))) {
   if (stepLocal_2 > (*(WrapperStruct00_var_1_3_Pointer))) {
    (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 }
 unsigned char stepLocal_5 = (*(WrapperStruct00_var_1_13_Pointer)) >= (*(WrapperStruct00_var_1_8_Pointer));
 signed short int stepLocal_4 = (*(WrapperStruct00_var_1_12_Pointer));
 signed short int stepLocal_3 = (*(WrapperStruct00_var_1_4_Pointer));
 if ((*(WrapperStruct00_var_1_3_Pointer)) > stepLocal_4) {
  if (stepLocal_3 <= ((((((*(WrapperStruct00_var_1_9_Pointer))) > ((*(WrapperStruct00_var_1_1_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_1_Pointer))))) << ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))))) {
   if (stepLocal_5 || (*(WrapperStruct00_var_1_2_Pointer))) {
    (*(WrapperStruct00_var_1_11_Pointer)) = 255.75f;
   }
  }
 } else {
  (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 254);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 254);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 32767);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 11);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 23);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 11);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property(void) {
 return (((*(WrapperStruct00_var_1_2_Pointer)) ? ((last_1_WrapperStruct00_var_1_10 > ((last_1_WrapperStruct00_var_1_10 / (*(WrapperStruct00_var_1_5_Pointer))) % (*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (((((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer)))))) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer)))))) : ((*(WrapperStruct00_var_1_9_Pointer))))))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_9_Pointer))))) && ((((*(WrapperStruct00_var_1_1_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer))) < (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_2_Pointer)) ? (((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_3_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_8_Pointer))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_9_Pointer)))))) && (((*(WrapperStruct00_var_1_3_Pointer)) > (*(WrapperStruct00_var_1_12_Pointer))) ? (((*(WrapperStruct00_var_1_4_Pointer)) <= ((((((*(WrapperStruct00_var_1_9_Pointer))) > ((*(WrapperStruct00_var_1_1_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_1_Pointer))))) << ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))))) ? ((((*(WrapperStruct00_var_1_13_Pointer)) >= (*(WrapperStruct00_var_1_8_Pointer))) || (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((float) 255.75f)) : 1) : 1) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((float) (*(WrapperStruct00_var_1_15_Pointer)))))
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

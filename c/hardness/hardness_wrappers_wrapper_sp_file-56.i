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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 signed short int var_1_2;
 signed char var_1_3;
 signed long int var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 double var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 double var_1_13;
 unsigned char var_1_14;
 signed short int var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
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
 1,
 5,
 10,
 32,
 128,
 16,
 2,
 8,
 10.5,
 0,
 0,
 0,
 99.25,
 64,
 4,
 0,
 0,
 1
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
void initially(void) {
}
void step(void) {
 if (((*(WrapperStruct00_var_1_2_Pointer)) >> (*(WrapperStruct00_var_1_3_Pointer))) >= (*(WrapperStruct00_var_1_4_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_3_Pointer))) < (((*(WrapperStruct00_var_1_5_Pointer)) - (((((*(WrapperStruct00_var_1_6_Pointer))) > ((*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer)))))))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : (((*(WrapperStruct00_var_1_5_Pointer)) - (((((*(WrapperStruct00_var_1_6_Pointer))) > ((*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer)))))))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((((((*(WrapperStruct00_var_1_6_Pointer))) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) + ((((((*(WrapperStruct00_var_1_8_Pointer)) + 1)) < ((*(WrapperStruct00_var_1_7_Pointer)))) ? (((*(WrapperStruct00_var_1_8_Pointer)) + 1)) : ((*(WrapperStruct00_var_1_7_Pointer))))));
 }
 unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_6_Pointer));
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_12_Pointer));
 if ((*(WrapperStruct00_var_1_10_Pointer))) {
  if ((*(WrapperStruct00_var_1_11_Pointer)) || stepLocal_0) {
   if ((*(WrapperStruct00_var_1_4_Pointer)) > stepLocal_1) {
    (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
   }
  }
 }
 if (((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer))) >= (*(WrapperStruct00_var_1_7_Pointer))) {
  (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
 }
 if ((*(WrapperStruct00_var_1_12_Pointer)) || (*(WrapperStruct00_var_1_10_Pointer))) {
  if ((*(WrapperStruct00_var_1_15_Pointer)) >= ((*(WrapperStruct00_var_1_8_Pointer)) << (*(WrapperStruct00_var_1_3_Pointer)))) {
   if ((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_7_Pointer))) {
    (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
   } else {
    (*(WrapperStruct00_var_1_16_Pointer)) = 1;
   }
  } else {
   (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 32767);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 14);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 254);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 127);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 127);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 64);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 32767);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 0);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_2_Pointer)) >> (*(WrapperStruct00_var_1_3_Pointer))) >= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (((((*(WrapperStruct00_var_1_3_Pointer))) < (((*(WrapperStruct00_var_1_5_Pointer)) - (((((*(WrapperStruct00_var_1_6_Pointer))) > ((*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer)))))))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : (((*(WrapperStruct00_var_1_5_Pointer)) - (((((*(WrapperStruct00_var_1_6_Pointer))) > ((*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer))))))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((((((*(WrapperStruct00_var_1_6_Pointer))) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) + ((((((*(WrapperStruct00_var_1_8_Pointer)) + 1)) < ((*(WrapperStruct00_var_1_7_Pointer)))) ? (((*(WrapperStruct00_var_1_8_Pointer)) + 1)) : ((*(WrapperStruct00_var_1_7_Pointer))))))))) && ((*(WrapperStruct00_var_1_10_Pointer)) ? (((*(WrapperStruct00_var_1_11_Pointer)) || (*(WrapperStruct00_var_1_12_Pointer))) ? (((*(WrapperStruct00_var_1_4_Pointer)) > (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((double) (*(WrapperStruct00_var_1_13_Pointer)))) : 1) : 1) : 1)) && ((((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer))) >= (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_6_Pointer)))) : 1)) && (((*(WrapperStruct00_var_1_12_Pointer)) || (*(WrapperStruct00_var_1_10_Pointer))) ? (((*(WrapperStruct00_var_1_15_Pointer)) >= ((*(WrapperStruct00_var_1_8_Pointer)) << (*(WrapperStruct00_var_1_3_Pointer)))) ? (((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_17_Pointer)))) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned char) 1))) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_18_Pointer))))) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_17_Pointer)))))
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

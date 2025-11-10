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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 signed long int var_1_4;
 signed long int var_1_5;
 signed long int var_1_6;
 unsigned short int var_1_7;
 unsigned short int var_1_8;
 double var_1_9;
 double var_1_10;
 double var_1_11;
 unsigned char var_1_12;
 signed short int var_1_13;
 unsigned char var_1_14;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 4,
 1,
 1,
 5,
 100000,
 0,
 100,
 1,
 255.75,
 4.35,
 2.75,
 5,
 8,
 64
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer));
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_3_Pointer));
 if ((*(WrapperStruct00_var_1_2_Pointer)) || stepLocal_0) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((256 + (*(WrapperStruct00_var_1_4_Pointer))) - (((((*(WrapperStruct00_var_1_5_Pointer))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))));
 } else {
  if (stepLocal_1 <= (*(WrapperStruct00_var_1_6_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  }
 }
 unsigned char stepLocal_3 = (*(WrapperStruct00_var_1_2_Pointer));
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_4_Pointer));
 if ((*(WrapperStruct00_var_1_3_Pointer))) {
  if ((*(WrapperStruct00_var_1_1_Pointer)) >= stepLocal_2) {
   if ((((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_6_Pointer)) * (*(WrapperStruct00_var_1_4_Pointer)))) && stepLocal_3) {
    (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
   } else {
    (*(WrapperStruct00_var_1_7_Pointer)) = 5;
   }
  } else {
   (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
  }
 }
 (*(WrapperStruct00_var_1_9_Pointer)) = (((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer)))));
 unsigned char stepLocal_5 = (*(WrapperStruct00_var_1_3_Pointer));
 signed long int stepLocal_4 = (*(WrapperStruct00_var_1_5_Pointer));
 if (((*(WrapperStruct00_var_1_4_Pointer)) * ((*(WrapperStruct00_var_1_7_Pointer)) / (*(WrapperStruct00_var_1_13_Pointer)))) >= stepLocal_4) {
  if (stepLocal_5 && ((*(WrapperStruct00_var_1_9_Pointer)) < (*(WrapperStruct00_var_1_10_Pointer)))) {
   (*(WrapperStruct00_var_1_12_Pointer)) = 5;
  } else {
   (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1073741823);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483646);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483646);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 65534);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_13 != 0);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) || (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((256 + (*(WrapperStruct00_var_1_4_Pointer))) - (((((*(WrapperStruct00_var_1_5_Pointer))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer)))))))) : (((*(WrapperStruct00_var_1_4_Pointer)) <= (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_6_Pointer)))) : 1)) && ((*(WrapperStruct00_var_1_3_Pointer)) ? (((*(WrapperStruct00_var_1_1_Pointer)) >= (*(WrapperStruct00_var_1_4_Pointer))) ? (((((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_6_Pointer)) * (*(WrapperStruct00_var_1_4_Pointer)))) && (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_8_Pointer)))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned short int) 5))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_8_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_9_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer)))))))) && ((((*(WrapperStruct00_var_1_4_Pointer)) * ((*(WrapperStruct00_var_1_7_Pointer)) / (*(WrapperStruct00_var_1_13_Pointer)))) >= (*(WrapperStruct00_var_1_5_Pointer))) ? (((*(WrapperStruct00_var_1_3_Pointer)) && ((*(WrapperStruct00_var_1_9_Pointer)) < (*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) 5)) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_14_Pointer))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_14_Pointer)))))
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

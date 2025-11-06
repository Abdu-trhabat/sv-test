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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 double var_1_4;
 double var_1_5;
 double var_1_6;
 double var_1_7;
 double var_1_8;
 double var_1_9;
 unsigned short int var_1_10;
 unsigned short int var_1_11;
 unsigned short int var_1_12;
 double var_1_13;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 8.8,
 0,
 1,
 127.25,
 63.5,
 1.974,
 15.75,
 10.25,
 9.5,
 32,
 200,
 1,
 32.4
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
 if (stepLocal_0 && (! (*(WrapperStruct00_var_1_3_Pointer)))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_5_Pointer))))) + 7.5);
 }
 if ((*(WrapperStruct00_var_1_1_Pointer)) > ((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_5_Pointer)))) {
  if ((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_5_Pointer))) {
   if ((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_4_Pointer))) {
    (*(WrapperStruct00_var_1_6_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + ((((((*(WrapperStruct00_var_1_7_Pointer))) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer))))) - (*(WrapperStruct00_var_1_9_Pointer))));
   } else {
    (*(WrapperStruct00_var_1_6_Pointer)) = (((((*(WrapperStruct00_var_1_7_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer)))));
   }
  } else {
   (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
 }
 if ((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_8_Pointer))) {
  (*(WrapperStruct00_var_1_10_Pointer)) = (((29089 - (*(WrapperStruct00_var_1_11_Pointer))) - 8) + 16);
 } else {
  (*(WrapperStruct00_var_1_10_Pointer)) = (((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))));
 }
 (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 8192);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) && (! (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) ((((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_5_Pointer))))) + 7.5))) : 1) && (((*(WrapperStruct00_var_1_1_Pointer)) > ((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_5_Pointer)))) ? (((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_5_Pointer))) ? (((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((double) ((*(WrapperStruct00_var_1_4_Pointer)) + ((((((*(WrapperStruct00_var_1_7_Pointer))) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer))))) - (*(WrapperStruct00_var_1_9_Pointer)))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_7_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer)))))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((double) (*(WrapperStruct00_var_1_8_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((double) (*(WrapperStruct00_var_1_4_Pointer)))))) && (((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned short int) (((29089 - (*(WrapperStruct00_var_1_11_Pointer))) - 8) + 16))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned short int) (((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer))))))))) && ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) (*(WrapperStruct00_var_1_7_Pointer))))
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

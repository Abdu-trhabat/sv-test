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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch101Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 double var_1_9;
 double var_1_10;
 double var_1_11;
 double var_1_12;
 double var_1_13;
 unsigned short int var_1_14;
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
 1,
 128,
 2,
 0,
 1,
 1,
 200,
 64.2,
 127.5,
 4.4,
 9999999999.25,
 16.25,
 5
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_5_Pointer)) + 128;
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_3_Pointer));
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_3_Pointer)) - ((*(WrapperStruct00_var_1_4_Pointer)) + ((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer)))));
 } else {
  if ((*(WrapperStruct00_var_1_7_Pointer))) {
   if (stepLocal_0 > (*(WrapperStruct00_var_1_6_Pointer))) {
    if (stepLocal_1 >= (*(WrapperStruct00_var_1_4_Pointer))) {
     (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
    } else {
     (*(WrapperStruct00_var_1_1_Pointer)) = 4;
    }
   } else {
    (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
  }
 }
 if ((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_4_Pointer))) {
  (*(WrapperStruct00_var_1_9_Pointer)) = (((((*(WrapperStruct00_var_1_10_Pointer))) < ((((((((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) : ((*(WrapperStruct00_var_1_13_Pointer))))))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((((((((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) : ((*(WrapperStruct00_var_1_13_Pointer))))))));
 } else {
  if ((*(WrapperStruct00_var_1_2_Pointer))) {
   (*(WrapperStruct00_var_1_9_Pointer)) = 2.5;
  } else {
   (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
  }
 }
 if (((*(WrapperStruct00_var_1_1_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) > (-1000 % ((((16) < 0 ) ? -(16) : (16))))) {
  (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_1_Pointer));
 } else {
  (*(WrapperStruct00_var_1_14_Pointer)) = 32;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 254);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 64);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 31);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 254);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_3_Pointer)) - ((*(WrapperStruct00_var_1_4_Pointer)) + ((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer))))))) : ((*(WrapperStruct00_var_1_7_Pointer)) ? (((*(WrapperStruct00_var_1_3_Pointer)) > (*(WrapperStruct00_var_1_6_Pointer))) ? ((((*(WrapperStruct00_var_1_5_Pointer)) + 128) >= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) 4))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_3_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_8_Pointer)))))) && (((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_10_Pointer))) < ((((((((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) : ((*(WrapperStruct00_var_1_13_Pointer))))))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((((((((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) : ((*(WrapperStruct00_var_1_13_Pointer)))))))))) : ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((double) 2.5)) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((double) (*(WrapperStruct00_var_1_13_Pointer))))))) && ((((*(WrapperStruct00_var_1_1_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) > (-1000 % ((((16) < 0 ) ? -(16) : (16))))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_1_Pointer)))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned short int) 32)))
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

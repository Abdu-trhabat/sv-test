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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch50Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 8.875;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 63.5;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 16.6;
double* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 127.8;
double* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 1000;
unsigned long int* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 3315050863;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_14 = 1923971610;
unsigned long int* var_1_14_Pointer = &(var_1_14);
unsigned long int var_1_15 = 32;
unsigned long int* var_1_15_Pointer = &(var_1_15);
unsigned short int var_1_16 = 4;
unsigned short int* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 55587;
unsigned short int* var_1_17_Pointer = &(var_1_17);
unsigned short int var_1_18 = 10;
unsigned short int* var_1_18_Pointer = &(var_1_18);
unsigned short int var_1_19 = 32;
unsigned short int* var_1_19_Pointer = &(var_1_19);
unsigned long int var_1_20 = 5;
unsigned long int* var_1_20_Pointer = &(var_1_20);
double var_1_21 = 1.125;
double* var_1_21_Pointer = &(var_1_21);
double var_1_22 = 256.4;
double* var_1_22_Pointer = &(var_1_22);
void initially(void) {
}
void step(void) {
 if ((*(var_1_4_Pointer)) <= (*(var_1_5_Pointer))) {
  (*(var_1_16_Pointer)) = (((*(var_1_17_Pointer)) - (*(var_1_18_Pointer))) - (*(var_1_19_Pointer)));
 }
 (*(var_1_20_Pointer)) = (*(var_1_14_Pointer));
 (*(var_1_21_Pointer)) = (*(var_1_22_Pointer));
 if ((*(var_1_21_Pointer)) > (*(var_1_5_Pointer))) {
  if ((*(var_1_21_Pointer)) > ((*(var_1_5_Pointer)) * ((*(var_1_4_Pointer)) - 4.5))) {
   (*(var_1_12_Pointer)) = ((*(var_1_13_Pointer)) - ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))));
  }
 } else {
  (*(var_1_12_Pointer)) = (*(var_1_14_Pointer));
 }
 unsigned long int stepLocal_0 = ((((*(var_1_12_Pointer))) > ((*(var_1_20_Pointer)))) ? ((*(var_1_12_Pointer))) : ((*(var_1_20_Pointer))));
 if (((((((*(var_1_2_Pointer)) + (*(var_1_3_Pointer)))) < (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))))) ? (((*(var_1_2_Pointer)) + (*(var_1_3_Pointer)))) : (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))))) != 31.9) {
  if (stepLocal_0 < (*(var_1_20_Pointer))) {
   if ((*(var_1_9_Pointer))) {
    (*(var_1_1_Pointer)) = (*(var_1_10_Pointer));
   } else {
    (*(var_1_1_Pointer)) = (*(var_1_11_Pointer));
   }
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_10_Pointer));
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_11_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 1073741823);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 49150);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 16383);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((((*(var_1_2_Pointer)) + (*(var_1_3_Pointer)))) < (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))))) ? (((*(var_1_2_Pointer)) + (*(var_1_3_Pointer)))) : (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))))) != 31.9) ? (((((((*(var_1_12_Pointer))) > ((*(var_1_20_Pointer)))) ? ((*(var_1_12_Pointer))) : ((*(var_1_20_Pointer))))) < (*(var_1_20_Pointer))) ? ((*(var_1_9_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_10_Pointer)))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_11_Pointer))))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_10_Pointer))))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_11_Pointer))))) && (((*(var_1_21_Pointer)) > (*(var_1_5_Pointer))) ? (((*(var_1_21_Pointer)) > ((*(var_1_5_Pointer)) * ((*(var_1_4_Pointer)) - 4.5))) ? ((*(var_1_12_Pointer)) == ((unsigned long int) ((*(var_1_13_Pointer)) - ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer)))))) : 1) : ((*(var_1_12_Pointer)) == ((unsigned long int) (*(var_1_14_Pointer)))))) && (((*(var_1_4_Pointer)) <= (*(var_1_5_Pointer))) ? ((*(var_1_16_Pointer)) == ((unsigned short int) (((*(var_1_17_Pointer)) - (*(var_1_18_Pointer))) - (*(var_1_19_Pointer))))) : 1)) && ((*(var_1_20_Pointer)) == ((unsigned long int) (*(var_1_14_Pointer))))) && ((*(var_1_21_Pointer)) == ((double) (*(var_1_22_Pointer))))
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

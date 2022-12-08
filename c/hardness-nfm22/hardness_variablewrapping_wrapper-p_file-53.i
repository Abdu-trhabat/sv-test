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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch53Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
unsigned long int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_3 = 1456677701;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_4 = 1000000000;
unsigned long int* var_1_4_Pointer = &(var_1_4);
unsigned long int var_1_5 = 1;
unsigned long int* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 256.5;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 8.8;
double* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 1;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned short int var_1_12 = 16;
unsigned short int* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 3110219175;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned short int var_1_14 = 128;
unsigned short int* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 1;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 (*(var_1_6_Pointer)) = (*(var_1_7_Pointer));
 if ((*(var_1_5_Pointer)) <= ((*(var_1_13_Pointer)) - (*(var_1_4_Pointer)))) {
  (*(var_1_12_Pointer)) = (((((*(var_1_14_Pointer))) < 0 ) ? -((*(var_1_14_Pointer))) : ((*(var_1_14_Pointer)))));
 }
 if (((*(var_1_9_Pointer)) * 16.5f) > (*(var_1_10_Pointer))) {
  (*(var_1_15_Pointer)) = (! (*(var_1_11_Pointer)));
 } else {
  (*(var_1_15_Pointer)) = ((*(var_1_11_Pointer)) && (*(var_1_16_Pointer)));
 }
 (*(var_1_1_Pointer)) = ((*(var_1_12_Pointer)) + ((*(var_1_3_Pointer)) - ((*(var_1_4_Pointer)) - (*(var_1_12_Pointer)))));
 signed long int stepLocal_1 = ((((*(var_1_12_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer))));
 unsigned long int stepLocal_0 = (*(var_1_3_Pointer));
 if (stepLocal_1 != (((((*(var_1_4_Pointer))) < ((*(var_1_3_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_3_Pointer)))))) {
  if ((*(var_1_9_Pointer)) == (*(var_1_10_Pointer))) {
   if ((*(var_1_6_Pointer))) {
    if (stepLocal_0 >= (*(var_1_12_Pointer))) {
     (*(var_1_8_Pointer)) = ((*(var_1_7_Pointer)) || (*(var_1_11_Pointer)));
    } else {
     (*(var_1_8_Pointer)) = (*(var_1_7_Pointer));
    }
   }
  }
 } else {
  (*(var_1_8_Pointer)) = (*(var_1_11_Pointer));
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 1073741823);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 536870911);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 536870911);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967295);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
}
void updateLastVariables() {
}
int property() {
 return (((((*(var_1_1_Pointer)) == ((unsigned long int) ((*(var_1_12_Pointer)) + ((*(var_1_3_Pointer)) - ((*(var_1_4_Pointer)) - (*(var_1_12_Pointer))))))) && ((*(var_1_6_Pointer)) == ((unsigned char) (*(var_1_7_Pointer))))) && (((((((*(var_1_12_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer))))) != (((((*(var_1_4_Pointer))) < ((*(var_1_3_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_3_Pointer)))))) ? (((*(var_1_9_Pointer)) == (*(var_1_10_Pointer))) ? ((*(var_1_6_Pointer)) ? (((*(var_1_3_Pointer)) >= (*(var_1_12_Pointer))) ? ((*(var_1_8_Pointer)) == ((unsigned char) ((*(var_1_7_Pointer)) || (*(var_1_11_Pointer))))) : ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_7_Pointer))))) : 1) : 1) : ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_11_Pointer)))))) && (((*(var_1_5_Pointer)) <= ((*(var_1_13_Pointer)) - (*(var_1_4_Pointer)))) ? ((*(var_1_12_Pointer)) == ((unsigned short int) (((((*(var_1_14_Pointer))) < 0 ) ? -((*(var_1_14_Pointer))) : ((*(var_1_14_Pointer))))))) : 1)) && ((((*(var_1_9_Pointer)) * 16.5f) > (*(var_1_10_Pointer))) ? ((*(var_1_15_Pointer)) == ((unsigned char) (! (*(var_1_11_Pointer))))) : ((*(var_1_15_Pointer)) == ((unsigned char) ((*(var_1_11_Pointer)) && (*(var_1_16_Pointer))))))
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

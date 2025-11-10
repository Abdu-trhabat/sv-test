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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 4;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 52712;
unsigned short int* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 25;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned long int var_1_5 = 64;
unsigned long int* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 32.5;
double* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = -2;
signed char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 128.5;
double* var_1_10_Pointer = &(var_1_10);
unsigned long int last_1_var_1_5 = 64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = 4;
 unsigned short int stepLocal_1 = (*(var_1_4_Pointer));
 unsigned short int stepLocal_0 = (*(var_1_3_Pointer));
 if ((*(var_1_2_Pointer))) {
  (*(var_1_1_Pointer)) = ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer)));
 } else {
  if ((*(var_1_3_Pointer)) == stepLocal_1) {
   if ((*(var_1_3_Pointer)) < stepLocal_2) {
    (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
   } else {
    if ((- 4) < stepLocal_0) {
     (*(var_1_1_Pointer)) = (((((*(var_1_3_Pointer))) < ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer)))));
    } else {
     (*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
    }
   }
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
  }
 }
 unsigned short int stepLocal_4 = (*(var_1_4_Pointer));
 unsigned short int stepLocal_3 = (*(var_1_3_Pointer));
 if ((*(var_1_3_Pointer)) < stepLocal_4) {
  if (last_1_var_1_5 < stepLocal_3) {
   (*(var_1_5_Pointer)) = ((*(var_1_4_Pointer)) + last_1_var_1_5);
  } else {
   (*(var_1_5_Pointer)) = last_1_var_1_5;
  }
 }
 unsigned char stepLocal_6 = (*(var_1_2_Pointer));
 unsigned long int stepLocal_5 = ~ ((*(var_1_5_Pointer)) + (*(var_1_4_Pointer)));
 if (((*(var_1_3_Pointer)) % (*(var_1_7_Pointer))) < stepLocal_5) {
  if (stepLocal_6 && ((*(var_1_8_Pointer)) && (*(var_1_9_Pointer)))) {
   (*(var_1_6_Pointer)) = (*(var_1_10_Pointer));
  }
 } else {
  (*(var_1_6_Pointer)) = (*(var_1_10_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 32767);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_5 = var_1_5;
}
int property(void) {
 return (((*(var_1_2_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned short int) ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))))) : (((*(var_1_3_Pointer)) == (*(var_1_4_Pointer))) ? (((*(var_1_3_Pointer)) < 4) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_4_Pointer)))) : (((- 4) < (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (((((*(var_1_3_Pointer))) < ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer))))))) : ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_3_Pointer)))))) : ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_4_Pointer)))))) && (((*(var_1_3_Pointer)) < (*(var_1_4_Pointer))) ? ((last_1_var_1_5 < (*(var_1_3_Pointer))) ? ((*(var_1_5_Pointer)) == ((unsigned long int) ((*(var_1_4_Pointer)) + last_1_var_1_5))) : ((*(var_1_5_Pointer)) == ((unsigned long int) last_1_var_1_5))) : 1)) && ((((*(var_1_3_Pointer)) % (*(var_1_7_Pointer))) < (~ ((*(var_1_5_Pointer)) + (*(var_1_4_Pointer))))) ? (((*(var_1_2_Pointer)) && ((*(var_1_8_Pointer)) && (*(var_1_9_Pointer)))) ? ((*(var_1_6_Pointer)) == ((double) (*(var_1_10_Pointer)))) : 1) : ((*(var_1_6_Pointer)) == ((double) (*(var_1_10_Pointer)))))
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

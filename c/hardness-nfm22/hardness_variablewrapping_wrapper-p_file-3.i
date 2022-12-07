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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = -64;
signed long int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = -5;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 500;
signed long int* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = -5;
signed long int* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = -100;
signed long int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 1;
unsigned char* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 127.5;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 15.75;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = -0.5;
double* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 5.25;
double* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 8.5;
double* var_1_16_Pointer = &(var_1_16);
unsigned char last_1_var_1_11 = 1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = last_1_var_1_11;
 if (! last_1_var_1_11) {
  if (last_1_var_1_11 && stepLocal_0) {
   (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) || (*(var_1_5_Pointer)));
  }
 }
 signed long int stepLocal_2 = (*(var_1_7_Pointer));
 signed long int stepLocal_1 = (*(var_1_10_Pointer));
 if ((*(var_1_8_Pointer)) <= stepLocal_2) {
  if (stepLocal_1 >= (*(var_1_9_Pointer))) {
   (*(var_1_11_Pointer)) = (! (*(var_1_5_Pointer)));
  } else {
   (*(var_1_11_Pointer)) = ((*(var_1_1_Pointer)) || (! (*(var_1_5_Pointer))));
  }
 }
 if (! (*(var_1_11_Pointer))) {
  (*(var_1_6_Pointer)) = ((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)));
 } else {
  (*(var_1_6_Pointer)) = (((((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer))))) + (*(var_1_10_Pointer))) + (*(var_1_7_Pointer)));
 }
 if ((*(var_1_4_Pointer))) {
  (*(var_1_12_Pointer)) = ((((((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))) + (*(var_1_15_Pointer)))) < ((((((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))) < 0 ) ? -((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))) : ((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))))))) ? (((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))) + (*(var_1_15_Pointer)))) : ((((((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))) < 0 ) ? -((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))) : ((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))))))));
 } else {
  (*(var_1_12_Pointer)) = (*(var_1_15_Pointer));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -1073741823);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1073741823);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -536870912);
 assume_abort_if_not(var_1_9 <= 536870912);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -536870911);
 assume_abort_if_not(var_1_10 <= 536870911);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_11 = var_1_11;
}
int property() {
 return ((((! last_1_var_1_11) ? ((last_1_var_1_11 && last_1_var_1_11) ? ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_4_Pointer)) || (*(var_1_5_Pointer))))) : 1) : 1) && ((! (*(var_1_11_Pointer))) ? ((*(var_1_6_Pointer)) == ((signed long int) ((*(var_1_7_Pointer)) + (*(var_1_8_Pointer))))) : ((*(var_1_6_Pointer)) == ((signed long int) (((((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer))))) + (*(var_1_10_Pointer))) + (*(var_1_7_Pointer))))))) && (((*(var_1_8_Pointer)) <= (*(var_1_7_Pointer))) ? (((*(var_1_10_Pointer)) >= (*(var_1_9_Pointer))) ? ((*(var_1_11_Pointer)) == ((unsigned char) (! (*(var_1_5_Pointer))))) : ((*(var_1_11_Pointer)) == ((unsigned char) ((*(var_1_1_Pointer)) || (! (*(var_1_5_Pointer))))))) : 1)) && ((*(var_1_4_Pointer)) ? ((*(var_1_12_Pointer)) == ((double) ((((((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))) + (*(var_1_15_Pointer)))) < ((((((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))) < 0 ) ? -((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))) : ((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))))))) ? (((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))) + (*(var_1_15_Pointer)))) : ((((((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))) < 0 ) ? -((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer))))) : ((((3.5) < ((*(var_1_16_Pointer)))) ? (3.5) : ((*(var_1_16_Pointer)))))))))))) : ((*(var_1_12_Pointer)) == ((double) (*(var_1_15_Pointer)))))
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

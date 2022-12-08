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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch31Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 unsigned char var_1_2;
 signed long int var_1_3;
 unsigned char var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_12;
 double var_1_13;
 double var_1_14;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 200,
 0,
 1107940323,
 0,
 4,
 -32,
 64,
 4,
 0.97,
 32.6
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed long int last_1_WrapperStruct00_var_1_7 = 4;
double last_1_WrapperStruct00_var_1_13 = 0.97;
void initially(void) {
}
void step(void) {
 if (! ((*(WrapperStruct00_var_1_3_Pointer)) < ((*(WrapperStruct00_var_1_8_Pointer)) * last_1_WrapperStruct00_var_1_7))) {
  if (((((last_1_WrapperStruct00_var_1_13) < 0 ) ? -(last_1_WrapperStruct00_var_1_13) : (last_1_WrapperStruct00_var_1_13))) < last_1_WrapperStruct00_var_1_13) {
   if ((*(WrapperStruct00_var_1_6_Pointer))) {
    (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
   }
  }
 } else {
  (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 }
 if ((*(WrapperStruct00_var_1_9_Pointer)) < (*(WrapperStruct00_var_1_9_Pointer))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_9_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer)));
 }
 if (((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer))) < (*(WrapperStruct00_var_1_9_Pointer))) {
  if ((*(WrapperStruct00_var_1_2_Pointer)) && (*(WrapperStruct00_var_1_6_Pointer))) {
   if ((*(WrapperStruct00_var_1_6_Pointer))) {
    (*(WrapperStruct00_var_1_13_Pointer)) = 0.8;
   } else {
    (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
 }
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))) - (*(WrapperStruct00_var_1_9_Pointer)));
 } else {
  if ((*(WrapperStruct00_var_1_6_Pointer)) && ((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_9_Pointer)))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 1073741822);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483646);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1073741823);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_7 = WrapperStruct00.var_1_7;
 last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
}
int property() {
 return ((((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))) - (*(WrapperStruct00_var_1_9_Pointer))))) : (((*(WrapperStruct00_var_1_6_Pointer)) && ((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_3_Pointer)))) : 1)) && (((*(WrapperStruct00_var_1_9_Pointer)) < (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_9_Pointer))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))))))) && ((! ((*(WrapperStruct00_var_1_3_Pointer)) < ((*(WrapperStruct00_var_1_8_Pointer)) * last_1_WrapperStruct00_var_1_7))) ? ((((((last_1_WrapperStruct00_var_1_13) < 0 ) ? -(last_1_WrapperStruct00_var_1_13) : (last_1_WrapperStruct00_var_1_13))) < last_1_WrapperStruct00_var_1_13) ? ((*(WrapperStruct00_var_1_6_Pointer)) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer)))) : 1) : 1) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer)))))) && ((((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer))) < (*(WrapperStruct00_var_1_9_Pointer))) ? (((*(WrapperStruct00_var_1_2_Pointer)) && (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) 0.8)) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) (*(WrapperStruct00_var_1_14_Pointer))))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) (*(WrapperStruct00_var_1_14_Pointer))))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) (*(WrapperStruct00_var_1_14_Pointer)))))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch27Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 signed long int var_1_3;
 signed long int var_1_4;
 signed long int var_1_5;
 signed long int var_1_6;
 unsigned long int var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 unsigned long int var_1_10;
 signed long int var_1_11;
 unsigned long int var_1_12;
 unsigned char var_1_13;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 5,
 0,
 64,
 25,
 500,
 0,
 0,
 2648415615,
 10,
 128,
 2
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_8_Pointer)) || (! (*(WrapperStruct00_var_1_9_Pointer)))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer)));
 }
 unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_7_Pointer));
 if ((*(WrapperStruct00_var_1_6_Pointer)) > stepLocal_1) {
  (*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + ((((-4) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (-4) : ((*(WrapperStruct00_var_1_5_Pointer))))));
 } else {
  if ((*(WrapperStruct00_var_1_8_Pointer))) {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  }
 }
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_11_Pointer));
 if (32 >= stepLocal_0) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_3_Pointer)) + ((((((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? (((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_6_Pointer))))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)));
 }
 signed long int stepLocal_2 = (((((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer)))) > ((*(WrapperStruct00_var_1_1_Pointer)))) ? (((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer))));
 if ((*(WrapperStruct00_var_1_8_Pointer))) {
  if ((((*(WrapperStruct00_var_1_7_Pointer)) * 128) / (*(WrapperStruct00_var_1_13_Pointer))) != stepLocal_2) {
   (*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1073741823);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1073741823);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1073741823);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1073741823);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 4294967294);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 255);
 assume_abort_if_not(WrapperStruct00.var_1_13 != 0);
}
void updateLastVariables() {
}
int property() {
 return ((((32 >= (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_3_Pointer)) + ((((((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? (((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_6_Pointer)))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))))) && (((*(WrapperStruct00_var_1_8_Pointer)) || (! (*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer))))) : 1)) && (((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_4_Pointer)) + ((((-4) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (-4) : ((*(WrapperStruct00_var_1_5_Pointer)))))))) : ((*(WrapperStruct00_var_1_8_Pointer)) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_6_Pointer)))) : 1))) && ((*(WrapperStruct00_var_1_8_Pointer)) ? (((((*(WrapperStruct00_var_1_7_Pointer)) * 128) / (*(WrapperStruct00_var_1_13_Pointer))) != ((((((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer)))) > ((*(WrapperStruct00_var_1_1_Pointer)))) ? (((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)))))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_10_Pointer))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_13_Pointer)))))
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

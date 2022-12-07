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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch87Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 unsigned long int var_1_3;
 unsigned long int var_1_4;
 signed char var_1_5;
 signed char var_1_6;
 signed char var_1_7;
 signed char var_1_8;
 signed char var_1_9;
 signed long int var_1_10;
 signed long int var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 unsigned long int var_1_15;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 1,
 3164414017,
 128,
 -128,
 10,
 0,
 8,
 16,
 10,
 8,
 1,
 0,
 64
};
unsigned long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int last_1_WrapperStruct00_var_1_10 = 10;
void initially(void) {
}
void step(void) {
 (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
 (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
 (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 if ((*(WrapperStruct00_var_1_13_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer)))));
 }
 unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer));
 signed long int stepLocal_0 = -8;
 if (stepLocal_0 < (*(WrapperStruct00_var_1_4_Pointer))) {
  if (stepLocal_1 != (*(WrapperStruct00_var_1_12_Pointer))) {
   (*(WrapperStruct00_var_1_5_Pointer)) = ((((((*(WrapperStruct00_var_1_6_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))) - ((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer))))) + (*(WrapperStruct00_var_1_9_Pointer))));
  } else {
   (*(WrapperStruct00_var_1_5_Pointer)) = -8;
  }
 } else {
  (*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
 }
 if ((last_1_WrapperStruct00_var_1_10 * (*(WrapperStruct00_var_1_3_Pointer))) <= (*(WrapperStruct00_var_1_4_Pointer))) {
  if (((*(WrapperStruct00_var_1_9_Pointer)) - ((((-1) < 0 ) ? -(-1) : (-1)))) <= ((*(WrapperStruct00_var_1_15_Pointer)) * (*(WrapperStruct00_var_1_8_Pointer)))) {
   (*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967294);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -126);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 126);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 63);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 63);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property() {
 return ((((((*(WrapperStruct00_var_1_13_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (((((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer))))))) : 1) && ((-8 < (*(WrapperStruct00_var_1_4_Pointer))) ? (((*(WrapperStruct00_var_1_4_Pointer)) != (*(WrapperStruct00_var_1_12_Pointer))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed char) ((((((*(WrapperStruct00_var_1_6_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))) - ((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer))))) + (*(WrapperStruct00_var_1_9_Pointer)))))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed char) -8))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_8_Pointer)))))) && (((last_1_WrapperStruct00_var_1_10 * (*(WrapperStruct00_var_1_3_Pointer))) <= (*(WrapperStruct00_var_1_4_Pointer))) ? ((((*(WrapperStruct00_var_1_9_Pointer)) - ((((-1) < 0 ) ? -(-1) : (-1)))) <= ((*(WrapperStruct00_var_1_15_Pointer)) * (*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_7_Pointer))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_7_Pointer)))))) && ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_8_Pointer))))) && ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_14_Pointer))))) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_9_Pointer))))
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

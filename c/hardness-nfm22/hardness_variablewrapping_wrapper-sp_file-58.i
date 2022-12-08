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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch58Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_3;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 signed short int var_1_7;
 signed long int var_1_8;
 unsigned char var_1_9;
 unsigned long int var_1_10;
 unsigned long int var_1_11;
 unsigned char var_1_12;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 64,
 25,
 100,
 200,
 10,
 -5,
 -16,
 1,
 16,
 3774350958,
 64
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_4 = (*(WrapperStruct00_var_1_8_Pointer));
 if ((*(WrapperStruct00_var_1_3_Pointer)) >= stepLocal_4) {
  (*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer)));
 }
 (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
 signed long int stepLocal_1 = ((*(WrapperStruct00_var_1_5_Pointer)) - 2) - (*(WrapperStruct00_var_1_6_Pointer));
 signed long int stepLocal_0 = -256;
 if ((*(WrapperStruct00_var_1_10_Pointer)) <= stepLocal_0) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_3_Pointer))) < ((((*(WrapperStruct00_var_1_4_Pointer)) - 8) + 5))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((((*(WrapperStruct00_var_1_4_Pointer)) - 8) + 5))));
 } else {
  if ((*(WrapperStruct00_var_1_4_Pointer)) <= stepLocal_1) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  }
 }
 signed long int stepLocal_3 = ((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer))) / (*(WrapperStruct00_var_1_8_Pointer));
 unsigned char stepLocal_2 = (*(WrapperStruct00_var_1_3_Pointer)) <= (*(WrapperStruct00_var_1_8_Pointer));
 if ((*(WrapperStruct00_var_1_10_Pointer)) < stepLocal_3) {
  if ((*(WrapperStruct00_var_1_9_Pointer)) && stepLocal_2) {
   (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + ((((((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) : (((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))))));
  } else {
   (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 254);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 191);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 255);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 127);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967294);
}
void updateLastVariables() {
}
int property() {
 return (((((*(WrapperStruct00_var_1_10_Pointer)) <= -256) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (((((*(WrapperStruct00_var_1_3_Pointer))) < ((((*(WrapperStruct00_var_1_4_Pointer)) - 8) + 5))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((((*(WrapperStruct00_var_1_4_Pointer)) - 8) + 5)))))) : (((*(WrapperStruct00_var_1_4_Pointer)) <= (((*(WrapperStruct00_var_1_5_Pointer)) - 2) - (*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_3_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_6_Pointer)))))) && (((*(WrapperStruct00_var_1_10_Pointer)) < (((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer))) / (*(WrapperStruct00_var_1_8_Pointer)))) ? (((*(WrapperStruct00_var_1_9_Pointer)) && ((*(WrapperStruct00_var_1_3_Pointer)) <= (*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_4_Pointer)) + ((((((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))) : (((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer)))))))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_6_Pointer))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_4_Pointer)))))) && (((*(WrapperStruct00_var_1_3_Pointer)) >= (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_6_Pointer))))
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

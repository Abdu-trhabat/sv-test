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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch170Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 unsigned char var_1_4;
 unsigned long int var_1_5;
 unsigned long int var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 signed char var_1_11;
 signed char var_1_12;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 1,
 1,
 256,
 8,
 32,
 128,
 2,
 200,
 10,
 16
};
unsigned long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned long int last_1_WrapperStruct00_var_1_1 = 1;
unsigned char last_1_WrapperStruct00_var_1_7 = 32;
unsigned char last_1_WrapperStruct00_var_1_10 = 200;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_5 = (*(WrapperStruct00_var_1_8_Pointer)) | last_1_WrapperStruct00_var_1_7;
 if (last_1_WrapperStruct00_var_1_1 != stepLocal_5) {
  (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
 }
 signed long int stepLocal_4 = last_1_WrapperStruct00_var_1_10;
 unsigned long int stepLocal_3 = (*(WrapperStruct00_var_1_6_Pointer));
 unsigned char stepLocal_2 = (*(WrapperStruct00_var_1_9_Pointer));
 unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_5_Pointer));
 if (stepLocal_1 > (*(WrapperStruct00_var_1_6_Pointer))) {
  if (stepLocal_4 > (*(WrapperStruct00_var_1_5_Pointer))) {
   (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
  } else {
   (*(WrapperStruct00_var_1_7_Pointer)) = (((((*(WrapperStruct00_var_1_8_Pointer))) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer)))));
  }
 } else {
  if (stepLocal_3 <= (*(WrapperStruct00_var_1_5_Pointer))) {
   if ((*(WrapperStruct00_var_1_8_Pointer)) <= stepLocal_2) {
    (*(WrapperStruct00_var_1_7_Pointer)) = (((((*(WrapperStruct00_var_1_8_Pointer))) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer)))));
   }
  }
 }
 unsigned char stepLocal_0 = ! (*(WrapperStruct00_var_1_4_Pointer));
 if (((*(WrapperStruct00_var_1_10_Pointer)) != (((((*(WrapperStruct00_var_1_7_Pointer))) < (64)) ? ((*(WrapperStruct00_var_1_7_Pointer))) : (64)))) || stepLocal_0) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
 }
 unsigned char stepLocal_7 = (*(WrapperStruct00_var_1_10_Pointer)) == (*(WrapperStruct00_var_1_5_Pointer));
 unsigned long int stepLocal_6 = (*(WrapperStruct00_var_1_6_Pointer));
 if ((*(WrapperStruct00_var_1_4_Pointer)) && stepLocal_7) {
  if (stepLocal_6 <= (*(WrapperStruct00_var_1_9_Pointer))) {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
  } else {
   (*(WrapperStruct00_var_1_11_Pointer)) = 16;
  }
 } else {
  (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967294);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 4294967294);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 254);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
 last_1_WrapperStruct00_var_1_7 = WrapperStruct00.var_1_7;
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_10_Pointer)) != (((((*(WrapperStruct00_var_1_7_Pointer))) < (64)) ? ((*(WrapperStruct00_var_1_7_Pointer))) : (64)))) || (! (*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_6_Pointer))))) && (((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_6_Pointer))) ? ((last_1_WrapperStruct00_var_1_10 > (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_8_Pointer)))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) (((((*(WrapperStruct00_var_1_8_Pointer))) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer)))))))) : (((*(WrapperStruct00_var_1_6_Pointer)) <= (*(WrapperStruct00_var_1_5_Pointer))) ? (((*(WrapperStruct00_var_1_8_Pointer)) <= (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) (((((*(WrapperStruct00_var_1_8_Pointer))) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer))))))) : 1) : 1))) && ((last_1_WrapperStruct00_var_1_1 != ((*(WrapperStruct00_var_1_8_Pointer)) | last_1_WrapperStruct00_var_1_7)) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_8_Pointer)))) : 1)) && (((*(WrapperStruct00_var_1_4_Pointer)) && ((*(WrapperStruct00_var_1_10_Pointer)) == (*(WrapperStruct00_var_1_5_Pointer)))) ? (((*(WrapperStruct00_var_1_6_Pointer)) <= (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_12_Pointer)))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed char) 16))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_12_Pointer)))))
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

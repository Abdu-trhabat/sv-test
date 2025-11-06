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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch197Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 0;
signed short int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 8;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 0;
unsigned long int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 2;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 10;
signed short int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = -5;
signed short int* var_1_6_Pointer = &(var_1_6);
signed short int var_1_7 = -100;
signed short int* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 10;
signed short int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 2;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 64;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned short int var_1_16 = 1;
unsigned short int* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 59616;
unsigned short int* var_1_17_Pointer = &(var_1_17);
unsigned short int last_1_var_1_16 = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_16;
 if (! (*(var_1_9_Pointer))) {
  if ((*(var_1_4_Pointer)) < stepLocal_0) {
   (*(var_1_8_Pointer)) = (*(var_1_10_Pointer));
  } else {
   (*(var_1_8_Pointer)) = ((*(var_1_10_Pointer)) && (*(var_1_11_Pointer)));
  }
 }
 unsigned char stepLocal_1 = ((*(var_1_13_Pointer)) >> (*(var_1_14_Pointer))) > (*(var_1_3_Pointer));
 if (stepLocal_1 || (*(var_1_8_Pointer))) {
  (*(var_1_12_Pointer)) = (((((200 - (*(var_1_14_Pointer))) < 0 ) ? -(200 - (*(var_1_14_Pointer))) : (200 - (*(var_1_14_Pointer))))) - (*(var_1_15_Pointer)));
 }
 if ((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) {
  (*(var_1_1_Pointer)) = (((((*(var_1_4_Pointer))) < ((((((*(var_1_5_Pointer))) < (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))))) ? ((*(var_1_5_Pointer))) : (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))))))) ? ((*(var_1_4_Pointer))) : ((((((*(var_1_5_Pointer))) < (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))))) ? ((*(var_1_5_Pointer))) : (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))))))));
 }
 if ((*(var_1_14_Pointer)) > (((((*(var_1_15_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_6_Pointer)))))) {
  (*(var_1_16_Pointer)) = (((*(var_1_17_Pointer)) - (*(var_1_14_Pointer))) - (*(var_1_15_Pointer)));
 } else {
  if ((*(var_1_15_Pointer)) < ((*(var_1_1_Pointer)) * (*(var_1_7_Pointer)))) {
   (*(var_1_16_Pointer)) = (*(var_1_12_Pointer));
  } else {
   (*(var_1_16_Pointer)) = 8;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 14);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 49150);
 assume_abort_if_not(var_1_17 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 return (((((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed short int) (((((*(var_1_4_Pointer))) < ((((((*(var_1_5_Pointer))) < (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))))) ? ((*(var_1_5_Pointer))) : (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))))))) ? ((*(var_1_4_Pointer))) : ((((((*(var_1_5_Pointer))) < (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))))) ? ((*(var_1_5_Pointer))) : (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))))))))))) : 1) && ((! (*(var_1_9_Pointer))) ? (((*(var_1_4_Pointer)) < last_1_var_1_16) ? ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_10_Pointer)))) : ((*(var_1_8_Pointer)) == ((unsigned char) ((*(var_1_10_Pointer)) && (*(var_1_11_Pointer)))))) : 1)) && (((((*(var_1_13_Pointer)) >> (*(var_1_14_Pointer))) > (*(var_1_3_Pointer))) || (*(var_1_8_Pointer))) ? ((*(var_1_12_Pointer)) == ((unsigned char) (((((200 - (*(var_1_14_Pointer))) < 0 ) ? -(200 - (*(var_1_14_Pointer))) : (200 - (*(var_1_14_Pointer))))) - (*(var_1_15_Pointer))))) : 1)) && (((*(var_1_14_Pointer)) > (((((*(var_1_15_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_15_Pointer))) : ((*(var_1_6_Pointer)))))) ? ((*(var_1_16_Pointer)) == ((unsigned short int) (((*(var_1_17_Pointer)) - (*(var_1_14_Pointer))) - (*(var_1_15_Pointer))))) : (((*(var_1_15_Pointer)) < ((*(var_1_1_Pointer)) * (*(var_1_7_Pointer)))) ? ((*(var_1_16_Pointer)) == ((unsigned short int) (*(var_1_12_Pointer)))) : ((*(var_1_16_Pointer)) == ((unsigned short int) 8))))
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

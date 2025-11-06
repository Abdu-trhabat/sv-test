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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed long int var_1_4;
 signed long int var_1_5;
 signed long int var_1_6;
 signed short int var_1_7;
 float var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 signed long int var_1_11;
 signed long int var_1_12;
 signed long int var_1_13;
 signed long int var_1_14;
 signed long int var_1_15;
 signed long int var_1_16;
 signed long int var_1_17;
 unsigned short int var_1_18;
 unsigned short int var_1_19;
 signed char var_1_20;
 signed char var_1_21;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 5,
 -128,
 1,
 -128,
 0,
 25.6,
 0,
 1,
 -4,
 16,
 8,
 128,
 1867567405,
 32,
 5,
 4,
 64,
 -5,
 -64
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
float* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed long int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed long int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned short int* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned short int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
signed char* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
signed char* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);
void initially(void) {
}
void step(void) {
 (*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));
 (*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_21_Pointer));
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_5_Pointer));
 if (stepLocal_2 <= (*(WrapperStruct00_var_1_18_Pointer))) {
  (*(WrapperStruct00_var_1_11_Pointer)) = ((((((((((*(WrapperStruct00_var_1_18_Pointer))) > ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_18_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) < ((((((*(WrapperStruct00_var_1_13_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) ? ((((((*(WrapperStruct00_var_1_18_Pointer))) > ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_18_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) : ((((((*(WrapperStruct00_var_1_13_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))))) - (((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer))) - (*(WrapperStruct00_var_1_17_Pointer))));
 }
 (*(WrapperStruct00_var_1_9_Pointer)) = (((*(WrapperStruct00_var_1_11_Pointer)) >= (~ (*(WrapperStruct00_var_1_11_Pointer)))) && (! (*(WrapperStruct00_var_1_10_Pointer))));
 signed long int stepLocal_0 = ((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_5_Pointer))) / (*(WrapperStruct00_var_1_6_Pointer));
 if ((~ (*(WrapperStruct00_var_1_18_Pointer))) < stepLocal_0) {
  if ((*(WrapperStruct00_var_1_9_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = 8;
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = 5;
 }
 signed long int stepLocal_1 = ((((*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))));
 if ((*(WrapperStruct00_var_1_9_Pointer))) {
  if (stepLocal_1 >= (*(WrapperStruct00_var_1_11_Pointer))) {
   (*(WrapperStruct00_var_1_8_Pointer)) = 2.6f;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 32766);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483646);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483646);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 2147483646);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 1610612734);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 2147483646);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 536870911);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 1073741823);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 65534);
 WrapperStruct00.var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_21 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_21 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((~ (*(WrapperStruct00_var_1_18_Pointer))) < (((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_5_Pointer))) / (*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) 8))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) 5))) && ((*(WrapperStruct00_var_1_9_Pointer)) ? (((((((*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))))) >= (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((float) 2.6f)) : 1) : 1)) && ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) (((*(WrapperStruct00_var_1_11_Pointer)) >= (~ (*(WrapperStruct00_var_1_11_Pointer)))) && (! (*(WrapperStruct00_var_1_10_Pointer))))))) && (((*(WrapperStruct00_var_1_5_Pointer)) <= (*(WrapperStruct00_var_1_18_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed long int) ((((((((((*(WrapperStruct00_var_1_18_Pointer))) > ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_18_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) < ((((((*(WrapperStruct00_var_1_13_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) ? ((((((*(WrapperStruct00_var_1_18_Pointer))) > ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_18_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) : ((((((*(WrapperStruct00_var_1_13_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))))) - (((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer))) - (*(WrapperStruct00_var_1_17_Pointer)))))) : 1)) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_19_Pointer))))) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_21_Pointer))))
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

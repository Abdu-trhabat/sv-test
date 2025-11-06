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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 signed char var_1_2;
 signed long int var_1_3;
 signed long int var_1_4;
 double var_1_5;
 signed long int var_1_6;
 signed long int var_1_7;
 double var_1_8;
 double var_1_9;
 double var_1_10;
 double var_1_11;
 signed short int var_1_12;
 unsigned char var_1_13;
 unsigned short int var_1_14;
 unsigned short int var_1_15;
 signed short int var_1_16;
 signed short int var_1_17;
 signed short int var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 64,
 1,
 -128,
 1000000000,
 4.5,
 4,
 5,
 255.24,
 0.0,
 10.2,
 128.1,
 -10,
 0,
 40214,
 18645,
 -8,
 17840,
 5
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = 1 - WrapperStruct00.var_1_2;
 if (stepLocal_0 == WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_1 = ((((2) > (25)) ? (2) : (25)));
 } else {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_4);
 }
 signed long int stepLocal_2 = -4;
 signed long int stepLocal_1 = WrapperStruct00.var_1_3;
 if (stepLocal_1 >= WrapperStruct00.var_1_6) {
  if (stepLocal_2 < (WrapperStruct00.var_1_2 - WrapperStruct00.var_1_7)) {
   WrapperStruct00.var_1_5 = (((((WrapperStruct00.var_1_8) > ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))) ? (WrapperStruct00.var_1_8) : ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)))) - WrapperStruct00.var_1_11);
  }
 } else {
  WrapperStruct00.var_1_5 = WrapperStruct00.var_1_11;
 }
 signed long int stepLocal_3 = WrapperStruct00.var_1_14 - (WrapperStruct00.var_1_15 - WrapperStruct00.var_1_2);
 if (! WrapperStruct00.var_1_13) {
  if (stepLocal_3 > WrapperStruct00.var_1_7) {
   WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_16);
  }
 } else {
  if (WrapperStruct00.var_1_13) {
   WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_17 - WrapperStruct00.var_1_18));
  } else {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_16;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 127);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1073741823);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 65535);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 32767);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 16383);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 32766);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((1 - WrapperStruct00.var_1_2) == WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((signed long int) ((((2) > (25)) ? (2) : (25))))) : (WrapperStruct00.var_1_1 == ((signed long int) (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_4)))) && ((WrapperStruct00.var_1_3 >= WrapperStruct00.var_1_6) ? ((-4 < (WrapperStruct00.var_1_2 - WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_5 == ((double) (((((WrapperStruct00.var_1_8) > ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))) ? (WrapperStruct00.var_1_8) : ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)))) - WrapperStruct00.var_1_11))) : 1) : (WrapperStruct00.var_1_5 == ((double) WrapperStruct00.var_1_11)))) && ((! WrapperStruct00.var_1_13) ? (((WrapperStruct00.var_1_14 - (WrapperStruct00.var_1_15 - WrapperStruct00.var_1_2)) > WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_12 == ((signed short int) (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_16))) : 1) : (WrapperStruct00.var_1_13 ? (WrapperStruct00.var_1_12 == ((signed short int) (WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_17 - WrapperStruct00.var_1_18)))) : (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_16))))
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

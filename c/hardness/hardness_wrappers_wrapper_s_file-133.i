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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch133Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed long int var_1_2;
 signed long int var_1_3;
 signed short int var_1_4;
 signed short int var_1_5;
 unsigned short int var_1_6;
 unsigned short int var_1_7;
 unsigned short int var_1_8;
 double var_1_9;
 unsigned char var_1_11;
 double var_1_12;
 double var_1_13;
 double var_1_14;
 signed short int var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -64,
 16,
 1,
 -16,
 2,
 5,
 256,
 4,
 49.5,
 1,
 0.5,
 9.4,
 0.30000000000000004,
 -10000,
 0,
 1
};
void initially(void) {
}
void step(void) {
 if (8 >= (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3)) {
  WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_4) < ((WrapperStruct00.var_1_5 + 10))) ? (WrapperStruct00.var_1_4) : ((WrapperStruct00.var_1_5 + 10))));
 }
 signed long int stepLocal_0 = WrapperStruct00.var_1_3;
 if (stepLocal_0 <= WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_6 = (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8);
 }
 unsigned short int stepLocal_4 = WrapperStruct00.var_1_6;
 unsigned char stepLocal_3 = WrapperStruct00.var_1_11 || WrapperStruct00.var_1_16;
 if (stepLocal_3 || (! WrapperStruct00.var_1_17)) {
  if (stepLocal_4 < WrapperStruct00.var_1_7) {
   WrapperStruct00.var_1_15 = ((((WrapperStruct00.var_1_5) < (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_4)));
  } else {
   if (WrapperStruct00.var_1_17) {
    WrapperStruct00.var_1_15 = WrapperStruct00.var_1_5;
   }
  }
 } else {
  WrapperStruct00.var_1_15 = WrapperStruct00.var_1_5;
 }
 signed long int stepLocal_2 = WrapperStruct00.var_1_6 + WrapperStruct00.var_1_15;
 unsigned short int stepLocal_1 = WrapperStruct00.var_1_7;
 if (WrapperStruct00.var_1_7 <= stepLocal_2) {
  if (WrapperStruct00.var_1_3 >= stepLocal_1) {
   WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_12 + (((((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))) < 0 ) ? -((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))) : ((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))))));
  }
 } else {
  WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_12);
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 32766);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 16383);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 32767);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 32767);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((8 >= (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1 == ((signed short int) ((((WrapperStruct00.var_1_4) < ((WrapperStruct00.var_1_5 + 10))) ? (WrapperStruct00.var_1_4) : ((WrapperStruct00.var_1_5 + 10)))))) : 1) && ((WrapperStruct00.var_1_3 <= WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_6 == ((unsigned short int) (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8))) : 1)) && ((WrapperStruct00.var_1_7 <= (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_15)) ? ((WrapperStruct00.var_1_3 >= WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_9 == ((double) (WrapperStruct00.var_1_12 + (((((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))) < 0 ) ? -((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))) : ((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14)))))))) : 1) : (WrapperStruct00.var_1_9 == ((double) (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_12))))) && (((WrapperStruct00.var_1_11 || WrapperStruct00.var_1_16) || (! WrapperStruct00.var_1_17)) ? ((WrapperStruct00.var_1_6 < WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_15 == ((signed short int) ((((WrapperStruct00.var_1_5) < (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_4))))) : (WrapperStruct00.var_1_17 ? (WrapperStruct00.var_1_15 == ((signed short int) WrapperStruct00.var_1_5)) : 1)) : (WrapperStruct00.var_1_15 == ((signed short int) WrapperStruct00.var_1_5)))
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

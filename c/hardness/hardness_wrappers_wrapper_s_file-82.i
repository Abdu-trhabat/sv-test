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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch82Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 unsigned char var_1_2;
 float var_1_3;
 float var_1_4;
 unsigned char var_1_5;
 signed short int var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_14;
 unsigned char var_1_15;
 double var_1_16;
 unsigned char var_1_17;
 double var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 128.75,
 1,
 63.5,
 255.5,
 32,
 -256,
 10,
 10,
 25,
 128,
 16,
 2,
 5,
 10,
 3.75,
 0,
 255.5
};
void initially(void) {
}
void step(void) {
 if (! WrapperStruct00.var_1_2) {
  if (WrapperStruct00.var_1_2) {
   WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_3) > (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4)));
  }
 }
 signed long int stepLocal_0 = WrapperStruct00.var_1_6 / -2;
 if (stepLocal_0 >= (WrapperStruct00.var_1_7 | WrapperStruct00.var_1_8)) {
  WrapperStruct00.var_1_5 = ((((WrapperStruct00.var_1_9) < 0 ) ? -(WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_9)));
 } else {
  WrapperStruct00.var_1_5 = (WrapperStruct00.var_1_10 - ((((WrapperStruct00.var_1_11) < 0 ) ? -(WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_11))));
 }
 WrapperStruct00.var_1_16 = WrapperStruct00.var_1_4;
 WrapperStruct00.var_1_17 = WrapperStruct00.var_1_9;
 WrapperStruct00.var_1_18 = WrapperStruct00.var_1_3;
 unsigned char stepLocal_1 = WrapperStruct00.var_1_9;
 if ((WrapperStruct00.var_1_7 + WrapperStruct00.var_1_11) >= stepLocal_1) {
  if (((((WrapperStruct00.var_1_4) > ((WrapperStruct00.var_1_1 * WrapperStruct00.var_1_3))) ? (WrapperStruct00.var_1_4) : ((WrapperStruct00.var_1_1 * WrapperStruct00.var_1_3)))) <= WrapperStruct00.var_1_18) {
   WrapperStruct00.var_1_12 = ((((WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_14)));
  } else {
   if (WrapperStruct00.var_1_2) {
    WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_15);
   }
  }
 } else {
  WrapperStruct00.var_1_12 = WrapperStruct00.var_1_9;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32767);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 254);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 254);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((! WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((float) ((((WrapperStruct00.var_1_3) > (WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_4))))) : 1) : 1) && (((WrapperStruct00.var_1_6 / -2) >= (WrapperStruct00.var_1_7 | WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_5 == ((unsigned char) ((((WrapperStruct00.var_1_9) < 0 ) ? -(WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_9))))) : (WrapperStruct00.var_1_5 == ((unsigned char) (WrapperStruct00.var_1_10 - ((((WrapperStruct00.var_1_11) < 0 ) ? -(WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_11)))))))) && (((WrapperStruct00.var_1_7 + WrapperStruct00.var_1_11) >= WrapperStruct00.var_1_9) ? ((((((WrapperStruct00.var_1_4) > ((WrapperStruct00.var_1_1 * WrapperStruct00.var_1_3))) ? (WrapperStruct00.var_1_4) : ((WrapperStruct00.var_1_1 * WrapperStruct00.var_1_3)))) <= WrapperStruct00.var_1_18) ? (WrapperStruct00.var_1_12 == ((unsigned char) ((((WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_14))))) : (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_12 == ((unsigned char) (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_15))) : 1)) : (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_9)))) && (WrapperStruct00.var_1_16 == ((double) WrapperStruct00.var_1_4))) && (WrapperStruct00.var_1_17 == ((unsigned char) WrapperStruct00.var_1_9))) && (WrapperStruct00.var_1_18 == ((double) WrapperStruct00.var_1_3))
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

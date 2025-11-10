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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch47Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 double var_1_2;
 double var_1_3;
 unsigned char var_1_4;
 unsigned char var_1_5;
 signed long int var_1_6;
 signed long int var_1_7;
 double var_1_8;
 signed char var_1_9;
 signed char var_1_10;
 signed char var_1_11;
 signed long int var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 double var_1_15;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 24.575,
 -0.5,
 128.5,
 2,
 32,
 -128,
 256,
 3.5,
 16,
 16,
 4,
 8,
 1,
 1,
 3.8
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) {
  if ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5) >= (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) {
   WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8)));
  }
 } else {
  if (WrapperStruct00.var_1_6 > WrapperStruct00.var_1_7) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
  }
 }
 unsigned char stepLocal_0 = ! WrapperStruct00.var_1_13;
 if (stepLocal_0 || WrapperStruct00.var_1_14) {
  if (! WrapperStruct00.var_1_14) {
   WrapperStruct00.var_1_12 = (((((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))) < 0 ) ? -((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))) : ((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5)))));
  } else {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_5;
  }
 }
 WrapperStruct00.var_1_15 = WrapperStruct00.var_1_8;
 if (-4 > WrapperStruct00.var_1_12) {
  if ((~ WrapperStruct00.var_1_12) <= WrapperStruct00.var_1_12) {
   WrapperStruct00.var_1_9 = ((((WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11) < 0 ) ? -(WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11)));
  }
 } else {
  WrapperStruct00.var_1_9 = WrapperStruct00.var_1_10;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 255);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 255);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 63);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 63);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) ? (((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5) >= (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_1 == ((double) ((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8))))) : 1) : ((WrapperStruct00.var_1_6 > WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_1 == ((double) WrapperStruct00.var_1_8)) : 1)) && ((-4 > WrapperStruct00.var_1_12) ? (((~ WrapperStruct00.var_1_12) <= WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_9 == ((signed char) ((((WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11) < 0 ) ? -(WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11))))) : 1) : (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_10)))) && (((! WrapperStruct00.var_1_13) || WrapperStruct00.var_1_14) ? ((! WrapperStruct00.var_1_14) ? (WrapperStruct00.var_1_12 == ((signed long int) (((((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))) < 0 ) ? -((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))) : ((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))))))) : (WrapperStruct00.var_1_12 == ((signed long int) WrapperStruct00.var_1_5))) : 1)) && (WrapperStruct00.var_1_15 == ((double) WrapperStruct00.var_1_8))
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

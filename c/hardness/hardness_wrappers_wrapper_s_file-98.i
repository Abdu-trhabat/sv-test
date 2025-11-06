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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch98Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 double var_1_2;
 double var_1_3;
 double var_1_4;
 signed long int var_1_5;
 signed short int var_1_6;
 signed long int var_1_7;
 double var_1_8;
 double var_1_9;
 double var_1_10;
 double var_1_11;
 unsigned long int var_1_12;
 unsigned long int var_1_13;
 unsigned long int var_1_14;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 4.8,
 63.5,
 9999999.5,
 0.6,
 0,
 25,
 -1,
 4.4,
 7.25,
 7.5,
 2.3,
 128,
 4078799264,
 500
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3);
 signed long int stepLocal_0 = (WrapperStruct00.var_1_5 >> WrapperStruct00.var_1_6) / WrapperStruct00.var_1_7;
 if (8 < stepLocal_0) {
  WrapperStruct00.var_1_4 = (((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) + ((((WrapperStruct00.var_1_10) < (1.9)) ? (WrapperStruct00.var_1_10) : (1.9)))) + (99.125 + WrapperStruct00.var_1_11));
 }
 if (WrapperStruct00.var_1_2 < WrapperStruct00.var_1_8) {
  if (((- WrapperStruct00.var_1_5) <= WrapperStruct00.var_1_6) || (WrapperStruct00.var_1_4 < WrapperStruct00.var_1_10)) {
   WrapperStruct00.var_1_12 = ((((WrapperStruct00.var_1_5) < (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_6)));
  } else {
   WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_5);
  }
 }
 if (((((-128) < (WrapperStruct00.var_1_12)) ? (-128) : (WrapperStruct00.var_1_12))) < WrapperStruct00.var_1_13) {
  if (WrapperStruct00.var_1_2 > WrapperStruct00.var_1_10) {
   WrapperStruct00.var_1_14 = (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_5);
  } else {
   WrapperStruct00.var_1_14 = WrapperStruct00.var_1_13;
  }
 } else {
  WrapperStruct00.var_1_14 = WrapperStruct00.var_1_13;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 30);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_7 != 0);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -115292.1504606845700e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 1152921.504606845700e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -115292.1504606845700e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 1152921.504606845700e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((WrapperStruct00.var_1_1 == ((double) (WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3))) && ((8 < ((WrapperStruct00.var_1_5 >> WrapperStruct00.var_1_6) / WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_4 == ((double) (((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) + ((((WrapperStruct00.var_1_10) < (1.9)) ? (WrapperStruct00.var_1_10) : (1.9)))) + (99.125 + WrapperStruct00.var_1_11)))) : 1)) && ((WrapperStruct00.var_1_2 < WrapperStruct00.var_1_8) ? ((((- WrapperStruct00.var_1_5) <= WrapperStruct00.var_1_6) || (WrapperStruct00.var_1_4 < WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_12 == ((unsigned long int) ((((WrapperStruct00.var_1_5) < (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_6))))) : (WrapperStruct00.var_1_12 == ((unsigned long int) (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_5)))) : 1)) && ((((((-128) < (WrapperStruct00.var_1_12)) ? (-128) : (WrapperStruct00.var_1_12))) < WrapperStruct00.var_1_13) ? ((WrapperStruct00.var_1_2 > WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_14 == ((unsigned long int) (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_5))) : (WrapperStruct00.var_1_14 == ((unsigned long int) WrapperStruct00.var_1_13))) : (WrapperStruct00.var_1_14 == ((unsigned long int) WrapperStruct00.var_1_13)))
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

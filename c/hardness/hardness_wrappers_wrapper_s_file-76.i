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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch76Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_3;
 signed long int var_1_4;
 unsigned char var_1_5;
 double var_1_6;
 double var_1_7;
 signed char var_1_8;
 signed char var_1_9;
 signed char var_1_10;
 signed char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
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
 8,
 -2,
 0,
 31.5,
 100000000000000.9,
 -4,
 5,
 10,
 5,
 1,
 1
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (- 5) + WrapperStruct00.var_1_3;
 if (stepLocal_0 >= WrapperStruct00.var_1_4) {
  WrapperStruct00.var_1_1 = (! WrapperStruct00.var_1_5);
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
 }
 signed long int stepLocal_1 = WrapperStruct00.var_1_4;
 if (stepLocal_1 <= WrapperStruct00.var_1_3) {
  if (WrapperStruct00.var_1_1) {
   WrapperStruct00.var_1_6 = (3.17 - ((((127.2) > (WrapperStruct00.var_1_7)) ? (127.2) : (WrapperStruct00.var_1_7))));
  }
 }
 if (WrapperStruct00.var_1_1) {
  if ((WrapperStruct00.var_1_7 >= 24.2) || WrapperStruct00.var_1_5) {
   WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_5 || (! WrapperStruct00.var_1_13));
  } else {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_5;
  }
 } else {
  WrapperStruct00.var_1_12 = WrapperStruct00.var_1_13;
 }
 if (-25 >= WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_8 = ((((WrapperStruct00.var_1_9) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_10)));
 } else {
  if (WrapperStruct00.var_1_10 == WrapperStruct00.var_1_4) {
   WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_11 - 16);
  } else {
   if (WrapperStruct00.var_1_12) {
    WrapperStruct00.var_1_8 = WrapperStruct00.var_1_9;
   }
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 126);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 126);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((- 5) + WrapperStruct00.var_1_3) >= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((unsigned char) (! WrapperStruct00.var_1_5))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_5))) && ((WrapperStruct00.var_1_4 <= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 ? (WrapperStruct00.var_1_6 == ((double) (3.17 - ((((127.2) > (WrapperStruct00.var_1_7)) ? (127.2) : (WrapperStruct00.var_1_7)))))) : 1) : 1)) && ((-25 >= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_8 == ((signed char) ((((WrapperStruct00.var_1_9) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_9) : (WrapperStruct00.var_1_10))))) : ((WrapperStruct00.var_1_10 == WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_8 == ((signed char) (WrapperStruct00.var_1_11 - 16))) : (WrapperStruct00.var_1_12 ? (WrapperStruct00.var_1_8 == ((signed char) WrapperStruct00.var_1_9)) : 1)))) && (WrapperStruct00.var_1_1 ? (((WrapperStruct00.var_1_7 >= 24.2) || WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_12 == ((unsigned char) (WrapperStruct00.var_1_5 || (! WrapperStruct00.var_1_13)))) : (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_5))) : (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_13)))
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

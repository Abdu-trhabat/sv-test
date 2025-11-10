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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed long int var_1_3;
 signed long int var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
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
 -10,
 1,
 -256,
 4,
 0,
 128,
 128,
 4,
 50,
 -128,
 1,
 0
};
void initially(void) {
}
void step(void) {
 if (! WrapperStruct00.var_1_6) {
  WrapperStruct00.var_1_5 = ((((WrapperStruct00.var_1_7) < ((WrapperStruct00.var_1_8 - (WrapperStruct00.var_1_9 + WrapperStruct00.var_1_10)))) ? (WrapperStruct00.var_1_7) : ((WrapperStruct00.var_1_8 - (WrapperStruct00.var_1_9 + WrapperStruct00.var_1_10)))));
 } else {
  WrapperStruct00.var_1_5 = (128 - WrapperStruct00.var_1_9);
 }
 signed long int stepLocal_0 = (WrapperStruct00.var_1_3 * -10) & WrapperStruct00.var_1_4;
 if ((~ WrapperStruct00.var_1_5) >= stepLocal_0) {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
 }
 unsigned char stepLocal_3 = WrapperStruct00.var_1_5 < WrapperStruct00.var_1_8;
 unsigned char stepLocal_2 = WrapperStruct00.var_1_9;
 signed short int stepLocal_1 = WrapperStruct00.var_1_1;
 if (WrapperStruct00.var_1_6) {
  if (stepLocal_1 < WrapperStruct00.var_1_10) {
   if ((((((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_10)) > (WrapperStruct00.var_1_1)) ? ((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_10)) : (WrapperStruct00.var_1_1))) >= stepLocal_2) {
    WrapperStruct00.var_1_11 = WrapperStruct00.var_1_10;
   } else {
    if (stepLocal_3 || WrapperStruct00.var_1_12) {
     if (WrapperStruct00.var_1_12) {
      if (WrapperStruct00.var_1_13) {
       WrapperStruct00.var_1_11 = WrapperStruct00.var_1_10;
      }
     } else {
      WrapperStruct00.var_1_11 = WrapperStruct00.var_1_9;
     }
    } else {
     WrapperStruct00.var_1_11 = WrapperStruct00.var_1_10;
    }
   }
  } else {
   WrapperStruct00.var_1_11 = WrapperStruct00.var_1_10;
  }
 } else {
  WrapperStruct00.var_1_11 = WrapperStruct00.var_1_9;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 254);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 254);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 64);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 63);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((~ WrapperStruct00.var_1_5) >= ((WrapperStruct00.var_1_3 * -10) & WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_5)) : 1) && ((! WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_5 == ((unsigned char) ((((WrapperStruct00.var_1_7) < ((WrapperStruct00.var_1_8 - (WrapperStruct00.var_1_9 + WrapperStruct00.var_1_10)))) ? (WrapperStruct00.var_1_7) : ((WrapperStruct00.var_1_8 - (WrapperStruct00.var_1_9 + WrapperStruct00.var_1_10))))))) : (WrapperStruct00.var_1_5 == ((unsigned char) (128 - WrapperStruct00.var_1_9))))) && (WrapperStruct00.var_1_6 ? ((WrapperStruct00.var_1_1 < WrapperStruct00.var_1_10) ? (((((((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_10)) > (WrapperStruct00.var_1_1)) ? ((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_10)) : (WrapperStruct00.var_1_1))) >= WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_10)) : (((WrapperStruct00.var_1_5 < WrapperStruct00.var_1_8) || WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_12 ? (WrapperStruct00.var_1_13 ? (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_10)) : 1) : (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_9))) : (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_10)))) : (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_9)))
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

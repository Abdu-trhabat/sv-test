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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch53Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 unsigned long int var_1_4;
 unsigned long int var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 double var_1_9;
 double var_1_10;
 unsigned char var_1_11;
 unsigned short int var_1_12;
 unsigned long int var_1_13;
 unsigned short int var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
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
 500,
 1456677701,
 1000000000,
 1,
 0,
 0,
 0,
 256.5,
 8.8,
 1,
 16,
 3110219175,
 128,
 1,
 0
};
unsigned char last_1_WrapperStruct00_var_1_8 = 0;
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_2 + (WrapperStruct00.var_1_3 - (WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5)));
 WrapperStruct00.var_1_6 = WrapperStruct00.var_1_7;
 unsigned long int stepLocal_1 = WrapperStruct00.var_1_3;
 unsigned long int stepLocal_0 = (((WrapperStruct00.var_1_1) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_5));
 if (stepLocal_0 != ((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_3)))) {
  if (WrapperStruct00.var_1_9 == WrapperStruct00.var_1_10) {
   if (last_1_WrapperStruct00_var_1_8) {
    if (stepLocal_1 >= WrapperStruct00.var_1_5) {
     WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_7 || WrapperStruct00.var_1_11);
    } else {
     WrapperStruct00.var_1_8 = WrapperStruct00.var_1_7;
    }
   }
  }
 } else {
  WrapperStruct00.var_1_8 = WrapperStruct00.var_1_11;
 }
 if (WrapperStruct00.var_1_5 <= (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_4)) {
  WrapperStruct00.var_1_12 = ((((WrapperStruct00.var_1_14) < 0 ) ? -(WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_14)));
 }
 if ((WrapperStruct00.var_1_9 * 16.5f) > WrapperStruct00.var_1_10) {
  WrapperStruct00.var_1_15 = (! WrapperStruct00.var_1_11);
 } else {
  WrapperStruct00.var_1_15 = (WrapperStruct00.var_1_11 && WrapperStruct00.var_1_16);
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 536870911);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1073741823);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 536870911);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 4294967295);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 65534);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
}
int property(void) {
 return ((((WrapperStruct00.var_1_1 == ((unsigned long int) (WrapperStruct00.var_1_2 + (WrapperStruct00.var_1_3 - (WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5))))) && (WrapperStruct00.var_1_6 == ((unsigned char) WrapperStruct00.var_1_7))) && ((((((WrapperStruct00.var_1_1) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_5))) != ((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_3)))) ? ((WrapperStruct00.var_1_9 == WrapperStruct00.var_1_10) ? (last_1_WrapperStruct00_var_1_8 ? ((WrapperStruct00.var_1_3 >= WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_8 == ((unsigned char) (WrapperStruct00.var_1_7 || WrapperStruct00.var_1_11))) : (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_7))) : 1) : 1) : (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_11)))) && ((WrapperStruct00.var_1_5 <= (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_12 == ((unsigned short int) ((((WrapperStruct00.var_1_14) < 0 ) ? -(WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_14))))) : 1)) && (((WrapperStruct00.var_1_9 * 16.5f) > WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_15 == ((unsigned char) (! WrapperStruct00.var_1_11))) : (WrapperStruct00.var_1_15 == ((unsigned char) (WrapperStruct00.var_1_11 && WrapperStruct00.var_1_16))))
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

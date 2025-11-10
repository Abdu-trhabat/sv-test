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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch196Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned char var_1_2;
 unsigned short int var_1_3;
 unsigned short int var_1_4;
 unsigned short int var_1_5;
 unsigned short int var_1_6;
 unsigned short int var_1_7;
 unsigned short int var_1_8;
 signed char var_1_9;
 signed char var_1_10;
 signed char var_1_11;
 signed char var_1_12;
 signed char var_1_13;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 8,
 0,
 256,
 19354,
 16876,
 2,
 47567,
 2,
 -128,
 5,
 -2,
 -5,
 -16
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_3) > (100)) ? (WrapperStruct00.var_1_3) : (100)));
 } else {
  WrapperStruct00.var_1_1 = ((((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))) - 32) + 10);
 }
 unsigned short int stepLocal_1 = WrapperStruct00.var_1_3;
 unsigned short int stepLocal_0 = WrapperStruct00.var_1_1;
 if (WrapperStruct00.var_1_1 <= stepLocal_1) {
  if (stepLocal_0 >= WrapperStruct00.var_1_3) {
   WrapperStruct00.var_1_6 = (((((((((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_5)) < (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_4)))) < (((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_8))))) ? ((((((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_5)) < (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_4)))) : (((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_8))))));
  }
 } else {
  WrapperStruct00.var_1_6 = WrapperStruct00.var_1_3;
 }
 if (WrapperStruct00.var_1_8 <= ((((WrapperStruct00.var_1_6) < 0 ) ? -(WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_6)))) {
  WrapperStruct00.var_1_9 = (10 - WrapperStruct00.var_1_10);
 } else {
  if (! WrapperStruct00.var_1_2) {
   WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_11 + ((((WrapperStruct00.var_1_12) < (WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_12) : (WrapperStruct00.var_1_13))));
  } else {
   if (WrapperStruct00.var_1_2) {
    WrapperStruct00.var_1_9 = 64;
   } else {
    WrapperStruct00.var_1_9 = WrapperStruct00.var_1_11;
   }
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 65534);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32767);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 65534);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 65534);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 63);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 63);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((unsigned short int) ((((WrapperStruct00.var_1_3) > (100)) ? (WrapperStruct00.var_1_3) : (100))))) : (WrapperStruct00.var_1_1 == ((unsigned short int) ((((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))) - 32) + 10)))) && ((WrapperStruct00.var_1_1 <= WrapperStruct00.var_1_3) ? ((WrapperStruct00.var_1_1 >= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_6 == ((unsigned short int) (((((((((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_5)) < (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_4)))) < (((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_8))))) ? ((((((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_5)) < (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_4)))) : (((((WrapperStruct00.var_1_3) < (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_3) : (WrapperStruct00.var_1_8)))))))) : 1) : (WrapperStruct00.var_1_6 == ((unsigned short int) WrapperStruct00.var_1_3)))) && ((WrapperStruct00.var_1_8 <= ((((WrapperStruct00.var_1_6) < 0 ) ? -(WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_6)))) ? (WrapperStruct00.var_1_9 == ((signed char) (10 - WrapperStruct00.var_1_10))) : ((! WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_9 == ((signed char) (WrapperStruct00.var_1_11 + ((((WrapperStruct00.var_1_12) < (WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_12) : (WrapperStruct00.var_1_13)))))) : (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_9 == ((signed char) 64)) : (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_11)))))
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

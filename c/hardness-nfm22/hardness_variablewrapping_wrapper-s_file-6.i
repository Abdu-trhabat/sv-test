// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 unsigned short int var_1_4;
 unsigned short int var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 double var_1_9;
 double var_1_10;
 double var_1_11;
 double var_1_12;
 unsigned short int var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_16;
 unsigned char var_1_17;
 signed long int var_1_18;
 unsigned long int var_1_20;
 unsigned long int var_1_21;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 32,
 10,
 4,
 2,
 0.0,
 64.2,
 0.0,
 0.25,
 36833,
 0,
 0,
 0,
 -32,
 50,
 2655070710
};
unsigned char last_1_WrapperStruct00_var_1_14 = 0;
signed long int last_1_WrapperStruct00_var_1_18 = -32;
unsigned long int last_1_WrapperStruct00_var_1_20 = 50;
void initially(void) {
}
void step(void) {
 if ((WrapperStruct00.var_1_4 - last_1_WrapperStruct00_var_1_20) == last_1_WrapperStruct00_var_1_18) {
  if (((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) - WrapperStruct00.var_1_11) > WrapperStruct00.var_1_12) {
   WrapperStruct00.var_1_6 = (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_8);
  }
 } else {
  WrapperStruct00.var_1_6 = WrapperStruct00.var_1_13;
 }
 if (WrapperStruct00.var_1_13 > WrapperStruct00.var_1_6) {
  WrapperStruct00.var_1_18 = (((((WrapperStruct00.var_1_6) < (WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_13))) - WrapperStruct00.var_1_6);
 }
 if (last_1_WrapperStruct00_var_1_14) {
  WrapperStruct00.var_1_14 = (WrapperStruct00.var_1_16 && WrapperStruct00.var_1_17);
 }
 WrapperStruct00.var_1_20 = ((((((((last_1_WrapperStruct00_var_1_20) < 0 ) ? -(last_1_WrapperStruct00_var_1_20) : (last_1_WrapperStruct00_var_1_20)))) < ((WrapperStruct00.var_1_21 - WrapperStruct00.var_1_7))) ? (((((last_1_WrapperStruct00_var_1_20) < 0 ) ? -(last_1_WrapperStruct00_var_1_20) : (last_1_WrapperStruct00_var_1_20)))) : ((WrapperStruct00.var_1_21 - WrapperStruct00.var_1_7))));
 unsigned long int stepLocal_1 = WrapperStruct00.var_1_20;
 unsigned long int stepLocal_0 = WrapperStruct00.var_1_20;
 if ((((((WrapperStruct00.var_1_18) > (WrapperStruct00.var_1_18)) ? (WrapperStruct00.var_1_18) : (WrapperStruct00.var_1_18))) / WrapperStruct00.var_1_4) > stepLocal_1) {
  if (stepLocal_0 == WrapperStruct00.var_1_18) {
   WrapperStruct00.var_1_1 = 1000000000u;
  } else {
   WrapperStruct00.var_1_1 = 128u;
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 65535);
 assume_abort_if_not(WrapperStruct00.var_1_4 != 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 17);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 16);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 4611686.018427387900e+12F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427387900e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 65534);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 1);
 WrapperStruct00.var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_21 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_21 <= 4294967294);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
 last_1_WrapperStruct00_var_1_18 = WrapperStruct00.var_1_18;
 last_1_WrapperStruct00_var_1_20 = WrapperStruct00.var_1_20;
}
int property() {
 return ((((((((((WrapperStruct00.var_1_18) > (WrapperStruct00.var_1_18)) ? (WrapperStruct00.var_1_18) : (WrapperStruct00.var_1_18))) / WrapperStruct00.var_1_4) > WrapperStruct00.var_1_20) ? ((WrapperStruct00.var_1_20 == WrapperStruct00.var_1_18) ? (WrapperStruct00.var_1_1 == ((unsigned long int) 1000000000u)) : (WrapperStruct00.var_1_1 == ((unsigned long int) 128u))) : 1) && (((WrapperStruct00.var_1_4 - last_1_WrapperStruct00_var_1_20) == last_1_WrapperStruct00_var_1_18) ? ((((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) - WrapperStruct00.var_1_11) > WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_6 == ((unsigned short int) (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_8))) : 1) : (WrapperStruct00.var_1_6 == ((unsigned short int) WrapperStruct00.var_1_13)))) && (last_1_WrapperStruct00_var_1_14 ? (WrapperStruct00.var_1_14 == ((unsigned char) (WrapperStruct00.var_1_16 && WrapperStruct00.var_1_17))) : 1)) && ((WrapperStruct00.var_1_13 > WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_18 == ((signed long int) (((((WrapperStruct00.var_1_6) < (WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_6) : (WrapperStruct00.var_1_13))) - WrapperStruct00.var_1_6))) : 1)) && (WrapperStruct00.var_1_20 == ((unsigned long int) ((((((((last_1_WrapperStruct00_var_1_20) < 0 ) ? -(last_1_WrapperStruct00_var_1_20) : (last_1_WrapperStruct00_var_1_20)))) < ((WrapperStruct00.var_1_21 - WrapperStruct00.var_1_7))) ? (((((last_1_WrapperStruct00_var_1_20) < 0 ) ? -(last_1_WrapperStruct00_var_1_20) : (last_1_WrapperStruct00_var_1_20)))) : ((WrapperStruct00.var_1_21 - WrapperStruct00.var_1_7))))))
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

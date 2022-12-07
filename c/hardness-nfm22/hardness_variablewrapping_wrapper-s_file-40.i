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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch40Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned char var_1_7;
 signed long int var_1_8;
 signed long int var_1_9;
 unsigned char var_1_11;
 unsigned char var_1_12;
 double var_1_13;
 double var_1_15;
 signed char var_1_16;
 signed char var_1_17;
 signed char var_1_18;
 float var_1_19;
 signed short int var_1_20;
 signed short int var_1_21;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -4,
 0,
 0,
 64,
 -2,
 -10,
 128,
 1,
 8.4,
 49.75,
 -2,
 25,
 -5,
 7.5,
 1,
 -256
};
double last_1_WrapperStruct00_var_1_13 = 8.4;
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_16 = ((((WrapperStruct00.var_1_17) > ((-2 + WrapperStruct00.var_1_18))) ? (WrapperStruct00.var_1_17) : ((-2 + WrapperStruct00.var_1_18))));
 }
 WrapperStruct00.var_1_19 = WrapperStruct00.var_1_15;
 WrapperStruct00.var_1_20 = WrapperStruct00.var_1_16;
 WrapperStruct00.var_1_21 = WrapperStruct00.var_1_18;
 if (WrapperStruct00.var_1_2) {
  if (WrapperStruct00.var_1_3 && (WrapperStruct00.var_1_19 <= (- 63.9f))) {
   if (WrapperStruct00.var_1_19 >= WrapperStruct00.var_1_19) {
    if (WrapperStruct00.var_1_3) {
     WrapperStruct00.var_1_1 = WrapperStruct00.var_1_21;
    }
   }
  }
 }
 if (((WrapperStruct00.var_1_16 / WrapperStruct00.var_1_8) / WrapperStruct00.var_1_9) >= (WrapperStruct00.var_1_21 | WrapperStruct00.var_1_16)) {
  WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12);
 } else {
  WrapperStruct00.var_1_7 = WrapperStruct00.var_1_12;
 }
 if (WrapperStruct00.var_1_19 != ((((last_1_WrapperStruct00_var_1_13) < (WrapperStruct00.var_1_19)) ? (last_1_WrapperStruct00_var_1_13) : (WrapperStruct00.var_1_19)))) {
  WrapperStruct00.var_1_13 = (WrapperStruct00.var_1_15 + (127.4 - 8.25));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_9 != 0);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 254);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 127);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 126);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 63);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
}
int property() {
 return ((((((WrapperStruct00.var_1_2 ? ((WrapperStruct00.var_1_3 && (WrapperStruct00.var_1_19 <= (- 63.9f))) ? ((WrapperStruct00.var_1_19 >= WrapperStruct00.var_1_19) ? (WrapperStruct00.var_1_3 ? (WrapperStruct00.var_1_1 == ((signed long int) WrapperStruct00.var_1_21)) : 1) : 1) : 1) : 1) && ((((WrapperStruct00.var_1_16 / WrapperStruct00.var_1_8) / WrapperStruct00.var_1_9) >= (WrapperStruct00.var_1_21 | WrapperStruct00.var_1_16)) ? (WrapperStruct00.var_1_7 == ((unsigned char) (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12))) : (WrapperStruct00.var_1_7 == ((unsigned char) WrapperStruct00.var_1_12)))) && ((WrapperStruct00.var_1_19 != ((((last_1_WrapperStruct00_var_1_13) < (WrapperStruct00.var_1_19)) ? (last_1_WrapperStruct00_var_1_13) : (WrapperStruct00.var_1_19)))) ? (WrapperStruct00.var_1_13 == ((double) (WrapperStruct00.var_1_15 + (127.4 - 8.25)))) : 1)) && (WrapperStruct00.var_1_3 ? (WrapperStruct00.var_1_16 == ((signed char) ((((WrapperStruct00.var_1_17) > ((-2 + WrapperStruct00.var_1_18))) ? (WrapperStruct00.var_1_17) : ((-2 + WrapperStruct00.var_1_18)))))) : 1)) && (WrapperStruct00.var_1_19 == ((float) WrapperStruct00.var_1_15))) && (WrapperStruct00.var_1_20 == ((signed short int) WrapperStruct00.var_1_16))) && (WrapperStruct00.var_1_21 == ((signed short int) WrapperStruct00.var_1_18))
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

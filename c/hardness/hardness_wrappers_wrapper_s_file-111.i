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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 float var_1_2;
 float var_1_3;
 double var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 double var_1_7;
 double var_1_8;
 signed long int var_1_9;
 signed long int var_1_10;
 unsigned short int var_1_11;
 unsigned short int var_1_12;
 unsigned short int var_1_13;
 unsigned short int var_1_14;
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
 255.8,
 50.5,
 8.5,
 64.15,
 0,
 0,
 7.5,
 5.375,
 -256,
 -100,
 32,
 32,
 10000,
 2,
 32.5
};
double last_1_WrapperStruct00_var_1_15 = 32.5;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = WrapperStruct00.var_1_6;
 if (WrapperStruct00.var_1_2 < WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_1 = ((((1.25) < (WrapperStruct00.var_1_4)) ? (1.25) : (WrapperStruct00.var_1_4)));
 } else {
  if (WrapperStruct00.var_1_5 || stepLocal_0) {
   WrapperStruct00.var_1_1 = (((((WrapperStruct00.var_1_7) < 0 ) ? -(WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_7))) + WrapperStruct00.var_1_8);
  }
 }
 unsigned short int stepLocal_1 = WrapperStruct00.var_1_14;
 if (stepLocal_1 >= WrapperStruct00.var_1_12) {
  if (last_1_WrapperStruct00_var_1_15 > WrapperStruct00.var_1_8) {
   if (WrapperStruct00.var_1_4 >= WrapperStruct00.var_1_7) {
    WrapperStruct00.var_1_15 = WrapperStruct00.var_1_8;
   } else {
    WrapperStruct00.var_1_15 = WrapperStruct00.var_1_4;
   }
  }
 } else {
  WrapperStruct00.var_1_15 = WrapperStruct00.var_1_8;
 }
 if (WrapperStruct00.var_1_7 != (((((WrapperStruct00.var_1_8 * WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_15)) ? ((WrapperStruct00.var_1_8 * WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_15)))) {
  if (WrapperStruct00.var_1_7 <= WrapperStruct00.var_1_15) {
   if (WrapperStruct00.var_1_6) {
    WrapperStruct00.var_1_9 = WrapperStruct00.var_1_10;
   }
  }
 } else {
  WrapperStruct00.var_1_9 = WrapperStruct00.var_1_10;
 }
 if (WrapperStruct00.var_1_8 <= WrapperStruct00.var_1_15) {
  WrapperStruct00.var_1_11 = (32 + (WrapperStruct00.var_1_12 + (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_14)));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483646);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 16384);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 8191);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 16383);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 8191);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_15 = WrapperStruct00.var_1_15;
}
int property(void) {
 return ((((WrapperStruct00.var_1_2 < WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((double) ((((1.25) < (WrapperStruct00.var_1_4)) ? (1.25) : (WrapperStruct00.var_1_4))))) : ((WrapperStruct00.var_1_5 || WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_1 == ((double) (((((WrapperStruct00.var_1_7) < 0 ) ? -(WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_7))) + WrapperStruct00.var_1_8))) : 1)) && ((WrapperStruct00.var_1_7 != (((((WrapperStruct00.var_1_8 * WrapperStruct00.var_1_15)) > (WrapperStruct00.var_1_15)) ? ((WrapperStruct00.var_1_8 * WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_15)))) ? ((WrapperStruct00.var_1_7 <= WrapperStruct00.var_1_15) ? (WrapperStruct00.var_1_6 ? (WrapperStruct00.var_1_9 == ((signed long int) WrapperStruct00.var_1_10)) : 1) : 1) : (WrapperStruct00.var_1_9 == ((signed long int) WrapperStruct00.var_1_10)))) && ((WrapperStruct00.var_1_8 <= WrapperStruct00.var_1_15) ? (WrapperStruct00.var_1_11 == ((unsigned short int) (32 + (WrapperStruct00.var_1_12 + (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_14))))) : 1)) && ((WrapperStruct00.var_1_14 >= WrapperStruct00.var_1_12) ? ((last_1_WrapperStruct00_var_1_15 > WrapperStruct00.var_1_8) ? ((WrapperStruct00.var_1_4 >= WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_15 == ((double) WrapperStruct00.var_1_8)) : (WrapperStruct00.var_1_15 == ((double) WrapperStruct00.var_1_4))) : 1) : (WrapperStruct00.var_1_15 == ((double) WrapperStruct00.var_1_8)))
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

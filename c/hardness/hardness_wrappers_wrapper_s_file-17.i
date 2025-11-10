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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 unsigned char var_1_2;
 double var_1_3;
 double var_1_4;
 double var_1_5;
 signed short int var_1_6;
 double var_1_7;
 double var_1_8;
 signed short int var_1_9;
 signed short int var_1_10;
 unsigned char var_1_11;
 unsigned long int var_1_12;
 float var_1_13;
 double var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 10000000.8,
 0,
 16.2,
 7.5,
 49.6,
 -10,
 4.5,
 9.4,
 128,
 128,
 0,
 100,
 128.4,
 3.5,
 16,
 2,
 32
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_3 + ((((WrapperStruct00.var_1_4) < ((49.5 + WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_4) : ((49.5 + WrapperStruct00.var_1_5)))));
 }
 if ((- (WrapperStruct00.var_1_7 - WrapperStruct00.var_1_8)) <= WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_6 = ((8 + WrapperStruct00.var_1_9) - WrapperStruct00.var_1_10);
 } else {
  if (WrapperStruct00.var_1_2) {
   if (WrapperStruct00.var_1_11) {
    WrapperStruct00.var_1_6 = WrapperStruct00.var_1_9;
   }
  } else {
   WrapperStruct00.var_1_6 = WrapperStruct00.var_1_10;
  }
 }
 WrapperStruct00.var_1_12 = WrapperStruct00.var_1_9;
 if (WrapperStruct00.var_1_7 < (WrapperStruct00.var_1_8 - WrapperStruct00.var_1_14)) {
  WrapperStruct00.var_1_13 = ((((WrapperStruct00.var_1_4) > (((((((((127.4f) > (WrapperStruct00.var_1_5)) ? (127.4f) : (WrapperStruct00.var_1_5)))) > (WrapperStruct00.var_1_3)) ? (((((127.4f) > (WrapperStruct00.var_1_5)) ? (127.4f) : (WrapperStruct00.var_1_5)))) : (WrapperStruct00.var_1_3))))) ? (WrapperStruct00.var_1_4) : (((((((((127.4f) > (WrapperStruct00.var_1_5)) ? (127.4f) : (WrapperStruct00.var_1_5)))) > (WrapperStruct00.var_1_3)) ? (((((127.4f) > (WrapperStruct00.var_1_5)) ? (127.4f) : (WrapperStruct00.var_1_5)))) : (WrapperStruct00.var_1_3))))));
 }
 signed short int stepLocal_1 = WrapperStruct00.var_1_9;
 signed long int stepLocal_0 = WrapperStruct00.var_1_9 + WrapperStruct00.var_1_6;
 if (stepLocal_1 >= WrapperStruct00.var_1_10) {
  if (stepLocal_0 >= WrapperStruct00.var_1_12) {
   WrapperStruct00.var_1_15 = WrapperStruct00.var_1_16;
  } else {
   WrapperStruct00.var_1_15 = WrapperStruct00.var_1_17;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 16383);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 32766);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 254);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((double) (WrapperStruct00.var_1_3 + ((((WrapperStruct00.var_1_4) < ((49.5 + WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_4) : ((49.5 + WrapperStruct00.var_1_5))))))) : 1) && (((- (WrapperStruct00.var_1_7 - WrapperStruct00.var_1_8)) <= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_6 == ((signed short int) ((8 + WrapperStruct00.var_1_9) - WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_11 ? (WrapperStruct00.var_1_6 == ((signed short int) WrapperStruct00.var_1_9)) : 1) : (WrapperStruct00.var_1_6 == ((signed short int) WrapperStruct00.var_1_10))))) && (WrapperStruct00.var_1_12 == ((unsigned long int) WrapperStruct00.var_1_9))) && ((WrapperStruct00.var_1_7 < (WrapperStruct00.var_1_8 - WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13 == ((float) ((((WrapperStruct00.var_1_4) > (((((((((127.4f) > (WrapperStruct00.var_1_5)) ? (127.4f) : (WrapperStruct00.var_1_5)))) > (WrapperStruct00.var_1_3)) ? (((((127.4f) > (WrapperStruct00.var_1_5)) ? (127.4f) : (WrapperStruct00.var_1_5)))) : (WrapperStruct00.var_1_3))))) ? (WrapperStruct00.var_1_4) : (((((((((127.4f) > (WrapperStruct00.var_1_5)) ? (127.4f) : (WrapperStruct00.var_1_5)))) > (WrapperStruct00.var_1_3)) ? (((((127.4f) > (WrapperStruct00.var_1_5)) ? (127.4f) : (WrapperStruct00.var_1_5)))) : (WrapperStruct00.var_1_3)))))))) : 1)) && ((WrapperStruct00.var_1_9 >= WrapperStruct00.var_1_10) ? (((WrapperStruct00.var_1_9 + WrapperStruct00.var_1_6) >= WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_15 == ((unsigned char) WrapperStruct00.var_1_16)) : (WrapperStruct00.var_1_15 == ((unsigned char) WrapperStruct00.var_1_17))) : 1)
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

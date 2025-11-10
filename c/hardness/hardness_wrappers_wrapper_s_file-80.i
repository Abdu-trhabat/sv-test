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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch80Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed long int var_1_2;
 signed long int var_1_3;
 signed long int var_1_4;
 signed long int var_1_5;
 signed long int var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 signed short int var_1_9;
 signed short int var_1_10;
 signed short int var_1_11;
 signed char var_1_12;
 unsigned char var_1_13;
 signed char var_1_14;
 double var_1_15;
 double var_1_16;
 double var_1_17;
 double var_1_18;
 double var_1_19;
 double var_1_20;
 double var_1_21;
 double var_1_22;
 unsigned short int var_1_23;
 signed char var_1_24;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 256,
 256,
 0,
 -2,
 8,
 10,
 5,
 128,
 -1,
 1,
 10,
 0,
 1,
 2,
 1.8,
 25.8,
 5.5,
 4.3,
 500.7,
 127.5,
 1.5,
 99.84,
 4,
 -64
};
void initially(void) {
}
void step(void) {
 if ((((((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3)) > (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3)) : (WrapperStruct00.var_1_4))) <= (((((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) < ((WrapperStruct00.var_1_7 % WrapperStruct00.var_1_8))) ? ((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) : ((WrapperStruct00.var_1_7 % WrapperStruct00.var_1_8))))) {
  WrapperStruct00.var_1_1 = (((((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)) < (WrapperStruct00.var_1_11)) ? ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)) : (WrapperStruct00.var_1_11)));
 }
 unsigned char stepLocal_0 = WrapperStruct00.var_1_1 <= WrapperStruct00.var_1_11;
 if (WrapperStruct00.var_1_13 || stepLocal_0) {
  WrapperStruct00.var_1_12 = ((((1 - WrapperStruct00.var_1_14) < 0 ) ? -(1 - WrapperStruct00.var_1_14) : (1 - WrapperStruct00.var_1_14)));
 } else {
  WrapperStruct00.var_1_12 = WrapperStruct00.var_1_14;
 }
 signed long int stepLocal_1 = WrapperStruct00.var_1_2 / WrapperStruct00.var_1_8;
 if (WrapperStruct00.var_1_10 <= stepLocal_1) {
  WrapperStruct00.var_1_15 = ((((((((((((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17)))) > (WrapperStruct00.var_1_18)) ? (((((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17)))) : (WrapperStruct00.var_1_18)))) < (((((3.6) > (WrapperStruct00.var_1_19)) ? (3.6) : (WrapperStruct00.var_1_19))))) ? (((((((((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17)))) > (WrapperStruct00.var_1_18)) ? (((((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17)))) : (WrapperStruct00.var_1_18)))) : (((((3.6) > (WrapperStruct00.var_1_19)) ? (3.6) : (WrapperStruct00.var_1_19))))));
 } else {
  WrapperStruct00.var_1_15 = (WrapperStruct00.var_1_20 - WrapperStruct00.var_1_21);
 }
 WrapperStruct00.var_1_22 = WrapperStruct00.var_1_19;
 WrapperStruct00.var_1_23 = WrapperStruct00.var_1_10;
 WrapperStruct00.var_1_24 = WrapperStruct00.var_1_14;
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 32766);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 32766);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 32766);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 126);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_17 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_18 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_19 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_19 <= -1.0e-20F) || (WrapperStruct00.var_1_19 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_19 >= 1.0e-20F ));
 WrapperStruct00.var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_20 >= 0.0F && WrapperStruct00.var_1_20 <= -1.0e-20F) || (WrapperStruct00.var_1_20 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_20 >= 1.0e-20F ));
 WrapperStruct00.var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_21 >= 0.0F && WrapperStruct00.var_1_21 <= -1.0e-20F) || (WrapperStruct00.var_1_21 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_21 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3)) > (WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3)) : (WrapperStruct00.var_1_4))) <= (((((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) < ((WrapperStruct00.var_1_7 % WrapperStruct00.var_1_8))) ? ((WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) : ((WrapperStruct00.var_1_7 % WrapperStruct00.var_1_8))))) ? (WrapperStruct00.var_1_1 == ((signed short int) (((((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)) < (WrapperStruct00.var_1_11)) ? ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)) : (WrapperStruct00.var_1_11))))) : 1) && ((WrapperStruct00.var_1_13 || (WrapperStruct00.var_1_1 <= WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_12 == ((signed char) ((((1 - WrapperStruct00.var_1_14) < 0 ) ? -(1 - WrapperStruct00.var_1_14) : (1 - WrapperStruct00.var_1_14))))) : (WrapperStruct00.var_1_12 == ((signed char) WrapperStruct00.var_1_14)))) && ((WrapperStruct00.var_1_10 <= (WrapperStruct00.var_1_2 / WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_15 == ((double) ((((((((((((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17)))) > (WrapperStruct00.var_1_18)) ? (((((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17)))) : (WrapperStruct00.var_1_18)))) < (((((3.6) > (WrapperStruct00.var_1_19)) ? (3.6) : (WrapperStruct00.var_1_19))))) ? (((((((((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17)))) > (WrapperStruct00.var_1_18)) ? (((((WrapperStruct00.var_1_16) < (WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_16) : (WrapperStruct00.var_1_17)))) : (WrapperStruct00.var_1_18)))) : (((((3.6) > (WrapperStruct00.var_1_19)) ? (3.6) : (WrapperStruct00.var_1_19)))))))) : (WrapperStruct00.var_1_15 == ((double) (WrapperStruct00.var_1_20 - WrapperStruct00.var_1_21))))) && (WrapperStruct00.var_1_22 == ((double) WrapperStruct00.var_1_19))) && (WrapperStruct00.var_1_23 == ((unsigned short int) WrapperStruct00.var_1_10))) && (WrapperStruct00.var_1_24 == ((signed char) WrapperStruct00.var_1_14))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch56PS_CN_25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 8;
signed long int var_1_10 = -5;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 200;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 32;
signed char var_1_19 = -50;
signed char var_1_20 = 32;
signed char var_1_21 = 5;
signed char var_1_22 = 16;
signed char var_1_23 = 2;
signed short int var_1_24 = -10;
signed short int var_1_25 = -128;
signed short int var_1_26 = 5;
signed long int var_1_27 = 32;
signed short int var_1_28 = 2;
signed short int var_1_29 = -64;
signed short int var_1_30 = -25;
unsigned long int var_1_31 = 5;
unsigned long int var_1_32 = 8;
unsigned char var_1_33 = 0;
signed long int var_1_34 = 256;
signed long int var_1_35 = 4;
unsigned char var_1_36 = 0;
unsigned long int var_1_37 = 1000;
signed short int var_1_38 = 32;
signed char var_1_39 = 32;
signed char var_1_40 = 32;
unsigned long int var_1_41 = 32;
unsigned short int var_1_42 = 4;
void initially(void) {
}
void step(void) {
 if ((var_1_25 ^ var_1_26) >= var_1_27) {
  var_1_24 = ((((((((var_1_28 + var_1_29) < 0 ) ? -(var_1_28 + var_1_29) : (var_1_28 + var_1_29)))) > (var_1_30)) ? (((((var_1_28 + var_1_29) < 0 ) ? -(var_1_28 + var_1_29) : (var_1_28 + var_1_29)))) : (var_1_30)));
 }
 var_1_31 = var_1_32;
 if ((var_1_25 % ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))) > var_1_24) {
  var_1_33 = (! (! var_1_36));
 }
 if (var_1_28 < (var_1_38 - ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) {
  if ((var_1_39 - var_1_40) > var_1_34) {
   var_1_37 = var_1_41;
  } else {
   var_1_37 = var_1_32;
  }
 }
 var_1_42 = 128;
 unsigned char stepLocal_0 = var_1_2;
 if (stepLocal_0 && var_1_3) {
  var_1_1 = ((! var_1_4) || (! (var_1_2 || var_1_5)));
 }
 var_1_12 = ((64 + var_1_13) - var_1_14);
 var_1_15 = ((var_1_16 - var_1_17) - 10);
 if (var_1_1) {
  var_1_18 = (var_1_16 - var_1_13);
 }
 signed long int stepLocal_2 = - (var_1_15 / var_1_13);
 if (stepLocal_2 <= (var_1_17 + var_1_18)) {
  var_1_19 = ((((var_1_16) < ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) ? (var_1_16) : ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))));
 } else {
  var_1_19 = ((((var_1_17) < (((var_1_20 + var_1_21) - var_1_22))) ? (var_1_17) : (((var_1_20 + var_1_21) - var_1_22))));
 }
 if (var_1_4) {
  var_1_6 = (var_1_15 + ((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18))));
 }
 signed long int stepLocal_1 = (((var_1_15) < ((var_1_18 / 256))) ? (var_1_15) : ((var_1_18 / 256)));
 if (var_1_18 >= stepLocal_1) {
  var_1_10 = var_1_19;
 } else {
  var_1_10 = ((((var_1_15) > (var_1_18)) ? (var_1_15) : (var_1_18)));
 }
 if (var_1_22 >= var_1_10) {
  var_1_23 = (var_1_21 + var_1_17);
 } else {
  if (! (var_1_18 >= var_1_22)) {
   var_1_23 = ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)));
  } else {
   var_1_23 = var_1_17;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 64);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 190);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32768);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -32768);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -16383);
 assume_abort_if_not(var_1_28 <= 16383);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -16383);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32767);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483648);
 assume_abort_if_not(var_1_34 <= 2147483647);
 assume_abort_if_not(var_1_34 != 0);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= -2147483648);
 assume_abort_if_not(var_1_35 <= 2147483647);
 assume_abort_if_not(var_1_35 != 0);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= -1);
 assume_abort_if_not(var_1_38 <= 32767);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -1);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 4294967294);
}
void updateLastVariables() {
}
int property() {
 return ((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) ((! var_1_4) || (! (var_1_2 || var_1_5))))) : 1) && (var_1_4 ? (var_1_6 == ((unsigned short int) (var_1_15 + ((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18)))))) : 1)) && ((var_1_18 >= ((((var_1_15) < ((var_1_18 / 256))) ? (var_1_15) : ((var_1_18 / 256))))) ? (var_1_10 == ((signed long int) var_1_19)) : (var_1_10 == ((signed long int) ((((var_1_15) > (var_1_18)) ? (var_1_15) : (var_1_18))))))) && (var_1_12 == ((unsigned char) ((64 + var_1_13) - var_1_14)))) && (var_1_15 == ((unsigned char) ((var_1_16 - var_1_17) - 10)))) && (var_1_1 ? (var_1_18 == ((unsigned char) (var_1_16 - var_1_13))) : 1)) && (((- (var_1_15 / var_1_13)) <= (var_1_17 + var_1_18)) ? (var_1_19 == ((signed char) ((((var_1_16) < ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) ? (var_1_16) : ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))))))) : (var_1_19 == ((signed char) ((((var_1_17) < (((var_1_20 + var_1_21) - var_1_22))) ? (var_1_17) : (((var_1_20 + var_1_21) - var_1_22)))))))) && ((var_1_22 >= var_1_10) ? (var_1_23 == ((signed char) (var_1_21 + var_1_17))) : ((! (var_1_18 >= var_1_22)) ? (var_1_23 == ((signed char) ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22))))) : (var_1_23 == ((signed char) var_1_17))))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch32100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 4;
signed char var_1_9 = 4;
signed char var_1_10 = 2;
signed char var_1_11 = 4;
signed char var_1_12 = -25;
signed char var_1_13 = 8;
signed char var_1_14 = 50;
signed char var_1_15 = 32;
signed char var_1_16 = 64;
double var_1_17 = 4.775;
unsigned long int var_1_18 = 0;
unsigned long int var_1_19 = 3621235500;
signed char var_1_20 = 50;
unsigned long int var_1_21 = 0;
unsigned long int var_1_22 = 2941649671;
float var_1_23 = 9.5;
float var_1_24 = 255.4;
unsigned short int var_1_25 = 128;
unsigned short int var_1_26 = 44368;
unsigned short int var_1_27 = 128;
unsigned short int var_1_28 = 28714;
unsigned long int var_1_29 = 128;
signed long int var_1_30 = -128;
signed long int var_1_31 = 1177635702;
signed long int var_1_32 = 1100114658;
unsigned char last_1_var_1_1 = 0;
signed char last_1_var_1_9 = 4;
unsigned long int last_1_var_1_18 = 0;
unsigned short int last_1_var_1_25 = 128;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_1) {
  if (last_1_var_1_1) {
   var_1_18 = last_1_var_1_18;
  } else {
   if (((var_1_12 + last_1_var_1_18) * last_1_var_1_18) >= last_1_var_1_25) {
    var_1_18 = (var_1_19 - var_1_16);
   } else {
    var_1_18 = var_1_13;
   }
  }
 }
 if (var_1_3) {
  var_1_25 = ((((var_1_18) < ((var_1_26 - var_1_13))) ? (var_1_18) : ((var_1_26 - var_1_13))));
 } else {
  if (last_1_var_1_25 >= (16u * var_1_11)) {
   var_1_25 = var_1_26;
  } else {
   var_1_25 = var_1_18;
  }
 }
 if (var_1_2) {
  var_1_1 = ((! (var_1_3 || var_1_4)) && var_1_5);
 } else {
  var_1_1 = var_1_4;
 }
 if ((((((var_1_14 / var_1_16)) > (var_1_10)) ? ((var_1_14 / var_1_16)) : (var_1_10))) > var_1_11) {
  var_1_17 = (8.25 - 255.8);
 }
 signed char stepLocal_2 = var_1_14;
 signed char stepLocal_1 = var_1_15;
 if (stepLocal_2 <= var_1_16) {
  var_1_20 = var_1_16;
 } else {
  if (stepLocal_1 <= var_1_12) {
   var_1_20 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
  } else {
   var_1_20 = var_1_11;
  }
 }
 signed char stepLocal_5 = var_1_12;
 signed char stepLocal_4 = var_1_14;
 signed long int stepLocal_3 = var_1_25 * var_1_13;
 if (stepLocal_5 <= var_1_10) {
  if (stepLocal_3 == var_1_15) {
   var_1_23 = ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)));
  } else {
   if (0 >= stepLocal_4) {
    var_1_23 = var_1_24;
   } else {
    var_1_23 = var_1_24;
   }
  }
 }
 var_1_27 = ((var_1_28 - var_1_13) + var_1_16);
 if (var_1_1) {
  var_1_29 = var_1_19;
 }
 if (((((var_1_19) > (var_1_27)) ? (var_1_19) : (var_1_27))) <= (var_1_22 - 4u)) {
  var_1_21 = var_1_13;
 } else {
  var_1_21 = var_1_14;
 }
 if (var_1_26 > ((((38760 - var_1_21) < 0 ) ? -(38760 - var_1_21) : (38760 - var_1_21)))) {
  var_1_30 = (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - (((((var_1_31 - var_1_18)) > ((var_1_32 - var_1_27))) ? ((var_1_31 - var_1_18)) : ((var_1_32 - var_1_27)))));
 } else {
  if (var_1_10 == (var_1_14 - var_1_16)) {
   var_1_30 = -1;
  } else {
   var_1_30 = var_1_27;
  }
 }
 unsigned char stepLocal_0 = var_1_5;
 if ((var_1_30 >= var_1_29) && stepLocal_0) {
  var_1_6 = var_1_29;
 } else {
  if (! (! (var_1_29 < var_1_30))) {
   var_1_6 = (var_1_29 + var_1_30);
  }
 }
 if (var_1_27 > last_1_var_1_9) {
  if (var_1_6 > (var_1_27 * last_1_var_1_9)) {
   var_1_9 = ((var_1_10 - var_1_11) + ((((var_1_12) > ((var_1_13 - var_1_14))) ? (var_1_12) : ((var_1_13 - var_1_14)))));
  } else {
   var_1_9 = ((((var_1_15) > ((var_1_13 - (var_1_16 - var_1_11)))) ? (var_1_15) : ((var_1_13 - (var_1_16 - var_1_11)))));
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 0);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 63);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 32767);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 16383);
 assume_abort_if_not(var_1_28 <= 32767);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= 1073741823);
 assume_abort_if_not(var_1_31 <= 2147483646);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= 1073741823);
 assume_abort_if_not(var_1_32 <= 2147483646);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_25 = var_1_25;
}
int property() {
 return (((((((((((var_1_2 ? (var_1_1 == ((unsigned char) ((! (var_1_3 || var_1_4)) && var_1_5))) : (var_1_1 == ((unsigned char) var_1_4))) && (((var_1_30 >= var_1_29) && var_1_5) ? (var_1_6 == ((unsigned short int) var_1_29)) : ((! (! (var_1_29 < var_1_30))) ? (var_1_6 == ((unsigned short int) (var_1_29 + var_1_30))) : 1))) && ((var_1_27 > last_1_var_1_9) ? ((var_1_6 > (var_1_27 * last_1_var_1_9)) ? (var_1_9 == ((signed char) ((var_1_10 - var_1_11) + ((((var_1_12) > ((var_1_13 - var_1_14))) ? (var_1_12) : ((var_1_13 - var_1_14))))))) : (var_1_9 == ((signed char) ((((var_1_15) > ((var_1_13 - (var_1_16 - var_1_11)))) ? (var_1_15) : ((var_1_13 - (var_1_16 - var_1_11)))))))) : 1)) && (((((((var_1_14 / var_1_16)) > (var_1_10)) ? ((var_1_14 / var_1_16)) : (var_1_10))) > var_1_11) ? (var_1_17 == ((double) (8.25 - 255.8))) : 1)) && (last_1_var_1_1 ? (last_1_var_1_1 ? (var_1_18 == ((unsigned long int) last_1_var_1_18)) : ((((var_1_12 + last_1_var_1_18) * last_1_var_1_18) >= last_1_var_1_25) ? (var_1_18 == ((unsigned long int) (var_1_19 - var_1_16))) : (var_1_18 == ((unsigned long int) var_1_13)))) : 1)) && ((var_1_14 <= var_1_16) ? (var_1_20 == ((signed char) var_1_16)) : ((var_1_15 <= var_1_12) ? (var_1_20 == ((signed char) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) : (var_1_20 == ((signed char) var_1_11))))) && ((((((var_1_19) > (var_1_27)) ? (var_1_19) : (var_1_27))) <= (var_1_22 - 4u)) ? (var_1_21 == ((unsigned long int) var_1_13)) : (var_1_21 == ((unsigned long int) var_1_14)))) && ((var_1_12 <= var_1_10) ? (((var_1_25 * var_1_13) == var_1_15) ? (var_1_23 == ((float) ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))) : ((0 >= var_1_14) ? (var_1_23 == ((float) var_1_24)) : (var_1_23 == ((float) var_1_24)))) : 1)) && (var_1_3 ? (var_1_25 == ((unsigned short int) ((((var_1_18) < ((var_1_26 - var_1_13))) ? (var_1_18) : ((var_1_26 - var_1_13)))))) : ((last_1_var_1_25 >= (16u * var_1_11)) ? (var_1_25 == ((unsigned short int) var_1_26)) : (var_1_25 == ((unsigned short int) var_1_18))))) && (var_1_27 == ((unsigned short int) ((var_1_28 - var_1_13) + var_1_16)))) && (var_1_1 ? (var_1_29 == ((unsigned long int) var_1_19)) : 1)) && ((var_1_26 > ((((38760 - var_1_21) < 0 ) ? -(38760 - var_1_21) : (38760 - var_1_21)))) ? (var_1_30 == ((signed long int) (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - (((((var_1_31 - var_1_18)) > ((var_1_32 - var_1_27))) ? ((var_1_31 - var_1_18)) : ((var_1_32 - var_1_27))))))) : ((var_1_10 == (var_1_14 - var_1_16)) ? (var_1_30 == ((signed long int) -1)) : (var_1_30 == ((signed long int) var_1_27))))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}

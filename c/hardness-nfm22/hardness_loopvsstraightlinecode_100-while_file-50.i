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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 9.5;
double var_1_4 = 16.5;
unsigned short int var_1_5 = 5;
unsigned short int var_1_8 = 10000;
unsigned short int var_1_9 = 25268;
unsigned short int var_1_10 = 10;
unsigned short int var_1_11 = 52309;
unsigned short int var_1_14 = 64;
unsigned short int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 4;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 2;
double var_1_21 = 199.8;
double var_1_22 = 99999999999999.2;
double var_1_23 = 256.8;
unsigned short int var_1_24 = 64;
unsigned short int var_1_25 = 29921;
unsigned short int var_1_26 = 23676;
unsigned long int var_1_27 = 5;
unsigned long int var_1_28 = 2009810045;
unsigned long int var_1_29 = 1730872445;
unsigned long int var_1_30 = 1170603618;
unsigned long int var_1_31 = 3200007135;
double var_1_32 = 63.6;
signed long int var_1_33 = 2;
double var_1_34 = 0.0;
double var_1_35 = 0.0;
double var_1_36 = 127.5;
double var_1_37 = 0.25;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
float var_1_41 = 1.25;
unsigned char last_1_var_1_16 = 0;
unsigned long int last_1_var_1_27 = 5;
unsigned char last_1_var_1_39 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_11 - var_1_8;
 if (var_1_9 <= stepLocal_1) {
  if (last_1_var_1_16) {
   if (last_1_var_1_39) {
    var_1_14 = var_1_8;
   }
  }
 }
 unsigned char stepLocal_11 = var_1_14 == var_1_29;
 if (last_1_var_1_39 && stepLocal_11) {
  var_1_39 = (var_1_17 && (! var_1_40));
 }
 unsigned long int stepLocal_5 = last_1_var_1_27;
 if (stepLocal_5 > var_1_10) {
  var_1_18 = ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)));
 }
 signed long int stepLocal_6 = (((var_1_19 / var_1_9) < 0 ) ? -(var_1_19 / var_1_9) : (var_1_19 / var_1_9));
 if (var_1_18 < stepLocal_6) {
  var_1_24 = ((((((var_1_9) < (var_1_25)) ? (var_1_9) : (var_1_25))) + var_1_26) - var_1_8);
 }
 signed long int stepLocal_2 = var_1_24 * var_1_24;
 if (stepLocal_2 < (var_1_11 / ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) {
  var_1_15 = ((((var_1_11) < (var_1_18)) ? (var_1_11) : (var_1_18)));
 } else {
  var_1_15 = var_1_8;
 }
 unsigned short int stepLocal_0 = var_1_24;
 if (stepLocal_0 > var_1_15) {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 } else {
  var_1_1 = var_1_4;
 }
 unsigned char stepLocal_4 = var_1_18;
 signed long int stepLocal_3 = var_1_9 << var_1_18;
 if (stepLocal_3 != var_1_18) {
  if (stepLocal_4 >= (var_1_9 * var_1_18)) {
   var_1_16 = var_1_17;
  } else {
   var_1_16 = var_1_17;
  }
 } else {
  var_1_16 = var_1_17;
 }
 var_1_21 = ((6.0518857180359721E18 - var_1_22) - var_1_23);
 unsigned char stepLocal_10 = var_1_16;
 if (stepLocal_10 || (var_1_8 < (var_1_24 | var_1_28))) {
  var_1_37 = (var_1_23 - var_1_36);
 } else {
  var_1_37 = (var_1_35 - var_1_36);
 }
 var_1_41 = var_1_36;
 unsigned short int stepLocal_7 = var_1_24;
 if ((var_1_4 * var_1_1) != var_1_21) {
  if ((var_1_18 / var_1_25) > stepLocal_7) {
   var_1_27 = (((var_1_28 + var_1_29) - (10000u + 256u)) - (var_1_30 - var_1_24));
  } else {
   var_1_27 = (var_1_31 - var_1_9);
  }
 } else {
  var_1_27 = var_1_20;
 }
 unsigned long int stepLocal_9 = var_1_27 % var_1_33;
 unsigned char stepLocal_8 = var_1_39;
 if ((((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25))) * 4) < stepLocal_9) {
  if (stepLocal_8 && var_1_16) {
   var_1_32 = ((var_1_34 - var_1_22) - (((((var_1_35 - var_1_36)) > (var_1_23)) ? ((var_1_35 - var_1_36)) : (var_1_23))));
  } else {
   var_1_32 = (var_1_34 - var_1_22);
  }
 }
 if ((var_1_4 * var_1_32) == var_1_32) {
  if (var_1_39) {
   var_1_5 = (((10000 + var_1_8) + var_1_9) - var_1_18);
  } else {
   var_1_5 = (var_1_11 - var_1_8);
  }
 } else {
  if (var_1_39) {
   var_1_5 = var_1_18;
  } else {
   var_1_5 = var_1_9;
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 8192);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 16384);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 32767);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 16383);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 16384);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 1610612735);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 1610612735);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 1073741823);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 2147483647);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483648);
 assume_abort_if_not(var_1_33 <= 2147483647);
 assume_abort_if_not(var_1_33 != 0);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 4611686.018427382800e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 4611686.018427382800e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
}
void updateLastVariables() {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_39 = var_1_39;
}
int property() {
 return (((((((((((((var_1_24 > var_1_15) ? (var_1_1 == ((double) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_1 == ((double) var_1_4))) && (((var_1_4 * var_1_32) == var_1_32) ? (var_1_39 ? (var_1_5 == ((unsigned short int) (((10000 + var_1_8) + var_1_9) - var_1_18))) : (var_1_5 == ((unsigned short int) (var_1_11 - var_1_8)))) : (var_1_39 ? (var_1_5 == ((unsigned short int) var_1_18)) : (var_1_5 == ((unsigned short int) var_1_9))))) && ((var_1_9 <= (var_1_11 - var_1_8)) ? (last_1_var_1_16 ? (last_1_var_1_39 ? (var_1_14 == ((unsigned short int) var_1_8)) : 1) : 1) : 1)) && (((var_1_24 * var_1_24) < (var_1_11 / ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_15 == ((unsigned short int) ((((var_1_11) < (var_1_18)) ? (var_1_11) : (var_1_18))))) : (var_1_15 == ((unsigned short int) var_1_8)))) && (((var_1_9 << var_1_18) != var_1_18) ? ((var_1_18 >= (var_1_9 * var_1_18)) ? (var_1_16 == ((unsigned char) var_1_17)) : (var_1_16 == ((unsigned char) var_1_17))) : (var_1_16 == ((unsigned char) var_1_17)))) && ((last_1_var_1_27 > var_1_10) ? (var_1_18 == ((unsigned char) ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))))) : 1)) && (var_1_21 == ((double) ((6.0518857180359721E18 - var_1_22) - var_1_23)))) && ((var_1_18 < ((((var_1_19 / var_1_9) < 0 ) ? -(var_1_19 / var_1_9) : (var_1_19 / var_1_9)))) ? (var_1_24 == ((unsigned short int) ((((((var_1_9) < (var_1_25)) ? (var_1_9) : (var_1_25))) + var_1_26) - var_1_8))) : 1)) && (((var_1_4 * var_1_1) != var_1_21) ? (((var_1_18 / var_1_25) > var_1_24) ? (var_1_27 == ((unsigned long int) (((var_1_28 + var_1_29) - (10000u + 256u)) - (var_1_30 - var_1_24)))) : (var_1_27 == ((unsigned long int) (var_1_31 - var_1_9)))) : (var_1_27 == ((unsigned long int) var_1_20)))) && (((((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25))) * 4) < (var_1_27 % var_1_33)) ? ((var_1_39 && var_1_16) ? (var_1_32 == ((double) ((var_1_34 - var_1_22) - (((((var_1_35 - var_1_36)) > (var_1_23)) ? ((var_1_35 - var_1_36)) : (var_1_23)))))) : (var_1_32 == ((double) (var_1_34 - var_1_22)))) : 1)) && ((var_1_16 || (var_1_8 < (var_1_24 | var_1_28))) ? (var_1_37 == ((double) (var_1_23 - var_1_36))) : (var_1_37 == ((double) (var_1_35 - var_1_36))))) && ((last_1_var_1_39 && (var_1_14 == var_1_29)) ? (var_1_39 == ((unsigned char) (var_1_17 && (! var_1_40)))) : 1)) && (var_1_41 == ((float) var_1_36))
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

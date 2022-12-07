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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch85PS_CN_50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1000;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
float var_1_7 = 0.6;
unsigned long int var_1_8 = 32;
unsigned long int var_1_9 = 32;
float var_1_11 = 5.5;
unsigned long int var_1_12 = 128;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
double var_1_18 = 1.8;
double var_1_19 = 4.5;
double var_1_20 = 15.5;
signed char var_1_21 = -5;
unsigned char var_1_22 = 1;
signed short int var_1_23 = 256;
signed short int var_1_24 = 5;
signed short int var_1_25 = 16;
signed long int var_1_26 = -4;
signed char var_1_27 = 4;
float var_1_28 = 8.95;
float var_1_29 = 63.75;
signed short int var_1_30 = -256;
unsigned char var_1_31 = 0;
double var_1_32 = 99999999999.2;
double var_1_33 = 31.2;
double var_1_34 = 64.875;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
unsigned short int var_1_39 = 4;
unsigned char var_1_40 = 4;
unsigned char var_1_41 = 10;
unsigned long int last_1_var_1_1 = 1000;
unsigned char last_1_var_1_5 = 1;
unsigned long int last_1_var_1_12 = 128;
unsigned char last_1_var_1_13 = 16;
unsigned long int last_1_var_1_15 = 8;
void initially(void) {
}
void step(void) {
 if (var_1_22) {
  if ((var_1_23 - ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25)))) <= var_1_26) {
   var_1_21 = var_1_27;
  }
 }
 var_1_28 = var_1_29;
 var_1_30 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
 if ((((((var_1_32 - var_1_33)) < (var_1_29)) ? ((var_1_32 - var_1_33)) : (var_1_29))) > (var_1_34 * 31.3)) {
  if (var_1_22) {
   var_1_31 = var_1_35;
  }
 } else {
  var_1_31 = (var_1_35 && ((var_1_25 > var_1_24) && (! var_1_36)));
 }
 if ((var_1_34 / 25.4f) >= ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) {
  var_1_37 = (! (var_1_36 || var_1_35));
 }
 if (! var_1_37) {
  if ((var_1_30 + var_1_24) >= ((var_1_21 + var_1_23) << ((((5) < (var_1_39)) ? (5) : (var_1_39))))) {
   if (var_1_22 && (4.166 >= var_1_29)) {
    var_1_38 = (((((((var_1_39) < (var_1_40)) ? (var_1_39) : (var_1_40))) < 0 ) ? -((((var_1_39) < (var_1_40)) ? (var_1_39) : (var_1_40))) : ((((var_1_39) < (var_1_40)) ? (var_1_39) : (var_1_40)))));
   } else {
    var_1_38 = (128 - (var_1_39 + var_1_41));
   }
  } else {
   if (! (var_1_26 >= var_1_41)) {
    var_1_38 = var_1_39;
   } else {
    var_1_38 = 0;
   }
  }
 }
 signed long int stepLocal_1 = last_1_var_1_13;
 signed long int stepLocal_0 = last_1_var_1_13;
 if (stepLocal_1 < ((- last_1_var_1_12) * 64)) {
  if (last_1_var_1_5) {
   var_1_1 = ((((last_1_var_1_12) < 0 ) ? -(last_1_var_1_12) : (last_1_var_1_12)));
  } else {
   if (-10000000 < stepLocal_0) {
    var_1_1 = (((((((last_1_var_1_12) > (5u)) ? (last_1_var_1_12) : (5u))) < 0 ) ? -((((last_1_var_1_12) > (5u)) ? (last_1_var_1_12) : (5u))) : ((((last_1_var_1_12) > (5u)) ? (last_1_var_1_12) : (5u)))));
   } else {
    var_1_1 = 50u;
   }
  }
 }
 unsigned long int stepLocal_2 = last_1_var_1_15 + last_1_var_1_1;
 if (last_1_var_1_13 <= stepLocal_2) {
  var_1_5 = ((last_1_var_1_15 == last_1_var_1_13) && var_1_6);
 } else {
  var_1_5 = var_1_6;
 }
 unsigned char stepLocal_3 = var_1_5;
 if (stepLocal_3 || var_1_17) {
  var_1_18 = ((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + var_1_20) - 63.6);
 }
 var_1_13 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 var_1_16 = (var_1_6 && var_1_17);
 if (var_1_5) {
  var_1_15 = ((((var_1_1) > ((var_1_13 + ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) ? (var_1_1) : ((var_1_13 + ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))));
 }
 if ((var_1_15 + (var_1_15 * var_1_13)) <= ((32u / var_1_8) / var_1_9)) {
  if (1.25f < var_1_18) {
   var_1_7 = 1000000.1f;
  }
 } else {
  var_1_7 = var_1_11;
 }
 if (var_1_7 <= (- (32.8f + var_1_7))) {
  var_1_12 = last_1_var_1_12;
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967295);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 4294967295);
 assume_abort_if_not(var_1_9 != 0);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 0);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -1);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483648);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -127);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 15);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 63);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_5 = var_1_5;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_15 = var_1_15;
}
int property() {
 return ((((((((last_1_var_1_13 < ((- last_1_var_1_12) * 64)) ? (last_1_var_1_5 ? (var_1_1 == ((unsigned long int) ((((last_1_var_1_12) < 0 ) ? -(last_1_var_1_12) : (last_1_var_1_12))))) : ((-10000000 < last_1_var_1_13) ? (var_1_1 == ((unsigned long int) (((((((last_1_var_1_12) > (5u)) ? (last_1_var_1_12) : (5u))) < 0 ) ? -((((last_1_var_1_12) > (5u)) ? (last_1_var_1_12) : (5u))) : ((((last_1_var_1_12) > (5u)) ? (last_1_var_1_12) : (5u))))))) : (var_1_1 == ((unsigned long int) 50u)))) : 1) && ((last_1_var_1_13 <= (last_1_var_1_15 + last_1_var_1_1)) ? (var_1_5 == ((unsigned char) ((last_1_var_1_15 == last_1_var_1_13) && var_1_6))) : (var_1_5 == ((unsigned char) var_1_6)))) && (((var_1_15 + (var_1_15 * var_1_13)) <= ((32u / var_1_8) / var_1_9)) ? ((1.25f < var_1_18) ? (var_1_7 == ((float) 1000000.1f)) : 1) : (var_1_7 == ((float) var_1_11)))) && ((var_1_7 <= (- (32.8f + var_1_7))) ? (var_1_12 == ((unsigned long int) last_1_var_1_12)) : 1)) && (var_1_13 == ((unsigned char) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) && (var_1_5 ? (var_1_15 == ((unsigned long int) ((((var_1_1) > ((var_1_13 + ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) ? (var_1_1) : ((var_1_13 + ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))))))) : 1)) && (var_1_16 == ((unsigned char) (var_1_6 && var_1_17)))) && ((var_1_5 || var_1_17) ? (var_1_18 == ((double) ((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + var_1_20) - 63.6))) : 1)
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

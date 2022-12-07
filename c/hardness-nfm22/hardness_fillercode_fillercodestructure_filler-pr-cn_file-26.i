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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch26Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 16;
signed long int var_1_4 = -64;
signed char var_1_9 = 10;
unsigned char var_1_10 = 0;
signed char var_1_11 = -1;
unsigned short int var_1_12 = 10000;
float var_1_13 = 5.4;
float var_1_14 = 1.4;
unsigned short int var_1_18 = 32;
double var_1_20 = 1.5;
double var_1_21 = 2.75;
unsigned char var_1_22 = 5;
unsigned short int var_1_23 = 55712;
unsigned char var_1_24 = 5;
signed short int var_1_25 = 10;
float var_1_26 = 64.2;
unsigned short int var_1_27 = 64;
signed long int var_1_28 = 10000000;
signed long int var_1_29 = 64;
signed long int var_1_30 = -16;
unsigned char var_1_31 = 0;
unsigned short int var_1_32 = 8;
float var_1_33 = 2.5;
float var_1_34 = 50.5;
unsigned long int var_1_35 = 10;
unsigned char var_1_36 = 0;
unsigned long int var_1_37 = 2924974040;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
signed short int var_1_42 = 128;
signed long int var_1_43 = 256;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned long int var_1_46 = 32;
unsigned long int var_1_47 = 1000000000;
unsigned long int last_1_var_1_1 = 16;
signed char last_1_var_1_9 = 10;
unsigned short int last_1_var_1_12 = 10000;
double last_1_var_1_20 = 1.5;
unsigned char last_1_var_1_22 = 5;
signed short int last_1_var_1_25 = 10;
void initially(void) {
}
void step(void) {
 if (! var_1_10) {
  if (((((last_1_var_1_22) > (last_1_var_1_25)) ? (last_1_var_1_22) : (last_1_var_1_25))) >= last_1_var_1_12) {
   var_1_9 = (-16 + var_1_11);
  } else {
   var_1_9 = var_1_11;
  }
 } else {
  var_1_9 = var_1_11;
 }
 if (var_1_28 < (var_1_29 - ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) {
  if (var_1_31) {
   var_1_27 = var_1_32;
  }
 }
 if (var_1_33 >= (- 255.45f)) {
  var_1_38 = ((! var_1_39) && var_1_40);
 } else {
  if (var_1_40) {
   var_1_38 = var_1_39;
  }
 }
 unsigned char stepLocal_2 = var_1_10;
 signed long int stepLocal_1 = last_1_var_1_22;
 if (((var_1_13 - var_1_14) != ((((last_1_var_1_20) < (last_1_var_1_20)) ? (last_1_var_1_20) : (last_1_var_1_20)))) || stepLocal_2) {
  if (stepLocal_1 >= last_1_var_1_12) {
   var_1_12 = (((((last_1_var_1_22) < (last_1_var_1_22)) ? (last_1_var_1_22) : (last_1_var_1_22))) + 32);
  } else {
   var_1_12 = last_1_var_1_22;
  }
 }
 if (var_1_44) {
  if (var_1_45) {
   if (var_1_41) {
    var_1_47 = (((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) < 0 ) ? -((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) : ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))));
   }
  } else {
   var_1_47 = var_1_32;
  }
 }
 unsigned long int stepLocal_5 = last_1_var_1_1;
 signed long int stepLocal_4 = var_1_4 + last_1_var_1_9;
 unsigned short int stepLocal_3 = var_1_18;
 if (stepLocal_5 > last_1_var_1_12) {
  if (last_1_var_1_1 >= stepLocal_4) {
   if (stepLocal_3 == (var_1_23 - 8)) {
    var_1_22 = var_1_24;
   } else {
    var_1_22 = var_1_24;
   }
  } else {
   var_1_22 = var_1_24;
  }
 } else {
  var_1_22 = var_1_24;
 }
 if (var_1_11 > (var_1_22 * (var_1_12 + var_1_22))) {
  var_1_20 = var_1_21;
 }
 if (var_1_28 < var_1_27) {
  var_1_33 = var_1_34;
 } else {
  var_1_33 = var_1_34;
 }
 if ((var_1_20 / var_1_26) > var_1_13) {
  var_1_25 = ((((((((var_1_9) < (var_1_24)) ? (var_1_9) : (var_1_24)))) > (2)) ? (((((var_1_9) < (var_1_24)) ? (var_1_9) : (var_1_24)))) : (2)));
 } else {
  var_1_25 = var_1_11;
 }
 if (var_1_31) {
  var_1_35 = ((((var_1_32) > (var_1_27)) ? (var_1_32) : (var_1_27)));
 } else {
  if (var_1_36) {
   if (-8 < var_1_32) {
    var_1_35 = ((((var_1_37 - var_1_27) < 0 ) ? -(var_1_37 - var_1_27) : (var_1_37 - var_1_27)));
   }
  }
 }
 signed long int stepLocal_0 = (var_1_25 + var_1_9) / var_1_4;
 if (stepLocal_0 == var_1_25) {
  var_1_1 = (((((var_1_12) < (var_1_22)) ? (var_1_12) : (var_1_22))) + var_1_22);
 }
 if (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) < (var_1_30 % var_1_43)) {
  var_1_41 = ((! (var_1_40 && var_1_44)) || (var_1_39 && var_1_45));
 } else {
  var_1_41 = var_1_44;
 }
 if (var_1_36) {
  var_1_46 = (var_1_27 + ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))));
 } else {
  var_1_46 = (((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) < 0 ) ? -((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) : ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 32767);
 assume_abort_if_not(var_1_23 <= 65535);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 assume_abort_if_not(var_1_26 != 0.0F);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -1);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483647);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 65534);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_42 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_42 >= -32767);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_43 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_43 >= -2147483648);
 assume_abort_if_not(var_1_43 <= 2147483647);
 assume_abort_if_not(var_1_43 != 0);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_25 = var_1_25;
}
int property() {
 return ((((((((var_1_25 + var_1_9) / var_1_4) == var_1_25) ? (var_1_1 == ((unsigned long int) (((((var_1_12) < (var_1_22)) ? (var_1_12) : (var_1_22))) + var_1_22))) : 1) && ((! var_1_10) ? ((((((last_1_var_1_22) > (last_1_var_1_25)) ? (last_1_var_1_22) : (last_1_var_1_25))) >= last_1_var_1_12) ? (var_1_9 == ((signed char) (-16 + var_1_11))) : (var_1_9 == ((signed char) var_1_11))) : (var_1_9 == ((signed char) var_1_11)))) && ((((var_1_13 - var_1_14) != ((((last_1_var_1_20) < (last_1_var_1_20)) ? (last_1_var_1_20) : (last_1_var_1_20)))) || var_1_10) ? ((last_1_var_1_22 >= last_1_var_1_12) ? (var_1_12 == ((unsigned short int) (((((last_1_var_1_22) < (last_1_var_1_22)) ? (last_1_var_1_22) : (last_1_var_1_22))) + 32))) : (var_1_12 == ((unsigned short int) last_1_var_1_22))) : 1)) && ((var_1_11 > (var_1_22 * (var_1_12 + var_1_22))) ? (var_1_20 == ((double) var_1_21)) : 1)) && ((last_1_var_1_1 > last_1_var_1_12) ? ((last_1_var_1_1 >= (var_1_4 + last_1_var_1_9)) ? ((var_1_18 == (var_1_23 - 8)) ? (var_1_22 == ((unsigned char) var_1_24)) : (var_1_22 == ((unsigned char) var_1_24))) : (var_1_22 == ((unsigned char) var_1_24))) : (var_1_22 == ((unsigned char) var_1_24)))) && (((var_1_20 / var_1_26) > var_1_13) ? (var_1_25 == ((signed short int) ((((((((var_1_9) < (var_1_24)) ? (var_1_9) : (var_1_24)))) > (2)) ? (((((var_1_9) < (var_1_24)) ? (var_1_9) : (var_1_24)))) : (2))))) : (var_1_25 == ((signed short int) var_1_11)))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33Filler_PS_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 8;
signed short int var_1_5 = -10;
unsigned short int var_1_7 = 256;
double var_1_8 = 4.58;
double var_1_9 = -0.1;
signed short int var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = -16;
signed char var_1_15 = 8;
signed char var_1_16 = 8;
signed char var_1_17 = 10;
signed char var_1_18 = 0;
unsigned long int var_1_19 = 16;
signed char var_1_20 = 10;
signed char var_1_21 = -50;
unsigned short int var_1_22 = 64;
double var_1_27 = 128.4;
double var_1_28 = 32.75;
signed char var_1_29 = -32;
unsigned short int var_1_31 = 256;
unsigned char var_1_32 = 16;
unsigned short int var_1_33 = 47831;
unsigned short int var_1_34 = 8;
unsigned char var_1_37 = 128;
signed short int var_1_38 = 2;
signed long int var_1_40 = 256;
unsigned short int last_1_var_1_7 = 256;
signed short int last_1_var_1_11 = 0;
unsigned long int last_1_var_1_19 = 16;
void initially(void) {
}
void step(void) {
 if ((- ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) == var_1_19) {
  var_1_22 = var_1_17;
 }
 var_1_27 = var_1_28;
 if (var_1_17 > var_1_21) {
  var_1_29 = ((((-2) > (var_1_18)) ? (-2) : (var_1_18)));
 }
 if (0 <= (var_1_19 - ((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16))))) {
  var_1_31 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
 }
 if (var_1_1 <= (var_1_5 / (var_1_33 - var_1_34))) {
  if (-64 >= (((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) < 0 ) ? -((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) : ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) {
   if (-8 > var_1_14) {
    if (var_1_9 >= var_1_28) {
     var_1_32 = (((((var_1_18 + var_1_16)) < (1)) ? ((var_1_18 + var_1_16)) : (1)));
    }
   } else {
    var_1_32 = (((((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) < 0 ) ? -((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) : ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))));
   }
  } else {
   var_1_32 = (var_1_37 - var_1_18);
  }
 }
 if (var_1_33 < var_1_1) {
  var_1_38 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
 } else {
  if (var_1_34 <= var_1_17) {
   var_1_38 = ((((var_1_37) < (((((var_1_16) > (var_1_1)) ? (var_1_16) : (var_1_1))))) ? (var_1_37) : (((((var_1_16) > (var_1_1)) ? (var_1_16) : (var_1_1))))));
  }
 }
 if ((var_1_34 % (16u + var_1_33)) < (~ var_1_37)) {
  var_1_40 = var_1_16;
 }
 unsigned long int stepLocal_1 = ~ (last_1_var_1_7 | last_1_var_1_19);
 signed long int stepLocal_0 = -10 + ((((last_1_var_1_7) < (last_1_var_1_11)) ? (last_1_var_1_7) : (last_1_var_1_11)));
 if ((- last_1_var_1_19) >= stepLocal_0) {
  if (stepLocal_1 >= last_1_var_1_11) {
   var_1_1 = last_1_var_1_19;
  }
 } else {
  var_1_1 = last_1_var_1_19;
 }
 var_1_14 = ((((((var_1_15) > (1)) ? (var_1_15) : (1))) - var_1_16) + (var_1_17 - (4 + var_1_18)));
 var_1_12 = (! ((var_1_14 < var_1_14) || var_1_13));
 unsigned char stepLocal_2 = (32.6 * var_1_8) >= var_1_9;
 if (stepLocal_2 && var_1_12) {
  var_1_7 = var_1_1;
 }
 var_1_5 = ((((var_1_1) > (var_1_14)) ? (var_1_1) : (var_1_14)));
 if (last_1_var_1_19 >= var_1_5) {
  if ((var_1_17 + (- 256u)) >= (var_1_14 % ((((500u) < 0 ) ? -(500u) : (500u))))) {
   if (last_1_var_1_19 >= (((((var_1_15) > (var_1_1)) ? (var_1_15) : (var_1_1))) / ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) {
    var_1_19 = var_1_17;
   } else {
    var_1_19 = var_1_7;
   }
  } else {
   var_1_19 = var_1_16;
  }
 } else {
  var_1_19 = var_1_18;
 }
 if (! (! (var_1_19 == var_1_19))) {
  var_1_11 = (((((0) > (var_1_7)) ? (0) : (var_1_7))) + 100);
 }
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 31);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -128);
 assume_abort_if_not(var_1_20 <= 127);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -128);
 assume_abort_if_not(var_1_21 <= 127);
 assume_abort_if_not(var_1_21 != 0);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 32767);
 assume_abort_if_not(var_1_33 <= 65535);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 32766);
 assume_abort_if_not(var_1_34 != 32767);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 127);
 assume_abort_if_not(var_1_37 <= 254);
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_19 = var_1_19;
}
int property() {
 return ((((((((- last_1_var_1_19) >= (-10 + ((((last_1_var_1_7) < (last_1_var_1_11)) ? (last_1_var_1_7) : (last_1_var_1_11))))) ? (((~ (last_1_var_1_7 | last_1_var_1_19)) >= last_1_var_1_11) ? (var_1_1 == ((unsigned short int) last_1_var_1_19)) : 1) : (var_1_1 == ((unsigned short int) last_1_var_1_19))) && (var_1_5 == ((signed short int) ((((var_1_1) > (var_1_14)) ? (var_1_1) : (var_1_14)))))) && ((((32.6 * var_1_8) >= var_1_9) && var_1_12) ? (var_1_7 == ((unsigned short int) var_1_1)) : 1)) && ((! (! (var_1_19 == var_1_19))) ? (var_1_11 == ((signed short int) (((((0) > (var_1_7)) ? (0) : (var_1_7))) + 100))) : 1)) && (var_1_12 == ((unsigned char) (! ((var_1_14 < var_1_14) || var_1_13))))) && (var_1_14 == ((signed char) ((((((var_1_15) > (1)) ? (var_1_15) : (1))) - var_1_16) + (var_1_17 - (4 + var_1_18)))))) && ((last_1_var_1_19 >= var_1_5) ? (((var_1_17 + (- 256u)) >= (var_1_14 % ((((500u) < 0 ) ? -(500u) : (500u))))) ? ((last_1_var_1_19 >= (((((var_1_15) > (var_1_1)) ? (var_1_15) : (var_1_1))) / ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) ? (var_1_19 == ((unsigned long int) var_1_17)) : (var_1_19 == ((unsigned long int) var_1_7))) : (var_1_19 == ((unsigned long int) var_1_16))) : (var_1_19 == ((unsigned long int) var_1_18)))
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

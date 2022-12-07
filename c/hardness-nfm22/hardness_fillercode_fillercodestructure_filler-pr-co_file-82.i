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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 10.8;
double var_1_4 = 5.5;
float var_1_5 = 49.2;
double var_1_7 = 49.5;
double var_1_8 = 999999999999.4;
double var_1_9 = 255.3;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -16;
signed long int var_1_15 = 25;
signed long int var_1_16 = -8;
signed long int var_1_17 = 1000000000;
signed long int var_1_18 = 256;
signed long int var_1_19 = 25;
signed long int var_1_20 = 4;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
signed long int var_1_23 = 50;
double var_1_24 = 1000000000.5;
double var_1_25 = 2.95;
unsigned char var_1_26 = 10;
unsigned char var_1_27 = 10;
float var_1_28 = 15.5;
unsigned long int var_1_30 = 10;
double var_1_36 = 63.2;
signed long int var_1_37 = 16;
float var_1_38 = 128.5;
float var_1_39 = 0.19999999999999996;
double var_1_40 = 255.8;
unsigned long int var_1_41 = 10;
double last_1_var_1_7 = 49.5;
signed long int last_1_var_1_14 = -16;
signed long int last_1_var_1_23 = 50;
void initially(void) {
}
void step(void) {
 var_1_23 = last_1_var_1_14;
 var_1_36 = 63.5;
 var_1_7 = (var_1_4 - (var_1_8 + var_1_9));
 if (var_1_10) {
  var_1_40 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
 } else {
  var_1_40 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
 }
 if (var_1_1 != ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) {
  if (((((127.4) < 0 ) ? -(127.4) : (127.4))) < var_1_7) {
   if (var_1_10) {
    var_1_41 = var_1_16;
   }
  } else {
   var_1_41 = var_1_16;
  }
 }
 if (var_1_8 <= (((((var_1_5 * 1.25)) > ((last_1_var_1_7 * var_1_9))) ? ((var_1_5 * 1.25)) : ((last_1_var_1_7 * var_1_9))))) {
  var_1_16 = ((((((last_1_var_1_23) < 0 ) ? -(last_1_var_1_23) : (last_1_var_1_23))) + last_1_var_1_23) + ((var_1_17 - var_1_18) - ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)))));
 } else {
  if (var_1_4 <= last_1_var_1_7) {
   var_1_16 = var_1_17;
  }
 }
 signed long int stepLocal_0 = var_1_23;
 if (stepLocal_0 == var_1_16) {
  var_1_1 = (var_1_4 - 4.531);
 } else {
  if ((var_1_4 - var_1_5) > var_1_7) {
   var_1_1 = var_1_4;
  } else {
   var_1_1 = var_1_4;
  }
 }
 var_1_24 = var_1_25;
 signed long int stepLocal_1 = (50 / -10) + var_1_23;
 if (stepLocal_1 >= var_1_16) {
  if (var_1_13) {
   var_1_21 = (var_1_11 && var_1_22);
  } else {
   var_1_21 = var_1_11;
  }
 } else {
  var_1_21 = var_1_11;
 }
 if ((var_1_7 * var_1_1) != var_1_25) {
  var_1_38 = (var_1_39 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))));
 }
 var_1_10 = (var_1_11 && (var_1_21 || var_1_13));
 if (var_1_10) {
  if (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) <= var_1_1) {
   if ((((((var_1_27 % var_1_30)) < (var_1_16)) ? ((var_1_27 % var_1_30)) : (var_1_16))) < (var_1_16 * (var_1_14 | var_1_23))) {
    if (((((var_1_25) > (var_1_1)) ? (var_1_25) : (var_1_1))) >= (var_1_1 * var_1_1)) {
     var_1_28 = var_1_25;
    }
   }
  } else {
   var_1_28 = var_1_25;
  }
 }
 if (var_1_27 != var_1_30) {
  var_1_37 = (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) - ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))));
 } else {
  var_1_37 = (((((((var_1_23) > (var_1_27)) ? (var_1_23) : (var_1_27))) < 0 ) ? -((((var_1_23) > (var_1_27)) ? (var_1_23) : (var_1_27))) : ((((var_1_23) > (var_1_27)) ? (var_1_23) : (var_1_27)))));
 }
 if (var_1_8 <= ((((var_1_4) > ((var_1_1 + var_1_5))) ? (var_1_4) : ((var_1_1 + var_1_5))))) {
  if (var_1_10) {
   var_1_14 = (var_1_15 + (8 + var_1_16));
  } else {
   var_1_14 = -256;
  }
 } else {
  var_1_14 = var_1_16;
 }
 if (var_1_25 <= var_1_1) {
  var_1_26 = ((((var_1_27) < (((((128) < 0 ) ? -(128) : (128))))) ? (var_1_27) : (((((128) < 0 ) ? -(128) : (128))))));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -1073741823);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 536870911);
 assume_abort_if_not(var_1_17 <= 1073741823);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 536870911);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967295);
 assume_abort_if_not(var_1_30 != 0);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_23 = var_1_23;
}
int property() {
 return (((((((var_1_23 == var_1_16) ? (var_1_1 == ((double) (var_1_4 - 4.531))) : (((var_1_4 - var_1_5) > var_1_7) ? (var_1_1 == ((double) var_1_4)) : (var_1_1 == ((double) var_1_4)))) && (var_1_7 == ((double) (var_1_4 - (var_1_8 + var_1_9))))) && (var_1_10 == ((unsigned char) (var_1_11 && (var_1_21 || var_1_13))))) && ((var_1_8 <= ((((var_1_4) > ((var_1_1 + var_1_5))) ? (var_1_4) : ((var_1_1 + var_1_5))))) ? (var_1_10 ? (var_1_14 == ((signed long int) (var_1_15 + (8 + var_1_16)))) : (var_1_14 == ((signed long int) -256))) : (var_1_14 == ((signed long int) var_1_16)))) && ((var_1_8 <= (((((var_1_5 * 1.25)) > ((last_1_var_1_7 * var_1_9))) ? ((var_1_5 * 1.25)) : ((last_1_var_1_7 * var_1_9))))) ? (var_1_16 == ((signed long int) ((((((last_1_var_1_23) < 0 ) ? -(last_1_var_1_23) : (last_1_var_1_23))) + last_1_var_1_23) + ((var_1_17 - var_1_18) - ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))))))) : ((var_1_4 <= last_1_var_1_7) ? (var_1_16 == ((signed long int) var_1_17)) : 1))) && ((((50 / -10) + var_1_23) >= var_1_16) ? (var_1_13 ? (var_1_21 == ((unsigned char) (var_1_11 && var_1_22))) : (var_1_21 == ((unsigned char) var_1_11))) : (var_1_21 == ((unsigned char) var_1_11)))) && (var_1_23 == ((signed long int) last_1_var_1_14))
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

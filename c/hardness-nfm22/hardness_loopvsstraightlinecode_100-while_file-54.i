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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch54100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned short int var_1_5 = 50;
float var_1_6 = 31.2;
float var_1_8 = 4.3;
unsigned long int var_1_9 = 50;
unsigned long int var_1_10 = 3866152425;
unsigned long int var_1_11 = 3882603586;
unsigned long int var_1_12 = 2837656922;
unsigned char var_1_13 = 1;
signed char var_1_14 = 64;
signed char var_1_15 = 2;
signed char var_1_16 = 1;
signed char var_1_17 = 16;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_21 = 0;
signed long int var_1_22 = 16;
signed char var_1_23 = 0;
signed char var_1_24 = 1;
signed char var_1_25 = 2;
signed char var_1_26 = 0;
signed char var_1_27 = -25;
signed short int var_1_28 = 4;
signed short int var_1_29 = 0;
float var_1_30 = 9.25;
float var_1_31 = 2.9;
float var_1_32 = 64.5;
float var_1_33 = 31.8;
float var_1_34 = 32.4;
float var_1_35 = 1.75;
float var_1_36 = 4.5;
unsigned short int var_1_37 = 51132;
unsigned char var_1_38 = 1;
signed long int var_1_39 = 2;
signed long int var_1_40 = 4;
unsigned short int var_1_41 = 8;
unsigned long int last_1_var_1_9 = 50;
signed short int last_1_var_1_29 = 0;
float last_1_var_1_30 = 9.25;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_30 == var_1_8) {
  if ((((((var_1_12) > (var_1_10)) ? (var_1_12) : (var_1_10))) + last_1_var_1_29) > last_1_var_1_9) {
   var_1_22 = var_1_14;
  }
 } else {
  var_1_22 = (last_1_var_1_29 - var_1_5);
 }
 var_1_23 = (((((var_1_24 - ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))) > (var_1_27)) ? ((var_1_24 - ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))) : (var_1_27)));
 if (var_1_22 >= (var_1_5 + var_1_17)) {
  var_1_28 = (var_1_15 + var_1_17);
 }
 if (var_1_21) {
  var_1_29 = ((var_1_26 + var_1_25) - 2);
 }
 if (var_1_29 > var_1_5) {
  var_1_9 = (((((var_1_10) < (((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))))) ? (var_1_10) : (((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)))))) - (var_1_29 + var_1_5));
 }
 signed long int stepLocal_4 = (((var_1_37) > (var_1_26)) ? (var_1_37) : (var_1_26));
 signed long int stepLocal_3 = (var_1_5 * var_1_14) << (var_1_39 + var_1_40);
 if ((var_1_12 + 8) <= stepLocal_4) {
  if (stepLocal_3 >= (var_1_9 ^ (~ var_1_17))) {
   var_1_38 = var_1_19;
  }
 } else {
  var_1_38 = var_1_21;
 }
 unsigned short int stepLocal_0 = var_1_5;
 if ((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))) - var_1_17) != stepLocal_0) {
  var_1_13 = (var_1_18 && (! var_1_19));
 } else {
  if (var_1_38) {
   if (var_1_19) {
    var_1_13 = 1;
   }
  } else {
   var_1_13 = var_1_21;
  }
 }
 if (var_1_13) {
  if (var_1_21) {
   var_1_41 = ((var_1_25 + (var_1_17 + 200)) + var_1_40);
  } else {
   var_1_41 = (var_1_25 + var_1_17);
  }
 } else {
  var_1_41 = var_1_26;
 }
 signed char stepLocal_2 = var_1_27;
 signed char stepLocal_1 = var_1_25;
 if (var_1_38) {
  if (var_1_22 > stepLocal_2) {
   var_1_30 = (((((((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))) < (var_1_33)) ? (((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))) : (var_1_33))) + (var_1_34 - var_1_35));
  } else {
   var_1_30 = (var_1_31 + var_1_36);
  }
 } else {
  if ((var_1_37 - (var_1_17 + var_1_26)) < stepLocal_1) {
   var_1_30 = var_1_36;
  } else {
   var_1_30 = var_1_8;
  }
 }
 if (! ((- 9.9999999999925E11) >= var_1_30)) {
  if (var_1_30 >= var_1_30) {
   if (var_1_30 < 7.5) {
    if (var_1_13) {
     var_1_1 = var_1_5;
    } else {
     var_1_1 = var_1_5;
    }
   } else {
    var_1_1 = var_1_5;
   }
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_5;
 }
 if (var_1_13 || (! var_1_13)) {
  if ((127.375f < (- var_1_30)) && var_1_13) {
   var_1_6 = 1.0000000000000095E14f;
  }
 } else {
  var_1_6 = var_1_8;
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 2147483647);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -128);
 assume_abort_if_not(var_1_14 <= 127);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -1);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -1);
 assume_abort_if_not(var_1_24 <= 126);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -127);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -461168.6018427382800e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -461168.6018427382800e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427382800e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 32767);
 assume_abort_if_not(var_1_37 <= 65535);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 4);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 4);
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_30 = var_1_30;
}
int property() {
 return (((((((((((! ((- 9.9999999999925E11) >= var_1_30)) ? ((var_1_30 >= var_1_30) ? ((var_1_30 < 7.5) ? (var_1_13 ? (var_1_1 == ((unsigned short int) var_1_5)) : (var_1_1 == ((unsigned short int) var_1_5))) : (var_1_1 == ((unsigned short int) var_1_5))) : (var_1_1 == ((unsigned short int) var_1_5))) : (var_1_1 == ((unsigned short int) var_1_5))) && ((var_1_13 || (! var_1_13)) ? (((127.375f < (- var_1_30)) && var_1_13) ? (var_1_6 == ((float) 1.0000000000000095E14f)) : 1) : (var_1_6 == ((float) var_1_8)))) && ((var_1_29 > var_1_5) ? (var_1_9 == ((unsigned long int) (((((var_1_10) < (((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))))) ? (var_1_10) : (((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)))))) - (var_1_29 + var_1_5)))) : 1)) && (((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))) - var_1_17) != var_1_5) ? (var_1_13 == ((unsigned char) (var_1_18 && (! var_1_19)))) : (var_1_38 ? (var_1_19 ? (var_1_13 == ((unsigned char) 1)) : 1) : (var_1_13 == ((unsigned char) var_1_21))))) && ((last_1_var_1_30 == var_1_8) ? (((((((var_1_12) > (var_1_10)) ? (var_1_12) : (var_1_10))) + last_1_var_1_29) > last_1_var_1_9) ? (var_1_22 == ((signed long int) var_1_14)) : 1) : (var_1_22 == ((signed long int) (last_1_var_1_29 - var_1_5))))) && (var_1_23 == ((signed char) (((((var_1_24 - ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))) > (var_1_27)) ? ((var_1_24 - ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))) : (var_1_27)))))) && ((var_1_22 >= (var_1_5 + var_1_17)) ? (var_1_28 == ((signed short int) (var_1_15 + var_1_17))) : 1)) && (var_1_21 ? (var_1_29 == ((signed short int) ((var_1_26 + var_1_25) - 2))) : 1)) && (var_1_38 ? ((var_1_22 > var_1_27) ? (var_1_30 == ((float) (((((((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))) < (var_1_33)) ? (((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))) : (var_1_33))) + (var_1_34 - var_1_35)))) : (var_1_30 == ((float) (var_1_31 + var_1_36)))) : (((var_1_37 - (var_1_17 + var_1_26)) < var_1_25) ? (var_1_30 == ((float) var_1_36)) : (var_1_30 == ((float) var_1_8))))) && (((var_1_12 + 8) <= ((((var_1_37) > (var_1_26)) ? (var_1_37) : (var_1_26)))) ? ((((var_1_5 * var_1_14) << (var_1_39 + var_1_40)) >= (var_1_9 ^ (~ var_1_17))) ? (var_1_38 == ((unsigned char) var_1_19)) : 1) : (var_1_38 == ((unsigned char) var_1_21)))) && (var_1_13 ? (var_1_21 ? (var_1_41 == ((unsigned short int) ((var_1_25 + (var_1_17 + 200)) + var_1_40))) : (var_1_41 == ((unsigned short int) (var_1_25 + var_1_17)))) : (var_1_41 == ((unsigned short int) var_1_26)))
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

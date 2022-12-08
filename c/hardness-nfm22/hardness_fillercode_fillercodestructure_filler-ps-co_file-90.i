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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch90Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -32;
signed long int var_1_3 = 10;
signed long int var_1_4 = 64;
unsigned short int var_1_11 = 64;
unsigned short int var_1_12 = 8;
unsigned short int var_1_13 = 5;
signed short int var_1_14 = 8;
unsigned short int var_1_15 = 62763;
unsigned long int var_1_16 = 25;
float var_1_18 = 63.25;
unsigned char var_1_20 = 0;
float var_1_21 = 7.8;
float var_1_22 = 32.1;
unsigned char var_1_23 = 0;
signed long int var_1_24 = -16;
signed short int var_1_26 = 16;
signed short int var_1_27 = -128;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
signed short int var_1_32 = 128;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 10;
unsigned char var_1_40 = 5;
unsigned char var_1_41 = 2;
unsigned char var_1_42 = 0;
signed long int var_1_43 = 1;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 1;
signed long int var_1_46 = 256;
unsigned long int var_1_47 = 16;
unsigned long int var_1_48 = 1289077960;
unsigned long int var_1_49 = 10;
unsigned long int var_1_50 = 3273461173;
signed long int last_1_var_1_1 = -32;
unsigned short int last_1_var_1_11 = 64;
signed short int last_1_var_1_14 = 8;
unsigned long int last_1_var_1_16 = 25;
float last_1_var_1_18 = 63.25;
void initially(void) {
}
void step(void) {
 var_1_26 = var_1_27;
 if (var_1_29) {
  if (var_1_27 < ((((((((var_1_1) < (var_1_16)) ? (var_1_1) : (var_1_16)))) > ((var_1_11 / var_1_32))) ? (((((var_1_1) < (var_1_16)) ? (var_1_1) : (var_1_16)))) : ((var_1_11 / var_1_32))))) {
   if (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) < var_1_18) {
    var_1_28 = (var_1_35 || var_1_36);
   } else {
    if (var_1_35) {
     var_1_28 = (var_1_36 || var_1_37);
    }
   }
  }
 }
 if (var_1_18 == var_1_18) {
  var_1_38 = (((((((((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) < (var_1_41)) ? (((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) : (var_1_41))) < 0 ) ? -((((((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) < (var_1_41)) ? (((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) : (var_1_41))) : ((((((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) < (var_1_41)) ? (((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) : (var_1_41)))));
 } else {
  var_1_38 = ((((var_1_41) < (((((((((var_1_40) > (var_1_39)) ? (var_1_40) : (var_1_39)))) > (var_1_42)) ? (((((var_1_40) > (var_1_39)) ? (var_1_40) : (var_1_39)))) : (var_1_42))))) ? (var_1_41) : (((((((((var_1_40) > (var_1_39)) ? (var_1_40) : (var_1_39)))) > (var_1_42)) ? (((((var_1_40) > (var_1_39)) ? (var_1_40) : (var_1_39)))) : (var_1_42))))));
 }
 var_1_43 = var_1_11;
 if (var_1_37) {
  var_1_44 = (var_1_36 && var_1_45);
 }
 if (var_1_42 <= ((var_1_41 >> var_1_40) % var_1_32)) {
  var_1_46 = var_1_40;
 }
 if (var_1_35) {
  var_1_47 = ((var_1_42 + var_1_24) + ((((var_1_39) < ((var_1_48 - var_1_41))) ? (var_1_39) : ((var_1_48 - var_1_41)))));
 }
 if (var_1_32 >= (-1000 << var_1_1)) {
  if (var_1_24 > (var_1_39 | var_1_48)) {
   var_1_49 = (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) - 32u);
  }
 } else {
  var_1_49 = var_1_40;
 }
 if ((last_1_var_1_14 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) <= (last_1_var_1_1 | last_1_var_1_16)) {
  if ((last_1_var_1_18 * last_1_var_1_18) < last_1_var_1_18) {
   var_1_1 = last_1_var_1_11;
  } else {
   var_1_1 = last_1_var_1_11;
  }
 } else {
  var_1_1 = last_1_var_1_11;
 }
 if ((- (- last_1_var_1_18)) != last_1_var_1_18) {
  if (var_1_12 <= ((((last_1_var_1_14) > ((- last_1_var_1_14))) ? (last_1_var_1_14) : ((- last_1_var_1_14))))) {
   var_1_24 = -50;
  } else {
   var_1_24 = last_1_var_1_14;
  }
 } else {
  var_1_24 = last_1_var_1_14;
 }
 if (((var_1_15 - var_1_12) + var_1_24) < var_1_24) {
  var_1_14 = var_1_12;
 }
 unsigned short int stepLocal_0 = var_1_13;
 if (var_1_24 < stepLocal_0) {
  if (var_1_20) {
   var_1_18 = (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) + var_1_22);
  } else {
   if (var_1_23) {
    var_1_18 = (var_1_22 + var_1_21);
   } else {
    var_1_18 = -0.75f;
   }
  }
 } else {
  var_1_18 = var_1_21;
 }
 if (var_1_18 != (var_1_18 + var_1_18)) {
  var_1_11 = ((var_1_12 + var_1_13) + 32);
 }
 if (((var_1_1 * var_1_4) + var_1_1) > var_1_1) {
  if (var_1_14 < var_1_1) {
   var_1_16 = var_1_12;
  }
 } else {
  var_1_16 = 0u;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16384);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 32767);
 assume_abort_if_not(var_1_15 <= 65535);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -32767);
 assume_abort_if_not(var_1_27 <= 32766);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -32768);
 assume_abort_if_not(var_1_32 <= 32767);
 assume_abort_if_not(var_1_32 != 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 254);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 1073741823);
 assume_abort_if_not(var_1_48 <= 2147483647);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 2147483647);
 assume_abort_if_not(var_1_50 <= 4294967294);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_18 = var_1_18;
}
int property() {
 return (((((((last_1_var_1_14 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) <= (last_1_var_1_1 | last_1_var_1_16)) ? (((last_1_var_1_18 * last_1_var_1_18) < last_1_var_1_18) ? (var_1_1 == ((signed long int) last_1_var_1_11)) : (var_1_1 == ((signed long int) last_1_var_1_11))) : (var_1_1 == ((signed long int) last_1_var_1_11))) && ((var_1_18 != (var_1_18 + var_1_18)) ? (var_1_11 == ((unsigned short int) ((var_1_12 + var_1_13) + 32))) : 1)) && ((((var_1_15 - var_1_12) + var_1_24) < var_1_24) ? (var_1_14 == ((signed short int) var_1_12)) : 1)) && ((((var_1_1 * var_1_4) + var_1_1) > var_1_1) ? ((var_1_14 < var_1_1) ? (var_1_16 == ((unsigned long int) var_1_12)) : 1) : (var_1_16 == ((unsigned long int) 0u)))) && ((var_1_24 < var_1_13) ? (var_1_20 ? (var_1_18 == ((float) (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) + var_1_22))) : (var_1_23 ? (var_1_18 == ((float) (var_1_22 + var_1_21))) : (var_1_18 == ((float) -0.75f)))) : (var_1_18 == ((float) var_1_21)))) && (((- (- last_1_var_1_18)) != last_1_var_1_18) ? ((var_1_12 <= ((((last_1_var_1_14) > ((- last_1_var_1_14))) ? (last_1_var_1_14) : ((- last_1_var_1_14))))) ? (var_1_24 == ((signed long int) -50)) : (var_1_24 == ((signed long int) last_1_var_1_14))) : (var_1_24 == ((signed long int) last_1_var_1_14)))
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

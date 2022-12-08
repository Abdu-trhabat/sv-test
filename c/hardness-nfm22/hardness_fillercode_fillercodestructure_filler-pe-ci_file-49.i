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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch49Filler_PE_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 10;
unsigned long int var_1_3 = 3171453299;
unsigned long int var_1_4 = 2038274679;
unsigned long int var_1_5 = 1375699353;
unsigned short int var_1_8 = 16;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
double var_1_14 = 64.45;
float var_1_15 = 31.15;
float var_1_16 = 16.4;
double var_1_17 = 100.625;
double var_1_18 = 128.1;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 8;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 0;
signed char var_1_23 = 2;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 16;
float var_1_27 = 1000000000000000.4;
unsigned short int var_1_28 = 32;
unsigned short int var_1_31 = 4;
float var_1_32 = 5.625;
float var_1_33 = 1000.75;
float var_1_34 = 255.5;
double var_1_36 = 7.6;
unsigned char var_1_37 = 1;
float var_1_39 = 5.5;
unsigned char var_1_40 = 8;
unsigned char var_1_41 = 0;
float var_1_42 = 32.2;
double var_1_43 = 255.25;
unsigned long int last_1_var_1_1 = 10;
unsigned short int last_1_var_1_8 = 16;
unsigned char last_1_var_1_12 = 1;
unsigned char last_1_var_1_19 = 1;
unsigned char last_1_var_1_22 = 0;
void initially(void) {
}
void step(void) {
 if (! last_1_var_1_22) {
  if ((last_1_var_1_1 * ((((last_1_var_1_19) < (var_1_5)) ? (last_1_var_1_19) : (var_1_5)))) >= last_1_var_1_19) {
   var_1_12 = var_1_13;
  }
 } else {
  var_1_12 = 0;
 }
 if (var_1_13 && last_1_var_1_22) {
  if (var_1_4 > (256u * last_1_var_1_8)) {
   var_1_19 = ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)));
  } else {
   var_1_19 = var_1_20;
  }
 }
 var_1_8 = ((((25) > ((((((var_1_19) < (var_1_19)) ? (var_1_19) : (var_1_19))) + (100 + var_1_19)))) ? (25) : ((((((var_1_19) < (var_1_19)) ? (var_1_19) : (var_1_19))) + (100 + var_1_19)))));
 if ((((((- 9.5f)) > ((- var_1_15))) ? ((- 9.5f)) : ((- var_1_15)))) < var_1_16) {
  var_1_14 = ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)));
 }
 if (last_1_var_1_12) {
  var_1_1 = (((((var_1_3) > ((var_1_4 + var_1_5))) ? (var_1_3) : ((var_1_4 + var_1_5)))) - (((((last_1_var_1_19) > (last_1_var_1_8)) ? (last_1_var_1_19) : (last_1_var_1_8))) + 256u));
 }
 if ((-2 / var_1_23) >= (var_1_19 & var_1_4)) {
  if (var_1_21 >= (var_1_1 + var_1_5)) {
   if ((~ var_1_19) > var_1_20) {
    if (var_1_12) {
     var_1_22 = var_1_24;
    } else {
     var_1_22 = var_1_13;
    }
   } else {
    var_1_22 = var_1_13;
   }
  } else {
   var_1_22 = var_1_13;
  }
 } else {
  var_1_22 = var_1_13;
 }
 var_1_25 = var_1_20;
 var_1_27 = 64.5f;
 if ((var_1_21 % ((((var_1_23) < (var_1_23)) ? (var_1_23) : (var_1_23)))) < var_1_19) {
  var_1_28 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)));
 } else {
  var_1_28 = var_1_19;
 }
 if ((var_1_21 <= ((((100) > (var_1_8)) ? (100) : (var_1_8)))) || ((- var_1_23) <= var_1_23)) {
  var_1_31 = var_1_21;
 } else {
  var_1_31 = var_1_23;
 }
 if (var_1_19 >= var_1_20) {
  var_1_32 = (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))));
 } else {
  var_1_32 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 }
 if (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) > var_1_21) {
  var_1_36 = ((((var_1_18) > (var_1_33)) ? (var_1_18) : (var_1_33)));
 }
 if (var_1_17 < (- var_1_16)) {
  if (var_1_8 <= ((((64) < 0 ) ? -(64) : (64)))) {
   var_1_37 = (! var_1_24);
  }
 }
 if ((var_1_23 >> ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41)))) >= -64) {
  var_1_39 = (((((var_1_42 + 10000.9f)) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? ((var_1_42 + 10000.9f)) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))));
 }
 if (var_1_42 <= (var_1_33 - var_1_34)) {
  var_1_43 = var_1_34;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 2147483647);
 assume_abort_if_not(var_1_3 <= 4294967294);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1073741823);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 1073741824);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -128);
 assume_abort_if_not(var_1_23 <= 127);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 9);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 9);
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_22 = var_1_22;
}
int property() {
 return (((((last_1_var_1_12 ? (var_1_1 == ((unsigned long int) (((((var_1_3) > ((var_1_4 + var_1_5))) ? (var_1_3) : ((var_1_4 + var_1_5)))) - (((((last_1_var_1_19) > (last_1_var_1_8)) ? (last_1_var_1_19) : (last_1_var_1_8))) + 256u)))) : 1) && (var_1_8 == ((unsigned short int) ((((25) > ((((((var_1_19) < (var_1_19)) ? (var_1_19) : (var_1_19))) + (100 + var_1_19)))) ? (25) : ((((((var_1_19) < (var_1_19)) ? (var_1_19) : (var_1_19))) + (100 + var_1_19)))))))) && ((! last_1_var_1_22) ? (((last_1_var_1_1 * ((((last_1_var_1_19) < (var_1_5)) ? (last_1_var_1_19) : (var_1_5)))) >= last_1_var_1_19) ? (var_1_12 == ((unsigned char) var_1_13)) : 1) : (var_1_12 == ((unsigned char) 0)))) && (((((((- 9.5f)) > ((- var_1_15))) ? ((- 9.5f)) : ((- var_1_15)))) < var_1_16) ? (var_1_14 == ((double) ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))))) : 1)) && ((var_1_13 && last_1_var_1_22) ? ((var_1_4 > (256u * last_1_var_1_8)) ? (var_1_19 == ((unsigned char) ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) : (var_1_19 == ((unsigned char) var_1_20))) : 1)) && (((-2 / var_1_23) >= (var_1_19 & var_1_4)) ? ((var_1_21 >= (var_1_1 + var_1_5)) ? (((~ var_1_19) > var_1_20) ? (var_1_12 ? (var_1_22 == ((unsigned char) var_1_24)) : (var_1_22 == ((unsigned char) var_1_13))) : (var_1_22 == ((unsigned char) var_1_13))) : (var_1_22 == ((unsigned char) var_1_13))) : (var_1_22 == ((unsigned char) var_1_13)))
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

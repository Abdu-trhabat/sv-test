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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 4;
unsigned short int var_1_4 = 58792;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
unsigned short int var_1_7 = 16;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1000;
signed short int var_1_11 = 1;
signed short int var_1_12 = -25;
signed short int var_1_13 = 25;
unsigned short int var_1_14 = 5;
unsigned short int var_1_16 = 20511;
unsigned long int var_1_17 = 50;
unsigned short int var_1_18 = 10;
unsigned short int var_1_19 = 2;
float var_1_20 = 100000.5;
float var_1_21 = 31.9;
float var_1_22 = -0.6;
unsigned short int var_1_23 = 32;
float var_1_24 = 24.5;
double var_1_25 = 10000000000.5;
double var_1_28 = 64.25;
signed char var_1_29 = -10;
signed char var_1_30 = -4;
unsigned long int var_1_31 = 4;
signed char var_1_32 = 100;
double var_1_33 = 199.5;
double var_1_34 = 7.6;
signed char var_1_35 = 64;
signed char var_1_36 = 10;
signed char var_1_37 = 16;
unsigned short int var_1_38 = 64;
unsigned long int var_1_39 = 500;
unsigned long int var_1_40 = 32;
unsigned char last_1_var_1_8 = 0;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_1 = var_1_6;
 unsigned char stepLocal_0 = last_1_var_1_8;
 if (last_1_var_1_8 && stepLocal_0) {
  var_1_1 = ((((((56892) < (var_1_4)) ? (56892) : (var_1_4))) - var_1_5) - ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))));
 } else {
  if (((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5))) < stepLocal_1) {
   var_1_1 = var_1_5;
  }
 }
 var_1_8 = (((var_1_7 >= var_1_5) && (var_1_4 >= var_1_1)) || var_1_9);
 if (var_1_8) {
  var_1_14 = (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - ((((var_1_5) > ((var_1_16 - var_1_11))) ? (var_1_5) : ((var_1_16 - var_1_11)))));
 }
 signed long int stepLocal_4 = (((var_1_13) > ((var_1_16 << var_1_7))) ? (var_1_13) : ((var_1_16 << var_1_7)));
 if (stepLocal_4 >= var_1_14) {
  var_1_17 = var_1_11;
 } else {
  var_1_17 = (var_1_6 + var_1_5);
 }
 unsigned short int stepLocal_5 = var_1_5;
 if (stepLocal_5 == var_1_16) {
  if (var_1_8) {
   var_1_18 = (((((var_1_16 + 30393) - var_1_5) < 0 ) ? -((var_1_16 + 30393) - var_1_5) : ((var_1_16 + 30393) - var_1_5)));
  } else {
   var_1_18 = var_1_4;
  }
 } else {
  if (var_1_9) {
   var_1_18 = 200;
  }
 }
 unsigned char stepLocal_3 = var_1_9;
 unsigned long int stepLocal_2 = var_1_17;
 if (stepLocal_2 < var_1_6) {
  if ((var_1_6 != var_1_5) || stepLocal_3) {
   var_1_10 = (((10000 - var_1_11) - var_1_5) + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))));
  } else {
   var_1_10 = var_1_4;
  }
 } else {
  var_1_10 = var_1_13;
 }
 if (var_1_20 <= var_1_21) {
  if ((var_1_21 + var_1_20) < ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) {
   if (var_1_20 <= ((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21)))) {
    var_1_19 = var_1_23;
   } else {
    if (var_1_20 != var_1_24) {
     var_1_19 = var_1_23;
    } else {
     var_1_19 = 1;
    }
   }
  }
 }
 if (var_1_8 && (! (! var_1_8))) {
  var_1_25 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
 }
 if ((var_1_25 <= var_1_22) && var_1_8) {
  var_1_29 = ((((var_1_30) > (-100)) ? (var_1_30) : (-100)));
 }
 var_1_31 = var_1_23;
 if (var_1_33 <= (var_1_25 / var_1_34)) {
  var_1_32 = (((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36))) - var_1_37);
 }
 if (var_1_18 >= ((~ 128u) % ((((var_1_39) < (var_1_40)) ? (var_1_39) : (var_1_40))))) {
  if (var_1_8) {
   var_1_38 = (((((64 + var_1_37)) > (var_1_23)) ? ((64 + var_1_37)) : (var_1_23)));
  } else {
   if ((((((var_1_36 | var_1_23)) > ((var_1_30 & var_1_14))) ? ((var_1_36 | var_1_23)) : ((var_1_30 & var_1_14)))) < var_1_18) {
    var_1_38 = ((((var_1_37) > (var_1_23)) ? (var_1_37) : (var_1_23)));
   } else {
    var_1_38 = var_1_23;
   }
  }
 } else {
  var_1_38 = var_1_23;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 49150);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 8191);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -16383);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65534);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -127);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -1);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -1);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 4294967295);
 assume_abort_if_not(var_1_39 != 0);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 4294967295);
 assume_abort_if_not(var_1_40 != 0);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
}
int property() {
 return ((((((last_1_var_1_8 && last_1_var_1_8) ? (var_1_1 == ((unsigned short int) ((((((56892) < (var_1_4)) ? (56892) : (var_1_4))) - var_1_5) - ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))))) : ((((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5))) < var_1_6) ? (var_1_1 == ((unsigned short int) var_1_5)) : 1)) && (var_1_8 == ((unsigned char) (((var_1_7 >= var_1_5) && (var_1_4 >= var_1_1)) || var_1_9)))) && ((var_1_17 < var_1_6) ? (((var_1_6 != var_1_5) || var_1_9) ? (var_1_10 == ((signed short int) (((10000 - var_1_11) - var_1_5) + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))))) : (var_1_10 == ((signed short int) var_1_4))) : (var_1_10 == ((signed short int) var_1_13)))) && (var_1_8 ? (var_1_14 == ((unsigned short int) (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - ((((var_1_5) > ((var_1_16 - var_1_11))) ? (var_1_5) : ((var_1_16 - var_1_11))))))) : 1)) && ((((((var_1_13) > ((var_1_16 << var_1_7))) ? (var_1_13) : ((var_1_16 << var_1_7)))) >= var_1_14) ? (var_1_17 == ((unsigned long int) var_1_11)) : (var_1_17 == ((unsigned long int) (var_1_6 + var_1_5))))) && ((var_1_5 == var_1_16) ? (var_1_8 ? (var_1_18 == ((unsigned short int) (((((var_1_16 + 30393) - var_1_5) < 0 ) ? -((var_1_16 + 30393) - var_1_5) : ((var_1_16 + 30393) - var_1_5))))) : (var_1_18 == ((unsigned short int) var_1_4))) : (var_1_9 ? (var_1_18 == ((unsigned short int) 200)) : 1))
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

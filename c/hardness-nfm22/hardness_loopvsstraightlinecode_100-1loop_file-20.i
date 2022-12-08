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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch20100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 4;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
unsigned short int var_1_7 = 0;
unsigned short int var_1_8 = 21062;
signed long int var_1_9 = -4;
unsigned long int var_1_10 = 256;
unsigned long int var_1_11 = 2706779013;
float var_1_13 = 25.1;
float var_1_15 = 9.25;
float var_1_16 = 0.8;
float var_1_17 = 9.75;
signed long int var_1_18 = 10;
signed long int var_1_19 = 2050467977;
unsigned short int var_1_20 = 1;
unsigned short int var_1_21 = 63087;
unsigned char var_1_22 = 1;
double var_1_23 = 25.3;
double var_1_24 = 999.1;
unsigned char var_1_25 = 5;
unsigned char var_1_26 = 200;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 4;
unsigned char var_1_29 = 100;
unsigned char var_1_30 = 2;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 5;
float var_1_33 = 0.8;
unsigned short int last_1_var_1_20 = 1;
unsigned char last_1_var_1_22 = 1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_10 = last_1_var_1_22;
 signed long int stepLocal_9 = last_1_var_1_20;
 if (last_1_var_1_22 || stepLocal_10) {
  if (last_1_var_1_22) {
   var_1_25 = var_1_5;
  } else {
   if (stepLocal_9 < (1u * (100u >> var_1_6))) {
    var_1_25 = var_1_6;
   } else {
    var_1_25 = var_1_5;
   }
  }
 } else {
  var_1_25 = ((var_1_26 - (var_1_27 - var_1_28)) - ((var_1_29 - var_1_30) - var_1_31));
 }
 var_1_10 = (var_1_11 - last_1_var_1_20);
 unsigned long int stepLocal_4 = var_1_10 ^ var_1_25;
 if (var_1_6 >= stepLocal_4) {
  var_1_13 = ((((var_1_15) > ((var_1_16 - var_1_17))) ? (var_1_15) : ((var_1_16 - var_1_17))));
 }
 if (! (var_1_2 && var_1_3)) {
  var_1_22 = ((var_1_21 > var_1_11) && (! 1));
 }
 var_1_32 = var_1_5;
 var_1_33 = var_1_15;
 unsigned char stepLocal_1 = var_1_22;
 unsigned char stepLocal_0 = var_1_25;
 if (var_1_22 || stepLocal_1) {
  if (stepLocal_0 == ((64 + var_1_5) - (var_1_6 + 10))) {
   var_1_1 = var_1_25;
  }
 }
 unsigned long int stepLocal_3 = var_1_10;
 if (var_1_25 <= stepLocal_3) {
  var_1_9 = var_1_25;
 }
 unsigned long int stepLocal_5 = (3451179663u - var_1_6) * var_1_8;
 if (var_1_22) {
  if (var_1_9 != stepLocal_5) {
   var_1_18 = (var_1_25 - ((var_1_19 - var_1_10) - var_1_6));
  }
 } else {
  var_1_18 = ((((var_1_8) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_8) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))));
 }
 signed long int stepLocal_2 = var_1_18;
 if ((var_1_6 / var_1_5) > stepLocal_2) {
  var_1_7 = ((var_1_8 - var_1_5) + var_1_6);
 }
 if (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) >= var_1_6) {
  var_1_23 = ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) < (var_1_16)) ? (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) : (var_1_16)));
 } else {
  if (var_1_5 <= var_1_7) {
   var_1_23 = var_1_15;
  } else {
   var_1_23 = var_1_17;
  }
 }
 signed long int stepLocal_7 = 4;
 unsigned long int stepLocal_6 = var_1_10;
 if (var_1_7 < stepLocal_6) {
  var_1_20 = ((var_1_5 + ((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6)))) + 16);
 } else {
  if (var_1_22) {
   if (stepLocal_7 >= var_1_32) {
    var_1_20 = ((((var_1_21 - (var_1_8 - 16)) < 0 ) ? -(var_1_21 - (var_1_8 - 16)) : (var_1_21 - (var_1_8 - 16))));
   } else {
    var_1_20 = var_1_8;
   }
  } else {
   var_1_20 = var_1_6;
  }
 }
 unsigned short int stepLocal_8 = var_1_20;
 if (stepLocal_8 > var_1_18) {
  if (! var_1_22) {
   var_1_24 = (((((var_1_17 - var_1_16)) > (var_1_15)) ? ((var_1_17 - var_1_16)) : (var_1_15)));
  } else {
   if (! (var_1_9 <= var_1_20)) {
    var_1_24 = 9.8;
   } else {
    var_1_24 = var_1_15;
   }
  }
 } else {
  var_1_24 = var_1_16;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 64);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 64);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 1610612734);
 assume_abort_if_not(var_1_19 <= 2147483646);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65534);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 190);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 31);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 31);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 95);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
}
void updateLastVariables() {
 last_1_var_1_20 = var_1_20;
 last_1_var_1_22 = var_1_22;
}
int property() {
 return (((((((((((((var_1_22 || var_1_22) ? ((var_1_25 == ((64 + var_1_5) - (var_1_6 + 10))) ? (var_1_1 == ((signed short int) var_1_25)) : 1) : 1) && (((var_1_6 / var_1_5) > var_1_18) ? (var_1_7 == ((unsigned short int) ((var_1_8 - var_1_5) + var_1_6))) : 1)) && ((var_1_25 <= var_1_10) ? (var_1_9 == ((signed long int) var_1_25)) : 1)) && (var_1_10 == ((unsigned long int) (var_1_11 - last_1_var_1_20)))) && ((var_1_6 >= (var_1_10 ^ var_1_25)) ? (var_1_13 == ((float) ((((var_1_15) > ((var_1_16 - var_1_17))) ? (var_1_15) : ((var_1_16 - var_1_17)))))) : 1)) && (var_1_22 ? ((var_1_9 != ((3451179663u - var_1_6) * var_1_8)) ? (var_1_18 == ((signed long int) (var_1_25 - ((var_1_19 - var_1_10) - var_1_6)))) : 1) : (var_1_18 == ((signed long int) ((((var_1_8) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_8) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))))))) && ((var_1_7 < var_1_10) ? (var_1_20 == ((unsigned short int) ((var_1_5 + ((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6)))) + 16))) : (var_1_22 ? ((4 >= var_1_32) ? (var_1_20 == ((unsigned short int) ((((var_1_21 - (var_1_8 - 16)) < 0 ) ? -(var_1_21 - (var_1_8 - 16)) : (var_1_21 - (var_1_8 - 16)))))) : (var_1_20 == ((unsigned short int) var_1_8))) : (var_1_20 == ((unsigned short int) var_1_6))))) && ((! (var_1_2 && var_1_3)) ? (var_1_22 == ((unsigned char) ((var_1_21 > var_1_11) && (! 1)))) : 1)) && ((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) >= var_1_6) ? (var_1_23 == ((double) ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) < (var_1_16)) ? (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) : (var_1_16))))) : ((var_1_5 <= var_1_7) ? (var_1_23 == ((double) var_1_15)) : (var_1_23 == ((double) var_1_17))))) && ((var_1_20 > var_1_18) ? ((! var_1_22) ? (var_1_24 == ((double) (((((var_1_17 - var_1_16)) > (var_1_15)) ? ((var_1_17 - var_1_16)) : (var_1_15))))) : ((! (var_1_9 <= var_1_20)) ? (var_1_24 == ((double) 9.8)) : (var_1_24 == ((double) var_1_15)))) : (var_1_24 == ((double) var_1_16)))) && ((last_1_var_1_22 || last_1_var_1_22) ? (last_1_var_1_22 ? (var_1_25 == ((unsigned char) var_1_5)) : ((last_1_var_1_20 < (1u * (100u >> var_1_6))) ? (var_1_25 == ((unsigned char) var_1_6)) : (var_1_25 == ((unsigned char) var_1_5)))) : (var_1_25 == ((unsigned char) ((var_1_26 - (var_1_27 - var_1_28)) - ((var_1_29 - var_1_30) - var_1_31)))))) && (var_1_32 == ((unsigned char) var_1_5))) && (var_1_33 == ((float) var_1_15))
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

// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 4.875;
unsigned char var_1_2 = 1;
unsigned char var_1_4 = 1;
float var_1_5 = 63.75;
float var_1_6 = 4.625;
unsigned long int var_1_7 = 64;
unsigned short int var_1_8 = 60381;
unsigned short int var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = 8;
double var_1_14 = 255.2;
unsigned char var_1_15 = 4;
unsigned char var_1_17 = 10;
unsigned char var_1_18 = 2;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 0;
unsigned long int var_1_21 = 256;
unsigned long int var_1_22 = 128;
signed long int var_1_23 = -8;
unsigned short int var_1_24 = 50;
unsigned short int var_1_25 = 32942;
signed short int var_1_26 = -32;
signed short int var_1_27 = 1;
signed long int var_1_28 = 4;
signed long int var_1_29 = 1115625465;
unsigned long int var_1_30 = 128;
unsigned long int var_1_31 = 3601857727;
unsigned long int var_1_32 = 3899438955;
unsigned long int var_1_33 = 3765589732;
unsigned char var_1_34 = 0;
signed short int var_1_35 = -2;
signed short int var_1_36 = -1000;
double var_1_37 = 999999999999.25;
signed long int last_1_var_1_28 = 4;
unsigned char last_1_var_1_34 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_34) {
  if (last_1_var_1_34) {
   var_1_10 = ((! 1) || (! var_1_11));
  }
 } else {
  var_1_10 = (! var_1_12);
 }
 var_1_34 = (var_1_12 || (var_1_10 || var_1_11));
 if (! last_1_var_1_34) {
  if ((var_1_8 - var_1_9) < last_1_var_1_28) {
   var_1_7 = var_1_8;
  }
 }
 if (! (var_1_2 || var_1_4)) {
  var_1_1 = ((var_1_5 + var_1_6) - 1.000000000000005E13f);
 }
 if (var_1_6 < var_1_1) {
  if (var_1_14 >= var_1_6) {
   var_1_13 = (var_1_7 - var_1_9);
  } else {
   var_1_13 = var_1_7;
  }
 } else {
  var_1_13 = var_1_7;
 }
 if (var_1_11) {
  var_1_24 = ((((((((var_1_9) < (4)) ? (var_1_9) : (4)))) > ((var_1_25 - var_1_18))) ? (((((var_1_9) < (4)) ? (var_1_9) : (4)))) : ((var_1_25 - var_1_18))));
 }
 var_1_26 = ((((((var_1_19 - var_1_17)) < (var_1_7)) ? ((var_1_19 - var_1_17)) : (var_1_7))) + (var_1_18 + var_1_27));
 if (! (var_1_17 >= var_1_22)) {
  var_1_30 = (((((((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))) - var_1_25)) > (((((128u) > ((var_1_33 - var_1_17))) ? (128u) : ((var_1_33 - var_1_17)))))) ? ((((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))) - var_1_25)) : (((((128u) > ((var_1_33 - var_1_17))) ? (128u) : ((var_1_33 - var_1_17)))))));
 }
 if (((((var_1_6) > (var_1_14)) ? (var_1_6) : (var_1_14))) < ((((var_1_5) > ((var_1_37 - 100000.8))) ? (var_1_5) : ((var_1_37 - 100000.8))))) {
  var_1_36 = 4;
 }
 unsigned char stepLocal_1 = var_1_19;
 if (var_1_1 > (999.75f - (var_1_6 + var_1_5))) {
  if (var_1_12) {
   if (stepLocal_1 > (var_1_7 + var_1_30)) {
    var_1_21 = (var_1_8 + var_1_9);
   } else {
    var_1_21 = var_1_22;
   }
  } else {
   var_1_21 = 10u;
  }
 }
 unsigned long int stepLocal_0 = var_1_30;
 if (var_1_9 <= stepLocal_0) {
  if (var_1_12) {
   var_1_15 = var_1_17;
  } else {
   var_1_15 = (128 - (var_1_18 + var_1_19));
  }
 } else {
  var_1_15 = var_1_17;
 }
 if (var_1_10 && (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < (~ var_1_21))) {
  var_1_20 = var_1_19;
 } else {
  var_1_20 = var_1_7;
 }
 if (var_1_14 >= var_1_5) {
  if (var_1_5 >= var_1_6) {
   var_1_23 = var_1_30;
  } else {
   var_1_23 = var_1_19;
  }
 } else {
  var_1_23 = ((((var_1_9) > (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (var_1_9) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))));
 }
 if (var_1_32 <= (var_1_7 + var_1_23)) {
  var_1_35 = var_1_18;
 } else {
  var_1_35 = (var_1_27 + var_1_17);
 }
 var_1_28 = (var_1_35 - (var_1_29 - var_1_20));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65535);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 64);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 32767);
 assume_abort_if_not(var_1_25 <= 65534);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -8191);
 assume_abort_if_not(var_1_27 <= 8191);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= 1073741823);
 assume_abort_if_not(var_1_29 <= 2147483646);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 2147483647);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 2147483647);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 2147483647);
 assume_abort_if_not(var_1_33 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_28 = var_1_28;
 last_1_var_1_34 = var_1_34;
}
int property(void) {
 return (((((((((((((((! (var_1_2 || var_1_4)) ? (var_1_1 == ((float) ((var_1_5 + var_1_6) - 1.000000000000005E13f))) : 1) && ((! last_1_var_1_34) ? (((var_1_8 - var_1_9) < last_1_var_1_28) ? (var_1_7 == ((unsigned long int) var_1_8)) : 1) : 1)) && (last_1_var_1_34 ? (last_1_var_1_34 ? (var_1_10 == ((unsigned char) ((! 1) || (! var_1_11)))) : 1) : (var_1_10 == ((unsigned char) (! var_1_12))))) && ((var_1_6 < var_1_1) ? ((var_1_14 >= var_1_6) ? (var_1_13 == ((signed long int) (var_1_7 - var_1_9))) : (var_1_13 == ((signed long int) var_1_7))) : (var_1_13 == ((signed long int) var_1_7)))) && ((var_1_9 <= var_1_30) ? (var_1_12 ? (var_1_15 == ((unsigned char) var_1_17)) : (var_1_15 == ((unsigned char) (128 - (var_1_18 + var_1_19))))) : (var_1_15 == ((unsigned char) var_1_17)))) && ((var_1_10 && (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < (~ var_1_21))) ? (var_1_20 == ((unsigned short int) var_1_19)) : (var_1_20 == ((unsigned short int) var_1_7)))) && ((var_1_1 > (999.75f - (var_1_6 + var_1_5))) ? (var_1_12 ? ((var_1_19 > (var_1_7 + var_1_30)) ? (var_1_21 == ((unsigned long int) (var_1_8 + var_1_9))) : (var_1_21 == ((unsigned long int) var_1_22))) : (var_1_21 == ((unsigned long int) 10u))) : 1)) && ((var_1_14 >= var_1_5) ? ((var_1_5 >= var_1_6) ? (var_1_23 == ((signed long int) var_1_30)) : (var_1_23 == ((signed long int) var_1_19))) : (var_1_23 == ((signed long int) ((((var_1_9) > (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (var_1_9) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))))))) && (var_1_11 ? (var_1_24 == ((unsigned short int) ((((((((var_1_9) < (4)) ? (var_1_9) : (4)))) > ((var_1_25 - var_1_18))) ? (((((var_1_9) < (4)) ? (var_1_9) : (4)))) : ((var_1_25 - var_1_18)))))) : 1)) && (var_1_26 == ((signed short int) ((((((var_1_19 - var_1_17)) < (var_1_7)) ? ((var_1_19 - var_1_17)) : (var_1_7))) + (var_1_18 + var_1_27))))) && (var_1_28 == ((signed long int) (var_1_35 - (var_1_29 - var_1_20))))) && ((! (var_1_17 >= var_1_22)) ? (var_1_30 == ((unsigned long int) (((((((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))) - var_1_25)) > (((((128u) > ((var_1_33 - var_1_17))) ? (128u) : ((var_1_33 - var_1_17)))))) ? ((((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))) - var_1_25)) : (((((128u) > ((var_1_33 - var_1_17))) ? (128u) : ((var_1_33 - var_1_17))))))))) : 1)) && (var_1_34 == ((unsigned char) (var_1_12 || (var_1_10 || var_1_11))))) && ((var_1_32 <= (var_1_7 + var_1_23)) ? (var_1_35 == ((signed short int) var_1_18)) : (var_1_35 == ((signed short int) (var_1_27 + var_1_17))))) && ((((((var_1_6) > (var_1_14)) ? (var_1_6) : (var_1_14))) < ((((var_1_5) > ((var_1_37 - 100000.8))) ? (var_1_5) : ((var_1_37 - 100000.8))))) ? (var_1_36 == ((signed short int) 4)) : 1)
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

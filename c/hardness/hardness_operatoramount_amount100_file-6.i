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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned short int var_1_4 = 64;
unsigned short int var_1_5 = 34011;
unsigned short int var_1_6 = 2;
signed short int var_1_7 = -4;
signed short int var_1_8 = 128;
signed long int var_1_9 = -4;
unsigned short int var_1_10 = 4;
unsigned short int var_1_11 = 128;
double var_1_12 = 1.8;
double var_1_13 = 49.5;
double var_1_14 = 0.0;
double var_1_15 = 8.5;
unsigned long int var_1_16 = 4;
float var_1_17 = 3.65;
unsigned char var_1_18 = 0;
signed long int var_1_19 = 32;
signed long int var_1_20 = 1000000000;
signed long int var_1_21 = 1141305717;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 16;
unsigned char var_1_25 = 64;
unsigned char var_1_26 = 32;
unsigned short int var_1_27 = 256;
unsigned short int var_1_29 = 55296;
unsigned short int var_1_30 = 500;
void initially(void) {
}
void step(void) {
 if (var_1_2 || var_1_3) {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 } else {
  var_1_1 = (((((var_1_5 - var_1_6)) < (var_1_4)) ? ((var_1_5 - var_1_6)) : (var_1_4)));
 }
 if (var_1_6 <= (- 500)) {
  if (var_1_2) {
   var_1_7 = (var_1_8 - 64);
  }
 } else {
  var_1_7 = var_1_8;
 }
 var_1_9 = (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_6);
 var_1_10 = (var_1_5 - (var_1_11 + 1000));
 if (! var_1_3) {
  var_1_12 = ((var_1_13 - (var_1_14 - 63.5)) + var_1_15);
 } else {
  var_1_12 = (var_1_14 - var_1_13);
 }
 if (var_1_18) {
  var_1_17 = (((((var_1_14) < (255.4f)) ? (var_1_14) : (255.4f))) + var_1_13);
 } else {
  if (var_1_3) {
   if (var_1_2) {
    var_1_17 = var_1_15;
   } else {
    var_1_17 = 0.050000000000000044f;
   }
  } else {
   var_1_17 = var_1_13;
  }
 }
 signed long int stepLocal_7 = -25;
 if ((var_1_5 - var_1_25) <= stepLocal_7) {
  var_1_30 = var_1_11;
 }
 unsigned short int stepLocal_0 = var_1_11;
 if (var_1_2) {
  var_1_16 = (var_1_30 + 200u);
 } else {
  if (((((var_1_6) < (var_1_8)) ? (var_1_6) : (var_1_8))) <= stepLocal_0) {
   var_1_16 = 128u;
  } else {
   var_1_16 = var_1_6;
  }
 }
 unsigned long int stepLocal_1 = var_1_16;
 if (stepLocal_1 >= var_1_4) {
  if (! var_1_2) {
   var_1_19 = (var_1_11 - (var_1_4 + (var_1_20 - 5)));
  } else {
   if (var_1_2) {
    if (var_1_18) {
     var_1_19 = ((var_1_21 - ((((var_1_20) > (var_1_4)) ? (var_1_20) : (var_1_4)))) - (var_1_11 + ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))));
    }
   }
  }
 } else {
  var_1_19 = var_1_20;
 }
 unsigned char stepLocal_2 = var_1_18;
 if (stepLocal_2 || ((var_1_6 == var_1_16) || (var_1_2 && var_1_3))) {
  var_1_22 = var_1_23;
 } else {
  var_1_22 = 0;
 }
 unsigned long int stepLocal_4 = var_1_16 + (5 << 1);
 signed long int stepLocal_3 = -32;
 if (var_1_4 < stepLocal_4) {
  if (stepLocal_3 > var_1_8) {
   var_1_24 = var_1_23;
  }
 } else {
  var_1_24 = (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) + 4);
 }
 unsigned char stepLocal_6 = var_1_16 == var_1_19;
 unsigned char stepLocal_5 = var_1_2;
 if (stepLocal_6 || (! 1)) {
  if (stepLocal_5 || ((var_1_20 != var_1_16) && (var_1_17 <= var_1_12))) {
   var_1_27 = (((((var_1_29 - var_1_19) < 0 ) ? -(var_1_29 - var_1_19) : (var_1_29 - var_1_19))) - var_1_25);
  } else {
   var_1_27 = (((((var_1_5) > (var_1_29)) ? (var_1_5) : (var_1_29))) - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16384);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 2305843.009213691400e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 536870911);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 1073741822);
 assume_abort_if_not(var_1_21 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 49150);
 assume_abort_if_not(var_1_29 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((var_1_2 || var_1_3) ? (var_1_1 == ((unsigned short int) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_1 == ((unsigned short int) (((((var_1_5 - var_1_6)) < (var_1_4)) ? ((var_1_5 - var_1_6)) : (var_1_4)))))) && ((var_1_6 <= (- 500)) ? (var_1_2 ? (var_1_7 == ((signed short int) (var_1_8 - 64))) : 1) : (var_1_7 == ((signed short int) var_1_8)))) && (var_1_9 == ((signed long int) (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_6)))) && (var_1_10 == ((unsigned short int) (var_1_5 - (var_1_11 + 1000))))) && ((! var_1_3) ? (var_1_12 == ((double) ((var_1_13 - (var_1_14 - 63.5)) + var_1_15))) : (var_1_12 == ((double) (var_1_14 - var_1_13))))) && (var_1_2 ? (var_1_16 == ((unsigned long int) (var_1_30 + 200u))) : ((((((var_1_6) < (var_1_8)) ? (var_1_6) : (var_1_8))) <= var_1_11) ? (var_1_16 == ((unsigned long int) 128u)) : (var_1_16 == ((unsigned long int) var_1_6))))) && (var_1_18 ? (var_1_17 == ((float) (((((var_1_14) < (255.4f)) ? (var_1_14) : (255.4f))) + var_1_13))) : (var_1_3 ? (var_1_2 ? (var_1_17 == ((float) var_1_15)) : (var_1_17 == ((float) 0.050000000000000044f))) : (var_1_17 == ((float) var_1_13))))) && ((var_1_16 >= var_1_4) ? ((! var_1_2) ? (var_1_19 == ((signed long int) (var_1_11 - (var_1_4 + (var_1_20 - 5))))) : (var_1_2 ? (var_1_18 ? (var_1_19 == ((signed long int) ((var_1_21 - ((((var_1_20) > (var_1_4)) ? (var_1_20) : (var_1_4)))) - (var_1_11 + ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))))) : 1) : 1)) : (var_1_19 == ((signed long int) var_1_20)))) && ((var_1_18 || ((var_1_6 == var_1_16) || (var_1_2 && var_1_3))) ? (var_1_22 == ((unsigned char) var_1_23)) : (var_1_22 == ((unsigned char) 0)))) && ((var_1_4 < (var_1_16 + (5 << 1))) ? ((-32 > var_1_8) ? (var_1_24 == ((unsigned char) var_1_23)) : 1) : (var_1_24 == ((unsigned char) (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) + 4))))) && (((var_1_16 == var_1_19) || (! 1)) ? ((var_1_2 || ((var_1_20 != var_1_16) && (var_1_17 <= var_1_12))) ? (var_1_27 == ((unsigned short int) (((((var_1_29 - var_1_19) < 0 ) ? -(var_1_29 - var_1_19) : (var_1_29 - var_1_19))) - var_1_25))) : (var_1_27 == ((unsigned short int) (((((var_1_5) > (var_1_29)) ? (var_1_5) : (var_1_29))) - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))))) : 1)) && (((var_1_5 - var_1_25) <= -25) ? (var_1_30 == ((unsigned short int) var_1_11)) : 1)
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

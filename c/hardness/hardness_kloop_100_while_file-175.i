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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 256;
signed long int var_1_2 = 10000;
signed long int var_1_3 = 2;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 0;
unsigned short int var_1_8 = 10000;
unsigned short int var_1_9 = 25;
unsigned short int var_1_10 = 56544;
unsigned short int var_1_11 = 56875;
signed long int var_1_12 = -16;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed long int var_1_16 = 4;
unsigned short int var_1_17 = 128;
unsigned short int var_1_18 = 17781;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 1;
unsigned long int var_1_22 = 100000000;
unsigned char var_1_23 = 4;
unsigned long int var_1_24 = 4109647739;
unsigned char var_1_25 = 1;
double var_1_28 = 3.5;
double var_1_29 = 99999.2;
double var_1_30 = 25.6;
double var_1_31 = 0.75;
unsigned char var_1_32 = 0;
signed long int var_1_33 = -50;
double var_1_34 = 63.5;
double var_1_35 = 500.5;
double var_1_36 = 127.75;
signed short int var_1_37 = 256;
signed short int var_1_38 = 256;
unsigned char var_1_39 = 8;
unsigned char var_1_40 = 5;
unsigned char var_1_41 = 8;
unsigned char var_1_42 = 0;
signed long int var_1_43 = -10;
unsigned short int var_1_44 = 0;
unsigned short int last_1_var_1_1 = 256;
unsigned long int last_1_var_1_22 = 100000000;
signed long int last_1_var_1_33 = -50;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_4 = last_1_var_1_33 >> var_1_23;
 if (! var_1_21) {
  if (stepLocal_4 > (var_1_8 * var_1_11)) {
   var_1_22 = (var_1_24 - var_1_5);
  } else {
   var_1_22 = var_1_8;
  }
 } else {
  var_1_22 = last_1_var_1_1;
 }
 unsigned char stepLocal_2 = var_1_13;
 if (stepLocal_2 && (var_1_14 && var_1_15)) {
  var_1_12 = (((((var_1_5 + last_1_var_1_22)) > (((((var_1_8) > ((var_1_10 - var_1_11))) ? (var_1_8) : ((var_1_10 - var_1_11)))))) ? ((var_1_5 + last_1_var_1_22)) : (((((var_1_8) > ((var_1_10 - var_1_11))) ? (var_1_8) : ((var_1_10 - var_1_11)))))));
 } else {
  var_1_12 = var_1_16;
 }
 if (var_1_5 <= var_1_12) {
  var_1_19 = (! (var_1_20 && var_1_21));
 }
 unsigned char stepLocal_6 = var_1_19;
 unsigned long int stepLocal_5 = var_1_22 % (var_1_5 + var_1_23);
 if (stepLocal_6 && var_1_21) {
  var_1_33 = last_1_var_1_33;
 } else {
  if (var_1_20) {
   if (last_1_var_1_33 == stepLocal_5) {
    var_1_33 = var_1_18;
   } else {
    var_1_33 = var_1_16;
   }
  } else {
   var_1_33 = var_1_5;
  }
 }
 signed long int stepLocal_3 = var_1_12;
 if (var_1_22 >= stepLocal_3) {
  var_1_17 = (var_1_10 - (((((22858) < (var_1_18)) ? (22858) : (var_1_18))) - var_1_6));
 } else {
  var_1_17 = var_1_5;
 }
 if ((- ((((0.6f) < (var_1_30)) ? (0.6f) : (var_1_30)))) <= var_1_28) {
  var_1_34 = (var_1_35 - var_1_36);
 } else {
  var_1_34 = var_1_35;
 }
 if (var_1_20) {
  if (var_1_21) {
   var_1_39 = (((((var_1_23 + var_1_40) < 0 ) ? -(var_1_23 + var_1_40) : (var_1_23 + var_1_40))) + ((((var_1_6) > (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) ? (var_1_6) : (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))));
  } else {
   var_1_39 = (var_1_40 + var_1_23);
  }
 } else {
  var_1_39 = var_1_41;
 }
 var_1_42 = 10;
 var_1_43 = var_1_11;
 var_1_44 = 100;
 if ((var_1_28 - var_1_29) <= (- (var_1_30 + var_1_31))) {
  if (! (var_1_44 == var_1_22)) {
   var_1_25 = (! var_1_20);
  } else {
   var_1_25 = var_1_32;
  }
 }
 signed long int stepLocal_7 = var_1_12;
 if (stepLocal_7 >= var_1_33) {
  if (var_1_19) {
   var_1_37 = ((var_1_5 + (var_1_6 + var_1_23)) + (var_1_38 - 8));
  }
 } else {
  var_1_37 = var_1_6;
 }
 signed long int stepLocal_1 = var_1_12 * var_1_43;
 signed long int stepLocal_0 = var_1_43;
 if ((var_1_2 - var_1_3) <= stepLocal_0) {
  if ((var_1_5 - var_1_6) != stepLocal_1) {
   var_1_1 = (((((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) + ((((var_1_8) > (256)) ? (var_1_8) : (256))))) < (var_1_9)) ? ((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) + ((((var_1_8) > (256)) ? (var_1_8) : (256))))) : (var_1_9)));
  } else {
   var_1_1 = (((((var_1_10) > ((var_1_11 - var_1_6))) ? (var_1_10) : ((var_1_11 - var_1_6)))) - ((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 255);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 49150);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483647);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 16383);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 30);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 16383);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_33 = var_1_33;
}
int property(void) {
 return ((((((((((((((var_1_2 - var_1_3) <= var_1_43) ? (((var_1_5 - var_1_6) != (var_1_12 * var_1_43)) ? (var_1_1 == ((unsigned short int) (((((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) + ((((var_1_8) > (256)) ? (var_1_8) : (256))))) < (var_1_9)) ? ((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) + ((((var_1_8) > (256)) ? (var_1_8) : (256))))) : (var_1_9))))) : (var_1_1 == ((unsigned short int) (((((var_1_10) > ((var_1_11 - var_1_6))) ? (var_1_10) : ((var_1_11 - var_1_6)))) - ((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))))) : 1) && ((var_1_13 && (var_1_14 && var_1_15)) ? (var_1_12 == ((signed long int) (((((var_1_5 + last_1_var_1_22)) > (((((var_1_8) > ((var_1_10 - var_1_11))) ? (var_1_8) : ((var_1_10 - var_1_11)))))) ? ((var_1_5 + last_1_var_1_22)) : (((((var_1_8) > ((var_1_10 - var_1_11))) ? (var_1_8) : ((var_1_10 - var_1_11))))))))) : (var_1_12 == ((signed long int) var_1_16)))) && ((var_1_22 >= var_1_12) ? (var_1_17 == ((unsigned short int) (var_1_10 - (((((22858) < (var_1_18)) ? (22858) : (var_1_18))) - var_1_6)))) : (var_1_17 == ((unsigned short int) var_1_5)))) && ((var_1_5 <= var_1_12) ? (var_1_19 == ((unsigned char) (! (var_1_20 && var_1_21)))) : 1)) && ((! var_1_21) ? (((last_1_var_1_33 >> var_1_23) > (var_1_8 * var_1_11)) ? (var_1_22 == ((unsigned long int) (var_1_24 - var_1_5))) : (var_1_22 == ((unsigned long int) var_1_8))) : (var_1_22 == ((unsigned long int) last_1_var_1_1)))) && (((var_1_28 - var_1_29) <= (- (var_1_30 + var_1_31))) ? ((! (var_1_44 == var_1_22)) ? (var_1_25 == ((unsigned char) (! var_1_20))) : (var_1_25 == ((unsigned char) var_1_32))) : 1)) && ((var_1_19 && var_1_21) ? (var_1_33 == ((signed long int) last_1_var_1_33)) : (var_1_20 ? ((last_1_var_1_33 == (var_1_22 % (var_1_5 + var_1_23))) ? (var_1_33 == ((signed long int) var_1_18)) : (var_1_33 == ((signed long int) var_1_16))) : (var_1_33 == ((signed long int) var_1_5))))) && (((- ((((0.6f) < (var_1_30)) ? (0.6f) : (var_1_30)))) <= var_1_28) ? (var_1_34 == ((double) (var_1_35 - var_1_36))) : (var_1_34 == ((double) var_1_35)))) && ((var_1_12 >= var_1_33) ? (var_1_19 ? (var_1_37 == ((signed short int) ((var_1_5 + (var_1_6 + var_1_23)) + (var_1_38 - 8)))) : 1) : (var_1_37 == ((signed short int) var_1_6)))) && (var_1_20 ? (var_1_21 ? (var_1_39 == ((unsigned char) (((((var_1_23 + var_1_40) < 0 ) ? -(var_1_23 + var_1_40) : (var_1_23 + var_1_40))) + ((((var_1_6) > (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) ? (var_1_6) : (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))))))) : (var_1_39 == ((unsigned char) (var_1_40 + var_1_23)))) : (var_1_39 == ((unsigned char) var_1_41)))) && (var_1_42 == ((unsigned char) 10))) && (var_1_43 == ((signed long int) var_1_11))) && (var_1_44 == ((unsigned short int) 100))
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

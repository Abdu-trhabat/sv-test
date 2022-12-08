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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed char var_1_10 = 2;
signed char var_1_11 = 1;
float var_1_14 = 64.3;
signed char var_1_16 = 32;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 9.25;
double var_1_21 = 255.05;
double var_1_22 = 25.5;
unsigned char var_1_23 = 2;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 5;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 1;
signed long int var_1_29 = 128;
unsigned long int var_1_31 = 1;
unsigned long int var_1_32 = 64;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned short int var_1_35 = 100;
unsigned short int var_1_36 = 50;
unsigned long int var_1_37 = 3773873024;
unsigned long int var_1_38 = 2296504360;
double var_1_39 = 64.375;
double var_1_40 = 63.6;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 4;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 10;
unsigned char var_1_48 = 0;
signed long int var_1_49 = 8;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 0;
unsigned short int var_1_52 = 2;
signed char var_1_53 = 0;
signed char var_1_54 = 8;
signed long int var_1_55 = -64;
double var_1_56 = 10000000000000.4;
unsigned short int var_1_57 = 8;
unsigned char last_1_var_1_17 = 1;
double last_1_var_1_20 = 9.25;
unsigned char last_1_var_1_23 = 2;
unsigned short int last_1_var_1_26 = 5;
signed long int last_1_var_1_29 = 128;
void initially(void) {
}
void step(void) {
 if (var_1_33 && var_1_34) {
  if (var_1_35 <= var_1_36) {
   var_1_32 = (((((var_1_37) < (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_37) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
  }
 }
 if (var_1_33) {
  if (var_1_36 != (~ var_1_38)) {
   var_1_39 = var_1_40;
  }
 }
 if (var_1_32 <= (~ var_1_37)) {
  if (var_1_40 <= var_1_39) {
   var_1_41 = (var_1_42 && (! var_1_43));
  } else {
   var_1_41 = (var_1_42 && var_1_44);
  }
 } else {
  if (var_1_39 > var_1_40) {
   var_1_41 = (! var_1_43);
  } else {
   if (var_1_36 <= var_1_37) {
    var_1_41 = (((var_1_32 >= 50u) && var_1_42) && var_1_43);
   } else {
    var_1_41 = var_1_43;
   }
  }
 }
 if (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) <= var_1_40) {
  var_1_45 = ((((((((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) < 0 ) ? -((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) : ((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))))) < 0 ) ? -(((((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) < 0 ) ? -((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) : ((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))))) : (((((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) < 0 ) ? -((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) : ((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47)))))));
 } else {
  var_1_45 = var_1_46;
 }
 if (var_1_44) {
  if (var_1_36 > ((((~ var_1_38) < 0 ) ? -(~ var_1_38) : (~ var_1_38)))) {
   if (var_1_42) {
    var_1_48 = 0;
   } else {
    var_1_48 = var_1_43;
   }
  } else {
   var_1_48 = var_1_43;
  }
 }
 if (((var_1_45 + var_1_35) - var_1_36) > var_1_46) {
  var_1_49 = (((((var_1_36 + -4)) > (var_1_46)) ? ((var_1_36 + -4)) : (var_1_46)));
 } else {
  var_1_49 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
 }
 if (! var_1_51) {
  var_1_50 = (! (! var_1_42));
 } else {
  var_1_50 = (var_1_44 || var_1_42);
 }
 if (! (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) >= (var_1_32 / 5))) {
  var_1_52 = (256 + (var_1_45 + var_1_47));
 } else {
  var_1_52 = ((((((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) < (var_1_47)) ? (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) : (var_1_47)));
 }
 if (24.25 > var_1_40) {
  if ((31.51 - 100000.2) == var_1_40) {
   var_1_53 = var_1_54;
  }
 }
 if (((((var_1_40) < (var_1_39)) ? (var_1_40) : (var_1_39))) > ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) {
  if ((var_1_35 >= var_1_38) || var_1_33) {
   var_1_55 = ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)));
  }
 }
 if (var_1_46 > var_1_35) {
  if (var_1_56 < var_1_40) {
   var_1_57 = (var_1_47 + var_1_46);
  }
 }
 if ((last_1_var_1_29 * last_1_var_1_23) <= last_1_var_1_29) {
  var_1_10 = (var_1_11 + 10);
 } else {
  if (last_1_var_1_17 || last_1_var_1_17) {
   if ((((((last_1_var_1_20) < 0 ) ? -(last_1_var_1_20) : (last_1_var_1_20))) - var_1_14) == (last_1_var_1_20 + last_1_var_1_20)) {
    var_1_10 = (var_1_11 + var_1_16);
   } else {
    var_1_10 = var_1_11;
   }
  } else {
   var_1_10 = var_1_16;
  }
 }
 if ((last_1_var_1_29 + last_1_var_1_29) > last_1_var_1_26) {
  var_1_23 = var_1_25;
 }
 var_1_17 = (var_1_18 && var_1_19);
 if (! var_1_18) {
  var_1_20 = ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)));
 }
 if (256 >= var_1_10) {
  if (var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) {
   var_1_26 = 16;
  } else {
   var_1_26 = var_1_28;
  }
 } else {
  var_1_26 = var_1_25;
 }
 signed long int stepLocal_0 = var_1_23 * var_1_26;
 if (((((var_1_20) < (63.5)) ? (var_1_20) : (63.5))) > (2.4 * var_1_20)) {
  if (stepLocal_0 <= (~ var_1_26)) {
   var_1_1 = (((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10))) + var_1_23);
  } else {
   var_1_1 = var_1_10;
  }
 } else {
  var_1_1 = -50;
 }
 var_1_31 = var_1_26;
 var_1_29 = var_1_1;
}
void updateVariables() {
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 255);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65535);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 65535);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 254);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= -127);
 assume_abort_if_not(var_1_54 <= 126);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= -922337.2036854776000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_29 = var_1_29;
}
int property() {
 return ((((((((((((var_1_20) < (63.5)) ? (var_1_20) : (63.5))) > (2.4 * var_1_20)) ? (((var_1_23 * var_1_26) <= (~ var_1_26)) ? (var_1_1 == ((signed short int) (((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10))) + var_1_23))) : (var_1_1 == ((signed short int) var_1_10))) : (var_1_1 == ((signed short int) -50))) && (((last_1_var_1_29 * last_1_var_1_23) <= last_1_var_1_29) ? (var_1_10 == ((signed char) (var_1_11 + 10))) : ((last_1_var_1_17 || last_1_var_1_17) ? (((((((last_1_var_1_20) < 0 ) ? -(last_1_var_1_20) : (last_1_var_1_20))) - var_1_14) == (last_1_var_1_20 + last_1_var_1_20)) ? (var_1_10 == ((signed char) (var_1_11 + var_1_16))) : (var_1_10 == ((signed char) var_1_11))) : (var_1_10 == ((signed char) var_1_16))))) && (var_1_17 == ((unsigned char) (var_1_18 && var_1_19)))) && ((! var_1_18) ? (var_1_20 == ((double) ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))))) : 1)) && (((last_1_var_1_29 + last_1_var_1_29) > last_1_var_1_26) ? (var_1_23 == ((unsigned char) var_1_25)) : 1)) && ((256 >= var_1_10) ? ((var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) ? (var_1_26 == ((unsigned short int) 16)) : (var_1_26 == ((unsigned short int) var_1_28))) : (var_1_26 == ((unsigned short int) var_1_25)))) && (var_1_29 == ((signed long int) var_1_1))) && (var_1_31 == ((unsigned long int) var_1_26))
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

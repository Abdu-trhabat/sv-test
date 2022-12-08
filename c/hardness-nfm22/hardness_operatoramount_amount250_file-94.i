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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch94Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = -0.25;
double var_1_2 = -0.125;
double var_1_3 = 127.5;
unsigned char var_1_4 = 4;
double var_1_5 = 25.6;
unsigned char var_1_6 = 128;
unsigned char var_1_7 = 0;
signed char var_1_8 = 1;
signed char var_1_9 = 4;
signed char var_1_10 = 10;
unsigned char var_1_11 = 8;
unsigned short int var_1_12 = 64;
unsigned short int var_1_13 = 58659;
signed char var_1_14 = 10;
unsigned long int var_1_16 = 2325636107;
signed char var_1_17 = 5;
signed char var_1_18 = 1;
unsigned char var_1_19 = 0;
signed char var_1_20 = -100;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
signed long int var_1_23 = 0;
signed long int var_1_24 = 1183233533;
unsigned char var_1_25 = 5;
signed char var_1_26 = 1;
signed short int var_1_27 = 10;
float var_1_28 = 0.3;
float var_1_29 = 0.8049999999999999;
unsigned short int var_1_30 = 256;
signed short int var_1_31 = -5;
double var_1_33 = 0.4;
unsigned char var_1_34 = 2;
double var_1_35 = 255.5;
double var_1_36 = 16.2;
double var_1_37 = 128.2;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
float var_1_41 = 10.27;
double var_1_43 = 7.75;
double var_1_44 = 0.0;
double var_1_45 = 128.6;
signed short int var_1_46 = 5;
signed long int var_1_47 = -100000000;
float var_1_48 = 63.875;
signed short int var_1_49 = 8;
signed long int var_1_50 = 0;
double var_1_51 = 127.25;
signed char last_1_var_1_8 = 1;
signed char last_1_var_1_14 = 10;
unsigned char last_1_var_1_19 = 0;
signed long int last_1_var_1_23 = 0;
signed char last_1_var_1_26 = 1;
signed short int last_1_var_1_31 = -5;
unsigned char last_1_var_1_38 = 1;
signed short int last_1_var_1_46 = 5;
signed long int last_1_var_1_47 = -100000000;
signed short int last_1_var_1_49 = 8;
signed long int last_1_var_1_50 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_22 = 25;
 signed long int stepLocal_21 = 2 * 1;
 if (((((var_1_18) < (last_1_var_1_23)) ? (var_1_18) : (last_1_var_1_23))) > stepLocal_22) {
  var_1_38 = (var_1_21 && (last_1_var_1_19 || var_1_39));
 } else {
  if (last_1_var_1_47 >= stepLocal_21) {
   var_1_38 = ((var_1_37 > ((((var_1_5) > (16.25)) ? (var_1_5) : (16.25)))) || var_1_21);
  } else {
   var_1_38 = (var_1_22 || var_1_40);
  }
 }
 signed long int stepLocal_1 = var_1_6 * var_1_10;
 signed long int stepLocal_0 = ((((var_1_9) > (last_1_var_1_31)) ? (var_1_9) : (last_1_var_1_31))) * ((((var_1_10) < (last_1_var_1_46)) ? (var_1_10) : (last_1_var_1_46)));
 if (stepLocal_0 > var_1_6) {
  if (last_1_var_1_26 < stepLocal_1) {
   var_1_12 = ((var_1_13 - last_1_var_1_26) - 10);
  } else {
   var_1_12 = 100;
  }
 } else {
  var_1_12 = var_1_10;
 }
 signed char stepLocal_8 = var_1_18;
 unsigned char stepLocal_7 = last_1_var_1_38;
 if (var_1_13 < stepLocal_8) {
  var_1_23 = (var_1_18 + var_1_17);
 } else {
  if (last_1_var_1_38 && stepLocal_7) {
   var_1_23 = (10 - last_1_var_1_8);
  } else {
   if (! (var_1_5 > var_1_2)) {
    var_1_23 = last_1_var_1_49;
   } else {
    var_1_23 = ((var_1_24 - var_1_17) - ((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))));
   }
  }
 }
 unsigned char stepLocal_26 = last_1_var_1_26 <= 0;
 if (last_1_var_1_38 && stepLocal_26) {
  var_1_46 = (var_1_9 + var_1_6);
 }
 unsigned short int stepLocal_20 = var_1_13;
 if (var_1_46 <= stepLocal_20) {
  var_1_35 = (var_1_36 - var_1_37);
 }
 if (var_1_18 >= last_1_var_1_14) {
  var_1_26 = var_1_18;
 }
 var_1_1 = ((((9.999999999999925E13) < ((var_1_2 + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) ? (9.999999999999925E13) : ((var_1_2 + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))));
 var_1_8 = (var_1_9 - var_1_10);
 var_1_11 = ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)));
 var_1_25 = var_1_10;
 signed long int stepLocal_18 = (((-2) < 0 ) ? -(-2) : (-2));
 if (stepLocal_18 <= ((var_1_7 - var_1_18) / ((((var_1_13) > (var_1_24)) ? (var_1_13) : (var_1_24))))) {
  var_1_33 = (var_1_3 + var_1_2);
 }
 signed long int stepLocal_19 = -64;
 if (var_1_17 <= stepLocal_19) {
  var_1_34 = (((((((var_1_17) < (var_1_7)) ? (var_1_17) : (var_1_7))) < 0 ) ? -((((var_1_17) < (var_1_7)) ? (var_1_17) : (var_1_7))) : ((((var_1_17) < (var_1_7)) ? (var_1_17) : (var_1_7)))));
 }
 if (var_1_40) {
  var_1_48 = var_1_37;
 } else {
  var_1_48 = var_1_44;
 }
 var_1_49 = var_1_9;
 if (var_1_38) {
  var_1_50 = var_1_18;
 } else {
  var_1_50 = last_1_var_1_50;
 }
 unsigned char stepLocal_6 = var_1_38;
 unsigned char stepLocal_5 = var_1_49 < (~ var_1_10);
 if ((var_1_17 <= (var_1_18 / var_1_20)) || stepLocal_6) {
  if (var_1_38 || stepLocal_5) {
   var_1_19 = (! (! var_1_21));
  } else {
   var_1_19 = ((! var_1_38) || var_1_21);
  }
 } else {
  var_1_19 = var_1_22;
 }
 if (! (var_1_49 >= (var_1_8 >> var_1_25))) {
  var_1_27 = ((((var_1_6) > (var_1_12)) ? (var_1_6) : (var_1_12)));
 } else {
  if ((var_1_28 - var_1_29) < var_1_2) {
   if (var_1_21) {
    var_1_27 = ((((var_1_12) < (-10)) ? (var_1_12) : (-10)));
   } else {
    var_1_27 = (((((var_1_18 - ((((10) < (var_1_6)) ? (10) : (var_1_6))))) < (var_1_46)) ? ((var_1_18 - ((((10) < (var_1_6)) ? (10) : (var_1_6))))) : (var_1_46)));
   }
  }
 }
 signed char stepLocal_17 = var_1_17;
 signed char stepLocal_16 = var_1_26;
 unsigned char stepLocal_15 = var_1_34;
 unsigned char stepLocal_14 = var_1_34;
 signed short int stepLocal_13 = var_1_27;
 signed long int stepLocal_12 = 32 << var_1_10;
 signed long int stepLocal_11 = var_1_6 - ((((var_1_7) < (var_1_12)) ? (var_1_7) : (var_1_12)));
 signed char stepLocal_10 = var_1_26;
 signed char stepLocal_9 = var_1_26;
 if (stepLocal_12 < (var_1_20 | var_1_25)) {
  if (stepLocal_11 > (((((last_1_var_1_31) > (var_1_25)) ? (last_1_var_1_31) : (var_1_25))) ^ var_1_18)) {
   var_1_31 = var_1_25;
  } else {
   if (stepLocal_15 >= var_1_34) {
    if (3.625 >= (var_1_28 - var_1_29)) {
     if (stepLocal_9 <= (var_1_34 * last_1_var_1_31)) {
      var_1_31 = (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) - var_1_17);
     } else {
      var_1_31 = var_1_6;
     }
    }
   } else {
    var_1_31 = ((var_1_25 + var_1_6) - (var_1_10 + var_1_12));
   }
  }
 } else {
  if (((var_1_10 + var_1_12) >> var_1_9) >= stepLocal_10) {
   if (var_1_9 == stepLocal_17) {
    var_1_31 = ((((var_1_6) < (var_1_23)) ? (var_1_6) : (var_1_23)));
   } else {
    var_1_31 = (var_1_6 - var_1_10);
   }
  } else {
   if (stepLocal_14 <= ((((var_1_12) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_12) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))))) {
    if (((var_1_18 * var_1_34) % var_1_6) <= stepLocal_13) {
     var_1_31 = (var_1_12 - var_1_7);
    } else {
     if (last_1_var_1_31 == stepLocal_16) {
      var_1_31 = ((((4) < (((((5) > (var_1_25)) ? (5) : (var_1_25))))) ? (4) : (((((5) > (var_1_25)) ? (5) : (var_1_25))))));
     } else {
      var_1_31 = (((((1) < (var_1_10)) ? (1) : (var_1_10))) + var_1_23);
     }
    }
   } else {
    var_1_31 = var_1_27;
   }
  }
 }
 if (var_1_35 <= (25.75 / var_1_5)) {
  var_1_4 = (var_1_6 - var_1_7);
 }
 if ((~ var_1_46) == (~ var_1_12)) {
  var_1_30 = var_1_13;
 } else {
  var_1_30 = ((((var_1_12) > (var_1_8)) ? (var_1_12) : (var_1_8)));
 }
 unsigned short int stepLocal_28 = var_1_13;
 signed char stepLocal_27 = var_1_9;
 if (((((var_1_18) > ((var_1_27 | last_1_var_1_47))) ? (var_1_18) : ((var_1_27 | last_1_var_1_47)))) == stepLocal_28) {
  var_1_47 = (((((((((var_1_9 + var_1_17)) < (var_1_26)) ? ((var_1_9 + var_1_17)) : (var_1_26)))) > (var_1_4)) ? ((((((var_1_9 + var_1_17)) < (var_1_26)) ? ((var_1_9 + var_1_17)) : (var_1_26)))) : (var_1_4)));
 } else {
  if (stepLocal_27 < var_1_4) {
   var_1_47 = ((((last_1_var_1_47 + var_1_23) < 0 ) ? -(last_1_var_1_47 + var_1_23) : (last_1_var_1_47 + var_1_23)));
  } else {
   var_1_47 = var_1_25;
  }
 }
 unsigned short int stepLocal_4 = var_1_30;
 unsigned long int stepLocal_3 = (var_1_16 * var_1_8) * var_1_30;
 unsigned char stepLocal_2 = var_1_19;
 if ((var_1_27 == var_1_10) || stepLocal_2) {
  if ((var_1_16 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) > stepLocal_4) {
   var_1_14 = (var_1_10 - (var_1_17 + var_1_18));
  } else {
   if (var_1_10 > stepLocal_3) {
    var_1_14 = 4;
   } else {
    var_1_14 = (var_1_18 + var_1_17);
   }
  }
 } else {
  var_1_14 = var_1_18;
 }
 unsigned long int stepLocal_24 = var_1_16;
 signed long int stepLocal_23 = (((var_1_25) < (var_1_34)) ? (var_1_25) : (var_1_34));
 if (stepLocal_23 > var_1_31) {
  var_1_41 = ((((10.7f) > (((((var_1_2) < (var_1_37)) ? (var_1_2) : (var_1_37))))) ? (10.7f) : (((((var_1_2) < (var_1_37)) ? (var_1_2) : (var_1_37))))));
 } else {
  if (stepLocal_24 == (((((var_1_47 + var_1_25)) > (var_1_17)) ? ((var_1_47 + var_1_25)) : (var_1_17)))) {
   var_1_41 = (var_1_3 + var_1_2);
  } else {
   var_1_41 = (var_1_3 + var_1_2);
  }
 }
 signed char stepLocal_30 = var_1_9;
 signed long int stepLocal_29 = ((((var_1_34 * var_1_47)) > ((var_1_10 + var_1_27))) ? ((var_1_34 * var_1_47)) : ((var_1_10 + var_1_27)));
 if ((((((var_1_13) < (42152)) ? (var_1_13) : (42152))) - var_1_17) == stepLocal_30) {
  if (stepLocal_29 <= var_1_20) {
   var_1_51 = var_1_37;
  } else {
   var_1_51 = 0.0;
  }
 } else {
  var_1_51 = var_1_3;
 }
 signed long int stepLocal_25 = 0;
 if (var_1_3 < (var_1_35 + var_1_51)) {
  if (stepLocal_25 > var_1_34) {
   var_1_43 = (var_1_2 + 10.6);
  } else {
   var_1_43 = ((var_1_44 - var_1_45) - var_1_37);
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -461168.6018427382800e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427382800e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -461168.6018427382800e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427382800e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 assume_abort_if_not(var_1_5 != 0.0F);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 127);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 49150);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967295);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -128);
 assume_abort_if_not(var_1_20 <= 127);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= 1073741822);
 assume_abort_if_not(var_1_24 <= 2147483646);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 4611686.018427382800e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_50 = var_1_50;
}
int property() {
 return ((((((((((((((((((((((((var_1_1 == ((double) ((((9.999999999999925E13) < ((var_1_2 + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) ? (9.999999999999925E13) : ((var_1_2 + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))))) && ((var_1_35 <= (25.75 / var_1_5)) ? (var_1_4 == ((unsigned char) (var_1_6 - var_1_7))) : 1)) && (var_1_8 == ((signed char) (var_1_9 - var_1_10)))) && (var_1_11 == ((unsigned char) ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))))) && (((((((var_1_9) > (last_1_var_1_31)) ? (var_1_9) : (last_1_var_1_31))) * ((((var_1_10) < (last_1_var_1_46)) ? (var_1_10) : (last_1_var_1_46)))) > var_1_6) ? ((last_1_var_1_26 < (var_1_6 * var_1_10)) ? (var_1_12 == ((unsigned short int) ((var_1_13 - last_1_var_1_26) - 10))) : (var_1_12 == ((unsigned short int) 100))) : (var_1_12 == ((unsigned short int) var_1_10)))) && (((var_1_27 == var_1_10) || var_1_19) ? (((var_1_16 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) > var_1_30) ? (var_1_14 == ((signed char) (var_1_10 - (var_1_17 + var_1_18)))) : ((var_1_10 > ((var_1_16 * var_1_8) * var_1_30)) ? (var_1_14 == ((signed char) 4)) : (var_1_14 == ((signed char) (var_1_18 + var_1_17))))) : (var_1_14 == ((signed char) var_1_18)))) && (((var_1_17 <= (var_1_18 / var_1_20)) || var_1_38) ? ((var_1_38 || (var_1_49 < (~ var_1_10))) ? (var_1_19 == ((unsigned char) (! (! var_1_21)))) : (var_1_19 == ((unsigned char) ((! var_1_38) || var_1_21)))) : (var_1_19 == ((unsigned char) var_1_22)))) && ((var_1_13 < var_1_18) ? (var_1_23 == ((signed long int) (var_1_18 + var_1_17))) : ((last_1_var_1_38 && last_1_var_1_38) ? (var_1_23 == ((signed long int) (10 - last_1_var_1_8))) : ((! (var_1_5 > var_1_2)) ? (var_1_23 == ((signed long int) last_1_var_1_49)) : (var_1_23 == ((signed long int) ((var_1_24 - var_1_17) - ((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))))))))) && (var_1_25 == ((unsigned char) var_1_10))) && ((var_1_18 >= last_1_var_1_14) ? (var_1_26 == ((signed char) var_1_18)) : 1)) && ((! (var_1_49 >= (var_1_8 >> var_1_25))) ? (var_1_27 == ((signed short int) ((((var_1_6) > (var_1_12)) ? (var_1_6) : (var_1_12))))) : (((var_1_28 - var_1_29) < var_1_2) ? (var_1_21 ? (var_1_27 == ((signed short int) ((((var_1_12) < (-10)) ? (var_1_12) : (-10))))) : (var_1_27 == ((signed short int) (((((var_1_18 - ((((10) < (var_1_6)) ? (10) : (var_1_6))))) < (var_1_46)) ? ((var_1_18 - ((((10) < (var_1_6)) ? (10) : (var_1_6))))) : (var_1_46)))))) : 1))) && (((~ var_1_46) == (~ var_1_12)) ? (var_1_30 == ((unsigned short int) var_1_13)) : (var_1_30 == ((unsigned short int) ((((var_1_12) > (var_1_8)) ? (var_1_12) : (var_1_8))))))) && (((32 << var_1_10) < (var_1_20 | var_1_25)) ? (((var_1_6 - ((((var_1_7) < (var_1_12)) ? (var_1_7) : (var_1_12)))) > (((((last_1_var_1_31) > (var_1_25)) ? (last_1_var_1_31) : (var_1_25))) ^ var_1_18)) ? (var_1_31 == ((signed short int) var_1_25)) : ((var_1_34 >= var_1_34) ? ((3.625 >= (var_1_28 - var_1_29)) ? ((var_1_26 <= (var_1_34 * last_1_var_1_31)) ? (var_1_31 == ((signed short int) (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) - var_1_17))) : (var_1_31 == ((signed short int) var_1_6))) : 1) : (var_1_31 == ((signed short int) ((var_1_25 + var_1_6) - (var_1_10 + var_1_12)))))) : ((((var_1_10 + var_1_12) >> var_1_9) >= var_1_26) ? ((var_1_9 == var_1_17) ? (var_1_31 == ((signed short int) ((((var_1_6) < (var_1_23)) ? (var_1_6) : (var_1_23))))) : (var_1_31 == ((signed short int) (var_1_6 - var_1_10)))) : ((var_1_34 <= ((((var_1_12) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_12) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))))) ? ((((var_1_18 * var_1_34) % var_1_6) <= var_1_27) ? (var_1_31 == ((signed short int) (var_1_12 - var_1_7))) : ((last_1_var_1_31 == var_1_26) ? (var_1_31 == ((signed short int) ((((4) < (((((5) > (var_1_25)) ? (5) : (var_1_25))))) ? (4) : (((((5) > (var_1_25)) ? (5) : (var_1_25)))))))) : (var_1_31 == ((signed short int) (((((1) < (var_1_10)) ? (1) : (var_1_10))) + var_1_23))))) : (var_1_31 == ((signed short int) var_1_27)))))) && ((((((-2) < 0 ) ? -(-2) : (-2))) <= ((var_1_7 - var_1_18) / ((((var_1_13) > (var_1_24)) ? (var_1_13) : (var_1_24))))) ? (var_1_33 == ((double) (var_1_3 + var_1_2))) : 1)) && ((var_1_17 <= -64) ? (var_1_34 == ((unsigned char) (((((((var_1_17) < (var_1_7)) ? (var_1_17) : (var_1_7))) < 0 ) ? -((((var_1_17) < (var_1_7)) ? (var_1_17) : (var_1_7))) : ((((var_1_17) < (var_1_7)) ? (var_1_17) : (var_1_7))))))) : 1)) && ((var_1_46 <= var_1_13) ? (var_1_35 == ((double) (var_1_36 - var_1_37))) : 1)) && ((((((var_1_18) < (last_1_var_1_23)) ? (var_1_18) : (last_1_var_1_23))) > 25) ? (var_1_38 == ((unsigned char) (var_1_21 && (last_1_var_1_19 || var_1_39)))) : ((last_1_var_1_47 >= (2 * 1)) ? (var_1_38 == ((unsigned char) ((var_1_37 > ((((var_1_5) > (16.25)) ? (var_1_5) : (16.25)))) || var_1_21))) : (var_1_38 == ((unsigned char) (var_1_22 || var_1_40)))))) && ((((((var_1_25) < (var_1_34)) ? (var_1_25) : (var_1_34))) > var_1_31) ? (var_1_41 == ((float) ((((10.7f) > (((((var_1_2) < (var_1_37)) ? (var_1_2) : (var_1_37))))) ? (10.7f) : (((((var_1_2) < (var_1_37)) ? (var_1_2) : (var_1_37)))))))) : ((var_1_16 == (((((var_1_47 + var_1_25)) > (var_1_17)) ? ((var_1_47 + var_1_25)) : (var_1_17)))) ? (var_1_41 == ((float) (var_1_3 + var_1_2))) : (var_1_41 == ((float) (var_1_3 + var_1_2)))))) && ((var_1_3 < (var_1_35 + var_1_51)) ? ((0 > var_1_34) ? (var_1_43 == ((double) (var_1_2 + 10.6))) : (var_1_43 == ((double) ((var_1_44 - var_1_45) - var_1_37)))) : 1)) && ((last_1_var_1_38 && (last_1_var_1_26 <= 0)) ? (var_1_46 == ((signed short int) (var_1_9 + var_1_6))) : 1)) && ((((((var_1_18) > ((var_1_27 | last_1_var_1_47))) ? (var_1_18) : ((var_1_27 | last_1_var_1_47)))) == var_1_13) ? (var_1_47 == ((signed long int) (((((((((var_1_9 + var_1_17)) < (var_1_26)) ? ((var_1_9 + var_1_17)) : (var_1_26)))) > (var_1_4)) ? ((((((var_1_9 + var_1_17)) < (var_1_26)) ? ((var_1_9 + var_1_17)) : (var_1_26)))) : (var_1_4))))) : ((var_1_9 < var_1_4) ? (var_1_47 == ((signed long int) ((((last_1_var_1_47 + var_1_23) < 0 ) ? -(last_1_var_1_47 + var_1_23) : (last_1_var_1_47 + var_1_23))))) : (var_1_47 == ((signed long int) var_1_25))))) && (var_1_40 ? (var_1_48 == ((float) var_1_37)) : (var_1_48 == ((float) var_1_44)))) && (var_1_49 == ((signed short int) var_1_9))) && (var_1_38 ? (var_1_50 == ((signed long int) var_1_18)) : (var_1_50 == ((signed long int) last_1_var_1_50)))) && (((((((var_1_13) < (42152)) ? (var_1_13) : (42152))) - var_1_17) == var_1_9) ? (((((((var_1_34 * var_1_47)) > ((var_1_10 + var_1_27))) ? ((var_1_34 * var_1_47)) : ((var_1_10 + var_1_27)))) <= var_1_20) ? (var_1_51 == ((double) var_1_37)) : (var_1_51 == ((double) 0.0))) : (var_1_51 == ((double) var_1_3)))
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

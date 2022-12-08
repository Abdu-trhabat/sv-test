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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 100;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 53946;
unsigned short int var_1_11 = 1;
unsigned long int var_1_12 = 8;
double var_1_13 = 8.25;
signed long int var_1_14 = -256;
double var_1_15 = 0.19999999999999996;
signed long int var_1_16 = -16;
signed char var_1_17 = 1;
signed char var_1_18 = 4;
signed char var_1_19 = 64;
signed long int var_1_20 = 1;
signed long int var_1_21 = 1000000000;
unsigned char var_1_23 = 4;
signed short int var_1_24 = 128;
signed short int var_1_25 = 128;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 5;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 50;
signed short int var_1_30 = -256;
signed short int var_1_31 = 2;
double var_1_32 = 64.5;
float var_1_33 = 8.4;
float var_1_34 = 63.5;
float var_1_35 = 16.75;
double var_1_36 = 1.2;
double var_1_37 = 49.5;
signed char var_1_38 = -32;
signed char var_1_39 = 10;
signed char var_1_40 = 0;
double var_1_41 = 1000.375;
double var_1_42 = 4.5;
double var_1_43 = 0.9;
double var_1_44 = 128.75;
double var_1_45 = 16.75;
signed long int var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 1;
signed long int var_1_49 = -2;
float var_1_50 = 7.875;
unsigned short int last_1_var_1_1 = 100;
unsigned long int last_1_var_1_12 = 8;
double last_1_var_1_13 = 8.25;
signed long int last_1_var_1_16 = -16;
void initially(void) {
}
void step(void) {
 if ((var_1_24 + var_1_25) > 16) {
  var_1_23 = ((var_1_26 + 2) + var_1_27);
 } else {
  if ((~ var_1_25) <= var_1_27) {
   if (var_1_28) {
    var_1_23 = var_1_27;
   }
  } else {
   var_1_23 = var_1_29;
  }
 }
 if (var_1_29 < 10) {
  var_1_30 = (((((((((var_1_23) > (var_1_27)) ? (var_1_23) : (var_1_27)))) > (var_1_26)) ? (((((var_1_23) > (var_1_27)) ? (var_1_23) : (var_1_27)))) : (var_1_26))) + var_1_29);
 } else {
  if (! var_1_28) {
   var_1_30 = ((((((((var_1_26) < (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? (var_1_26) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))))) < (((((var_1_31) > (var_1_27)) ? (var_1_31) : (var_1_27))))) ? (((((var_1_26) < (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? (var_1_26) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))))) : (((((var_1_31) > (var_1_27)) ? (var_1_31) : (var_1_27))))));
  } else {
   var_1_30 = ((((var_1_31) < (var_1_23)) ? (var_1_31) : (var_1_23)));
  }
 }
 if ((((((0.8f) < (var_1_33)) ? (0.8f) : (var_1_33))) / var_1_34) <= var_1_35) {
  if (var_1_23 <= var_1_26) {
   if (var_1_31 > var_1_29) {
    if (! (var_1_27 < var_1_23)) {
     var_1_32 = ((((2.8) < 0 ) ? -(2.8) : (2.8)));
    }
   } else {
    var_1_32 = 31.075;
   }
  } else {
   var_1_32 = ((((var_1_36 - ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < 0 ) ? -(var_1_36 - ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : (var_1_36 - ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))));
  }
 }
 if (var_1_28) {
  var_1_38 = (((((var_1_39 + var_1_40)) > (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) < (-32)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (-32))))) ? ((var_1_39 + var_1_40)) : (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) < (-32)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (-32))))));
 }
 if (var_1_39 >= var_1_25) {
  var_1_41 = (((((var_1_42 + var_1_43)) < ((var_1_36 - var_1_44))) ? ((var_1_42 + var_1_43)) : ((var_1_36 - var_1_44))));
 } else {
  var_1_41 = (((((((((((var_1_37) < (var_1_42)) ? (var_1_37) : (var_1_42)))) < (var_1_36)) ? (((((var_1_37) < (var_1_42)) ? (var_1_37) : (var_1_42)))) : (var_1_36))) < 0 ) ? -((((((((var_1_37) < (var_1_42)) ? (var_1_37) : (var_1_42)))) < (var_1_36)) ? (((((var_1_37) < (var_1_42)) ? (var_1_37) : (var_1_42)))) : (var_1_36))) : ((((((((var_1_37) < (var_1_42)) ? (var_1_37) : (var_1_42)))) < (var_1_36)) ? (((((var_1_37) < (var_1_42)) ? (var_1_37) : (var_1_42)))) : (var_1_36)))));
 }
 if (var_1_28) {
  var_1_45 = (var_1_36 - var_1_44);
 }
 if (var_1_28) {
  if (var_1_42 != ((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43)))) {
   if (var_1_47 && var_1_48) {
    var_1_46 = var_1_26;
   } else {
    if (9.5f >= ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) {
     var_1_46 = ((((var_1_49) > (var_1_29)) ? (var_1_49) : (var_1_29)));
    }
   }
  } else {
   var_1_46 = var_1_40;
  }
 }
 if (var_1_29 <= (~ (var_1_23 * var_1_26))) {
  if (2 <= var_1_25) {
   if (var_1_31 > (var_1_25 * var_1_40)) {
    var_1_50 = ((((var_1_43) < (var_1_42)) ? (var_1_43) : (var_1_42)));
   }
  } else {
   if (var_1_34 >= var_1_45) {
    var_1_50 = (var_1_36 - var_1_44);
   } else {
    if (var_1_35 >= ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) {
     var_1_50 = ((((var_1_37) < (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) ? (var_1_37) : (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))));
    } else {
     var_1_50 = var_1_44;
    }
   }
  }
 } else {
  var_1_50 = var_1_36;
 }
 unsigned char stepLocal_0 = last_1_var_1_13 >= last_1_var_1_13;
 if ((last_1_var_1_12 == last_1_var_1_1) && stepLocal_0) {
  if (var_1_6) {
   if (var_1_7) {
    var_1_1 = ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)));
   } else {
    var_1_1 = ((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)));
   }
  } else {
   var_1_1 = (((((46167) > (var_1_10)) ? (46167) : (var_1_10))) - var_1_11);
  }
 } else {
  var_1_1 = var_1_10;
 }
 if ((((((var_1_11) < (16)) ? (var_1_11) : (16))) >> var_1_10) >= last_1_var_1_16) {
  if (var_1_7) {
   var_1_12 = var_1_10;
  }
 }
 var_1_17 = (4 - ((((var_1_18) < ((var_1_19 - 1))) ? (var_1_18) : ((var_1_19 - 1)))));
 unsigned long int stepLocal_4 = var_1_12;
 if (var_1_6) {
  var_1_20 = ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10);
 } else {
  if ((~ var_1_19) == stepLocal_4) {
   var_1_20 = var_1_1;
  } else {
   var_1_20 = var_1_10;
  }
 }
 unsigned char stepLocal_3 = var_1_6;
 unsigned char stepLocal_2 = var_1_6;
 if (stepLocal_2 && (var_1_9 < (var_1_10 + var_1_20))) {
  if (var_1_7 && stepLocal_3) {
   var_1_16 = var_1_10;
  }
 } else {
  var_1_16 = var_1_8;
 }
 signed long int stepLocal_1 = ((((var_1_10) < (var_1_1)) ? (var_1_10) : (var_1_1))) + (var_1_9 % var_1_14);
 if (stepLocal_1 >= ((((var_1_16) < (var_1_8)) ? (var_1_16) : (var_1_8)))) {
  var_1_13 = var_1_15;
 } else {
  var_1_13 = var_1_15;
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -2147483648);
 assume_abort_if_not(var_1_14 <= 2147483647);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 63);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 536870911);
 assume_abort_if_not(var_1_21 <= 1073741823);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32768);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32768);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 64);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 254);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= -32767);
 assume_abort_if_not(var_1_31 <= 32766);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -63);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -63);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= -2147483647);
 assume_abort_if_not(var_1_49 <= 2147483646);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_16 = var_1_16;
}
int property() {
 return (((((((last_1_var_1_12 == last_1_var_1_1) && (last_1_var_1_13 >= last_1_var_1_13)) ? (var_1_6 ? (var_1_7 ? (var_1_1 == ((unsigned short int) ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) : (var_1_1 == ((unsigned short int) ((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))))) : (var_1_1 == ((unsigned short int) (((((46167) > (var_1_10)) ? (46167) : (var_1_10))) - var_1_11)))) : (var_1_1 == ((unsigned short int) var_1_10))) && (((((((var_1_11) < (16)) ? (var_1_11) : (16))) >> var_1_10) >= last_1_var_1_16) ? (var_1_7 ? (var_1_12 == ((unsigned long int) var_1_10)) : 1) : 1)) && (((((((var_1_10) < (var_1_1)) ? (var_1_10) : (var_1_1))) + (var_1_9 % var_1_14)) >= ((((var_1_16) < (var_1_8)) ? (var_1_16) : (var_1_8)))) ? (var_1_13 == ((double) var_1_15)) : (var_1_13 == ((double) var_1_15)))) && ((var_1_6 && (var_1_9 < (var_1_10 + var_1_20))) ? ((var_1_7 && var_1_6) ? (var_1_16 == ((signed long int) var_1_10)) : 1) : (var_1_16 == ((signed long int) var_1_8)))) && (var_1_17 == ((signed char) (4 - ((((var_1_18) < ((var_1_19 - 1))) ? (var_1_18) : ((var_1_19 - 1)))))))) && (var_1_6 ? (var_1_20 == ((signed long int) ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10))) : (((~ var_1_19) == var_1_12) ? (var_1_20 == ((signed long int) var_1_1)) : (var_1_20 == ((signed long int) var_1_10))))
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

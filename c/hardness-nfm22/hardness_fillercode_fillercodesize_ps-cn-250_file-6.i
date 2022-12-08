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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 100.25;
double var_1_5 = 1.9;
double var_1_6 = 7.5;
double var_1_7 = 64.25;
signed long int var_1_8 = 2;
signed long int var_1_9 = 1000000000;
signed long int var_1_10 = 1000000000;
signed long int var_1_11 = 1957998270;
float var_1_12 = 50.25;
float var_1_13 = 9.8;
float var_1_14 = 25.5;
float var_1_15 = 3.5;
signed long int var_1_16 = -500;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
signed long int var_1_20 = -4;
unsigned char var_1_21 = 0;
signed short int var_1_22 = 8;
signed short int var_1_23 = -200;
signed long int var_1_24 = 0;
unsigned short int var_1_25 = 32;
signed long int var_1_26 = 10;
unsigned short int var_1_27 = 200;
signed long int var_1_28 = -4;
signed long int var_1_29 = 64;
float var_1_30 = 64.5;
float var_1_31 = 255.25;
double var_1_32 = 9.4;
float var_1_33 = 99.2;
double var_1_34 = 50.4;
double var_1_35 = 50.25;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 8;
unsigned char var_1_40 = 100;
double var_1_41 = 1.4;
double var_1_42 = 2.4;
unsigned short int var_1_43 = 256;
unsigned char var_1_44 = 50;
unsigned char var_1_45 = 32;
unsigned long int var_1_46 = 32;
unsigned long int var_1_47 = 1306286448;
unsigned char var_1_48 = 0;
unsigned long int var_1_49 = 2500361653;
unsigned long int var_1_50 = 5;
double var_1_51 = 0.6;
double var_1_52 = 9.375;
double var_1_53 = 5.5;
double var_1_54 = 63.75;
double var_1_55 = 256.25;
unsigned char var_1_56 = 0;
signed short int var_1_57 = -5;
signed short int var_1_58 = -64;
signed short int var_1_59 = 100;
unsigned long int var_1_60 = 16;
unsigned long int var_1_61 = 4;
double var_1_62 = 0.0;
double var_1_63 = 3.7;
signed short int var_1_64 = -2;
unsigned short int var_1_65 = 5;
unsigned short int var_1_66 = 30793;
unsigned short int var_1_67 = 38647;
unsigned short int var_1_68 = 44777;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned long int var_1_71 = 100;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 0;
signed long int var_1_74 = 1;
signed long int var_1_75 = -256;
unsigned long int var_1_76 = 0;
unsigned char var_1_77 = 8;
unsigned long int var_1_78 = 8;
unsigned char var_1_79 = 32;
double var_1_80 = 31.2;
float var_1_81 = 64.2;
double last_1_var_1_1 = 100.25;
signed long int last_1_var_1_8 = 2;
float last_1_var_1_12 = 50.25;
signed long int last_1_var_1_16 = -500;
unsigned char last_1_var_1_17 = 1;
unsigned char last_1_var_1_19 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_21) {
  if (var_1_22 <= var_1_23) {
   var_1_20 = 10;
  }
 }
 if (((((var_1_23) < ((8 ^ var_1_22))) ? (var_1_23) : ((8 ^ var_1_22)))) >= ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) {
  var_1_25 = (var_1_27 + 64);
 } else {
  var_1_25 = var_1_27;
 }
 if (var_1_21) {
  if (var_1_26 != (var_1_23 | var_1_22)) {
   var_1_28 = (var_1_27 - ((((var_1_25 - var_1_29) < 0 ) ? -(var_1_25 - var_1_29) : (var_1_25 - var_1_29))));
  } else {
   var_1_28 = var_1_25;
  }
 } else {
  if ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) < 0 ) ? -((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) : ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) <= var_1_31) {
   var_1_28 = (((((var_1_22 + ((((var_1_27) < (var_1_25)) ? (var_1_27) : (var_1_25))))) < (var_1_23)) ? ((var_1_22 + ((((var_1_27) < (var_1_25)) ? (var_1_27) : (var_1_25))))) : (var_1_23)));
  } else {
   var_1_28 = var_1_25;
  }
 }
 if ((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) * var_1_31) >= (- var_1_33)) {
  if (var_1_21) {
   var_1_32 = (var_1_34 + var_1_35);
  }
 }
 if ((var_1_28 % var_1_23) >= var_1_26) {
  var_1_36 = (((((var_1_37) > (128)) ? (var_1_37) : (128))) - (var_1_38 - var_1_39));
 } else {
  var_1_36 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
 }
 if (var_1_34 <= (var_1_41 - var_1_42)) {
  var_1_40 = (var_1_37 - var_1_38);
 } else {
  if (var_1_25 < var_1_39) {
   var_1_40 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
  }
 }
 if (var_1_25 <= var_1_40) {
  if (var_1_42 < var_1_33) {
   var_1_43 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
  }
 }
 if (var_1_34 < (((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) < 0 ) ? -((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) : ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))))) {
  var_1_44 = (((((var_1_38 - var_1_39) + var_1_45) < 0 ) ? -((var_1_38 - var_1_39) + var_1_45) : ((var_1_38 - var_1_39) + var_1_45)));
 }
 if (var_1_21) {
  var_1_46 = (((((var_1_47 - var_1_27) + var_1_25) < 0 ) ? -((var_1_47 - var_1_27) + var_1_25) : ((var_1_47 - var_1_27) + var_1_25)));
 } else {
  if (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) <= ((var_1_40 - var_1_37) % 8)) {
   if (var_1_48) {
    var_1_46 = (var_1_49 - ((((var_1_47 - var_1_40) < 0 ) ? -(var_1_47 - var_1_40) : (var_1_47 - var_1_40))));
   }
  } else {
   if (var_1_27 >= 0) {
    var_1_46 = ((((1u) < ((((((var_1_36 + var_1_37)) > (var_1_50)) ? ((var_1_36 + var_1_37)) : (var_1_50))))) ? (1u) : ((((((var_1_36 + var_1_37)) > (var_1_50)) ? ((var_1_36 + var_1_37)) : (var_1_50))))));
   }
  }
 }
 if (var_1_48) {
  var_1_51 = ((((((((var_1_52 - var_1_53)) < (var_1_35)) ? ((var_1_52 - var_1_53)) : (var_1_35))) < 0 ) ? -(((((var_1_52 - var_1_53)) < (var_1_35)) ? ((var_1_52 - var_1_53)) : (var_1_35))) : (((((var_1_52 - var_1_53)) < (var_1_35)) ? ((var_1_52 - var_1_53)) : (var_1_35)))));
 } else {
  if (var_1_21) {
   var_1_51 = (var_1_35 + (var_1_54 + var_1_55));
  } else {
   if (var_1_56) {
    var_1_51 = var_1_54;
   }
  }
 }
 if (((((10 % var_1_38) < 0 ) ? -(10 % var_1_38) : (10 % var_1_38))) >= var_1_27) {
  var_1_57 = (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) + var_1_38);
 }
 if (var_1_48) {
  if (! (! var_1_56)) {
   var_1_58 = (var_1_40 - var_1_38);
  } else {
   var_1_58 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
  }
 } else {
  if (9.99999999999998E13 < var_1_42) {
   var_1_58 = (var_1_40 + ((((var_1_36) > (var_1_59)) ? (var_1_36) : (var_1_59))));
  } else {
   if (var_1_52 > var_1_54) {
    var_1_58 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
   } else {
    var_1_58 = var_1_37;
   }
  }
 }
 if (var_1_35 >= var_1_42) {
  if ((var_1_24 | var_1_58) >= var_1_28) {
   var_1_60 = (((((((var_1_43) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_43) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) < 0 ) ? -((((var_1_43) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_43) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) : ((((var_1_43) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_43) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))))));
  } else {
   var_1_60 = ((((((((var_1_36) > (var_1_44)) ? (var_1_36) : (var_1_44))) < 0 ) ? -((((var_1_36) > (var_1_44)) ? (var_1_36) : (var_1_44))) : ((((var_1_36) > (var_1_44)) ? (var_1_36) : (var_1_44))))) + (var_1_47 - var_1_25));
  }
 }
 if (var_1_41 > ((- var_1_55) * var_1_31)) {
  if (var_1_52 <= ((var_1_62 - var_1_63) - var_1_53)) {
   var_1_61 = (var_1_49 - var_1_40);
  } else {
   var_1_61 = ((var_1_43 + var_1_36) + var_1_37);
  }
 }
 if (! var_1_56) {
  if ((~ ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) >= 0) {
   var_1_64 = ((((var_1_38) < (((((var_1_39) < (((((var_1_59) > (var_1_40)) ? (var_1_59) : (var_1_40))))) ? (var_1_39) : (((((var_1_59) > (var_1_40)) ? (var_1_59) : (var_1_40)))))))) ? (var_1_38) : (((((var_1_39) < (((((var_1_59) > (var_1_40)) ? (var_1_59) : (var_1_40))))) ? (var_1_39) : (((((var_1_59) > (var_1_40)) ? (var_1_59) : (var_1_40)))))))));
  } else {
   var_1_64 = (var_1_40 + ((((4) < 0 ) ? -(4) : (4))));
  }
 } else {
  var_1_64 = ((((-2) < 0 ) ? -(-2) : (-2)));
 }
 if (! var_1_48) {
  var_1_65 = (((var_1_66 + 28678) - 5) - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))));
 } else {
  if (var_1_64 >= (var_1_29 & var_1_24)) {
   var_1_65 = (((((var_1_67) > (((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))))) ? (var_1_67) : (((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)))))) - ((((var_1_66) < (var_1_44)) ? (var_1_66) : (var_1_44))));
  } else {
   if (var_1_48) {
    if ((var_1_24 + var_1_61) >= (var_1_50 / var_1_47)) {
     var_1_65 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
    } else {
     var_1_65 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
    }
   }
  }
 }
 var_1_69 = var_1_70;
 if (((((((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66)))) > (16)) ? (((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66)))) : (16))) <= var_1_64) {
  var_1_71 = ((((var_1_39) > ((((((var_1_38 + var_1_36)) < (var_1_50)) ? ((var_1_38 + var_1_36)) : (var_1_50))))) ? (var_1_39) : ((((((var_1_38 + var_1_36)) < (var_1_50)) ? ((var_1_38 + var_1_36)) : (var_1_50))))));
 }
 if ((var_1_39 <= 25) || ((! var_1_70) && var_1_69)) {
  var_1_72 = 0;
 } else {
  if (var_1_70) {
   var_1_72 = (var_1_21 || var_1_73);
  } else {
   var_1_72 = (! var_1_73);
  }
 }
 var_1_74 = var_1_29;
 if (var_1_56) {
  var_1_75 = ((((var_1_57) < (var_1_23)) ? (var_1_57) : (var_1_23)));
 }
 if (var_1_71 > (((((var_1_65) < (var_1_60)) ? (var_1_65) : (var_1_60))) | var_1_43)) {
  var_1_76 = var_1_43;
 }
 if (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))) < var_1_60) {
  var_1_77 = ((((var_1_45) < (var_1_39)) ? (var_1_45) : (var_1_39)));
 } else {
  if (var_1_34 <= var_1_30) {
   var_1_77 = ((((var_1_39) < ((((((var_1_38 + var_1_45)) > (((((10) < (var_1_37)) ? (10) : (var_1_37))))) ? ((var_1_38 + var_1_45)) : (((((10) < (var_1_37)) ? (10) : (var_1_37)))))))) ? (var_1_39) : ((((((var_1_38 + var_1_45)) > (((((10) < (var_1_37)) ? (10) : (var_1_37))))) ? ((var_1_38 + var_1_45)) : (((((10) < (var_1_37)) ? (10) : (var_1_37)))))))));
  } else {
   var_1_77 = (4 + var_1_45);
  }
 }
 if (var_1_21) {
  var_1_78 = var_1_66;
 } else {
  var_1_78 = var_1_77;
 }
 if (var_1_21) {
  var_1_79 = var_1_39;
 }
 var_1_80 = ((((16.5) > (var_1_35)) ? (16.5) : (var_1_35)));
 if (((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) < (var_1_51)) ? (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) : (var_1_51))) >= var_1_62) {
  var_1_81 = ((((((((var_1_53) > (var_1_63)) ? (var_1_53) : (var_1_63)))) > (var_1_35)) ? (((((var_1_53) > (var_1_63)) ? (var_1_53) : (var_1_63)))) : (var_1_35)));
 } else {
  var_1_81 = var_1_63;
 }
 if (last_1_var_1_17) {
  if (var_1_7 > (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) * (last_1_var_1_1 * 63.375))) {
   var_1_19 = var_1_18;
  }
 } else {
  var_1_19 = var_1_18;
 }
 if ((((((- var_1_15)) > ((last_1_var_1_12 * var_1_6))) ? ((- var_1_15)) : ((last_1_var_1_12 * var_1_6)))) < var_1_5) {
  if (var_1_11 != ((((last_1_var_1_8) < (var_1_10)) ? (last_1_var_1_8) : (var_1_10)))) {
   if (last_1_var_1_19) {
    var_1_16 = last_1_var_1_8;
   }
  }
 }
 var_1_8 = (((var_1_9 + var_1_10) - last_1_var_1_16) - (var_1_11 - ((((last_1_var_1_16) < 0 ) ? -(last_1_var_1_16) : (last_1_var_1_16)))));
 signed long int stepLocal_1 = (((var_1_16) < (var_1_9)) ? (var_1_16) : (var_1_9));
 if (stepLocal_1 >= (var_1_16 - var_1_11)) {
  var_1_12 = var_1_7;
 }
 var_1_17 = (((var_1_16 * var_1_9) >= ((((var_1_16) > (var_1_8)) ? (var_1_16) : (var_1_8)))) || var_1_18);
 signed long int stepLocal_2 = var_1_16;
 if (stepLocal_2 < var_1_11) {
  var_1_13 = ((7.3868261718112563E18f - (var_1_14 + var_1_15)) - 5.4f);
 } else {
  var_1_13 = (var_1_15 + ((((var_1_14) < (var_1_5)) ? (var_1_14) : (var_1_5))));
 }
 signed long int stepLocal_0 = var_1_8;
 if (var_1_19) {
  if (stepLocal_0 >= var_1_8) {
   var_1_1 = (var_1_5 + var_1_6);
  } else {
   var_1_1 = (4.125 - var_1_7);
  }
 } else {
  var_1_1 = var_1_5;
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 536870911);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 536870911);
 assume_abort_if_not(var_1_10 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 1073741823);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691390e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= -32768);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -32768);
 assume_abort_if_not(var_1_23 <= 32767);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483647);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 2147483646);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 127);
 assume_abort_if_not(var_1_37 <= 254);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 63);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 1073741823);
 assume_abort_if_not(var_1_47 <= 2147483647);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 2147483647);
 assume_abort_if_not(var_1_49 <= 4294967294);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 4294967294);
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= -230584.3009213691390e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691390e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_59 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_59 >= -16383);
 assume_abort_if_not(var_1_59 <= 16383);
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= 4611686.018427387900e+12F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427387900e+12F && var_1_63 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 24575);
 assume_abort_if_not(var_1_66 <= 32767);
 var_1_67 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_67 >= 32767);
 assume_abort_if_not(var_1_67 <= 65534);
 var_1_68 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_68 >= 32767);
 assume_abort_if_not(var_1_68 <= 65534);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 1);
 assume_abort_if_not(var_1_70 <= 1);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 1);
 assume_abort_if_not(var_1_73 <= 1);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_19 = var_1_19;
}
int property() {
 return ((((((var_1_19 ? ((var_1_8 >= var_1_8) ? (var_1_1 == ((double) (var_1_5 + var_1_6))) : (var_1_1 == ((double) (4.125 - var_1_7)))) : (var_1_1 == ((double) var_1_5))) && (var_1_8 == ((signed long int) (((var_1_9 + var_1_10) - last_1_var_1_16) - (var_1_11 - ((((last_1_var_1_16) < 0 ) ? -(last_1_var_1_16) : (last_1_var_1_16)))))))) && ((((((var_1_16) < (var_1_9)) ? (var_1_16) : (var_1_9))) >= (var_1_16 - var_1_11)) ? (var_1_12 == ((float) var_1_7)) : 1)) && ((var_1_16 < var_1_11) ? (var_1_13 == ((float) ((7.3868261718112563E18f - (var_1_14 + var_1_15)) - 5.4f))) : (var_1_13 == ((float) (var_1_15 + ((((var_1_14) < (var_1_5)) ? (var_1_14) : (var_1_5)))))))) && (((((((- var_1_15)) > ((last_1_var_1_12 * var_1_6))) ? ((- var_1_15)) : ((last_1_var_1_12 * var_1_6)))) < var_1_5) ? ((var_1_11 != ((((last_1_var_1_8) < (var_1_10)) ? (last_1_var_1_8) : (var_1_10)))) ? (last_1_var_1_19 ? (var_1_16 == ((signed long int) last_1_var_1_8)) : 1) : 1) : 1)) && (var_1_17 == ((unsigned char) (((var_1_16 * var_1_9) >= ((((var_1_16) > (var_1_8)) ? (var_1_16) : (var_1_8)))) || var_1_18)))) && (last_1_var_1_17 ? ((var_1_7 > (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) * (last_1_var_1_1 * 63.375))) ? (var_1_19 == ((unsigned char) var_1_18)) : 1) : (var_1_19 == ((unsigned char) var_1_18)))
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

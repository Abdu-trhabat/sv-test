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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch96Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 200;
signed long int var_1_2 = 64;
signed long int var_1_3 = 50;
signed long int var_1_4 = 256;
signed long int var_1_5 = 8;
float var_1_6 = 100000000.15;
float var_1_9 = -0.25;
float var_1_10 = 63.5;
signed short int var_1_11 = 1;
signed short int var_1_12 = -128;
signed short int var_1_13 = 1;
signed short int var_1_14 = -128;
signed short int var_1_15 = 128;
float var_1_16 = 1000000000000.145;
float var_1_17 = 255.4;
float var_1_18 = 1.8;
float var_1_19 = 50.2;
unsigned short int var_1_20 = 2;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 8;
unsigned short int var_1_23 = 256;
unsigned short int var_1_24 = 32;
unsigned char var_1_25 = 2;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 1;
unsigned short int var_1_28 = 100;
unsigned short int var_1_29 = 30769;
unsigned short int var_1_30 = 29394;
double var_1_31 = 63.775;
double var_1_32 = 1000.7;
double var_1_33 = 0.0;
unsigned char var_1_34 = 0;
unsigned short int var_1_35 = 62899;
unsigned char var_1_36 = 0;
float var_1_37 = 1.45;
unsigned char var_1_38 = 0;
signed short int var_1_39 = -5;
signed short int var_1_40 = 5;
signed short int var_1_41 = 1;
signed char var_1_42 = -4;
signed char var_1_43 = 1;
signed char var_1_44 = -16;
signed char var_1_45 = 25;
signed char var_1_46 = 50;
signed char var_1_47 = 4;
signed char var_1_48 = 2;
float var_1_49 = 4.5;
float var_1_50 = 25.875;
float var_1_51 = 10000000.8;
double var_1_52 = 10.5;
double var_1_53 = 0.0;
double var_1_54 = 4.125;
double var_1_55 = 0.0;
double var_1_56 = 49.25;
double var_1_57 = 0.6;
signed short int var_1_58 = -10;
signed short int var_1_59 = 10000;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 25;
unsigned char var_1_64 = 64;
unsigned char var_1_65 = 2;
float var_1_66 = 24.9;
unsigned short int var_1_67 = 10;
double var_1_68 = 32.5;
double var_1_69 = 200.775;
signed short int var_1_70 = -25;
unsigned long int var_1_71 = 4;
signed short int var_1_72 = 4;
signed short int var_1_73 = 17821;
double var_1_74 = 500.8;
double var_1_75 = 24.7;
double var_1_76 = 1.5;
signed char var_1_77 = -128;
signed char var_1_80 = 1;
unsigned char var_1_81 = 10;
signed short int var_1_82 = -32;
float var_1_84 = 128.8;
unsigned long int var_1_85 = 10;
float var_1_86 = 0.5;
float var_1_87 = 31.75;
signed short int var_1_89 = -8;
signed long int var_1_90 = 4;
float var_1_91 = 15.375;
unsigned char var_1_92 = 64;
signed long int var_1_93 = -10;
unsigned long int var_1_94 = 500;
unsigned long int var_1_95 = 32;
unsigned long int var_1_96 = 500;
unsigned short int var_1_97 = 200;
float var_1_98 = 1000000.2;
double var_1_99 = 10.6;
signed long int var_1_100 = -100;
double var_1_101 = 1.75;
float var_1_103 = 10.1;
unsigned char var_1_104 = 1;
unsigned char var_1_105 = 0;
float var_1_106 = 49.12;
unsigned long int var_1_107 = 64;
unsigned short int last_1_var_1_20 = 2;
signed short int last_1_var_1_58 = -10;
unsigned char last_1_var_1_60 = 0;
double last_1_var_1_68 = 32.5;
double last_1_var_1_99 = 10.6;
signed long int last_1_var_1_100 = -100;
void initially(void) {
}
void step(void) {
 if (var_1_32 >= var_1_54) {
  var_1_85 = (var_1_4 + ((((var_1_30) < (var_1_41)) ? (var_1_30) : (var_1_41))));
 } else {
  if (var_1_76 != last_1_var_1_99) {
   var_1_85 = ((last_1_var_1_20 + var_1_26) + var_1_23);
  } else {
   var_1_85 = (((((var_1_41) > (var_1_4)) ? (var_1_41) : (var_1_4))) + ((1926408870u - last_1_var_1_100) - (4u + var_1_47)));
  }
 }
 signed long int stepLocal_18 = var_1_67 / var_1_46;
 if (stepLocal_18 >= var_1_85) {
  var_1_70 = (((((var_1_26 - var_1_46)) > (var_1_67)) ? ((var_1_26 - var_1_46)) : (var_1_67)));
 } else {
  var_1_70 = (256 - (var_1_64 + (var_1_27 + var_1_47)));
 }
 var_1_1 = ((((var_1_2) < ((var_1_3 - ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))))) ? (var_1_2) : ((var_1_3 - ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))))));
 var_1_11 = ((((var_1_12) < (2)) ? (var_1_12) : (2)));
 signed long int stepLocal_2 = var_1_3;
 if (var_1_4 <= stepLocal_2) {
  var_1_13 = (((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))));
 }
 if (! (var_1_10 > var_1_9)) {
  var_1_16 = ((((((((var_1_9) > ((var_1_17 - var_1_18))) ? (var_1_9) : ((var_1_17 - var_1_18))))) > (var_1_10)) ? (((((var_1_9) > ((var_1_17 - var_1_18))) ? (var_1_9) : ((var_1_17 - var_1_18))))) : (var_1_10)));
 }
 if (var_1_18 <= (- var_1_10)) {
  var_1_19 = ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)));
 }
 unsigned short int stepLocal_9 = var_1_35;
 if (stepLocal_9 == var_1_40) {
  var_1_49 = (var_1_32 + var_1_50);
 } else {
  var_1_49 = ((((((128.375f + var_1_51)) > (50.4f)) ? ((128.375f + var_1_51)) : (50.4f))) + var_1_32);
 }
 if (var_1_51 >= ((((var_1_18) < (var_1_69)) ? (var_1_18) : (var_1_69)))) {
  var_1_71 = ((((var_1_29) > (var_1_40)) ? (var_1_29) : (var_1_40)));
 }
 var_1_81 = (var_1_65 + var_1_46);
 unsigned short int stepLocal_26 = var_1_30;
 if (var_1_64 == stepLocal_26) {
  var_1_84 = ((((var_1_9) > (var_1_53)) ? (var_1_9) : (var_1_53)));
 }
 if (var_1_38) {
  var_1_95 = var_1_27;
 } else {
  var_1_95 = var_1_30;
 }
 var_1_99 = var_1_56;
 if (var_1_62) {
  var_1_100 = -16;
 } else {
  var_1_100 = var_1_67;
 }
 var_1_104 = var_1_36;
 var_1_105 = var_1_62;
 signed short int stepLocal_37 = var_1_40;
 signed short int stepLocal_36 = var_1_59;
 if (stepLocal_37 > (((((var_1_67 | var_1_59)) > (((((var_1_26) > (var_1_45)) ? (var_1_26) : (var_1_45))))) ? ((var_1_67 | var_1_59)) : (((((var_1_26) > (var_1_45)) ? (var_1_26) : (var_1_45))))))) {
  if (var_1_71 <= stepLocal_36) {
   var_1_107 = (var_1_85 + (((((var_1_48) < (var_1_65)) ? (var_1_48) : (var_1_65))) + var_1_59));
  } else {
   var_1_107 = var_1_35;
  }
 } else {
  var_1_107 = 0u;
 }
 if (var_1_104) {
  var_1_94 = var_1_107;
 }
 unsigned short int stepLocal_3 = var_1_22;
 if (var_1_10 >= (var_1_18 - var_1_17)) {
  if (var_1_105) {
   if (var_1_95 >= stepLocal_3) {
    var_1_24 = var_1_22;
   }
  }
 } else {
  var_1_24 = (32 + var_1_23);
 }
 signed short int stepLocal_4 = var_1_14;
 if (! (var_1_100 <= (- var_1_3))) {
  if (var_1_95 > stepLocal_4) {
   var_1_25 = (((((128) < (var_1_26)) ? (128) : (var_1_26))) - var_1_27);
  } else {
   var_1_25 = var_1_27;
  }
 } else {
  var_1_25 = var_1_27;
 }
 if (var_1_104 || var_1_38) {
  var_1_57 = var_1_54;
 }
 unsigned short int stepLocal_15 = var_1_24;
 unsigned char stepLocal_14 = var_1_26;
 if ((128u >> var_1_67) != stepLocal_14) {
  if ((- (var_1_4 + var_1_22)) < stepLocal_15) {
   var_1_66 = (var_1_56 + 1.8f);
  } else {
   var_1_66 = 24.5f;
  }
 }
 unsigned char stepLocal_27 = var_1_38;
 if (! (var_1_2 < var_1_80)) {
  if (var_1_105) {
   var_1_86 = ((var_1_54 - ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) + var_1_56);
  }
 } else {
  if (stepLocal_27 && var_1_61) {
   var_1_86 = var_1_56;
  } else {
   var_1_86 = var_1_75;
  }
 }
 if (var_1_105) {
  var_1_93 = var_1_1;
 }
 if (var_1_105) {
  var_1_96 = var_1_47;
 } else {
  var_1_96 = var_1_4;
 }
 if (var_1_105) {
  var_1_101 = var_1_54;
 } else {
  var_1_101 = var_1_17;
 }
 if ((var_1_95 / (var_1_35 - var_1_26)) < var_1_27) {
  if ((var_1_5 % ((((var_1_26) < (var_1_35)) ? (var_1_26) : (var_1_35)))) > (var_1_14 | var_1_93)) {
   var_1_34 = (var_1_105 && var_1_36);
  }
 } else {
  if (var_1_9 < (var_1_17 / ((((var_1_33) > (var_1_37)) ? (var_1_33) : (var_1_37))))) {
   var_1_34 = (! ((var_1_105 || var_1_36) && var_1_38));
  } else {
   var_1_34 = var_1_36;
  }
 }
 if (var_1_62) {
  if ((var_1_46 - var_1_22) < var_1_96) {
   if (var_1_84 < (31.25f - (var_1_53 - var_1_32))) {
    var_1_72 = var_1_59;
   } else {
    var_1_72 = ((((((var_1_73 - var_1_48)) < ((var_1_67 + var_1_59))) ? ((var_1_73 - var_1_48)) : ((var_1_67 + var_1_59)))) - var_1_41);
   }
  }
 }
 if (var_1_34) {
  var_1_97 = var_1_30;
 }
 if (var_1_34) {
  var_1_98 = var_1_33;
 } else {
  var_1_98 = var_1_55;
 }
 if (var_1_34) {
  var_1_103 = var_1_69;
 } else {
  var_1_103 = var_1_10;
 }
 if (var_1_34) {
  var_1_106 = var_1_76;
 } else {
  var_1_106 = var_1_17;
 }
 signed long int stepLocal_1 = var_1_4;
 signed long int stepLocal_0 = 0;
 if (stepLocal_0 == ((((-4) < (var_1_107)) ? (-4) : (var_1_107)))) {
  if (var_1_34) {
   if (stepLocal_1 < var_1_5) {
    var_1_6 = ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)));
   } else {
    var_1_6 = var_1_10;
   }
  }
 }
 if (var_1_12 < var_1_29) {
  if (var_1_34) {
   if (var_1_23 >= (- ((((var_1_5) < (var_1_100)) ? (var_1_5) : (var_1_100))))) {
    var_1_31 = ((var_1_32 + 32.5) - var_1_17);
   } else {
    var_1_31 = (var_1_17 - (var_1_33 - var_1_32));
   }
  } else {
   var_1_31 = var_1_10;
  }
 }
 signed short int stepLocal_6 = var_1_72;
 if (stepLocal_6 >= ((((var_1_26) > (((((var_1_5) < (var_1_2)) ? (var_1_5) : (var_1_2))))) ? (var_1_26) : (((((var_1_5) < (var_1_2)) ? (var_1_5) : (var_1_2))))))) {
  var_1_39 = ((((((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))) < 0 ) ? -((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))) : ((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))))) - ((((var_1_27) < (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))))) ? (var_1_27) : (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41)))))));
 } else {
  if (var_1_16 > var_1_49) {
   var_1_39 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
  }
 }
 signed long int stepLocal_12 = var_1_1;
 signed long int stepLocal_11 = (((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29));
 if (last_1_var_1_60) {
  var_1_60 = (var_1_36 || var_1_38);
 } else {
  if (var_1_27 > stepLocal_11) {
   if (var_1_33 >= (- ((((var_1_55) > (var_1_31)) ? (var_1_55) : (var_1_31))))) {
    if (stepLocal_12 < var_1_45) {
     var_1_60 = (! var_1_61);
    } else {
     var_1_60 = (var_1_61 && var_1_62);
    }
   }
  } else {
   var_1_60 = (! (! var_1_36));
  }
 }
 signed long int stepLocal_17 = (- var_1_46) ^ (var_1_29 + var_1_23);
 unsigned short int stepLocal_16 = var_1_35;
 if ((var_1_6 / var_1_33) >= (var_1_54 - var_1_32)) {
  var_1_68 = (255.5 - ((((((((var_1_33) < (var_1_55)) ? (var_1_33) : (var_1_55)))) > (var_1_53)) ? (((((var_1_33) < (var_1_55)) ? (var_1_33) : (var_1_55)))) : (var_1_53))));
 } else {
  if (((((var_1_33) < ((var_1_101 + var_1_50))) ? (var_1_33) : ((var_1_101 + var_1_50)))) == (- last_1_var_1_68)) {
   if (stepLocal_16 > var_1_93) {
    var_1_68 = ((((((var_1_55 - var_1_56) + var_1_32)) > (var_1_54)) ? (((var_1_55 - var_1_56) + var_1_32)) : (var_1_54)));
   } else {
    var_1_68 = (((((100.4 - var_1_55)) < ((var_1_56 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) ? ((100.4 - var_1_55)) : ((var_1_56 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))));
   }
  } else {
   if (stepLocal_17 < (~ var_1_41)) {
    var_1_68 = ((((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69))) + 0.3) + var_1_50);
   } else {
    var_1_68 = ((((var_1_54) > (var_1_33)) ? (var_1_54) : (var_1_33)));
   }
  }
 }
 unsigned char stepLocal_23 = var_1_27;
 unsigned char stepLocal_22 = var_1_60;
 unsigned short int stepLocal_21 = var_1_23;
 if (var_1_62 && stepLocal_22) {
  if (var_1_26 != stepLocal_23) {
   if (var_1_97 < stepLocal_21) {
    var_1_77 = (var_1_48 + (var_1_65 + var_1_45));
   } else {
    var_1_77 = ((var_1_45 + ((((var_1_47) > (var_1_67)) ? (var_1_47) : (var_1_67)))) + var_1_44);
   }
  } else {
   var_1_77 = ((((-32) > (var_1_80)) ? (-32) : (var_1_80)));
  }
 } else {
  var_1_77 = ((var_1_44 + var_1_65) + var_1_45);
 }
 signed short int stepLocal_30 = var_1_73;
 unsigned long int stepLocal_29 = var_1_107;
 unsigned long int stepLocal_28 = var_1_85;
 if (var_1_72 >= stepLocal_28) {
  var_1_87 = ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)));
 } else {
  if (var_1_11 >= stepLocal_29) {
   if (stepLocal_30 != (var_1_39 + var_1_80)) {
    var_1_87 = (32.875f + var_1_32);
   } else {
    var_1_87 = 15.02f;
   }
  }
 }
 signed long int stepLocal_35 = (((var_1_41) > (var_1_93)) ? (var_1_41) : (var_1_93));
 signed short int stepLocal_34 = var_1_39;
 unsigned long int stepLocal_33 = 1u;
 if (stepLocal_35 > var_1_71) {
  if (var_1_96 < stepLocal_33) {
   var_1_92 = ((((8) < (((var_1_67 + 1) + (var_1_64 - var_1_48)))) ? (8) : (((var_1_67 + 1) + (var_1_64 - var_1_48)))));
  }
 } else {
  if (stepLocal_34 <= var_1_85) {
   var_1_92 = var_1_27;
  } else {
   var_1_92 = var_1_46;
  }
 }
 signed long int stepLocal_10 = var_1_29 + var_1_70;
 if (! var_1_105) {
  if (stepLocal_10 >= ((var_1_23 << var_1_14) + 32)) {
   if ((var_1_101 * var_1_32) <= (- var_1_31)) {
    var_1_58 = (var_1_48 - var_1_46);
   } else {
    var_1_58 = last_1_var_1_58;
   }
  } else {
   if (var_1_54 > (- (var_1_56 - var_1_33))) {
    var_1_58 = (var_1_48 - ((var_1_59 - var_1_47) + ((((var_1_26) > (var_1_46)) ? (var_1_26) : (var_1_46)))));
   }
  }
 } else {
  var_1_58 = (((((var_1_59 + var_1_45)) > (var_1_27)) ? ((var_1_59 + var_1_45)) : (var_1_27)));
 }
 if (((var_1_94 / var_1_73) <= var_1_25) || var_1_61) {
  var_1_91 = (var_1_55 - var_1_53);
 } else {
  if ((var_1_45 <= var_1_39) || var_1_60) {
   if (var_1_34) {
    var_1_91 = ((3.25f + var_1_69) + var_1_51);
   }
  } else {
   var_1_91 = (((((var_1_54 - var_1_18)) > (var_1_51)) ? ((var_1_54 - var_1_18)) : (var_1_51)));
  }
 }
 signed long int stepLocal_5 = var_1_5 % var_1_26;
 if (var_1_23 <= stepLocal_5) {
  if (var_1_60) {
   var_1_28 = ((var_1_29 + var_1_30) - var_1_27);
  } else {
   var_1_28 = (var_1_11 + (128 + var_1_26));
  }
 }
 unsigned long int stepLocal_8 = ((((var_1_23) > (var_1_94)) ? (var_1_23) : (var_1_94))) * var_1_1;
 unsigned char stepLocal_7 = var_1_38;
 if (var_1_105) {
  if (var_1_60 && stepLocal_7) {
   if (stepLocal_8 != var_1_15) {
    var_1_42 = var_1_43;
   } else {
    var_1_42 = ((var_1_44 + var_1_45) + ((var_1_46 - var_1_47) - ((((2) < (var_1_48)) ? (2) : (var_1_48)))));
   }
  }
 } else {
  var_1_42 = (var_1_47 - 25);
 }
 unsigned char stepLocal_32 = var_1_26 >= var_1_71;
 if (stepLocal_32 && var_1_62) {
  var_1_90 = ((var_1_28 + var_1_58) + (var_1_40 + var_1_107));
 }
 signed short int stepLocal_25 = var_1_15;
 unsigned char stepLocal_24 = var_1_34;
 if (var_1_38) {
  if ((var_1_85 * var_1_90) >= stepLocal_25) {
   var_1_82 = var_1_64;
  } else {
   if (((32 >= var_1_28) && var_1_61) || stepLocal_24) {
    var_1_82 = ((((10) > (((((var_1_80) > ((-100 + 4))) ? (var_1_80) : ((-100 + 4)))))) ? (10) : (((((var_1_80) > ((-100 + 4))) ? (var_1_80) : ((-100 + 4)))))));
   }
  }
 } else {
  if (! var_1_36) {
   var_1_82 = var_1_26;
  }
 }
 unsigned short int stepLocal_20 = var_1_29;
 signed short int stepLocal_19 = var_1_40;
 if (! (var_1_4 > ((((var_1_90) > (var_1_67)) ? (var_1_90) : (var_1_67))))) {
  if (stepLocal_20 > var_1_90) {
   var_1_74 = ((((((((2.8) > (var_1_50)) ? (2.8) : (var_1_50)))) > (var_1_18)) ? (((((2.8) > (var_1_50)) ? (2.8) : (var_1_50)))) : (var_1_18)));
  } else {
   if (! var_1_34) {
    var_1_74 = (var_1_54 + var_1_56);
   } else {
    if (stepLocal_19 != (var_1_47 << var_1_90)) {
     var_1_74 = (var_1_32 + (var_1_51 + (var_1_75 + var_1_76)));
    } else {
     var_1_74 = (var_1_32 - var_1_54);
    }
   }
  }
 } else {
  var_1_74 = (((((var_1_56) > (var_1_54)) ? (var_1_56) : (var_1_54))) - var_1_17);
 }
 if ((((((128.25f + var_1_74)) > (var_1_91)) ? ((128.25f + var_1_74)) : (var_1_91))) < ((((var_1_18) > (var_1_10)) ? (var_1_18) : (var_1_10)))) {
  var_1_20 = ((((var_1_21) > ((256 + ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))))) ? (var_1_21) : ((256 + ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))))));
 }
 if (10000 <= var_1_20) {
  if (((var_1_12 | var_1_15) * (var_1_27 - var_1_47)) >= var_1_45) {
   var_1_52 = (var_1_32 + var_1_50);
  }
 } else {
  var_1_52 = (((var_1_54 + 24.8) + (var_1_55 - var_1_56)) - var_1_32);
 }
 unsigned short int stepLocal_13 = var_1_20;
 if ((var_1_56 - var_1_17) < var_1_32) {
  if (stepLocal_13 == (var_1_26 ^ var_1_48)) {
   var_1_63 = (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) - (var_1_64 - 10));
  } else {
   var_1_63 = var_1_46;
  }
 } else {
  var_1_63 = ((25 + (var_1_47 + var_1_65)) + var_1_27);
 }
 unsigned short int stepLocal_31 = var_1_20;
 if ((var_1_33 / ((((var_1_53) > (var_1_55)) ? (var_1_53) : (var_1_55)))) < var_1_99) {
  var_1_89 = ((var_1_43 + var_1_26) + ((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81))));
 } else {
  if (! var_1_104) {
   if (stepLocal_31 <= ((var_1_3 | var_1_20) * var_1_71)) {
    var_1_89 = ((((0) < ((var_1_80 + var_1_48))) ? (0) : ((var_1_80 + var_1_48))));
   }
  } else {
   var_1_89 = (var_1_81 + (100 - (var_1_58 + var_1_64)));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483647);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32767);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32766);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32766);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 65534);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 127);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 16383);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 16384);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 32767);
 assume_abort_if_not(var_1_35 <= 65535);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 assume_abort_if_not(var_1_37 != 0.0F);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 32766);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 32766);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -127);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -31);
 assume_abort_if_not(var_1_44 <= 32);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -31);
 assume_abort_if_not(var_1_45 <= 31);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 31);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 31);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= -230584.3009213691400e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= 6917529.027641074000e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691400e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= 2305843.009213691400e+12F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_59 >= 8191);
 assume_abort_if_not(var_1_59 <= 16383);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 1);
 assume_abort_if_not(var_1_61 <= 1);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 1);
 assume_abort_if_not(var_1_62 <= 1);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 63);
 assume_abort_if_not(var_1_64 <= 127);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 31);
 var_1_67 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_67 >= 1);
 assume_abort_if_not(var_1_67 <= 31);
 var_1_69 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_69 >= -230584.3009213691400e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691400e+12F && var_1_69 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_73 >= 16382);
 assume_abort_if_not(var_1_73 <= 32766);
 var_1_75 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_75 >= -115292.1504606845700e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 1152921.504606845700e+12F && var_1_75 >= 1.0e-20F ));
 var_1_76 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_76 >= -115292.1504606845700e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 1152921.504606845700e+12F && var_1_76 >= 1.0e-20F ));
 var_1_80 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_80 >= -127);
 assume_abort_if_not(var_1_80 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_100 = var_1_100;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((signed long int) ((((var_1_2) < ((var_1_3 - ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))))) ? (var_1_2) : ((var_1_3 - ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))))))) && ((0 == ((((-4) < (var_1_107)) ? (-4) : (var_1_107)))) ? (var_1_34 ? ((var_1_4 < var_1_5) ? (var_1_6 == ((float) ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) : (var_1_6 == ((float) var_1_10))) : 1) : 1)) && (var_1_11 == ((signed short int) ((((var_1_12) < (2)) ? (var_1_12) : (2)))))) && ((var_1_4 <= var_1_3) ? (var_1_13 == ((signed short int) (((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))))))) : 1)) && ((! (var_1_10 > var_1_9)) ? (var_1_16 == ((float) ((((((((var_1_9) > ((var_1_17 - var_1_18))) ? (var_1_9) : ((var_1_17 - var_1_18))))) > (var_1_10)) ? (((((var_1_9) > ((var_1_17 - var_1_18))) ? (var_1_9) : ((var_1_17 - var_1_18))))) : (var_1_10))))) : 1)) && ((var_1_18 <= (- var_1_10)) ? (var_1_19 == ((float) ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))) : 1)) && (((((((128.25f + var_1_74)) > (var_1_91)) ? ((128.25f + var_1_74)) : (var_1_91))) < ((((var_1_18) > (var_1_10)) ? (var_1_18) : (var_1_10)))) ? (var_1_20 == ((unsigned short int) ((((var_1_21) > ((256 + ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))))) ? (var_1_21) : ((256 + ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))))))))) : 1)) && ((var_1_10 >= (var_1_18 - var_1_17)) ? (var_1_105 ? ((var_1_95 >= var_1_22) ? (var_1_24 == ((unsigned short int) var_1_22)) : 1) : 1) : (var_1_24 == ((unsigned short int) (32 + var_1_23))))) && ((! (var_1_100 <= (- var_1_3))) ? ((var_1_95 > var_1_14) ? (var_1_25 == ((unsigned char) (((((128) < (var_1_26)) ? (128) : (var_1_26))) - var_1_27))) : (var_1_25 == ((unsigned char) var_1_27))) : (var_1_25 == ((unsigned char) var_1_27)))) && ((var_1_23 <= (var_1_5 % var_1_26)) ? (var_1_60 ? (var_1_28 == ((unsigned short int) ((var_1_29 + var_1_30) - var_1_27))) : (var_1_28 == ((unsigned short int) (var_1_11 + (128 + var_1_26))))) : 1)) && ((var_1_12 < var_1_29) ? (var_1_34 ? ((var_1_23 >= (- ((((var_1_5) < (var_1_100)) ? (var_1_5) : (var_1_100))))) ? (var_1_31 == ((double) ((var_1_32 + 32.5) - var_1_17))) : (var_1_31 == ((double) (var_1_17 - (var_1_33 - var_1_32))))) : (var_1_31 == ((double) var_1_10))) : 1)) && (((var_1_95 / (var_1_35 - var_1_26)) < var_1_27) ? (((var_1_5 % ((((var_1_26) < (var_1_35)) ? (var_1_26) : (var_1_35)))) > (var_1_14 | var_1_93)) ? (var_1_34 == ((unsigned char) (var_1_105 && var_1_36))) : 1) : ((var_1_9 < (var_1_17 / ((((var_1_33) > (var_1_37)) ? (var_1_33) : (var_1_37))))) ? (var_1_34 == ((unsigned char) (! ((var_1_105 || var_1_36) && var_1_38)))) : (var_1_34 == ((unsigned char) var_1_36))))) && ((var_1_72 >= ((((var_1_26) > (((((var_1_5) < (var_1_2)) ? (var_1_5) : (var_1_2))))) ? (var_1_26) : (((((var_1_5) < (var_1_2)) ? (var_1_5) : (var_1_2))))))) ? (var_1_39 == ((signed short int) ((((((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))) < 0 ) ? -((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))) : ((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))))) - ((((var_1_27) < (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))))) ? (var_1_27) : (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))))))))) : ((var_1_16 > var_1_49) ? (var_1_39 == ((signed short int) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) : 1))) && (var_1_105 ? ((var_1_60 && var_1_38) ? (((((((var_1_23) > (var_1_94)) ? (var_1_23) : (var_1_94))) * var_1_1) != var_1_15) ? (var_1_42 == ((signed char) var_1_43)) : (var_1_42 == ((signed char) ((var_1_44 + var_1_45) + ((var_1_46 - var_1_47) - ((((2) < (var_1_48)) ? (2) : (var_1_48)))))))) : 1) : (var_1_42 == ((signed char) (var_1_47 - 25))))) && ((var_1_35 == var_1_40) ? (var_1_49 == ((float) (var_1_32 + var_1_50))) : (var_1_49 == ((float) ((((((128.375f + var_1_51)) > (50.4f)) ? ((128.375f + var_1_51)) : (50.4f))) + var_1_32))))) && ((10000 <= var_1_20) ? ((((var_1_12 | var_1_15) * (var_1_27 - var_1_47)) >= var_1_45) ? (var_1_52 == ((double) (var_1_32 + var_1_50))) : 1) : (var_1_52 == ((double) (((var_1_54 + 24.8) + (var_1_55 - var_1_56)) - var_1_32))))) && ((var_1_104 || var_1_38) ? (var_1_57 == ((double) var_1_54)) : 1)) && ((! var_1_105) ? (((var_1_29 + var_1_70) >= ((var_1_23 << var_1_14) + 32)) ? (((var_1_101 * var_1_32) <= (- var_1_31)) ? (var_1_58 == ((signed short int) (var_1_48 - var_1_46))) : (var_1_58 == ((signed short int) last_1_var_1_58))) : ((var_1_54 > (- (var_1_56 - var_1_33))) ? (var_1_58 == ((signed short int) (var_1_48 - ((var_1_59 - var_1_47) + ((((var_1_26) > (var_1_46)) ? (var_1_26) : (var_1_46))))))) : 1)) : (var_1_58 == ((signed short int) (((((var_1_59 + var_1_45)) > (var_1_27)) ? ((var_1_59 + var_1_45)) : (var_1_27))))))) && (last_1_var_1_60 ? (var_1_60 == ((unsigned char) (var_1_36 || var_1_38))) : ((var_1_27 > ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) ? ((var_1_33 >= (- ((((var_1_55) > (var_1_31)) ? (var_1_55) : (var_1_31))))) ? ((var_1_1 < var_1_45) ? (var_1_60 == ((unsigned char) (! var_1_61))) : (var_1_60 == ((unsigned char) (var_1_61 && var_1_62)))) : 1) : (var_1_60 == ((unsigned char) (! (! var_1_36))))))) && (((var_1_56 - var_1_17) < var_1_32) ? ((var_1_20 == (var_1_26 ^ var_1_48)) ? (var_1_63 == ((unsigned char) (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) - (var_1_64 - 10)))) : (var_1_63 == ((unsigned char) var_1_46))) : (var_1_63 == ((unsigned char) ((25 + (var_1_47 + var_1_65)) + var_1_27))))) && (((128u >> var_1_67) != var_1_26) ? (((- (var_1_4 + var_1_22)) < var_1_24) ? (var_1_66 == ((float) (var_1_56 + 1.8f))) : (var_1_66 == ((float) 24.5f))) : 1)) && (((var_1_6 / var_1_33) >= (var_1_54 - var_1_32)) ? (var_1_68 == ((double) (255.5 - ((((((((var_1_33) < (var_1_55)) ? (var_1_33) : (var_1_55)))) > (var_1_53)) ? (((((var_1_33) < (var_1_55)) ? (var_1_33) : (var_1_55)))) : (var_1_53)))))) : ((((((var_1_33) < ((var_1_101 + var_1_50))) ? (var_1_33) : ((var_1_101 + var_1_50)))) == (- last_1_var_1_68)) ? ((var_1_35 > var_1_93) ? (var_1_68 == ((double) ((((((var_1_55 - var_1_56) + var_1_32)) > (var_1_54)) ? (((var_1_55 - var_1_56) + var_1_32)) : (var_1_54))))) : (var_1_68 == ((double) (((((100.4 - var_1_55)) < ((var_1_56 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) ? ((100.4 - var_1_55)) : ((var_1_56 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))))))) : ((((- var_1_46) ^ (var_1_29 + var_1_23)) < (~ var_1_41)) ? (var_1_68 == ((double) ((((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69))) + 0.3) + var_1_50))) : (var_1_68 == ((double) ((((var_1_54) > (var_1_33)) ? (var_1_54) : (var_1_33))))))))) && (((var_1_67 / var_1_46) >= var_1_85) ? (var_1_70 == ((signed short int) (((((var_1_26 - var_1_46)) > (var_1_67)) ? ((var_1_26 - var_1_46)) : (var_1_67))))) : (var_1_70 == ((signed short int) (256 - (var_1_64 + (var_1_27 + var_1_47))))))) && ((var_1_51 >= ((((var_1_18) < (var_1_69)) ? (var_1_18) : (var_1_69)))) ? (var_1_71 == ((unsigned long int) ((((var_1_29) > (var_1_40)) ? (var_1_29) : (var_1_40))))) : 1)) && (var_1_62 ? (((var_1_46 - var_1_22) < var_1_96) ? ((var_1_84 < (31.25f - (var_1_53 - var_1_32))) ? (var_1_72 == ((signed short int) var_1_59)) : (var_1_72 == ((signed short int) ((((((var_1_73 - var_1_48)) < ((var_1_67 + var_1_59))) ? ((var_1_73 - var_1_48)) : ((var_1_67 + var_1_59)))) - var_1_41)))) : 1) : 1)) && ((! (var_1_4 > ((((var_1_90) > (var_1_67)) ? (var_1_90) : (var_1_67))))) ? ((var_1_29 > var_1_90) ? (var_1_74 == ((double) ((((((((2.8) > (var_1_50)) ? (2.8) : (var_1_50)))) > (var_1_18)) ? (((((2.8) > (var_1_50)) ? (2.8) : (var_1_50)))) : (var_1_18))))) : ((! var_1_34) ? (var_1_74 == ((double) (var_1_54 + var_1_56))) : ((var_1_40 != (var_1_47 << var_1_90)) ? (var_1_74 == ((double) (var_1_32 + (var_1_51 + (var_1_75 + var_1_76))))) : (var_1_74 == ((double) (var_1_32 - var_1_54)))))) : (var_1_74 == ((double) (((((var_1_56) > (var_1_54)) ? (var_1_56) : (var_1_54))) - var_1_17))))) && ((var_1_62 && var_1_60) ? ((var_1_26 != var_1_27) ? ((var_1_97 < var_1_23) ? (var_1_77 == ((signed char) (var_1_48 + (var_1_65 + var_1_45)))) : (var_1_77 == ((signed char) ((var_1_45 + ((((var_1_47) > (var_1_67)) ? (var_1_47) : (var_1_67)))) + var_1_44)))) : (var_1_77 == ((signed char) ((((-32) > (var_1_80)) ? (-32) : (var_1_80)))))) : (var_1_77 == ((signed char) ((var_1_44 + var_1_65) + var_1_45))))) && (var_1_81 == ((unsigned char) (var_1_65 + var_1_46)))) && (var_1_38 ? (((var_1_85 * var_1_90) >= var_1_15) ? (var_1_82 == ((signed short int) var_1_64)) : ((((32 >= var_1_28) && var_1_61) || var_1_34) ? (var_1_82 == ((signed short int) ((((10) > (((((var_1_80) > ((-100 + 4))) ? (var_1_80) : ((-100 + 4)))))) ? (10) : (((((var_1_80) > ((-100 + 4))) ? (var_1_80) : ((-100 + 4))))))))) : 1)) : ((! var_1_36) ? (var_1_82 == ((signed short int) var_1_26)) : 1))) && ((var_1_64 == var_1_30) ? (var_1_84 == ((float) ((((var_1_9) > (var_1_53)) ? (var_1_9) : (var_1_53))))) : 1)) && ((var_1_32 >= var_1_54) ? (var_1_85 == ((unsigned long int) (var_1_4 + ((((var_1_30) < (var_1_41)) ? (var_1_30) : (var_1_41)))))) : ((var_1_76 != last_1_var_1_99) ? (var_1_85 == ((unsigned long int) ((last_1_var_1_20 + var_1_26) + var_1_23))) : (var_1_85 == ((unsigned long int) (((((var_1_41) > (var_1_4)) ? (var_1_41) : (var_1_4))) + ((1926408870u - last_1_var_1_100) - (4u + var_1_47)))))))) && ((! (var_1_2 < var_1_80)) ? (var_1_105 ? (var_1_86 == ((float) ((var_1_54 - ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) + var_1_56))) : 1) : ((var_1_38 && var_1_61) ? (var_1_86 == ((float) var_1_56)) : (var_1_86 == ((float) var_1_75))))) && ((var_1_72 >= var_1_85) ? (var_1_87 == ((float) ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))) : ((var_1_11 >= var_1_107) ? ((var_1_73 != (var_1_39 + var_1_80)) ? (var_1_87 == ((float) (32.875f + var_1_32))) : (var_1_87 == ((float) 15.02f))) : 1))) && (((var_1_33 / ((((var_1_53) > (var_1_55)) ? (var_1_53) : (var_1_55)))) < var_1_99) ? (var_1_89 == ((signed short int) ((var_1_43 + var_1_26) + ((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81)))))) : ((! var_1_104) ? ((var_1_20 <= ((var_1_3 | var_1_20) * var_1_71)) ? (var_1_89 == ((signed short int) ((((0) < ((var_1_80 + var_1_48))) ? (0) : ((var_1_80 + var_1_48)))))) : 1) : (var_1_89 == ((signed short int) (var_1_81 + (100 - (var_1_58 + var_1_64)))))))) && (((var_1_26 >= var_1_71) && var_1_62) ? (var_1_90 == ((signed long int) ((var_1_28 + var_1_58) + (var_1_40 + var_1_107)))) : 1)) && ((((var_1_94 / var_1_73) <= var_1_25) || var_1_61) ? (var_1_91 == ((float) (var_1_55 - var_1_53))) : (((var_1_45 <= var_1_39) || var_1_60) ? (var_1_34 ? (var_1_91 == ((float) ((3.25f + var_1_69) + var_1_51))) : 1) : (var_1_91 == ((float) (((((var_1_54 - var_1_18)) > (var_1_51)) ? ((var_1_54 - var_1_18)) : (var_1_51)))))))) && ((((((var_1_41) > (var_1_93)) ? (var_1_41) : (var_1_93))) > var_1_71) ? ((var_1_96 < 1u) ? (var_1_92 == ((unsigned char) ((((8) < (((var_1_67 + 1) + (var_1_64 - var_1_48)))) ? (8) : (((var_1_67 + 1) + (var_1_64 - var_1_48))))))) : 1) : ((var_1_39 <= var_1_85) ? (var_1_92 == ((unsigned char) var_1_27)) : (var_1_92 == ((unsigned char) var_1_46))))) && (var_1_105 ? (var_1_93 == ((signed long int) var_1_1)) : 1)) && (var_1_104 ? (var_1_94 == ((unsigned long int) var_1_107)) : 1)) && (var_1_38 ? (var_1_95 == ((unsigned long int) var_1_27)) : (var_1_95 == ((unsigned long int) var_1_30)))) && (var_1_105 ? (var_1_96 == ((unsigned long int) var_1_47)) : (var_1_96 == ((unsigned long int) var_1_4)))) && (var_1_34 ? (var_1_97 == ((unsigned short int) var_1_30)) : 1)) && (var_1_34 ? (var_1_98 == ((float) var_1_33)) : (var_1_98 == ((float) var_1_55)))) && (var_1_99 == ((double) var_1_56))) && (var_1_62 ? (var_1_100 == ((signed long int) -16)) : (var_1_100 == ((signed long int) var_1_67)))) && (var_1_105 ? (var_1_101 == ((double) var_1_54)) : (var_1_101 == ((double) var_1_17)))) && (var_1_34 ? (var_1_103 == ((float) var_1_69)) : (var_1_103 == ((float) var_1_10)))) && (var_1_104 == ((unsigned char) var_1_36))) && (var_1_105 == ((unsigned char) var_1_62))) && (var_1_34 ? (var_1_106 == ((float) var_1_76)) : (var_1_106 == ((float) var_1_17)))) && ((var_1_40 > (((((var_1_67 | var_1_59)) > (((((var_1_26) > (var_1_45)) ? (var_1_26) : (var_1_45))))) ? ((var_1_67 | var_1_59)) : (((((var_1_26) > (var_1_45)) ? (var_1_26) : (var_1_45))))))) ? ((var_1_71 <= var_1_59) ? (var_1_107 == ((unsigned long int) (var_1_85 + (((((var_1_48) < (var_1_65)) ? (var_1_48) : (var_1_65))) + var_1_59)))) : (var_1_107 == ((unsigned long int) var_1_35))) : (var_1_107 == ((unsigned long int) 0u)))
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

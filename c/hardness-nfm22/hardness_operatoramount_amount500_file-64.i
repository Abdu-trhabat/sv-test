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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 128.25;
float var_1_4 = 63.4;
float var_1_5 = 15.5;
float var_1_6 = 100.75;
signed long int var_1_8 = -16;
float var_1_11 = 31.5;
float var_1_12 = 0.0;
unsigned short int var_1_15 = 100;
unsigned long int var_1_16 = 64;
unsigned long int var_1_17 = 3721669810;
unsigned long int var_1_18 = 1329907550;
unsigned long int var_1_19 = 1129118186;
unsigned long int var_1_20 = 50;
unsigned long int var_1_22 = 1000000000;
unsigned long int var_1_23 = 1000000000;
unsigned long int var_1_25 = 1593992914;
unsigned long int var_1_26 = 1695338471;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 1;
signed char var_1_35 = 1;
unsigned char var_1_36 = 64;
unsigned char var_1_37 = 0;
unsigned long int var_1_38 = 2823094458;
unsigned long int var_1_39 = 256;
signed char var_1_40 = 8;
signed char var_1_41 = -4;
unsigned char var_1_42 = 2;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 5;
unsigned char var_1_45 = 100;
unsigned char var_1_46 = 2;
unsigned short int var_1_48 = 2;
unsigned short int var_1_49 = 57358;
signed long int var_1_50 = 256;
unsigned short int var_1_51 = 5;
unsigned long int var_1_52 = 64;
unsigned long int var_1_53 = 3882090466;
unsigned char var_1_54 = 4;
unsigned char var_1_55 = 200;
unsigned char var_1_56 = 128;
unsigned char var_1_57 = 4;
unsigned char var_1_58 = 32;
signed short int var_1_59 = -2;
unsigned char var_1_60 = 1;
signed short int var_1_61 = -10;
signed char var_1_62 = 64;
signed short int var_1_63 = 4;
float var_1_64 = 0.19999999999999996;
unsigned short int var_1_65 = 256;
unsigned short int var_1_66 = 29866;
unsigned char var_1_67 = 5;
float var_1_68 = 1.5;
float var_1_69 = 31.75;
float var_1_70 = 31.1;
float var_1_71 = 0.0;
float var_1_72 = 100000000000000.92;
unsigned long int var_1_73 = 16;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 1;
signed long int var_1_76 = 1;
signed long int var_1_77 = 1731389354;
unsigned short int var_1_78 = 200;
signed char var_1_80 = -50;
unsigned long int var_1_81 = 4;
signed char var_1_82 = -50;
signed char var_1_83 = -25;
double var_1_84 = 64.5;
signed short int var_1_85 = -2;
signed short int var_1_86 = -32;
double var_1_87 = 64.8;
unsigned char var_1_88 = 1;
signed long int var_1_89 = 1;
unsigned short int var_1_90 = 32;
float var_1_91 = 9999999.7;
unsigned short int var_1_92 = 2;
float var_1_94 = 2.3;
unsigned char last_1_var_1_27 = 1;
unsigned char last_1_var_1_34 = 1;
unsigned long int last_1_var_1_39 = 256;
unsigned short int last_1_var_1_48 = 2;
signed long int last_1_var_1_50 = 256;
unsigned short int last_1_var_1_51 = 5;
unsigned char last_1_var_1_56 = 128;
signed short int last_1_var_1_59 = -2;
unsigned char last_1_var_1_60 = 1;
signed short int last_1_var_1_63 = 4;
unsigned short int last_1_var_1_65 = 256;
unsigned char last_1_var_1_67 = 5;
float last_1_var_1_68 = 1.5;
unsigned long int last_1_var_1_73 = 16;
unsigned char last_1_var_1_74 = 0;
unsigned char last_1_var_1_75 = 1;
signed long int last_1_var_1_76 = 1;
unsigned short int last_1_var_1_78 = 200;
signed char last_1_var_1_80 = -50;
signed short int last_1_var_1_85 = -2;
signed short int last_1_var_1_86 = -32;
unsigned short int last_1_var_1_90 = 32;
unsigned short int last_1_var_1_92 = 2;
void initially(void) {
}
void step(void) {
 if ((8.5 != 3.5) || var_1_32) {
  if (last_1_var_1_85 >= last_1_var_1_78) {
   var_1_75 = ((last_1_var_1_74 && (! var_1_30)) || var_1_28);
  }
 } else {
  var_1_75 = (last_1_var_1_27 && var_1_28);
 }
 if (var_1_75) {
  var_1_62 = (var_1_58 - var_1_35);
 } else {
  var_1_62 = (var_1_35 - var_1_58);
 }
 if (last_1_var_1_75) {
  var_1_68 = (var_1_5 + var_1_6);
 } else {
  if (last_1_var_1_67 > var_1_22) {
   if (last_1_var_1_39 >= var_1_53) {
    var_1_68 = ((var_1_69 + ((((255.5f) > (var_1_70)) ? (255.5f) : (var_1_70)))) + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))));
   }
  } else {
   var_1_68 = (((var_1_71 - var_1_72) + var_1_5) - var_1_6);
  }
 }
 if (var_1_41 < (last_1_var_1_51 & last_1_var_1_48)) {
  if (var_1_33) {
   if ((var_1_19 * (var_1_36 & 64u)) >= (var_1_18 + last_1_var_1_51)) {
    var_1_42 = (var_1_43 - var_1_35);
   } else {
    var_1_42 = ((((var_1_44) > (((var_1_45 - var_1_35) + (10 + var_1_46)))) ? (var_1_44) : (((var_1_45 - var_1_35) + (10 + var_1_46)))));
   }
  } else {
   if (var_1_32 || (((((last_1_var_1_63) > (last_1_var_1_80)) ? (last_1_var_1_63) : (last_1_var_1_80))) == (var_1_46 / var_1_43))) {
    var_1_42 = ((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45)));
   } else {
    var_1_42 = ((((((((var_1_46) < (var_1_44)) ? (var_1_46) : (var_1_44)))) < (var_1_43)) ? (((((var_1_46) < (var_1_44)) ? (var_1_46) : (var_1_44)))) : (var_1_43)));
   }
  }
 }
 if (var_1_33) {
  var_1_50 = (last_1_var_1_50 + var_1_42);
 }
 unsigned long int stepLocal_3 = last_1_var_1_76 * (var_1_17 - last_1_var_1_90);
 if (last_1_var_1_60) {
  var_1_27 = var_1_28;
 } else {
  if (last_1_var_1_65 != stepLocal_3) {
   if (63.25 <= (var_1_12 * ((((last_1_var_1_68) < 0 ) ? -(last_1_var_1_68) : (last_1_var_1_68))))) {
    var_1_27 = ((var_1_30 && var_1_31) && ((! var_1_28) && var_1_32));
   } else {
    var_1_27 = ((! (var_1_30 && var_1_32)) || (var_1_31 && (var_1_28 && var_1_33)));
   }
  } else {
   var_1_27 = (var_1_30 && (! var_1_28));
  }
 }
 signed long int stepLocal_2 = last_1_var_1_67;
 unsigned char stepLocal_1 = last_1_var_1_60;
 if (((((last_1_var_1_34) < (0)) ? (last_1_var_1_34) : (0))) >= stepLocal_2) {
  if ((var_1_12 <= var_1_4) && stepLocal_1) {
   var_1_15 = 1;
  }
 } else {
  var_1_15 = last_1_var_1_92;
 }
 var_1_51 = (var_1_49 - var_1_43);
 var_1_54 = ((var_1_55 - var_1_46) - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
 if (var_1_32) {
  var_1_82 = var_1_55;
 }
 var_1_83 = var_1_35;
 if (var_1_75) {
  var_1_84 = var_1_5;
 } else {
  var_1_84 = var_1_69;
 }
 var_1_85 = -200;
 var_1_86 = last_1_var_1_86;
 var_1_87 = var_1_70;
 var_1_88 = var_1_30;
 var_1_90 = var_1_46;
 if (var_1_30) {
  var_1_91 = var_1_69;
 } else {
  var_1_91 = var_1_71;
 }
 unsigned long int stepLocal_4 = var_1_19 << var_1_35;
 if (stepLocal_4 <= ((((var_1_15) < ((var_1_22 >> var_1_62))) ? (var_1_15) : ((var_1_22 >> var_1_62))))) {
  var_1_34 = ((((32) < 0 ) ? -(32) : (32)));
 } else {
  var_1_34 = (var_1_35 + var_1_36);
 }
 if ((var_1_91 + var_1_6) < ((((var_1_12) > ((var_1_68 * var_1_5))) ? (var_1_12) : ((var_1_68 * var_1_5))))) {
  var_1_60 = (! var_1_28);
 }
 if (! (var_1_15 > -64)) {
  if (var_1_60) {
   var_1_67 = (((((var_1_55) > (var_1_43)) ? (var_1_55) : (var_1_43))) - var_1_58);
  } else {
   var_1_67 = (var_1_46 + ((((var_1_35) > (var_1_57)) ? (var_1_35) : (var_1_57))));
  }
 } else {
  var_1_67 = (var_1_55 - (var_1_45 - (5 + var_1_35)));
 }
 if (var_1_38 >= var_1_54) {
  var_1_78 = (60934 - var_1_42);
 } else {
  var_1_78 = (var_1_54 + (var_1_46 + ((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)))));
 }
 if (var_1_31 || var_1_27) {
  if (var_1_88) {
   if (((((10.8f) > (var_1_68)) ? (10.8f) : (var_1_68))) >= (- var_1_12)) {
    var_1_48 = (var_1_49 - var_1_43);
   } else {
    var_1_48 = var_1_85;
   }
  } else {
   var_1_48 = var_1_15;
  }
 }
 var_1_39 = ((((var_1_48) < (last_1_var_1_39)) ? (var_1_48) : (last_1_var_1_39)));
 if ((var_1_18 + var_1_57) >= (var_1_19 << var_1_26)) {
  var_1_63 = var_1_46;
 } else {
  var_1_63 = (var_1_36 + (var_1_78 - ((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43)))));
 }
 if (var_1_28 && (-500 < var_1_50)) {
  if (var_1_32) {
   var_1_94 = 99.25f;
  }
 }
 if (var_1_27) {
  var_1_89 = var_1_85;
 } else {
  var_1_89 = var_1_41;
 }
 unsigned long int stepLocal_7 = var_1_17;
 unsigned long int stepLocal_6 = var_1_26;
 unsigned char stepLocal_5 = ! (! var_1_32);
 if (stepLocal_7 >= (var_1_38 - (var_1_19 - var_1_85))) {
  if ((! var_1_28) && stepLocal_5) {
   if (var_1_35 >= stepLocal_6) {
    if ((var_1_5 / var_1_11) <= (- var_1_4)) {
     if (var_1_32) {
      var_1_37 = ((var_1_75 || var_1_31) && (! var_1_28));
     } else {
      var_1_37 = (! (var_1_60 && var_1_28));
     }
    } else {
     var_1_37 = (var_1_28 || var_1_33);
    }
   } else {
    var_1_37 = (var_1_33 || (! var_1_31));
   }
  } else {
   var_1_37 = var_1_28;
  }
 } else {
  var_1_37 = 1;
 }
 unsigned char stepLocal_18 = var_1_58;
 unsigned long int stepLocal_17 = var_1_26;
 unsigned long int stepLocal_16 = var_1_39;
 unsigned char stepLocal_15 = var_1_46;
 if (var_1_18 >= stepLocal_16) {
  if (var_1_22 >= stepLocal_18) {
   var_1_61 = ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)));
  } else {
   if (var_1_39 > stepLocal_17) {
    var_1_61 = (var_1_58 + var_1_89);
   } else {
    if (stepLocal_15 > var_1_54) {
     var_1_61 = var_1_57;
    } else {
     var_1_61 = var_1_55;
    }
   }
  }
 }
 if (var_1_61 > var_1_23) {
  var_1_64 = (var_1_6 - ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))));
 } else {
  var_1_64 = (var_1_6 - var_1_5);
 }
 if (var_1_41 < ((var_1_46 ^ var_1_57) % var_1_58)) {
  if ((var_1_90 * var_1_44) > var_1_89) {
   var_1_73 = var_1_43;
  } else {
   var_1_73 = (var_1_17 - last_1_var_1_73);
  }
 }
 if (var_1_60) {
  var_1_81 = var_1_51;
 }
 if (var_1_60) {
  var_1_92 = ((((var_1_58) > (((((var_1_42) > ((var_1_49 - var_1_55))) ? (var_1_42) : ((var_1_49 - var_1_55)))))) ? (var_1_58) : (((((var_1_42) > ((var_1_49 - var_1_55))) ? (var_1_42) : ((var_1_49 - var_1_55)))))));
 }
 if (var_1_11 != (((((var_1_6) > (1.4f)) ? (var_1_6) : (1.4f))) / var_1_12)) {
  if (var_1_6 >= var_1_94) {
   var_1_16 = ((((var_1_15) < (var_1_86)) ? (var_1_15) : (var_1_86)));
  } else {
   var_1_16 = ((((var_1_86) < ((var_1_17 - ((((var_1_89) > (var_1_92)) ? (var_1_89) : (var_1_92)))))) ? (var_1_86) : ((var_1_17 - ((((var_1_89) > (var_1_92)) ? (var_1_89) : (var_1_92)))))));
  }
 } else {
  var_1_16 = (var_1_86 + (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_89));
 }
 if (var_1_39 <= var_1_92) {
  var_1_1 = ((((var_1_4 + (var_1_5 - var_1_6)) < 0 ) ? -(var_1_4 + (var_1_5 - var_1_6)) : (var_1_4 + (var_1_5 - var_1_6))));
 } else {
  if (var_1_27) {
   var_1_1 = ((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5)));
  }
 }
 if (var_1_5 != var_1_6) {
  if (var_1_12 >= (var_1_5 - var_1_6)) {
   if (var_1_19 < var_1_15) {
    var_1_20 = ((((var_1_51) > (var_1_85)) ? (var_1_51) : (var_1_85)));
   } else {
    if (var_1_12 <= var_1_1) {
     var_1_20 = ((var_1_18 + (var_1_22 + var_1_23)) - var_1_42);
    }
   }
  } else {
   var_1_20 = (var_1_17 - (var_1_48 + var_1_15));
  }
 } else {
  var_1_20 = ((var_1_25 + var_1_26) - var_1_19);
 }
 if (var_1_35 < var_1_53) {
  if (var_1_20 <= ((~ var_1_54) + var_1_26)) {
   var_1_80 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
  } else {
   var_1_80 = (((((var_1_35 + var_1_46)) < (var_1_55)) ? ((var_1_35 + var_1_46)) : (var_1_55)));
  }
 }
 if (((255.2 * var_1_64) * ((((var_1_4) > (var_1_11)) ? (var_1_4) : (var_1_11)))) == var_1_12) {
  var_1_40 = (50 + var_1_35);
 } else {
  if (var_1_31) {
   var_1_40 = (var_1_35 + (16 + ((((2) > (var_1_41)) ? (2) : (var_1_41)))));
  } else {
   if (3.8 < (- var_1_64)) {
    var_1_40 = ((((var_1_35) > (var_1_41)) ? (var_1_35) : (var_1_41)));
   }
  }
 }
 var_1_52 = (((((((((var_1_17) < (4285343471u)) ? (var_1_17) : (4285343471u)))) < ((var_1_53 - var_1_36))) ? (((((var_1_17) < (4285343471u)) ? (var_1_17) : (4285343471u)))) : ((var_1_53 - var_1_36)))) - var_1_16);
 if (var_1_92 != (- 4u)) {
  var_1_59 = ((((((last_1_var_1_59) < 0 ) ? -(last_1_var_1_59) : (last_1_var_1_59))) + var_1_78) - ((((var_1_55) < (((((var_1_35) > (var_1_44)) ? (var_1_35) : (var_1_44))))) ? (var_1_55) : (((((var_1_35) > (var_1_44)) ? (var_1_35) : (var_1_44)))))));
 } else {
  if (var_1_22 == (var_1_38 - ((((var_1_45) > (var_1_49)) ? (var_1_45) : (var_1_49))))) {
   var_1_59 = ((((((((((((var_1_43) < (var_1_92)) ? (var_1_43) : (var_1_92)))) < (var_1_58)) ? (((((var_1_43) < (var_1_92)) ? (var_1_43) : (var_1_92)))) : (var_1_58)))) > (var_1_46)) ? (((((((((var_1_43) < (var_1_92)) ? (var_1_43) : (var_1_92)))) < (var_1_58)) ? (((((var_1_43) < (var_1_92)) ? (var_1_43) : (var_1_92)))) : (var_1_58)))) : (var_1_46)));
  }
 }
 if (var_1_16 < var_1_63) {
  var_1_76 = (25 - ((var_1_77 - var_1_43) - ((((5) > (var_1_16)) ? (5) : (var_1_16)))));
 } else {
  if (((((var_1_4) < ((var_1_72 - var_1_5))) ? (var_1_4) : ((var_1_72 - var_1_5)))) > 50.5f) {
   var_1_76 = ((((var_1_34) > (last_1_var_1_76)) ? (var_1_34) : (last_1_var_1_76)));
  } else {
   var_1_76 = (((((var_1_85) < (last_1_var_1_76)) ? (var_1_85) : (last_1_var_1_76))) - (var_1_23 + ((((var_1_44) < (var_1_55)) ? (var_1_44) : (var_1_55)))));
  }
 }
 signed long int stepLocal_19 = (128 + var_1_35) + var_1_76;
 if (var_1_86 < stepLocal_19) {
  if ((- var_1_11) <= var_1_6) {
   var_1_65 = ((((var_1_35) < (((((((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) < (((((var_1_57) > (var_1_92)) ? (var_1_57) : (var_1_92))))) ? (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) : (((((var_1_57) > (var_1_92)) ? (var_1_57) : (var_1_92)))))))) ? (var_1_35) : (((((((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) < (((((var_1_57) > (var_1_92)) ? (var_1_57) : (var_1_92))))) ? (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) : (((((var_1_57) > (var_1_92)) ? (var_1_57) : (var_1_92)))))))));
  } else {
   var_1_65 = (var_1_49 - 128);
  }
 } else {
  var_1_65 = (var_1_49 - ((var_1_66 - var_1_82) - var_1_36));
 }
 unsigned short int stepLocal_20 = var_1_65;
 if (var_1_30) {
  var_1_74 = ((var_1_83 >= var_1_18) || (! var_1_28));
 } else {
  if (var_1_5 >= (128.625f - var_1_6)) {
   var_1_74 = (((var_1_94 / var_1_11) > var_1_68) || var_1_31);
  } else {
   if (var_1_89 < stepLocal_20) {
    if (! var_1_31) {
     var_1_74 = ((var_1_28 || var_1_27) && var_1_33);
    } else {
     var_1_74 = (! var_1_28);
    }
   }
  }
 }
 unsigned long int stepLocal_14 = var_1_17 - var_1_46;
 unsigned short int stepLocal_13 = var_1_65;
 signed long int stepLocal_12 = 4 - var_1_82;
 unsigned long int stepLocal_11 = var_1_23 / (var_1_55 - var_1_58);
 signed long int stepLocal_10 = 4 / var_1_55;
 signed long int stepLocal_9 = (((var_1_35) > ((var_1_82 - var_1_65))) ? (var_1_35) : ((var_1_82 - var_1_65)));
 unsigned long int stepLocal_8 = var_1_25 / var_1_38;
 if (var_1_11 <= 9.2f) {
  var_1_56 = (((((((var_1_43) < (var_1_45)) ? (var_1_43) : (var_1_45))) < 0 ) ? -((((var_1_43) < (var_1_45)) ? (var_1_43) : (var_1_45))) : ((((var_1_43) < (var_1_45)) ? (var_1_43) : (var_1_45)))));
 } else {
  if (stepLocal_12 < ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)))) {
   if (stepLocal_13 >= last_1_var_1_56) {
    if (last_1_var_1_56 == stepLocal_10) {
     if ((((((2 + -1)) > (last_1_var_1_56)) ? ((2 + -1)) : (last_1_var_1_56))) > stepLocal_9) {
      if (var_1_33) {
       var_1_56 = var_1_35;
      } else {
       var_1_56 = (((((var_1_55) < (var_1_43)) ? (var_1_55) : (var_1_43))) - 64);
      }
     } else {
      if ((var_1_18 + var_1_25) > stepLocal_14) {
       var_1_56 = (var_1_36 + (((((var_1_46 + var_1_35)) > (var_1_45)) ? ((var_1_46 + var_1_35)) : (var_1_45))));
      } else {
       if (var_1_37) {
        var_1_56 = (var_1_57 + var_1_46);
       }
      }
     }
    }
   } else {
    if (var_1_36 < stepLocal_11) {
     var_1_56 = ((((var_1_55) > (var_1_46)) ? (var_1_55) : (var_1_46)));
    } else {
     if (stepLocal_8 == var_1_46) {
      var_1_56 = ((((((200 - var_1_35) - (var_1_45 - 32))) < (((((var_1_36) < (var_1_55)) ? (var_1_36) : (var_1_55))))) ? (((200 - var_1_35) - (var_1_45 - 32))) : (((((var_1_36) < (var_1_55)) ? (var_1_36) : (var_1_55))))));
     } else {
      var_1_56 = ((((((var_1_35 + 4)) > (var_1_36)) ? ((var_1_35 + 4)) : (var_1_36))) + 32);
     }
    }
   }
  } else {
   if (var_1_37) {
    var_1_56 = (var_1_36 + var_1_57);
   } else {
    var_1_56 = ((((var_1_35) < (4)) ? (var_1_35) : (4)));
   }
  }
 }
 unsigned short int stepLocal_0 = var_1_51;
 if (var_1_84 <= ((((49.4f) > (var_1_5)) ? (49.4f) : (var_1_5)))) {
  if (var_1_6 <= var_1_84) {
   if ((((((var_1_82) > (var_1_16)) ? (var_1_82) : (var_1_16))) * ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) <= stepLocal_0) {
    var_1_8 = 5;
   } else {
    var_1_8 = ((((var_1_82) < ((var_1_16 + var_1_56))) ? (var_1_82) : ((var_1_16 + var_1_56))));
   }
  } else {
   var_1_8 = ((4 + var_1_16) + var_1_56);
  }
 } else {
  if (var_1_5 <= (var_1_6 / var_1_11)) {
   if (((var_1_12 - var_1_6) - var_1_5) <= var_1_11) {
    var_1_8 = (var_1_56 + var_1_82);
   } else {
    var_1_8 = (((((var_1_82) > (var_1_16)) ? (var_1_82) : (var_1_16))) + var_1_56);
   }
  } else {
   if (var_1_74) {
    var_1_8 = (((((var_1_82) < (4)) ? (var_1_82) : (4))) + ((((((((var_1_56) > (var_1_16)) ? (var_1_56) : (var_1_16)))) < (var_1_54)) ? (((((var_1_56) > (var_1_16)) ? (var_1_56) : (var_1_16)))) : (var_1_54))));
   } else {
    var_1_8 = (((((var_1_82 - (var_1_16 + var_1_67))) < (var_1_56)) ? ((var_1_82 - (var_1_16 + var_1_67))) : (var_1_56)));
   }
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 4611686.018427387900e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 1073741823);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 536870912);
 assume_abort_if_not(var_1_22 <= 1073741824);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 536870912);
 assume_abort_if_not(var_1_23 <= 1073741823);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 1073741824);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967295);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -31);
 assume_abort_if_not(var_1_41 <= 31);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 127);
 assume_abort_if_not(var_1_43 <= 254);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 254);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 63);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 32767);
 assume_abort_if_not(var_1_49 <= 65534);
 var_1_53 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_53 >= 3221225470);
 assume_abort_if_not(var_1_53 <= 4294967294);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 190);
 assume_abort_if_not(var_1_55 <= 254);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 1);
 assume_abort_if_not(var_1_58 <= 126);
 assume_abort_if_not(var_1_58 != 127);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 24575);
 assume_abort_if_not(var_1_66 <= 32767);
 var_1_69 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_69 >= -230584.3009213691390e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691390e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= -230584.3009213691390e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 2305843.009213691390e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= 2305843.009213691390e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691390e+12F && var_1_72 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_77 >= 1610612734);
 assume_abort_if_not(var_1_77 <= 2147483646);
}
void updateLastVariables() {
 last_1_var_1_27 = var_1_27;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_92 = var_1_92;
}
int property() {
 return (((((((((((((((((((((((((((((((((((((((((((((var_1_39 <= var_1_92) ? (var_1_1 == ((float) ((((var_1_4 + (var_1_5 - var_1_6)) < 0 ) ? -(var_1_4 + (var_1_5 - var_1_6)) : (var_1_4 + (var_1_5 - var_1_6)))))) : (var_1_27 ? (var_1_1 == ((float) ((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))))) : 1)) && ((var_1_84 <= ((((49.4f) > (var_1_5)) ? (49.4f) : (var_1_5)))) ? ((var_1_6 <= var_1_84) ? (((((((var_1_82) > (var_1_16)) ? (var_1_82) : (var_1_16))) * ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) <= var_1_51) ? (var_1_8 == ((signed long int) 5)) : (var_1_8 == ((signed long int) ((((var_1_82) < ((var_1_16 + var_1_56))) ? (var_1_82) : ((var_1_16 + var_1_56))))))) : (var_1_8 == ((signed long int) ((4 + var_1_16) + var_1_56)))) : ((var_1_5 <= (var_1_6 / var_1_11)) ? ((((var_1_12 - var_1_6) - var_1_5) <= var_1_11) ? (var_1_8 == ((signed long int) (var_1_56 + var_1_82))) : (var_1_8 == ((signed long int) (((((var_1_82) > (var_1_16)) ? (var_1_82) : (var_1_16))) + var_1_56)))) : (var_1_74 ? (var_1_8 == ((signed long int) (((((var_1_82) < (4)) ? (var_1_82) : (4))) + ((((((((var_1_56) > (var_1_16)) ? (var_1_56) : (var_1_16)))) < (var_1_54)) ? (((((var_1_56) > (var_1_16)) ? (var_1_56) : (var_1_16)))) : (var_1_54)))))) : (var_1_8 == ((signed long int) (((((var_1_82 - (var_1_16 + var_1_67))) < (var_1_56)) ? ((var_1_82 - (var_1_16 + var_1_67))) : (var_1_56))))))))) && ((((((last_1_var_1_34) < (0)) ? (last_1_var_1_34) : (0))) >= last_1_var_1_67) ? (((var_1_12 <= var_1_4) && last_1_var_1_60) ? (var_1_15 == ((unsigned short int) 1)) : 1) : (var_1_15 == ((unsigned short int) last_1_var_1_92)))) && ((var_1_11 != (((((var_1_6) > (1.4f)) ? (var_1_6) : (1.4f))) / var_1_12)) ? ((var_1_6 >= var_1_94) ? (var_1_16 == ((unsigned long int) ((((var_1_15) < (var_1_86)) ? (var_1_15) : (var_1_86))))) : (var_1_16 == ((unsigned long int) ((((var_1_86) < ((var_1_17 - ((((var_1_89) > (var_1_92)) ? (var_1_89) : (var_1_92)))))) ? (var_1_86) : ((var_1_17 - ((((var_1_89) > (var_1_92)) ? (var_1_89) : (var_1_92)))))))))) : (var_1_16 == ((unsigned long int) (var_1_86 + (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_89)))))) && ((var_1_5 != var_1_6) ? ((var_1_12 >= (var_1_5 - var_1_6)) ? ((var_1_19 < var_1_15) ? (var_1_20 == ((unsigned long int) ((((var_1_51) > (var_1_85)) ? (var_1_51) : (var_1_85))))) : ((var_1_12 <= var_1_1) ? (var_1_20 == ((unsigned long int) ((var_1_18 + (var_1_22 + var_1_23)) - var_1_42))) : 1)) : (var_1_20 == ((unsigned long int) (var_1_17 - (var_1_48 + var_1_15))))) : (var_1_20 == ((unsigned long int) ((var_1_25 + var_1_26) - var_1_19))))) && (last_1_var_1_60 ? (var_1_27 == ((unsigned char) var_1_28)) : ((last_1_var_1_65 != (last_1_var_1_76 * (var_1_17 - last_1_var_1_90))) ? ((63.25 <= (var_1_12 * ((((last_1_var_1_68) < 0 ) ? -(last_1_var_1_68) : (last_1_var_1_68))))) ? (var_1_27 == ((unsigned char) ((var_1_30 && var_1_31) && ((! var_1_28) && var_1_32)))) : (var_1_27 == ((unsigned char) ((! (var_1_30 && var_1_32)) || (var_1_31 && (var_1_28 && var_1_33)))))) : (var_1_27 == ((unsigned char) (var_1_30 && (! var_1_28))))))) && (((var_1_19 << var_1_35) <= ((((var_1_15) < ((var_1_22 >> var_1_62))) ? (var_1_15) : ((var_1_22 >> var_1_62))))) ? (var_1_34 == ((unsigned char) ((((32) < 0 ) ? -(32) : (32))))) : (var_1_34 == ((unsigned char) (var_1_35 + var_1_36))))) && ((var_1_17 >= (var_1_38 - (var_1_19 - var_1_85))) ? (((! var_1_28) && (! (! var_1_32))) ? ((var_1_35 >= var_1_26) ? (((var_1_5 / var_1_11) <= (- var_1_4)) ? (var_1_32 ? (var_1_37 == ((unsigned char) ((var_1_75 || var_1_31) && (! var_1_28)))) : (var_1_37 == ((unsigned char) (! (var_1_60 && var_1_28))))) : (var_1_37 == ((unsigned char) (var_1_28 || var_1_33)))) : (var_1_37 == ((unsigned char) (var_1_33 || (! var_1_31))))) : (var_1_37 == ((unsigned char) var_1_28))) : (var_1_37 == ((unsigned char) 1)))) && (var_1_39 == ((unsigned long int) ((((var_1_48) < (last_1_var_1_39)) ? (var_1_48) : (last_1_var_1_39)))))) && ((((255.2 * var_1_64) * ((((var_1_4) > (var_1_11)) ? (var_1_4) : (var_1_11)))) == var_1_12) ? (var_1_40 == ((signed char) (50 + var_1_35))) : (var_1_31 ? (var_1_40 == ((signed char) (var_1_35 + (16 + ((((2) > (var_1_41)) ? (2) : (var_1_41))))))) : ((3.8 < (- var_1_64)) ? (var_1_40 == ((signed char) ((((var_1_35) > (var_1_41)) ? (var_1_35) : (var_1_41))))) : 1)))) && ((var_1_41 < (last_1_var_1_51 & last_1_var_1_48)) ? (var_1_33 ? (((var_1_19 * (var_1_36 & 64u)) >= (var_1_18 + last_1_var_1_51)) ? (var_1_42 == ((unsigned char) (var_1_43 - var_1_35))) : (var_1_42 == ((unsigned char) ((((var_1_44) > (((var_1_45 - var_1_35) + (10 + var_1_46)))) ? (var_1_44) : (((var_1_45 - var_1_35) + (10 + var_1_46)))))))) : ((var_1_32 || (((((last_1_var_1_63) > (last_1_var_1_80)) ? (last_1_var_1_63) : (last_1_var_1_80))) == (var_1_46 / var_1_43))) ? (var_1_42 == ((unsigned char) ((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))))) : (var_1_42 == ((unsigned char) ((((((((var_1_46) < (var_1_44)) ? (var_1_46) : (var_1_44)))) < (var_1_43)) ? (((((var_1_46) < (var_1_44)) ? (var_1_46) : (var_1_44)))) : (var_1_43))))))) : 1)) && ((var_1_31 || var_1_27) ? (var_1_88 ? ((((((10.8f) > (var_1_68)) ? (10.8f) : (var_1_68))) >= (- var_1_12)) ? (var_1_48 == ((unsigned short int) (var_1_49 - var_1_43))) : (var_1_48 == ((unsigned short int) var_1_85))) : (var_1_48 == ((unsigned short int) var_1_15))) : 1)) && (var_1_33 ? (var_1_50 == ((signed long int) (last_1_var_1_50 + var_1_42))) : 1)) && (var_1_51 == ((unsigned short int) (var_1_49 - var_1_43)))) && (var_1_52 == ((unsigned long int) (((((((((var_1_17) < (4285343471u)) ? (var_1_17) : (4285343471u)))) < ((var_1_53 - var_1_36))) ? (((((var_1_17) < (4285343471u)) ? (var_1_17) : (4285343471u)))) : ((var_1_53 - var_1_36)))) - var_1_16)))) && (var_1_54 == ((unsigned char) ((var_1_55 - var_1_46) - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) && ((var_1_11 <= 9.2f) ? (var_1_56 == ((unsigned char) (((((((var_1_43) < (var_1_45)) ? (var_1_43) : (var_1_45))) < 0 ) ? -((((var_1_43) < (var_1_45)) ? (var_1_43) : (var_1_45))) : ((((var_1_43) < (var_1_45)) ? (var_1_43) : (var_1_45))))))) : (((4 - var_1_82) < ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)))) ? ((var_1_65 >= last_1_var_1_56) ? ((last_1_var_1_56 == (4 / var_1_55)) ? (((((((2 + -1)) > (last_1_var_1_56)) ? ((2 + -1)) : (last_1_var_1_56))) > ((((var_1_35) > ((var_1_82 - var_1_65))) ? (var_1_35) : ((var_1_82 - var_1_65))))) ? (var_1_33 ? (var_1_56 == ((unsigned char) var_1_35)) : (var_1_56 == ((unsigned char) (((((var_1_55) < (var_1_43)) ? (var_1_55) : (var_1_43))) - 64)))) : (((var_1_18 + var_1_25) > (var_1_17 - var_1_46)) ? (var_1_56 == ((unsigned char) (var_1_36 + (((((var_1_46 + var_1_35)) > (var_1_45)) ? ((var_1_46 + var_1_35)) : (var_1_45)))))) : (var_1_37 ? (var_1_56 == ((unsigned char) (var_1_57 + var_1_46))) : 1))) : 1) : ((var_1_36 < (var_1_23 / (var_1_55 - var_1_58))) ? (var_1_56 == ((unsigned char) ((((var_1_55) > (var_1_46)) ? (var_1_55) : (var_1_46))))) : (((var_1_25 / var_1_38) == var_1_46) ? (var_1_56 == ((unsigned char) ((((((200 - var_1_35) - (var_1_45 - 32))) < (((((var_1_36) < (var_1_55)) ? (var_1_36) : (var_1_55))))) ? (((200 - var_1_35) - (var_1_45 - 32))) : (((((var_1_36) < (var_1_55)) ? (var_1_36) : (var_1_55)))))))) : (var_1_56 == ((unsigned char) ((((((var_1_35 + 4)) > (var_1_36)) ? ((var_1_35 + 4)) : (var_1_36))) + 32)))))) : (var_1_37 ? (var_1_56 == ((unsigned char) (var_1_36 + var_1_57))) : (var_1_56 == ((unsigned char) ((((var_1_35) < (4)) ? (var_1_35) : (4))))))))) && ((var_1_92 != (- 4u)) ? (var_1_59 == ((signed short int) ((((((last_1_var_1_59) < 0 ) ? -(last_1_var_1_59) : (last_1_var_1_59))) + var_1_78) - ((((var_1_55) < (((((var_1_35) > (var_1_44)) ? (var_1_35) : (var_1_44))))) ? (var_1_55) : (((((var_1_35) > (var_1_44)) ? (var_1_35) : (var_1_44))))))))) : ((var_1_22 == (var_1_38 - ((((var_1_45) > (var_1_49)) ? (var_1_45) : (var_1_49))))) ? (var_1_59 == ((signed short int) ((((((((((((var_1_43) < (var_1_92)) ? (var_1_43) : (var_1_92)))) < (var_1_58)) ? (((((var_1_43) < (var_1_92)) ? (var_1_43) : (var_1_92)))) : (var_1_58)))) > (var_1_46)) ? (((((((((var_1_43) < (var_1_92)) ? (var_1_43) : (var_1_92)))) < (var_1_58)) ? (((((var_1_43) < (var_1_92)) ? (var_1_43) : (var_1_92)))) : (var_1_58)))) : (var_1_46))))) : 1))) && (((var_1_91 + var_1_6) < ((((var_1_12) > ((var_1_68 * var_1_5))) ? (var_1_12) : ((var_1_68 * var_1_5))))) ? (var_1_60 == ((unsigned char) (! var_1_28))) : 1)) && ((var_1_18 >= var_1_39) ? ((var_1_22 >= var_1_58) ? (var_1_61 == ((signed short int) ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) : ((var_1_39 > var_1_26) ? (var_1_61 == ((signed short int) (var_1_58 + var_1_89))) : ((var_1_46 > var_1_54) ? (var_1_61 == ((signed short int) var_1_57)) : (var_1_61 == ((signed short int) var_1_55))))) : 1)) && (var_1_75 ? (var_1_62 == ((signed char) (var_1_58 - var_1_35))) : (var_1_62 == ((signed char) (var_1_35 - var_1_58))))) && (((var_1_18 + var_1_57) >= (var_1_19 << var_1_26)) ? (var_1_63 == ((signed short int) var_1_46)) : (var_1_63 == ((signed short int) (var_1_36 + (var_1_78 - ((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43))))))))) && ((var_1_61 > var_1_23) ? (var_1_64 == ((float) (var_1_6 - ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) : (var_1_64 == ((float) (var_1_6 - var_1_5))))) && ((var_1_86 < ((128 + var_1_35) + var_1_76)) ? (((- var_1_11) <= var_1_6) ? (var_1_65 == ((unsigned short int) ((((var_1_35) < (((((((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) < (((((var_1_57) > (var_1_92)) ? (var_1_57) : (var_1_92))))) ? (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) : (((((var_1_57) > (var_1_92)) ? (var_1_57) : (var_1_92)))))))) ? (var_1_35) : (((((((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) < (((((var_1_57) > (var_1_92)) ? (var_1_57) : (var_1_92))))) ? (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) : (((((var_1_57) > (var_1_92)) ? (var_1_57) : (var_1_92))))))))))) : (var_1_65 == ((unsigned short int) (var_1_49 - 128)))) : (var_1_65 == ((unsigned short int) (var_1_49 - ((var_1_66 - var_1_82) - var_1_36)))))) && ((! (var_1_15 > -64)) ? (var_1_60 ? (var_1_67 == ((unsigned char) (((((var_1_55) > (var_1_43)) ? (var_1_55) : (var_1_43))) - var_1_58))) : (var_1_67 == ((unsigned char) (var_1_46 + ((((var_1_35) > (var_1_57)) ? (var_1_35) : (var_1_57))))))) : (var_1_67 == ((unsigned char) (var_1_55 - (var_1_45 - (5 + var_1_35))))))) && (last_1_var_1_75 ? (var_1_68 == ((float) (var_1_5 + var_1_6))) : ((last_1_var_1_67 > var_1_22) ? ((last_1_var_1_39 >= var_1_53) ? (var_1_68 == ((float) ((var_1_69 + ((((255.5f) > (var_1_70)) ? (255.5f) : (var_1_70)))) + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))) : 1) : (var_1_68 == ((float) (((var_1_71 - var_1_72) + var_1_5) - var_1_6)))))) && ((var_1_41 < ((var_1_46 ^ var_1_57) % var_1_58)) ? (((var_1_90 * var_1_44) > var_1_89) ? (var_1_73 == ((unsigned long int) var_1_43)) : (var_1_73 == ((unsigned long int) (var_1_17 - last_1_var_1_73)))) : 1)) && (var_1_30 ? (var_1_74 == ((unsigned char) ((var_1_83 >= var_1_18) || (! var_1_28)))) : ((var_1_5 >= (128.625f - var_1_6)) ? (var_1_74 == ((unsigned char) (((var_1_94 / var_1_11) > var_1_68) || var_1_31))) : ((var_1_89 < var_1_65) ? ((! var_1_31) ? (var_1_74 == ((unsigned char) ((var_1_28 || var_1_27) && var_1_33))) : (var_1_74 == ((unsigned char) (! var_1_28)))) : 1)))) && (((8.5 != 3.5) || var_1_32) ? ((last_1_var_1_85 >= last_1_var_1_78) ? (var_1_75 == ((unsigned char) ((last_1_var_1_74 && (! var_1_30)) || var_1_28))) : 1) : (var_1_75 == ((unsigned char) (last_1_var_1_27 && var_1_28))))) && ((var_1_16 < var_1_63) ? (var_1_76 == ((signed long int) (25 - ((var_1_77 - var_1_43) - ((((5) > (var_1_16)) ? (5) : (var_1_16))))))) : ((((((var_1_4) < ((var_1_72 - var_1_5))) ? (var_1_4) : ((var_1_72 - var_1_5)))) > 50.5f) ? (var_1_76 == ((signed long int) ((((var_1_34) > (last_1_var_1_76)) ? (var_1_34) : (last_1_var_1_76))))) : (var_1_76 == ((signed long int) (((((var_1_85) < (last_1_var_1_76)) ? (var_1_85) : (last_1_var_1_76))) - (var_1_23 + ((((var_1_44) < (var_1_55)) ? (var_1_44) : (var_1_55)))))))))) && ((var_1_38 >= var_1_54) ? (var_1_78 == ((unsigned short int) (60934 - var_1_42))) : (var_1_78 == ((unsigned short int) (var_1_54 + (var_1_46 + ((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))))))) && ((var_1_35 < var_1_53) ? ((var_1_20 <= ((~ var_1_54) + var_1_26)) ? (var_1_80 == ((signed char) ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) : (var_1_80 == ((signed char) (((((var_1_35 + var_1_46)) < (var_1_55)) ? ((var_1_35 + var_1_46)) : (var_1_55)))))) : 1)) && (var_1_60 ? (var_1_81 == ((unsigned long int) var_1_51)) : 1)) && (var_1_32 ? (var_1_82 == ((signed char) var_1_55)) : 1)) && (var_1_83 == ((signed char) var_1_35))) && (var_1_75 ? (var_1_84 == ((double) var_1_5)) : (var_1_84 == ((double) var_1_69)))) && (var_1_85 == ((signed short int) -200))) && (var_1_86 == ((signed short int) last_1_var_1_86))) && (var_1_87 == ((double) var_1_70))) && (var_1_88 == ((unsigned char) var_1_30))) && (var_1_27 ? (var_1_89 == ((signed long int) var_1_85)) : (var_1_89 == ((signed long int) var_1_41)))) && (var_1_90 == ((unsigned short int) var_1_46))) && (var_1_30 ? (var_1_91 == ((float) var_1_69)) : (var_1_91 == ((float) var_1_71)))) && (var_1_60 ? (var_1_92 == ((unsigned short int) ((((var_1_58) > (((((var_1_42) > ((var_1_49 - var_1_55))) ? (var_1_42) : ((var_1_49 - var_1_55)))))) ? (var_1_58) : (((((var_1_42) > ((var_1_49 - var_1_55))) ? (var_1_42) : ((var_1_49 - var_1_55))))))))) : 1)) && ((var_1_28 && (-500 < var_1_50)) ? (var_1_32 ? (var_1_94 == ((float) 99.25f)) : 1) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch58Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 1;
unsigned char var_1_4 = 64;
signed long int var_1_6 = -1;
unsigned short int var_1_7 = 45218;
unsigned short int var_1_8 = 0;
double var_1_9 = 128.4;
unsigned short int var_1_10 = 40875;
double var_1_14 = 7.125;
double var_1_15 = 10.6;
double var_1_16 = 0.6;
double var_1_17 = -0.8;
double var_1_18 = 15.75;
double var_1_19 = 255.25;
double var_1_20 = 63.942;
double var_1_21 = 64.5;
double var_1_22 = 50.75;
double var_1_23 = 1.8;
double var_1_24 = 0.175;
unsigned char var_1_25 = 1;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned long int var_1_32 = 32;
unsigned long int var_1_34 = 1469948749;
double var_1_35 = 49.175;
double var_1_36 = 127.6;
unsigned short int var_1_37 = 64;
unsigned char var_1_38 = 1;
unsigned char var_1_40 = 0;
double var_1_41 = 4.9;
unsigned short int var_1_42 = 1;
unsigned short int var_1_43 = 51826;
double var_1_44 = 5.75;
double var_1_46 = 0.25;
unsigned char var_1_47 = 2;
unsigned long int var_1_48 = 2441281471;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 2;
double var_1_51 = 64.5;
double var_1_52 = 32.8;
double var_1_53 = 128.35;
double var_1_54 = 0.0;
unsigned long int var_1_55 = 4;
unsigned long int var_1_56 = 1;
unsigned long int var_1_57 = 64;
unsigned long int var_1_58 = 25;
unsigned long int var_1_59 = 4286223275;
double var_1_60 = 4.7;
double var_1_61 = 16.875;
double var_1_62 = 9.75;
unsigned char var_1_63 = 1;
unsigned short int var_1_64 = 5;
unsigned short int var_1_65 = 32245;
unsigned short int var_1_66 = 200;
float var_1_67 = 16.75;
float var_1_68 = 0.0;
signed long int var_1_69 = -32;
signed short int var_1_70 = 8;
signed short int var_1_71 = 10000;
signed short int var_1_72 = 10000;
signed short int var_1_73 = -10;
signed short int var_1_74 = 100;
signed short int var_1_75 = 19361;
unsigned char var_1_76 = 8;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 0;
unsigned long int var_1_80 = 8;
double var_1_81 = 15.6;
unsigned char var_1_82 = 16;
unsigned char var_1_83 = 64;
float var_1_84 = 10.2;
float var_1_85 = 2.3;
signed long int var_1_87 = -5;
double var_1_88 = 99999999999.5;
float var_1_89 = 100.2;
unsigned long int var_1_90 = 100;
unsigned char var_1_91 = 1;
signed char var_1_92 = 2;
signed long int var_1_93 = 4;
float var_1_94 = 99.25;
double var_1_95 = 200.6;
unsigned long int var_1_96 = 16;
unsigned char var_1_97 = 0;
signed long int var_1_98 = -100000;
unsigned char var_1_99 = 0;
float var_1_100 = 32.6;
signed long int var_1_101 = -8;
double var_1_102 = 4.6;
unsigned short int last_1_var_1_1 = 1;
double last_1_var_1_9 = 128.4;
unsigned char last_1_var_1_25 = 1;
unsigned long int last_1_var_1_32 = 32;
double last_1_var_1_53 = 128.35;
unsigned long int last_1_var_1_57 = 64;
unsigned long int last_1_var_1_58 = 25;
double last_1_var_1_61 = 16.875;
signed long int last_1_var_1_69 = -32;
signed long int last_1_var_1_93 = 4;
double last_1_var_1_95 = 200.6;
unsigned long int last_1_var_1_96 = 16;
signed long int last_1_var_1_98 = -100000;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_2 = last_1_var_1_57;
 if (stepLocal_2 <= ((last_1_var_1_69 * last_1_var_1_32) + (last_1_var_1_98 * var_1_6))) {
  var_1_25 = (! var_1_27);
 } else {
  if ((last_1_var_1_9 * (var_1_24 - var_1_23)) >= ((((var_1_20) > (var_1_22)) ? (var_1_20) : (var_1_22)))) {
   if (var_1_27) {
    var_1_25 = ((var_1_28 || var_1_29) || var_1_30);
   } else {
    var_1_25 = ((! var_1_29) || var_1_31);
   }
  } else {
   var_1_25 = var_1_31;
  }
 }
 unsigned long int stepLocal_18 = (var_1_55 / 32) / 32;
 signed long int stepLocal_17 = - last_1_var_1_93;
 if (last_1_var_1_53 < (var_1_54 / var_1_36)) {
  if (((((last_1_var_1_53 / var_1_54) < 0 ) ? -(last_1_var_1_53 / var_1_54) : (last_1_var_1_53 / var_1_54))) < 32.5) {
   if (stepLocal_17 < ((last_1_var_1_58 ^ var_1_8) * var_1_56)) {
    var_1_58 = (var_1_59 - var_1_55);
   } else {
    var_1_58 = ((((var_1_7) > (((((var_1_34) < ((var_1_8 + var_1_49))) ? (var_1_34) : ((var_1_8 + var_1_49)))))) ? (var_1_7) : (((((var_1_34) < ((var_1_8 + var_1_49))) ? (var_1_34) : ((var_1_8 + var_1_49)))))));
   }
  }
 } else {
  if (stepLocal_18 >= (- (var_1_48 - var_1_43))) {
   var_1_58 = ((((((((var_1_7) > (10u)) ? (var_1_7) : (10u)))) < (var_1_50)) ? (((((var_1_7) > (10u)) ? (var_1_7) : (10u)))) : (var_1_50)));
  }
 }
 if (last_1_var_1_53 != (((((var_1_16 + var_1_23)) > (((((last_1_var_1_95) < (var_1_18)) ? (last_1_var_1_95) : (var_1_18))))) ? ((var_1_16 + var_1_23)) : (((((last_1_var_1_95) < (var_1_18)) ? (last_1_var_1_95) : (var_1_18))))))) {
  var_1_61 = (256.5 + var_1_17);
 } else {
  if (last_1_var_1_61 != last_1_var_1_9) {
   var_1_61 = ((((var_1_20) < ((var_1_22 + var_1_62))) ? (var_1_20) : ((var_1_22 + var_1_62))));
  }
 }
 if (last_1_var_1_25) {
  var_1_38 = (! ((var_1_27 && var_1_31) && var_1_40));
 }
 if (var_1_27) {
  var_1_93 = last_1_var_1_1;
 }
 var_1_84 = (var_1_17 + (var_1_22 - var_1_24));
 var_1_89 = var_1_68;
 var_1_90 = var_1_65;
 if (var_1_30) {
  var_1_91 = var_1_50;
 } else {
  var_1_91 = var_1_4;
 }
 if (var_1_25) {
  var_1_92 = var_1_56;
 } else {
  var_1_92 = 64;
 }
 var_1_94 = var_1_21;
 var_1_95 = var_1_18;
 var_1_96 = last_1_var_1_96;
 if (var_1_29) {
  var_1_97 = var_1_79;
 } else {
  var_1_97 = 0;
 }
 var_1_98 = var_1_49;
 var_1_99 = var_1_29;
 if (var_1_28) {
  var_1_100 = 32.38f;
 } else {
  var_1_100 = var_1_17;
 }
 unsigned char stepLocal_12 = var_1_38;
 if (var_1_29) {
  if (stepLocal_12 && var_1_28) {
   if (var_1_22 >= (var_1_95 * var_1_61)) {
    var_1_51 = (((((var_1_23 + var_1_16)) > ((((((var_1_21) < (var_1_24)) ? (var_1_21) : (var_1_24))) - ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)))))) ? ((var_1_23 + var_1_16)) : ((((((var_1_21) < (var_1_24)) ? (var_1_21) : (var_1_24))) - ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)))))));
   } else {
    if (var_1_21 <= ((((var_1_23 - var_1_24) < 0 ) ? -(var_1_23 - var_1_24) : (var_1_23 - var_1_24)))) {
     var_1_51 = (((((var_1_20 - ((((var_1_21) < (var_1_23)) ? (var_1_21) : (var_1_23))))) < ((((((var_1_22 - var_1_24)) > (var_1_52)) ? ((var_1_22 - var_1_24)) : (var_1_52))))) ? ((var_1_20 - ((((var_1_21) < (var_1_23)) ? (var_1_21) : (var_1_23))))) : ((((((var_1_22 - var_1_24)) > (var_1_52)) ? ((var_1_22 - var_1_24)) : (var_1_52))))));
    }
   }
  }
 } else {
  var_1_51 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
 }
 unsigned char stepLocal_6 = var_1_27;
 unsigned char stepLocal_5 = var_1_28;
 if ((! (var_1_20 < 2.5)) || stepLocal_5) {
  if (stepLocal_6 && ((var_1_90 + var_1_4) <= var_1_6)) {
   var_1_42 = var_1_7;
  }
 } else {
  var_1_42 = ((((var_1_91) < (((var_1_43 - var_1_4) - var_1_8))) ? (var_1_91) : (((var_1_43 - var_1_4) - var_1_8))));
 }
 if (! var_1_99) {
  var_1_46 = (((((var_1_16) < (var_1_22)) ? (var_1_16) : (var_1_22))) + ((((var_1_19) < ((var_1_23 - var_1_20))) ? (var_1_19) : ((var_1_23 - var_1_20)))));
 } else {
  var_1_46 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
 }
 if (var_1_97) {
  var_1_63 = (! (! 1));
 }
 if (var_1_100 > var_1_95) {
  var_1_76 = var_1_56;
 } else {
  var_1_76 = var_1_55;
 }
 if (var_1_63) {
  var_1_87 = ((((var_1_65 + 8) < 0 ) ? -(var_1_65 + 8) : (var_1_65 + 8)));
 } else {
  if (var_1_27) {
   var_1_87 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
  }
 }
 signed long int stepLocal_27 = var_1_87 * var_1_43;
 if (((var_1_8 + var_1_72) - var_1_65) <= stepLocal_27) {
  var_1_102 = ((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))) - var_1_68) < 0 ) ? -(((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))) - var_1_68) : (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))) - var_1_68)));
 } else {
  var_1_102 = var_1_15;
 }
 signed long int stepLocal_26 = var_1_87;
 if (stepLocal_26 > (var_1_56 - var_1_50)) {
  var_1_80 = (var_1_59 - ((((var_1_43) < ((var_1_34 - var_1_8))) ? (var_1_43) : ((var_1_34 - var_1_8)))));
 } else {
  var_1_80 = (var_1_59 - var_1_74);
 }
 if (var_1_38) {
  if (var_1_30) {
   var_1_37 = var_1_8;
  } else {
   var_1_37 = var_1_80;
  }
 }
 unsigned long int stepLocal_9 = var_1_80;
 unsigned long int stepLocal_8 = var_1_34;
 signed long int stepLocal_7 = var_1_87;
 if (stepLocal_8 >= var_1_80) {
  if (stepLocal_7 < var_1_43) {
   var_1_44 = ((((var_1_21) > (var_1_20)) ? (var_1_21) : (var_1_20)));
  } else {
   var_1_44 = 4.375;
  }
 } else {
  if (var_1_34 > stepLocal_9) {
   var_1_44 = var_1_24;
  } else {
   var_1_44 = 999999.25;
  }
 }
 if (var_1_18 < var_1_22) {
  var_1_70 = (((var_1_37 + var_1_4) + (var_1_71 - var_1_50)) - (17461 - (var_1_72 - var_1_49)));
 }
 if (var_1_46 <= var_1_44) {
  var_1_78 = (((var_1_99 && var_1_29) || var_1_30) || var_1_79);
 } else {
  var_1_78 = (var_1_40 || (var_1_29 || var_1_27));
 }
 unsigned long int stepLocal_16 = var_1_55;
 signed long int stepLocal_15 = -2;
 if ((var_1_4 * var_1_56) <= stepLocal_16) {
  if (stepLocal_15 >= var_1_98) {
   var_1_57 = ((((var_1_98) > (var_1_55)) ? (var_1_98) : (var_1_55)));
  } else {
   if ((var_1_54 / var_1_36) <= (var_1_24 + (var_1_102 * var_1_52))) {
    var_1_57 = (var_1_43 + var_1_8);
   } else {
    var_1_57 = (var_1_37 + (var_1_55 + var_1_56));
   }
  }
 } else {
  var_1_57 = ((((var_1_10) > (0u)) ? (var_1_10) : (0u)));
 }
 unsigned long int stepLocal_1 = (((-256) > ((var_1_57 / var_1_6))) ? (-256) : ((var_1_57 / var_1_6)));
 unsigned long int stepLocal_0 = var_1_57;
 if ((var_1_76 / (8 + var_1_4)) > stepLocal_1) {
  if (var_1_4 != stepLocal_0) {
   var_1_1 = ((((var_1_4) < ((var_1_7 - ((((var_1_76) < (var_1_8)) ? (var_1_76) : (var_1_8)))))) ? (var_1_4) : ((var_1_7 - ((((var_1_76) < (var_1_8)) ? (var_1_76) : (var_1_8)))))));
  } else {
   var_1_1 = ((((var_1_7) < ((var_1_4 + var_1_76))) ? (var_1_7) : ((var_1_4 + var_1_76))));
  }
 } else {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 unsigned char stepLocal_19 = ((((var_1_21) < (var_1_18)) ? (var_1_21) : (var_1_18))) >= var_1_22;
 if (var_1_36 != ((((var_1_17) > (var_1_14)) ? (var_1_17) : (var_1_14)))) {
  if (var_1_27) {
   if (var_1_78) {
    if (var_1_15 < (((((var_1_61 / var_1_54)) < (var_1_36)) ? ((var_1_61 / var_1_54)) : (var_1_36)))) {
     var_1_60 = (((((var_1_20) < ((var_1_22 - 10.15))) ? (var_1_20) : ((var_1_22 - 10.15)))) + var_1_18);
    }
   } else {
    var_1_60 = (var_1_23 + var_1_18);
   }
  } else {
   if (stepLocal_19 || var_1_31) {
    var_1_60 = (((((255.375 + var_1_23)) < (var_1_15)) ? ((255.375 + var_1_23)) : (var_1_15)));
   } else {
    var_1_60 = 8.25;
   }
  }
 } else {
  var_1_60 = var_1_52;
 }
 unsigned char stepLocal_23 = var_1_38;
 signed long int stepLocal_22 = var_1_7 + var_1_98;
 if (4 < stepLocal_22) {
  var_1_67 = var_1_62;
 } else {
  if ((var_1_78 && var_1_99) || stepLocal_23) {
   if (var_1_29) {
    var_1_67 = ((((255.25f) < (var_1_52)) ? (255.25f) : (var_1_52)));
   }
  } else {
   var_1_67 = (var_1_22 - (((((var_1_54) > (var_1_68)) ? (var_1_54) : (var_1_68))) - (var_1_23 + var_1_24)));
  }
 }
 if (var_1_57 <= 256u) {
  if (((((var_1_95) > ((var_1_24 - var_1_20))) ? (var_1_95) : ((var_1_24 - var_1_20)))) >= var_1_54) {
   var_1_88 = ((((var_1_16) > (var_1_23)) ? (var_1_16) : (var_1_23)));
  }
 } else {
  var_1_88 = var_1_62;
 }
 unsigned long int stepLocal_21 = var_1_80;
 signed long int stepLocal_20 = var_1_87;
 if (var_1_28) {
  if (var_1_58 <= stepLocal_21) {
   if (var_1_29) {
    var_1_64 = (var_1_56 + (((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) - var_1_50));
   } else {
    var_1_64 = (43260 - (var_1_65 - var_1_66));
   }
  } else {
   var_1_64 = (((((58460 - var_1_8)) > ((var_1_7 - (var_1_50 + var_1_76)))) ? ((58460 - var_1_8)) : ((var_1_7 - (var_1_50 + var_1_76)))));
  }
 } else {
  if ((var_1_54 - var_1_20) > var_1_46) {
   if (stepLocal_20 == var_1_57) {
    var_1_64 = (((((var_1_7 - var_1_76)) < (var_1_50)) ? ((var_1_7 - var_1_76)) : (var_1_50)));
   } else {
    var_1_64 = (var_1_8 + var_1_87);
   }
  } else {
   var_1_64 = ((((((((var_1_7) < (var_1_43)) ? (var_1_7) : (var_1_43))) < 0 ) ? -((((var_1_7) < (var_1_43)) ? (var_1_7) : (var_1_43))) : ((((var_1_7) < (var_1_43)) ? (var_1_7) : (var_1_43))))) - var_1_87);
  }
 }
 signed long int stepLocal_14 = 128 % var_1_43;
 signed long int stepLocal_13 = var_1_50 >> (var_1_55 - var_1_56);
 if (stepLocal_14 <= ((var_1_49 + var_1_50) / var_1_6)) {
  var_1_53 = ((var_1_54 - var_1_22) - ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))));
 } else {
  if (stepLocal_13 != (var_1_64 ^ (var_1_93 + var_1_49))) {
   var_1_53 = (var_1_21 - var_1_54);
  } else {
   var_1_53 = (((((var_1_21 - var_1_23)) < (25.3)) ? ((var_1_21 - var_1_23)) : (25.3)));
  }
 }
 if (var_1_93 >= var_1_1) {
  if (var_1_27) {
   var_1_32 = ((var_1_96 + var_1_7) + (var_1_34 - var_1_8));
  }
 }
 if (var_1_38) {
  var_1_101 = var_1_64;
 } else {
  var_1_101 = var_1_7;
 }
 unsigned short int stepLocal_4 = var_1_1;
 unsigned char stepLocal_3 = var_1_38;
 if (var_1_21 >= (var_1_53 / var_1_36)) {
  var_1_35 = ((var_1_24 - var_1_20) + var_1_19);
 } else {
  if ((var_1_90 < var_1_10) && stepLocal_3) {
   var_1_35 = (var_1_20 - 999.3);
  } else {
   if (stepLocal_4 < var_1_6) {
    if (var_1_27) {
     var_1_35 = ((((var_1_17) > (var_1_15)) ? (var_1_17) : (var_1_15)));
    } else {
     if (var_1_102 > var_1_21) {
      if (var_1_14 == var_1_53) {
       var_1_35 = (var_1_17 + (((((var_1_19 + var_1_23)) > (var_1_16)) ? ((var_1_19 + var_1_23)) : (var_1_16))));
      }
     } else {
      var_1_35 = (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) + var_1_19);
     }
    }
   } else {
    var_1_35 = ((((var_1_23) < ((var_1_19 + var_1_22))) ? (var_1_23) : ((var_1_19 + var_1_22))));
   }
  }
 }
 unsigned long int stepLocal_11 = var_1_57;
 signed long int stepLocal_10 = var_1_101;
 if (var_1_8 == stepLocal_10) {
  if ((var_1_80 + (var_1_48 - var_1_10)) < stepLocal_11) {
   if (var_1_46 < 1.5) {
    var_1_47 = (var_1_49 - var_1_4);
   }
  } else {
   var_1_47 = var_1_4;
  }
 } else {
  var_1_47 = ((((((((var_1_49) > (var_1_4)) ? (var_1_49) : (var_1_4)))) > (var_1_50)) ? (((((var_1_49) > (var_1_4)) ? (var_1_49) : (var_1_4)))) : (var_1_50)));
 }
 unsigned char stepLocal_25 = var_1_25;
 signed long int stepLocal_24 = var_1_72 / var_1_4;
 if (var_1_54 >= var_1_20) {
  if (stepLocal_25 && (var_1_101 > var_1_80)) {
   if (stepLocal_24 == var_1_56) {
    var_1_73 = var_1_43;
   } else {
    var_1_73 = ((((((var_1_74) < (var_1_49)) ? (var_1_74) : (var_1_49))) + ((((var_1_55) > (var_1_4)) ? (var_1_55) : (var_1_4)))) - ((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66))));
   }
  }
 } else {
  var_1_73 = ((var_1_75 - (var_1_58 + var_1_56)) - ((((((((var_1_74) > (var_1_71)) ? (var_1_74) : (var_1_71)))) > (var_1_4)) ? (((((var_1_74) > (var_1_71)) ? (var_1_74) : (var_1_71)))) : (var_1_4))));
 }
 if (((((var_1_54) < ((var_1_51 + var_1_16))) ? (var_1_54) : ((var_1_51 + var_1_16)))) < var_1_88) {
  var_1_81 = var_1_18;
 } else {
  var_1_81 = ((var_1_23 - var_1_24) + (var_1_22 - var_1_20));
 }
 if (var_1_14 > (- (var_1_53 / var_1_36))) {
  var_1_82 = ((64 + var_1_83) - ((16 + var_1_56) + var_1_55));
 } else {
  var_1_82 = (var_1_49 - var_1_55);
 }
 if (((((var_1_43) > (var_1_48)) ? (var_1_43) : (var_1_48))) <= ((var_1_96 + var_1_98) + var_1_32)) {
  if (var_1_25) {
   var_1_69 = (var_1_43 - ((((var_1_93) < (((((var_1_8) < (var_1_32)) ? (var_1_8) : (var_1_32))))) ? (var_1_93) : (((((var_1_8) < (var_1_32)) ? (var_1_8) : (var_1_32)))))));
  }
 } else {
  var_1_69 = ((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8)));
 }
 if (var_1_30) {
  if (var_1_7 != (var_1_58 ^ var_1_101)) {
   var_1_41 = ((var_1_23 + var_1_22) - var_1_20);
  } else {
   if ((var_1_6 + var_1_98) >= ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) {
    var_1_41 = (((((((var_1_20) > (var_1_18)) ? (var_1_20) : (var_1_18))) < 0 ) ? -((((var_1_20) > (var_1_18)) ? (var_1_20) : (var_1_18))) : ((((var_1_20) > (var_1_18)) ? (var_1_20) : (var_1_18)))));
   } else {
    var_1_41 = (var_1_23 + ((((var_1_22) < (64.25)) ? (var_1_22) : (64.25))));
   }
  }
 }
 if ((((((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))) < 0 ) ? -((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))) : ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))))) > var_1_41) {
  var_1_85 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)));
 } else {
  var_1_85 = var_1_68;
 }
 if (var_1_7 < (var_1_10 - var_1_58)) {
  if (var_1_8 > var_1_58) {
   if (((((var_1_96) < (var_1_10)) ? (var_1_96) : (var_1_10))) < (((((10000) > (var_1_64)) ? (10000) : (var_1_64))) - var_1_58)) {
    if (((((var_1_51) > (var_1_41)) ? (var_1_51) : (var_1_41))) != var_1_61) {
     if (var_1_58 >= (var_1_7 * var_1_4)) {
      var_1_9 = ((((((((var_1_14) > (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (var_1_14) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) < (((var_1_16 + var_1_17) + (var_1_18 + var_1_19)))) ? (((((var_1_14) > (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (var_1_14) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) : (((var_1_16 + var_1_17) + (var_1_18 + var_1_19)))));
     }
    } else {
     var_1_9 = ((7.204363062650301E18 - var_1_20) - ((((var_1_21) < ((7.812042275699702E18 - var_1_22))) ? (var_1_21) : ((7.812042275699702E18 - var_1_22)))));
    }
   } else {
    var_1_9 = (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + ((var_1_23 + var_1_24) - var_1_20));
   }
  } else {
   var_1_9 = ((((var_1_16) > (var_1_24)) ? (var_1_16) : (var_1_24)));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 32767);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65535);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -230584.3009213691400e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 1073741823);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 assume_abort_if_not(var_1_36 != 0.0F);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 49150);
 assume_abort_if_not(var_1_43 <= 65534);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 2147483647);
 assume_abort_if_not(var_1_48 <= 4294967295);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 127);
 assume_abort_if_not(var_1_49 <= 254);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 254);
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= -922337.2036854766000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 4611686.018427383000e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_55 >= 4);
 assume_abort_if_not(var_1_55 <= 7);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 3);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 2147483647);
 assume_abort_if_not(var_1_59 <= 4294967294);
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= -461168.6018427383000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 16383);
 assume_abort_if_not(var_1_65 <= 32767);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 16383);
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= 4611686.018427383000e+12F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854766000e+12F && var_1_68 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_71 >= 8191);
 assume_abort_if_not(var_1_71 <= 16383);
 var_1_72 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_72 >= 8191);
 assume_abort_if_not(var_1_72 <= 16383);
 var_1_74 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 16383);
 var_1_75 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_75 >= 16382);
 assume_abort_if_not(var_1_75 <= 32766);
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 0);
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 64);
 assume_abort_if_not(var_1_83 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_98 = var_1_98;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_76 / (8 + var_1_4)) > ((((-256) > ((var_1_57 / var_1_6))) ? (-256) : ((var_1_57 / var_1_6))))) ? ((var_1_4 != var_1_57) ? (var_1_1 == ((unsigned short int) ((((var_1_4) < ((var_1_7 - ((((var_1_76) < (var_1_8)) ? (var_1_76) : (var_1_8)))))) ? (var_1_4) : ((var_1_7 - ((((var_1_76) < (var_1_8)) ? (var_1_76) : (var_1_8))))))))) : (var_1_1 == ((unsigned short int) ((((var_1_7) < ((var_1_4 + var_1_76))) ? (var_1_7) : ((var_1_4 + var_1_76))))))) : (var_1_1 == ((unsigned short int) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) && ((var_1_7 < (var_1_10 - var_1_58)) ? ((var_1_8 > var_1_58) ? ((((((var_1_96) < (var_1_10)) ? (var_1_96) : (var_1_10))) < (((((10000) > (var_1_64)) ? (10000) : (var_1_64))) - var_1_58)) ? ((((((var_1_51) > (var_1_41)) ? (var_1_51) : (var_1_41))) != var_1_61) ? ((var_1_58 >= (var_1_7 * var_1_4)) ? (var_1_9 == ((double) ((((((((var_1_14) > (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (var_1_14) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) < (((var_1_16 + var_1_17) + (var_1_18 + var_1_19)))) ? (((((var_1_14) > (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (var_1_14) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) : (((var_1_16 + var_1_17) + (var_1_18 + var_1_19))))))) : 1) : (var_1_9 == ((double) ((7.204363062650301E18 - var_1_20) - ((((var_1_21) < ((7.812042275699702E18 - var_1_22))) ? (var_1_21) : ((7.812042275699702E18 - var_1_22)))))))) : (var_1_9 == ((double) (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + ((var_1_23 + var_1_24) - var_1_20))))) : (var_1_9 == ((double) ((((var_1_16) > (var_1_24)) ? (var_1_16) : (var_1_24)))))) : 1)) && ((last_1_var_1_57 <= ((last_1_var_1_69 * last_1_var_1_32) + (last_1_var_1_98 * var_1_6))) ? (var_1_25 == ((unsigned char) (! var_1_27))) : (((last_1_var_1_9 * (var_1_24 - var_1_23)) >= ((((var_1_20) > (var_1_22)) ? (var_1_20) : (var_1_22)))) ? (var_1_27 ? (var_1_25 == ((unsigned char) ((var_1_28 || var_1_29) || var_1_30))) : (var_1_25 == ((unsigned char) ((! var_1_29) || var_1_31)))) : (var_1_25 == ((unsigned char) var_1_31))))) && ((var_1_93 >= var_1_1) ? (var_1_27 ? (var_1_32 == ((unsigned long int) ((var_1_96 + var_1_7) + (var_1_34 - var_1_8)))) : 1) : 1)) && ((var_1_21 >= (var_1_53 / var_1_36)) ? (var_1_35 == ((double) ((var_1_24 - var_1_20) + var_1_19))) : (((var_1_90 < var_1_10) && var_1_38) ? (var_1_35 == ((double) (var_1_20 - 999.3))) : ((var_1_1 < var_1_6) ? (var_1_27 ? (var_1_35 == ((double) ((((var_1_17) > (var_1_15)) ? (var_1_17) : (var_1_15))))) : ((var_1_102 > var_1_21) ? ((var_1_14 == var_1_53) ? (var_1_35 == ((double) (var_1_17 + (((((var_1_19 + var_1_23)) > (var_1_16)) ? ((var_1_19 + var_1_23)) : (var_1_16)))))) : 1) : (var_1_35 == ((double) (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) + var_1_19))))) : (var_1_35 == ((double) ((((var_1_23) < ((var_1_19 + var_1_22))) ? (var_1_23) : ((var_1_19 + var_1_22)))))))))) && (var_1_38 ? (var_1_30 ? (var_1_37 == ((unsigned short int) var_1_8)) : (var_1_37 == ((unsigned short int) var_1_80))) : 1)) && (last_1_var_1_25 ? (var_1_38 == ((unsigned char) (! ((var_1_27 && var_1_31) && var_1_40)))) : 1)) && (var_1_30 ? ((var_1_7 != (var_1_58 ^ var_1_101)) ? (var_1_41 == ((double) ((var_1_23 + var_1_22) - var_1_20))) : (((var_1_6 + var_1_98) >= ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) ? (var_1_41 == ((double) (((((((var_1_20) > (var_1_18)) ? (var_1_20) : (var_1_18))) < 0 ) ? -((((var_1_20) > (var_1_18)) ? (var_1_20) : (var_1_18))) : ((((var_1_20) > (var_1_18)) ? (var_1_20) : (var_1_18))))))) : (var_1_41 == ((double) (var_1_23 + ((((var_1_22) < (64.25)) ? (var_1_22) : (64.25)))))))) : 1)) && (((! (var_1_20 < 2.5)) || var_1_28) ? ((var_1_27 && ((var_1_90 + var_1_4) <= var_1_6)) ? (var_1_42 == ((unsigned short int) var_1_7)) : 1) : (var_1_42 == ((unsigned short int) ((((var_1_91) < (((var_1_43 - var_1_4) - var_1_8))) ? (var_1_91) : (((var_1_43 - var_1_4) - var_1_8)))))))) && ((var_1_34 >= var_1_80) ? ((var_1_87 < var_1_43) ? (var_1_44 == ((double) ((((var_1_21) > (var_1_20)) ? (var_1_21) : (var_1_20))))) : (var_1_44 == ((double) 4.375))) : ((var_1_34 > var_1_80) ? (var_1_44 == ((double) var_1_24)) : (var_1_44 == ((double) 999999.25))))) && ((! var_1_99) ? (var_1_46 == ((double) (((((var_1_16) < (var_1_22)) ? (var_1_16) : (var_1_22))) + ((((var_1_19) < ((var_1_23 - var_1_20))) ? (var_1_19) : ((var_1_23 - var_1_20))))))) : (var_1_46 == ((double) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))) && ((var_1_8 == var_1_101) ? (((var_1_80 + (var_1_48 - var_1_10)) < var_1_57) ? ((var_1_46 < 1.5) ? (var_1_47 == ((unsigned char) (var_1_49 - var_1_4))) : 1) : (var_1_47 == ((unsigned char) var_1_4))) : (var_1_47 == ((unsigned char) ((((((((var_1_49) > (var_1_4)) ? (var_1_49) : (var_1_4)))) > (var_1_50)) ? (((((var_1_49) > (var_1_4)) ? (var_1_49) : (var_1_4)))) : (var_1_50))))))) && (var_1_29 ? ((var_1_38 && var_1_28) ? ((var_1_22 >= (var_1_95 * var_1_61)) ? (var_1_51 == ((double) (((((var_1_23 + var_1_16)) > ((((((var_1_21) < (var_1_24)) ? (var_1_21) : (var_1_24))) - ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)))))) ? ((var_1_23 + var_1_16)) : ((((((var_1_21) < (var_1_24)) ? (var_1_21) : (var_1_24))) - ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22))))))))) : ((var_1_21 <= ((((var_1_23 - var_1_24) < 0 ) ? -(var_1_23 - var_1_24) : (var_1_23 - var_1_24)))) ? (var_1_51 == ((double) (((((var_1_20 - ((((var_1_21) < (var_1_23)) ? (var_1_21) : (var_1_23))))) < ((((((var_1_22 - var_1_24)) > (var_1_52)) ? ((var_1_22 - var_1_24)) : (var_1_52))))) ? ((var_1_20 - ((((var_1_21) < (var_1_23)) ? (var_1_21) : (var_1_23))))) : ((((((var_1_22 - var_1_24)) > (var_1_52)) ? ((var_1_22 - var_1_24)) : (var_1_52)))))))) : 1)) : 1) : (var_1_51 == ((double) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))))) && (((128 % var_1_43) <= ((var_1_49 + var_1_50) / var_1_6)) ? (var_1_53 == ((double) ((var_1_54 - var_1_22) - ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))) : (((var_1_50 >> (var_1_55 - var_1_56)) != (var_1_64 ^ (var_1_93 + var_1_49))) ? (var_1_53 == ((double) (var_1_21 - var_1_54))) : (var_1_53 == ((double) (((((var_1_21 - var_1_23)) < (25.3)) ? ((var_1_21 - var_1_23)) : (25.3)))))))) && (((var_1_4 * var_1_56) <= var_1_55) ? ((-2 >= var_1_98) ? (var_1_57 == ((unsigned long int) ((((var_1_98) > (var_1_55)) ? (var_1_98) : (var_1_55))))) : (((var_1_54 / var_1_36) <= (var_1_24 + (var_1_102 * var_1_52))) ? (var_1_57 == ((unsigned long int) (var_1_43 + var_1_8))) : (var_1_57 == ((unsigned long int) (var_1_37 + (var_1_55 + var_1_56)))))) : (var_1_57 == ((unsigned long int) ((((var_1_10) > (0u)) ? (var_1_10) : (0u))))))) && ((last_1_var_1_53 < (var_1_54 / var_1_36)) ? ((((((last_1_var_1_53 / var_1_54) < 0 ) ? -(last_1_var_1_53 / var_1_54) : (last_1_var_1_53 / var_1_54))) < 32.5) ? (((- last_1_var_1_93) < ((last_1_var_1_58 ^ var_1_8) * var_1_56)) ? (var_1_58 == ((unsigned long int) (var_1_59 - var_1_55))) : (var_1_58 == ((unsigned long int) ((((var_1_7) > (((((var_1_34) < ((var_1_8 + var_1_49))) ? (var_1_34) : ((var_1_8 + var_1_49)))))) ? (var_1_7) : (((((var_1_34) < ((var_1_8 + var_1_49))) ? (var_1_34) : ((var_1_8 + var_1_49)))))))))) : 1) : ((((var_1_55 / 32) / 32) >= (- (var_1_48 - var_1_43))) ? (var_1_58 == ((unsigned long int) ((((((((var_1_7) > (10u)) ? (var_1_7) : (10u)))) < (var_1_50)) ? (((((var_1_7) > (10u)) ? (var_1_7) : (10u)))) : (var_1_50))))) : 1))) && ((var_1_36 != ((((var_1_17) > (var_1_14)) ? (var_1_17) : (var_1_14)))) ? (var_1_27 ? (var_1_78 ? ((var_1_15 < (((((var_1_61 / var_1_54)) < (var_1_36)) ? ((var_1_61 / var_1_54)) : (var_1_36)))) ? (var_1_60 == ((double) (((((var_1_20) < ((var_1_22 - 10.15))) ? (var_1_20) : ((var_1_22 - 10.15)))) + var_1_18))) : 1) : (var_1_60 == ((double) (var_1_23 + var_1_18)))) : (((((((var_1_21) < (var_1_18)) ? (var_1_21) : (var_1_18))) >= var_1_22) || var_1_31) ? (var_1_60 == ((double) (((((255.375 + var_1_23)) < (var_1_15)) ? ((255.375 + var_1_23)) : (var_1_15))))) : (var_1_60 == ((double) 8.25)))) : (var_1_60 == ((double) var_1_52)))) && ((last_1_var_1_53 != (((((var_1_16 + var_1_23)) > (((((last_1_var_1_95) < (var_1_18)) ? (last_1_var_1_95) : (var_1_18))))) ? ((var_1_16 + var_1_23)) : (((((last_1_var_1_95) < (var_1_18)) ? (last_1_var_1_95) : (var_1_18))))))) ? (var_1_61 == ((double) (256.5 + var_1_17))) : ((last_1_var_1_61 != last_1_var_1_9) ? (var_1_61 == ((double) ((((var_1_20) < ((var_1_22 + var_1_62))) ? (var_1_20) : ((var_1_22 + var_1_62)))))) : 1))) && (var_1_97 ? (var_1_63 == ((unsigned char) (! (! 1)))) : 1)) && (var_1_28 ? ((var_1_58 <= var_1_80) ? (var_1_29 ? (var_1_64 == ((unsigned short int) (var_1_56 + (((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) - var_1_50)))) : (var_1_64 == ((unsigned short int) (43260 - (var_1_65 - var_1_66))))) : (var_1_64 == ((unsigned short int) (((((58460 - var_1_8)) > ((var_1_7 - (var_1_50 + var_1_76)))) ? ((58460 - var_1_8)) : ((var_1_7 - (var_1_50 + var_1_76)))))))) : (((var_1_54 - var_1_20) > var_1_46) ? ((var_1_87 == var_1_57) ? (var_1_64 == ((unsigned short int) (((((var_1_7 - var_1_76)) < (var_1_50)) ? ((var_1_7 - var_1_76)) : (var_1_50))))) : (var_1_64 == ((unsigned short int) (var_1_8 + var_1_87)))) : (var_1_64 == ((unsigned short int) ((((((((var_1_7) < (var_1_43)) ? (var_1_7) : (var_1_43))) < 0 ) ? -((((var_1_7) < (var_1_43)) ? (var_1_7) : (var_1_43))) : ((((var_1_7) < (var_1_43)) ? (var_1_7) : (var_1_43))))) - var_1_87)))))) && ((4 < (var_1_7 + var_1_98)) ? (var_1_67 == ((float) var_1_62)) : (((var_1_78 && var_1_99) || var_1_38) ? (var_1_29 ? (var_1_67 == ((float) ((((255.25f) < (var_1_52)) ? (255.25f) : (var_1_52))))) : 1) : (var_1_67 == ((float) (var_1_22 - (((((var_1_54) > (var_1_68)) ? (var_1_54) : (var_1_68))) - (var_1_23 + var_1_24)))))))) && ((((((var_1_43) > (var_1_48)) ? (var_1_43) : (var_1_48))) <= ((var_1_96 + var_1_98) + var_1_32)) ? (var_1_25 ? (var_1_69 == ((signed long int) (var_1_43 - ((((var_1_93) < (((((var_1_8) < (var_1_32)) ? (var_1_8) : (var_1_32))))) ? (var_1_93) : (((((var_1_8) < (var_1_32)) ? (var_1_8) : (var_1_32))))))))) : 1) : (var_1_69 == ((signed long int) ((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8))))))) && ((var_1_18 < var_1_22) ? (var_1_70 == ((signed short int) (((var_1_37 + var_1_4) + (var_1_71 - var_1_50)) - (17461 - (var_1_72 - var_1_49))))) : 1)) && ((var_1_54 >= var_1_20) ? ((var_1_25 && (var_1_101 > var_1_80)) ? (((var_1_72 / var_1_4) == var_1_56) ? (var_1_73 == ((signed short int) var_1_43)) : (var_1_73 == ((signed short int) ((((((var_1_74) < (var_1_49)) ? (var_1_74) : (var_1_49))) + ((((var_1_55) > (var_1_4)) ? (var_1_55) : (var_1_4)))) - ((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66))))))) : 1) : (var_1_73 == ((signed short int) ((var_1_75 - (var_1_58 + var_1_56)) - ((((((((var_1_74) > (var_1_71)) ? (var_1_74) : (var_1_71)))) > (var_1_4)) ? (((((var_1_74) > (var_1_71)) ? (var_1_74) : (var_1_71)))) : (var_1_4)))))))) && ((var_1_100 > var_1_95) ? (var_1_76 == ((unsigned char) var_1_56)) : (var_1_76 == ((unsigned char) var_1_55)))) && ((var_1_46 <= var_1_44) ? (var_1_78 == ((unsigned char) (((var_1_99 && var_1_29) || var_1_30) || var_1_79))) : (var_1_78 == ((unsigned char) (var_1_40 || (var_1_29 || var_1_27)))))) && ((var_1_87 > (var_1_56 - var_1_50)) ? (var_1_80 == ((unsigned long int) (var_1_59 - ((((var_1_43) < ((var_1_34 - var_1_8))) ? (var_1_43) : ((var_1_34 - var_1_8))))))) : (var_1_80 == ((unsigned long int) (var_1_59 - var_1_74))))) && ((((((var_1_54) < ((var_1_51 + var_1_16))) ? (var_1_54) : ((var_1_51 + var_1_16)))) < var_1_88) ? (var_1_81 == ((double) var_1_18)) : (var_1_81 == ((double) ((var_1_23 - var_1_24) + (var_1_22 - var_1_20)))))) && ((var_1_14 > (- (var_1_53 / var_1_36))) ? (var_1_82 == ((unsigned char) ((64 + var_1_83) - ((16 + var_1_56) + var_1_55)))) : (var_1_82 == ((unsigned char) (var_1_49 - var_1_55))))) && (var_1_84 == ((float) (var_1_17 + (var_1_22 - var_1_24))))) && (((((((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))) < 0 ) ? -((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))) : ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))))) > var_1_41) ? (var_1_85 == ((float) ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) : (var_1_85 == ((float) var_1_68)))) && (var_1_63 ? (var_1_87 == ((signed long int) ((((var_1_65 + 8) < 0 ) ? -(var_1_65 + 8) : (var_1_65 + 8))))) : (var_1_27 ? (var_1_87 == ((signed long int) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) : 1))) && ((var_1_57 <= 256u) ? ((((((var_1_95) > ((var_1_24 - var_1_20))) ? (var_1_95) : ((var_1_24 - var_1_20)))) >= var_1_54) ? (var_1_88 == ((double) ((((var_1_16) > (var_1_23)) ? (var_1_16) : (var_1_23))))) : 1) : (var_1_88 == ((double) var_1_62)))) && (var_1_89 == ((float) var_1_68))) && (var_1_90 == ((unsigned long int) var_1_65))) && (var_1_30 ? (var_1_91 == ((unsigned char) var_1_50)) : (var_1_91 == ((unsigned char) var_1_4)))) && (var_1_25 ? (var_1_92 == ((signed char) var_1_56)) : (var_1_92 == ((signed char) 64)))) && (var_1_27 ? (var_1_93 == ((signed long int) last_1_var_1_1)) : 1)) && (var_1_94 == ((float) var_1_21))) && (var_1_95 == ((double) var_1_18))) && (var_1_96 == ((unsigned long int) last_1_var_1_96))) && (var_1_29 ? (var_1_97 == ((unsigned char) var_1_79)) : (var_1_97 == ((unsigned char) 0)))) && (var_1_98 == ((signed long int) var_1_49))) && (var_1_99 == ((unsigned char) var_1_29))) && (var_1_28 ? (var_1_100 == ((float) 32.38f)) : (var_1_100 == ((float) var_1_17)))) && (var_1_38 ? (var_1_101 == ((signed long int) var_1_64)) : (var_1_101 == ((signed long int) var_1_7)))) && ((((var_1_8 + var_1_72) - var_1_65) <= (var_1_87 * var_1_43)) ? (var_1_102 == ((double) ((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))) - var_1_68) < 0 ) ? -(((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))) - var_1_68) : (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))) - var_1_68))))) : (var_1_102 == ((double) var_1_15)))
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

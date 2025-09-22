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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch67Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
signed short int var_1_5 = 128;
signed char var_1_6 = -2;
signed char var_1_7 = 2;
double var_1_8 = 16.25;
double var_1_9 = 31.5;
double var_1_10 = 127.9;
double var_1_11 = 15.9;
double var_1_12 = 64.75;
double var_1_13 = 0.07999999999999996;
double var_1_14 = 8.6;
unsigned long int var_1_15 = 0;
signed long int var_1_16 = 16;
unsigned long int var_1_17 = 256;
double var_1_18 = 99.8;
double var_1_20 = 256.125;
unsigned short int var_1_21 = 256;
signed long int var_1_22 = 25;
unsigned short int var_1_23 = 25686;
unsigned short int var_1_24 = 29835;
unsigned short int var_1_25 = 25;
unsigned short int var_1_26 = 39206;
unsigned short int var_1_27 = 27481;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
signed short int var_1_33 = 128;
signed short int var_1_34 = 64;
float var_1_35 = 99999999999999.5;
double var_1_36 = 0.0;
float var_1_37 = 100.8;
unsigned char var_1_38 = 10;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 5;
unsigned char var_1_41 = 16;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 4;
signed long int var_1_44 = -50;
signed long int var_1_45 = -2;
signed long int var_1_46 = 100;
unsigned char var_1_47 = 4;
float var_1_48 = 16.3;
unsigned char var_1_49 = 1;
signed char var_1_50 = 64;
unsigned char var_1_51 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned short int var_1_55 = 1;
signed char var_1_56 = 2;
signed long int var_1_57 = 1988620387;
signed char var_1_58 = -4;
double var_1_59 = 1000000.5;
double var_1_60 = 99.5;
signed char var_1_61 = 5;
signed char var_1_62 = -25;
signed char var_1_63 = -2;
signed char var_1_64 = 32;
signed char var_1_65 = 2;
signed char var_1_66 = 0;
signed char var_1_67 = 10;
signed short int var_1_68 = 50;
float var_1_69 = 8.7;
signed char var_1_70 = 4;
signed char var_1_71 = -1;
unsigned short int var_1_72 = 8;
unsigned short int var_1_73 = 30900;
unsigned short int var_1_74 = 256;
float var_1_75 = 15.8;
float var_1_76 = 50.75;
double var_1_77 = 1.1;
double var_1_78 = 0.0;
double var_1_79 = 0.0;
unsigned long int var_1_80 = 8;
unsigned long int var_1_81 = 3820820300;
unsigned long int var_1_82 = 3942540580;
unsigned char var_1_83 = 10;
unsigned long int var_1_84 = 32;
unsigned long int var_1_85 = 2;
signed char var_1_86 = -64;
unsigned char var_1_87 = 0;
signed char var_1_88 = 100;
unsigned short int var_1_89 = 2;
unsigned short int var_1_90 = 57909;
signed short int var_1_91 = -10;
signed char var_1_92 = 5;
signed short int var_1_93 = 21291;
float var_1_94 = 1.6;
signed long int var_1_95 = -128;
unsigned long int var_1_96 = 1000000;
unsigned long int var_1_97 = 16;
signed char var_1_98 = 10;
double var_1_99 = 16.75;
unsigned short int var_1_100 = 128;
unsigned long int var_1_101 = 10;
unsigned long int var_1_102 = 10;
unsigned short int var_1_103 = 32;
float var_1_104 = 256.6;
signed short int var_1_105 = 128;
double last_1_var_1_18 = 99.8;
unsigned char last_1_var_1_29 = 1;
signed long int last_1_var_1_46 = 100;
unsigned char last_1_var_1_49 = 1;
unsigned char last_1_var_1_51 = 0;
unsigned short int last_1_var_1_55 = 1;
unsigned short int last_1_var_1_72 = 8;
unsigned long int last_1_var_1_80 = 8;
signed short int last_1_var_1_91 = -10;
signed long int last_1_var_1_95 = -128;
double last_1_var_1_99 = 16.75;
unsigned long int last_1_var_1_101 = 10;
unsigned long int last_1_var_1_102 = 10;
signed short int last_1_var_1_105 = 128;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_9 = var_1_43;
 if (stepLocal_9 == (200 - var_1_42)) {
  var_1_46 = (var_1_42 - (((((((last_1_var_1_105) > (var_1_26)) ? (last_1_var_1_105) : (var_1_26))) < 0 ) ? -((((last_1_var_1_105) > (var_1_26)) ? (last_1_var_1_105) : (var_1_26))) : ((((last_1_var_1_105) > (var_1_26)) ? (last_1_var_1_105) : (var_1_26))))));
 } else {
  var_1_46 = ((last_1_var_1_46 + var_1_25) + -8);
 }
 signed long int stepLocal_18 = (((last_1_var_1_72) > (128)) ? (last_1_var_1_72) : (128));
 unsigned long int stepLocal_17 = last_1_var_1_102;
 if (var_1_32) {
  var_1_51 = ((((((var_1_45) < (last_1_var_1_46)) ? (var_1_45) : (last_1_var_1_46))) > last_1_var_1_95) || var_1_31);
 } else {
  if (last_1_var_1_80 < stepLocal_17) {
   var_1_51 = ((var_1_30 || var_1_53) || var_1_54);
  } else {
   if (stepLocal_18 >= last_1_var_1_101) {
    var_1_51 = (! var_1_31);
   } else {
    var_1_51 = (last_1_var_1_29 && var_1_54);
   }
  }
 }
 if (var_1_51) {
  var_1_96 = var_1_88;
 } else {
  var_1_96 = var_1_66;
 }
 unsigned char stepLocal_7 = var_1_14 <= var_1_11;
 unsigned short int stepLocal_6 = var_1_24;
 signed long int stepLocal_5 = (((var_1_16) > (last_1_var_1_55)) ? (var_1_16) : (last_1_var_1_55));
 if ((var_1_13 - var_1_14) >= (var_1_10 + ((((var_1_12) < (var_1_9)) ? (var_1_12) : (var_1_9))))) {
  if (last_1_var_1_51 && stepLocal_7) {
   var_1_29 = var_1_30;
  } else {
   if (stepLocal_6 <= var_1_16) {
    if (last_1_var_1_49) {
     var_1_29 = (! var_1_31);
    } else {
     var_1_29 = (last_1_var_1_51 && (! var_1_31));
    }
   } else {
    if (last_1_var_1_99 != var_1_10) {
     var_1_29 = (! (var_1_31 && var_1_32));
    } else {
     var_1_29 = ((var_1_12 != 255.25) || var_1_32);
    }
   }
  }
 } else {
  if (var_1_7 >= stepLocal_5) {
   var_1_29 = ((var_1_22 == last_1_var_1_46) || var_1_32);
  } else {
   var_1_29 = 1;
  }
 }
 unsigned char stepLocal_19 = var_1_30;
 if (stepLocal_19 || var_1_29) {
  var_1_55 = (var_1_26 - var_1_34);
 } else {
  var_1_55 = ((((var_1_42) > (var_1_34)) ? (var_1_42) : (var_1_34)));
 }
 unsigned short int stepLocal_23 = var_1_55;
 unsigned char stepLocal_22 = 200 <= var_1_7;
 if (var_1_54 && stepLocal_22) {
  if (stepLocal_23 >= (var_1_26 - var_1_65)) {
   var_1_68 = ((((var_1_67) > (var_1_64)) ? (var_1_67) : (var_1_64)));
  }
 }
 var_1_6 = var_1_7;
 if (-0.35f > ((((var_1_10) > (var_1_14)) ? (var_1_10) : (var_1_14)))) {
  var_1_33 = (var_1_25 - (var_1_34 + 256));
 } else {
  var_1_33 = ((((var_1_7) < (8)) ? (var_1_7) : (8)));
 }
 if (var_1_30) {
  var_1_44 = ((var_1_23 + var_1_25) - var_1_17);
 }
 var_1_70 = var_1_71;
 if (var_1_31) {
  var_1_75 = ((((((var_1_76 + var_1_37) + ((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10))))) > (64.075f)) ? (((var_1_76 + var_1_37) + ((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10))))) : (64.075f)));
 } else {
  var_1_75 = ((((((((var_1_20 - var_1_13) < 0 ) ? -(var_1_20 - var_1_13) : (var_1_20 - var_1_13)))) > (var_1_9)) ? (((((var_1_20 - var_1_13) < 0 ) ? -(var_1_20 - var_1_13) : (var_1_20 - var_1_13)))) : (var_1_9)));
 }
 unsigned char stepLocal_32 = var_1_51;
 if (var_1_53 || stepLocal_32) {
  if (var_1_37 < var_1_76) {
   if (var_1_51) {
    if (var_1_53) {
     var_1_94 = (var_1_14 - (6.374538313276805E18f - var_1_13));
    }
   }
  } else {
   var_1_94 = var_1_10;
  }
 }
 if (var_1_79 == var_1_12) {
  var_1_95 = -128;
 } else {
  var_1_95 = -256;
 }
 if (var_1_87) {
  var_1_97 = var_1_50;
 } else {
  var_1_97 = var_1_23;
 }
 if (var_1_51) {
  var_1_98 = var_1_66;
 } else {
  var_1_98 = var_1_41;
 }
 var_1_99 = var_1_76;
 if (var_1_29) {
  var_1_100 = var_1_25;
 }
 if (var_1_32) {
  var_1_101 = var_1_57;
 }
 var_1_102 = var_1_90;
 var_1_103 = var_1_23;
 var_1_104 = 2.15f;
 if (var_1_46 >= var_1_26) {
  if ((1 * 64) <= var_1_55) {
   if (var_1_97 <= var_1_74) {
    var_1_105 = (16 - var_1_50);
   } else {
    var_1_105 = var_1_65;
   }
  }
 }
 signed long int stepLocal_3 = - var_1_55;
 signed short int stepLocal_2 = var_1_5;
 if (stepLocal_3 >= (((((var_1_68 % var_1_16)) > (var_1_46)) ? ((var_1_68 % var_1_16)) : (var_1_46)))) {
  if ((var_1_68 / var_1_16) <= stepLocal_2) {
   var_1_15 = (var_1_96 + (var_1_55 + var_1_17));
  }
 }
 if ((var_1_102 & var_1_103) <= var_1_97) {
  var_1_1 = var_1_5;
 }
 unsigned long int stepLocal_1 = var_1_96;
 signed long int stepLocal_0 = var_1_95 + var_1_46;
 if (var_1_95 == stepLocal_1) {
  var_1_8 = (var_1_9 + var_1_10);
 } else {
  if (var_1_44 <= stepLocal_0) {
   var_1_8 = (((((var_1_11 + var_1_12) + 1.00000005E7) < 0 ) ? -((var_1_11 + var_1_12) + 1.00000005E7) : ((var_1_11 + var_1_12) + 1.00000005E7)));
  } else {
   var_1_8 = (((var_1_13 - var_1_14) + var_1_12) + var_1_9);
  }
 }
 if (var_1_8 > (var_1_13 - (var_1_36 - var_1_14))) {
  var_1_35 = var_1_12;
 } else {
  if (var_1_14 == (1.35 + (var_1_13 - var_1_36))) {
   if (var_1_14 > var_1_11) {
    var_1_35 = (var_1_11 + (var_1_14 - 5.5f));
   }
  } else {
   if ((var_1_96 * (var_1_7 * var_1_16)) < var_1_27) {
    var_1_35 = (((((var_1_12) > (((((var_1_14) > (var_1_9)) ? (var_1_14) : (var_1_9))))) ? (var_1_12) : (((((var_1_14) > (var_1_9)) ? (var_1_14) : (var_1_9)))))) + (var_1_11 + var_1_13));
   } else {
    var_1_35 = ((((((var_1_14 - var_1_13)) < (var_1_9)) ? ((var_1_14 - var_1_13)) : (var_1_9))) + (((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11))) + var_1_37));
   }
  }
 }
 if (var_1_99 > (var_1_13 - var_1_14)) {
  if (var_1_20 < var_1_37) {
   var_1_48 = ((((var_1_14) > ((var_1_20 - var_1_13))) ? (var_1_14) : ((var_1_20 - var_1_13))));
  }
 }
 if ((var_1_24 + 5u) <= var_1_102) {
  if (-256 != (~ var_1_102)) {
   var_1_69 = ((var_1_14 + var_1_11) + var_1_13);
  } else {
   var_1_69 = ((var_1_14 + var_1_13) - var_1_20);
  }
 }
 unsigned long int stepLocal_28 = var_1_102 + var_1_101;
 if (var_1_95 < stepLocal_28) {
  var_1_84 = (var_1_65 + var_1_85);
 }
 signed long int stepLocal_30 = 1000;
 signed long int stepLocal_29 = (var_1_71 * 8) ^ (var_1_66 << var_1_62);
 if (stepLocal_30 != (var_1_67 - var_1_50)) {
  if (var_1_84 < stepLocal_29) {
   if (var_1_54) {
    var_1_86 = var_1_63;
   }
  } else {
   var_1_86 = ((8 - var_1_65) + (var_1_64 - ((((var_1_66) > (var_1_67)) ? (var_1_66) : (var_1_67)))));
  }
 } else {
  var_1_86 = (var_1_41 - (var_1_88 - var_1_65));
 }
 unsigned long int stepLocal_16 = var_1_27 * (var_1_84 / var_1_23);
 unsigned char stepLocal_15 = var_1_39;
 unsigned short int stepLocal_14 = var_1_26;
 unsigned char stepLocal_13 = var_1_29;
 signed long int stepLocal_12 = (var_1_50 - var_1_41) - (32 + var_1_43);
 if (stepLocal_14 <= 4) {
  if (var_1_104 < var_1_13) {
   if (stepLocal_16 <= var_1_41) {
    if (stepLocal_12 >= var_1_44) {
     var_1_49 = (! (! var_1_32));
    }
   } else {
    var_1_49 = ((var_1_104 != var_1_10) || (! var_1_30));
   }
  } else {
   var_1_49 = (var_1_29 && (! var_1_31));
  }
 } else {
  if (stepLocal_13 && (var_1_15 < (var_1_84 * var_1_101))) {
   var_1_49 = var_1_31;
  } else {
   if (stepLocal_15 == var_1_101) {
    var_1_49 = (var_1_29 && var_1_30);
   } else {
    var_1_49 = (var_1_31 && var_1_32);
   }
  }
 }
 unsigned char stepLocal_27 = var_1_49;
 if (stepLocal_27 || var_1_31) {
  var_1_83 = ((200 - var_1_67) - ((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66))));
 } else {
  var_1_83 = (((((16 + var_1_65)) > (var_1_64)) ? ((16 + var_1_65)) : (var_1_64)));
 }
 unsigned char stepLocal_4 = var_1_49;
 if ((var_1_9 < last_1_var_1_18) || stepLocal_4) {
  var_1_18 = (((((var_1_14 - var_1_20)) > (((((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) > ((var_1_13 + var_1_11))) ? (((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) : ((var_1_13 + var_1_11)))))) ? ((var_1_14 - var_1_20)) : (((((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) > ((var_1_13 + var_1_11))) ? (((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) : ((var_1_13 + var_1_11)))))));
 }
 if (var_1_29) {
  if ((((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))) - var_1_27) >= var_1_16) {
   var_1_91 = ((((((var_1_43) < (last_1_var_1_91)) ? (var_1_43) : (last_1_var_1_91))) - var_1_65) + (((((var_1_40) > (var_1_34)) ? (var_1_40) : (var_1_34))) - var_1_42));
  } else {
   if (var_1_51 || var_1_29) {
    var_1_91 = ((((var_1_5) > ((var_1_64 - var_1_25))) ? (var_1_5) : ((var_1_64 - var_1_25))));
   } else {
    if (var_1_59 <= (- var_1_104)) {
     if (var_1_82 >= ((var_1_97 >> var_1_92) * (var_1_66 + var_1_96))) {
      var_1_91 = ((((var_1_92) > ((var_1_67 - (var_1_64 + var_1_65)))) ? (var_1_92) : ((var_1_67 - (var_1_64 + var_1_65)))));
     } else {
      if (var_1_15 > var_1_62) {
       var_1_91 = ((((var_1_39) > (var_1_65)) ? (var_1_39) : (var_1_65)));
      }
     }
    }
   }
  }
 } else {
  if (((1.000000000000004E14 * var_1_18) * ((((var_1_76) < (49.5)) ? (var_1_76) : (49.5)))) > var_1_104) {
   var_1_91 = ((((4) < 0 ) ? -(4) : (4)));
  } else {
   var_1_91 = ((var_1_93 - 5) - ((((last_1_var_1_91) < 0 ) ? -(last_1_var_1_91) : (last_1_var_1_91))));
  }
 }
 if (var_1_76 > ((((2.5f) > (var_1_37)) ? (2.5f) : (var_1_37)))) {
  if ((~ var_1_27) <= ((var_1_64 - var_1_83) * var_1_45)) {
   var_1_77 = ((((var_1_12) > (((var_1_78 - var_1_14) - (var_1_79 - var_1_13)))) ? (var_1_12) : (((var_1_78 - var_1_14) - (var_1_79 - var_1_13)))));
  }
 }
 unsigned long int stepLocal_31 = var_1_97 / var_1_50;
 if (stepLocal_31 >= (var_1_7 + var_1_1)) {
  var_1_89 = (((((var_1_26 - var_1_88)) < ((var_1_90 - var_1_91))) ? ((var_1_26 - var_1_88)) : ((var_1_90 - var_1_91))));
 }
 signed long int stepLocal_8 = var_1_25 + (var_1_26 - var_1_24);
 if (var_1_44 <= stepLocal_8) {
  if (((((var_1_8) > ((var_1_20 + var_1_9))) ? (var_1_8) : ((var_1_20 + var_1_9)))) > (- ((((var_1_11) < (var_1_77)) ? (var_1_11) : (var_1_77))))) {
   var_1_38 = (var_1_39 - var_1_40);
  }
 } else {
  var_1_38 = (var_1_39 - (((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) + var_1_43));
 }
 unsigned char stepLocal_11 = var_1_51;
 signed long int stepLocal_10 = (var_1_39 + var_1_33) & var_1_89;
 if (stepLocal_11 || (0u > var_1_26)) {
  if (var_1_34 < stepLocal_10) {
   var_1_47 = (var_1_39 - ((((var_1_42 + var_1_43) < 0 ) ? -(var_1_42 + var_1_43) : (var_1_42 + var_1_43))));
  } else {
   var_1_47 = var_1_40;
  }
 }
 unsigned char stepLocal_25 = var_1_47;
 signed long int stepLocal_24 = 1;
 if (32.5 >= var_1_18) {
  if (var_1_20 >= var_1_48) {
   if (var_1_26 > stepLocal_25) {
    var_1_72 = ((((((var_1_24 + var_1_73) - var_1_27)) < ((var_1_26 - var_1_64))) ? (((var_1_24 + var_1_73) - var_1_27)) : ((var_1_26 - var_1_64))));
   } else {
    if ((var_1_96 / ((((var_1_24) < (var_1_23)) ? (var_1_24) : (var_1_23)))) < stepLocal_24) {
     var_1_72 = (var_1_50 + (var_1_66 + var_1_103));
    } else {
     var_1_72 = var_1_41;
    }
   }
  } else {
   var_1_72 = ((var_1_67 + var_1_41) + ((((var_1_73) < (var_1_74)) ? (var_1_73) : (var_1_74))));
  }
 } else {
  var_1_72 = ((((((((((((var_1_41) > (var_1_65)) ? (var_1_41) : (var_1_65)))) > (var_1_39)) ? (((((var_1_41) > (var_1_65)) ? (var_1_41) : (var_1_65)))) : (var_1_39)))) > (((((var_1_67) > ((var_1_27 + var_1_23))) ? (var_1_67) : ((var_1_27 + var_1_23)))))) ? (((((((((var_1_41) > (var_1_65)) ? (var_1_41) : (var_1_65)))) > (var_1_39)) ? (((((var_1_41) > (var_1_65)) ? (var_1_41) : (var_1_65)))) : (var_1_39)))) : (((((var_1_67) > ((var_1_27 + var_1_23))) ? (var_1_67) : ((var_1_27 + var_1_23)))))));
 }
 unsigned short int stepLocal_26 = var_1_72;
 if (stepLocal_26 >= var_1_84) {
  var_1_80 = (var_1_81 - ((((25u) > (32u)) ? (25u) : (32u))));
 } else {
  var_1_80 = ((var_1_82 - ((((var_1_97) > (var_1_68)) ? (var_1_97) : (var_1_68)))) - ((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))));
 }
 if (var_1_29) {
  if ((((((var_1_20) < (var_1_8)) ? (var_1_20) : (var_1_8))) * var_1_14) <= (var_1_13 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) {
   if (var_1_16 <= (var_1_103 % var_1_22)) {
    if (((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97))) >= var_1_80) {
     if (var_1_1 != var_1_16) {
      var_1_21 = ((var_1_23 + var_1_24) - 32);
     } else {
      var_1_21 = ((((((var_1_24 - var_1_25) + var_1_23)) > ((var_1_26 - (var_1_27 - 32)))) ? (((var_1_24 - var_1_25) + var_1_23)) : ((var_1_26 - (var_1_27 - 32)))));
     }
    }
   } else {
    var_1_21 = ((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26)));
   }
  } else {
   if (var_1_17 >= ((((var_1_23) < (var_1_25)) ? (var_1_23) : (var_1_25)))) {
    if (var_1_16 == var_1_26) {
     var_1_21 = (((((var_1_25 + var_1_24)) < (((((var_1_23) < (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (var_1_23) : (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))))))) ? ((var_1_25 + var_1_24)) : (((((var_1_23) < (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (var_1_23) : (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))))))));
    }
   } else {
    if ((var_1_80 > var_1_5) || var_1_49) {
     if (var_1_97 < var_1_96) {
      var_1_21 = (var_1_27 + (var_1_23 - var_1_25));
     }
    } else {
     var_1_21 = var_1_25;
    }
   }
  }
 } else {
  var_1_21 = var_1_23;
 }
 signed long int stepLocal_21 = var_1_89 * (var_1_72 - var_1_26);
 signed long int stepLocal_20 = (((var_1_55) < (16)) ? (var_1_55) : (16));
 if (stepLocal_21 < ((var_1_57 - var_1_42) - 5)) {
  var_1_56 = ((((((((((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) > (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))) ? (((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) : (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))))) < (-8)) ? (((((((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) > (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))) ? (((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) : (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))))) : (-8)));
 } else {
  if (((((var_1_36) > (var_1_20)) ? (var_1_36) : (var_1_20))) == (var_1_77 / ((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60))))) {
   var_1_56 = ((((var_1_43) > ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) + var_1_63))) ? (var_1_43) : ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) + var_1_63))));
  } else {
   if (stepLocal_20 > var_1_39) {
    var_1_56 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
   } else {
    var_1_56 = ((16 + (var_1_64 + var_1_65)) - ((var_1_66 + var_1_67) + var_1_43));
   }
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -230584.3009213691400e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= -2147483648);
 assume_abort_if_not(var_1_22 <= 2147483647);
 assume_abort_if_not(var_1_22 != 0);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 16383);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 16384);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 16383);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 32767);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 16383);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_34 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 16383);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 4611686.018427388000e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -230584.3009213691400e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691400e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 64);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 64);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= -1073741823);
 assume_abort_if_not(var_1_45 <= 1073741823);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 63);
 assume_abort_if_not(var_1_50 <= 127);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_57 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_57 >= 1073741823);
 assume_abort_if_not(var_1_57 <= 2147483647);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -127);
 assume_abort_if_not(var_1_58 <= 126);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
 assume_abort_if_not(var_1_59 != 0.0F);
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
 assume_abort_if_not(var_1_60 != 0.0F);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= -63);
 assume_abort_if_not(var_1_61 <= 63);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -63);
 assume_abort_if_not(var_1_62 <= 63);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= -63);
 assume_abort_if_not(var_1_63 <= 63);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 32);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 31);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 32);
 var_1_67 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 31);
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= -127);
 assume_abort_if_not(var_1_71 <= 126);
 var_1_73 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_73 >= 16384);
 assume_abort_if_not(var_1_73 <= 32767);
 var_1_74 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 32767);
 var_1_76 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_76 >= -230584.3009213691400e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691400e+12F && var_1_76 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_78 >= 4611686.018427383000e+12F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854766000e+12F && var_1_78 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_79 >= 4611686.018427383000e+12F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854766000e+12F && var_1_79 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_81 >= 2147483647);
 assume_abort_if_not(var_1_81 <= 4294967294);
 var_1_82 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_82 >= 3221225470);
 assume_abort_if_not(var_1_82 <= 4294967294);
 var_1_85 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 2147483647);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 1);
 assume_abort_if_not(var_1_87 <= 1);
 var_1_88 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_88 >= 63);
 assume_abort_if_not(var_1_88 <= 126);
 var_1_90 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_90 >= 32767);
 assume_abort_if_not(var_1_90 <= 65534);
 var_1_92 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_92 >= 1);
 assume_abort_if_not(var_1_92 <= 15);
 var_1_93 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_93 >= 16382);
 assume_abort_if_not(var_1_93 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_101 = var_1_101;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_105 = var_1_105;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((var_1_102 & var_1_103) <= var_1_97) ? (var_1_1 == ((signed short int) var_1_5)) : 1) && (var_1_6 == ((signed char) var_1_7))) && ((var_1_95 == var_1_96) ? (var_1_8 == ((double) (var_1_9 + var_1_10))) : ((var_1_44 <= (var_1_95 + var_1_46)) ? (var_1_8 == ((double) (((((var_1_11 + var_1_12) + 1.00000005E7) < 0 ) ? -((var_1_11 + var_1_12) + 1.00000005E7) : ((var_1_11 + var_1_12) + 1.00000005E7))))) : (var_1_8 == ((double) (((var_1_13 - var_1_14) + var_1_12) + var_1_9)))))) && (((- var_1_55) >= (((((var_1_68 % var_1_16)) > (var_1_46)) ? ((var_1_68 % var_1_16)) : (var_1_46)))) ? (((var_1_68 / var_1_16) <= var_1_5) ? (var_1_15 == ((unsigned long int) (var_1_96 + (var_1_55 + var_1_17)))) : 1) : 1)) && (((var_1_9 < last_1_var_1_18) || var_1_49) ? (var_1_18 == ((double) (((((var_1_14 - var_1_20)) > (((((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) > ((var_1_13 + var_1_11))) ? (((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) : ((var_1_13 + var_1_11)))))) ? ((var_1_14 - var_1_20)) : (((((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) > ((var_1_13 + var_1_11))) ? (((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) : ((var_1_13 + var_1_11))))))))) : 1)) && (var_1_29 ? (((((((var_1_20) < (var_1_8)) ? (var_1_20) : (var_1_8))) * var_1_14) <= (var_1_13 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? ((var_1_16 <= (var_1_103 % var_1_22)) ? ((((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97))) >= var_1_80) ? ((var_1_1 != var_1_16) ? (var_1_21 == ((unsigned short int) ((var_1_23 + var_1_24) - 32))) : (var_1_21 == ((unsigned short int) ((((((var_1_24 - var_1_25) + var_1_23)) > ((var_1_26 - (var_1_27 - 32)))) ? (((var_1_24 - var_1_25) + var_1_23)) : ((var_1_26 - (var_1_27 - 32)))))))) : 1) : (var_1_21 == ((unsigned short int) ((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26)))))) : ((var_1_17 >= ((((var_1_23) < (var_1_25)) ? (var_1_23) : (var_1_25)))) ? ((var_1_16 == var_1_26) ? (var_1_21 == ((unsigned short int) (((((var_1_25 + var_1_24)) < (((((var_1_23) < (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (var_1_23) : (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))))))) ? ((var_1_25 + var_1_24)) : (((((var_1_23) < (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (var_1_23) : (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))))))))) : 1) : (((var_1_80 > var_1_5) || var_1_49) ? ((var_1_97 < var_1_96) ? (var_1_21 == ((unsigned short int) (var_1_27 + (var_1_23 - var_1_25)))) : 1) : (var_1_21 == ((unsigned short int) var_1_25))))) : (var_1_21 == ((unsigned short int) var_1_23)))) && (((var_1_13 - var_1_14) >= (var_1_10 + ((((var_1_12) < (var_1_9)) ? (var_1_12) : (var_1_9))))) ? ((last_1_var_1_51 && (var_1_14 <= var_1_11)) ? (var_1_29 == ((unsigned char) var_1_30)) : ((var_1_24 <= var_1_16) ? (last_1_var_1_49 ? (var_1_29 == ((unsigned char) (! var_1_31))) : (var_1_29 == ((unsigned char) (last_1_var_1_51 && (! var_1_31))))) : ((last_1_var_1_99 != var_1_10) ? (var_1_29 == ((unsigned char) (! (var_1_31 && var_1_32)))) : (var_1_29 == ((unsigned char) ((var_1_12 != 255.25) || var_1_32)))))) : ((var_1_7 >= ((((var_1_16) > (last_1_var_1_55)) ? (var_1_16) : (last_1_var_1_55)))) ? (var_1_29 == ((unsigned char) ((var_1_22 == last_1_var_1_46) || var_1_32))) : (var_1_29 == ((unsigned char) 1))))) && ((-0.35f > ((((var_1_10) > (var_1_14)) ? (var_1_10) : (var_1_14)))) ? (var_1_33 == ((signed short int) (var_1_25 - (var_1_34 + 256)))) : (var_1_33 == ((signed short int) ((((var_1_7) < (8)) ? (var_1_7) : (8))))))) && ((var_1_8 > (var_1_13 - (var_1_36 - var_1_14))) ? (var_1_35 == ((float) var_1_12)) : ((var_1_14 == (1.35 + (var_1_13 - var_1_36))) ? ((var_1_14 > var_1_11) ? (var_1_35 == ((float) (var_1_11 + (var_1_14 - 5.5f)))) : 1) : (((var_1_96 * (var_1_7 * var_1_16)) < var_1_27) ? (var_1_35 == ((float) (((((var_1_12) > (((((var_1_14) > (var_1_9)) ? (var_1_14) : (var_1_9))))) ? (var_1_12) : (((((var_1_14) > (var_1_9)) ? (var_1_14) : (var_1_9)))))) + (var_1_11 + var_1_13)))) : (var_1_35 == ((float) ((((((var_1_14 - var_1_13)) < (var_1_9)) ? ((var_1_14 - var_1_13)) : (var_1_9))) + (((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11))) + var_1_37)))))))) && ((var_1_44 <= (var_1_25 + (var_1_26 - var_1_24))) ? ((((((var_1_8) > ((var_1_20 + var_1_9))) ? (var_1_8) : ((var_1_20 + var_1_9)))) > (- ((((var_1_11) < (var_1_77)) ? (var_1_11) : (var_1_77))))) ? (var_1_38 == ((unsigned char) (var_1_39 - var_1_40))) : 1) : (var_1_38 == ((unsigned char) (var_1_39 - (((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) + var_1_43)))))) && (var_1_30 ? (var_1_44 == ((signed long int) ((var_1_23 + var_1_25) - var_1_17))) : 1)) && ((var_1_43 == (200 - var_1_42)) ? (var_1_46 == ((signed long int) (var_1_42 - (((((((last_1_var_1_105) > (var_1_26)) ? (last_1_var_1_105) : (var_1_26))) < 0 ) ? -((((last_1_var_1_105) > (var_1_26)) ? (last_1_var_1_105) : (var_1_26))) : ((((last_1_var_1_105) > (var_1_26)) ? (last_1_var_1_105) : (var_1_26)))))))) : (var_1_46 == ((signed long int) ((last_1_var_1_46 + var_1_25) + -8))))) && ((var_1_51 || (0u > var_1_26)) ? ((var_1_34 < ((var_1_39 + var_1_33) & var_1_89)) ? (var_1_47 == ((unsigned char) (var_1_39 - ((((var_1_42 + var_1_43) < 0 ) ? -(var_1_42 + var_1_43) : (var_1_42 + var_1_43)))))) : (var_1_47 == ((unsigned char) var_1_40))) : 1)) && ((var_1_99 > (var_1_13 - var_1_14)) ? ((var_1_20 < var_1_37) ? (var_1_48 == ((float) ((((var_1_14) > ((var_1_20 - var_1_13))) ? (var_1_14) : ((var_1_20 - var_1_13)))))) : 1) : 1)) && ((var_1_26 <= 4) ? ((var_1_104 < var_1_13) ? (((var_1_27 * (var_1_84 / var_1_23)) <= var_1_41) ? ((((var_1_50 - var_1_41) - (32 + var_1_43)) >= var_1_44) ? (var_1_49 == ((unsigned char) (! (! var_1_32)))) : 1) : (var_1_49 == ((unsigned char) ((var_1_104 != var_1_10) || (! var_1_30))))) : (var_1_49 == ((unsigned char) (var_1_29 && (! var_1_31))))) : ((var_1_29 && (var_1_15 < (var_1_84 * var_1_101))) ? (var_1_49 == ((unsigned char) var_1_31)) : ((var_1_39 == var_1_101) ? (var_1_49 == ((unsigned char) (var_1_29 && var_1_30))) : (var_1_49 == ((unsigned char) (var_1_31 && var_1_32))))))) && (var_1_32 ? (var_1_51 == ((unsigned char) ((((((var_1_45) < (last_1_var_1_46)) ? (var_1_45) : (last_1_var_1_46))) > last_1_var_1_95) || var_1_31))) : ((last_1_var_1_80 < last_1_var_1_102) ? (var_1_51 == ((unsigned char) ((var_1_30 || var_1_53) || var_1_54))) : ((((((last_1_var_1_72) > (128)) ? (last_1_var_1_72) : (128))) >= last_1_var_1_101) ? (var_1_51 == ((unsigned char) (! var_1_31))) : (var_1_51 == ((unsigned char) (last_1_var_1_29 && var_1_54))))))) && ((var_1_30 || var_1_29) ? (var_1_55 == ((unsigned short int) (var_1_26 - var_1_34))) : (var_1_55 == ((unsigned short int) ((((var_1_42) > (var_1_34)) ? (var_1_42) : (var_1_34))))))) && (((var_1_89 * (var_1_72 - var_1_26)) < ((var_1_57 - var_1_42) - 5)) ? (var_1_56 == ((signed char) ((((((((((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) > (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))) ? (((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) : (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))))) < (-8)) ? (((((((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) > (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))) ? (((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) : (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))))) : (-8))))) : ((((((var_1_36) > (var_1_20)) ? (var_1_36) : (var_1_20))) == (var_1_77 / ((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60))))) ? (var_1_56 == ((signed char) ((((var_1_43) > ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) + var_1_63))) ? (var_1_43) : ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) + var_1_63)))))) : ((((((var_1_55) < (16)) ? (var_1_55) : (16))) > var_1_39) ? (var_1_56 == ((signed char) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) : (var_1_56 == ((signed char) ((16 + (var_1_64 + var_1_65)) - ((var_1_66 + var_1_67) + var_1_43)))))))) && ((var_1_54 && (200 <= var_1_7)) ? ((var_1_55 >= (var_1_26 - var_1_65)) ? (var_1_68 == ((signed short int) ((((var_1_67) > (var_1_64)) ? (var_1_67) : (var_1_64))))) : 1) : 1)) && (((var_1_24 + 5u) <= var_1_102) ? ((-256 != (~ var_1_102)) ? (var_1_69 == ((float) ((var_1_14 + var_1_11) + var_1_13))) : (var_1_69 == ((float) ((var_1_14 + var_1_13) - var_1_20)))) : 1)) && (var_1_70 == ((signed char) var_1_71))) && ((32.5 >= var_1_18) ? ((var_1_20 >= var_1_48) ? ((var_1_26 > var_1_47) ? (var_1_72 == ((unsigned short int) ((((((var_1_24 + var_1_73) - var_1_27)) < ((var_1_26 - var_1_64))) ? (((var_1_24 + var_1_73) - var_1_27)) : ((var_1_26 - var_1_64)))))) : (((var_1_96 / ((((var_1_24) < (var_1_23)) ? (var_1_24) : (var_1_23)))) < 1) ? (var_1_72 == ((unsigned short int) (var_1_50 + (var_1_66 + var_1_103)))) : (var_1_72 == ((unsigned short int) var_1_41)))) : (var_1_72 == ((unsigned short int) ((var_1_67 + var_1_41) + ((((var_1_73) < (var_1_74)) ? (var_1_73) : (var_1_74))))))) : (var_1_72 == ((unsigned short int) ((((((((((((var_1_41) > (var_1_65)) ? (var_1_41) : (var_1_65)))) > (var_1_39)) ? (((((var_1_41) > (var_1_65)) ? (var_1_41) : (var_1_65)))) : (var_1_39)))) > (((((var_1_67) > ((var_1_27 + var_1_23))) ? (var_1_67) : ((var_1_27 + var_1_23)))))) ? (((((((((var_1_41) > (var_1_65)) ? (var_1_41) : (var_1_65)))) > (var_1_39)) ? (((((var_1_41) > (var_1_65)) ? (var_1_41) : (var_1_65)))) : (var_1_39)))) : (((((var_1_67) > ((var_1_27 + var_1_23))) ? (var_1_67) : ((var_1_27 + var_1_23))))))))))) && (var_1_31 ? (var_1_75 == ((float) ((((((var_1_76 + var_1_37) + ((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10))))) > (64.075f)) ? (((var_1_76 + var_1_37) + ((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10))))) : (64.075f))))) : (var_1_75 == ((float) ((((((((var_1_20 - var_1_13) < 0 ) ? -(var_1_20 - var_1_13) : (var_1_20 - var_1_13)))) > (var_1_9)) ? (((((var_1_20 - var_1_13) < 0 ) ? -(var_1_20 - var_1_13) : (var_1_20 - var_1_13)))) : (var_1_9))))))) && ((var_1_76 > ((((2.5f) > (var_1_37)) ? (2.5f) : (var_1_37)))) ? (((~ var_1_27) <= ((var_1_64 - var_1_83) * var_1_45)) ? (var_1_77 == ((double) ((((var_1_12) > (((var_1_78 - var_1_14) - (var_1_79 - var_1_13)))) ? (var_1_12) : (((var_1_78 - var_1_14) - (var_1_79 - var_1_13))))))) : 1) : 1)) && ((var_1_72 >= var_1_84) ? (var_1_80 == ((unsigned long int) (var_1_81 - ((((25u) > (32u)) ? (25u) : (32u)))))) : (var_1_80 == ((unsigned long int) ((var_1_82 - ((((var_1_97) > (var_1_68)) ? (var_1_97) : (var_1_68)))) - ((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74)))))))) && ((var_1_49 || var_1_31) ? (var_1_83 == ((unsigned char) ((200 - var_1_67) - ((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66)))))) : (var_1_83 == ((unsigned char) (((((16 + var_1_65)) > (var_1_64)) ? ((16 + var_1_65)) : (var_1_64))))))) && ((var_1_95 < (var_1_102 + var_1_101)) ? (var_1_84 == ((unsigned long int) (var_1_65 + var_1_85))) : 1)) && ((1000 != (var_1_67 - var_1_50)) ? ((var_1_84 < ((var_1_71 * 8) ^ (var_1_66 << var_1_62))) ? (var_1_54 ? (var_1_86 == ((signed char) var_1_63)) : 1) : (var_1_86 == ((signed char) ((8 - var_1_65) + (var_1_64 - ((((var_1_66) > (var_1_67)) ? (var_1_66) : (var_1_67)))))))) : (var_1_86 == ((signed char) (var_1_41 - (var_1_88 - var_1_65)))))) && (((var_1_97 / var_1_50) >= (var_1_7 + var_1_1)) ? (var_1_89 == ((unsigned short int) (((((var_1_26 - var_1_88)) < ((var_1_90 - var_1_91))) ? ((var_1_26 - var_1_88)) : ((var_1_90 - var_1_91)))))) : 1)) && (var_1_29 ? (((((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))) - var_1_27) >= var_1_16) ? (var_1_91 == ((signed short int) ((((((var_1_43) < (last_1_var_1_91)) ? (var_1_43) : (last_1_var_1_91))) - var_1_65) + (((((var_1_40) > (var_1_34)) ? (var_1_40) : (var_1_34))) - var_1_42)))) : ((var_1_51 || var_1_29) ? (var_1_91 == ((signed short int) ((((var_1_5) > ((var_1_64 - var_1_25))) ? (var_1_5) : ((var_1_64 - var_1_25)))))) : ((var_1_59 <= (- var_1_104)) ? ((var_1_82 >= ((var_1_97 >> var_1_92) * (var_1_66 + var_1_96))) ? (var_1_91 == ((signed short int) ((((var_1_92) > ((var_1_67 - (var_1_64 + var_1_65)))) ? (var_1_92) : ((var_1_67 - (var_1_64 + var_1_65))))))) : ((var_1_15 > var_1_62) ? (var_1_91 == ((signed short int) ((((var_1_39) > (var_1_65)) ? (var_1_39) : (var_1_65))))) : 1)) : 1))) : ((((1.000000000000004E14 * var_1_18) * ((((var_1_76) < (49.5)) ? (var_1_76) : (49.5)))) > var_1_104) ? (var_1_91 == ((signed short int) ((((4) < 0 ) ? -(4) : (4))))) : (var_1_91 == ((signed short int) ((var_1_93 - 5) - ((((last_1_var_1_91) < 0 ) ? -(last_1_var_1_91) : (last_1_var_1_91))))))))) && ((var_1_53 || var_1_51) ? ((var_1_37 < var_1_76) ? (var_1_51 ? (var_1_53 ? (var_1_94 == ((float) (var_1_14 - (6.374538313276805E18f - var_1_13)))) : 1) : 1) : (var_1_94 == ((float) var_1_10))) : 1)) && ((var_1_79 == var_1_12) ? (var_1_95 == ((signed long int) -128)) : (var_1_95 == ((signed long int) -256)))) && (var_1_51 ? (var_1_96 == ((unsigned long int) var_1_88)) : (var_1_96 == ((unsigned long int) var_1_66)))) && (var_1_87 ? (var_1_97 == ((unsigned long int) var_1_50)) : (var_1_97 == ((unsigned long int) var_1_23)))) && (var_1_51 ? (var_1_98 == ((signed char) var_1_66)) : (var_1_98 == ((signed char) var_1_41)))) && (var_1_99 == ((double) var_1_76))) && (var_1_29 ? (var_1_100 == ((unsigned short int) var_1_25)) : 1)) && (var_1_32 ? (var_1_101 == ((unsigned long int) var_1_57)) : 1)) && (var_1_102 == ((unsigned long int) var_1_90))) && (var_1_103 == ((unsigned short int) var_1_23))) && (var_1_104 == ((float) 2.15f))) && ((var_1_46 >= var_1_26) ? (((1 * 64) <= var_1_55) ? ((var_1_97 <= var_1_74) ? (var_1_105 == ((signed short int) (16 - var_1_50))) : (var_1_105 == ((signed short int) var_1_65))) : 1) : 1)
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

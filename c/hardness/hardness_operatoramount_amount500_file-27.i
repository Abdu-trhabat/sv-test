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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch27Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_3 = 25;
signed char var_1_4 = 10;
signed char var_1_5 = -10;
signed char var_1_6 = -1;
signed char var_1_7 = 0;
signed char var_1_8 = 8;
signed char var_1_9 = 32;
signed char var_1_10 = 32;
signed char var_1_11 = 2;
signed char var_1_12 = 2;
signed char var_1_13 = 1;
signed char var_1_14 = -1;
signed long int var_1_15 = 8;
float var_1_16 = 9999999.6;
float var_1_17 = 10.6;
signed long int var_1_19 = -2;
unsigned char var_1_20 = 25;
unsigned long int var_1_21 = 50;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 25;
double var_1_30 = 99999999999999.5;
unsigned short int var_1_31 = 22776;
unsigned short int var_1_32 = 24965;
unsigned short int var_1_33 = 58312;
unsigned short int var_1_34 = 44397;
signed char var_1_35 = -5;
signed long int var_1_36 = 1703803082;
signed long int var_1_37 = 2;
signed long int var_1_38 = 5;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 2;
signed short int var_1_42 = 256;
double var_1_43 = 49.8;
double var_1_44 = 4.5;
double var_1_45 = 5.75;
signed long int var_1_46 = 50;
double var_1_47 = 0.125;
double var_1_48 = 1.75;
double var_1_49 = 0.19999999999999996;
double var_1_50 = 5.25;
double var_1_51 = 127.826;
double var_1_52 = 9999999999999.2;
float var_1_53 = 10.75;
unsigned short int var_1_54 = 5;
float var_1_55 = 32.5;
float var_1_56 = 32.75;
float var_1_57 = 15.4;
unsigned char var_1_58 = 0;
signed short int var_1_59 = -2;
unsigned char var_1_60 = 2;
unsigned short int var_1_61 = 16;
unsigned short int var_1_62 = 0;
signed char var_1_63 = -25;
signed char var_1_64 = 64;
signed char var_1_65 = 10;
signed short int var_1_66 = 64;
unsigned long int var_1_67 = 256;
float var_1_68 = 63.625;
unsigned char var_1_69 = 1;
float var_1_70 = 9999.75;
unsigned long int var_1_71 = 16;
signed long int var_1_73 = -128;
unsigned long int var_1_74 = 2;
float var_1_75 = 24.6;
float var_1_76 = 1.125;
float var_1_77 = 7.8;
float var_1_78 = 0.15;
float var_1_79 = 255.5;
float var_1_80 = 63.75;
float var_1_81 = 8.5;
float var_1_82 = 0.0;
unsigned long int var_1_83 = 32;
unsigned long int var_1_84 = 2296018032;
unsigned long int var_1_85 = 25;
unsigned long int var_1_86 = 1887349689;
unsigned long int var_1_87 = 4139252931;
unsigned long int var_1_88 = 0;
signed char var_1_90 = -4;
float var_1_91 = 100000000.25;
unsigned long int var_1_92 = 128;
unsigned long int var_1_93 = 3284232643;
unsigned char var_1_94 = 5;
unsigned char var_1_95 = 10;
signed long int var_1_96 = 1000000000;
double var_1_97 = 7.125;
unsigned char var_1_98 = 0;
double var_1_99 = 9.1;
double var_1_100 = 16.5;
signed char var_1_101 = -10;
signed long int var_1_103 = -16;
signed char var_1_104 = 5;
unsigned char var_1_105 = 5;
signed long int var_1_106 = 2;
unsigned char var_1_107 = 2;
float var_1_108 = 31.7;
unsigned short int var_1_109 = 5;
signed char var_1_110 = 64;
float var_1_111 = 127.025;
unsigned long int var_1_112 = 500;
unsigned char var_1_113 = 1;
float var_1_114 = 16.5;
unsigned short int last_1_var_1_29 = 25;
signed char last_1_var_1_63 = -25;
unsigned long int last_1_var_1_71 = 16;
unsigned long int last_1_var_1_83 = 32;
unsigned long int last_1_var_1_92 = 128;
signed long int last_1_var_1_96 = 1000000000;
signed long int last_1_var_1_103 = -16;
unsigned short int last_1_var_1_109 = 5;
unsigned char last_1_var_1_113 = 1;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_15 = last_1_var_1_92;
 if (stepLocal_15 >= ((var_1_32 * last_1_var_1_103) / ((((var_1_31) > (var_1_9)) ? (var_1_31) : (var_1_9))))) {
  var_1_71 = var_1_65;
 } else {
  var_1_71 = ((((((((var_1_64) < (last_1_var_1_71)) ? (var_1_64) : (last_1_var_1_71)))) < (var_1_34)) ? (((((var_1_64) < (last_1_var_1_71)) ? (var_1_64) : (last_1_var_1_71)))) : (var_1_34)));
 }
 if (var_1_28) {
  var_1_61 = (43790 - ((((last_1_var_1_96) < (16)) ? (last_1_var_1_96) : (16))));
 }
 signed long int stepLocal_4 = last_1_var_1_29;
 signed char stepLocal_3 = var_1_4;
 signed long int stepLocal_2 = last_1_var_1_29 * (var_1_12 / var_1_9);
 if (last_1_var_1_113) {
  var_1_22 = ((var_1_23 || var_1_24) || var_1_25);
 } else {
  if (stepLocal_4 == var_1_9) {
   if (stepLocal_3 > var_1_7) {
    if (var_1_7 > stepLocal_2) {
     var_1_22 = (var_1_27 && (! var_1_23));
    } else {
     var_1_22 = (var_1_24 && var_1_25);
    }
   } else {
    var_1_22 = ((var_1_23 || var_1_24) || var_1_25);
   }
  } else {
   var_1_22 = var_1_28;
  }
 }
 if (var_1_22) {
  var_1_111 = var_1_51;
 } else {
  var_1_111 = var_1_48;
 }
 var_1_21 = (((((((((var_1_3) < (var_1_7)) ? (var_1_3) : (var_1_7)))) > (var_1_11)) ? (((((var_1_3) < (var_1_7)) ? (var_1_3) : (var_1_7)))) : (var_1_11))) + var_1_10);
 if (((var_1_36 - var_1_34) - ((((var_1_12) > (var_1_37)) ? (var_1_12) : (var_1_37)))) < ((((var_1_10) < (var_1_32)) ? (var_1_10) : (var_1_32)))) {
  var_1_35 = (((((var_1_11) < (var_1_4)) ? (var_1_11) : (var_1_4))) - var_1_9);
 } else {
  var_1_35 = var_1_13;
 }
 signed long int stepLocal_7 = (((var_1_11) > ((- var_1_37))) ? (var_1_11) : ((- var_1_37)));
 if (stepLocal_7 != 8) {
  var_1_38 = (var_1_61 - 128);
 }
 signed long int stepLocal_8 = var_1_33 - ((((256) > (var_1_31)) ? (256) : (var_1_31)));
 if (((- var_1_36) / var_1_34) <= stepLocal_8) {
  var_1_39 = (((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + var_1_11)) > (var_1_10)) ? ((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + var_1_11)) : (var_1_10)));
 } else {
  var_1_39 = (var_1_40 - var_1_41);
 }
 var_1_42 = ((((var_1_7) < (var_1_14)) ? (var_1_7) : (var_1_14)));
 var_1_46 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
 if (31.8f > var_1_45) {
  var_1_47 = (((((var_1_48) < (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) ? (var_1_48) : (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) - ((((((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50)))) < (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))) ? (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50)))) : (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52)))))));
 }
 signed short int stepLocal_13 = var_1_42;
 if (stepLocal_13 >= var_1_54) {
  var_1_62 = ((((var_1_12) > (var_1_33)) ? (var_1_12) : (var_1_33)));
 }
 if ((var_1_16 - var_1_51) < (var_1_45 * var_1_17)) {
  var_1_67 = var_1_64;
 } else {
  var_1_67 = (((((((((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) > (var_1_7)) ? (((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) : (var_1_7))) < 0 ) ? -((((((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) > (var_1_7)) ? (((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) : (var_1_7))) : ((((((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) > (var_1_7)) ? (((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) : (var_1_7)))));
 }
 unsigned long int stepLocal_21 = 128u;
 if (stepLocal_21 != var_1_85) {
  var_1_91 = var_1_78;
 } else {
  var_1_91 = (var_1_50 - 0.4f);
 }
 if ((var_1_21 >= var_1_64) && var_1_23) {
  var_1_92 = (var_1_93 - var_1_3);
 }
 if (var_1_58) {
  if (((var_1_33 - var_1_46) << (var_1_95 - var_1_54)) < var_1_67) {
   var_1_94 = ((var_1_95 + ((((var_1_54) < (var_1_10)) ? (var_1_54) : (var_1_10)))) + 32);
  } else {
   var_1_94 = (var_1_40 - var_1_4);
  }
 }
 if (var_1_98 || var_1_69) {
  var_1_97 = (((((var_1_50 - var_1_51)) > (var_1_45)) ? ((var_1_50 - var_1_51)) : (var_1_45)));
 } else {
  var_1_97 = (((var_1_99 + var_1_100) + 1.5) - ((((127.786) > (var_1_80)) ? (127.786) : (var_1_80))));
 }
 if (var_1_24) {
  var_1_104 = var_1_5;
 } else {
  var_1_104 = var_1_6;
 }
 if (var_1_24) {
  var_1_106 = var_1_40;
 } else {
  var_1_106 = var_1_9;
 }
 if (var_1_25) {
  var_1_107 = var_1_40;
 } else {
  var_1_107 = 32;
 }
 var_1_108 = var_1_44;
 if (var_1_22) {
  var_1_110 = var_1_9;
 } else {
  var_1_110 = var_1_11;
 }
 var_1_113 = 0;
 var_1_114 = var_1_44;
 unsigned char stepLocal_6 = ((((var_1_16) < (var_1_111)) ? (var_1_16) : (var_1_111))) >= 1.75f;
 unsigned long int stepLocal_5 = var_1_67;
 if (stepLocal_6 || (var_1_13 >= var_1_106)) {
  if ((var_1_17 / ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) == (var_1_16 * var_1_111)) {
   var_1_29 = ((((var_1_7) > ((((((var_1_10 + var_1_12)) > (16)) ? ((var_1_10 + var_1_12)) : (16))))) ? (var_1_7) : ((((((var_1_10 + var_1_12)) > (16)) ? ((var_1_10 + var_1_12)) : (16))))));
  }
 } else {
  if ((var_1_12 * var_1_11) < stepLocal_5) {
   if (! var_1_22) {
    var_1_29 = ((var_1_31 + var_1_32) - var_1_9);
   } else {
    var_1_29 = ((((((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - (var_1_31 - 1)) < 0 ) ? -(((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - (var_1_31 - 1)) : (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - (var_1_31 - 1))));
   }
  }
 }
 signed long int stepLocal_0 = -16;
 if (! (! var_1_113)) {
  var_1_1 = ((((((var_1_3 - var_1_4)) > (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5))) + var_1_6);
 } else {
  if (var_1_5 > stepLocal_0) {
   var_1_1 = (var_1_6 + var_1_4);
  } else {
   var_1_1 = ((((var_1_4) > ((var_1_3 - var_1_7))) ? (var_1_4) : ((var_1_3 - var_1_7))));
  }
 }
 if (((var_1_4 * var_1_29) + ((((5) > (var_1_6)) ? (5) : (var_1_6)))) > var_1_5) {
  if (! var_1_113) {
   var_1_8 = (((var_1_9 + var_1_10) - (var_1_11 + var_1_12)) - 16);
  } else {
   var_1_8 = (var_1_5 + (((((var_1_12 + var_1_13)) < ((var_1_11 + var_1_14))) ? ((var_1_12 + var_1_13)) : ((var_1_11 + var_1_14)))));
  }
 } else {
  var_1_8 = (var_1_6 + var_1_5);
 }
 unsigned long int stepLocal_1 = var_1_92 / var_1_9;
 if (stepLocal_1 < var_1_12) {
  var_1_20 = 64;
 }
 signed char stepLocal_14 = var_1_9;
 if (var_1_28) {
  if ((var_1_52 * var_1_97) > (var_1_30 + var_1_17)) {
   var_1_63 = ((((((((-5) < (var_1_7)) ? (-5) : (var_1_7)))) > (var_1_3)) ? (((((-5) < (var_1_7)) ? (-5) : (var_1_7)))) : (var_1_3)));
  }
 } else {
  if (((((var_1_32) < (last_1_var_1_63)) ? (var_1_32) : (last_1_var_1_63))) < stepLocal_14) {
   var_1_63 = ((16 - (var_1_54 + 4)) + var_1_9);
  } else {
   var_1_63 = ((var_1_64 - ((((var_1_54) < (16)) ? (var_1_54) : (16)))) - var_1_65);
  }
 }
 var_1_73 = (var_1_46 + ((var_1_12 - var_1_10) + var_1_8));
 if ((var_1_36 - 128) <= (var_1_41 - var_1_73)) {
  if ((var_1_8 + 1000) == -256) {
   var_1_74 = (25u + (((((1231555384u) > (var_1_36)) ? (1231555384u) : (var_1_36))) - (var_1_46 + var_1_31)));
  }
 }
 if (var_1_28) {
  var_1_90 = var_1_64;
 } else {
  if (var_1_114 < var_1_16) {
   var_1_90 = ((((var_1_5) > ((var_1_4 - var_1_7))) ? (var_1_5) : ((var_1_4 - var_1_7))));
  } else {
   var_1_90 = ((var_1_10 + var_1_4) - var_1_7);
  }
 }
 if (var_1_113) {
  var_1_105 = var_1_7;
 } else {
  var_1_105 = var_1_4;
 }
 if (var_1_113) {
  var_1_109 = last_1_var_1_109;
 } else {
  var_1_109 = 128;
 }
 unsigned long int stepLocal_22 = var_1_87;
 if (stepLocal_22 != (var_1_31 + var_1_34)) {
  var_1_96 = ((((var_1_40) > (var_1_109)) ? (var_1_40) : (var_1_109)));
 } else {
  var_1_96 = (var_1_61 + var_1_31);
 }
 if (var_1_42 <= (var_1_96 >> var_1_54)) {
  if (var_1_28) {
   var_1_53 = (var_1_55 + (var_1_56 + var_1_57));
  } else {
   if (var_1_6 >= (var_1_5 & (var_1_11 ^ 0))) {
    if (((((var_1_32) > ((var_1_13 / var_1_40))) ? (var_1_32) : ((var_1_13 / var_1_40)))) > ((var_1_61 / var_1_9) ^ (var_1_54 << 1))) {
     var_1_53 = ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)));
    } else {
     var_1_53 = (((((var_1_52 - var_1_49)) < (var_1_55)) ? ((var_1_52 - var_1_49)) : (var_1_55)));
    }
   }
  }
 }
 if (var_1_113 && (var_1_113 || var_1_23)) {
  if (var_1_50 <= var_1_57) {
   var_1_68 = ((((var_1_55) > (((((var_1_50) < (var_1_56)) ? (var_1_50) : (var_1_56))))) ? (var_1_55) : (((((var_1_50) < (var_1_56)) ? (var_1_50) : (var_1_56))))));
  } else {
   var_1_68 = (((((var_1_70 - var_1_52)) > (((((((((var_1_48) < (7.6f)) ? (var_1_48) : (7.6f)))) > (var_1_44)) ? (((((var_1_48) < (7.6f)) ? (var_1_48) : (7.6f)))) : (var_1_44))))) ? ((var_1_70 - var_1_52)) : (((((((((var_1_48) < (7.6f)) ? (var_1_48) : (7.6f)))) > (var_1_44)) ? (((((var_1_48) < (7.6f)) ? (var_1_48) : (7.6f)))) : (var_1_44))))));
  }
 } else {
  if (var_1_47 > (var_1_53 / var_1_30)) {
   var_1_68 = (((((var_1_48) > (var_1_70)) ? (var_1_48) : (var_1_70))) - ((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))));
  } else {
   var_1_68 = (((((var_1_52 - var_1_51)) < (((((var_1_55) < (var_1_56)) ? (var_1_55) : (var_1_56))))) ? ((var_1_52 - var_1_51)) : (((((var_1_55) < (var_1_56)) ? (var_1_55) : (var_1_56))))));
  }
 }
 signed long int stepLocal_17 = 500;
 signed char stepLocal_16 = var_1_12;
 if (var_1_24) {
  var_1_76 = (var_1_49 - var_1_48);
 } else {
  if (stepLocal_17 <= var_1_96) {
   if (stepLocal_16 >= (var_1_21 + var_1_96)) {
    var_1_76 = (var_1_48 - var_1_70);
   }
  }
 }
 if (var_1_27) {
  var_1_88 = ((((var_1_92 + var_1_10) < 0 ) ? -(var_1_92 + var_1_10) : (var_1_92 + var_1_10)));
 } else {
  if (var_1_105 <= var_1_32) {
   if (var_1_113) {
    var_1_88 = var_1_7;
   } else {
    var_1_88 = (((((var_1_87 - var_1_10) - var_1_92) < 0 ) ? -((var_1_87 - var_1_10) - var_1_92) : ((var_1_87 - var_1_10) - var_1_92)));
   }
  } else {
   var_1_88 = ((var_1_86 - var_1_41) + var_1_40);
  }
 }
 signed long int stepLocal_25 = var_1_38 * var_1_65;
 if ((var_1_11 - var_1_4) < stepLocal_25) {
  var_1_112 = (((((var_1_93) > (var_1_87)) ? (var_1_93) : (var_1_87))) - (var_1_96 + var_1_40));
 }
 unsigned long int stepLocal_20 = var_1_71;
 unsigned long int stepLocal_19 = var_1_10 * (2495153404u - var_1_40);
 signed char stepLocal_18 = var_1_12;
 if ((var_1_76 + var_1_70) <= var_1_45) {
  if (var_1_113) {
   if (stepLocal_18 < (var_1_38 / var_1_9)) {
    var_1_77 = ((var_1_78 + var_1_79) - (var_1_80 + var_1_81));
   } else {
    var_1_77 = ((var_1_82 - var_1_78) - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))));
   }
  } else {
   var_1_77 = (var_1_52 - (var_1_82 - ((((var_1_79) < (var_1_80)) ? (var_1_79) : (var_1_80)))));
  }
 } else {
  if (stepLocal_20 >= (var_1_41 >> var_1_54)) {
   var_1_77 = ((((var_1_80 + var_1_81) < 0 ) ? -(var_1_80 + var_1_81) : (var_1_80 + var_1_81)));
  } else {
   if (var_1_74 < stepLocal_19) {
    var_1_77 = ((((var_1_48) > (var_1_79)) ? (var_1_48) : (var_1_79)));
   } else {
    var_1_77 = (3.75f + var_1_56);
   }
  }
 }
 if (! (var_1_10 == var_1_11)) {
  if (var_1_77 > var_1_108) {
   var_1_83 = (var_1_84 - (var_1_36 - ((((var_1_85) > (32u)) ? (var_1_85) : (32u)))));
  }
 } else {
  if (var_1_31 >= var_1_109) {
   var_1_83 = ((var_1_36 + (var_1_86 - 32u)) - (var_1_38 + last_1_var_1_83));
  } else {
   if (var_1_10 == var_1_105) {
    var_1_83 = (((var_1_87 - var_1_33) - var_1_38) - var_1_54);
   } else {
    var_1_83 = var_1_37;
   }
  }
 }
 if (var_1_27) {
  var_1_103 = var_1_61;
 } else {
  var_1_103 = var_1_83;
 }
 if ((var_1_16 - var_1_17) != var_1_77) {
  if (var_1_22) {
   var_1_15 = ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19)));
  } else {
   var_1_15 = ((((((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_4) < 0 ) ? -(((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_4) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_4)));
  }
 } else {
  var_1_15 = 1;
 }
 signed char stepLocal_11 = var_1_14;
 signed long int stepLocal_10 = var_1_36;
 unsigned long int stepLocal_9 = (((var_1_83) < 0 ) ? -(var_1_83) : (var_1_83));
 if (stepLocal_9 > ((var_1_12 << var_1_14) & var_1_36)) {
  if ((~ (25 - var_1_9)) != stepLocal_10) {
   var_1_43 = var_1_44;
  }
 } else {
  if (var_1_5 <= stepLocal_11) {
   var_1_43 = ((((var_1_44) < (var_1_45)) ? (var_1_44) : (var_1_45)));
  }
 }
 if ((var_1_36 / var_1_10) < var_1_31) {
  if (var_1_96 >= (8 << var_1_92)) {
   if ((var_1_49 - var_1_48) >= ((var_1_52 / var_1_30) + var_1_43)) {
    var_1_59 = (64 - ((((((((var_1_7) < (var_1_88)) ? (var_1_7) : (var_1_88)))) < (64)) ? (((((var_1_7) < (var_1_88)) ? (var_1_7) : (var_1_88)))) : (64))));
   } else {
    var_1_59 = (var_1_5 + var_1_11);
   }
  }
 }
 unsigned long int stepLocal_12 = ~ (var_1_103 + var_1_74);
 if (var_1_15 == stepLocal_12) {
  if (var_1_16 == ((((-0.5f) > (24.8f)) ? (-0.5f) : (24.8f)))) {
   var_1_60 = ((((2) < (var_1_40)) ? (2) : (var_1_40)));
  } else {
   var_1_60 = var_1_40;
  }
 }
 if (var_1_3 <= var_1_15) {
  var_1_75 = (31.4f - var_1_70);
 } else {
  if (var_1_22) {
   var_1_75 = ((((var_1_57) > ((((((var_1_48 - var_1_51)) < (var_1_70)) ? ((var_1_48 - var_1_51)) : (var_1_70))))) ? (var_1_57) : ((((((var_1_48 - var_1_51)) < (var_1_70)) ? ((var_1_48 - var_1_51)) : (var_1_70))))));
  }
 }
 unsigned short int stepLocal_24 = var_1_54;
 signed long int stepLocal_23 = var_1_15 / var_1_64;
 if (! var_1_27) {
  if (stepLocal_23 == (var_1_34 & 32)) {
   var_1_101 = (var_1_12 - var_1_64);
  } else {
   if ((((((var_1_41) > (10)) ? (var_1_41) : (10))) >> var_1_95) <= stepLocal_24) {
    var_1_101 = (var_1_3 - (var_1_12 + ((((4) < (var_1_11)) ? (4) : (var_1_11)))));
   }
  }
 } else {
  if (var_1_30 > (var_1_79 * 499.2)) {
   if ((var_1_100 / var_1_30) < var_1_43) {
    var_1_101 = var_1_13;
   }
  } else {
   var_1_101 = var_1_10;
  }
 }
 if (var_1_75 >= var_1_57) {
  var_1_66 = var_1_20;
 } else {
  if ((var_1_19 ^ var_1_33) <= var_1_92) {
   if (var_1_83 >= var_1_6) {
    var_1_66 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
   } else {
    var_1_66 = ((((var_1_13) < (10)) ? (var_1_13) : (10)));
   }
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 31);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 31);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 31);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -31);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -31);
 assume_abort_if_not(var_1_14 <= 31);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483647);
 assume_abort_if_not(var_1_19 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 assume_abort_if_not(var_1_30 != 0.0F);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 16383);
 assume_abort_if_not(var_1_31 <= 32767);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 16384);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 32767);
 assume_abort_if_not(var_1_33 <= 65534);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 32767);
 assume_abort_if_not(var_1_34 <= 65534);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= 1073741823);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 127);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 7);
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -461168.6018427383000e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -230584.3009213691400e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= -230584.3009213691400e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 1);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 62);
 assume_abort_if_not(var_1_64 <= 126);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 126);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 1);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854766000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427383000e+12F && var_1_78 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427383000e+12F && var_1_79 >= 1.0e-20F ));
 var_1_80 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 4611686.018427383000e+12F && var_1_80 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427383000e+12F && var_1_81 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_82 >= 4611686.018427383000e+12F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854766000e+12F && var_1_82 >= 1.0e-20F ));
 var_1_84 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_84 >= 2147483647);
 assume_abort_if_not(var_1_84 <= 4294967294);
 var_1_85 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 1073741823);
 var_1_86 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_86 >= 1610612735);
 assume_abort_if_not(var_1_86 <= 2147483647);
 var_1_87 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_87 >= 3758096382);
 assume_abort_if_not(var_1_87 <= 4294967294);
 var_1_93 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_93 >= 2147483647);
 assume_abort_if_not(var_1_93 <= 4294967294);
 var_1_95 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_95 >= 7);
 assume_abort_if_not(var_1_95 <= 15);
 var_1_98 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_98 >= 0);
 assume_abort_if_not(var_1_98 <= 1);
 var_1_99 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_99 >= 0.0F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 2305843.009213691400e+12F && var_1_99 >= 1.0e-20F ));
 var_1_100 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_100 >= 0.0F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 2305843.009213691400e+12F && var_1_100 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_29 = var_1_29;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_83 = var_1_83;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_103 = var_1_103;
 last_1_var_1_109 = var_1_109;
 last_1_var_1_113 = var_1_113;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((! (! var_1_113)) ? (var_1_1 == ((signed char) ((((((var_1_3 - var_1_4)) > (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5))) + var_1_6))) : ((var_1_5 > -16) ? (var_1_1 == ((signed char) (var_1_6 + var_1_4))) : (var_1_1 == ((signed char) ((((var_1_4) > ((var_1_3 - var_1_7))) ? (var_1_4) : ((var_1_3 - var_1_7)))))))) && ((((var_1_4 * var_1_29) + ((((5) > (var_1_6)) ? (5) : (var_1_6)))) > var_1_5) ? ((! var_1_113) ? (var_1_8 == ((signed char) (((var_1_9 + var_1_10) - (var_1_11 + var_1_12)) - 16))) : (var_1_8 == ((signed char) (var_1_5 + (((((var_1_12 + var_1_13)) < ((var_1_11 + var_1_14))) ? ((var_1_12 + var_1_13)) : ((var_1_11 + var_1_14)))))))) : (var_1_8 == ((signed char) (var_1_6 + var_1_5))))) && (((var_1_16 - var_1_17) != var_1_77) ? (var_1_22 ? (var_1_15 == ((signed long int) ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19))))) : (var_1_15 == ((signed long int) ((((((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_4) < 0 ) ? -(((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_4) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_4)))))) : (var_1_15 == ((signed long int) 1)))) && (((var_1_92 / var_1_9) < var_1_12) ? (var_1_20 == ((unsigned char) 64)) : 1)) && (var_1_21 == ((unsigned long int) (((((((((var_1_3) < (var_1_7)) ? (var_1_3) : (var_1_7)))) > (var_1_11)) ? (((((var_1_3) < (var_1_7)) ? (var_1_3) : (var_1_7)))) : (var_1_11))) + var_1_10)))) && (last_1_var_1_113 ? (var_1_22 == ((unsigned char) ((var_1_23 || var_1_24) || var_1_25))) : ((last_1_var_1_29 == var_1_9) ? ((var_1_4 > var_1_7) ? ((var_1_7 > (last_1_var_1_29 * (var_1_12 / var_1_9))) ? (var_1_22 == ((unsigned char) (var_1_27 && (! var_1_23)))) : (var_1_22 == ((unsigned char) (var_1_24 && var_1_25)))) : (var_1_22 == ((unsigned char) ((var_1_23 || var_1_24) || var_1_25)))) : (var_1_22 == ((unsigned char) var_1_28))))) && (((((((var_1_16) < (var_1_111)) ? (var_1_16) : (var_1_111))) >= 1.75f) || (var_1_13 >= var_1_106)) ? (((var_1_17 / ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) == (var_1_16 * var_1_111)) ? (var_1_29 == ((unsigned short int) ((((var_1_7) > ((((((var_1_10 + var_1_12)) > (16)) ? ((var_1_10 + var_1_12)) : (16))))) ? (var_1_7) : ((((((var_1_10 + var_1_12)) > (16)) ? ((var_1_10 + var_1_12)) : (16)))))))) : 1) : (((var_1_12 * var_1_11) < var_1_67) ? ((! var_1_22) ? (var_1_29 == ((unsigned short int) ((var_1_31 + var_1_32) - var_1_9))) : (var_1_29 == ((unsigned short int) ((((((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - (var_1_31 - 1)) < 0 ) ? -(((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - (var_1_31 - 1)) : (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - (var_1_31 - 1))))))) : 1))) && ((((var_1_36 - var_1_34) - ((((var_1_12) > (var_1_37)) ? (var_1_12) : (var_1_37)))) < ((((var_1_10) < (var_1_32)) ? (var_1_10) : (var_1_32)))) ? (var_1_35 == ((signed char) (((((var_1_11) < (var_1_4)) ? (var_1_11) : (var_1_4))) - var_1_9))) : (var_1_35 == ((signed char) var_1_13)))) && ((((((var_1_11) > ((- var_1_37))) ? (var_1_11) : ((- var_1_37)))) != 8) ? (var_1_38 == ((signed long int) (var_1_61 - 128))) : 1)) && ((((- var_1_36) / var_1_34) <= (var_1_33 - ((((256) > (var_1_31)) ? (256) : (var_1_31))))) ? (var_1_39 == ((unsigned char) (((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + var_1_11)) > (var_1_10)) ? ((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + var_1_11)) : (var_1_10))))) : (var_1_39 == ((unsigned char) (var_1_40 - var_1_41))))) && (var_1_42 == ((signed short int) ((((var_1_7) < (var_1_14)) ? (var_1_7) : (var_1_14)))))) && ((((((var_1_83) < 0 ) ? -(var_1_83) : (var_1_83))) > ((var_1_12 << var_1_14) & var_1_36)) ? (((~ (25 - var_1_9)) != var_1_36) ? (var_1_43 == ((double) var_1_44)) : 1) : ((var_1_5 <= var_1_14) ? (var_1_43 == ((double) ((((var_1_44) < (var_1_45)) ? (var_1_44) : (var_1_45))))) : 1))) && (var_1_46 == ((signed long int) ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) && ((31.8f > var_1_45) ? (var_1_47 == ((double) (((((var_1_48) < (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) ? (var_1_48) : (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) - ((((((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50)))) < (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))) ? (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50)))) : (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))))))) : 1)) && ((var_1_42 <= (var_1_96 >> var_1_54)) ? (var_1_28 ? (var_1_53 == ((float) (var_1_55 + (var_1_56 + var_1_57)))) : ((var_1_6 >= (var_1_5 & (var_1_11 ^ 0))) ? ((((((var_1_32) > ((var_1_13 / var_1_40))) ? (var_1_32) : ((var_1_13 / var_1_40)))) > ((var_1_61 / var_1_9) ^ (var_1_54 << 1))) ? (var_1_53 == ((float) ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))))) : (var_1_53 == ((float) (((((var_1_52 - var_1_49)) < (var_1_55)) ? ((var_1_52 - var_1_49)) : (var_1_55)))))) : 1)) : 1)) && (((var_1_36 / var_1_10) < var_1_31) ? ((var_1_96 >= (8 << var_1_92)) ? (((var_1_49 - var_1_48) >= ((var_1_52 / var_1_30) + var_1_43)) ? (var_1_59 == ((signed short int) (64 - ((((((((var_1_7) < (var_1_88)) ? (var_1_7) : (var_1_88)))) < (64)) ? (((((var_1_7) < (var_1_88)) ? (var_1_7) : (var_1_88)))) : (64)))))) : (var_1_59 == ((signed short int) (var_1_5 + var_1_11)))) : 1) : 1)) && ((var_1_15 == (~ (var_1_103 + var_1_74))) ? ((var_1_16 == ((((-0.5f) > (24.8f)) ? (-0.5f) : (24.8f)))) ? (var_1_60 == ((unsigned char) ((((2) < (var_1_40)) ? (2) : (var_1_40))))) : (var_1_60 == ((unsigned char) var_1_40))) : 1)) && (var_1_28 ? (var_1_61 == ((unsigned short int) (43790 - ((((last_1_var_1_96) < (16)) ? (last_1_var_1_96) : (16)))))) : 1)) && ((var_1_42 >= var_1_54) ? (var_1_62 == ((unsigned short int) ((((var_1_12) > (var_1_33)) ? (var_1_12) : (var_1_33))))) : 1)) && (var_1_28 ? (((var_1_52 * var_1_97) > (var_1_30 + var_1_17)) ? (var_1_63 == ((signed char) ((((((((-5) < (var_1_7)) ? (-5) : (var_1_7)))) > (var_1_3)) ? (((((-5) < (var_1_7)) ? (-5) : (var_1_7)))) : (var_1_3))))) : 1) : ((((((var_1_32) < (last_1_var_1_63)) ? (var_1_32) : (last_1_var_1_63))) < var_1_9) ? (var_1_63 == ((signed char) ((16 - (var_1_54 + 4)) + var_1_9))) : (var_1_63 == ((signed char) ((var_1_64 - ((((var_1_54) < (16)) ? (var_1_54) : (16)))) - var_1_65)))))) && ((var_1_75 >= var_1_57) ? (var_1_66 == ((signed short int) var_1_20)) : (((var_1_19 ^ var_1_33) <= var_1_92) ? ((var_1_83 >= var_1_6) ? (var_1_66 == ((signed short int) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) : (var_1_66 == ((signed short int) ((((var_1_13) < (10)) ? (var_1_13) : (10)))))) : 1))) && (((var_1_16 - var_1_51) < (var_1_45 * var_1_17)) ? (var_1_67 == ((unsigned long int) var_1_64)) : (var_1_67 == ((unsigned long int) (((((((((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) > (var_1_7)) ? (((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) : (var_1_7))) < 0 ) ? -((((((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) > (var_1_7)) ? (((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) : (var_1_7))) : ((((((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) > (var_1_7)) ? (((((256u) < (var_1_54)) ? (256u) : (var_1_54)))) : (var_1_7))))))))) && ((var_1_113 && (var_1_113 || var_1_23)) ? ((var_1_50 <= var_1_57) ? (var_1_68 == ((float) ((((var_1_55) > (((((var_1_50) < (var_1_56)) ? (var_1_50) : (var_1_56))))) ? (var_1_55) : (((((var_1_50) < (var_1_56)) ? (var_1_50) : (var_1_56)))))))) : (var_1_68 == ((float) (((((var_1_70 - var_1_52)) > (((((((((var_1_48) < (7.6f)) ? (var_1_48) : (7.6f)))) > (var_1_44)) ? (((((var_1_48) < (7.6f)) ? (var_1_48) : (7.6f)))) : (var_1_44))))) ? ((var_1_70 - var_1_52)) : (((((((((var_1_48) < (7.6f)) ? (var_1_48) : (7.6f)))) > (var_1_44)) ? (((((var_1_48) < (7.6f)) ? (var_1_48) : (7.6f)))) : (var_1_44))))))))) : ((var_1_47 > (var_1_53 / var_1_30)) ? (var_1_68 == ((float) (((((var_1_48) > (var_1_70)) ? (var_1_48) : (var_1_70))) - ((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50)))))) : (var_1_68 == ((float) (((((var_1_52 - var_1_51)) < (((((var_1_55) < (var_1_56)) ? (var_1_55) : (var_1_56))))) ? ((var_1_52 - var_1_51)) : (((((var_1_55) < (var_1_56)) ? (var_1_55) : (var_1_56))))))))))) && ((last_1_var_1_92 >= ((var_1_32 * last_1_var_1_103) / ((((var_1_31) > (var_1_9)) ? (var_1_31) : (var_1_9))))) ? (var_1_71 == ((unsigned long int) var_1_65)) : (var_1_71 == ((unsigned long int) ((((((((var_1_64) < (last_1_var_1_71)) ? (var_1_64) : (last_1_var_1_71)))) < (var_1_34)) ? (((((var_1_64) < (last_1_var_1_71)) ? (var_1_64) : (last_1_var_1_71)))) : (var_1_34))))))) && (var_1_73 == ((signed long int) (var_1_46 + ((var_1_12 - var_1_10) + var_1_8))))) && (((var_1_36 - 128) <= (var_1_41 - var_1_73)) ? (((var_1_8 + 1000) == -256) ? (var_1_74 == ((unsigned long int) (25u + (((((1231555384u) > (var_1_36)) ? (1231555384u) : (var_1_36))) - (var_1_46 + var_1_31))))) : 1) : 1)) && ((var_1_3 <= var_1_15) ? (var_1_75 == ((float) (31.4f - var_1_70))) : (var_1_22 ? (var_1_75 == ((float) ((((var_1_57) > ((((((var_1_48 - var_1_51)) < (var_1_70)) ? ((var_1_48 - var_1_51)) : (var_1_70))))) ? (var_1_57) : ((((((var_1_48 - var_1_51)) < (var_1_70)) ? ((var_1_48 - var_1_51)) : (var_1_70)))))))) : 1))) && (var_1_24 ? (var_1_76 == ((float) (var_1_49 - var_1_48))) : ((500 <= var_1_96) ? ((var_1_12 >= (var_1_21 + var_1_96)) ? (var_1_76 == ((float) (var_1_48 - var_1_70))) : 1) : 1))) && (((var_1_76 + var_1_70) <= var_1_45) ? (var_1_113 ? ((var_1_12 < (var_1_38 / var_1_9)) ? (var_1_77 == ((float) ((var_1_78 + var_1_79) - (var_1_80 + var_1_81)))) : (var_1_77 == ((float) ((var_1_82 - var_1_78) - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))))) : (var_1_77 == ((float) (var_1_52 - (var_1_82 - ((((var_1_79) < (var_1_80)) ? (var_1_79) : (var_1_80)))))))) : ((var_1_71 >= (var_1_41 >> var_1_54)) ? (var_1_77 == ((float) ((((var_1_80 + var_1_81) < 0 ) ? -(var_1_80 + var_1_81) : (var_1_80 + var_1_81))))) : ((var_1_74 < (var_1_10 * (2495153404u - var_1_40))) ? (var_1_77 == ((float) ((((var_1_48) > (var_1_79)) ? (var_1_48) : (var_1_79))))) : (var_1_77 == ((float) (3.75f + var_1_56))))))) && ((! (var_1_10 == var_1_11)) ? ((var_1_77 > var_1_108) ? (var_1_83 == ((unsigned long int) (var_1_84 - (var_1_36 - ((((var_1_85) > (32u)) ? (var_1_85) : (32u))))))) : 1) : ((var_1_31 >= var_1_109) ? (var_1_83 == ((unsigned long int) ((var_1_36 + (var_1_86 - 32u)) - (var_1_38 + last_1_var_1_83)))) : ((var_1_10 == var_1_105) ? (var_1_83 == ((unsigned long int) (((var_1_87 - var_1_33) - var_1_38) - var_1_54))) : (var_1_83 == ((unsigned long int) var_1_37)))))) && (var_1_27 ? (var_1_88 == ((unsigned long int) ((((var_1_92 + var_1_10) < 0 ) ? -(var_1_92 + var_1_10) : (var_1_92 + var_1_10))))) : ((var_1_105 <= var_1_32) ? (var_1_113 ? (var_1_88 == ((unsigned long int) var_1_7)) : (var_1_88 == ((unsigned long int) (((((var_1_87 - var_1_10) - var_1_92) < 0 ) ? -((var_1_87 - var_1_10) - var_1_92) : ((var_1_87 - var_1_10) - var_1_92)))))) : (var_1_88 == ((unsigned long int) ((var_1_86 - var_1_41) + var_1_40)))))) && (var_1_28 ? (var_1_90 == ((signed char) var_1_64)) : ((var_1_114 < var_1_16) ? (var_1_90 == ((signed char) ((((var_1_5) > ((var_1_4 - var_1_7))) ? (var_1_5) : ((var_1_4 - var_1_7)))))) : (var_1_90 == ((signed char) ((var_1_10 + var_1_4) - var_1_7)))))) && ((128u != var_1_85) ? (var_1_91 == ((float) var_1_78)) : (var_1_91 == ((float) (var_1_50 - 0.4f))))) && (((var_1_21 >= var_1_64) && var_1_23) ? (var_1_92 == ((unsigned long int) (var_1_93 - var_1_3))) : 1)) && (var_1_58 ? ((((var_1_33 - var_1_46) << (var_1_95 - var_1_54)) < var_1_67) ? (var_1_94 == ((unsigned char) ((var_1_95 + ((((var_1_54) < (var_1_10)) ? (var_1_54) : (var_1_10)))) + 32))) : (var_1_94 == ((unsigned char) (var_1_40 - var_1_4)))) : 1)) && ((var_1_87 != (var_1_31 + var_1_34)) ? (var_1_96 == ((signed long int) ((((var_1_40) > (var_1_109)) ? (var_1_40) : (var_1_109))))) : (var_1_96 == ((signed long int) (var_1_61 + var_1_31))))) && ((var_1_98 || var_1_69) ? (var_1_97 == ((double) (((((var_1_50 - var_1_51)) > (var_1_45)) ? ((var_1_50 - var_1_51)) : (var_1_45))))) : (var_1_97 == ((double) (((var_1_99 + var_1_100) + 1.5) - ((((127.786) > (var_1_80)) ? (127.786) : (var_1_80)))))))) && ((! var_1_27) ? (((var_1_15 / var_1_64) == (var_1_34 & 32)) ? (var_1_101 == ((signed char) (var_1_12 - var_1_64))) : (((((((var_1_41) > (10)) ? (var_1_41) : (10))) >> var_1_95) <= var_1_54) ? (var_1_101 == ((signed char) (var_1_3 - (var_1_12 + ((((4) < (var_1_11)) ? (4) : (var_1_11))))))) : 1)) : ((var_1_30 > (var_1_79 * 499.2)) ? (((var_1_100 / var_1_30) < var_1_43) ? (var_1_101 == ((signed char) var_1_13)) : 1) : (var_1_101 == ((signed char) var_1_10))))) && (var_1_27 ? (var_1_103 == ((signed long int) var_1_61)) : (var_1_103 == ((signed long int) var_1_83)))) && (var_1_24 ? (var_1_104 == ((signed char) var_1_5)) : (var_1_104 == ((signed char) var_1_6)))) && (var_1_113 ? (var_1_105 == ((unsigned char) var_1_7)) : (var_1_105 == ((unsigned char) var_1_4)))) && (var_1_24 ? (var_1_106 == ((signed long int) var_1_40)) : (var_1_106 == ((signed long int) var_1_9)))) && (var_1_25 ? (var_1_107 == ((unsigned char) var_1_40)) : (var_1_107 == ((unsigned char) 32)))) && (var_1_108 == ((float) var_1_44))) && (var_1_113 ? (var_1_109 == ((unsigned short int) last_1_var_1_109)) : (var_1_109 == ((unsigned short int) 128)))) && (var_1_22 ? (var_1_110 == ((signed char) var_1_9)) : (var_1_110 == ((signed char) var_1_11)))) && (var_1_22 ? (var_1_111 == ((float) var_1_51)) : (var_1_111 == ((float) var_1_48)))) && (((var_1_11 - var_1_4) < (var_1_38 * var_1_65)) ? (var_1_112 == ((unsigned long int) (((((var_1_93) > (var_1_87)) ? (var_1_93) : (var_1_87))) - (var_1_96 + var_1_40)))) : 1)) && (var_1_113 == ((unsigned char) 0))) && (var_1_114 == ((float) var_1_44))
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

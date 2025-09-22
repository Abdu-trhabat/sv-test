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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 2;
signed char var_1_3 = 10;
signed char var_1_4 = 64;
signed char var_1_5 = 5;
signed long int var_1_7 = 5;
signed long int var_1_8 = -10;
signed long int var_1_9 = -4;
double var_1_10 = 15.8;
double var_1_11 = 4.875;
double var_1_13 = 0.75;
signed long int var_1_14 = 1574757398;
double var_1_15 = 16.8;
double var_1_16 = 4.875;
double var_1_17 = 0.3;
signed short int var_1_18 = 128;
signed short int var_1_19 = 50;
signed short int var_1_20 = 17137;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 40227;
double var_1_23 = 127.2;
double var_1_25 = 16.9;
double var_1_26 = 8.2;
double var_1_27 = 256.5;
double var_1_28 = 0.0;
double var_1_29 = 64.75;
double var_1_30 = 0.0;
signed char var_1_31 = -5;
signed char var_1_32 = 0;
signed char var_1_33 = 32;
signed char var_1_34 = 8;
signed char var_1_35 = 4;
float var_1_36 = 999999999.2;
float var_1_37 = 0.0;
double var_1_38 = 0.0;
unsigned long int var_1_39 = 25;
unsigned long int var_1_40 = 3418746940;
unsigned long int var_1_41 = 3623996685;
unsigned long int var_1_42 = 1839827877;
signed long int var_1_43 = 128;
signed long int var_1_45 = 1756759270;
unsigned long int var_1_46 = 200;
unsigned short int var_1_47 = 256;
unsigned short int var_1_48 = 4;
unsigned short int var_1_49 = 54323;
unsigned short int var_1_50 = 63950;
unsigned long int var_1_51 = 2;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 1;
signed long int var_1_56 = 0;
unsigned char var_1_57 = 4;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 32;
unsigned char var_1_61 = 1;
signed long int var_1_62 = 10;
unsigned char var_1_63 = 128;
float var_1_64 = 100.75;
signed char var_1_65 = -8;
signed long int var_1_66 = 2;
unsigned long int var_1_67 = 1;
unsigned short int var_1_69 = 0;
signed char var_1_70 = 32;
signed char var_1_71 = -10;
unsigned char var_1_72 = 32;
unsigned char var_1_73 = 5;
float var_1_74 = 64.4;
unsigned char var_1_75 = 2;
signed char var_1_77 = 8;
signed char var_1_78 = 2;
unsigned char var_1_79 = 64;
signed char var_1_80 = 2;
unsigned char var_1_81 = 0;
signed char var_1_82 = -10;
unsigned char var_1_83 = 0;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 100;
unsigned char var_1_87 = 64;
double var_1_88 = 8.75;
unsigned char var_1_89 = 5;
double var_1_90 = 63.5;
double var_1_91 = 3.125;
signed char var_1_92 = 5;
unsigned short int var_1_93 = 5;
unsigned char var_1_94 = 0;
unsigned short int var_1_95 = 5;
double var_1_96 = 31.5;
unsigned long int var_1_97 = 0;
signed long int var_1_98 = 4;
unsigned char var_1_100 = 1;
unsigned short int var_1_101 = 10000;
unsigned short int var_1_102 = 16;
float var_1_103 = 50.8;
signed long int var_1_104 = -100;
double var_1_105 = 50.62;
float var_1_106 = 1.95;
unsigned long int var_1_107 = 16;
double last_1_var_1_15 = 16.8;
unsigned long int last_1_var_1_46 = 200;
double last_1_var_1_88 = 8.75;
unsigned char last_1_var_1_100 = 1;
unsigned short int last_1_var_1_102 = 16;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_26 = var_1_13 != var_1_37;
 if (((var_1_49 & var_1_51) == ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) || stepLocal_26) {
  if (var_1_17 >= last_1_var_1_15) {
   var_1_81 = (! (! var_1_53));
  } else {
   var_1_81 = (((var_1_50 + var_1_8) != last_1_var_1_102) && var_1_53);
  }
 }
 if (var_1_81) {
  var_1_102 = var_1_20;
 }
 signed long int stepLocal_1 = var_1_3 - (var_1_4 - var_1_5);
 unsigned long int stepLocal_0 = (((var_1_5) > (((((last_1_var_1_46) > (var_1_7)) ? (last_1_var_1_46) : (var_1_7))))) ? (var_1_5) : (((((last_1_var_1_46) > (var_1_7)) ? (last_1_var_1_46) : (var_1_7)))));
 if (last_1_var_1_100) {
  if (stepLocal_1 >= (500 * last_1_var_1_46)) {
   var_1_1 = (((((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) < ((var_1_5 - var_1_7))) ? (((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) : ((var_1_5 - var_1_7)))) + var_1_8);
  }
 } else {
  if (stepLocal_0 <= (~ (1 / -8))) {
   var_1_1 = (var_1_7 - var_1_4);
  } else {
   var_1_1 = var_1_5;
  }
 }
 var_1_15 = (var_1_16 + ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))));
 signed long int stepLocal_13 = var_1_56 >> var_1_57;
 unsigned char stepLocal_12 = var_1_55;
 if (var_1_81) {
  var_1_52 = (var_1_53 || var_1_54);
 } else {
  if (! (var_1_45 > (~ var_1_19))) {
   var_1_52 = (var_1_81 || var_1_55);
  } else {
   if (var_1_8 < stepLocal_13) {
    var_1_52 = (var_1_81 && var_1_53);
   } else {
    if ((var_1_14 < ((((var_1_4) < (var_1_20)) ? (var_1_4) : (var_1_20)))) || stepLocal_12) {
     var_1_52 = (var_1_55 || (var_1_58 && (var_1_81 || var_1_59)));
    }
   }
  }
 }
 unsigned long int stepLocal_17 = (var_1_50 >> var_1_62) * var_1_51;
 if (stepLocal_17 > ((((var_1_20) < (var_1_45)) ? (var_1_20) : (var_1_45)))) {
  var_1_61 = (((((var_1_63 - var_1_62)) > ((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_4))) ? ((var_1_63 - var_1_62)) : ((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_4))));
 } else {
  if ((- var_1_27) > (- var_1_25)) {
   var_1_61 = (var_1_63 - ((100 - var_1_62) - var_1_5));
  } else {
   var_1_61 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  }
 }
 var_1_64 = ((((((((var_1_28) < (var_1_37)) ? (var_1_28) : (var_1_37)))) < (var_1_27)) ? (((((var_1_28) < (var_1_37)) ? (var_1_28) : (var_1_37)))) : (var_1_27)));
 var_1_70 = (((((((((var_1_71) < (var_1_57)) ? (var_1_71) : (var_1_57))) + (var_1_34 + var_1_62))) < (var_1_5)) ? ((((((var_1_71) < (var_1_57)) ? (var_1_71) : (var_1_57))) + (var_1_34 + var_1_62))) : (var_1_5)));
 if (var_1_27 != last_1_var_1_88) {
  var_1_88 = (var_1_27 + var_1_16);
 } else {
  var_1_88 = ((var_1_27 + var_1_29) - (var_1_28 - var_1_26));
 }
 signed long int stepLocal_33 = var_1_80 | var_1_20;
 signed long int stepLocal_32 = 5;
 if (stepLocal_32 != (8 % var_1_63)) {
  var_1_90 = (256.75 - ((((var_1_29) > (var_1_37)) ? (var_1_29) : (var_1_37))));
 } else {
  if ((var_1_63 - var_1_79) >= stepLocal_33) {
   var_1_90 = ((var_1_25 + (64.1 - var_1_91)) + var_1_26);
  }
 }
 var_1_93 = var_1_5;
 var_1_96 = var_1_91;
 if (var_1_55) {
  var_1_97 = var_1_57;
 }
 var_1_100 = var_1_55;
 var_1_101 = var_1_97;
 var_1_103 = var_1_37;
 var_1_104 = var_1_34;
 if (var_1_81) {
  var_1_105 = 4.2;
 } else {
  var_1_105 = 49.2;
 }
 if (var_1_53) {
  var_1_106 = var_1_30;
 } else {
  var_1_106 = var_1_17;
 }
 if (var_1_37 != ((var_1_29 * var_1_90) / ((((var_1_13) < (2.25f)) ? (var_1_13) : (2.25f))))) {
  var_1_46 = (var_1_41 - var_1_1);
 } else {
  var_1_46 = ((((var_1_40) > ((((((var_1_4) > (var_1_42)) ? (var_1_4) : (var_1_42))) + var_1_14))) ? (var_1_40) : ((((((var_1_4) > (var_1_42)) ? (var_1_4) : (var_1_42))) + var_1_14))));
 }
 unsigned char stepLocal_2 = var_1_100;
 if (((var_1_10 - var_1_11) >= (var_1_90 / var_1_13)) || stepLocal_2) {
  var_1_9 = ((var_1_14 - var_1_4) - var_1_5);
 } else {
  var_1_9 = var_1_4;
 }
 signed char stepLocal_3 = var_1_3;
 if (var_1_100) {
  if (stepLocal_3 > var_1_46) {
   var_1_18 = ((((((((var_1_19) > (8)) ? (var_1_19) : (8)))) > (var_1_5)) ? (((((var_1_19) > (8)) ? (var_1_19) : (8)))) : (var_1_5)));
  } else {
   var_1_18 = ((var_1_20 - var_1_5) - var_1_4);
  }
 } else {
  var_1_18 = ((((((((var_1_4) < (var_1_19)) ? (var_1_4) : (var_1_19)))) > (var_1_20)) ? (((((var_1_4) < (var_1_19)) ? (var_1_4) : (var_1_19)))) : (var_1_20)));
 }
 if ((var_1_35 > (var_1_5 - var_1_4)) && (var_1_32 > var_1_34)) {
  var_1_39 = ((((var_1_5) < ((((((10000000u + var_1_14)) < (var_1_97)) ? ((10000000u + var_1_14)) : (var_1_97))))) ? (var_1_5) : ((((((10000000u + var_1_14)) < (var_1_97)) ? ((10000000u + var_1_14)) : (var_1_97))))));
 } else {
  if (((var_1_1 & 16u) ^ var_1_46) > var_1_4) {
   if ((- var_1_29) != var_1_38) {
    var_1_39 = ((((100000000u) > (var_1_22)) ? (100000000u) : (var_1_22)));
   } else {
    if (var_1_35 <= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) {
     var_1_39 = (var_1_40 - var_1_97);
    } else {
     var_1_39 = ((((((var_1_41 - var_1_22)) > ((3470546746u - var_1_20))) ? ((var_1_41 - var_1_22)) : ((3470546746u - var_1_20)))) - (var_1_42 - ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))));
    }
   }
  } else {
   var_1_39 = var_1_20;
  }
 }
 if (var_1_81) {
  if (var_1_100 && var_1_81) {
   if (var_1_37 < var_1_38) {
    if ((var_1_10 * var_1_30) > (255.75 / ((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))))) {
     var_1_43 = (var_1_14 - var_1_7);
    }
   }
  } else {
   var_1_43 = (var_1_3 - var_1_4);
  }
 } else {
  var_1_43 = (var_1_22 - (var_1_45 - var_1_4));
 }
 unsigned char stepLocal_18 = 1000 >= (var_1_46 ^ var_1_7);
 if (var_1_54) {
  if (stepLocal_18 && (var_1_103 != (var_1_26 / var_1_28))) {
   var_1_65 = var_1_32;
  }
 } else {
  if (var_1_55) {
   var_1_65 = (var_1_57 + (var_1_35 + var_1_62));
  }
 }
 unsigned char stepLocal_21 = var_1_52;
 unsigned short int stepLocal_20 = var_1_50;
 signed long int stepLocal_19 = (((var_1_33) > (var_1_8)) ? (var_1_33) : (var_1_8));
 if (var_1_3 != stepLocal_19) {
  var_1_67 = var_1_61;
 } else {
  if (stepLocal_21 || (var_1_1 <= (var_1_63 / var_1_45))) {
   if (var_1_52) {
    var_1_67 = (((((4u) < 0 ) ? -(4u) : (4u))) + var_1_62);
   } else {
    if (((((256) > (var_1_5)) ? (256) : (var_1_5))) <= stepLocal_20) {
     var_1_67 = 16u;
    } else {
     var_1_67 = var_1_45;
    }
   }
  } else {
   var_1_67 = (((((var_1_40 - var_1_9)) < (var_1_7)) ? ((var_1_40 - var_1_9)) : (var_1_7)));
  }
 }
 if (var_1_96 < var_1_26) {
  if (var_1_97 >= var_1_7) {
   var_1_69 = (var_1_50 - ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))));
  }
 } else {
  var_1_69 = var_1_4;
 }
 signed long int stepLocal_22 = var_1_14 * (~ var_1_56);
 if (((var_1_49 * var_1_93) ^ 0) < stepLocal_22) {
  var_1_72 = ((((25) < (((((5 + var_1_73) < 0 ) ? -(5 + var_1_73) : (5 + var_1_73))))) ? (25) : (((((5 + var_1_73) < 0 ) ? -(5 + var_1_73) : (5 + var_1_73))))));
 } else {
  var_1_72 = var_1_63;
 }
 unsigned long int stepLocal_29 = var_1_97;
 unsigned short int stepLocal_28 = var_1_93;
 signed long int stepLocal_27 = ((((~ var_1_93)) > ((var_1_9 / var_1_22))) ? ((~ var_1_93)) : ((var_1_9 / var_1_22)));
 if (var_1_58) {
  if (((((var_1_49) < (((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))))) ? (var_1_49) : (((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78)))))) >= stepLocal_27) {
   var_1_82 = ((((((var_1_78) < (var_1_57)) ? (var_1_78) : (var_1_57))) + var_1_77) + var_1_5);
  } else {
   if (var_1_13 >= var_1_26) {
    var_1_82 = (var_1_5 + ((((var_1_71) > (var_1_77)) ? (var_1_71) : (var_1_77))));
   } else {
    var_1_82 = ((((var_1_32) > (var_1_35)) ? (var_1_32) : (var_1_35)));
   }
  }
 } else {
  if (stepLocal_28 > ((- var_1_20) | (var_1_7 * var_1_40))) {
   if (var_1_40 >= stepLocal_29) {
    var_1_82 = ((((var_1_71) < ((((((var_1_5) < (-8)) ? (var_1_5) : (-8))) + var_1_78))) ? (var_1_71) : ((((((var_1_5) < (-8)) ? (var_1_5) : (-8))) + var_1_78))));
   } else {
    var_1_82 = (((((var_1_62) < (var_1_57)) ? (var_1_62) : (var_1_57))) - (((((-100) < 0 ) ? -(-100) : (-100))) - ((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)))));
   }
  }
 }
 var_1_83 = (((- var_1_97) >= var_1_51) || var_1_58);
 if (var_1_20 > var_1_104) {
  var_1_92 = var_1_77;
 } else {
  var_1_92 = var_1_34;
 }
 if (var_1_100) {
  var_1_94 = 32;
 } else {
  var_1_94 = var_1_86;
 }
 var_1_95 = var_1_94;
 if (var_1_83) {
  var_1_98 = -64;
 } else {
  var_1_98 = var_1_3;
 }
 if ((((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80))) - var_1_5) <= ((((var_1_39) < (5)) ? (var_1_39) : (5)))) {
  var_1_107 = (2292675029u - (var_1_20 + var_1_5));
 } else {
  var_1_107 = var_1_86;
 }
 signed long int stepLocal_5 = var_1_22 - ((((var_1_20) > (var_1_4)) ? (var_1_20) : (var_1_4)));
 signed long int stepLocal_4 = (var_1_4 - var_1_5) * var_1_43;
 if (var_1_3 > stepLocal_4) {
  var_1_21 = ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)));
 } else {
  if (stepLocal_5 > var_1_98) {
   var_1_21 = var_1_20;
  }
 }
 unsigned char stepLocal_6 = var_1_100;
 if (var_1_13 >= var_1_17) {
  var_1_31 = ((((var_1_32) < ((var_1_5 + var_1_33))) ? (var_1_32) : ((var_1_5 + var_1_33))));
 } else {
  if (stepLocal_6 && var_1_83) {
   var_1_31 = (((((var_1_33) < ((var_1_34 + var_1_35))) ? (var_1_33) : ((var_1_34 + var_1_35)))) + 16);
  } else {
   var_1_31 = var_1_34;
  }
 }
 unsigned long int stepLocal_9 = (((((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) < ((var_1_40 * var_1_104))) ? (((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) : ((var_1_40 * var_1_104)));
 if (! (var_1_4 < var_1_5)) {
  if (var_1_65 >= stepLocal_9) {
   if (var_1_83) {
    var_1_47 = (var_1_4 + ((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5))));
   } else {
    var_1_47 = var_1_5;
   }
  }
 }
 signed long int stepLocal_11 = -4;
 unsigned char stepLocal_10 = var_1_9 != var_1_20;
 if (! (var_1_83 || (var_1_41 > var_1_107))) {
  var_1_48 = ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) - var_1_5) - 8);
 } else {
  if (stepLocal_10 && ((var_1_40 & var_1_41) >= (var_1_49 % var_1_51))) {
   var_1_48 = ((((((((var_1_50) > (var_1_5)) ? (var_1_50) : (var_1_5)))) < (((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20))))) ? (((((var_1_50) > (var_1_5)) ? (var_1_50) : (var_1_5)))) : (((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20))))));
  } else {
   if (var_1_83) {
    if (stepLocal_11 < var_1_97) {
     var_1_48 = (var_1_49 - var_1_20);
    }
   } else {
    var_1_48 = (8 + var_1_20);
   }
  }
 }
 unsigned long int stepLocal_16 = - (var_1_40 - 1000000000u);
 unsigned long int stepLocal_15 = var_1_41 - var_1_20;
 unsigned long int stepLocal_14 = var_1_51;
 if (stepLocal_14 > var_1_56) {
  var_1_60 = (var_1_57 + var_1_4);
 } else {
  if ((var_1_47 / (var_1_40 - var_1_49)) != stepLocal_15) {
   if (var_1_41 <= stepLocal_16) {
    var_1_60 = var_1_57;
   }
  }
 }
 if (var_1_58 && (var_1_107 != ((((var_1_63) < (var_1_57)) ? (var_1_63) : (var_1_57))))) {
  var_1_66 = ((((var_1_35) > (var_1_57)) ? (var_1_35) : (var_1_57)));
 }
 if (! (var_1_98 > 5)) {
  var_1_74 = ((((var_1_16) > ((var_1_26 - var_1_28))) ? (var_1_16) : ((var_1_26 - var_1_28))));
 }
 signed long int stepLocal_25 = (var_1_49 - var_1_18) << (var_1_77 - var_1_78);
 signed long int stepLocal_24 = var_1_62 - ((((var_1_78) > (var_1_80)) ? (var_1_78) : (var_1_80)));
 unsigned long int stepLocal_23 = var_1_97;
 if (var_1_83) {
  if ((((((2964530295u - var_1_67)) > (var_1_104)) ? ((2964530295u - var_1_67)) : (var_1_104))) >= stepLocal_23) {
   if (stepLocal_25 >= var_1_8) {
    var_1_75 = ((var_1_4 - var_1_77) + var_1_79);
   }
  } else {
   if (stepLocal_24 >= var_1_39) {
    var_1_75 = ((((((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))) < 0 ) ? -((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))) : ((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))))) + 25);
   } else {
    var_1_75 = (var_1_62 + var_1_80);
   }
  }
 } else {
  var_1_75 = ((((10) > (((((var_1_78) > (var_1_63)) ? (var_1_78) : (var_1_63))))) ? (10) : (((((var_1_78) > (var_1_63)) ? (var_1_78) : (var_1_63))))));
 }
 unsigned long int stepLocal_31 = var_1_107;
 if (stepLocal_31 < var_1_79) {
  var_1_89 = ((((((var_1_4) > (100)) ? (var_1_4) : (100))) - 32) + ((((var_1_80) > (var_1_5)) ? (var_1_80) : (var_1_5))));
 }
 if (var_1_81 || var_1_52) {
  var_1_23 = (((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))));
 } else {
  if ((- var_1_16) > var_1_11) {
   if ((~ 2) < var_1_66) {
    var_1_23 = ((var_1_25 + 32.5) + 7.75);
   }
  } else {
   var_1_23 = ((((((var_1_26 + var_1_27)) > ((var_1_28 - var_1_29))) ? ((var_1_26 + var_1_27)) : ((var_1_28 - var_1_29)))) - (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) - 256.2));
  }
 }
 unsigned char stepLocal_8 = var_1_26 < var_1_37;
 signed short int stepLocal_7 = var_1_19;
 if (stepLocal_7 > var_1_8) {
  var_1_36 = ((((var_1_28) > ((var_1_29 - (var_1_37 - var_1_27)))) ? (var_1_28) : ((var_1_29 - (var_1_37 - var_1_27)))));
 } else {
  if (stepLocal_8 || ((var_1_43 * var_1_22) != var_1_66)) {
   if ((((((16.375) < (var_1_28)) ? (16.375) : (var_1_28))) - (var_1_38 - 1.000000075E7)) > var_1_96) {
    var_1_36 = (var_1_25 + var_1_17);
   } else {
    var_1_36 = (((((((((var_1_28) > (var_1_37)) ? (var_1_28) : (var_1_37))) - var_1_27)) > (var_1_17)) ? ((((((var_1_28) > (var_1_37)) ? (var_1_28) : (var_1_37))) - var_1_27)) : (var_1_17)));
   }
  } else {
   var_1_36 = (var_1_37 - var_1_28);
  }
 }
 unsigned char stepLocal_30 = var_1_83;
 if ((32 < var_1_20) && stepLocal_30) {
  if (! var_1_83) {
   var_1_85 = (((((var_1_63 - ((((var_1_79) < (var_1_73)) ? (var_1_79) : (var_1_73))))) < (var_1_77)) ? ((var_1_63 - ((((var_1_79) < (var_1_73)) ? (var_1_79) : (var_1_73))))) : (var_1_77)));
  }
 } else {
  if (((var_1_90 * var_1_25) + var_1_16) < (var_1_64 + var_1_36)) {
   var_1_85 = (((var_1_86 - var_1_57) + var_1_87) - var_1_80);
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 63);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1073741823);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 1073741822);
 assume_abort_if_not(var_1_14 <= 2147483646);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -32767);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 16382);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 32767);
 assume_abort_if_not(var_1_22 <= 65535);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -230584.3009213691400e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 4611686.018427383000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= -461168.6018427383000e+13F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -127);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -63);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -31);
 assume_abort_if_not(var_1_34 <= 32);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -31);
 assume_abort_if_not(var_1_35 <= 31);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 4611686.018427383000e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 4611686.018427388000e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967294);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 3221225470);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 1073741823);
 assume_abort_if_not(var_1_42 <= 2147483647);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= 1073741823);
 assume_abort_if_not(var_1_45 <= 2147483646);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 49150);
 assume_abort_if_not(var_1_49 <= 65534);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 49150);
 assume_abort_if_not(var_1_50 <= 65534);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 4294967295);
 assume_abort_if_not(var_1_51 != 0);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 2147483647);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 30);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 1);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 1);
 assume_abort_if_not(var_1_59 <= 1);
 var_1_62 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_62 >= 1);
 assume_abort_if_not(var_1_62 <= 15);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 127);
 assume_abort_if_not(var_1_63 <= 254);
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= -63);
 assume_abort_if_not(var_1_71 <= 63);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 127);
 var_1_77 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_77 >= 7);
 assume_abort_if_not(var_1_77 <= 15);
 var_1_78 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 7);
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 127);
 var_1_80 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_80 >= 0);
 assume_abort_if_not(var_1_80 <= 127);
 var_1_86 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_86 >= 95);
 assume_abort_if_not(var_1_86 <= 127);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 64);
 assume_abort_if_not(var_1_87 <= 127);
 var_1_91 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_91 >= 0.0F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 2305843.009213691400e+12F && var_1_91 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_102 = var_1_102;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_100 ? (((var_1_3 - (var_1_4 - var_1_5)) >= (500 * last_1_var_1_46)) ? (var_1_1 == ((signed long int) (((((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) < ((var_1_5 - var_1_7))) ? (((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) : ((var_1_5 - var_1_7)))) + var_1_8))) : 1) : ((((((var_1_5) > (((((last_1_var_1_46) > (var_1_7)) ? (last_1_var_1_46) : (var_1_7))))) ? (var_1_5) : (((((last_1_var_1_46) > (var_1_7)) ? (last_1_var_1_46) : (var_1_7)))))) <= (~ (1 / -8))) ? (var_1_1 == ((signed long int) (var_1_7 - var_1_4))) : (var_1_1 == ((signed long int) var_1_5)))) && ((((var_1_10 - var_1_11) >= (var_1_90 / var_1_13)) || var_1_100) ? (var_1_9 == ((signed long int) ((var_1_14 - var_1_4) - var_1_5))) : (var_1_9 == ((signed long int) var_1_4)))) && (var_1_15 == ((double) (var_1_16 + ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) && (var_1_100 ? ((var_1_3 > var_1_46) ? (var_1_18 == ((signed short int) ((((((((var_1_19) > (8)) ? (var_1_19) : (8)))) > (var_1_5)) ? (((((var_1_19) > (8)) ? (var_1_19) : (8)))) : (var_1_5))))) : (var_1_18 == ((signed short int) ((var_1_20 - var_1_5) - var_1_4)))) : (var_1_18 == ((signed short int) ((((((((var_1_4) < (var_1_19)) ? (var_1_4) : (var_1_19)))) > (var_1_20)) ? (((((var_1_4) < (var_1_19)) ? (var_1_4) : (var_1_19)))) : (var_1_20))))))) && ((var_1_3 > ((var_1_4 - var_1_5) * var_1_43)) ? (var_1_21 == ((unsigned short int) ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4))))) : (((var_1_22 - ((((var_1_20) > (var_1_4)) ? (var_1_20) : (var_1_4)))) > var_1_98) ? (var_1_21 == ((unsigned short int) var_1_20)) : 1))) && ((var_1_81 || var_1_52) ? (var_1_23 == ((double) (((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) : (((- var_1_16) > var_1_11) ? (((~ 2) < var_1_66) ? (var_1_23 == ((double) ((var_1_25 + 32.5) + 7.75))) : 1) : (var_1_23 == ((double) ((((((var_1_26 + var_1_27)) > ((var_1_28 - var_1_29))) ? ((var_1_26 + var_1_27)) : ((var_1_28 - var_1_29)))) - (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) - 256.2))))))) && ((var_1_13 >= var_1_17) ? (var_1_31 == ((signed char) ((((var_1_32) < ((var_1_5 + var_1_33))) ? (var_1_32) : ((var_1_5 + var_1_33)))))) : ((var_1_100 && var_1_83) ? (var_1_31 == ((signed char) (((((var_1_33) < ((var_1_34 + var_1_35))) ? (var_1_33) : ((var_1_34 + var_1_35)))) + 16))) : (var_1_31 == ((signed char) var_1_34))))) && ((var_1_19 > var_1_8) ? (var_1_36 == ((float) ((((var_1_28) > ((var_1_29 - (var_1_37 - var_1_27)))) ? (var_1_28) : ((var_1_29 - (var_1_37 - var_1_27))))))) : (((var_1_26 < var_1_37) || ((var_1_43 * var_1_22) != var_1_66)) ? (((((((16.375) < (var_1_28)) ? (16.375) : (var_1_28))) - (var_1_38 - 1.000000075E7)) > var_1_96) ? (var_1_36 == ((float) (var_1_25 + var_1_17))) : (var_1_36 == ((float) (((((((((var_1_28) > (var_1_37)) ? (var_1_28) : (var_1_37))) - var_1_27)) > (var_1_17)) ? ((((((var_1_28) > (var_1_37)) ? (var_1_28) : (var_1_37))) - var_1_27)) : (var_1_17)))))) : (var_1_36 == ((float) (var_1_37 - var_1_28)))))) && (((var_1_35 > (var_1_5 - var_1_4)) && (var_1_32 > var_1_34)) ? (var_1_39 == ((unsigned long int) ((((var_1_5) < ((((((10000000u + var_1_14)) < (var_1_97)) ? ((10000000u + var_1_14)) : (var_1_97))))) ? (var_1_5) : ((((((10000000u + var_1_14)) < (var_1_97)) ? ((10000000u + var_1_14)) : (var_1_97)))))))) : ((((var_1_1 & 16u) ^ var_1_46) > var_1_4) ? (((- var_1_29) != var_1_38) ? (var_1_39 == ((unsigned long int) ((((100000000u) > (var_1_22)) ? (100000000u) : (var_1_22))))) : ((var_1_35 <= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) ? (var_1_39 == ((unsigned long int) (var_1_40 - var_1_97))) : (var_1_39 == ((unsigned long int) ((((((var_1_41 - var_1_22)) > ((3470546746u - var_1_20))) ? ((var_1_41 - var_1_22)) : ((3470546746u - var_1_20)))) - (var_1_42 - ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4))))))))) : (var_1_39 == ((unsigned long int) var_1_20))))) && (var_1_81 ? ((var_1_100 && var_1_81) ? ((var_1_37 < var_1_38) ? (((var_1_10 * var_1_30) > (255.75 / ((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))))) ? (var_1_43 == ((signed long int) (var_1_14 - var_1_7))) : 1) : 1) : (var_1_43 == ((signed long int) (var_1_3 - var_1_4)))) : (var_1_43 == ((signed long int) (var_1_22 - (var_1_45 - var_1_4)))))) && ((var_1_37 != ((var_1_29 * var_1_90) / ((((var_1_13) < (2.25f)) ? (var_1_13) : (2.25f))))) ? (var_1_46 == ((unsigned long int) (var_1_41 - var_1_1))) : (var_1_46 == ((unsigned long int) ((((var_1_40) > ((((((var_1_4) > (var_1_42)) ? (var_1_4) : (var_1_42))) + var_1_14))) ? (var_1_40) : ((((((var_1_4) > (var_1_42)) ? (var_1_4) : (var_1_42))) + var_1_14)))))))) && ((! (var_1_4 < var_1_5)) ? ((var_1_65 >= ((((((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) < ((var_1_40 * var_1_104))) ? (((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) : ((var_1_40 * var_1_104))))) ? (var_1_83 ? (var_1_47 == ((unsigned short int) (var_1_4 + ((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5)))))) : (var_1_47 == ((unsigned short int) var_1_5))) : 1) : 1)) && ((! (var_1_83 || (var_1_41 > var_1_107))) ? (var_1_48 == ((unsigned short int) ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) - var_1_5) - 8))) : (((var_1_9 != var_1_20) && ((var_1_40 & var_1_41) >= (var_1_49 % var_1_51))) ? (var_1_48 == ((unsigned short int) ((((((((var_1_50) > (var_1_5)) ? (var_1_50) : (var_1_5)))) < (((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20))))) ? (((((var_1_50) > (var_1_5)) ? (var_1_50) : (var_1_5)))) : (((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20)))))))) : (var_1_83 ? ((-4 < var_1_97) ? (var_1_48 == ((unsigned short int) (var_1_49 - var_1_20))) : 1) : (var_1_48 == ((unsigned short int) (8 + var_1_20))))))) && (var_1_81 ? (var_1_52 == ((unsigned char) (var_1_53 || var_1_54))) : ((! (var_1_45 > (~ var_1_19))) ? (var_1_52 == ((unsigned char) (var_1_81 || var_1_55))) : ((var_1_8 < (var_1_56 >> var_1_57)) ? (var_1_52 == ((unsigned char) (var_1_81 && var_1_53))) : (((var_1_14 < ((((var_1_4) < (var_1_20)) ? (var_1_4) : (var_1_20)))) || var_1_55) ? (var_1_52 == ((unsigned char) (var_1_55 || (var_1_58 && (var_1_81 || var_1_59))))) : 1))))) && ((var_1_51 > var_1_56) ? (var_1_60 == ((unsigned char) (var_1_57 + var_1_4))) : (((var_1_47 / (var_1_40 - var_1_49)) != (var_1_41 - var_1_20)) ? ((var_1_41 <= (- (var_1_40 - 1000000000u))) ? (var_1_60 == ((unsigned char) var_1_57)) : 1) : 1))) && ((((var_1_50 >> var_1_62) * var_1_51) > ((((var_1_20) < (var_1_45)) ? (var_1_20) : (var_1_45)))) ? (var_1_61 == ((unsigned char) (((((var_1_63 - var_1_62)) > ((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_4))) ? ((var_1_63 - var_1_62)) : ((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_4)))))) : (((- var_1_27) > (- var_1_25)) ? (var_1_61 == ((unsigned char) (var_1_63 - ((100 - var_1_62) - var_1_5)))) : (var_1_61 == ((unsigned char) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))))) && (var_1_64 == ((float) ((((((((var_1_28) < (var_1_37)) ? (var_1_28) : (var_1_37)))) < (var_1_27)) ? (((((var_1_28) < (var_1_37)) ? (var_1_28) : (var_1_37)))) : (var_1_27)))))) && (var_1_54 ? (((1000 >= (var_1_46 ^ var_1_7)) && (var_1_103 != (var_1_26 / var_1_28))) ? (var_1_65 == ((signed char) var_1_32)) : 1) : (var_1_55 ? (var_1_65 == ((signed char) (var_1_57 + (var_1_35 + var_1_62)))) : 1))) && ((var_1_58 && (var_1_107 != ((((var_1_63) < (var_1_57)) ? (var_1_63) : (var_1_57))))) ? (var_1_66 == ((signed long int) ((((var_1_35) > (var_1_57)) ? (var_1_35) : (var_1_57))))) : 1)) && ((var_1_3 != ((((var_1_33) > (var_1_8)) ? (var_1_33) : (var_1_8)))) ? (var_1_67 == ((unsigned long int) var_1_61)) : ((var_1_52 || (var_1_1 <= (var_1_63 / var_1_45))) ? (var_1_52 ? (var_1_67 == ((unsigned long int) (((((4u) < 0 ) ? -(4u) : (4u))) + var_1_62))) : ((((((256) > (var_1_5)) ? (256) : (var_1_5))) <= var_1_50) ? (var_1_67 == ((unsigned long int) 16u)) : (var_1_67 == ((unsigned long int) var_1_45)))) : (var_1_67 == ((unsigned long int) (((((var_1_40 - var_1_9)) < (var_1_7)) ? ((var_1_40 - var_1_9)) : (var_1_7)))))))) && ((var_1_96 < var_1_26) ? ((var_1_97 >= var_1_7) ? (var_1_69 == ((unsigned short int) (var_1_50 - ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))))) : 1) : (var_1_69 == ((unsigned short int) var_1_4)))) && (var_1_70 == ((signed char) (((((((((var_1_71) < (var_1_57)) ? (var_1_71) : (var_1_57))) + (var_1_34 + var_1_62))) < (var_1_5)) ? ((((((var_1_71) < (var_1_57)) ? (var_1_71) : (var_1_57))) + (var_1_34 + var_1_62))) : (var_1_5)))))) && ((((var_1_49 * var_1_93) ^ 0) < (var_1_14 * (~ var_1_56))) ? (var_1_72 == ((unsigned char) ((((25) < (((((5 + var_1_73) < 0 ) ? -(5 + var_1_73) : (5 + var_1_73))))) ? (25) : (((((5 + var_1_73) < 0 ) ? -(5 + var_1_73) : (5 + var_1_73)))))))) : (var_1_72 == ((unsigned char) var_1_63)))) && ((! (var_1_98 > 5)) ? (var_1_74 == ((float) ((((var_1_16) > ((var_1_26 - var_1_28))) ? (var_1_16) : ((var_1_26 - var_1_28)))))) : 1)) && (var_1_83 ? (((((((2964530295u - var_1_67)) > (var_1_104)) ? ((2964530295u - var_1_67)) : (var_1_104))) >= var_1_97) ? ((((var_1_49 - var_1_18) << (var_1_77 - var_1_78)) >= var_1_8) ? (var_1_75 == ((unsigned char) ((var_1_4 - var_1_77) + var_1_79))) : 1) : (((var_1_62 - ((((var_1_78) > (var_1_80)) ? (var_1_78) : (var_1_80)))) >= var_1_39) ? (var_1_75 == ((unsigned char) ((((((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))) < 0 ) ? -((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))) : ((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))))) + 25))) : (var_1_75 == ((unsigned char) (var_1_62 + var_1_80))))) : (var_1_75 == ((unsigned char) ((((10) > (((((var_1_78) > (var_1_63)) ? (var_1_78) : (var_1_63))))) ? (10) : (((((var_1_78) > (var_1_63)) ? (var_1_78) : (var_1_63)))))))))) && ((((var_1_49 & var_1_51) == ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) || (var_1_13 != var_1_37)) ? ((var_1_17 >= last_1_var_1_15) ? (var_1_81 == ((unsigned char) (! (! var_1_53)))) : (var_1_81 == ((unsigned char) (((var_1_50 + var_1_8) != last_1_var_1_102) && var_1_53)))) : 1)) && (var_1_58 ? ((((((var_1_49) < (((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))))) ? (var_1_49) : (((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78)))))) >= (((((~ var_1_93)) > ((var_1_9 / var_1_22))) ? ((~ var_1_93)) : ((var_1_9 / var_1_22))))) ? (var_1_82 == ((signed char) ((((((var_1_78) < (var_1_57)) ? (var_1_78) : (var_1_57))) + var_1_77) + var_1_5))) : ((var_1_13 >= var_1_26) ? (var_1_82 == ((signed char) (var_1_5 + ((((var_1_71) > (var_1_77)) ? (var_1_71) : (var_1_77)))))) : (var_1_82 == ((signed char) ((((var_1_32) > (var_1_35)) ? (var_1_32) : (var_1_35))))))) : ((var_1_93 > ((- var_1_20) | (var_1_7 * var_1_40))) ? ((var_1_40 >= var_1_97) ? (var_1_82 == ((signed char) ((((var_1_71) < ((((((var_1_5) < (-8)) ? (var_1_5) : (-8))) + var_1_78))) ? (var_1_71) : ((((((var_1_5) < (-8)) ? (var_1_5) : (-8))) + var_1_78)))))) : (var_1_82 == ((signed char) (((((var_1_62) < (var_1_57)) ? (var_1_62) : (var_1_57))) - (((((-100) < 0 ) ? -(-100) : (-100))) - ((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)))))))) : 1))) && (var_1_83 == ((unsigned char) (((- var_1_97) >= var_1_51) || var_1_58)))) && (((32 < var_1_20) && var_1_83) ? ((! var_1_83) ? (var_1_85 == ((unsigned char) (((((var_1_63 - ((((var_1_79) < (var_1_73)) ? (var_1_79) : (var_1_73))))) < (var_1_77)) ? ((var_1_63 - ((((var_1_79) < (var_1_73)) ? (var_1_79) : (var_1_73))))) : (var_1_77))))) : 1) : ((((var_1_90 * var_1_25) + var_1_16) < (var_1_64 + var_1_36)) ? (var_1_85 == ((unsigned char) (((var_1_86 - var_1_57) + var_1_87) - var_1_80))) : 1))) && ((var_1_27 != last_1_var_1_88) ? (var_1_88 == ((double) (var_1_27 + var_1_16))) : (var_1_88 == ((double) ((var_1_27 + var_1_29) - (var_1_28 - var_1_26)))))) && ((var_1_107 < var_1_79) ? (var_1_89 == ((unsigned char) ((((((var_1_4) > (100)) ? (var_1_4) : (100))) - 32) + ((((var_1_80) > (var_1_5)) ? (var_1_80) : (var_1_5)))))) : 1)) && ((5 != (8 % var_1_63)) ? (var_1_90 == ((double) (256.75 - ((((var_1_29) > (var_1_37)) ? (var_1_29) : (var_1_37)))))) : (((var_1_63 - var_1_79) >= (var_1_80 | var_1_20)) ? (var_1_90 == ((double) ((var_1_25 + (64.1 - var_1_91)) + var_1_26))) : 1))) && ((var_1_20 > var_1_104) ? (var_1_92 == ((signed char) var_1_77)) : (var_1_92 == ((signed char) var_1_34)))) && (var_1_93 == ((unsigned short int) var_1_5))) && (var_1_100 ? (var_1_94 == ((unsigned char) 32)) : (var_1_94 == ((unsigned char) var_1_86)))) && (var_1_95 == ((unsigned short int) var_1_94))) && (var_1_96 == ((double) var_1_91))) && (var_1_55 ? (var_1_97 == ((unsigned long int) var_1_57)) : 1)) && (var_1_83 ? (var_1_98 == ((signed long int) -64)) : (var_1_98 == ((signed long int) var_1_3)))) && (var_1_100 == ((unsigned char) var_1_55))) && (var_1_101 == ((unsigned short int) var_1_97))) && (var_1_81 ? (var_1_102 == ((unsigned short int) var_1_20)) : 1)) && (var_1_103 == ((float) var_1_37))) && (var_1_104 == ((signed long int) var_1_34))) && (var_1_81 ? (var_1_105 == ((double) 4.2)) : (var_1_105 == ((double) 49.2)))) && (var_1_53 ? (var_1_106 == ((float) var_1_30)) : (var_1_106 == ((float) var_1_17)))) && (((((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80))) - var_1_5) <= ((((var_1_39) < (5)) ? (var_1_39) : (5)))) ? (var_1_107 == ((unsigned long int) (2292675029u - (var_1_20 + var_1_5)))) : (var_1_107 == ((unsigned long int) var_1_86)))
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

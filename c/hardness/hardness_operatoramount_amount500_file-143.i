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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 256;
unsigned short int var_1_5 = 54686;
unsigned short int var_1_6 = 64;
signed long int var_1_7 = 50;
unsigned short int var_1_10 = 256;
unsigned short int var_1_11 = 128;
unsigned short int var_1_12 = 1;
unsigned short int var_1_13 = 43448;
unsigned short int var_1_14 = 1000;
unsigned short int var_1_15 = 10000;
unsigned short int var_1_16 = 128;
unsigned short int var_1_17 = 61803;
signed long int var_1_18 = 5;
signed long int var_1_19 = -1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
double var_1_26 = 7.6;
double var_1_27 = 3.6;
double var_1_28 = 10.1;
double var_1_29 = 1.8;
double var_1_30 = 1000000.8;
signed long int var_1_31 = -32;
signed char var_1_32 = 100;
signed char var_1_33 = -10;
signed char var_1_34 = 4;
signed char var_1_35 = 32;
signed char var_1_36 = 25;
signed char var_1_37 = 50;
unsigned char var_1_38 = 10;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 100;
unsigned char var_1_41 = 32;
unsigned char var_1_42 = 5;
unsigned long int var_1_43 = 10000000;
signed long int var_1_44 = -10;
unsigned char var_1_45 = 0;
float var_1_46 = 10.2;
signed short int var_1_47 = 5;
signed long int var_1_48 = 0;
signed long int var_1_49 = 1000000000;
signed long int var_1_50 = 1000000000;
signed short int var_1_51 = -100;
signed short int var_1_52 = 32;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
signed long int var_1_55 = -16;
signed long int var_1_56 = 1322659684;
float var_1_57 = -0.375;
signed char var_1_58 = -5;
float var_1_59 = 3.875;
double var_1_60 = 15.2;
signed char var_1_62 = -64;
unsigned short int var_1_63 = 4;
unsigned short int var_1_64 = 27182;
unsigned char var_1_65 = 0;
signed char var_1_67 = 64;
signed long int var_1_68 = -256;
double var_1_69 = 50.34;
signed long int var_1_70 = 25;
unsigned char var_1_71 = 25;
float var_1_72 = 4.4;
float var_1_73 = 9.125;
unsigned char var_1_74 = 0;
unsigned short int var_1_75 = 2;
unsigned short int var_1_76 = 5;
unsigned char var_1_77 = 200;
signed short int var_1_78 = -128;
unsigned char var_1_79 = 0;
unsigned long int var_1_80 = 1;
unsigned long int var_1_81 = 2895249486;
float var_1_83 = 99.9;
float var_1_84 = 32.75;
float var_1_85 = 64.25;
signed long int var_1_86 = 1;
signed long int var_1_87 = -64;
unsigned char var_1_88 = 1;
signed char var_1_89 = 5;
signed char var_1_90 = 16;
signed char var_1_91 = 32;
signed char var_1_92 = 32;
unsigned long int var_1_93 = 256;
unsigned long int var_1_95 = 1000000000;
unsigned long int var_1_96 = 2067907303;
float var_1_97 = 10.75;
float var_1_98 = 1.04;
unsigned long int var_1_99 = 2;
signed long int var_1_100 = -50;
double var_1_101 = 10.8;
double var_1_102 = 16.6;
signed short int var_1_103 = 64;
signed short int var_1_104 = -50;
signed short int var_1_105 = -256;
signed short int var_1_106 = -4;
signed long int var_1_107 = -4;
unsigned char var_1_108 = 5;
unsigned long int var_1_109 = 128;
unsigned char var_1_110 = 0;
signed char var_1_111 = -32;
signed char var_1_112 = -32;
unsigned char var_1_113 = 0;
signed long int var_1_114 = -64;
unsigned char var_1_115 = 1;
float var_1_116 = 1.25;
signed short int var_1_117 = -16;
unsigned short int last_1_var_1_1 = 256;
unsigned long int last_1_var_1_43 = 10000000;
signed long int last_1_var_1_48 = 0;
signed long int last_1_var_1_55 = -16;
signed long int last_1_var_1_68 = -256;
unsigned char last_1_var_1_79 = 0;
signed long int last_1_var_1_100 = -50;
unsigned char last_1_var_1_113 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_8 = last_1_var_1_48 / var_1_7;
 signed long int stepLocal_7 = 5 + var_1_7;
 signed long int stepLocal_6 = var_1_7;
 if (last_1_var_1_113) {
  if (var_1_13 < stepLocal_6) {
   if (last_1_var_1_48 > stepLocal_7) {
    if (stepLocal_8 < (var_1_13 - last_1_var_1_100)) {
     var_1_16 = (((((((((var_1_13) > (53301)) ? (var_1_13) : (53301))) - var_1_10)) > (50)) ? ((((((var_1_13) > (53301)) ? (var_1_13) : (53301))) - var_1_10)) : (50)));
    }
   } else {
    var_1_16 = ((((var_1_10) < (var_1_6)) ? (var_1_10) : (var_1_6)));
   }
  } else {
   var_1_16 = (((((5) < 0 ) ? -(5) : (5))) + 128);
  }
 } else {
  var_1_16 = ((var_1_17 - var_1_14) - var_1_6);
 }
 signed long int stepLocal_5 = last_1_var_1_68;
 unsigned char stepLocal_4 = ! last_1_var_1_79;
 if (last_1_var_1_79 && stepLocal_4) {
  if ((2 - (17647 - 256)) >= stepLocal_5) {
   var_1_15 = (var_1_13 - var_1_10);
  } else {
   var_1_15 = ((((var_1_6) < (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_6) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))));
  }
 }
 if (! (var_1_27 >= var_1_30)) {
  var_1_43 = last_1_var_1_43;
 } else {
  var_1_43 = var_1_39;
 }
 var_1_53 = (var_1_22 && var_1_54);
 var_1_57 = ((((0.5f) > ((((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) < 0 ) ? -((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) : ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))) ? (0.5f) : ((((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) < 0 ) ? -((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) : ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))));
 if (1000000000u > (((((var_1_13) > (var_1_7)) ? (var_1_13) : (var_1_7))) / var_1_41)) {
  var_1_58 = (((((var_1_36) > (var_1_41)) ? (var_1_36) : (var_1_41))) - var_1_37);
 }
 var_1_79 = (var_1_54 || var_1_24);
 unsigned long int stepLocal_36 = var_1_43;
 unsigned short int stepLocal_35 = var_1_76;
 if (var_1_28 <= var_1_27) {
  if (stepLocal_36 <= (last_1_var_1_100 + 4)) {
   if (stepLocal_35 == var_1_19) {
    var_1_100 = var_1_95;
   }
  }
 }
 if (var_1_79) {
  var_1_102 = var_1_27;
 }
 if (var_1_53) {
  var_1_103 = var_1_91;
 } else {
  var_1_103 = var_1_14;
 }
 var_1_104 = var_1_105;
 var_1_107 = var_1_49;
 var_1_109 = var_1_77;
 if (var_1_54) {
  var_1_110 = var_1_24;
 } else {
  var_1_110 = var_1_25;
 }
 if (var_1_22) {
  var_1_113 = var_1_25;
 } else {
  var_1_113 = var_1_21;
 }
 var_1_114 = var_1_34;
 var_1_115 = var_1_21;
 if (var_1_24) {
  var_1_116 = var_1_27;
 }
 signed long int stepLocal_9 = var_1_114;
 if (var_1_11 > stepLocal_9) {
  var_1_18 = (var_1_19 - var_1_12);
 }
 signed long int stepLocal_16 = var_1_107 | var_1_40;
 if (stepLocal_16 == var_1_16) {
  var_1_46 = (((((var_1_30 + var_1_28)) < (var_1_27)) ? ((var_1_30 + var_1_28)) : (var_1_27)));
 } else {
  var_1_46 = (16.292f + (((((var_1_30) > (0.5f)) ? (var_1_30) : (0.5f))) - var_1_29));
 }
 signed long int stepLocal_17 = var_1_114;
 if (((((var_1_10) < (var_1_33)) ? (var_1_10) : (var_1_33))) < stepLocal_17) {
  var_1_47 = (((((var_1_36) < (var_1_42)) ? (var_1_36) : (var_1_42))) + (var_1_14 + var_1_37));
 } else {
  var_1_47 = ((((((((((((-256) < (var_1_35)) ? (-256) : (var_1_35)))) < (var_1_42)) ? (((((-256) < (var_1_35)) ? (-256) : (var_1_35)))) : (var_1_42)))) < ((var_1_36 + var_1_40))) ? (((((((((-256) < (var_1_35)) ? (-256) : (var_1_35)))) < (var_1_42)) ? (((((-256) < (var_1_35)) ? (-256) : (var_1_35)))) : (var_1_42)))) : ((var_1_36 + var_1_40))));
 }
 if ((50 * var_1_100) <= (((((var_1_109) > (var_1_107)) ? (var_1_109) : (var_1_107))) - var_1_12)) {
  if (var_1_24) {
   var_1_63 = (var_1_13 - (var_1_64 - var_1_14));
  } else {
   var_1_63 = ((59231 - 25) - var_1_11);
  }
 } else {
  if (var_1_12 >= (var_1_49 + 25)) {
   if (var_1_22 && var_1_23) {
    var_1_63 = (var_1_17 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))));
   }
  }
 }
 unsigned char stepLocal_24 = var_1_23;
 if (stepLocal_24 && var_1_79) {
  var_1_65 = (var_1_79 && var_1_24);
 }
 unsigned char stepLocal_26 = ! var_1_110;
 if ((var_1_114 <= (- var_1_41)) && stepLocal_26) {
  var_1_71 = (((((((((var_1_39 - 100)) < (var_1_37)) ? ((var_1_39 - 100)) : (var_1_37)))) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? ((((((var_1_39 - 100)) < (var_1_37)) ? ((var_1_39 - 100)) : (var_1_37)))) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))));
 } else {
  var_1_71 = (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) + 64);
 }
 signed long int stepLocal_34 = -128;
 if (var_1_113) {
  if (stepLocal_34 > var_1_36) {
   var_1_99 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
  } else {
   var_1_99 = (var_1_63 + (((((((var_1_76) > (var_1_12)) ? (var_1_76) : (var_1_12))) < 0 ) ? -((((var_1_76) > (var_1_12)) ? (var_1_76) : (var_1_12))) : ((((var_1_76) > (var_1_12)) ? (var_1_76) : (var_1_12))))));
  }
 } else {
  var_1_99 = ((((var_1_95 + (1813181672u - var_1_91)) < 0 ) ? -(var_1_95 + (1813181672u - var_1_91)) : (var_1_95 + (1813181672u - var_1_91))));
 }
 signed char stepLocal_37 = var_1_90;
 if (stepLocal_37 == (var_1_63 + var_1_99)) {
  var_1_101 = var_1_27;
 } else {
  var_1_101 = var_1_29;
 }
 if (var_1_113) {
  var_1_106 = var_1_63;
 } else {
  var_1_106 = var_1_40;
 }
 if (var_1_115) {
  var_1_111 = var_1_112;
 } else {
  var_1_111 = var_1_42;
 }
 unsigned char stepLocal_3 = var_1_110;
 signed long int stepLocal_2 = var_1_7;
 unsigned short int stepLocal_1 = var_1_63;
 signed long int stepLocal_0 = var_1_100 / var_1_7;
 if (stepLocal_1 != ((((last_1_var_1_1) < (var_1_100)) ? (last_1_var_1_1) : (var_1_100)))) {
  if ((- var_1_5) >= stepLocal_0) {
   if (stepLocal_3 || var_1_113) {
    var_1_1 = ((((var_1_6) > ((var_1_10 + 5))) ? (var_1_6) : ((var_1_10 + 5))));
   } else {
    var_1_1 = (var_1_6 + (var_1_11 + var_1_12));
   }
  } else {
   var_1_1 = (var_1_12 + ((((var_1_6) > (var_1_10)) ? (var_1_6) : (var_1_10))));
  }
 } else {
  if (stepLocal_2 >= last_1_var_1_1) {
   var_1_1 = (var_1_13 - var_1_10);
  } else {
   var_1_1 = (var_1_11 + ((var_1_14 + 64) + var_1_12));
  }
 }
 signed long int stepLocal_14 = - (- var_1_39);
 if (var_1_63 == stepLocal_14) {
  var_1_44 = (var_1_71 + var_1_11);
 } else {
  var_1_44 = ((((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36)));
 }
 if (var_1_36 > -16) {
  var_1_55 = (var_1_44 - (((((var_1_56 - last_1_var_1_55)) > ((2069455995 - var_1_49))) ? ((var_1_56 - last_1_var_1_55)) : ((2069455995 - var_1_49)))));
 }
 unsigned long int stepLocal_25 = var_1_99;
 if ((var_1_13 % var_1_64) >= stepLocal_25) {
  var_1_67 = (var_1_41 + var_1_42);
 } else {
  var_1_67 = ((((var_1_34) < (var_1_41)) ? (var_1_34) : (var_1_41)));
 }
 if (var_1_114 < var_1_99) {
  if ((var_1_90 * var_1_52) <= var_1_77) {
   var_1_97 = (((((var_1_73) < (var_1_29)) ? (var_1_73) : (var_1_29))) - (var_1_30 + var_1_98));
  } else {
   var_1_97 = (((((var_1_69) > (var_1_30)) ? (var_1_69) : (var_1_30))) - var_1_73);
  }
 }
 signed long int stepLocal_15 = var_1_114;
 if (! var_1_110) {
  if (stepLocal_15 <= var_1_1) {
   var_1_45 = (! var_1_23);
  } else {
   var_1_45 = ((var_1_36 >= var_1_15) || ((var_1_24 || var_1_21) && (! var_1_25)));
  }
 } else {
  var_1_45 = (! (! (var_1_22 || var_1_21)));
 }
 if (var_1_45) {
  if (((- var_1_101) / 100.6f) > -0.25f) {
   var_1_68 = -4;
  } else {
   if (var_1_28 >= (var_1_29 - (var_1_30 + var_1_69))) {
    var_1_68 = ((var_1_13 + var_1_36) + var_1_5);
   } else {
    var_1_68 = ((((var_1_99) > ((var_1_14 - var_1_15))) ? (var_1_99) : ((var_1_14 - var_1_15))));
   }
  }
 } else {
  var_1_68 = (last_1_var_1_68 + (var_1_11 + var_1_70));
 }
 unsigned char stepLocal_11 = var_1_24;
 unsigned char stepLocal_10 = 500 < var_1_68;
 if (var_1_25) {
  if ((var_1_6 < (var_1_5 ^ var_1_16)) || stepLocal_10) {
   if (var_1_110) {
    if (var_1_53 && stepLocal_11) {
     var_1_31 = ((((32) < 0 ) ? -(32) : (32)));
    } else {
     var_1_31 = (((((((var_1_14 - var_1_1) < 0 ) ? -(var_1_14 - var_1_1) : (var_1_14 - var_1_1))) < 0 ) ? -((((var_1_14 - var_1_1) < 0 ) ? -(var_1_14 - var_1_1) : (var_1_14 - var_1_1))) : ((((var_1_14 - var_1_1) < 0 ) ? -(var_1_14 - var_1_1) : (var_1_14 - var_1_1)))));
    }
   }
  } else {
   var_1_31 = ((((5) < 0 ) ? -(5) : (5)));
  }
 } else {
  var_1_31 = var_1_1;
 }
 unsigned short int stepLocal_12 = var_1_11;
 if (stepLocal_12 < var_1_31) {
  var_1_32 = ((((((((var_1_33) < (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))) ? (var_1_33) : (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))))) < ((var_1_36 - var_1_37))) ? (((((var_1_33) < (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))) ? (var_1_33) : (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))))) : ((var_1_36 - var_1_37))));
 } else {
  var_1_32 = ((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)));
 }
 signed char stepLocal_13 = var_1_34;
 if (stepLocal_13 < var_1_44) {
  var_1_38 = (var_1_39 - (var_1_40 - (var_1_41 - var_1_42)));
 }
 if ((var_1_31 + var_1_49) < var_1_12) {
  if (var_1_63 == (var_1_56 / var_1_17)) {
   if ((var_1_41 >> 4) < ((var_1_36 - var_1_31) * var_1_43)) {
    var_1_59 = (var_1_29 - var_1_30);
   }
  } else {
   var_1_59 = (((((var_1_29) < (var_1_30)) ? (var_1_29) : (var_1_30))) - 25.5f);
  }
 }
 signed char stepLocal_23 = var_1_35;
 if ((var_1_97 * var_1_28) >= 255.8) {
  if (stepLocal_23 != (-1 ^ var_1_14)) {
   var_1_62 = var_1_42;
  }
 }
 if (var_1_45 || var_1_65) {
  var_1_93 = (((var_1_49 + var_1_95) - var_1_6) + (((((var_1_56) > (var_1_96)) ? (var_1_56) : (var_1_96))) - var_1_37));
 }
 if ((var_1_81 - (var_1_56 - var_1_49)) <= var_1_42) {
  if ((var_1_99 * var_1_49) <= ((((64) < (((((1) < 0 ) ? -(1) : (1))))) ? (64) : (((((1) < 0 ) ? -(1) : (1))))))) {
   var_1_80 = ((((var_1_37) < ((1000000000u + var_1_68))) ? (var_1_37) : ((1000000000u + var_1_68))));
  } else {
   var_1_80 = (((((2u + var_1_6) < 0 ) ? -(2u + var_1_6) : (2u + var_1_6))) + var_1_104);
  }
 } else {
  if (var_1_11 >= var_1_16) {
   var_1_80 = var_1_18;
  }
 }
 if ((var_1_31 + var_1_43) < (var_1_5 + var_1_14)) {
  var_1_20 = ((var_1_21 && var_1_22) && var_1_23);
 } else {
  var_1_20 = (var_1_24 || var_1_25);
 }
 if (var_1_20) {
  var_1_26 = ((((var_1_27) > (4.25)) ? (var_1_27) : (4.25)));
 } else {
  var_1_26 = ((((var_1_27) < ((var_1_28 + (var_1_29 - var_1_30)))) ? (var_1_27) : ((var_1_28 + (var_1_29 - var_1_30)))));
 }
 signed long int stepLocal_22 = var_1_50;
 unsigned long int stepLocal_21 = var_1_80;
 if (-128 <= stepLocal_21) {
  if (var_1_113) {
   var_1_60 = ((var_1_29 - var_1_30) + var_1_28);
  }
 } else {
  if (stepLocal_22 < var_1_68) {
   var_1_60 = ((var_1_29 + 31.9) - var_1_30);
  }
 }
 unsigned long int stepLocal_30 = var_1_109;
 if ((- var_1_18) != stepLocal_30) {
  var_1_86 = ((var_1_56 - var_1_6) - var_1_55);
 } else {
  var_1_86 = ((((var_1_56) > ((var_1_93 + (var_1_17 + var_1_87)))) ? (var_1_56) : ((var_1_93 + (var_1_17 + var_1_87)))));
 }
 unsigned long int stepLocal_33 = ((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80))) << (var_1_90 - var_1_76);
 unsigned char stepLocal_32 = var_1_107 >= var_1_42;
 if (var_1_79 && stepLocal_32) {
  if (stepLocal_33 >= ((var_1_13 * var_1_64) / var_1_49)) {
   if (var_1_53) {
    var_1_89 = (var_1_42 + ((var_1_41 - var_1_90) - (var_1_91 - 25)));
   } else {
    var_1_89 = ((((var_1_91) < (var_1_37)) ? (var_1_91) : (var_1_37)));
   }
  } else {
   var_1_89 = (var_1_90 - ((var_1_41 - 5) + (var_1_92 - var_1_76)));
  }
 }
 if (var_1_20) {
  var_1_108 = var_1_77;
 }
 signed long int stepLocal_39 = var_1_5 * var_1_86;
 unsigned char stepLocal_38 = (- var_1_102) != 5.6;
 if ((var_1_86 != (var_1_39 * var_1_50)) && stepLocal_38) {
  if (stepLocal_39 >= var_1_14) {
   var_1_117 = var_1_112;
  } else {
   var_1_117 = var_1_86;
  }
 }
 signed long int stepLocal_19 = var_1_55 & (2 + var_1_55);
 signed long int stepLocal_18 = ~ ((((var_1_37) > (var_1_34)) ? (var_1_37) : (var_1_34)));
 if (stepLocal_18 <= (10 + var_1_42)) {
  if (var_1_41 < stepLocal_19) {
   var_1_48 = (((var_1_49 + var_1_50) - var_1_80) - var_1_39);
  } else {
   var_1_48 = ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)));
  }
 }
 signed long int stepLocal_20 = var_1_19;
 if (var_1_65) {
  if (var_1_48 != stepLocal_20) {
   var_1_51 = (var_1_35 + (var_1_34 + var_1_104));
  } else {
   var_1_51 = ((((var_1_12) > (var_1_39)) ? (var_1_12) : (var_1_39)));
  }
 } else {
  var_1_51 = (var_1_104 + ((((var_1_52) > (var_1_14)) ? (var_1_52) : (var_1_14))));
 }
 signed long int stepLocal_27 = (((var_1_16) < (var_1_86)) ? (var_1_16) : (var_1_86));
 if (! var_1_20) {
  if (stepLocal_27 == (25 << var_1_37)) {
   var_1_72 = (var_1_30 + var_1_29);
  } else {
   var_1_72 = (((7.900917138448385E18f - var_1_73) - var_1_29) - var_1_69);
  }
 } else {
  var_1_72 = (var_1_69 - var_1_73);
 }
 signed char stepLocal_29 = var_1_33;
 signed long int stepLocal_28 = var_1_70 * var_1_48;
 if (((((var_1_13) > (var_1_56)) ? (var_1_13) : (var_1_56))) < stepLocal_29) {
  if ((((((var_1_51) < (var_1_14)) ? (var_1_51) : (var_1_14))) << (var_1_75 + var_1_76)) != stepLocal_28) {
   var_1_74 = ((var_1_76 + (var_1_42 + var_1_75)) + var_1_41);
  } else {
   var_1_74 = ((var_1_77 - var_1_76) - ((((var_1_40 - var_1_75) < 0 ) ? -(var_1_40 - var_1_75) : (var_1_40 - var_1_75))));
  }
 }
 if (var_1_65) {
  var_1_78 = (((((var_1_42 - var_1_51) < 0 ) ? -(var_1_42 - var_1_51) : (var_1_42 - var_1_51))) - var_1_68);
 } else {
  var_1_78 = var_1_86;
 }
 if (var_1_108 >= var_1_14) {
  if ((2.5f / var_1_84) != var_1_69) {
   if (var_1_49 > (~ var_1_93)) {
    var_1_83 = ((((((((var_1_30) > (var_1_69)) ? (var_1_30) : (var_1_69)))) > (var_1_27)) ? (((((var_1_30) > (var_1_69)) ? (var_1_30) : (var_1_69)))) : (var_1_27)));
   }
  } else {
   var_1_83 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
  }
 } else {
  var_1_83 = (var_1_29 + (var_1_73 + var_1_85));
 }
 signed long int stepLocal_31 = var_1_107;
 if (stepLocal_31 != var_1_117) {
  var_1_88 = (var_1_23 && var_1_21);
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65535);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16384);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 8192);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 49150);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -1);
 assume_abort_if_not(var_1_19 <= 2147483646);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -127);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -127);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -1);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 63);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 31);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 31);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= 536870911);
 assume_abort_if_not(var_1_49 <= 1073741823);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= 536870911);
 assume_abort_if_not(var_1_50 <= 1073741823);
 var_1_52 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_52 >= -16383);
 assume_abort_if_not(var_1_52 <= 16383);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 1073741823);
 assume_abort_if_not(var_1_56 <= 2147483646);
 var_1_64 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_64 >= 16383);
 assume_abort_if_not(var_1_64 <= 32767);
 var_1_69 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427388000e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_70 >= -536870911);
 assume_abort_if_not(var_1_70 <= 536870911);
 var_1_73 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 12);
 var_1_76 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 11);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 190);
 assume_abort_if_not(var_1_77 <= 254);
 var_1_81 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_81 >= 2147483647);
 assume_abort_if_not(var_1_81 <= 4294967295);
 var_1_84 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_84 >= -922337.2036854776000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854776000e+12F && var_1_84 >= 1.0e-20F ));
 assume_abort_if_not(var_1_84 != 0.0F);
 var_1_85 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_85 >= -230584.3009213691400e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691400e+12F && var_1_85 >= 1.0e-20F ));
 var_1_87 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_87 >= -536870911);
 assume_abort_if_not(var_1_87 <= 536870911);
 var_1_90 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_90 >= 11);
 assume_abort_if_not(var_1_90 <= 23);
 var_1_91 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_91 >= 31);
 assume_abort_if_not(var_1_91 <= 63);
 var_1_92 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_92 >= 31);
 assume_abort_if_not(var_1_92 <= 63);
 var_1_95 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_95 >= 536870912);
 assume_abort_if_not(var_1_95 <= 1073741823);
 var_1_96 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_96 >= 1073741823);
 assume_abort_if_not(var_1_96 <= 2147483647);
 var_1_98 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_98 >= 0.0F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 4611686.018427383000e+12F && var_1_98 >= 1.0e-20F ));
 var_1_105 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_105 >= -32767);
 assume_abort_if_not(var_1_105 <= 32766);
 var_1_112 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_112 >= -127);
 assume_abort_if_not(var_1_112 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_113 = var_1_113;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_63 != ((((last_1_var_1_1) < (var_1_100)) ? (last_1_var_1_1) : (var_1_100)))) ? (((- var_1_5) >= (var_1_100 / var_1_7)) ? ((var_1_110 || var_1_113) ? (var_1_1 == ((unsigned short int) ((((var_1_6) > ((var_1_10 + 5))) ? (var_1_6) : ((var_1_10 + 5)))))) : (var_1_1 == ((unsigned short int) (var_1_6 + (var_1_11 + var_1_12))))) : (var_1_1 == ((unsigned short int) (var_1_12 + ((((var_1_6) > (var_1_10)) ? (var_1_6) : (var_1_10))))))) : ((var_1_7 >= last_1_var_1_1) ? (var_1_1 == ((unsigned short int) (var_1_13 - var_1_10))) : (var_1_1 == ((unsigned short int) (var_1_11 + ((var_1_14 + 64) + var_1_12)))))) && ((last_1_var_1_79 && (! last_1_var_1_79)) ? (((2 - (17647 - 256)) >= last_1_var_1_68) ? (var_1_15 == ((unsigned short int) (var_1_13 - var_1_10))) : (var_1_15 == ((unsigned short int) ((((var_1_6) < (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_6) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))))) : 1)) && (last_1_var_1_113 ? ((var_1_13 < var_1_7) ? ((last_1_var_1_48 > (5 + var_1_7)) ? (((last_1_var_1_48 / var_1_7) < (var_1_13 - last_1_var_1_100)) ? (var_1_16 == ((unsigned short int) (((((((((var_1_13) > (53301)) ? (var_1_13) : (53301))) - var_1_10)) > (50)) ? ((((((var_1_13) > (53301)) ? (var_1_13) : (53301))) - var_1_10)) : (50))))) : 1) : (var_1_16 == ((unsigned short int) ((((var_1_10) < (var_1_6)) ? (var_1_10) : (var_1_6)))))) : (var_1_16 == ((unsigned short int) (((((5) < 0 ) ? -(5) : (5))) + 128)))) : (var_1_16 == ((unsigned short int) ((var_1_17 - var_1_14) - var_1_6))))) && ((var_1_11 > var_1_114) ? (var_1_18 == ((signed long int) (var_1_19 - var_1_12))) : 1)) && (((var_1_31 + var_1_43) < (var_1_5 + var_1_14)) ? (var_1_20 == ((unsigned char) ((var_1_21 && var_1_22) && var_1_23))) : (var_1_20 == ((unsigned char) (var_1_24 || var_1_25))))) && (var_1_20 ? (var_1_26 == ((double) ((((var_1_27) > (4.25)) ? (var_1_27) : (4.25))))) : (var_1_26 == ((double) ((((var_1_27) < ((var_1_28 + (var_1_29 - var_1_30)))) ? (var_1_27) : ((var_1_28 + (var_1_29 - var_1_30))))))))) && (var_1_25 ? (((var_1_6 < (var_1_5 ^ var_1_16)) || (500 < var_1_68)) ? (var_1_110 ? ((var_1_53 && var_1_24) ? (var_1_31 == ((signed long int) ((((32) < 0 ) ? -(32) : (32))))) : (var_1_31 == ((signed long int) (((((((var_1_14 - var_1_1) < 0 ) ? -(var_1_14 - var_1_1) : (var_1_14 - var_1_1))) < 0 ) ? -((((var_1_14 - var_1_1) < 0 ) ? -(var_1_14 - var_1_1) : (var_1_14 - var_1_1))) : ((((var_1_14 - var_1_1) < 0 ) ? -(var_1_14 - var_1_1) : (var_1_14 - var_1_1)))))))) : 1) : (var_1_31 == ((signed long int) ((((5) < 0 ) ? -(5) : (5)))))) : (var_1_31 == ((signed long int) var_1_1)))) && ((var_1_11 < var_1_31) ? (var_1_32 == ((signed char) ((((((((var_1_33) < (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))) ? (var_1_33) : (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))))) < ((var_1_36 - var_1_37))) ? (((((var_1_33) < (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))) ? (var_1_33) : (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))))) : ((var_1_36 - var_1_37)))))) : (var_1_32 == ((signed char) ((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35))))))) && ((var_1_34 < var_1_44) ? (var_1_38 == ((unsigned char) (var_1_39 - (var_1_40 - (var_1_41 - var_1_42))))) : 1)) && ((! (var_1_27 >= var_1_30)) ? (var_1_43 == ((unsigned long int) last_1_var_1_43)) : (var_1_43 == ((unsigned long int) var_1_39)))) && ((var_1_63 == (- (- var_1_39))) ? (var_1_44 == ((signed long int) (var_1_71 + var_1_11))) : (var_1_44 == ((signed long int) ((((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36))))))) && ((! var_1_110) ? ((var_1_114 <= var_1_1) ? (var_1_45 == ((unsigned char) (! var_1_23))) : (var_1_45 == ((unsigned char) ((var_1_36 >= var_1_15) || ((var_1_24 || var_1_21) && (! var_1_25)))))) : (var_1_45 == ((unsigned char) (! (! (var_1_22 || var_1_21))))))) && (((var_1_107 | var_1_40) == var_1_16) ? (var_1_46 == ((float) (((((var_1_30 + var_1_28)) < (var_1_27)) ? ((var_1_30 + var_1_28)) : (var_1_27))))) : (var_1_46 == ((float) (16.292f + (((((var_1_30) > (0.5f)) ? (var_1_30) : (0.5f))) - var_1_29)))))) && ((((((var_1_10) < (var_1_33)) ? (var_1_10) : (var_1_33))) < var_1_114) ? (var_1_47 == ((signed short int) (((((var_1_36) < (var_1_42)) ? (var_1_36) : (var_1_42))) + (var_1_14 + var_1_37)))) : (var_1_47 == ((signed short int) ((((((((((((-256) < (var_1_35)) ? (-256) : (var_1_35)))) < (var_1_42)) ? (((((-256) < (var_1_35)) ? (-256) : (var_1_35)))) : (var_1_42)))) < ((var_1_36 + var_1_40))) ? (((((((((-256) < (var_1_35)) ? (-256) : (var_1_35)))) < (var_1_42)) ? (((((-256) < (var_1_35)) ? (-256) : (var_1_35)))) : (var_1_42)))) : ((var_1_36 + var_1_40)))))))) && (((~ ((((var_1_37) > (var_1_34)) ? (var_1_37) : (var_1_34)))) <= (10 + var_1_42)) ? ((var_1_41 < (var_1_55 & (2 + var_1_55))) ? (var_1_48 == ((signed long int) (((var_1_49 + var_1_50) - var_1_80) - var_1_39))) : (var_1_48 == ((signed long int) ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) : 1)) && (var_1_65 ? ((var_1_48 != var_1_19) ? (var_1_51 == ((signed short int) (var_1_35 + (var_1_34 + var_1_104)))) : (var_1_51 == ((signed short int) ((((var_1_12) > (var_1_39)) ? (var_1_12) : (var_1_39)))))) : (var_1_51 == ((signed short int) (var_1_104 + ((((var_1_52) > (var_1_14)) ? (var_1_52) : (var_1_14)))))))) && (var_1_53 == ((unsigned char) (var_1_22 && var_1_54)))) && ((var_1_36 > -16) ? (var_1_55 == ((signed long int) (var_1_44 - (((((var_1_56 - last_1_var_1_55)) > ((2069455995 - var_1_49))) ? ((var_1_56 - last_1_var_1_55)) : ((2069455995 - var_1_49))))))) : 1)) && (var_1_57 == ((float) ((((0.5f) > ((((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) < 0 ) ? -((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) : ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))) ? (0.5f) : ((((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) < 0 ) ? -((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) : ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))))))) && ((1000000000u > (((((var_1_13) > (var_1_7)) ? (var_1_13) : (var_1_7))) / var_1_41)) ? (var_1_58 == ((signed char) (((((var_1_36) > (var_1_41)) ? (var_1_36) : (var_1_41))) - var_1_37))) : 1)) && (((var_1_31 + var_1_49) < var_1_12) ? ((var_1_63 == (var_1_56 / var_1_17)) ? (((var_1_41 >> 4) < ((var_1_36 - var_1_31) * var_1_43)) ? (var_1_59 == ((float) (var_1_29 - var_1_30))) : 1) : (var_1_59 == ((float) (((((var_1_29) < (var_1_30)) ? (var_1_29) : (var_1_30))) - 25.5f)))) : 1)) && ((-128 <= var_1_80) ? (var_1_113 ? (var_1_60 == ((double) ((var_1_29 - var_1_30) + var_1_28))) : 1) : ((var_1_50 < var_1_68) ? (var_1_60 == ((double) ((var_1_29 + 31.9) - var_1_30))) : 1))) && (((var_1_97 * var_1_28) >= 255.8) ? ((var_1_35 != (-1 ^ var_1_14)) ? (var_1_62 == ((signed char) var_1_42)) : 1) : 1)) && (((50 * var_1_100) <= (((((var_1_109) > (var_1_107)) ? (var_1_109) : (var_1_107))) - var_1_12)) ? (var_1_24 ? (var_1_63 == ((unsigned short int) (var_1_13 - (var_1_64 - var_1_14)))) : (var_1_63 == ((unsigned short int) ((59231 - 25) - var_1_11)))) : ((var_1_12 >= (var_1_49 + 25)) ? ((var_1_22 && var_1_23) ? (var_1_63 == ((unsigned short int) (var_1_17 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))) : 1) : 1))) && ((var_1_23 && var_1_79) ? (var_1_65 == ((unsigned char) (var_1_79 && var_1_24))) : 1)) && (((var_1_13 % var_1_64) >= var_1_99) ? (var_1_67 == ((signed char) (var_1_41 + var_1_42))) : (var_1_67 == ((signed char) ((((var_1_34) < (var_1_41)) ? (var_1_34) : (var_1_41))))))) && (var_1_45 ? ((((- var_1_101) / 100.6f) > -0.25f) ? (var_1_68 == ((signed long int) -4)) : ((var_1_28 >= (var_1_29 - (var_1_30 + var_1_69))) ? (var_1_68 == ((signed long int) ((var_1_13 + var_1_36) + var_1_5))) : (var_1_68 == ((signed long int) ((((var_1_99) > ((var_1_14 - var_1_15))) ? (var_1_99) : ((var_1_14 - var_1_15)))))))) : (var_1_68 == ((signed long int) (last_1_var_1_68 + (var_1_11 + var_1_70)))))) && (((var_1_114 <= (- var_1_41)) && (! var_1_110)) ? (var_1_71 == ((unsigned char) (((((((((var_1_39 - 100)) < (var_1_37)) ? ((var_1_39 - 100)) : (var_1_37)))) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? ((((((var_1_39 - 100)) < (var_1_37)) ? ((var_1_39 - 100)) : (var_1_37)))) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))))))) : (var_1_71 == ((unsigned char) (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) + 64))))) && ((! var_1_20) ? ((((((var_1_16) < (var_1_86)) ? (var_1_16) : (var_1_86))) == (25 << var_1_37)) ? (var_1_72 == ((float) (var_1_30 + var_1_29))) : (var_1_72 == ((float) (((7.900917138448385E18f - var_1_73) - var_1_29) - var_1_69)))) : (var_1_72 == ((float) (var_1_69 - var_1_73))))) && ((((((var_1_13) > (var_1_56)) ? (var_1_13) : (var_1_56))) < var_1_33) ? (((((((var_1_51) < (var_1_14)) ? (var_1_51) : (var_1_14))) << (var_1_75 + var_1_76)) != (var_1_70 * var_1_48)) ? (var_1_74 == ((unsigned char) ((var_1_76 + (var_1_42 + var_1_75)) + var_1_41))) : (var_1_74 == ((unsigned char) ((var_1_77 - var_1_76) - ((((var_1_40 - var_1_75) < 0 ) ? -(var_1_40 - var_1_75) : (var_1_40 - var_1_75))))))) : 1)) && (var_1_65 ? (var_1_78 == ((signed short int) (((((var_1_42 - var_1_51) < 0 ) ? -(var_1_42 - var_1_51) : (var_1_42 - var_1_51))) - var_1_68))) : (var_1_78 == ((signed short int) var_1_86)))) && (var_1_79 == ((unsigned char) (var_1_54 || var_1_24)))) && (((var_1_81 - (var_1_56 - var_1_49)) <= var_1_42) ? (((var_1_99 * var_1_49) <= ((((64) < (((((1) < 0 ) ? -(1) : (1))))) ? (64) : (((((1) < 0 ) ? -(1) : (1))))))) ? (var_1_80 == ((unsigned long int) ((((var_1_37) < ((1000000000u + var_1_68))) ? (var_1_37) : ((1000000000u + var_1_68)))))) : (var_1_80 == ((unsigned long int) (((((2u + var_1_6) < 0 ) ? -(2u + var_1_6) : (2u + var_1_6))) + var_1_104)))) : ((var_1_11 >= var_1_16) ? (var_1_80 == ((unsigned long int) var_1_18)) : 1))) && ((var_1_108 >= var_1_14) ? (((2.5f / var_1_84) != var_1_69) ? ((var_1_49 > (~ var_1_93)) ? (var_1_83 == ((float) ((((((((var_1_30) > (var_1_69)) ? (var_1_30) : (var_1_69)))) > (var_1_27)) ? (((((var_1_30) > (var_1_69)) ? (var_1_30) : (var_1_69)))) : (var_1_27))))) : 1) : (var_1_83 == ((float) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))) : (var_1_83 == ((float) (var_1_29 + (var_1_73 + var_1_85)))))) && (((- var_1_18) != var_1_109) ? (var_1_86 == ((signed long int) ((var_1_56 - var_1_6) - var_1_55))) : (var_1_86 == ((signed long int) ((((var_1_56) > ((var_1_93 + (var_1_17 + var_1_87)))) ? (var_1_56) : ((var_1_93 + (var_1_17 + var_1_87))))))))) && ((var_1_107 != var_1_117) ? (var_1_88 == ((unsigned char) (var_1_23 && var_1_21))) : 1)) && ((var_1_79 && (var_1_107 >= var_1_42)) ? (((((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80))) << (var_1_90 - var_1_76)) >= ((var_1_13 * var_1_64) / var_1_49)) ? (var_1_53 ? (var_1_89 == ((signed char) (var_1_42 + ((var_1_41 - var_1_90) - (var_1_91 - 25))))) : (var_1_89 == ((signed char) ((((var_1_91) < (var_1_37)) ? (var_1_91) : (var_1_37)))))) : (var_1_89 == ((signed char) (var_1_90 - ((var_1_41 - 5) + (var_1_92 - var_1_76)))))) : 1)) && ((var_1_45 || var_1_65) ? (var_1_93 == ((unsigned long int) (((var_1_49 + var_1_95) - var_1_6) + (((((var_1_56) > (var_1_96)) ? (var_1_56) : (var_1_96))) - var_1_37)))) : 1)) && ((var_1_114 < var_1_99) ? (((var_1_90 * var_1_52) <= var_1_77) ? (var_1_97 == ((float) (((((var_1_73) < (var_1_29)) ? (var_1_73) : (var_1_29))) - (var_1_30 + var_1_98)))) : (var_1_97 == ((float) (((((var_1_69) > (var_1_30)) ? (var_1_69) : (var_1_30))) - var_1_73)))) : 1)) && (var_1_113 ? ((-128 > var_1_36) ? (var_1_99 == ((unsigned long int) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (var_1_99 == ((unsigned long int) (var_1_63 + (((((((var_1_76) > (var_1_12)) ? (var_1_76) : (var_1_12))) < 0 ) ? -((((var_1_76) > (var_1_12)) ? (var_1_76) : (var_1_12))) : ((((var_1_76) > (var_1_12)) ? (var_1_76) : (var_1_12))))))))) : (var_1_99 == ((unsigned long int) ((((var_1_95 + (1813181672u - var_1_91)) < 0 ) ? -(var_1_95 + (1813181672u - var_1_91)) : (var_1_95 + (1813181672u - var_1_91)))))))) && ((var_1_28 <= var_1_27) ? ((var_1_43 <= (last_1_var_1_100 + 4)) ? ((var_1_76 == var_1_19) ? (var_1_100 == ((signed long int) var_1_95)) : 1) : 1) : 1)) && ((var_1_90 == (var_1_63 + var_1_99)) ? (var_1_101 == ((double) var_1_27)) : (var_1_101 == ((double) var_1_29)))) && (var_1_79 ? (var_1_102 == ((double) var_1_27)) : 1)) && (var_1_53 ? (var_1_103 == ((signed short int) var_1_91)) : (var_1_103 == ((signed short int) var_1_14)))) && (var_1_104 == ((signed short int) var_1_105))) && (var_1_113 ? (var_1_106 == ((signed short int) var_1_63)) : (var_1_106 == ((signed short int) var_1_40)))) && (var_1_107 == ((signed long int) var_1_49))) && (var_1_20 ? (var_1_108 == ((unsigned char) var_1_77)) : 1)) && (var_1_109 == ((unsigned long int) var_1_77))) && (var_1_54 ? (var_1_110 == ((unsigned char) var_1_24)) : (var_1_110 == ((unsigned char) var_1_25)))) && (var_1_115 ? (var_1_111 == ((signed char) var_1_112)) : (var_1_111 == ((signed char) var_1_42)))) && (var_1_22 ? (var_1_113 == ((unsigned char) var_1_25)) : (var_1_113 == ((unsigned char) var_1_21)))) && (var_1_114 == ((signed long int) var_1_34))) && (var_1_115 == ((unsigned char) var_1_21))) && (var_1_24 ? (var_1_116 == ((float) var_1_27)) : 1)) && (((var_1_86 != (var_1_39 * var_1_50)) && ((- var_1_102) != 5.6)) ? (((var_1_5 * var_1_86) >= var_1_14) ? (var_1_117 == ((signed short int) var_1_112)) : (var_1_117 == ((signed short int) var_1_86))) : 1)
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

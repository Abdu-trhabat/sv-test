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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed char var_1_3 = -4;
unsigned char var_1_5 = 32;
unsigned char var_1_6 = 0;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 200;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
signed short int var_1_19 = 16;
float var_1_21 = 64.9;
float var_1_23 = 2.5;
float var_1_24 = 5.5;
float var_1_25 = 0.1;
float var_1_26 = 100.65;
float var_1_27 = 128.375;
float var_1_28 = 8.1;
float var_1_29 = 2.75;
unsigned char var_1_30 = 1;
float var_1_33 = 0.0;
float var_1_34 = 0.0;
float var_1_35 = 256.5;
unsigned char var_1_36 = 4;
unsigned short int var_1_37 = 2;
unsigned short int var_1_39 = 57610;
unsigned char var_1_40 = 0;
signed char var_1_41 = -16;
signed char var_1_42 = 10;
signed char var_1_43 = 8;
signed long int var_1_44 = -16;
signed long int var_1_45 = 2002374506;
unsigned short int var_1_46 = 32;
unsigned long int var_1_47 = 16;
float var_1_48 = 32.5;
float var_1_49 = 255.8;
float var_1_50 = 9.5;
float var_1_51 = 0.0;
float var_1_52 = 0.0;
signed short int var_1_53 = 0;
signed short int var_1_54 = 2;
unsigned short int var_1_55 = 0;
unsigned long int var_1_56 = 50;
unsigned long int var_1_57 = 2368596538;
signed short int var_1_58 = 64;
signed short int var_1_59 = 16870;
unsigned char var_1_60 = 50;
unsigned char var_1_61 = 248;
unsigned char var_1_62 = 1;
signed short int var_1_64 = 2;
double var_1_65 = -0.05;
double var_1_68 = 15.875;
float var_1_69 = 9999999999.25;
float var_1_70 = 49.875;
float var_1_71 = 0.0;
signed char var_1_72 = -10;
signed char var_1_73 = 64;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 32;
unsigned char var_1_76 = 5;
signed short int var_1_77 = 8;
unsigned short int var_1_78 = 100;
unsigned char var_1_80 = 50;
unsigned char var_1_81 = 2;
signed short int var_1_82 = 128;
signed char var_1_83 = 5;
signed char var_1_84 = -25;
double var_1_85 = 100.2;
unsigned short int var_1_86 = 256;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 0;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 128;
double var_1_91 = 128.4;
double var_1_92 = 255.3;
unsigned long int var_1_93 = 256;
unsigned long int var_1_94 = 1511112344;
unsigned long int var_1_95 = 1741059029;
signed long int var_1_96 = 8;
signed short int var_1_97 = -256;
signed short int var_1_98 = 0;
signed short int var_1_99 = 10000;
signed short int var_1_100 = 10000;
signed long int var_1_101 = -8;
unsigned short int var_1_102 = 4;
unsigned short int var_1_103 = 100;
unsigned short int var_1_105 = 20201;
unsigned char var_1_106 = 5;
double var_1_107 = 16.3;
unsigned short int var_1_108 = 8;
signed short int var_1_109 = 4;
signed short int var_1_110 = -500;
float var_1_111 = 1000000000000000.8;
unsigned long int var_1_112 = 32;
unsigned short int var_1_113 = 1;
signed char var_1_114 = -1;
signed long int var_1_115 = 10000000;
unsigned char var_1_116 = 1;
signed char var_1_117 = -10;
float var_1_118 = 16.5;
double var_1_119 = 9.75;
unsigned short int var_1_120 = 64;
unsigned char last_1_var_1_1 = 1;
signed short int last_1_var_1_19 = 16;
unsigned short int last_1_var_1_37 = 2;
unsigned char last_1_var_1_40 = 0;
signed long int last_1_var_1_44 = -16;
unsigned short int last_1_var_1_46 = 32;
unsigned long int last_1_var_1_47 = 16;
double last_1_var_1_65 = -0.05;
double last_1_var_1_91 = 128.4;
unsigned long int last_1_var_1_93 = 256;
unsigned short int last_1_var_1_103 = 100;
unsigned short int last_1_var_1_108 = 8;
unsigned char last_1_var_1_116 = 1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_17 = last_1_var_1_116;
 signed long int stepLocal_16 = last_1_var_1_44;
 if ((- var_1_11) < stepLocal_16) {
  var_1_60 = (((var_1_61 - var_1_54) - (8 + var_1_62)) - var_1_10);
 } else {
  if ((last_1_var_1_37 != last_1_var_1_93) || stepLocal_17) {
   var_1_60 = (var_1_62 + var_1_54);
  }
 }
 unsigned char stepLocal_37 = last_1_var_1_116;
 unsigned char stepLocal_36 = var_1_18;
 signed long int stepLocal_35 = (19746 - 64) << 4;
 unsigned char stepLocal_34 = var_1_30;
 if (last_1_var_1_40 && stepLocal_34) {
  if ((last_1_var_1_108 == last_1_var_1_47) && stepLocal_37) {
   var_1_103 = (var_1_39 - var_1_9);
  } else {
   if (stepLocal_35 >= last_1_var_1_103) {
    if (last_1_var_1_116 && stepLocal_36) {
     var_1_103 = (var_1_39 - (var_1_10 + var_1_12));
    } else {
     var_1_103 = (((((var_1_81 + (var_1_105 - var_1_13))) > ((((((46288) > (var_1_39)) ? (46288) : (var_1_39))) - var_1_12))) ? ((var_1_81 + (var_1_105 - var_1_13))) : ((((((46288) > (var_1_39)) ? (46288) : (var_1_39))) - var_1_12))));
    }
   } else {
    if ((var_1_24 * var_1_33) >= var_1_28) {
     var_1_103 = ((((var_1_39 - (23813 - var_1_6)) < 0 ) ? -(var_1_39 - (23813 - var_1_6)) : (var_1_39 - (23813 - var_1_6))));
    } else {
     var_1_103 = (var_1_61 + var_1_59);
    }
   }
  }
 } else {
  if (var_1_49 != var_1_29) {
   var_1_103 = var_1_62;
  } else {
   var_1_103 = var_1_6;
  }
 }
 if (var_1_24 <= last_1_var_1_91) {
  if (var_1_8 < (32 * (last_1_var_1_44 / var_1_11))) {
   var_1_40 = var_1_30;
  }
 }
 if (var_1_40) {
  var_1_84 = (32 + ((((var_1_61) > ((var_1_76 + var_1_62))) ? (var_1_61) : ((var_1_76 + var_1_62)))));
 }
 var_1_64 = ((((var_1_54) > (((var_1_84 + var_1_6) + var_1_42))) ? (var_1_54) : (((var_1_84 + var_1_6) + var_1_42))));
 if (var_1_33 == var_1_24) {
  var_1_36 = (var_1_9 - var_1_12);
 }
 var_1_41 = (var_1_42 - var_1_43);
 var_1_55 = (var_1_39 - (256 + ((((var_1_43) > (128)) ? (var_1_43) : (128)))));
 if (var_1_10 <= var_1_13) {
  var_1_56 = (var_1_57 - var_1_11);
 }
 var_1_68 = var_1_49;
 unsigned long int stepLocal_21 = var_1_57;
 if (stepLocal_21 >= var_1_45) {
  var_1_69 = ((((((((((((256.55f) < (var_1_27)) ? (256.55f) : (var_1_27)))) < (24.4f)) ? (((((256.55f) < (var_1_27)) ? (256.55f) : (var_1_27)))) : (24.4f)))) > (var_1_34)) ? (((((((((256.55f) < (var_1_27)) ? (256.55f) : (var_1_27)))) < (24.4f)) ? (((((256.55f) < (var_1_27)) ? (256.55f) : (var_1_27)))) : (24.4f)))) : (var_1_34)));
 } else {
  var_1_69 = ((((((((((((var_1_24) > (9.75f)) ? (var_1_24) : (9.75f)))) > (var_1_33)) ? (((((var_1_24) > (9.75f)) ? (var_1_24) : (9.75f)))) : (var_1_33)))) < (var_1_28)) ? (((((((((var_1_24) > (9.75f)) ? (var_1_24) : (9.75f)))) > (var_1_33)) ? (((((var_1_24) > (9.75f)) ? (var_1_24) : (9.75f)))) : (var_1_33)))) : (var_1_28)));
 }
 var_1_80 = (var_1_81 + var_1_12);
 if (var_1_16) {
  var_1_90 = ((var_1_76 + var_1_75) + var_1_10);
 } else {
  var_1_90 = var_1_11;
 }
 signed long int stepLocal_33 = var_1_13 / (var_1_102 + var_1_11);
 if (stepLocal_33 > var_1_54) {
  var_1_101 = (50 - var_1_61);
 }
 var_1_106 = var_1_54;
 if (var_1_18) {
  var_1_107 = var_1_26;
 } else {
  var_1_107 = var_1_33;
 }
 var_1_108 = var_1_56;
 if (var_1_88) {
  var_1_109 = var_1_110;
 }
 if (var_1_88) {
  var_1_112 = var_1_105;
 }
 var_1_113 = var_1_61;
 if (var_1_30) {
  var_1_115 = var_1_105;
 } else {
  var_1_115 = var_1_108;
 }
 var_1_116 = var_1_88;
 var_1_117 = var_1_73;
 if (var_1_89) {
  var_1_119 = var_1_23;
 }
 if (((-128 + var_1_112) + ((((-5) > (-50)) ? (-5) : (-50)))) > (var_1_12 - 50)) {
  if (var_1_59 < (64 | var_1_12)) {
   var_1_120 = var_1_81;
  } else {
   var_1_120 = var_1_106;
  }
 }
 signed long int stepLocal_2 = (((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10));
 unsigned char stepLocal_1 = var_1_9;
 unsigned char stepLocal_0 = var_1_40;
 if ((var_1_12 * var_1_3) <= stepLocal_2) {
  if (stepLocal_0 || var_1_116) {
   if (((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))) < stepLocal_1) {
    var_1_14 = (var_1_16 && var_1_17);
   } else {
    var_1_14 = (var_1_16 && (var_1_17 || var_1_18));
   }
  }
 }
 if (var_1_49 >= (var_1_50 - (5.273781522086461E18f - var_1_34))) {
  if (var_1_116 || ((var_1_120 - var_1_8) != -25)) {
   if (var_1_115 > var_1_80) {
    if (var_1_54 == (var_1_39 / ((((2) < (32)) ? (2) : (32))))) {
     var_1_72 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
    } else {
     var_1_72 = ((((((var_1_73 - var_1_54) - (1 + var_1_62))) > (var_1_61)) ? (((var_1_73 - var_1_54) - (1 + var_1_62))) : (var_1_61)));
    }
   } else {
    var_1_72 = ((((var_1_73) < (((((var_1_43) > ((-1 - var_1_62))) ? (var_1_43) : ((-1 - var_1_62)))))) ? (var_1_73) : (((((var_1_43) > ((-1 - var_1_62))) ? (var_1_43) : ((-1 - var_1_62)))))));
   }
  }
 }
 signed long int stepLocal_27 = var_1_101;
 if ((- var_1_81) > stepLocal_27) {
  var_1_85 = var_1_52;
 }
 if (var_1_116) {
  var_1_87 = (! (var_1_88 || var_1_89));
 } else {
  var_1_87 = ((var_1_30 && var_1_18) && var_1_16);
 }
 unsigned long int stepLocal_31 = var_1_112;
 if (stepLocal_31 > ((var_1_39 - var_1_9) / var_1_12)) {
  var_1_97 = var_1_81;
 } else {
  var_1_97 = var_1_11;
 }
 if (var_1_116) {
  var_1_111 = 127.375f;
 }
 if (var_1_14) {
  var_1_114 = var_1_61;
 } else {
  var_1_114 = var_1_73;
 }
 if (var_1_87) {
  var_1_118 = var_1_24;
 } else {
  var_1_118 = var_1_34;
 }
 if (var_1_85 == (- var_1_33)) {
  var_1_93 = (var_1_103 + (var_1_94 - var_1_81));
 } else {
  var_1_93 = ((var_1_73 + var_1_112) + (((((var_1_94) > (var_1_95)) ? (var_1_94) : (var_1_95))) - var_1_56));
 }
 if ((last_1_var_1_1 / ((((8) < (var_1_3)) ? (8) : (var_1_3)))) >= var_1_115) {
  if (! (((((var_1_115) < (last_1_var_1_1)) ? (var_1_115) : (last_1_var_1_1))) >= (5 / var_1_3))) {
   var_1_1 = ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)));
  } else {
   if (var_1_87) {
    var_1_1 = (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10);
   } else {
    var_1_1 = ((var_1_11 + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) - ((((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13))));
   }
  }
 }
 unsigned long int stepLocal_8 = var_1_3 * (var_1_56 * var_1_8);
 if (var_1_85 < var_1_25) {
  if ((last_1_var_1_46 + var_1_120) < stepLocal_8) {
   var_1_46 = ((((256) > (var_1_6)) ? (256) : (var_1_6)));
  } else {
   var_1_46 = var_1_12;
  }
 }
 signed char stepLocal_22 = var_1_42;
 if (! var_1_18) {
  var_1_70 = (var_1_51 - ((var_1_49 + var_1_71) + var_1_34));
 } else {
  if (stepLocal_22 > (-128 + var_1_93)) {
   var_1_70 = ((((((((var_1_52) > (var_1_29)) ? (var_1_52) : (var_1_29)))) < (var_1_34)) ? (((((var_1_52) > (var_1_29)) ? (var_1_52) : (var_1_29)))) : (var_1_34)));
  } else {
   var_1_70 = ((((var_1_52) < ((var_1_51 - var_1_24))) ? (var_1_52) : ((var_1_51 - var_1_24))));
  }
 }
 if (! (((((var_1_29) > (var_1_28)) ? (var_1_29) : (var_1_28))) >= var_1_107)) {
  var_1_77 = (var_1_97 + var_1_12);
 }
 if (var_1_46 >= var_1_57) {
  var_1_82 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
 } else {
  var_1_82 = (((((var_1_61) < (var_1_77)) ? (var_1_61) : (var_1_77))) - var_1_62);
 }
 signed long int stepLocal_30 = var_1_75 - var_1_10;
 if (var_1_16) {
  if (var_1_40) {
   if (var_1_18) {
    var_1_96 = ((((((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8)))) < (var_1_13)) ? (((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8)))) : (var_1_13)));
   } else {
    if (var_1_88) {
     var_1_96 = var_1_62;
    } else {
     var_1_96 = (((((var_1_101) < 0 ) ? -(var_1_101) : (var_1_101))) + (var_1_75 + var_1_43));
    }
   }
  } else {
   var_1_96 = ((((var_1_76) < (var_1_39)) ? (var_1_76) : (var_1_39)));
  }
 } else {
  if (var_1_30) {
   if (var_1_43 >= stepLocal_30) {
    var_1_96 = (var_1_59 + ((((var_1_120) < (var_1_64)) ? (var_1_120) : (var_1_64))));
   } else {
    var_1_96 = ((var_1_112 - var_1_82) + ((var_1_60 - var_1_9) + (var_1_101 + var_1_13)));
   }
  }
 }
 signed long int stepLocal_28 = - var_1_8;
 if (var_1_96 <= stepLocal_28) {
  var_1_86 = ((var_1_39 - var_1_13) - (var_1_115 + var_1_90));
 }
 unsigned short int stepLocal_32 = var_1_103;
 if (var_1_1 >= stepLocal_32) {
  var_1_98 = ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)));
 } else {
  var_1_98 = (((var_1_99 + var_1_100) - var_1_10) - var_1_5);
 }
 signed long int stepLocal_15 = var_1_13 >> 2;
 signed short int stepLocal_14 = var_1_82;
 signed char stepLocal_13 = var_1_84;
 if (stepLocal_14 >= var_1_120) {
  var_1_58 = ((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)));
 } else {
  if (stepLocal_13 < var_1_120) {
   if (var_1_84 < stepLocal_15) {
    var_1_58 = var_1_3;
   } else {
    var_1_58 = ((var_1_59 - (var_1_6 + var_1_54)) - ((((256) > (var_1_55)) ? (256) : (var_1_55))));
   }
  } else {
   var_1_58 = ((((var_1_5 - 25) < 0 ) ? -(var_1_5 - 25) : (var_1_5 - 25)));
  }
 }
 unsigned char stepLocal_4 = var_1_10;
 if (var_1_40) {
  if (var_1_116) {
   if (var_1_16) {
    if (var_1_87) {
     var_1_21 = ((((var_1_23) < ((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) - var_1_26))) ? (var_1_23) : ((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) - var_1_26))));
    } else {
     var_1_21 = (var_1_24 - ((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))));
    }
   } else {
    var_1_21 = ((var_1_27 + var_1_28) + var_1_29);
   }
  } else {
   if (stepLocal_4 < (var_1_98 * var_1_55)) {
    var_1_21 = ((var_1_33 - (var_1_34 - 64.25f)) - var_1_26);
   } else {
    var_1_21 = var_1_24;
   }
  }
 } else {
  var_1_21 = (var_1_33 - var_1_34);
 }
 unsigned char stepLocal_11 = var_1_18;
 signed long int stepLocal_10 = var_1_77 * (~ var_1_11);
 signed long int stepLocal_9 = (((var_1_39) < (var_1_77)) ? (var_1_39) : (var_1_77));
 if (stepLocal_11 && (var_1_101 != var_1_109)) {
  var_1_48 = var_1_28;
 } else {
  if (stepLocal_9 <= var_1_120) {
   if (var_1_87) {
    if (stepLocal_10 <= var_1_5) {
     var_1_48 = var_1_34;
    } else {
     var_1_48 = (((var_1_34 - var_1_49) - var_1_50) + var_1_28);
    }
   } else {
    var_1_48 = (var_1_33 - (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))) - var_1_50));
   }
  }
 }
 signed long int stepLocal_20 = ((((-128 ^ -2)) < (var_1_39)) ? ((-128 ^ -2)) : (var_1_39));
 unsigned short int stepLocal_19 = var_1_113;
 signed short int stepLocal_18 = var_1_98;
 if (var_1_42 >= stepLocal_19) {
  if (10 >= stepLocal_20) {
   if ((((((- var_1_118)) < (var_1_27)) ? ((- var_1_118)) : (var_1_27))) > last_1_var_1_65) {
    var_1_65 = (var_1_34 + var_1_27);
   } else {
    var_1_65 = var_1_27;
   }
  }
 } else {
  if (stepLocal_18 > ((((var_1_39) > (var_1_5)) ? (var_1_39) : (var_1_5)))) {
   var_1_65 = var_1_26;
  }
 }
 unsigned long int stepLocal_24 = - var_1_57;
 signed long int stepLocal_23 = var_1_101 + var_1_77;
 if ((((((var_1_45 + var_1_56)) < (var_1_13)) ? ((var_1_45 + var_1_56)) : (var_1_13))) == stepLocal_24) {
  var_1_74 = (var_1_43 + (((((var_1_54) < (var_1_62)) ? (var_1_54) : (var_1_62))) + (var_1_75 - var_1_76)));
 } else {
  if ((var_1_56 / var_1_61) == stepLocal_23) {
   var_1_74 = var_1_6;
  } else {
   var_1_74 = ((((var_1_61 - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < 0 ) ? -(var_1_61 - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (var_1_61 - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))));
  }
 }
 unsigned char stepLocal_26 = var_1_116;
 if ((var_1_14 && (var_1_17 && var_1_18)) && stepLocal_26) {
  if (var_1_69 > (var_1_21 * var_1_25)) {
   var_1_83 = (((((((var_1_62) < (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76))))) ? (var_1_62) : (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76)))))) < 0 ) ? -((((var_1_62) < (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76))))) ? (var_1_62) : (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76)))))) : ((((var_1_62) < (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76))))) ? (var_1_62) : (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76))))))));
  } else {
   var_1_83 = ((((var_1_73) > (var_1_61)) ? (var_1_73) : (var_1_61)));
  }
 } else {
  if (var_1_116) {
   var_1_83 = ((((var_1_75) > (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) ? (var_1_75) : (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))));
  } else {
   var_1_83 = (((((var_1_76 + var_1_54)) < (100)) ? ((var_1_76 + var_1_54)) : (100)));
  }
 }
 if (var_1_98 >= var_1_103) {
  if (var_1_87 && var_1_116) {
   var_1_44 = (var_1_98 + (((((var_1_60 - var_1_12)) > (var_1_9)) ? ((var_1_60 - var_1_12)) : (var_1_9))));
  } else {
   var_1_44 = ((var_1_45 - var_1_55) - var_1_8);
  }
 }
 signed long int stepLocal_12 = -2;
 if (var_1_116) {
  var_1_53 = (((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64)))));
 } else {
  if ((var_1_96 * (var_1_90 >> var_1_54)) != stepLocal_12) {
   var_1_53 = (((((26769 - var_1_98) - var_1_6) < 0 ) ? -((26769 - var_1_98) - var_1_6) : ((26769 - var_1_98) - var_1_6)));
  }
 }
 if ((((((-5) > (var_1_97)) ? (-5) : (var_1_97))) & (var_1_13 << 1)) > var_1_3) {
  var_1_47 = ((((var_1_53) > (var_1_58)) ? (var_1_53) : (var_1_58)));
 } else {
  var_1_47 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
 }
 unsigned char stepLocal_7 = (- var_1_85) > var_1_29;
 unsigned long int stepLocal_6 = var_1_11 * var_1_47;
 if (stepLocal_7 && var_1_17) {
  if (var_1_6 >= stepLocal_6) {
   var_1_37 = (((((128 + var_1_6)) > (var_1_86)) ? ((128 + var_1_6)) : (var_1_86)));
  } else {
   var_1_37 = var_1_10;
  }
 } else {
  var_1_37 = ((var_1_39 - var_1_10) - var_1_5);
 }
 unsigned long int stepLocal_25 = var_1_47 + var_1_77;
 if (var_1_10 < stepLocal_25) {
  var_1_78 = ((var_1_5 + (10000 - var_1_13)) + var_1_75);
 }
 signed long int stepLocal_29 = ~ var_1_78;
 if (-4 == stepLocal_29) {
  var_1_91 = var_1_92;
 }
 unsigned char stepLocal_3 = var_1_11;
 if (stepLocal_3 == ((- last_1_var_1_19) * (var_1_47 & 8))) {
  var_1_19 = ((((var_1_9) < (var_1_3)) ? (var_1_9) : (var_1_3)));
 } else {
  var_1_19 = ((((var_1_10) > (-1)) ? (var_1_10) : (-1)));
 }
 unsigned long int stepLocal_5 = var_1_47;
 if (var_1_34 >= var_1_27) {
  if (var_1_9 > stepLocal_5) {
   if (var_1_25 <= var_1_29) {
    var_1_35 = (((((var_1_34 + var_1_29)) < (var_1_24)) ? ((var_1_34 + var_1_29)) : (var_1_24)));
   } else {
    var_1_35 = var_1_29;
   }
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 127);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 127);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 63);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 64);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 2305843.009213691400e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 49150);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -1);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= 1073741822);
 assume_abort_if_not(var_1_45 <= 2147483646);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 4611686.018427383000e+12F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 4611686.018427383000e+12F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 7);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 2147483647);
 assume_abort_if_not(var_1_57 <= 4294967294);
 var_1_59 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_59 >= 16382);
 assume_abort_if_not(var_1_59 <= 32766);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 222);
 assume_abort_if_not(var_1_61 <= 254);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 31);
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_73 >= 62);
 assume_abort_if_not(var_1_73 <= 126);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 31);
 assume_abort_if_not(var_1_75 <= 63);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 31);
 var_1_81 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 127);
 var_1_88 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_88 >= 0);
 assume_abort_if_not(var_1_88 <= 0);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 0);
 var_1_92 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_92 >= -922337.2036854766000e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 9223372.036854766000e+12F && var_1_92 >= 1.0e-20F ));
 var_1_94 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_94 >= 1073741823);
 assume_abort_if_not(var_1_94 <= 2147483647);
 var_1_95 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_95 >= 1073741823);
 assume_abort_if_not(var_1_95 <= 2147483647);
 var_1_99 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_99 >= 8191);
 assume_abort_if_not(var_1_99 <= 16383);
 var_1_100 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_100 >= 8191);
 assume_abort_if_not(var_1_100 <= 16383);
 var_1_102 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_102 >= 1);
 assume_abort_if_not(var_1_102 <= 32768);
 var_1_105 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_105 >= 16383);
 assume_abort_if_not(var_1_105 <= 32767);
 var_1_110 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_110 >= -32767);
 assume_abort_if_not(var_1_110 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_103 = var_1_103;
 last_1_var_1_108 = var_1_108;
 last_1_var_1_116 = var_1_116;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_1 / ((((8) < (var_1_3)) ? (8) : (var_1_3)))) >= var_1_115) ? ((! (((((var_1_115) < (last_1_var_1_1)) ? (var_1_115) : (last_1_var_1_1))) >= (5 / var_1_3))) ? (var_1_1 == ((unsigned char) ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) : (var_1_87 ? (var_1_1 == ((unsigned char) (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10))) : (var_1_1 == ((unsigned char) ((var_1_11 + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) - ((((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13)))))))) : 1) && (((var_1_12 * var_1_3) <= ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) ? ((var_1_40 || var_1_116) ? ((((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))) < var_1_9) ? (var_1_14 == ((unsigned char) (var_1_16 && var_1_17))) : (var_1_14 == ((unsigned char) (var_1_16 && (var_1_17 || var_1_18))))) : 1) : 1)) && ((var_1_11 == ((- last_1_var_1_19) * (var_1_47 & 8))) ? (var_1_19 == ((signed short int) ((((var_1_9) < (var_1_3)) ? (var_1_9) : (var_1_3))))) : (var_1_19 == ((signed short int) ((((var_1_10) > (-1)) ? (var_1_10) : (-1))))))) && (var_1_40 ? (var_1_116 ? (var_1_16 ? (var_1_87 ? (var_1_21 == ((float) ((((var_1_23) < ((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) - var_1_26))) ? (var_1_23) : ((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) - var_1_26)))))) : (var_1_21 == ((float) (var_1_24 - ((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))))))) : (var_1_21 == ((float) ((var_1_27 + var_1_28) + var_1_29)))) : ((var_1_10 < (var_1_98 * var_1_55)) ? (var_1_21 == ((float) ((var_1_33 - (var_1_34 - 64.25f)) - var_1_26))) : (var_1_21 == ((float) var_1_24)))) : (var_1_21 == ((float) (var_1_33 - var_1_34))))) && ((var_1_34 >= var_1_27) ? ((var_1_9 > var_1_47) ? ((var_1_25 <= var_1_29) ? (var_1_35 == ((float) (((((var_1_34 + var_1_29)) < (var_1_24)) ? ((var_1_34 + var_1_29)) : (var_1_24))))) : (var_1_35 == ((float) var_1_29))) : 1) : 1)) && ((var_1_33 == var_1_24) ? (var_1_36 == ((unsigned char) (var_1_9 - var_1_12))) : 1)) && ((((- var_1_85) > var_1_29) && var_1_17) ? ((var_1_6 >= (var_1_11 * var_1_47)) ? (var_1_37 == ((unsigned short int) (((((128 + var_1_6)) > (var_1_86)) ? ((128 + var_1_6)) : (var_1_86))))) : (var_1_37 == ((unsigned short int) var_1_10))) : (var_1_37 == ((unsigned short int) ((var_1_39 - var_1_10) - var_1_5))))) && ((var_1_24 <= last_1_var_1_91) ? ((var_1_8 < (32 * (last_1_var_1_44 / var_1_11))) ? (var_1_40 == ((unsigned char) var_1_30)) : 1) : 1)) && (var_1_41 == ((signed char) (var_1_42 - var_1_43)))) && ((var_1_98 >= var_1_103) ? ((var_1_87 && var_1_116) ? (var_1_44 == ((signed long int) (var_1_98 + (((((var_1_60 - var_1_12)) > (var_1_9)) ? ((var_1_60 - var_1_12)) : (var_1_9)))))) : (var_1_44 == ((signed long int) ((var_1_45 - var_1_55) - var_1_8)))) : 1)) && ((var_1_85 < var_1_25) ? (((last_1_var_1_46 + var_1_120) < (var_1_3 * (var_1_56 * var_1_8))) ? (var_1_46 == ((unsigned short int) ((((256) > (var_1_6)) ? (256) : (var_1_6))))) : (var_1_46 == ((unsigned short int) var_1_12))) : 1)) && (((((((-5) > (var_1_97)) ? (-5) : (var_1_97))) & (var_1_13 << 1)) > var_1_3) ? (var_1_47 == ((unsigned long int) ((((var_1_53) > (var_1_58)) ? (var_1_53) : (var_1_58))))) : (var_1_47 == ((unsigned long int) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))))) && ((var_1_18 && (var_1_101 != var_1_109)) ? (var_1_48 == ((float) var_1_28)) : ((((((var_1_39) < (var_1_77)) ? (var_1_39) : (var_1_77))) <= var_1_120) ? (var_1_87 ? (((var_1_77 * (~ var_1_11)) <= var_1_5) ? (var_1_48 == ((float) var_1_34)) : (var_1_48 == ((float) (((var_1_34 - var_1_49) - var_1_50) + var_1_28)))) : (var_1_48 == ((float) (var_1_33 - (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))) - var_1_50))))) : 1))) && (var_1_116 ? (var_1_53 == ((signed short int) (((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64))))))) : (((var_1_96 * (var_1_90 >> var_1_54)) != -2) ? (var_1_53 == ((signed short int) (((((26769 - var_1_98) - var_1_6) < 0 ) ? -((26769 - var_1_98) - var_1_6) : ((26769 - var_1_98) - var_1_6))))) : 1))) && (var_1_55 == ((unsigned short int) (var_1_39 - (256 + ((((var_1_43) > (128)) ? (var_1_43) : (128)))))))) && ((var_1_10 <= var_1_13) ? (var_1_56 == ((unsigned long int) (var_1_57 - var_1_11))) : 1)) && ((var_1_82 >= var_1_120) ? (var_1_58 == ((signed short int) ((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82))))) : ((var_1_84 < var_1_120) ? ((var_1_84 < (var_1_13 >> 2)) ? (var_1_58 == ((signed short int) var_1_3)) : (var_1_58 == ((signed short int) ((var_1_59 - (var_1_6 + var_1_54)) - ((((256) > (var_1_55)) ? (256) : (var_1_55))))))) : (var_1_58 == ((signed short int) ((((var_1_5 - 25) < 0 ) ? -(var_1_5 - 25) : (var_1_5 - 25)))))))) && (((- var_1_11) < last_1_var_1_44) ? (var_1_60 == ((unsigned char) (((var_1_61 - var_1_54) - (8 + var_1_62)) - var_1_10))) : (((last_1_var_1_37 != last_1_var_1_93) || last_1_var_1_116) ? (var_1_60 == ((unsigned char) (var_1_62 + var_1_54))) : 1))) && (var_1_64 == ((signed short int) ((((var_1_54) > (((var_1_84 + var_1_6) + var_1_42))) ? (var_1_54) : (((var_1_84 + var_1_6) + var_1_42))))))) && ((var_1_42 >= var_1_113) ? ((10 >= (((((-128 ^ -2)) < (var_1_39)) ? ((-128 ^ -2)) : (var_1_39)))) ? (((((((- var_1_118)) < (var_1_27)) ? ((- var_1_118)) : (var_1_27))) > last_1_var_1_65) ? (var_1_65 == ((double) (var_1_34 + var_1_27))) : (var_1_65 == ((double) var_1_27))) : 1) : ((var_1_98 > ((((var_1_39) > (var_1_5)) ? (var_1_39) : (var_1_5)))) ? (var_1_65 == ((double) var_1_26)) : 1))) && (var_1_68 == ((double) var_1_49))) && ((var_1_57 >= var_1_45) ? (var_1_69 == ((float) ((((((((((((256.55f) < (var_1_27)) ? (256.55f) : (var_1_27)))) < (24.4f)) ? (((((256.55f) < (var_1_27)) ? (256.55f) : (var_1_27)))) : (24.4f)))) > (var_1_34)) ? (((((((((256.55f) < (var_1_27)) ? (256.55f) : (var_1_27)))) < (24.4f)) ? (((((256.55f) < (var_1_27)) ? (256.55f) : (var_1_27)))) : (24.4f)))) : (var_1_34))))) : (var_1_69 == ((float) ((((((((((((var_1_24) > (9.75f)) ? (var_1_24) : (9.75f)))) > (var_1_33)) ? (((((var_1_24) > (9.75f)) ? (var_1_24) : (9.75f)))) : (var_1_33)))) < (var_1_28)) ? (((((((((var_1_24) > (9.75f)) ? (var_1_24) : (9.75f)))) > (var_1_33)) ? (((((var_1_24) > (9.75f)) ? (var_1_24) : (9.75f)))) : (var_1_33)))) : (var_1_28))))))) && ((! var_1_18) ? (var_1_70 == ((float) (var_1_51 - ((var_1_49 + var_1_71) + var_1_34)))) : ((var_1_42 > (-128 + var_1_93)) ? (var_1_70 == ((float) ((((((((var_1_52) > (var_1_29)) ? (var_1_52) : (var_1_29)))) < (var_1_34)) ? (((((var_1_52) > (var_1_29)) ? (var_1_52) : (var_1_29)))) : (var_1_34))))) : (var_1_70 == ((float) ((((var_1_52) < ((var_1_51 - var_1_24))) ? (var_1_52) : ((var_1_51 - var_1_24))))))))) && ((var_1_49 >= (var_1_50 - (5.273781522086461E18f - var_1_34))) ? ((var_1_116 || ((var_1_120 - var_1_8) != -25)) ? ((var_1_115 > var_1_80) ? ((var_1_54 == (var_1_39 / ((((2) < (32)) ? (2) : (32))))) ? (var_1_72 == ((signed char) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) : (var_1_72 == ((signed char) ((((((var_1_73 - var_1_54) - (1 + var_1_62))) > (var_1_61)) ? (((var_1_73 - var_1_54) - (1 + var_1_62))) : (var_1_61)))))) : (var_1_72 == ((signed char) ((((var_1_73) < (((((var_1_43) > ((-1 - var_1_62))) ? (var_1_43) : ((-1 - var_1_62)))))) ? (var_1_73) : (((((var_1_43) > ((-1 - var_1_62))) ? (var_1_43) : ((-1 - var_1_62)))))))))) : 1) : 1)) && (((((((var_1_45 + var_1_56)) < (var_1_13)) ? ((var_1_45 + var_1_56)) : (var_1_13))) == (- var_1_57)) ? (var_1_74 == ((unsigned char) (var_1_43 + (((((var_1_54) < (var_1_62)) ? (var_1_54) : (var_1_62))) + (var_1_75 - var_1_76))))) : (((var_1_56 / var_1_61) == (var_1_101 + var_1_77)) ? (var_1_74 == ((unsigned char) var_1_6)) : (var_1_74 == ((unsigned char) ((((var_1_61 - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < 0 ) ? -(var_1_61 - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (var_1_61 - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))))))) && ((! (((((var_1_29) > (var_1_28)) ? (var_1_29) : (var_1_28))) >= var_1_107)) ? (var_1_77 == ((signed short int) (var_1_97 + var_1_12))) : 1)) && ((var_1_10 < (var_1_47 + var_1_77)) ? (var_1_78 == ((unsigned short int) ((var_1_5 + (10000 - var_1_13)) + var_1_75))) : 1)) && (var_1_80 == ((unsigned char) (var_1_81 + var_1_12)))) && ((var_1_46 >= var_1_57) ? (var_1_82 == ((signed short int) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) : (var_1_82 == ((signed short int) (((((var_1_61) < (var_1_77)) ? (var_1_61) : (var_1_77))) - var_1_62))))) && (((var_1_14 && (var_1_17 && var_1_18)) && var_1_116) ? ((var_1_69 > (var_1_21 * var_1_25)) ? (var_1_83 == ((signed char) (((((((var_1_62) < (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76))))) ? (var_1_62) : (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76)))))) < 0 ) ? -((((var_1_62) < (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76))))) ? (var_1_62) : (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76)))))) : ((((var_1_62) < (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76))))) ? (var_1_62) : (((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76)))))))))) : (var_1_83 == ((signed char) ((((var_1_73) > (var_1_61)) ? (var_1_73) : (var_1_61)))))) : (var_1_116 ? (var_1_83 == ((signed char) ((((var_1_75) > (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) ? (var_1_75) : (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))))))) : (var_1_83 == ((signed char) (((((var_1_76 + var_1_54)) < (100)) ? ((var_1_76 + var_1_54)) : (100)))))))) && (var_1_40 ? (var_1_84 == ((signed char) (32 + ((((var_1_61) > ((var_1_76 + var_1_62))) ? (var_1_61) : ((var_1_76 + var_1_62))))))) : 1)) && (((- var_1_81) > var_1_101) ? (var_1_85 == ((double) var_1_52)) : 1)) && ((var_1_96 <= (- var_1_8)) ? (var_1_86 == ((unsigned short int) ((var_1_39 - var_1_13) - (var_1_115 + var_1_90)))) : 1)) && (var_1_116 ? (var_1_87 == ((unsigned char) (! (var_1_88 || var_1_89)))) : (var_1_87 == ((unsigned char) ((var_1_30 && var_1_18) && var_1_16))))) && (var_1_16 ? (var_1_90 == ((unsigned char) ((var_1_76 + var_1_75) + var_1_10))) : (var_1_90 == ((unsigned char) var_1_11)))) && ((-4 == (~ var_1_78)) ? (var_1_91 == ((double) var_1_92)) : 1)) && ((var_1_85 == (- var_1_33)) ? (var_1_93 == ((unsigned long int) (var_1_103 + (var_1_94 - var_1_81)))) : (var_1_93 == ((unsigned long int) ((var_1_73 + var_1_112) + (((((var_1_94) > (var_1_95)) ? (var_1_94) : (var_1_95))) - var_1_56)))))) && (var_1_16 ? (var_1_40 ? (var_1_18 ? (var_1_96 == ((signed long int) ((((((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8)))) < (var_1_13)) ? (((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8)))) : (var_1_13))))) : (var_1_88 ? (var_1_96 == ((signed long int) var_1_62)) : (var_1_96 == ((signed long int) (((((var_1_101) < 0 ) ? -(var_1_101) : (var_1_101))) + (var_1_75 + var_1_43)))))) : (var_1_96 == ((signed long int) ((((var_1_76) < (var_1_39)) ? (var_1_76) : (var_1_39)))))) : (var_1_30 ? ((var_1_43 >= (var_1_75 - var_1_10)) ? (var_1_96 == ((signed long int) (var_1_59 + ((((var_1_120) < (var_1_64)) ? (var_1_120) : (var_1_64)))))) : (var_1_96 == ((signed long int) ((var_1_112 - var_1_82) + ((var_1_60 - var_1_9) + (var_1_101 + var_1_13)))))) : 1))) && ((var_1_112 > ((var_1_39 - var_1_9) / var_1_12)) ? (var_1_97 == ((signed short int) var_1_81)) : (var_1_97 == ((signed short int) var_1_11)))) && ((var_1_1 >= var_1_103) ? (var_1_98 == ((signed short int) ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) : (var_1_98 == ((signed short int) (((var_1_99 + var_1_100) - var_1_10) - var_1_5))))) && (((var_1_13 / (var_1_102 + var_1_11)) > var_1_54) ? (var_1_101 == ((signed long int) (50 - var_1_61))) : 1)) && ((last_1_var_1_40 && var_1_30) ? (((last_1_var_1_108 == last_1_var_1_47) && last_1_var_1_116) ? (var_1_103 == ((unsigned short int) (var_1_39 - var_1_9))) : ((((19746 - 64) << 4) >= last_1_var_1_103) ? ((last_1_var_1_116 && var_1_18) ? (var_1_103 == ((unsigned short int) (var_1_39 - (var_1_10 + var_1_12)))) : (var_1_103 == ((unsigned short int) (((((var_1_81 + (var_1_105 - var_1_13))) > ((((((46288) > (var_1_39)) ? (46288) : (var_1_39))) - var_1_12))) ? ((var_1_81 + (var_1_105 - var_1_13))) : ((((((46288) > (var_1_39)) ? (46288) : (var_1_39))) - var_1_12))))))) : (((var_1_24 * var_1_33) >= var_1_28) ? (var_1_103 == ((unsigned short int) ((((var_1_39 - (23813 - var_1_6)) < 0 ) ? -(var_1_39 - (23813 - var_1_6)) : (var_1_39 - (23813 - var_1_6)))))) : (var_1_103 == ((unsigned short int) (var_1_61 + var_1_59)))))) : ((var_1_49 != var_1_29) ? (var_1_103 == ((unsigned short int) var_1_62)) : (var_1_103 == ((unsigned short int) var_1_6))))) && (var_1_106 == ((unsigned char) var_1_54))) && (var_1_18 ? (var_1_107 == ((double) var_1_26)) : (var_1_107 == ((double) var_1_33)))) && (var_1_108 == ((unsigned short int) var_1_56))) && (var_1_88 ? (var_1_109 == ((signed short int) var_1_110)) : 1)) && (var_1_116 ? (var_1_111 == ((float) 127.375f)) : 1)) && (var_1_88 ? (var_1_112 == ((unsigned long int) var_1_105)) : 1)) && (var_1_113 == ((unsigned short int) var_1_61))) && (var_1_14 ? (var_1_114 == ((signed char) var_1_61)) : (var_1_114 == ((signed char) var_1_73)))) && (var_1_30 ? (var_1_115 == ((signed long int) var_1_105)) : (var_1_115 == ((signed long int) var_1_108)))) && (var_1_116 == ((unsigned char) var_1_88))) && (var_1_117 == ((signed char) var_1_73))) && (var_1_87 ? (var_1_118 == ((float) var_1_24)) : (var_1_118 == ((float) var_1_34)))) && (var_1_89 ? (var_1_119 == ((double) var_1_23)) : 1)) && ((((-128 + var_1_112) + ((((-5) > (-50)) ? (-5) : (-50)))) > (var_1_12 - 50)) ? ((var_1_59 < (64 | var_1_12)) ? (var_1_120 == ((unsigned short int) var_1_81)) : (var_1_120 == ((unsigned short int) var_1_106))) : 1)
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

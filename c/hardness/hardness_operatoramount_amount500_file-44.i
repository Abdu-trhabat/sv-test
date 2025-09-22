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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch44Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 25;
signed long int var_1_7 = 2;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 256;
signed short int var_1_10 = -25;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
float var_1_13 = 256.75;
float var_1_15 = 256.25;
float var_1_16 = 8.95;
float var_1_17 = 256.375;
float var_1_18 = 0.0;
float var_1_19 = 3.75;
unsigned short int var_1_20 = 64;
unsigned short int var_1_21 = 0;
float var_1_22 = 100.5;
unsigned short int var_1_23 = 50;
unsigned short int var_1_24 = 64;
double var_1_25 = 32.6;
unsigned char var_1_26 = 1;
signed long int var_1_27 = 1000000000;
unsigned char var_1_28 = 0;
double var_1_29 = 100.4;
signed char var_1_30 = 2;
signed short int var_1_31 = 16;
signed short int var_1_32 = 8;
signed short int var_1_33 = 5;
double var_1_34 = 0.0;
double var_1_35 = 63.8;
double var_1_36 = 127.75;
double var_1_37 = 0.4;
unsigned long int var_1_38 = 50;
unsigned long int var_1_39 = 3554953517;
signed long int var_1_40 = 10;
unsigned long int var_1_41 = 1288451214;
unsigned long int var_1_42 = 2041491209;
unsigned long int var_1_43 = 1;
unsigned long int var_1_44 = 4;
unsigned short int var_1_45 = 2;
signed short int var_1_47 = 10;
unsigned short int var_1_48 = 65098;
signed char var_1_49 = -10;
signed long int var_1_50 = 25;
unsigned long int var_1_51 = 2502591507;
signed long int var_1_52 = -2;
signed long int var_1_53 = 0;
signed long int var_1_54 = 1234215986;
double var_1_55 = 32.6;
unsigned char var_1_56 = 0;
signed char var_1_57 = 25;
unsigned short int var_1_58 = 2;
signed char var_1_60 = 50;
signed short int var_1_61 = 32;
unsigned char var_1_62 = 4;
signed long int var_1_63 = -1;
unsigned short int var_1_64 = 16;
unsigned char var_1_65 = 8;
unsigned char var_1_66 = 5;
unsigned char var_1_67 = 10;
unsigned char var_1_68 = 100;
unsigned char var_1_69 = 200;
unsigned short int var_1_70 = 128;
unsigned short int var_1_71 = 10;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
double var_1_74 = 256.5;
signed long int var_1_75 = -2;
signed long int var_1_76 = 4;
float var_1_77 = 32.5;
float var_1_78 = 64.85;
signed char var_1_79 = 0;
signed char var_1_80 = -1;
unsigned char var_1_81 = 128;
unsigned char var_1_82 = 32;
unsigned char var_1_83 = 4;
unsigned char var_1_84 = 100;
unsigned char var_1_85 = 1;
signed short int var_1_86 = 10;
unsigned long int var_1_87 = 10;
unsigned long int var_1_88 = 1000000000;
unsigned long int var_1_89 = 1000000000;
signed char var_1_90 = 5;
unsigned char var_1_91 = 1;
unsigned char var_1_92 = 0;
float var_1_93 = 16.6;
unsigned char var_1_94 = 1;
double var_1_95 = 4.2;
unsigned char var_1_96 = 0;
signed char var_1_97 = 0;
float var_1_98 = 2.25;
signed short int var_1_99 = -4;
unsigned long int var_1_100 = 128;
unsigned short int var_1_101 = 50;
signed char var_1_102 = -64;
unsigned char var_1_103 = 10;
unsigned short int var_1_104 = 10;
unsigned char var_1_105 = 16;
float var_1_106 = 63.2;
double var_1_107 = 24.2;
float var_1_108 = 32.5;
float var_1_109 = 32.5;
unsigned short int var_1_110 = 128;
unsigned short int var_1_111 = 52807;
signed long int last_1_var_1_50 = 25;
signed long int last_1_var_1_75 = -2;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_75 >= last_1_var_1_50) {
  var_1_1 = (! var_1_4);
 }
 if (var_1_1) {
  var_1_104 = var_1_68;
 } else {
  var_1_104 = var_1_66;
 }
 var_1_9 = ((((-10) < (var_1_10)) ? (-10) : (var_1_10)));
 var_1_11 = ((var_1_8 || var_1_4) && var_1_12);
 var_1_20 = (45013 - var_1_21);
 var_1_22 = ((((((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) > (var_1_17)) ? (((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) : (var_1_17)));
 if ((9999999.6 / var_1_18) > var_1_16) {
  var_1_23 = ((((var_1_21 + var_1_24) < 0 ) ? -(var_1_21 + var_1_24) : (var_1_21 + var_1_24)));
 }
 var_1_25 = (((((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) > (var_1_16)) ? ((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) : (var_1_16)));
 signed char stepLocal_12 = var_1_30;
 if (var_1_10 < stepLocal_12) {
  var_1_55 = var_1_16;
 } else {
  var_1_55 = (var_1_34 - var_1_37);
 }
 unsigned long int stepLocal_16 = var_1_39;
 if (stepLocal_16 >= 25u) {
  var_1_62 = ((((var_1_32) < (var_1_60)) ? (var_1_32) : (var_1_60)));
 } else {
  var_1_62 = (var_1_32 + var_1_30);
 }
 var_1_64 = var_1_24;
 var_1_70 = ((((var_1_33) > (var_1_71)) ? (var_1_33) : (var_1_71)));
 if (var_1_51 >= var_1_60) {
  var_1_72 = (200 - (var_1_68 - var_1_66));
 }
 var_1_79 = (var_1_30 - var_1_33);
 var_1_86 = var_1_66;
 var_1_94 = var_1_92;
 if (var_1_8) {
  var_1_95 = var_1_36;
 } else {
  var_1_95 = var_1_16;
 }
 var_1_97 = var_1_82;
 var_1_99 = var_1_9;
 var_1_101 = var_1_33;
 var_1_102 = var_1_30;
 if (var_1_1) {
  var_1_105 = var_1_82;
 }
 if (var_1_12) {
  var_1_106 = var_1_19;
 } else {
  var_1_106 = var_1_15;
 }
 var_1_108 = var_1_35;
 if (var_1_9 >= (var_1_69 - var_1_84)) {
  var_1_109 = ((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)));
 } else {
  var_1_109 = ((((9999999.5f) < (25.5f)) ? (9999999.5f) : (25.5f)));
 }
 if (var_1_101 < var_1_24) {
  var_1_110 = (var_1_111 - var_1_83);
 } else {
  var_1_110 = ((((50) > (var_1_31)) ? (50) : (var_1_31)));
 }
 if (var_1_35 >= var_1_16) {
  if (var_1_55 <= var_1_37) {
   var_1_53 = (((var_1_48 - var_1_21) + (var_1_33 + var_1_24)) + (var_1_64 + ((((32) < (-5)) ? (32) : (-5)))));
  }
 } else {
  var_1_53 = ((((((1692685638) > (var_1_54)) ? (1692685638) : (var_1_54))) - var_1_32) - ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))));
 }
 if ((- var_1_95) < ((((var_1_17) < (var_1_55)) ? (var_1_17) : (var_1_55)))) {
  var_1_56 = (! var_1_28);
 }
 unsigned char stepLocal_35 = var_1_4;
 unsigned char stepLocal_34 = var_1_56;
 if (stepLocal_35 && (! (1 > var_1_53))) {
  if (stepLocal_34 && var_1_12) {
   var_1_91 = (var_1_8 || var_1_92);
  }
 }
 if (var_1_91) {
  var_1_93 = var_1_15;
 }
 if (var_1_56) {
  var_1_96 = var_1_12;
 } else {
  var_1_96 = var_1_92;
 }
 if (var_1_91) {
  var_1_100 = var_1_44;
 }
 if (var_1_56) {
  var_1_107 = var_1_15;
 }
 signed long int stepLocal_1 = var_1_7;
 if (var_1_91) {
  if (stepLocal_1 > var_1_53) {
   var_1_13 = ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)));
  }
 } else {
  var_1_13 = ((((var_1_17 - (var_1_18 - var_1_19)) < 0 ) ? -(var_1_17 - (var_1_18 - var_1_19)) : (var_1_17 - (var_1_18 - var_1_19))));
 }
 signed long int stepLocal_10 = -1;
 signed long int stepLocal_9 = var_1_31 & (var_1_27 * var_1_6);
 signed long int stepLocal_8 = (1687852967 - var_1_40) >> var_1_33;
 unsigned short int stepLocal_7 = var_1_21;
 unsigned long int stepLocal_6 = var_1_100 ^ var_1_32;
 if (var_1_17 >= (- var_1_34)) {
  if (var_1_27 <= stepLocal_10) {
   if ((~ var_1_30) > stepLocal_9) {
    var_1_38 = var_1_24;
   }
  } else {
   var_1_38 = ((var_1_39 - (var_1_100 + 500u)) - 4u);
  }
 } else {
  if (var_1_110 <= stepLocal_6) {
   if (var_1_15 <= var_1_106) {
    if ((var_1_24 * var_1_100) <= stepLocal_8) {
     if (var_1_33 < stepLocal_7) {
      var_1_38 = (((((var_1_7) > ((var_1_41 - var_1_100))) ? (var_1_7) : ((var_1_41 - var_1_100)))) + var_1_24);
     }
    } else {
     if (var_1_4) {
      var_1_38 = ((((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) - var_1_100) + var_1_43);
     }
    }
   } else {
    var_1_38 = (((((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44))) < 0 ) ? -((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44))) : ((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44)))));
   }
  }
 }
 if (var_1_91) {
  if (! (var_1_95 < (var_1_35 * 2.8f))) {
   var_1_45 = (61202 - 5);
  }
 }
 if (((((32) > (var_1_38)) ? (32) : (var_1_38))) >= var_1_23) {
  if (128.25f > var_1_37) {
   var_1_47 = ((((((var_1_32 + -64) + var_1_31)) < (((((var_1_30) > (var_1_10)) ? (var_1_30) : (var_1_10))))) ? (((var_1_32 + -64) + var_1_31)) : (((((var_1_30) > (var_1_10)) ? (var_1_30) : (var_1_10))))));
  } else {
   var_1_47 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
  }
 } else {
  var_1_47 = ((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) > (((((var_1_10) > (var_1_32)) ? (var_1_10) : (var_1_32))))) ? (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) : (((((var_1_10) > (var_1_32)) ? (var_1_10) : (var_1_32))))));
 }
 signed long int stepLocal_11 = var_1_53;
 if (stepLocal_11 < -32) {
  if (var_1_94) {
   var_1_49 = (((((-4) > ((var_1_30 - 4))) ? (-4) : ((var_1_30 - 4)))) + var_1_32);
  }
 }
 if ((((((var_1_32) > (4)) ? (var_1_32) : (4))) - var_1_33) <= var_1_24) {
  if (! var_1_4) {
   if (var_1_39 >= (var_1_51 - (var_1_41 - var_1_21))) {
    if (var_1_23 >= var_1_27) {
     if (var_1_23 == (var_1_100 + (var_1_38 / var_1_33))) {
      var_1_50 = (((((var_1_21) > (var_1_24)) ? (var_1_21) : (var_1_24))) - var_1_30);
     } else {
      var_1_50 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
     }
    } else {
     var_1_50 = var_1_52;
    }
   } else {
    var_1_50 = (((((var_1_33) < (((((var_1_23) > (var_1_45)) ? (var_1_23) : (var_1_45))))) ? (var_1_33) : (((((var_1_23) > (var_1_45)) ? (var_1_23) : (var_1_45)))))) - (var_1_31 + var_1_24));
   }
  } else {
   var_1_50 = ((((((((var_1_47) < (4)) ? (var_1_47) : (4))) < 0 ) ? -((((var_1_47) < (4)) ? (var_1_47) : (4))) : ((((var_1_47) < (4)) ? (var_1_47) : (4))))) - (((((var_1_45) < (var_1_38)) ? (var_1_45) : (var_1_38))) + ((((var_1_23) > (var_1_40)) ? (var_1_23) : (var_1_40)))));
  }
 }
 signed long int stepLocal_17 = (((var_1_10) < (-256)) ? (var_1_10) : (-256));
 if (8 >= stepLocal_17) {
  var_1_63 = ((var_1_54 - (50 + var_1_100)) - (1000000000 + var_1_40));
 }
 signed long int stepLocal_27 = var_1_40;
 unsigned char stepLocal_26 = var_1_91;
 if ((var_1_60 & var_1_20) >= stepLocal_27) {
  var_1_74 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
 } else {
  if (stepLocal_26 || ((16.625f + var_1_16) < var_1_36)) {
   var_1_74 = (((((var_1_35) > (var_1_19)) ? (var_1_35) : (var_1_19))) + var_1_36);
  } else {
   var_1_74 = (((((((var_1_18 - 5.6) < 0 ) ? -(var_1_18 - 5.6) : (var_1_18 - 5.6))) < 0 ) ? -((((var_1_18 - 5.6) < 0 ) ? -(var_1_18 - 5.6) : (var_1_18 - 5.6))) : ((((var_1_18 - 5.6) < 0 ) ? -(var_1_18 - 5.6) : (var_1_18 - 5.6)))));
  }
 }
 unsigned long int stepLocal_30 = var_1_38;
 if (stepLocal_30 <= var_1_104) {
  var_1_80 = var_1_60;
 }
 if (var_1_25 == var_1_17) {
  var_1_75 = ((((((var_1_54 - var_1_71)) < (var_1_104)) ? ((var_1_54 - var_1_71)) : (var_1_104))) - var_1_31);
 } else {
  if (var_1_40 <= var_1_100) {
   if (((((var_1_34) > (var_1_37)) ? (var_1_34) : (var_1_37))) >= (var_1_18 - var_1_17)) {
    if (((var_1_33 * var_1_63) >= (var_1_53 ^ var_1_70)) || ((var_1_100 + var_1_104) > (var_1_23 * var_1_101))) {
     var_1_75 = (var_1_30 - var_1_67);
    }
   } else {
    var_1_75 = (((((var_1_32 + var_1_31)) > (var_1_76)) ? ((var_1_32 + var_1_31)) : (var_1_76)));
   }
  } else {
   var_1_75 = (var_1_48 + ((var_1_33 - var_1_104) + var_1_69));
  }
 }
 signed long int stepLocal_0 = var_1_6 - var_1_7;
 if (var_1_38 <= stepLocal_0) {
  var_1_5 = (var_1_56 || var_1_4);
 } else {
  var_1_5 = (! (! var_1_8));
 }
 signed long int stepLocal_2 = var_1_27 - var_1_104;
 if ((var_1_24 * var_1_50) > stepLocal_2) {
  var_1_26 = (! ((var_1_4 && var_1_12) && var_1_28));
 }
 signed long int stepLocal_5 = var_1_101 >> var_1_30;
 signed long int stepLocal_4 = (var_1_30 + var_1_31) - var_1_21;
 unsigned long int stepLocal_3 = var_1_38 >> (var_1_32 + var_1_33);
 if (var_1_12) {
  if (var_1_27 <= stepLocal_5) {
   if (stepLocal_4 >= 128) {
    if ((var_1_24 - var_1_7) <= stepLocal_3) {
     var_1_29 = (-0.4 + var_1_19);
    } else {
     var_1_29 = ((((((var_1_18) < (var_1_34)) ? (var_1_18) : (var_1_34))) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37));
    }
   }
  }
 }
 unsigned char stepLocal_29 = var_1_96 && var_1_28;
 signed long int stepLocal_28 = var_1_54;
 if (stepLocal_28 > -8) {
  if (stepLocal_29 || var_1_56) {
   var_1_77 = var_1_16;
  }
 } else {
  if (var_1_29 > var_1_17) {
   var_1_77 = ((var_1_19 - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) + var_1_78);
  } else {
   var_1_77 = (var_1_34 - var_1_17);
  }
 }
 signed long int stepLocal_31 = var_1_6 ^ 4;
 if (stepLocal_31 > var_1_41) {
  var_1_81 = (128 - var_1_67);
 } else {
  if (var_1_15 >= (var_1_29 / ((((var_1_34) < (var_1_18)) ? (var_1_34) : (var_1_18))))) {
   if (var_1_109 >= ((((1.2f) > (var_1_29)) ? (1.2f) : (var_1_29)))) {
    var_1_81 = ((var_1_68 - (var_1_82 - var_1_33)) + var_1_66);
   } else {
    var_1_81 = ((var_1_69 - ((((var_1_83) < (var_1_33)) ? (var_1_83) : (var_1_33)))) - ((var_1_84 - 32) - 8));
   }
  } else {
   var_1_81 = (var_1_32 + (var_1_84 - var_1_33));
  }
 }
 signed short int stepLocal_32 = var_1_99;
 if ((5 * var_1_86) <= stepLocal_32) {
  var_1_85 = (var_1_5 && var_1_8);
 }
 if (var_1_85) {
  var_1_90 = (var_1_60 - var_1_82);
 } else {
  var_1_90 = (var_1_33 - var_1_82);
 }
 if (var_1_26) {
  var_1_98 = var_1_17;
 } else {
  var_1_98 = 127.5f;
 }
 if (var_1_26) {
  var_1_103 = var_1_66;
 } else {
  var_1_103 = var_1_83;
 }
 unsigned short int stepLocal_15 = var_1_24;
 unsigned short int stepLocal_14 = var_1_64;
 signed long int stepLocal_13 = (var_1_52 % var_1_58) | (var_1_24 * var_1_27);
 if (stepLocal_15 > var_1_33) {
  if (var_1_4) {
   var_1_61 = var_1_81;
  } else {
   if (stepLocal_13 <= var_1_75) {
    var_1_61 = ((((var_1_60) > ((var_1_32 - var_1_31))) ? (var_1_60) : ((var_1_32 - var_1_31))));
   } else {
    var_1_61 = ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) > ((var_1_60 + ((((var_1_20) > (var_1_32)) ? (var_1_20) : (var_1_32)))))) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : ((var_1_60 + ((((var_1_20) > (var_1_32)) ? (var_1_20) : (var_1_32)))))));
   }
  }
 } else {
  if (16 >= stepLocal_14) {
   var_1_61 = (var_1_31 + var_1_30);
  } else {
   var_1_61 = ((var_1_32 - var_1_31) + ((((var_1_20) < (((((var_1_30) > (var_1_81)) ? (var_1_30) : (var_1_81))))) ? (var_1_20) : (((((var_1_30) > (var_1_81)) ? (var_1_30) : (var_1_81)))))));
  }
 }
 signed long int stepLocal_33 = var_1_52;
 if ((var_1_21 + (var_1_48 - var_1_31)) == stepLocal_33) {
  if (var_1_95 >= (var_1_18 + (var_1_16 * var_1_19))) {
   var_1_87 = ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41)));
  } else {
   var_1_87 = ((((var_1_58) > (var_1_83)) ? (var_1_58) : (var_1_83)));
  }
 } else {
  var_1_87 = (((var_1_88 + var_1_89) - var_1_63) + var_1_61);
 }
 if (var_1_87 <= (var_1_30 % ((((var_1_33) > (var_1_58)) ? (var_1_33) : (var_1_58))))) {
  if (var_1_51 > (var_1_33 * (var_1_75 + var_1_100))) {
   var_1_57 = (((((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))) < 0 ) ? -((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))) : ((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33)))));
  } else {
   var_1_57 = var_1_33;
  }
 } else {
  if ((((((var_1_51) < (var_1_87)) ? (var_1_51) : (var_1_87))) + var_1_104) >= (var_1_100 / var_1_30)) {
   if ((var_1_5 && var_1_28) || var_1_12) {
    var_1_57 = ((var_1_33 + var_1_60) - (var_1_30 + var_1_32));
   }
  }
 }
 unsigned short int stepLocal_25 = var_1_104;
 signed long int stepLocal_24 = var_1_72 + var_1_67;
 if (stepLocal_25 < var_1_87) {
  if (stepLocal_24 < var_1_52) {
   var_1_73 = (var_1_4 || var_1_28);
  } else {
   var_1_73 = (((16.75f > var_1_93) && var_1_8) || (! var_1_28));
  }
 } else {
  var_1_73 = 0;
 }
 signed long int stepLocal_23 = var_1_50 + var_1_54;
 unsigned long int stepLocal_22 = (((((((var_1_21) < (var_1_41)) ? (var_1_21) : (var_1_41)))) > ((var_1_63 / var_1_33))) ? (((((var_1_21) < (var_1_41)) ? (var_1_21) : (var_1_41)))) : ((var_1_63 / var_1_33)));
 unsigned long int stepLocal_21 = var_1_38;
 unsigned char stepLocal_20 = var_1_8;
 signed long int stepLocal_19 = var_1_50;
 signed long int stepLocal_18 = var_1_32 - var_1_33;
 if (var_1_101 < stepLocal_22) {
  if ((var_1_5 || var_1_73) && stepLocal_20) {
   if (stepLocal_21 < ((var_1_72 + var_1_40) * ((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70))))) {
    if (stepLocal_18 > (var_1_30 + -256)) {
     if (stepLocal_23 <= ((((var_1_87) < (var_1_60)) ? (var_1_87) : (var_1_60)))) {
      var_1_65 = var_1_60;
     } else {
      var_1_65 = (((var_1_33 + var_1_32) + var_1_60) + (((((var_1_30 + var_1_66)) < (var_1_67)) ? ((var_1_30 + var_1_66)) : (var_1_67))));
     }
    } else {
     var_1_65 = (var_1_66 + (var_1_68 - var_1_60));
    }
   } else {
    var_1_65 = ((((((var_1_69 - var_1_33) - var_1_68)) < (((((var_1_60) > (((((var_1_66) < (var_1_32)) ? (var_1_66) : (var_1_32))))) ? (var_1_60) : (((((var_1_66) < (var_1_32)) ? (var_1_66) : (var_1_32)))))))) ? (((var_1_69 - var_1_33) - var_1_68)) : (((((var_1_60) > (((((var_1_66) < (var_1_32)) ? (var_1_66) : (var_1_32))))) ? (var_1_60) : (((((var_1_66) < (var_1_32)) ? (var_1_66) : (var_1_32)))))))));
   }
  } else {
   var_1_65 = ((((((((var_1_60) > (var_1_69)) ? (var_1_60) : (var_1_69)))) > (var_1_67)) ? (((((var_1_60) > (var_1_69)) ? (var_1_60) : (var_1_69)))) : (var_1_67)));
  }
 } else {
  if (stepLocal_19 > var_1_10) {
   var_1_65 = var_1_30;
  } else {
   var_1_65 = 5;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32767);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -1);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 15);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 8);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 7);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 3221225470);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1073741823);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 1073741823);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 1073741823);
 assume_abort_if_not(var_1_42 <= 2147483647);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 2147483647);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 4294967294);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 32767);
 assume_abort_if_not(var_1_48 <= 65535);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 2147483647);
 assume_abort_if_not(var_1_51 <= 4294967295);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= -2147483647);
 assume_abort_if_not(var_1_52 <= 2147483646);
 var_1_54 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_54 >= 1073741822);
 assume_abort_if_not(var_1_54 <= 2147483646);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 65535);
 assume_abort_if_not(var_1_58 != 0);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 63);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 63);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 127);
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 63);
 assume_abort_if_not(var_1_68 <= 127);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 190);
 assume_abort_if_not(var_1_69 <= 254);
 var_1_71 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 65534);
 var_1_76 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_76 >= -2147483647);
 assume_abort_if_not(var_1_76 <= 2147483646);
 var_1_78 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_78 >= -461168.6018427383000e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427383000e+12F && var_1_78 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_82 >= 31);
 assume_abort_if_not(var_1_82 <= 63);
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 0);
 assume_abort_if_not(var_1_83 <= 63);
 var_1_84 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_84 >= 95);
 assume_abort_if_not(var_1_84 <= 127);
 var_1_88 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_88 >= 536870911);
 assume_abort_if_not(var_1_88 <= 1073741824);
 var_1_89 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_89 >= 536870912);
 assume_abort_if_not(var_1_89 <= 1073741823);
 var_1_92 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_92 >= 0);
 assume_abort_if_not(var_1_92 <= 0);
 var_1_111 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_111 >= 32767);
 assume_abort_if_not(var_1_111 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_50 = var_1_50;
 last_1_var_1_75 = var_1_75;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_75 >= last_1_var_1_50) ? (var_1_1 == ((unsigned char) (! var_1_4))) : 1) && ((var_1_38 <= (var_1_6 - var_1_7)) ? (var_1_5 == ((unsigned char) (var_1_56 || var_1_4))) : (var_1_5 == ((unsigned char) (! (! var_1_8)))))) && (var_1_9 == ((signed short int) ((((-10) < (var_1_10)) ? (-10) : (var_1_10)))))) && (var_1_11 == ((unsigned char) ((var_1_8 || var_1_4) && var_1_12)))) && (var_1_91 ? ((var_1_7 > var_1_53) ? (var_1_13 == ((float) ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))))) : 1) : (var_1_13 == ((float) ((((var_1_17 - (var_1_18 - var_1_19)) < 0 ) ? -(var_1_17 - (var_1_18 - var_1_19)) : (var_1_17 - (var_1_18 - var_1_19)))))))) && (var_1_20 == ((unsigned short int) (45013 - var_1_21)))) && (var_1_22 == ((float) ((((((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) > (var_1_17)) ? (((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) : (var_1_17)))))) && (((9999999.6 / var_1_18) > var_1_16) ? (var_1_23 == ((unsigned short int) ((((var_1_21 + var_1_24) < 0 ) ? -(var_1_21 + var_1_24) : (var_1_21 + var_1_24))))) : 1)) && (var_1_25 == ((double) (((((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) > (var_1_16)) ? ((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) : (var_1_16)))))) && (((var_1_24 * var_1_50) > (var_1_27 - var_1_104)) ? (var_1_26 == ((unsigned char) (! ((var_1_4 && var_1_12) && var_1_28)))) : 1)) && (var_1_12 ? ((var_1_27 <= (var_1_101 >> var_1_30)) ? ((((var_1_30 + var_1_31) - var_1_21) >= 128) ? (((var_1_24 - var_1_7) <= (var_1_38 >> (var_1_32 + var_1_33))) ? (var_1_29 == ((double) (-0.4 + var_1_19))) : (var_1_29 == ((double) ((((((var_1_18) < (var_1_34)) ? (var_1_18) : (var_1_34))) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37))))) : 1) : 1) : 1)) && ((var_1_17 >= (- var_1_34)) ? ((var_1_27 <= -1) ? (((~ var_1_30) > (var_1_31 & (var_1_27 * var_1_6))) ? (var_1_38 == ((unsigned long int) var_1_24)) : 1) : (var_1_38 == ((unsigned long int) ((var_1_39 - (var_1_100 + 500u)) - 4u)))) : ((var_1_110 <= (var_1_100 ^ var_1_32)) ? ((var_1_15 <= var_1_106) ? (((var_1_24 * var_1_100) <= ((1687852967 - var_1_40) >> var_1_33)) ? ((var_1_33 < var_1_21) ? (var_1_38 == ((unsigned long int) (((((var_1_7) > ((var_1_41 - var_1_100))) ? (var_1_7) : ((var_1_41 - var_1_100)))) + var_1_24))) : 1) : (var_1_4 ? (var_1_38 == ((unsigned long int) ((((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) - var_1_100) + var_1_43))) : 1)) : (var_1_38 == ((unsigned long int) (((((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44))) < 0 ) ? -((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44))) : ((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44)))))))) : 1))) && (var_1_91 ? ((! (var_1_95 < (var_1_35 * 2.8f))) ? (var_1_45 == ((unsigned short int) (61202 - 5))) : 1) : 1)) && ((((((32) > (var_1_38)) ? (32) : (var_1_38))) >= var_1_23) ? ((128.25f > var_1_37) ? (var_1_47 == ((signed short int) ((((((var_1_32 + -64) + var_1_31)) < (((((var_1_30) > (var_1_10)) ? (var_1_30) : (var_1_10))))) ? (((var_1_32 + -64) + var_1_31)) : (((((var_1_30) > (var_1_10)) ? (var_1_30) : (var_1_10)))))))) : (var_1_47 == ((signed short int) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) : (var_1_47 == ((signed short int) ((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) > (((((var_1_10) > (var_1_32)) ? (var_1_10) : (var_1_32))))) ? (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) : (((((var_1_10) > (var_1_32)) ? (var_1_10) : (var_1_32)))))))))) && ((var_1_53 < -32) ? (var_1_94 ? (var_1_49 == ((signed char) (((((-4) > ((var_1_30 - 4))) ? (-4) : ((var_1_30 - 4)))) + var_1_32))) : 1) : 1)) && (((((((var_1_32) > (4)) ? (var_1_32) : (4))) - var_1_33) <= var_1_24) ? ((! var_1_4) ? ((var_1_39 >= (var_1_51 - (var_1_41 - var_1_21))) ? ((var_1_23 >= var_1_27) ? ((var_1_23 == (var_1_100 + (var_1_38 / var_1_33))) ? (var_1_50 == ((signed long int) (((((var_1_21) > (var_1_24)) ? (var_1_21) : (var_1_24))) - var_1_30))) : (var_1_50 == ((signed long int) ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))) : (var_1_50 == ((signed long int) var_1_52))) : (var_1_50 == ((signed long int) (((((var_1_33) < (((((var_1_23) > (var_1_45)) ? (var_1_23) : (var_1_45))))) ? (var_1_33) : (((((var_1_23) > (var_1_45)) ? (var_1_23) : (var_1_45)))))) - (var_1_31 + var_1_24))))) : (var_1_50 == ((signed long int) ((((((((var_1_47) < (4)) ? (var_1_47) : (4))) < 0 ) ? -((((var_1_47) < (4)) ? (var_1_47) : (4))) : ((((var_1_47) < (4)) ? (var_1_47) : (4))))) - (((((var_1_45) < (var_1_38)) ? (var_1_45) : (var_1_38))) + ((((var_1_23) > (var_1_40)) ? (var_1_23) : (var_1_40)))))))) : 1)) && ((var_1_35 >= var_1_16) ? ((var_1_55 <= var_1_37) ? (var_1_53 == ((signed long int) (((var_1_48 - var_1_21) + (var_1_33 + var_1_24)) + (var_1_64 + ((((32) < (-5)) ? (32) : (-5))))))) : 1) : (var_1_53 == ((signed long int) ((((((1692685638) > (var_1_54)) ? (1692685638) : (var_1_54))) - var_1_32) - ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))))) && ((var_1_10 < var_1_30) ? (var_1_55 == ((double) var_1_16)) : (var_1_55 == ((double) (var_1_34 - var_1_37))))) && (((- var_1_95) < ((((var_1_17) < (var_1_55)) ? (var_1_17) : (var_1_55)))) ? (var_1_56 == ((unsigned char) (! var_1_28))) : 1)) && ((var_1_87 <= (var_1_30 % ((((var_1_33) > (var_1_58)) ? (var_1_33) : (var_1_58))))) ? ((var_1_51 > (var_1_33 * (var_1_75 + var_1_100))) ? (var_1_57 == ((signed char) (((((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))) < 0 ) ? -((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))) : ((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))))))) : (var_1_57 == ((signed char) var_1_33))) : (((((((var_1_51) < (var_1_87)) ? (var_1_51) : (var_1_87))) + var_1_104) >= (var_1_100 / var_1_30)) ? (((var_1_5 && var_1_28) || var_1_12) ? (var_1_57 == ((signed char) ((var_1_33 + var_1_60) - (var_1_30 + var_1_32)))) : 1) : 1))) && ((var_1_24 > var_1_33) ? (var_1_4 ? (var_1_61 == ((signed short int) var_1_81)) : ((((var_1_52 % var_1_58) | (var_1_24 * var_1_27)) <= var_1_75) ? (var_1_61 == ((signed short int) ((((var_1_60) > ((var_1_32 - var_1_31))) ? (var_1_60) : ((var_1_32 - var_1_31)))))) : (var_1_61 == ((signed short int) ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) > ((var_1_60 + ((((var_1_20) > (var_1_32)) ? (var_1_20) : (var_1_32)))))) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : ((var_1_60 + ((((var_1_20) > (var_1_32)) ? (var_1_20) : (var_1_32))))))))))) : ((16 >= var_1_64) ? (var_1_61 == ((signed short int) (var_1_31 + var_1_30))) : (var_1_61 == ((signed short int) ((var_1_32 - var_1_31) + ((((var_1_20) < (((((var_1_30) > (var_1_81)) ? (var_1_30) : (var_1_81))))) ? (var_1_20) : (((((var_1_30) > (var_1_81)) ? (var_1_30) : (var_1_81)))))))))))) && ((var_1_39 >= 25u) ? (var_1_62 == ((unsigned char) ((((var_1_32) < (var_1_60)) ? (var_1_32) : (var_1_60))))) : (var_1_62 == ((unsigned char) (var_1_32 + var_1_30))))) && ((8 >= ((((var_1_10) < (-256)) ? (var_1_10) : (-256)))) ? (var_1_63 == ((signed long int) ((var_1_54 - (50 + var_1_100)) - (1000000000 + var_1_40)))) : 1)) && (var_1_64 == ((unsigned short int) var_1_24))) && ((var_1_101 < ((((((((var_1_21) < (var_1_41)) ? (var_1_21) : (var_1_41)))) > ((var_1_63 / var_1_33))) ? (((((var_1_21) < (var_1_41)) ? (var_1_21) : (var_1_41)))) : ((var_1_63 / var_1_33))))) ? (((var_1_5 || var_1_73) && var_1_8) ? ((var_1_38 < ((var_1_72 + var_1_40) * ((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70))))) ? (((var_1_32 - var_1_33) > (var_1_30 + -256)) ? (((var_1_50 + var_1_54) <= ((((var_1_87) < (var_1_60)) ? (var_1_87) : (var_1_60)))) ? (var_1_65 == ((unsigned char) var_1_60)) : (var_1_65 == ((unsigned char) (((var_1_33 + var_1_32) + var_1_60) + (((((var_1_30 + var_1_66)) < (var_1_67)) ? ((var_1_30 + var_1_66)) : (var_1_67))))))) : (var_1_65 == ((unsigned char) (var_1_66 + (var_1_68 - var_1_60))))) : (var_1_65 == ((unsigned char) ((((((var_1_69 - var_1_33) - var_1_68)) < (((((var_1_60) > (((((var_1_66) < (var_1_32)) ? (var_1_66) : (var_1_32))))) ? (var_1_60) : (((((var_1_66) < (var_1_32)) ? (var_1_66) : (var_1_32)))))))) ? (((var_1_69 - var_1_33) - var_1_68)) : (((((var_1_60) > (((((var_1_66) < (var_1_32)) ? (var_1_66) : (var_1_32))))) ? (var_1_60) : (((((var_1_66) < (var_1_32)) ? (var_1_66) : (var_1_32)))))))))))) : (var_1_65 == ((unsigned char) ((((((((var_1_60) > (var_1_69)) ? (var_1_60) : (var_1_69)))) > (var_1_67)) ? (((((var_1_60) > (var_1_69)) ? (var_1_60) : (var_1_69)))) : (var_1_67)))))) : ((var_1_50 > var_1_10) ? (var_1_65 == ((unsigned char) var_1_30)) : (var_1_65 == ((unsigned char) 5))))) && (var_1_70 == ((unsigned short int) ((((var_1_33) > (var_1_71)) ? (var_1_33) : (var_1_71)))))) && ((var_1_51 >= var_1_60) ? (var_1_72 == ((unsigned char) (200 - (var_1_68 - var_1_66)))) : 1)) && ((var_1_104 < var_1_87) ? (((var_1_72 + var_1_67) < var_1_52) ? (var_1_73 == ((unsigned char) (var_1_4 || var_1_28))) : (var_1_73 == ((unsigned char) (((16.75f > var_1_93) && var_1_8) || (! var_1_28))))) : (var_1_73 == ((unsigned char) 0)))) && (((var_1_60 & var_1_20) >= var_1_40) ? (var_1_74 == ((double) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) : ((var_1_91 || ((16.625f + var_1_16) < var_1_36)) ? (var_1_74 == ((double) (((((var_1_35) > (var_1_19)) ? (var_1_35) : (var_1_19))) + var_1_36))) : (var_1_74 == ((double) (((((((var_1_18 - 5.6) < 0 ) ? -(var_1_18 - 5.6) : (var_1_18 - 5.6))) < 0 ) ? -((((var_1_18 - 5.6) < 0 ) ? -(var_1_18 - 5.6) : (var_1_18 - 5.6))) : ((((var_1_18 - 5.6) < 0 ) ? -(var_1_18 - 5.6) : (var_1_18 - 5.6)))))))))) && ((var_1_25 == var_1_17) ? (var_1_75 == ((signed long int) ((((((var_1_54 - var_1_71)) < (var_1_104)) ? ((var_1_54 - var_1_71)) : (var_1_104))) - var_1_31))) : ((var_1_40 <= var_1_100) ? ((((((var_1_34) > (var_1_37)) ? (var_1_34) : (var_1_37))) >= (var_1_18 - var_1_17)) ? ((((var_1_33 * var_1_63) >= (var_1_53 ^ var_1_70)) || ((var_1_100 + var_1_104) > (var_1_23 * var_1_101))) ? (var_1_75 == ((signed long int) (var_1_30 - var_1_67))) : 1) : (var_1_75 == ((signed long int) (((((var_1_32 + var_1_31)) > (var_1_76)) ? ((var_1_32 + var_1_31)) : (var_1_76)))))) : (var_1_75 == ((signed long int) (var_1_48 + ((var_1_33 - var_1_104) + var_1_69))))))) && ((var_1_54 > -8) ? (((var_1_96 && var_1_28) || var_1_56) ? (var_1_77 == ((float) var_1_16)) : 1) : ((var_1_29 > var_1_17) ? (var_1_77 == ((float) ((var_1_19 - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) + var_1_78))) : (var_1_77 == ((float) (var_1_34 - var_1_17)))))) && (var_1_79 == ((signed char) (var_1_30 - var_1_33)))) && ((var_1_38 <= var_1_104) ? (var_1_80 == ((signed char) var_1_60)) : 1)) && (((var_1_6 ^ 4) > var_1_41) ? (var_1_81 == ((unsigned char) (128 - var_1_67))) : ((var_1_15 >= (var_1_29 / ((((var_1_34) < (var_1_18)) ? (var_1_34) : (var_1_18))))) ? ((var_1_109 >= ((((1.2f) > (var_1_29)) ? (1.2f) : (var_1_29)))) ? (var_1_81 == ((unsigned char) ((var_1_68 - (var_1_82 - var_1_33)) + var_1_66))) : (var_1_81 == ((unsigned char) ((var_1_69 - ((((var_1_83) < (var_1_33)) ? (var_1_83) : (var_1_33)))) - ((var_1_84 - 32) - 8))))) : (var_1_81 == ((unsigned char) (var_1_32 + (var_1_84 - var_1_33))))))) && (((5 * var_1_86) <= var_1_99) ? (var_1_85 == ((unsigned char) (var_1_5 && var_1_8))) : 1)) && (var_1_86 == ((signed short int) var_1_66))) && (((var_1_21 + (var_1_48 - var_1_31)) == var_1_52) ? ((var_1_95 >= (var_1_18 + (var_1_16 * var_1_19))) ? (var_1_87 == ((unsigned long int) ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41))))) : (var_1_87 == ((unsigned long int) ((((var_1_58) > (var_1_83)) ? (var_1_58) : (var_1_83)))))) : (var_1_87 == ((unsigned long int) (((var_1_88 + var_1_89) - var_1_63) + var_1_61))))) && (var_1_85 ? (var_1_90 == ((signed char) (var_1_60 - var_1_82))) : (var_1_90 == ((signed char) (var_1_33 - var_1_82))))) && ((var_1_4 && (! (1 > var_1_53))) ? ((var_1_56 && var_1_12) ? (var_1_91 == ((unsigned char) (var_1_8 || var_1_92))) : 1) : 1)) && (var_1_91 ? (var_1_93 == ((float) var_1_15)) : 1)) && (var_1_94 == ((unsigned char) var_1_92))) && (var_1_8 ? (var_1_95 == ((double) var_1_36)) : (var_1_95 == ((double) var_1_16)))) && (var_1_56 ? (var_1_96 == ((unsigned char) var_1_12)) : (var_1_96 == ((unsigned char) var_1_92)))) && (var_1_97 == ((signed char) var_1_82))) && (var_1_26 ? (var_1_98 == ((float) var_1_17)) : (var_1_98 == ((float) 127.5f)))) && (var_1_99 == ((signed short int) var_1_9))) && (var_1_91 ? (var_1_100 == ((unsigned long int) var_1_44)) : 1)) && (var_1_101 == ((unsigned short int) var_1_33))) && (var_1_102 == ((signed char) var_1_30))) && (var_1_26 ? (var_1_103 == ((unsigned char) var_1_66)) : (var_1_103 == ((unsigned char) var_1_83)))) && (var_1_1 ? (var_1_104 == ((unsigned short int) var_1_68)) : (var_1_104 == ((unsigned short int) var_1_66)))) && (var_1_1 ? (var_1_105 == ((unsigned char) var_1_82)) : 1)) && (var_1_12 ? (var_1_106 == ((float) var_1_19)) : (var_1_106 == ((float) var_1_15)))) && (var_1_56 ? (var_1_107 == ((double) var_1_15)) : 1)) && (var_1_108 == ((float) var_1_35))) && ((var_1_9 >= (var_1_69 - var_1_84)) ? (var_1_109 == ((float) ((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35))))) : (var_1_109 == ((float) ((((9999999.5f) < (25.5f)) ? (9999999.5f) : (25.5f))))))) && ((var_1_101 < var_1_24) ? (var_1_110 == ((unsigned short int) (var_1_111 - var_1_83))) : (var_1_110 == ((unsigned short int) ((((50) > (var_1_31)) ? (50) : (var_1_31))))))
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

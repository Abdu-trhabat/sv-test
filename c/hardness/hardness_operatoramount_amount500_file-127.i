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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 1000;
signed short int var_1_6 = 10;
signed short int var_1_7 = 16;
signed short int var_1_8 = 128;
unsigned short int var_1_9 = 61303;
unsigned short int var_1_10 = 8;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 32244;
double var_1_13 = 8.5;
double var_1_14 = 10.9;
double var_1_15 = 1.25;
double var_1_16 = 0.0;
double var_1_17 = 5.75;
float var_1_18 = 0.0;
float var_1_19 = 0.0;
float var_1_20 = 1.75;
double var_1_21 = 0.2;
double var_1_22 = 256.52;
double var_1_23 = 49.2;
unsigned long int var_1_24 = 1000000000;
double var_1_25 = 1.4;
signed long int var_1_26 = 32;
unsigned long int var_1_27 = 4;
unsigned long int var_1_28 = 1;
double var_1_29 = 500.6;
double var_1_30 = 9999999999.3;
signed short int var_1_31 = -128;
signed short int var_1_32 = -128;
signed char var_1_33 = 4;
unsigned char var_1_34 = 0;
signed char var_1_36 = 32;
signed char var_1_37 = 10;
unsigned short int var_1_38 = 5;
signed char var_1_39 = -16;
signed char var_1_40 = -10;
signed long int var_1_41 = 5;
float var_1_42 = 24.75;
signed long int var_1_43 = -5;
unsigned short int var_1_44 = 4;
unsigned char var_1_46 = 25;
unsigned char var_1_47 = 16;
unsigned long int var_1_48 = 3550144569;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 100;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
signed short int var_1_56 = -32;
unsigned char var_1_58 = 1;
signed short int var_1_59 = -10;
signed short int var_1_60 = 22810;
unsigned short int var_1_61 = 256;
signed short int var_1_62 = 4;
signed short int var_1_64 = 0;
unsigned char var_1_65 = 0;
signed short int var_1_66 = 16;
unsigned short int var_1_68 = 2;
unsigned short int var_1_69 = 10;
unsigned short int var_1_70 = 1;
signed long int var_1_71 = -256;
unsigned short int var_1_72 = 0;
unsigned short int var_1_73 = 10000;
unsigned short int var_1_74 = 10000;
unsigned short int var_1_75 = 24784;
unsigned short int var_1_76 = 49425;
unsigned short int var_1_77 = 55329;
signed char var_1_78 = 8;
signed char var_1_79 = -16;
signed char var_1_80 = -4;
unsigned short int var_1_81 = 1;
unsigned long int var_1_82 = 0;
signed short int var_1_83 = 5;
unsigned char var_1_84 = 32;
unsigned long int var_1_85 = 10000;
unsigned long int var_1_86 = 2509333316;
signed short int var_1_87 = 32;
float var_1_88 = 8.5;
unsigned char var_1_89 = 4;
double var_1_90 = 127.2;
double var_1_91 = 16.5;
unsigned short int var_1_92 = 4;
double var_1_93 = 64.375;
signed short int var_1_94 = 64;
signed char var_1_95 = 2;
float var_1_96 = 99.3;
signed char var_1_97 = -25;
unsigned char var_1_98 = 5;
unsigned long int var_1_99 = 100;
unsigned char var_1_100 = 16;
signed short int last_1_var_1_1 = 1000;
double last_1_var_1_13 = 8.5;
unsigned long int last_1_var_1_24 = 1000000000;
signed short int last_1_var_1_31 = -128;
unsigned short int last_1_var_1_38 = 5;
signed long int last_1_var_1_41 = 5;
unsigned char last_1_var_1_47 = 16;
unsigned char last_1_var_1_51 = 1;
signed short int last_1_var_1_56 = -32;
unsigned short int last_1_var_1_61 = 256;
signed long int last_1_var_1_71 = -256;
unsigned short int last_1_var_1_72 = 0;
unsigned long int last_1_var_1_82 = 0;
unsigned long int last_1_var_1_85 = 10000;
signed short int last_1_var_1_87 = 32;
double last_1_var_1_90 = 127.2;
double last_1_var_1_91 = 16.5;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_21 = var_1_58;
 unsigned long int stepLocal_20 = (((last_1_var_1_24) > (var_1_36)) ? (last_1_var_1_24) : (var_1_36));
 unsigned short int stepLocal_19 = var_1_12;
 unsigned char stepLocal_18 = last_1_var_1_51;
 signed long int stepLocal_17 = var_1_32 % var_1_49;
 if (stepLocal_17 <= (var_1_36 + last_1_var_1_82)) {
  if (last_1_var_1_82 < stepLocal_20) {
   if ((var_1_27 ^ var_1_32) == stepLocal_19) {
    if ((! (last_1_var_1_47 != var_1_49)) && stepLocal_21) {
     var_1_56 = (((((var_1_50) > (var_1_36)) ? (var_1_50) : (var_1_36))) - (last_1_var_1_1 + var_1_6));
    } else {
     var_1_56 = var_1_36;
    }
   } else {
    if (last_1_var_1_90 < var_1_15) {
     var_1_56 = (var_1_49 - var_1_28);
    } else {
     if (var_1_34 || stepLocal_18) {
      var_1_56 = ((var_1_60 - var_1_37) - 16);
     } else {
      if (! (var_1_15 >= (var_1_19 * last_1_var_1_91))) {
       var_1_56 = (last_1_var_1_72 + last_1_var_1_87);
      } else {
       var_1_56 = ((((last_1_var_1_72) < (var_1_59)) ? (last_1_var_1_72) : (var_1_59)));
      }
     }
    }
   }
  }
 } else {
  var_1_56 = var_1_36;
 }
 unsigned long int stepLocal_14 = var_1_28;
 if (stepLocal_14 == var_1_6) {
  var_1_43 = (((((last_1_var_1_71 + last_1_var_1_56)) < (last_1_var_1_41)) ? ((last_1_var_1_71 + last_1_var_1_56)) : (last_1_var_1_41)));
 }
 signed long int stepLocal_2 = 64 << (var_1_27 + var_1_28);
 if ((var_1_19 * (var_1_23 + last_1_var_1_13)) > ((var_1_17 + var_1_25) - 16.5)) {
  if (((((var_1_23) > (var_1_19)) ? (var_1_23) : (var_1_19))) <= last_1_var_1_13) {
   var_1_24 = ((((var_1_9) < (var_1_7)) ? (var_1_9) : (var_1_7)));
  } else {
   var_1_24 = ((((last_1_var_1_31) > (var_1_6)) ? (last_1_var_1_31) : (var_1_6)));
  }
 } else {
  if ((((((var_1_26 - last_1_var_1_31)) > (var_1_6)) ? ((var_1_26 - last_1_var_1_31)) : (var_1_6))) < stepLocal_2) {
   var_1_24 = (var_1_28 + 32u);
  }
 }
 if (var_1_52 && var_1_11) {
  if (last_1_var_1_85 > ((var_1_9 + last_1_var_1_38) * last_1_var_1_24)) {
   var_1_51 = var_1_53;
  } else {
   if (((((var_1_16) < (var_1_19)) ? (var_1_16) : (var_1_19))) == var_1_20) {
    var_1_51 = var_1_54;
   } else {
    var_1_51 = (var_1_11 || (var_1_53 || (! var_1_54)));
   }
  }
 } else {
  var_1_51 = (! (var_1_53 && var_1_55));
 }
 if (var_1_51) {
  if (var_1_9 <= var_1_37) {
   var_1_41 = var_1_36;
  }
 } else {
  var_1_41 = (var_1_9 - var_1_28);
 }
 if (var_1_54) {
  var_1_65 = (var_1_51 || var_1_55);
 }
 if (var_1_65) {
  var_1_71 = (-128 + var_1_70);
 }
 if (var_1_65) {
  var_1_87 = var_1_37;
 } else {
  var_1_87 = last_1_var_1_87;
 }
 if (var_1_51) {
  var_1_93 = var_1_30;
 }
 var_1_13 = (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) - (var_1_16 - var_1_17));
 signed long int stepLocal_0 = 1000000;
 if (((var_1_19 - 9.5f) - var_1_15) >= var_1_13) {
  if (! var_1_65) {
   if (stepLocal_0 > var_1_71) {
    var_1_18 = (var_1_16 - var_1_17);
   } else {
    var_1_18 = (var_1_20 - ((((var_1_16) < (((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17))))) ? (var_1_16) : (((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17)))))));
   }
  }
 }
 var_1_61 = ((((last_1_var_1_61) > (var_1_36)) ? (last_1_var_1_61) : (var_1_36)));
 if ((var_1_49 - var_1_37) >= (var_1_41 * var_1_9)) {
  var_1_66 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  var_1_66 = var_1_28;
 }
 if ((var_1_15 * (var_1_19 - var_1_20)) >= var_1_30) {
  var_1_83 = (((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))) - var_1_36);
 }
 if (var_1_65) {
  var_1_88 = 25.5f;
 }
 if (var_1_65) {
  var_1_89 = var_1_69;
 } else {
  var_1_89 = var_1_27;
 }
 var_1_90 = var_1_20;
 var_1_91 = var_1_16;
 if (var_1_55) {
  var_1_94 = var_1_79;
 } else {
  var_1_94 = -8;
 }
 if (var_1_51) {
  var_1_95 = 10;
 } else {
  var_1_95 = var_1_80;
 }
 if (var_1_65) {
  var_1_96 = var_1_30;
 }
 if (var_1_53) {
  var_1_97 = -32;
 } else {
  var_1_97 = -50;
 }
 var_1_99 = var_1_75;
 var_1_100 = var_1_69;
 var_1_82 = (((((((((2u) < (1000000000u)) ? (2u) : (1000000000u))) + var_1_61)) < (var_1_43)) ? ((((((2u) < (1000000000u)) ? (2u) : (1000000000u))) + var_1_61)) : (var_1_43)));
 if ((last_1_var_1_38 / var_1_12) > (var_1_82 * var_1_41)) {
  if (var_1_14 < ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) {
   if (var_1_93 <= var_1_19) {
    var_1_38 = var_1_37;
   } else {
    var_1_38 = (((((var_1_41) > (var_1_6)) ? (var_1_41) : (var_1_6))) + 8);
   }
  } else {
   if (var_1_43 <= var_1_27) {
    var_1_38 = var_1_36;
   } else {
    var_1_38 = var_1_27;
   }
  }
 } else {
  var_1_38 = var_1_37;
 }
 if (((var_1_9 - var_1_82) - var_1_6) < var_1_41) {
  var_1_8 = var_1_7;
 } else {
  if (-128 < var_1_41) {
   var_1_8 = (var_1_7 - (var_1_82 + ((((var_1_6) > (32)) ? (var_1_6) : (32)))));
  } else {
   var_1_8 = ((((var_1_82) < (var_1_9)) ? (var_1_82) : (var_1_9)));
  }
 }
 if (! var_1_51) {
  if ((4 + var_1_87) >= ((((var_1_24) < (var_1_43)) ? (var_1_24) : (var_1_43)))) {
   var_1_1 = ((var_1_87 + var_1_6) - var_1_7);
  } else {
   var_1_1 = (var_1_7 - 2);
  }
 } else {
  var_1_1 = ((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87)));
 }
 if ((var_1_61 * ((((var_1_99) < (4u)) ? (var_1_99) : (4u)))) > (var_1_48 - 32u)) {
  if (var_1_8 > 4) {
   var_1_47 = (var_1_49 - (var_1_50 - var_1_28));
  } else {
   var_1_47 = (((((var_1_49 - var_1_36)) < (var_1_28)) ? ((var_1_49 - var_1_36)) : (var_1_28)));
  }
 } else {
  if (32 <= var_1_24) {
   var_1_47 = (var_1_36 + (var_1_50 - ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))));
  }
 }
 if (var_1_38 > var_1_12) {
  var_1_31 = ((((((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7)))) < (((((var_1_6) > (var_1_28)) ? (var_1_6) : (var_1_28))))) ? (((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7)))) : (((((var_1_6) > (var_1_28)) ? (var_1_6) : (var_1_28))))));
 }
 if ((var_1_17 - var_1_20) < (var_1_30 / ((((var_1_16) > (var_1_19)) ? (var_1_16) : (var_1_19))))) {
  var_1_85 = ((((((((var_1_81) > ((var_1_86 - var_1_71))) ? (var_1_81) : ((var_1_86 - var_1_71))))) < (var_1_49)) ? (((((var_1_81) > ((var_1_86 - var_1_71))) ? (var_1_81) : ((var_1_86 - var_1_71))))) : (var_1_49)));
 } else {
  var_1_85 = (var_1_7 + var_1_8);
 }
 unsigned long int stepLocal_5 = var_1_85;
 signed long int stepLocal_4 = var_1_43;
 signed long int stepLocal_3 = -1;
 if (stepLocal_3 < var_1_43) {
  if (stepLocal_4 > (var_1_71 + var_1_61)) {
   if (var_1_28 < stepLocal_5) {
    var_1_29 = var_1_23;
   } else {
    var_1_29 = var_1_15;
   }
  } else {
   var_1_29 = var_1_14;
  }
 } else {
  var_1_29 = var_1_30;
 }
 unsigned char stepLocal_7 = var_1_51;
 unsigned long int stepLocal_6 = var_1_28 * var_1_6;
 if (var_1_65) {
  if ((16.5f * var_1_15) > (- (var_1_29 + var_1_20))) {
   if (var_1_51) {
    var_1_33 = (10 + var_1_28);
   } else {
    if ((~ 1u) < stepLocal_6) {
     if (stepLocal_7 || (var_1_93 > var_1_15)) {
      var_1_33 = (((((var_1_28 + var_1_27)) < (5)) ? ((var_1_28 + var_1_27)) : (5)));
     }
    } else {
     var_1_33 = (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) - ((((var_1_28) < ((var_1_27 + var_1_37))) ? (var_1_28) : ((var_1_27 + var_1_37)))));
    }
   }
  }
 } else {
  var_1_33 = (var_1_27 - var_1_36);
 }
 signed long int stepLocal_16 = var_1_7 / var_1_9;
 unsigned long int stepLocal_15 = var_1_99;
 if (stepLocal_16 <= 128) {
  if (((var_1_25 + var_1_17) - var_1_14) >= var_1_91) {
   var_1_44 = ((((var_1_27) > (var_1_7)) ? (var_1_27) : (var_1_7)));
  }
 } else {
  if (((var_1_71 * var_1_24) & 256) != stepLocal_15) {
   if (var_1_15 >= var_1_91) {
    var_1_44 = ((((var_1_12) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_12) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))));
   }
  } else {
   var_1_44 = (50 + ((var_1_28 + 128) + var_1_6));
  }
 }
 signed short int stepLocal_22 = var_1_7;
 if (var_1_13 >= var_1_18) {
  if (stepLocal_22 < var_1_99) {
   var_1_64 = (var_1_6 + ((((var_1_37) > (var_1_49)) ? (var_1_37) : (var_1_49))));
  }
 }
 if ((((((var_1_37) < (16)) ? (var_1_37) : (16))) >> ((((var_1_69) > (var_1_70)) ? (var_1_69) : (var_1_70)))) < (var_1_12 / var_1_60)) {
  var_1_68 = ((((((((((((var_1_70) < (var_1_60)) ? (var_1_70) : (var_1_60)))) < ((var_1_94 + var_1_27))) ? (((((var_1_70) < (var_1_60)) ? (var_1_70) : (var_1_60)))) : ((var_1_94 + var_1_27))))) > (((((var_1_37) > (var_1_28)) ? (var_1_37) : (var_1_28))))) ? (((((((((var_1_70) < (var_1_60)) ? (var_1_70) : (var_1_60)))) < ((var_1_94 + var_1_27))) ? (((((var_1_70) < (var_1_60)) ? (var_1_70) : (var_1_60)))) : ((var_1_94 + var_1_27))))) : (((((var_1_37) > (var_1_28)) ? (var_1_37) : (var_1_28))))));
 }
 if (var_1_65) {
  var_1_92 = var_1_85;
 }
 if ((((((((var_1_69) < (var_1_37)) ? (var_1_69) : (var_1_37))) < 0 ) ? -((((var_1_69) < (var_1_37)) ? (var_1_69) : (var_1_37))) : ((((var_1_69) < (var_1_37)) ? (var_1_69) : (var_1_37))))) <= (var_1_24 - ((((var_1_85) > (var_1_68)) ? (var_1_85) : (var_1_68))))) {
  if ((var_1_64 > -8) && var_1_53) {
   var_1_98 = ((((var_1_49) < (var_1_28)) ? (var_1_49) : (var_1_28)));
  } else {
   var_1_98 = ((((var_1_37) < (var_1_50)) ? (var_1_37) : (var_1_50)));
  }
 } else {
  if (((var_1_48 + var_1_49) + var_1_37) < var_1_99) {
   var_1_98 = var_1_28;
  }
 }
 signed long int stepLocal_25 = var_1_49 | var_1_6;
 unsigned short int stepLocal_24 = var_1_12;
 signed long int stepLocal_23 = -4 % var_1_70;
 if (var_1_40 <= stepLocal_23) {
  var_1_72 = (((var_1_73 + var_1_74) + (var_1_75 - var_1_28)) - var_1_7);
 } else {
  if (stepLocal_24 <= ((var_1_41 + var_1_48) | (var_1_38 / var_1_49))) {
   if (stepLocal_25 < (var_1_60 + var_1_41)) {
    if (((var_1_19 - 127.4) - (var_1_17 + var_1_25)) > ((var_1_20 - 64.3) + var_1_30)) {
     var_1_72 = var_1_73;
    } else {
     var_1_72 = var_1_27;
    }
   } else {
    var_1_72 = ((((((((var_1_56) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (var_1_56) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) > (var_1_69)) ? (((((var_1_56) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (var_1_56) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) : (var_1_69)));
   }
  } else {
   var_1_72 = (((((var_1_76) < (var_1_77)) ? (var_1_76) : (var_1_77))) - var_1_70);
  }
 }
 if (var_1_65) {
  if (var_1_51) {
   var_1_10 = (var_1_6 + (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) - var_1_92));
  }
 } else {
  var_1_10 = (var_1_7 + var_1_6);
 }
 signed short int stepLocal_13 = var_1_6;
 unsigned long int stepLocal_12 = var_1_7 - var_1_28;
 if (var_1_10 >= stepLocal_13) {
  var_1_42 = ((((var_1_22) < (var_1_20)) ? (var_1_22) : (var_1_20)));
 } else {
  if (((8 * 32) + (5 & var_1_83)) == stepLocal_12) {
   var_1_42 = ((((var_1_23) > (var_1_15)) ? (var_1_23) : (var_1_15)));
  }
 }
 unsigned char stepLocal_1 = var_1_65;
 if (var_1_42 >= ((((2.7f) > ((31.4f * var_1_20))) ? (2.7f) : ((31.4f * var_1_20))))) {
  if ((var_1_14 <= var_1_15) || stepLocal_1) {
   var_1_21 = ((var_1_22 + var_1_23) + var_1_17);
  } else {
   var_1_21 = ((((var_1_20) > (var_1_15)) ? (var_1_20) : (var_1_15)));
  }
 } else {
  var_1_21 = (var_1_14 - var_1_16);
 }
 signed long int stepLocal_11 = -10 + ((((var_1_71) < (var_1_43)) ? (var_1_71) : (var_1_43)));
 signed char stepLocal_10 = var_1_37;
 unsigned long int stepLocal_9 = var_1_99;
 unsigned long int stepLocal_8 = var_1_99;
 if ((- var_1_17) < var_1_21) {
  if ((var_1_99 + var_1_72) < stepLocal_11) {
   if ((-10 * var_1_36) > stepLocal_9) {
    var_1_39 = (((((var_1_37) < (((((var_1_40) > (var_1_36)) ? (var_1_40) : (var_1_36))))) ? (var_1_37) : (((((var_1_40) > (var_1_36)) ? (var_1_40) : (var_1_36)))))) + 8);
   } else {
    var_1_39 = (var_1_36 + var_1_40);
   }
  } else {
   var_1_39 = (var_1_36 - ((((var_1_37) < (100)) ? (var_1_37) : (100))));
  }
 } else {
  if ((- var_1_32) <= stepLocal_10) {
   if (((var_1_15 - var_1_14) + (var_1_23 / var_1_19)) > ((var_1_25 + var_1_17) - ((((var_1_16) > (var_1_20)) ? (var_1_16) : (var_1_20))))) {
    var_1_39 = (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) + var_1_28);
   } else {
    var_1_39 = ((((5) > (-64)) ? (5) : (-64)));
   }
  } else {
   if (stepLocal_8 > var_1_71) {
    var_1_39 = ((((-4) > (var_1_40)) ? (-4) : (var_1_40)));
   } else {
    var_1_39 = (((((var_1_36) < (var_1_28)) ? (var_1_36) : (var_1_28))) - var_1_37);
   }
  }
 }
 if (var_1_13 > var_1_21) {
  var_1_46 = (((((var_1_27 + var_1_37)) > ((var_1_28 + var_1_36))) ? ((var_1_27 + var_1_37)) : ((var_1_28 + var_1_36))));
 }
 if (((((var_1_13) > (var_1_23)) ? (var_1_13) : (var_1_23))) == (var_1_22 * (var_1_17 - 199.8))) {
  if (var_1_51) {
   if (var_1_30 > var_1_25) {
    var_1_62 = var_1_6;
   } else {
    var_1_62 = (var_1_6 - ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))));
   }
  } else {
   var_1_62 = (((((var_1_37 + 128)) < ((var_1_50 + ((((var_1_40) > (var_1_10)) ? (var_1_40) : (var_1_10)))))) ? ((var_1_37 + 128)) : ((var_1_50 + ((((var_1_40) > (var_1_10)) ? (var_1_40) : (var_1_10)))))));
  }
 } else {
  var_1_62 = (((((var_1_7) < (var_1_36)) ? (var_1_7) : (var_1_36))) - (var_1_6 + var_1_10));
 }
 if (! (var_1_82 == var_1_62)) {
  var_1_84 = (var_1_81 + var_1_37);
 }
 unsigned long int stepLocal_30 = 16u;
 unsigned long int stepLocal_29 = ((((var_1_85) < (var_1_24)) ? (var_1_85) : (var_1_24))) & var_1_82;
 unsigned char stepLocal_28 = var_1_30 >= var_1_25;
 unsigned short int stepLocal_27 = var_1_75;
 unsigned long int stepLocal_26 = 32u;
 if (stepLocal_26 >= var_1_99) {
  if (stepLocal_30 <= (var_1_49 * var_1_84)) {
   if ((- var_1_82) > stepLocal_27) {
    var_1_78 = (var_1_80 + ((((var_1_40) < (var_1_79)) ? (var_1_40) : (var_1_79))));
   } else {
    if ((var_1_9 >> var_1_81) > stepLocal_29) {
     var_1_78 = var_1_69;
    } else {
     var_1_78 = var_1_70;
    }
   }
  } else {
   var_1_78 = var_1_40;
  }
 } else {
  if (var_1_65 && stepLocal_28) {
   var_1_78 = (var_1_27 - var_1_69);
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 49151);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 16383);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 4611686.018427383000e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 4611686.018427388000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427388000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -1);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 12);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 12);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -16383);
 assume_abort_if_not(var_1_32 <= 16383);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -63);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 2147483647);
 assume_abort_if_not(var_1_48 <= 4294967295);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 127);
 assume_abort_if_not(var_1_49 <= 254);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 63);
 assume_abort_if_not(var_1_50 <= 127);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_59 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_59 >= -16383);
 assume_abort_if_not(var_1_59 <= 16383);
 var_1_60 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_60 >= 16382);
 assume_abort_if_not(var_1_60 <= 32766);
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 1);
 assume_abort_if_not(var_1_69 <= 30);
 var_1_70 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_70 >= 1);
 assume_abort_if_not(var_1_70 <= 30);
 var_1_73 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_73 >= 8191);
 assume_abort_if_not(var_1_73 <= 16384);
 var_1_74 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_74 >= 8192);
 assume_abort_if_not(var_1_74 <= 16383);
 var_1_75 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_75 >= 24575);
 assume_abort_if_not(var_1_75 <= 32767);
 var_1_76 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_76 >= 32767);
 assume_abort_if_not(var_1_76 <= 65534);
 var_1_77 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_77 >= 32767);
 assume_abort_if_not(var_1_77 <= 65534);
 var_1_79 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_79 >= -63);
 assume_abort_if_not(var_1_79 <= 63);
 var_1_80 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_80 >= -63);
 assume_abort_if_not(var_1_80 <= 63);
 var_1_81 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_81 >= 1);
 assume_abort_if_not(var_1_81 <= 15);
 var_1_86 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_86 >= 2147483647);
 assume_abort_if_not(var_1_86 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_91 = var_1_91;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((! var_1_51) ? (((4 + var_1_87) >= ((((var_1_24) < (var_1_43)) ? (var_1_24) : (var_1_43)))) ? (var_1_1 == ((signed short int) ((var_1_87 + var_1_6) - var_1_7))) : (var_1_1 == ((signed short int) (var_1_7 - 2)))) : (var_1_1 == ((signed short int) ((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87)))))) && ((((var_1_9 - var_1_82) - var_1_6) < var_1_41) ? (var_1_8 == ((signed short int) var_1_7)) : ((-128 < var_1_41) ? (var_1_8 == ((signed short int) (var_1_7 - (var_1_82 + ((((var_1_6) > (32)) ? (var_1_6) : (32))))))) : (var_1_8 == ((signed short int) ((((var_1_82) < (var_1_9)) ? (var_1_82) : (var_1_9)))))))) && (var_1_65 ? (var_1_51 ? (var_1_10 == ((unsigned short int) (var_1_6 + (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) - var_1_92)))) : 1) : (var_1_10 == ((unsigned short int) (var_1_7 + var_1_6))))) && (var_1_13 == ((double) (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) - (var_1_16 - var_1_17))))) && ((((var_1_19 - 9.5f) - var_1_15) >= var_1_13) ? ((! var_1_65) ? ((1000000 > var_1_71) ? (var_1_18 == ((float) (var_1_16 - var_1_17))) : (var_1_18 == ((float) (var_1_20 - ((((var_1_16) < (((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17))))) ? (var_1_16) : (((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17)))))))))) : 1) : 1)) && ((var_1_42 >= ((((2.7f) > ((31.4f * var_1_20))) ? (2.7f) : ((31.4f * var_1_20))))) ? (((var_1_14 <= var_1_15) || var_1_65) ? (var_1_21 == ((double) ((var_1_22 + var_1_23) + var_1_17))) : (var_1_21 == ((double) ((((var_1_20) > (var_1_15)) ? (var_1_20) : (var_1_15)))))) : (var_1_21 == ((double) (var_1_14 - var_1_16))))) && (((var_1_19 * (var_1_23 + last_1_var_1_13)) > ((var_1_17 + var_1_25) - 16.5)) ? ((((((var_1_23) > (var_1_19)) ? (var_1_23) : (var_1_19))) <= last_1_var_1_13) ? (var_1_24 == ((unsigned long int) ((((var_1_9) < (var_1_7)) ? (var_1_9) : (var_1_7))))) : (var_1_24 == ((unsigned long int) ((((last_1_var_1_31) > (var_1_6)) ? (last_1_var_1_31) : (var_1_6)))))) : (((((((var_1_26 - last_1_var_1_31)) > (var_1_6)) ? ((var_1_26 - last_1_var_1_31)) : (var_1_6))) < (64 << (var_1_27 + var_1_28))) ? (var_1_24 == ((unsigned long int) (var_1_28 + 32u))) : 1))) && ((-1 < var_1_43) ? ((var_1_43 > (var_1_71 + var_1_61)) ? ((var_1_28 < var_1_85) ? (var_1_29 == ((double) var_1_23)) : (var_1_29 == ((double) var_1_15))) : (var_1_29 == ((double) var_1_14))) : (var_1_29 == ((double) var_1_30)))) && ((var_1_38 > var_1_12) ? (var_1_31 == ((signed short int) ((((((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7)))) < (((((var_1_6) > (var_1_28)) ? (var_1_6) : (var_1_28))))) ? (((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7)))) : (((((var_1_6) > (var_1_28)) ? (var_1_6) : (var_1_28)))))))) : 1)) && (var_1_65 ? (((16.5f * var_1_15) > (- (var_1_29 + var_1_20))) ? (var_1_51 ? (var_1_33 == ((signed char) (10 + var_1_28))) : (((~ 1u) < (var_1_28 * var_1_6)) ? ((var_1_51 || (var_1_93 > var_1_15)) ? (var_1_33 == ((signed char) (((((var_1_28 + var_1_27)) < (5)) ? ((var_1_28 + var_1_27)) : (5))))) : 1) : (var_1_33 == ((signed char) (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) - ((((var_1_28) < ((var_1_27 + var_1_37))) ? (var_1_28) : ((var_1_27 + var_1_37))))))))) : 1) : (var_1_33 == ((signed char) (var_1_27 - var_1_36))))) && (((last_1_var_1_38 / var_1_12) > (var_1_82 * var_1_41)) ? ((var_1_14 < ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) ? ((var_1_93 <= var_1_19) ? (var_1_38 == ((unsigned short int) var_1_37)) : (var_1_38 == ((unsigned short int) (((((var_1_41) > (var_1_6)) ? (var_1_41) : (var_1_6))) + 8)))) : ((var_1_43 <= var_1_27) ? (var_1_38 == ((unsigned short int) var_1_36)) : (var_1_38 == ((unsigned short int) var_1_27)))) : (var_1_38 == ((unsigned short int) var_1_37)))) && (((- var_1_17) < var_1_21) ? (((var_1_99 + var_1_72) < (-10 + ((((var_1_71) < (var_1_43)) ? (var_1_71) : (var_1_43))))) ? (((-10 * var_1_36) > var_1_99) ? (var_1_39 == ((signed char) (((((var_1_37) < (((((var_1_40) > (var_1_36)) ? (var_1_40) : (var_1_36))))) ? (var_1_37) : (((((var_1_40) > (var_1_36)) ? (var_1_40) : (var_1_36)))))) + 8))) : (var_1_39 == ((signed char) (var_1_36 + var_1_40)))) : (var_1_39 == ((signed char) (var_1_36 - ((((var_1_37) < (100)) ? (var_1_37) : (100))))))) : (((- var_1_32) <= var_1_37) ? ((((var_1_15 - var_1_14) + (var_1_23 / var_1_19)) > ((var_1_25 + var_1_17) - ((((var_1_16) > (var_1_20)) ? (var_1_16) : (var_1_20))))) ? (var_1_39 == ((signed char) (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) + var_1_28))) : (var_1_39 == ((signed char) ((((5) > (-64)) ? (5) : (-64)))))) : ((var_1_99 > var_1_71) ? (var_1_39 == ((signed char) ((((-4) > (var_1_40)) ? (-4) : (var_1_40))))) : (var_1_39 == ((signed char) (((((var_1_36) < (var_1_28)) ? (var_1_36) : (var_1_28))) - var_1_37))))))) && (var_1_51 ? ((var_1_9 <= var_1_37) ? (var_1_41 == ((signed long int) var_1_36)) : 1) : (var_1_41 == ((signed long int) (var_1_9 - var_1_28))))) && ((var_1_10 >= var_1_6) ? (var_1_42 == ((float) ((((var_1_22) < (var_1_20)) ? (var_1_22) : (var_1_20))))) : ((((8 * 32) + (5 & var_1_83)) == (var_1_7 - var_1_28)) ? (var_1_42 == ((float) ((((var_1_23) > (var_1_15)) ? (var_1_23) : (var_1_15))))) : 1))) && ((var_1_28 == var_1_6) ? (var_1_43 == ((signed long int) (((((last_1_var_1_71 + last_1_var_1_56)) < (last_1_var_1_41)) ? ((last_1_var_1_71 + last_1_var_1_56)) : (last_1_var_1_41))))) : 1)) && (((var_1_7 / var_1_9) <= 128) ? ((((var_1_25 + var_1_17) - var_1_14) >= var_1_91) ? (var_1_44 == ((unsigned short int) ((((var_1_27) > (var_1_7)) ? (var_1_27) : (var_1_7))))) : 1) : ((((var_1_71 * var_1_24) & 256) != var_1_99) ? ((var_1_15 >= var_1_91) ? (var_1_44 == ((unsigned short int) ((((var_1_12) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_12) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))))) : 1) : (var_1_44 == ((unsigned short int) (50 + ((var_1_28 + 128) + var_1_6))))))) && ((var_1_13 > var_1_21) ? (var_1_46 == ((unsigned char) (((((var_1_27 + var_1_37)) > ((var_1_28 + var_1_36))) ? ((var_1_27 + var_1_37)) : ((var_1_28 + var_1_36)))))) : 1)) && (((var_1_61 * ((((var_1_99) < (4u)) ? (var_1_99) : (4u)))) > (var_1_48 - 32u)) ? ((var_1_8 > 4) ? (var_1_47 == ((unsigned char) (var_1_49 - (var_1_50 - var_1_28)))) : (var_1_47 == ((unsigned char) (((((var_1_49 - var_1_36)) < (var_1_28)) ? ((var_1_49 - var_1_36)) : (var_1_28)))))) : ((32 <= var_1_24) ? (var_1_47 == ((unsigned char) (var_1_36 + (var_1_50 - ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))))) : 1))) && ((var_1_52 && var_1_11) ? ((last_1_var_1_85 > ((var_1_9 + last_1_var_1_38) * last_1_var_1_24)) ? (var_1_51 == ((unsigned char) var_1_53)) : ((((((var_1_16) < (var_1_19)) ? (var_1_16) : (var_1_19))) == var_1_20) ? (var_1_51 == ((unsigned char) var_1_54)) : (var_1_51 == ((unsigned char) (var_1_11 || (var_1_53 || (! var_1_54))))))) : (var_1_51 == ((unsigned char) (! (var_1_53 && var_1_55)))))) && (((var_1_32 % var_1_49) <= (var_1_36 + last_1_var_1_82)) ? ((last_1_var_1_82 < ((((last_1_var_1_24) > (var_1_36)) ? (last_1_var_1_24) : (var_1_36)))) ? (((var_1_27 ^ var_1_32) == var_1_12) ? (((! (last_1_var_1_47 != var_1_49)) && var_1_58) ? (var_1_56 == ((signed short int) (((((var_1_50) > (var_1_36)) ? (var_1_50) : (var_1_36))) - (last_1_var_1_1 + var_1_6)))) : (var_1_56 == ((signed short int) var_1_36))) : ((last_1_var_1_90 < var_1_15) ? (var_1_56 == ((signed short int) (var_1_49 - var_1_28))) : ((var_1_34 || last_1_var_1_51) ? (var_1_56 == ((signed short int) ((var_1_60 - var_1_37) - 16))) : ((! (var_1_15 >= (var_1_19 * last_1_var_1_91))) ? (var_1_56 == ((signed short int) (last_1_var_1_72 + last_1_var_1_87))) : (var_1_56 == ((signed short int) ((((last_1_var_1_72) < (var_1_59)) ? (last_1_var_1_72) : (var_1_59))))))))) : 1) : (var_1_56 == ((signed short int) var_1_36)))) && (var_1_61 == ((unsigned short int) ((((last_1_var_1_61) > (var_1_36)) ? (last_1_var_1_61) : (var_1_36)))))) && ((((((var_1_13) > (var_1_23)) ? (var_1_13) : (var_1_23))) == (var_1_22 * (var_1_17 - 199.8))) ? (var_1_51 ? ((var_1_30 > var_1_25) ? (var_1_62 == ((signed short int) var_1_6)) : (var_1_62 == ((signed short int) (var_1_6 - ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))))) : (var_1_62 == ((signed short int) (((((var_1_37 + 128)) < ((var_1_50 + ((((var_1_40) > (var_1_10)) ? (var_1_40) : (var_1_10)))))) ? ((var_1_37 + 128)) : ((var_1_50 + ((((var_1_40) > (var_1_10)) ? (var_1_40) : (var_1_10)))))))))) : (var_1_62 == ((signed short int) (((((var_1_7) < (var_1_36)) ? (var_1_7) : (var_1_36))) - (var_1_6 + var_1_10)))))) && ((var_1_13 >= var_1_18) ? ((var_1_7 < var_1_99) ? (var_1_64 == ((signed short int) (var_1_6 + ((((var_1_37) > (var_1_49)) ? (var_1_37) : (var_1_49)))))) : 1) : 1)) && (var_1_54 ? (var_1_65 == ((unsigned char) (var_1_51 || var_1_55))) : 1)) && (((var_1_49 - var_1_37) >= (var_1_41 * var_1_9)) ? (var_1_66 == ((signed short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_66 == ((signed short int) var_1_28)))) && (((((((var_1_37) < (16)) ? (var_1_37) : (16))) >> ((((var_1_69) > (var_1_70)) ? (var_1_69) : (var_1_70)))) < (var_1_12 / var_1_60)) ? (var_1_68 == ((unsigned short int) ((((((((((((var_1_70) < (var_1_60)) ? (var_1_70) : (var_1_60)))) < ((var_1_94 + var_1_27))) ? (((((var_1_70) < (var_1_60)) ? (var_1_70) : (var_1_60)))) : ((var_1_94 + var_1_27))))) > (((((var_1_37) > (var_1_28)) ? (var_1_37) : (var_1_28))))) ? (((((((((var_1_70) < (var_1_60)) ? (var_1_70) : (var_1_60)))) < ((var_1_94 + var_1_27))) ? (((((var_1_70) < (var_1_60)) ? (var_1_70) : (var_1_60)))) : ((var_1_94 + var_1_27))))) : (((((var_1_37) > (var_1_28)) ? (var_1_37) : (var_1_28)))))))) : 1)) && (var_1_65 ? (var_1_71 == ((signed long int) (-128 + var_1_70))) : 1)) && ((var_1_40 <= (-4 % var_1_70)) ? (var_1_72 == ((unsigned short int) (((var_1_73 + var_1_74) + (var_1_75 - var_1_28)) - var_1_7))) : ((var_1_12 <= ((var_1_41 + var_1_48) | (var_1_38 / var_1_49))) ? (((var_1_49 | var_1_6) < (var_1_60 + var_1_41)) ? ((((var_1_19 - 127.4) - (var_1_17 + var_1_25)) > ((var_1_20 - 64.3) + var_1_30)) ? (var_1_72 == ((unsigned short int) var_1_73)) : (var_1_72 == ((unsigned short int) var_1_27))) : (var_1_72 == ((unsigned short int) ((((((((var_1_56) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (var_1_56) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) > (var_1_69)) ? (((((var_1_56) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (var_1_56) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) : (var_1_69)))))) : (var_1_72 == ((unsigned short int) (((((var_1_76) < (var_1_77)) ? (var_1_76) : (var_1_77))) - var_1_70)))))) && ((32u >= var_1_99) ? ((16u <= (var_1_49 * var_1_84)) ? (((- var_1_82) > var_1_75) ? (var_1_78 == ((signed char) (var_1_80 + ((((var_1_40) < (var_1_79)) ? (var_1_40) : (var_1_79)))))) : (((var_1_9 >> var_1_81) > (((((var_1_85) < (var_1_24)) ? (var_1_85) : (var_1_24))) & var_1_82)) ? (var_1_78 == ((signed char) var_1_69)) : (var_1_78 == ((signed char) var_1_70)))) : (var_1_78 == ((signed char) var_1_40))) : ((var_1_65 && (var_1_30 >= var_1_25)) ? (var_1_78 == ((signed char) (var_1_27 - var_1_69))) : 1))) && (var_1_82 == ((unsigned long int) (((((((((2u) < (1000000000u)) ? (2u) : (1000000000u))) + var_1_61)) < (var_1_43)) ? ((((((2u) < (1000000000u)) ? (2u) : (1000000000u))) + var_1_61)) : (var_1_43)))))) && (((var_1_15 * (var_1_19 - var_1_20)) >= var_1_30) ? (var_1_83 == ((signed short int) (((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))) - var_1_36))) : 1)) && ((! (var_1_82 == var_1_62)) ? (var_1_84 == ((unsigned char) (var_1_81 + var_1_37))) : 1)) && (((var_1_17 - var_1_20) < (var_1_30 / ((((var_1_16) > (var_1_19)) ? (var_1_16) : (var_1_19))))) ? (var_1_85 == ((unsigned long int) ((((((((var_1_81) > ((var_1_86 - var_1_71))) ? (var_1_81) : ((var_1_86 - var_1_71))))) < (var_1_49)) ? (((((var_1_81) > ((var_1_86 - var_1_71))) ? (var_1_81) : ((var_1_86 - var_1_71))))) : (var_1_49))))) : (var_1_85 == ((unsigned long int) (var_1_7 + var_1_8))))) && (var_1_65 ? (var_1_87 == ((signed short int) var_1_37)) : (var_1_87 == ((signed short int) last_1_var_1_87)))) && (var_1_65 ? (var_1_88 == ((float) 25.5f)) : 1)) && (var_1_65 ? (var_1_89 == ((unsigned char) var_1_69)) : (var_1_89 == ((unsigned char) var_1_27)))) && (var_1_90 == ((double) var_1_20))) && (var_1_91 == ((double) var_1_16))) && (var_1_65 ? (var_1_92 == ((unsigned short int) var_1_85)) : 1)) && (var_1_51 ? (var_1_93 == ((double) var_1_30)) : 1)) && (var_1_55 ? (var_1_94 == ((signed short int) var_1_79)) : (var_1_94 == ((signed short int) -8)))) && (var_1_51 ? (var_1_95 == ((signed char) 10)) : (var_1_95 == ((signed char) var_1_80)))) && (var_1_65 ? (var_1_96 == ((float) var_1_30)) : 1)) && (var_1_53 ? (var_1_97 == ((signed char) -32)) : (var_1_97 == ((signed char) -50)))) && (((((((((var_1_69) < (var_1_37)) ? (var_1_69) : (var_1_37))) < 0 ) ? -((((var_1_69) < (var_1_37)) ? (var_1_69) : (var_1_37))) : ((((var_1_69) < (var_1_37)) ? (var_1_69) : (var_1_37))))) <= (var_1_24 - ((((var_1_85) > (var_1_68)) ? (var_1_85) : (var_1_68))))) ? (((var_1_64 > -8) && var_1_53) ? (var_1_98 == ((unsigned char) ((((var_1_49) < (var_1_28)) ? (var_1_49) : (var_1_28))))) : (var_1_98 == ((unsigned char) ((((var_1_37) < (var_1_50)) ? (var_1_37) : (var_1_50)))))) : ((((var_1_48 + var_1_49) + var_1_37) < var_1_99) ? (var_1_98 == ((unsigned char) var_1_28)) : 1))) && (var_1_99 == ((unsigned long int) var_1_75))) && (var_1_100 == ((unsigned char) var_1_69))
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

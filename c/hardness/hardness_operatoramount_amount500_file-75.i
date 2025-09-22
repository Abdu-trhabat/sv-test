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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch75Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 5;
unsigned char var_1_8 = 25;
unsigned char var_1_9 = 64;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 0;
signed char var_1_12 = 4;
signed char var_1_13 = 0;
float var_1_14 = 255.5;
float var_1_18 = 2.5;
float var_1_19 = 255.8;
float var_1_20 = 49.5;
unsigned long int var_1_21 = 128;
unsigned long int var_1_23 = 2700720372;
signed char var_1_24 = 1;
signed char var_1_25 = -5;
signed long int var_1_26 = 128;
signed short int var_1_28 = -8;
float var_1_29 = 127.9;
float var_1_30 = 1000000000.8;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned long int var_1_34 = 0;
signed char var_1_35 = 64;
signed char var_1_36 = 0;
signed short int var_1_37 = 1;
signed char var_1_38 = 50;
signed short int var_1_39 = 1;
signed short int var_1_40 = 5;
float var_1_41 = 99999.1;
float var_1_42 = 9.6;
float var_1_43 = 128.2;
float var_1_44 = 24.75;
float var_1_45 = 31.8;
float var_1_46 = 32.5;
unsigned long int var_1_47 = 5;
unsigned char var_1_48 = 0;
signed short int var_1_49 = 1;
signed long int var_1_50 = 4;
unsigned char var_1_51 = 0;
signed char var_1_52 = 0;
signed char var_1_53 = -32;
signed char var_1_54 = 1;
double var_1_55 = 4.125;
double var_1_56 = 256.75;
double var_1_57 = 0.0;
double var_1_58 = 0.0;
signed long int var_1_59 = 64;
signed long int var_1_61 = 50;
float var_1_62 = 1.4;
unsigned long int var_1_63 = 10;
unsigned long int var_1_64 = 100;
unsigned long int var_1_65 = 2;
double var_1_66 = 64.625;
signed char var_1_67 = -4;
signed char var_1_68 = 100;
unsigned char var_1_69 = 128;
signed short int var_1_70 = -1;
unsigned char var_1_71 = 128;
unsigned long int var_1_72 = 3300465183;
unsigned char var_1_73 = 64;
unsigned char var_1_74 = 32;
unsigned char var_1_75 = 32;
unsigned long int var_1_76 = 256;
unsigned long int var_1_77 = 1000000000;
unsigned long int var_1_78 = 1196959568;
unsigned long int var_1_79 = 1382407222;
unsigned long int var_1_80 = 1819491419;
signed char var_1_81 = -10;
signed char var_1_82 = 8;
unsigned char var_1_83 = 8;
signed char var_1_84 = -10;
double var_1_85 = 9999999999.625;
unsigned short int var_1_87 = 64;
unsigned short int var_1_88 = 10000;
float var_1_89 = 10.5;
double var_1_90 = 2.625;
unsigned long int var_1_91 = 32;
unsigned short int var_1_92 = 256;
unsigned short int var_1_93 = 16;
float var_1_94 = 31.5;
float var_1_95 = 15.65;
signed long int var_1_96 = 5;
unsigned char var_1_97 = 0;
signed long int var_1_98 = 0;
signed char var_1_99 = -10;
unsigned char var_1_100 = 0;
unsigned long int var_1_101 = 5;
signed long int var_1_102 = -16;
double var_1_105 = 10000000000000.5;
signed char last_1_var_1_12 = 4;
unsigned long int last_1_var_1_21 = 128;
signed short int last_1_var_1_28 = -8;
unsigned char last_1_var_1_31 = 0;
signed short int last_1_var_1_37 = 1;
unsigned long int last_1_var_1_47 = 5;
unsigned char last_1_var_1_48 = 0;
double last_1_var_1_55 = 4.125;
signed long int last_1_var_1_59 = 64;
unsigned long int last_1_var_1_63 = 10;
unsigned char last_1_var_1_69 = 128;
float last_1_var_1_89 = 10.5;
double last_1_var_1_90 = 2.625;
signed long int last_1_var_1_96 = 5;
unsigned char last_1_var_1_97 = 0;
signed long int last_1_var_1_102 = -16;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_10 = (((var_1_49) > (var_1_72)) ? (var_1_49) : (var_1_72));
 signed long int stepLocal_9 = (32 >> var_1_50) / var_1_4;
 unsigned char stepLocal_8 = var_1_74;
 if (last_1_var_1_59 == stepLocal_8) {
  if (last_1_var_1_63 >= stepLocal_10) {
   if (last_1_var_1_63 != stepLocal_9) {
    if (last_1_var_1_48) {
     var_1_85 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
    } else {
     var_1_85 = ((((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) > (var_1_58)) ? (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) : (var_1_58)));
    }
   } else {
    var_1_85 = (var_1_58 + (var_1_43 + var_1_45));
   }
  } else {
   var_1_85 = (((((var_1_57 - var_1_43) - var_1_44) < 0 ) ? -((var_1_57 - var_1_43) - var_1_44) : ((var_1_57 - var_1_43) - var_1_44)));
  }
 } else {
  var_1_85 = ((((var_1_45) > ((var_1_44 + var_1_43))) ? (var_1_45) : ((var_1_44 + var_1_43))));
 }
 if (var_1_85 >= var_1_45) {
  if (! var_1_32) {
   var_1_62 = (var_1_20 - var_1_56);
  } else {
   var_1_62 = (var_1_46 + ((((((((var_1_43) < (var_1_56)) ? (var_1_43) : (var_1_56)))) < (var_1_58)) ? (((((var_1_43) < (var_1_56)) ? (var_1_43) : (var_1_56)))) : (var_1_58))));
  }
 }
 if (! ((var_1_20 - var_1_19) < (var_1_44 / var_1_58))) {
  var_1_69 = (var_1_49 + var_1_50);
 } else {
  if (var_1_51) {
   var_1_69 = (var_1_4 - var_1_9);
  } else {
   if ((var_1_44 * last_1_var_1_89) <= last_1_var_1_55) {
    var_1_69 = ((((var_1_68) < (((((((((var_1_36) > (var_1_40)) ? (var_1_36) : (var_1_40)))) < (8)) ? (((((var_1_36) > (var_1_40)) ? (var_1_36) : (var_1_40)))) : (8))))) ? (var_1_68) : (((((((((var_1_36) > (var_1_40)) ? (var_1_36) : (var_1_40)))) < (8)) ? (((((var_1_36) > (var_1_40)) ? (var_1_36) : (var_1_40)))) : (8))))));
   } else {
    if (! (last_1_var_1_90 <= 127.875)) {
     var_1_69 = var_1_49;
    } else {
     if (last_1_var_1_31) {
      var_1_69 = ((((var_1_40) > ((var_1_4 - var_1_49))) ? (var_1_40) : ((var_1_4 - var_1_49))));
     } else {
      var_1_69 = (var_1_4 - ((((var_1_49) < (var_1_10)) ? (var_1_49) : (var_1_10))));
     }
    }
   }
  }
 }
 unsigned char stepLocal_14 = last_1_var_1_48;
 signed long int stepLocal_13 = (((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74));
 signed long int stepLocal_12 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - 32;
 signed long int stepLocal_11 = last_1_var_1_69;
 if (stepLocal_13 <= last_1_var_1_47) {
  if (stepLocal_11 <= var_1_75) {
   var_1_89 = ((((var_1_45) < ((var_1_19 - var_1_18))) ? (var_1_45) : ((var_1_19 - var_1_18))));
  } else {
   if (stepLocal_12 >= var_1_10) {
    var_1_89 = (((((((var_1_42) > ((var_1_19 - var_1_43))) ? (var_1_42) : ((var_1_19 - var_1_43)))) < 0 ) ? -((((var_1_42) > ((var_1_19 - var_1_43))) ? (var_1_42) : ((var_1_19 - var_1_43)))) : ((((var_1_42) > ((var_1_19 - var_1_43))) ? (var_1_42) : ((var_1_19 - var_1_43))))));
   } else {
    var_1_89 = ((var_1_44 - var_1_56) + var_1_42);
   }
  }
 } else {
  if (stepLocal_14 || (last_1_var_1_12 <= last_1_var_1_96)) {
   if (last_1_var_1_48) {
    var_1_89 = (var_1_56 - (var_1_43 + ((((var_1_44) < (var_1_58)) ? (var_1_44) : (var_1_58)))));
   } else {
    var_1_89 = var_1_44;
   }
  }
 }
 if (2 >= last_1_var_1_102) {
  var_1_87 = (((var_1_88 - 2) + last_1_var_1_21) + last_1_var_1_28);
 }
 if (((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28))) < (var_1_10 << var_1_49)) {
  if (last_1_var_1_21 > (var_1_13 >> var_1_50)) {
   if (var_1_32 || (! last_1_var_1_97)) {
    var_1_48 = ((! var_1_51) && var_1_33);
   }
  }
 } else {
  var_1_48 = (! var_1_51);
 }
 var_1_12 = (var_1_11 - var_1_13);
 if ((var_1_10 << var_1_5) == 64) {
  var_1_24 = (var_1_11 + var_1_25);
 }
 var_1_31 = (var_1_32 && var_1_33);
 unsigned char stepLocal_2 = var_1_31;
 if (stepLocal_2 && var_1_33) {
  var_1_34 = var_1_5;
 } else {
  var_1_34 = ((((1u) < 0 ) ? -(1u) : (1u)));
 }
 if (var_1_33) {
  var_1_47 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 }
 var_1_63 = var_1_64;
 var_1_67 = (((((((((var_1_54) > (var_1_40)) ? (var_1_54) : (var_1_40))) + -2)) < (((var_1_68 - var_1_39) - var_1_50))) ? ((((((var_1_54) > (var_1_40)) ? (var_1_54) : (var_1_40))) + -2)) : (((var_1_68 - var_1_39) - var_1_50))));
 if (((((var_1_45) < (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) ? (var_1_45) : (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))))) > (var_1_19 - var_1_44)) {
  var_1_84 = (var_1_39 - var_1_74);
 } else {
  var_1_84 = (2 - var_1_50);
 }
 if (var_1_33) {
  var_1_90 = var_1_57;
 } else {
  var_1_90 = var_1_46;
 }
 var_1_91 = var_1_75;
 if (var_1_32) {
  var_1_92 = 16;
 } else {
  var_1_92 = var_1_40;
 }
 if (var_1_48) {
  var_1_93 = var_1_5;
 } else {
  var_1_93 = var_1_38;
 }
 if (var_1_31) {
  var_1_95 = 1.375f;
 }
 if (var_1_31) {
  var_1_96 = var_1_49;
 } else {
  var_1_96 = last_1_var_1_96;
 }
 if (var_1_33) {
  var_1_97 = var_1_32;
 } else {
  var_1_97 = var_1_51;
 }
 if (var_1_31) {
  var_1_99 = var_1_25;
 } else {
  var_1_99 = var_1_50;
 }
 var_1_100 = var_1_39;
 var_1_101 = var_1_4;
 var_1_105 = var_1_18;
 if (var_1_97) {
  var_1_70 = var_1_87;
 } else {
  if (((~ var_1_84) & var_1_38) > var_1_10) {
   var_1_70 = ((((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13)));
  } else {
   var_1_70 = ((((((((var_1_38) > (32)) ? (var_1_38) : (32)))) > (1)) ? (((((var_1_38) > (32)) ? (var_1_38) : (32)))) : (1)));
  }
 }
 signed long int stepLocal_7 = var_1_40 << var_1_8;
 if (stepLocal_7 < ((((var_1_39) < (((((var_1_87) < (var_1_67)) ? (var_1_87) : (var_1_67))))) ? (var_1_39) : (((((var_1_87) < (var_1_67)) ? (var_1_87) : (var_1_67))))))) {
  if (127.8f > var_1_18) {
   var_1_83 = (var_1_4 - var_1_74);
  } else {
   var_1_83 = ((((var_1_49) > ((var_1_38 + var_1_13))) ? (var_1_49) : ((var_1_38 + var_1_13))));
  }
 }
 if (var_1_101 <= var_1_96) {
  var_1_1 = (var_1_4 - var_1_5);
 }
 signed long int stepLocal_0 = ~ var_1_4;
 if (stepLocal_0 >= (var_1_101 * var_1_5)) {
  var_1_21 = (var_1_23 - (var_1_9 + 100000000u));
 }
 if (var_1_97 && var_1_32) {
  var_1_35 = (var_1_25 + var_1_11);
 } else {
  var_1_35 = (((((var_1_11 - ((((var_1_13) > (var_1_36)) ? (var_1_13) : (var_1_36))))) > (var_1_25)) ? ((var_1_11 - ((((var_1_13) > (var_1_36)) ? (var_1_13) : (var_1_36))))) : (var_1_25)));
 }
 if ((var_1_36 - var_1_50) == var_1_92) {
  var_1_65 = ((((32u) < ((((((var_1_5 + var_1_8)) < (((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))))) ? ((var_1_5 + var_1_8)) : (((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49)))))))) ? (32u) : ((((((var_1_5 + var_1_8)) < (((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))))) ? ((var_1_5 + var_1_8)) : (((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49)))))))));
 } else {
  var_1_65 = ((((var_1_64) > ((var_1_23 - var_1_9))) ? (var_1_64) : ((var_1_23 - var_1_9))));
 }
 if (var_1_97) {
  if (var_1_53 != var_1_38) {
   var_1_66 = ((((var_1_19 - ((((9.999999999999995E14) < 0 ) ? -(9.999999999999995E14) : (9.999999999999995E14)))) < 0 ) ? -(var_1_19 - ((((9.999999999999995E14) < 0 ) ? -(9.999999999999995E14) : (9.999999999999995E14)))) : (var_1_19 - ((((9.999999999999995E14) < 0 ) ? -(9.999999999999995E14) : (9.999999999999995E14))))));
  }
 }
 if ((2.75f + var_1_57) < (var_1_44 - var_1_58)) {
  if (var_1_97 || ((36121 - var_1_50) <= (-32 + var_1_34))) {
   if ((! var_1_31) || var_1_33) {
    if (25u > var_1_91) {
     var_1_76 = (var_1_23 - var_1_9);
    }
   } else {
    var_1_76 = (16u + (var_1_10 + (var_1_77 - var_1_73)));
   }
  }
 } else {
  if (var_1_77 < var_1_23) {
   var_1_76 = (var_1_23 - var_1_4);
  } else {
   var_1_76 = ((var_1_78 + ((((var_1_79) > (var_1_80)) ? (var_1_79) : (var_1_80)))) - var_1_38);
  }
 }
 if (((((((((var_1_57) < (var_1_66)) ? (var_1_57) : (var_1_66)))) > (var_1_105)) ? (((((var_1_57) < (var_1_66)) ? (var_1_57) : (var_1_66)))) : (var_1_105))) > (var_1_105 / var_1_58)) {
  if (var_1_91 > var_1_10) {
   var_1_81 = (((var_1_75 - var_1_49) - var_1_50) + var_1_39);
  } else {
   if (((((var_1_10) < ((16 >> var_1_50))) ? (var_1_10) : ((16 >> var_1_50)))) >= var_1_63) {
    var_1_81 = ((((var_1_74) < (var_1_82)) ? (var_1_74) : (var_1_82)));
   }
  }
 } else {
  var_1_81 = var_1_39;
 }
 if (var_1_97) {
  var_1_94 = var_1_43;
 } else {
  var_1_94 = var_1_57;
 }
 if (var_1_33) {
  var_1_98 = var_1_76;
 } else {
  var_1_98 = var_1_5;
 }
 if (((var_1_72 - var_1_68) - 25u) >= var_1_101) {
  var_1_71 = ((64 + var_1_73) - var_1_13);
 } else {
  if (var_1_64 >= (((((var_1_23) > (var_1_72)) ? (var_1_23) : (var_1_72))) - 1u)) {
   if (var_1_47 > 100u) {
    var_1_71 = (var_1_4 - var_1_49);
   } else {
    var_1_71 = (var_1_11 + var_1_8);
   }
  } else {
   if ((((((var_1_66 / var_1_58)) < (var_1_62)) ? ((var_1_66 / var_1_58)) : (var_1_62))) > ((var_1_90 * var_1_89) + var_1_19)) {
    var_1_71 = (((var_1_74 + var_1_75) + var_1_73) - (var_1_10 - var_1_50));
   } else {
    if (var_1_62 >= var_1_57) {
     var_1_71 = (var_1_74 + var_1_50);
    } else {
     var_1_71 = ((((((((var_1_10) < (((((var_1_9) < (var_1_75)) ? (var_1_9) : (var_1_75))))) ? (var_1_10) : (((((var_1_9) < (var_1_75)) ? (var_1_9) : (var_1_75))))))) > (((((var_1_73 + var_1_11) < 0 ) ? -(var_1_73 + var_1_11) : (var_1_73 + var_1_11))))) ? (((((var_1_10) < (((((var_1_9) < (var_1_75)) ? (var_1_9) : (var_1_75))))) ? (var_1_10) : (((((var_1_9) < (var_1_75)) ? (var_1_9) : (var_1_75))))))) : (((((var_1_73 + var_1_11) < 0 ) ? -(var_1_73 + var_1_11) : (var_1_73 + var_1_11))))));
    }
   }
  }
 }
 if ((var_1_85 * var_1_89) <= (var_1_18 + var_1_56)) {
  if (var_1_64 <= (var_1_63 * var_1_36)) {
   var_1_102 = ((((var_1_83) < (((((var_1_82) < (var_1_40)) ? (var_1_82) : (var_1_40))))) ? (var_1_83) : (((((var_1_82) < (var_1_40)) ? (var_1_82) : (var_1_40))))));
  }
 }
 if (((var_1_13 ^ var_1_23) * var_1_9) >= var_1_65) {
  if ((var_1_65 + (var_1_91 / var_1_10)) > var_1_4) {
   if (var_1_97 && var_1_31) {
    var_1_26 = ((var_1_10 + var_1_5) - var_1_65);
   } else {
    var_1_26 = ((((var_1_5) > ((((((var_1_8 - var_1_10)) < (var_1_9)) ? ((var_1_8 - var_1_10)) : (var_1_9))))) ? (var_1_5) : ((((((var_1_8 - var_1_10)) < (var_1_9)) ? ((var_1_8 - var_1_10)) : (var_1_9))))));
   }
  }
 } else {
  var_1_26 = ((((((((var_1_10) < (((((-50) < 0 ) ? -(-50) : (-50))))) ? (var_1_10) : (((((-50) < 0 ) ? -(-50) : (-50))))))) < (var_1_9)) ? (((((var_1_10) < (((((-50) < 0 ) ? -(-50) : (-50))))) ? (var_1_10) : (((((-50) < 0 ) ? -(-50) : (-50))))))) : (var_1_9)));
 }
 if (((var_1_11 + var_1_38) << ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) == var_1_98) {
  if (var_1_97) {
   var_1_37 = (((var_1_38 + var_1_5) + var_1_8) - var_1_36);
  } else {
   var_1_37 = (((128 - var_1_13) + var_1_12) + last_1_var_1_37);
  }
 } else {
  var_1_37 = (var_1_101 + var_1_38);
 }
 unsigned char stepLocal_6 = var_1_33;
 if (var_1_48) {
  if (! var_1_48) {
   if (stepLocal_6 || var_1_31) {
    var_1_59 = ((((((var_1_36) > (var_1_21)) ? (var_1_36) : (var_1_21))) + (var_1_100 + var_1_87)) + (var_1_50 + var_1_91));
   } else {
    var_1_59 = ((((var_1_98) < (var_1_70)) ? (var_1_98) : (var_1_70)));
   }
  } else {
   var_1_59 = (var_1_40 + (((((var_1_38) > (var_1_87)) ? (var_1_38) : (var_1_87))) + var_1_10));
  }
 } else {
  if (((var_1_43 / var_1_57) / ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) >= var_1_105) {
   var_1_59 = ((((var_1_38) > ((((((var_1_39) > (var_1_61)) ? (var_1_39) : (var_1_61))) - (var_1_71 + var_1_50)))) ? (var_1_38) : ((((((var_1_39) > (var_1_61)) ? (var_1_39) : (var_1_61))) - (var_1_71 + var_1_50)))));
  }
 }
 if (var_1_31) {
  if (var_1_97) {
   var_1_28 = -25;
  } else {
   if (((var_1_91 + var_1_65) / ((((-100) < (var_1_10)) ? (-100) : (var_1_10)))) <= var_1_102) {
    var_1_28 = var_1_13;
   }
  }
 } else {
  var_1_28 = ((((var_1_11) < (var_1_69)) ? (var_1_11) : (var_1_69)));
 }
 if (var_1_97) {
  if (var_1_48 || (var_1_98 < (var_1_10 * var_1_28))) {
   var_1_29 = ((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19)));
  } else {
   var_1_29 = (((((((128.125f) > (var_1_18)) ? (128.125f) : (var_1_18))) < 0 ) ? -((((128.125f) > (var_1_18)) ? (128.125f) : (var_1_18))) : ((((128.125f) > (var_1_18)) ? (128.125f) : (var_1_18)))));
  }
 } else {
  var_1_29 = (9.999999999999999E14f - 4.8f);
 }
 if (var_1_31) {
  if (var_1_5 > var_1_4) {
   if ((16 > var_1_5) || (var_1_100 == ((((var_1_59) < (var_1_101)) ? (var_1_59) : (var_1_101))))) {
    var_1_6 = var_1_5;
   } else {
    var_1_6 = (var_1_4 - var_1_5);
   }
  } else {
   var_1_6 = ((((var_1_5) < ((var_1_4 - ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)))))) ? (var_1_5) : ((var_1_4 - ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)))))));
  }
 } else {
  if (var_1_4 < var_1_9) {
   var_1_6 = (var_1_5 + (((((var_1_10 - var_1_11)) > (8)) ? ((var_1_10 - var_1_11)) : (8))));
  } else {
   var_1_6 = var_1_10;
  }
 }
 signed long int stepLocal_1 = (((var_1_11) > (var_1_37)) ? (var_1_11) : (var_1_37));
 if (var_1_63 != stepLocal_1) {
  var_1_30 = (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) - 64.9f);
 }
 if (((var_1_25 / var_1_4) * var_1_9) == (var_1_5 - var_1_10)) {
  if (var_1_29 < var_1_20) {
   var_1_41 = (var_1_42 + ((var_1_43 - var_1_44) + ((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)))));
  }
 }
 unsigned long int stepLocal_3 = var_1_76;
 if (var_1_43 < var_1_41) {
  var_1_52 = (var_1_11 + ((((var_1_53) < (var_1_49)) ? (var_1_53) : (var_1_49))));
 } else {
  if (var_1_25 != stepLocal_3) {
   var_1_52 = (var_1_40 - var_1_39);
  } else {
   var_1_52 = (8 + ((((var_1_54) < (var_1_38)) ? (var_1_54) : (var_1_38))));
  }
 }
 unsigned char stepLocal_5 = var_1_48;
 unsigned char stepLocal_4 = var_1_32;
 if (var_1_31) {
  if ((var_1_42 * var_1_30) != var_1_29) {
   if (stepLocal_5 && (var_1_20 == (var_1_43 / 7.25f))) {
    var_1_55 = (3.75 - ((((var_1_43) > ((var_1_44 + var_1_56))) ? (var_1_43) : ((var_1_44 + var_1_56)))));
   } else {
    var_1_55 = ((var_1_57 - (var_1_58 - var_1_43)) - var_1_19);
   }
  } else {
   if (stepLocal_4 && (var_1_33 && var_1_48)) {
    var_1_55 = var_1_20;
   } else {
    var_1_55 = (var_1_58 + var_1_43);
   }
  }
 } else {
  var_1_55 = (var_1_18 - var_1_58);
 }
 if (((((((((var_1_95) < (var_1_30)) ? (var_1_95) : (var_1_30)))) > (1.0000000000000006E15f)) ? (((((var_1_95) < (var_1_30)) ? (var_1_95) : (var_1_30)))) : (1.0000000000000006E15f))) < var_1_95) {
  if (var_1_48) {
   var_1_14 = (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_20);
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 63);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 2147483647);
 assume_abort_if_not(var_1_23 <= 4294967294);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -63);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 24);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 24);
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691400e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -230584.3009213691400e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= -230584.3009213691400e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 1);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 6);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 0);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -63);
 assume_abort_if_not(var_1_53 <= 63);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= -63);
 assume_abort_if_not(var_1_54 <= 63);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 4611686.018427383000e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= 2305843.009213691400e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_61 >= -1);
 assume_abort_if_not(var_1_61 <= 2147483646);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 4294967294);
 var_1_68 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_68 >= 62);
 assume_abort_if_not(var_1_68 <= 126);
 var_1_72 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_72 >= 3221225471);
 assume_abort_if_not(var_1_72 <= 4294967295);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 64);
 assume_abort_if_not(var_1_73 <= 127);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 31);
 assume_abort_if_not(var_1_74 <= 64);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 32);
 assume_abort_if_not(var_1_75 <= 63);
 var_1_77 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_77 >= 536870911);
 assume_abort_if_not(var_1_77 <= 1073741823);
 var_1_78 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_78 >= 1073741823);
 assume_abort_if_not(var_1_78 <= 2147483647);
 var_1_79 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_79 >= 1073741824);
 assume_abort_if_not(var_1_79 <= 2147483647);
 var_1_80 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_80 >= 1073741824);
 assume_abort_if_not(var_1_80 <= 2147483647);
 var_1_82 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_82 >= -127);
 assume_abort_if_not(var_1_82 <= 126);
 var_1_88 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_88 >= 8192);
 assume_abort_if_not(var_1_88 <= 16384);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_102 = var_1_102;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_101 <= var_1_96) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : 1) && (var_1_31 ? ((var_1_5 > var_1_4) ? (((16 > var_1_5) || (var_1_100 == ((((var_1_59) < (var_1_101)) ? (var_1_59) : (var_1_101))))) ? (var_1_6 == ((unsigned char) var_1_5)) : (var_1_6 == ((unsigned char) (var_1_4 - var_1_5)))) : (var_1_6 == ((unsigned char) ((((var_1_5) < ((var_1_4 - ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)))))) ? (var_1_5) : ((var_1_4 - ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)))))))))) : ((var_1_4 < var_1_9) ? (var_1_6 == ((unsigned char) (var_1_5 + (((((var_1_10 - var_1_11)) > (8)) ? ((var_1_10 - var_1_11)) : (8)))))) : (var_1_6 == ((unsigned char) var_1_10))))) && (var_1_12 == ((signed char) (var_1_11 - var_1_13)))) && ((((((((((var_1_95) < (var_1_30)) ? (var_1_95) : (var_1_30)))) > (1.0000000000000006E15f)) ? (((((var_1_95) < (var_1_30)) ? (var_1_95) : (var_1_30)))) : (1.0000000000000006E15f))) < var_1_95) ? (var_1_48 ? (var_1_14 == ((float) (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_20))) : 1) : 1)) && (((~ var_1_4) >= (var_1_101 * var_1_5)) ? (var_1_21 == ((unsigned long int) (var_1_23 - (var_1_9 + 100000000u)))) : 1)) && (((var_1_10 << var_1_5) == 64) ? (var_1_24 == ((signed char) (var_1_11 + var_1_25))) : 1)) && ((((var_1_13 ^ var_1_23) * var_1_9) >= var_1_65) ? (((var_1_65 + (var_1_91 / var_1_10)) > var_1_4) ? ((var_1_97 && var_1_31) ? (var_1_26 == ((signed long int) ((var_1_10 + var_1_5) - var_1_65))) : (var_1_26 == ((signed long int) ((((var_1_5) > ((((((var_1_8 - var_1_10)) < (var_1_9)) ? ((var_1_8 - var_1_10)) : (var_1_9))))) ? (var_1_5) : ((((((var_1_8 - var_1_10)) < (var_1_9)) ? ((var_1_8 - var_1_10)) : (var_1_9))))))))) : 1) : (var_1_26 == ((signed long int) ((((((((var_1_10) < (((((-50) < 0 ) ? -(-50) : (-50))))) ? (var_1_10) : (((((-50) < 0 ) ? -(-50) : (-50))))))) < (var_1_9)) ? (((((var_1_10) < (((((-50) < 0 ) ? -(-50) : (-50))))) ? (var_1_10) : (((((-50) < 0 ) ? -(-50) : (-50))))))) : (var_1_9))))))) && (var_1_31 ? (var_1_97 ? (var_1_28 == ((signed short int) -25)) : ((((var_1_91 + var_1_65) / ((((-100) < (var_1_10)) ? (-100) : (var_1_10)))) <= var_1_102) ? (var_1_28 == ((signed short int) var_1_13)) : 1)) : (var_1_28 == ((signed short int) ((((var_1_11) < (var_1_69)) ? (var_1_11) : (var_1_69))))))) && (var_1_97 ? ((var_1_48 || (var_1_98 < (var_1_10 * var_1_28))) ? (var_1_29 == ((float) ((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19))))) : (var_1_29 == ((float) (((((((128.125f) > (var_1_18)) ? (128.125f) : (var_1_18))) < 0 ) ? -((((128.125f) > (var_1_18)) ? (128.125f) : (var_1_18))) : ((((128.125f) > (var_1_18)) ? (128.125f) : (var_1_18)))))))) : (var_1_29 == ((float) (9.999999999999999E14f - 4.8f))))) && ((var_1_63 != ((((var_1_11) > (var_1_37)) ? (var_1_11) : (var_1_37)))) ? (var_1_30 == ((float) (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) - 64.9f))) : 1)) && (var_1_31 == ((unsigned char) (var_1_32 && var_1_33)))) && ((var_1_31 && var_1_33) ? (var_1_34 == ((unsigned long int) var_1_5)) : (var_1_34 == ((unsigned long int) ((((1u) < 0 ) ? -(1u) : (1u))))))) && ((var_1_97 && var_1_32) ? (var_1_35 == ((signed char) (var_1_25 + var_1_11))) : (var_1_35 == ((signed char) (((((var_1_11 - ((((var_1_13) > (var_1_36)) ? (var_1_13) : (var_1_36))))) > (var_1_25)) ? ((var_1_11 - ((((var_1_13) > (var_1_36)) ? (var_1_13) : (var_1_36))))) : (var_1_25))))))) && ((((var_1_11 + var_1_38) << ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) == var_1_98) ? (var_1_97 ? (var_1_37 == ((signed short int) (((var_1_38 + var_1_5) + var_1_8) - var_1_36))) : (var_1_37 == ((signed short int) (((128 - var_1_13) + var_1_12) + last_1_var_1_37)))) : (var_1_37 == ((signed short int) (var_1_101 + var_1_38))))) && ((((var_1_25 / var_1_4) * var_1_9) == (var_1_5 - var_1_10)) ? ((var_1_29 < var_1_20) ? (var_1_41 == ((float) (var_1_42 + ((var_1_43 - var_1_44) + ((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))))) : 1) : 1)) && (var_1_33 ? (var_1_47 == ((unsigned long int) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) : 1)) && ((((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28))) < (var_1_10 << var_1_49)) ? ((last_1_var_1_21 > (var_1_13 >> var_1_50)) ? ((var_1_32 || (! last_1_var_1_97)) ? (var_1_48 == ((unsigned char) ((! var_1_51) && var_1_33))) : 1) : 1) : (var_1_48 == ((unsigned char) (! var_1_51))))) && ((var_1_43 < var_1_41) ? (var_1_52 == ((signed char) (var_1_11 + ((((var_1_53) < (var_1_49)) ? (var_1_53) : (var_1_49)))))) : ((var_1_25 != var_1_76) ? (var_1_52 == ((signed char) (var_1_40 - var_1_39))) : (var_1_52 == ((signed char) (8 + ((((var_1_54) < (var_1_38)) ? (var_1_54) : (var_1_38))))))))) && (var_1_31 ? (((var_1_42 * var_1_30) != var_1_29) ? ((var_1_48 && (var_1_20 == (var_1_43 / 7.25f))) ? (var_1_55 == ((double) (3.75 - ((((var_1_43) > ((var_1_44 + var_1_56))) ? (var_1_43) : ((var_1_44 + var_1_56))))))) : (var_1_55 == ((double) ((var_1_57 - (var_1_58 - var_1_43)) - var_1_19)))) : ((var_1_32 && (var_1_33 && var_1_48)) ? (var_1_55 == ((double) var_1_20)) : (var_1_55 == ((double) (var_1_58 + var_1_43))))) : (var_1_55 == ((double) (var_1_18 - var_1_58))))) && (var_1_48 ? ((! var_1_48) ? ((var_1_33 || var_1_31) ? (var_1_59 == ((signed long int) ((((((var_1_36) > (var_1_21)) ? (var_1_36) : (var_1_21))) + (var_1_100 + var_1_87)) + (var_1_50 + var_1_91)))) : (var_1_59 == ((signed long int) ((((var_1_98) < (var_1_70)) ? (var_1_98) : (var_1_70)))))) : (var_1_59 == ((signed long int) (var_1_40 + (((((var_1_38) > (var_1_87)) ? (var_1_38) : (var_1_87))) + var_1_10))))) : ((((var_1_43 / var_1_57) / ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) >= var_1_105) ? (var_1_59 == ((signed long int) ((((var_1_38) > ((((((var_1_39) > (var_1_61)) ? (var_1_39) : (var_1_61))) - (var_1_71 + var_1_50)))) ? (var_1_38) : ((((((var_1_39) > (var_1_61)) ? (var_1_39) : (var_1_61))) - (var_1_71 + var_1_50))))))) : 1))) && ((var_1_85 >= var_1_45) ? ((! var_1_32) ? (var_1_62 == ((float) (var_1_20 - var_1_56))) : (var_1_62 == ((float) (var_1_46 + ((((((((var_1_43) < (var_1_56)) ? (var_1_43) : (var_1_56)))) < (var_1_58)) ? (((((var_1_43) < (var_1_56)) ? (var_1_43) : (var_1_56)))) : (var_1_58))))))) : 1)) && (var_1_63 == ((unsigned long int) var_1_64))) && (((var_1_36 - var_1_50) == var_1_92) ? (var_1_65 == ((unsigned long int) ((((32u) < ((((((var_1_5 + var_1_8)) < (((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))))) ? ((var_1_5 + var_1_8)) : (((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49)))))))) ? (32u) : ((((((var_1_5 + var_1_8)) < (((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))))) ? ((var_1_5 + var_1_8)) : (((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))))))))))) : (var_1_65 == ((unsigned long int) ((((var_1_64) > ((var_1_23 - var_1_9))) ? (var_1_64) : ((var_1_23 - var_1_9)))))))) && (var_1_97 ? ((var_1_53 != var_1_38) ? (var_1_66 == ((double) ((((var_1_19 - ((((9.999999999999995E14) < 0 ) ? -(9.999999999999995E14) : (9.999999999999995E14)))) < 0 ) ? -(var_1_19 - ((((9.999999999999995E14) < 0 ) ? -(9.999999999999995E14) : (9.999999999999995E14)))) : (var_1_19 - ((((9.999999999999995E14) < 0 ) ? -(9.999999999999995E14) : (9.999999999999995E14)))))))) : 1) : 1)) && (var_1_67 == ((signed char) (((((((((var_1_54) > (var_1_40)) ? (var_1_54) : (var_1_40))) + -2)) < (((var_1_68 - var_1_39) - var_1_50))) ? ((((((var_1_54) > (var_1_40)) ? (var_1_54) : (var_1_40))) + -2)) : (((var_1_68 - var_1_39) - var_1_50))))))) && ((! ((var_1_20 - var_1_19) < (var_1_44 / var_1_58))) ? (var_1_69 == ((unsigned char) (var_1_49 + var_1_50))) : (var_1_51 ? (var_1_69 == ((unsigned char) (var_1_4 - var_1_9))) : (((var_1_44 * last_1_var_1_89) <= last_1_var_1_55) ? (var_1_69 == ((unsigned char) ((((var_1_68) < (((((((((var_1_36) > (var_1_40)) ? (var_1_36) : (var_1_40)))) < (8)) ? (((((var_1_36) > (var_1_40)) ? (var_1_36) : (var_1_40)))) : (8))))) ? (var_1_68) : (((((((((var_1_36) > (var_1_40)) ? (var_1_36) : (var_1_40)))) < (8)) ? (((((var_1_36) > (var_1_40)) ? (var_1_36) : (var_1_40)))) : (8)))))))) : ((! (last_1_var_1_90 <= 127.875)) ? (var_1_69 == ((unsigned char) var_1_49)) : (last_1_var_1_31 ? (var_1_69 == ((unsigned char) ((((var_1_40) > ((var_1_4 - var_1_49))) ? (var_1_40) : ((var_1_4 - var_1_49)))))) : (var_1_69 == ((unsigned char) (var_1_4 - ((((var_1_49) < (var_1_10)) ? (var_1_49) : (var_1_10)))))))))))) && (var_1_97 ? (var_1_70 == ((signed short int) var_1_87)) : ((((~ var_1_84) & var_1_38) > var_1_10) ? (var_1_70 == ((signed short int) ((((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13))))) : (var_1_70 == ((signed short int) ((((((((var_1_38) > (32)) ? (var_1_38) : (32)))) > (1)) ? (((((var_1_38) > (32)) ? (var_1_38) : (32)))) : (1)))))))) && ((((var_1_72 - var_1_68) - 25u) >= var_1_101) ? (var_1_71 == ((unsigned char) ((64 + var_1_73) - var_1_13))) : ((var_1_64 >= (((((var_1_23) > (var_1_72)) ? (var_1_23) : (var_1_72))) - 1u)) ? ((var_1_47 > 100u) ? (var_1_71 == ((unsigned char) (var_1_4 - var_1_49))) : (var_1_71 == ((unsigned char) (var_1_11 + var_1_8)))) : (((((((var_1_66 / var_1_58)) < (var_1_62)) ? ((var_1_66 / var_1_58)) : (var_1_62))) > ((var_1_90 * var_1_89) + var_1_19)) ? (var_1_71 == ((unsigned char) (((var_1_74 + var_1_75) + var_1_73) - (var_1_10 - var_1_50)))) : ((var_1_62 >= var_1_57) ? (var_1_71 == ((unsigned char) (var_1_74 + var_1_50))) : (var_1_71 == ((unsigned char) ((((((((var_1_10) < (((((var_1_9) < (var_1_75)) ? (var_1_9) : (var_1_75))))) ? (var_1_10) : (((((var_1_9) < (var_1_75)) ? (var_1_9) : (var_1_75))))))) > (((((var_1_73 + var_1_11) < 0 ) ? -(var_1_73 + var_1_11) : (var_1_73 + var_1_11))))) ? (((((var_1_10) < (((((var_1_9) < (var_1_75)) ? (var_1_9) : (var_1_75))))) ? (var_1_10) : (((((var_1_9) < (var_1_75)) ? (var_1_9) : (var_1_75))))))) : (((((var_1_73 + var_1_11) < 0 ) ? -(var_1_73 + var_1_11) : (var_1_73 + var_1_11))))))))))))) && (((2.75f + var_1_57) < (var_1_44 - var_1_58)) ? ((var_1_97 || ((36121 - var_1_50) <= (-32 + var_1_34))) ? (((! var_1_31) || var_1_33) ? ((25u > var_1_91) ? (var_1_76 == ((unsigned long int) (var_1_23 - var_1_9))) : 1) : (var_1_76 == ((unsigned long int) (16u + (var_1_10 + (var_1_77 - var_1_73)))))) : 1) : ((var_1_77 < var_1_23) ? (var_1_76 == ((unsigned long int) (var_1_23 - var_1_4))) : (var_1_76 == ((unsigned long int) ((var_1_78 + ((((var_1_79) > (var_1_80)) ? (var_1_79) : (var_1_80)))) - var_1_38)))))) && ((((((((((var_1_57) < (var_1_66)) ? (var_1_57) : (var_1_66)))) > (var_1_105)) ? (((((var_1_57) < (var_1_66)) ? (var_1_57) : (var_1_66)))) : (var_1_105))) > (var_1_105 / var_1_58)) ? ((var_1_91 > var_1_10) ? (var_1_81 == ((signed char) (((var_1_75 - var_1_49) - var_1_50) + var_1_39))) : ((((((var_1_10) < ((16 >> var_1_50))) ? (var_1_10) : ((16 >> var_1_50)))) >= var_1_63) ? (var_1_81 == ((signed char) ((((var_1_74) < (var_1_82)) ? (var_1_74) : (var_1_82))))) : 1)) : (var_1_81 == ((signed char) var_1_39)))) && (((var_1_40 << var_1_8) < ((((var_1_39) < (((((var_1_87) < (var_1_67)) ? (var_1_87) : (var_1_67))))) ? (var_1_39) : (((((var_1_87) < (var_1_67)) ? (var_1_87) : (var_1_67))))))) ? ((127.8f > var_1_18) ? (var_1_83 == ((unsigned char) (var_1_4 - var_1_74))) : (var_1_83 == ((unsigned char) ((((var_1_49) > ((var_1_38 + var_1_13))) ? (var_1_49) : ((var_1_38 + var_1_13))))))) : 1)) && ((((((var_1_45) < (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) ? (var_1_45) : (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))))) > (var_1_19 - var_1_44)) ? (var_1_84 == ((signed char) (var_1_39 - var_1_74))) : (var_1_84 == ((signed char) (2 - var_1_50))))) && ((last_1_var_1_59 == var_1_74) ? ((last_1_var_1_63 >= ((((var_1_49) > (var_1_72)) ? (var_1_49) : (var_1_72)))) ? ((last_1_var_1_63 != ((32 >> var_1_50) / var_1_4)) ? (last_1_var_1_48 ? (var_1_85 == ((double) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) : (var_1_85 == ((double) ((((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) > (var_1_58)) ? (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) : (var_1_58)))))) : (var_1_85 == ((double) (var_1_58 + (var_1_43 + var_1_45))))) : (var_1_85 == ((double) (((((var_1_57 - var_1_43) - var_1_44) < 0 ) ? -((var_1_57 - var_1_43) - var_1_44) : ((var_1_57 - var_1_43) - var_1_44)))))) : (var_1_85 == ((double) ((((var_1_45) > ((var_1_44 + var_1_43))) ? (var_1_45) : ((var_1_44 + var_1_43)))))))) && ((2 >= last_1_var_1_102) ? (var_1_87 == ((unsigned short int) (((var_1_88 - 2) + last_1_var_1_21) + last_1_var_1_28))) : 1)) && ((((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))) <= last_1_var_1_47) ? ((last_1_var_1_69 <= var_1_75) ? (var_1_89 == ((float) ((((var_1_45) < ((var_1_19 - var_1_18))) ? (var_1_45) : ((var_1_19 - var_1_18)))))) : (((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - 32) >= var_1_10) ? (var_1_89 == ((float) (((((((var_1_42) > ((var_1_19 - var_1_43))) ? (var_1_42) : ((var_1_19 - var_1_43)))) < 0 ) ? -((((var_1_42) > ((var_1_19 - var_1_43))) ? (var_1_42) : ((var_1_19 - var_1_43)))) : ((((var_1_42) > ((var_1_19 - var_1_43))) ? (var_1_42) : ((var_1_19 - var_1_43)))))))) : (var_1_89 == ((float) ((var_1_44 - var_1_56) + var_1_42))))) : ((last_1_var_1_48 || (last_1_var_1_12 <= last_1_var_1_96)) ? (last_1_var_1_48 ? (var_1_89 == ((float) (var_1_56 - (var_1_43 + ((((var_1_44) < (var_1_58)) ? (var_1_44) : (var_1_58))))))) : (var_1_89 == ((float) var_1_44))) : 1))) && (var_1_33 ? (var_1_90 == ((double) var_1_57)) : (var_1_90 == ((double) var_1_46)))) && (var_1_91 == ((unsigned long int) var_1_75))) && (var_1_32 ? (var_1_92 == ((unsigned short int) 16)) : (var_1_92 == ((unsigned short int) var_1_40)))) && (var_1_48 ? (var_1_93 == ((unsigned short int) var_1_5)) : (var_1_93 == ((unsigned short int) var_1_38)))) && (var_1_97 ? (var_1_94 == ((float) var_1_43)) : (var_1_94 == ((float) var_1_57)))) && (var_1_31 ? (var_1_95 == ((float) 1.375f)) : 1)) && (var_1_31 ? (var_1_96 == ((signed long int) var_1_49)) : (var_1_96 == ((signed long int) last_1_var_1_96)))) && (var_1_33 ? (var_1_97 == ((unsigned char) var_1_32)) : (var_1_97 == ((unsigned char) var_1_51)))) && (var_1_33 ? (var_1_98 == ((signed long int) var_1_76)) : (var_1_98 == ((signed long int) var_1_5)))) && (var_1_31 ? (var_1_99 == ((signed char) var_1_25)) : (var_1_99 == ((signed char) var_1_50)))) && (var_1_100 == ((unsigned char) var_1_39))) && (var_1_101 == ((unsigned long int) var_1_4))) && (((var_1_85 * var_1_89) <= (var_1_18 + var_1_56)) ? ((var_1_64 <= (var_1_63 * var_1_36)) ? (var_1_102 == ((signed long int) ((((var_1_83) < (((((var_1_82) < (var_1_40)) ? (var_1_82) : (var_1_40))))) ? (var_1_83) : (((((var_1_82) < (var_1_40)) ? (var_1_82) : (var_1_40)))))))) : 1) : 1)) && (var_1_105 == ((double) var_1_18))
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

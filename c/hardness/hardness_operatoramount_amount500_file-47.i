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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch47Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 5;
signed char var_1_3 = -32;
signed char var_1_6 = 100;
signed char var_1_7 = 0;
signed char var_1_8 = 5;
double var_1_9 = 63.25;
double var_1_10 = 99.125;
double var_1_11 = 32.5;
double var_1_12 = 2.375;
double var_1_13 = 10000000.625;
double var_1_14 = 24.8;
double var_1_15 = 2.75;
signed short int var_1_16 = -10;
unsigned long int var_1_17 = 2253563771;
signed short int var_1_18 = 5;
signed long int var_1_19 = 0;
signed char var_1_20 = -1;
signed char var_1_21 = 50;
float var_1_22 = 999.2;
unsigned short int var_1_23 = 5;
signed short int var_1_24 = -10;
signed short int var_1_25 = 0;
signed long int var_1_26 = 4;
signed char var_1_27 = -1;
signed long int var_1_28 = 32;
unsigned long int var_1_29 = 64;
unsigned long int var_1_32 = 3422856028;
float var_1_33 = 31.2;
float var_1_34 = 0.0;
float var_1_35 = 499.9;
signed short int var_1_36 = 10;
signed long int var_1_37 = 256;
signed char var_1_38 = 100;
signed short int var_1_39 = 4;
signed long int var_1_40 = 1853546105;
unsigned char var_1_41 = 0;
float var_1_42 = 5.1;
unsigned long int var_1_43 = 2;
unsigned long int var_1_44 = 1000000000;
float var_1_45 = -0.5;
unsigned long int var_1_47 = 64;
float var_1_48 = 499.5;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 50;
float var_1_52 = 0.0;
unsigned char var_1_53 = 200;
unsigned char var_1_54 = 16;
unsigned char var_1_55 = 100;
double var_1_56 = 10.6;
double var_1_57 = 63.4;
signed short int var_1_58 = 64;
unsigned char var_1_59 = 25;
unsigned char var_1_60 = 1;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 1;
signed short int var_1_67 = -16;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 50;
unsigned char var_1_72 = 128;
double var_1_73 = 3.2;
signed char var_1_74 = 5;
signed char var_1_75 = 25;
unsigned char var_1_76 = 5;
double var_1_77 = 32.75;
unsigned short int var_1_78 = 100;
signed long int var_1_79 = 2;
unsigned short int var_1_80 = 50;
unsigned short int var_1_81 = 24252;
unsigned short int var_1_82 = 64;
unsigned short int var_1_83 = 24793;
unsigned short int var_1_84 = 64992;
unsigned short int var_1_85 = 43143;
float var_1_86 = 15.5;
unsigned char var_1_87 = 10;
unsigned char var_1_88 = 0;
float var_1_89 = 16.75;
double var_1_90 = 2.2;
double var_1_91 = 4.14;
signed long int var_1_92 = 16;
double var_1_93 = 10.5;
float var_1_94 = 3.06;
unsigned char var_1_96 = 0;
double var_1_97 = 31.75;
unsigned long int var_1_98 = 10000000;
signed char var_1_99 = -32;
signed long int var_1_100 = 0;
double var_1_101 = 7.5;
unsigned short int var_1_102 = 4;
unsigned short int last_1_var_1_23 = 5;
signed long int last_1_var_1_26 = 4;
unsigned long int last_1_var_1_29 = 64;
signed short int last_1_var_1_36 = 10;
unsigned char last_1_var_1_41 = 0;
unsigned long int last_1_var_1_47 = 64;
double last_1_var_1_56 = 10.6;
unsigned char last_1_var_1_62 = 0;
unsigned char last_1_var_1_68 = 1;
unsigned char last_1_var_1_76 = 5;
unsigned short int last_1_var_1_78 = 100;
signed long int last_1_var_1_79 = 2;
unsigned short int last_1_var_1_80 = 50;
unsigned char last_1_var_1_88 = 0;
signed long int last_1_var_1_92 = 16;
unsigned long int last_1_var_1_98 = 10000000;
unsigned short int last_1_var_1_102 = 4;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_41 == last_1_var_1_102) {
  if (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) >= var_1_12) {
   if (var_1_18 <= (var_1_7 >> ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) {
    var_1_26 = ((((((last_1_var_1_92) < (var_1_7)) ? (last_1_var_1_92) : (var_1_7))) - ((((var_1_21) > (var_1_25)) ? (var_1_21) : (var_1_25)))) + (32 + var_1_27));
   } else {
    var_1_26 = (last_1_var_1_92 - (var_1_7 + var_1_18));
   }
  } else {
   var_1_26 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
  }
 } else {
  if (var_1_3 < last_1_var_1_92) {
   var_1_26 = ((((((var_1_7 + var_1_6) - var_1_18)) < (last_1_var_1_26)) ? (((var_1_7 + var_1_6) - var_1_18)) : (last_1_var_1_26)));
  }
 }
 signed long int stepLocal_27 = var_1_50 % ((((var_1_72) < (var_1_84)) ? (var_1_72) : (var_1_84)));
 signed long int stepLocal_26 = -100;
 unsigned long int stepLocal_25 = (last_1_var_1_79 + var_1_32) / ((((var_1_55) < (var_1_44)) ? (var_1_55) : (var_1_44)));
 if (stepLocal_26 > (last_1_var_1_80 * last_1_var_1_47)) {
  if (! last_1_var_1_62) {
   var_1_82 = ((var_1_81 + var_1_83) - var_1_6);
  } else {
   var_1_82 = ((((((var_1_84 - 4)) > (var_1_85)) ? ((var_1_84 - 4)) : (var_1_85))) - ((((var_1_21) > (var_1_55)) ? (var_1_21) : (var_1_55))));
  }
 } else {
  if (stepLocal_27 > (var_1_81 * var_1_25)) {
   if ((- var_1_52) > (last_1_var_1_56 * var_1_12)) {
    var_1_82 = var_1_18;
   } else {
    if (((var_1_83 / var_1_39) * var_1_40) > stepLocal_25) {
     var_1_82 = (var_1_84 - var_1_58);
    }
   }
  } else {
   var_1_82 = var_1_59;
  }
 }
 signed long int stepLocal_3 = (var_1_38 - var_1_21) >> var_1_39;
 if (var_1_82 <= stepLocal_3) {
  var_1_37 = ((var_1_40 - var_1_18) - var_1_39);
 }
 signed long int stepLocal_6 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) / var_1_6;
 unsigned long int stepLocal_5 = var_1_32;
 unsigned long int stepLocal_4 = last_1_var_1_47;
 if (2 == stepLocal_4) {
  if (stepLocal_6 < last_1_var_1_80) {
   if (16u == stepLocal_5) {
    var_1_43 = ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) < ((((((last_1_var_1_29 + var_1_38)) > (var_1_18)) ? ((last_1_var_1_29 + var_1_38)) : (var_1_18))))) ? (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : ((((((last_1_var_1_29 + var_1_38)) > (var_1_18)) ? ((last_1_var_1_29 + var_1_38)) : (var_1_18))))));
   } else {
    var_1_43 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
   }
  } else {
   var_1_43 = (2801022199u - var_1_18);
  }
 } else {
  var_1_43 = ((var_1_32 - (var_1_44 - last_1_var_1_29)) - ((1000000000u - var_1_39) + var_1_25));
 }
 if ((((((- var_1_12)) < (var_1_15)) ? ((- var_1_12)) : (var_1_15))) < var_1_14) {
  var_1_19 = (((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6))) - var_1_18);
 } else {
  var_1_19 = ((((var_1_18) > (var_1_26)) ? (var_1_18) : (var_1_26)));
 }
 if ((((((var_1_21 << var_1_3)) > (last_1_var_1_76)) ? ((var_1_21 << var_1_3)) : (last_1_var_1_76))) <= (((((last_1_var_1_98 | last_1_var_1_29)) < ((var_1_18 - last_1_var_1_23))) ? ((last_1_var_1_98 | last_1_var_1_29)) : ((var_1_18 - last_1_var_1_23))))) {
  var_1_29 = ((((var_1_25) > (128u)) ? (var_1_25) : (128u)));
 } else {
  var_1_29 = ((var_1_32 - var_1_7) - var_1_25);
 }
 if (last_1_var_1_56 != var_1_11) {
  if (last_1_var_1_68) {
   var_1_62 = (last_1_var_1_88 || (! (var_1_63 || var_1_64)));
  } else {
   var_1_62 = (var_1_65 && var_1_66);
  }
 } else {
  var_1_62 = (var_1_65 && var_1_66);
 }
 if (! ((var_1_17 - var_1_6) > var_1_7)) {
  var_1_16 = (var_1_7 - ((((((((16) > (var_1_6)) ? (16) : (var_1_6)))) < (var_1_18)) ? (((((16) > (var_1_6)) ? (16) : (var_1_6)))) : (var_1_18))));
 } else {
  var_1_16 = (var_1_7 + var_1_8);
 }
 if (255.775 <= var_1_14) {
  if (var_1_62) {
   var_1_33 = ((var_1_12 + var_1_11) - var_1_10);
  } else {
   var_1_33 = ((var_1_34 - var_1_11) - (var_1_12 + (var_1_10 + var_1_35)));
  }
 } else {
  var_1_33 = (((((var_1_11 + var_1_13)) < (((((var_1_35) > (var_1_12)) ? (var_1_35) : (var_1_12))))) ? ((var_1_11 + var_1_13)) : (((((var_1_35) > (var_1_12)) ? (var_1_35) : (var_1_12))))));
 }
 if (var_1_14 < var_1_34) {
  var_1_36 = (((((var_1_6) > (var_1_27)) ? (var_1_6) : (var_1_27))) + ((((((((var_1_8) < (var_1_3)) ? (var_1_8) : (var_1_3)))) > (last_1_var_1_36)) ? (((((var_1_8) < (var_1_3)) ? (var_1_8) : (var_1_3)))) : (last_1_var_1_36))));
 } else {
  var_1_36 = var_1_18;
 }
 if (var_1_16 > -256) {
  var_1_47 = (var_1_32 - ((((((((var_1_25) < (64u)) ? (var_1_25) : (64u)))) > (16u)) ? (((((var_1_25) < (64u)) ? (var_1_25) : (64u)))) : (16u))));
 } else {
  var_1_47 = ((((100u) < (var_1_40)) ? (100u) : (var_1_40)));
 }
 var_1_77 = (var_1_12 + var_1_52);
 var_1_86 = var_1_13;
 if (var_1_70) {
  var_1_87 = var_1_6;
 }
 if (var_1_70) {
  var_1_88 = 0;
 } else {
  var_1_88 = var_1_64;
 }
 var_1_89 = var_1_13;
 if (var_1_62) {
  var_1_90 = var_1_91;
 }
 var_1_92 = var_1_81;
 var_1_93 = var_1_12;
 if (var_1_62) {
  var_1_94 = 16.5f;
 }
 var_1_96 = var_1_65;
 var_1_97 = var_1_52;
 var_1_99 = var_1_7;
 signed long int stepLocal_28 = -1;
 if (stepLocal_28 > var_1_21) {
  var_1_101 = (var_1_52 + var_1_11);
 }
 if (! var_1_70) {
  if (var_1_52 >= (var_1_10 - 49.75f)) {
   if (var_1_62) {
    var_1_102 = var_1_51;
   } else {
    var_1_102 = var_1_26;
   }
  }
 } else {
  var_1_102 = var_1_38;
 }
 if (var_1_82 != var_1_18) {
  var_1_24 = (((((var_1_8 + var_1_21)) > (-8)) ? ((var_1_8 + var_1_21)) : (-8)));
 } else {
  var_1_24 = (((((((((var_1_18 - var_1_25)) < (var_1_3)) ? ((var_1_18 - var_1_25)) : (var_1_3)))) < (((((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) < (var_1_37)) ? (((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) : (var_1_37))))) ? ((((((var_1_18 - var_1_25)) < (var_1_3)) ? ((var_1_18 - var_1_25)) : (var_1_3)))) : (((((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) < (var_1_37)) ? (((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) : (var_1_37))))));
 }
 if (var_1_6 > (var_1_7 + var_1_43)) {
  if (var_1_3 >= var_1_6) {
   if (var_1_88) {
    var_1_9 = (((var_1_10 + var_1_11) - var_1_12) + var_1_13);
   } else {
    if (var_1_10 > (- (var_1_11 / var_1_14))) {
     var_1_9 = ((((var_1_13) > (((((var_1_11) > (var_1_15)) ? (var_1_11) : (var_1_15))))) ? (var_1_13) : (((((var_1_11) > (var_1_15)) ? (var_1_11) : (var_1_15))))));
    } else {
     if (var_1_62) {
      var_1_9 = var_1_13;
     }
    }
   }
  } else {
   var_1_9 = var_1_15;
  }
 } else {
  var_1_9 = 64.25;
 }
 if (var_1_96) {
  var_1_98 = var_1_6;
 } else {
  var_1_98 = var_1_43;
 }
 if (((var_1_11 + var_1_10) - var_1_34) <= var_1_9) {
  if (! (199.5 < var_1_9)) {
   var_1_41 = ((((var_1_39) < (var_1_38)) ? (var_1_39) : (var_1_38)));
  }
 } else {
  if (var_1_62 && (var_1_29 >= -500)) {
   var_1_41 = var_1_21;
  } else {
   var_1_41 = var_1_6;
  }
 }
 if ((var_1_9 >= 16.75) && (! var_1_65)) {
  if (var_1_98 != var_1_21) {
   var_1_71 = (((((((((var_1_72 - 4)) > (var_1_39)) ? ((var_1_72 - 4)) : (var_1_39)))) < (var_1_51)) ? ((((((var_1_72 - 4)) > (var_1_39)) ? ((var_1_72 - 4)) : (var_1_39)))) : (var_1_51)));
  }
 } else {
  var_1_71 = (var_1_72 - var_1_6);
 }
 if (var_1_62) {
  var_1_100 = var_1_55;
 } else {
  var_1_100 = var_1_19;
 }
 if (var_1_62 && var_1_88) {
  if (var_1_88) {
   var_1_23 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  } else {
   var_1_23 = var_1_21;
  }
 } else {
  var_1_23 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 }
 if (! var_1_96) {
  var_1_42 = ((((((((var_1_34) < (var_1_13)) ? (var_1_34) : (var_1_13)))) > (var_1_15)) ? (((((var_1_34) < (var_1_13)) ? (var_1_34) : (var_1_13)))) : (var_1_15)));
 } else {
  var_1_42 = (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + var_1_12);
 }
 signed char stepLocal_7 = var_1_3;
 if (var_1_92 > stepLocal_7) {
  if (! var_1_62) {
   var_1_45 = ((((var_1_10) > (var_1_35)) ? (var_1_10) : (var_1_35)));
  } else {
   var_1_45 = (var_1_11 + 63.62f);
  }
 }
 unsigned char stepLocal_15 = var_1_101 <= var_1_35;
 if (var_1_64 && stepLocal_15) {
  var_1_68 = (! (var_1_64 || var_1_63));
 } else {
  var_1_68 = ((var_1_64 || (var_1_63 || var_1_69)) || var_1_70);
 }
 unsigned char stepLocal_17 = var_1_65;
 unsigned char stepLocal_16 = var_1_60;
 if (stepLocal_17 || var_1_96) {
  if (stepLocal_16 > (var_1_72 - var_1_38)) {
   var_1_74 = ((((var_1_39) > (var_1_27)) ? (var_1_39) : (var_1_27)));
  } else {
   var_1_74 = var_1_60;
  }
 } else {
  if (var_1_96) {
   var_1_74 = ((((((-64) < 0 ) ? -(-64) : (-64))) - var_1_60) - (var_1_59 + var_1_75));
  } else {
   if (var_1_63) {
    var_1_74 = (16 + var_1_59);
   }
  }
 }
 signed long int stepLocal_23 = ((((var_1_36 + var_1_54)) < ((var_1_51 - var_1_75))) ? ((var_1_36 + var_1_54)) : ((var_1_51 - var_1_75)));
 if (! var_1_63) {
  if (((var_1_27 - last_1_var_1_78) - var_1_102) >= stepLocal_23) {
   var_1_78 = (10000 + last_1_var_1_78);
  }
 }
 unsigned char stepLocal_0 = var_1_71;
 if (var_1_96) {
  var_1_1 = (((((((10) < (var_1_3)) ? (10) : (var_1_3))) < 0 ) ? -((((10) < (var_1_3)) ? (10) : (var_1_3))) : ((((10) < (var_1_3)) ? (10) : (var_1_3)))));
 } else {
  if (var_1_68) {
   if (var_1_3 <= stepLocal_0) {
    var_1_1 = 8;
   } else {
    var_1_1 = ((var_1_6 - var_1_7) - 64);
   }
  } else {
   var_1_1 = (var_1_7 + var_1_8);
  }
 }
 if (var_1_62) {
  if (var_1_96) {
   var_1_28 = ((((-2) > ((var_1_21 + ((((var_1_74) > (var_1_87)) ? (var_1_74) : (var_1_87)))))) ? (-2) : ((var_1_21 + ((((var_1_74) > (var_1_87)) ? (var_1_74) : (var_1_87)))))));
  }
 }
 var_1_79 = ((((var_1_50) < (var_1_28)) ? (var_1_50) : (var_1_28)));
 unsigned short int stepLocal_8 = var_1_102;
 if (var_1_68) {
  if ((((((var_1_27) > (var_1_50)) ? (var_1_27) : (var_1_50))) - var_1_51) <= stepLocal_8) {
   var_1_48 = (((4.5807603716933366E18f + var_1_52) - var_1_35) - (var_1_34 - var_1_10));
  }
 } else {
  var_1_48 = var_1_11;
 }
 if (var_1_44 != ((((var_1_55) > (var_1_28)) ? (var_1_55) : (var_1_28)))) {
  if (var_1_72 != var_1_58) {
   var_1_73 = ((((5.6) < 0 ) ? -(5.6) : (5.6)));
  }
 } else {
  var_1_73 = (var_1_13 + var_1_52);
 }
 signed long int stepLocal_12 = var_1_19;
 unsigned long int stepLocal_11 = (1843631727 - var_1_21) - (var_1_44 + var_1_55);
 unsigned char stepLocal_10 = var_1_88;
 signed long int stepLocal_9 = (((var_1_24 + var_1_1) < 0 ) ? -(var_1_24 + var_1_1) : (var_1_24 + var_1_1));
 if (stepLocal_12 == (var_1_26 & ((((var_1_8) < (var_1_19)) ? (var_1_8) : (var_1_19))))) {
  if (var_1_43 != stepLocal_9) {
   var_1_53 = ((((var_1_21) < (var_1_54)) ? (var_1_21) : (var_1_54)));
  } else {
   var_1_53 = ((var_1_38 - var_1_39) + (var_1_55 - var_1_21));
  }
 } else {
  if (stepLocal_11 != var_1_51) {
   var_1_53 = var_1_38;
  } else {
   if (stepLocal_10 && var_1_62) {
    var_1_53 = ((((((var_1_55 - var_1_39)) < (var_1_6)) ? ((var_1_55 - var_1_39)) : (var_1_6))) + var_1_38);
   } else {
    var_1_53 = ((((var_1_6) > (((((100) < ((var_1_21 + var_1_55))) ? (100) : ((var_1_21 + var_1_55)))))) ? (var_1_6) : (((((100) < ((var_1_21 + var_1_55))) ? (100) : ((var_1_21 + var_1_55)))))));
   }
  }
 }
 unsigned long int stepLocal_2 = var_1_29;
 if (var_1_79 == stepLocal_2) {
  var_1_22 = ((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10)));
 } else {
  var_1_22 = var_1_10;
 }
 signed long int stepLocal_1 = (((((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) < (var_1_6)) ? (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_6));
 if (var_1_53 <= stepLocal_1) {
  var_1_20 = (var_1_6 - (var_1_7 + var_1_21));
 }
 if ((var_1_51 - var_1_58) <= (var_1_6 - 50)) {
  var_1_57 = (((((1.6) > (var_1_12)) ? (1.6) : (var_1_12))) - 9999.375);
 } else {
  if (1 != (((((var_1_25) > (var_1_40)) ? (var_1_25) : (var_1_40))) >> (var_1_59 - var_1_60))) {
   if (((((var_1_53) < ((~ var_1_100))) ? (var_1_53) : ((~ var_1_100)))) == var_1_39) {
    if (var_1_34 > var_1_97) {
     var_1_57 = ((((((var_1_35 + var_1_11)) < (var_1_10)) ? ((var_1_35 + var_1_11)) : (var_1_10))) + var_1_13);
    } else {
     var_1_57 = var_1_52;
    }
   } else {
    var_1_57 = (((((var_1_11 + 256.8)) < (var_1_13)) ? ((var_1_11 + 256.8)) : (var_1_13)));
   }
  } else {
   if (((((var_1_42) < (var_1_77)) ? (var_1_42) : (var_1_77))) >= var_1_14) {
    var_1_57 = var_1_34;
   }
  }
 }
 unsigned char stepLocal_24 = var_1_100 < var_1_28;
 if (stepLocal_24 && (var_1_96 && (5 != var_1_29))) {
  var_1_80 = (((((1 + (var_1_81 - var_1_53))) > (((((var_1_29 + var_1_36) < 0 ) ? -(var_1_29 + var_1_36) : (var_1_29 + var_1_36))))) ? ((1 + (var_1_81 - var_1_53))) : (((((var_1_29 + var_1_36) < 0 ) ? -(var_1_29 + var_1_36) : (var_1_29 + var_1_36))))));
 }
 unsigned char stepLocal_14 = var_1_63;
 if (var_1_11 == var_1_22) {
  var_1_67 = ((((((((var_1_59) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_59) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))) < ((var_1_25 - (var_1_54 + var_1_51)))) ? (((((var_1_59) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_59) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))) : ((var_1_25 - (var_1_54 + var_1_51)))));
 } else {
  if ((! var_1_88) || stepLocal_14) {
   var_1_67 = ((((var_1_25) < ((var_1_43 - var_1_6))) ? (var_1_25) : ((var_1_43 - var_1_6))));
  } else {
   var_1_67 = ((((var_1_16 + var_1_60) < 0 ) ? -(var_1_16 + var_1_60) : (var_1_16 + var_1_60)));
  }
 }
 signed long int stepLocal_13 = var_1_55 - var_1_23;
 if (var_1_67 != stepLocal_13) {
  var_1_56 = (var_1_35 - ((((var_1_34) > (((((var_1_52) < (var_1_12)) ? (var_1_52) : (var_1_12))))) ? (var_1_34) : (((((var_1_52) < (var_1_12)) ? (var_1_52) : (var_1_12)))))));
 }
 unsigned char stepLocal_22 = var_1_98 == (var_1_8 / var_1_38);
 signed short int stepLocal_21 = var_1_58;
 unsigned char stepLocal_20 = (var_1_72 - var_1_80) > ((((var_1_40) > (var_1_27)) ? (var_1_40) : (var_1_27)));
 unsigned char stepLocal_19 = var_1_64;
 signed long int stepLocal_18 = var_1_67 * (~ 32);
 if ((var_1_32 >= var_1_18) || stepLocal_20) {
  if (stepLocal_22 || var_1_96) {
   var_1_76 = var_1_55;
  } else {
   if (! var_1_70) {
    if (stepLocal_19 && (var_1_65 && var_1_96)) {
     if (var_1_98 < stepLocal_21) {
      var_1_76 = (var_1_72 - var_1_55);
     } else {
      var_1_76 = ((((var_1_51) < (10)) ? (var_1_51) : (10)));
     }
    }
   } else {
    if (! (var_1_98 > var_1_25)) {
     if (stepLocal_18 > var_1_75) {
      var_1_76 = ((((var_1_72) > (((((var_1_38) < (var_1_6)) ? (var_1_38) : (var_1_6))))) ? (var_1_72) : (((((var_1_38) < (var_1_6)) ? (var_1_38) : (var_1_6))))));
     } else {
      var_1_76 = (var_1_72 - var_1_21);
     }
    } else {
     var_1_76 = (var_1_72 - var_1_59);
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -126);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 62);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -63);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 assume_abort_if_not(var_1_14 != 0.0F);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967295);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -6);
 assume_abort_if_not(var_1_27 <= -1);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 3221225470);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 63);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 30);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= 1073741822);
 assume_abort_if_not(var_1_40 <= 2147483646);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 536870911);
 assume_abort_if_not(var_1_44 <= 1073741823);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 127);
 assume_abort_if_not(var_1_50 <= 255);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 127);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 2305843.009213691400e+12F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 254);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 63);
 assume_abort_if_not(var_1_55 <= 127);
 var_1_58 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 32767);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 15);
 assume_abort_if_not(var_1_59 <= 30);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 14);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 0);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 0);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 1);
 assume_abort_if_not(var_1_65 <= 1);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 1);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 0);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 0);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 127);
 assume_abort_if_not(var_1_72 <= 254);
 var_1_75 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 63);
 var_1_81 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_81 >= 16383);
 assume_abort_if_not(var_1_81 <= 32767);
 var_1_83 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_83 >= 16384);
 assume_abort_if_not(var_1_83 <= 32767);
 var_1_84 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_84 >= 49150);
 assume_abort_if_not(var_1_84 <= 65534);
 var_1_85 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_85 >= 32767);
 assume_abort_if_not(var_1_85 <= 65534);
 var_1_91 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_91 >= -922337.2036854766000e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854766000e+12F && var_1_91 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_23 = var_1_23;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_102 = var_1_102;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_96 ? (var_1_1 == ((signed char) (((((((10) < (var_1_3)) ? (10) : (var_1_3))) < 0 ) ? -((((10) < (var_1_3)) ? (10) : (var_1_3))) : ((((10) < (var_1_3)) ? (10) : (var_1_3))))))) : (var_1_68 ? ((var_1_3 <= var_1_71) ? (var_1_1 == ((signed char) 8)) : (var_1_1 == ((signed char) ((var_1_6 - var_1_7) - 64)))) : (var_1_1 == ((signed char) (var_1_7 + var_1_8))))) && ((var_1_6 > (var_1_7 + var_1_43)) ? ((var_1_3 >= var_1_6) ? (var_1_88 ? (var_1_9 == ((double) (((var_1_10 + var_1_11) - var_1_12) + var_1_13))) : ((var_1_10 > (- (var_1_11 / var_1_14))) ? (var_1_9 == ((double) ((((var_1_13) > (((((var_1_11) > (var_1_15)) ? (var_1_11) : (var_1_15))))) ? (var_1_13) : (((((var_1_11) > (var_1_15)) ? (var_1_11) : (var_1_15)))))))) : (var_1_62 ? (var_1_9 == ((double) var_1_13)) : 1))) : (var_1_9 == ((double) var_1_15))) : (var_1_9 == ((double) 64.25)))) && ((! ((var_1_17 - var_1_6) > var_1_7)) ? (var_1_16 == ((signed short int) (var_1_7 - ((((((((16) > (var_1_6)) ? (16) : (var_1_6)))) < (var_1_18)) ? (((((16) > (var_1_6)) ? (16) : (var_1_6)))) : (var_1_18)))))) : (var_1_16 == ((signed short int) (var_1_7 + var_1_8))))) && (((((((- var_1_12)) < (var_1_15)) ? ((- var_1_12)) : (var_1_15))) < var_1_14) ? (var_1_19 == ((signed long int) (((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6))) - var_1_18))) : (var_1_19 == ((signed long int) ((((var_1_18) > (var_1_26)) ? (var_1_18) : (var_1_26))))))) && ((var_1_53 <= ((((((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) < (var_1_6)) ? (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_6)))) ? (var_1_20 == ((signed char) (var_1_6 - (var_1_7 + var_1_21)))) : 1)) && ((var_1_79 == var_1_29) ? (var_1_22 == ((float) ((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10))))) : (var_1_22 == ((float) var_1_10)))) && ((var_1_62 && var_1_88) ? (var_1_88 ? (var_1_23 == ((unsigned short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_23 == ((unsigned short int) var_1_21))) : (var_1_23 == ((unsigned short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))) && ((var_1_82 != var_1_18) ? (var_1_24 == ((signed short int) (((((var_1_8 + var_1_21)) > (-8)) ? ((var_1_8 + var_1_21)) : (-8))))) : (var_1_24 == ((signed short int) (((((((((var_1_18 - var_1_25)) < (var_1_3)) ? ((var_1_18 - var_1_25)) : (var_1_3)))) < (((((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) < (var_1_37)) ? (((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) : (var_1_37))))) ? ((((((var_1_18 - var_1_25)) < (var_1_3)) ? ((var_1_18 - var_1_25)) : (var_1_3)))) : (((((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) < (var_1_37)) ? (((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) : (var_1_37)))))))))) && ((last_1_var_1_41 == last_1_var_1_102) ? ((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) >= var_1_12) ? ((var_1_18 <= (var_1_7 >> ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (var_1_26 == ((signed long int) ((((((last_1_var_1_92) < (var_1_7)) ? (last_1_var_1_92) : (var_1_7))) - ((((var_1_21) > (var_1_25)) ? (var_1_21) : (var_1_25)))) + (32 + var_1_27)))) : (var_1_26 == ((signed long int) (last_1_var_1_92 - (var_1_7 + var_1_18))))) : (var_1_26 == ((signed long int) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))) : ((var_1_3 < last_1_var_1_92) ? (var_1_26 == ((signed long int) ((((((var_1_7 + var_1_6) - var_1_18)) < (last_1_var_1_26)) ? (((var_1_7 + var_1_6) - var_1_18)) : (last_1_var_1_26))))) : 1))) && (var_1_62 ? (var_1_96 ? (var_1_28 == ((signed long int) ((((-2) > ((var_1_21 + ((((var_1_74) > (var_1_87)) ? (var_1_74) : (var_1_87)))))) ? (-2) : ((var_1_21 + ((((var_1_74) > (var_1_87)) ? (var_1_74) : (var_1_87))))))))) : 1) : 1)) && (((((((var_1_21 << var_1_3)) > (last_1_var_1_76)) ? ((var_1_21 << var_1_3)) : (last_1_var_1_76))) <= (((((last_1_var_1_98 | last_1_var_1_29)) < ((var_1_18 - last_1_var_1_23))) ? ((last_1_var_1_98 | last_1_var_1_29)) : ((var_1_18 - last_1_var_1_23))))) ? (var_1_29 == ((unsigned long int) ((((var_1_25) > (128u)) ? (var_1_25) : (128u))))) : (var_1_29 == ((unsigned long int) ((var_1_32 - var_1_7) - var_1_25))))) && ((255.775 <= var_1_14) ? (var_1_62 ? (var_1_33 == ((float) ((var_1_12 + var_1_11) - var_1_10))) : (var_1_33 == ((float) ((var_1_34 - var_1_11) - (var_1_12 + (var_1_10 + var_1_35)))))) : (var_1_33 == ((float) (((((var_1_11 + var_1_13)) < (((((var_1_35) > (var_1_12)) ? (var_1_35) : (var_1_12))))) ? ((var_1_11 + var_1_13)) : (((((var_1_35) > (var_1_12)) ? (var_1_35) : (var_1_12)))))))))) && ((var_1_14 < var_1_34) ? (var_1_36 == ((signed short int) (((((var_1_6) > (var_1_27)) ? (var_1_6) : (var_1_27))) + ((((((((var_1_8) < (var_1_3)) ? (var_1_8) : (var_1_3)))) > (last_1_var_1_36)) ? (((((var_1_8) < (var_1_3)) ? (var_1_8) : (var_1_3)))) : (last_1_var_1_36)))))) : (var_1_36 == ((signed short int) var_1_18)))) && ((var_1_82 <= ((var_1_38 - var_1_21) >> var_1_39)) ? (var_1_37 == ((signed long int) ((var_1_40 - var_1_18) - var_1_39))) : 1)) && ((((var_1_11 + var_1_10) - var_1_34) <= var_1_9) ? ((! (199.5 < var_1_9)) ? (var_1_41 == ((unsigned char) ((((var_1_39) < (var_1_38)) ? (var_1_39) : (var_1_38))))) : 1) : ((var_1_62 && (var_1_29 >= -500)) ? (var_1_41 == ((unsigned char) var_1_21)) : (var_1_41 == ((unsigned char) var_1_6))))) && ((! var_1_96) ? (var_1_42 == ((float) ((((((((var_1_34) < (var_1_13)) ? (var_1_34) : (var_1_13)))) > (var_1_15)) ? (((((var_1_34) < (var_1_13)) ? (var_1_34) : (var_1_13)))) : (var_1_15))))) : (var_1_42 == ((float) (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + var_1_12))))) && ((2 == last_1_var_1_47) ? (((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) / var_1_6) < last_1_var_1_80) ? ((16u == var_1_32) ? (var_1_43 == ((unsigned long int) ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) < ((((((last_1_var_1_29 + var_1_38)) > (var_1_18)) ? ((last_1_var_1_29 + var_1_38)) : (var_1_18))))) ? (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : ((((((last_1_var_1_29 + var_1_38)) > (var_1_18)) ? ((last_1_var_1_29 + var_1_38)) : (var_1_18)))))))) : (var_1_43 == ((unsigned long int) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))) : (var_1_43 == ((unsigned long int) (2801022199u - var_1_18)))) : (var_1_43 == ((unsigned long int) ((var_1_32 - (var_1_44 - last_1_var_1_29)) - ((1000000000u - var_1_39) + var_1_25)))))) && ((var_1_92 > var_1_3) ? ((! var_1_62) ? (var_1_45 == ((float) ((((var_1_10) > (var_1_35)) ? (var_1_10) : (var_1_35))))) : (var_1_45 == ((float) (var_1_11 + 63.62f)))) : 1)) && ((var_1_16 > -256) ? (var_1_47 == ((unsigned long int) (var_1_32 - ((((((((var_1_25) < (64u)) ? (var_1_25) : (64u)))) > (16u)) ? (((((var_1_25) < (64u)) ? (var_1_25) : (64u)))) : (16u)))))) : (var_1_47 == ((unsigned long int) ((((100u) < (var_1_40)) ? (100u) : (var_1_40))))))) && (var_1_68 ? (((((((var_1_27) > (var_1_50)) ? (var_1_27) : (var_1_50))) - var_1_51) <= var_1_102) ? (var_1_48 == ((float) (((4.5807603716933366E18f + var_1_52) - var_1_35) - (var_1_34 - var_1_10)))) : 1) : (var_1_48 == ((float) var_1_11)))) && ((var_1_19 == (var_1_26 & ((((var_1_8) < (var_1_19)) ? (var_1_8) : (var_1_19))))) ? ((var_1_43 != ((((var_1_24 + var_1_1) < 0 ) ? -(var_1_24 + var_1_1) : (var_1_24 + var_1_1)))) ? (var_1_53 == ((unsigned char) ((((var_1_21) < (var_1_54)) ? (var_1_21) : (var_1_54))))) : (var_1_53 == ((unsigned char) ((var_1_38 - var_1_39) + (var_1_55 - var_1_21))))) : ((((1843631727 - var_1_21) - (var_1_44 + var_1_55)) != var_1_51) ? (var_1_53 == ((unsigned char) var_1_38)) : ((var_1_88 && var_1_62) ? (var_1_53 == ((unsigned char) ((((((var_1_55 - var_1_39)) < (var_1_6)) ? ((var_1_55 - var_1_39)) : (var_1_6))) + var_1_38))) : (var_1_53 == ((unsigned char) ((((var_1_6) > (((((100) < ((var_1_21 + var_1_55))) ? (100) : ((var_1_21 + var_1_55)))))) ? (var_1_6) : (((((100) < ((var_1_21 + var_1_55))) ? (100) : ((var_1_21 + var_1_55))))))))))))) && ((var_1_67 != (var_1_55 - var_1_23)) ? (var_1_56 == ((double) (var_1_35 - ((((var_1_34) > (((((var_1_52) < (var_1_12)) ? (var_1_52) : (var_1_12))))) ? (var_1_34) : (((((var_1_52) < (var_1_12)) ? (var_1_52) : (var_1_12))))))))) : 1)) && (((var_1_51 - var_1_58) <= (var_1_6 - 50)) ? (var_1_57 == ((double) (((((1.6) > (var_1_12)) ? (1.6) : (var_1_12))) - 9999.375))) : ((1 != (((((var_1_25) > (var_1_40)) ? (var_1_25) : (var_1_40))) >> (var_1_59 - var_1_60))) ? ((((((var_1_53) < ((~ var_1_100))) ? (var_1_53) : ((~ var_1_100)))) == var_1_39) ? ((var_1_34 > var_1_97) ? (var_1_57 == ((double) ((((((var_1_35 + var_1_11)) < (var_1_10)) ? ((var_1_35 + var_1_11)) : (var_1_10))) + var_1_13))) : (var_1_57 == ((double) var_1_52))) : (var_1_57 == ((double) (((((var_1_11 + 256.8)) < (var_1_13)) ? ((var_1_11 + 256.8)) : (var_1_13)))))) : ((((((var_1_42) < (var_1_77)) ? (var_1_42) : (var_1_77))) >= var_1_14) ? (var_1_57 == ((double) var_1_34)) : 1)))) && ((last_1_var_1_56 != var_1_11) ? (last_1_var_1_68 ? (var_1_62 == ((unsigned char) (last_1_var_1_88 || (! (var_1_63 || var_1_64))))) : (var_1_62 == ((unsigned char) (var_1_65 && var_1_66)))) : (var_1_62 == ((unsigned char) (var_1_65 && var_1_66))))) && ((var_1_11 == var_1_22) ? (var_1_67 == ((signed short int) ((((((((var_1_59) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_59) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))) < ((var_1_25 - (var_1_54 + var_1_51)))) ? (((((var_1_59) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_59) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))) : ((var_1_25 - (var_1_54 + var_1_51))))))) : (((! var_1_88) || var_1_63) ? (var_1_67 == ((signed short int) ((((var_1_25) < ((var_1_43 - var_1_6))) ? (var_1_25) : ((var_1_43 - var_1_6)))))) : (var_1_67 == ((signed short int) ((((var_1_16 + var_1_60) < 0 ) ? -(var_1_16 + var_1_60) : (var_1_16 + var_1_60)))))))) && ((var_1_64 && (var_1_101 <= var_1_35)) ? (var_1_68 == ((unsigned char) (! (var_1_64 || var_1_63)))) : (var_1_68 == ((unsigned char) ((var_1_64 || (var_1_63 || var_1_69)) || var_1_70))))) && (((var_1_9 >= 16.75) && (! var_1_65)) ? ((var_1_98 != var_1_21) ? (var_1_71 == ((unsigned char) (((((((((var_1_72 - 4)) > (var_1_39)) ? ((var_1_72 - 4)) : (var_1_39)))) < (var_1_51)) ? ((((((var_1_72 - 4)) > (var_1_39)) ? ((var_1_72 - 4)) : (var_1_39)))) : (var_1_51))))) : 1) : (var_1_71 == ((unsigned char) (var_1_72 - var_1_6))))) && ((var_1_44 != ((((var_1_55) > (var_1_28)) ? (var_1_55) : (var_1_28)))) ? ((var_1_72 != var_1_58) ? (var_1_73 == ((double) ((((5.6) < 0 ) ? -(5.6) : (5.6))))) : 1) : (var_1_73 == ((double) (var_1_13 + var_1_52))))) && ((var_1_65 || var_1_96) ? ((var_1_60 > (var_1_72 - var_1_38)) ? (var_1_74 == ((signed char) ((((var_1_39) > (var_1_27)) ? (var_1_39) : (var_1_27))))) : (var_1_74 == ((signed char) var_1_60))) : (var_1_96 ? (var_1_74 == ((signed char) ((((((-64) < 0 ) ? -(-64) : (-64))) - var_1_60) - (var_1_59 + var_1_75)))) : (var_1_63 ? (var_1_74 == ((signed char) (16 + var_1_59))) : 1)))) && (((var_1_32 >= var_1_18) || ((var_1_72 - var_1_80) > ((((var_1_40) > (var_1_27)) ? (var_1_40) : (var_1_27))))) ? (((var_1_98 == (var_1_8 / var_1_38)) || var_1_96) ? (var_1_76 == ((unsigned char) var_1_55)) : ((! var_1_70) ? ((var_1_64 && (var_1_65 && var_1_96)) ? ((var_1_98 < var_1_58) ? (var_1_76 == ((unsigned char) (var_1_72 - var_1_55))) : (var_1_76 == ((unsigned char) ((((var_1_51) < (10)) ? (var_1_51) : (10)))))) : 1) : ((! (var_1_98 > var_1_25)) ? (((var_1_67 * (~ 32)) > var_1_75) ? (var_1_76 == ((unsigned char) ((((var_1_72) > (((((var_1_38) < (var_1_6)) ? (var_1_38) : (var_1_6))))) ? (var_1_72) : (((((var_1_38) < (var_1_6)) ? (var_1_38) : (var_1_6)))))))) : (var_1_76 == ((unsigned char) (var_1_72 - var_1_21)))) : (var_1_76 == ((unsigned char) (var_1_72 - var_1_59)))))) : 1)) && (var_1_77 == ((double) (var_1_12 + var_1_52)))) && ((! var_1_63) ? ((((var_1_27 - last_1_var_1_78) - var_1_102) >= (((((var_1_36 + var_1_54)) < ((var_1_51 - var_1_75))) ? ((var_1_36 + var_1_54)) : ((var_1_51 - var_1_75))))) ? (var_1_78 == ((unsigned short int) (10000 + last_1_var_1_78))) : 1) : 1)) && (var_1_79 == ((signed long int) ((((var_1_50) < (var_1_28)) ? (var_1_50) : (var_1_28)))))) && (((var_1_100 < var_1_28) && (var_1_96 && (5 != var_1_29))) ? (var_1_80 == ((unsigned short int) (((((1 + (var_1_81 - var_1_53))) > (((((var_1_29 + var_1_36) < 0 ) ? -(var_1_29 + var_1_36) : (var_1_29 + var_1_36))))) ? ((1 + (var_1_81 - var_1_53))) : (((((var_1_29 + var_1_36) < 0 ) ? -(var_1_29 + var_1_36) : (var_1_29 + var_1_36)))))))) : 1)) && ((-100 > (last_1_var_1_80 * last_1_var_1_47)) ? ((! last_1_var_1_62) ? (var_1_82 == ((unsigned short int) ((var_1_81 + var_1_83) - var_1_6))) : (var_1_82 == ((unsigned short int) ((((((var_1_84 - 4)) > (var_1_85)) ? ((var_1_84 - 4)) : (var_1_85))) - ((((var_1_21) > (var_1_55)) ? (var_1_21) : (var_1_55))))))) : (((var_1_50 % ((((var_1_72) < (var_1_84)) ? (var_1_72) : (var_1_84)))) > (var_1_81 * var_1_25)) ? (((- var_1_52) > (last_1_var_1_56 * var_1_12)) ? (var_1_82 == ((unsigned short int) var_1_18)) : ((((var_1_83 / var_1_39) * var_1_40) > ((last_1_var_1_79 + var_1_32) / ((((var_1_55) < (var_1_44)) ? (var_1_55) : (var_1_44))))) ? (var_1_82 == ((unsigned short int) (var_1_84 - var_1_58))) : 1)) : (var_1_82 == ((unsigned short int) var_1_59))))) && (var_1_86 == ((float) var_1_13))) && (var_1_70 ? (var_1_87 == ((unsigned char) var_1_6)) : 1)) && (var_1_70 ? (var_1_88 == ((unsigned char) 0)) : (var_1_88 == ((unsigned char) var_1_64)))) && (var_1_89 == ((float) var_1_13))) && (var_1_62 ? (var_1_90 == ((double) var_1_91)) : 1)) && (var_1_92 == ((signed long int) var_1_81))) && (var_1_93 == ((double) var_1_12))) && (var_1_62 ? (var_1_94 == ((float) 16.5f)) : 1)) && (var_1_96 == ((unsigned char) var_1_65))) && (var_1_97 == ((double) var_1_52))) && (var_1_96 ? (var_1_98 == ((unsigned long int) var_1_6)) : (var_1_98 == ((unsigned long int) var_1_43)))) && (var_1_99 == ((signed char) var_1_7))) && (var_1_62 ? (var_1_100 == ((signed long int) var_1_55)) : (var_1_100 == ((signed long int) var_1_19)))) && ((-1 > var_1_21) ? (var_1_101 == ((double) (var_1_52 + var_1_11))) : 1)) && ((! var_1_70) ? ((var_1_52 >= (var_1_10 - 49.75f)) ? (var_1_62 ? (var_1_102 == ((unsigned short int) var_1_51)) : (var_1_102 == ((unsigned short int) var_1_26))) : 1) : (var_1_102 == ((unsigned short int) var_1_38)))
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

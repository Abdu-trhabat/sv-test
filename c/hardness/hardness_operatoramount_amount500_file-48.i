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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch48Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -5;
signed short int var_1_6 = -1;
signed short int var_1_7 = 32;
signed short int var_1_8 = -5;
signed short int var_1_9 = 256;
signed short int var_1_10 = 16;
signed short int var_1_11 = 10000;
signed short int var_1_12 = 10000;
signed short int var_1_13 = 128;
signed short int var_1_14 = 256;
signed short int var_1_15 = 8;
signed short int var_1_16 = 32;
signed long int var_1_18 = 100000000;
float var_1_19 = 4.5;
float var_1_20 = 3.2;
float var_1_21 = 9.5;
float var_1_22 = 5.25;
float var_1_23 = 32.8;
float var_1_24 = -0.8;
unsigned long int var_1_25 = 32;
float var_1_26 = 255.8;
unsigned long int var_1_27 = 4091882737;
signed char var_1_28 = 10;
signed char var_1_29 = 0;
signed char var_1_30 = -2;
signed char var_1_31 = 4;
signed long int var_1_32 = -10;
float var_1_35 = 9999999.4;
float var_1_36 = 256.75;
double var_1_37 = 499.5;
signed long int var_1_38 = 1550821170;
signed short int var_1_39 = 32;
signed short int var_1_40 = -256;
unsigned long int var_1_41 = 2;
float var_1_42 = 2.25;
float var_1_43 = 1.53;
signed char var_1_44 = 8;
signed char var_1_45 = 50;
signed char var_1_46 = 0;
signed char var_1_47 = -64;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
unsigned long int var_1_52 = 100000;
unsigned long int var_1_53 = 1000000000;
unsigned short int var_1_54 = 256;
unsigned short int var_1_55 = 37398;
float var_1_56 = 99.5;
signed short int var_1_57 = -1;
signed short int var_1_59 = -10;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 50;
unsigned char var_1_65 = 128;
unsigned char var_1_66 = 128;
unsigned char var_1_67 = 1;
signed long int var_1_68 = -2;
signed long int var_1_69 = 100;
unsigned char var_1_70 = 1;
double var_1_72 = 2.4;
signed short int var_1_73 = -200;
signed long int var_1_74 = 10;
float var_1_75 = 49.4;
float var_1_76 = 0.0;
float var_1_77 = 128.15;
signed long int var_1_78 = 0;
unsigned long int var_1_79 = 0;
signed long int var_1_80 = 1402618279;
unsigned char var_1_81 = 0;
signed long int var_1_83 = -25;
signed short int var_1_84 = 0;
signed long int var_1_85 = -1;
signed char var_1_87 = -32;
signed char var_1_88 = 64;
double var_1_89 = 25.5;
double var_1_90 = 10.4;
double var_1_91 = 2.5;
unsigned char var_1_92 = 10;
signed long int var_1_93 = 1;
unsigned char var_1_94 = 8;
unsigned long int var_1_95 = 256;
signed long int var_1_97 = 5;
unsigned char var_1_98 = 0;
float var_1_99 = -0.4;
unsigned char var_1_100 = 2;
unsigned char var_1_101 = 4;
signed char var_1_102 = 2;
signed long int var_1_103 = 8;
signed long int var_1_104 = 8;
double var_1_105 = 255.2;
unsigned long int var_1_106 = 128;
signed char var_1_107 = -50;
signed short int var_1_108 = 2;
float var_1_109 = 49.4;
signed short int last_1_var_1_1 = -5;
signed long int last_1_var_1_18 = 100000000;
signed long int last_1_var_1_32 = -10;
unsigned char last_1_var_1_48 = 1;
signed short int last_1_var_1_59 = -10;
unsigned char last_1_var_1_70 = 1;
signed long int last_1_var_1_74 = 10;
unsigned char last_1_var_1_81 = 0;
signed long int last_1_var_1_85 = -1;
unsigned long int last_1_var_1_95 = 256;
signed short int last_1_var_1_108 = 2;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_74 <= ((var_1_14 << last_1_var_1_59) ^ last_1_var_1_74)) {
  var_1_32 = (var_1_29 - ((((((((var_1_14) < (8)) ? (var_1_14) : (8)))) > (1)) ? (((((var_1_14) < (8)) ? (var_1_14) : (8)))) : (1))));
 } else {
  if (last_1_var_1_81) {
   var_1_32 = (4 - ((1674130036 - var_1_15) - var_1_12));
  }
 }
 signed char stepLocal_28 = var_1_45;
 signed long int stepLocal_27 = var_1_16 - ((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13)));
 if (var_1_32 > stepLocal_27) {
  if (stepLocal_28 < var_1_38) {
   var_1_72 = var_1_22;
  }
 }
 if (last_1_var_1_48 || (var_1_7 <= var_1_8)) {
  if (var_1_10 >= var_1_9) {
   var_1_18 = (((((var_1_6) > ((var_1_14 - var_1_13))) ? (var_1_6) : ((var_1_14 - var_1_13)))) + var_1_10);
  }
 } else {
  var_1_18 = ((((((var_1_11 + var_1_6) + last_1_var_1_1)) > (var_1_12)) ? (((var_1_11 + var_1_6) + last_1_var_1_1)) : (var_1_12)));
 }
 if (var_1_23 > ((- 63.4f) / var_1_26)) {
  if (var_1_32 != ((var_1_9 / var_1_12) / var_1_10)) {
   var_1_25 = ((var_1_27 - 64u) - (var_1_15 + var_1_11));
  } else {
   var_1_25 = (var_1_11 + var_1_14);
  }
 } else {
  var_1_25 = var_1_16;
 }
 signed long int stepLocal_32 = last_1_var_1_18;
 signed short int stepLocal_31 = var_1_11;
 if (stepLocal_31 >= last_1_var_1_95) {
  if (last_1_var_1_32 < stepLocal_32) {
   var_1_81 = (var_1_51 && (! (! var_1_50)));
  } else {
   var_1_81 = var_1_51;
  }
 } else {
  var_1_81 = var_1_50;
 }
 if (var_1_81) {
  var_1_103 = var_1_92;
 } else {
  var_1_103 = var_1_27;
 }
 var_1_19 = (((var_1_20 - var_1_21) + ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) + var_1_24);
 if (64 != var_1_18) {
  var_1_35 = (var_1_20 - (var_1_21 + var_1_36));
 }
 signed long int stepLocal_9 = var_1_6 / var_1_38;
 signed short int stepLocal_8 = var_1_10;
 if (stepLocal_9 < (var_1_15 - var_1_11)) {
  if (stepLocal_8 <= var_1_11) {
   if ((var_1_26 / 9.75) != (var_1_36 - var_1_20)) {
    var_1_40 = ((((var_1_14) < ((((((var_1_16) < (var_1_11)) ? (var_1_16) : (var_1_11))) - ((((100) < 0 ) ? -(100) : (100)))))) ? (var_1_14) : ((((((var_1_16) < (var_1_11)) ? (var_1_16) : (var_1_11))) - ((((100) < 0 ) ? -(100) : (100)))))));
   } else {
    var_1_40 = (var_1_31 + var_1_6);
   }
  } else {
   var_1_40 = (5 - (var_1_29 + var_1_14));
  }
 } else {
  var_1_40 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
 }
 var_1_41 = (var_1_29 + var_1_16);
 var_1_48 = (var_1_49 || ((! var_1_50) || (! var_1_51)));
 signed long int stepLocal_29 = - var_1_55;
 if ((var_1_45 | (var_1_27 - var_1_66)) <= stepLocal_29) {
  var_1_75 = (((((((((var_1_21) > (var_1_36)) ? (var_1_21) : (var_1_36)))) < (var_1_20)) ? (((((var_1_21) > (var_1_36)) ? (var_1_21) : (var_1_36)))) : (var_1_20))) - ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < ((var_1_76 - var_1_77))) ? (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : ((var_1_76 - var_1_77)))));
 } else {
  var_1_75 = (var_1_36 - var_1_77);
 }
 signed long int stepLocal_30 = var_1_13 << ((((var_1_79) < 0 ) ? -(var_1_79) : (var_1_79)));
 if (-32 < stepLocal_30) {
  var_1_78 = ((var_1_80 - (1000000000 - var_1_11)) - ((((var_1_16) > (var_1_45)) ? (var_1_16) : (var_1_45))));
 }
 var_1_83 = var_1_32;
 var_1_84 = (-1 + (var_1_65 + ((((var_1_46) < (var_1_103)) ? (var_1_46) : (var_1_103)))));
 signed long int stepLocal_35 = var_1_80 >> var_1_93;
 unsigned long int stepLocal_34 = var_1_79 * var_1_80;
 if (-64 >= stepLocal_34) {
  var_1_91 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 } else {
  if ((var_1_46 / var_1_92) != stepLocal_35) {
   var_1_91 = var_1_43;
  }
 }
 if (var_1_48) {
  var_1_94 = var_1_93;
 } else {
  var_1_94 = var_1_65;
 }
 var_1_97 = var_1_88;
 var_1_98 = var_1_51;
 if (var_1_48) {
  var_1_99 = var_1_90;
 }
 if (var_1_98) {
  var_1_100 = var_1_88;
 } else {
  var_1_100 = var_1_29;
 }
 var_1_102 = var_1_88;
 var_1_104 = var_1_66;
 var_1_105 = var_1_36;
 if (var_1_48) {
  var_1_106 = var_1_80;
 } else {
  var_1_106 = var_1_29;
 }
 var_1_107 = var_1_93;
 var_1_108 = (last_1_var_1_108 - (var_1_93 + ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))));
 unsigned char stepLocal_10 = var_1_98;
 if (var_1_81 && stepLocal_10) {
  var_1_42 = ((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23)));
 } else {
  var_1_42 = (((((var_1_43 + var_1_23) + 31.25f) < 0 ) ? -((var_1_43 + var_1_23) + 31.25f) : ((var_1_43 + var_1_23) + 31.25f)));
 }
 unsigned char stepLocal_26 = var_1_81;
 if (stepLocal_26 && (last_1_var_1_70 <= var_1_106)) {
  var_1_70 = ((((var_1_66) < (var_1_29)) ? (var_1_66) : (var_1_29)));
 } else {
  var_1_70 = (var_1_45 + 16);
 }
 if (! var_1_98) {
  if (var_1_21 < var_1_24) {
   var_1_28 = (16 - var_1_29);
  } else {
   var_1_28 = (var_1_30 + var_1_31);
  }
 } else {
  var_1_28 = ((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31)));
 }
 if ((var_1_45 * var_1_84) >= var_1_13) {
  var_1_63 = (var_1_51 || (var_1_49 || var_1_50));
 } else {
  var_1_63 = (! (var_1_48 && (! var_1_51)));
 }
 if ((- var_1_99) >= var_1_72) {
  var_1_64 = (((((((((var_1_65 - var_1_46)) < (var_1_45)) ? ((var_1_65 - var_1_46)) : (var_1_45)))) < ((var_1_66 - var_1_29))) ? ((((((var_1_65 - var_1_46)) < (var_1_45)) ? ((var_1_65 - var_1_46)) : (var_1_45)))) : ((var_1_66 - var_1_29))));
 } else {
  var_1_64 = (((((var_1_65 - (64 - var_1_46))) < (25)) ? ((var_1_65 - (64 - var_1_46))) : (25)));
 }
 signed short int stepLocal_25 = var_1_13;
 if (stepLocal_25 < (var_1_83 / var_1_11)) {
  var_1_68 = ((((var_1_83) < 0 ) ? -(var_1_83) : (var_1_83)));
 } else {
  var_1_68 = (((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45))) + (((((var_1_46 + var_1_69)) < (((((var_1_11) > (var_1_107)) ? (var_1_11) : (var_1_107))))) ? ((var_1_46 + var_1_69)) : (((((var_1_11) > (var_1_107)) ? (var_1_11) : (var_1_107)))))));
 }
 if (var_1_91 >= var_1_105) {
  if (var_1_106 < (- var_1_66)) {
   var_1_87 = ((var_1_88 - var_1_45) - var_1_46);
  } else {
   var_1_87 = ((((((((var_1_79) < (((((var_1_46) < (var_1_88)) ? (var_1_46) : (var_1_88))))) ? (var_1_79) : (((((var_1_46) < (var_1_88)) ? (var_1_46) : (var_1_88))))))) < (-16)) ? (((((var_1_79) < (((((var_1_46) < (var_1_88)) ? (var_1_46) : (var_1_88))))) ? (var_1_79) : (((((var_1_46) < (var_1_88)) ? (var_1_46) : (var_1_88))))))) : (-16)));
  }
 } else {
  var_1_87 = var_1_31;
 }
 if (var_1_98) {
  var_1_95 = var_1_79;
 }
 if (var_1_48) {
  if ((((((var_1_105) < (var_1_91)) ? (var_1_105) : (var_1_91))) + var_1_24) == (- var_1_20)) {
   if (var_1_91 < var_1_72) {
    var_1_57 = ((((var_1_70) > (var_1_94)) ? (var_1_70) : (var_1_94)));
   } else {
    var_1_57 = ((((var_1_16) < (var_1_70)) ? (var_1_16) : (var_1_70)));
   }
  } else {
   var_1_57 = ((100 - var_1_45) + var_1_13);
  }
 } else {
  var_1_57 = ((((var_1_12 - var_1_14) < 0 ) ? -(var_1_12 - var_1_14) : (var_1_12 - var_1_14)));
 }
 signed long int stepLocal_33 = -1 + var_1_6;
 if (stepLocal_33 <= last_1_var_1_85) {
  if (var_1_23 >= (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) - ((((var_1_99) < 0 ) ? -(var_1_99) : (var_1_99))))) {
   var_1_85 = (var_1_30 + var_1_45);
  } else {
   var_1_85 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
  }
 } else {
  var_1_85 = ((var_1_12 + var_1_57) - var_1_16);
 }
 signed long int stepLocal_7 = (var_1_38 - var_1_11) - var_1_13;
 if (var_1_85 == stepLocal_7) {
  var_1_37 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 }
 if (((- var_1_37) * (var_1_20 - var_1_76)) <= var_1_105) {
  var_1_109 = var_1_24;
 } else {
  var_1_109 = var_1_43;
 }
 signed long int stepLocal_23 = var_1_103 | var_1_108;
 signed long int stepLocal_22 = (var_1_13 / var_1_10) + var_1_30;
 unsigned char stepLocal_21 = var_1_91 != var_1_42;
 if ((var_1_22 + (var_1_105 * var_1_24)) == ((var_1_72 + var_1_109) / var_1_26)) {
  if (stepLocal_22 >= var_1_7) {
   if (var_1_20 >= var_1_26) {
    var_1_60 = (var_1_61 || (var_1_49 || var_1_62));
   } else {
    if (stepLocal_21 && var_1_98) {
     var_1_60 = (var_1_98 && var_1_62);
    } else {
     var_1_60 = (var_1_50 && ((16 > var_1_32) || var_1_51));
    }
   }
  } else {
   var_1_60 = (var_1_62 || var_1_61);
  }
 } else {
  if (stepLocal_23 < ((var_1_106 * var_1_104) / ((((var_1_12) > (var_1_55)) ? (var_1_12) : (var_1_55))))) {
   var_1_60 = (var_1_98 || var_1_50);
  }
 }
 if ((((((var_1_36) > (var_1_23)) ? (var_1_36) : (var_1_23))) + (var_1_21 * var_1_20)) == var_1_109) {
  var_1_74 = (var_1_108 + (var_1_12 + var_1_15));
 } else {
  var_1_74 = (((((((var_1_55 - var_1_16) < 0 ) ? -(var_1_55 - var_1_16) : (var_1_55 - var_1_16))) < 0 ) ? -((((var_1_55 - var_1_16) < 0 ) ? -(var_1_55 - var_1_16) : (var_1_55 - var_1_16))) : ((((var_1_55 - var_1_16) < 0 ) ? -(var_1_55 - var_1_16) : (var_1_55 - var_1_16)))));
 }
 if (var_1_60) {
  var_1_101 = 8;
 } else {
  var_1_101 = var_1_79;
 }
 unsigned char stepLocal_20 = var_1_60;
 unsigned char stepLocal_19 = var_1_60;
 if ((var_1_15 >= (var_1_95 % var_1_12)) || stepLocal_20) {
  if (stepLocal_19 && var_1_50) {
   var_1_56 = var_1_20;
  } else {
   var_1_56 = (((((var_1_36 - var_1_20)) < (((((var_1_43) < (var_1_21)) ? (var_1_43) : (var_1_21))))) ? ((var_1_36 - var_1_20)) : (((((var_1_43) < (var_1_21)) ? (var_1_43) : (var_1_21))))));
  }
 }
 if (((var_1_74 / var_1_10) < ((((var_1_41) > (var_1_29)) ? (var_1_41) : (var_1_29)))) || (var_1_24 >= ((((var_1_43) > (var_1_23)) ? (var_1_43) : (var_1_23))))) {
  if (! var_1_60) {
   var_1_44 = (var_1_29 - 1);
  } else {
   var_1_44 = var_1_29;
  }
 } else {
  var_1_44 = ((((var_1_30) < (((var_1_45 + var_1_46) - var_1_29))) ? (var_1_30) : (((var_1_45 + var_1_46) - var_1_29))));
 }
 unsigned char stepLocal_15 = (- var_1_27) == ((((var_1_95) < (128u)) ? (var_1_95) : (128u)));
 signed short int stepLocal_14 = var_1_10;
 signed short int stepLocal_13 = var_1_7;
 signed long int stepLocal_12 = var_1_101 / var_1_10;
 if ((((((var_1_29) > (var_1_45)) ? (var_1_29) : (var_1_45))) - (64 - var_1_46)) == stepLocal_13) {
  if (var_1_22 < (4.8f + var_1_20)) {
   if (stepLocal_12 >= var_1_13) {
    var_1_52 = (var_1_27 - var_1_14);
   } else {
    var_1_52 = ((((((((var_1_45) > (var_1_46)) ? (var_1_45) : (var_1_46)))) < (((((var_1_15) > (100u)) ? (var_1_15) : (100u))))) ? (((((var_1_45) > (var_1_46)) ? (var_1_45) : (var_1_46)))) : (((((var_1_15) > (100u)) ? (var_1_15) : (100u))))));
   }
  } else {
   var_1_52 = ((((var_1_46) < (var_1_29)) ? (var_1_46) : (var_1_29)));
  }
 } else {
  if (var_1_48 && stepLocal_15) {
   if (stepLocal_14 == var_1_16) {
    var_1_52 = (var_1_27 - (var_1_38 - (var_1_53 - var_1_12)));
   }
  } else {
   var_1_52 = (((((((var_1_53) > (var_1_38)) ? (var_1_53) : (var_1_38))) < 0 ) ? -((((var_1_53) > (var_1_38)) ? (var_1_53) : (var_1_38))) : ((((var_1_53) > (var_1_38)) ? (var_1_53) : (var_1_38)))));
  }
 }
 if ((var_1_20 + var_1_56) != var_1_42) {
  if ((((((var_1_36 - var_1_21)) > (var_1_91)) ? ((var_1_36 - var_1_21)) : (var_1_91))) >= 1000000.5) {
   var_1_39 = (((((var_1_14 - 1) < 0 ) ? -(var_1_14 - 1) : (var_1_14 - 1))) - var_1_29);
  }
 } else {
  if (var_1_8 <= var_1_18) {
   var_1_39 = ((((var_1_12) > (var_1_15)) ? (var_1_12) : (var_1_15)));
  } else {
   var_1_39 = var_1_11;
  }
 }
 signed short int stepLocal_24 = var_1_39;
 if (var_1_18 != stepLocal_24) {
  var_1_67 = (! (var_1_61 || var_1_49));
 } else {
  var_1_67 = ((! var_1_50) || (! var_1_51));
 }
 signed short int stepLocal_18 = var_1_7;
 unsigned long int stepLocal_17 = var_1_52;
 signed long int stepLocal_16 = var_1_32;
 if (stepLocal_17 == var_1_31) {
  var_1_54 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
 } else {
  if (stepLocal_18 <= (var_1_46 - var_1_45)) {
   if ((var_1_74 * var_1_103) > stepLocal_16) {
    var_1_54 = var_1_13;
   }
  } else {
   var_1_54 = (var_1_55 - var_1_11);
  }
 }
 if (var_1_67) {
  var_1_89 = (var_1_90 + (var_1_43 + var_1_20));
 } else {
  var_1_89 = (var_1_43 + var_1_23);
 }
 unsigned long int stepLocal_11 = var_1_52;
 if (stepLocal_11 <= var_1_18) {
  var_1_47 = ((((var_1_29) < ((var_1_45 - var_1_46))) ? (var_1_29) : ((var_1_45 - var_1_46))));
 } else {
  var_1_47 = ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29)));
 }
 if ((- (var_1_24 * var_1_43)) != (var_1_105 * var_1_91)) {
  var_1_73 = (var_1_45 + ((((var_1_46) > (var_1_47)) ? (var_1_46) : (var_1_47))));
 }
 signed long int stepLocal_6 = var_1_9 & var_1_6;
 unsigned long int stepLocal_5 = var_1_25;
 signed short int stepLocal_4 = var_1_8;
 unsigned char stepLocal_3 = var_1_81;
 unsigned char stepLocal_2 = var_1_81;
 signed long int stepLocal_1 = ((((var_1_11) < (var_1_13)) ? (var_1_11) : (var_1_13))) + (var_1_12 * var_1_8);
 unsigned char stepLocal_0 = var_1_67;
 if (var_1_81 || stepLocal_0) {
  if (last_1_var_1_1 >= stepLocal_5) {
   var_1_1 = (((((50) > (var_1_6)) ? (50) : (var_1_6))) + (var_1_7 + var_1_8));
  } else {
   var_1_1 = (var_1_8 + var_1_6);
  }
 } else {
  if (stepLocal_4 != (var_1_25 % ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) {
   if (! var_1_67) {
    if (stepLocal_6 != last_1_var_1_1) {
     var_1_1 = ((((var_1_6) < (var_1_8)) ? (var_1_6) : (var_1_8)));
    } else {
     var_1_1 = (((var_1_11 + var_1_12) - ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))));
    }
   } else {
    if (var_1_16 > stepLocal_1) {
     if (var_1_67 && stepLocal_3) {
      if (stepLocal_2 && (5.25 != 100.4)) {
       if (((((- var_1_109) < 0 ) ? -(- var_1_109) : (- var_1_109))) <= (- 255.2f)) {
        var_1_1 = var_1_6;
       }
      } else {
       var_1_1 = var_1_15;
      }
     } else {
      var_1_1 = var_1_11;
     }
    } else {
     var_1_1 = var_1_7;
    }
   }
  } else {
   var_1_1 = var_1_7;
  }
 }
 if (var_1_57 > var_1_30) {
  var_1_59 = ((((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))) + var_1_73) + var_1_6);
 } else {
  var_1_59 = (var_1_46 - var_1_12);
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -8191);
 assume_abort_if_not(var_1_7 <= 8192);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -8191);
 assume_abort_if_not(var_1_8 <= 8191);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32768);
 assume_abort_if_not(var_1_9 <= 32767);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32768);
 assume_abort_if_not(var_1_10 <= 32767);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 8191);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 8191);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 assume_abort_if_not(var_1_26 != 0.0F);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 3221225470);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -63);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -63);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= 1073741823);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -230584.3009213691400e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 63);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_53 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_53 >= 536870911);
 assume_abort_if_not(var_1_53 <= 1073741823);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 32767);
 assume_abort_if_not(var_1_55 <= 65534);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 0);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 0);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 127);
 assume_abort_if_not(var_1_65 <= 254);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 127);
 assume_abort_if_not(var_1_66 <= 254);
 var_1_69 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_69 >= -536870911);
 assume_abort_if_not(var_1_69 <= 536870911);
 var_1_76 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_76 >= 4611686.018427383000e+12F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 9223372.036854766000e+12F && var_1_76 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427383000e+12F && var_1_77 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 1);
 var_1_80 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_80 >= 1073741822);
 assume_abort_if_not(var_1_80 <= 2147483646);
 var_1_88 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_88 >= 62);
 assume_abort_if_not(var_1_88 <= 126);
 var_1_90 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_90 >= -461168.6018427383000e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 4611686.018427383000e+12F && var_1_90 >= 1.0e-20F ));
 var_1_92 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_92 >= 0);
 assume_abort_if_not(var_1_92 <= 255);
 assume_abort_if_not(var_1_92 != 0);
 var_1_93 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_93 >= 1);
 assume_abort_if_not(var_1_93 <= 30);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_70 = var_1_70;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_108 = var_1_108;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_81 || var_1_67) ? ((last_1_var_1_1 >= var_1_25) ? (var_1_1 == ((signed short int) (((((50) > (var_1_6)) ? (50) : (var_1_6))) + (var_1_7 + var_1_8)))) : (var_1_1 == ((signed short int) (var_1_8 + var_1_6)))) : ((var_1_8 != (var_1_25 % ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) ? ((! var_1_67) ? (((var_1_9 & var_1_6) != last_1_var_1_1) ? (var_1_1 == ((signed short int) ((((var_1_6) < (var_1_8)) ? (var_1_6) : (var_1_8))))) : (var_1_1 == ((signed short int) (((var_1_11 + var_1_12) - ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))))) : ((var_1_16 > (((((var_1_11) < (var_1_13)) ? (var_1_11) : (var_1_13))) + (var_1_12 * var_1_8))) ? ((var_1_67 && var_1_81) ? ((var_1_81 && (5.25 != 100.4)) ? ((((((- var_1_109) < 0 ) ? -(- var_1_109) : (- var_1_109))) <= (- 255.2f)) ? (var_1_1 == ((signed short int) var_1_6)) : 1) : (var_1_1 == ((signed short int) var_1_15))) : (var_1_1 == ((signed short int) var_1_11))) : (var_1_1 == ((signed short int) var_1_7)))) : (var_1_1 == ((signed short int) var_1_7)))) && ((last_1_var_1_48 || (var_1_7 <= var_1_8)) ? ((var_1_10 >= var_1_9) ? (var_1_18 == ((signed long int) (((((var_1_6) > ((var_1_14 - var_1_13))) ? (var_1_6) : ((var_1_14 - var_1_13)))) + var_1_10))) : 1) : (var_1_18 == ((signed long int) ((((((var_1_11 + var_1_6) + last_1_var_1_1)) > (var_1_12)) ? (((var_1_11 + var_1_6) + last_1_var_1_1)) : (var_1_12))))))) && (var_1_19 == ((float) (((var_1_20 - var_1_21) + ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) + var_1_24)))) && ((var_1_23 > ((- 63.4f) / var_1_26)) ? ((var_1_32 != ((var_1_9 / var_1_12) / var_1_10)) ? (var_1_25 == ((unsigned long int) ((var_1_27 - 64u) - (var_1_15 + var_1_11)))) : (var_1_25 == ((unsigned long int) (var_1_11 + var_1_14)))) : (var_1_25 == ((unsigned long int) var_1_16)))) && ((! var_1_98) ? ((var_1_21 < var_1_24) ? (var_1_28 == ((signed char) (16 - var_1_29))) : (var_1_28 == ((signed char) (var_1_30 + var_1_31)))) : (var_1_28 == ((signed char) ((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31))))))) && ((last_1_var_1_74 <= ((var_1_14 << last_1_var_1_59) ^ last_1_var_1_74)) ? (var_1_32 == ((signed long int) (var_1_29 - ((((((((var_1_14) < (8)) ? (var_1_14) : (8)))) > (1)) ? (((((var_1_14) < (8)) ? (var_1_14) : (8)))) : (1)))))) : (last_1_var_1_81 ? (var_1_32 == ((signed long int) (4 - ((1674130036 - var_1_15) - var_1_12)))) : 1))) && ((64 != var_1_18) ? (var_1_35 == ((float) (var_1_20 - (var_1_21 + var_1_36)))) : 1)) && ((var_1_85 == ((var_1_38 - var_1_11) - var_1_13)) ? (var_1_37 == ((double) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : 1)) && (((var_1_20 + var_1_56) != var_1_42) ? (((((((var_1_36 - var_1_21)) > (var_1_91)) ? ((var_1_36 - var_1_21)) : (var_1_91))) >= 1000000.5) ? (var_1_39 == ((signed short int) (((((var_1_14 - 1) < 0 ) ? -(var_1_14 - 1) : (var_1_14 - 1))) - var_1_29))) : 1) : ((var_1_8 <= var_1_18) ? (var_1_39 == ((signed short int) ((((var_1_12) > (var_1_15)) ? (var_1_12) : (var_1_15))))) : (var_1_39 == ((signed short int) var_1_11))))) && (((var_1_6 / var_1_38) < (var_1_15 - var_1_11)) ? ((var_1_10 <= var_1_11) ? (((var_1_26 / 9.75) != (var_1_36 - var_1_20)) ? (var_1_40 == ((signed short int) ((((var_1_14) < ((((((var_1_16) < (var_1_11)) ? (var_1_16) : (var_1_11))) - ((((100) < 0 ) ? -(100) : (100)))))) ? (var_1_14) : ((((((var_1_16) < (var_1_11)) ? (var_1_16) : (var_1_11))) - ((((100) < 0 ) ? -(100) : (100))))))))) : (var_1_40 == ((signed short int) (var_1_31 + var_1_6)))) : (var_1_40 == ((signed short int) (5 - (var_1_29 + var_1_14))))) : (var_1_40 == ((signed short int) ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))))) && (var_1_41 == ((unsigned long int) (var_1_29 + var_1_16)))) && ((var_1_81 && var_1_98) ? (var_1_42 == ((float) ((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))))) : (var_1_42 == ((float) (((((var_1_43 + var_1_23) + 31.25f) < 0 ) ? -((var_1_43 + var_1_23) + 31.25f) : ((var_1_43 + var_1_23) + 31.25f))))))) && ((((var_1_74 / var_1_10) < ((((var_1_41) > (var_1_29)) ? (var_1_41) : (var_1_29)))) || (var_1_24 >= ((((var_1_43) > (var_1_23)) ? (var_1_43) : (var_1_23))))) ? ((! var_1_60) ? (var_1_44 == ((signed char) (var_1_29 - 1))) : (var_1_44 == ((signed char) var_1_29))) : (var_1_44 == ((signed char) ((((var_1_30) < (((var_1_45 + var_1_46) - var_1_29))) ? (var_1_30) : (((var_1_45 + var_1_46) - var_1_29)))))))) && ((var_1_52 <= var_1_18) ? (var_1_47 == ((signed char) ((((var_1_29) < ((var_1_45 - var_1_46))) ? (var_1_29) : ((var_1_45 - var_1_46)))))) : (var_1_47 == ((signed char) ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29))))))) && (var_1_48 == ((unsigned char) (var_1_49 || ((! var_1_50) || (! var_1_51)))))) && (((((((var_1_29) > (var_1_45)) ? (var_1_29) : (var_1_45))) - (64 - var_1_46)) == var_1_7) ? ((var_1_22 < (4.8f + var_1_20)) ? (((var_1_101 / var_1_10) >= var_1_13) ? (var_1_52 == ((unsigned long int) (var_1_27 - var_1_14))) : (var_1_52 == ((unsigned long int) ((((((((var_1_45) > (var_1_46)) ? (var_1_45) : (var_1_46)))) < (((((var_1_15) > (100u)) ? (var_1_15) : (100u))))) ? (((((var_1_45) > (var_1_46)) ? (var_1_45) : (var_1_46)))) : (((((var_1_15) > (100u)) ? (var_1_15) : (100u))))))))) : (var_1_52 == ((unsigned long int) ((((var_1_46) < (var_1_29)) ? (var_1_46) : (var_1_29)))))) : ((var_1_48 && ((- var_1_27) == ((((var_1_95) < (128u)) ? (var_1_95) : (128u))))) ? ((var_1_10 == var_1_16) ? (var_1_52 == ((unsigned long int) (var_1_27 - (var_1_38 - (var_1_53 - var_1_12))))) : 1) : (var_1_52 == ((unsigned long int) (((((((var_1_53) > (var_1_38)) ? (var_1_53) : (var_1_38))) < 0 ) ? -((((var_1_53) > (var_1_38)) ? (var_1_53) : (var_1_38))) : ((((var_1_53) > (var_1_38)) ? (var_1_53) : (var_1_38)))))))))) && ((var_1_52 == var_1_31) ? (var_1_54 == ((unsigned short int) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) : ((var_1_7 <= (var_1_46 - var_1_45)) ? (((var_1_74 * var_1_103) > var_1_32) ? (var_1_54 == ((unsigned short int) var_1_13)) : 1) : (var_1_54 == ((unsigned short int) (var_1_55 - var_1_11)))))) && (((var_1_15 >= (var_1_95 % var_1_12)) || var_1_60) ? ((var_1_60 && var_1_50) ? (var_1_56 == ((float) var_1_20)) : (var_1_56 == ((float) (((((var_1_36 - var_1_20)) < (((((var_1_43) < (var_1_21)) ? (var_1_43) : (var_1_21))))) ? ((var_1_36 - var_1_20)) : (((((var_1_43) < (var_1_21)) ? (var_1_43) : (var_1_21))))))))) : 1)) && (var_1_48 ? (((((((var_1_105) < (var_1_91)) ? (var_1_105) : (var_1_91))) + var_1_24) == (- var_1_20)) ? ((var_1_91 < var_1_72) ? (var_1_57 == ((signed short int) ((((var_1_70) > (var_1_94)) ? (var_1_70) : (var_1_94))))) : (var_1_57 == ((signed short int) ((((var_1_16) < (var_1_70)) ? (var_1_16) : (var_1_70)))))) : (var_1_57 == ((signed short int) ((100 - var_1_45) + var_1_13)))) : (var_1_57 == ((signed short int) ((((var_1_12 - var_1_14) < 0 ) ? -(var_1_12 - var_1_14) : (var_1_12 - var_1_14))))))) && ((var_1_57 > var_1_30) ? (var_1_59 == ((signed short int) ((((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))) + var_1_73) + var_1_6))) : (var_1_59 == ((signed short int) (var_1_46 - var_1_12))))) && (((var_1_22 + (var_1_105 * var_1_24)) == ((var_1_72 + var_1_109) / var_1_26)) ? ((((var_1_13 / var_1_10) + var_1_30) >= var_1_7) ? ((var_1_20 >= var_1_26) ? (var_1_60 == ((unsigned char) (var_1_61 || (var_1_49 || var_1_62)))) : (((var_1_91 != var_1_42) && var_1_98) ? (var_1_60 == ((unsigned char) (var_1_98 && var_1_62))) : (var_1_60 == ((unsigned char) (var_1_50 && ((16 > var_1_32) || var_1_51)))))) : (var_1_60 == ((unsigned char) (var_1_62 || var_1_61)))) : (((var_1_103 | var_1_108) < ((var_1_106 * var_1_104) / ((((var_1_12) > (var_1_55)) ? (var_1_12) : (var_1_55))))) ? (var_1_60 == ((unsigned char) (var_1_98 || var_1_50))) : 1))) && (((var_1_45 * var_1_84) >= var_1_13) ? (var_1_63 == ((unsigned char) (var_1_51 || (var_1_49 || var_1_50)))) : (var_1_63 == ((unsigned char) (! (var_1_48 && (! var_1_51))))))) && (((- var_1_99) >= var_1_72) ? (var_1_64 == ((unsigned char) (((((((((var_1_65 - var_1_46)) < (var_1_45)) ? ((var_1_65 - var_1_46)) : (var_1_45)))) < ((var_1_66 - var_1_29))) ? ((((((var_1_65 - var_1_46)) < (var_1_45)) ? ((var_1_65 - var_1_46)) : (var_1_45)))) : ((var_1_66 - var_1_29)))))) : (var_1_64 == ((unsigned char) (((((var_1_65 - (64 - var_1_46))) < (25)) ? ((var_1_65 - (64 - var_1_46))) : (25))))))) && ((var_1_18 != var_1_39) ? (var_1_67 == ((unsigned char) (! (var_1_61 || var_1_49)))) : (var_1_67 == ((unsigned char) ((! var_1_50) || (! var_1_51)))))) && ((var_1_13 < (var_1_83 / var_1_11)) ? (var_1_68 == ((signed long int) ((((var_1_83) < 0 ) ? -(var_1_83) : (var_1_83))))) : (var_1_68 == ((signed long int) (((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45))) + (((((var_1_46 + var_1_69)) < (((((var_1_11) > (var_1_107)) ? (var_1_11) : (var_1_107))))) ? ((var_1_46 + var_1_69)) : (((((var_1_11) > (var_1_107)) ? (var_1_11) : (var_1_107))))))))))) && ((var_1_81 && (last_1_var_1_70 <= var_1_106)) ? (var_1_70 == ((unsigned char) ((((var_1_66) < (var_1_29)) ? (var_1_66) : (var_1_29))))) : (var_1_70 == ((unsigned char) (var_1_45 + 16))))) && ((var_1_32 > (var_1_16 - ((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))))) ? ((var_1_45 < var_1_38) ? (var_1_72 == ((double) var_1_22)) : 1) : 1)) && (((- (var_1_24 * var_1_43)) != (var_1_105 * var_1_91)) ? (var_1_73 == ((signed short int) (var_1_45 + ((((var_1_46) > (var_1_47)) ? (var_1_46) : (var_1_47)))))) : 1)) && (((((((var_1_36) > (var_1_23)) ? (var_1_36) : (var_1_23))) + (var_1_21 * var_1_20)) == var_1_109) ? (var_1_74 == ((signed long int) (var_1_108 + (var_1_12 + var_1_15)))) : (var_1_74 == ((signed long int) (((((((var_1_55 - var_1_16) < 0 ) ? -(var_1_55 - var_1_16) : (var_1_55 - var_1_16))) < 0 ) ? -((((var_1_55 - var_1_16) < 0 ) ? -(var_1_55 - var_1_16) : (var_1_55 - var_1_16))) : ((((var_1_55 - var_1_16) < 0 ) ? -(var_1_55 - var_1_16) : (var_1_55 - var_1_16))))))))) && (((var_1_45 | (var_1_27 - var_1_66)) <= (- var_1_55)) ? (var_1_75 == ((float) (((((((((var_1_21) > (var_1_36)) ? (var_1_21) : (var_1_36)))) < (var_1_20)) ? (((((var_1_21) > (var_1_36)) ? (var_1_21) : (var_1_36)))) : (var_1_20))) - ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < ((var_1_76 - var_1_77))) ? (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : ((var_1_76 - var_1_77))))))) : (var_1_75 == ((float) (var_1_36 - var_1_77))))) && ((-32 < (var_1_13 << ((((var_1_79) < 0 ) ? -(var_1_79) : (var_1_79))))) ? (var_1_78 == ((signed long int) ((var_1_80 - (1000000000 - var_1_11)) - ((((var_1_16) > (var_1_45)) ? (var_1_16) : (var_1_45)))))) : 1)) && ((var_1_11 >= last_1_var_1_95) ? ((last_1_var_1_32 < last_1_var_1_18) ? (var_1_81 == ((unsigned char) (var_1_51 && (! (! var_1_50))))) : (var_1_81 == ((unsigned char) var_1_51))) : (var_1_81 == ((unsigned char) var_1_50)))) && (var_1_83 == ((signed long int) var_1_32))) && (var_1_84 == ((signed short int) (-1 + (var_1_65 + ((((var_1_46) < (var_1_103)) ? (var_1_46) : (var_1_103)))))))) && (((-1 + var_1_6) <= last_1_var_1_85) ? ((var_1_23 >= (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) - ((((var_1_99) < 0 ) ? -(var_1_99) : (var_1_99))))) ? (var_1_85 == ((signed long int) (var_1_30 + var_1_45))) : (var_1_85 == ((signed long int) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) : (var_1_85 == ((signed long int) ((var_1_12 + var_1_57) - var_1_16))))) && ((var_1_91 >= var_1_105) ? ((var_1_106 < (- var_1_66)) ? (var_1_87 == ((signed char) ((var_1_88 - var_1_45) - var_1_46))) : (var_1_87 == ((signed char) ((((((((var_1_79) < (((((var_1_46) < (var_1_88)) ? (var_1_46) : (var_1_88))))) ? (var_1_79) : (((((var_1_46) < (var_1_88)) ? (var_1_46) : (var_1_88))))))) < (-16)) ? (((((var_1_79) < (((((var_1_46) < (var_1_88)) ? (var_1_46) : (var_1_88))))) ? (var_1_79) : (((((var_1_46) < (var_1_88)) ? (var_1_46) : (var_1_88))))))) : (-16)))))) : (var_1_87 == ((signed char) var_1_31)))) && (var_1_67 ? (var_1_89 == ((double) (var_1_90 + (var_1_43 + var_1_20)))) : (var_1_89 == ((double) (var_1_43 + var_1_23))))) && ((-64 >= (var_1_79 * var_1_80)) ? (var_1_91 == ((double) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : (((var_1_46 / var_1_92) != (var_1_80 >> var_1_93)) ? (var_1_91 == ((double) var_1_43)) : 1))) && (var_1_48 ? (var_1_94 == ((unsigned char) var_1_93)) : (var_1_94 == ((unsigned char) var_1_65)))) && (var_1_98 ? (var_1_95 == ((unsigned long int) var_1_79)) : 1)) && (var_1_97 == ((signed long int) var_1_88))) && (var_1_98 == ((unsigned char) var_1_51))) && (var_1_48 ? (var_1_99 == ((float) var_1_90)) : 1)) && (var_1_98 ? (var_1_100 == ((unsigned char) var_1_88)) : (var_1_100 == ((unsigned char) var_1_29)))) && (var_1_60 ? (var_1_101 == ((unsigned char) 8)) : (var_1_101 == ((unsigned char) var_1_79)))) && (var_1_102 == ((signed char) var_1_88))) && (var_1_81 ? (var_1_103 == ((signed long int) var_1_92)) : (var_1_103 == ((signed long int) var_1_27)))) && (var_1_104 == ((signed long int) var_1_66))) && (var_1_105 == ((double) var_1_36))) && (var_1_48 ? (var_1_106 == ((unsigned long int) var_1_80)) : (var_1_106 == ((unsigned long int) var_1_29)))) && (var_1_107 == ((signed char) var_1_93))) && (var_1_108 == ((signed short int) (last_1_var_1_108 - (var_1_93 + ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))))))) && ((((- var_1_37) * (var_1_20 - var_1_76)) <= var_1_105) ? (var_1_109 == ((float) var_1_24)) : (var_1_109 == ((float) var_1_43)))
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

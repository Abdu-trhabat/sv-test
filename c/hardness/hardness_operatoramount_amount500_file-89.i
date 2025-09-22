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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch89Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 128;
unsigned long int var_1_5 = 2082256544;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 1832746635;
unsigned long int var_1_8 = 1000;
unsigned long int var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
float var_1_13 = 9.5;
float var_1_14 = 100.75;
float var_1_15 = 7.4;
float var_1_16 = 10.625;
unsigned long int var_1_17 = 4;
unsigned long int var_1_18 = 50;
unsigned long int var_1_19 = 2305451248;
unsigned char var_1_20 = 32;
signed short int var_1_21 = 5;
unsigned char var_1_22 = 8;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 0;
unsigned char var_1_26 = 128;
unsigned long int var_1_27 = 64;
signed long int var_1_28 = 256;
float var_1_29 = 7.75;
float var_1_30 = 5.8;
unsigned long int var_1_31 = 8;
signed long int var_1_32 = 1294200269;
signed long int var_1_33 = -128;
float var_1_34 = 9.25;
float var_1_35 = 4.25;
unsigned char var_1_36 = 1;
unsigned char var_1_38 = 0;
signed char var_1_39 = 5;
signed char var_1_40 = 0;
unsigned long int var_1_41 = 32;
unsigned short int var_1_42 = 8;
unsigned short int var_1_43 = 10000;
unsigned short int var_1_44 = 10000;
signed short int var_1_45 = -5;
float var_1_46 = 9999999999.75;
signed short int var_1_47 = 30745;
signed short int var_1_48 = 24825;
signed long int var_1_49 = 32;
unsigned char var_1_50 = 10;
float var_1_51 = 0.0;
unsigned char var_1_52 = 2;
signed char var_1_53 = -8;
signed long int var_1_54 = 4;
double var_1_55 = 7.4;
double var_1_56 = 999999.4;
double var_1_57 = 63.8;
signed short int var_1_58 = 64;
unsigned char var_1_59 = 10;
signed long int var_1_60 = -2;
signed short int var_1_61 = 200;
signed char var_1_62 = 64;
unsigned long int var_1_63 = 1;
unsigned long int var_1_64 = 0;
signed char var_1_65 = 64;
signed char var_1_66 = 100;
unsigned long int var_1_67 = 5;
unsigned char var_1_70 = 1;
signed short int var_1_71 = -10;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
float var_1_76 = 256.75;
float var_1_77 = 1000000000000000.8;
unsigned char var_1_78 = 100;
unsigned char var_1_79 = 128;
double var_1_80 = 64.625;
unsigned short int var_1_82 = 64;
unsigned short int var_1_83 = 25079;
unsigned char var_1_84 = 64;
signed long int var_1_85 = 5;
unsigned char var_1_86 = 0;
unsigned long int var_1_87 = 4;
unsigned char var_1_88 = 8;
unsigned short int var_1_89 = 0;
unsigned char var_1_90 = 1;
signed char var_1_91 = 1;
signed char var_1_92 = 16;
signed char var_1_93 = -16;
float var_1_94 = 100.25;
signed short int var_1_95 = -32;
double var_1_96 = 4.375;
unsigned short int var_1_97 = 8;
unsigned char var_1_98 = 50;
unsigned long int last_1_var_1_1 = 128;
unsigned long int last_1_var_1_6 = 32;
unsigned long int last_1_var_1_17 = 4;
unsigned char last_1_var_1_20 = 32;
unsigned long int last_1_var_1_27 = 64;
signed long int last_1_var_1_49 = 32;
double last_1_var_1_55 = 7.4;
signed long int last_1_var_1_60 = -2;
unsigned long int last_1_var_1_67 = 5;
unsigned char last_1_var_1_70 = 1;
signed long int last_1_var_1_85 = 5;
unsigned short int last_1_var_1_89 = 0;
unsigned char last_1_var_1_90 = 1;
signed short int last_1_var_1_95 = -32;
double last_1_var_1_96 = 4.375;
void initially(void) {
}
void step(void) {
 if (var_1_11 || (last_1_var_1_67 > var_1_47)) {
  if (-5 < (var_1_64 * var_1_9)) {
   var_1_72 = (var_1_38 || (var_1_73 || var_1_74));
  } else {
   if ((last_1_var_1_6 < (var_1_22 & last_1_var_1_49)) && (last_1_var_1_17 < var_1_23)) {
    if (var_1_29 >= (last_1_var_1_96 / var_1_51)) {
     var_1_72 = (var_1_11 && var_1_12);
    } else {
     var_1_72 = (var_1_11 || var_1_12);
    }
   }
  }
 } else {
  var_1_72 = var_1_75;
 }
 if ((last_1_var_1_27 >= var_1_9) && (((((-2) < (var_1_5)) ? (-2) : (var_1_5))) < last_1_var_1_85)) {
  var_1_17 = (var_1_5 + (var_1_8 + ((((var_1_9) < (var_1_18)) ? (var_1_9) : (var_1_18)))));
 } else {
  if (last_1_var_1_55 == var_1_16) {
   if (last_1_var_1_70) {
    var_1_17 = (((((var_1_19) < ((var_1_5 + var_1_7))) ? (var_1_19) : ((var_1_5 + var_1_7)))) - 256u);
   }
  } else {
   var_1_17 = (var_1_18 + (((((var_1_7) < (var_1_5)) ? (var_1_7) : (var_1_5))) - var_1_9));
  }
 }
 signed long int stepLocal_13 = last_1_var_1_60;
 if (stepLocal_13 < (var_1_9 / var_1_43)) {
  var_1_49 = var_1_22;
 } else {
  var_1_49 = var_1_26;
 }
 unsigned long int stepLocal_5 = var_1_18;
 if (stepLocal_5 >= ((last_1_var_1_1 * var_1_9) / var_1_7)) {
  var_1_27 = var_1_18;
 } else {
  var_1_27 = (((((var_1_22) > (last_1_var_1_20)) ? (var_1_22) : (last_1_var_1_20))) + var_1_9);
 }
 signed long int stepLocal_4 = -500;
 if (stepLocal_4 >= (var_1_27 * (var_1_8 ^ var_1_7))) {
  var_1_13 = (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_15);
 } else {
  var_1_13 = ((((var_1_15 + var_1_16) < 0 ) ? -(var_1_15 + var_1_16) : (var_1_15 + var_1_16)));
 }
 unsigned long int stepLocal_0 = last_1_var_1_6;
 if (last_1_var_1_1 != stepLocal_0) {
  if (last_1_var_1_90) {
   var_1_1 = ((var_1_5 + 1668503833u) - (50u + 256u));
  }
 }
 var_1_34 = ((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (((var_1_35 + 9.204f) + var_1_16))) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (((var_1_35 + 9.204f) + var_1_16))));
 var_1_42 = (((var_1_43 + var_1_44) - var_1_31) + var_1_24);
 if (! var_1_12) {
  if (var_1_52 >= (var_1_26 - var_1_24)) {
   var_1_55 = ((((9.999999999999975E13) > ((var_1_56 - var_1_57))) ? (9.999999999999975E13) : ((var_1_56 - var_1_57))));
  }
 } else {
  var_1_55 = ((((var_1_16) > (var_1_57)) ? (var_1_16) : (var_1_57)));
 }
 var_1_59 = (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))) + var_1_24);
 if (var_1_38) {
  var_1_88 = var_1_31;
 } else {
  var_1_88 = var_1_63;
 }
 if (var_1_12) {
  var_1_89 = last_1_var_1_89;
 } else {
  var_1_89 = var_1_52;
 }
 if (var_1_75) {
  var_1_90 = var_1_38;
 }
 if (var_1_90) {
  var_1_93 = var_1_64;
 } else {
  var_1_93 = var_1_63;
 }
 if (var_1_74) {
  var_1_94 = 3.8f;
 } else {
  var_1_94 = 3.75f;
 }
 var_1_95 = last_1_var_1_95;
 var_1_96 = var_1_57;
 var_1_97 = (((((51806) < 0 ) ? -(51806) : (51806))) - (var_1_48 - ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64)))));
 unsigned char stepLocal_2 = var_1_90;
 unsigned long int stepLocal_1 = var_1_5;
 if (var_1_17 > stepLocal_1) {
  if ((var_1_5 < var_1_17) || stepLocal_2) {
   var_1_6 = (((var_1_7 + 1924803778u) - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))) - var_1_5);
  }
 }
 unsigned char stepLocal_31 = (var_1_47 + var_1_7) == var_1_26;
 if (stepLocal_31 && var_1_74) {
  if (! (var_1_13 == (- var_1_51))) {
   var_1_87 = ((var_1_5 - var_1_66) + var_1_17);
  } else {
   var_1_87 = ((((((((var_1_64) < (var_1_24)) ? (var_1_64) : (var_1_24)))) > (var_1_17)) ? (((((var_1_64) < (var_1_24)) ? (var_1_64) : (var_1_24)))) : (var_1_17)));
  }
 } else {
  var_1_87 = var_1_24;
 }
 if (! (var_1_51 == var_1_77)) {
  if (var_1_48 != var_1_6) {
   var_1_86 = (! var_1_38);
  }
 } else {
  var_1_86 = (! (var_1_12 && var_1_75));
 }
 if (var_1_11) {
  if (! var_1_86) {
   var_1_70 = var_1_12;
  }
 } else {
  if (! (var_1_26 <= var_1_5)) {
   var_1_70 = var_1_38;
  }
 }
 unsigned long int stepLocal_18 = ((((var_1_18 << var_1_93)) > (((((16u) < (var_1_1)) ? (16u) : (var_1_1))))) ? ((var_1_18 << var_1_93)) : (((((16u) < (var_1_1)) ? (16u) : (var_1_1)))));
 unsigned char stepLocal_17 = var_1_14 != (var_1_46 + var_1_29);
 unsigned long int stepLocal_16 = var_1_18;
 if (var_1_27 >= stepLocal_18) {
  if (var_1_72 && stepLocal_17) {
   if (stepLocal_16 >= var_1_48) {
    var_1_54 = (var_1_24 - var_1_59);
   } else {
    var_1_54 = (((((var_1_43) > ((var_1_52 + var_1_59))) ? (var_1_43) : ((var_1_52 + var_1_59)))) - ((((1000000) < (var_1_31)) ? (1000000) : (var_1_31))));
   }
  } else {
   var_1_54 = (var_1_18 + -1000000000);
  }
 }
 if (var_1_11) {
  if (var_1_72) {
   var_1_60 = ((((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < 0 ) ? -((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) : ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) - ((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24))));
  } else {
   var_1_60 = (var_1_22 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))));
  }
 } else {
  if (var_1_27 != var_1_87) {
   var_1_60 = (var_1_21 + -4);
  } else {
   var_1_60 = (((((var_1_97 + ((((var_1_54) > (var_1_47)) ? (var_1_54) : (var_1_47))))) < ((var_1_21 - 2))) ? ((var_1_97 + ((((var_1_54) > (var_1_47)) ? (var_1_54) : (var_1_47))))) : ((var_1_21 - 2))));
  }
 }
 unsigned char stepLocal_3 = var_1_86;
 if ((var_1_7 > var_1_9) && stepLocal_3) {
  var_1_10 = (var_1_11 && var_1_12);
 }
 unsigned long int stepLocal_9 = ((((- var_1_1)) < ((var_1_19 - 4u))) ? ((- var_1_1)) : ((var_1_19 - 4u)));
 unsigned long int stepLocal_8 = (((var_1_32) > (var_1_8)) ? (var_1_32) : (var_1_8));
 if (var_1_31 <= stepLocal_9) {
  if (var_1_5 <= stepLocal_8) {
   var_1_33 = (var_1_9 - var_1_26);
  } else {
   if (var_1_96 < var_1_29) {
    var_1_33 = (var_1_32 - var_1_31);
   } else {
    var_1_33 = -5;
   }
  }
 } else {
  var_1_33 = var_1_23;
 }
 if (var_1_27 <= var_1_21) {
  if (! var_1_12) {
   var_1_36 = var_1_11;
  }
 } else {
  var_1_36 = (var_1_10 && var_1_38);
 }
 unsigned char stepLocal_14 = var_1_26;
 if (((var_1_51 - 99.6f) - ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) < (- var_1_14)) {
  if (stepLocal_14 >= (- (var_1_60 / var_1_21))) {
   var_1_50 = (var_1_23 + var_1_52);
  }
 } else {
  var_1_50 = var_1_26;
 }
 signed long int stepLocal_15 = var_1_32;
 if (((var_1_23 * var_1_17) * (var_1_17 + var_1_54)) < stepLocal_15) {
  var_1_53 = (var_1_21 + var_1_31);
 } else {
  var_1_53 = (var_1_21 - var_1_31);
 }
 signed char stepLocal_23 = var_1_40;
 signed long int stepLocal_22 = 100;
 signed long int stepLocal_21 = var_1_23 << (var_1_63 + var_1_64);
 if (stepLocal_21 >= var_1_44) {
  if (var_1_6 >= stepLocal_22) {
   var_1_62 = (var_1_21 + ((((var_1_31) > (var_1_64)) ? (var_1_31) : (var_1_64))));
  } else {
   if (stepLocal_23 > var_1_60) {
    var_1_62 = ((var_1_64 + var_1_21) - var_1_24);
   } else {
    if (var_1_51 > var_1_14) {
     var_1_62 = (var_1_64 - (((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) - var_1_31));
    } else {
     var_1_62 = (100 - (((((var_1_66) > (var_1_65)) ? (var_1_66) : (var_1_65))) - var_1_31));
    }
   }
  }
 } else {
  var_1_62 = (var_1_64 + var_1_31);
 }
 if (var_1_70) {
  var_1_76 = (var_1_56 - var_1_57);
 } else {
  var_1_76 = (var_1_57 - ((((var_1_56) < (var_1_77)) ? (var_1_56) : (var_1_77))));
 }
 signed long int stepLocal_26 = - var_1_33;
 if (stepLocal_26 >= 1) {
  var_1_78 = (((((((((((var_1_66) > (2)) ? (var_1_66) : (2))) < 0 ) ? -((((var_1_66) > (2)) ? (var_1_66) : (2))) : ((((var_1_66) > (2)) ? (var_1_66) : (2)))))) < ((var_1_79 - var_1_23))) ? ((((((((var_1_66) > (2)) ? (var_1_66) : (2))) < 0 ) ? -((((var_1_66) > (2)) ? (var_1_66) : (2))) : ((((var_1_66) > (2)) ? (var_1_66) : (2)))))) : ((var_1_79 - var_1_23))));
 }
 signed long int stepLocal_28 = var_1_54;
 unsigned long int stepLocal_27 = var_1_19 / var_1_21;
 if ((var_1_6 % ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44)))) > stepLocal_28) {
  var_1_80 = (((((((var_1_56) < (var_1_15)) ? (var_1_56) : (var_1_15))) < 0 ) ? -((((var_1_56) < (var_1_15)) ? (var_1_56) : (var_1_15))) : ((((var_1_56) < (var_1_15)) ? (var_1_56) : (var_1_15)))));
 } else {
  if (stepLocal_27 < var_1_60) {
   var_1_80 = (var_1_15 + var_1_14);
  } else {
   var_1_80 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
  }
 }
 if (var_1_11) {
  if ((var_1_5 * var_1_78) >= var_1_17) {
   if (var_1_65 != ((var_1_64 >> 16) ^ var_1_6)) {
    var_1_84 = var_1_63;
   } else {
    var_1_84 = ((((var_1_21) > ((var_1_79 - var_1_64))) ? (var_1_21) : ((var_1_79 - var_1_64))));
   }
  }
 }
 if (var_1_70) {
  var_1_91 = var_1_92;
 }
 if ((var_1_30 / var_1_51) < (var_1_76 * var_1_29)) {
  if (-32 <= var_1_84) {
   var_1_98 = var_1_64;
  }
 } else {
  var_1_98 = 8;
 }
 unsigned long int stepLocal_30 = var_1_87 % ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 if (stepLocal_30 < var_1_97) {
  var_1_85 = ((((var_1_65) > (var_1_49)) ? (var_1_65) : (var_1_49)));
 }
 unsigned long int stepLocal_7 = var_1_1;
 signed long int stepLocal_6 = (var_1_26 - var_1_23) >> var_1_31;
 if (var_1_11) {
  if ((((((var_1_29 - var_1_30)) > (var_1_16)) ? ((var_1_29 - var_1_30)) : (var_1_16))) > var_1_96) {
   if (stepLocal_7 < (var_1_9 ^ var_1_49)) {
    if (stepLocal_6 <= var_1_21) {
     var_1_28 = ((((var_1_26) < (-8)) ? (var_1_26) : (-8)));
    } else {
     if (! var_1_12) {
      var_1_28 = ((((var_1_85) > (var_1_26)) ? (var_1_85) : (var_1_26)));
     }
    }
   } else {
    var_1_28 = ((((((var_1_32 - var_1_21)) > (var_1_22)) ? ((var_1_32 - var_1_21)) : (var_1_22))) - (((((var_1_26) < (var_1_31)) ? (var_1_26) : (var_1_31))) + var_1_8));
   }
  } else {
   var_1_28 = ((((((((var_1_18) < ((var_1_9 + var_1_31))) ? (var_1_18) : ((var_1_9 + var_1_31))))) < (((((var_1_22) > (200)) ? (var_1_22) : (200))))) ? (((((var_1_18) < ((var_1_9 + var_1_31))) ? (var_1_18) : ((var_1_9 + var_1_31))))) : (((((var_1_22) > (200)) ? (var_1_22) : (200))))));
  }
 }
 if (var_1_35 >= var_1_94) {
  var_1_41 = var_1_8;
 } else {
  var_1_41 = (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) + var_1_22);
 }
 unsigned long int stepLocal_24 = var_1_8 | (var_1_49 * var_1_42);
 if (var_1_11) {
  if (stepLocal_24 <= (4u / var_1_65)) {
   var_1_67 = (16u + 100000000u);
  } else {
   if (var_1_72) {
    var_1_67 = (var_1_23 + var_1_21);
   }
  }
 } else {
  var_1_67 = (((((var_1_19 - var_1_7)) > ((var_1_47 + var_1_85))) ? ((var_1_19 - var_1_7)) : ((var_1_47 + var_1_85))));
 }
 if ((var_1_11 || (var_1_14 > 15.3f)) || (var_1_1 == (8u >> var_1_21))) {
  if (var_1_6 > var_1_8) {
   var_1_20 = (((((var_1_21 + var_1_22)) > ((var_1_23 + (var_1_24 + 4)))) ? ((var_1_21 + var_1_22)) : ((var_1_23 + (var_1_24 + 4)))));
  }
 } else {
  if (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) == var_1_41) {
   if (! (var_1_12 && var_1_10)) {
    var_1_20 = (var_1_26 - 10);
   } else {
    var_1_20 = ((((5) < 0 ) ? -(5) : (5)));
   }
  } else {
   var_1_20 = (var_1_23 + var_1_22);
  }
 }
 unsigned char stepLocal_12 = var_1_12;
 unsigned long int stepLocal_11 = var_1_27 * (var_1_41 + 32u);
 unsigned char stepLocal_10 = var_1_11;
 if (var_1_9 <= stepLocal_11) {
  if (((7.625f / var_1_46) * (var_1_29 - var_1_30)) <= var_1_35) {
   if ((! (128u == var_1_6)) && stepLocal_12) {
    var_1_45 = (((((var_1_43 - (26692 - 8))) > (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))))) ? ((var_1_43 - (26692 - 8))) : (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))))));
   } else {
    var_1_45 = (var_1_44 + var_1_24);
   }
  }
 } else {
  if (var_1_16 < var_1_35) {
   if (stepLocal_10 && var_1_90) {
    var_1_45 = ((((var_1_54) > (((var_1_47 - 2) - (var_1_48 - var_1_26)))) ? (var_1_54) : (((var_1_47 - 2) - (var_1_48 - var_1_26)))));
   }
  } else {
   var_1_45 = (var_1_26 - (var_1_20 + var_1_22));
  }
 }
 if (var_1_31 >= (var_1_52 / var_1_44)) {
  var_1_58 = ((((((((1000) > (var_1_45)) ? (1000) : (var_1_45))) < 0 ) ? -((((1000) > (var_1_45)) ? (1000) : (var_1_45))) : ((((1000) > (var_1_45)) ? (1000) : (var_1_45))))) + (((((var_1_24 + var_1_95)) > (-1)) ? ((var_1_24 + var_1_95)) : (-1))));
 }
 signed long int stepLocal_20 = ((((var_1_28) < (var_1_44)) ? (var_1_28) : (var_1_44))) * var_1_85;
 unsigned long int stepLocal_19 = var_1_1;
 if ((var_1_5 * 10u) > stepLocal_19) {
  if ((var_1_57 / var_1_51) <= var_1_56) {
   var_1_61 = ((((((((var_1_48) < (var_1_44)) ? (var_1_48) : (var_1_44)))) > (var_1_49)) ? (((((var_1_48) < (var_1_44)) ? (var_1_48) : (var_1_44)))) : (var_1_49)));
  } else {
   var_1_61 = (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) + ((var_1_22 + var_1_52) - ((((var_1_26) < (var_1_20)) ? (var_1_26) : (var_1_20)))));
  }
 } else {
  if (stepLocal_20 <= var_1_49) {
   var_1_61 = ((((((((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) < (var_1_58)) ? (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) : (var_1_58)))) < (-1000)) ? (((((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) < (var_1_58)) ? (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) : (var_1_58)))) : (-1000)));
  } else {
   var_1_61 = (((((-8) < 0 ) ? -(-8) : (-8))) - var_1_24);
  }
 }
 unsigned long int stepLocal_25 = var_1_7 / ((((var_1_66) < (var_1_48)) ? (var_1_66) : (var_1_48)));
 if (stepLocal_25 <= var_1_26) {
  var_1_71 = ((((var_1_67) > (var_1_31)) ? (var_1_67) : (var_1_31)));
 }
 unsigned char stepLocal_29 = (- 16) >= ((((var_1_6) < (var_1_17)) ? (var_1_6) : (var_1_17)));
 if ((var_1_33 >= var_1_43) || stepLocal_29) {
  var_1_82 = ((((var_1_33 + (var_1_65 + var_1_31)) < 0 ) ? -(var_1_33 + (var_1_65 + var_1_31)) : (var_1_33 + (var_1_65 + var_1_31))));
 } else {
  var_1_82 = ((var_1_48 + (var_1_83 - var_1_20)) - 10);
 }
 if (var_1_87 >= var_1_61) {
  if ((- (var_1_29 - var_1_30)) > var_1_15) {
   var_1_39 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
  }
 } else {
  var_1_39 = (var_1_24 - ((((var_1_31) > (var_1_21)) ? (var_1_31) : (var_1_21))));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 1073741823);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1610612735);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1073741823);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 31);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 64);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 127);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 30);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= 1073741822);
 assume_abort_if_not(var_1_32 <= 2147483646);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -126);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 8191);
 assume_abort_if_not(var_1_43 <= 16384);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 8192);
 assume_abort_if_not(var_1_44 <= 16383);
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 assume_abort_if_not(var_1_46 != 0.0F);
 var_1_47 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_47 >= 16382);
 assume_abort_if_not(var_1_47 <= 32766);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= 16383);
 assume_abort_if_not(var_1_48 <= 32766);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 4611686.018427388000e+12F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 127);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 1);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 0);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 63);
 assume_abort_if_not(var_1_65 <= 126);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= 63);
 assume_abort_if_not(var_1_66 <= 126);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 0);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 0);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 1);
 assume_abort_if_not(var_1_75 <= 1);
 var_1_77 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854766000e+12F && var_1_77 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 127);
 assume_abort_if_not(var_1_79 <= 254);
 var_1_83 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_83 >= 24575);
 assume_abort_if_not(var_1_83 <= 32767);
 var_1_92 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_92 >= -127);
 assume_abort_if_not(var_1_92 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_70 = var_1_70;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_96 = var_1_96;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_1 != last_1_var_1_6) ? (last_1_var_1_90 ? (var_1_1 == ((unsigned long int) ((var_1_5 + 1668503833u) - (50u + 256u)))) : 1) : 1) && ((var_1_17 > var_1_5) ? (((var_1_5 < var_1_17) || var_1_90) ? (var_1_6 == ((unsigned long int) (((var_1_7 + 1924803778u) - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))) - var_1_5))) : 1) : 1)) && (((var_1_7 > var_1_9) && var_1_86) ? (var_1_10 == ((unsigned char) (var_1_11 && var_1_12))) : 1)) && ((-500 >= (var_1_27 * (var_1_8 ^ var_1_7))) ? (var_1_13 == ((float) (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_15))) : (var_1_13 == ((float) ((((var_1_15 + var_1_16) < 0 ) ? -(var_1_15 + var_1_16) : (var_1_15 + var_1_16))))))) && (((last_1_var_1_27 >= var_1_9) && (((((-2) < (var_1_5)) ? (-2) : (var_1_5))) < last_1_var_1_85)) ? (var_1_17 == ((unsigned long int) (var_1_5 + (var_1_8 + ((((var_1_9) < (var_1_18)) ? (var_1_9) : (var_1_18))))))) : ((last_1_var_1_55 == var_1_16) ? (last_1_var_1_70 ? (var_1_17 == ((unsigned long int) (((((var_1_19) < ((var_1_5 + var_1_7))) ? (var_1_19) : ((var_1_5 + var_1_7)))) - 256u))) : 1) : (var_1_17 == ((unsigned long int) (var_1_18 + (((((var_1_7) < (var_1_5)) ? (var_1_7) : (var_1_5))) - var_1_9))))))) && (((var_1_11 || (var_1_14 > 15.3f)) || (var_1_1 == (8u >> var_1_21))) ? ((var_1_6 > var_1_8) ? (var_1_20 == ((unsigned char) (((((var_1_21 + var_1_22)) > ((var_1_23 + (var_1_24 + 4)))) ? ((var_1_21 + var_1_22)) : ((var_1_23 + (var_1_24 + 4))))))) : 1) : ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) == var_1_41) ? ((! (var_1_12 && var_1_10)) ? (var_1_20 == ((unsigned char) (var_1_26 - 10))) : (var_1_20 == ((unsigned char) ((((5) < 0 ) ? -(5) : (5)))))) : (var_1_20 == ((unsigned char) (var_1_23 + var_1_22)))))) && ((var_1_18 >= ((last_1_var_1_1 * var_1_9) / var_1_7)) ? (var_1_27 == ((unsigned long int) var_1_18)) : (var_1_27 == ((unsigned long int) (((((var_1_22) > (last_1_var_1_20)) ? (var_1_22) : (last_1_var_1_20))) + var_1_9))))) && (var_1_11 ? (((((((var_1_29 - var_1_30)) > (var_1_16)) ? ((var_1_29 - var_1_30)) : (var_1_16))) > var_1_96) ? ((var_1_1 < (var_1_9 ^ var_1_49)) ? ((((var_1_26 - var_1_23) >> var_1_31) <= var_1_21) ? (var_1_28 == ((signed long int) ((((var_1_26) < (-8)) ? (var_1_26) : (-8))))) : ((! var_1_12) ? (var_1_28 == ((signed long int) ((((var_1_85) > (var_1_26)) ? (var_1_85) : (var_1_26))))) : 1)) : (var_1_28 == ((signed long int) ((((((var_1_32 - var_1_21)) > (var_1_22)) ? ((var_1_32 - var_1_21)) : (var_1_22))) - (((((var_1_26) < (var_1_31)) ? (var_1_26) : (var_1_31))) + var_1_8))))) : (var_1_28 == ((signed long int) ((((((((var_1_18) < ((var_1_9 + var_1_31))) ? (var_1_18) : ((var_1_9 + var_1_31))))) < (((((var_1_22) > (200)) ? (var_1_22) : (200))))) ? (((((var_1_18) < ((var_1_9 + var_1_31))) ? (var_1_18) : ((var_1_9 + var_1_31))))) : (((((var_1_22) > (200)) ? (var_1_22) : (200))))))))) : 1)) && ((var_1_31 <= (((((- var_1_1)) < ((var_1_19 - 4u))) ? ((- var_1_1)) : ((var_1_19 - 4u))))) ? ((var_1_5 <= ((((var_1_32) > (var_1_8)) ? (var_1_32) : (var_1_8)))) ? (var_1_33 == ((signed long int) (var_1_9 - var_1_26))) : ((var_1_96 < var_1_29) ? (var_1_33 == ((signed long int) (var_1_32 - var_1_31))) : (var_1_33 == ((signed long int) -5)))) : (var_1_33 == ((signed long int) var_1_23)))) && (var_1_34 == ((float) ((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (((var_1_35 + 9.204f) + var_1_16))) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (((var_1_35 + 9.204f) + var_1_16))))))) && ((var_1_27 <= var_1_21) ? ((! var_1_12) ? (var_1_36 == ((unsigned char) var_1_11)) : 1) : (var_1_36 == ((unsigned char) (var_1_10 && var_1_38))))) && ((var_1_87 >= var_1_61) ? (((- (var_1_29 - var_1_30)) > var_1_15) ? (var_1_39 == ((signed char) ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) : 1) : (var_1_39 == ((signed char) (var_1_24 - ((((var_1_31) > (var_1_21)) ? (var_1_31) : (var_1_21)))))))) && ((var_1_35 >= var_1_94) ? (var_1_41 == ((unsigned long int) var_1_8)) : (var_1_41 == ((unsigned long int) (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) + var_1_22))))) && (var_1_42 == ((unsigned short int) (((var_1_43 + var_1_44) - var_1_31) + var_1_24)))) && ((var_1_9 <= (var_1_27 * (var_1_41 + 32u))) ? ((((7.625f / var_1_46) * (var_1_29 - var_1_30)) <= var_1_35) ? (((! (128u == var_1_6)) && var_1_12) ? (var_1_45 == ((signed short int) (((((var_1_43 - (26692 - 8))) > (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))))) ? ((var_1_43 - (26692 - 8))) : (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))))))) : (var_1_45 == ((signed short int) (var_1_44 + var_1_24)))) : 1) : ((var_1_16 < var_1_35) ? ((var_1_11 && var_1_90) ? (var_1_45 == ((signed short int) ((((var_1_54) > (((var_1_47 - 2) - (var_1_48 - var_1_26)))) ? (var_1_54) : (((var_1_47 - 2) - (var_1_48 - var_1_26))))))) : 1) : (var_1_45 == ((signed short int) (var_1_26 - (var_1_20 + var_1_22))))))) && ((last_1_var_1_60 < (var_1_9 / var_1_43)) ? (var_1_49 == ((signed long int) var_1_22)) : (var_1_49 == ((signed long int) var_1_26)))) && ((((var_1_51 - 99.6f) - ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) < (- var_1_14)) ? ((var_1_26 >= (- (var_1_60 / var_1_21))) ? (var_1_50 == ((unsigned char) (var_1_23 + var_1_52))) : 1) : (var_1_50 == ((unsigned char) var_1_26)))) && ((((var_1_23 * var_1_17) * (var_1_17 + var_1_54)) < var_1_32) ? (var_1_53 == ((signed char) (var_1_21 + var_1_31))) : (var_1_53 == ((signed char) (var_1_21 - var_1_31))))) && ((var_1_27 >= (((((var_1_18 << var_1_93)) > (((((16u) < (var_1_1)) ? (16u) : (var_1_1))))) ? ((var_1_18 << var_1_93)) : (((((16u) < (var_1_1)) ? (16u) : (var_1_1))))))) ? ((var_1_72 && (var_1_14 != (var_1_46 + var_1_29))) ? ((var_1_18 >= var_1_48) ? (var_1_54 == ((signed long int) (var_1_24 - var_1_59))) : (var_1_54 == ((signed long int) (((((var_1_43) > ((var_1_52 + var_1_59))) ? (var_1_43) : ((var_1_52 + var_1_59)))) - ((((1000000) < (var_1_31)) ? (1000000) : (var_1_31))))))) : (var_1_54 == ((signed long int) (var_1_18 + -1000000000)))) : 1)) && ((! var_1_12) ? ((var_1_52 >= (var_1_26 - var_1_24)) ? (var_1_55 == ((double) ((((9.999999999999975E13) > ((var_1_56 - var_1_57))) ? (9.999999999999975E13) : ((var_1_56 - var_1_57)))))) : 1) : (var_1_55 == ((double) ((((var_1_16) > (var_1_57)) ? (var_1_16) : (var_1_57))))))) && ((var_1_31 >= (var_1_52 / var_1_44)) ? (var_1_58 == ((signed short int) ((((((((1000) > (var_1_45)) ? (1000) : (var_1_45))) < 0 ) ? -((((1000) > (var_1_45)) ? (1000) : (var_1_45))) : ((((1000) > (var_1_45)) ? (1000) : (var_1_45))))) + (((((var_1_24 + var_1_95)) > (-1)) ? ((var_1_24 + var_1_95)) : (-1)))))) : 1)) && (var_1_59 == ((unsigned char) (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))) + var_1_24)))) && (var_1_11 ? (var_1_72 ? (var_1_60 == ((signed long int) ((((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < 0 ) ? -((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) : ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) - ((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24)))))) : (var_1_60 == ((signed long int) (var_1_22 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))))) : ((var_1_27 != var_1_87) ? (var_1_60 == ((signed long int) (var_1_21 + -4))) : (var_1_60 == ((signed long int) (((((var_1_97 + ((((var_1_54) > (var_1_47)) ? (var_1_54) : (var_1_47))))) < ((var_1_21 - 2))) ? ((var_1_97 + ((((var_1_54) > (var_1_47)) ? (var_1_54) : (var_1_47))))) : ((var_1_21 - 2))))))))) && (((var_1_5 * 10u) > var_1_1) ? (((var_1_57 / var_1_51) <= var_1_56) ? (var_1_61 == ((signed short int) ((((((((var_1_48) < (var_1_44)) ? (var_1_48) : (var_1_44)))) > (var_1_49)) ? (((((var_1_48) < (var_1_44)) ? (var_1_48) : (var_1_44)))) : (var_1_49))))) : (var_1_61 == ((signed short int) (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) + ((var_1_22 + var_1_52) - ((((var_1_26) < (var_1_20)) ? (var_1_26) : (var_1_20)))))))) : (((((((var_1_28) < (var_1_44)) ? (var_1_28) : (var_1_44))) * var_1_85) <= var_1_49) ? (var_1_61 == ((signed short int) ((((((((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) < (var_1_58)) ? (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) : (var_1_58)))) < (-1000)) ? (((((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) < (var_1_58)) ? (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) : (var_1_58)))) : (-1000))))) : (var_1_61 == ((signed short int) (((((-8) < 0 ) ? -(-8) : (-8))) - var_1_24)))))) && (((var_1_23 << (var_1_63 + var_1_64)) >= var_1_44) ? ((var_1_6 >= 100) ? (var_1_62 == ((signed char) (var_1_21 + ((((var_1_31) > (var_1_64)) ? (var_1_31) : (var_1_64)))))) : ((var_1_40 > var_1_60) ? (var_1_62 == ((signed char) ((var_1_64 + var_1_21) - var_1_24))) : ((var_1_51 > var_1_14) ? (var_1_62 == ((signed char) (var_1_64 - (((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) - var_1_31)))) : (var_1_62 == ((signed char) (100 - (((((var_1_66) > (var_1_65)) ? (var_1_66) : (var_1_65))) - var_1_31))))))) : (var_1_62 == ((signed char) (var_1_64 + var_1_31))))) && (var_1_11 ? (((var_1_8 | (var_1_49 * var_1_42)) <= (4u / var_1_65)) ? (var_1_67 == ((unsigned long int) (16u + 100000000u))) : (var_1_72 ? (var_1_67 == ((unsigned long int) (var_1_23 + var_1_21))) : 1)) : (var_1_67 == ((unsigned long int) (((((var_1_19 - var_1_7)) > ((var_1_47 + var_1_85))) ? ((var_1_19 - var_1_7)) : ((var_1_47 + var_1_85)))))))) && (var_1_11 ? ((! var_1_86) ? (var_1_70 == ((unsigned char) var_1_12)) : 1) : ((! (var_1_26 <= var_1_5)) ? (var_1_70 == ((unsigned char) var_1_38)) : 1))) && (((var_1_7 / ((((var_1_66) < (var_1_48)) ? (var_1_66) : (var_1_48)))) <= var_1_26) ? (var_1_71 == ((signed short int) ((((var_1_67) > (var_1_31)) ? (var_1_67) : (var_1_31))))) : 1)) && ((var_1_11 || (last_1_var_1_67 > var_1_47)) ? ((-5 < (var_1_64 * var_1_9)) ? (var_1_72 == ((unsigned char) (var_1_38 || (var_1_73 || var_1_74)))) : (((last_1_var_1_6 < (var_1_22 & last_1_var_1_49)) && (last_1_var_1_17 < var_1_23)) ? ((var_1_29 >= (last_1_var_1_96 / var_1_51)) ? (var_1_72 == ((unsigned char) (var_1_11 && var_1_12))) : (var_1_72 == ((unsigned char) (var_1_11 || var_1_12)))) : 1)) : (var_1_72 == ((unsigned char) var_1_75)))) && (var_1_70 ? (var_1_76 == ((float) (var_1_56 - var_1_57))) : (var_1_76 == ((float) (var_1_57 - ((((var_1_56) < (var_1_77)) ? (var_1_56) : (var_1_77)))))))) && (((- var_1_33) >= 1) ? (var_1_78 == ((unsigned char) (((((((((((var_1_66) > (2)) ? (var_1_66) : (2))) < 0 ) ? -((((var_1_66) > (2)) ? (var_1_66) : (2))) : ((((var_1_66) > (2)) ? (var_1_66) : (2)))))) < ((var_1_79 - var_1_23))) ? ((((((((var_1_66) > (2)) ? (var_1_66) : (2))) < 0 ) ? -((((var_1_66) > (2)) ? (var_1_66) : (2))) : ((((var_1_66) > (2)) ? (var_1_66) : (2)))))) : ((var_1_79 - var_1_23)))))) : 1)) && (((var_1_6 % ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44)))) > var_1_54) ? (var_1_80 == ((double) (((((((var_1_56) < (var_1_15)) ? (var_1_56) : (var_1_15))) < 0 ) ? -((((var_1_56) < (var_1_15)) ? (var_1_56) : (var_1_15))) : ((((var_1_56) < (var_1_15)) ? (var_1_56) : (var_1_15))))))) : (((var_1_19 / var_1_21) < var_1_60) ? (var_1_80 == ((double) (var_1_15 + var_1_14))) : (var_1_80 == ((double) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))))) && (((var_1_33 >= var_1_43) || ((- 16) >= ((((var_1_6) < (var_1_17)) ? (var_1_6) : (var_1_17))))) ? (var_1_82 == ((unsigned short int) ((((var_1_33 + (var_1_65 + var_1_31)) < 0 ) ? -(var_1_33 + (var_1_65 + var_1_31)) : (var_1_33 + (var_1_65 + var_1_31)))))) : (var_1_82 == ((unsigned short int) ((var_1_48 + (var_1_83 - var_1_20)) - 10))))) && (var_1_11 ? (((var_1_5 * var_1_78) >= var_1_17) ? ((var_1_65 != ((var_1_64 >> 16) ^ var_1_6)) ? (var_1_84 == ((unsigned char) var_1_63)) : (var_1_84 == ((unsigned char) ((((var_1_21) > ((var_1_79 - var_1_64))) ? (var_1_21) : ((var_1_79 - var_1_64))))))) : 1) : 1)) && (((var_1_87 % ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) < var_1_97) ? (var_1_85 == ((signed long int) ((((var_1_65) > (var_1_49)) ? (var_1_65) : (var_1_49))))) : 1)) && ((! (var_1_51 == var_1_77)) ? ((var_1_48 != var_1_6) ? (var_1_86 == ((unsigned char) (! var_1_38))) : 1) : (var_1_86 == ((unsigned char) (! (var_1_12 && var_1_75)))))) && ((((var_1_47 + var_1_7) == var_1_26) && var_1_74) ? ((! (var_1_13 == (- var_1_51))) ? (var_1_87 == ((unsigned long int) ((var_1_5 - var_1_66) + var_1_17))) : (var_1_87 == ((unsigned long int) ((((((((var_1_64) < (var_1_24)) ? (var_1_64) : (var_1_24)))) > (var_1_17)) ? (((((var_1_64) < (var_1_24)) ? (var_1_64) : (var_1_24)))) : (var_1_17)))))) : (var_1_87 == ((unsigned long int) var_1_24)))) && (var_1_38 ? (var_1_88 == ((unsigned char) var_1_31)) : (var_1_88 == ((unsigned char) var_1_63)))) && (var_1_12 ? (var_1_89 == ((unsigned short int) last_1_var_1_89)) : (var_1_89 == ((unsigned short int) var_1_52)))) && (var_1_75 ? (var_1_90 == ((unsigned char) var_1_38)) : 1)) && (var_1_70 ? (var_1_91 == ((signed char) var_1_92)) : 1)) && (var_1_90 ? (var_1_93 == ((signed char) var_1_64)) : (var_1_93 == ((signed char) var_1_63)))) && (var_1_74 ? (var_1_94 == ((float) 3.8f)) : (var_1_94 == ((float) 3.75f)))) && (var_1_95 == ((signed short int) last_1_var_1_95))) && (var_1_96 == ((double) var_1_57))) && (var_1_97 == ((unsigned short int) (((((51806) < 0 ) ? -(51806) : (51806))) - (var_1_48 - ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64)))))))) && (((var_1_30 / var_1_51) < (var_1_76 * var_1_29)) ? ((-32 <= var_1_84) ? (var_1_98 == ((unsigned char) var_1_64)) : 1) : (var_1_98 == ((unsigned char) 8)))
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

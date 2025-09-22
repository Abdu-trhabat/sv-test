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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 5;
signed char var_1_3 = -128;
signed char var_1_5 = 16;
unsigned short int var_1_6 = 16;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
signed long int var_1_12 = 1710626147;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 16;
signed short int var_1_20 = -64;
float var_1_21 = 1.8;
signed short int var_1_22 = 8;
signed short int var_1_23 = 64;
signed char var_1_24 = -10;
signed char var_1_25 = 1;
signed char var_1_26 = -1;
unsigned long int var_1_27 = 10;
float var_1_28 = 9.5;
float var_1_29 = 4.7;
float var_1_30 = 128.7;
float var_1_31 = 4.375;
signed char var_1_32 = 50;
float var_1_33 = 128.875;
float var_1_34 = 7.23;
float var_1_35 = 8.8;
float var_1_36 = 4.75;
unsigned short int var_1_37 = 8;
unsigned short int var_1_38 = 21746;
unsigned short int var_1_39 = 24057;
unsigned short int var_1_40 = 10000;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
float var_1_44 = 3.5;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 64;
unsigned char var_1_49 = 0;
float var_1_50 = 1.8;
unsigned long int var_1_51 = 8;
unsigned short int var_1_52 = 4;
unsigned short int var_1_53 = 2;
unsigned long int var_1_54 = 3787592837;
signed long int var_1_55 = -4;
signed long int var_1_56 = 5;
unsigned char var_1_57 = 1;
unsigned short int var_1_58 = 5;
unsigned short int var_1_59 = 60901;
signed short int var_1_60 = -128;
signed short int var_1_61 = 18449;
unsigned short int var_1_62 = 32;
unsigned short int var_1_63 = 8;
unsigned short int var_1_64 = 31754;
unsigned char var_1_65 = 1;
float var_1_66 = 25.375;
unsigned long int var_1_67 = 64;
unsigned long int var_1_68 = 1747274480;
unsigned char var_1_69 = 1;
unsigned char var_1_70 = 0;
double var_1_72 = 50.5;
float var_1_73 = 128.6;
float var_1_75 = 999999.25;
float var_1_76 = 16.625;
float var_1_77 = 0.0;
float var_1_78 = 4.75;
float var_1_79 = 128.5;
double var_1_80 = 9999999.5;
signed char var_1_81 = -16;
signed char var_1_83 = 100;
signed char var_1_84 = 8;
signed char var_1_85 = 1;
signed char var_1_86 = 50;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 0;
unsigned char var_1_89 = 0;
signed long int var_1_90 = 4;
unsigned char var_1_91 = 0;
signed char var_1_92 = 10;
unsigned short int var_1_93 = 10;
signed long int var_1_94 = -1;
float var_1_95 = 5.5;
signed long int var_1_96 = 128;
signed char var_1_97 = 25;
unsigned long int last_1_var_1_14 = 16;
unsigned long int last_1_var_1_27 = 10;
float last_1_var_1_28 = 9.5;
float last_1_var_1_31 = 4.375;
float last_1_var_1_33 = 128.875;
unsigned short int last_1_var_1_37 = 8;
unsigned char last_1_var_1_43 = 1;
unsigned char last_1_var_1_48 = 64;
unsigned long int last_1_var_1_51 = 8;
signed long int last_1_var_1_56 = 5;
unsigned short int last_1_var_1_58 = 5;
unsigned char last_1_var_1_65 = 1;
unsigned long int last_1_var_1_67 = 64;
float last_1_var_1_73 = 128.6;
float last_1_var_1_75 = 999999.25;
double last_1_var_1_80 = 9999999.5;
unsigned char last_1_var_1_87 = 0;
unsigned char last_1_var_1_89 = 0;
unsigned short int last_1_var_1_93 = 10;
float last_1_var_1_95 = 5.5;
signed long int last_1_var_1_96 = 128;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_18 = var_1_40;
 unsigned char stepLocal_17 = last_1_var_1_14 != last_1_var_1_96;
 if (stepLocal_18 != var_1_52) {
  if ((var_1_59 > last_1_var_1_51) && stepLocal_17) {
   if (7.25f > (last_1_var_1_28 / var_1_44)) {
    var_1_60 = ((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - var_1_52) < 0 ) ? -(((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - var_1_52) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - var_1_52)));
   }
  } else {
   var_1_60 = ((var_1_25 + (last_1_var_1_48 - var_1_13)) + var_1_53);
  }
 } else {
  var_1_60 = (var_1_10 - (((((var_1_61 - 16)) > (((((last_1_var_1_96) < (var_1_32)) ? (last_1_var_1_96) : (var_1_32))))) ? ((var_1_61 - 16)) : (((((last_1_var_1_96) < (var_1_32)) ? (last_1_var_1_96) : (var_1_32)))))));
 }
 unsigned long int stepLocal_15 = last_1_var_1_51;
 signed long int stepLocal_14 = ((((var_1_53) > (var_1_52)) ? (var_1_53) : (var_1_52))) << last_1_var_1_67;
 signed char stepLocal_13 = var_1_26;
 signed char stepLocal_12 = var_1_5;
 if (stepLocal_15 != var_1_8) {
  if (stepLocal_13 < last_1_var_1_67) {
   var_1_57 = (last_1_var_1_65 && var_1_42);
  } else {
   if (last_1_var_1_80 < ((((last_1_var_1_33) < 0 ) ? -(last_1_var_1_33) : (last_1_var_1_33)))) {
    var_1_57 = (! (last_1_var_1_87 || var_1_45));
   } else {
    var_1_57 = (! (! 0));
   }
  }
 } else {
  if (((5.75f - var_1_29) + last_1_var_1_33) < (9.6f * (128.6f + var_1_36))) {
   var_1_57 = ((128.6 == 4.125) || var_1_47);
  } else {
   if ((- (~ var_1_13)) <= stepLocal_12) {
    var_1_57 = var_1_47;
   } else {
    if (var_1_32 > stepLocal_14) {
     if (last_1_var_1_31 > (((((var_1_36) > (49.5f)) ? (var_1_36) : (49.5f))) / var_1_44)) {
      var_1_57 = (var_1_47 && var_1_42);
     } else {
      var_1_57 = ((last_1_var_1_51 >= var_1_39) || (! var_1_42));
     }
    }
   }
  }
 }
 if (var_1_46) {
  if (! (var_1_57 || var_1_47)) {
   var_1_72 = (63.2 - 1.5);
  } else {
   var_1_72 = (var_1_34 + var_1_35);
  }
 } else {
  var_1_72 = (((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) < 0 ) ? -((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) : ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))));
 }
 if (! var_1_57) {
  var_1_65 = (! var_1_47);
 } else {
  var_1_65 = (! var_1_46);
 }
 unsigned long int stepLocal_25 = last_1_var_1_27;
 signed long int stepLocal_24 = last_1_var_1_56;
 signed long int stepLocal_23 = ((((last_1_var_1_37) < 0 ) ? -(last_1_var_1_37) : (last_1_var_1_37))) % ((((var_1_40) < (var_1_52)) ? (var_1_40) : (var_1_52)));
 if (last_1_var_1_31 < (last_1_var_1_80 + last_1_var_1_33)) {
  if (var_1_12 < stepLocal_24) {
   if (var_1_59 >= stepLocal_23) {
    if (stepLocal_25 > var_1_32) {
     var_1_67 = (var_1_61 + var_1_12);
    } else {
     var_1_67 = (var_1_10 + ((var_1_68 - var_1_32) - ((((var_1_52) > (var_1_59)) ? (var_1_52) : (var_1_59)))));
    }
   } else {
    var_1_67 = ((((((((var_1_64) < ((var_1_54 - var_1_52))) ? (var_1_64) : ((var_1_54 - var_1_52))))) < (last_1_var_1_27)) ? (((((var_1_64) < ((var_1_54 - var_1_52))) ? (var_1_64) : ((var_1_54 - var_1_52))))) : (last_1_var_1_27)));
   }
  }
 } else {
  var_1_67 = ((((var_1_63) > (last_1_var_1_56)) ? (var_1_63) : (last_1_var_1_56)));
 }
 signed long int stepLocal_34 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_59;
 if ((((((last_1_var_1_58 * last_1_var_1_51)) < (-256)) ? ((last_1_var_1_58 * last_1_var_1_51)) : (-256))) == stepLocal_34) {
  if ((- last_1_var_1_75) > var_1_36) {
   var_1_80 = (var_1_34 - var_1_29);
  }
 }
 unsigned short int stepLocal_9 = var_1_6;
 if (last_1_var_1_80 != ((last_1_var_1_95 * var_1_34) * ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) {
  var_1_49 = (! (! var_1_46));
 } else {
  if (var_1_38 <= stepLocal_9) {
   var_1_49 = (! 0);
  } else {
   var_1_49 = var_1_45;
  }
 }
 if (! var_1_49) {
  var_1_37 = ((25643 + var_1_38) - (var_1_39 - (var_1_40 - var_1_9)));
 }
 var_1_41 = (var_1_49 && var_1_42);
 signed long int stepLocal_22 = (((16) > ((var_1_10 - var_1_52))) ? (16) : ((var_1_10 - var_1_52)));
 if (var_1_26 != stepLocal_22) {
  if (! (var_1_41 && (var_1_9 <= var_1_54))) {
   var_1_66 = ((var_1_36 + var_1_34) - ((((var_1_35) > (var_1_29)) ? (var_1_35) : (var_1_29))));
  }
 } else {
  var_1_66 = (((((var_1_30 - var_1_29)) < ((((((var_1_34 - var_1_35)) < (var_1_36)) ? ((var_1_34 - var_1_35)) : (var_1_36))))) ? ((var_1_30 - var_1_29)) : ((((((var_1_34 - var_1_35)) < (var_1_36)) ? ((var_1_34 - var_1_35)) : (var_1_36))))));
 }
 unsigned char stepLocal_3 = last_1_var_1_43;
 if (last_1_var_1_89 || stepLocal_3) {
  if (! ((last_1_var_1_28 * last_1_var_1_73) < last_1_var_1_95)) {
   if (last_1_var_1_89) {
    var_1_14 = var_1_6;
   } else {
    var_1_14 = var_1_10;
   }
  } else {
   var_1_14 = var_1_6;
  }
 } else {
  var_1_14 = 0u;
 }
 unsigned long int stepLocal_5 = var_1_14;
 if (((var_1_9 + var_1_32) - var_1_13) > stepLocal_5) {
  var_1_31 = ((((var_1_29) < (((((0.25f) < (((((var_1_30) < (16.95f)) ? (var_1_30) : (16.95f))))) ? (0.25f) : (((((var_1_30) < (16.95f)) ? (var_1_30) : (16.95f)))))))) ? (var_1_29) : (((((0.25f) < (((((var_1_30) < (16.95f)) ? (var_1_30) : (16.95f))))) ? (0.25f) : (((((var_1_30) < (16.95f)) ? (var_1_30) : (16.95f)))))))));
 } else {
  var_1_31 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 }
 if (var_1_26 <= (var_1_9 >> (var_1_52 - var_1_53))) {
  if (last_1_var_1_27 >= (((((- var_1_38)) > (last_1_var_1_93)) ? ((- var_1_38)) : (last_1_var_1_93)))) {
   var_1_51 = var_1_8;
  }
 } else {
  if (var_1_52 >= (var_1_6 / var_1_8)) {
   var_1_51 = (var_1_54 - ((((var_1_52) < (var_1_10)) ? (var_1_52) : (var_1_10))));
  }
 }
 signed long int stepLocal_8 = var_1_8 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 if (stepLocal_8 >= var_1_5) {
  var_1_48 = ((var_1_32 + var_1_9) + var_1_13);
 }
 var_1_89 = var_1_88;
 if (var_1_46) {
  var_1_90 = var_1_63;
 }
 var_1_92 = var_1_32;
 if (var_1_45) {
  var_1_93 = var_1_52;
 } else {
  var_1_93 = var_1_32;
 }
 var_1_94 = -16;
 if (var_1_46) {
  var_1_95 = var_1_76;
 } else {
  var_1_95 = var_1_30;
 }
 if (var_1_51 < var_1_90) {
  var_1_81 = (((var_1_83 - var_1_52) - ((((var_1_32) < (var_1_9)) ? (var_1_32) : (var_1_9)))) - ((var_1_53 + var_1_84) + var_1_85));
 } else {
  if (var_1_72 > 0.25) {
   var_1_81 = (((((var_1_83 - var_1_85)) < (var_1_13)) ? ((var_1_83 - var_1_85)) : (var_1_13)));
  } else {
   var_1_81 = ((((var_1_9 - var_1_86) < 0 ) ? -(var_1_9 - var_1_86) : (var_1_9 - var_1_86)));
  }
 }
 if (var_1_22 >= var_1_94) {
  var_1_23 = var_1_81;
 }
 signed char stepLocal_16 = var_1_92;
 if (stepLocal_16 >= (var_1_25 / var_1_3)) {
  var_1_58 = (var_1_59 - var_1_8);
 } else {
  if (var_1_80 > ((((- var_1_35) < 0 ) ? -(- var_1_35) : (- var_1_35)))) {
   var_1_58 = ((var_1_39 - var_1_9) + var_1_10);
  }
 }
 unsigned long int stepLocal_0 = ((((var_1_14 / var_1_3)) > ((var_1_37 % var_1_5))) ? ((var_1_14 / var_1_3)) : ((var_1_37 % var_1_5)));
 if (stepLocal_0 != -16) {
  var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  var_1_1 = ((((var_1_6) > (32)) ? (var_1_6) : (32)));
 }
 signed long int stepLocal_11 = (var_1_94 * 64) >> var_1_52;
 if (stepLocal_11 < ((((last_1_var_1_56) < 0 ) ? -(last_1_var_1_56) : (last_1_var_1_56)))) {
  var_1_56 = var_1_6;
 } else {
  var_1_56 = var_1_40;
 }
 if (! var_1_49) {
  if ((var_1_34 / var_1_44) >= ((((64.5f) < (var_1_36)) ? (64.5f) : (var_1_36)))) {
   var_1_43 = ((((((var_1_67) > (var_1_23)) ? (var_1_67) : (var_1_23))) != var_1_39) || var_1_45);
  }
 } else {
  var_1_43 = ((! var_1_45) && (! (var_1_46 && var_1_47)));
 }
 unsigned char stepLocal_27 = var_1_8;
 unsigned short int stepLocal_26 = var_1_1;
 if (stepLocal_27 < var_1_90) {
  if (var_1_57) {
   var_1_69 = var_1_47;
  } else {
   if (var_1_58 <= stepLocal_26) {
    var_1_69 = (var_1_49 && var_1_42);
   }
  }
 } else {
  var_1_69 = var_1_45;
 }
 if (var_1_69) {
  var_1_91 = var_1_88;
 }
 signed long int stepLocal_7 = 0;
 unsigned char stepLocal_6 = ! (1 <= var_1_25);
 if (stepLocal_6 || var_1_91) {
  if (var_1_12 != stepLocal_7) {
   if (var_1_91) {
    var_1_33 = (var_1_30 - ((var_1_34 + var_1_35) + var_1_36));
   } else {
    var_1_33 = ((((var_1_30) > (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))) ? (var_1_30) : (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))));
   }
  } else {
   var_1_33 = ((((var_1_35) < (var_1_29)) ? (var_1_35) : (var_1_29)));
  }
 } else {
  if (! var_1_43) {
   var_1_33 = var_1_35;
  } else {
   var_1_33 = (var_1_29 - var_1_34);
  }
 }
 signed char stepLocal_4 = var_1_5;
 if (var_1_91) {
  if (((~ var_1_10) * var_1_67) <= stepLocal_4) {
   if (var_1_89) {
    var_1_24 = ((((var_1_8) > (-4)) ? (var_1_8) : (-4)));
   } else {
    var_1_24 = (((((var_1_9 - var_1_13)) < (var_1_8)) ? ((var_1_9 - var_1_13)) : (var_1_8)));
   }
  } else {
   var_1_24 = (var_1_9 + ((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))));
  }
 }
 unsigned long int stepLocal_30 = var_1_51;
 unsigned char stepLocal_29 = 200 == (var_1_53 / 64);
 if (stepLocal_29 && var_1_89) {
  var_1_73 = (((((var_1_29 - var_1_35)) < (var_1_30)) ? ((var_1_29 - var_1_35)) : (var_1_30)));
 } else {
  if (var_1_56 > stepLocal_30) {
   var_1_73 = (10000.125f - var_1_34);
  }
 }
 if (((var_1_80 * var_1_31) / var_1_21) != var_1_33) {
  var_1_20 = (-25 + (var_1_22 - var_1_9));
 }
 unsigned char stepLocal_28 = var_1_8;
 if (stepLocal_28 >= (((((~ var_1_53)) < (var_1_51)) ? ((~ var_1_53)) : (var_1_51)))) {
  var_1_70 = ((var_1_60 <= var_1_8) || var_1_47);
 } else {
  var_1_70 = (var_1_69 || var_1_47);
 }
 if (var_1_21 <= (- (var_1_29 / var_1_44))) {
  var_1_55 = ((((var_1_24) < (var_1_14)) ? (var_1_24) : (var_1_14)));
 }
 signed long int stepLocal_10 = var_1_55 - (var_1_40 + 64);
 if (stepLocal_10 <= var_1_13) {
  var_1_50 = ((var_1_34 + 256.4f) - var_1_35);
 } else {
  var_1_50 = (var_1_34 + var_1_35);
 }
 if (var_1_47) {
  var_1_96 = var_1_93;
 } else {
  var_1_96 = var_1_55;
 }
 if (! ((var_1_55 <= var_1_58) || var_1_49)) {
  var_1_27 = (((((var_1_10) < (((((var_1_12) > (var_1_58)) ? (var_1_12) : (var_1_58))))) ? (var_1_10) : (((((var_1_12) > (var_1_58)) ? (var_1_12) : (var_1_58)))))) + ((((var_1_51) > (var_1_13)) ? (var_1_51) : (var_1_13))));
 } else {
  var_1_27 = var_1_51;
 }
 unsigned long int stepLocal_2 = var_1_27;
 signed long int stepLocal_1 = ((((var_1_93) < (var_1_8)) ? (var_1_93) : (var_1_8))) * var_1_9;
 if (stepLocal_2 > ((((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5)))) {
  var_1_7 = ((var_1_8 - var_1_9) - var_1_10);
 } else {
  if (stepLocal_1 < ((var_1_12 - var_1_6) - (var_1_10 + var_1_67))) {
   var_1_7 = ((((var_1_9) < (var_1_8)) ? (var_1_9) : (var_1_8)));
  } else {
   var_1_7 = ((((((((var_1_8) < (128)) ? (var_1_8) : (128))) - (var_1_13 + var_1_9)) < 0 ) ? -(((((var_1_8) < (128)) ? (var_1_8) : (128))) - (var_1_13 + var_1_9)) : (((((var_1_8) < (128)) ? (var_1_8) : (128))) - (var_1_13 + var_1_9))));
  }
 }
 if (var_1_70) {
  var_1_28 = (var_1_29 - var_1_30);
 } else {
  if (var_1_67 >= (((((var_1_3 * var_1_81)) > (var_1_9)) ? ((var_1_3 * var_1_81)) : (var_1_9)))) {
   if (((((var_1_21) > (var_1_30)) ? (var_1_21) : (var_1_30))) == ((var_1_80 + var_1_73) + var_1_66)) {
    var_1_28 = (var_1_30 - var_1_29);
   }
  } else {
   if (var_1_8 != var_1_81) {
    var_1_28 = var_1_30;
   }
  }
 }
 unsigned short int stepLocal_33 = var_1_52;
 unsigned short int stepLocal_32 = var_1_6;
 unsigned short int stepLocal_31 = var_1_1;
 if (var_1_14 < stepLocal_31) {
  if (var_1_43) {
   if (var_1_64 != stepLocal_32) {
    var_1_75 = (((var_1_34 - var_1_35) + var_1_76) + var_1_36);
   } else {
    if ((- (var_1_50 + var_1_34)) >= var_1_76) {
     if ((((((var_1_9) < (var_1_60)) ? (var_1_9) : (var_1_60))) * -128) >= stepLocal_33) {
      var_1_75 = ((((((var_1_77 - var_1_36)) < (var_1_35)) ? ((var_1_77 - var_1_36)) : (var_1_35))) - (var_1_34 + var_1_78));
     } else {
      var_1_75 = (((5.5f - var_1_35) + var_1_76) + ((((var_1_36) > ((var_1_34 + var_1_79))) ? (var_1_36) : ((var_1_34 + var_1_79)))));
     }
    }
   }
  }
 } else {
  var_1_75 = (var_1_79 + ((((var_1_78) > (var_1_76)) ? (var_1_78) : (var_1_76))));
 }
 unsigned long int stepLocal_36 = var_1_14;
 signed long int stepLocal_35 = var_1_12;
 if (stepLocal_36 != var_1_6) {
  if (stepLocal_35 == ((-64 / var_1_59) + (~ var_1_53))) {
   var_1_87 = (! var_1_42);
  }
 } else {
  if (((var_1_75 + var_1_79) + 9.02f) > var_1_72) {
   if (var_1_42) {
    var_1_87 = var_1_88;
   } else {
    var_1_87 = var_1_46;
   }
  } else {
   var_1_87 = var_1_88;
  }
 }
 signed long int stepLocal_21 = var_1_56 / (var_1_61 + var_1_38);
 signed long int stepLocal_20 = var_1_37 / var_1_3;
 unsigned short int stepLocal_19 = var_1_52;
 if (var_1_27 < stepLocal_19) {
  if (var_1_5 < stepLocal_20) {
   if ((var_1_66 + var_1_34) >= var_1_35) {
    var_1_62 = (((((64 + var_1_40)) > (var_1_39)) ? ((64 + var_1_40)) : (var_1_39)));
   } else {
    if (stepLocal_21 > var_1_90) {
     var_1_62 = ((var_1_63 + var_1_40) + var_1_52);
    }
   }
  } else {
   var_1_62 = (((var_1_64 - var_1_32) + 32494) - (((((var_1_52 + var_1_56)) > (4)) ? ((var_1_52 + var_1_56)) : (4))));
  }
 } else {
  if (var_1_87) {
   if (var_1_45) {
    var_1_62 = var_1_9;
   }
  } else {
   var_1_62 = ((var_1_64 - var_1_22) + var_1_10);
  }
 }
 unsigned long int stepLocal_38 = var_1_67;
 signed long int stepLocal_37 = 8 - var_1_83;
 if (var_1_28 > var_1_72) {
  if (stepLocal_38 < var_1_22) {
   if (var_1_51 <= stepLocal_37) {
    var_1_97 = ((((var_1_53) < (var_1_86)) ? (var_1_53) : (var_1_86)));
   }
  } else {
   var_1_97 = var_1_83;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -128);
 assume_abort_if_not(var_1_5 <= 127);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 190);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1073741823);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 64);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -63);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -63);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 16384);
 assume_abort_if_not(var_1_38 <= 32767);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 16383);
 assume_abort_if_not(var_1_39 <= 32767);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 8191);
 assume_abort_if_not(var_1_40 <= 16383);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
 assume_abort_if_not(var_1_44 != 0.0F);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 4);
 assume_abort_if_not(var_1_52 <= 7);
 var_1_53 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 3);
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 2147483647);
 assume_abort_if_not(var_1_54 <= 4294967294);
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 32767);
 assume_abort_if_not(var_1_59 <= 65534);
 var_1_61 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_61 >= 16383);
 assume_abort_if_not(var_1_61 <= 32766);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 16384);
 var_1_64 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_64 >= 24575);
 assume_abort_if_not(var_1_64 <= 32767);
 var_1_68 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_68 >= 1610612735);
 assume_abort_if_not(var_1_68 <= 2147483647);
 var_1_76 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_76 >= -230584.3009213691400e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691400e+12F && var_1_76 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_77 >= 4611686.018427383000e+12F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854766000e+12F && var_1_77 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427383000e+12F && var_1_78 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_79 >= -230584.3009213691400e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691400e+12F && var_1_79 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_83 >= 94);
 assume_abort_if_not(var_1_83 <= 126);
 var_1_84 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_84 >= 0);
 assume_abort_if_not(var_1_84 <= 31);
 var_1_85 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 63);
 var_1_86 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_86 >= 0);
 assume_abort_if_not(var_1_86 <= 126);
 var_1_88 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_88 >= 0);
 assume_abort_if_not(var_1_88 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_96 = var_1_96;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_14 / var_1_3)) > ((var_1_37 % var_1_5))) ? ((var_1_14 / var_1_3)) : ((var_1_37 % var_1_5)))) != -16) ? (var_1_1 == ((unsigned short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_1 == ((unsigned short int) ((((var_1_6) > (32)) ? (var_1_6) : (32)))))) && ((var_1_27 > ((((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5)))) ? (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - var_1_10))) : (((((((var_1_93) < (var_1_8)) ? (var_1_93) : (var_1_8))) * var_1_9) < ((var_1_12 - var_1_6) - (var_1_10 + var_1_67))) ? (var_1_7 == ((unsigned char) ((((var_1_9) < (var_1_8)) ? (var_1_9) : (var_1_8))))) : (var_1_7 == ((unsigned char) ((((((((var_1_8) < (128)) ? (var_1_8) : (128))) - (var_1_13 + var_1_9)) < 0 ) ? -(((((var_1_8) < (128)) ? (var_1_8) : (128))) - (var_1_13 + var_1_9)) : (((((var_1_8) < (128)) ? (var_1_8) : (128))) - (var_1_13 + var_1_9))))))))) && ((last_1_var_1_89 || last_1_var_1_43) ? ((! ((last_1_var_1_28 * last_1_var_1_73) < last_1_var_1_95)) ? (last_1_var_1_89 ? (var_1_14 == ((unsigned long int) var_1_6)) : (var_1_14 == ((unsigned long int) var_1_10))) : (var_1_14 == ((unsigned long int) var_1_6))) : (var_1_14 == ((unsigned long int) 0u)))) && ((((var_1_80 * var_1_31) / var_1_21) != var_1_33) ? (var_1_20 == ((signed short int) (-25 + (var_1_22 - var_1_9)))) : 1)) && ((var_1_22 >= var_1_94) ? (var_1_23 == ((signed short int) var_1_81)) : 1)) && (var_1_91 ? ((((~ var_1_10) * var_1_67) <= var_1_5) ? (var_1_89 ? (var_1_24 == ((signed char) ((((var_1_8) > (-4)) ? (var_1_8) : (-4))))) : (var_1_24 == ((signed char) (((((var_1_9 - var_1_13)) < (var_1_8)) ? ((var_1_9 - var_1_13)) : (var_1_8)))))) : (var_1_24 == ((signed char) (var_1_9 + ((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))))))) : 1)) && ((! ((var_1_55 <= var_1_58) || var_1_49)) ? (var_1_27 == ((unsigned long int) (((((var_1_10) < (((((var_1_12) > (var_1_58)) ? (var_1_12) : (var_1_58))))) ? (var_1_10) : (((((var_1_12) > (var_1_58)) ? (var_1_12) : (var_1_58)))))) + ((((var_1_51) > (var_1_13)) ? (var_1_51) : (var_1_13)))))) : (var_1_27 == ((unsigned long int) var_1_51)))) && (var_1_70 ? (var_1_28 == ((float) (var_1_29 - var_1_30))) : ((var_1_67 >= (((((var_1_3 * var_1_81)) > (var_1_9)) ? ((var_1_3 * var_1_81)) : (var_1_9)))) ? ((((((var_1_21) > (var_1_30)) ? (var_1_21) : (var_1_30))) == ((var_1_80 + var_1_73) + var_1_66)) ? (var_1_28 == ((float) (var_1_30 - var_1_29))) : 1) : ((var_1_8 != var_1_81) ? (var_1_28 == ((float) var_1_30)) : 1)))) && ((((var_1_9 + var_1_32) - var_1_13) > var_1_14) ? (var_1_31 == ((float) ((((var_1_29) < (((((0.25f) < (((((var_1_30) < (16.95f)) ? (var_1_30) : (16.95f))))) ? (0.25f) : (((((var_1_30) < (16.95f)) ? (var_1_30) : (16.95f)))))))) ? (var_1_29) : (((((0.25f) < (((((var_1_30) < (16.95f)) ? (var_1_30) : (16.95f))))) ? (0.25f) : (((((var_1_30) < (16.95f)) ? (var_1_30) : (16.95f))))))))))) : (var_1_31 == ((float) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))) && (((! (1 <= var_1_25)) || var_1_91) ? ((var_1_12 != 0) ? (var_1_91 ? (var_1_33 == ((float) (var_1_30 - ((var_1_34 + var_1_35) + var_1_36)))) : (var_1_33 == ((float) ((((var_1_30) > (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))) ? (var_1_30) : (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))))))) : (var_1_33 == ((float) ((((var_1_35) < (var_1_29)) ? (var_1_35) : (var_1_29)))))) : ((! var_1_43) ? (var_1_33 == ((float) var_1_35)) : (var_1_33 == ((float) (var_1_29 - var_1_34)))))) && ((! var_1_49) ? (var_1_37 == ((unsigned short int) ((25643 + var_1_38) - (var_1_39 - (var_1_40 - var_1_9))))) : 1)) && (var_1_41 == ((unsigned char) (var_1_49 && var_1_42)))) && ((! var_1_49) ? (((var_1_34 / var_1_44) >= ((((64.5f) < (var_1_36)) ? (64.5f) : (var_1_36)))) ? (var_1_43 == ((unsigned char) ((((((var_1_67) > (var_1_23)) ? (var_1_67) : (var_1_23))) != var_1_39) || var_1_45))) : 1) : (var_1_43 == ((unsigned char) ((! var_1_45) && (! (var_1_46 && var_1_47))))))) && (((var_1_8 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) >= var_1_5) ? (var_1_48 == ((unsigned char) ((var_1_32 + var_1_9) + var_1_13))) : 1)) && ((last_1_var_1_80 != ((last_1_var_1_95 * var_1_34) * ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (var_1_49 == ((unsigned char) (! (! var_1_46)))) : ((var_1_38 <= var_1_6) ? (var_1_49 == ((unsigned char) (! 0))) : (var_1_49 == ((unsigned char) var_1_45))))) && (((var_1_55 - (var_1_40 + 64)) <= var_1_13) ? (var_1_50 == ((float) ((var_1_34 + 256.4f) - var_1_35))) : (var_1_50 == ((float) (var_1_34 + var_1_35))))) && ((var_1_26 <= (var_1_9 >> (var_1_52 - var_1_53))) ? ((last_1_var_1_27 >= (((((- var_1_38)) > (last_1_var_1_93)) ? ((- var_1_38)) : (last_1_var_1_93)))) ? (var_1_51 == ((unsigned long int) var_1_8)) : 1) : ((var_1_52 >= (var_1_6 / var_1_8)) ? (var_1_51 == ((unsigned long int) (var_1_54 - ((((var_1_52) < (var_1_10)) ? (var_1_52) : (var_1_10)))))) : 1))) && ((var_1_21 <= (- (var_1_29 / var_1_44))) ? (var_1_55 == ((signed long int) ((((var_1_24) < (var_1_14)) ? (var_1_24) : (var_1_14))))) : 1)) && ((((var_1_94 * 64) >> var_1_52) < ((((last_1_var_1_56) < 0 ) ? -(last_1_var_1_56) : (last_1_var_1_56)))) ? (var_1_56 == ((signed long int) var_1_6)) : (var_1_56 == ((signed long int) var_1_40)))) && ((last_1_var_1_51 != var_1_8) ? ((var_1_26 < last_1_var_1_67) ? (var_1_57 == ((unsigned char) (last_1_var_1_65 && var_1_42))) : ((last_1_var_1_80 < ((((last_1_var_1_33) < 0 ) ? -(last_1_var_1_33) : (last_1_var_1_33)))) ? (var_1_57 == ((unsigned char) (! (last_1_var_1_87 || var_1_45)))) : (var_1_57 == ((unsigned char) (! (! 0)))))) : ((((5.75f - var_1_29) + last_1_var_1_33) < (9.6f * (128.6f + var_1_36))) ? (var_1_57 == ((unsigned char) ((128.6 == 4.125) || var_1_47))) : (((- (~ var_1_13)) <= var_1_5) ? (var_1_57 == ((unsigned char) var_1_47)) : ((var_1_32 > (((((var_1_53) > (var_1_52)) ? (var_1_53) : (var_1_52))) << last_1_var_1_67)) ? ((last_1_var_1_31 > (((((var_1_36) > (49.5f)) ? (var_1_36) : (49.5f))) / var_1_44)) ? (var_1_57 == ((unsigned char) (var_1_47 && var_1_42))) : (var_1_57 == ((unsigned char) ((last_1_var_1_51 >= var_1_39) || (! var_1_42))))) : 1))))) && ((var_1_92 >= (var_1_25 / var_1_3)) ? (var_1_58 == ((unsigned short int) (var_1_59 - var_1_8))) : ((var_1_80 > ((((- var_1_35) < 0 ) ? -(- var_1_35) : (- var_1_35)))) ? (var_1_58 == ((unsigned short int) ((var_1_39 - var_1_9) + var_1_10))) : 1))) && ((var_1_40 != var_1_52) ? (((var_1_59 > last_1_var_1_51) && (last_1_var_1_14 != last_1_var_1_96)) ? ((7.25f > (last_1_var_1_28 / var_1_44)) ? (var_1_60 == ((signed short int) ((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - var_1_52) < 0 ) ? -(((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - var_1_52) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - var_1_52))))) : 1) : (var_1_60 == ((signed short int) ((var_1_25 + (last_1_var_1_48 - var_1_13)) + var_1_53)))) : (var_1_60 == ((signed short int) (var_1_10 - (((((var_1_61 - 16)) > (((((last_1_var_1_96) < (var_1_32)) ? (last_1_var_1_96) : (var_1_32))))) ? ((var_1_61 - 16)) : (((((last_1_var_1_96) < (var_1_32)) ? (last_1_var_1_96) : (var_1_32))))))))))) && ((var_1_27 < var_1_52) ? ((var_1_5 < (var_1_37 / var_1_3)) ? (((var_1_66 + var_1_34) >= var_1_35) ? (var_1_62 == ((unsigned short int) (((((64 + var_1_40)) > (var_1_39)) ? ((64 + var_1_40)) : (var_1_39))))) : (((var_1_56 / (var_1_61 + var_1_38)) > var_1_90) ? (var_1_62 == ((unsigned short int) ((var_1_63 + var_1_40) + var_1_52))) : 1)) : (var_1_62 == ((unsigned short int) (((var_1_64 - var_1_32) + 32494) - (((((var_1_52 + var_1_56)) > (4)) ? ((var_1_52 + var_1_56)) : (4))))))) : (var_1_87 ? (var_1_45 ? (var_1_62 == ((unsigned short int) var_1_9)) : 1) : (var_1_62 == ((unsigned short int) ((var_1_64 - var_1_22) + var_1_10)))))) && ((! var_1_57) ? (var_1_65 == ((unsigned char) (! var_1_47))) : (var_1_65 == ((unsigned char) (! var_1_46))))) && ((var_1_26 != ((((16) > ((var_1_10 - var_1_52))) ? (16) : ((var_1_10 - var_1_52))))) ? ((! (var_1_41 && (var_1_9 <= var_1_54))) ? (var_1_66 == ((float) ((var_1_36 + var_1_34) - ((((var_1_35) > (var_1_29)) ? (var_1_35) : (var_1_29)))))) : 1) : (var_1_66 == ((float) (((((var_1_30 - var_1_29)) < ((((((var_1_34 - var_1_35)) < (var_1_36)) ? ((var_1_34 - var_1_35)) : (var_1_36))))) ? ((var_1_30 - var_1_29)) : ((((((var_1_34 - var_1_35)) < (var_1_36)) ? ((var_1_34 - var_1_35)) : (var_1_36)))))))))) && ((last_1_var_1_31 < (last_1_var_1_80 + last_1_var_1_33)) ? ((var_1_12 < last_1_var_1_56) ? ((var_1_59 >= (((((last_1_var_1_37) < 0 ) ? -(last_1_var_1_37) : (last_1_var_1_37))) % ((((var_1_40) < (var_1_52)) ? (var_1_40) : (var_1_52))))) ? ((last_1_var_1_27 > var_1_32) ? (var_1_67 == ((unsigned long int) (var_1_61 + var_1_12))) : (var_1_67 == ((unsigned long int) (var_1_10 + ((var_1_68 - var_1_32) - ((((var_1_52) > (var_1_59)) ? (var_1_52) : (var_1_59)))))))) : (var_1_67 == ((unsigned long int) ((((((((var_1_64) < ((var_1_54 - var_1_52))) ? (var_1_64) : ((var_1_54 - var_1_52))))) < (last_1_var_1_27)) ? (((((var_1_64) < ((var_1_54 - var_1_52))) ? (var_1_64) : ((var_1_54 - var_1_52))))) : (last_1_var_1_27)))))) : 1) : (var_1_67 == ((unsigned long int) ((((var_1_63) > (last_1_var_1_56)) ? (var_1_63) : (last_1_var_1_56))))))) && ((var_1_8 < var_1_90) ? (var_1_57 ? (var_1_69 == ((unsigned char) var_1_47)) : ((var_1_58 <= var_1_1) ? (var_1_69 == ((unsigned char) (var_1_49 && var_1_42))) : 1)) : (var_1_69 == ((unsigned char) var_1_45)))) && ((var_1_8 >= (((((~ var_1_53)) < (var_1_51)) ? ((~ var_1_53)) : (var_1_51)))) ? (var_1_70 == ((unsigned char) ((var_1_60 <= var_1_8) || var_1_47))) : (var_1_70 == ((unsigned char) (var_1_69 || var_1_47))))) && (var_1_46 ? ((! (var_1_57 || var_1_47)) ? (var_1_72 == ((double) (63.2 - 1.5))) : (var_1_72 == ((double) (var_1_34 + var_1_35)))) : (var_1_72 == ((double) (((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) < 0 ) ? -((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) : ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))))) && (((200 == (var_1_53 / 64)) && var_1_89) ? (var_1_73 == ((float) (((((var_1_29 - var_1_35)) < (var_1_30)) ? ((var_1_29 - var_1_35)) : (var_1_30))))) : ((var_1_56 > var_1_51) ? (var_1_73 == ((float) (10000.125f - var_1_34))) : 1))) && ((var_1_14 < var_1_1) ? (var_1_43 ? ((var_1_64 != var_1_6) ? (var_1_75 == ((float) (((var_1_34 - var_1_35) + var_1_76) + var_1_36))) : (((- (var_1_50 + var_1_34)) >= var_1_76) ? (((((((var_1_9) < (var_1_60)) ? (var_1_9) : (var_1_60))) * -128) >= var_1_52) ? (var_1_75 == ((float) ((((((var_1_77 - var_1_36)) < (var_1_35)) ? ((var_1_77 - var_1_36)) : (var_1_35))) - (var_1_34 + var_1_78)))) : (var_1_75 == ((float) (((5.5f - var_1_35) + var_1_76) + ((((var_1_36) > ((var_1_34 + var_1_79))) ? (var_1_36) : ((var_1_34 + var_1_79)))))))) : 1)) : 1) : (var_1_75 == ((float) (var_1_79 + ((((var_1_78) > (var_1_76)) ? (var_1_78) : (var_1_76)))))))) && (((((((last_1_var_1_58 * last_1_var_1_51)) < (-256)) ? ((last_1_var_1_58 * last_1_var_1_51)) : (-256))) == (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_59)) ? (((- last_1_var_1_75) > var_1_36) ? (var_1_80 == ((double) (var_1_34 - var_1_29))) : 1) : 1)) && ((var_1_51 < var_1_90) ? (var_1_81 == ((signed char) (((var_1_83 - var_1_52) - ((((var_1_32) < (var_1_9)) ? (var_1_32) : (var_1_9)))) - ((var_1_53 + var_1_84) + var_1_85)))) : ((var_1_72 > 0.25) ? (var_1_81 == ((signed char) (((((var_1_83 - var_1_85)) < (var_1_13)) ? ((var_1_83 - var_1_85)) : (var_1_13))))) : (var_1_81 == ((signed char) ((((var_1_9 - var_1_86) < 0 ) ? -(var_1_9 - var_1_86) : (var_1_9 - var_1_86)))))))) && ((var_1_14 != var_1_6) ? ((var_1_12 == ((-64 / var_1_59) + (~ var_1_53))) ? (var_1_87 == ((unsigned char) (! var_1_42))) : 1) : ((((var_1_75 + var_1_79) + 9.02f) > var_1_72) ? (var_1_42 ? (var_1_87 == ((unsigned char) var_1_88)) : (var_1_87 == ((unsigned char) var_1_46))) : (var_1_87 == ((unsigned char) var_1_88))))) && (var_1_89 == ((unsigned char) var_1_88))) && (var_1_46 ? (var_1_90 == ((signed long int) var_1_63)) : 1)) && (var_1_69 ? (var_1_91 == ((unsigned char) var_1_88)) : 1)) && (var_1_92 == ((signed char) var_1_32))) && (var_1_45 ? (var_1_93 == ((unsigned short int) var_1_52)) : (var_1_93 == ((unsigned short int) var_1_32)))) && (var_1_94 == ((signed long int) -16))) && (var_1_46 ? (var_1_95 == ((float) var_1_76)) : (var_1_95 == ((float) var_1_30)))) && (var_1_47 ? (var_1_96 == ((signed long int) var_1_93)) : (var_1_96 == ((signed long int) var_1_55)))) && ((var_1_28 > var_1_72) ? ((var_1_67 < var_1_22) ? ((var_1_51 <= (8 - var_1_83)) ? (var_1_97 == ((signed char) ((((var_1_53) < (var_1_86)) ? (var_1_53) : (var_1_86))))) : 1) : (var_1_97 == ((signed char) var_1_83))) : 1)
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

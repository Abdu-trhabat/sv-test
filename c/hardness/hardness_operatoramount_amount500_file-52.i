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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch52Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 128.1;
signed short int var_1_2 = 256;
unsigned char var_1_3 = 2;
float var_1_5 = 31.4;
float var_1_6 = 32.5;
float var_1_7 = 9.6;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 1;
unsigned short int var_1_11 = 64;
unsigned short int var_1_12 = 60712;
unsigned short int var_1_13 = 58826;
double var_1_14 = 999999999.5;
unsigned char var_1_17 = 10;
float var_1_19 = 63.75;
float var_1_20 = 0.2;
float var_1_21 = 127.75;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 4;
signed short int var_1_24 = 32;
signed long int var_1_25 = 128;
unsigned short int var_1_26 = 64;
unsigned short int var_1_28 = 28834;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 100;
unsigned char var_1_32 = 64;
unsigned short int var_1_33 = 64;
unsigned long int var_1_34 = 32;
unsigned long int var_1_35 = 3318430011;
unsigned long int var_1_36 = 1662254845;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
signed long int var_1_46 = 128;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 64;
unsigned long int var_1_49 = 1614131405;
unsigned short int var_1_50 = 256;
unsigned short int var_1_51 = 21979;
unsigned short int var_1_52 = 18183;
float var_1_53 = 10000000000000.2;
float var_1_54 = 500.2;
float var_1_55 = 10000.5;
float var_1_56 = 127.5;
double var_1_57 = 50.3;
double var_1_58 = 7.2;
double var_1_59 = 16.875;
unsigned short int var_1_60 = 8;
signed short int var_1_61 = -10;
signed short int var_1_62 = 64;
double var_1_63 = 64.5;
double var_1_64 = 31.125;
double var_1_65 = 64.968;
double var_1_66 = 10000000000000.4;
double var_1_67 = 63.15;
double var_1_68 = 32.4;
double var_1_69 = 4.5;
double var_1_70 = 63.6;
signed long int var_1_71 = 16;
float var_1_73 = 2.8;
float var_1_74 = 0.0;
unsigned char var_1_75 = 1;
float var_1_76 = 8.2;
unsigned char var_1_78 = 1;
unsigned short int var_1_79 = 1;
signed long int var_1_80 = -2;
signed long int var_1_81 = 2059779867;
signed long int var_1_82 = 0;
double var_1_83 = 15.5;
double var_1_85 = 0.5;
unsigned char var_1_86 = 4;
double var_1_87 = 128.75;
unsigned long int var_1_88 = 256;
signed char var_1_89 = 16;
float var_1_90 = 15.16;
unsigned long int var_1_91 = 0;
signed long int var_1_92 = 4;
double var_1_93 = 9999.475;
float var_1_94 = 16.4;
unsigned long int var_1_95 = 16;
unsigned long int var_1_96 = 500;
unsigned short int var_1_97 = 32;
double var_1_98 = 127.375;
unsigned char var_1_99 = 0;
unsigned short int var_1_100 = 50;
signed char var_1_101 = -4;
signed short int var_1_102 = -2;
unsigned char var_1_103 = 0;
float var_1_104 = 1.75;
signed char var_1_105 = -100;
signed long int var_1_106 = -5;
unsigned char var_1_107 = 0;
signed long int var_1_108 = 100000;
unsigned short int var_1_109 = 16;
unsigned char var_1_110 = 10;
unsigned short int var_1_111 = 10;
unsigned char var_1_112 = 1;
unsigned char var_1_113 = 0;
unsigned char var_1_114 = 0;
unsigned char var_1_115 = 128;
unsigned char var_1_116 = 128;
double last_1_var_1_14 = 999999999.5;
unsigned char last_1_var_1_17 = 10;
unsigned short int last_1_var_1_33 = 64;
unsigned long int last_1_var_1_34 = 32;
signed short int last_1_var_1_62 = 64;
signed long int last_1_var_1_80 = -2;
unsigned char last_1_var_1_99 = 0;
unsigned short int last_1_var_1_111 = 10;
void initially(void) {
}
void step(void) {
 if (! ((var_1_66 < var_1_6) || last_1_var_1_99)) {
  var_1_71 = ((((last_1_var_1_33) < (0)) ? (last_1_var_1_33) : (0)));
 }
 var_1_106 = var_1_71;
 unsigned char stepLocal_14 = var_1_23;
 signed long int stepLocal_13 = (var_1_38 + last_1_var_1_17) << ((((var_1_3) > (var_1_92)) ? (var_1_3) : (var_1_92)));
 if (last_1_var_1_80 != stepLocal_13) {
  if (var_1_13 <= stepLocal_14) {
   var_1_91 = var_1_13;
  }
 }
 var_1_111 = var_1_91;
 signed long int stepLocal_10 = 1000000000 * var_1_23;
 unsigned char stepLocal_9 = var_1_38;
 if (var_1_10) {
  if (stepLocal_9 != (200 - var_1_3)) {
   var_1_80 = ((var_1_81 - last_1_var_1_111) - var_1_22);
  } else {
   if (last_1_var_1_80 == stepLocal_10) {
    var_1_80 = (((((var_1_31) > (1)) ? (var_1_31) : (1))) - var_1_52);
   }
  }
 } else {
  var_1_80 = ((((((last_1_var_1_111) > (var_1_51)) ? (last_1_var_1_111) : (var_1_51))) + ((((var_1_2) > (last_1_var_1_34)) ? (var_1_2) : (last_1_var_1_34)))) - var_1_82);
 }
 if (3.5 >= ((var_1_19 - var_1_20) + var_1_21)) {
  if ((last_1_var_1_111 * last_1_var_1_62) > (var_1_12 + var_1_31)) {
   var_1_34 = (((((var_1_22 + var_1_13)) < ((100000u + ((((100u) < 0 ) ? -(100u) : (100u)))))) ? ((var_1_22 + var_1_13)) : ((100000u + ((((100u) < 0 ) ? -(100u) : (100u)))))));
  }
 } else {
  var_1_34 = (var_1_35 - ((var_1_36 - last_1_var_1_111) - var_1_3));
 }
 if (! var_1_41) {
  var_1_43 = ((! var_1_41) && var_1_42);
 } else {
  var_1_43 = (var_1_10 && (var_1_42 && (var_1_44 && var_1_45)));
 }
 if (var_1_7 <= var_1_6) {
  var_1_48 = ((var_1_36 + var_1_49) - var_1_39);
 }
 if ((var_1_3 - var_1_39) < var_1_32) {
  var_1_50 = ((((((var_1_28) < (25940)) ? (var_1_28) : (25940))) + var_1_51) - (((((26366) > (var_1_52)) ? (26366) : (var_1_52))) - (var_1_32 + var_1_38)));
 }
 if (var_1_49 > var_1_51) {
  var_1_53 = ((((((var_1_54) < (var_1_55)) ? (var_1_54) : (var_1_55))) + var_1_56) - 99.25f);
 } else {
  var_1_53 = (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7);
 }
 unsigned char stepLocal_5 = var_1_30;
 if (stepLocal_5 != var_1_2) {
  var_1_62 = ((last_1_var_1_62 + var_1_38) + var_1_32);
 }
 var_1_86 = ((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30)));
 var_1_93 = ((var_1_74 + var_1_55) - var_1_64);
 if (var_1_44) {
  var_1_101 = var_1_3;
 } else {
  var_1_101 = var_1_39;
 }
 var_1_102 = var_1_31;
 var_1_103 = var_1_42;
 if (var_1_40) {
  var_1_104 = var_1_67;
 } else {
  var_1_104 = var_1_74;
 }
 var_1_107 = var_1_31;
 var_1_110 = var_1_32;
 if (var_1_44) {
  var_1_112 = var_1_32;
 }
 var_1_113 = var_1_45;
 var_1_114 = var_1_92;
 if (var_1_3 > (var_1_106 ^ (- var_1_34))) {
  var_1_26 = (((var_1_28 - var_1_23) + 18969) - var_1_2);
 } else {
  var_1_26 = var_1_23;
 }
 if (((var_1_32 | var_1_78) * var_1_80) >= var_1_30) {
  var_1_88 = ((((var_1_39) > (var_1_111)) ? (var_1_39) : (var_1_111)));
 } else {
  var_1_88 = (var_1_31 + var_1_30);
 }
 if (! (! var_1_43)) {
  var_1_11 = ((var_1_3 + 128) + var_1_2);
 } else {
  var_1_11 = ((((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))) - var_1_3) - var_1_2);
 }
 signed long int stepLocal_2 = -128;
 if (var_1_5 >= var_1_6) {
  if (stepLocal_2 <= ((var_1_62 | var_1_3) + var_1_22)) {
   var_1_25 = ((((((var_1_13 + 4) - var_1_11)) > (var_1_62)) ? (((var_1_13 + 4) - var_1_11)) : (var_1_62)));
  }
 } else {
  var_1_25 = ((((var_1_62) < ((var_1_12 + var_1_2))) ? (var_1_62) : ((var_1_12 + var_1_2))));
 }
 if (var_1_10) {
  var_1_29 = ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - 16) + var_1_3);
 } else {
  if (var_1_113) {
   var_1_29 = var_1_31;
  } else {
   var_1_29 = ((var_1_31 + var_1_32) - (var_1_30 - (var_1_3 + 16)));
  }
 }
 var_1_33 = ((((var_1_13 - (var_1_112 + 2)) < 0 ) ? -(var_1_13 - (var_1_112 + 2)) : (var_1_13 - (var_1_112 + 2))));
 if ((var_1_7 < (var_1_59 / var_1_74)) || (! var_1_113)) {
  if (var_1_32 >= (- (var_1_38 - var_1_78))) {
   var_1_76 = (((((var_1_68) < (var_1_65)) ? (var_1_68) : (var_1_65))) + var_1_7);
  } else {
   var_1_76 = ((((var_1_7) > (var_1_58)) ? (var_1_7) : (var_1_58)));
  }
 }
 unsigned char stepLocal_12 = var_1_114;
 if ((4 / ((((var_1_3) < (var_1_30)) ? (var_1_3) : (var_1_30)))) <= stepLocal_12) {
  var_1_90 = (var_1_54 - ((((var_1_58) > (32.75f)) ? (var_1_58) : (32.75f))));
 } else {
  var_1_90 = var_1_7;
 }
 signed long int stepLocal_17 = ((((var_1_32) > (var_1_3)) ? (var_1_32) : (var_1_3))) - (var_1_92 + 32);
 if (stepLocal_17 <= var_1_36) {
  if (var_1_67 < (var_1_54 - (var_1_66 + var_1_74))) {
   var_1_97 = (var_1_78 + var_1_52);
  } else {
   var_1_97 = ((((var_1_51 + var_1_28) < 0 ) ? -(var_1_51 + var_1_28) : (var_1_51 + var_1_28)));
  }
 } else {
  if ((var_1_21 * var_1_55) >= (- var_1_20)) {
   var_1_97 = var_1_52;
  } else {
   var_1_97 = (var_1_29 + var_1_62);
  }
 }
 if (var_1_40) {
  var_1_100 = var_1_29;
 } else {
  var_1_100 = var_1_22;
 }
 if (var_1_45) {
  var_1_109 = var_1_25;
 } else {
  var_1_109 = var_1_23;
 }
 unsigned short int stepLocal_8 = var_1_26;
 if (stepLocal_8 <= var_1_102) {
  var_1_73 = (var_1_55 - (var_1_64 + var_1_66));
 } else {
  var_1_73 = ((((((var_1_55) > (var_1_67)) ? (var_1_55) : (var_1_67))) + var_1_54) - ((var_1_74 - 0.125f) + var_1_64));
 }
 if (var_1_90 >= ((((var_1_73) < (var_1_64)) ? (var_1_73) : (var_1_64)))) {
  var_1_99 = var_1_45;
 }
 if (var_1_44) {
  var_1_47 = (var_1_40 || var_1_10);
 } else {
  if (var_1_38 > var_1_35) {
   if (-5 > (var_1_91 & (var_1_80 / var_1_13))) {
    var_1_47 = ((var_1_25 < var_1_106) || var_1_45);
   } else {
    var_1_47 = (! var_1_41);
   }
  } else {
   var_1_47 = (! ((! var_1_10) || var_1_40));
  }
 }
 signed long int stepLocal_7 = 1;
 if (stepLocal_7 >= (((((var_1_100) < (4)) ? (var_1_100) : (4))) - var_1_71)) {
  var_1_69 = ((((((var_1_67 - var_1_54)) > (var_1_66)) ? ((var_1_67 - var_1_54)) : (var_1_66))) + (var_1_68 + var_1_70));
 } else {
  var_1_69 = ((var_1_66 + ((((var_1_68) > (var_1_67)) ? (var_1_68) : (var_1_67)))) + var_1_5);
 }
 if (24.14 >= var_1_93) {
  var_1_79 = ((var_1_51 + var_1_28) - (((((var_1_34 + var_1_109)) > (8)) ? ((var_1_34 + var_1_109)) : (8))));
 }
 if (var_1_42) {
  var_1_108 = var_1_79;
 }
 signed long int stepLocal_0 = 10;
 if (((var_1_2 >> var_1_3) | var_1_97) >= stepLocal_0) {
  var_1_1 = (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7);
 } else {
  var_1_1 = ((((var_1_5 + var_1_7) < 0 ) ? -(var_1_5 + var_1_7) : (var_1_5 + var_1_7)));
 }
 signed long int stepLocal_1 = (var_1_3 + var_1_11) + var_1_2;
 if ((-2 / -10000000) != stepLocal_1) {
  var_1_8 = (var_1_43 || var_1_10);
 }
 if (var_1_7 != var_1_73) {
  if (var_1_113) {
   if (((2 << var_1_28) & var_1_13) > var_1_91) {
    if (((7.75f - var_1_55) * var_1_54) >= var_1_7) {
     var_1_61 = ((((var_1_22) < ((var_1_38 + var_1_31))) ? (var_1_22) : ((var_1_38 + var_1_31))));
    }
   } else {
    var_1_61 = ((2 - var_1_38) + var_1_39);
   }
  }
 }
 unsigned char stepLocal_15 = 0 >= ((((var_1_88) < (var_1_108)) ? (var_1_88) : (var_1_108)));
 if (stepLocal_15 || var_1_45) {
  var_1_94 = (var_1_7 + ((((((((var_1_74) < (var_1_5)) ? (var_1_74) : (var_1_5)))) < (var_1_65)) ? (((((var_1_74) < (var_1_5)) ? (var_1_74) : (var_1_5)))) : (var_1_65))));
 } else {
  var_1_94 = (((((var_1_67 + ((((var_1_65) < (var_1_70)) ? (var_1_65) : (var_1_70))))) < ((((((var_1_74) < (var_1_7)) ? (var_1_74) : (var_1_7))) + (var_1_64 - 999999.25f)))) ? ((var_1_67 + ((((var_1_65) < (var_1_70)) ? (var_1_65) : (var_1_70))))) : ((((((var_1_74) < (var_1_7)) ? (var_1_74) : (var_1_7))) + (var_1_64 - 999999.25f)))));
 }
 if (var_1_48 <= var_1_51) {
  if (var_1_41) {
   if (var_1_99 && var_1_8) {
    var_1_115 = (var_1_23 + var_1_32);
   } else {
    var_1_115 = (((((128) > (var_1_116)) ? (128) : (var_1_116))) - var_1_92);
   }
  } else {
   var_1_115 = var_1_3;
  }
 }
 if (! (var_1_13 < (var_1_34 * var_1_38))) {
  var_1_46 = (var_1_32 - (var_1_48 + var_1_108));
 }
 if ((- var_1_23) == var_1_46) {
  if (var_1_43) {
   var_1_83 = (var_1_65 + ((var_1_67 - var_1_66) + var_1_70));
  } else {
   var_1_83 = var_1_64;
  }
 } else {
  if (var_1_42) {
   var_1_83 = (((((var_1_65) > (var_1_64)) ? (var_1_65) : (var_1_64))) - (var_1_66 + var_1_54));
  } else {
   var_1_83 = ((((var_1_70) > (var_1_74)) ? (var_1_70) : (var_1_74)));
  }
 }
 unsigned long int stepLocal_3 = (((var_1_12) > (var_1_88)) ? (var_1_12) : (var_1_88));
 if (var_1_8) {
  if (var_1_19 < var_1_83) {
   if ((var_1_38 - (var_1_3 + var_1_39)) <= stepLocal_3) {
    var_1_37 = (! (var_1_40 || var_1_41));
   } else {
    var_1_37 = ((! (! var_1_10)) && var_1_42);
   }
  }
 }
 unsigned short int stepLocal_6 = var_1_28;
 if (((var_1_31 + var_1_32) - var_1_23) == stepLocal_6) {
  if (var_1_37) {
   if (! var_1_47) {
    var_1_63 = var_1_59;
   } else {
    var_1_63 = ((((((var_1_64 - var_1_65)) < (var_1_5)) ? ((var_1_64 - var_1_65)) : (var_1_5))) + ((var_1_66 - var_1_67) + var_1_68));
   }
  } else {
   var_1_63 = var_1_5;
  }
 }
 if (var_1_63 == (25.5f + (var_1_20 / 9.4f))) {
  var_1_75 = (var_1_43 || var_1_44);
 }
 unsigned char stepLocal_11 = var_1_3;
 if (stepLocal_11 <= var_1_36) {
  if (var_1_75) {
   var_1_85 = var_1_54;
  }
 } else {
  var_1_85 = (((((999999.4 - 49.625)) < (var_1_64)) ? ((999999.4 - 49.625)) : (var_1_64)));
 }
 if (! var_1_37) {
  var_1_24 = (var_1_23 - var_1_22);
 } else {
  var_1_24 = ((((var_1_22) < (var_1_91)) ? (var_1_22) : (var_1_91)));
 }
 signed long int stepLocal_4 = 100;
 if (var_1_28 > stepLocal_4) {
  if (var_1_37) {
   var_1_60 = (var_1_13 - 1);
  } else {
   var_1_60 = (var_1_52 + (var_1_51 - 100));
  }
 }
 unsigned char stepLocal_18 = var_1_44;
 if ((100000.88f * var_1_68) >= var_1_66) {
  var_1_98 = (var_1_55 + ((((var_1_67) < (var_1_7)) ? (var_1_67) : (var_1_7))));
 } else {
  if (stepLocal_18 && var_1_75) {
   var_1_98 = ((((((((4.4) < (var_1_70)) ? (4.4) : (var_1_70)))) < (var_1_58)) ? (((((4.4) < (var_1_70)) ? (4.4) : (var_1_70)))) : (var_1_58)));
  }
 }
 if (var_1_75) {
  var_1_105 = var_1_39;
 }
 if (! var_1_99) {
  if (var_1_5 <= (-0.5f * var_1_69)) {
   var_1_17 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
  } else {
   if ((var_1_19 - var_1_20) > ((var_1_85 * var_1_7) / var_1_21)) {
    var_1_17 = (((((128 - var_1_3)) > (((((var_1_22) < (200)) ? (var_1_22) : (200))))) ? ((128 - var_1_3)) : (((((var_1_22) < (200)) ? (var_1_22) : (200))))));
   } else {
    var_1_17 = (var_1_3 + var_1_23);
   }
  }
 } else {
  if ((var_1_73 / var_1_21) != var_1_69) {
   var_1_17 = var_1_23;
  } else {
   var_1_17 = (((((var_1_3 + var_1_23)) < (var_1_22)) ? ((var_1_3 + var_1_23)) : (var_1_22)));
  }
 }
 if ((var_1_98 / 24.5) <= last_1_var_1_14) {
  if (var_1_43) {
   var_1_14 = (var_1_5 + var_1_6);
  }
 }
 if (((var_1_1 + var_1_21) + var_1_20) < (var_1_14 * var_1_69)) {
  var_1_57 = (((((((((var_1_54) < (var_1_56)) ? (var_1_54) : (var_1_56)))) < (var_1_55)) ? (((((var_1_54) < (var_1_56)) ? (var_1_54) : (var_1_56)))) : (var_1_55))) - ((((var_1_58) > (var_1_59)) ? (var_1_58) : (var_1_59))));
 } else {
  var_1_57 = (var_1_58 - var_1_54);
 }
 if (var_1_64 <= var_1_57) {
  var_1_87 = (127.8 - var_1_58);
 }
 if ((var_1_98 * var_1_59) > ((((var_1_20) > (((((var_1_74) > (var_1_66)) ? (var_1_74) : (var_1_66))))) ? (var_1_20) : (((((var_1_74) > (var_1_66)) ? (var_1_74) : (var_1_66))))))) {
  var_1_89 = (var_1_39 - var_1_3);
 } else {
  if (0 >= ((var_1_49 - var_1_3) - var_1_28)) {
   var_1_89 = var_1_39;
  } else {
   var_1_89 = ((((var_1_3) < (var_1_39)) ? (var_1_3) : (var_1_39)));
  }
 }
 unsigned long int stepLocal_16 = var_1_88;
 if (var_1_51 <= stepLocal_16) {
  if (var_1_19 < var_1_57) {
   var_1_95 = ((((var_1_23) < ((var_1_52 + var_1_13))) ? (var_1_23) : ((var_1_52 + var_1_13))));
  } else {
   var_1_95 = var_1_96;
  }
 } else {
  if (((128.6f * var_1_69) + var_1_98) <= (- var_1_6)) {
   var_1_95 = ((((var_1_82) < ((var_1_3 + var_1_23))) ? (var_1_82) : ((var_1_3 + var_1_23))));
  } else {
   var_1_95 = (var_1_36 + var_1_92);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 14);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 49150);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 49150);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 24575);
 assume_abort_if_not(var_1_28 <= 32767);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 63);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 63);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 64);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 2147483647);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 1610612735);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 127);
 assume_abort_if_not(var_1_38 <= 255);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 1073741824);
 assume_abort_if_not(var_1_49 <= 2147483647);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 16384);
 assume_abort_if_not(var_1_51 <= 32767);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 16383);
 assume_abort_if_not(var_1_52 <= 32767);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427383000e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691400e+12F && var_1_66 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 2305843.009213691400e+12F && var_1_67 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_68 >= -230584.3009213691400e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691400e+12F && var_1_68 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_70 >= -230584.3009213691400e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 2305843.009213691400e+12F && var_1_70 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= 2305843.009213691400e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427383000e+12F && var_1_74 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 127);
 var_1_81 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_81 >= 1073741822);
 assume_abort_if_not(var_1_81 <= 2147483646);
 var_1_82 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_82 >= 0);
 assume_abort_if_not(var_1_82 <= 2147483646);
 var_1_92 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_92 >= 0);
 assume_abort_if_not(var_1_92 <= 22);
 var_1_96 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_96 >= 0);
 assume_abort_if_not(var_1_96 <= 4294967294);
 var_1_116 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_116 >= 127);
 assume_abort_if_not(var_1_116 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_111 = var_1_111;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_2 >> var_1_3) | var_1_97) >= 10) ? (var_1_1 == ((float) (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7))) : (var_1_1 == ((float) ((((var_1_5 + var_1_7) < 0 ) ? -(var_1_5 + var_1_7) : (var_1_5 + var_1_7)))))) && (((-2 / -10000000) != ((var_1_3 + var_1_11) + var_1_2)) ? (var_1_8 == ((unsigned char) (var_1_43 || var_1_10))) : 1)) && ((! (! var_1_43)) ? (var_1_11 == ((unsigned short int) ((var_1_3 + 128) + var_1_2))) : (var_1_11 == ((unsigned short int) ((((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))) - var_1_3) - var_1_2))))) && (((var_1_98 / 24.5) <= last_1_var_1_14) ? (var_1_43 ? (var_1_14 == ((double) (var_1_5 + var_1_6))) : 1) : 1)) && ((! var_1_99) ? ((var_1_5 <= (-0.5f * var_1_69)) ? (var_1_17 == ((unsigned char) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) : (((var_1_19 - var_1_20) > ((var_1_85 * var_1_7) / var_1_21)) ? (var_1_17 == ((unsigned char) (((((128 - var_1_3)) > (((((var_1_22) < (200)) ? (var_1_22) : (200))))) ? ((128 - var_1_3)) : (((((var_1_22) < (200)) ? (var_1_22) : (200)))))))) : (var_1_17 == ((unsigned char) (var_1_3 + var_1_23))))) : (((var_1_73 / var_1_21) != var_1_69) ? (var_1_17 == ((unsigned char) var_1_23)) : (var_1_17 == ((unsigned char) (((((var_1_3 + var_1_23)) < (var_1_22)) ? ((var_1_3 + var_1_23)) : (var_1_22)))))))) && ((! var_1_37) ? (var_1_24 == ((signed short int) (var_1_23 - var_1_22))) : (var_1_24 == ((signed short int) ((((var_1_22) < (var_1_91)) ? (var_1_22) : (var_1_91))))))) && ((var_1_5 >= var_1_6) ? ((-128 <= ((var_1_62 | var_1_3) + var_1_22)) ? (var_1_25 == ((signed long int) ((((((var_1_13 + 4) - var_1_11)) > (var_1_62)) ? (((var_1_13 + 4) - var_1_11)) : (var_1_62))))) : 1) : (var_1_25 == ((signed long int) ((((var_1_62) < ((var_1_12 + var_1_2))) ? (var_1_62) : ((var_1_12 + var_1_2)))))))) && ((var_1_3 > (var_1_106 ^ (- var_1_34))) ? (var_1_26 == ((unsigned short int) (((var_1_28 - var_1_23) + 18969) - var_1_2))) : (var_1_26 == ((unsigned short int) var_1_23)))) && (var_1_10 ? (var_1_29 == ((unsigned char) ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - 16) + var_1_3))) : (var_1_113 ? (var_1_29 == ((unsigned char) var_1_31)) : (var_1_29 == ((unsigned char) ((var_1_31 + var_1_32) - (var_1_30 - (var_1_3 + 16)))))))) && (var_1_33 == ((unsigned short int) ((((var_1_13 - (var_1_112 + 2)) < 0 ) ? -(var_1_13 - (var_1_112 + 2)) : (var_1_13 - (var_1_112 + 2))))))) && ((3.5 >= ((var_1_19 - var_1_20) + var_1_21)) ? (((last_1_var_1_111 * last_1_var_1_62) > (var_1_12 + var_1_31)) ? (var_1_34 == ((unsigned long int) (((((var_1_22 + var_1_13)) < ((100000u + ((((100u) < 0 ) ? -(100u) : (100u)))))) ? ((var_1_22 + var_1_13)) : ((100000u + ((((100u) < 0 ) ? -(100u) : (100u))))))))) : 1) : (var_1_34 == ((unsigned long int) (var_1_35 - ((var_1_36 - last_1_var_1_111) - var_1_3)))))) && (var_1_8 ? ((var_1_19 < var_1_83) ? (((var_1_38 - (var_1_3 + var_1_39)) <= ((((var_1_12) > (var_1_88)) ? (var_1_12) : (var_1_88)))) ? (var_1_37 == ((unsigned char) (! (var_1_40 || var_1_41)))) : (var_1_37 == ((unsigned char) ((! (! var_1_10)) && var_1_42)))) : 1) : 1)) && ((! var_1_41) ? (var_1_43 == ((unsigned char) ((! var_1_41) && var_1_42))) : (var_1_43 == ((unsigned char) (var_1_10 && (var_1_42 && (var_1_44 && var_1_45))))))) && ((! (var_1_13 < (var_1_34 * var_1_38))) ? (var_1_46 == ((signed long int) (var_1_32 - (var_1_48 + var_1_108)))) : 1)) && (var_1_44 ? (var_1_47 == ((unsigned char) (var_1_40 || var_1_10))) : ((var_1_38 > var_1_35) ? ((-5 > (var_1_91 & (var_1_80 / var_1_13))) ? (var_1_47 == ((unsigned char) ((var_1_25 < var_1_106) || var_1_45))) : (var_1_47 == ((unsigned char) (! var_1_41)))) : (var_1_47 == ((unsigned char) (! ((! var_1_10) || var_1_40))))))) && ((var_1_7 <= var_1_6) ? (var_1_48 == ((unsigned long int) ((var_1_36 + var_1_49) - var_1_39))) : 1)) && (((var_1_3 - var_1_39) < var_1_32) ? (var_1_50 == ((unsigned short int) ((((((var_1_28) < (25940)) ? (var_1_28) : (25940))) + var_1_51) - (((((26366) > (var_1_52)) ? (26366) : (var_1_52))) - (var_1_32 + var_1_38))))) : 1)) && ((var_1_49 > var_1_51) ? (var_1_53 == ((float) ((((((var_1_54) < (var_1_55)) ? (var_1_54) : (var_1_55))) + var_1_56) - 99.25f))) : (var_1_53 == ((float) (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7))))) && ((((var_1_1 + var_1_21) + var_1_20) < (var_1_14 * var_1_69)) ? (var_1_57 == ((double) (((((((((var_1_54) < (var_1_56)) ? (var_1_54) : (var_1_56)))) < (var_1_55)) ? (((((var_1_54) < (var_1_56)) ? (var_1_54) : (var_1_56)))) : (var_1_55))) - ((((var_1_58) > (var_1_59)) ? (var_1_58) : (var_1_59)))))) : (var_1_57 == ((double) (var_1_58 - var_1_54))))) && ((var_1_28 > 100) ? (var_1_37 ? (var_1_60 == ((unsigned short int) (var_1_13 - 1))) : (var_1_60 == ((unsigned short int) (var_1_52 + (var_1_51 - 100))))) : 1)) && ((var_1_7 != var_1_73) ? (var_1_113 ? ((((2 << var_1_28) & var_1_13) > var_1_91) ? ((((7.75f - var_1_55) * var_1_54) >= var_1_7) ? (var_1_61 == ((signed short int) ((((var_1_22) < ((var_1_38 + var_1_31))) ? (var_1_22) : ((var_1_38 + var_1_31)))))) : 1) : (var_1_61 == ((signed short int) ((2 - var_1_38) + var_1_39)))) : 1) : 1)) && ((var_1_30 != var_1_2) ? (var_1_62 == ((signed short int) ((last_1_var_1_62 + var_1_38) + var_1_32))) : 1)) && ((((var_1_31 + var_1_32) - var_1_23) == var_1_28) ? (var_1_37 ? ((! var_1_47) ? (var_1_63 == ((double) var_1_59)) : (var_1_63 == ((double) ((((((var_1_64 - var_1_65)) < (var_1_5)) ? ((var_1_64 - var_1_65)) : (var_1_5))) + ((var_1_66 - var_1_67) + var_1_68))))) : (var_1_63 == ((double) var_1_5))) : 1)) && ((1 >= (((((var_1_100) < (4)) ? (var_1_100) : (4))) - var_1_71)) ? (var_1_69 == ((double) ((((((var_1_67 - var_1_54)) > (var_1_66)) ? ((var_1_67 - var_1_54)) : (var_1_66))) + (var_1_68 + var_1_70)))) : (var_1_69 == ((double) ((var_1_66 + ((((var_1_68) > (var_1_67)) ? (var_1_68) : (var_1_67)))) + var_1_5))))) && ((! ((var_1_66 < var_1_6) || last_1_var_1_99)) ? (var_1_71 == ((signed long int) ((((last_1_var_1_33) < (0)) ? (last_1_var_1_33) : (0))))) : 1)) && ((var_1_26 <= var_1_102) ? (var_1_73 == ((float) (var_1_55 - (var_1_64 + var_1_66)))) : (var_1_73 == ((float) ((((((var_1_55) > (var_1_67)) ? (var_1_55) : (var_1_67))) + var_1_54) - ((var_1_74 - 0.125f) + var_1_64)))))) && ((var_1_63 == (25.5f + (var_1_20 / 9.4f))) ? (var_1_75 == ((unsigned char) (var_1_43 || var_1_44))) : 1)) && (((var_1_7 < (var_1_59 / var_1_74)) || (! var_1_113)) ? ((var_1_32 >= (- (var_1_38 - var_1_78))) ? (var_1_76 == ((float) (((((var_1_68) < (var_1_65)) ? (var_1_68) : (var_1_65))) + var_1_7))) : (var_1_76 == ((float) ((((var_1_7) > (var_1_58)) ? (var_1_7) : (var_1_58)))))) : 1)) && ((24.14 >= var_1_93) ? (var_1_79 == ((unsigned short int) ((var_1_51 + var_1_28) - (((((var_1_34 + var_1_109)) > (8)) ? ((var_1_34 + var_1_109)) : (8)))))) : 1)) && (var_1_10 ? ((var_1_38 != (200 - var_1_3)) ? (var_1_80 == ((signed long int) ((var_1_81 - last_1_var_1_111) - var_1_22))) : ((last_1_var_1_80 == (1000000000 * var_1_23)) ? (var_1_80 == ((signed long int) (((((var_1_31) > (1)) ? (var_1_31) : (1))) - var_1_52))) : 1)) : (var_1_80 == ((signed long int) ((((((last_1_var_1_111) > (var_1_51)) ? (last_1_var_1_111) : (var_1_51))) + ((((var_1_2) > (last_1_var_1_34)) ? (var_1_2) : (last_1_var_1_34)))) - var_1_82))))) && (((- var_1_23) == var_1_46) ? (var_1_43 ? (var_1_83 == ((double) (var_1_65 + ((var_1_67 - var_1_66) + var_1_70)))) : (var_1_83 == ((double) var_1_64))) : (var_1_42 ? (var_1_83 == ((double) (((((var_1_65) > (var_1_64)) ? (var_1_65) : (var_1_64))) - (var_1_66 + var_1_54)))) : (var_1_83 == ((double) ((((var_1_70) > (var_1_74)) ? (var_1_70) : (var_1_74)))))))) && ((var_1_3 <= var_1_36) ? (var_1_75 ? (var_1_85 == ((double) var_1_54)) : 1) : (var_1_85 == ((double) (((((999999.4 - 49.625)) < (var_1_64)) ? ((999999.4 - 49.625)) : (var_1_64))))))) && (var_1_86 == ((unsigned char) ((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30)))))) && ((var_1_64 <= var_1_57) ? (var_1_87 == ((double) (127.8 - var_1_58))) : 1)) && ((((var_1_32 | var_1_78) * var_1_80) >= var_1_30) ? (var_1_88 == ((unsigned long int) ((((var_1_39) > (var_1_111)) ? (var_1_39) : (var_1_111))))) : (var_1_88 == ((unsigned long int) (var_1_31 + var_1_30))))) && (((var_1_98 * var_1_59) > ((((var_1_20) > (((((var_1_74) > (var_1_66)) ? (var_1_74) : (var_1_66))))) ? (var_1_20) : (((((var_1_74) > (var_1_66)) ? (var_1_74) : (var_1_66))))))) ? (var_1_89 == ((signed char) (var_1_39 - var_1_3))) : ((0 >= ((var_1_49 - var_1_3) - var_1_28)) ? (var_1_89 == ((signed char) var_1_39)) : (var_1_89 == ((signed char) ((((var_1_3) < (var_1_39)) ? (var_1_3) : (var_1_39)))))))) && (((4 / ((((var_1_3) < (var_1_30)) ? (var_1_3) : (var_1_30)))) <= var_1_114) ? (var_1_90 == ((float) (var_1_54 - ((((var_1_58) > (32.75f)) ? (var_1_58) : (32.75f)))))) : (var_1_90 == ((float) var_1_7)))) && ((last_1_var_1_80 != ((var_1_38 + last_1_var_1_17) << ((((var_1_3) > (var_1_92)) ? (var_1_3) : (var_1_92))))) ? ((var_1_13 <= var_1_23) ? (var_1_91 == ((unsigned long int) var_1_13)) : 1) : 1)) && (var_1_93 == ((double) ((var_1_74 + var_1_55) - var_1_64)))) && (((0 >= ((((var_1_88) < (var_1_108)) ? (var_1_88) : (var_1_108)))) || var_1_45) ? (var_1_94 == ((float) (var_1_7 + ((((((((var_1_74) < (var_1_5)) ? (var_1_74) : (var_1_5)))) < (var_1_65)) ? (((((var_1_74) < (var_1_5)) ? (var_1_74) : (var_1_5)))) : (var_1_65)))))) : (var_1_94 == ((float) (((((var_1_67 + ((((var_1_65) < (var_1_70)) ? (var_1_65) : (var_1_70))))) < ((((((var_1_74) < (var_1_7)) ? (var_1_74) : (var_1_7))) + (var_1_64 - 999999.25f)))) ? ((var_1_67 + ((((var_1_65) < (var_1_70)) ? (var_1_65) : (var_1_70))))) : ((((((var_1_74) < (var_1_7)) ? (var_1_74) : (var_1_7))) + (var_1_64 - 999999.25f))))))))) && ((var_1_51 <= var_1_88) ? ((var_1_19 < var_1_57) ? (var_1_95 == ((unsigned long int) ((((var_1_23) < ((var_1_52 + var_1_13))) ? (var_1_23) : ((var_1_52 + var_1_13)))))) : (var_1_95 == ((unsigned long int) var_1_96))) : ((((128.6f * var_1_69) + var_1_98) <= (- var_1_6)) ? (var_1_95 == ((unsigned long int) ((((var_1_82) < ((var_1_3 + var_1_23))) ? (var_1_82) : ((var_1_3 + var_1_23)))))) : (var_1_95 == ((unsigned long int) (var_1_36 + var_1_92)))))) && (((((((var_1_32) > (var_1_3)) ? (var_1_32) : (var_1_3))) - (var_1_92 + 32)) <= var_1_36) ? ((var_1_67 < (var_1_54 - (var_1_66 + var_1_74))) ? (var_1_97 == ((unsigned short int) (var_1_78 + var_1_52))) : (var_1_97 == ((unsigned short int) ((((var_1_51 + var_1_28) < 0 ) ? -(var_1_51 + var_1_28) : (var_1_51 + var_1_28)))))) : (((var_1_21 * var_1_55) >= (- var_1_20)) ? (var_1_97 == ((unsigned short int) var_1_52)) : (var_1_97 == ((unsigned short int) (var_1_29 + var_1_62)))))) && (((100000.88f * var_1_68) >= var_1_66) ? (var_1_98 == ((double) (var_1_55 + ((((var_1_67) < (var_1_7)) ? (var_1_67) : (var_1_7)))))) : ((var_1_44 && var_1_75) ? (var_1_98 == ((double) ((((((((4.4) < (var_1_70)) ? (4.4) : (var_1_70)))) < (var_1_58)) ? (((((4.4) < (var_1_70)) ? (4.4) : (var_1_70)))) : (var_1_58))))) : 1))) && ((var_1_90 >= ((((var_1_73) < (var_1_64)) ? (var_1_73) : (var_1_64)))) ? (var_1_99 == ((unsigned char) var_1_45)) : 1)) && (var_1_40 ? (var_1_100 == ((unsigned short int) var_1_29)) : (var_1_100 == ((unsigned short int) var_1_22)))) && (var_1_44 ? (var_1_101 == ((signed char) var_1_3)) : (var_1_101 == ((signed char) var_1_39)))) && (var_1_102 == ((signed short int) var_1_31))) && (var_1_103 == ((unsigned char) var_1_42))) && (var_1_40 ? (var_1_104 == ((float) var_1_67)) : (var_1_104 == ((float) var_1_74)))) && (var_1_75 ? (var_1_105 == ((signed char) var_1_39)) : 1)) && (var_1_106 == ((signed long int) var_1_71))) && (var_1_107 == ((unsigned char) var_1_31))) && (var_1_42 ? (var_1_108 == ((signed long int) var_1_79)) : 1)) && (var_1_45 ? (var_1_109 == ((unsigned short int) var_1_25)) : (var_1_109 == ((unsigned short int) var_1_23)))) && (var_1_110 == ((unsigned char) var_1_32))) && (var_1_111 == ((unsigned short int) var_1_91))) && (var_1_44 ? (var_1_112 == ((unsigned char) var_1_32)) : 1)) && (var_1_113 == ((unsigned char) var_1_45))) && (var_1_114 == ((unsigned char) var_1_92))) && ((var_1_48 <= var_1_51) ? (var_1_41 ? ((var_1_99 && var_1_8) ? (var_1_115 == ((unsigned char) (var_1_23 + var_1_32))) : (var_1_115 == ((unsigned char) (((((128) > (var_1_116)) ? (128) : (var_1_116))) - var_1_92)))) : (var_1_115 == ((unsigned char) var_1_3))) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 16.625;
float var_1_3 = 256.4;
float var_1_4 = 8.3;
double var_1_6 = 9999999.5;
double var_1_7 = 100000000.5;
double var_1_8 = 10.7;
double var_1_9 = 255.8;
double var_1_10 = 99999999999999.4;
unsigned long int var_1_11 = 4;
unsigned long int var_1_14 = 3162971977;
unsigned long int var_1_15 = 32;
unsigned long int var_1_16 = 2561827834;
signed short int var_1_17 = -64;
signed short int var_1_19 = -10000;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 2;
unsigned long int var_1_23 = 16;
double var_1_24 = 15.8;
signed long int var_1_25 = 16;
signed short int var_1_26 = -2;
signed long int var_1_27 = 1;
signed long int var_1_28 = 2;
unsigned char var_1_29 = 10;
unsigned char var_1_30 = 32;
unsigned char var_1_31 = 10;
unsigned char var_1_32 = 0;
unsigned char var_1_34 = 200;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 10;
signed short int var_1_37 = -256;
double var_1_38 = 15.75;
signed short int var_1_39 = 25567;
signed short int var_1_40 = 10000;
signed short int var_1_41 = 10000;
signed long int var_1_42 = 50;
signed long int var_1_43 = 32;
unsigned long int var_1_44 = 1;
unsigned char var_1_45 = 25;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 16;
signed char var_1_48 = 1;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 1;
signed long int var_1_53 = 256;
double var_1_54 = 100.7;
unsigned short int var_1_55 = 16;
unsigned short int var_1_56 = 49300;
double var_1_57 = 64.4;
unsigned short int var_1_58 = 256;
unsigned char var_1_59 = 5;
signed long int var_1_60 = 10;
unsigned short int var_1_61 = 24966;
signed char var_1_62 = -5;
signed char var_1_65 = 64;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 64;
float var_1_68 = 31.5;
float var_1_70 = 16.5;
unsigned short int var_1_71 = 256;
unsigned short int var_1_72 = 45518;
unsigned long int var_1_73 = 16;
unsigned long int var_1_74 = 1000000000;
unsigned long int var_1_75 = 1;
unsigned long int var_1_76 = 3478183207;
float var_1_77 = 200.625;
float var_1_78 = 9.75;
unsigned char var_1_79 = 32;
unsigned char var_1_80 = 32;
unsigned short int var_1_81 = 10;
signed long int var_1_82 = -64;
float var_1_83 = 16.2;
signed char var_1_84 = 2;
signed long int var_1_85 = -64;
double var_1_86 = 32.2;
float var_1_87 = 4.8;
float var_1_88 = 0.0;
float var_1_89 = 8.5;
float var_1_90 = 999999.5;
double var_1_91 = 16.75;
signed short int var_1_92 = 1;
signed short int var_1_93 = 32;
signed long int var_1_94 = -2;
double var_1_95 = 127.175;
double var_1_97 = 3.8;
unsigned long int var_1_98 = 10;
signed short int var_1_99 = -1;
signed char var_1_100 = 1;
double var_1_101 = 4.75;
double var_1_102 = 8.75;
unsigned short int var_1_103 = 0;
double var_1_104 = 128.3;
double var_1_105 = 32.4;
unsigned char var_1_106 = 0;
unsigned char var_1_107 = 0;
double var_1_108 = 200.75;
signed char var_1_109 = -128;
signed short int var_1_110 = 4;
unsigned short int var_1_111 = 16;
unsigned short int var_1_112 = 128;
unsigned long int var_1_113 = 100;
signed long int var_1_114 = 10;
unsigned char var_1_115 = 0;
signed short int var_1_116 = 1000;
unsigned long int last_1_var_1_22 = 2;
float last_1_var_1_77 = 200.625;
signed long int last_1_var_1_85 = -64;
double last_1_var_1_86 = 32.2;
signed long int last_1_var_1_94 = -2;
double last_1_var_1_95 = 127.175;
unsigned long int last_1_var_1_98 = 10;
signed short int last_1_var_1_116 = 1000;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_8 = (last_1_var_1_85 % var_1_59) ^ (var_1_39 >> var_1_60);
 if (1.4 <= var_1_8) {
  if (stepLocal_8 == (last_1_var_1_22 / var_1_41)) {
   var_1_58 = ((((var_1_39) < ((((((var_1_48) < (var_1_36)) ? (var_1_48) : (var_1_36))) + (var_1_61 - var_1_31)))) ? (var_1_39) : ((((((var_1_48) < (var_1_36)) ? (var_1_48) : (var_1_36))) + (var_1_61 - var_1_31)))));
  } else {
   var_1_58 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
  }
 } else {
  var_1_58 = var_1_30;
 }
 if (((last_1_var_1_77 / var_1_3) * (5.6f / var_1_4)) == last_1_var_1_86) {
  var_1_1 = ((var_1_6 + (var_1_7 + var_1_8)) + (var_1_9 - 0.125));
 }
 unsigned char stepLocal_21 = var_1_21;
 if (var_1_8 <= (((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))) / ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) {
  if (var_1_51 && stepLocal_21) {
   var_1_87 = (var_1_6 + var_1_70);
  } else {
   var_1_87 = (2.7f + ((((var_1_8) > (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) ? (var_1_8) : (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))));
  }
 } else {
  var_1_87 = ((var_1_88 - (var_1_89 + var_1_90)) - var_1_70);
 }
 var_1_20 = var_1_21;
 if (var_1_8 == var_1_4) {
  var_1_22 = (var_1_16 - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))));
 } else {
  var_1_22 = (var_1_15 + var_1_23);
 }
 signed long int stepLocal_1 = (((var_1_19 + var_1_26) < 0 ) ? -(var_1_19 + var_1_26) : (var_1_19 + var_1_26));
 if (stepLocal_1 >= var_1_22) {
  var_1_25 = ((var_1_27 + 25) - (((((1746493380 - 128)) > (var_1_28)) ? ((1746493380 - 128)) : (var_1_28))));
 }
 if (-2 < (var_1_22 * var_1_23)) {
  var_1_42 = ((((var_1_30) > (200)) ? (var_1_30) : (200)));
 } else {
  var_1_42 = (var_1_36 + (((((var_1_40 + 50)) < (var_1_31)) ? ((var_1_40 + 50)) : (var_1_31))));
 }
 if (! (var_1_42 >= 0)) {
  if (var_1_21) {
   var_1_44 = ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)));
  } else {
   var_1_44 = (var_1_32 + var_1_27);
  }
 } else {
  var_1_44 = (((((var_1_16 - var_1_23)) < (((((var_1_15) > (var_1_31)) ? (var_1_15) : (var_1_31))))) ? ((var_1_16 - var_1_23)) : (((((var_1_15) > (var_1_31)) ? (var_1_15) : (var_1_31))))));
 }
 if (var_1_51) {
  var_1_55 = (var_1_30 + var_1_31);
 } else {
  var_1_55 = (var_1_56 - 16);
 }
 var_1_57 = ((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) < (64.75)) ? (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) : (64.75)));
 var_1_77 = ((((((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6)))) < (var_1_70)) ? (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6)))) : (var_1_70)));
 var_1_82 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
 if (! (var_1_16 > 5u)) {
  var_1_83 = (((((var_1_9 - 32.5f)) > ((49.9f - var_1_70))) ? ((var_1_9 - 32.5f)) : ((49.9f - var_1_70))));
 }
 signed long int stepLocal_25 = var_1_82;
 signed long int stepLocal_24 = 32;
 unsigned long int stepLocal_23 = var_1_15 / var_1_67;
 unsigned long int stepLocal_22 = var_1_22;
 if ((var_1_34 - 4) > stepLocal_24) {
  if (stepLocal_22 >= var_1_74) {
   var_1_91 = (var_1_8 + ((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))));
  } else {
   var_1_91 = (((((var_1_89 - 4.5)) < (var_1_7)) ? ((var_1_89 - 4.5)) : (var_1_7)));
  }
 } else {
  if (var_1_32 < stepLocal_25) {
   if (stepLocal_23 >= var_1_28) {
    var_1_91 = (var_1_90 + ((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))));
   }
  }
 }
 var_1_98 = last_1_var_1_98;
 var_1_99 = var_1_82;
 var_1_100 = var_1_60;
 var_1_101 = var_1_88;
 var_1_105 = var_1_7;
 var_1_106 = var_1_107;
 if (var_1_106) {
  var_1_108 = var_1_88;
 } else {
  var_1_108 = var_1_9;
 }
 var_1_110 = var_1_36;
 var_1_111 = var_1_46;
 var_1_113 = var_1_76;
 var_1_114 = 32;
 if (var_1_107) {
  var_1_115 = var_1_21;
 }
 if (((var_1_8 + var_1_3) + (var_1_108 * 9999999.2f)) > (var_1_4 + var_1_87)) {
  var_1_10 = var_1_8;
 }
 unsigned long int stepLocal_7 = var_1_98;
 if (var_1_106) {
  if (var_1_82 < stepLocal_7) {
   var_1_54 = var_1_7;
  } else {
   if ((var_1_6 + (var_1_8 + var_1_108)) > (((((var_1_91) < (var_1_7)) ? (var_1_91) : (var_1_7))) * (var_1_10 * var_1_4))) {
    var_1_54 = ((32.8 + var_1_8) + ((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) > (15.75)) ? (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) : (15.75))));
   }
  }
 }
 unsigned long int stepLocal_0 = var_1_22;
 if (stepLocal_0 == (var_1_14 - var_1_15)) {
  var_1_11 = (var_1_16 - var_1_15);
 }
 if (var_1_115) {
  var_1_17 = (-2 + var_1_19);
 }
 if (var_1_83 <= var_1_4) {
  var_1_24 = (var_1_9 + var_1_8);
 }
 if (! (var_1_98 >= (var_1_28 - 64))) {
  var_1_29 = (var_1_30 + ((var_1_31 + 5) + var_1_32));
 } else {
  if ((var_1_6 * 0.5f) < var_1_24) {
   var_1_29 = (((((var_1_34 - var_1_31) < 0 ) ? -(var_1_34 - var_1_31) : (var_1_34 - var_1_31))) - var_1_30);
  } else {
   if ((var_1_113 ^ var_1_32) >= (var_1_16 | var_1_11)) {
    var_1_29 = (var_1_35 - ((((var_1_32) < ((var_1_31 + var_1_36))) ? (var_1_32) : ((var_1_31 + var_1_36)))));
   } else {
    var_1_29 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
   }
  }
 }
 if (((((var_1_54) < (((((var_1_105) > (var_1_9)) ? (var_1_105) : (var_1_9))))) ? (var_1_54) : (((((var_1_105) > (var_1_9)) ? (var_1_105) : (var_1_9)))))) >= (0.5 / var_1_4)) {
  var_1_43 = var_1_36;
 }
 signed short int stepLocal_5 = var_1_40;
 if (stepLocal_5 != var_1_113) {
  var_1_52 = var_1_34;
 } else {
  var_1_52 = (var_1_35 - ((((var_1_46) < (10)) ? (var_1_46) : (10))));
 }
 if (var_1_43 <= var_1_59) {
  var_1_62 = ((((var_1_60) < (-16)) ? (var_1_60) : (-16)));
 } else {
  if (var_1_46 < (((((var_1_35) > (var_1_34)) ? (var_1_35) : (var_1_34))) - (var_1_36 + var_1_31))) {
   var_1_62 = ((((((((var_1_36) > (5)) ? (var_1_36) : (5)))) > (((var_1_65 - var_1_60) - var_1_32))) ? (((((var_1_36) > (5)) ? (var_1_36) : (5)))) : (((var_1_65 - var_1_60) - var_1_32))));
  } else {
   var_1_62 = ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)));
  }
 }
 signed long int stepLocal_15 = var_1_28;
 signed long int stepLocal_14 = (var_1_114 & var_1_67) + var_1_36;
 if (var_1_44 == stepLocal_14) {
  if ((var_1_16 - var_1_23) < stepLocal_15) {
   var_1_80 = (var_1_36 + (var_1_46 - var_1_48));
  }
 }
 unsigned long int stepLocal_16 = var_1_11;
 if (stepLocal_16 == (((((var_1_29 / var_1_72)) < (var_1_76)) ? ((var_1_29 / var_1_72)) : (var_1_76)))) {
  var_1_84 = -32;
 }
 if (var_1_115) {
  if (var_1_88 <= var_1_24) {
   var_1_93 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
  }
 } else {
  var_1_93 = (-16 + var_1_48);
 }
 if (last_1_var_1_95 == ((((var_1_101) < (var_1_90)) ? (var_1_101) : (var_1_90)))) {
  if (((var_1_14 ^ var_1_25) / ((((var_1_60) < (var_1_67)) ? (var_1_60) : (var_1_67)))) != var_1_52) {
   var_1_95 = var_1_8;
  } else {
   var_1_95 = var_1_90;
  }
 } else {
  var_1_95 = var_1_70;
 }
 if (var_1_106) {
  var_1_97 = var_1_88;
 } else {
  var_1_97 = var_1_7;
 }
 if (var_1_106) {
  var_1_102 = var_1_89;
 } else {
  var_1_102 = var_1_90;
 }
 if (var_1_115) {
  var_1_103 = var_1_65;
 }
 if (var_1_115) {
  var_1_104 = var_1_88;
 }
 if (var_1_70 < (var_1_24 / var_1_3)) {
  if (var_1_3 < 2.125f) {
   var_1_71 = (var_1_46 + (var_1_61 - var_1_36));
  } else {
   if ((var_1_46 % ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41)))) <= (var_1_58 - var_1_32)) {
    var_1_71 = var_1_52;
   } else {
    var_1_71 = (var_1_56 - var_1_65);
   }
  }
 } else {
  var_1_71 = (((((var_1_56) > (var_1_72)) ? (var_1_56) : (var_1_72))) - (var_1_65 + var_1_31));
 }
 unsigned long int stepLocal_18 = var_1_59 / 25u;
 signed long int stepLocal_17 = var_1_46 / var_1_72;
 if (var_1_20) {
  var_1_85 = (var_1_39 - var_1_111);
 } else {
  if (var_1_44 > stepLocal_17) {
   var_1_85 = (var_1_65 - var_1_27);
  } else {
   if (stepLocal_18 > var_1_15) {
    var_1_85 = (((((var_1_22) > (var_1_71)) ? (var_1_22) : (var_1_71))) + var_1_60);
   } else {
    var_1_85 = ((var_1_30 - var_1_27) + var_1_111);
   }
  }
 }
 if (((((var_1_108) < (var_1_3)) ? (var_1_108) : (var_1_3))) != var_1_54) {
  var_1_50 = ((-5 == var_1_98) && var_1_21);
 } else {
  var_1_50 = (var_1_21 || (var_1_20 && var_1_51));
 }
 signed short int stepLocal_20 = var_1_19;
 unsigned char stepLocal_19 = var_1_21;
 if (5 > stepLocal_20) {
  var_1_86 = ((var_1_9 - var_1_70) + var_1_8);
 } else {
  if (stepLocal_19 && var_1_50) {
   var_1_86 = (0.75 - var_1_9);
  }
 }
 signed long int stepLocal_4 = var_1_85;
 if (((var_1_32 + var_1_36) - (var_1_31 + var_1_48)) != stepLocal_4) {
  var_1_47 = ((((var_1_32) > ((((((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))) < 0 ) ? -((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))) : ((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))))))) ? (var_1_32) : ((((((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))) < 0 ) ? -((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))) : ((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))))))));
 }
 if (var_1_11 <= var_1_31) {
  if (var_1_104 >= var_1_97) {
   if (((((var_1_17) < ((var_1_67 * var_1_61))) ? (var_1_17) : ((var_1_67 * var_1_61)))) > (var_1_114 - var_1_36)) {
    var_1_73 = ((((10u) < (var_1_27)) ? (10u) : (var_1_27)));
   }
  } else {
   if (var_1_16 > (var_1_35 / var_1_61)) {
    var_1_73 = (var_1_16 - var_1_40);
   } else {
    var_1_73 = (var_1_16 - ((var_1_74 - var_1_41) + var_1_72));
   }
  }
 }
 unsigned short int stepLocal_12 = var_1_71;
 if (stepLocal_12 <= (var_1_98 * var_1_28)) {
  var_1_78 = (var_1_9 + ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))));
 } else {
  var_1_78 = ((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6)));
 }
 if ((var_1_7 / ((((var_1_4) > (var_1_3)) ? (var_1_4) : (var_1_3)))) < var_1_95) {
  var_1_81 = var_1_40;
 } else {
  var_1_81 = ((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39)));
 }
 if (var_1_50) {
  var_1_109 = var_1_60;
 } else {
  var_1_109 = var_1_48;
 }
 signed long int stepLocal_26 = -10;
 if (var_1_106) {
  if (stepLocal_26 > (var_1_73 / ((((var_1_46) < (var_1_67)) ? (var_1_46) : (var_1_67))))) {
   var_1_116 = ((var_1_60 - var_1_59) + ((((var_1_44) > (var_1_65)) ? (var_1_44) : (var_1_65))));
  }
 } else {
  var_1_116 = last_1_var_1_116;
 }
 if (var_1_8 >= (var_1_9 - var_1_38)) {
  if (var_1_20 && (var_1_19 < var_1_15)) {
   var_1_37 = ((((((var_1_39 - var_1_30) - var_1_36)) < (var_1_19)) ? (((var_1_39 - var_1_30) - var_1_36)) : (var_1_19)));
  } else {
   if (var_1_108 < (var_1_4 + (- var_1_78))) {
    var_1_37 = (var_1_110 - ((var_1_40 + var_1_41) - ((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31)))));
   } else {
    var_1_37 = (var_1_39 - var_1_34);
   }
  }
 } else {
  if (((((((((var_1_95) < (var_1_108)) ? (var_1_95) : (var_1_108)))) > ((var_1_78 * var_1_86))) ? (((((var_1_95) < (var_1_108)) ? (var_1_95) : (var_1_108)))) : ((var_1_78 * var_1_86)))) >= 31.14) {
   var_1_37 = var_1_30;
  } else {
   var_1_37 = var_1_34;
  }
 }
 unsigned char stepLocal_3 = (var_1_1 / var_1_4) >= (var_1_38 - var_1_9);
 signed long int stepLocal_2 = var_1_27 << var_1_31;
 if ((var_1_34 <= var_1_73) && stepLocal_3) {
  if (stepLocal_2 <= var_1_113) {
   var_1_45 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
  } else {
   if (! var_1_21) {
    var_1_45 = ((var_1_46 - var_1_36) + var_1_30);
   } else {
    var_1_45 = (var_1_35 - var_1_46);
   }
  }
 } else {
  var_1_45 = (var_1_46 + var_1_36);
 }
 if (var_1_20) {
  if (var_1_16 <= ((var_1_14 - var_1_116) / var_1_65)) {
   var_1_66 = (var_1_35 - var_1_60);
  } else {
   var_1_66 = ((var_1_46 + var_1_67) - var_1_31);
  }
 }
 if (((((var_1_103 + var_1_11) < 0 ) ? -(var_1_103 + var_1_11) : (var_1_103 + var_1_11))) >= var_1_45) {
  var_1_75 = ((((((var_1_76 - var_1_11) - var_1_58)) < ((var_1_81 + var_1_74))) ? (((var_1_76 - var_1_11) - var_1_58)) : ((var_1_81 + var_1_74))));
 } else {
  var_1_75 = ((((var_1_41) > (8u)) ? (var_1_41) : (8u)));
 }
 if (var_1_20) {
  var_1_92 = (((((-10) > (var_1_60)) ? (-10) : (var_1_60))) + (var_1_67 - var_1_75));
 }
 unsigned long int stepLocal_6 = 256u;
 if ((var_1_104 + var_1_6) >= var_1_4) {
  var_1_53 = ((var_1_44 + var_1_17) - var_1_36);
 } else {
  if (stepLocal_6 >= var_1_39) {
   var_1_53 = ((((var_1_75) > (var_1_28)) ? (var_1_75) : (var_1_28)));
  }
 }
 var_1_112 = var_1_53;
 signed long int stepLocal_13 = ((((var_1_45 + var_1_58)) > ((var_1_32 - var_1_112))) ? ((var_1_45 + var_1_58)) : ((var_1_32 - var_1_112)));
 if (10 >= stepLocal_13) {
  var_1_79 = 32;
 } else {
  var_1_79 = var_1_34;
 }
 if (var_1_50) {
  if (-10 >= (~ (var_1_53 + last_1_var_1_94))) {
   var_1_94 = (var_1_61 + var_1_73);
  } else {
   var_1_94 = ((var_1_72 + var_1_112) - var_1_48);
  }
 }
 signed long int stepLocal_11 = var_1_60;
 unsigned char stepLocal_10 = (~ var_1_113) > var_1_40;
 signed long int stepLocal_9 = var_1_114;
 if (stepLocal_9 > var_1_112) {
  if ((var_1_48 <= var_1_94) || stepLocal_10) {
   var_1_68 = var_1_9;
  } else {
   if (stepLocal_11 > (var_1_35 + (var_1_75 | var_1_58))) {
    var_1_68 = (var_1_6 + var_1_9);
   } else {
    var_1_68 = (((((var_1_7) < ((var_1_6 + var_1_8))) ? (var_1_7) : ((var_1_6 + var_1_8)))) + var_1_9);
   }
  }
 } else {
  var_1_68 = (15.5f - (var_1_9 + var_1_70));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -230584.3009213691400e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -115292.1504606845700e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 1152921.504606845700e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -115292.1504606845700e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 1152921.504606845700e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967295);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -16383);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -16383);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1073741823);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 2147483646);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 32);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 190);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 127);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 16382);
 assume_abort_if_not(var_1_39 <= 32766);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= 8191);
 assume_abort_if_not(var_1_40 <= 16383);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 8192);
 assume_abort_if_not(var_1_41 <= 16383);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 63);
 assume_abort_if_not(var_1_46 <= 127);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 0);
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 32767);
 assume_abort_if_not(var_1_56 <= 65534);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 255);
 assume_abort_if_not(var_1_59 != 0);
 var_1_60 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_60 >= 1);
 assume_abort_if_not(var_1_60 <= 14);
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 16383);
 assume_abort_if_not(var_1_61 <= 32767);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 62);
 assume_abort_if_not(var_1_65 <= 126);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 64);
 assume_abort_if_not(var_1_67 <= 127);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_72 >= 32767);
 assume_abort_if_not(var_1_72 <= 65534);
 var_1_74 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_74 >= 536870912);
 assume_abort_if_not(var_1_74 <= 1073741824);
 var_1_76 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_76 >= 3221225470);
 assume_abort_if_not(var_1_76 <= 4294967294);
 var_1_88 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_88 >= 4611686.018427383000e+12F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854766000e+12F && var_1_88 >= 1.0e-20F ));
 var_1_89 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 2305843.009213691400e+12F && var_1_89 >= 1.0e-20F ));
 var_1_90 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 2305843.009213691400e+12F && var_1_90 >= 1.0e-20F ));
 var_1_107 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_107 >= 1);
 assume_abort_if_not(var_1_107 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_22 = var_1_22;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_116 = var_1_116;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_77 / var_1_3) * (5.6f / var_1_4)) == last_1_var_1_86) ? (var_1_1 == ((double) ((var_1_6 + (var_1_7 + var_1_8)) + (var_1_9 - 0.125)))) : 1) && ((((var_1_8 + var_1_3) + (var_1_108 * 9999999.2f)) > (var_1_4 + var_1_87)) ? (var_1_10 == ((double) var_1_8)) : 1)) && ((var_1_22 == (var_1_14 - var_1_15)) ? (var_1_11 == ((unsigned long int) (var_1_16 - var_1_15))) : 1)) && (var_1_115 ? (var_1_17 == ((signed short int) (-2 + var_1_19))) : 1)) && (var_1_20 == ((unsigned char) var_1_21))) && ((var_1_8 == var_1_4) ? (var_1_22 == ((unsigned long int) (var_1_16 - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) : (var_1_22 == ((unsigned long int) (var_1_15 + var_1_23))))) && ((var_1_83 <= var_1_4) ? (var_1_24 == ((double) (var_1_9 + var_1_8))) : 1)) && ((((((var_1_19 + var_1_26) < 0 ) ? -(var_1_19 + var_1_26) : (var_1_19 + var_1_26))) >= var_1_22) ? (var_1_25 == ((signed long int) ((var_1_27 + 25) - (((((1746493380 - 128)) > (var_1_28)) ? ((1746493380 - 128)) : (var_1_28)))))) : 1)) && ((! (var_1_98 >= (var_1_28 - 64))) ? (var_1_29 == ((unsigned char) (var_1_30 + ((var_1_31 + 5) + var_1_32)))) : (((var_1_6 * 0.5f) < var_1_24) ? (var_1_29 == ((unsigned char) (((((var_1_34 - var_1_31) < 0 ) ? -(var_1_34 - var_1_31) : (var_1_34 - var_1_31))) - var_1_30))) : (((var_1_113 ^ var_1_32) >= (var_1_16 | var_1_11)) ? (var_1_29 == ((unsigned char) (var_1_35 - ((((var_1_32) < ((var_1_31 + var_1_36))) ? (var_1_32) : ((var_1_31 + var_1_36))))))) : (var_1_29 == ((unsigned char) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))))) && ((var_1_8 >= (var_1_9 - var_1_38)) ? ((var_1_20 && (var_1_19 < var_1_15)) ? (var_1_37 == ((signed short int) ((((((var_1_39 - var_1_30) - var_1_36)) < (var_1_19)) ? (((var_1_39 - var_1_30) - var_1_36)) : (var_1_19))))) : ((var_1_108 < (var_1_4 + (- var_1_78))) ? (var_1_37 == ((signed short int) (var_1_110 - ((var_1_40 + var_1_41) - ((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31))))))) : (var_1_37 == ((signed short int) (var_1_39 - var_1_34))))) : ((((((((((var_1_95) < (var_1_108)) ? (var_1_95) : (var_1_108)))) > ((var_1_78 * var_1_86))) ? (((((var_1_95) < (var_1_108)) ? (var_1_95) : (var_1_108)))) : ((var_1_78 * var_1_86)))) >= 31.14) ? (var_1_37 == ((signed short int) var_1_30)) : (var_1_37 == ((signed short int) var_1_34))))) && ((-2 < (var_1_22 * var_1_23)) ? (var_1_42 == ((signed long int) ((((var_1_30) > (200)) ? (var_1_30) : (200))))) : (var_1_42 == ((signed long int) (var_1_36 + (((((var_1_40 + 50)) < (var_1_31)) ? ((var_1_40 + 50)) : (var_1_31)))))))) && ((((((var_1_54) < (((((var_1_105) > (var_1_9)) ? (var_1_105) : (var_1_9))))) ? (var_1_54) : (((((var_1_105) > (var_1_9)) ? (var_1_105) : (var_1_9)))))) >= (0.5 / var_1_4)) ? (var_1_43 == ((signed long int) var_1_36)) : 1)) && ((! (var_1_42 >= 0)) ? (var_1_21 ? (var_1_44 == ((unsigned long int) ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))) : (var_1_44 == ((unsigned long int) (var_1_32 + var_1_27)))) : (var_1_44 == ((unsigned long int) (((((var_1_16 - var_1_23)) < (((((var_1_15) > (var_1_31)) ? (var_1_15) : (var_1_31))))) ? ((var_1_16 - var_1_23)) : (((((var_1_15) > (var_1_31)) ? (var_1_15) : (var_1_31)))))))))) && (((var_1_34 <= var_1_73) && ((var_1_1 / var_1_4) >= (var_1_38 - var_1_9))) ? (((var_1_27 << var_1_31) <= var_1_113) ? (var_1_45 == ((unsigned char) ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) : ((! var_1_21) ? (var_1_45 == ((unsigned char) ((var_1_46 - var_1_36) + var_1_30))) : (var_1_45 == ((unsigned char) (var_1_35 - var_1_46))))) : (var_1_45 == ((unsigned char) (var_1_46 + var_1_36))))) && ((((var_1_32 + var_1_36) - (var_1_31 + var_1_48)) != var_1_85) ? (var_1_47 == ((unsigned char) ((((var_1_32) > ((((((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))) < 0 ) ? -((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))) : ((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))))))) ? (var_1_32) : ((((((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))) < 0 ) ? -((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46))) : ((((var_1_31) > (var_1_46)) ? (var_1_31) : (var_1_46)))))))))) : 1)) && ((((((var_1_108) < (var_1_3)) ? (var_1_108) : (var_1_3))) != var_1_54) ? (var_1_50 == ((unsigned char) ((-5 == var_1_98) && var_1_21))) : (var_1_50 == ((unsigned char) (var_1_21 || (var_1_20 && var_1_51)))))) && ((var_1_40 != var_1_113) ? (var_1_52 == ((unsigned char) var_1_34)) : (var_1_52 == ((unsigned char) (var_1_35 - ((((var_1_46) < (10)) ? (var_1_46) : (10)))))))) && (((var_1_104 + var_1_6) >= var_1_4) ? (var_1_53 == ((signed long int) ((var_1_44 + var_1_17) - var_1_36))) : ((256u >= var_1_39) ? (var_1_53 == ((signed long int) ((((var_1_75) > (var_1_28)) ? (var_1_75) : (var_1_28))))) : 1))) && (var_1_106 ? ((var_1_82 < var_1_98) ? (var_1_54 == ((double) var_1_7)) : (((var_1_6 + (var_1_8 + var_1_108)) > (((((var_1_91) < (var_1_7)) ? (var_1_91) : (var_1_7))) * (var_1_10 * var_1_4))) ? (var_1_54 == ((double) ((32.8 + var_1_8) + ((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) > (15.75)) ? (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) : (15.75)))))) : 1)) : 1)) && (var_1_51 ? (var_1_55 == ((unsigned short int) (var_1_30 + var_1_31))) : (var_1_55 == ((unsigned short int) (var_1_56 - 16))))) && (var_1_57 == ((double) ((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) < (64.75)) ? (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) : (64.75)))))) && ((1.4 <= var_1_8) ? ((((last_1_var_1_85 % var_1_59) ^ (var_1_39 >> var_1_60)) == (last_1_var_1_22 / var_1_41)) ? (var_1_58 == ((unsigned short int) ((((var_1_39) < ((((((var_1_48) < (var_1_36)) ? (var_1_48) : (var_1_36))) + (var_1_61 - var_1_31)))) ? (var_1_39) : ((((((var_1_48) < (var_1_36)) ? (var_1_48) : (var_1_36))) + (var_1_61 - var_1_31))))))) : (var_1_58 == ((unsigned short int) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))))) : (var_1_58 == ((unsigned short int) var_1_30)))) && ((var_1_43 <= var_1_59) ? (var_1_62 == ((signed char) ((((var_1_60) < (-16)) ? (var_1_60) : (-16))))) : ((var_1_46 < (((((var_1_35) > (var_1_34)) ? (var_1_35) : (var_1_34))) - (var_1_36 + var_1_31))) ? (var_1_62 == ((signed char) ((((((((var_1_36) > (5)) ? (var_1_36) : (5)))) > (((var_1_65 - var_1_60) - var_1_32))) ? (((((var_1_36) > (5)) ? (var_1_36) : (5)))) : (((var_1_65 - var_1_60) - var_1_32)))))) : (var_1_62 == ((signed char) ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))))))) && (var_1_20 ? ((var_1_16 <= ((var_1_14 - var_1_116) / var_1_65)) ? (var_1_66 == ((unsigned char) (var_1_35 - var_1_60))) : (var_1_66 == ((unsigned char) ((var_1_46 + var_1_67) - var_1_31)))) : 1)) && ((var_1_114 > var_1_112) ? (((var_1_48 <= var_1_94) || ((~ var_1_113) > var_1_40)) ? (var_1_68 == ((float) var_1_9)) : ((var_1_60 > (var_1_35 + (var_1_75 | var_1_58))) ? (var_1_68 == ((float) (var_1_6 + var_1_9))) : (var_1_68 == ((float) (((((var_1_7) < ((var_1_6 + var_1_8))) ? (var_1_7) : ((var_1_6 + var_1_8)))) + var_1_9))))) : (var_1_68 == ((float) (15.5f - (var_1_9 + var_1_70)))))) && ((var_1_70 < (var_1_24 / var_1_3)) ? ((var_1_3 < 2.125f) ? (var_1_71 == ((unsigned short int) (var_1_46 + (var_1_61 - var_1_36)))) : (((var_1_46 % ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41)))) <= (var_1_58 - var_1_32)) ? (var_1_71 == ((unsigned short int) var_1_52)) : (var_1_71 == ((unsigned short int) (var_1_56 - var_1_65))))) : (var_1_71 == ((unsigned short int) (((((var_1_56) > (var_1_72)) ? (var_1_56) : (var_1_72))) - (var_1_65 + var_1_31)))))) && ((var_1_11 <= var_1_31) ? ((var_1_104 >= var_1_97) ? ((((((var_1_17) < ((var_1_67 * var_1_61))) ? (var_1_17) : ((var_1_67 * var_1_61)))) > (var_1_114 - var_1_36)) ? (var_1_73 == ((unsigned long int) ((((10u) < (var_1_27)) ? (10u) : (var_1_27))))) : 1) : ((var_1_16 > (var_1_35 / var_1_61)) ? (var_1_73 == ((unsigned long int) (var_1_16 - var_1_40))) : (var_1_73 == ((unsigned long int) (var_1_16 - ((var_1_74 - var_1_41) + var_1_72)))))) : 1)) && ((((((var_1_103 + var_1_11) < 0 ) ? -(var_1_103 + var_1_11) : (var_1_103 + var_1_11))) >= var_1_45) ? (var_1_75 == ((unsigned long int) ((((((var_1_76 - var_1_11) - var_1_58)) < ((var_1_81 + var_1_74))) ? (((var_1_76 - var_1_11) - var_1_58)) : ((var_1_81 + var_1_74)))))) : (var_1_75 == ((unsigned long int) ((((var_1_41) > (8u)) ? (var_1_41) : (8u))))))) && (var_1_77 == ((float) ((((((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6)))) < (var_1_70)) ? (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6)))) : (var_1_70)))))) && ((var_1_71 <= (var_1_98 * var_1_28)) ? (var_1_78 == ((float) (var_1_9 + ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) : (var_1_78 == ((float) ((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6))))))) && ((10 >= (((((var_1_45 + var_1_58)) > ((var_1_32 - var_1_112))) ? ((var_1_45 + var_1_58)) : ((var_1_32 - var_1_112))))) ? (var_1_79 == ((unsigned char) 32)) : (var_1_79 == ((unsigned char) var_1_34)))) && ((var_1_44 == ((var_1_114 & var_1_67) + var_1_36)) ? (((var_1_16 - var_1_23) < var_1_28) ? (var_1_80 == ((unsigned char) (var_1_36 + (var_1_46 - var_1_48)))) : 1) : 1)) && (((var_1_7 / ((((var_1_4) > (var_1_3)) ? (var_1_4) : (var_1_3)))) < var_1_95) ? (var_1_81 == ((unsigned short int) var_1_40)) : (var_1_81 == ((unsigned short int) ((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39))))))) && (var_1_82 == ((signed long int) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))) && ((! (var_1_16 > 5u)) ? (var_1_83 == ((float) (((((var_1_9 - 32.5f)) > ((49.9f - var_1_70))) ? ((var_1_9 - 32.5f)) : ((49.9f - var_1_70)))))) : 1)) && ((var_1_11 == (((((var_1_29 / var_1_72)) < (var_1_76)) ? ((var_1_29 / var_1_72)) : (var_1_76)))) ? (var_1_84 == ((signed char) -32)) : 1)) && (var_1_20 ? (var_1_85 == ((signed long int) (var_1_39 - var_1_111))) : ((var_1_44 > (var_1_46 / var_1_72)) ? (var_1_85 == ((signed long int) (var_1_65 - var_1_27))) : (((var_1_59 / 25u) > var_1_15) ? (var_1_85 == ((signed long int) (((((var_1_22) > (var_1_71)) ? (var_1_22) : (var_1_71))) + var_1_60))) : (var_1_85 == ((signed long int) ((var_1_30 - var_1_27) + var_1_111))))))) && ((5 > var_1_19) ? (var_1_86 == ((double) ((var_1_9 - var_1_70) + var_1_8))) : ((var_1_21 && var_1_50) ? (var_1_86 == ((double) (0.75 - var_1_9))) : 1))) && ((var_1_8 <= (((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))) / ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? ((var_1_51 && var_1_21) ? (var_1_87 == ((float) (var_1_6 + var_1_70))) : (var_1_87 == ((float) (2.7f + ((((var_1_8) > (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) ? (var_1_8) : (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))))))) : (var_1_87 == ((float) ((var_1_88 - (var_1_89 + var_1_90)) - var_1_70))))) && (((var_1_34 - 4) > 32) ? ((var_1_22 >= var_1_74) ? (var_1_91 == ((double) (var_1_8 + ((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89)))))) : (var_1_91 == ((double) (((((var_1_89 - 4.5)) < (var_1_7)) ? ((var_1_89 - 4.5)) : (var_1_7)))))) : ((var_1_32 < var_1_82) ? (((var_1_15 / var_1_67) >= var_1_28) ? (var_1_91 == ((double) (var_1_90 + ((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89)))))) : 1) : 1))) && (var_1_20 ? (var_1_92 == ((signed short int) (((((-10) > (var_1_60)) ? (-10) : (var_1_60))) + (var_1_67 - var_1_75)))) : 1)) && (var_1_115 ? ((var_1_88 <= var_1_24) ? (var_1_93 == ((signed short int) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) : 1) : (var_1_93 == ((signed short int) (-16 + var_1_48))))) && (var_1_50 ? ((-10 >= (~ (var_1_53 + last_1_var_1_94))) ? (var_1_94 == ((signed long int) (var_1_61 + var_1_73))) : (var_1_94 == ((signed long int) ((var_1_72 + var_1_112) - var_1_48)))) : 1)) && ((last_1_var_1_95 == ((((var_1_101) < (var_1_90)) ? (var_1_101) : (var_1_90)))) ? ((((var_1_14 ^ var_1_25) / ((((var_1_60) < (var_1_67)) ? (var_1_60) : (var_1_67)))) != var_1_52) ? (var_1_95 == ((double) var_1_8)) : (var_1_95 == ((double) var_1_90))) : (var_1_95 == ((double) var_1_70)))) && (var_1_106 ? (var_1_97 == ((double) var_1_88)) : (var_1_97 == ((double) var_1_7)))) && (var_1_98 == ((unsigned long int) last_1_var_1_98))) && (var_1_99 == ((signed short int) var_1_82))) && (var_1_100 == ((signed char) var_1_60))) && (var_1_101 == ((double) var_1_88))) && (var_1_106 ? (var_1_102 == ((double) var_1_89)) : (var_1_102 == ((double) var_1_90)))) && (var_1_115 ? (var_1_103 == ((unsigned short int) var_1_65)) : 1)) && (var_1_115 ? (var_1_104 == ((double) var_1_88)) : 1)) && (var_1_105 == ((double) var_1_7))) && (var_1_106 == ((unsigned char) var_1_107))) && (var_1_106 ? (var_1_108 == ((double) var_1_88)) : (var_1_108 == ((double) var_1_9)))) && (var_1_50 ? (var_1_109 == ((signed char) var_1_60)) : (var_1_109 == ((signed char) var_1_48)))) && (var_1_110 == ((signed short int) var_1_36))) && (var_1_111 == ((unsigned short int) var_1_46))) && (var_1_112 == ((unsigned short int) var_1_53))) && (var_1_113 == ((unsigned long int) var_1_76))) && (var_1_114 == ((signed long int) 32))) && (var_1_107 ? (var_1_115 == ((unsigned char) var_1_21)) : 1)) && (var_1_106 ? ((-10 > (var_1_73 / ((((var_1_46) < (var_1_67)) ? (var_1_46) : (var_1_67))))) ? (var_1_116 == ((signed short int) ((var_1_60 - var_1_59) + ((((var_1_44) > (var_1_65)) ? (var_1_44) : (var_1_65)))))) : 1) : (var_1_116 == ((signed short int) last_1_var_1_116)))
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

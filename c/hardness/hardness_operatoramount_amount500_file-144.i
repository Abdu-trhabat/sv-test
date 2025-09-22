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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_2 = 1;
signed char var_1_3 = 2;
signed char var_1_4 = 0;
double var_1_5 = 50.5;
double var_1_7 = 5.25;
double var_1_8 = 999999999999.6;
double var_1_9 = 0.56;
double var_1_10 = 127.05;
double var_1_11 = 0.0;
double var_1_12 = 128.239;
signed long int var_1_13 = 10;
signed long int var_1_16 = 1248964381;
signed long int var_1_17 = 1555466418;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned long int var_1_24 = 128;
unsigned long int var_1_25 = 8;
double var_1_26 = 127.6;
signed char var_1_27 = 16;
unsigned long int var_1_28 = 0;
signed short int var_1_29 = -128;
unsigned short int var_1_30 = 128;
unsigned long int var_1_31 = 2257933145;
signed short int var_1_32 = 100;
signed short int var_1_33 = -32;
signed char var_1_34 = -2;
signed char var_1_36 = 32;
signed char var_1_37 = 5;
signed char var_1_38 = -4;
signed char var_1_39 = -25;
unsigned long int var_1_40 = 2;
unsigned long int var_1_41 = 3288171653;
float var_1_42 = 256.2;
float var_1_43 = 25.25;
float var_1_44 = 499.75;
signed long int var_1_45 = 2;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
signed long int var_1_48 = -1;
unsigned short int var_1_49 = 1000;
double var_1_50 = 7.74;
float var_1_51 = 5.875;
float var_1_52 = 0.0;
float var_1_53 = 1.5;
float var_1_54 = 0.0;
signed short int var_1_55 = -128;
signed char var_1_56 = 32;
signed char var_1_57 = 64;
signed char var_1_58 = 0;
float var_1_59 = -0.5;
unsigned short int var_1_60 = 32;
unsigned short int var_1_61 = 17050;
unsigned char var_1_62 = 200;
unsigned char var_1_63 = 200;
unsigned char var_1_64 = 128;
unsigned char var_1_65 = 2;
unsigned char var_1_66 = 200;
unsigned char var_1_67 = 128;
unsigned short int var_1_68 = 40443;
unsigned char var_1_69 = 64;
unsigned char var_1_70 = 16;
double var_1_71 = 10.5;
double var_1_72 = 4.5;
unsigned char var_1_73 = 1;
unsigned char var_1_74 = 100;
float var_1_75 = 100.4;
unsigned long int var_1_76 = 50;
double var_1_78 = 63.75;
double var_1_80 = 0.0;
unsigned char var_1_81 = 100;
float var_1_82 = 5.4;
float var_1_83 = 25.3;
unsigned char var_1_84 = 1;
unsigned char var_1_86 = 128;
unsigned char var_1_87 = 4;
signed char var_1_88 = -4;
signed char var_1_91 = 64;
signed char var_1_92 = 8;
unsigned short int var_1_93 = 256;
float var_1_94 = 64.25;
unsigned char var_1_95 = 64;
unsigned char var_1_96 = 1;
float var_1_97 = 10.225;
unsigned char var_1_98 = 8;
signed long int var_1_99 = -5;
double var_1_100 = 7.375;
float var_1_101 = 5.5;
unsigned long int var_1_102 = 64;
unsigned short int var_1_103 = 1;
unsigned short int var_1_104 = 64;
unsigned char var_1_105 = 50;
signed long int var_1_106 = -200;
unsigned char var_1_107 = 1;
unsigned char var_1_108 = 100;
unsigned long int var_1_109 = 0;
unsigned char var_1_110 = 16;
unsigned long int var_1_111 = 200;
unsigned char last_1_var_1_46 = 0;
double last_1_var_1_78 = 63.75;
unsigned char last_1_var_1_81 = 100;
signed long int last_1_var_1_99 = -5;
double last_1_var_1_100 = 7.375;
unsigned char last_1_var_1_107 = 1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_8 = last_1_var_1_46;
 if (last_1_var_1_107 || stepLocal_8) {
  var_1_40 = (var_1_41 - var_1_17);
 }
 if (1.25 <= last_1_var_1_100) {
  var_1_22 = (var_1_20 || ((-8 > var_1_2) && var_1_21));
 }
 if (var_1_22) {
  var_1_100 = 8.5;
 } else {
  var_1_100 = var_1_11;
 }
 var_1_1 = ((100 - var_1_2) - ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))));
 if (var_1_8 > (var_1_11 + -0.5)) {
  var_1_24 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
 } else {
  var_1_24 = ((((var_1_25) > (var_1_16)) ? (var_1_25) : (var_1_16)));
 }
 if (var_1_9 > var_1_8) {
  var_1_27 = (((((var_1_4) < (8)) ? (var_1_4) : (8))) - var_1_3);
 }
 signed char stepLocal_7 = var_1_4;
 if (stepLocal_7 > (var_1_30 + var_1_24)) {
  var_1_34 = ((var_1_2 - (var_1_36 - var_1_37)) + (var_1_38 + var_1_39));
 }
 if (var_1_20) {
  var_1_45 = (var_1_17 - (var_1_4 + var_1_2));
 }
 signed char stepLocal_14 = var_1_38;
 if (stepLocal_14 == ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) {
  var_1_48 = (((((5) > ((var_1_2 - var_1_30))) ? (5) : ((var_1_2 - var_1_30)))) + (var_1_3 - var_1_4));
 }
 signed long int stepLocal_15 = (((var_1_3) < ((var_1_36 / -1))) ? (var_1_3) : ((var_1_36 / -1)));
 if ((5 * var_1_40) > stepLocal_15) {
  var_1_49 = (var_1_4 + var_1_37);
 } else {
  var_1_49 = (var_1_2 + var_1_37);
 }
 var_1_51 = ((var_1_52 - ((((var_1_12) < (var_1_53)) ? (var_1_12) : (var_1_53)))) - (((((var_1_11) < (var_1_54)) ? (var_1_11) : (var_1_54))) - 255.5f));
 if (63.8f > var_1_100) {
  if (var_1_9 == var_1_44) {
   if (var_1_19) {
    var_1_56 = (4 - ((((var_1_36) < (var_1_4)) ? (var_1_36) : (var_1_4))));
   }
  } else {
   var_1_56 = (var_1_37 - (var_1_57 - (var_1_36 - var_1_58)));
  }
 } else {
  var_1_56 = ((((var_1_36 - var_1_2) < 0 ) ? -(var_1_36 - var_1_2) : (var_1_36 - var_1_2)));
 }
 if (32.3f == (((((var_1_54 - 4.875f)) < (var_1_7)) ? ((var_1_54 - 4.875f)) : (var_1_7)))) {
  var_1_60 = ((var_1_61 - var_1_2) + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))));
 } else {
  if (var_1_22) {
   if ((- var_1_10) >= (var_1_11 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) {
    var_1_60 = ((var_1_61 - 100) + var_1_36);
   }
  } else {
   var_1_60 = var_1_4;
  }
 }
 var_1_71 = (((((((((49.8) < 0 ) ? -(49.8) : (49.8)))) < (((((var_1_72) < (var_1_12)) ? (var_1_72) : (var_1_12))))) ? (((((49.8) < 0 ) ? -(49.8) : (49.8)))) : (((((var_1_72) < (var_1_12)) ? (var_1_72) : (var_1_12)))))) + var_1_53);
 signed long int stepLocal_19 = (((32) > (((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))))) ? (32) : (((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39)))));
 if (((((var_1_52) < (var_1_100)) ? (var_1_52) : (var_1_100))) != (var_1_44 - (var_1_12 + 4.25f))) {
  if (var_1_38 < stepLocal_19) {
   var_1_73 = (var_1_37 + ((((var_1_57) > ((var_1_74 - var_1_58))) ? (var_1_57) : ((var_1_74 - var_1_58)))));
  } else {
   var_1_73 = (var_1_64 - var_1_57);
  }
 } else {
  var_1_73 = var_1_66;
 }
 signed long int stepLocal_21 = 1;
 if ((-8 + var_1_48) <= stepLocal_21) {
  var_1_76 = (var_1_17 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))));
 }
 signed char stepLocal_24 = var_1_56;
 if (var_1_57 <= stepLocal_24) {
  var_1_82 = var_1_43;
 } else {
  var_1_82 = (var_1_10 - (((((var_1_54 - var_1_53)) < ((var_1_11 - var_1_12))) ? ((var_1_54 - var_1_53)) : ((var_1_11 - var_1_12)))));
 }
 var_1_96 = var_1_19;
 var_1_97 = var_1_44;
 var_1_101 = var_1_72;
 var_1_105 = var_1_3;
 var_1_107 = var_1_47;
 var_1_109 = var_1_87;
 if (var_1_4 < var_1_2) {
  var_1_18 = (var_1_19 || (var_1_20 || (var_1_96 && var_1_21)));
 } else {
  if (var_1_12 < var_1_8) {
   var_1_18 = (var_1_19 && var_1_20);
  } else {
   if (var_1_9 <= 7.1) {
    var_1_18 = (var_1_19 && var_1_20);
   }
  }
 }
 unsigned char stepLocal_4 = var_1_20;
 if (var_1_18 && stepLocal_4) {
  var_1_28 = ((((var_1_4 + (var_1_17 - 128u)) < 0 ) ? -(var_1_4 + (var_1_17 - 128u)) : (var_1_4 + (var_1_17 - 128u))));
 }
 if (var_1_96) {
  if (var_1_21) {
   var_1_33 = var_1_2;
  }
 } else {
  var_1_33 = var_1_32;
 }
 if (var_1_20) {
  if (var_1_7 == var_1_12) {
   var_1_55 = var_1_38;
  } else {
   if (! (var_1_43 >= (- var_1_71))) {
    var_1_55 = ((((((((var_1_4 - var_1_3) < 0 ) ? -(var_1_4 - var_1_3) : (var_1_4 - var_1_3)))) < (var_1_39)) ? (((((var_1_4 - var_1_3) < 0 ) ? -(var_1_4 - var_1_3) : (var_1_4 - var_1_3)))) : (var_1_39)));
   }
  }
 }
 if ((var_1_58 / (128 + var_1_36)) >= var_1_28) {
  var_1_62 = (((((var_1_4 + var_1_36)) > (var_1_58)) ? ((var_1_4 + var_1_36)) : (var_1_58)));
 } else {
  if (var_1_61 >= var_1_17) {
   var_1_62 = ((((var_1_37) < ((var_1_63 - var_1_58))) ? (var_1_37) : ((var_1_63 - var_1_58))));
  } else {
   if (var_1_22) {
    var_1_62 = ((((var_1_37) < (1)) ? (var_1_37) : (1)));
   } else {
    var_1_62 = ((((var_1_64 - var_1_36) < 0 ) ? -(var_1_64 - var_1_36) : (var_1_64 - var_1_36)));
   }
  }
 }
 if (! var_1_18) {
  if (((var_1_68 - var_1_64) & (var_1_45 / var_1_61)) > var_1_39) {
   var_1_67 = (var_1_36 + ((((10) > (var_1_3)) ? (10) : (var_1_3))));
  }
 } else {
  var_1_67 = ((((var_1_36) > (var_1_57)) ? (var_1_36) : (var_1_57)));
 }
 signed char stepLocal_23 = var_1_4;
 if (((((last_1_var_1_81) > (var_1_28)) ? (last_1_var_1_81) : (var_1_28))) >= stepLocal_23) {
  var_1_81 = ((((var_1_36) > (((var_1_74 - var_1_37) + (var_1_58 + var_1_2)))) ? (var_1_36) : (((var_1_74 - var_1_37) + (var_1_58 + var_1_2)))));
 } else {
  var_1_81 = ((var_1_36 + var_1_37) + var_1_3);
 }
 if (var_1_96) {
  var_1_94 = var_1_44;
 }
 if (var_1_18) {
  var_1_98 = var_1_63;
 } else {
  var_1_98 = var_1_58;
 }
 if (var_1_107) {
  var_1_99 = last_1_var_1_99;
 }
 if (var_1_18) {
  var_1_102 = 256u;
 }
 if (var_1_18) {
  var_1_106 = var_1_61;
 }
 if (var_1_18) {
  var_1_110 = var_1_4;
 }
 if (var_1_51 <= var_1_53) {
  if ((var_1_91 * 128u) < ((5u << var_1_17) / (var_1_41 - var_1_16))) {
   var_1_111 = var_1_4;
  } else {
   var_1_111 = 0u;
  }
 } else {
  var_1_111 = var_1_67;
 }
 unsigned long int stepLocal_13 = var_1_40;
 signed long int stepLocal_12 = - 128;
 signed short int stepLocal_11 = var_1_32;
 unsigned long int stepLocal_10 = var_1_31;
 unsigned short int stepLocal_9 = var_1_30;
 if (last_1_var_1_46) {
  if (stepLocal_13 <= var_1_36) {
   if (stepLocal_10 <= var_1_36) {
    var_1_46 = (! var_1_47);
   } else {
    var_1_46 = (! (! var_1_21));
   }
  }
 } else {
  if (stepLocal_12 < (var_1_24 + var_1_111)) {
   if (var_1_40 <= stepLocal_9) {
    if (stepLocal_11 >= ((var_1_4 - var_1_2) + var_1_16)) {
     var_1_46 = (! var_1_21);
    } else {
     var_1_46 = (var_1_21 || var_1_20);
    }
   }
  }
 }
 signed long int stepLocal_1 = - (var_1_3 / 2);
 signed char stepLocal_0 = var_1_4;
 if ((var_1_106 & var_1_1) >= stepLocal_0) {
  if (stepLocal_1 <= (var_1_106 | var_1_2)) {
   var_1_5 = ((((((((var_1_7) > ((64.75 + var_1_8))) ? (var_1_7) : ((64.75 + var_1_8))))) < (var_1_9)) ? (((((var_1_7) > ((64.75 + var_1_8))) ? (var_1_7) : ((64.75 + var_1_8))))) : (var_1_9)));
  } else {
   var_1_5 = ((((var_1_9) > ((var_1_10 - (var_1_11 - var_1_12)))) ? (var_1_9) : ((var_1_10 - (var_1_11 - var_1_12)))));
  }
 }
 unsigned char stepLocal_2 = -10 > (var_1_3 - var_1_2);
 if (! (var_1_12 < 256.2)) {
  if (var_1_46) {
   var_1_13 = var_1_3;
  } else {
   var_1_13 = ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2)));
  }
 } else {
  if (var_1_107) {
   var_1_13 = ((((((var_1_16 - var_1_2) - (var_1_17 - var_1_4))) < (var_1_3)) ? (((var_1_16 - var_1_2) - (var_1_17 - var_1_4))) : (var_1_3)));
  } else {
   if (stepLocal_2 || ((var_1_12 * var_1_10) < var_1_9)) {
    var_1_13 = (var_1_3 + var_1_4);
   }
  }
 }
 unsigned long int stepLocal_6 = var_1_111 % var_1_30;
 signed long int stepLocal_5 = var_1_17 * (var_1_16 - 10);
 if (stepLocal_6 >= (var_1_31 - (var_1_17 - var_1_3))) {
  if ((var_1_2 / var_1_30) == stepLocal_5) {
   var_1_29 = ((((((((var_1_4) > (var_1_2)) ? (var_1_4) : (var_1_2)))) > ((var_1_32 + var_1_3))) ? (((((var_1_4) > (var_1_2)) ? (var_1_4) : (var_1_2)))) : ((var_1_32 + var_1_3))));
  } else {
   var_1_29 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
  }
 } else {
  var_1_29 = (var_1_4 - 256);
 }
 unsigned char stepLocal_16 = ((((var_1_13) < (var_1_30)) ? (var_1_13) : (var_1_30))) > var_1_36;
 if (var_1_9 < var_1_8) {
  if (stepLocal_16 || var_1_107) {
   var_1_50 = var_1_44;
  } else {
   var_1_50 = (var_1_12 + ((((var_1_8) < (63.4)) ? (var_1_8) : (63.4))));
  }
 } else {
  var_1_50 = (var_1_11 - var_1_12);
 }
 if (var_1_46) {
  var_1_59 = ((7.176269503031607E18f - 256.5f) - var_1_52);
 } else {
  var_1_59 = (var_1_12 + var_1_53);
 }
 signed long int stepLocal_18 = var_1_106;
 if (var_1_16 >= stepLocal_18) {
  var_1_70 = var_1_63;
 }
 unsigned char stepLocal_20 = var_1_22;
 if (stepLocal_20 && (var_1_37 < (var_1_81 + var_1_73))) {
  var_1_75 = (((((var_1_12 + ((((var_1_53) < (var_1_8)) ? (var_1_53) : (var_1_8))))) > (var_1_9)) ? ((var_1_12 + ((((var_1_53) < (var_1_8)) ? (var_1_53) : (var_1_8))))) : (var_1_9)));
 } else {
  var_1_75 = (((((var_1_72 + ((((var_1_12) < (var_1_8)) ? (var_1_12) : (var_1_8))))) > (var_1_11)) ? ((var_1_72 + ((((var_1_12) < (var_1_8)) ? (var_1_12) : (var_1_8))))) : (var_1_11)));
 }
 unsigned long int stepLocal_22 = var_1_41;
 if ((var_1_5 / var_1_52) > last_1_var_1_78) {
  if (var_1_25 >= stepLocal_22) {
   var_1_78 = (var_1_12 - 255.1);
  }
 } else {
  if (var_1_7 > (var_1_44 - (var_1_80 - var_1_53))) {
   var_1_78 = ((var_1_54 - var_1_53) - var_1_43);
  }
 }
 unsigned long int stepLocal_25 = (((var_1_40) < ((var_1_99 - var_1_13))) ? (var_1_40) : ((var_1_99 - var_1_13)));
 if ((var_1_13 * (- var_1_40)) != stepLocal_25) {
  var_1_83 = (((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))) + var_1_53);
 }
 unsigned char stepLocal_30 = var_1_22;
 unsigned long int stepLocal_29 = var_1_111;
 unsigned char stepLocal_28 = var_1_73;
 if (var_1_22) {
  if (stepLocal_28 < var_1_38) {
   if (stepLocal_30 || var_1_107) {
    if ((var_1_58 * var_1_40) == stepLocal_29) {
     var_1_88 = (-5 + (var_1_37 + ((((1) > (var_1_39)) ? (1) : (var_1_39)))));
    } else {
     var_1_88 = ((((var_1_38) < (((((var_1_57) < (var_1_87)) ? (var_1_57) : (var_1_87))))) ? (var_1_38) : (((((var_1_57) < (var_1_87)) ? (var_1_57) : (var_1_87))))));
    }
   } else {
    var_1_88 = ((var_1_91 - (var_1_58 + 2)) - (var_1_92 + (var_1_87 + var_1_37)));
   }
  } else {
   var_1_88 = (var_1_36 - var_1_91);
  }
 } else {
  var_1_88 = ((var_1_87 - var_1_36) + (var_1_37 + var_1_58));
 }
 if (var_1_75 == ((((1.8f) > (var_1_50)) ? (1.8f) : (var_1_50)))) {
  var_1_93 = ((((var_1_98) < ((var_1_61 + var_1_66))) ? (var_1_98) : ((var_1_61 + var_1_66))));
 } else {
  var_1_93 = (var_1_109 + ((((var_1_91) < 0 ) ? -(var_1_91) : (var_1_91))));
 }
 if (var_1_46) {
  var_1_95 = var_1_3;
 } else {
  var_1_95 = var_1_86;
 }
 if (var_1_46) {
  var_1_103 = var_1_104;
 } else {
  var_1_103 = var_1_57;
 }
 if (var_1_46) {
  var_1_108 = var_1_36;
 } else {
  var_1_108 = var_1_91;
 }
 unsigned char stepLocal_3 = var_1_8 > var_1_12;
 if (stepLocal_3 || (var_1_93 >= var_1_109)) {
  var_1_26 = var_1_9;
 }
 if (var_1_3 <= (var_1_37 - ((((var_1_2) > (var_1_36)) ? (var_1_2) : (var_1_36))))) {
  if (var_1_37 <= ((var_1_95 & var_1_111) / var_1_36)) {
   var_1_42 = ((((var_1_43 - var_1_44) < 0 ) ? -(var_1_43 - var_1_44) : (var_1_43 - var_1_44)));
  }
 } else {
  if (var_1_46) {
   var_1_42 = (var_1_11 - var_1_10);
  } else {
   var_1_42 = (var_1_12 + ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))));
  }
 }
 unsigned char stepLocal_17 = var_1_47;
 if (var_1_21) {
  var_1_65 = 16;
 } else {
  if ((var_1_54 + var_1_10) >= (var_1_78 * 8.75)) {
   if (stepLocal_17 || var_1_107) {
    var_1_65 = var_1_36;
   } else {
    var_1_65 = ((((4) < (var_1_64)) ? (4) : (var_1_64)));
   }
  } else {
   var_1_65 = (((((var_1_66 - var_1_2) < 0 ) ? -(var_1_66 - var_1_2) : (var_1_66 - var_1_2))) - var_1_57);
  }
 }
 if (var_1_111 >= var_1_63) {
  if (((var_1_31 * var_1_109) != (- var_1_16)) || var_1_18) {
   var_1_69 = ((((var_1_64 - 32) < 0 ) ? -(var_1_64 - 32) : (var_1_64 - 32)));
  } else {
   var_1_69 = ((((var_1_63) < (4)) ? (var_1_63) : (4)));
  }
 } else {
  if (var_1_10 == var_1_78) {
   var_1_69 = var_1_36;
  }
 }
 unsigned long int stepLocal_27 = var_1_24;
 unsigned char stepLocal_26 = var_1_20 || (var_1_96 || var_1_22);
 if (var_1_21 && stepLocal_26) {
  if (var_1_26 <= ((var_1_12 + var_1_53) - ((((var_1_54) > (var_1_44)) ? (var_1_54) : (var_1_44))))) {
   var_1_84 = (var_1_36 + ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))));
  } else {
   var_1_84 = (var_1_86 - var_1_3);
  }
 } else {
  if (var_1_5 > (15.9 / ((((var_1_80) > (var_1_52)) ? (var_1_80) : (var_1_52))))) {
   if ((var_1_109 ^ var_1_66) > stepLocal_27) {
    var_1_84 = (((((var_1_63 - var_1_4)) < (((var_1_66 - var_1_36) - var_1_37))) ? ((var_1_63 - var_1_4)) : (((var_1_66 - var_1_36) - var_1_37))));
   } else {
    var_1_84 = var_1_37;
   }
  } else {
   var_1_84 = (var_1_58 + ((var_1_37 + var_1_87) + var_1_2));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 63);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 4611686.018427383000e+12F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 1073741822);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 1073741823);
 assume_abort_if_not(var_1_17 <= 2147483646);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 4294967294);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 65535);
 assume_abort_if_not(var_1_30 != 0);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 2147483647);
 assume_abort_if_not(var_1_31 <= 4294967295);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -16383);
 assume_abort_if_not(var_1_32 <= 16383);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 31);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 31);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -31);
 assume_abort_if_not(var_1_38 <= 32);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -31);
 assume_abort_if_not(var_1_39 <= 31);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 2147483647);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 4611686.018427383000e+12F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 4611686.018427383000e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= 63);
 assume_abort_if_not(var_1_57 <= 126);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 31);
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 16383);
 assume_abort_if_not(var_1_61 <= 32767);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 127);
 assume_abort_if_not(var_1_63 <= 254);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 127);
 assume_abort_if_not(var_1_64 <= 254);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 190);
 assume_abort_if_not(var_1_66 <= 254);
 var_1_68 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_68 >= 32767);
 assume_abort_if_not(var_1_68 <= 65535);
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= -461168.6018427383000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 63);
 assume_abort_if_not(var_1_74 <= 127);
 var_1_80 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_80 >= 4611686.018427388000e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_86 >= 127);
 assume_abort_if_not(var_1_86 <= 254);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 0);
 assume_abort_if_not(var_1_87 <= 32);
 var_1_91 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_91 >= 62);
 assume_abort_if_not(var_1_91 <= 126);
 var_1_92 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_92 >= 0);
 assume_abort_if_not(var_1_92 <= 63);
 var_1_104 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_104 >= 0);
 assume_abort_if_not(var_1_104 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_46 = var_1_46;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_107 = var_1_107;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((signed char) ((100 - var_1_2) - ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))))) && (((var_1_106 & var_1_1) >= var_1_4) ? (((- (var_1_3 / 2)) <= (var_1_106 | var_1_2)) ? (var_1_5 == ((double) ((((((((var_1_7) > ((64.75 + var_1_8))) ? (var_1_7) : ((64.75 + var_1_8))))) < (var_1_9)) ? (((((var_1_7) > ((64.75 + var_1_8))) ? (var_1_7) : ((64.75 + var_1_8))))) : (var_1_9))))) : (var_1_5 == ((double) ((((var_1_9) > ((var_1_10 - (var_1_11 - var_1_12)))) ? (var_1_9) : ((var_1_10 - (var_1_11 - var_1_12)))))))) : 1)) && ((! (var_1_12 < 256.2)) ? (var_1_46 ? (var_1_13 == ((signed long int) var_1_3)) : (var_1_13 == ((signed long int) ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2)))))) : (var_1_107 ? (var_1_13 == ((signed long int) ((((((var_1_16 - var_1_2) - (var_1_17 - var_1_4))) < (var_1_3)) ? (((var_1_16 - var_1_2) - (var_1_17 - var_1_4))) : (var_1_3))))) : (((-10 > (var_1_3 - var_1_2)) || ((var_1_12 * var_1_10) < var_1_9)) ? (var_1_13 == ((signed long int) (var_1_3 + var_1_4))) : 1)))) && ((var_1_4 < var_1_2) ? (var_1_18 == ((unsigned char) (var_1_19 || (var_1_20 || (var_1_96 && var_1_21))))) : ((var_1_12 < var_1_8) ? (var_1_18 == ((unsigned char) (var_1_19 && var_1_20))) : ((var_1_9 <= 7.1) ? (var_1_18 == ((unsigned char) (var_1_19 && var_1_20))) : 1)))) && ((1.25 <= last_1_var_1_100) ? (var_1_22 == ((unsigned char) (var_1_20 || ((-8 > var_1_2) && var_1_21)))) : 1)) && ((var_1_8 > (var_1_11 + -0.5)) ? (var_1_24 == ((unsigned long int) ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) : (var_1_24 == ((unsigned long int) ((((var_1_25) > (var_1_16)) ? (var_1_25) : (var_1_16))))))) && (((var_1_8 > var_1_12) || (var_1_93 >= var_1_109)) ? (var_1_26 == ((double) var_1_9)) : 1)) && ((var_1_9 > var_1_8) ? (var_1_27 == ((signed char) (((((var_1_4) < (8)) ? (var_1_4) : (8))) - var_1_3))) : 1)) && ((var_1_18 && var_1_20) ? (var_1_28 == ((unsigned long int) ((((var_1_4 + (var_1_17 - 128u)) < 0 ) ? -(var_1_4 + (var_1_17 - 128u)) : (var_1_4 + (var_1_17 - 128u)))))) : 1)) && (((var_1_111 % var_1_30) >= (var_1_31 - (var_1_17 - var_1_3))) ? (((var_1_2 / var_1_30) == (var_1_17 * (var_1_16 - 10))) ? (var_1_29 == ((signed short int) ((((((((var_1_4) > (var_1_2)) ? (var_1_4) : (var_1_2)))) > ((var_1_32 + var_1_3))) ? (((((var_1_4) > (var_1_2)) ? (var_1_4) : (var_1_2)))) : ((var_1_32 + var_1_3)))))) : (var_1_29 == ((signed short int) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) : (var_1_29 == ((signed short int) (var_1_4 - 256))))) && (var_1_96 ? (var_1_21 ? (var_1_33 == ((signed short int) var_1_2)) : 1) : (var_1_33 == ((signed short int) var_1_32)))) && ((var_1_4 > (var_1_30 + var_1_24)) ? (var_1_34 == ((signed char) ((var_1_2 - (var_1_36 - var_1_37)) + (var_1_38 + var_1_39)))) : 1)) && ((last_1_var_1_107 || last_1_var_1_46) ? (var_1_40 == ((unsigned long int) (var_1_41 - var_1_17))) : 1)) && ((var_1_3 <= (var_1_37 - ((((var_1_2) > (var_1_36)) ? (var_1_2) : (var_1_36))))) ? ((var_1_37 <= ((var_1_95 & var_1_111) / var_1_36)) ? (var_1_42 == ((float) ((((var_1_43 - var_1_44) < 0 ) ? -(var_1_43 - var_1_44) : (var_1_43 - var_1_44))))) : 1) : (var_1_46 ? (var_1_42 == ((float) (var_1_11 - var_1_10))) : (var_1_42 == ((float) (var_1_12 + ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))))) && (var_1_20 ? (var_1_45 == ((signed long int) (var_1_17 - (var_1_4 + var_1_2)))) : 1)) && (last_1_var_1_46 ? ((var_1_40 <= var_1_36) ? ((var_1_31 <= var_1_36) ? (var_1_46 == ((unsigned char) (! var_1_47))) : (var_1_46 == ((unsigned char) (! (! var_1_21))))) : 1) : (((- 128) < (var_1_24 + var_1_111)) ? ((var_1_40 <= var_1_30) ? ((var_1_32 >= ((var_1_4 - var_1_2) + var_1_16)) ? (var_1_46 == ((unsigned char) (! var_1_21))) : (var_1_46 == ((unsigned char) (var_1_21 || var_1_20)))) : 1) : 1))) && ((var_1_38 == ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) ? (var_1_48 == ((signed long int) (((((5) > ((var_1_2 - var_1_30))) ? (5) : ((var_1_2 - var_1_30)))) + (var_1_3 - var_1_4)))) : 1)) && (((5 * var_1_40) > ((((var_1_3) < ((var_1_36 / -1))) ? (var_1_3) : ((var_1_36 / -1))))) ? (var_1_49 == ((unsigned short int) (var_1_4 + var_1_37))) : (var_1_49 == ((unsigned short int) (var_1_2 + var_1_37))))) && ((var_1_9 < var_1_8) ? (((((((var_1_13) < (var_1_30)) ? (var_1_13) : (var_1_30))) > var_1_36) || var_1_107) ? (var_1_50 == ((double) var_1_44)) : (var_1_50 == ((double) (var_1_12 + ((((var_1_8) < (63.4)) ? (var_1_8) : (63.4))))))) : (var_1_50 == ((double) (var_1_11 - var_1_12))))) && (var_1_51 == ((float) ((var_1_52 - ((((var_1_12) < (var_1_53)) ? (var_1_12) : (var_1_53)))) - (((((var_1_11) < (var_1_54)) ? (var_1_11) : (var_1_54))) - 255.5f))))) && (var_1_20 ? ((var_1_7 == var_1_12) ? (var_1_55 == ((signed short int) var_1_38)) : ((! (var_1_43 >= (- var_1_71))) ? (var_1_55 == ((signed short int) ((((((((var_1_4 - var_1_3) < 0 ) ? -(var_1_4 - var_1_3) : (var_1_4 - var_1_3)))) < (var_1_39)) ? (((((var_1_4 - var_1_3) < 0 ) ? -(var_1_4 - var_1_3) : (var_1_4 - var_1_3)))) : (var_1_39))))) : 1)) : 1)) && ((63.8f > var_1_100) ? ((var_1_9 == var_1_44) ? (var_1_19 ? (var_1_56 == ((signed char) (4 - ((((var_1_36) < (var_1_4)) ? (var_1_36) : (var_1_4)))))) : 1) : (var_1_56 == ((signed char) (var_1_37 - (var_1_57 - (var_1_36 - var_1_58)))))) : (var_1_56 == ((signed char) ((((var_1_36 - var_1_2) < 0 ) ? -(var_1_36 - var_1_2) : (var_1_36 - var_1_2))))))) && (var_1_46 ? (var_1_59 == ((float) ((7.176269503031607E18f - 256.5f) - var_1_52))) : (var_1_59 == ((float) (var_1_12 + var_1_53))))) && ((32.3f == (((((var_1_54 - 4.875f)) < (var_1_7)) ? ((var_1_54 - 4.875f)) : (var_1_7)))) ? (var_1_60 == ((unsigned short int) ((var_1_61 - var_1_2) + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) : (var_1_22 ? (((- var_1_10) >= (var_1_11 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) ? (var_1_60 == ((unsigned short int) ((var_1_61 - 100) + var_1_36))) : 1) : (var_1_60 == ((unsigned short int) var_1_4))))) && (((var_1_58 / (128 + var_1_36)) >= var_1_28) ? (var_1_62 == ((unsigned char) (((((var_1_4 + var_1_36)) > (var_1_58)) ? ((var_1_4 + var_1_36)) : (var_1_58))))) : ((var_1_61 >= var_1_17) ? (var_1_62 == ((unsigned char) ((((var_1_37) < ((var_1_63 - var_1_58))) ? (var_1_37) : ((var_1_63 - var_1_58)))))) : (var_1_22 ? (var_1_62 == ((unsigned char) ((((var_1_37) < (1)) ? (var_1_37) : (1))))) : (var_1_62 == ((unsigned char) ((((var_1_64 - var_1_36) < 0 ) ? -(var_1_64 - var_1_36) : (var_1_64 - var_1_36))))))))) && (var_1_21 ? (var_1_65 == ((unsigned char) 16)) : (((var_1_54 + var_1_10) >= (var_1_78 * 8.75)) ? ((var_1_47 || var_1_107) ? (var_1_65 == ((unsigned char) var_1_36)) : (var_1_65 == ((unsigned char) ((((4) < (var_1_64)) ? (4) : (var_1_64)))))) : (var_1_65 == ((unsigned char) (((((var_1_66 - var_1_2) < 0 ) ? -(var_1_66 - var_1_2) : (var_1_66 - var_1_2))) - var_1_57)))))) && ((! var_1_18) ? ((((var_1_68 - var_1_64) & (var_1_45 / var_1_61)) > var_1_39) ? (var_1_67 == ((unsigned char) (var_1_36 + ((((10) > (var_1_3)) ? (10) : (var_1_3)))))) : 1) : (var_1_67 == ((unsigned char) ((((var_1_36) > (var_1_57)) ? (var_1_36) : (var_1_57))))))) && ((var_1_111 >= var_1_63) ? ((((var_1_31 * var_1_109) != (- var_1_16)) || var_1_18) ? (var_1_69 == ((unsigned char) ((((var_1_64 - 32) < 0 ) ? -(var_1_64 - 32) : (var_1_64 - 32))))) : (var_1_69 == ((unsigned char) ((((var_1_63) < (4)) ? (var_1_63) : (4)))))) : ((var_1_10 == var_1_78) ? (var_1_69 == ((unsigned char) var_1_36)) : 1))) && ((var_1_16 >= var_1_106) ? (var_1_70 == ((unsigned char) var_1_63)) : 1)) && (var_1_71 == ((double) (((((((((49.8) < 0 ) ? -(49.8) : (49.8)))) < (((((var_1_72) < (var_1_12)) ? (var_1_72) : (var_1_12))))) ? (((((49.8) < 0 ) ? -(49.8) : (49.8)))) : (((((var_1_72) < (var_1_12)) ? (var_1_72) : (var_1_12)))))) + var_1_53)))) && ((((((var_1_52) < (var_1_100)) ? (var_1_52) : (var_1_100))) != (var_1_44 - (var_1_12 + 4.25f))) ? ((var_1_38 < ((((32) > (((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))))) ? (32) : (((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))))))) ? (var_1_73 == ((unsigned char) (var_1_37 + ((((var_1_57) > ((var_1_74 - var_1_58))) ? (var_1_57) : ((var_1_74 - var_1_58))))))) : (var_1_73 == ((unsigned char) (var_1_64 - var_1_57)))) : (var_1_73 == ((unsigned char) var_1_66)))) && ((var_1_22 && (var_1_37 < (var_1_81 + var_1_73))) ? (var_1_75 == ((float) (((((var_1_12 + ((((var_1_53) < (var_1_8)) ? (var_1_53) : (var_1_8))))) > (var_1_9)) ? ((var_1_12 + ((((var_1_53) < (var_1_8)) ? (var_1_53) : (var_1_8))))) : (var_1_9))))) : (var_1_75 == ((float) (((((var_1_72 + ((((var_1_12) < (var_1_8)) ? (var_1_12) : (var_1_8))))) > (var_1_11)) ? ((var_1_72 + ((((var_1_12) < (var_1_8)) ? (var_1_12) : (var_1_8))))) : (var_1_11))))))) && (((-8 + var_1_48) <= 1) ? (var_1_76 == ((unsigned long int) (var_1_17 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) : 1)) && (((var_1_5 / var_1_52) > last_1_var_1_78) ? ((var_1_25 >= var_1_41) ? (var_1_78 == ((double) (var_1_12 - 255.1))) : 1) : ((var_1_7 > (var_1_44 - (var_1_80 - var_1_53))) ? (var_1_78 == ((double) ((var_1_54 - var_1_53) - var_1_43))) : 1))) && ((((((last_1_var_1_81) > (var_1_28)) ? (last_1_var_1_81) : (var_1_28))) >= var_1_4) ? (var_1_81 == ((unsigned char) ((((var_1_36) > (((var_1_74 - var_1_37) + (var_1_58 + var_1_2)))) ? (var_1_36) : (((var_1_74 - var_1_37) + (var_1_58 + var_1_2))))))) : (var_1_81 == ((unsigned char) ((var_1_36 + var_1_37) + var_1_3))))) && ((var_1_57 <= var_1_56) ? (var_1_82 == ((float) var_1_43)) : (var_1_82 == ((float) (var_1_10 - (((((var_1_54 - var_1_53)) < ((var_1_11 - var_1_12))) ? ((var_1_54 - var_1_53)) : ((var_1_11 - var_1_12))))))))) && (((var_1_13 * (- var_1_40)) != ((((var_1_40) < ((var_1_99 - var_1_13))) ? (var_1_40) : ((var_1_99 - var_1_13))))) ? (var_1_83 == ((float) (((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))) + var_1_53))) : 1)) && ((var_1_21 && (var_1_20 || (var_1_96 || var_1_22))) ? ((var_1_26 <= ((var_1_12 + var_1_53) - ((((var_1_54) > (var_1_44)) ? (var_1_54) : (var_1_44))))) ? (var_1_84 == ((unsigned char) (var_1_36 + ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))))) : (var_1_84 == ((unsigned char) (var_1_86 - var_1_3)))) : ((var_1_5 > (15.9 / ((((var_1_80) > (var_1_52)) ? (var_1_80) : (var_1_52))))) ? (((var_1_109 ^ var_1_66) > var_1_24) ? (var_1_84 == ((unsigned char) (((((var_1_63 - var_1_4)) < (((var_1_66 - var_1_36) - var_1_37))) ? ((var_1_63 - var_1_4)) : (((var_1_66 - var_1_36) - var_1_37)))))) : (var_1_84 == ((unsigned char) var_1_37))) : (var_1_84 == ((unsigned char) (var_1_58 + ((var_1_37 + var_1_87) + var_1_2))))))) && (var_1_22 ? ((var_1_73 < var_1_38) ? ((var_1_22 || var_1_107) ? (((var_1_58 * var_1_40) == var_1_111) ? (var_1_88 == ((signed char) (-5 + (var_1_37 + ((((1) > (var_1_39)) ? (1) : (var_1_39))))))) : (var_1_88 == ((signed char) ((((var_1_38) < (((((var_1_57) < (var_1_87)) ? (var_1_57) : (var_1_87))))) ? (var_1_38) : (((((var_1_57) < (var_1_87)) ? (var_1_57) : (var_1_87))))))))) : (var_1_88 == ((signed char) ((var_1_91 - (var_1_58 + 2)) - (var_1_92 + (var_1_87 + var_1_37)))))) : (var_1_88 == ((signed char) (var_1_36 - var_1_91)))) : (var_1_88 == ((signed char) ((var_1_87 - var_1_36) + (var_1_37 + var_1_58)))))) && ((var_1_75 == ((((1.8f) > (var_1_50)) ? (1.8f) : (var_1_50)))) ? (var_1_93 == ((unsigned short int) ((((var_1_98) < ((var_1_61 + var_1_66))) ? (var_1_98) : ((var_1_61 + var_1_66)))))) : (var_1_93 == ((unsigned short int) (var_1_109 + ((((var_1_91) < 0 ) ? -(var_1_91) : (var_1_91)))))))) && (var_1_96 ? (var_1_94 == ((float) var_1_44)) : 1)) && (var_1_46 ? (var_1_95 == ((unsigned char) var_1_3)) : (var_1_95 == ((unsigned char) var_1_86)))) && (var_1_96 == ((unsigned char) var_1_19))) && (var_1_97 == ((float) var_1_44))) && (var_1_18 ? (var_1_98 == ((unsigned char) var_1_63)) : (var_1_98 == ((unsigned char) var_1_58)))) && (var_1_107 ? (var_1_99 == ((signed long int) last_1_var_1_99)) : 1)) && (var_1_22 ? (var_1_100 == ((double) 8.5)) : (var_1_100 == ((double) var_1_11)))) && (var_1_101 == ((float) var_1_72))) && (var_1_18 ? (var_1_102 == ((unsigned long int) 256u)) : 1)) && (var_1_46 ? (var_1_103 == ((unsigned short int) var_1_104)) : (var_1_103 == ((unsigned short int) var_1_57)))) && (var_1_105 == ((unsigned char) var_1_3))) && (var_1_18 ? (var_1_106 == ((signed long int) var_1_61)) : 1)) && (var_1_107 == ((unsigned char) var_1_47))) && (var_1_46 ? (var_1_108 == ((unsigned char) var_1_36)) : (var_1_108 == ((unsigned char) var_1_91)))) && (var_1_109 == ((unsigned long int) var_1_87))) && (var_1_18 ? (var_1_110 == ((unsigned char) var_1_4)) : 1)) && ((var_1_51 <= var_1_53) ? (((var_1_91 * 128u) < ((5u << var_1_17) / (var_1_41 - var_1_16))) ? (var_1_111 == ((unsigned long int) var_1_4)) : (var_1_111 == ((unsigned long int) 0u))) : (var_1_111 == ((unsigned long int) var_1_67)))
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

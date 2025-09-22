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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch45Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 0;
signed long int var_1_5 = 5;
unsigned long int var_1_6 = 2;
unsigned long int var_1_7 = 8;
unsigned long int var_1_8 = 3974482504;
unsigned long int var_1_9 = 4191564779;
unsigned long int var_1_10 = 1942660812;
unsigned long int var_1_11 = 1000000000;
signed char var_1_12 = -128;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
unsigned long int var_1_15 = 0;
float var_1_19 = 32.975;
unsigned long int var_1_20 = 16;
unsigned char var_1_21 = 8;
signed short int var_1_23 = -2;
double var_1_24 = 255.8;
double var_1_25 = 32.5;
double var_1_26 = 7.6;
double var_1_27 = 0.0;
double var_1_28 = 0.5;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 10;
unsigned char var_1_34 = 200;
unsigned long int var_1_35 = 5;
signed char var_1_36 = 1;
signed char var_1_37 = 4;
signed short int var_1_38 = -2;
signed short int var_1_39 = 2;
signed long int var_1_41 = -25;
float var_1_42 = 3.5;
float var_1_43 = 9999999999.1;
float var_1_44 = 9.6;
float var_1_45 = 10.5;
unsigned char var_1_46 = 1;
float var_1_47 = 32.5;
float var_1_48 = 7.75;
float var_1_49 = 0.0;
float var_1_50 = 3.4;
float var_1_51 = 9.2;
float var_1_52 = -0.28;
unsigned long int var_1_53 = 10000000;
unsigned long int var_1_54 = 64;
float var_1_55 = 3.5;
unsigned long int var_1_57 = 1;
unsigned long int var_1_58 = 256;
unsigned char var_1_59 = 128;
unsigned char var_1_60 = 2;
signed long int var_1_61 = 1;
signed char var_1_62 = -25;
unsigned char var_1_63 = 1;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
double var_1_67 = 10.5;
float var_1_68 = 100.4;
unsigned short int var_1_69 = 46129;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 0;
signed short int var_1_72 = -4;
float var_1_73 = 50.4;
signed char var_1_74 = -128;
unsigned char var_1_75 = 2;
signed long int var_1_76 = 100000;
signed long int var_1_77 = 1000000000;
float var_1_78 = 4.6;
float var_1_80 = 0.0;
unsigned long int var_1_81 = 0;
signed long int var_1_82 = 32;
signed char var_1_83 = 25;
double var_1_85 = 1.6;
signed short int var_1_86 = 1;
signed short int var_1_87 = -32;
float var_1_88 = 64.25;
signed short int var_1_89 = -16;
double var_1_90 = 16.75;
signed short int var_1_91 = 0;
signed short int var_1_92 = -256;
unsigned long int var_1_93 = 8;
signed long int var_1_94 = -16;
signed long int var_1_95 = 64;
signed short int var_1_96 = 10000;
double var_1_97 = 1.125;
signed long int var_1_98 = -100;
float var_1_99 = 15.8;
double var_1_100 = 64.25;
unsigned char var_1_101 = 0;
double var_1_102 = 1.5;
double var_1_103 = 256.6;
float var_1_104 = 10000000000000.6;
double var_1_105 = 3.5;
double var_1_106 = 24.75;
signed long int var_1_107 = -4;
unsigned long int last_1_var_1_1 = 0;
signed short int last_1_var_1_14 = -1;
double last_1_var_1_24 = 255.8;
signed short int last_1_var_1_38 = -2;
unsigned long int last_1_var_1_53 = 10000000;
float last_1_var_1_55 = 3.5;
unsigned long int last_1_var_1_57 = 1;
unsigned long int last_1_var_1_58 = 256;
unsigned char last_1_var_1_63 = 1;
signed long int last_1_var_1_76 = 100000;
float last_1_var_1_78 = 4.6;
signed long int last_1_var_1_82 = 32;
double last_1_var_1_97 = 1.125;
unsigned char last_1_var_1_101 = 0;
double last_1_var_1_106 = 24.75;
signed long int last_1_var_1_107 = -4;
void initially(void) {
}
void step(void) {
 if (63.5 <= last_1_var_1_24) {
  var_1_87 = ((((1 + last_1_var_1_107) < 0 ) ? -(1 + last_1_var_1_107) : (1 + last_1_var_1_107)));
 } else {
  if (var_1_43 < (last_1_var_1_106 / var_1_27)) {
   var_1_87 = ((((5) > (((((-100) < (var_1_46)) ? (-100) : (var_1_46))))) ? (5) : (((((-100) < (var_1_46)) ? (-100) : (var_1_46))))));
  } else {
   var_1_87 = var_1_39;
  }
 }
 unsigned long int stepLocal_31 = var_1_87 - var_1_6;
 if (((((var_1_13 - var_1_46) < 0 ) ? -(var_1_13 - var_1_46) : (var_1_13 - var_1_46))) <= stepLocal_31) {
  var_1_106 = (var_1_48 + var_1_44);
 } else {
  var_1_106 = ((((var_1_27) > (var_1_49)) ? (var_1_27) : (var_1_49)));
 }
 unsigned char stepLocal_13 = last_1_var_1_55 > last_1_var_1_78;
 unsigned long int stepLocal_12 = 0u;
 unsigned long int stepLocal_11 = - last_1_var_1_1;
 if ((last_1_var_1_97 + 1.0000000000004E12) < var_1_50) {
  if (stepLocal_12 > var_1_5) {
   if (((var_1_25 * var_1_47) < var_1_48) && stepLocal_13) {
    if (last_1_var_1_82 < stepLocal_11) {
     var_1_57 = (var_1_8 - var_1_13);
    } else {
     var_1_57 = ((((((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) > (var_1_20)) ? (((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) : (var_1_20)));
    }
   } else {
    var_1_57 = ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_20) < 0 ) ? -(((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_20) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_20)));
   }
  }
 }
 signed long int stepLocal_4 = var_1_5 << last_1_var_1_58;
 unsigned long int stepLocal_3 = var_1_20;
 if (stepLocal_4 <= last_1_var_1_38) {
  var_1_29 = ((last_1_var_1_38 <= var_1_7) || var_1_30);
 } else {
  if ((var_1_28 + 32.3) < (- ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))) {
   if (var_1_9 < stepLocal_3) {
    var_1_29 = ((1 >= var_1_13) && (! var_1_30));
   } else {
    var_1_29 = (var_1_30 || var_1_32);
   }
  }
 }
 unsigned long int stepLocal_1 = (last_1_var_1_57 * last_1_var_1_53) >> var_1_5;
 unsigned char stepLocal_0 = last_1_var_1_101;
 if ((last_1_var_1_57 >= last_1_var_1_53) || stepLocal_0) {
  if (stepLocal_1 >= 50u) {
   var_1_1 = (var_1_5 + (var_1_6 + var_1_7));
  } else {
   var_1_1 = (var_1_5 + ((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))));
  }
 } else {
  if (last_1_var_1_101) {
   var_1_1 = (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - (var_1_10 - (var_1_11 - var_1_5)));
  }
 }
 var_1_23 = var_1_5;
 var_1_24 = (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) - (var_1_27 - var_1_28));
 var_1_41 = ((((var_1_34) < (var_1_5)) ? (var_1_34) : (var_1_5)));
 var_1_52 = var_1_43;
 signed long int stepLocal_14 = ((((var_1_34) > (var_1_59)) ? (var_1_34) : (var_1_59))) - var_1_13;
 if (stepLocal_14 <= (var_1_20 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) {
  var_1_58 = (var_1_6 + (var_1_10 - var_1_39));
 } else {
  var_1_58 = var_1_10;
 }
 var_1_72 = (var_1_39 + var_1_34);
 signed char stepLocal_24 = var_1_13;
 if (stepLocal_24 > var_1_57) {
  var_1_74 = (8 - var_1_46);
 } else {
  var_1_74 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
 }
 if (99.4f < var_1_48) {
  var_1_88 = ((var_1_48 - (var_1_51 + var_1_50)) + var_1_47);
 }
 var_1_90 = var_1_51;
 if (var_1_66) {
  var_1_91 = var_1_36;
 }
 var_1_92 = -50;
 if (var_1_32) {
  var_1_93 = var_1_39;
 }
 var_1_95 = var_1_59;
 var_1_97 = var_1_50;
 var_1_98 = var_1_87;
 if (var_1_71) {
  var_1_99 = var_1_44;
 } else {
  var_1_99 = var_1_25;
 }
 var_1_100 = var_1_80;
 if (var_1_66) {
  var_1_101 = var_1_65;
 } else {
  var_1_101 = 0;
 }
 if (var_1_71) {
  var_1_103 = var_1_50;
 } else {
  var_1_103 = var_1_45;
 }
 var_1_105 = var_1_25;
 var_1_107 = var_1_46;
 signed short int stepLocal_5 = var_1_72;
 if (stepLocal_5 <= (var_1_57 * 128)) {
  var_1_33 = var_1_13;
 } else {
  var_1_33 = ((var_1_34 - var_1_5) - var_1_13);
 }
 unsigned long int stepLocal_8 = var_1_57;
 unsigned long int stepLocal_7 = var_1_1;
 if (var_1_7 >= stepLocal_7) {
  var_1_42 = ((((((var_1_43 + var_1_44) + (var_1_28 - var_1_45))) < (5.3f)) ? (((var_1_43 + var_1_44) + (var_1_28 - var_1_45))) : (5.3f)));
 } else {
  if ((var_1_36 >> var_1_46) > stepLocal_8) {
   var_1_42 = (((var_1_47 + var_1_48) + (var_1_49 - var_1_50)) - ((15.4f + var_1_51) + var_1_45));
  }
 }
 signed long int stepLocal_20 = - (var_1_69 - var_1_59);
 signed char stepLocal_19 = var_1_13;
 unsigned char stepLocal_18 = var_1_101;
 if (stepLocal_20 > (var_1_7 / var_1_10)) {
  if (var_1_32) {
   if (var_1_69 > stepLocal_19) {
    var_1_68 = (var_1_48 + var_1_28);
   } else {
    var_1_68 = ((((((var_1_48) > (var_1_50)) ? (var_1_48) : (var_1_50))) + (var_1_47 + var_1_51)) - 15.4f);
   }
  } else {
   var_1_68 = (var_1_47 + var_1_44);
  }
 } else {
  if (var_1_29 && stepLocal_18) {
   var_1_68 = (var_1_26 - ((4.2620201975235154E18f + var_1_49) - 9.9999999925E8f));
  }
 }
 unsigned long int stepLocal_9 = var_1_95 | (var_1_58 + var_1_1);
 if ((last_1_var_1_53 / var_1_34) == stepLocal_9) {
  var_1_53 = (((((var_1_9) < (var_1_8)) ? (var_1_9) : (var_1_8))) - ((((var_1_54) < (var_1_36)) ? (var_1_54) : (var_1_36))));
 } else {
  var_1_53 = (last_1_var_1_53 + var_1_36);
 }
 unsigned char stepLocal_27 = (var_1_8 - var_1_20) > var_1_59;
 if ((var_1_1 >= last_1_var_1_76) && stepLocal_27) {
  var_1_76 = ((((var_1_95) > (var_1_5)) ? (var_1_95) : (var_1_5)));
 } else {
  var_1_76 = (last_1_var_1_76 - ((var_1_11 - var_1_46) + (var_1_77 - var_1_5)));
 }
 unsigned long int stepLocal_6 = var_1_93;
 if (((var_1_5 + var_1_36) >> 1) > stepLocal_6) {
  var_1_35 = var_1_6;
 }
 if (var_1_101) {
  var_1_60 = (((((var_1_34) < (200)) ? (var_1_34) : (200))) - var_1_5);
 }
 if (var_1_23 >= (var_1_13 - var_1_5)) {
  if (var_1_29) {
   var_1_86 = (var_1_59 - var_1_53);
  }
 } else {
  var_1_86 = ((((var_1_59) > (((((var_1_53) > ((2 - var_1_34))) ? (var_1_53) : ((2 - var_1_34)))))) ? (var_1_59) : (((((var_1_53) > ((2 - var_1_34))) ? (var_1_53) : ((2 - var_1_34)))))));
 }
 if (var_1_98 < var_1_36) {
  var_1_89 = var_1_5;
 } else {
  var_1_89 = 100;
 }
 if (((((var_1_9) > (((((8) > (var_1_11)) ? (8) : (var_1_11))))) ? (var_1_9) : (((((8) > (var_1_11)) ? (8) : (var_1_11)))))) > (var_1_13 >> var_1_39)) {
  var_1_38 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
 } else {
  if ((var_1_28 - 128.25f) == (0.625 / var_1_27)) {
   if (((var_1_1 % var_1_5) + var_1_36) < (var_1_35 * var_1_33)) {
    var_1_38 = (var_1_39 - ((((var_1_5) < (var_1_34)) ? (var_1_5) : (var_1_34))));
   }
  } else {
   if (var_1_6 <= (~ var_1_7)) {
    var_1_38 = var_1_5;
   } else {
    var_1_38 = (var_1_39 + var_1_33);
   }
  }
 }
 signed long int stepLocal_22 = var_1_13 / (var_1_46 + var_1_5);
 unsigned long int stepLocal_21 = var_1_93 / var_1_59;
 if (stepLocal_22 >= (var_1_20 << var_1_76)) {
  var_1_70 = ((var_1_30 && var_1_32) && (var_1_65 && var_1_71));
 } else {
  if (stepLocal_21 <= ((var_1_7 * var_1_41) >> var_1_5)) {
   var_1_70 = var_1_30;
  } else {
   var_1_70 = (! (var_1_32 && var_1_71));
  }
 }
 unsigned long int stepLocal_23 = (var_1_69 + var_1_35) * var_1_1;
 if (var_1_93 < stepLocal_23) {
  var_1_73 = (var_1_48 - var_1_25);
 } else {
  var_1_73 = var_1_25;
 }
 unsigned char stepLocal_2 = var_1_101;
 if (var_1_70 || stepLocal_2) {
  if (! var_1_70) {
   var_1_21 = (var_1_5 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))));
  }
 }
 if (var_1_70 && var_1_65) {
  var_1_85 = (var_1_26 - ((var_1_49 - var_1_47) + var_1_28));
 } else {
  if ((- (- var_1_9)) < (var_1_36 + 32u)) {
   if (! var_1_70) {
    var_1_85 = (((((var_1_27) < (var_1_48)) ? (var_1_27) : (var_1_48))) - (7.397802701382283E18 - (var_1_49 - var_1_47)));
   }
  }
 }
 if (var_1_70) {
  var_1_102 = var_1_49;
 }
 if (var_1_70) {
  var_1_104 = var_1_43;
 }
 if (! var_1_29) {
  var_1_81 = ((var_1_10 - var_1_13) + (var_1_77 + var_1_46));
 } else {
  var_1_81 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
 }
 if (((((var_1_52) < (var_1_73)) ? (var_1_52) : (var_1_73))) > (var_1_73 / ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) {
  var_1_15 = ((var_1_10 - var_1_7) + (5u + var_1_11));
 } else {
  var_1_15 = (var_1_7 + (var_1_20 + var_1_11));
 }
 if (var_1_15 == var_1_5) {
  var_1_12 = (var_1_5 - (var_1_13 - 8));
 }
 unsigned char stepLocal_15 = var_1_27 == var_1_43;
 if (var_1_32 && stepLocal_15) {
  var_1_61 = ((((var_1_34) < (var_1_15)) ? (var_1_34) : (var_1_15)));
 } else {
  if (var_1_52 != (- (var_1_26 / 128.75f))) {
   var_1_61 = var_1_5;
  }
 }
 unsigned long int stepLocal_17 = var_1_81;
 unsigned char stepLocal_16 = var_1_46;
 if ((var_1_88 + (var_1_68 + var_1_45)) == var_1_51) {
  if (var_1_70) {
   var_1_62 = (((((((((var_1_36 + 5)) > (var_1_5)) ? ((var_1_36 + 5)) : (var_1_5)))) < (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) ? ((((((var_1_36 + 5)) > (var_1_5)) ? ((var_1_36 + 5)) : (var_1_5)))) : (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))));
  } else {
   if ((((((var_1_5) > (var_1_36)) ? (var_1_5) : (var_1_36))) - ((((var_1_46) < (0)) ? (var_1_46) : (0)))) > stepLocal_17) {
    if (! var_1_32) {
     var_1_62 = var_1_34;
    } else {
     var_1_62 = ((var_1_13 - var_1_39) - 1);
    }
   }
  }
 } else {
  if (var_1_1 <= stepLocal_16) {
   var_1_62 = -64;
  } else {
   if (var_1_32) {
    var_1_62 = ((var_1_39 + var_1_46) - 32);
   } else {
    var_1_62 = (var_1_46 + (var_1_5 + var_1_39));
   }
  }
 }
 if ((var_1_13 <= var_1_7) && (var_1_81 > var_1_77)) {
  if (var_1_101) {
   var_1_83 = (((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))) + var_1_46);
  } else {
   var_1_83 = ((var_1_46 + -16) + ((((var_1_5) < (var_1_36)) ? (var_1_5) : (var_1_36))));
  }
 }
 var_1_96 = var_1_81;
 if (var_1_30) {
  if (! (var_1_41 <= (var_1_81 + var_1_20))) {
   var_1_63 = (! (var_1_32 && var_1_65));
  } else {
   var_1_63 = (last_1_var_1_63 && var_1_66);
  }
 }
 unsigned char stepLocal_10 = var_1_15 > var_1_54;
 if (! var_1_63) {
  if (var_1_63 || stepLocal_10) {
   var_1_55 = var_1_47;
  } else {
   var_1_55 = ((((((var_1_47 + 0.8f) + var_1_48)) < ((var_1_51 - var_1_28))) ? (((var_1_47 + 0.8f) + var_1_48)) : ((var_1_51 - var_1_28))));
  }
 } else {
  var_1_55 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
 }
 signed long int stepLocal_29 = 1;
 signed long int stepLocal_28 = var_1_98 / ((((var_1_34) > (var_1_5)) ? (var_1_34) : (var_1_5)));
 if (var_1_29) {
  if (var_1_70) {
   var_1_78 = (((var_1_49 - var_1_50) + ((((var_1_51) < (var_1_48)) ? (var_1_51) : (var_1_48)))) - ((((var_1_47) > (((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28))))) ? (var_1_47) : (((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28)))))));
  } else {
   if (var_1_63) {
    var_1_78 = ((var_1_27 - var_1_50) - (((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80))) - var_1_48));
   } else {
    if (stepLocal_28 <= var_1_10) {
     if (stepLocal_29 <= var_1_53) {
      var_1_78 = (var_1_50 + ((((((((9.375f) < 0 ) ? -(9.375f) : (9.375f)))) < (3.5f)) ? (((((9.375f) < 0 ) ? -(9.375f) : (9.375f)))) : (3.5f))));
     } else {
      var_1_78 = (var_1_51 + ((((var_1_50) < (var_1_47)) ? (var_1_50) : (var_1_47))));
     }
    }
   }
  }
 } else {
  if (var_1_49 > ((32.25f / var_1_19) / var_1_80)) {
   var_1_78 = (50.5f - ((((2.4f) < (7.375f)) ? (2.4f) : (7.375f))));
  }
 }
 unsigned long int stepLocal_30 = - 10u;
 if (var_1_106 > var_1_42) {
  var_1_82 = (((((var_1_34 + (var_1_15 + var_1_36))) < (-10)) ? ((var_1_34 + (var_1_15 + var_1_36))) : (-10)));
 } else {
  if (var_1_81 <= stepLocal_30) {
   if (var_1_30) {
    var_1_82 = var_1_77;
   }
  } else {
   if (var_1_24 != var_1_68) {
    var_1_82 = ((((((((var_1_15) < (var_1_34)) ? (var_1_15) : (var_1_34)))) > (var_1_72)) ? (((((var_1_15) < (var_1_34)) ? (var_1_15) : (var_1_34)))) : (var_1_72)));
   } else {
    var_1_82 = var_1_11;
   }
  }
 }
 if (! var_1_63) {
  if (var_1_63) {
   var_1_14 = ((32 + last_1_var_1_14) + (((((((var_1_5) < (-50)) ? (var_1_5) : (-50))) < 0 ) ? -((((var_1_5) < (-50)) ? (var_1_5) : (-50))) : ((((var_1_5) < (-50)) ? (var_1_5) : (-50))))));
  } else {
   var_1_14 = var_1_13;
  }
 }
 if (var_1_63) {
  var_1_37 = ((((var_1_5) < (-5)) ? (var_1_5) : (-5)));
 } else {
  if ((var_1_13 * var_1_20) > (((((var_1_6 * var_1_86)) > (16u)) ? ((var_1_6 * var_1_86)) : (16u)))) {
   var_1_37 = -1;
  }
 }
 if (! var_1_63) {
  var_1_67 = ((var_1_27 - var_1_50) - ((((var_1_49) < (var_1_51)) ? (var_1_49) : (var_1_51))));
 } else {
  var_1_67 = ((((9.25) > (var_1_48)) ? (9.25) : (var_1_48)));
 }
 signed char stepLocal_26 = var_1_13;
 unsigned long int stepLocal_25 = var_1_54 / ((((var_1_69) > (var_1_34)) ? (var_1_69) : (var_1_34)));
 if (((var_1_15 & var_1_82) / 100) <= stepLocal_25) {
  var_1_75 = var_1_5;
 } else {
  if (var_1_53 > stepLocal_26) {
   var_1_75 = ((((var_1_46) > (var_1_36)) ? (var_1_46) : (var_1_36)));
  }
 }
 if (var_1_63) {
  var_1_94 = var_1_36;
 } else {
  var_1_94 = var_1_69;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 31);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741824);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 536870911);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 63);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -922337.2036854776000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 assume_abort_if_not(var_1_19 != 0.0F);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1073741824);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 4611686.018427383000e+12F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 190);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 6);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -230584.3009213691400e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -230584.3009213691400e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691400e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 6);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 2305843.009213691400e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 2147483647);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 127);
 assume_abort_if_not(var_1_59 <= 255);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 1);
 assume_abort_if_not(var_1_65 <= 1);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 0);
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 32767);
 assume_abort_if_not(var_1_69 <= 65535);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 1);
 assume_abort_if_not(var_1_71 <= 1);
 var_1_77 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_77 >= 536870911);
 assume_abort_if_not(var_1_77 <= 1073741823);
 var_1_80 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_80 >= -922337.2036854766000e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= -461168.6018427383000e+13F && var_1_80 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_101 = var_1_101;
 last_1_var_1_106 = var_1_106;
 last_1_var_1_107 = var_1_107;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_57 >= last_1_var_1_53) || last_1_var_1_101) ? ((((last_1_var_1_57 * last_1_var_1_53) >> var_1_5) >= 50u) ? (var_1_1 == ((unsigned long int) (var_1_5 + (var_1_6 + var_1_7)))) : (var_1_1 == ((unsigned long int) (var_1_5 + ((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))))))) : (last_1_var_1_101 ? (var_1_1 == ((unsigned long int) (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - (var_1_10 - (var_1_11 - var_1_5))))) : 1)) && ((var_1_15 == var_1_5) ? (var_1_12 == ((signed char) (var_1_5 - (var_1_13 - 8)))) : 1)) && ((! var_1_63) ? (var_1_63 ? (var_1_14 == ((signed short int) ((32 + last_1_var_1_14) + (((((((var_1_5) < (-50)) ? (var_1_5) : (-50))) < 0 ) ? -((((var_1_5) < (-50)) ? (var_1_5) : (-50))) : ((((var_1_5) < (-50)) ? (var_1_5) : (-50)))))))) : (var_1_14 == ((signed short int) var_1_13))) : 1)) && ((((((var_1_52) < (var_1_73)) ? (var_1_52) : (var_1_73))) > (var_1_73 / ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (var_1_15 == ((unsigned long int) ((var_1_10 - var_1_7) + (5u + var_1_11)))) : (var_1_15 == ((unsigned long int) (var_1_7 + (var_1_20 + var_1_11)))))) && ((var_1_70 || var_1_101) ? ((! var_1_70) ? (var_1_21 == ((unsigned char) (var_1_5 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) : 1) : 1)) && (var_1_23 == ((signed short int) var_1_5))) && (var_1_24 == ((double) (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) - (var_1_27 - var_1_28))))) && (((var_1_5 << last_1_var_1_58) <= last_1_var_1_38) ? (var_1_29 == ((unsigned char) ((last_1_var_1_38 <= var_1_7) || var_1_30))) : (((var_1_28 + 32.3) < (- ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))) ? ((var_1_9 < var_1_20) ? (var_1_29 == ((unsigned char) ((1 >= var_1_13) && (! var_1_30)))) : (var_1_29 == ((unsigned char) (var_1_30 || var_1_32)))) : 1))) && ((var_1_72 <= (var_1_57 * 128)) ? (var_1_33 == ((unsigned char) var_1_13)) : (var_1_33 == ((unsigned char) ((var_1_34 - var_1_5) - var_1_13))))) && ((((var_1_5 + var_1_36) >> 1) > var_1_93) ? (var_1_35 == ((unsigned long int) var_1_6)) : 1)) && (var_1_63 ? (var_1_37 == ((signed char) ((((var_1_5) < (-5)) ? (var_1_5) : (-5))))) : (((var_1_13 * var_1_20) > (((((var_1_6 * var_1_86)) > (16u)) ? ((var_1_6 * var_1_86)) : (16u)))) ? (var_1_37 == ((signed char) -1)) : 1))) && ((((((var_1_9) > (((((8) > (var_1_11)) ? (8) : (var_1_11))))) ? (var_1_9) : (((((8) > (var_1_11)) ? (8) : (var_1_11)))))) > (var_1_13 >> var_1_39)) ? (var_1_38 == ((signed short int) ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) : (((var_1_28 - 128.25f) == (0.625 / var_1_27)) ? ((((var_1_1 % var_1_5) + var_1_36) < (var_1_35 * var_1_33)) ? (var_1_38 == ((signed short int) (var_1_39 - ((((var_1_5) < (var_1_34)) ? (var_1_5) : (var_1_34)))))) : 1) : ((var_1_6 <= (~ var_1_7)) ? (var_1_38 == ((signed short int) var_1_5)) : (var_1_38 == ((signed short int) (var_1_39 + var_1_33))))))) && (var_1_41 == ((signed long int) ((((var_1_34) < (var_1_5)) ? (var_1_34) : (var_1_5)))))) && ((var_1_7 >= var_1_1) ? (var_1_42 == ((float) ((((((var_1_43 + var_1_44) + (var_1_28 - var_1_45))) < (5.3f)) ? (((var_1_43 + var_1_44) + (var_1_28 - var_1_45))) : (5.3f))))) : (((var_1_36 >> var_1_46) > var_1_57) ? (var_1_42 == ((float) (((var_1_47 + var_1_48) + (var_1_49 - var_1_50)) - ((15.4f + var_1_51) + var_1_45)))) : 1))) && (var_1_52 == ((float) var_1_43))) && (((last_1_var_1_53 / var_1_34) == (var_1_95 | (var_1_58 + var_1_1))) ? (var_1_53 == ((unsigned long int) (((((var_1_9) < (var_1_8)) ? (var_1_9) : (var_1_8))) - ((((var_1_54) < (var_1_36)) ? (var_1_54) : (var_1_36)))))) : (var_1_53 == ((unsigned long int) (last_1_var_1_53 + var_1_36))))) && ((! var_1_63) ? ((var_1_63 || (var_1_15 > var_1_54)) ? (var_1_55 == ((float) var_1_47)) : (var_1_55 == ((float) ((((((var_1_47 + 0.8f) + var_1_48)) < ((var_1_51 - var_1_28))) ? (((var_1_47 + 0.8f) + var_1_48)) : ((var_1_51 - var_1_28))))))) : (var_1_55 == ((float) ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))))) && (((last_1_var_1_97 + 1.0000000000004E12) < var_1_50) ? ((0u > var_1_5) ? ((((var_1_25 * var_1_47) < var_1_48) && (last_1_var_1_55 > last_1_var_1_78)) ? ((last_1_var_1_82 < (- last_1_var_1_1)) ? (var_1_57 == ((unsigned long int) (var_1_8 - var_1_13))) : (var_1_57 == ((unsigned long int) ((((((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) > (var_1_20)) ? (((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) : (var_1_20)))))) : (var_1_57 == ((unsigned long int) ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_20) < 0 ) ? -(((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_20) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_20)))))) : 1) : 1)) && (((((((var_1_34) > (var_1_59)) ? (var_1_34) : (var_1_59))) - var_1_13) <= (var_1_20 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (var_1_58 == ((unsigned long int) (var_1_6 + (var_1_10 - var_1_39)))) : (var_1_58 == ((unsigned long int) var_1_10)))) && (var_1_101 ? (var_1_60 == ((unsigned char) (((((var_1_34) < (200)) ? (var_1_34) : (200))) - var_1_5))) : 1)) && ((var_1_32 && (var_1_27 == var_1_43)) ? (var_1_61 == ((signed long int) ((((var_1_34) < (var_1_15)) ? (var_1_34) : (var_1_15))))) : ((var_1_52 != (- (var_1_26 / 128.75f))) ? (var_1_61 == ((signed long int) var_1_5)) : 1))) && (((var_1_88 + (var_1_68 + var_1_45)) == var_1_51) ? (var_1_70 ? (var_1_62 == ((signed char) (((((((((var_1_36 + 5)) > (var_1_5)) ? ((var_1_36 + 5)) : (var_1_5)))) < (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) ? ((((((var_1_36 + 5)) > (var_1_5)) ? ((var_1_36 + 5)) : (var_1_5)))) : (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))))))) : (((((((var_1_5) > (var_1_36)) ? (var_1_5) : (var_1_36))) - ((((var_1_46) < (0)) ? (var_1_46) : (0)))) > var_1_81) ? ((! var_1_32) ? (var_1_62 == ((signed char) var_1_34)) : (var_1_62 == ((signed char) ((var_1_13 - var_1_39) - 1)))) : 1)) : ((var_1_1 <= var_1_46) ? (var_1_62 == ((signed char) -64)) : (var_1_32 ? (var_1_62 == ((signed char) ((var_1_39 + var_1_46) - 32))) : (var_1_62 == ((signed char) (var_1_46 + (var_1_5 + var_1_39)))))))) && (var_1_30 ? ((! (var_1_41 <= (var_1_81 + var_1_20))) ? (var_1_63 == ((unsigned char) (! (var_1_32 && var_1_65)))) : (var_1_63 == ((unsigned char) (last_1_var_1_63 && var_1_66)))) : 1)) && ((! var_1_63) ? (var_1_67 == ((double) ((var_1_27 - var_1_50) - ((((var_1_49) < (var_1_51)) ? (var_1_49) : (var_1_51)))))) : (var_1_67 == ((double) ((((9.25) > (var_1_48)) ? (9.25) : (var_1_48))))))) && (((- (var_1_69 - var_1_59)) > (var_1_7 / var_1_10)) ? (var_1_32 ? ((var_1_69 > var_1_13) ? (var_1_68 == ((float) (var_1_48 + var_1_28))) : (var_1_68 == ((float) ((((((var_1_48) > (var_1_50)) ? (var_1_48) : (var_1_50))) + (var_1_47 + var_1_51)) - 15.4f)))) : (var_1_68 == ((float) (var_1_47 + var_1_44)))) : ((var_1_29 && var_1_101) ? (var_1_68 == ((float) (var_1_26 - ((4.2620201975235154E18f + var_1_49) - 9.9999999925E8f)))) : 1))) && (((var_1_13 / (var_1_46 + var_1_5)) >= (var_1_20 << var_1_76)) ? (var_1_70 == ((unsigned char) ((var_1_30 && var_1_32) && (var_1_65 && var_1_71)))) : (((var_1_93 / var_1_59) <= ((var_1_7 * var_1_41) >> var_1_5)) ? (var_1_70 == ((unsigned char) var_1_30)) : (var_1_70 == ((unsigned char) (! (var_1_32 && var_1_71))))))) && (var_1_72 == ((signed short int) (var_1_39 + var_1_34)))) && ((var_1_93 < ((var_1_69 + var_1_35) * var_1_1)) ? (var_1_73 == ((float) (var_1_48 - var_1_25))) : (var_1_73 == ((float) var_1_25)))) && ((var_1_13 > var_1_57) ? (var_1_74 == ((signed char) (8 - var_1_46))) : (var_1_74 == ((signed char) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))) && ((((var_1_15 & var_1_82) / 100) <= (var_1_54 / ((((var_1_69) > (var_1_34)) ? (var_1_69) : (var_1_34))))) ? (var_1_75 == ((unsigned char) var_1_5)) : ((var_1_53 > var_1_13) ? (var_1_75 == ((unsigned char) ((((var_1_46) > (var_1_36)) ? (var_1_46) : (var_1_36))))) : 1))) && (((var_1_1 >= last_1_var_1_76) && ((var_1_8 - var_1_20) > var_1_59)) ? (var_1_76 == ((signed long int) ((((var_1_95) > (var_1_5)) ? (var_1_95) : (var_1_5))))) : (var_1_76 == ((signed long int) (last_1_var_1_76 - ((var_1_11 - var_1_46) + (var_1_77 - var_1_5))))))) && (var_1_29 ? (var_1_70 ? (var_1_78 == ((float) (((var_1_49 - var_1_50) + ((((var_1_51) < (var_1_48)) ? (var_1_51) : (var_1_48)))) - ((((var_1_47) > (((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28))))) ? (var_1_47) : (((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28))))))))) : (var_1_63 ? (var_1_78 == ((float) ((var_1_27 - var_1_50) - (((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80))) - var_1_48)))) : (((var_1_98 / ((((var_1_34) > (var_1_5)) ? (var_1_34) : (var_1_5)))) <= var_1_10) ? ((1 <= var_1_53) ? (var_1_78 == ((float) (var_1_50 + ((((((((9.375f) < 0 ) ? -(9.375f) : (9.375f)))) < (3.5f)) ? (((((9.375f) < 0 ) ? -(9.375f) : (9.375f)))) : (3.5f)))))) : (var_1_78 == ((float) (var_1_51 + ((((var_1_50) < (var_1_47)) ? (var_1_50) : (var_1_47))))))) : 1))) : ((var_1_49 > ((32.25f / var_1_19) / var_1_80)) ? (var_1_78 == ((float) (50.5f - ((((2.4f) < (7.375f)) ? (2.4f) : (7.375f)))))) : 1))) && ((! var_1_29) ? (var_1_81 == ((unsigned long int) ((var_1_10 - var_1_13) + (var_1_77 + var_1_46)))) : (var_1_81 == ((unsigned long int) ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))))) && ((var_1_106 > var_1_42) ? (var_1_82 == ((signed long int) (((((var_1_34 + (var_1_15 + var_1_36))) < (-10)) ? ((var_1_34 + (var_1_15 + var_1_36))) : (-10))))) : ((var_1_81 <= (- 10u)) ? (var_1_30 ? (var_1_82 == ((signed long int) var_1_77)) : 1) : ((var_1_24 != var_1_68) ? (var_1_82 == ((signed long int) ((((((((var_1_15) < (var_1_34)) ? (var_1_15) : (var_1_34)))) > (var_1_72)) ? (((((var_1_15) < (var_1_34)) ? (var_1_15) : (var_1_34)))) : (var_1_72))))) : (var_1_82 == ((signed long int) var_1_11)))))) && (((var_1_13 <= var_1_7) && (var_1_81 > var_1_77)) ? (var_1_101 ? (var_1_83 == ((signed char) (((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))) + var_1_46))) : (var_1_83 == ((signed char) ((var_1_46 + -16) + ((((var_1_5) < (var_1_36)) ? (var_1_5) : (var_1_36))))))) : 1)) && ((var_1_70 && var_1_65) ? (var_1_85 == ((double) (var_1_26 - ((var_1_49 - var_1_47) + var_1_28)))) : (((- (- var_1_9)) < (var_1_36 + 32u)) ? ((! var_1_70) ? (var_1_85 == ((double) (((((var_1_27) < (var_1_48)) ? (var_1_27) : (var_1_48))) - (7.397802701382283E18 - (var_1_49 - var_1_47))))) : 1) : 1))) && ((var_1_23 >= (var_1_13 - var_1_5)) ? (var_1_29 ? (var_1_86 == ((signed short int) (var_1_59 - var_1_53))) : 1) : (var_1_86 == ((signed short int) ((((var_1_59) > (((((var_1_53) > ((2 - var_1_34))) ? (var_1_53) : ((2 - var_1_34)))))) ? (var_1_59) : (((((var_1_53) > ((2 - var_1_34))) ? (var_1_53) : ((2 - var_1_34))))))))))) && ((63.5 <= last_1_var_1_24) ? (var_1_87 == ((signed short int) ((((1 + last_1_var_1_107) < 0 ) ? -(1 + last_1_var_1_107) : (1 + last_1_var_1_107))))) : ((var_1_43 < (last_1_var_1_106 / var_1_27)) ? (var_1_87 == ((signed short int) ((((5) > (((((-100) < (var_1_46)) ? (-100) : (var_1_46))))) ? (5) : (((((-100) < (var_1_46)) ? (-100) : (var_1_46)))))))) : (var_1_87 == ((signed short int) var_1_39))))) && ((99.4f < var_1_48) ? (var_1_88 == ((float) ((var_1_48 - (var_1_51 + var_1_50)) + var_1_47))) : 1)) && ((var_1_98 < var_1_36) ? (var_1_89 == ((signed short int) var_1_5)) : (var_1_89 == ((signed short int) 100)))) && (var_1_90 == ((double) var_1_51))) && (var_1_66 ? (var_1_91 == ((signed short int) var_1_36)) : 1)) && (var_1_92 == ((signed short int) -50))) && (var_1_32 ? (var_1_93 == ((unsigned long int) var_1_39)) : 1)) && (var_1_63 ? (var_1_94 == ((signed long int) var_1_36)) : (var_1_94 == ((signed long int) var_1_69)))) && (var_1_95 == ((signed long int) var_1_59))) && (var_1_96 == ((signed short int) var_1_81))) && (var_1_97 == ((double) var_1_50))) && (var_1_98 == ((signed long int) var_1_87))) && (var_1_71 ? (var_1_99 == ((float) var_1_44)) : (var_1_99 == ((float) var_1_25)))) && (var_1_100 == ((double) var_1_80))) && (var_1_66 ? (var_1_101 == ((unsigned char) var_1_65)) : (var_1_101 == ((unsigned char) 0)))) && (var_1_70 ? (var_1_102 == ((double) var_1_49)) : 1)) && (var_1_71 ? (var_1_103 == ((double) var_1_50)) : (var_1_103 == ((double) var_1_45)))) && (var_1_70 ? (var_1_104 == ((float) var_1_43)) : 1)) && (var_1_105 == ((double) var_1_25))) && ((((((var_1_13 - var_1_46) < 0 ) ? -(var_1_13 - var_1_46) : (var_1_13 - var_1_46))) <= (var_1_87 - var_1_6)) ? (var_1_106 == ((double) (var_1_48 + var_1_44))) : (var_1_106 == ((double) ((((var_1_27) > (var_1_49)) ? (var_1_27) : (var_1_49))))))) && (var_1_107 == ((signed long int) var_1_46))
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

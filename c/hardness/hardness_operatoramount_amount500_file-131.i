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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 500;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 1;
unsigned short int var_1_5 = 256;
unsigned short int var_1_6 = 1;
unsigned short int var_1_7 = 16;
unsigned short int var_1_8 = 23563;
unsigned short int var_1_9 = 4;
signed long int var_1_10 = 200;
unsigned char var_1_11 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 100;
unsigned long int var_1_16 = 8;
unsigned long int var_1_17 = 4022747826;
unsigned long int var_1_18 = 64;
unsigned long int var_1_19 = 1862745552;
unsigned long int var_1_20 = 1213877346;
double var_1_21 = 15.5;
double var_1_22 = 16.2;
double var_1_23 = 4.125;
unsigned char var_1_24 = 1;
unsigned char var_1_26 = 1;
float var_1_28 = 200.2;
float var_1_29 = 255.5;
float var_1_30 = 128.5;
signed char var_1_31 = 5;
signed char var_1_32 = 10;
signed char var_1_33 = -128;
float var_1_34 = 0.0;
float var_1_35 = 63.6;
float var_1_36 = 32.5;
signed long int var_1_37 = 50;
unsigned long int var_1_38 = 2789431077;
unsigned short int var_1_39 = 58455;
unsigned short int var_1_40 = 40709;
signed long int var_1_41 = 1463630165;
signed char var_1_42 = 5;
signed char var_1_43 = 4;
signed char var_1_44 = -1;
signed char var_1_45 = 4;
double var_1_46 = 0.0;
double var_1_47 = 9999999.875;
signed char var_1_48 = 10;
signed char var_1_49 = 32;
signed char var_1_50 = 2;
signed char var_1_51 = 2;
signed char var_1_52 = 1;
unsigned char var_1_53 = 4;
signed char var_1_54 = 4;
signed char var_1_55 = 64;
unsigned char var_1_56 = 10;
unsigned char var_1_57 = 25;
unsigned char var_1_58 = 128;
signed char var_1_59 = -64;
signed char var_1_60 = 64;
signed long int var_1_61 = -1000000000;
signed char var_1_62 = -8;
double var_1_63 = 4.875;
double var_1_64 = 32.8;
double var_1_65 = 99999.9;
signed char var_1_66 = -25;
unsigned char var_1_67 = 1;
signed char var_1_68 = -25;
signed char var_1_69 = 8;
signed char var_1_70 = 8;
signed char var_1_71 = 16;
signed char var_1_72 = 5;
signed char var_1_73 = 16;
double var_1_74 = 8.4;
signed char var_1_75 = -5;
unsigned short int var_1_76 = 16;
unsigned short int var_1_77 = 59530;
float var_1_78 = 100.75;
float var_1_79 = 3.8;
float var_1_80 = 8.125;
unsigned char var_1_81 = 16;
unsigned char var_1_82 = 64;
signed long int var_1_83 = -25;
signed long int var_1_84 = 100000000;
signed long int var_1_85 = 1389100316;
signed short int var_1_86 = -10;
signed long int var_1_88 = -5;
unsigned short int var_1_89 = 10;
signed long int var_1_90 = 1;
signed short int var_1_91 = 2;
signed short int var_1_92 = -50;
unsigned char var_1_93 = 4;
float var_1_94 = 0.5;
unsigned char var_1_95 = 64;
unsigned char var_1_96 = 2;
unsigned char var_1_97 = 1;
unsigned char var_1_98 = 0;
double var_1_99 = 4.75;
double var_1_100 = 4.1;
float var_1_101 = 25.5;
signed short int var_1_102 = 5;
float var_1_103 = 99.5;
signed char var_1_104 = -1;
signed long int var_1_105 = 16;
unsigned char var_1_106 = 1;
float var_1_107 = 1000000000.4;
unsigned char var_1_108 = 0;
signed long int last_1_var_1_10 = 200;
unsigned char last_1_var_1_11 = 0;
unsigned char last_1_var_1_24 = 1;
signed long int last_1_var_1_61 = -1000000000;
double last_1_var_1_63 = 4.875;
signed char last_1_var_1_68 = -25;
double last_1_var_1_74 = 8.4;
signed long int last_1_var_1_90 = 1;
unsigned char last_1_var_1_108 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_32 = (((last_1_var_1_68) < (var_1_5)) ? (last_1_var_1_68) : (var_1_5));
 if (10.25 <= (last_1_var_1_74 * var_1_30)) {
  if (stepLocal_32 < -5) {
   var_1_108 = ((last_1_var_1_24 || (var_1_13 && var_1_67)) && var_1_26);
  }
 } else {
  var_1_108 = var_1_14;
 }
 if (last_1_var_1_108) {
  if (last_1_var_1_11) {
   var_1_90 = ((((var_1_9) < (((((var_1_49) < (var_1_33)) ? (var_1_49) : (var_1_33))))) ? (var_1_9) : (((((var_1_49) < (var_1_33)) ? (var_1_49) : (var_1_33))))));
  } else {
   if (! var_1_13) {
    if (var_1_34 < last_1_var_1_63) {
     var_1_90 = (var_1_7 - last_1_var_1_10);
    }
   } else {
    var_1_90 = ((((var_1_57) < (((((4) > (var_1_5)) ? (4) : (var_1_5))))) ? (var_1_57) : (((((4) > (var_1_5)) ? (4) : (var_1_5))))));
   }
  }
 }
 if ((((((var_1_2) > (var_1_7)) ? (var_1_2) : (var_1_7))) + last_1_var_1_10) >= var_1_5) {
  var_1_16 = (var_1_17 - ((((last_1_var_1_90) < (var_1_9)) ? (last_1_var_1_90) : (var_1_9))));
 } else {
  var_1_16 = var_1_6;
 }
 if ((64 << var_1_38) <= var_1_16) {
  var_1_68 = (var_1_44 + -1);
 } else {
  var_1_68 = ((((8) < 0 ) ? -(8) : (8)));
 }
 signed char stepLocal_23 = var_1_72;
 if ((((((var_1_51) < (var_1_6)) ? (var_1_51) : (var_1_6))) << var_1_16) != stepLocal_23) {
  var_1_74 = ((((((((var_1_64) < (var_1_65)) ? (var_1_64) : (var_1_65)))) < (var_1_36)) ? (((((var_1_64) < (var_1_65)) ? (var_1_64) : (var_1_65)))) : (var_1_36)));
 } else {
  var_1_74 = ((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) > (var_1_35)) ? (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : (var_1_35)));
 }
 var_1_1 = ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)));
 signed long int stepLocal_1 = var_1_9 * var_1_2;
 if (stepLocal_1 >= (var_1_6 << var_1_5)) {
  var_1_10 = ((((var_1_2) < (var_1_5)) ? (var_1_2) : (var_1_5)));
 }
 if (((var_1_22 / var_1_46) * (var_1_36 * var_1_47)) >= var_1_23) {
  if ((- (var_1_46 + var_1_35)) < var_1_36) {
   var_1_53 = ((((var_1_50) < ((var_1_51 + var_1_31))) ? (var_1_50) : ((var_1_51 + var_1_31))));
  }
 } else {
  var_1_53 = (128 - var_1_50);
 }
 if (var_1_65 >= (50.2 + 128.6)) {
  var_1_75 = ((((((((var_1_45) > ((var_1_48 - var_1_50))) ? (var_1_45) : ((var_1_48 - var_1_50))))) > (((((5) > (var_1_72)) ? (5) : (var_1_72))))) ? (((((var_1_45) > ((var_1_48 - var_1_50))) ? (var_1_45) : ((var_1_48 - var_1_50))))) : (((((5) > (var_1_72)) ? (5) : (var_1_72))))));
 }
 if (var_1_13) {
  var_1_84 = (var_1_9 - (var_1_85 - 2));
 } else {
  var_1_84 = ((((((var_1_33 + var_1_10) + var_1_52)) > (var_1_8)) ? (((var_1_33 + var_1_10) + var_1_52)) : (var_1_8)));
 }
 if (var_1_67) {
  var_1_89 = (var_1_77 - var_1_5);
 }
 var_1_93 = var_1_50;
 if (var_1_67) {
  var_1_94 = var_1_22;
 } else {
  var_1_94 = var_1_36;
 }
 if (var_1_67) {
  var_1_96 = var_1_58;
 }
 var_1_97 = var_1_50;
 if (var_1_67) {
  var_1_98 = var_1_14;
 }
 if (var_1_14) {
  var_1_99 = var_1_64;
 }
 var_1_100 = var_1_22;
 var_1_101 = var_1_36;
 var_1_103 = var_1_47;
 var_1_105 = var_1_55;
 var_1_106 = var_1_14;
 if (var_1_13) {
  var_1_107 = var_1_23;
 } else {
  var_1_107 = var_1_36;
 }
 if (var_1_98) {
  if (var_1_98) {
   var_1_11 = (! var_1_13);
  } else {
   var_1_11 = ((! var_1_13) && var_1_14);
  }
 } else {
  var_1_11 = var_1_13;
 }
 unsigned char stepLocal_16 = var_1_11;
 if (stepLocal_16 || (! (var_1_32 <= var_1_33))) {
  var_1_59 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
 }
 if (var_1_106) {
  var_1_60 = (var_1_49 - (var_1_52 + var_1_51));
 }
 signed long int stepLocal_17 = (var_1_50 - var_1_31) / var_1_55;
 if (! var_1_106) {
  var_1_61 = (var_1_5 + last_1_var_1_61);
 } else {
  if (var_1_49 <= stepLocal_17) {
   var_1_61 = ((((var_1_33) > (var_1_50)) ? (var_1_33) : (var_1_50)));
  }
 }
 signed long int stepLocal_18 = var_1_84;
 if (var_1_43 >= stepLocal_18) {
  var_1_62 = ((((((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44)))) > (var_1_49)) ? (((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44)))) : (var_1_49)));
 } else {
  var_1_62 = ((((var_1_45) < (var_1_48)) ? (var_1_45) : (var_1_48)));
 }
 if (var_1_98) {
  var_1_78 = ((((25.25f) < (var_1_64)) ? (25.25f) : (var_1_64)));
 } else {
  var_1_78 = (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) - (var_1_34 - var_1_64));
 }
 unsigned long int stepLocal_24 = (var_1_19 - var_1_7) - var_1_40;
 if ((((((128 % var_1_58)) > ((var_1_52 << var_1_84))) ? ((128 % var_1_58)) : ((var_1_52 << var_1_84)))) < stepLocal_24) {
  var_1_80 = ((((((((15.25f) < (((((var_1_36) < (var_1_47)) ? (var_1_36) : (var_1_47))))) ? (15.25f) : (((((var_1_36) < (var_1_47)) ? (var_1_36) : (var_1_47))))))) > (((((var_1_65) > (var_1_22)) ? (var_1_65) : (var_1_22))))) ? (((((15.25f) < (((((var_1_36) < (var_1_47)) ? (var_1_36) : (var_1_47))))) ? (15.25f) : (((((var_1_36) < (var_1_47)) ? (var_1_36) : (var_1_47))))))) : (((((var_1_65) > (var_1_22)) ? (var_1_65) : (var_1_22))))));
 } else {
  var_1_80 = ((var_1_65 + var_1_64) - var_1_47);
 }
 if (var_1_35 >= var_1_94) {
  if (var_1_67) {
   var_1_81 = ((((var_1_50) < (((var_1_55 + var_1_82) - var_1_52))) ? (var_1_50) : (((var_1_55 + var_1_82) - var_1_52))));
  } else {
   var_1_81 = ((((var_1_50) < ((((((var_1_58 - var_1_52)) < (var_1_82)) ? ((var_1_58 - var_1_52)) : (var_1_82))))) ? (var_1_50) : ((((((var_1_58 - var_1_52)) < (var_1_82)) ? ((var_1_58 - var_1_52)) : (var_1_82))))));
  }
 }
 if (var_1_11) {
  var_1_95 = var_1_50;
 }
 if (var_1_11) {
  var_1_104 = var_1_48;
 } else {
  var_1_104 = var_1_71;
 }
 unsigned short int stepLocal_3 = var_1_7;
 signed long int stepLocal_2 = (var_1_6 + 25) / var_1_8;
 if (stepLocal_2 < (100000 << var_1_9)) {
  if ((var_1_6 * (var_1_5 * var_1_16)) > stepLocal_3) {
   var_1_15 = (var_1_5 + (2022748956u - (var_1_8 + var_1_16)));
  } else {
   var_1_15 = var_1_16;
  }
 } else {
  if (var_1_11) {
   var_1_15 = (3711943259u - ((((var_1_6) > (var_1_9)) ? (var_1_6) : (var_1_9))));
  }
 }
 unsigned char stepLocal_0 = var_1_11;
 if ((var_1_90 == var_1_2) || stepLocal_0) {
  var_1_3 = ((var_1_5 + var_1_6) + ((((var_1_7) > ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9)))));
 }
 if (var_1_2 <= var_1_6) {
  var_1_18 = ((((((var_1_19 + var_1_20) - (var_1_61 + var_1_6))) < ((((((4117883507u - var_1_7)) > (((((var_1_2) < (var_1_84)) ? (var_1_2) : (var_1_84))))) ? ((4117883507u - var_1_7)) : (((((var_1_2) < (var_1_84)) ? (var_1_2) : (var_1_84)))))))) ? (((var_1_19 + var_1_20) - (var_1_61 + var_1_6))) : ((((((4117883507u - var_1_7)) > (((((var_1_2) < (var_1_84)) ? (var_1_2) : (var_1_84))))) ? ((4117883507u - var_1_7)) : (((((var_1_2) < (var_1_84)) ? (var_1_2) : (var_1_84)))))))));
 } else {
  var_1_18 = (((((var_1_2 + 256u)) < (var_1_17)) ? ((var_1_2 + 256u)) : (var_1_17)));
 }
 unsigned short int stepLocal_12 = var_1_6;
 signed long int stepLocal_11 = ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40))) - var_1_5;
 unsigned short int stepLocal_10 = var_1_5;
 if ((((((var_1_17) > (var_1_38)) ? (var_1_17) : (var_1_38))) - var_1_19) < stepLocal_10) {
  if (var_1_6 > stepLocal_11) {
   if (! (var_1_15 > var_1_17)) {
    var_1_37 = ((var_1_41 - var_1_5) - 4);
   } else {
    var_1_37 = var_1_39;
   }
  } else {
   var_1_37 = ((10 - 128) + var_1_7);
  }
 } else {
  if (var_1_8 <= stepLocal_12) {
   var_1_37 = ((((4) < ((-1 - var_1_6))) ? (4) : ((-1 - var_1_6))));
  }
 }
 if (! (var_1_30 >= var_1_34)) {
  var_1_42 = ((((((((var_1_43 + var_1_44)) > (var_1_45)) ? ((var_1_43 + var_1_44)) : (var_1_45))) < 0 ) ? -(((((var_1_43 + var_1_44)) > (var_1_45)) ? ((var_1_43 + var_1_44)) : (var_1_45))) : (((((var_1_43 + var_1_44)) > (var_1_45)) ? ((var_1_43 + var_1_44)) : (var_1_45)))));
 } else {
  if (var_1_9 < (var_1_7 * var_1_61)) {
   if (((var_1_29 + var_1_23) + 16.5) != ((var_1_46 - var_1_47) - var_1_34)) {
    var_1_42 = (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) - var_1_50);
   } else {
    var_1_42 = (var_1_44 + var_1_43);
   }
  } else {
   var_1_42 = (var_1_48 - (var_1_51 + var_1_52));
  }
 }
 unsigned short int stepLocal_22 = var_1_40;
 unsigned char stepLocal_21 = var_1_26;
 unsigned short int stepLocal_20 = var_1_89;
 unsigned long int stepLocal_19 = 1000u;
 if (stepLocal_21 || (var_1_22 >= var_1_30)) {
  var_1_66 = ((((var_1_43) < ((var_1_51 + ((((-8) < 0 ) ? -(-8) : (-8)))))) ? (var_1_43) : ((var_1_51 + ((((-8) < 0 ) ? -(-8) : (-8)))))));
 } else {
  if (31.6f >= (var_1_47 - var_1_65)) {
   if (var_1_26) {
    if ((- var_1_15) <= stepLocal_19) {
     var_1_66 = var_1_49;
    } else {
     if ((var_1_33 % var_1_32) < stepLocal_20) {
      var_1_66 = ((((var_1_45) < (((((var_1_51 + var_1_43) < 0 ) ? -(var_1_51 + var_1_43) : (var_1_51 + var_1_43))))) ? (var_1_45) : (((((var_1_51 + var_1_43) < 0 ) ? -(var_1_51 + var_1_43) : (var_1_51 + var_1_43))))));
     } else {
      var_1_66 = (var_1_51 - (var_1_55 - var_1_52));
     }
    }
   } else {
    if (var_1_33 == stepLocal_22) {
     var_1_66 = ((((0) < ((var_1_50 - 10))) ? (0) : ((var_1_50 - 10))));
    } else {
     var_1_66 = (var_1_51 + ((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43))));
    }
   }
  } else {
   var_1_66 = (var_1_44 + 1);
  }
 }
 if (var_1_59 >= var_1_18) {
  if (var_1_67) {
   var_1_79 = var_1_64;
  }
 }
 if (var_1_108 && var_1_13) {
  if (var_1_7 == var_1_15) {
   var_1_24 = (! var_1_14);
  } else {
   var_1_24 = (((var_1_15 > var_1_6) && var_1_13) || var_1_26);
  }
 } else {
  if ((var_1_5 - 8) >= (var_1_16 * var_1_19)) {
   var_1_24 = ((var_1_2 > var_1_1) || var_1_13);
  }
 }
 signed long int stepLocal_15 = (var_1_8 & var_1_90) * var_1_52;
 unsigned long int stepLocal_14 = var_1_40 / var_1_17;
 if (var_1_18 == stepLocal_14) {
  var_1_56 = (var_1_55 + var_1_57);
 } else {
  if (stepLocal_15 == var_1_2) {
   var_1_56 = (var_1_58 - var_1_51);
  } else {
   var_1_56 = var_1_58;
  }
 }
 if (var_1_99 >= var_1_107) {
  var_1_92 = ((((var_1_56 - var_1_105) < 0 ) ? -(var_1_56 - var_1_105) : (var_1_56 - var_1_105)));
 }
 unsigned short int stepLocal_6 = var_1_9;
 signed long int stepLocal_5 = var_1_10;
 unsigned long int stepLocal_4 = 50u + var_1_20;
 if (! var_1_14) {
  if (stepLocal_5 <= (var_1_15 * var_1_18)) {
   var_1_21 = (((((((((15.8) < (var_1_22)) ? (15.8) : (var_1_22)))) < (32.4)) ? (((((15.8) < (var_1_22)) ? (15.8) : (var_1_22)))) : (32.4))) + var_1_23);
  } else {
   if (stepLocal_6 >= (- (var_1_18 + var_1_15))) {
    var_1_21 = var_1_22;
   } else {
    if (32u == stepLocal_4) {
     var_1_21 = ((((((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22))) < 0 ) ? -((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22))) : ((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22))))) - 15.4);
    } else {
     var_1_21 = (var_1_22 + var_1_23);
    }
   }
  }
 }
 unsigned long int stepLocal_9 = var_1_20;
 unsigned char stepLocal_8 = var_1_11;
 signed long int stepLocal_7 = (((var_1_32) > ((var_1_10 | var_1_37))) ? (var_1_32) : ((var_1_10 | var_1_37)));
 if (stepLocal_8 && var_1_26) {
  var_1_28 = ((var_1_29 + var_1_30) + var_1_23);
 } else {
  if (stepLocal_7 > var_1_89) {
   var_1_28 = var_1_23;
  } else {
   if ((var_1_9 / ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) <= stepLocal_9) {
    var_1_28 = (var_1_29 + var_1_30);
   } else {
    var_1_28 = ((((((var_1_34 - var_1_35) - var_1_36)) > (var_1_30)) ? (((var_1_34 - var_1_35) - var_1_36)) : (var_1_30)));
   }
  }
 }
 if (var_1_108) {
  if ((var_1_22 * var_1_21) == (var_1_46 * ((((var_1_103) < (var_1_47)) ? (var_1_103) : (var_1_47))))) {
   var_1_69 = ((var_1_52 + (32 - var_1_70)) - var_1_55);
  } else {
   var_1_69 = ((((((var_1_70 + var_1_71) + (var_1_72 + var_1_73))) < (((((var_1_43) < (var_1_49)) ? (var_1_43) : (var_1_49))))) ? (((var_1_70 + var_1_71) + (var_1_72 + var_1_73))) : (((((var_1_43) < (var_1_49)) ? (var_1_43) : (var_1_49))))));
  }
 } else {
  var_1_69 = (2 - (var_1_55 - var_1_52));
 }
 if (var_1_24) {
  var_1_102 = var_1_43;
 } else {
  var_1_102 = var_1_32;
 }
 if (var_1_48 > var_1_7) {
  if (var_1_106) {
   var_1_76 = (var_1_92 + var_1_58);
  } else {
   if ((var_1_95 == var_1_52) || var_1_26) {
    if ((((((var_1_72 / var_1_55)) > (-64)) ? ((var_1_72 / var_1_55)) : (-64))) >= var_1_45) {
     var_1_76 = (var_1_77 - var_1_50);
    } else {
     var_1_76 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
    }
   } else {
    var_1_76 = (var_1_77 - 8);
   }
  }
 } else {
  var_1_76 = ((((((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))) < (var_1_92)) ? (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_92)));
 }
 signed long int stepLocal_26 = (((var_1_72) < (var_1_81)) ? (var_1_72) : (var_1_81));
 unsigned long int stepLocal_25 = var_1_16;
 if (stepLocal_25 < var_1_81) {
  if (stepLocal_26 == var_1_43) {
   var_1_83 = -16;
  } else {
   var_1_83 = (((((var_1_76 - var_1_6)) > (var_1_40)) ? ((var_1_76 - var_1_6)) : (var_1_40)));
  }
 } else {
  var_1_83 = (var_1_8 - var_1_82);
 }
 unsigned long int stepLocal_29 = var_1_19 - (var_1_70 + var_1_8);
 signed long int stepLocal_28 = var_1_90;
 if (stepLocal_28 < var_1_16) {
  var_1_88 = ((var_1_85 - 25) - ((((var_1_41) < (var_1_83)) ? (var_1_41) : (var_1_83))));
 } else {
  if ((var_1_6 - 8) > stepLocal_29) {
   var_1_88 = (((((var_1_5 - (var_1_9 + var_1_52))) < ((-256 + ((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10)))))) ? ((var_1_5 - (var_1_9 + var_1_52))) : ((-256 + ((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10)))))));
  } else {
   var_1_88 = var_1_90;
  }
 }
 unsigned char stepLocal_31 = var_1_26;
 signed long int stepLocal_30 = var_1_88;
 if (var_1_51 < stepLocal_30) {
  if (stepLocal_31 && var_1_108) {
   var_1_91 = (var_1_55 - var_1_58);
  } else {
   var_1_91 = var_1_55;
  }
 } else {
  var_1_91 = (50 + var_1_92);
 }
 if (((var_1_17 & var_1_76) * (var_1_6 + 128u)) >= var_1_39) {
  var_1_63 = ((var_1_35 + (var_1_64 + var_1_65)) - var_1_36);
 } else {
  if ((var_1_35 - var_1_47) != ((var_1_34 - var_1_46) + var_1_21)) {
   var_1_63 = (var_1_47 - var_1_65);
  }
 }
 signed long int stepLocal_13 = var_1_41;
 if (stepLocal_13 <= var_1_83) {
  var_1_54 = (var_1_50 - (var_1_55 - ((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52)))));
 } else {
  var_1_54 = var_1_48;
 }
 unsigned short int stepLocal_27 = var_1_5;
 if (var_1_6 > stepLocal_27) {
  if ((- var_1_34) >= var_1_63) {
   var_1_86 = ((((var_1_44) > ((var_1_71 + var_1_57))) ? (var_1_44) : ((var_1_71 + var_1_57))));
  } else {
   var_1_86 = (((((var_1_88 + -32)) > (-5)) ? ((var_1_88 + -32)) : (-5)));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16384);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 1073741824);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -230584.3009213691400e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -128);
 assume_abort_if_not(var_1_32 <= 127);
 assume_abort_if_not(var_1_32 != 0);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -128);
 assume_abort_if_not(var_1_33 <= 127);
 assume_abort_if_not(var_1_33 != 0);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967295);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 32767);
 assume_abort_if_not(var_1_39 <= 65535);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 32767);
 assume_abort_if_not(var_1_40 <= 65535);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= 1073741822);
 assume_abort_if_not(var_1_41 <= 2147483646);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -63);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -63);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -126);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 4611686.018427388000e+12F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427388000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= -1);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= -1);
 assume_abort_if_not(var_1_49 <= 126);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 126);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 63);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 63);
 assume_abort_if_not(var_1_55 <= 126);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 127);
 assume_abort_if_not(var_1_58 <= 254);
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691400e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 1);
 assume_abort_if_not(var_1_67 <= 1);
 var_1_70 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 31);
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= -31);
 assume_abort_if_not(var_1_71 <= 31);
 var_1_72 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_72 >= -31);
 assume_abort_if_not(var_1_72 <= 32);
 var_1_73 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_73 >= -31);
 assume_abort_if_not(var_1_73 <= 31);
 var_1_77 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_77 >= 32767);
 assume_abort_if_not(var_1_77 <= 65534);
 var_1_82 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_82 >= 64);
 assume_abort_if_not(var_1_82 <= 127);
 var_1_85 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_85 >= 1073741823);
 assume_abort_if_not(var_1_85 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_108 = var_1_108;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((unsigned short int) ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2))))) && (((var_1_90 == var_1_2) || var_1_11) ? (var_1_3 == ((unsigned short int) ((var_1_5 + var_1_6) + ((((var_1_7) > ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9))))))) : 1)) && (((var_1_9 * var_1_2) >= (var_1_6 << var_1_5)) ? (var_1_10 == ((signed long int) ((((var_1_2) < (var_1_5)) ? (var_1_2) : (var_1_5))))) : 1)) && (var_1_98 ? (var_1_98 ? (var_1_11 == ((unsigned char) (! var_1_13))) : (var_1_11 == ((unsigned char) ((! var_1_13) && var_1_14)))) : (var_1_11 == ((unsigned char) var_1_13)))) && ((((var_1_6 + 25) / var_1_8) < (100000 << var_1_9)) ? (((var_1_6 * (var_1_5 * var_1_16)) > var_1_7) ? (var_1_15 == ((unsigned long int) (var_1_5 + (2022748956u - (var_1_8 + var_1_16))))) : (var_1_15 == ((unsigned long int) var_1_16))) : (var_1_11 ? (var_1_15 == ((unsigned long int) (3711943259u - ((((var_1_6) > (var_1_9)) ? (var_1_6) : (var_1_9)))))) : 1))) && (((((((var_1_2) > (var_1_7)) ? (var_1_2) : (var_1_7))) + last_1_var_1_10) >= var_1_5) ? (var_1_16 == ((unsigned long int) (var_1_17 - ((((last_1_var_1_90) < (var_1_9)) ? (last_1_var_1_90) : (var_1_9)))))) : (var_1_16 == ((unsigned long int) var_1_6)))) && ((var_1_2 <= var_1_6) ? (var_1_18 == ((unsigned long int) ((((((var_1_19 + var_1_20) - (var_1_61 + var_1_6))) < ((((((4117883507u - var_1_7)) > (((((var_1_2) < (var_1_84)) ? (var_1_2) : (var_1_84))))) ? ((4117883507u - var_1_7)) : (((((var_1_2) < (var_1_84)) ? (var_1_2) : (var_1_84)))))))) ? (((var_1_19 + var_1_20) - (var_1_61 + var_1_6))) : ((((((4117883507u - var_1_7)) > (((((var_1_2) < (var_1_84)) ? (var_1_2) : (var_1_84))))) ? ((4117883507u - var_1_7)) : (((((var_1_2) < (var_1_84)) ? (var_1_2) : (var_1_84))))))))))) : (var_1_18 == ((unsigned long int) (((((var_1_2 + 256u)) < (var_1_17)) ? ((var_1_2 + 256u)) : (var_1_17))))))) && ((! var_1_14) ? ((var_1_10 <= (var_1_15 * var_1_18)) ? (var_1_21 == ((double) (((((((((15.8) < (var_1_22)) ? (15.8) : (var_1_22)))) < (32.4)) ? (((((15.8) < (var_1_22)) ? (15.8) : (var_1_22)))) : (32.4))) + var_1_23))) : ((var_1_9 >= (- (var_1_18 + var_1_15))) ? (var_1_21 == ((double) var_1_22)) : ((32u == (50u + var_1_20)) ? (var_1_21 == ((double) ((((((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22))) < 0 ) ? -((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22))) : ((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22))))) - 15.4))) : (var_1_21 == ((double) (var_1_22 + var_1_23)))))) : 1)) && ((var_1_108 && var_1_13) ? ((var_1_7 == var_1_15) ? (var_1_24 == ((unsigned char) (! var_1_14))) : (var_1_24 == ((unsigned char) (((var_1_15 > var_1_6) && var_1_13) || var_1_26)))) : (((var_1_5 - 8) >= (var_1_16 * var_1_19)) ? (var_1_24 == ((unsigned char) ((var_1_2 > var_1_1) || var_1_13))) : 1))) && ((var_1_11 && var_1_26) ? (var_1_28 == ((float) ((var_1_29 + var_1_30) + var_1_23))) : ((((((var_1_32) > ((var_1_10 | var_1_37))) ? (var_1_32) : ((var_1_10 | var_1_37)))) > var_1_89) ? (var_1_28 == ((float) var_1_23)) : (((var_1_9 / ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) <= var_1_20) ? (var_1_28 == ((float) (var_1_29 + var_1_30))) : (var_1_28 == ((float) ((((((var_1_34 - var_1_35) - var_1_36)) > (var_1_30)) ? (((var_1_34 - var_1_35) - var_1_36)) : (var_1_30))))))))) && (((((((var_1_17) > (var_1_38)) ? (var_1_17) : (var_1_38))) - var_1_19) < var_1_5) ? ((var_1_6 > (((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40))) - var_1_5)) ? ((! (var_1_15 > var_1_17)) ? (var_1_37 == ((signed long int) ((var_1_41 - var_1_5) - 4))) : (var_1_37 == ((signed long int) var_1_39))) : (var_1_37 == ((signed long int) ((10 - 128) + var_1_7)))) : ((var_1_8 <= var_1_6) ? (var_1_37 == ((signed long int) ((((4) < ((-1 - var_1_6))) ? (4) : ((-1 - var_1_6)))))) : 1))) && ((! (var_1_30 >= var_1_34)) ? (var_1_42 == ((signed char) ((((((((var_1_43 + var_1_44)) > (var_1_45)) ? ((var_1_43 + var_1_44)) : (var_1_45))) < 0 ) ? -(((((var_1_43 + var_1_44)) > (var_1_45)) ? ((var_1_43 + var_1_44)) : (var_1_45))) : (((((var_1_43 + var_1_44)) > (var_1_45)) ? ((var_1_43 + var_1_44)) : (var_1_45))))))) : ((var_1_9 < (var_1_7 * var_1_61)) ? ((((var_1_29 + var_1_23) + 16.5) != ((var_1_46 - var_1_47) - var_1_34)) ? (var_1_42 == ((signed char) (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) - var_1_50))) : (var_1_42 == ((signed char) (var_1_44 + var_1_43)))) : (var_1_42 == ((signed char) (var_1_48 - (var_1_51 + var_1_52))))))) && ((((var_1_22 / var_1_46) * (var_1_36 * var_1_47)) >= var_1_23) ? (((- (var_1_46 + var_1_35)) < var_1_36) ? (var_1_53 == ((unsigned char) ((((var_1_50) < ((var_1_51 + var_1_31))) ? (var_1_50) : ((var_1_51 + var_1_31)))))) : 1) : (var_1_53 == ((unsigned char) (128 - var_1_50))))) && ((var_1_41 <= var_1_83) ? (var_1_54 == ((signed char) (var_1_50 - (var_1_55 - ((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52))))))) : (var_1_54 == ((signed char) var_1_48)))) && ((var_1_18 == (var_1_40 / var_1_17)) ? (var_1_56 == ((unsigned char) (var_1_55 + var_1_57))) : ((((var_1_8 & var_1_90) * var_1_52) == var_1_2) ? (var_1_56 == ((unsigned char) (var_1_58 - var_1_51))) : (var_1_56 == ((unsigned char) var_1_58))))) && ((var_1_11 || (! (var_1_32 <= var_1_33))) ? (var_1_59 == ((signed char) ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) : 1)) && (var_1_106 ? (var_1_60 == ((signed char) (var_1_49 - (var_1_52 + var_1_51)))) : 1)) && ((! var_1_106) ? (var_1_61 == ((signed long int) (var_1_5 + last_1_var_1_61))) : ((var_1_49 <= ((var_1_50 - var_1_31) / var_1_55)) ? (var_1_61 == ((signed long int) ((((var_1_33) > (var_1_50)) ? (var_1_33) : (var_1_50))))) : 1))) && ((var_1_43 >= var_1_84) ? (var_1_62 == ((signed char) ((((((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44)))) > (var_1_49)) ? (((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44)))) : (var_1_49))))) : (var_1_62 == ((signed char) ((((var_1_45) < (var_1_48)) ? (var_1_45) : (var_1_48))))))) && ((((var_1_17 & var_1_76) * (var_1_6 + 128u)) >= var_1_39) ? (var_1_63 == ((double) ((var_1_35 + (var_1_64 + var_1_65)) - var_1_36))) : (((var_1_35 - var_1_47) != ((var_1_34 - var_1_46) + var_1_21)) ? (var_1_63 == ((double) (var_1_47 - var_1_65))) : 1))) && ((var_1_26 || (var_1_22 >= var_1_30)) ? (var_1_66 == ((signed char) ((((var_1_43) < ((var_1_51 + ((((-8) < 0 ) ? -(-8) : (-8)))))) ? (var_1_43) : ((var_1_51 + ((((-8) < 0 ) ? -(-8) : (-8))))))))) : ((31.6f >= (var_1_47 - var_1_65)) ? (var_1_26 ? (((- var_1_15) <= 1000u) ? (var_1_66 == ((signed char) var_1_49)) : (((var_1_33 % var_1_32) < var_1_89) ? (var_1_66 == ((signed char) ((((var_1_45) < (((((var_1_51 + var_1_43) < 0 ) ? -(var_1_51 + var_1_43) : (var_1_51 + var_1_43))))) ? (var_1_45) : (((((var_1_51 + var_1_43) < 0 ) ? -(var_1_51 + var_1_43) : (var_1_51 + var_1_43)))))))) : (var_1_66 == ((signed char) (var_1_51 - (var_1_55 - var_1_52)))))) : ((var_1_33 == var_1_40) ? (var_1_66 == ((signed char) ((((0) < ((var_1_50 - 10))) ? (0) : ((var_1_50 - 10)))))) : (var_1_66 == ((signed char) (var_1_51 + ((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43)))))))) : (var_1_66 == ((signed char) (var_1_44 + 1)))))) && (((64 << var_1_38) <= var_1_16) ? (var_1_68 == ((signed char) (var_1_44 + -1))) : (var_1_68 == ((signed char) ((((8) < 0 ) ? -(8) : (8))))))) && (var_1_108 ? (((var_1_22 * var_1_21) == (var_1_46 * ((((var_1_103) < (var_1_47)) ? (var_1_103) : (var_1_47))))) ? (var_1_69 == ((signed char) ((var_1_52 + (32 - var_1_70)) - var_1_55))) : (var_1_69 == ((signed char) ((((((var_1_70 + var_1_71) + (var_1_72 + var_1_73))) < (((((var_1_43) < (var_1_49)) ? (var_1_43) : (var_1_49))))) ? (((var_1_70 + var_1_71) + (var_1_72 + var_1_73))) : (((((var_1_43) < (var_1_49)) ? (var_1_43) : (var_1_49))))))))) : (var_1_69 == ((signed char) (2 - (var_1_55 - var_1_52)))))) && (((((((var_1_51) < (var_1_6)) ? (var_1_51) : (var_1_6))) << var_1_16) != var_1_72) ? (var_1_74 == ((double) ((((((((var_1_64) < (var_1_65)) ? (var_1_64) : (var_1_65)))) < (var_1_36)) ? (((((var_1_64) < (var_1_65)) ? (var_1_64) : (var_1_65)))) : (var_1_36))))) : (var_1_74 == ((double) ((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) > (var_1_35)) ? (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : (var_1_35))))))) && ((var_1_65 >= (50.2 + 128.6)) ? (var_1_75 == ((signed char) ((((((((var_1_45) > ((var_1_48 - var_1_50))) ? (var_1_45) : ((var_1_48 - var_1_50))))) > (((((5) > (var_1_72)) ? (5) : (var_1_72))))) ? (((((var_1_45) > ((var_1_48 - var_1_50))) ? (var_1_45) : ((var_1_48 - var_1_50))))) : (((((5) > (var_1_72)) ? (5) : (var_1_72)))))))) : 1)) && ((var_1_48 > var_1_7) ? (var_1_106 ? (var_1_76 == ((unsigned short int) (var_1_92 + var_1_58))) : (((var_1_95 == var_1_52) || var_1_26) ? (((((((var_1_72 / var_1_55)) > (-64)) ? ((var_1_72 / var_1_55)) : (-64))) >= var_1_45) ? (var_1_76 == ((unsigned short int) (var_1_77 - var_1_50))) : (var_1_76 == ((unsigned short int) ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))))) : (var_1_76 == ((unsigned short int) (var_1_77 - 8))))) : (var_1_76 == ((unsigned short int) ((((((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))) < (var_1_92)) ? (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_92))))))) && (var_1_98 ? (var_1_78 == ((float) ((((25.25f) < (var_1_64)) ? (25.25f) : (var_1_64))))) : (var_1_78 == ((float) (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) - (var_1_34 - var_1_64)))))) && ((var_1_59 >= var_1_18) ? (var_1_67 ? (var_1_79 == ((float) var_1_64)) : 1) : 1)) && (((((((128 % var_1_58)) > ((var_1_52 << var_1_84))) ? ((128 % var_1_58)) : ((var_1_52 << var_1_84)))) < ((var_1_19 - var_1_7) - var_1_40)) ? (var_1_80 == ((float) ((((((((15.25f) < (((((var_1_36) < (var_1_47)) ? (var_1_36) : (var_1_47))))) ? (15.25f) : (((((var_1_36) < (var_1_47)) ? (var_1_36) : (var_1_47))))))) > (((((var_1_65) > (var_1_22)) ? (var_1_65) : (var_1_22))))) ? (((((15.25f) < (((((var_1_36) < (var_1_47)) ? (var_1_36) : (var_1_47))))) ? (15.25f) : (((((var_1_36) < (var_1_47)) ? (var_1_36) : (var_1_47))))))) : (((((var_1_65) > (var_1_22)) ? (var_1_65) : (var_1_22)))))))) : (var_1_80 == ((float) ((var_1_65 + var_1_64) - var_1_47))))) && ((var_1_35 >= var_1_94) ? (var_1_67 ? (var_1_81 == ((unsigned char) ((((var_1_50) < (((var_1_55 + var_1_82) - var_1_52))) ? (var_1_50) : (((var_1_55 + var_1_82) - var_1_52)))))) : (var_1_81 == ((unsigned char) ((((var_1_50) < ((((((var_1_58 - var_1_52)) < (var_1_82)) ? ((var_1_58 - var_1_52)) : (var_1_82))))) ? (var_1_50) : ((((((var_1_58 - var_1_52)) < (var_1_82)) ? ((var_1_58 - var_1_52)) : (var_1_82))))))))) : 1)) && ((var_1_16 < var_1_81) ? ((((((var_1_72) < (var_1_81)) ? (var_1_72) : (var_1_81))) == var_1_43) ? (var_1_83 == ((signed long int) -16)) : (var_1_83 == ((signed long int) (((((var_1_76 - var_1_6)) > (var_1_40)) ? ((var_1_76 - var_1_6)) : (var_1_40)))))) : (var_1_83 == ((signed long int) (var_1_8 - var_1_82))))) && (var_1_13 ? (var_1_84 == ((signed long int) (var_1_9 - (var_1_85 - 2)))) : (var_1_84 == ((signed long int) ((((((var_1_33 + var_1_10) + var_1_52)) > (var_1_8)) ? (((var_1_33 + var_1_10) + var_1_52)) : (var_1_8))))))) && ((var_1_6 > var_1_5) ? (((- var_1_34) >= var_1_63) ? (var_1_86 == ((signed short int) ((((var_1_44) > ((var_1_71 + var_1_57))) ? (var_1_44) : ((var_1_71 + var_1_57)))))) : (var_1_86 == ((signed short int) (((((var_1_88 + -32)) > (-5)) ? ((var_1_88 + -32)) : (-5)))))) : 1)) && ((var_1_90 < var_1_16) ? (var_1_88 == ((signed long int) ((var_1_85 - 25) - ((((var_1_41) < (var_1_83)) ? (var_1_41) : (var_1_83)))))) : (((var_1_6 - 8) > (var_1_19 - (var_1_70 + var_1_8))) ? (var_1_88 == ((signed long int) (((((var_1_5 - (var_1_9 + var_1_52))) < ((-256 + ((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10)))))) ? ((var_1_5 - (var_1_9 + var_1_52))) : ((-256 + ((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10))))))))) : (var_1_88 == ((signed long int) var_1_90))))) && (var_1_67 ? (var_1_89 == ((unsigned short int) (var_1_77 - var_1_5))) : 1)) && (last_1_var_1_108 ? (last_1_var_1_11 ? (var_1_90 == ((signed long int) ((((var_1_9) < (((((var_1_49) < (var_1_33)) ? (var_1_49) : (var_1_33))))) ? (var_1_9) : (((((var_1_49) < (var_1_33)) ? (var_1_49) : (var_1_33)))))))) : ((! var_1_13) ? ((var_1_34 < last_1_var_1_63) ? (var_1_90 == ((signed long int) (var_1_7 - last_1_var_1_10))) : 1) : (var_1_90 == ((signed long int) ((((var_1_57) < (((((4) > (var_1_5)) ? (4) : (var_1_5))))) ? (var_1_57) : (((((4) > (var_1_5)) ? (4) : (var_1_5)))))))))) : 1)) && ((var_1_51 < var_1_88) ? ((var_1_26 && var_1_108) ? (var_1_91 == ((signed short int) (var_1_55 - var_1_58))) : (var_1_91 == ((signed short int) var_1_55))) : (var_1_91 == ((signed short int) (50 + var_1_92))))) && ((var_1_99 >= var_1_107) ? (var_1_92 == ((signed short int) ((((var_1_56 - var_1_105) < 0 ) ? -(var_1_56 - var_1_105) : (var_1_56 - var_1_105))))) : 1)) && (var_1_93 == ((unsigned char) var_1_50))) && (var_1_67 ? (var_1_94 == ((float) var_1_22)) : (var_1_94 == ((float) var_1_36)))) && (var_1_11 ? (var_1_95 == ((unsigned char) var_1_50)) : 1)) && (var_1_67 ? (var_1_96 == ((unsigned char) var_1_58)) : 1)) && (var_1_97 == ((unsigned char) var_1_50))) && (var_1_67 ? (var_1_98 == ((unsigned char) var_1_14)) : 1)) && (var_1_14 ? (var_1_99 == ((double) var_1_64)) : 1)) && (var_1_100 == ((double) var_1_22))) && (var_1_101 == ((float) var_1_36))) && (var_1_24 ? (var_1_102 == ((signed short int) var_1_43)) : (var_1_102 == ((signed short int) var_1_32)))) && (var_1_103 == ((float) var_1_47))) && (var_1_11 ? (var_1_104 == ((signed char) var_1_48)) : (var_1_104 == ((signed char) var_1_71)))) && (var_1_105 == ((signed long int) var_1_55))) && (var_1_106 == ((unsigned char) var_1_14))) && (var_1_13 ? (var_1_107 == ((float) var_1_23)) : (var_1_107 == ((float) var_1_36)))) && ((10.25 <= (last_1_var_1_74 * var_1_30)) ? ((((((last_1_var_1_68) < (var_1_5)) ? (last_1_var_1_68) : (var_1_5))) < -5) ? (var_1_108 == ((unsigned char) ((last_1_var_1_24 || (var_1_13 && var_1_67)) && var_1_26))) : 1) : (var_1_108 == ((unsigned char) var_1_14)))
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

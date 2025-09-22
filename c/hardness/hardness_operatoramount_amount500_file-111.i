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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 128;
signed short int var_1_7 = 0;
signed short int var_1_8 = -10;
signed short int var_1_9 = 1;
signed short int var_1_10 = 32;
signed short int var_1_11 = 19853;
signed short int var_1_12 = 10000;
signed short int var_1_13 = 32;
signed short int var_1_14 = -128;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 5;
unsigned char var_1_19 = 2;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 64;
unsigned long int var_1_22 = 0;
signed long int var_1_23 = -10;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -128;
unsigned long int var_1_28 = 4;
signed char var_1_29 = 4;
signed char var_1_30 = 32;
signed char var_1_31 = 25;
signed char var_1_32 = 32;
signed char var_1_33 = 25;
signed char var_1_34 = 64;
signed char var_1_35 = 64;
unsigned long int var_1_36 = 4;
double var_1_38 = 9.5;
double var_1_39 = 0.7;
double var_1_40 = 9999999.25;
double var_1_41 = 1.5;
double var_1_42 = 10000000.85;
signed short int var_1_43 = -256;
unsigned short int var_1_44 = 2;
signed short int var_1_46 = -25;
signed short int var_1_47 = -16;
signed long int var_1_48 = 16;
float var_1_49 = 64.75;
signed long int var_1_50 = 1545627601;
signed long int var_1_51 = 1000000000;
signed long int var_1_52 = 1000000000;
signed long int var_1_53 = 1000000000;
float var_1_54 = 8.375;
signed char var_1_55 = 5;
unsigned short int var_1_56 = 0;
unsigned char var_1_57 = 1;
unsigned short int var_1_58 = 36433;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 1;
signed long int var_1_61 = 1;
float var_1_62 = 3.7199999999999998;
float var_1_63 = 0.0;
float var_1_64 = 9.5;
signed short int var_1_65 = -4;
double var_1_66 = 10000000000000.375;
unsigned char var_1_67 = 25;
unsigned char var_1_68 = 128;
unsigned char var_1_69 = 64;
double var_1_70 = -0.5;
unsigned char var_1_71 = 0;
signed short int var_1_72 = 100;
signed short int var_1_73 = -29273;
unsigned short int var_1_74 = 4;
signed short int var_1_75 = -5;
unsigned short int var_1_76 = 57102;
signed short int var_1_77 = -128;
signed char var_1_78 = -100;
signed char var_1_79 = 1;
unsigned long int var_1_80 = 256;
signed short int var_1_81 = 10;
signed short int var_1_83 = 256;
signed char var_1_84 = -64;
signed long int var_1_85 = 128;
signed long int var_1_86 = 256;
signed short int var_1_87 = 0;
signed short int var_1_88 = -8;
signed short int var_1_89 = -4;
unsigned long int var_1_91 = 10;
unsigned long int var_1_92 = 1;
unsigned short int var_1_93 = 32;
unsigned char var_1_94 = 2;
unsigned long int var_1_95 = 0;
unsigned short int var_1_96 = 25;
signed char var_1_97 = -16;
unsigned char var_1_98 = 1;
float var_1_99 = 16.95;
unsigned short int var_1_100 = 64;
unsigned char var_1_101 = 16;
double var_1_102 = 31.125;
float var_1_103 = 16.8;
unsigned char var_1_104 = 1;
unsigned char var_1_105 = 0;
float var_1_106 = 15.4;
signed long int var_1_107 = -64;
unsigned char var_1_108 = 2;
unsigned char var_1_109 = 100;
signed short int last_1_var_1_1 = 128;
unsigned char last_1_var_1_25 = 0;
signed short int last_1_var_1_43 = -256;
unsigned char last_1_var_1_57 = 1;
double last_1_var_1_66 = 10000000000000.375;
unsigned char last_1_var_1_71 = 0;
unsigned short int last_1_var_1_74 = 4;
signed short int last_1_var_1_77 = -128;
signed short int last_1_var_1_88 = -8;
unsigned short int last_1_var_1_100 = 64;
double last_1_var_1_102 = 31.125;
unsigned char last_1_var_1_105 = 0;
void initially(void) {
}
void step(void) {
 signed char stepLocal_16 = var_1_34;
 signed char stepLocal_15 = var_1_31;
 signed long int stepLocal_14 = var_1_20 >> var_1_44;
 signed long int stepLocal_13 = ((((last_1_var_1_74) > (var_1_10)) ? (last_1_var_1_74) : (var_1_10))) / 32;
 unsigned char stepLocal_12 = last_1_var_1_57;
 if (last_1_var_1_66 > var_1_42) {
  if (stepLocal_15 == last_1_var_1_43) {
   if ((var_1_31 - (var_1_35 - var_1_28)) >= stepLocal_14) {
    if (stepLocal_16 >= ((((var_1_8) < ((var_1_30 - var_1_35))) ? (var_1_8) : ((var_1_30 - var_1_35))))) {
     var_1_43 = (-8 + var_1_13);
    }
   } else {
    if (stepLocal_13 >= var_1_31) {
     if (last_1_var_1_71 && stepLocal_12) {
      var_1_43 = (((((var_1_33 + var_1_13) < 0 ) ? -(var_1_33 + var_1_13) : (var_1_33 + var_1_13))) + var_1_46);
     }
    } else {
     var_1_43 = (((var_1_30 + var_1_17) + var_1_21) - (var_1_12 + (var_1_34 + var_1_31)));
    }
   }
  } else {
   var_1_43 = (var_1_10 + (((((last_1_var_1_74) < (var_1_17)) ? (last_1_var_1_74) : (var_1_17))) + var_1_47));
  }
 } else {
  var_1_43 = (var_1_17 + var_1_20);
 }
 if ((last_1_var_1_105 || (var_1_7 <= last_1_var_1_100)) || (var_1_34 <= var_1_32)) {
  if (! var_1_26) {
   var_1_36 = ((var_1_11 + var_1_28) + var_1_20);
  } else {
   var_1_36 = var_1_18;
  }
 } else {
  var_1_36 = (var_1_28 + var_1_30);
 }
 if ((last_1_var_1_102 / ((((var_1_49) > (var_1_63)) ? (var_1_49) : (var_1_63)))) != last_1_var_1_102) {
  var_1_71 = ((last_1_var_1_25 && var_1_60) && var_1_59);
 } else {
  var_1_71 = (! (! var_1_59));
 }
 if (var_1_71) {
  var_1_104 = var_1_59;
 } else {
  var_1_104 = var_1_26;
 }
 if (var_1_104) {
  var_1_56 = (var_1_11 + var_1_12);
 }
 signed long int stepLocal_3 = var_1_13 - (var_1_12 + 1);
 if ((var_1_7 * (2 - var_1_9)) <= stepLocal_3) {
  var_1_15 = (((((var_1_16 + var_1_17)) < (var_1_18)) ? ((var_1_16 + var_1_17)) : (var_1_18)));
 }
 if (var_1_54 <= 50.8f) {
  var_1_62 = ((var_1_63 - var_1_64) - var_1_41);
 }
 var_1_66 = var_1_54;
 if (var_1_26) {
  var_1_78 = var_1_33;
 } else {
  var_1_78 = ((var_1_28 + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) + var_1_32);
 }
 if (var_1_62 < var_1_49) {
  var_1_79 = (var_1_32 + ((((var_1_31) < (var_1_44)) ? (var_1_31) : (var_1_44))));
 }
 if (var_1_104) {
  if ((64.75f * var_1_54) < var_1_42) {
   var_1_81 = (var_1_14 + ((((var_1_68) > (var_1_83)) ? (var_1_68) : (var_1_83))));
  }
 }
 var_1_94 = var_1_20;
 var_1_96 = var_1_81;
 var_1_97 = var_1_31;
 var_1_98 = var_1_26;
 var_1_99 = var_1_42;
 var_1_100 = var_1_69;
 var_1_101 = var_1_35;
 var_1_103 = var_1_41;
 if (var_1_71) {
  var_1_106 = var_1_64;
 } else {
  var_1_106 = var_1_54;
 }
 signed long int stepLocal_21 = (((4 * var_1_8) < 0 ) ? -(4 * var_1_8) : (4 * var_1_8));
 if (var_1_43 <= stepLocal_21) {
  if (var_1_98) {
   var_1_70 = var_1_64;
  }
 }
 if ((var_1_17 == var_1_97) || (var_1_75 <= var_1_20)) {
  if (((1000000000u << var_1_92) > var_1_36) || var_1_60) {
   var_1_91 = var_1_30;
  } else {
   var_1_91 = var_1_58;
  }
 } else {
  var_1_91 = var_1_56;
 }
 var_1_22 = (var_1_11 + var_1_94);
 signed char stepLocal_11 = var_1_33;
 unsigned long int stepLocal_10 = var_1_22;
 if (var_1_16 > stepLocal_11) {
  var_1_38 = (var_1_39 - var_1_40);
 } else {
  if (var_1_7 >= stepLocal_10) {
   var_1_38 = ((((((((var_1_40) < ((var_1_41 - var_1_39))) ? (var_1_40) : ((var_1_41 - var_1_39))))) > (var_1_42)) ? (((((var_1_40) < ((var_1_41 - var_1_39))) ? (var_1_40) : ((var_1_41 - var_1_39))))) : (var_1_42)));
  } else {
   var_1_38 = ((((var_1_40) < (var_1_42)) ? (var_1_40) : (var_1_42)));
  }
 }
 if (var_1_98) {
  var_1_93 = var_1_35;
 } else {
  var_1_93 = var_1_28;
 }
 if (var_1_98) {
  var_1_95 = var_1_73;
 }
 unsigned char stepLocal_19 = var_1_18;
 unsigned long int stepLocal_18 = var_1_95;
 if (stepLocal_19 <= var_1_21) {
  if (var_1_60) {
   var_1_65 = (var_1_17 - var_1_10);
  } else {
   if (var_1_43 < stepLocal_18) {
    var_1_65 = ((((64) > (var_1_46)) ? (64) : (var_1_46)));
   } else {
    var_1_65 = (var_1_34 + var_1_18);
   }
  }
 } else {
  var_1_65 = ((((var_1_35) < (var_1_47)) ? (var_1_35) : (var_1_47)));
 }
 if ((((((var_1_38 * var_1_40)) < (var_1_42)) ? ((var_1_38 * var_1_40)) : (var_1_42))) > ((((((((var_1_49) < (var_1_66)) ? (var_1_49) : (var_1_66)))) < (var_1_54)) ? (((((var_1_49) < (var_1_66)) ? (var_1_49) : (var_1_66)))) : (var_1_54)))) {
  if (var_1_16 < ((((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) < (var_1_95)) ? (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) : (var_1_95)))) {
   if (((((var_1_91 / var_1_21) < 0 ) ? -(var_1_91 / var_1_21) : (var_1_91 / var_1_21))) > ((4u >> var_1_28) * var_1_44)) {
    if ((var_1_58 - ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) <= var_1_20) {
     var_1_57 = ((! var_1_26) || var_1_59);
    }
   }
  } else {
   var_1_57 = ((var_1_59 || (! var_1_26)) || (! 1));
  }
 } else {
  if (var_1_71) {
   var_1_57 = (var_1_26 && var_1_60);
  } else {
   var_1_57 = (((-128 * var_1_18) == ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) || (var_1_60 && var_1_26));
  }
 }
 if (var_1_96 >= (var_1_95 / var_1_21)) {
  if (! var_1_26) {
   var_1_55 = (var_1_44 + var_1_31);
  }
 } else {
  var_1_55 = (-16 + var_1_31);
 }
 signed long int stepLocal_20 = var_1_100 / var_1_34;
 if (var_1_16 > stepLocal_20) {
  if (var_1_71) {
   if ((((((var_1_66) < (var_1_40)) ? (var_1_66) : (var_1_40))) + var_1_41) != (var_1_38 * var_1_39)) {
    var_1_67 = (var_1_35 + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))));
   }
  } else {
   if (! ((var_1_22 * var_1_100) > var_1_93)) {
    var_1_67 = ((((((var_1_20 + var_1_21)) > (var_1_68)) ? ((var_1_20 + var_1_21)) : (var_1_68))) - var_1_69);
   }
  }
 }
 if ((- var_1_73) <= (var_1_34 * (var_1_85 - var_1_12))) {
  var_1_84 = ((((((((1) < 0 ) ? -(1) : (1)))) < ((1 + var_1_44))) ? (((((1) < 0 ) ? -(1) : (1)))) : ((1 + var_1_44))));
 } else {
  if (var_1_28 == ((var_1_33 + var_1_95) / var_1_12)) {
   var_1_84 = ((((var_1_34) > (((((var_1_33) < (var_1_28)) ? (var_1_33) : (var_1_28))))) ? (var_1_34) : (((((var_1_33) < (var_1_28)) ? (var_1_33) : (var_1_28))))));
  } else {
   var_1_84 = (var_1_30 - ((((var_1_28) < ((var_1_44 + var_1_32))) ? (var_1_28) : ((var_1_44 + var_1_32)))));
  }
 }
 unsigned char stepLocal_5 = var_1_104;
 signed long int stepLocal_4 = var_1_10 & var_1_43;
 if (var_1_11 >= stepLocal_4) {
  if (stepLocal_5 || var_1_57) {
   var_1_23 = ((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7)));
  }
 } else {
  var_1_23 = (var_1_8 + var_1_16);
 }
 signed short int stepLocal_6 = var_1_12;
 if (stepLocal_6 > ((((1) < 0 ) ? -(1) : (1)))) {
  var_1_25 = ((var_1_11 >= var_1_23) || var_1_26);
 }
 if (var_1_25) {
  var_1_102 = var_1_63;
 }
 if (1.5 >= ((((var_1_54) < (var_1_102)) ? (var_1_54) : (var_1_102)))) {
  var_1_72 = (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - (((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73))) - var_1_16));
 } else {
  var_1_72 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 }
 if (var_1_25) {
  var_1_105 = var_1_26;
 } else {
  var_1_105 = var_1_59;
 }
 signed long int stepLocal_2 = var_1_9 - ((((var_1_12) > (var_1_10)) ? (var_1_12) : (var_1_10)));
 unsigned char stepLocal_1 = var_1_98;
 signed long int stepLocal_0 = 2;
 if (var_1_70 == var_1_102) {
  if (((((var_1_36) < (last_1_var_1_1)) ? (var_1_36) : (last_1_var_1_1))) > stepLocal_0) {
   if ((4.25 <= var_1_102) || stepLocal_1) {
    var_1_1 = (var_1_7 + var_1_8);
   } else {
    var_1_1 = (8 - (var_1_9 + ((((50) < (var_1_10)) ? (50) : (var_1_10)))));
   }
  } else {
   var_1_1 = (var_1_10 - (((((var_1_11) > (21328)) ? (var_1_11) : (21328))) - (var_1_12 - var_1_13)));
  }
 } else {
  if (stepLocal_2 <= var_1_8) {
   var_1_1 = (((((var_1_9) < (var_1_14)) ? (var_1_9) : (var_1_14))) + var_1_8);
  }
 }
 if (var_1_105) {
  var_1_19 = ((var_1_20 + var_1_21) - var_1_16);
 }
 signed long int stepLocal_17 = var_1_50;
 if ((var_1_42 / var_1_49) < var_1_38) {
  var_1_48 = ((var_1_50 - (var_1_51 - var_1_12)) - ((var_1_52 + var_1_53) - var_1_32));
 } else {
  if (((9.180583557610914E18f - var_1_54) - var_1_41) > (var_1_38 * var_1_40)) {
   if (var_1_71) {
    if (((var_1_54 * var_1_42) / var_1_49) >= (var_1_70 * 15.75)) {
     var_1_48 = (var_1_18 - (var_1_28 + (32 + 64)));
    } else {
     var_1_48 = ((((var_1_50) > (1)) ? (var_1_50) : (1)));
    }
   } else {
    if (stepLocal_17 >= var_1_46) {
     var_1_48 = ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)));
    } else {
     var_1_48 = (((((-256 + var_1_72)) > (((((var_1_31) < (var_1_14)) ? (var_1_31) : (var_1_14))))) ? ((-256 + var_1_72)) : (((((var_1_31) < (var_1_14)) ? (var_1_31) : (var_1_14))))));
    }
   }
  } else {
   var_1_48 = var_1_101;
  }
 }
 signed long int stepLocal_27 = var_1_32 + var_1_33;
 signed short int stepLocal_26 = var_1_73;
 if (stepLocal_27 < (var_1_44 * 1)) {
  if (var_1_100 != stepLocal_26) {
   var_1_86 = ((var_1_50 - var_1_12) - var_1_58);
  }
 } else {
  var_1_86 = (var_1_48 + var_1_31);
 }
 var_1_107 = ((var_1_86 - var_1_31) + (var_1_20 - var_1_36));
 if (var_1_75 < var_1_36) {
  var_1_88 = ((((var_1_89) < (var_1_13)) ? (var_1_89) : (var_1_13)));
 } else {
  if ((- (- var_1_66)) > (var_1_42 * ((((var_1_40) > (var_1_49)) ? (var_1_40) : (var_1_49))))) {
   if (var_1_26 && var_1_98) {
    var_1_88 = (var_1_101 + ((((0) < (-10)) ? (0) : (-10))));
   } else {
    var_1_88 = (var_1_68 + ((((var_1_101) < 0 ) ? -(var_1_101) : (var_1_101))));
   }
  } else {
   if (last_1_var_1_88 >= ((var_1_34 + var_1_16) >> var_1_28)) {
    var_1_88 = (var_1_48 - var_1_68);
   } else {
    if ((var_1_107 / var_1_50) > var_1_11) {
     var_1_88 = ((var_1_32 + var_1_9) - var_1_28);
    } else {
     var_1_88 = ((((((var_1_48 - var_1_101) + var_1_17)) > (var_1_89)) ? (((var_1_48 - var_1_101) + var_1_17)) : (var_1_89)));
    }
   }
  }
 }
 signed long int stepLocal_29 = -256;
 signed long int stepLocal_28 = ~ (-25 + var_1_10);
 if ((var_1_73 - var_1_33) > stepLocal_29) {
  var_1_87 = (var_1_88 - var_1_30);
 } else {
  if ((50 + (var_1_44 - var_1_21)) < stepLocal_28) {
   var_1_87 = (var_1_10 - 4);
  }
 }
 signed long int stepLocal_31 = 1 | var_1_69;
 signed long int stepLocal_30 = (((4) > (var_1_88)) ? (4) : (var_1_88));
 if (var_1_75 >= stepLocal_30) {
  if (var_1_35 < stepLocal_31) {
   var_1_108 = var_1_20;
  } else {
   var_1_108 = var_1_92;
  }
 } else {
  var_1_108 = var_1_109;
 }
 signed long int stepLocal_25 = (((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8));
 if (var_1_88 <= stepLocal_25) {
  var_1_80 = var_1_76;
 }
 unsigned char stepLocal_24 = var_1_59;
 unsigned short int stepLocal_23 = var_1_96;
 if ((last_1_var_1_77 + (var_1_11 - var_1_108)) > stepLocal_23) {
  if ((var_1_34 > var_1_87) || stepLocal_24) {
   var_1_77 = ((var_1_10 + var_1_68) - var_1_44);
  }
 } else {
  if (var_1_59) {
   var_1_77 = ((var_1_13 - var_1_68) + (((((var_1_18) < (-128)) ? (var_1_18) : (-128))) + var_1_21));
  } else {
   var_1_77 = var_1_7;
  }
 }
 if (var_1_59) {
  if (((var_1_44 + var_1_95) & var_1_33) > (var_1_53 * (var_1_10 * var_1_20))) {
   if (((((var_1_95) < (var_1_11)) ? (var_1_95) : (var_1_11))) < var_1_33) {
    var_1_61 = var_1_80;
   } else {
    var_1_61 = var_1_46;
   }
  } else {
   var_1_61 = ((((var_1_91) > (-16)) ? (var_1_91) : (-16)));
  }
 } else {
  var_1_61 = ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)));
 }
 signed long int stepLocal_22 = var_1_61 / var_1_75;
 if (var_1_12 <= stepLocal_22) {
  var_1_74 = ((var_1_76 - var_1_31) - var_1_34);
 }
 if ((var_1_74 * (var_1_86 + var_1_16)) >= (var_1_11 >> var_1_28)) {
  if (! (var_1_74 < var_1_9)) {
   var_1_27 = var_1_17;
  } else {
   if (var_1_95 >= var_1_20) {
    var_1_27 = (var_1_28 - var_1_10);
   } else {
    if (var_1_16 <= var_1_17) {
     var_1_27 = (-32 + var_1_8);
    } else {
     var_1_27 = (((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))) + var_1_16);
    }
   }
  }
 } else {
  if (var_1_71) {
   var_1_27 = ((var_1_11 - var_1_20) - (var_1_21 + 64));
  } else {
   var_1_27 = ((((var_1_16) > (var_1_13)) ? (var_1_16) : (var_1_13)));
  }
 }
 signed char stepLocal_9 = var_1_35;
 signed short int stepLocal_8 = var_1_9;
 unsigned long int stepLocal_7 = var_1_36;
 if (var_1_105) {
  if (stepLocal_7 > var_1_74) {
   if (stepLocal_8 > (var_1_7 / var_1_21)) {
    var_1_29 = ((var_1_31 + (var_1_32 - var_1_28)) - ((((var_1_30) > (var_1_33)) ? (var_1_30) : (var_1_33))));
   } else {
    var_1_29 = ((var_1_34 - 4) - (var_1_35 - var_1_30));
   }
  } else {
   if ((- (var_1_21 * var_1_11)) != stepLocal_9) {
    var_1_29 = var_1_28;
   } else {
    var_1_29 = ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)));
   }
  }
 }
}
void updateVariables(void) {
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -16383);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 16383);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 8191);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 8191);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -16383);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 63);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 64);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 14);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 31);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 62);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 63);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 7);
 var_1_46 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_46 >= -16383);
 assume_abort_if_not(var_1_46 <= 16383);
 var_1_47 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_47 >= -8191);
 assume_abort_if_not(var_1_47 <= 8191);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 assume_abort_if_not(var_1_49 != 0.0F);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= 1073741822);
 assume_abort_if_not(var_1_50 <= 2147483646);
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= 536870911);
 assume_abort_if_not(var_1_51 <= 1073741823);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= 536870911);
 assume_abort_if_not(var_1_52 <= 1073741823);
 var_1_53 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_53 >= 536870912);
 assume_abort_if_not(var_1_53 <= 1073741823);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427388000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 32767);
 assume_abort_if_not(var_1_58 <= 65535);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 0);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 1);
 assume_abort_if_not(var_1_60 <= 1);
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= 4611686.018427383000e+12F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854766000e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 127);
 assume_abort_if_not(var_1_68 <= 254);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 127);
 var_1_73 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_73 >= -32766);
 assume_abort_if_not(var_1_73 <= -16383);
 var_1_75 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_75 >= -32768);
 assume_abort_if_not(var_1_75 <= 32767);
 assume_abort_if_not(var_1_75 != 0);
 var_1_76 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_76 >= 49150);
 assume_abort_if_not(var_1_76 <= 65534);
 var_1_83 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_83 >= -16383);
 assume_abort_if_not(var_1_83 <= 16383);
 var_1_85 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_85 >= -1);
 assume_abort_if_not(var_1_85 <= 2147483647);
 var_1_89 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_89 >= -32767);
 assume_abort_if_not(var_1_89 <= 32766);
 var_1_92 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_92 >= 0);
 assume_abort_if_not(var_1_92 <= 2);
 var_1_109 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_109 >= 0);
 assume_abort_if_not(var_1_109 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_105 = var_1_105;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_70 == var_1_102) ? ((((((var_1_36) < (last_1_var_1_1)) ? (var_1_36) : (last_1_var_1_1))) > 2) ? (((4.25 <= var_1_102) || var_1_98) ? (var_1_1 == ((signed short int) (var_1_7 + var_1_8))) : (var_1_1 == ((signed short int) (8 - (var_1_9 + ((((50) < (var_1_10)) ? (50) : (var_1_10)))))))) : (var_1_1 == ((signed short int) (var_1_10 - (((((var_1_11) > (21328)) ? (var_1_11) : (21328))) - (var_1_12 - var_1_13)))))) : (((var_1_9 - ((((var_1_12) > (var_1_10)) ? (var_1_12) : (var_1_10)))) <= var_1_8) ? (var_1_1 == ((signed short int) (((((var_1_9) < (var_1_14)) ? (var_1_9) : (var_1_14))) + var_1_8))) : 1)) && (((var_1_7 * (2 - var_1_9)) <= (var_1_13 - (var_1_12 + 1))) ? (var_1_15 == ((unsigned char) (((((var_1_16 + var_1_17)) < (var_1_18)) ? ((var_1_16 + var_1_17)) : (var_1_18))))) : 1)) && (var_1_105 ? (var_1_19 == ((unsigned char) ((var_1_20 + var_1_21) - var_1_16))) : 1)) && (var_1_22 == ((unsigned long int) (var_1_11 + var_1_94)))) && ((var_1_11 >= (var_1_10 & var_1_43)) ? ((var_1_104 || var_1_57) ? (var_1_23 == ((signed long int) ((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7))))) : 1) : (var_1_23 == ((signed long int) (var_1_8 + var_1_16))))) && ((var_1_12 > ((((1) < 0 ) ? -(1) : (1)))) ? (var_1_25 == ((unsigned char) ((var_1_11 >= var_1_23) || var_1_26))) : 1)) && (((var_1_74 * (var_1_86 + var_1_16)) >= (var_1_11 >> var_1_28)) ? ((! (var_1_74 < var_1_9)) ? (var_1_27 == ((signed short int) var_1_17)) : ((var_1_95 >= var_1_20) ? (var_1_27 == ((signed short int) (var_1_28 - var_1_10))) : ((var_1_16 <= var_1_17) ? (var_1_27 == ((signed short int) (-32 + var_1_8))) : (var_1_27 == ((signed short int) (((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))) + var_1_16)))))) : (var_1_71 ? (var_1_27 == ((signed short int) ((var_1_11 - var_1_20) - (var_1_21 + 64)))) : (var_1_27 == ((signed short int) ((((var_1_16) > (var_1_13)) ? (var_1_16) : (var_1_13)))))))) && (var_1_105 ? ((var_1_36 > var_1_74) ? ((var_1_9 > (var_1_7 / var_1_21)) ? (var_1_29 == ((signed char) ((var_1_31 + (var_1_32 - var_1_28)) - ((((var_1_30) > (var_1_33)) ? (var_1_30) : (var_1_33)))))) : (var_1_29 == ((signed char) ((var_1_34 - 4) - (var_1_35 - var_1_30))))) : (((- (var_1_21 * var_1_11)) != var_1_35) ? (var_1_29 == ((signed char) var_1_28)) : (var_1_29 == ((signed char) ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32))))))) : 1)) && (((last_1_var_1_105 || (var_1_7 <= last_1_var_1_100)) || (var_1_34 <= var_1_32)) ? ((! var_1_26) ? (var_1_36 == ((unsigned long int) ((var_1_11 + var_1_28) + var_1_20))) : (var_1_36 == ((unsigned long int) var_1_18))) : (var_1_36 == ((unsigned long int) (var_1_28 + var_1_30))))) && ((var_1_16 > var_1_33) ? (var_1_38 == ((double) (var_1_39 - var_1_40))) : ((var_1_7 >= var_1_22) ? (var_1_38 == ((double) ((((((((var_1_40) < ((var_1_41 - var_1_39))) ? (var_1_40) : ((var_1_41 - var_1_39))))) > (var_1_42)) ? (((((var_1_40) < ((var_1_41 - var_1_39))) ? (var_1_40) : ((var_1_41 - var_1_39))))) : (var_1_42))))) : (var_1_38 == ((double) ((((var_1_40) < (var_1_42)) ? (var_1_40) : (var_1_42)))))))) && ((last_1_var_1_66 > var_1_42) ? ((var_1_31 == last_1_var_1_43) ? (((var_1_31 - (var_1_35 - var_1_28)) >= (var_1_20 >> var_1_44)) ? ((var_1_34 >= ((((var_1_8) < ((var_1_30 - var_1_35))) ? (var_1_8) : ((var_1_30 - var_1_35))))) ? (var_1_43 == ((signed short int) (-8 + var_1_13))) : 1) : (((((((last_1_var_1_74) > (var_1_10)) ? (last_1_var_1_74) : (var_1_10))) / 32) >= var_1_31) ? ((last_1_var_1_71 && last_1_var_1_57) ? (var_1_43 == ((signed short int) (((((var_1_33 + var_1_13) < 0 ) ? -(var_1_33 + var_1_13) : (var_1_33 + var_1_13))) + var_1_46))) : 1) : (var_1_43 == ((signed short int) (((var_1_30 + var_1_17) + var_1_21) - (var_1_12 + (var_1_34 + var_1_31))))))) : (var_1_43 == ((signed short int) (var_1_10 + (((((last_1_var_1_74) < (var_1_17)) ? (last_1_var_1_74) : (var_1_17))) + var_1_47))))) : (var_1_43 == ((signed short int) (var_1_17 + var_1_20))))) && (((var_1_42 / var_1_49) < var_1_38) ? (var_1_48 == ((signed long int) ((var_1_50 - (var_1_51 - var_1_12)) - ((var_1_52 + var_1_53) - var_1_32)))) : ((((9.180583557610914E18f - var_1_54) - var_1_41) > (var_1_38 * var_1_40)) ? (var_1_71 ? ((((var_1_54 * var_1_42) / var_1_49) >= (var_1_70 * 15.75)) ? (var_1_48 == ((signed long int) (var_1_18 - (var_1_28 + (32 + 64))))) : (var_1_48 == ((signed long int) ((((var_1_50) > (1)) ? (var_1_50) : (1)))))) : ((var_1_50 >= var_1_46) ? (var_1_48 == ((signed long int) ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))))) : (var_1_48 == ((signed long int) (((((-256 + var_1_72)) > (((((var_1_31) < (var_1_14)) ? (var_1_31) : (var_1_14))))) ? ((-256 + var_1_72)) : (((((var_1_31) < (var_1_14)) ? (var_1_31) : (var_1_14)))))))))) : (var_1_48 == ((signed long int) var_1_101))))) && ((var_1_96 >= (var_1_95 / var_1_21)) ? ((! var_1_26) ? (var_1_55 == ((signed char) (var_1_44 + var_1_31))) : 1) : (var_1_55 == ((signed char) (-16 + var_1_31))))) && (var_1_104 ? (var_1_56 == ((unsigned short int) (var_1_11 + var_1_12))) : 1)) && (((((((var_1_38 * var_1_40)) < (var_1_42)) ? ((var_1_38 * var_1_40)) : (var_1_42))) > ((((((((var_1_49) < (var_1_66)) ? (var_1_49) : (var_1_66)))) < (var_1_54)) ? (((((var_1_49) < (var_1_66)) ? (var_1_49) : (var_1_66)))) : (var_1_54)))) ? ((var_1_16 < ((((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) < (var_1_95)) ? (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) : (var_1_95)))) ? ((((((var_1_91 / var_1_21) < 0 ) ? -(var_1_91 / var_1_21) : (var_1_91 / var_1_21))) > ((4u >> var_1_28) * var_1_44)) ? (((var_1_58 - ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) <= var_1_20) ? (var_1_57 == ((unsigned char) ((! var_1_26) || var_1_59))) : 1) : 1) : (var_1_57 == ((unsigned char) ((var_1_59 || (! var_1_26)) || (! 1))))) : (var_1_71 ? (var_1_57 == ((unsigned char) (var_1_26 && var_1_60))) : (var_1_57 == ((unsigned char) (((-128 * var_1_18) == ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) || (var_1_60 && var_1_26))))))) && (var_1_59 ? ((((var_1_44 + var_1_95) & var_1_33) > (var_1_53 * (var_1_10 * var_1_20))) ? ((((((var_1_95) < (var_1_11)) ? (var_1_95) : (var_1_11))) < var_1_33) ? (var_1_61 == ((signed long int) var_1_80)) : (var_1_61 == ((signed long int) var_1_46))) : (var_1_61 == ((signed long int) ((((var_1_91) > (-16)) ? (var_1_91) : (-16)))))) : (var_1_61 == ((signed long int) ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))))))) && ((var_1_54 <= 50.8f) ? (var_1_62 == ((float) ((var_1_63 - var_1_64) - var_1_41))) : 1)) && ((var_1_18 <= var_1_21) ? (var_1_60 ? (var_1_65 == ((signed short int) (var_1_17 - var_1_10))) : ((var_1_43 < var_1_95) ? (var_1_65 == ((signed short int) ((((64) > (var_1_46)) ? (64) : (var_1_46))))) : (var_1_65 == ((signed short int) (var_1_34 + var_1_18))))) : (var_1_65 == ((signed short int) ((((var_1_35) < (var_1_47)) ? (var_1_35) : (var_1_47))))))) && (var_1_66 == ((double) var_1_54))) && ((var_1_16 > (var_1_100 / var_1_34)) ? (var_1_71 ? (((((((var_1_66) < (var_1_40)) ? (var_1_66) : (var_1_40))) + var_1_41) != (var_1_38 * var_1_39)) ? (var_1_67 == ((unsigned char) (var_1_35 + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) : 1) : ((! ((var_1_22 * var_1_100) > var_1_93)) ? (var_1_67 == ((unsigned char) ((((((var_1_20 + var_1_21)) > (var_1_68)) ? ((var_1_20 + var_1_21)) : (var_1_68))) - var_1_69))) : 1)) : 1)) && ((var_1_43 <= ((((4 * var_1_8) < 0 ) ? -(4 * var_1_8) : (4 * var_1_8)))) ? (var_1_98 ? (var_1_70 == ((double) var_1_64)) : 1) : 1)) && (((last_1_var_1_102 / ((((var_1_49) > (var_1_63)) ? (var_1_49) : (var_1_63)))) != last_1_var_1_102) ? (var_1_71 == ((unsigned char) ((last_1_var_1_25 && var_1_60) && var_1_59))) : (var_1_71 == ((unsigned char) (! (! var_1_59)))))) && ((1.5 >= ((((var_1_54) < (var_1_102)) ? (var_1_54) : (var_1_102)))) ? (var_1_72 == ((signed short int) (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - (((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73))) - var_1_16)))) : (var_1_72 == ((signed short int) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))) && ((var_1_12 <= (var_1_61 / var_1_75)) ? (var_1_74 == ((unsigned short int) ((var_1_76 - var_1_31) - var_1_34))) : 1)) && (((last_1_var_1_77 + (var_1_11 - var_1_108)) > var_1_96) ? (((var_1_34 > var_1_87) || var_1_59) ? (var_1_77 == ((signed short int) ((var_1_10 + var_1_68) - var_1_44))) : 1) : (var_1_59 ? (var_1_77 == ((signed short int) ((var_1_13 - var_1_68) + (((((var_1_18) < (-128)) ? (var_1_18) : (-128))) + var_1_21)))) : (var_1_77 == ((signed short int) var_1_7))))) && (var_1_26 ? (var_1_78 == ((signed char) var_1_33)) : (var_1_78 == ((signed char) ((var_1_28 + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) + var_1_32))))) && ((var_1_62 < var_1_49) ? (var_1_79 == ((signed char) (var_1_32 + ((((var_1_31) < (var_1_44)) ? (var_1_31) : (var_1_44)))))) : 1)) && ((var_1_88 <= ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) ? (var_1_80 == ((unsigned long int) var_1_76)) : 1)) && (var_1_104 ? (((64.75f * var_1_54) < var_1_42) ? (var_1_81 == ((signed short int) (var_1_14 + ((((var_1_68) > (var_1_83)) ? (var_1_68) : (var_1_83)))))) : 1) : 1)) && (((- var_1_73) <= (var_1_34 * (var_1_85 - var_1_12))) ? (var_1_84 == ((signed char) ((((((((1) < 0 ) ? -(1) : (1)))) < ((1 + var_1_44))) ? (((((1) < 0 ) ? -(1) : (1)))) : ((1 + var_1_44)))))) : ((var_1_28 == ((var_1_33 + var_1_95) / var_1_12)) ? (var_1_84 == ((signed char) ((((var_1_34) > (((((var_1_33) < (var_1_28)) ? (var_1_33) : (var_1_28))))) ? (var_1_34) : (((((var_1_33) < (var_1_28)) ? (var_1_33) : (var_1_28)))))))) : (var_1_84 == ((signed char) (var_1_30 - ((((var_1_28) < ((var_1_44 + var_1_32))) ? (var_1_28) : ((var_1_44 + var_1_32)))))))))) && (((var_1_32 + var_1_33) < (var_1_44 * 1)) ? ((var_1_100 != var_1_73) ? (var_1_86 == ((signed long int) ((var_1_50 - var_1_12) - var_1_58))) : 1) : (var_1_86 == ((signed long int) (var_1_48 + var_1_31))))) && (((var_1_73 - var_1_33) > -256) ? (var_1_87 == ((signed short int) (var_1_88 - var_1_30))) : (((50 + (var_1_44 - var_1_21)) < (~ (-25 + var_1_10))) ? (var_1_87 == ((signed short int) (var_1_10 - 4))) : 1))) && ((var_1_75 < var_1_36) ? (var_1_88 == ((signed short int) ((((var_1_89) < (var_1_13)) ? (var_1_89) : (var_1_13))))) : (((- (- var_1_66)) > (var_1_42 * ((((var_1_40) > (var_1_49)) ? (var_1_40) : (var_1_49))))) ? ((var_1_26 && var_1_98) ? (var_1_88 == ((signed short int) (var_1_101 + ((((0) < (-10)) ? (0) : (-10)))))) : (var_1_88 == ((signed short int) (var_1_68 + ((((var_1_101) < 0 ) ? -(var_1_101) : (var_1_101))))))) : ((last_1_var_1_88 >= ((var_1_34 + var_1_16) >> var_1_28)) ? (var_1_88 == ((signed short int) (var_1_48 - var_1_68))) : (((var_1_107 / var_1_50) > var_1_11) ? (var_1_88 == ((signed short int) ((var_1_32 + var_1_9) - var_1_28))) : (var_1_88 == ((signed short int) ((((((var_1_48 - var_1_101) + var_1_17)) > (var_1_89)) ? (((var_1_48 - var_1_101) + var_1_17)) : (var_1_89)))))))))) && (((var_1_17 == var_1_97) || (var_1_75 <= var_1_20)) ? ((((1000000000u << var_1_92) > var_1_36) || var_1_60) ? (var_1_91 == ((unsigned long int) var_1_30)) : (var_1_91 == ((unsigned long int) var_1_58))) : (var_1_91 == ((unsigned long int) var_1_56)))) && (var_1_98 ? (var_1_93 == ((unsigned short int) var_1_35)) : (var_1_93 == ((unsigned short int) var_1_28)))) && (var_1_94 == ((unsigned char) var_1_20))) && (var_1_98 ? (var_1_95 == ((unsigned long int) var_1_73)) : 1)) && (var_1_96 == ((unsigned short int) var_1_81))) && (var_1_97 == ((signed char) var_1_31))) && (var_1_98 == ((unsigned char) var_1_26))) && (var_1_99 == ((float) var_1_42))) && (var_1_100 == ((unsigned short int) var_1_69))) && (var_1_101 == ((unsigned char) var_1_35))) && (var_1_25 ? (var_1_102 == ((double) var_1_63)) : 1)) && (var_1_103 == ((float) var_1_41))) && (var_1_71 ? (var_1_104 == ((unsigned char) var_1_59)) : (var_1_104 == ((unsigned char) var_1_26)))) && (var_1_25 ? (var_1_105 == ((unsigned char) var_1_26)) : (var_1_105 == ((unsigned char) var_1_59)))) && (var_1_71 ? (var_1_106 == ((float) var_1_64)) : (var_1_106 == ((float) var_1_54)))) && (var_1_107 == ((signed long int) ((var_1_86 - var_1_31) + (var_1_20 - var_1_36))))) && ((var_1_75 >= ((((4) > (var_1_88)) ? (4) : (var_1_88)))) ? ((var_1_35 < (1 | var_1_69)) ? (var_1_108 == ((unsigned char) var_1_20)) : (var_1_108 == ((unsigned char) var_1_92))) : (var_1_108 == ((unsigned char) var_1_109)))
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

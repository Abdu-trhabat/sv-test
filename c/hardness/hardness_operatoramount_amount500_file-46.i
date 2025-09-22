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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch46Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 8.25;
double var_1_2 = 4.6;
double var_1_3 = 1.25;
double var_1_4 = 0.0;
double var_1_5 = 2.8;
double var_1_6 = 7.8;
double var_1_7 = 100000000000000.72;
double var_1_8 = 10.3;
double var_1_9 = 64.875;
unsigned long int var_1_10 = 64;
unsigned long int var_1_11 = 3400562154;
unsigned long int var_1_12 = 10000;
unsigned short int var_1_13 = 5;
unsigned long int var_1_15 = 10;
unsigned short int var_1_16 = 62040;
unsigned short int var_1_17 = 33955;
unsigned long int var_1_18 = 16;
signed short int var_1_19 = 2;
double var_1_21 = 50.6;
unsigned long int var_1_23 = 2966122864;
unsigned short int var_1_24 = 256;
unsigned short int var_1_25 = 5;
signed short int var_1_26 = 10;
signed short int var_1_27 = 100;
signed short int var_1_28 = 32;
signed short int var_1_29 = -8;
signed short int var_1_30 = 17565;
signed short int var_1_31 = 10000;
signed short int var_1_32 = 10000;
unsigned char var_1_33 = 8;
unsigned char var_1_34 = 100;
unsigned char var_1_35 = 100;
unsigned char var_1_36 = 200;
unsigned char var_1_37 = 16;
unsigned char var_1_38 = 4;
unsigned char var_1_39 = 128;
signed long int var_1_40 = 64;
signed long int var_1_41 = -1;
signed char var_1_42 = -1;
signed char var_1_43 = 32;
signed long int var_1_44 = -128;
unsigned long int var_1_45 = 1;
unsigned long int var_1_46 = 25;
double var_1_47 = 7.25;
double var_1_48 = 31.5;
double var_1_49 = 64.5;
signed long int var_1_50 = -64;
float var_1_51 = 63.8;
unsigned short int var_1_52 = 0;
unsigned char var_1_53 = 8;
unsigned char var_1_54 = 8;
double var_1_55 = 49.375;
unsigned char var_1_56 = 50;
unsigned char var_1_57 = 64;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
signed short int var_1_62 = 64;
signed short int var_1_63 = 5;
float var_1_64 = 15.3;
signed char var_1_67 = 32;
signed char var_1_68 = -100;
signed char var_1_69 = -2;
signed short int var_1_71 = 1;
signed short int var_1_72 = -64;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 1;
unsigned short int var_1_76 = 8;
double var_1_77 = 1000000000000.75;
signed long int var_1_78 = 2;
double var_1_79 = 15.5;
unsigned char var_1_80 = 0;
double var_1_81 = 10.6;
unsigned char var_1_82 = 0;
unsigned char var_1_83 = 0;
unsigned char var_1_84 = 0;
unsigned long int var_1_85 = 200;
signed short int var_1_86 = 1;
double var_1_87 = 32.5;
unsigned char var_1_88 = 50;
signed short int var_1_89 = -50;
float var_1_90 = 31.375;
signed long int var_1_91 = 8;
signed char var_1_92 = 2;
unsigned char var_1_93 = 5;
unsigned char var_1_94 = 25;
signed char var_1_95 = -50;
unsigned char var_1_96 = 64;
signed long int var_1_97 = 100;
signed long int var_1_98 = 32;
double var_1_99 = 5.5;
double var_1_100 = 100000.65;
double var_1_101 = 9.13;
unsigned long int last_1_var_1_18 = 16;
unsigned char last_1_var_1_33 = 8;
unsigned long int last_1_var_1_45 = 1;
unsigned long int last_1_var_1_46 = 25;
double last_1_var_1_47 = 7.25;
unsigned char last_1_var_1_58 = 1;
unsigned char last_1_var_1_82 = 0;
unsigned char last_1_var_1_84 = 0;
unsigned long int last_1_var_1_85 = 200;
unsigned char last_1_var_1_93 = 5;
signed long int last_1_var_1_98 = 32;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_25 = var_1_36 - var_1_15;
 unsigned char stepLocal_24 = last_1_var_1_84;
 if (last_1_var_1_33 < stepLocal_25) {
  if (stepLocal_24 && ((last_1_var_1_93 - var_1_36) >= last_1_var_1_18)) {
   var_1_73 = (((var_1_61 || var_1_60) && (! var_1_59)) && ((! var_1_74) && var_1_75));
  } else {
   var_1_73 = ((! (var_1_60 && var_1_75)) || (last_1_var_1_58 && var_1_74));
  }
 } else {
  if (100.8 >= var_1_3) {
   var_1_73 = var_1_60;
  } else {
   var_1_73 = (var_1_59 && var_1_74);
  }
 }
 unsigned char stepLocal_14 = last_1_var_1_84;
 if (stepLocal_14 || (last_1_var_1_85 > 10u)) {
  var_1_58 = ((var_1_32 > (var_1_34 * last_1_var_1_18)) && var_1_59);
 } else {
  var_1_58 = (! (var_1_60 && var_1_61));
 }
 unsigned long int stepLocal_3 = last_1_var_1_46;
 unsigned long int stepLocal_2 = ((((var_1_15 - 2)) < (-2)) ? ((var_1_15 - 2)) : (-2));
 unsigned long int stepLocal_1 = var_1_12;
 if (! last_1_var_1_82) {
  if (var_1_7 <= (last_1_var_1_47 * (var_1_2 / var_1_21))) {
   if (last_1_var_1_82) {
    if (! last_1_var_1_82) {
     if (stepLocal_2 >= var_1_11) {
      if (var_1_17 >= stepLocal_3) {
       var_1_18 = ((((var_1_15) < ((((((var_1_11) > (var_1_23)) ? (var_1_11) : (var_1_23))) - var_1_12))) ? (var_1_15) : ((((((var_1_11) > (var_1_23)) ? (var_1_11) : (var_1_23))) - var_1_12))));
      } else {
       var_1_18 = ((((last_1_var_1_46) < ((var_1_16 + var_1_15))) ? (last_1_var_1_46) : ((var_1_16 + var_1_15))));
      }
     }
    } else {
     var_1_18 = (var_1_11 - var_1_15);
    }
   }
  } else {
   if (last_1_var_1_45 < stepLocal_1) {
    var_1_18 = var_1_11;
   } else {
    var_1_18 = (((((last_1_var_1_46) < (var_1_17)) ? (last_1_var_1_46) : (var_1_17))) + var_1_16);
   }
  }
 } else {
  var_1_18 = ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)));
 }
 if (16.75 > (var_1_2 - var_1_3)) {
  var_1_1 = ((var_1_4 - ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))) - (((((var_1_7 + var_1_8)) > (var_1_9)) ? ((var_1_7 + var_1_8)) : (var_1_9))));
 } else {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 var_1_10 = (var_1_11 - var_1_12);
 unsigned short int stepLocal_4 = var_1_17;
 if (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < stepLocal_4) {
  if (var_1_73) {
   var_1_24 = ((((((((var_1_15) > ((var_1_25 + 4))) ? (var_1_15) : ((var_1_25 + 4))))) > (((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16))))) ? (((((var_1_15) > ((var_1_25 + 4))) ? (var_1_15) : ((var_1_25 + 4))))) : (((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16))))));
  }
 } else {
  var_1_24 = (var_1_16 - var_1_15);
 }
 if (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) != (var_1_10 ^ (var_1_17 / var_1_35))) {
  var_1_40 = var_1_31;
 } else {
  var_1_40 = var_1_30;
 }
 var_1_41 = (((((var_1_17 + var_1_37)) < (((((var_1_16) > ((var_1_39 - var_1_25))) ? (var_1_16) : ((var_1_39 - var_1_25)))))) ? ((var_1_17 + var_1_37)) : (((((var_1_16) > ((var_1_39 - var_1_25))) ? (var_1_16) : ((var_1_39 - var_1_25)))))));
 unsigned char stepLocal_9 = var_1_21 < var_1_2;
 signed long int stepLocal_8 = var_1_28 / var_1_35;
 if (((- var_1_6) != var_1_8) && stepLocal_9) {
  if (1u >= stepLocal_8) {
   var_1_42 = (((((var_1_38 - 32)) > (((var_1_37 + 16) - var_1_43))) ? ((var_1_38 - 32)) : (((var_1_37 + 16) - var_1_43))));
  } else {
   var_1_42 = var_1_38;
  }
 } else {
  var_1_42 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
 }
 if ((var_1_21 + var_1_5) >= var_1_9) {
  var_1_45 = ((((var_1_31) < (var_1_25)) ? (var_1_31) : (var_1_25)));
 }
 var_1_46 = ((((var_1_30) > ((var_1_11 - 16u))) ? (var_1_30) : ((var_1_11 - 16u))));
 var_1_50 = (((((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - var_1_32)) > ((var_1_36 - var_1_34))) ? ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - var_1_32)) : ((var_1_36 - var_1_34))));
 if (var_1_3 != (var_1_6 - ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7))))) {
  var_1_54 = ((((2) < (((var_1_15 + var_1_38) + ((((var_1_37) < (var_1_53)) ? (var_1_37) : (var_1_53)))))) ? (2) : (((var_1_15 + var_1_38) + ((((var_1_37) < (var_1_53)) ? (var_1_37) : (var_1_53)))))));
 } else {
  var_1_54 = var_1_36;
 }
 if (var_1_34 == var_1_10) {
  if (var_1_28 > var_1_39) {
   var_1_62 = (var_1_36 - var_1_63);
  }
 }
 signed long int stepLocal_23 = -128;
 if (var_1_50 >= stepLocal_23) {
  if (var_1_58) {
   var_1_72 = (5 + var_1_29);
  }
 } else {
  var_1_72 = ((var_1_37 - var_1_35) + var_1_39);
 }
 if (var_1_29 > var_1_23) {
  if (var_1_23 == ((var_1_11 - var_1_25) / var_1_31)) {
   var_1_76 = (((((var_1_17 - (var_1_24 + var_1_36))) > (var_1_54)) ? ((var_1_17 - (var_1_24 + var_1_36))) : (var_1_54)));
  } else {
   var_1_76 = ((29406 - ((((var_1_31) < (var_1_15)) ? (var_1_31) : (var_1_15)))) + ((((var_1_57) > (var_1_53)) ? (var_1_57) : (var_1_53))));
  }
 } else {
  var_1_76 = (var_1_17 - (var_1_24 + var_1_36));
 }
 if (var_1_61) {
  if ((- (var_1_36 * var_1_53)) <= var_1_57) {
   var_1_78 = var_1_19;
  }
 }
 if (var_1_76 >= (var_1_10 * var_1_41)) {
  var_1_79 = (var_1_5 - var_1_4);
 }
 if (var_1_59) {
  if (var_1_73) {
   var_1_80 = ((((var_1_57) > (((((var_1_38 + var_1_15) < 0 ) ? -(var_1_38 + var_1_15) : (var_1_38 + var_1_15))))) ? (var_1_57) : (((((var_1_38 + var_1_15) < 0 ) ? -(var_1_38 + var_1_15) : (var_1_38 + var_1_15))))));
  }
 }
 var_1_81 = var_1_48;
 if (var_1_9 < var_1_2) {
  var_1_85 = (var_1_32 + var_1_31);
 } else {
  var_1_85 = var_1_36;
 }
 var_1_86 = var_1_15;
 var_1_87 = var_1_5;
 if (var_1_59) {
  var_1_88 = 10;
 }
 var_1_90 = var_1_7;
 var_1_91 = var_1_38;
 if (var_1_58) {
  var_1_92 = var_1_15;
 } else {
  var_1_92 = var_1_43;
 }
 var_1_93 = var_1_15;
 var_1_95 = var_1_38;
 var_1_96 = var_1_36;
 if (var_1_74) {
  var_1_98 = last_1_var_1_98;
 }
 unsigned char stepLocal_32 = var_1_59;
 unsigned long int stepLocal_31 = var_1_40 % var_1_11;
 unsigned char stepLocal_30 = var_1_73;
 if ((var_1_58 || var_1_61) && stepLocal_30) {
  if (stepLocal_31 < ((((var_1_15) < (2u)) ? (var_1_15) : (2u)))) {
   var_1_82 = (((var_1_62 <= var_1_29) && var_1_61) || (! var_1_59));
  }
 } else {
  if (var_1_58 || stepLocal_32) {
   var_1_82 = (! var_1_59);
  } else {
   var_1_82 = (var_1_58 && var_1_83);
  }
 }
 unsigned char stepLocal_0 = (50u >> var_1_15) < var_1_18;
 if (var_1_73 && stepLocal_0) {
  var_1_13 = ((((((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) < 0 ) ? -((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) : ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) - var_1_15);
 }
 signed long int stepLocal_7 = ((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19))) | (~ var_1_32);
 if (var_1_58) {
  var_1_33 = ((var_1_34 + var_1_35) - var_1_15);
 } else {
  if (var_1_3 >= var_1_9) {
   if (stepLocal_7 >= var_1_13) {
    var_1_33 = var_1_34;
   } else {
    var_1_33 = ((((((var_1_36 - var_1_15) - (var_1_34 - var_1_37))) < ((var_1_35 + (64 - var_1_38)))) ? (((var_1_36 - var_1_15) - (var_1_34 - var_1_37))) : ((var_1_35 + (64 - var_1_38)))));
   }
  } else {
   var_1_33 = (((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))) - (var_1_35 - var_1_38));
  }
 }
 unsigned long int stepLocal_6 = (var_1_17 ^ var_1_91) / var_1_15;
 unsigned long int stepLocal_5 = var_1_23;
 if ((var_1_11 * var_1_23) >= stepLocal_6) {
  if ((3679506271u - 1u) > stepLocal_5) {
   var_1_26 = (((((0) < (var_1_15)) ? (0) : (var_1_15))) - var_1_27);
  } else {
   var_1_26 = (((((var_1_15) > (var_1_27)) ? (var_1_15) : (var_1_27))) - var_1_28);
  }
 } else {
  var_1_26 = ((var_1_30 - var_1_15) - ((var_1_31 + var_1_32) - 4));
 }
 if ((var_1_8 / var_1_4) > (- var_1_81)) {
  var_1_47 = (var_1_6 + (var_1_48 + var_1_49));
 } else {
  var_1_47 = (((((var_1_5) < (var_1_48)) ? (var_1_5) : (var_1_48))) + var_1_7);
 }
 signed long int stepLocal_19 = (((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28));
 unsigned long int stepLocal_18 = var_1_85;
 unsigned char stepLocal_17 = var_1_35 >= (var_1_37 << var_1_53);
 if (var_1_98 < stepLocal_18) {
  if (var_1_85 < stepLocal_19) {
   var_1_67 = var_1_38;
  } else {
   var_1_67 = ((((var_1_37) > (var_1_53)) ? (var_1_37) : (var_1_53)));
  }
 } else {
  if (var_1_73 && stepLocal_17) {
   if (var_1_21 >= var_1_8) {
    var_1_67 = (var_1_37 + ((((2) > (0)) ? (2) : (0))));
   } else {
    var_1_67 = (var_1_38 + var_1_15);
   }
  } else {
   var_1_67 = ((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38)));
  }
 }
 signed short int stepLocal_22 = var_1_72;
 signed long int stepLocal_21 = (((var_1_29) > (var_1_86)) ? (var_1_29) : (var_1_86));
 signed long int stepLocal_20 = (((1) < (var_1_29)) ? (1) : (var_1_29));
 if (stepLocal_22 < (- (- var_1_27))) {
  if (var_1_36 <= stepLocal_20) {
   if (var_1_61) {
    var_1_71 = ((var_1_30 - 16) - var_1_27);
   } else {
    var_1_71 = (8 - ((((var_1_30 - var_1_35) < 0 ) ? -(var_1_30 - var_1_35) : (var_1_30 - var_1_35))));
   }
  } else {
   var_1_71 = var_1_57;
  }
 } else {
  if (var_1_10 > stepLocal_21) {
   var_1_71 = (var_1_69 + var_1_32);
  }
 }
 signed long int stepLocal_29 = 5 - var_1_38;
 unsigned long int stepLocal_28 = var_1_23;
 signed long int stepLocal_27 = (((var_1_25) < (var_1_41)) ? (var_1_25) : (var_1_41));
 unsigned long int stepLocal_26 = var_1_31 ^ var_1_11;
 if ((var_1_57 * 1000000000u) < stepLocal_27) {
  if (var_1_25 > stepLocal_26) {
   var_1_77 = (((((var_1_7 + (var_1_48 + var_1_49))) < (var_1_9)) ? ((var_1_7 + (var_1_48 + var_1_49))) : (var_1_9)));
  } else {
   if (stepLocal_28 <= var_1_85) {
    var_1_77 = (((((((((var_1_7 - var_1_4)) < ((var_1_9 - var_1_5))) ? ((var_1_7 - var_1_4)) : ((var_1_9 - var_1_5))))) < (var_1_8)) ? ((((((var_1_7 - var_1_4)) < ((var_1_9 - var_1_5))) ? ((var_1_7 - var_1_4)) : ((var_1_9 - var_1_5))))) : (var_1_8)));
   }
  }
 } else {
  if ((var_1_3 - var_1_9) < var_1_6) {
   if (10 >= stepLocal_29) {
    var_1_77 = ((var_1_8 + var_1_6) - var_1_9);
   } else {
    var_1_77 = ((((var_1_6) > (var_1_49)) ? (var_1_6) : (var_1_49)));
   }
  } else {
   var_1_77 = (var_1_49 + var_1_5);
  }
 }
 if (var_1_82) {
  var_1_94 = var_1_35;
 } else {
  var_1_94 = var_1_37;
 }
 var_1_84 = (var_1_82 && var_1_74);
 if (((((((((199.875) < 0 ) ? -(199.875) : (199.875)))) < (var_1_21)) ? (((((199.875) < 0 ) ? -(199.875) : (199.875)))) : (var_1_21))) < var_1_47) {
  var_1_44 = ((((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))) + ((((var_1_46) < (var_1_37)) ? (var_1_46) : (var_1_37)))) + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
 }
 if (! var_1_82) {
  if ((var_1_28 | var_1_43) < var_1_18) {
   var_1_52 = (var_1_17 - var_1_32);
  } else {
   if ((- var_1_91) != (var_1_31 >> var_1_53)) {
    var_1_52 = var_1_44;
   } else {
    var_1_52 = ((var_1_34 + var_1_38) + (((((var_1_35) < (var_1_44)) ? (var_1_35) : (var_1_44))) + var_1_37));
   }
  }
 }
 signed long int stepLocal_11 = var_1_50;
 if (stepLocal_11 < ((var_1_17 >> var_1_53) + ((((var_1_28) > (var_1_34)) ? (var_1_28) : (var_1_34))))) {
  var_1_55 = (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_49);
 } else {
  if (var_1_84) {
   var_1_55 = (var_1_5 - var_1_6);
  } else {
   var_1_55 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
  }
 }
 signed long int stepLocal_13 = var_1_41 ^ var_1_78;
 unsigned char stepLocal_12 = var_1_58;
 if (stepLocal_13 >= (1 * 16)) {
  if (stepLocal_12 && (var_1_84 || (var_1_78 == var_1_19))) {
   var_1_56 = (var_1_39 - var_1_15);
  } else {
   var_1_56 = (1 + var_1_15);
  }
 } else {
  var_1_56 = ((var_1_35 + var_1_57) - 64);
 }
 if (var_1_73) {
  if (var_1_84 || var_1_60) {
   var_1_68 = (var_1_38 - ((((var_1_53) < (var_1_37)) ? (var_1_53) : (var_1_37))));
  } else {
   if (var_1_48 >= (var_1_8 / var_1_21)) {
    var_1_68 = (((((var_1_38 + var_1_37)) > (var_1_69)) ? ((var_1_38 + var_1_37)) : (var_1_69)));
   } else {
    var_1_68 = ((((0) > (var_1_37)) ? (0) : (var_1_37)));
   }
  }
 } else {
  if ((- var_1_46) < var_1_15) {
   var_1_68 = (((((-8) < (var_1_38)) ? (-8) : (var_1_38))) + var_1_15);
  } else {
   if (var_1_32 < var_1_25) {
    if (var_1_19 < (var_1_31 << ((((0u) > (1u)) ? (0u) : (1u))))) {
     if (((5 + var_1_43) / ((((var_1_53) > (var_1_35)) ? (var_1_53) : (var_1_35)))) < var_1_85) {
      var_1_68 = (var_1_15 + var_1_37);
     } else {
      var_1_68 = var_1_43;
     }
    }
   }
  }
 }
 if (var_1_60) {
  var_1_89 = var_1_44;
 } else {
  var_1_89 = var_1_39;
 }
 if (var_1_75) {
  var_1_97 = var_1_52;
 }
 unsigned long int stepLocal_34 = var_1_11;
 unsigned char stepLocal_33 = var_1_83;
 if (var_1_54 > stepLocal_34) {
  if (! var_1_84) {
   if (stepLocal_33 || var_1_75) {
    var_1_99 = (var_1_9 - var_1_4);
   } else {
    var_1_99 = ((((var_1_6) > ((var_1_100 + var_1_8))) ? (var_1_6) : ((var_1_100 + var_1_8))));
   }
  } else {
   var_1_99 = var_1_101;
  }
 } else {
  var_1_99 = var_1_6;
 }
 signed long int stepLocal_10 = ((((var_1_97) > (5)) ? (var_1_97) : (5))) % var_1_19;
 if ((var_1_31 + var_1_43) < stepLocal_10) {
  var_1_51 = (var_1_7 + var_1_6);
 }
 signed long int stepLocal_16 = var_1_31 | ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 unsigned char stepLocal_15 = var_1_53;
 if (var_1_91 > stepLocal_15) {
  if (stepLocal_16 <= (var_1_36 - 64)) {
   var_1_64 = var_1_5;
  } else {
   if ((var_1_49 + var_1_4) <= var_1_3) {
    var_1_64 = ((var_1_6 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) + (var_1_49 + var_1_48));
   } else {
    if (var_1_9 < (var_1_99 + ((((var_1_81) < (var_1_99)) ? (var_1_81) : (var_1_99))))) {
     var_1_64 = var_1_5;
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 4611686.018427383000e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 31);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 32767);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -32768);
 assume_abort_if_not(var_1_19 <= 32767);
 assume_abort_if_not(var_1_19 != 0);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 2147483647);
 assume_abort_if_not(var_1_23 <= 4294967294);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32766);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 32766);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -16383);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= 16382);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 8191);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 8192);
 assume_abort_if_not(var_1_32 <= 16383);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 63);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 64);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 190);
 assume_abort_if_not(var_1_36 <= 254);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -230584.3009213691400e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= -230584.3009213691400e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 14);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 64);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 0);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 1);
 assume_abort_if_not(var_1_60 <= 1);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 1);
 assume_abort_if_not(var_1_61 <= 1);
 var_1_63 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 32766);
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= -127);
 assume_abort_if_not(var_1_69 <= 126);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 0);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 1);
 assume_abort_if_not(var_1_75 <= 1);
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 0);
 assume_abort_if_not(var_1_83 <= 0);
 var_1_100 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_100 >= -461168.6018427383000e+13F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 4611686.018427383000e+12F && var_1_100 >= 1.0e-20F ));
 var_1_101 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_101 >= -922337.2036854766000e+13F && var_1_101 <= -1.0e-20F) || (var_1_101 <= 9223372.036854766000e+12F && var_1_101 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_98 = var_1_98;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((16.75 > (var_1_2 - var_1_3)) ? (var_1_1 == ((double) ((var_1_4 - ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))) - (((((var_1_7 + var_1_8)) > (var_1_9)) ? ((var_1_7 + var_1_8)) : (var_1_9)))))) : (var_1_1 == ((double) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) && (var_1_10 == ((unsigned long int) (var_1_11 - var_1_12)))) && ((var_1_73 && ((50u >> var_1_15) < var_1_18)) ? (var_1_13 == ((unsigned short int) ((((((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) < 0 ) ? -((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) : ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) - var_1_15))) : 1)) && ((! last_1_var_1_82) ? ((var_1_7 <= (last_1_var_1_47 * (var_1_2 / var_1_21))) ? (last_1_var_1_82 ? ((! last_1_var_1_82) ? (((((((var_1_15 - 2)) < (-2)) ? ((var_1_15 - 2)) : (-2))) >= var_1_11) ? ((var_1_17 >= last_1_var_1_46) ? (var_1_18 == ((unsigned long int) ((((var_1_15) < ((((((var_1_11) > (var_1_23)) ? (var_1_11) : (var_1_23))) - var_1_12))) ? (var_1_15) : ((((((var_1_11) > (var_1_23)) ? (var_1_11) : (var_1_23))) - var_1_12)))))) : (var_1_18 == ((unsigned long int) ((((last_1_var_1_46) < ((var_1_16 + var_1_15))) ? (last_1_var_1_46) : ((var_1_16 + var_1_15))))))) : 1) : (var_1_18 == ((unsigned long int) (var_1_11 - var_1_15)))) : 1) : ((last_1_var_1_45 < var_1_12) ? (var_1_18 == ((unsigned long int) var_1_11)) : (var_1_18 == ((unsigned long int) (((((last_1_var_1_46) < (var_1_17)) ? (last_1_var_1_46) : (var_1_17))) + var_1_16))))) : (var_1_18 == ((unsigned long int) ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) && ((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < var_1_17) ? (var_1_73 ? (var_1_24 == ((unsigned short int) ((((((((var_1_15) > ((var_1_25 + 4))) ? (var_1_15) : ((var_1_25 + 4))))) > (((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16))))) ? (((((var_1_15) > ((var_1_25 + 4))) ? (var_1_15) : ((var_1_25 + 4))))) : (((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)))))))) : 1) : (var_1_24 == ((unsigned short int) (var_1_16 - var_1_15))))) && (((var_1_11 * var_1_23) >= ((var_1_17 ^ var_1_91) / var_1_15)) ? (((3679506271u - 1u) > var_1_23) ? (var_1_26 == ((signed short int) (((((0) < (var_1_15)) ? (0) : (var_1_15))) - var_1_27))) : (var_1_26 == ((signed short int) (((((var_1_15) > (var_1_27)) ? (var_1_15) : (var_1_27))) - var_1_28)))) : (var_1_26 == ((signed short int) ((var_1_30 - var_1_15) - ((var_1_31 + var_1_32) - 4)))))) && (var_1_58 ? (var_1_33 == ((unsigned char) ((var_1_34 + var_1_35) - var_1_15))) : ((var_1_3 >= var_1_9) ? (((((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19))) | (~ var_1_32)) >= var_1_13) ? (var_1_33 == ((unsigned char) var_1_34)) : (var_1_33 == ((unsigned char) ((((((var_1_36 - var_1_15) - (var_1_34 - var_1_37))) < ((var_1_35 + (64 - var_1_38)))) ? (((var_1_36 - var_1_15) - (var_1_34 - var_1_37))) : ((var_1_35 + (64 - var_1_38)))))))) : (var_1_33 == ((unsigned char) (((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))) - (var_1_35 - var_1_38))))))) && ((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) != (var_1_10 ^ (var_1_17 / var_1_35))) ? (var_1_40 == ((signed long int) var_1_31)) : (var_1_40 == ((signed long int) var_1_30)))) && (var_1_41 == ((signed long int) (((((var_1_17 + var_1_37)) < (((((var_1_16) > ((var_1_39 - var_1_25))) ? (var_1_16) : ((var_1_39 - var_1_25)))))) ? ((var_1_17 + var_1_37)) : (((((var_1_16) > ((var_1_39 - var_1_25))) ? (var_1_16) : ((var_1_39 - var_1_25)))))))))) && ((((- var_1_6) != var_1_8) && (var_1_21 < var_1_2)) ? ((1u >= (var_1_28 / var_1_35)) ? (var_1_42 == ((signed char) (((((var_1_38 - 32)) > (((var_1_37 + 16) - var_1_43))) ? ((var_1_38 - 32)) : (((var_1_37 + 16) - var_1_43)))))) : (var_1_42 == ((signed char) var_1_38))) : (var_1_42 == ((signed char) ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))))) && ((((((((((199.875) < 0 ) ? -(199.875) : (199.875)))) < (var_1_21)) ? (((((199.875) < 0 ) ? -(199.875) : (199.875)))) : (var_1_21))) < var_1_47) ? (var_1_44 == ((signed long int) ((((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))) + ((((var_1_46) < (var_1_37)) ? (var_1_46) : (var_1_37)))) + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) : 1)) && (((var_1_21 + var_1_5) >= var_1_9) ? (var_1_45 == ((unsigned long int) ((((var_1_31) < (var_1_25)) ? (var_1_31) : (var_1_25))))) : 1)) && (var_1_46 == ((unsigned long int) ((((var_1_30) > ((var_1_11 - 16u))) ? (var_1_30) : ((var_1_11 - 16u))))))) && (((var_1_8 / var_1_4) > (- var_1_81)) ? (var_1_47 == ((double) (var_1_6 + (var_1_48 + var_1_49)))) : (var_1_47 == ((double) (((((var_1_5) < (var_1_48)) ? (var_1_5) : (var_1_48))) + var_1_7))))) && (var_1_50 == ((signed long int) (((((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - var_1_32)) > ((var_1_36 - var_1_34))) ? ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - var_1_32)) : ((var_1_36 - var_1_34))))))) && (((var_1_31 + var_1_43) < (((((var_1_97) > (5)) ? (var_1_97) : (5))) % var_1_19)) ? (var_1_51 == ((float) (var_1_7 + var_1_6))) : 1)) && ((! var_1_82) ? (((var_1_28 | var_1_43) < var_1_18) ? (var_1_52 == ((unsigned short int) (var_1_17 - var_1_32))) : (((- var_1_91) != (var_1_31 >> var_1_53)) ? (var_1_52 == ((unsigned short int) var_1_44)) : (var_1_52 == ((unsigned short int) ((var_1_34 + var_1_38) + (((((var_1_35) < (var_1_44)) ? (var_1_35) : (var_1_44))) + var_1_37)))))) : 1)) && ((var_1_3 != (var_1_6 - ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7))))) ? (var_1_54 == ((unsigned char) ((((2) < (((var_1_15 + var_1_38) + ((((var_1_37) < (var_1_53)) ? (var_1_37) : (var_1_53)))))) ? (2) : (((var_1_15 + var_1_38) + ((((var_1_37) < (var_1_53)) ? (var_1_37) : (var_1_53))))))))) : (var_1_54 == ((unsigned char) var_1_36)))) && ((var_1_50 < ((var_1_17 >> var_1_53) + ((((var_1_28) > (var_1_34)) ? (var_1_28) : (var_1_34))))) ? (var_1_55 == ((double) (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_49))) : (var_1_84 ? (var_1_55 == ((double) (var_1_5 - var_1_6))) : (var_1_55 == ((double) ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))))))) && (((var_1_41 ^ var_1_78) >= (1 * 16)) ? ((var_1_58 && (var_1_84 || (var_1_78 == var_1_19))) ? (var_1_56 == ((unsigned char) (var_1_39 - var_1_15))) : (var_1_56 == ((unsigned char) (1 + var_1_15)))) : (var_1_56 == ((unsigned char) ((var_1_35 + var_1_57) - 64))))) && ((last_1_var_1_84 || (last_1_var_1_85 > 10u)) ? (var_1_58 == ((unsigned char) ((var_1_32 > (var_1_34 * last_1_var_1_18)) && var_1_59))) : (var_1_58 == ((unsigned char) (! (var_1_60 && var_1_61)))))) && ((var_1_34 == var_1_10) ? ((var_1_28 > var_1_39) ? (var_1_62 == ((signed short int) (var_1_36 - var_1_63))) : 1) : 1)) && ((var_1_91 > var_1_53) ? (((var_1_31 | ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) <= (var_1_36 - 64)) ? (var_1_64 == ((float) var_1_5)) : (((var_1_49 + var_1_4) <= var_1_3) ? (var_1_64 == ((float) ((var_1_6 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) + (var_1_49 + var_1_48)))) : ((var_1_9 < (var_1_99 + ((((var_1_81) < (var_1_99)) ? (var_1_81) : (var_1_99))))) ? (var_1_64 == ((float) var_1_5)) : 1))) : 1)) && ((var_1_98 < var_1_85) ? ((var_1_85 < ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) ? (var_1_67 == ((signed char) var_1_38)) : (var_1_67 == ((signed char) ((((var_1_37) > (var_1_53)) ? (var_1_37) : (var_1_53)))))) : ((var_1_73 && (var_1_35 >= (var_1_37 << var_1_53))) ? ((var_1_21 >= var_1_8) ? (var_1_67 == ((signed char) (var_1_37 + ((((2) > (0)) ? (2) : (0)))))) : (var_1_67 == ((signed char) (var_1_38 + var_1_15)))) : (var_1_67 == ((signed char) ((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38)))))))) && (var_1_73 ? ((var_1_84 || var_1_60) ? (var_1_68 == ((signed char) (var_1_38 - ((((var_1_53) < (var_1_37)) ? (var_1_53) : (var_1_37)))))) : ((var_1_48 >= (var_1_8 / var_1_21)) ? (var_1_68 == ((signed char) (((((var_1_38 + var_1_37)) > (var_1_69)) ? ((var_1_38 + var_1_37)) : (var_1_69))))) : (var_1_68 == ((signed char) ((((0) > (var_1_37)) ? (0) : (var_1_37))))))) : (((- var_1_46) < var_1_15) ? (var_1_68 == ((signed char) (((((-8) < (var_1_38)) ? (-8) : (var_1_38))) + var_1_15))) : ((var_1_32 < var_1_25) ? ((var_1_19 < (var_1_31 << ((((0u) > (1u)) ? (0u) : (1u))))) ? ((((5 + var_1_43) / ((((var_1_53) > (var_1_35)) ? (var_1_53) : (var_1_35)))) < var_1_85) ? (var_1_68 == ((signed char) (var_1_15 + var_1_37))) : (var_1_68 == ((signed char) var_1_43))) : 1) : 1)))) && ((var_1_72 < (- (- var_1_27))) ? ((var_1_36 <= ((((1) < (var_1_29)) ? (1) : (var_1_29)))) ? (var_1_61 ? (var_1_71 == ((signed short int) ((var_1_30 - 16) - var_1_27))) : (var_1_71 == ((signed short int) (8 - ((((var_1_30 - var_1_35) < 0 ) ? -(var_1_30 - var_1_35) : (var_1_30 - var_1_35))))))) : (var_1_71 == ((signed short int) var_1_57))) : ((var_1_10 > ((((var_1_29) > (var_1_86)) ? (var_1_29) : (var_1_86)))) ? (var_1_71 == ((signed short int) (var_1_69 + var_1_32))) : 1))) && ((var_1_50 >= -128) ? (var_1_58 ? (var_1_72 == ((signed short int) (5 + var_1_29))) : 1) : (var_1_72 == ((signed short int) ((var_1_37 - var_1_35) + var_1_39))))) && ((last_1_var_1_33 < (var_1_36 - var_1_15)) ? ((last_1_var_1_84 && ((last_1_var_1_93 - var_1_36) >= last_1_var_1_18)) ? (var_1_73 == ((unsigned char) (((var_1_61 || var_1_60) && (! var_1_59)) && ((! var_1_74) && var_1_75)))) : (var_1_73 == ((unsigned char) ((! (var_1_60 && var_1_75)) || (last_1_var_1_58 && var_1_74))))) : ((100.8 >= var_1_3) ? (var_1_73 == ((unsigned char) var_1_60)) : (var_1_73 == ((unsigned char) (var_1_59 && var_1_74)))))) && ((var_1_29 > var_1_23) ? ((var_1_23 == ((var_1_11 - var_1_25) / var_1_31)) ? (var_1_76 == ((unsigned short int) (((((var_1_17 - (var_1_24 + var_1_36))) > (var_1_54)) ? ((var_1_17 - (var_1_24 + var_1_36))) : (var_1_54))))) : (var_1_76 == ((unsigned short int) ((29406 - ((((var_1_31) < (var_1_15)) ? (var_1_31) : (var_1_15)))) + ((((var_1_57) > (var_1_53)) ? (var_1_57) : (var_1_53))))))) : (var_1_76 == ((unsigned short int) (var_1_17 - (var_1_24 + var_1_36)))))) && (((var_1_57 * 1000000000u) < ((((var_1_25) < (var_1_41)) ? (var_1_25) : (var_1_41)))) ? ((var_1_25 > (var_1_31 ^ var_1_11)) ? (var_1_77 == ((double) (((((var_1_7 + (var_1_48 + var_1_49))) < (var_1_9)) ? ((var_1_7 + (var_1_48 + var_1_49))) : (var_1_9))))) : ((var_1_23 <= var_1_85) ? (var_1_77 == ((double) (((((((((var_1_7 - var_1_4)) < ((var_1_9 - var_1_5))) ? ((var_1_7 - var_1_4)) : ((var_1_9 - var_1_5))))) < (var_1_8)) ? ((((((var_1_7 - var_1_4)) < ((var_1_9 - var_1_5))) ? ((var_1_7 - var_1_4)) : ((var_1_9 - var_1_5))))) : (var_1_8))))) : 1)) : (((var_1_3 - var_1_9) < var_1_6) ? ((10 >= (5 - var_1_38)) ? (var_1_77 == ((double) ((var_1_8 + var_1_6) - var_1_9))) : (var_1_77 == ((double) ((((var_1_6) > (var_1_49)) ? (var_1_6) : (var_1_49)))))) : (var_1_77 == ((double) (var_1_49 + var_1_5)))))) && (var_1_61 ? (((- (var_1_36 * var_1_53)) <= var_1_57) ? (var_1_78 == ((signed long int) var_1_19)) : 1) : 1)) && ((var_1_76 >= (var_1_10 * var_1_41)) ? (var_1_79 == ((double) (var_1_5 - var_1_4))) : 1)) && (var_1_59 ? (var_1_73 ? (var_1_80 == ((unsigned char) ((((var_1_57) > (((((var_1_38 + var_1_15) < 0 ) ? -(var_1_38 + var_1_15) : (var_1_38 + var_1_15))))) ? (var_1_57) : (((((var_1_38 + var_1_15) < 0 ) ? -(var_1_38 + var_1_15) : (var_1_38 + var_1_15)))))))) : 1) : 1)) && (var_1_81 == ((double) var_1_48))) && (((var_1_58 || var_1_61) && var_1_73) ? (((var_1_40 % var_1_11) < ((((var_1_15) < (2u)) ? (var_1_15) : (2u)))) ? (var_1_82 == ((unsigned char) (((var_1_62 <= var_1_29) && var_1_61) || (! var_1_59)))) : 1) : ((var_1_58 || var_1_59) ? (var_1_82 == ((unsigned char) (! var_1_59))) : (var_1_82 == ((unsigned char) (var_1_58 && var_1_83)))))) && (var_1_84 == ((unsigned char) (var_1_82 && var_1_74)))) && ((var_1_9 < var_1_2) ? (var_1_85 == ((unsigned long int) (var_1_32 + var_1_31))) : (var_1_85 == ((unsigned long int) var_1_36)))) && (var_1_86 == ((signed short int) var_1_15))) && (var_1_87 == ((double) var_1_5))) && (var_1_59 ? (var_1_88 == ((unsigned char) 10)) : 1)) && (var_1_60 ? (var_1_89 == ((signed short int) var_1_44)) : (var_1_89 == ((signed short int) var_1_39)))) && (var_1_90 == ((float) var_1_7))) && (var_1_91 == ((signed long int) var_1_38))) && (var_1_58 ? (var_1_92 == ((signed char) var_1_15)) : (var_1_92 == ((signed char) var_1_43)))) && (var_1_93 == ((unsigned char) var_1_15))) && (var_1_82 ? (var_1_94 == ((unsigned char) var_1_35)) : (var_1_94 == ((unsigned char) var_1_37)))) && (var_1_95 == ((signed char) var_1_38))) && (var_1_96 == ((unsigned char) var_1_36))) && (var_1_75 ? (var_1_97 == ((signed long int) var_1_52)) : 1)) && (var_1_74 ? (var_1_98 == ((signed long int) last_1_var_1_98)) : 1)) && ((var_1_54 > var_1_11) ? ((! var_1_84) ? ((var_1_83 || var_1_75) ? (var_1_99 == ((double) (var_1_9 - var_1_4))) : (var_1_99 == ((double) ((((var_1_6) > ((var_1_100 + var_1_8))) ? (var_1_6) : ((var_1_100 + var_1_8))))))) : (var_1_99 == ((double) var_1_101))) : (var_1_99 == ((double) var_1_6)))
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

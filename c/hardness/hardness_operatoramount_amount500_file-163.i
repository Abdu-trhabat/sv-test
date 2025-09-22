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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch163Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
unsigned short int var_1_5 = 4;
unsigned short int var_1_9 = 25937;
unsigned short int var_1_10 = 8;
unsigned short int var_1_11 = 16;
unsigned short int var_1_12 = 8;
double var_1_15 = 128.875;
unsigned short int var_1_18 = 10;
unsigned short int var_1_20 = 4;
unsigned short int var_1_21 = 50260;
unsigned short int var_1_22 = 32;
unsigned char var_1_23 = 1;
double var_1_24 = 49.45;
double var_1_25 = 9999999999999.75;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned long int var_1_30 = 4;
unsigned long int var_1_31 = 2933242403;
unsigned char var_1_32 = 1;
signed short int var_1_33 = -16;
unsigned short int var_1_34 = 1;
signed short int var_1_35 = -10;
signed short int var_1_36 = 2;
signed long int var_1_37 = 32;
signed char var_1_38 = 8;
signed char var_1_39 = 0;
signed char var_1_40 = 25;
unsigned short int var_1_41 = 5;
signed long int var_1_42 = -8;
signed long int var_1_44 = 16;
double var_1_45 = 199.4;
double var_1_46 = 200.6;
double var_1_47 = 5.4;
double var_1_48 = 500.9;
double var_1_49 = 5.625;
double var_1_50 = 256.5;
double var_1_51 = 9999.5;
double var_1_52 = 15.6;
unsigned char var_1_53 = 1;
unsigned char var_1_56 = 0;
signed char var_1_57 = -5;
signed char var_1_58 = 1;
signed char var_1_59 = 32;
signed char var_1_60 = 1;
signed char var_1_61 = 8;
signed char var_1_62 = 10;
signed char var_1_63 = 1;
double var_1_64 = 7.5;
unsigned short int var_1_65 = 256;
unsigned short int var_1_66 = 29532;
signed long int var_1_67 = 10;
float var_1_68 = 99999999999.875;
float var_1_70 = 0.0;
float var_1_71 = 0.09999999999999998;
float var_1_72 = 16.8;
unsigned long int var_1_74 = 128;
signed char var_1_75 = 32;
signed char var_1_76 = -8;
float var_1_77 = 100.1;
unsigned long int var_1_78 = 8;
unsigned long int var_1_79 = 3126996090;
unsigned short int var_1_80 = 0;
double var_1_81 = 3.75;
signed long int var_1_82 = -4;
unsigned char var_1_83 = 128;
unsigned long int var_1_84 = 0;
unsigned char var_1_85 = 0;
signed short int var_1_86 = 8;
signed short int var_1_87 = 29063;
signed char var_1_88 = 100;
signed char var_1_90 = 5;
double var_1_91 = 127.1;
unsigned char var_1_92 = 2;
signed long int var_1_93 = 10;
unsigned long int var_1_94 = 2;
signed short int var_1_95 = -16;
unsigned char var_1_96 = 0;
double var_1_97 = 25.375;
unsigned char var_1_98 = 0;
float var_1_99 = 31.5;
double var_1_100 = 128.4;
signed long int var_1_101 = -50;
unsigned char var_1_102 = 1;
unsigned char var_1_103 = 0;
double var_1_104 = 50.75;
unsigned short int last_1_var_1_1 = 128;
unsigned char last_1_var_1_23 = 1;
unsigned long int last_1_var_1_30 = 4;
unsigned char last_1_var_1_32 = 1;
signed short int last_1_var_1_33 = -16;
unsigned short int last_1_var_1_34 = 1;
signed short int last_1_var_1_35 = -10;
signed long int last_1_var_1_37 = 32;
unsigned short int last_1_var_1_41 = 5;
double last_1_var_1_45 = 199.4;
unsigned char last_1_var_1_53 = 1;
unsigned short int last_1_var_1_65 = 256;
signed long int last_1_var_1_67 = 10;
unsigned long int last_1_var_1_74 = 128;
unsigned long int last_1_var_1_78 = 8;
unsigned short int last_1_var_1_80 = 0;
double last_1_var_1_81 = 3.75;
signed long int last_1_var_1_82 = -4;
double last_1_var_1_91 = 127.1;
signed long int last_1_var_1_93 = 10;
unsigned long int last_1_var_1_94 = 2;
unsigned char last_1_var_1_96 = 0;
unsigned char last_1_var_1_98 = 0;
double last_1_var_1_100 = 128.4;
unsigned char last_1_var_1_102 = 1;
double last_1_var_1_104 = 50.75;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_93 > (var_1_11 | last_1_var_1_34)) {
  var_1_35 = (((((((((5) < (var_1_22)) ? (5) : (var_1_22)))) > (var_1_10)) ? (((((5) < (var_1_22)) ? (5) : (var_1_22)))) : (var_1_10))) - var_1_36);
 } else {
  var_1_35 = ((((var_1_22) < (var_1_36)) ? (var_1_22) : (var_1_36)));
 }
 var_1_93 = var_1_35;
 if (last_1_var_1_98 && last_1_var_1_53) {
  if ((var_1_48 / var_1_15) > var_1_51) {
   var_1_68 = (((var_1_70 - var_1_52) + var_1_49) - ((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48))));
  } else {
   if (last_1_var_1_74 == var_1_62) {
    var_1_68 = ((var_1_52 + var_1_50) + (var_1_51 + (var_1_71 - var_1_72)));
   }
  }
 } else {
  if (var_1_52 == last_1_var_1_104) {
   var_1_68 = (((((var_1_50 + ((((499.05f) < (var_1_70)) ? (499.05f) : (var_1_70))))) < ((var_1_51 - var_1_47))) ? ((var_1_50 + ((((499.05f) < (var_1_70)) ? (499.05f) : (var_1_70))))) : ((var_1_51 - var_1_47))));
  } else {
   var_1_68 = ((((9.99999999999998E13f) < 0 ) ? -(9.99999999999998E13f) : (9.99999999999998E13f)));
  }
 }
 if (last_1_var_1_81 <= var_1_15) {
  if (((((last_1_var_1_45) < (var_1_25)) ? (last_1_var_1_45) : (var_1_25))) < 31.2) {
   var_1_42 = (((((var_1_11 + var_1_44) - var_1_12) < 0 ) ? -((var_1_11 + var_1_44) - var_1_12) : ((var_1_11 + var_1_44) - var_1_12)));
  }
 }
 if (var_1_56) {
  var_1_78 = ((((var_1_9) > ((var_1_79 - ((((25u) < (var_1_42)) ? (25u) : (var_1_42)))))) ? (var_1_9) : ((var_1_79 - ((((25u) < (var_1_42)) ? (25u) : (var_1_42)))))));
 } else {
  var_1_78 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 }
 signed long int stepLocal_17 = last_1_var_1_65;
 if (stepLocal_17 < last_1_var_1_74) {
  var_1_85 = ((! var_1_28) && var_1_29);
 }
 if (! var_1_26) {
  if (var_1_85) {
   var_1_91 = var_1_72;
  } else {
   var_1_91 = var_1_52;
  }
 }
 if (((var_1_9 - var_1_59) - (var_1_66 - var_1_61)) <= (((((last_1_var_1_74) < 0 ) ? -(last_1_var_1_74) : (last_1_var_1_74))) << 4)) {
  if (var_1_49 >= (last_1_var_1_81 * var_1_72)) {
   var_1_82 = (var_1_40 + last_1_var_1_65);
  }
 } else {
  if ((var_1_11 >= last_1_var_1_67) && last_1_var_1_102) {
   if (last_1_var_1_32) {
    if (var_1_26 && ((var_1_83 - var_1_61) > last_1_var_1_33)) {
     var_1_82 = last_1_var_1_67;
    } else {
     var_1_82 = (last_1_var_1_35 + last_1_var_1_82);
    }
   } else {
    if (var_1_27) {
     var_1_82 = ((((((last_1_var_1_41 + var_1_11) - last_1_var_1_93)) > (var_1_9)) ? (((last_1_var_1_41 + var_1_11) - last_1_var_1_93)) : (var_1_9)));
    } else {
     var_1_82 = (2 + (last_1_var_1_1 + last_1_var_1_41));
    }
   }
  }
 }
 if ((var_1_61 / var_1_9) < var_1_82) {
  var_1_77 = (var_1_51 - var_1_71);
 }
 unsigned long int stepLocal_5 = last_1_var_1_94;
 unsigned long int stepLocal_4 = ((((last_1_var_1_34) > (last_1_var_1_94)) ? (last_1_var_1_34) : (last_1_var_1_94))) * last_1_var_1_93;
 signed long int stepLocal_3 = - (last_1_var_1_80 + 8);
 unsigned long int stepLocal_2 = last_1_var_1_78;
 unsigned long int stepLocal_1 = - last_1_var_1_94;
 signed long int stepLocal_0 = (((last_1_var_1_34) < 0 ) ? -(last_1_var_1_34) : (last_1_var_1_34));
 if (last_1_var_1_34 >= stepLocal_3) {
  if (last_1_var_1_98) {
   var_1_1 = var_1_5;
  } else {
   if (((((var_1_5) > (last_1_var_1_80)) ? (var_1_5) : (last_1_var_1_80))) < stepLocal_4) {
    if (var_1_5 >= stepLocal_2) {
     if (stepLocal_5 > last_1_var_1_93) {
      var_1_1 = ((((((var_1_9 - var_1_10)) > (var_1_11)) ? ((var_1_9 - var_1_10)) : (var_1_11))) + var_1_12);
     }
    }
   } else {
    if (last_1_var_1_23) {
     if ((((((last_1_var_1_91 / var_1_15)) < (last_1_var_1_81)) ? ((last_1_var_1_91 / var_1_15)) : (last_1_var_1_81))) >= last_1_var_1_104) {
      if (last_1_var_1_104 < (var_1_15 * last_1_var_1_91)) {
       var_1_1 = (37147 - var_1_18);
      } else {
       var_1_1 = (var_1_18 + var_1_12);
      }
     }
    } else {
     var_1_1 = (var_1_11 + var_1_10);
    }
   }
  }
 } else {
  if (last_1_var_1_53) {
   if (((((var_1_18) < (last_1_var_1_78)) ? (var_1_18) : (last_1_var_1_78))) > stepLocal_0) {
    if (stepLocal_1 == ((((-16) < (32)) ? (-16) : (32)))) {
     var_1_1 = ((((var_1_5) < (var_1_10)) ? (var_1_5) : (var_1_10)));
    } else {
     var_1_1 = ((((var_1_5) < ((((((var_1_11) > (var_1_18)) ? (var_1_11) : (var_1_18))) + var_1_10))) ? (var_1_5) : ((((((var_1_11) > (var_1_18)) ? (var_1_11) : (var_1_18))) + var_1_10))));
    }
   }
  }
 }
 unsigned long int stepLocal_13 = last_1_var_1_78;
 if (var_1_10 <= stepLocal_13) {
  if (64.2f > (99.4f - var_1_46)) {
   var_1_67 = ((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) < 0 ) ? -((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) : ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) + var_1_22);
  } else {
   var_1_67 = var_1_44;
  }
 } else {
  var_1_67 = var_1_12;
 }
 if (last_1_var_1_100 > var_1_24) {
  var_1_81 = (var_1_52 - var_1_47);
 }
 if (var_1_24 == var_1_81) {
  var_1_33 = var_1_10;
 } else {
  var_1_33 = 0;
 }
 if (! var_1_28) {
  var_1_32 = (! var_1_27);
 } else {
  var_1_32 = (var_1_26 || (! var_1_29));
 }
 if (var_1_32) {
  var_1_34 = ((((var_1_12) < ((var_1_21 - var_1_18))) ? (var_1_12) : ((var_1_21 - var_1_18))));
 }
 if (var_1_15 <= (- var_1_25)) {
  if (var_1_85) {
   if (var_1_10 > (var_1_42 & var_1_93)) {
    var_1_38 = var_1_39;
   } else {
    var_1_38 = var_1_40;
   }
  }
 } else {
  var_1_38 = var_1_40;
 }
 var_1_64 = (((((var_1_49) < (var_1_52)) ? (var_1_49) : (var_1_52))) + var_1_48);
 var_1_84 = var_1_12;
 if (var_1_29) {
  var_1_95 = var_1_83;
 }
 if (last_1_var_1_96) {
  var_1_96 = var_1_26;
 }
 if (var_1_29) {
  var_1_97 = var_1_48;
 }
 var_1_98 = var_1_56;
 if (var_1_27) {
  var_1_99 = var_1_48;
 }
 var_1_102 = var_1_29;
 if (var_1_56) {
  var_1_103 = var_1_29;
 } else {
  var_1_103 = var_1_26;
 }
 if ((- ((((var_1_15) < (var_1_81)) ? (var_1_15) : (var_1_81)))) != (var_1_24 - var_1_25)) {
  if (var_1_22 < var_1_12) {
   var_1_23 = (var_1_85 && var_1_26);
  } else {
   var_1_23 = ((var_1_26 || var_1_27) || var_1_28);
  }
 } else {
  if (var_1_85) {
   var_1_23 = ((var_1_5 != var_1_12) && (var_1_28 && var_1_27));
  } else {
   var_1_23 = (var_1_96 || var_1_29);
  }
 }
 if ((- var_1_68) == var_1_52) {
  var_1_80 = (16 + ((var_1_67 + var_1_61) + ((((var_1_59) > (var_1_22)) ? (var_1_59) : (var_1_22)))));
 } else {
  if (var_1_28 || var_1_27) {
   var_1_80 = 256;
  } else {
   var_1_80 = ((((var_1_12) > (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) ? (var_1_12) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))));
  }
 }
 signed long int stepLocal_20 = (var_1_9 + var_1_66) - var_1_87;
 if (var_1_25 <= var_1_70) {
  if (! var_1_103) {
   if (stepLocal_20 <= var_1_1) {
    var_1_104 = var_1_49;
   } else {
    var_1_104 = 9999999.5;
   }
  }
 } else {
  var_1_104 = var_1_47;
 }
 if (var_1_67 == (var_1_60 % var_1_58)) {
  if ((- 500u) >= var_1_31) {
   var_1_86 = (var_1_62 + var_1_22);
  }
 } else {
  var_1_86 = (var_1_84 - ((var_1_87 - var_1_61) - var_1_10));
 }
 var_1_101 = var_1_33;
 signed long int stepLocal_6 = var_1_82;
 if (var_1_85) {
  if (stepLocal_6 < var_1_10) {
   if (var_1_23) {
    var_1_20 = ((((var_1_11) < (var_1_9)) ? (var_1_11) : (var_1_9)));
   } else {
    var_1_20 = (((((var_1_9 + var_1_12)) > (var_1_18)) ? ((var_1_9 + var_1_12)) : (var_1_18)));
   }
  } else {
   if (var_1_85) {
    var_1_20 = (((((var_1_21) > (52946)) ? (var_1_21) : (52946))) - (var_1_10 + var_1_22));
   } else {
    var_1_20 = var_1_12;
   }
  }
 }
 if (var_1_25 >= (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) * 999999.5)) {
  if (var_1_82 >= (var_1_5 / var_1_21)) {
   var_1_30 = (var_1_31 - ((256u + var_1_5) + var_1_18));
  } else {
   var_1_30 = ((((((((var_1_78) < (((((4u) < (8u)) ? (4u) : (8u))))) ? (var_1_78) : (((((4u) < (8u)) ? (4u) : (8u))))))) > ((var_1_22 + (var_1_12 + last_1_var_1_30)))) ? (((((var_1_78) < (((((4u) < (8u)) ? (4u) : (8u))))) ? (var_1_78) : (((((4u) < (8u)) ? (4u) : (8u))))))) : ((var_1_22 + (var_1_12 + last_1_var_1_30)))));
  }
 } else {
  var_1_30 = (var_1_18 + var_1_34);
 }
 unsigned long int stepLocal_10 = (((var_1_78 * var_1_21) < 0 ) ? -(var_1_78 * var_1_21) : (var_1_78 * var_1_21));
 signed long int stepLocal_9 = var_1_82 / var_1_58;
 if (var_1_104 >= var_1_97) {
  if (stepLocal_10 >= (var_1_10 + var_1_78)) {
   var_1_57 = var_1_39;
  } else {
   if (stepLocal_9 < 64) {
    if (var_1_85) {
     var_1_57 = ((10 - (var_1_59 - 4)) + var_1_60);
    }
   }
  }
 } else {
  var_1_57 = ((var_1_59 - var_1_61) + (var_1_62 + var_1_63));
 }
 unsigned char stepLocal_15 = var_1_102;
 if (var_1_26) {
  if (var_1_29 && stepLocal_15) {
   var_1_75 = ((((((var_1_62 + 8)) < (var_1_63)) ? ((var_1_62 + 8)) : (var_1_63))) + 4);
  } else {
   var_1_75 = (((((var_1_62) > ((var_1_61 - var_1_59))) ? (var_1_62) : ((var_1_61 - var_1_59)))) + var_1_60);
  }
 } else {
  if (var_1_15 == var_1_99) {
   var_1_75 = var_1_63;
  } else {
   var_1_75 = var_1_61;
  }
 }
 signed long int stepLocal_16 = var_1_82;
 if ((var_1_11 + (var_1_31 - var_1_84)) < stepLocal_16) {
  var_1_76 = ((((var_1_40) < (10)) ? (var_1_40) : (10)));
 } else {
  var_1_76 = var_1_63;
 }
 if (var_1_102) {
  var_1_92 = var_1_59;
 } else {
  var_1_92 = var_1_61;
 }
 if (var_1_98) {
  var_1_94 = 16u;
 } else {
  var_1_94 = var_1_12;
 }
 if (var_1_23) {
  var_1_100 = var_1_48;
 }
 if (var_1_80 != ((((var_1_21) < ((var_1_18 + var_1_82))) ? (var_1_21) : ((var_1_18 + var_1_82))))) {
  if ((var_1_82 >= (var_1_22 / -32)) || var_1_96) {
   var_1_41 = var_1_21;
  } else {
   var_1_41 = ((((var_1_36) > (((var_1_9 - var_1_10) + 32))) ? (var_1_36) : (((var_1_9 - var_1_10) + 32))));
  }
 } else {
  var_1_41 = (var_1_9 + var_1_11);
 }
 signed char stepLocal_12 = var_1_58;
 signed long int stepLocal_11 = (var_1_101 + var_1_5) * var_1_86;
 if (-5 == stepLocal_11) {
  var_1_65 = (((((var_1_9 + var_1_66) - (var_1_59 + var_1_10)) < 0 ) ? -((var_1_9 + var_1_66) - (var_1_59 + var_1_10)) : ((var_1_9 + var_1_66) - (var_1_59 + var_1_10))));
 } else {
  if (stepLocal_12 > var_1_44) {
   var_1_65 = (var_1_21 - var_1_42);
  } else {
   var_1_65 = (var_1_21 - var_1_10);
  }
 }
 signed char stepLocal_14 = var_1_61;
 if (stepLocal_14 == var_1_31) {
  var_1_74 = (((((var_1_31 - ((((var_1_44) < (var_1_93)) ? (var_1_44) : (var_1_93))))) < (var_1_101)) ? ((var_1_31 - ((((var_1_44) < (var_1_93)) ? (var_1_44) : (var_1_93))))) : (var_1_101)));
 }
 unsigned long int stepLocal_7 = ((((var_1_36) > (var_1_74)) ? (var_1_36) : (var_1_74))) + var_1_5;
 if (stepLocal_7 >= (((((var_1_22) < (var_1_9)) ? (var_1_22) : (var_1_9))) - (var_1_12 + var_1_21))) {
  var_1_37 = (last_1_var_1_37 + (((((var_1_74 + -4)) > (var_1_74)) ? ((var_1_74 + -4)) : (var_1_74))));
 }
 unsigned long int stepLocal_8 = (((var_1_94) > (var_1_36)) ? (var_1_94) : (var_1_36));
 if ((var_1_24 + var_1_100) < (var_1_91 + var_1_68)) {
  if (((var_1_49 * 2.2) * var_1_48) <= var_1_81) {
   var_1_53 = (var_1_26 || var_1_28);
  } else {
   var_1_53 = (((var_1_93 * var_1_10) >= var_1_82) || var_1_29);
  }
 } else {
  if (stepLocal_8 < (var_1_82 * var_1_67)) {
   var_1_53 = var_1_27;
  } else {
   var_1_53 = (! (var_1_29 && var_1_56));
  }
 }
 signed short int stepLocal_19 = var_1_95;
 unsigned short int stepLocal_18 = var_1_41;
 if ((var_1_12 * ((((var_1_9) > (var_1_11)) ? (var_1_9) : (var_1_11)))) < stepLocal_19) {
  if (var_1_52 == ((((((((var_1_48) > (var_1_64)) ? (var_1_48) : (var_1_64)))) > (var_1_97)) ? (((((var_1_48) > (var_1_64)) ? (var_1_48) : (var_1_64)))) : (var_1_97)))) {
   if (((((var_1_10) > (var_1_78)) ? (var_1_10) : (var_1_78))) == stepLocal_18) {
    var_1_88 = (var_1_59 - ((((var_1_61) > ((64 - var_1_90))) ? (var_1_61) : ((64 - var_1_90)))));
   } else {
    var_1_88 = ((var_1_61 + 10) - var_1_90);
   }
  } else {
   var_1_88 = (var_1_59 - var_1_90);
  }
 } else {
  var_1_88 = ((var_1_61 - var_1_59) + (var_1_62 + var_1_63));
 }
 if (var_1_85 || ((var_1_21 / var_1_31) > var_1_101)) {
  if (last_1_var_1_45 < (- var_1_77)) {
   if (var_1_85) {
    var_1_45 = (var_1_46 - var_1_47);
   } else {
    if (var_1_24 >= var_1_100) {
     var_1_45 = (var_1_47 - (var_1_48 + var_1_49));
    } else {
     if ((var_1_49 - var_1_47) > (var_1_25 - var_1_24)) {
      var_1_45 = (var_1_48 + (var_1_50 + 31.5));
     } else {
      var_1_45 = (((var_1_51 + var_1_52) - ((((var_1_49) < (var_1_48)) ? (var_1_49) : (var_1_48)))) + var_1_50);
     }
    }
   }
  } else {
   if (var_1_85 || var_1_102) {
    if (-256 > ((((var_1_21) > (var_1_1)) ? (var_1_21) : (var_1_1)))) {
     var_1_45 = (var_1_51 - 127.5);
    } else {
     if (var_1_96) {
      var_1_45 = ((((var_1_48) < (var_1_47)) ? (var_1_48) : (var_1_47)));
     } else {
      var_1_45 = ((8.188734120598182E18 - var_1_51) - ((((15.5) > (var_1_46)) ? (15.5) : (var_1_46))));
     }
    }
   } else {
    if (((((var_1_50) < (last_1_var_1_45)) ? (var_1_50) : (last_1_var_1_45))) < var_1_51) {
     var_1_45 = (var_1_49 - var_1_46);
    } else {
     var_1_45 = ((((var_1_46) > (var_1_51)) ? (var_1_46) : (var_1_51)));
    }
   }
  }
 } else {
  if ((var_1_31 - ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) == (((((var_1_84) > (0u)) ? (var_1_84) : (0u))) & var_1_21)) {
   var_1_45 = (var_1_48 - 2.5);
  } else {
   if ((var_1_9 - var_1_11) != var_1_88) {
    var_1_45 = (var_1_50 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))));
   } else {
    var_1_45 = ((((var_1_48) > (var_1_49)) ? (var_1_48) : (var_1_49)));
   }
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 16383);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65534);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 2147483647);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 32766);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -127);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -127);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_44 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 1073741823);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -230584.3009213691400e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691400e+12F && var_1_52 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -128);
 assume_abort_if_not(var_1_58 <= 127);
 assume_abort_if_not(var_1_58 != 0);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= 31);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= -63);
 assume_abort_if_not(var_1_60 <= 63);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 63);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -31);
 assume_abort_if_not(var_1_62 <= 32);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= -31);
 assume_abort_if_not(var_1_63 <= 31);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 16384);
 assume_abort_if_not(var_1_66 <= 32767);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= 2305843.009213691400e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691400e+12F && var_1_72 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_79 >= 2147483647);
 assume_abort_if_not(var_1_79 <= 4294967294);
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 127);
 assume_abort_if_not(var_1_83 <= 255);
 var_1_87 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_87 >= 24574);
 assume_abort_if_not(var_1_87 <= 32766);
 var_1_90 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_90 >= 0);
 assume_abort_if_not(var_1_90 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_104 = var_1_104;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_34 >= (- (last_1_var_1_80 + 8))) ? (last_1_var_1_98 ? (var_1_1 == ((unsigned short int) var_1_5)) : ((((((var_1_5) > (last_1_var_1_80)) ? (var_1_5) : (last_1_var_1_80))) < (((((last_1_var_1_34) > (last_1_var_1_94)) ? (last_1_var_1_34) : (last_1_var_1_94))) * last_1_var_1_93)) ? ((var_1_5 >= last_1_var_1_78) ? ((last_1_var_1_94 > last_1_var_1_93) ? (var_1_1 == ((unsigned short int) ((((((var_1_9 - var_1_10)) > (var_1_11)) ? ((var_1_9 - var_1_10)) : (var_1_11))) + var_1_12))) : 1) : 1) : (last_1_var_1_23 ? (((((((last_1_var_1_91 / var_1_15)) < (last_1_var_1_81)) ? ((last_1_var_1_91 / var_1_15)) : (last_1_var_1_81))) >= last_1_var_1_104) ? ((last_1_var_1_104 < (var_1_15 * last_1_var_1_91)) ? (var_1_1 == ((unsigned short int) (37147 - var_1_18))) : (var_1_1 == ((unsigned short int) (var_1_18 + var_1_12)))) : 1) : (var_1_1 == ((unsigned short int) (var_1_11 + var_1_10)))))) : (last_1_var_1_53 ? ((((((var_1_18) < (last_1_var_1_78)) ? (var_1_18) : (last_1_var_1_78))) > ((((last_1_var_1_34) < 0 ) ? -(last_1_var_1_34) : (last_1_var_1_34)))) ? (((- last_1_var_1_94) == ((((-16) < (32)) ? (-16) : (32)))) ? (var_1_1 == ((unsigned short int) ((((var_1_5) < (var_1_10)) ? (var_1_5) : (var_1_10))))) : (var_1_1 == ((unsigned short int) ((((var_1_5) < ((((((var_1_11) > (var_1_18)) ? (var_1_11) : (var_1_18))) + var_1_10))) ? (var_1_5) : ((((((var_1_11) > (var_1_18)) ? (var_1_11) : (var_1_18))) + var_1_10))))))) : 1) : 1)) && (var_1_85 ? ((var_1_82 < var_1_10) ? (var_1_23 ? (var_1_20 == ((unsigned short int) ((((var_1_11) < (var_1_9)) ? (var_1_11) : (var_1_9))))) : (var_1_20 == ((unsigned short int) (((((var_1_9 + var_1_12)) > (var_1_18)) ? ((var_1_9 + var_1_12)) : (var_1_18)))))) : (var_1_85 ? (var_1_20 == ((unsigned short int) (((((var_1_21) > (52946)) ? (var_1_21) : (52946))) - (var_1_10 + var_1_22)))) : (var_1_20 == ((unsigned short int) var_1_12)))) : 1)) && (((- ((((var_1_15) < (var_1_81)) ? (var_1_15) : (var_1_81)))) != (var_1_24 - var_1_25)) ? ((var_1_22 < var_1_12) ? (var_1_23 == ((unsigned char) (var_1_85 && var_1_26))) : (var_1_23 == ((unsigned char) ((var_1_26 || var_1_27) || var_1_28)))) : (var_1_85 ? (var_1_23 == ((unsigned char) ((var_1_5 != var_1_12) && (var_1_28 && var_1_27)))) : (var_1_23 == ((unsigned char) (var_1_96 || var_1_29)))))) && ((var_1_25 >= (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) * 999999.5)) ? ((var_1_82 >= (var_1_5 / var_1_21)) ? (var_1_30 == ((unsigned long int) (var_1_31 - ((256u + var_1_5) + var_1_18)))) : (var_1_30 == ((unsigned long int) ((((((((var_1_78) < (((((4u) < (8u)) ? (4u) : (8u))))) ? (var_1_78) : (((((4u) < (8u)) ? (4u) : (8u))))))) > ((var_1_22 + (var_1_12 + last_1_var_1_30)))) ? (((((var_1_78) < (((((4u) < (8u)) ? (4u) : (8u))))) ? (var_1_78) : (((((4u) < (8u)) ? (4u) : (8u))))))) : ((var_1_22 + (var_1_12 + last_1_var_1_30)))))))) : (var_1_30 == ((unsigned long int) (var_1_18 + var_1_34))))) && ((! var_1_28) ? (var_1_32 == ((unsigned char) (! var_1_27))) : (var_1_32 == ((unsigned char) (var_1_26 || (! var_1_29)))))) && ((var_1_24 == var_1_81) ? (var_1_33 == ((signed short int) var_1_10)) : (var_1_33 == ((signed short int) 0)))) && (var_1_32 ? (var_1_34 == ((unsigned short int) ((((var_1_12) < ((var_1_21 - var_1_18))) ? (var_1_12) : ((var_1_21 - var_1_18)))))) : 1)) && ((last_1_var_1_93 > (var_1_11 | last_1_var_1_34)) ? (var_1_35 == ((signed short int) (((((((((5) < (var_1_22)) ? (5) : (var_1_22)))) > (var_1_10)) ? (((((5) < (var_1_22)) ? (5) : (var_1_22)))) : (var_1_10))) - var_1_36))) : (var_1_35 == ((signed short int) ((((var_1_22) < (var_1_36)) ? (var_1_22) : (var_1_36))))))) && (((((((var_1_36) > (var_1_74)) ? (var_1_36) : (var_1_74))) + var_1_5) >= (((((var_1_22) < (var_1_9)) ? (var_1_22) : (var_1_9))) - (var_1_12 + var_1_21))) ? (var_1_37 == ((signed long int) (last_1_var_1_37 + (((((var_1_74 + -4)) > (var_1_74)) ? ((var_1_74 + -4)) : (var_1_74)))))) : 1)) && ((var_1_15 <= (- var_1_25)) ? (var_1_85 ? ((var_1_10 > (var_1_42 & var_1_93)) ? (var_1_38 == ((signed char) var_1_39)) : (var_1_38 == ((signed char) var_1_40))) : 1) : (var_1_38 == ((signed char) var_1_40)))) && ((var_1_80 != ((((var_1_21) < ((var_1_18 + var_1_82))) ? (var_1_21) : ((var_1_18 + var_1_82))))) ? (((var_1_82 >= (var_1_22 / -32)) || var_1_96) ? (var_1_41 == ((unsigned short int) var_1_21)) : (var_1_41 == ((unsigned short int) ((((var_1_36) > (((var_1_9 - var_1_10) + 32))) ? (var_1_36) : (((var_1_9 - var_1_10) + 32))))))) : (var_1_41 == ((unsigned short int) (var_1_9 + var_1_11))))) && ((last_1_var_1_81 <= var_1_15) ? ((((((last_1_var_1_45) < (var_1_25)) ? (last_1_var_1_45) : (var_1_25))) < 31.2) ? (var_1_42 == ((signed long int) (((((var_1_11 + var_1_44) - var_1_12) < 0 ) ? -((var_1_11 + var_1_44) - var_1_12) : ((var_1_11 + var_1_44) - var_1_12))))) : 1) : 1)) && ((var_1_85 || ((var_1_21 / var_1_31) > var_1_101)) ? ((last_1_var_1_45 < (- var_1_77)) ? (var_1_85 ? (var_1_45 == ((double) (var_1_46 - var_1_47))) : ((var_1_24 >= var_1_100) ? (var_1_45 == ((double) (var_1_47 - (var_1_48 + var_1_49)))) : (((var_1_49 - var_1_47) > (var_1_25 - var_1_24)) ? (var_1_45 == ((double) (var_1_48 + (var_1_50 + 31.5)))) : (var_1_45 == ((double) (((var_1_51 + var_1_52) - ((((var_1_49) < (var_1_48)) ? (var_1_49) : (var_1_48)))) + var_1_50)))))) : ((var_1_85 || var_1_102) ? ((-256 > ((((var_1_21) > (var_1_1)) ? (var_1_21) : (var_1_1)))) ? (var_1_45 == ((double) (var_1_51 - 127.5))) : (var_1_96 ? (var_1_45 == ((double) ((((var_1_48) < (var_1_47)) ? (var_1_48) : (var_1_47))))) : (var_1_45 == ((double) ((8.188734120598182E18 - var_1_51) - ((((15.5) > (var_1_46)) ? (15.5) : (var_1_46)))))))) : ((((((var_1_50) < (last_1_var_1_45)) ? (var_1_50) : (last_1_var_1_45))) < var_1_51) ? (var_1_45 == ((double) (var_1_49 - var_1_46))) : (var_1_45 == ((double) ((((var_1_46) > (var_1_51)) ? (var_1_46) : (var_1_51)))))))) : (((var_1_31 - ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) == (((((var_1_84) > (0u)) ? (var_1_84) : (0u))) & var_1_21)) ? (var_1_45 == ((double) (var_1_48 - 2.5))) : (((var_1_9 - var_1_11) != var_1_88) ? (var_1_45 == ((double) (var_1_50 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) : (var_1_45 == ((double) ((((var_1_48) > (var_1_49)) ? (var_1_48) : (var_1_49))))))))) && (((var_1_24 + var_1_100) < (var_1_91 + var_1_68)) ? ((((var_1_49 * 2.2) * var_1_48) <= var_1_81) ? (var_1_53 == ((unsigned char) (var_1_26 || var_1_28))) : (var_1_53 == ((unsigned char) (((var_1_93 * var_1_10) >= var_1_82) || var_1_29)))) : ((((((var_1_94) > (var_1_36)) ? (var_1_94) : (var_1_36))) < (var_1_82 * var_1_67)) ? (var_1_53 == ((unsigned char) var_1_27)) : (var_1_53 == ((unsigned char) (! (var_1_29 && var_1_56))))))) && ((var_1_104 >= var_1_97) ? ((((((var_1_78 * var_1_21) < 0 ) ? -(var_1_78 * var_1_21) : (var_1_78 * var_1_21))) >= (var_1_10 + var_1_78)) ? (var_1_57 == ((signed char) var_1_39)) : (((var_1_82 / var_1_58) < 64) ? (var_1_85 ? (var_1_57 == ((signed char) ((10 - (var_1_59 - 4)) + var_1_60))) : 1) : 1)) : (var_1_57 == ((signed char) ((var_1_59 - var_1_61) + (var_1_62 + var_1_63)))))) && (var_1_64 == ((double) (((((var_1_49) < (var_1_52)) ? (var_1_49) : (var_1_52))) + var_1_48)))) && ((-5 == ((var_1_101 + var_1_5) * var_1_86)) ? (var_1_65 == ((unsigned short int) (((((var_1_9 + var_1_66) - (var_1_59 + var_1_10)) < 0 ) ? -((var_1_9 + var_1_66) - (var_1_59 + var_1_10)) : ((var_1_9 + var_1_66) - (var_1_59 + var_1_10)))))) : ((var_1_58 > var_1_44) ? (var_1_65 == ((unsigned short int) (var_1_21 - var_1_42))) : (var_1_65 == ((unsigned short int) (var_1_21 - var_1_10)))))) && ((var_1_10 <= last_1_var_1_78) ? ((64.2f > (99.4f - var_1_46)) ? (var_1_67 == ((signed long int) ((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) < 0 ) ? -((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) : ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) + var_1_22))) : (var_1_67 == ((signed long int) var_1_44))) : (var_1_67 == ((signed long int) var_1_12)))) && ((last_1_var_1_98 && last_1_var_1_53) ? (((var_1_48 / var_1_15) > var_1_51) ? (var_1_68 == ((float) (((var_1_70 - var_1_52) + var_1_49) - ((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48)))))) : ((last_1_var_1_74 == var_1_62) ? (var_1_68 == ((float) ((var_1_52 + var_1_50) + (var_1_51 + (var_1_71 - var_1_72))))) : 1)) : ((var_1_52 == last_1_var_1_104) ? (var_1_68 == ((float) (((((var_1_50 + ((((499.05f) < (var_1_70)) ? (499.05f) : (var_1_70))))) < ((var_1_51 - var_1_47))) ? ((var_1_50 + ((((499.05f) < (var_1_70)) ? (499.05f) : (var_1_70))))) : ((var_1_51 - var_1_47)))))) : (var_1_68 == ((float) ((((9.99999999999998E13f) < 0 ) ? -(9.99999999999998E13f) : (9.99999999999998E13f)))))))) && ((var_1_61 == var_1_31) ? (var_1_74 == ((unsigned long int) (((((var_1_31 - ((((var_1_44) < (var_1_93)) ? (var_1_44) : (var_1_93))))) < (var_1_101)) ? ((var_1_31 - ((((var_1_44) < (var_1_93)) ? (var_1_44) : (var_1_93))))) : (var_1_101))))) : 1)) && (var_1_26 ? ((var_1_29 && var_1_102) ? (var_1_75 == ((signed char) ((((((var_1_62 + 8)) < (var_1_63)) ? ((var_1_62 + 8)) : (var_1_63))) + 4))) : (var_1_75 == ((signed char) (((((var_1_62) > ((var_1_61 - var_1_59))) ? (var_1_62) : ((var_1_61 - var_1_59)))) + var_1_60)))) : ((var_1_15 == var_1_99) ? (var_1_75 == ((signed char) var_1_63)) : (var_1_75 == ((signed char) var_1_61))))) && (((var_1_11 + (var_1_31 - var_1_84)) < var_1_82) ? (var_1_76 == ((signed char) ((((var_1_40) < (10)) ? (var_1_40) : (10))))) : (var_1_76 == ((signed char) var_1_63)))) && (((var_1_61 / var_1_9) < var_1_82) ? (var_1_77 == ((float) (var_1_51 - var_1_71))) : 1)) && (var_1_56 ? (var_1_78 == ((unsigned long int) ((((var_1_9) > ((var_1_79 - ((((25u) < (var_1_42)) ? (25u) : (var_1_42)))))) ? (var_1_9) : ((var_1_79 - ((((25u) < (var_1_42)) ? (25u) : (var_1_42))))))))) : (var_1_78 == ((unsigned long int) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))) && (((- var_1_68) == var_1_52) ? (var_1_80 == ((unsigned short int) (16 + ((var_1_67 + var_1_61) + ((((var_1_59) > (var_1_22)) ? (var_1_59) : (var_1_22))))))) : ((var_1_28 || var_1_27) ? (var_1_80 == ((unsigned short int) 256)) : (var_1_80 == ((unsigned short int) ((((var_1_12) > (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) ? (var_1_12) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))))))) && ((last_1_var_1_100 > var_1_24) ? (var_1_81 == ((double) (var_1_52 - var_1_47))) : 1)) && ((((var_1_9 - var_1_59) - (var_1_66 - var_1_61)) <= (((((last_1_var_1_74) < 0 ) ? -(last_1_var_1_74) : (last_1_var_1_74))) << 4)) ? ((var_1_49 >= (last_1_var_1_81 * var_1_72)) ? (var_1_82 == ((signed long int) (var_1_40 + last_1_var_1_65))) : 1) : (((var_1_11 >= last_1_var_1_67) && last_1_var_1_102) ? (last_1_var_1_32 ? ((var_1_26 && ((var_1_83 - var_1_61) > last_1_var_1_33)) ? (var_1_82 == ((signed long int) last_1_var_1_67)) : (var_1_82 == ((signed long int) (last_1_var_1_35 + last_1_var_1_82)))) : (var_1_27 ? (var_1_82 == ((signed long int) ((((((last_1_var_1_41 + var_1_11) - last_1_var_1_93)) > (var_1_9)) ? (((last_1_var_1_41 + var_1_11) - last_1_var_1_93)) : (var_1_9))))) : (var_1_82 == ((signed long int) (2 + (last_1_var_1_1 + last_1_var_1_41)))))) : 1))) && (var_1_84 == ((unsigned long int) var_1_12))) && ((last_1_var_1_65 < last_1_var_1_74) ? (var_1_85 == ((unsigned char) ((! var_1_28) && var_1_29))) : 1)) && ((var_1_67 == (var_1_60 % var_1_58)) ? (((- 500u) >= var_1_31) ? (var_1_86 == ((signed short int) (var_1_62 + var_1_22))) : 1) : (var_1_86 == ((signed short int) (var_1_84 - ((var_1_87 - var_1_61) - var_1_10)))))) && (((var_1_12 * ((((var_1_9) > (var_1_11)) ? (var_1_9) : (var_1_11)))) < var_1_95) ? ((var_1_52 == ((((((((var_1_48) > (var_1_64)) ? (var_1_48) : (var_1_64)))) > (var_1_97)) ? (((((var_1_48) > (var_1_64)) ? (var_1_48) : (var_1_64)))) : (var_1_97)))) ? ((((((var_1_10) > (var_1_78)) ? (var_1_10) : (var_1_78))) == var_1_41) ? (var_1_88 == ((signed char) (var_1_59 - ((((var_1_61) > ((64 - var_1_90))) ? (var_1_61) : ((64 - var_1_90))))))) : (var_1_88 == ((signed char) ((var_1_61 + 10) - var_1_90)))) : (var_1_88 == ((signed char) (var_1_59 - var_1_90)))) : (var_1_88 == ((signed char) ((var_1_61 - var_1_59) + (var_1_62 + var_1_63)))))) && ((! var_1_26) ? (var_1_85 ? (var_1_91 == ((double) var_1_72)) : (var_1_91 == ((double) var_1_52))) : 1)) && (var_1_102 ? (var_1_92 == ((unsigned char) var_1_59)) : (var_1_92 == ((unsigned char) var_1_61)))) && (var_1_93 == ((signed long int) var_1_35))) && (var_1_98 ? (var_1_94 == ((unsigned long int) 16u)) : (var_1_94 == ((unsigned long int) var_1_12)))) && (var_1_29 ? (var_1_95 == ((signed short int) var_1_83)) : 1)) && (last_1_var_1_96 ? (var_1_96 == ((unsigned char) var_1_26)) : 1)) && (var_1_29 ? (var_1_97 == ((double) var_1_48)) : 1)) && (var_1_98 == ((unsigned char) var_1_56))) && (var_1_27 ? (var_1_99 == ((float) var_1_48)) : 1)) && (var_1_23 ? (var_1_100 == ((double) var_1_48)) : 1)) && (var_1_101 == ((signed long int) var_1_33))) && (var_1_102 == ((unsigned char) var_1_29))) && (var_1_56 ? (var_1_103 == ((unsigned char) var_1_29)) : (var_1_103 == ((unsigned char) var_1_26)))) && ((var_1_25 <= var_1_70) ? ((! var_1_103) ? ((((var_1_9 + var_1_66) - var_1_87) <= var_1_1) ? (var_1_104 == ((double) var_1_49)) : (var_1_104 == ((double) 9999999.5))) : 1) : (var_1_104 == ((double) var_1_47)))
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

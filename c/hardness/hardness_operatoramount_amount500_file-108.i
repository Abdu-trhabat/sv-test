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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch108Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 1.95;
float var_1_2 = 99.6;
float var_1_3 = 64.25;
signed short int var_1_4 = 50;
signed short int var_1_10 = -1;
signed short int var_1_11 = -5;
signed short int var_1_12 = 1;
signed short int var_1_13 = 1;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed long int var_1_17 = 0;
signed char var_1_18 = 5;
float var_1_19 = 256.5;
float var_1_20 = 499.6;
float var_1_21 = 63.2;
float var_1_22 = 128.75;
float var_1_23 = 200.8;
float var_1_24 = 24.75;
unsigned long int var_1_25 = 10;
unsigned long int var_1_26 = 64;
unsigned long int var_1_27 = 3701744861;
unsigned long int var_1_28 = 1817745831;
signed char var_1_29 = 16;
signed char var_1_30 = 100;
signed char var_1_31 = 32;
signed char var_1_32 = 10;
signed char var_1_33 = 4;
unsigned long int var_1_34 = 4;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
double var_1_37 = 50.5;
double var_1_38 = 0.0;
double var_1_39 = 2.4;
unsigned char var_1_40 = 25;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 128;
signed char var_1_43 = 2;
unsigned char var_1_44 = 10;
unsigned char var_1_46 = 32;
unsigned char var_1_47 = 200;
unsigned short int var_1_48 = 8;
signed short int var_1_49 = 256;
signed long int var_1_50 = 1;
float var_1_51 = 255.3;
float var_1_52 = 2.2;
unsigned long int var_1_53 = 5;
signed short int var_1_54 = 10;
signed short int var_1_55 = 10000;
signed short int var_1_56 = 10000;
double var_1_57 = 25.2;
double var_1_58 = 1.6;
double var_1_59 = 24.6;
unsigned short int var_1_60 = 0;
signed long int var_1_61 = 128;
signed long int var_1_62 = 1775110568;
signed char var_1_63 = 16;
signed char var_1_64 = -32;
signed char var_1_65 = 32;
signed char var_1_66 = 25;
signed char var_1_67 = -16;
signed long int var_1_68 = -25;
signed long int var_1_69 = 5;
unsigned short int var_1_70 = 0;
unsigned short int var_1_72 = 62011;
unsigned long int var_1_73 = 5;
unsigned char var_1_74 = 5;
double var_1_75 = 24.9;
double var_1_76 = 0.0;
double var_1_77 = 1000000.6;
double var_1_78 = 1000000000000000.5;
signed long int var_1_79 = -1;
unsigned long int var_1_80 = 1457111955;
signed long int var_1_81 = -32;
signed long int var_1_82 = 10;
double var_1_83 = 0.5;
double var_1_84 = 0.0;
signed short int var_1_85 = -256;
signed short int var_1_86 = 23081;
unsigned short int var_1_87 = 5;
unsigned short int var_1_88 = 17448;
unsigned short int var_1_89 = 30873;
signed char var_1_90 = 25;
signed long int var_1_91 = -5;
double var_1_92 = 8.75;
signed char var_1_93 = -4;
unsigned char var_1_94 = 1;
unsigned short int var_1_95 = 100;
unsigned short int var_1_96 = 8;
signed short int var_1_97 = 8;
unsigned short int var_1_98 = 2;
unsigned long int var_1_99 = 16;
signed char var_1_100 = 32;
unsigned char var_1_101 = 0;
unsigned short int var_1_102 = 16;
unsigned short int var_1_103 = 0;
signed char var_1_104 = 10;
signed short int var_1_105 = 5;
unsigned short int var_1_107 = 128;
unsigned long int last_1_var_1_25 = 10;
unsigned long int last_1_var_1_34 = 4;
double last_1_var_1_57 = 25.2;
signed long int last_1_var_1_61 = 128;
signed char last_1_var_1_67 = -16;
double last_1_var_1_75 = 24.9;
double last_1_var_1_77 = 1000000.6;
signed short int last_1_var_1_85 = -256;
signed long int last_1_var_1_91 = -5;
unsigned short int last_1_var_1_98 = 2;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_10 = last_1_var_1_34 * last_1_var_1_61;
 signed long int stepLocal_9 = last_1_var_1_91;
 if (var_1_12 != stepLocal_9) {
  if (var_1_27 < stepLocal_10) {
   var_1_35 = (var_1_15 && var_1_16);
  } else {
   var_1_35 = (! var_1_16);
  }
 } else {
  var_1_35 = (var_1_15 && var_1_36);
 }
 if (last_1_var_1_57 < (((((var_1_38 * var_1_3)) > (last_1_var_1_77)) ? ((var_1_38 * var_1_3)) : (last_1_var_1_77)))) {
  var_1_70 = ((((var_1_56) > (var_1_42)) ? (var_1_56) : (var_1_42)));
 } else {
  var_1_70 = ((((var_1_72 - var_1_47) < 0 ) ? -(var_1_72 - var_1_47) : (var_1_72 - var_1_47)));
 }
 if (var_1_55 == var_1_70) {
  var_1_77 = ((var_1_24 - (var_1_76 - var_1_23)) + (((((var_1_22 - var_1_78)) < (var_1_39)) ? ((var_1_22 - var_1_78)) : (var_1_39))));
 }
 unsigned long int stepLocal_17 = var_1_26;
 signed long int stepLocal_16 = last_1_var_1_67;
 if (stepLocal_17 > 16u) {
  if (last_1_var_1_75 < (var_1_23 - var_1_21)) {
   if ((- var_1_30) < stepLocal_16) {
    var_1_46 = ((var_1_47 - var_1_33) - var_1_30);
   }
  }
 }
 signed short int stepLocal_26 = var_1_13;
 if (var_1_46 < stepLocal_26) {
  var_1_68 = (var_1_69 - (var_1_42 + var_1_55));
 } else {
  if (var_1_21 >= var_1_20) {
   var_1_68 = var_1_12;
  }
 }
 var_1_1 = (var_1_2 - var_1_3);
 signed short int stepLocal_5 = var_1_12;
 if ((var_1_13 / ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) <= stepLocal_5) {
  var_1_17 = (2 - var_1_13);
 }
 if (! (-2 < var_1_68)) {
  var_1_19 = ((((var_1_3) > ((((((var_1_2) < (var_1_20)) ? (var_1_2) : (var_1_20))) - var_1_21))) ? (var_1_3) : ((((((var_1_2) < (var_1_20)) ? (var_1_2) : (var_1_20))) - var_1_21))));
 } else {
  var_1_19 = ((var_1_22 - (var_1_23 + var_1_24)) + 9.7f);
 }
 var_1_29 = (((var_1_30 - 16) - 25) - (var_1_31 + ((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33)))));
 if ((var_1_77 * var_1_21) <= var_1_24) {
  var_1_40 = var_1_32;
 } else {
  var_1_40 = (var_1_31 + var_1_30);
 }
 if (var_1_11 < var_1_27) {
  var_1_41 = ((((((((var_1_42 - var_1_31) < 0 ) ? -(var_1_42 - var_1_31) : (var_1_42 - var_1_31)))) > (((var_1_32 + var_1_33) + var_1_30))) ? (((((var_1_42 - var_1_31) < 0 ) ? -(var_1_42 - var_1_31) : (var_1_42 - var_1_31)))) : (((var_1_32 + var_1_33) + var_1_30))));
 }
 unsigned char stepLocal_18 = var_1_22 > var_1_21;
 if (stepLocal_18 || var_1_36) {
  var_1_48 = ((((var_1_12) < (var_1_33)) ? (var_1_12) : (var_1_33)));
 }
 if (var_1_77 >= (var_1_23 + var_1_22)) {
  var_1_50 = (((((var_1_48 + var_1_32)) > (var_1_18)) ? ((var_1_48 + var_1_32)) : (var_1_18)));
 }
 if ((~ var_1_81) > var_1_55) {
  var_1_83 = 4.5;
 } else {
  if (var_1_36) {
   var_1_83 = (var_1_39 + ((((var_1_76) < (var_1_52)) ? (var_1_76) : (var_1_52))));
  } else {
   if ((9.99999999999925E12 - (var_1_84 - var_1_23)) == 3.6) {
    var_1_83 = (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) - var_1_3);
   } else {
    var_1_83 = (((((var_1_23 + var_1_24) + (var_1_78 - 499.8)) < 0 ) ? -((var_1_23 + var_1_24) + (var_1_78 - 499.8)) : ((var_1_23 + var_1_24) + (var_1_78 - 499.8))));
   }
  }
 }
 var_1_92 = var_1_2;
 if (var_1_36) {
  var_1_94 = var_1_15;
 } else {
  var_1_94 = var_1_16;
 }
 var_1_96 = var_1_12;
 var_1_97 = var_1_10;
 var_1_98 = last_1_var_1_98;
 var_1_101 = var_1_36;
 var_1_103 = var_1_33;
 if (var_1_16 && var_1_15) {
  var_1_104 = (var_1_32 + var_1_66);
 } else {
  var_1_104 = ((((var_1_31) > (var_1_33)) ? (var_1_31) : (var_1_33)));
 }
 if (var_1_22 < ((((var_1_21) < (var_1_83)) ? (var_1_21) : (var_1_83)))) {
  var_1_105 = var_1_11;
 }
 var_1_107 = var_1_89;
 if ((var_1_20 / var_1_38) >= ((((var_1_92) < 0 ) ? -(var_1_92) : (var_1_92)))) {
  var_1_51 = (var_1_23 - ((((var_1_21) > (var_1_3)) ? (var_1_21) : (var_1_3))));
 } else {
  var_1_51 = ((((((((var_1_2) < (var_1_39)) ? (var_1_2) : (var_1_39)))) < ((var_1_52 + 8.9f))) ? (((((var_1_2) < (var_1_39)) ? (var_1_2) : (var_1_39)))) : ((var_1_52 + 8.9f))));
 }
 unsigned char stepLocal_21 = var_1_94;
 if (stepLocal_21 || var_1_15) {
  var_1_53 = var_1_26;
 } else {
  if (! (var_1_21 < var_1_22)) {
   var_1_53 = (var_1_27 - var_1_13);
  }
 }
 signed long int stepLocal_23 = var_1_50;
 if (stepLocal_23 > (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) * var_1_103)) {
  var_1_58 = ((((((((var_1_23) > (var_1_20)) ? (var_1_23) : (var_1_20)))) > ((var_1_59 - var_1_22))) ? (((((var_1_23) > (var_1_20)) ? (var_1_23) : (var_1_20)))) : ((var_1_59 - var_1_22))));
 } else {
  var_1_58 = (var_1_21 - var_1_38);
 }
 if (var_1_35 || var_1_101) {
  var_1_63 = (((((var_1_31) < (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))))) ? (var_1_31) : (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))))) + ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))));
 } else {
  var_1_63 = (((var_1_30 - 5) - (var_1_65 - var_1_66)) - var_1_32);
 }
 signed long int stepLocal_42 = (var_1_55 + var_1_12) * var_1_18;
 signed long int stepLocal_41 = var_1_32 * (-8 + -4);
 if (stepLocal_42 >= var_1_98) {
  if (4 < stepLocal_41) {
   var_1_90 = (var_1_65 + -2);
  } else {
   var_1_90 = var_1_33;
  }
 } else {
  var_1_90 = (((((var_1_31 + var_1_66)) > (32)) ? ((var_1_31 + var_1_66)) : (32)));
 }
 if (var_1_101) {
  var_1_93 = var_1_33;
 } else {
  var_1_93 = var_1_74;
 }
 if (var_1_15) {
  var_1_95 = var_1_107;
 } else {
  var_1_95 = var_1_72;
 }
 if (var_1_101) {
  var_1_99 = var_1_72;
 } else {
  var_1_99 = var_1_56;
 }
 unsigned char stepLocal_8 = var_1_12 > var_1_11;
 signed long int stepLocal_7 = var_1_11 * (var_1_13 / var_1_18);
 unsigned char stepLocal_6 = var_1_24 < var_1_23;
 if (stepLocal_7 < last_1_var_1_25) {
  var_1_25 = var_1_99;
 } else {
  if (var_1_94) {
   if (var_1_16 && stepLocal_8) {
    var_1_25 = (((((((((var_1_99) < (var_1_12)) ? (var_1_99) : (var_1_12)))) > ((var_1_68 + var_1_13))) ? (((((var_1_99) < (var_1_12)) ? (var_1_99) : (var_1_12)))) : ((var_1_68 + var_1_13)))) + var_1_26);
   }
  } else {
   if (var_1_94) {
    var_1_25 = var_1_26;
   } else {
    if (var_1_15) {
     if (var_1_16 || stepLocal_6) {
      var_1_25 = (((((2285268748u) > (var_1_27)) ? (2285268748u) : (var_1_27))) - var_1_68);
     } else {
      var_1_25 = (var_1_27 - var_1_26);
     }
    } else {
     var_1_25 = ((1324699969u + var_1_28) - 64u);
    }
   }
  }
 }
 if (var_1_53 == var_1_33) {
  if (var_1_27 > ((((var_1_31) > (var_1_53)) ? (var_1_31) : (var_1_53)))) {
   var_1_34 = (var_1_31 + var_1_13);
  } else {
   var_1_34 = (var_1_27 - var_1_32);
  }
 } else {
  var_1_34 = (((((var_1_27 - var_1_26)) > (16u)) ? ((var_1_27 - var_1_26)) : (16u)));
 }
 unsigned long int stepLocal_11 = var_1_53 + var_1_30;
 if (var_1_16) {
  if ((var_1_26 / 16) != stepLocal_11) {
   var_1_37 = (24.75 - (var_1_38 - var_1_23));
  } else {
   var_1_37 = ((var_1_23 + var_1_24) - var_1_3);
  }
 } else {
  var_1_37 = ((((((var_1_22 - var_1_24)) < (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? ((var_1_22 - var_1_24)) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) + var_1_39);
 }
 signed long int stepLocal_15 = var_1_17;
 signed short int stepLocal_14 = var_1_12;
 signed long int stepLocal_13 = var_1_12 & var_1_32;
 unsigned char stepLocal_12 = var_1_101;
 if (stepLocal_14 != var_1_34) {
  if (var_1_31 < stepLocal_13) {
   if (stepLocal_15 < var_1_33) {
    var_1_44 = (var_1_32 + var_1_31);
   } else {
    var_1_44 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
   }
  }
 } else {
  if (var_1_94 || stepLocal_12) {
   var_1_44 = var_1_33;
  } else {
   var_1_44 = var_1_32;
  }
 }
 signed short int stepLocal_22 = var_1_10;
 if (var_1_50 >= stepLocal_22) {
  var_1_54 = (var_1_50 - ((var_1_55 + var_1_56) - var_1_42));
 } else {
  var_1_54 = ((var_1_41 + var_1_44) + (-50 + var_1_30));
 }
 if (var_1_37 < (var_1_59 + (- 3.875))) {
  var_1_60 = (((((((((var_1_47 + var_1_33)) < (var_1_96)) ? ((var_1_47 + var_1_33)) : (var_1_96)))) > (((((var_1_13) < (4)) ? (var_1_13) : (4))))) ? ((((((var_1_47 + var_1_33)) < (var_1_96)) ? ((var_1_47 + var_1_33)) : (var_1_96)))) : (((((var_1_13) < (4)) ? (var_1_13) : (4))))));
 }
 signed long int stepLocal_28 = var_1_33 >> var_1_74;
 unsigned short int stepLocal_27 = var_1_103;
 if (var_1_72 >= stepLocal_28) {
  if (stepLocal_27 <= (((((var_1_34) < (var_1_93)) ? (var_1_34) : (var_1_93))) / var_1_18)) {
   var_1_73 = (((((128u) < 0 ) ? -(128u) : (128u))) + (var_1_28 - var_1_42));
  }
 }
 unsigned char stepLocal_25 = var_1_15;
 signed char stepLocal_24 = var_1_32;
 if (stepLocal_25 || var_1_35) {
  var_1_61 = (var_1_95 - 10000);
 } else {
  if (var_1_99 < stepLocal_24) {
   var_1_61 = ((var_1_62 - 32) - var_1_42);
  } else {
   var_1_61 = (((((var_1_47 - var_1_50)) < ((((((var_1_32) > (var_1_42)) ? (var_1_32) : (var_1_42))) + (var_1_73 + var_1_31)))) ? ((var_1_47 - var_1_50)) : ((((((var_1_32) > (var_1_42)) ? (var_1_32) : (var_1_42))) + (var_1_73 + var_1_31)))));
  }
 }
 signed long int stepLocal_4 = -4;
 unsigned short int stepLocal_3 = var_1_70;
 unsigned char stepLocal_2 = var_1_101;
 if (stepLocal_4 >= var_1_70) {
  if (stepLocal_3 > var_1_34) {
   if (stepLocal_2 && (var_1_2 >= var_1_3)) {
    var_1_14 = (var_1_101 || var_1_15);
   } else {
    if (var_1_101) {
     var_1_14 = var_1_16;
    } else {
     var_1_14 = var_1_15;
    }
   }
  } else {
   var_1_14 = var_1_15;
  }
 }
 if (! var_1_14) {
  var_1_57 = var_1_39;
 } else {
  var_1_57 = ((((((999999.2) < 0 ) ? -(999999.2) : (999999.2))) + var_1_24) - var_1_21);
 }
 signed char stepLocal_32 = var_1_33;
 unsigned char stepLocal_31 = var_1_13 >= var_1_11;
 signed long int stepLocal_30 = var_1_62;
 unsigned long int stepLocal_29 = var_1_26;
 if (stepLocal_32 <= ((var_1_53 * var_1_26) * var_1_65)) {
  if ((((((var_1_23) < (last_1_var_1_75)) ? (var_1_23) : (last_1_var_1_75))) * var_1_58) < ((((var_1_37) < (var_1_59)) ? (var_1_37) : (var_1_59)))) {
   if (var_1_58 > var_1_2) {
    if (var_1_98 >= stepLocal_29) {
     var_1_75 = (var_1_23 - var_1_21);
    }
   }
  } else {
   if (((var_1_92 / var_1_38) <= var_1_2) && stepLocal_31) {
    var_1_75 = ((var_1_38 - (var_1_76 - var_1_24)) - 64.3);
   }
  }
 } else {
  if (stepLocal_30 <= var_1_68) {
   var_1_75 = ((((((((var_1_23) > (var_1_38)) ? (var_1_23) : (var_1_38)))) > ((((((var_1_52 + var_1_76)) < (var_1_59)) ? ((var_1_52 + var_1_76)) : (var_1_59))))) ? (((((var_1_23) > (var_1_38)) ? (var_1_23) : (var_1_38)))) : ((((((var_1_52 + var_1_76)) < (var_1_59)) ? ((var_1_52 + var_1_76)) : (var_1_59))))));
  } else {
   var_1_75 = (var_1_76 - ((((var_1_38 - 256.5) < 0 ) ? -(var_1_38 - 256.5) : (var_1_38 - 256.5))));
  }
 }
 unsigned char stepLocal_40 = var_1_83 <= 256.25;
 signed long int stepLocal_39 = -4;
 if (stepLocal_40 || (var_1_48 == var_1_60)) {
  if (! var_1_94) {
   var_1_87 = (((((var_1_88 - var_1_74) < 0 ) ? -(var_1_88 - var_1_74) : (var_1_88 - var_1_74))) + (((((var_1_42 + var_1_30)) < (((((var_1_46) < (var_1_12)) ? (var_1_46) : (var_1_12))))) ? ((var_1_42 + var_1_30)) : (((((var_1_46) < (var_1_12)) ? (var_1_46) : (var_1_12)))))));
  } else {
   var_1_87 = var_1_47;
  }
 } else {
  if ((var_1_30 - var_1_31) < stepLocal_39) {
   var_1_87 = (((((var_1_86 + (var_1_89 - var_1_74))) > (var_1_32)) ? ((var_1_86 + (var_1_89 - var_1_74))) : (var_1_32)));
  }
 }
 if (! var_1_14) {
  var_1_43 = ((((var_1_30) < (var_1_32)) ? (var_1_30) : (var_1_32)));
 }
 unsigned long int stepLocal_20 = (((var_1_73) < (var_1_47)) ? (var_1_73) : (var_1_47));
 unsigned long int stepLocal_19 = var_1_99;
 if (stepLocal_20 < var_1_53) {
  if (var_1_25 <= stepLocal_19) {
   var_1_49 = ((((var_1_30) > (((var_1_31 - var_1_105) + ((((var_1_25) > (var_1_47)) ? (var_1_25) : (var_1_47)))))) ? (var_1_30) : (((var_1_31 - var_1_105) + ((((var_1_25) > (var_1_47)) ? (var_1_25) : (var_1_47)))))));
  } else {
   var_1_49 = var_1_30;
  }
 }
 unsigned char stepLocal_38 = var_1_16;
 unsigned char stepLocal_37 = var_1_47;
 if (var_1_36 && stepLocal_38) {
  if (stepLocal_37 <= var_1_99) {
   var_1_85 = (var_1_47 - var_1_13);
  }
 } else {
  if (var_1_14) {
   var_1_85 = ((((var_1_43) < (last_1_var_1_85)) ? (var_1_43) : (last_1_var_1_85)));
  } else {
   if ((var_1_92 * (var_1_38 * var_1_3)) >= (- 2.6)) {
    var_1_85 = ((var_1_86 - (var_1_55 - var_1_30)) - var_1_47);
   } else {
    var_1_85 = (last_1_var_1_85 - ((((var_1_53) > (var_1_95)) ? (var_1_53) : (var_1_95))));
   }
  }
 }
 if (var_1_14) {
  var_1_91 = var_1_64;
 }
 if (var_1_14) {
  var_1_100 = var_1_47;
 } else {
  var_1_100 = var_1_74;
 }
 if (var_1_14) {
  var_1_102 = var_1_33;
 }
 if ((var_1_50 | var_1_73) <= var_1_87) {
  var_1_67 = (var_1_30 - var_1_33);
 }
 unsigned char stepLocal_1 = var_1_53 > var_1_60;
 unsigned long int stepLocal_0 = var_1_60 ^ var_1_53;
 if (stepLocal_0 >= (64 * (var_1_91 + var_1_61))) {
  if ((var_1_3 - var_1_2) < var_1_92) {
   if (stepLocal_1 || (! var_1_101)) {
    var_1_4 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
   } else {
    var_1_4 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
   }
  }
 } else {
  var_1_4 = ((((var_1_12 - var_1_13) < 0 ) ? -(var_1_12 - var_1_13) : (var_1_12 - var_1_13)));
 }
 unsigned char stepLocal_36 = var_1_15;
 unsigned long int stepLocal_35 = var_1_99 / var_1_56;
 unsigned char stepLocal_34 = var_1_51 >= var_1_24;
 unsigned long int stepLocal_33 = (var_1_28 + var_1_80) - var_1_30;
 if (var_1_78 <= var_1_51) {
  if (var_1_26 >= stepLocal_33) {
   if (var_1_101) {
    var_1_79 = (((var_1_11 + var_1_70) + var_1_81) + (var_1_4 + (var_1_107 + -100)));
   } else {
    if (var_1_2 >= var_1_20) {
     var_1_79 = (((((var_1_82) < (var_1_43)) ? (var_1_82) : (var_1_43))) + (var_1_102 + var_1_66));
    } else {
     var_1_79 = ((((var_1_105) > (var_1_42)) ? (var_1_105) : (var_1_42)));
    }
   }
  }
 } else {
  if (stepLocal_34 && (! var_1_15)) {
   if (((var_1_66 - var_1_33) > (var_1_26 / var_1_72)) && stepLocal_36) {
    if (stepLocal_35 < var_1_54) {
     var_1_79 = ((((((var_1_99 + var_1_70)) < (var_1_72)) ? ((var_1_99 + var_1_70)) : (var_1_72))) - var_1_33);
    } else {
     var_1_79 = var_1_65;
    }
   } else {
    var_1_79 = var_1_105;
   }
  } else {
   var_1_79 = var_1_82;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32766);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32767);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -127);
 assume_abort_if_not(var_1_18 <= 127);
 assume_abort_if_not(var_1_18 != 0);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 2147483647);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 1073741824);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 94);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 4611686.018427383000e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 127);
 assume_abort_if_not(var_1_42 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 190);
 assume_abort_if_not(var_1_47 <= 254);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -461168.6018427383000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_55 >= 8191);
 assume_abort_if_not(var_1_55 <= 16383);
 var_1_56 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_56 >= 8192);
 assume_abort_if_not(var_1_56 <= 16383);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_62 >= 1073741822);
 assume_abort_if_not(var_1_62 <= 2147483646);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= -63);
 assume_abort_if_not(var_1_64 <= 63);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 31);
 assume_abort_if_not(var_1_65 <= 63);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 31);
 var_1_69 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_69 >= -1);
 assume_abort_if_not(var_1_69 <= 2147483646);
 var_1_72 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_72 >= 32767);
 assume_abort_if_not(var_1_72 <= 65534);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 1);
 assume_abort_if_not(var_1_74 <= 6);
 var_1_76 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_76 >= 2305843.009213691400e+12F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 4611686.018427383000e+12F && var_1_76 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427383000e+12F && var_1_78 >= 1.0e-20F ));
 var_1_80 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_80 >= 1073741824);
 assume_abort_if_not(var_1_80 <= 2147483647);
 var_1_81 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_81 >= -536870911);
 assume_abort_if_not(var_1_81 <= 536870911);
 var_1_82 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_82 >= -1073741823);
 assume_abort_if_not(var_1_82 <= 1073741823);
 var_1_84 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_84 >= 4611686.018427388000e+12F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854776000e+12F && var_1_84 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_86 >= 16382);
 assume_abort_if_not(var_1_86 <= 32766);
 var_1_88 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_88 >= 16383);
 assume_abort_if_not(var_1_88 <= 32767);
 var_1_89 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_89 >= 16383);
 assume_abort_if_not(var_1_89 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_25 = var_1_25;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_98 = var_1_98;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((float) (var_1_2 - var_1_3))) && (((var_1_60 ^ var_1_53) >= (64 * (var_1_91 + var_1_61))) ? (((var_1_3 - var_1_2) < var_1_92) ? (((var_1_53 > var_1_60) || (! var_1_101)) ? (var_1_4 == ((signed short int) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) : (var_1_4 == ((signed short int) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))) : 1) : (var_1_4 == ((signed short int) ((((var_1_12 - var_1_13) < 0 ) ? -(var_1_12 - var_1_13) : (var_1_12 - var_1_13))))))) && ((-4 >= var_1_70) ? ((var_1_70 > var_1_34) ? ((var_1_101 && (var_1_2 >= var_1_3)) ? (var_1_14 == ((unsigned char) (var_1_101 || var_1_15))) : (var_1_101 ? (var_1_14 == ((unsigned char) var_1_16)) : (var_1_14 == ((unsigned char) var_1_15)))) : (var_1_14 == ((unsigned char) var_1_15))) : 1)) && (((var_1_13 / ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) <= var_1_12) ? (var_1_17 == ((signed long int) (2 - var_1_13))) : 1)) && ((! (-2 < var_1_68)) ? (var_1_19 == ((float) ((((var_1_3) > ((((((var_1_2) < (var_1_20)) ? (var_1_2) : (var_1_20))) - var_1_21))) ? (var_1_3) : ((((((var_1_2) < (var_1_20)) ? (var_1_2) : (var_1_20))) - var_1_21)))))) : (var_1_19 == ((float) ((var_1_22 - (var_1_23 + var_1_24)) + 9.7f))))) && (((var_1_11 * (var_1_13 / var_1_18)) < last_1_var_1_25) ? (var_1_25 == ((unsigned long int) var_1_99)) : (var_1_94 ? ((var_1_16 && (var_1_12 > var_1_11)) ? (var_1_25 == ((unsigned long int) (((((((((var_1_99) < (var_1_12)) ? (var_1_99) : (var_1_12)))) > ((var_1_68 + var_1_13))) ? (((((var_1_99) < (var_1_12)) ? (var_1_99) : (var_1_12)))) : ((var_1_68 + var_1_13)))) + var_1_26))) : 1) : (var_1_94 ? (var_1_25 == ((unsigned long int) var_1_26)) : (var_1_15 ? ((var_1_16 || (var_1_24 < var_1_23)) ? (var_1_25 == ((unsigned long int) (((((2285268748u) > (var_1_27)) ? (2285268748u) : (var_1_27))) - var_1_68))) : (var_1_25 == ((unsigned long int) (var_1_27 - var_1_26)))) : (var_1_25 == ((unsigned long int) ((1324699969u + var_1_28) - 64u)))))))) && (var_1_29 == ((signed char) (((var_1_30 - 16) - 25) - (var_1_31 + ((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33)))))))) && ((var_1_53 == var_1_33) ? ((var_1_27 > ((((var_1_31) > (var_1_53)) ? (var_1_31) : (var_1_53)))) ? (var_1_34 == ((unsigned long int) (var_1_31 + var_1_13))) : (var_1_34 == ((unsigned long int) (var_1_27 - var_1_32)))) : (var_1_34 == ((unsigned long int) (((((var_1_27 - var_1_26)) > (16u)) ? ((var_1_27 - var_1_26)) : (16u))))))) && ((var_1_12 != last_1_var_1_91) ? ((var_1_27 < (last_1_var_1_34 * last_1_var_1_61)) ? (var_1_35 == ((unsigned char) (var_1_15 && var_1_16))) : (var_1_35 == ((unsigned char) (! var_1_16)))) : (var_1_35 == ((unsigned char) (var_1_15 && var_1_36))))) && (var_1_16 ? (((var_1_26 / 16) != (var_1_53 + var_1_30)) ? (var_1_37 == ((double) (24.75 - (var_1_38 - var_1_23)))) : (var_1_37 == ((double) ((var_1_23 + var_1_24) - var_1_3)))) : (var_1_37 == ((double) ((((((var_1_22 - var_1_24)) < (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? ((var_1_22 - var_1_24)) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) + var_1_39))))) && (((var_1_77 * var_1_21) <= var_1_24) ? (var_1_40 == ((unsigned char) var_1_32)) : (var_1_40 == ((unsigned char) (var_1_31 + var_1_30))))) && ((var_1_11 < var_1_27) ? (var_1_41 == ((unsigned char) ((((((((var_1_42 - var_1_31) < 0 ) ? -(var_1_42 - var_1_31) : (var_1_42 - var_1_31)))) > (((var_1_32 + var_1_33) + var_1_30))) ? (((((var_1_42 - var_1_31) < 0 ) ? -(var_1_42 - var_1_31) : (var_1_42 - var_1_31)))) : (((var_1_32 + var_1_33) + var_1_30)))))) : 1)) && ((! var_1_14) ? (var_1_43 == ((signed char) ((((var_1_30) < (var_1_32)) ? (var_1_30) : (var_1_32))))) : 1)) && ((var_1_12 != var_1_34) ? ((var_1_31 < (var_1_12 & var_1_32)) ? ((var_1_17 < var_1_33) ? (var_1_44 == ((unsigned char) (var_1_32 + var_1_31))) : (var_1_44 == ((unsigned char) ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) : 1) : ((var_1_94 || var_1_101) ? (var_1_44 == ((unsigned char) var_1_33)) : (var_1_44 == ((unsigned char) var_1_32))))) && ((var_1_26 > 16u) ? ((last_1_var_1_75 < (var_1_23 - var_1_21)) ? (((- var_1_30) < last_1_var_1_67) ? (var_1_46 == ((unsigned char) ((var_1_47 - var_1_33) - var_1_30))) : 1) : 1) : 1)) && (((var_1_22 > var_1_21) || var_1_36) ? (var_1_48 == ((unsigned short int) ((((var_1_12) < (var_1_33)) ? (var_1_12) : (var_1_33))))) : 1)) && ((((((var_1_73) < (var_1_47)) ? (var_1_73) : (var_1_47))) < var_1_53) ? ((var_1_25 <= var_1_99) ? (var_1_49 == ((signed short int) ((((var_1_30) > (((var_1_31 - var_1_105) + ((((var_1_25) > (var_1_47)) ? (var_1_25) : (var_1_47)))))) ? (var_1_30) : (((var_1_31 - var_1_105) + ((((var_1_25) > (var_1_47)) ? (var_1_25) : (var_1_47))))))))) : (var_1_49 == ((signed short int) var_1_30))) : 1)) && ((var_1_77 >= (var_1_23 + var_1_22)) ? (var_1_50 == ((signed long int) (((((var_1_48 + var_1_32)) > (var_1_18)) ? ((var_1_48 + var_1_32)) : (var_1_18))))) : 1)) && (((var_1_20 / var_1_38) >= ((((var_1_92) < 0 ) ? -(var_1_92) : (var_1_92)))) ? (var_1_51 == ((float) (var_1_23 - ((((var_1_21) > (var_1_3)) ? (var_1_21) : (var_1_3)))))) : (var_1_51 == ((float) ((((((((var_1_2) < (var_1_39)) ? (var_1_2) : (var_1_39)))) < ((var_1_52 + 8.9f))) ? (((((var_1_2) < (var_1_39)) ? (var_1_2) : (var_1_39)))) : ((var_1_52 + 8.9f)))))))) && ((var_1_94 || var_1_15) ? (var_1_53 == ((unsigned long int) var_1_26)) : ((! (var_1_21 < var_1_22)) ? (var_1_53 == ((unsigned long int) (var_1_27 - var_1_13))) : 1))) && ((var_1_50 >= var_1_10) ? (var_1_54 == ((signed short int) (var_1_50 - ((var_1_55 + var_1_56) - var_1_42)))) : (var_1_54 == ((signed short int) ((var_1_41 + var_1_44) + (-50 + var_1_30)))))) && ((! var_1_14) ? (var_1_57 == ((double) var_1_39)) : (var_1_57 == ((double) ((((((999999.2) < 0 ) ? -(999999.2) : (999999.2))) + var_1_24) - var_1_21))))) && ((var_1_50 > (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) * var_1_103)) ? (var_1_58 == ((double) ((((((((var_1_23) > (var_1_20)) ? (var_1_23) : (var_1_20)))) > ((var_1_59 - var_1_22))) ? (((((var_1_23) > (var_1_20)) ? (var_1_23) : (var_1_20)))) : ((var_1_59 - var_1_22)))))) : (var_1_58 == ((double) (var_1_21 - var_1_38))))) && ((var_1_37 < (var_1_59 + (- 3.875))) ? (var_1_60 == ((unsigned short int) (((((((((var_1_47 + var_1_33)) < (var_1_96)) ? ((var_1_47 + var_1_33)) : (var_1_96)))) > (((((var_1_13) < (4)) ? (var_1_13) : (4))))) ? ((((((var_1_47 + var_1_33)) < (var_1_96)) ? ((var_1_47 + var_1_33)) : (var_1_96)))) : (((((var_1_13) < (4)) ? (var_1_13) : (4)))))))) : 1)) && ((var_1_15 || var_1_35) ? (var_1_61 == ((signed long int) (var_1_95 - 10000))) : ((var_1_99 < var_1_32) ? (var_1_61 == ((signed long int) ((var_1_62 - 32) - var_1_42))) : (var_1_61 == ((signed long int) (((((var_1_47 - var_1_50)) < ((((((var_1_32) > (var_1_42)) ? (var_1_32) : (var_1_42))) + (var_1_73 + var_1_31)))) ? ((var_1_47 - var_1_50)) : ((((((var_1_32) > (var_1_42)) ? (var_1_32) : (var_1_42))) + (var_1_73 + var_1_31)))))))))) && ((var_1_35 || var_1_101) ? (var_1_63 == ((signed char) (((((var_1_31) < (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))))) ? (var_1_31) : (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))))) + ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64)))))) : (var_1_63 == ((signed char) (((var_1_30 - 5) - (var_1_65 - var_1_66)) - var_1_32))))) && (((var_1_50 | var_1_73) <= var_1_87) ? (var_1_67 == ((signed char) (var_1_30 - var_1_33))) : 1)) && ((var_1_46 < var_1_13) ? (var_1_68 == ((signed long int) (var_1_69 - (var_1_42 + var_1_55)))) : ((var_1_21 >= var_1_20) ? (var_1_68 == ((signed long int) var_1_12)) : 1))) && ((last_1_var_1_57 < (((((var_1_38 * var_1_3)) > (last_1_var_1_77)) ? ((var_1_38 * var_1_3)) : (last_1_var_1_77)))) ? (var_1_70 == ((unsigned short int) ((((var_1_56) > (var_1_42)) ? (var_1_56) : (var_1_42))))) : (var_1_70 == ((unsigned short int) ((((var_1_72 - var_1_47) < 0 ) ? -(var_1_72 - var_1_47) : (var_1_72 - var_1_47))))))) && ((var_1_72 >= (var_1_33 >> var_1_74)) ? ((var_1_103 <= (((((var_1_34) < (var_1_93)) ? (var_1_34) : (var_1_93))) / var_1_18)) ? (var_1_73 == ((unsigned long int) (((((128u) < 0 ) ? -(128u) : (128u))) + (var_1_28 - var_1_42)))) : 1) : 1)) && ((var_1_33 <= ((var_1_53 * var_1_26) * var_1_65)) ? (((((((var_1_23) < (last_1_var_1_75)) ? (var_1_23) : (last_1_var_1_75))) * var_1_58) < ((((var_1_37) < (var_1_59)) ? (var_1_37) : (var_1_59)))) ? ((var_1_58 > var_1_2) ? ((var_1_98 >= var_1_26) ? (var_1_75 == ((double) (var_1_23 - var_1_21))) : 1) : 1) : ((((var_1_92 / var_1_38) <= var_1_2) && (var_1_13 >= var_1_11)) ? (var_1_75 == ((double) ((var_1_38 - (var_1_76 - var_1_24)) - 64.3))) : 1)) : ((var_1_62 <= var_1_68) ? (var_1_75 == ((double) ((((((((var_1_23) > (var_1_38)) ? (var_1_23) : (var_1_38)))) > ((((((var_1_52 + var_1_76)) < (var_1_59)) ? ((var_1_52 + var_1_76)) : (var_1_59))))) ? (((((var_1_23) > (var_1_38)) ? (var_1_23) : (var_1_38)))) : ((((((var_1_52 + var_1_76)) < (var_1_59)) ? ((var_1_52 + var_1_76)) : (var_1_59)))))))) : (var_1_75 == ((double) (var_1_76 - ((((var_1_38 - 256.5) < 0 ) ? -(var_1_38 - 256.5) : (var_1_38 - 256.5))))))))) && ((var_1_55 == var_1_70) ? (var_1_77 == ((double) ((var_1_24 - (var_1_76 - var_1_23)) + (((((var_1_22 - var_1_78)) < (var_1_39)) ? ((var_1_22 - var_1_78)) : (var_1_39)))))) : 1)) && ((var_1_78 <= var_1_51) ? ((var_1_26 >= ((var_1_28 + var_1_80) - var_1_30)) ? (var_1_101 ? (var_1_79 == ((signed long int) (((var_1_11 + var_1_70) + var_1_81) + (var_1_4 + (var_1_107 + -100))))) : ((var_1_2 >= var_1_20) ? (var_1_79 == ((signed long int) (((((var_1_82) < (var_1_43)) ? (var_1_82) : (var_1_43))) + (var_1_102 + var_1_66)))) : (var_1_79 == ((signed long int) ((((var_1_105) > (var_1_42)) ? (var_1_105) : (var_1_42))))))) : 1) : (((var_1_51 >= var_1_24) && (! var_1_15)) ? ((((var_1_66 - var_1_33) > (var_1_26 / var_1_72)) && var_1_15) ? (((var_1_99 / var_1_56) < var_1_54) ? (var_1_79 == ((signed long int) ((((((var_1_99 + var_1_70)) < (var_1_72)) ? ((var_1_99 + var_1_70)) : (var_1_72))) - var_1_33))) : (var_1_79 == ((signed long int) var_1_65))) : (var_1_79 == ((signed long int) var_1_105))) : (var_1_79 == ((signed long int) var_1_82))))) && (((~ var_1_81) > var_1_55) ? (var_1_83 == ((double) 4.5)) : (var_1_36 ? (var_1_83 == ((double) (var_1_39 + ((((var_1_76) < (var_1_52)) ? (var_1_76) : (var_1_52)))))) : (((9.99999999999925E12 - (var_1_84 - var_1_23)) == 3.6) ? (var_1_83 == ((double) (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) - var_1_3))) : (var_1_83 == ((double) (((((var_1_23 + var_1_24) + (var_1_78 - 499.8)) < 0 ) ? -((var_1_23 + var_1_24) + (var_1_78 - 499.8)) : ((var_1_23 + var_1_24) + (var_1_78 - 499.8)))))))))) && ((var_1_36 && var_1_16) ? ((var_1_47 <= var_1_99) ? (var_1_85 == ((signed short int) (var_1_47 - var_1_13))) : 1) : (var_1_14 ? (var_1_85 == ((signed short int) ((((var_1_43) < (last_1_var_1_85)) ? (var_1_43) : (last_1_var_1_85))))) : (((var_1_92 * (var_1_38 * var_1_3)) >= (- 2.6)) ? (var_1_85 == ((signed short int) ((var_1_86 - (var_1_55 - var_1_30)) - var_1_47))) : (var_1_85 == ((signed short int) (last_1_var_1_85 - ((((var_1_53) > (var_1_95)) ? (var_1_53) : (var_1_95)))))))))) && (((var_1_83 <= 256.25) || (var_1_48 == var_1_60)) ? ((! var_1_94) ? (var_1_87 == ((unsigned short int) (((((var_1_88 - var_1_74) < 0 ) ? -(var_1_88 - var_1_74) : (var_1_88 - var_1_74))) + (((((var_1_42 + var_1_30)) < (((((var_1_46) < (var_1_12)) ? (var_1_46) : (var_1_12))))) ? ((var_1_42 + var_1_30)) : (((((var_1_46) < (var_1_12)) ? (var_1_46) : (var_1_12))))))))) : (var_1_87 == ((unsigned short int) var_1_47))) : (((var_1_30 - var_1_31) < -4) ? (var_1_87 == ((unsigned short int) (((((var_1_86 + (var_1_89 - var_1_74))) > (var_1_32)) ? ((var_1_86 + (var_1_89 - var_1_74))) : (var_1_32))))) : 1))) && ((((var_1_55 + var_1_12) * var_1_18) >= var_1_98) ? ((4 < (var_1_32 * (-8 + -4))) ? (var_1_90 == ((signed char) (var_1_65 + -2))) : (var_1_90 == ((signed char) var_1_33))) : (var_1_90 == ((signed char) (((((var_1_31 + var_1_66)) > (32)) ? ((var_1_31 + var_1_66)) : (32))))))) && (var_1_14 ? (var_1_91 == ((signed long int) var_1_64)) : 1)) && (var_1_92 == ((double) var_1_2))) && (var_1_101 ? (var_1_93 == ((signed char) var_1_33)) : (var_1_93 == ((signed char) var_1_74)))) && (var_1_36 ? (var_1_94 == ((unsigned char) var_1_15)) : (var_1_94 == ((unsigned char) var_1_16)))) && (var_1_15 ? (var_1_95 == ((unsigned short int) var_1_107)) : (var_1_95 == ((unsigned short int) var_1_72)))) && (var_1_96 == ((unsigned short int) var_1_12))) && (var_1_97 == ((signed short int) var_1_10))) && (var_1_98 == ((unsigned short int) last_1_var_1_98))) && (var_1_101 ? (var_1_99 == ((unsigned long int) var_1_72)) : (var_1_99 == ((unsigned long int) var_1_56)))) && (var_1_14 ? (var_1_100 == ((signed char) var_1_47)) : (var_1_100 == ((signed char) var_1_74)))) && (var_1_101 == ((unsigned char) var_1_36))) && (var_1_14 ? (var_1_102 == ((unsigned short int) var_1_33)) : 1)) && (var_1_103 == ((unsigned short int) var_1_33))) && ((var_1_16 && var_1_15) ? (var_1_104 == ((signed char) (var_1_32 + var_1_66))) : (var_1_104 == ((signed char) ((((var_1_31) > (var_1_33)) ? (var_1_31) : (var_1_33))))))) && ((var_1_22 < ((((var_1_21) < (var_1_83)) ? (var_1_21) : (var_1_83)))) ? (var_1_105 == ((signed short int) var_1_11)) : 1)) && (var_1_107 == ((unsigned short int) var_1_89))
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

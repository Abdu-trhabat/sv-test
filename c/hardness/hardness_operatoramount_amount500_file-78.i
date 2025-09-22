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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch78Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 100;
unsigned short int var_1_3 = 63223;
unsigned short int var_1_4 = 63229;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 256;
unsigned short int var_1_7 = 10;
double var_1_8 = 128.85;
double var_1_9 = 25.5;
double var_1_10 = 4.4;
signed char var_1_11 = -10;
signed char var_1_13 = -50;
signed char var_1_14 = 64;
signed char var_1_15 = 4;
signed char var_1_16 = 32;
signed char var_1_17 = 4;
unsigned long int var_1_18 = 8;
signed char var_1_19 = 5;
signed char var_1_20 = -32;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned short int var_1_23 = 256;
unsigned short int var_1_24 = 25077;
unsigned short int var_1_25 = 26285;
unsigned short int var_1_26 = 24677;
unsigned short int var_1_27 = 30160;
signed short int var_1_30 = -5;
signed char var_1_31 = -2;
double var_1_32 = 32.7;
double var_1_33 = 5.6;
double var_1_34 = 99999999999.5;
signed short int var_1_35 = 10;
unsigned long int var_1_36 = 4;
signed short int var_1_37 = 4;
unsigned long int var_1_38 = 2651619693;
unsigned long int var_1_39 = 1890430680;
unsigned long int var_1_40 = 1809508209;
unsigned long int var_1_41 = 64;
unsigned long int var_1_42 = 3590472039;
unsigned long int var_1_43 = 64;
unsigned short int var_1_44 = 8;
signed char var_1_45 = 16;
signed char var_1_46 = 32;
signed char var_1_47 = 32;
signed char var_1_48 = 2;
signed char var_1_49 = -16;
signed char var_1_52 = 64;
signed long int var_1_53 = -5;
signed long int var_1_54 = 1838890597;
double var_1_55 = -0.85;
double var_1_56 = 999999999.4;
double var_1_57 = 10.3;
double var_1_58 = 3.25;
double var_1_59 = 32.6;
double var_1_60 = 4.5;
double var_1_61 = 7.75;
unsigned short int var_1_62 = 200;
unsigned short int var_1_63 = 10000;
unsigned short int var_1_64 = 10000;
float var_1_65 = 100000000.6;
float var_1_66 = 0.0;
double var_1_67 = 999999999.5;
unsigned char var_1_68 = 100;
unsigned char var_1_69 = 32;
unsigned char var_1_70 = 5;
signed short int var_1_71 = -4;
float var_1_72 = 3.75;
unsigned short int var_1_74 = 4;
float var_1_75 = 16.75;
float var_1_76 = 9.25;
signed short int var_1_77 = 16;
signed short int var_1_78 = 32;
signed char var_1_79 = 1;
unsigned short int var_1_80 = 1;
unsigned short int var_1_81 = 500;
unsigned char var_1_82 = 1;
unsigned char var_1_83 = 0;
unsigned long int var_1_84 = 5;
signed short int var_1_85 = -128;
unsigned long int var_1_88 = 10000000;
double var_1_89 = 4.25;
double var_1_90 = 0.0;
double var_1_91 = 31.4;
unsigned char var_1_92 = 1;
double var_1_93 = 64.6;
unsigned char var_1_94 = 0;
unsigned short int var_1_95 = 200;
signed char var_1_96 = -2;
signed char var_1_98 = -5;
unsigned char var_1_99 = 1;
signed long int var_1_100 = -64;
unsigned long int var_1_101 = 128;
unsigned char var_1_102 = 0;
float var_1_103 = 50.92;
unsigned char var_1_104 = 0;
unsigned short int var_1_105 = 16;
double var_1_106 = 15.5;
unsigned char var_1_107 = 10;
double var_1_108 = 1.4;
unsigned short int last_1_var_1_1 = 100;
unsigned short int last_1_var_1_23 = 256;
unsigned long int last_1_var_1_36 = 4;
unsigned short int last_1_var_1_44 = 8;
signed long int last_1_var_1_53 = -5;
unsigned long int last_1_var_1_88 = 10000000;
double last_1_var_1_89 = 4.25;
unsigned short int last_1_var_1_95 = 200;
unsigned char last_1_var_1_99 = 1;
signed long int last_1_var_1_100 = -64;
unsigned char last_1_var_1_104 = 0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_9 = (((var_1_15) < (last_1_var_1_36)) ? (var_1_15) : (last_1_var_1_36));
 unsigned long int stepLocal_8 = last_1_var_1_44 - (last_1_var_1_36 + last_1_var_1_44);
 signed char stepLocal_7 = var_1_13;
 if (stepLocal_7 <= (var_1_17 - var_1_15)) {
  if (stepLocal_9 >= ((last_1_var_1_44 + var_1_20) + var_1_26)) {
   var_1_35 = var_1_15;
  }
 } else {
  if ((((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))) << last_1_var_1_53) < stepLocal_8) {
   var_1_35 = var_1_20;
  } else {
   var_1_35 = last_1_var_1_1;
  }
 }
 unsigned char stepLocal_5 = (-1 - 64) <= (var_1_17 * last_1_var_1_95);
 if (last_1_var_1_99) {
  if (last_1_var_1_104 || stepLocal_5) {
   var_1_21 = var_1_22;
  } else {
   var_1_21 = 0;
  }
 }
 if (var_1_21) {
  var_1_81 = ((((32) > (1)) ? (32) : (1)));
 }
 signed char stepLocal_4 = var_1_17;
 signed long int stepLocal_3 = last_1_var_1_100 / var_1_3;
 if (((var_1_4 / var_1_19) ^ (var_1_16 / var_1_20)) < stepLocal_3) {
  var_1_18 = (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + (var_1_4 + (var_1_17 + var_1_15)));
 } else {
  if ((- var_1_6) >= stepLocal_4) {
   var_1_18 = (((((var_1_17 + var_1_7)) < ((last_1_var_1_23 + var_1_6))) ? ((var_1_17 + var_1_7)) : ((last_1_var_1_23 + var_1_6))));
  } else {
   var_1_18 = ((((((((var_1_15) > (last_1_var_1_23)) ? (var_1_15) : (last_1_var_1_23)))) < (var_1_5)) ? (((((var_1_15) > (last_1_var_1_23)) ? (var_1_15) : (last_1_var_1_23)))) : (var_1_5)));
  }
 }
 signed long int stepLocal_1 = var_1_4 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 signed long int stepLocal_0 = 10;
 if (! var_1_21) {
  var_1_1 = (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) - (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7));
 } else {
  if (var_1_6 <= stepLocal_1) {
   if (var_1_4 <= stepLocal_0) {
    var_1_1 = (var_1_4 - var_1_6);
   }
  } else {
   if (var_1_21) {
    var_1_1 = (((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) < 0 ) ? -((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) : ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))));
   } else {
    var_1_1 = (1 + (27338 - var_1_7));
   }
  }
 }
 if ((9.999999999353E9 - var_1_32) < (var_1_33 - var_1_34)) {
  var_1_31 = ((((var_1_16) > (((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) < (var_1_14)) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (var_1_14))))) ? (var_1_16) : (((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) < (var_1_14)) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (var_1_14))))));
 }
 signed long int stepLocal_11 = var_1_17 >> var_1_37;
 signed long int stepLocal_10 = var_1_5 + var_1_37;
 if (stepLocal_11 > (var_1_16 & var_1_19)) {
  var_1_36 = (var_1_38 - var_1_3);
 } else {
  if (var_1_38 >= stepLocal_10) {
   var_1_36 = (((var_1_39 + var_1_40) - var_1_26) - var_1_37);
  } else {
   var_1_36 = ((var_1_25 + ((((var_1_15) < (32u)) ? (var_1_15) : (32u)))) + (var_1_39 - var_1_5));
  }
 }
 unsigned long int stepLocal_12 = var_1_42;
 if (var_1_33 > (var_1_32 + var_1_10)) {
  if (! (var_1_34 <= var_1_10)) {
   var_1_45 = (var_1_37 + -1);
  } else {
   if (stepLocal_12 > var_1_17) {
    var_1_45 = (var_1_46 + var_1_37);
   } else {
    var_1_45 = var_1_46;
   }
  }
 } else {
  var_1_45 = ((var_1_37 + ((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48)))) - 10);
 }
 var_1_62 = (var_1_24 + ((var_1_63 + var_1_64) - (var_1_37 + var_1_17)));
 signed char stepLocal_13 = var_1_13;
 if (stepLocal_13 <= var_1_81) {
  var_1_65 = ((var_1_66 - var_1_58) - var_1_61);
 } else {
  var_1_65 = ((((((127.6f) < (var_1_58)) ? (127.6f) : (var_1_58))) - ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) + (9.75f - 24.4f));
 }
 var_1_67 = ((((var_1_56) > (128.04)) ? (var_1_56) : (128.04)));
 if (! var_1_22) {
  var_1_68 = (var_1_47 + (var_1_37 + (var_1_69 - var_1_70)));
 }
 if (var_1_26 < (8 << var_1_5)) {
  var_1_79 = (var_1_47 + (((((var_1_69 - 5)) < (var_1_70)) ? ((var_1_69 - 5)) : (var_1_70))));
 }
 var_1_99 = var_1_94;
 var_1_102 = var_1_22;
 if (var_1_99) {
  var_1_103 = var_1_9;
 }
 if (var_1_99) {
  var_1_104 = var_1_22;
 }
 if (var_1_99) {
  var_1_105 = var_1_64;
 } else {
  var_1_105 = var_1_47;
 }
 if (var_1_104) {
  var_1_106 = var_1_58;
 } else {
  var_1_106 = var_1_91;
 }
 if (var_1_102) {
  var_1_107 = var_1_15;
 }
 if ((~ var_1_18) >= var_1_15) {
  var_1_23 = ((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) + var_1_26) - (((((var_1_27 - var_1_15)) > (var_1_5)) ? ((var_1_27 - var_1_15)) : (var_1_5))));
 } else {
  if (var_1_107 > ((var_1_26 % var_1_20) + var_1_105)) {
   var_1_23 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  } else {
   var_1_23 = (var_1_4 - var_1_15);
  }
 }
 if (var_1_106 > var_1_9) {
  if (var_1_104) {
   if (var_1_99) {
    var_1_11 = var_1_13;
   } else {
    var_1_11 = (var_1_14 - var_1_15);
   }
  } else {
   var_1_11 = ((((var_1_15) < ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))) ? (var_1_15) : ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))));
  }
 }
 if (var_1_99) {
  var_1_55 = (((((var_1_9 + var_1_56)) < (var_1_10)) ? ((var_1_9 + var_1_56)) : (var_1_10)));
 } else {
  var_1_55 = (((((var_1_56 + (var_1_57 - var_1_58))) < ((((((var_1_59) < (var_1_60)) ? (var_1_59) : (var_1_60))) - var_1_61))) ? ((var_1_56 + (var_1_57 - var_1_58))) : ((((((var_1_59) < (var_1_60)) ? (var_1_59) : (var_1_60))) - var_1_61))));
 }
 unsigned long int stepLocal_23 = var_1_38 - ((((var_1_40) > (var_1_17)) ? (var_1_40) : (var_1_17)));
 unsigned char stepLocal_22 = var_1_99;
 unsigned short int stepLocal_21 = var_1_6;
 unsigned short int stepLocal_20 = var_1_5;
 if (stepLocal_20 == (var_1_7 * var_1_40)) {
  if (stepLocal_23 >= var_1_69) {
   if (((- var_1_61) + (var_1_60 / var_1_66)) > var_1_9) {
    var_1_80 = (((((var_1_7 + var_1_64) < 0 ) ? -(var_1_7 + var_1_64) : (var_1_7 + var_1_64))) + ((((10) < 0 ) ? -(10) : (10))));
   }
  } else {
   var_1_80 = (((((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) - 10)) > (1)) ? ((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) - 10)) : (1)));
  }
 } else {
  if (stepLocal_21 < var_1_24) {
   var_1_80 = (var_1_26 + var_1_27);
  } else {
   if (var_1_104 && stepLocal_22) {
    var_1_80 = 128;
   } else {
    var_1_80 = (var_1_64 + var_1_62);
   }
  }
 }
 unsigned long int stepLocal_26 = var_1_36 * (var_1_38 - var_1_24);
 unsigned long int stepLocal_25 = ((((var_1_19 ^ var_1_40)) > ((var_1_37 ^ 64))) ? ((var_1_19 ^ var_1_40)) : ((var_1_37 ^ 64)));
 if (stepLocal_25 <= var_1_69) {
  var_1_89 = (((var_1_90 - var_1_91) - 99.1) + (((((var_1_57 - var_1_76)) > (var_1_75)) ? ((var_1_57 - var_1_76)) : (var_1_75))));
 } else {
  if (stepLocal_26 <= ((var_1_63 + var_1_80) / var_1_39)) {
   if (last_1_var_1_89 >= var_1_61) {
    var_1_89 = (var_1_91 + var_1_9);
   } else {
    var_1_89 = ((((999.94) > (((var_1_66 - var_1_91) - var_1_57))) ? (999.94) : (((var_1_66 - var_1_91) - var_1_57))));
   }
  }
 }
 if (var_1_90 < (var_1_60 - (var_1_57 + var_1_93))) {
  if (var_1_104 || var_1_83) {
   var_1_92 = (var_1_102 && var_1_22);
  } else {
   var_1_92 = (! var_1_22);
  }
 } else {
  var_1_92 = (! var_1_94);
 }
 if (var_1_104) {
  var_1_96 = var_1_13;
 }
 if (var_1_99) {
  var_1_98 = var_1_70;
 }
 if (var_1_92) {
  var_1_101 = var_1_15;
 } else {
  var_1_101 = var_1_42;
 }
 unsigned long int stepLocal_28 = var_1_36;
 signed long int stepLocal_27 = var_1_62 >> var_1_37;
 if (var_1_70 <= stepLocal_27) {
  if ((((((var_1_74 + var_1_5)) > ((5 + var_1_101))) ? ((var_1_74 + var_1_5)) : ((5 + var_1_101)))) < stepLocal_28) {
   var_1_108 = var_1_60;
  } else {
   var_1_108 = var_1_93;
  }
 } else {
  var_1_108 = var_1_9;
 }
 if (var_1_104) {
  if (var_1_101 <= (var_1_42 + var_1_4)) {
   var_1_88 = ((4u + var_1_81) + last_1_var_1_88);
  } else {
   var_1_88 = (var_1_3 + ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))));
  }
 }
 if (var_1_39 != ((var_1_40 + 1986911169u) - var_1_26)) {
  var_1_41 = (((((var_1_24 + var_1_7)) > (var_1_36)) ? ((var_1_24 + var_1_7)) : (var_1_36)));
 } else {
  if (var_1_22) {
   if (var_1_36 >= -4) {
    if (var_1_92) {
     var_1_41 = ((var_1_42 - var_1_25) - var_1_43);
    } else {
     var_1_41 = (var_1_42 - 128u);
    }
   }
  } else {
   var_1_41 = var_1_3;
  }
 }
 if (var_1_92) {
  var_1_77 = ((((var_1_64) < (var_1_74)) ? (var_1_64) : (var_1_74)));
 } else {
  var_1_77 = var_1_68;
 }
 unsigned long int stepLocal_24 = (((var_1_5) > (var_1_41)) ? (var_1_5) : (var_1_41));
 if (var_1_15 != stepLocal_24) {
  var_1_82 = ((var_1_104 && var_1_22) || var_1_83);
 }
 if ((var_1_37 / var_1_27) >= var_1_13) {
  if ((var_1_35 >> var_1_37) != (var_1_25 << var_1_41)) {
   var_1_78 = (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + var_1_64);
  }
 } else {
  var_1_78 = (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) + var_1_69);
 }
 if (var_1_33 >= (- var_1_108)) {
  var_1_84 = (2927692685u - ((((4u) < ((var_1_54 - var_1_81))) ? (4u) : ((var_1_54 - var_1_81)))));
 } else {
  var_1_84 = ((((var_1_40) < ((var_1_88 + var_1_69))) ? (var_1_40) : ((var_1_88 + var_1_69))));
 }
 if (var_1_59 <= var_1_106) {
  var_1_85 = (((((((((var_1_64 + var_1_84)) < (var_1_14)) ? ((var_1_64 + var_1_84)) : (var_1_14)))) > (var_1_101)) ? ((((((var_1_64 + var_1_84)) < (var_1_14)) ? ((var_1_64 + var_1_84)) : (var_1_14)))) : (var_1_101)));
 } else {
  if (var_1_64 > var_1_4) {
   var_1_85 = ((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19)));
  }
 }
 if (var_1_21 || (var_1_26 < (var_1_18 | var_1_7))) {
  if ((var_1_41 <= var_1_69) || var_1_22) {
   if (var_1_85 >= (var_1_47 * var_1_23)) {
    var_1_95 = (var_1_24 + var_1_70);
   }
  } else {
   var_1_95 = var_1_74;
  }
 } else {
  var_1_95 = var_1_27;
 }
 var_1_100 = var_1_84;
 if (var_1_82) {
  if (((5 & var_1_18) * var_1_25) != (var_1_41 + var_1_42)) {
   if (var_1_25 < var_1_88) {
    var_1_49 = ((((var_1_15) > (((((var_1_17) > (var_1_37)) ? (var_1_17) : (var_1_37))))) ? (var_1_15) : (((((var_1_17) > (var_1_37)) ? (var_1_17) : (var_1_37))))));
   } else {
    if (var_1_102 && (var_1_42 != var_1_18)) {
     var_1_49 = -5;
    } else {
     if (var_1_34 == (((((var_1_32 - 63.74)) > (var_1_108)) ? ((var_1_32 - 63.74)) : (var_1_108)))) {
      var_1_49 = (((((var_1_37 + var_1_47)) > (var_1_46)) ? ((var_1_37 + var_1_47)) : (var_1_46)));
     } else {
      var_1_49 = ((((((var_1_47) < (var_1_37)) ? (var_1_47) : (var_1_37))) + var_1_48) - var_1_17);
     }
    }
   }
  } else {
   var_1_49 = (var_1_47 - var_1_17);
  }
 } else {
  var_1_49 = (var_1_52 - var_1_47);
 }
 if (var_1_9 != ((var_1_32 - var_1_34) + var_1_10)) {
  if ((var_1_32 * var_1_10) >= var_1_9) {
   var_1_53 = (last_1_var_1_53 + -10);
  } else {
   if (var_1_26 >= var_1_25) {
    if (var_1_22) {
     var_1_53 = ((((var_1_5) < (((((var_1_18) > (((((5) < 0 ) ? -(5) : (5))))) ? (var_1_18) : (((((5) < 0 ) ? -(5) : (5)))))))) ? (var_1_5) : (((((var_1_18) > (((((5) < 0 ) ? -(5) : (5))))) ? (var_1_18) : (((((5) < 0 ) ? -(5) : (5)))))))));
    } else {
     var_1_53 = (((((((((var_1_14) > (var_1_88)) ? (var_1_14) : (var_1_88)))) > (var_1_27)) ? (((((var_1_14) > (var_1_88)) ? (var_1_14) : (var_1_88)))) : (var_1_27))) - (var_1_54 - ((((var_1_77) < (var_1_17)) ? (var_1_77) : (var_1_17)))));
    }
   } else {
    if (var_1_21) {
     var_1_53 = ((((var_1_48 + var_1_5) < 0 ) ? -(var_1_48 + var_1_5) : (var_1_48 + var_1_5)));
    }
   }
  }
 } else {
  var_1_53 = (var_1_4 + var_1_27);
 }
 unsigned short int stepLocal_19 = var_1_95;
 signed short int stepLocal_18 = var_1_37;
 unsigned long int stepLocal_17 = var_1_41;
 unsigned char stepLocal_16 = var_1_99;
 unsigned long int stepLocal_15 = 128u;
 if (! var_1_99) {
  if ((var_1_41 / var_1_69) != stepLocal_15) {
   if (var_1_9 <= var_1_89) {
    if (var_1_23 <= stepLocal_18) {
     if (stepLocal_19 < ((var_1_47 + var_1_69) << (var_1_37 + var_1_74))) {
      if (var_1_4 <= stepLocal_17) {
       var_1_72 = ((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) + var_1_57) - var_1_66);
      } else {
       var_1_72 = var_1_9;
      }
     } else {
      if (stepLocal_16 && var_1_102) {
       var_1_72 = (var_1_59 - var_1_66);
      } else {
       var_1_72 = (((((var_1_56 + var_1_9)) < (999999.9f)) ? ((var_1_56 + var_1_9)) : (999999.9f)));
      }
     }
    } else {
     var_1_72 = ((((var_1_56) > ((var_1_9 + var_1_58))) ? (var_1_56) : ((var_1_9 + var_1_58))));
    }
   } else {
    var_1_72 = ((var_1_57 - var_1_58) + (var_1_75 - var_1_76));
   }
  } else {
   var_1_72 = ((((var_1_58) > (var_1_10)) ? (var_1_58) : (var_1_10)));
  }
 }
 var_1_44 = (var_1_4 - (var_1_25 - ((((var_1_37) > (var_1_78)) ? (var_1_37) : (var_1_78)))));
 unsigned short int stepLocal_2 = var_1_7;
 if (stepLocal_2 >= var_1_44) {
  var_1_8 = (((((var_1_9 + 32.9)) > (100000.5)) ? ((var_1_9 + 32.9)) : (100000.5)));
 } else {
  var_1_8 = var_1_10;
 }
 signed short int stepLocal_14 = var_1_37;
 if (var_1_104) {
  var_1_71 = var_1_80;
 } else {
  if (var_1_16 <= stepLocal_14) {
   var_1_71 = (var_1_44 + ((var_1_15 + var_1_80) - ((((var_1_69) < (var_1_47)) ? (var_1_69) : (var_1_47)))));
  }
 }
 signed char stepLocal_6 = var_1_16;
 if (stepLocal_6 >= ((((-64) < (((((var_1_88) < (var_1_4)) ? (var_1_88) : (var_1_4))))) ? (-64) : (((((var_1_88) < (var_1_4)) ? (var_1_88) : (var_1_4))))))) {
  var_1_30 = (var_1_17 + var_1_16);
 } else {
  if (var_1_92) {
   if (var_1_9 <= var_1_106) {
    var_1_30 = var_1_17;
   } else {
    if (! (var_1_104 || var_1_22)) {
     var_1_30 = var_1_71;
    } else {
     var_1_30 = (var_1_20 + -5);
    }
   }
  } else {
   var_1_30 = (((((((((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6))) < 0 ) ? -((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6))) : ((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6)))))) > ((var_1_13 + var_1_17))) ? ((((((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6))) < 0 ) ? -((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6))) : ((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6)))))) : ((var_1_13 + var_1_17))));
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 32767);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 32767);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16384);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16384);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -128);
 assume_abort_if_not(var_1_19 <= 127);
 assume_abort_if_not(var_1_19 != 0);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -128);
 assume_abort_if_not(var_1_20 <= 127);
 assume_abort_if_not(var_1_20 != 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 16383);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 16383);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 16384);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 16383);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 6);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 1610612735);
 assume_abort_if_not(var_1_39 <= 2147483647);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1610612735);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 3221225470);
 assume_abort_if_not(var_1_42 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 2147483647);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -63);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -1);
 assume_abort_if_not(var_1_52 <= 126);
 var_1_54 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_54 >= 1073741823);
 assume_abort_if_not(var_1_54 <= 2147483646);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= -461168.6018427383000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854766000e+12F && var_1_61 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 8191);
 assume_abort_if_not(var_1_63 <= 16384);
 var_1_64 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_64 >= 8192);
 assume_abort_if_not(var_1_64 <= 16383);
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= 4611686.018427383000e+12F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854766000e+12F && var_1_66 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 31);
 assume_abort_if_not(var_1_69 <= 63);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 31);
 var_1_74 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 12);
 var_1_75 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427383000e+12F && var_1_75 >= 1.0e-20F ));
 var_1_76 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 4611686.018427383000e+12F && var_1_76 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 0);
 assume_abort_if_not(var_1_83 <= 0);
 var_1_90 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_90 >= 2305843.009213691400e+12F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 4611686.018427383000e+12F && var_1_90 >= 1.0e-20F ));
 var_1_91 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_91 >= 0.0F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 2305843.009213691400e+12F && var_1_91 >= 1.0e-20F ));
 var_1_93 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_93 >= 0.0F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 4611686.018427388000e+12F && var_1_93 >= 1.0e-20F ));
 var_1_94 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_94 >= 1);
 assume_abort_if_not(var_1_94 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_104 = var_1_104;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((! var_1_21) ? (var_1_1 == ((unsigned short int) (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) - (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7)))) : ((var_1_6 <= (var_1_4 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? ((var_1_4 <= 10) ? (var_1_1 == ((unsigned short int) (var_1_4 - var_1_6))) : 1) : (var_1_21 ? (var_1_1 == ((unsigned short int) (((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) < 0 ) ? -((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) : ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))))) : (var_1_1 == ((unsigned short int) (1 + (27338 - var_1_7))))))) && ((var_1_7 >= var_1_44) ? (var_1_8 == ((double) (((((var_1_9 + 32.9)) > (100000.5)) ? ((var_1_9 + 32.9)) : (100000.5))))) : (var_1_8 == ((double) var_1_10)))) && ((var_1_106 > var_1_9) ? (var_1_104 ? (var_1_99 ? (var_1_11 == ((signed char) var_1_13)) : (var_1_11 == ((signed char) (var_1_14 - var_1_15)))) : (var_1_11 == ((signed char) ((((var_1_15) < ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))) ? (var_1_15) : ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))))))) : 1)) && ((((var_1_4 / var_1_19) ^ (var_1_16 / var_1_20)) < (last_1_var_1_100 / var_1_3)) ? (var_1_18 == ((unsigned long int) (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + (var_1_4 + (var_1_17 + var_1_15))))) : (((- var_1_6) >= var_1_17) ? (var_1_18 == ((unsigned long int) (((((var_1_17 + var_1_7)) < ((last_1_var_1_23 + var_1_6))) ? ((var_1_17 + var_1_7)) : ((last_1_var_1_23 + var_1_6)))))) : (var_1_18 == ((unsigned long int) ((((((((var_1_15) > (last_1_var_1_23)) ? (var_1_15) : (last_1_var_1_23)))) < (var_1_5)) ? (((((var_1_15) > (last_1_var_1_23)) ? (var_1_15) : (last_1_var_1_23)))) : (var_1_5)))))))) && (last_1_var_1_99 ? ((last_1_var_1_104 || ((-1 - 64) <= (var_1_17 * last_1_var_1_95))) ? (var_1_21 == ((unsigned char) var_1_22)) : (var_1_21 == ((unsigned char) 0))) : 1)) && (((~ var_1_18) >= var_1_15) ? (var_1_23 == ((unsigned short int) ((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) + var_1_26) - (((((var_1_27 - var_1_15)) > (var_1_5)) ? ((var_1_27 - var_1_15)) : (var_1_5)))))) : ((var_1_107 > ((var_1_26 % var_1_20) + var_1_105)) ? (var_1_23 == ((unsigned short int) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_23 == ((unsigned short int) (var_1_4 - var_1_15)))))) && ((var_1_16 >= ((((-64) < (((((var_1_88) < (var_1_4)) ? (var_1_88) : (var_1_4))))) ? (-64) : (((((var_1_88) < (var_1_4)) ? (var_1_88) : (var_1_4))))))) ? (var_1_30 == ((signed short int) (var_1_17 + var_1_16))) : (var_1_92 ? ((var_1_9 <= var_1_106) ? (var_1_30 == ((signed short int) var_1_17)) : ((! (var_1_104 || var_1_22)) ? (var_1_30 == ((signed short int) var_1_71)) : (var_1_30 == ((signed short int) (var_1_20 + -5))))) : (var_1_30 == ((signed short int) (((((((((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6))) < 0 ) ? -((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6))) : ((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6)))))) > ((var_1_13 + var_1_17))) ? ((((((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6))) < 0 ) ? -((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6))) : ((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6)))))) : ((var_1_13 + var_1_17))))))))) && (((9.999999999353E9 - var_1_32) < (var_1_33 - var_1_34)) ? (var_1_31 == ((signed char) ((((var_1_16) > (((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) < (var_1_14)) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (var_1_14))))) ? (var_1_16) : (((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) < (var_1_14)) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (var_1_14)))))))) : 1)) && ((var_1_13 <= (var_1_17 - var_1_15)) ? ((((((var_1_15) < (last_1_var_1_36)) ? (var_1_15) : (last_1_var_1_36))) >= ((last_1_var_1_44 + var_1_20) + var_1_26)) ? (var_1_35 == ((signed short int) var_1_15)) : 1) : (((((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))) << last_1_var_1_53) < (last_1_var_1_44 - (last_1_var_1_36 + last_1_var_1_44))) ? (var_1_35 == ((signed short int) var_1_20)) : (var_1_35 == ((signed short int) last_1_var_1_1))))) && (((var_1_17 >> var_1_37) > (var_1_16 & var_1_19)) ? (var_1_36 == ((unsigned long int) (var_1_38 - var_1_3))) : ((var_1_38 >= (var_1_5 + var_1_37)) ? (var_1_36 == ((unsigned long int) (((var_1_39 + var_1_40) - var_1_26) - var_1_37))) : (var_1_36 == ((unsigned long int) ((var_1_25 + ((((var_1_15) < (32u)) ? (var_1_15) : (32u)))) + (var_1_39 - var_1_5))))))) && ((var_1_39 != ((var_1_40 + 1986911169u) - var_1_26)) ? (var_1_41 == ((unsigned long int) (((((var_1_24 + var_1_7)) > (var_1_36)) ? ((var_1_24 + var_1_7)) : (var_1_36))))) : (var_1_22 ? ((var_1_36 >= -4) ? (var_1_92 ? (var_1_41 == ((unsigned long int) ((var_1_42 - var_1_25) - var_1_43))) : (var_1_41 == ((unsigned long int) (var_1_42 - 128u)))) : 1) : (var_1_41 == ((unsigned long int) var_1_3))))) && (var_1_44 == ((unsigned short int) (var_1_4 - (var_1_25 - ((((var_1_37) > (var_1_78)) ? (var_1_37) : (var_1_78)))))))) && ((var_1_33 > (var_1_32 + var_1_10)) ? ((! (var_1_34 <= var_1_10)) ? (var_1_45 == ((signed char) (var_1_37 + -1))) : ((var_1_42 > var_1_17) ? (var_1_45 == ((signed char) (var_1_46 + var_1_37))) : (var_1_45 == ((signed char) var_1_46)))) : (var_1_45 == ((signed char) ((var_1_37 + ((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48)))) - 10))))) && (var_1_82 ? ((((5 & var_1_18) * var_1_25) != (var_1_41 + var_1_42)) ? ((var_1_25 < var_1_88) ? (var_1_49 == ((signed char) ((((var_1_15) > (((((var_1_17) > (var_1_37)) ? (var_1_17) : (var_1_37))))) ? (var_1_15) : (((((var_1_17) > (var_1_37)) ? (var_1_17) : (var_1_37)))))))) : ((var_1_102 && (var_1_42 != var_1_18)) ? (var_1_49 == ((signed char) -5)) : ((var_1_34 == (((((var_1_32 - 63.74)) > (var_1_108)) ? ((var_1_32 - 63.74)) : (var_1_108)))) ? (var_1_49 == ((signed char) (((((var_1_37 + var_1_47)) > (var_1_46)) ? ((var_1_37 + var_1_47)) : (var_1_46))))) : (var_1_49 == ((signed char) ((((((var_1_47) < (var_1_37)) ? (var_1_47) : (var_1_37))) + var_1_48) - var_1_17)))))) : (var_1_49 == ((signed char) (var_1_47 - var_1_17)))) : (var_1_49 == ((signed char) (var_1_52 - var_1_47))))) && ((var_1_9 != ((var_1_32 - var_1_34) + var_1_10)) ? (((var_1_32 * var_1_10) >= var_1_9) ? (var_1_53 == ((signed long int) (last_1_var_1_53 + -10))) : ((var_1_26 >= var_1_25) ? (var_1_22 ? (var_1_53 == ((signed long int) ((((var_1_5) < (((((var_1_18) > (((((5) < 0 ) ? -(5) : (5))))) ? (var_1_18) : (((((5) < 0 ) ? -(5) : (5)))))))) ? (var_1_5) : (((((var_1_18) > (((((5) < 0 ) ? -(5) : (5))))) ? (var_1_18) : (((((5) < 0 ) ? -(5) : (5))))))))))) : (var_1_53 == ((signed long int) (((((((((var_1_14) > (var_1_88)) ? (var_1_14) : (var_1_88)))) > (var_1_27)) ? (((((var_1_14) > (var_1_88)) ? (var_1_14) : (var_1_88)))) : (var_1_27))) - (var_1_54 - ((((var_1_77) < (var_1_17)) ? (var_1_77) : (var_1_17)))))))) : (var_1_21 ? (var_1_53 == ((signed long int) ((((var_1_48 + var_1_5) < 0 ) ? -(var_1_48 + var_1_5) : (var_1_48 + var_1_5))))) : 1))) : (var_1_53 == ((signed long int) (var_1_4 + var_1_27))))) && (var_1_99 ? (var_1_55 == ((double) (((((var_1_9 + var_1_56)) < (var_1_10)) ? ((var_1_9 + var_1_56)) : (var_1_10))))) : (var_1_55 == ((double) (((((var_1_56 + (var_1_57 - var_1_58))) < ((((((var_1_59) < (var_1_60)) ? (var_1_59) : (var_1_60))) - var_1_61))) ? ((var_1_56 + (var_1_57 - var_1_58))) : ((((((var_1_59) < (var_1_60)) ? (var_1_59) : (var_1_60))) - var_1_61)))))))) && (var_1_62 == ((unsigned short int) (var_1_24 + ((var_1_63 + var_1_64) - (var_1_37 + var_1_17)))))) && ((var_1_13 <= var_1_81) ? (var_1_65 == ((float) ((var_1_66 - var_1_58) - var_1_61))) : (var_1_65 == ((float) ((((((127.6f) < (var_1_58)) ? (127.6f) : (var_1_58))) - ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) + (9.75f - 24.4f)))))) && (var_1_67 == ((double) ((((var_1_56) > (128.04)) ? (var_1_56) : (128.04)))))) && ((! var_1_22) ? (var_1_68 == ((unsigned char) (var_1_47 + (var_1_37 + (var_1_69 - var_1_70))))) : 1)) && (var_1_104 ? (var_1_71 == ((signed short int) var_1_80)) : ((var_1_16 <= var_1_37) ? (var_1_71 == ((signed short int) (var_1_44 + ((var_1_15 + var_1_80) - ((((var_1_69) < (var_1_47)) ? (var_1_69) : (var_1_47))))))) : 1))) && ((! var_1_99) ? (((var_1_41 / var_1_69) != 128u) ? ((var_1_9 <= var_1_89) ? ((var_1_23 <= var_1_37) ? ((var_1_95 < ((var_1_47 + var_1_69) << (var_1_37 + var_1_74))) ? ((var_1_4 <= var_1_41) ? (var_1_72 == ((float) ((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) + var_1_57) - var_1_66))) : (var_1_72 == ((float) var_1_9))) : ((var_1_99 && var_1_102) ? (var_1_72 == ((float) (var_1_59 - var_1_66))) : (var_1_72 == ((float) (((((var_1_56 + var_1_9)) < (999999.9f)) ? ((var_1_56 + var_1_9)) : (999999.9f))))))) : (var_1_72 == ((float) ((((var_1_56) > ((var_1_9 + var_1_58))) ? (var_1_56) : ((var_1_9 + var_1_58))))))) : (var_1_72 == ((float) ((var_1_57 - var_1_58) + (var_1_75 - var_1_76))))) : (var_1_72 == ((float) ((((var_1_58) > (var_1_10)) ? (var_1_58) : (var_1_10)))))) : 1)) && (var_1_92 ? (var_1_77 == ((signed short int) ((((var_1_64) < (var_1_74)) ? (var_1_64) : (var_1_74))))) : (var_1_77 == ((signed short int) var_1_68)))) && (((var_1_37 / var_1_27) >= var_1_13) ? (((var_1_35 >> var_1_37) != (var_1_25 << var_1_41)) ? (var_1_78 == ((signed short int) (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + var_1_64))) : 1) : (var_1_78 == ((signed short int) (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) + var_1_69))))) && ((var_1_26 < (8 << var_1_5)) ? (var_1_79 == ((signed char) (var_1_47 + (((((var_1_69 - 5)) < (var_1_70)) ? ((var_1_69 - 5)) : (var_1_70)))))) : 1)) && ((var_1_5 == (var_1_7 * var_1_40)) ? (((var_1_38 - ((((var_1_40) > (var_1_17)) ? (var_1_40) : (var_1_17)))) >= var_1_69) ? ((((- var_1_61) + (var_1_60 / var_1_66)) > var_1_9) ? (var_1_80 == ((unsigned short int) (((((var_1_7 + var_1_64) < 0 ) ? -(var_1_7 + var_1_64) : (var_1_7 + var_1_64))) + ((((10) < 0 ) ? -(10) : (10)))))) : 1) : (var_1_80 == ((unsigned short int) (((((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) - 10)) > (1)) ? ((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) - 10)) : (1)))))) : ((var_1_6 < var_1_24) ? (var_1_80 == ((unsigned short int) (var_1_26 + var_1_27))) : ((var_1_104 && var_1_99) ? (var_1_80 == ((unsigned short int) 128)) : (var_1_80 == ((unsigned short int) (var_1_64 + var_1_62))))))) && (var_1_21 ? (var_1_81 == ((unsigned short int) ((((32) > (1)) ? (32) : (1))))) : 1)) && ((var_1_15 != ((((var_1_5) > (var_1_41)) ? (var_1_5) : (var_1_41)))) ? (var_1_82 == ((unsigned char) ((var_1_104 && var_1_22) || var_1_83))) : 1)) && ((var_1_33 >= (- var_1_108)) ? (var_1_84 == ((unsigned long int) (2927692685u - ((((4u) < ((var_1_54 - var_1_81))) ? (4u) : ((var_1_54 - var_1_81))))))) : (var_1_84 == ((unsigned long int) ((((var_1_40) < ((var_1_88 + var_1_69))) ? (var_1_40) : ((var_1_88 + var_1_69)))))))) && ((var_1_59 <= var_1_106) ? (var_1_85 == ((signed short int) (((((((((var_1_64 + var_1_84)) < (var_1_14)) ? ((var_1_64 + var_1_84)) : (var_1_14)))) > (var_1_101)) ? ((((((var_1_64 + var_1_84)) < (var_1_14)) ? ((var_1_64 + var_1_84)) : (var_1_14)))) : (var_1_101))))) : ((var_1_64 > var_1_4) ? (var_1_85 == ((signed short int) ((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19))))) : 1))) && (var_1_104 ? ((var_1_101 <= (var_1_42 + var_1_4)) ? (var_1_88 == ((unsigned long int) ((4u + var_1_81) + last_1_var_1_88))) : (var_1_88 == ((unsigned long int) (var_1_3 + ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))))))) : 1)) && (((((((var_1_19 ^ var_1_40)) > ((var_1_37 ^ 64))) ? ((var_1_19 ^ var_1_40)) : ((var_1_37 ^ 64)))) <= var_1_69) ? (var_1_89 == ((double) (((var_1_90 - var_1_91) - 99.1) + (((((var_1_57 - var_1_76)) > (var_1_75)) ? ((var_1_57 - var_1_76)) : (var_1_75)))))) : (((var_1_36 * (var_1_38 - var_1_24)) <= ((var_1_63 + var_1_80) / var_1_39)) ? ((last_1_var_1_89 >= var_1_61) ? (var_1_89 == ((double) (var_1_91 + var_1_9))) : (var_1_89 == ((double) ((((999.94) > (((var_1_66 - var_1_91) - var_1_57))) ? (999.94) : (((var_1_66 - var_1_91) - var_1_57))))))) : 1))) && ((var_1_90 < (var_1_60 - (var_1_57 + var_1_93))) ? ((var_1_104 || var_1_83) ? (var_1_92 == ((unsigned char) (var_1_102 && var_1_22))) : (var_1_92 == ((unsigned char) (! var_1_22)))) : (var_1_92 == ((unsigned char) (! var_1_94))))) && ((var_1_21 || (var_1_26 < (var_1_18 | var_1_7))) ? (((var_1_41 <= var_1_69) || var_1_22) ? ((var_1_85 >= (var_1_47 * var_1_23)) ? (var_1_95 == ((unsigned short int) (var_1_24 + var_1_70))) : 1) : (var_1_95 == ((unsigned short int) var_1_74))) : (var_1_95 == ((unsigned short int) var_1_27)))) && (var_1_104 ? (var_1_96 == ((signed char) var_1_13)) : 1)) && (var_1_99 ? (var_1_98 == ((signed char) var_1_70)) : 1)) && (var_1_99 == ((unsigned char) var_1_94))) && (var_1_100 == ((signed long int) var_1_84))) && (var_1_92 ? (var_1_101 == ((unsigned long int) var_1_15)) : (var_1_101 == ((unsigned long int) var_1_42)))) && (var_1_102 == ((unsigned char) var_1_22))) && (var_1_99 ? (var_1_103 == ((float) var_1_9)) : 1)) && (var_1_99 ? (var_1_104 == ((unsigned char) var_1_22)) : 1)) && (var_1_99 ? (var_1_105 == ((unsigned short int) var_1_64)) : (var_1_105 == ((unsigned short int) var_1_47)))) && (var_1_104 ? (var_1_106 == ((double) var_1_58)) : (var_1_106 == ((double) var_1_91)))) && (var_1_102 ? (var_1_107 == ((unsigned char) var_1_15)) : 1)) && ((var_1_70 <= (var_1_62 >> var_1_37)) ? (((((((var_1_74 + var_1_5)) > ((5 + var_1_101))) ? ((var_1_74 + var_1_5)) : ((5 + var_1_101)))) < var_1_36) ? (var_1_108 == ((double) var_1_60)) : (var_1_108 == ((double) var_1_93))) : (var_1_108 == ((double) var_1_9)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -128;
double var_1_4 = 99999999999.6;
signed long int var_1_6 = -5;
signed long int var_1_8 = -64;
signed long int var_1_9 = -256;
unsigned long int var_1_10 = 32;
unsigned long int var_1_11 = 256;
unsigned long int var_1_12 = 10;
unsigned long int var_1_13 = 32;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
signed long int var_1_18 = -256;
unsigned long int var_1_19 = 16;
signed long int var_1_20 = 2;
signed long int var_1_21 = 0;
signed char var_1_22 = 1;
signed char var_1_23 = 8;
signed char var_1_24 = 2;
signed char var_1_25 = 4;
signed char var_1_26 = 100;
signed char var_1_27 = 5;
signed char var_1_28 = 4;
unsigned char var_1_29 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
double var_1_33 = 31.65;
unsigned short int var_1_34 = 5;
unsigned char var_1_35 = 64;
double var_1_36 = 256.4;
unsigned char var_1_37 = 128;
signed long int var_1_38 = 256;
signed long int var_1_39 = 10;
double var_1_40 = 8.4;
double var_1_41 = 50.25;
double var_1_42 = 32.2;
double var_1_43 = 100.875;
double var_1_44 = 2.2;
double var_1_45 = 4.7;
double var_1_46 = 10.2;
float var_1_47 = 4.75;
float var_1_48 = 0.0;
double var_1_49 = 15.5;
unsigned char var_1_51 = 10;
double var_1_52 = 63.75;
float var_1_53 = 50.6;
unsigned short int var_1_54 = 10;
double var_1_55 = 999999.5;
unsigned char var_1_56 = 32;
unsigned char var_1_57 = 128;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 64;
unsigned char var_1_60 = 32;
unsigned short int var_1_61 = 32;
signed char var_1_62 = 10;
signed char var_1_63 = 64;
signed char var_1_64 = 100;
signed char var_1_65 = 1;
float var_1_66 = 3.2;
float var_1_68 = 0.0;
float var_1_69 = 0.0;
double var_1_70 = 63.8;
signed long int var_1_71 = 25;
signed short int var_1_72 = 8;
signed char var_1_74 = 8;
signed char var_1_75 = -4;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 8;
unsigned long int var_1_78 = 50;
unsigned long int var_1_79 = 1000000000;
signed short int var_1_80 = 100;
signed short int var_1_81 = 1;
unsigned char var_1_82 = 1;
signed short int var_1_83 = -128;
signed short int var_1_85 = 23025;
unsigned short int var_1_86 = 5;
unsigned short int var_1_88 = 30234;
signed char var_1_89 = -8;
float var_1_91 = -0.6;
float var_1_92 = 128.5;
float var_1_93 = 5.5;
unsigned char var_1_94 = 4;
signed long int var_1_95 = -1000000;
unsigned long int var_1_96 = 0;
signed char var_1_97 = 5;
unsigned long int var_1_99 = 256;
double var_1_100 = 0.06;
double var_1_101 = 0.30000000000000004;
signed long int var_1_102 = -1;
signed short int var_1_103 = -8;
unsigned char var_1_104 = 100;
unsigned char var_1_105 = 25;
unsigned long int var_1_106 = 25;
float var_1_107 = 127.75;
unsigned long int var_1_108 = 64;
double var_1_109 = 1.6;
unsigned char var_1_110 = 100;
unsigned long int var_1_111 = 1000000;
signed char var_1_112 = 64;
unsigned char last_1_var_1_14 = 1;
unsigned char last_1_var_1_32 = 1;
unsigned char last_1_var_1_56 = 32;
unsigned short int last_1_var_1_61 = 32;
double last_1_var_1_70 = 63.8;
unsigned long int last_1_var_1_78 = 50;
signed short int last_1_var_1_80 = 100;
unsigned char last_1_var_1_82 = 1;
signed long int last_1_var_1_95 = -1000000;
unsigned long int last_1_var_1_96 = 0;
unsigned long int last_1_var_1_99 = 256;
double last_1_var_1_100 = 0.06;
unsigned long int last_1_var_1_106 = 25;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_27 = last_1_var_1_95;
 unsigned long int stepLocal_26 = (var_1_13 - var_1_51) * last_1_var_1_56;
 if (-128 <= stepLocal_26) {
  var_1_72 = ((var_1_51 - var_1_64) + (((((var_1_27 + var_1_37)) < (var_1_23)) ? ((var_1_27 + var_1_37)) : (var_1_23))));
 } else {
  if ((var_1_26 - var_1_58) == stepLocal_27) {
   var_1_72 = last_1_var_1_61;
  }
 }
 unsigned long int stepLocal_4 = var_1_13;
 unsigned long int stepLocal_3 = var_1_12;
 if ((((((var_1_11 * last_1_var_1_96)) < (last_1_var_1_99)) ? ((var_1_11 * last_1_var_1_96)) : (last_1_var_1_99))) >= stepLocal_3) {
  if (! last_1_var_1_32) {
   if (-2 >= stepLocal_4) {
    var_1_14 = ((var_1_15 && var_1_16) && var_1_17);
   }
  } else {
   var_1_14 = (! var_1_17);
  }
 }
 if (last_1_var_1_82) {
  var_1_82 = (var_1_31 || (var_1_14 && (! var_1_16)));
 }
 if ((- last_1_var_1_100) >= (last_1_var_1_100 / var_1_4)) {
  if (last_1_var_1_32) {
   var_1_1 = 10;
  }
 }
 var_1_111 = var_1_1;
 signed long int stepLocal_8 = (((last_1_var_1_95) < (var_1_8)) ? (last_1_var_1_95) : (var_1_8));
 unsigned long int stepLocal_7 = (((((((last_1_var_1_96) > (var_1_28)) ? (last_1_var_1_96) : (var_1_28)))) < (last_1_var_1_78)) ? (((((last_1_var_1_96) > (var_1_28)) ? (last_1_var_1_96) : (var_1_28)))) : (last_1_var_1_78));
 if (last_1_var_1_78 >= stepLocal_7) {
  var_1_32 = ((! var_1_31) && var_1_15);
 } else {
  if (last_1_var_1_70 <= ((5.5 - var_1_33) + var_1_4)) {
   if (var_1_23 <= stepLocal_8) {
    var_1_32 = (! var_1_31);
   } else {
    var_1_32 = (last_1_var_1_14 && var_1_31);
   }
  } else {
   var_1_32 = var_1_31;
  }
 }
 signed long int stepLocal_2 = -8;
 signed long int stepLocal_1 = var_1_8;
 signed long int stepLocal_0 = var_1_1;
 if (stepLocal_0 <= var_1_8) {
  if (var_1_1 >= stepLocal_1) {
   if ((var_1_1 * (var_1_9 + var_1_1)) > stepLocal_2) {
    var_1_10 = (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))) + var_1_13);
   } else {
    var_1_10 = (var_1_11 + 32u);
   }
  } else {
   var_1_10 = var_1_12;
  }
 } else {
  var_1_10 = var_1_12;
 }
 if (var_1_32) {
  var_1_106 = last_1_var_1_106;
 }
 if (var_1_31) {
  var_1_34 = ((((var_1_28) < (var_1_26)) ? (var_1_28) : (var_1_26)));
 }
 if (var_1_24 <= ((64 - var_1_27) - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) {
  var_1_38 = (var_1_37 + var_1_23);
 } else {
  var_1_38 = (50 - ((((var_1_27 - var_1_39) < 0 ) ? -(var_1_27 - var_1_39) : (var_1_27 - var_1_39))));
 }
 if (var_1_15) {
  var_1_47 = (var_1_46 - ((var_1_48 - 63.3f) - var_1_43));
 } else {
  if (var_1_42 > var_1_36) {
   var_1_47 = var_1_46;
  }
 }
 unsigned char stepLocal_17 = var_1_16;
 if ((var_1_47 == var_1_48) || stepLocal_17) {
  var_1_53 = (((((((var_1_45) < (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48))))) ? (var_1_45) : (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48)))))) < 0 ) ? -((((var_1_45) < (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48))))) ? (var_1_45) : (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48)))))) : ((((var_1_45) < (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48))))) ? (var_1_45) : (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48))))))));
 }
 var_1_60 = var_1_28;
 var_1_61 = (var_1_60 + ((((var_1_28) < (last_1_var_1_61)) ? (var_1_28) : (last_1_var_1_61))));
 var_1_70 = (var_1_45 + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))));
 if ((~ var_1_39) == 2) {
  var_1_71 = (var_1_58 + var_1_65);
 }
 if (var_1_17) {
  var_1_74 = (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))) - ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))));
 } else {
  if (var_1_39 >= (var_1_37 * var_1_51)) {
   var_1_74 = (var_1_27 + ((((var_1_24) > (var_1_65)) ? (var_1_24) : (var_1_65))));
  }
 }
 signed char stepLocal_28 = var_1_64;
 if (stepLocal_28 >= var_1_111) {
  var_1_76 = (var_1_64 + var_1_77);
 } else {
  var_1_76 = ((((((((var_1_27) > (var_1_26)) ? (var_1_27) : (var_1_26)))) < (var_1_65)) ? (((((var_1_27) > (var_1_26)) ? (var_1_27) : (var_1_26)))) : (var_1_65)));
 }
 signed long int stepLocal_35 = (((var_1_38) > (var_1_28)) ? (var_1_38) : (var_1_28));
 signed char stepLocal_34 = var_1_74;
 if (5.375f > (var_1_42 * ((((var_1_43) < (var_1_41)) ? (var_1_43) : (var_1_41))))) {
  if (var_1_24 == stepLocal_35) {
   if (var_1_64 != stepLocal_34) {
    var_1_86 = (var_1_27 + var_1_10);
   } else {
    var_1_86 = ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)));
   }
  } else {
   var_1_86 = ((25367 + ((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88)))) - var_1_51);
  }
 }
 signed long int stepLocal_36 = var_1_1;
 if (stepLocal_36 < var_1_20) {
  var_1_89 = (((((64) < (var_1_64)) ? (64) : (var_1_64))) - var_1_27);
 } else {
  if (var_1_32) {
   if (var_1_32) {
    var_1_89 = (var_1_65 - var_1_26);
   } else {
    var_1_89 = var_1_26;
   }
  } else {
   var_1_89 = (((((var_1_28) < (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) ? (var_1_28) : (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) - var_1_64);
  }
 }
 var_1_91 = ((var_1_43 - (var_1_92 + var_1_93)) + var_1_45);
 signed long int stepLocal_40 = ~ (var_1_63 / var_1_64);
 if (stepLocal_40 > var_1_37) {
  var_1_95 = ((-64 + ((((var_1_26) > (-64)) ? (var_1_26) : (-64)))) + -2);
 }
 signed long int stepLocal_41 = var_1_65 + var_1_88;
 if (var_1_28 != stepLocal_41) {
  var_1_96 = ((var_1_77 + var_1_71) + var_1_27);
 }
 var_1_102 = 256;
 if (var_1_82) {
  var_1_104 = var_1_63;
 }
 if (var_1_82) {
  var_1_105 = var_1_58;
 } else {
  var_1_105 = var_1_64;
 }
 if (var_1_15) {
  var_1_107 = var_1_68;
 } else {
  var_1_107 = var_1_44;
 }
 if (var_1_16) {
  var_1_108 = var_1_26;
 } else {
  var_1_108 = var_1_95;
 }
 if ((var_1_43 - var_1_33) < var_1_101) {
  var_1_109 = (var_1_44 + (((((9.5) < (var_1_43)) ? (9.5) : (var_1_43))) - var_1_46));
 }
 var_1_110 = var_1_51;
 var_1_112 = var_1_63;
 if (var_1_14) {
  var_1_103 = var_1_72;
 } else {
  var_1_103 = var_1_81;
 }
 if (var_1_82) {
  var_1_100 = var_1_93;
 } else {
  var_1_100 = var_1_101;
 }
 if (var_1_15) {
  var_1_18 = -10000000;
 } else {
  if (var_1_12 <= var_1_71) {
   if (var_1_108 <= ((3837604088u - var_1_19) - ((((var_1_11) < (2u)) ? (var_1_11) : (2u))))) {
    var_1_18 = ((((((((64) < 0 ) ? -(64) : (64)))) < (var_1_9)) ? (((((64) < 0 ) ? -(64) : (64)))) : (var_1_9)));
   } else {
    var_1_18 = (var_1_19 - ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))));
   }
  } else {
   var_1_18 = (64 + var_1_8);
  }
 }
 signed long int stepLocal_5 = (((var_1_1) > ((var_1_20 * var_1_102))) ? (var_1_1) : ((var_1_20 * var_1_102)));
 if (var_1_11 < stepLocal_5) {
  if (var_1_14) {
   var_1_22 = (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))) + var_1_25);
  } else {
   var_1_22 = ((((((64) < (var_1_26)) ? (64) : (var_1_26))) - (32 - var_1_27)) - var_1_28);
  }
 }
 signed long int stepLocal_16 = var_1_39 >> var_1_51;
 signed long int stepLocal_15 = var_1_20;
 signed long int stepLocal_14 = var_1_71;
 if (var_1_82) {
  if (var_1_27 <= stepLocal_14) {
   if (var_1_106 >= stepLocal_16) {
    var_1_49 = (var_1_44 - var_1_45);
   }
  } else {
   if (stepLocal_15 < (var_1_11 / var_1_26)) {
    if (var_1_15) {
     var_1_49 = var_1_45;
    } else {
     var_1_49 = ((((((var_1_42) < (var_1_52)) ? (var_1_42) : (var_1_52))) - var_1_44) + var_1_45);
    }
   }
  }
 } else {
  var_1_49 = (var_1_45 + var_1_44);
 }
 unsigned long int stepLocal_25 = var_1_108;
 if (! (var_1_47 <= var_1_45)) {
  if (var_1_33 > (var_1_43 - var_1_44)) {
   if (var_1_13 <= stepLocal_25) {
    var_1_66 = ((((((var_1_48) > (var_1_68)) ? (var_1_48) : (var_1_68))) - var_1_46) - (var_1_69 - 5.5f));
   } else {
    var_1_66 = ((var_1_44 - var_1_46) + var_1_52);
   }
  } else {
   var_1_66 = (((((var_1_68) < (var_1_44)) ? (var_1_68) : (var_1_44))) - (var_1_69 - var_1_43));
  }
 }
 signed short int stepLocal_45 = var_1_103;
 unsigned char stepLocal_44 = var_1_32;
 unsigned long int stepLocal_43 = var_1_108;
 signed short int stepLocal_42 = var_1_72;
 if (var_1_106 != stepLocal_42) {
  if (stepLocal_45 == var_1_21) {
   var_1_97 = (var_1_26 - (var_1_27 + var_1_51));
  } else {
   var_1_97 = (var_1_51 - 100);
  }
 } else {
  if (stepLocal_44 && var_1_82) {
   if (var_1_82) {
    if (var_1_20 >= stepLocal_43) {
     var_1_97 = var_1_63;
    }
   }
  } else {
   var_1_97 = ((((var_1_63) < ((((((var_1_24 + var_1_27)) > (var_1_28)) ? ((var_1_24 + var_1_27)) : (var_1_28))))) ? (var_1_63) : ((((((var_1_24 + var_1_27)) > (var_1_28)) ? ((var_1_24 + var_1_27)) : (var_1_28))))));
  }
 }
 if (var_1_103 == var_1_1) {
  if ((var_1_103 > var_1_1) && var_1_32) {
   var_1_6 = ((((var_1_103) < (128)) ? (var_1_103) : (128)));
  } else {
   var_1_6 = (((((var_1_103) > (var_1_8)) ? (var_1_103) : (var_1_8))) + var_1_9);
  }
 } else {
  var_1_6 = (var_1_103 + ((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8))));
 }
 signed long int stepLocal_20 = var_1_6;
 signed long int stepLocal_19 = var_1_72 + var_1_71;
 if (stepLocal_20 <= var_1_108) {
  if (stepLocal_19 > var_1_23) {
   var_1_55 = ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44)));
  }
 }
 if ((var_1_46 / var_1_4) < var_1_55) {
  var_1_75 = (var_1_25 + (var_1_27 + var_1_51));
 } else {
  if (var_1_31 || var_1_82) {
   if (! var_1_15) {
    var_1_75 = (var_1_63 - var_1_64);
   } else {
    var_1_75 = ((((((var_1_27 + var_1_65) - var_1_63)) < (-10)) ? (((var_1_27 + var_1_65) - var_1_63)) : (-10)));
   }
  } else {
   var_1_75 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
  }
 }
 unsigned long int stepLocal_46 = var_1_96;
 if (stepLocal_46 < var_1_6) {
  var_1_99 = var_1_77;
 }
 signed long int stepLocal_13 = var_1_9;
 unsigned long int stepLocal_12 = var_1_38 & var_1_108;
 unsigned long int stepLocal_11 = (((var_1_39) < ((var_1_106 | var_1_108))) ? (var_1_39) : ((var_1_106 | var_1_108)));
 unsigned long int stepLocal_10 = var_1_108;
 signed long int stepLocal_9 = var_1_102;
 if (var_1_102 <= stepLocal_11) {
  var_1_40 = var_1_41;
 } else {
  if (stepLocal_9 < var_1_21) {
   if (stepLocal_13 >= var_1_38) {
    if (var_1_99 < stepLocal_12) {
     var_1_40 = ((var_1_42 - ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44)))) + ((((var_1_45 - var_1_46) < 0 ) ? -(var_1_45 - var_1_46) : (var_1_45 - var_1_46))));
    } else {
     var_1_40 = (((((((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43)))) > (var_1_46)) ? (((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43)))) : (var_1_46))) + var_1_42);
    }
   } else {
    var_1_40 = ((((var_1_45) > ((var_1_46 - (3.5 + var_1_44)))) ? (var_1_45) : ((var_1_46 - (3.5 + var_1_44)))));
   }
  } else {
   if ((44452 - (var_1_111 + var_1_26)) <= stepLocal_10) {
    var_1_40 = (((((var_1_42) > (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))) ? (var_1_42) : (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)))))) + var_1_44);
   }
  }
 }
 if ((((((var_1_33) < (var_1_109)) ? (var_1_33) : (var_1_109))) / ((((var_1_4) > (var_1_36)) ? (var_1_4) : (var_1_36)))) < var_1_55) {
  var_1_35 = var_1_27;
 } else {
  if (var_1_16) {
   var_1_35 = ((((var_1_28) > ((var_1_37 - var_1_26))) ? (var_1_28) : ((var_1_37 - var_1_26))));
  }
 }
 unsigned long int stepLocal_18 = (((var_1_99) < (var_1_26)) ? (var_1_99) : (var_1_26));
 if ((var_1_37 * var_1_39) >= stepLocal_18) {
  var_1_54 = var_1_37;
 } else {
  var_1_54 = var_1_26;
 }
 signed long int stepLocal_32 = var_1_58 << var_1_9;
 unsigned char stepLocal_31 = var_1_15;
 unsigned char stepLocal_30 = -1 >= var_1_6;
 if (var_1_27 > stepLocal_32) {
  if (stepLocal_31 || (var_1_49 <= var_1_109)) {
   var_1_80 = var_1_58;
  } else {
   var_1_80 = (((((var_1_59 - (var_1_77 + var_1_58))) < ((((((var_1_63 + last_1_var_1_80)) > ((var_1_111 - var_1_61))) ? ((var_1_63 + last_1_var_1_80)) : ((var_1_111 - var_1_61)))))) ? ((var_1_59 - (var_1_77 + var_1_58))) : ((((((var_1_63 + last_1_var_1_80)) > ((var_1_111 - var_1_61))) ? ((var_1_63 + last_1_var_1_80)) : ((var_1_111 - var_1_61)))))));
  }
 } else {
  if (stepLocal_30 && (var_1_99 != (var_1_79 >> 5))) {
   if (var_1_15) {
    var_1_80 = (((((var_1_28 - var_1_27)) < (((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81))))) ? ((var_1_28 - var_1_27)) : (((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81))))));
   } else {
    var_1_80 = (var_1_22 + var_1_23);
   }
  } else {
   var_1_80 = (((((((-8) > (var_1_25)) ? (-8) : (var_1_25))) < 0 ) ? -((((-8) > (var_1_25)) ? (-8) : (var_1_25))) : ((((-8) > (var_1_25)) ? (-8) : (var_1_25)))));
  }
 }
 signed long int stepLocal_23 = var_1_37 / var_1_26;
 signed long int stepLocal_22 = var_1_72 % var_1_57;
 unsigned long int stepLocal_21 = var_1_38 + var_1_111;
 if (var_1_43 <= var_1_109) {
  if (stepLocal_23 < (var_1_39 - ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))))) {
   var_1_56 = var_1_51;
  } else {
   var_1_56 = (((((((((128) > (var_1_37)) ? (128) : (var_1_37)))) > (var_1_57)) ? (((((128) > (var_1_37)) ? (128) : (var_1_37)))) : (var_1_57))) - var_1_58);
  }
 } else {
  if (var_1_40 < var_1_100) {
   var_1_56 = var_1_57;
  } else {
   if (var_1_8 < stepLocal_22) {
    var_1_56 = (var_1_57 - var_1_27);
   } else {
    if (stepLocal_21 == var_1_23) {
     var_1_56 = var_1_51;
    } else {
     var_1_56 = (var_1_57 - (((((100) < (var_1_59)) ? (100) : (var_1_59))) - var_1_27));
    }
   }
  }
 }
 unsigned char stepLocal_33 = var_1_82;
 if (stepLocal_33 && (var_1_10 < var_1_19)) {
  var_1_83 = ((var_1_63 - var_1_56) + var_1_23);
 } else {
  if (! (var_1_51 <= var_1_19)) {
   var_1_83 = (var_1_51 - (var_1_85 - var_1_28));
  } else {
   var_1_83 = (var_1_58 - var_1_26);
  }
 }
 unsigned long int stepLocal_29 = var_1_108;
 if (stepLocal_29 <= var_1_99) {
  if (var_1_16) {
   var_1_78 = (2866053433u - (var_1_83 + var_1_64));
  }
 } else {
  var_1_78 = (10u + (1091135251u - (var_1_79 - var_1_64)));
 }
 unsigned long int stepLocal_6 = ~ var_1_78;
 if ((var_1_10 * var_1_96) < stepLocal_6) {
  var_1_29 = (var_1_16 && var_1_31);
 }
 unsigned char stepLocal_24 = var_1_29;
 if (((((var_1_40 + var_1_4) < 0 ) ? -(var_1_40 + var_1_4) : (var_1_40 + var_1_4))) >= ((- var_1_91) + var_1_52)) {
  if (var_1_32 || stepLocal_24) {
   var_1_62 = ((var_1_26 - var_1_51) - (((((var_1_63) < (var_1_64)) ? (var_1_63) : (var_1_64))) - var_1_65));
  }
 }
 signed char stepLocal_39 = var_1_25;
 signed short int stepLocal_38 = var_1_80;
 unsigned char stepLocal_37 = var_1_15;
 if (var_1_29 || stepLocal_37) {
  if (stepLocal_38 >= var_1_8) {
   var_1_94 = (var_1_37 - var_1_27);
  } else {
   if (var_1_38 != stepLocal_39) {
    var_1_94 = (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) - var_1_51);
   } else {
    var_1_94 = var_1_65;
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1073741823);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1073741823);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1073741824);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 2147483646);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -63);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -63);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -63);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 62);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 31);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 assume_abort_if_not(var_1_36 != 0.0F);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 127);
 assume_abort_if_not(var_1_37 <= 254);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 2147483646);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 6917529.027641074000e+12F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 30);
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 127);
 assume_abort_if_not(var_1_57 <= 254);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 127);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 63);
 assume_abort_if_not(var_1_59 <= 127);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 63);
 assume_abort_if_not(var_1_63 <= 126);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 63);
 assume_abort_if_not(var_1_64 <= 126);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 63);
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= 4611686.018427383000e+12F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854766000e+12F && var_1_68 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_69 >= 4611686.018427383000e+12F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854766000e+12F && var_1_69 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 127);
 var_1_79 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_79 >= 536870911);
 assume_abort_if_not(var_1_79 <= 1073741823);
 var_1_81 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_81 >= -32766);
 assume_abort_if_not(var_1_81 <= 32766);
 var_1_85 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_85 >= 16383);
 assume_abort_if_not(var_1_85 <= 32766);
 var_1_88 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_88 >= 16384);
 assume_abort_if_not(var_1_88 <= 32767);
 var_1_92 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_92 >= 0.0F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 2305843.009213691400e+12F && var_1_92 >= 1.0e-20F ));
 var_1_93 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_93 >= 0.0F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 2305843.009213691400e+12F && var_1_93 >= 1.0e-20F ));
 var_1_101 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_101 >= -922337.2036854766000e+13F && var_1_101 <= -1.0e-20F) || (var_1_101 <= 9223372.036854766000e+12F && var_1_101 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_70 = var_1_70;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_106 = var_1_106;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((- last_1_var_1_100) >= (last_1_var_1_100 / var_1_4)) ? (last_1_var_1_32 ? (var_1_1 == ((signed long int) 10)) : 1) : 1) && ((var_1_103 == var_1_1) ? (((var_1_103 > var_1_1) && var_1_32) ? (var_1_6 == ((signed long int) ((((var_1_103) < (128)) ? (var_1_103) : (128))))) : (var_1_6 == ((signed long int) (((((var_1_103) > (var_1_8)) ? (var_1_103) : (var_1_8))) + var_1_9)))) : (var_1_6 == ((signed long int) (var_1_103 + ((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))))))) && ((var_1_1 <= var_1_8) ? ((var_1_1 >= var_1_8) ? (((var_1_1 * (var_1_9 + var_1_1)) > -8) ? (var_1_10 == ((unsigned long int) (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))) + var_1_13))) : (var_1_10 == ((unsigned long int) (var_1_11 + 32u)))) : (var_1_10 == ((unsigned long int) var_1_12))) : (var_1_10 == ((unsigned long int) var_1_12)))) && (((((((var_1_11 * last_1_var_1_96)) < (last_1_var_1_99)) ? ((var_1_11 * last_1_var_1_96)) : (last_1_var_1_99))) >= var_1_12) ? ((! last_1_var_1_32) ? ((-2 >= var_1_13) ? (var_1_14 == ((unsigned char) ((var_1_15 && var_1_16) && var_1_17))) : 1) : (var_1_14 == ((unsigned char) (! var_1_17)))) : 1)) && (var_1_15 ? (var_1_18 == ((signed long int) -10000000)) : ((var_1_12 <= var_1_71) ? ((var_1_108 <= ((3837604088u - var_1_19) - ((((var_1_11) < (2u)) ? (var_1_11) : (2u))))) ? (var_1_18 == ((signed long int) ((((((((64) < 0 ) ? -(64) : (64)))) < (var_1_9)) ? (((((64) < 0 ) ? -(64) : (64)))) : (var_1_9))))) : (var_1_18 == ((signed long int) (var_1_19 - ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))))) : (var_1_18 == ((signed long int) (64 + var_1_8)))))) && ((var_1_11 < ((((var_1_1) > ((var_1_20 * var_1_102))) ? (var_1_1) : ((var_1_20 * var_1_102))))) ? (var_1_14 ? (var_1_22 == ((signed char) (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))) + var_1_25))) : (var_1_22 == ((signed char) ((((((64) < (var_1_26)) ? (64) : (var_1_26))) - (32 - var_1_27)) - var_1_28)))) : 1)) && (((var_1_10 * var_1_96) < (~ var_1_78)) ? (var_1_29 == ((unsigned char) (var_1_16 && var_1_31))) : 1)) && ((last_1_var_1_78 >= ((((((((last_1_var_1_96) > (var_1_28)) ? (last_1_var_1_96) : (var_1_28)))) < (last_1_var_1_78)) ? (((((last_1_var_1_96) > (var_1_28)) ? (last_1_var_1_96) : (var_1_28)))) : (last_1_var_1_78)))) ? (var_1_32 == ((unsigned char) ((! var_1_31) && var_1_15))) : ((last_1_var_1_70 <= ((5.5 - var_1_33) + var_1_4)) ? ((var_1_23 <= ((((last_1_var_1_95) < (var_1_8)) ? (last_1_var_1_95) : (var_1_8)))) ? (var_1_32 == ((unsigned char) (! var_1_31))) : (var_1_32 == ((unsigned char) (last_1_var_1_14 && var_1_31)))) : (var_1_32 == ((unsigned char) var_1_31))))) && (var_1_31 ? (var_1_34 == ((unsigned short int) ((((var_1_28) < (var_1_26)) ? (var_1_28) : (var_1_26))))) : 1)) && (((((((var_1_33) < (var_1_109)) ? (var_1_33) : (var_1_109))) / ((((var_1_4) > (var_1_36)) ? (var_1_4) : (var_1_36)))) < var_1_55) ? (var_1_35 == ((unsigned char) var_1_27)) : (var_1_16 ? (var_1_35 == ((unsigned char) ((((var_1_28) > ((var_1_37 - var_1_26))) ? (var_1_28) : ((var_1_37 - var_1_26)))))) : 1))) && ((var_1_24 <= ((64 - var_1_27) - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_38 == ((signed long int) (var_1_37 + var_1_23))) : (var_1_38 == ((signed long int) (50 - ((((var_1_27 - var_1_39) < 0 ) ? -(var_1_27 - var_1_39) : (var_1_27 - var_1_39)))))))) && ((var_1_102 <= ((((var_1_39) < ((var_1_106 | var_1_108))) ? (var_1_39) : ((var_1_106 | var_1_108))))) ? (var_1_40 == ((double) var_1_41)) : ((var_1_102 < var_1_21) ? ((var_1_9 >= var_1_38) ? ((var_1_99 < (var_1_38 & var_1_108)) ? (var_1_40 == ((double) ((var_1_42 - ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44)))) + ((((var_1_45 - var_1_46) < 0 ) ? -(var_1_45 - var_1_46) : (var_1_45 - var_1_46)))))) : (var_1_40 == ((double) (((((((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43)))) > (var_1_46)) ? (((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43)))) : (var_1_46))) + var_1_42)))) : (var_1_40 == ((double) ((((var_1_45) > ((var_1_46 - (3.5 + var_1_44)))) ? (var_1_45) : ((var_1_46 - (3.5 + var_1_44)))))))) : (((44452 - (var_1_111 + var_1_26)) <= var_1_108) ? (var_1_40 == ((double) (((((var_1_42) > (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))) ? (var_1_42) : (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)))))) + var_1_44))) : 1)))) && (var_1_15 ? (var_1_47 == ((float) (var_1_46 - ((var_1_48 - 63.3f) - var_1_43)))) : ((var_1_42 > var_1_36) ? (var_1_47 == ((float) var_1_46)) : 1))) && (var_1_82 ? ((var_1_27 <= var_1_71) ? ((var_1_106 >= (var_1_39 >> var_1_51)) ? (var_1_49 == ((double) (var_1_44 - var_1_45))) : 1) : ((var_1_20 < (var_1_11 / var_1_26)) ? (var_1_15 ? (var_1_49 == ((double) var_1_45)) : (var_1_49 == ((double) ((((((var_1_42) < (var_1_52)) ? (var_1_42) : (var_1_52))) - var_1_44) + var_1_45)))) : 1)) : (var_1_49 == ((double) (var_1_45 + var_1_44))))) && (((var_1_47 == var_1_48) || var_1_16) ? (var_1_53 == ((float) (((((((var_1_45) < (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48))))) ? (var_1_45) : (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48)))))) < 0 ) ? -((((var_1_45) < (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48))))) ? (var_1_45) : (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48)))))) : ((((var_1_45) < (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48))))) ? (var_1_45) : (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48)))))))))) : 1)) && (((var_1_37 * var_1_39) >= ((((var_1_99) < (var_1_26)) ? (var_1_99) : (var_1_26)))) ? (var_1_54 == ((unsigned short int) var_1_37)) : (var_1_54 == ((unsigned short int) var_1_26)))) && ((var_1_6 <= var_1_108) ? (((var_1_72 + var_1_71) > var_1_23) ? (var_1_55 == ((double) ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44))))) : 1) : 1)) && ((var_1_43 <= var_1_109) ? (((var_1_37 / var_1_26) < (var_1_39 - ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))))) ? (var_1_56 == ((unsigned char) var_1_51)) : (var_1_56 == ((unsigned char) (((((((((128) > (var_1_37)) ? (128) : (var_1_37)))) > (var_1_57)) ? (((((128) > (var_1_37)) ? (128) : (var_1_37)))) : (var_1_57))) - var_1_58)))) : ((var_1_40 < var_1_100) ? (var_1_56 == ((unsigned char) var_1_57)) : ((var_1_8 < (var_1_72 % var_1_57)) ? (var_1_56 == ((unsigned char) (var_1_57 - var_1_27))) : (((var_1_38 + var_1_111) == var_1_23) ? (var_1_56 == ((unsigned char) var_1_51)) : (var_1_56 == ((unsigned char) (var_1_57 - (((((100) < (var_1_59)) ? (100) : (var_1_59))) - var_1_27))))))))) && (var_1_60 == ((unsigned char) var_1_28))) && (var_1_61 == ((unsigned short int) (var_1_60 + ((((var_1_28) < (last_1_var_1_61)) ? (var_1_28) : (last_1_var_1_61))))))) && ((((((var_1_40 + var_1_4) < 0 ) ? -(var_1_40 + var_1_4) : (var_1_40 + var_1_4))) >= ((- var_1_91) + var_1_52)) ? ((var_1_32 || var_1_29) ? (var_1_62 == ((signed char) ((var_1_26 - var_1_51) - (((((var_1_63) < (var_1_64)) ? (var_1_63) : (var_1_64))) - var_1_65)))) : 1) : 1)) && ((! (var_1_47 <= var_1_45)) ? ((var_1_33 > (var_1_43 - var_1_44)) ? ((var_1_13 <= var_1_108) ? (var_1_66 == ((float) ((((((var_1_48) > (var_1_68)) ? (var_1_48) : (var_1_68))) - var_1_46) - (var_1_69 - 5.5f)))) : (var_1_66 == ((float) ((var_1_44 - var_1_46) + var_1_52)))) : (var_1_66 == ((float) (((((var_1_68) < (var_1_44)) ? (var_1_68) : (var_1_44))) - (var_1_69 - var_1_43))))) : 1)) && (var_1_70 == ((double) (var_1_45 + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))))) && (((~ var_1_39) == 2) ? (var_1_71 == ((signed long int) (var_1_58 + var_1_65))) : 1)) && ((-128 <= ((var_1_13 - var_1_51) * last_1_var_1_56)) ? (var_1_72 == ((signed short int) ((var_1_51 - var_1_64) + (((((var_1_27 + var_1_37)) < (var_1_23)) ? ((var_1_27 + var_1_37)) : (var_1_23)))))) : (((var_1_26 - var_1_58) == last_1_var_1_95) ? (var_1_72 == ((signed short int) last_1_var_1_61)) : 1))) && (var_1_17 ? (var_1_74 == ((signed char) (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))) - ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))) : ((var_1_39 >= (var_1_37 * var_1_51)) ? (var_1_74 == ((signed char) (var_1_27 + ((((var_1_24) > (var_1_65)) ? (var_1_24) : (var_1_65)))))) : 1))) && (((var_1_46 / var_1_4) < var_1_55) ? (var_1_75 == ((signed char) (var_1_25 + (var_1_27 + var_1_51)))) : ((var_1_31 || var_1_82) ? ((! var_1_15) ? (var_1_75 == ((signed char) (var_1_63 - var_1_64))) : (var_1_75 == ((signed char) ((((((var_1_27 + var_1_65) - var_1_63)) < (-10)) ? (((var_1_27 + var_1_65) - var_1_63)) : (-10)))))) : (var_1_75 == ((signed char) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))))) && ((var_1_64 >= var_1_111) ? (var_1_76 == ((unsigned char) (var_1_64 + var_1_77))) : (var_1_76 == ((unsigned char) ((((((((var_1_27) > (var_1_26)) ? (var_1_27) : (var_1_26)))) < (var_1_65)) ? (((((var_1_27) > (var_1_26)) ? (var_1_27) : (var_1_26)))) : (var_1_65))))))) && ((var_1_108 <= var_1_99) ? (var_1_16 ? (var_1_78 == ((unsigned long int) (2866053433u - (var_1_83 + var_1_64)))) : 1) : (var_1_78 == ((unsigned long int) (10u + (1091135251u - (var_1_79 - var_1_64))))))) && ((var_1_27 > (var_1_58 << var_1_9)) ? ((var_1_15 || (var_1_49 <= var_1_109)) ? (var_1_80 == ((signed short int) var_1_58)) : (var_1_80 == ((signed short int) (((((var_1_59 - (var_1_77 + var_1_58))) < ((((((var_1_63 + last_1_var_1_80)) > ((var_1_111 - var_1_61))) ? ((var_1_63 + last_1_var_1_80)) : ((var_1_111 - var_1_61)))))) ? ((var_1_59 - (var_1_77 + var_1_58))) : ((((((var_1_63 + last_1_var_1_80)) > ((var_1_111 - var_1_61))) ? ((var_1_63 + last_1_var_1_80)) : ((var_1_111 - var_1_61)))))))))) : (((-1 >= var_1_6) && (var_1_99 != (var_1_79 >> 5))) ? (var_1_15 ? (var_1_80 == ((signed short int) (((((var_1_28 - var_1_27)) < (((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81))))) ? ((var_1_28 - var_1_27)) : (((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81)))))))) : (var_1_80 == ((signed short int) (var_1_22 + var_1_23)))) : (var_1_80 == ((signed short int) (((((((-8) > (var_1_25)) ? (-8) : (var_1_25))) < 0 ) ? -((((-8) > (var_1_25)) ? (-8) : (var_1_25))) : ((((-8) > (var_1_25)) ? (-8) : (var_1_25)))))))))) && (last_1_var_1_82 ? (var_1_82 == ((unsigned char) (var_1_31 || (var_1_14 && (! var_1_16))))) : 1)) && ((var_1_82 && (var_1_10 < var_1_19)) ? (var_1_83 == ((signed short int) ((var_1_63 - var_1_56) + var_1_23))) : ((! (var_1_51 <= var_1_19)) ? (var_1_83 == ((signed short int) (var_1_51 - (var_1_85 - var_1_28)))) : (var_1_83 == ((signed short int) (var_1_58 - var_1_26)))))) && ((5.375f > (var_1_42 * ((((var_1_43) < (var_1_41)) ? (var_1_43) : (var_1_41))))) ? ((var_1_24 == ((((var_1_38) > (var_1_28)) ? (var_1_38) : (var_1_28)))) ? ((var_1_64 != var_1_74) ? (var_1_86 == ((unsigned short int) (var_1_27 + var_1_10))) : (var_1_86 == ((unsigned short int) ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))))) : (var_1_86 == ((unsigned short int) ((25367 + ((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88)))) - var_1_51)))) : 1)) && ((var_1_1 < var_1_20) ? (var_1_89 == ((signed char) (((((64) < (var_1_64)) ? (64) : (var_1_64))) - var_1_27))) : (var_1_32 ? (var_1_32 ? (var_1_89 == ((signed char) (var_1_65 - var_1_26))) : (var_1_89 == ((signed char) var_1_26))) : (var_1_89 == ((signed char) (((((var_1_28) < (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) ? (var_1_28) : (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) - var_1_64)))))) && (var_1_91 == ((float) ((var_1_43 - (var_1_92 + var_1_93)) + var_1_45)))) && ((var_1_29 || var_1_15) ? ((var_1_80 >= var_1_8) ? (var_1_94 == ((unsigned char) (var_1_37 - var_1_27))) : ((var_1_38 != var_1_25) ? (var_1_94 == ((unsigned char) (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) - var_1_51))) : (var_1_94 == ((unsigned char) var_1_65)))) : 1)) && (((~ (var_1_63 / var_1_64)) > var_1_37) ? (var_1_95 == ((signed long int) ((-64 + ((((var_1_26) > (-64)) ? (var_1_26) : (-64)))) + -2))) : 1)) && ((var_1_28 != (var_1_65 + var_1_88)) ? (var_1_96 == ((unsigned long int) ((var_1_77 + var_1_71) + var_1_27))) : 1)) && ((var_1_106 != var_1_72) ? ((var_1_103 == var_1_21) ? (var_1_97 == ((signed char) (var_1_26 - (var_1_27 + var_1_51)))) : (var_1_97 == ((signed char) (var_1_51 - 100)))) : ((var_1_32 && var_1_82) ? (var_1_82 ? ((var_1_20 >= var_1_108) ? (var_1_97 == ((signed char) var_1_63)) : 1) : 1) : (var_1_97 == ((signed char) ((((var_1_63) < ((((((var_1_24 + var_1_27)) > (var_1_28)) ? ((var_1_24 + var_1_27)) : (var_1_28))))) ? (var_1_63) : ((((((var_1_24 + var_1_27)) > (var_1_28)) ? ((var_1_24 + var_1_27)) : (var_1_28))))))))))) && ((var_1_96 < var_1_6) ? (var_1_99 == ((unsigned long int) var_1_77)) : 1)) && (var_1_82 ? (var_1_100 == ((double) var_1_93)) : (var_1_100 == ((double) var_1_101)))) && (var_1_102 == ((signed long int) 256))) && (var_1_14 ? (var_1_103 == ((signed short int) var_1_72)) : (var_1_103 == ((signed short int) var_1_81)))) && (var_1_82 ? (var_1_104 == ((unsigned char) var_1_63)) : 1)) && (var_1_82 ? (var_1_105 == ((unsigned char) var_1_58)) : (var_1_105 == ((unsigned char) var_1_64)))) && (var_1_32 ? (var_1_106 == ((unsigned long int) last_1_var_1_106)) : 1)) && (var_1_15 ? (var_1_107 == ((float) var_1_68)) : (var_1_107 == ((float) var_1_44)))) && (var_1_16 ? (var_1_108 == ((unsigned long int) var_1_26)) : (var_1_108 == ((unsigned long int) var_1_95)))) && (((var_1_43 - var_1_33) < var_1_101) ? (var_1_109 == ((double) (var_1_44 + (((((9.5) < (var_1_43)) ? (9.5) : (var_1_43))) - var_1_46)))) : 1)) && (var_1_110 == ((unsigned char) var_1_51))) && (var_1_111 == ((unsigned long int) var_1_1))) && (var_1_112 == ((signed char) var_1_63))
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

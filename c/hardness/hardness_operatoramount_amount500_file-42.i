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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 50.75;
double var_1_2 = 64.75;
double var_1_3 = 8.5;
double var_1_4 = 64.5;
double var_1_5 = 9.3;
double var_1_6 = 10.5;
double var_1_7 = 1000000000000000.2;
unsigned char var_1_8 = 1;
double var_1_10 = 127.875;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned short int var_1_13 = 8;
double var_1_14 = 15.5;
double var_1_15 = 4.875;
unsigned short int var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
signed char var_1_19 = -25;
unsigned char var_1_21 = 0;
signed char var_1_22 = 4;
signed char var_1_23 = 32;
signed char var_1_24 = 0;
signed char var_1_25 = 16;
unsigned char var_1_26 = 1;
unsigned long int var_1_27 = 5;
unsigned long int var_1_28 = 3878886745;
unsigned short int var_1_29 = 0;
unsigned short int var_1_30 = 54734;
unsigned short int var_1_31 = 10000;
unsigned short int var_1_32 = 31271;
unsigned char var_1_33 = 2;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 0;
unsigned short int var_1_37 = 128;
unsigned short int var_1_38 = 10000;
unsigned long int var_1_39 = 10;
unsigned short int var_1_40 = 1;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 4;
unsigned char var_1_44 = 25;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 32;
signed char var_1_48 = 4;
float var_1_49 = 63.4;
float var_1_50 = 31.7;
unsigned char var_1_51 = 2;
unsigned char var_1_52 = 128;
float var_1_53 = -0.6;
signed short int var_1_54 = 32;
unsigned long int var_1_55 = 0;
unsigned long int var_1_58 = 2123227310;
signed char var_1_59 = -50;
signed char var_1_60 = 2;
float var_1_61 = 50.3;
unsigned char var_1_62 = 5;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
signed long int var_1_67 = -2;
unsigned char var_1_68 = 1;
float var_1_69 = 2.75;
unsigned char var_1_70 = 2;
float var_1_71 = 255.5;
float var_1_72 = 32.25;
signed char var_1_73 = -5;
unsigned char var_1_74 = 1;
unsigned char var_1_75 = 1;
unsigned char var_1_77 = 128;
unsigned char var_1_78 = 50;
unsigned char var_1_79 = 16;
signed long int var_1_80 = 4;
signed char var_1_82 = -4;
unsigned short int var_1_83 = 5;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 1;
unsigned short int var_1_87 = 32;
unsigned short int var_1_88 = 64;
double var_1_89 = 5.2;
signed short int var_1_91 = -100;
double var_1_92 = 7.4;
float var_1_93 = 1.75;
float var_1_94 = 9.3;
float var_1_95 = 4.125;
unsigned short int var_1_96 = 32;
unsigned short int var_1_97 = 64;
unsigned char var_1_98 = 8;
unsigned char var_1_99 = 128;
signed char var_1_100 = -100;
unsigned char last_1_var_1_8 = 1;
unsigned short int last_1_var_1_13 = 8;
unsigned char last_1_var_1_26 = 1;
unsigned long int last_1_var_1_27 = 5;
unsigned short int last_1_var_1_37 = 128;
unsigned long int last_1_var_1_39 = 10;
unsigned short int last_1_var_1_40 = 1;
unsigned char last_1_var_1_41 = 1;
unsigned char last_1_var_1_64 = 0;
unsigned char last_1_var_1_68 = 1;
float last_1_var_1_69 = 2.75;
unsigned char last_1_var_1_74 = 1;
unsigned char last_1_var_1_75 = 1;
unsigned char last_1_var_1_77 = 128;
unsigned short int last_1_var_1_83 = 5;
unsigned char last_1_var_1_84 = 1;
double last_1_var_1_89 = 5.2;
signed short int last_1_var_1_91 = -100;
double last_1_var_1_92 = 7.4;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_16 = last_1_var_1_75;
 signed long int stepLocal_15 = last_1_var_1_37;
 unsigned char stepLocal_14 = last_1_var_1_41;
 if ((var_1_23 <= var_1_58) && stepLocal_14) {
  if (var_1_31 >= stepLocal_15) {
   var_1_67 = (last_1_var_1_13 + last_1_var_1_77);
  } else {
   if (last_1_var_1_74 && stepLocal_16) {
    var_1_67 = var_1_25;
   } else {
    var_1_67 = (last_1_var_1_91 - var_1_38);
   }
  }
 } else {
  var_1_67 = (var_1_44 + var_1_45);
 }
 if (((var_1_24 + var_1_28) + last_1_var_1_13) > (32u * (- 10u))) {
  var_1_41 = var_1_11;
 } else {
  var_1_41 = (var_1_12 || var_1_21);
 }
 if (var_1_41) {
  var_1_89 = 15.5;
 } else {
  var_1_89 = var_1_7;
 }
 if (var_1_6 < last_1_var_1_69) {
  if (last_1_var_1_68) {
   if (var_1_16 < var_1_52) {
    var_1_74 = ((! last_1_var_1_64) && var_1_65);
   } else {
    if (last_1_var_1_64) {
     var_1_74 = ((last_1_var_1_26 || (! var_1_21)) && var_1_18);
    }
   }
  } else {
   var_1_74 = (! (last_1_var_1_68 || (last_1_var_1_26 || var_1_18)));
  }
 } else {
  if (((~ var_1_19) + var_1_60) == (var_1_23 / var_1_38)) {
   if (((((last_1_var_1_89) < (var_1_14)) ? (last_1_var_1_89) : (var_1_14))) >= last_1_var_1_69) {
    var_1_74 = ((var_1_52 >= (var_1_45 - 1)) || (! var_1_21));
   }
  }
 }
 if (var_1_74) {
  var_1_92 = var_1_6;
 } else {
  var_1_92 = var_1_7;
 }
 if (var_1_92 <= 2.25) {
  var_1_1 = ((((2.5) < (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) ? (2.5) : (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))));
 } else {
  var_1_1 = ((((((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) > ((var_1_6 - var_1_7))) ? (((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) : ((var_1_6 - var_1_7))));
 }
 unsigned char stepLocal_13 = last_1_var_1_84 >= last_1_var_1_40;
 unsigned short int stepLocal_12 = var_1_31;
 if (var_1_23 < stepLocal_12) {
  var_1_64 = (var_1_21 && (var_1_12 || var_1_65));
 } else {
  if ((var_1_60 == var_1_34) || stepLocal_13) {
   var_1_64 = ((last_1_var_1_92 >= var_1_10) || (var_1_65 || var_1_11));
  } else {
   var_1_64 = var_1_18;
  }
 }
 if (var_1_64 || (var_1_6 > (var_1_7 - var_1_10))) {
  var_1_8 = (! var_1_11);
 } else {
  var_1_8 = ((var_1_3 <= var_1_10) && var_1_12);
 }
 if ((16 + ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)))) != var_1_24) {
  var_1_51 = (var_1_45 - (var_1_23 + var_1_24));
 } else {
  if (var_1_64) {
   var_1_51 = (var_1_52 - var_1_24);
  } else {
   if ((0.75f / ((((var_1_14) < (var_1_53)) ? (var_1_14) : (var_1_53)))) < var_1_50) {
    var_1_51 = ((((var_1_35) < (var_1_47)) ? (var_1_35) : (var_1_47)));
   }
  }
 }
 if (var_1_15 < var_1_2) {
  var_1_17 = var_1_11;
 } else {
  if (last_1_var_1_8) {
   var_1_17 = (var_1_11 && (last_1_var_1_64 || var_1_18));
  } else {
   if (((last_1_var_1_39 / var_1_19) & var_1_16) > last_1_var_1_27) {
    var_1_17 = (var_1_18 && var_1_11);
   } else {
    if (last_1_var_1_64) {
     var_1_17 = (! 0);
    } else {
     var_1_17 = ((var_1_12 || var_1_21) || (! var_1_11));
    }
   }
  }
 }
 if (var_1_17) {
  var_1_85 = var_1_34;
 }
 if (var_1_17) {
  var_1_93 = var_1_72;
 } else {
  var_1_93 = 0.75f;
 }
 unsigned char stepLocal_0 = var_1_18;
 if (var_1_64 || stepLocal_0) {
  var_1_22 = ((var_1_23 + var_1_24) - var_1_25);
 } else {
  if ((var_1_5 * var_1_92) <= 50.75) {
   var_1_22 = var_1_25;
  } else {
   var_1_22 = -2;
  }
 }
 if (var_1_14 < var_1_7) {
  var_1_26 = (var_1_18 && var_1_11);
 } else {
  if (var_1_14 != var_1_5) {
   var_1_26 = var_1_21;
  }
 }
 if (var_1_14 < var_1_3) {
  if (var_1_21) {
   var_1_27 = ((((((((last_1_var_1_27) < ((var_1_28 - var_1_16))) ? (last_1_var_1_27) : ((var_1_28 - var_1_16))))) < (var_1_25)) ? (((((last_1_var_1_27) < ((var_1_28 - var_1_16))) ? (last_1_var_1_27) : ((var_1_28 - var_1_16))))) : (var_1_25)));
  } else {
   var_1_27 = ((var_1_16 + last_1_var_1_27) + (var_1_24 + ((((var_1_25) < (var_1_23)) ? (var_1_25) : (var_1_23)))));
  }
 }
 var_1_39 = (((((var_1_28) > (3696626072u)) ? (var_1_28) : (3696626072u))) - var_1_23);
 var_1_48 = (var_1_35 + -2);
 unsigned char stepLocal_10 = var_1_17;
 if (var_1_12 && stepLocal_10) {
  var_1_54 = (((((var_1_31 + -128)) > (0)) ? ((var_1_31 + -128)) : (0)));
 }
 var_1_61 = ((((var_1_6) < (var_1_50)) ? (var_1_6) : (var_1_50)));
 if (var_1_18) {
  var_1_62 = ((((var_1_47) > (var_1_25)) ? (var_1_47) : (var_1_25)));
 }
 if (((var_1_5 / var_1_53) + ((((var_1_71) > (8.5f)) ? (var_1_71) : (8.5f)))) != ((((var_1_92) < (31.4)) ? (var_1_92) : (31.4)))) {
  var_1_82 = (((((var_1_24) > (var_1_35)) ? (var_1_24) : (var_1_35))) - var_1_25);
 }
 var_1_94 = var_1_4;
 var_1_95 = var_1_3;
 if (var_1_65) {
  var_1_98 = var_1_79;
 } else {
  var_1_98 = var_1_46;
 }
 var_1_99 = (var_1_45 - (var_1_34 - var_1_23));
 if (var_1_92 >= (99.3 / var_1_14)) {
  if (var_1_89 > 0.4) {
   if ((1.0000000000075E11 + var_1_89) <= var_1_89) {
    var_1_13 = var_1_16;
   }
  } else {
   var_1_13 = var_1_16;
  }
 }
 unsigned char stepLocal_4 = var_1_26;
 unsigned char stepLocal_3 = var_1_34;
 if (var_1_21) {
  if (((var_1_6 * var_1_14) * 0.25f) <= ((((9.99999999999925E12) > (var_1_1)) ? (9.99999999999925E12) : (var_1_1)))) {
   if (var_1_8 || stepLocal_4) {
    var_1_40 = ((((((((var_1_38) < (var_1_16)) ? (var_1_38) : (var_1_16)))) < (((((var_1_24) < (((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31))))) ? (var_1_24) : (((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31)))))))) ? (((((var_1_38) < (var_1_16)) ? (var_1_38) : (var_1_16)))) : (((((var_1_24) < (((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31))))) ? (var_1_24) : (((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31)))))))));
   } else {
    var_1_40 = ((((((var_1_32 - 16)) > (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? ((var_1_32 - 16)) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) + (((((var_1_38 + var_1_35)) < (var_1_24)) ? ((var_1_38 + var_1_35)) : (var_1_24))));
   }
  } else {
   if (var_1_27 > stepLocal_3) {
    var_1_40 = var_1_32;
   }
  }
 }
 signed long int stepLocal_20 = (((var_1_99) > (var_1_40)) ? (var_1_99) : (var_1_40));
 unsigned char stepLocal_19 = var_1_18;
 if (stepLocal_20 != (~ last_1_var_1_83)) {
  if ((var_1_16 < var_1_39) || stepLocal_19) {
   var_1_83 = last_1_var_1_83;
  }
 } else {
  var_1_83 = (var_1_30 - var_1_70);
 }
 if (var_1_39 >= var_1_58) {
  if (var_1_17 && var_1_8) {
   var_1_75 = (! var_1_11);
  }
 } else {
  var_1_75 = (! var_1_18);
 }
 unsigned long int stepLocal_21 = var_1_51 % (var_1_28 - var_1_45);
 if (var_1_27 <= stepLocal_21) {
  if (var_1_50 < var_1_14) {
   var_1_84 = (var_1_25 + (var_1_23 + var_1_35));
  }
 }
 if (var_1_75) {
  var_1_63 = (var_1_35 + (var_1_34 - var_1_24));
 }
 if (var_1_75) {
  var_1_96 = var_1_97;
 } else {
  var_1_96 = var_1_13;
 }
 signed long int stepLocal_9 = 128 - var_1_25;
 unsigned char stepLocal_8 = var_1_46;
 if (stepLocal_9 < var_1_47) {
  if (var_1_74) {
   var_1_49 = (var_1_6 - var_1_7);
  }
 } else {
  if (var_1_74) {
   if (((var_1_83 / var_1_45) << 5) < stepLocal_8) {
    var_1_49 = var_1_7;
   } else {
    var_1_49 = (var_1_50 + var_1_4);
   }
  } else {
   var_1_49 = (((((((var_1_3) < (var_1_6)) ? (var_1_3) : (var_1_6))) < 0 ) ? -((((var_1_3) < (var_1_6)) ? (var_1_3) : (var_1_6))) : ((((var_1_3) < (var_1_6)) ? (var_1_3) : (var_1_6)))));
  }
 }
 if (var_1_75 || (var_1_17 || var_1_64)) {
  if (var_1_31 > var_1_47) {
   if (var_1_17) {
    var_1_55 = (((((var_1_28 - (var_1_58 - var_1_52))) < (32u)) ? ((var_1_28 - (var_1_58 - var_1_52))) : (32u)));
   } else {
    var_1_55 = ((((((((2u) < (var_1_24)) ? (2u) : (var_1_24)))) > ((var_1_28 - var_1_25))) ? (((((2u) < (var_1_24)) ? (2u) : (var_1_24)))) : ((var_1_28 - var_1_25))));
   }
  }
 }
 unsigned long int stepLocal_2 = var_1_55;
 unsigned char stepLocal_1 = var_1_18;
 if (! (var_1_12 || var_1_21)) {
  if ((((((- var_1_5)) < (var_1_89)) ? ((- var_1_5)) : (var_1_89))) < var_1_92) {
   var_1_37 = (((var_1_35 + var_1_25) + var_1_23) + var_1_55);
  }
 } else {
  if (var_1_12 || stepLocal_1) {
   if ((- var_1_10) > (var_1_92 / var_1_14)) {
    var_1_37 = var_1_30;
   } else {
    if (stepLocal_2 >= last_1_var_1_37) {
     var_1_37 = (var_1_32 + ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))));
    } else {
     var_1_37 = var_1_55;
    }
   }
  } else {
   var_1_37 = (var_1_23 + ((var_1_38 - var_1_35) + var_1_24));
  }
 }
 if (var_1_74) {
  if (var_1_25 < (var_1_24 + var_1_19)) {
   var_1_29 = (var_1_30 - ((((var_1_25) < ((var_1_23 + var_1_24))) ? (var_1_25) : ((var_1_23 + var_1_24)))));
  } else {
   if (((var_1_28 + var_1_24) / var_1_30) >= var_1_23) {
    if (var_1_7 < ((var_1_14 + var_1_4) * var_1_10)) {
     var_1_29 = (var_1_30 - var_1_24);
    }
   } else {
    if (! var_1_17) {
     var_1_29 = (var_1_24 + (var_1_23 + (var_1_31 - var_1_25)));
    }
   }
  }
 } else {
  if (var_1_30 <= var_1_55) {
   var_1_29 = (var_1_30 - ((((var_1_32 - var_1_24) < 0 ) ? -(var_1_32 - var_1_24) : (var_1_32 - var_1_24))));
  } else {
   var_1_29 = (((((var_1_30 - var_1_31)) > (var_1_23)) ? ((var_1_30 - var_1_31)) : (var_1_23)));
  }
 }
 unsigned short int stepLocal_7 = var_1_32;
 signed long int stepLocal_6 = (var_1_40 * var_1_35) / var_1_34;
 unsigned long int stepLocal_5 = (((((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)))) < ((var_1_40 & var_1_39))) ? (((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)))) : ((var_1_40 & var_1_39)));
 if (var_1_19 >= stepLocal_7) {
  if (stepLocal_5 < (var_1_55 * var_1_67)) {
   if (stepLocal_6 <= ((var_1_37 - var_1_31) * (var_1_40 ^ var_1_16))) {
    var_1_42 = (((((var_1_25 + var_1_34)) < (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))) ? ((var_1_25 + var_1_34)) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))));
   } else {
    var_1_42 = (var_1_44 + var_1_25);
   }
  } else {
   var_1_42 = (((((((((var_1_45 - var_1_24)) > ((var_1_46 - var_1_25))) ? ((var_1_45 - var_1_24)) : ((var_1_46 - var_1_25))))) > (var_1_47)) ? ((((((var_1_45 - var_1_24)) > ((var_1_46 - var_1_25))) ? ((var_1_45 - var_1_24)) : ((var_1_46 - var_1_25))))) : (var_1_47)));
  }
 } else {
  var_1_42 = var_1_46;
 }
 if (((((- var_1_7) < 0 ) ? -(- var_1_7) : (- var_1_7))) <= var_1_50) {
  var_1_69 = var_1_50;
 } else {
  if (var_1_34 == (var_1_42 / var_1_70)) {
   var_1_69 = ((((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) < ((var_1_7 - (var_1_71 + var_1_72)))) ? (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) : ((var_1_7 - (var_1_71 + var_1_72)))));
  } else {
   var_1_69 = (var_1_71 - var_1_6);
  }
 }
 if (var_1_75 || var_1_41) {
  if ((((((var_1_5 * var_1_53)) > (var_1_93)) ? ((var_1_5 * var_1_53)) : (var_1_93))) < (var_1_71 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) {
   var_1_87 = (var_1_34 + var_1_32);
  } else {
   var_1_87 = var_1_55;
  }
 } else {
  var_1_87 = var_1_88;
 }
 if (var_1_71 > var_1_7) {
  if ((var_1_71 - var_1_6) > var_1_1) {
   var_1_73 = ((((var_1_35) < ((var_1_24 - 8))) ? (var_1_35) : ((var_1_24 - 8))));
  } else {
   if (var_1_25 == var_1_29) {
    if (var_1_30 < var_1_32) {
     var_1_73 = (var_1_25 - var_1_23);
    } else {
     var_1_73 = var_1_23;
    }
   }
  }
 }
 unsigned short int stepLocal_22 = var_1_37;
 if (stepLocal_22 > ((var_1_28 * var_1_29) ^ var_1_16)) {
  var_1_100 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
 } else {
  var_1_100 = var_1_79;
 }
 if (var_1_50 > var_1_49) {
  var_1_80 = ((((((var_1_85 - var_1_25) + var_1_67)) < (((((var_1_29 + var_1_30) < 0 ) ? -(var_1_29 + var_1_30) : (var_1_29 + var_1_30))))) ? (((var_1_85 - var_1_25) + var_1_67)) : (((((var_1_29 + var_1_30) < 0 ) ? -(var_1_29 + var_1_30) : (var_1_29 + var_1_30))))));
 } else {
  var_1_80 = (var_1_23 + -5);
 }
 unsigned short int stepLocal_18 = var_1_87;
 unsigned short int stepLocal_17 = var_1_29;
 if (stepLocal_17 >= (var_1_40 % var_1_46)) {
  var_1_68 = var_1_12;
 } else {
  if (stepLocal_18 > (var_1_34 - var_1_44)) {
   var_1_68 = (((! var_1_11) || var_1_21) || var_1_12);
  }
 }
 if (var_1_68 && (var_1_39 > var_1_37)) {
  if (! (99.9 <= var_1_53)) {
   var_1_77 = ((((((((var_1_46) > (var_1_34)) ? (var_1_46) : (var_1_34)))) > (var_1_44)) ? (((((var_1_46) > (var_1_34)) ? (var_1_46) : (var_1_34)))) : (var_1_44)));
  } else {
   var_1_77 = ((var_1_34 - (var_1_78 - var_1_79)) + var_1_24);
  }
 }
 if (var_1_3 <= ((- var_1_7) * var_1_14)) {
  var_1_33 = ((var_1_34 + 100) - (((((var_1_23 + var_1_35)) > (var_1_25)) ? ((var_1_23 + var_1_35)) : (var_1_25))));
 } else {
  if (var_1_80 == (var_1_30 - var_1_32)) {
   var_1_33 = (((((128 - (var_1_23 + var_1_35))) > ((var_1_34 + var_1_25))) ? ((128 - (var_1_23 + var_1_35))) : ((var_1_34 + var_1_25))));
  }
 }
 if (var_1_68) {
  var_1_91 = var_1_19;
 } else {
  var_1_91 = var_1_33;
 }
 unsigned short int stepLocal_11 = var_1_29;
 if (var_1_68) {
  if (var_1_17) {
   if (! (var_1_14 > var_1_5)) {
    var_1_59 = (((((var_1_23 + 1) < 0 ) ? -(var_1_23 + 1) : (var_1_23 + 1))) - var_1_25);
   }
  } else {
   var_1_59 = (var_1_60 + var_1_23);
  }
 } else {
  if (stepLocal_11 < var_1_91) {
   var_1_59 = var_1_24;
  } else {
   var_1_59 = ((((var_1_25) < ((var_1_35 + var_1_24))) ? (var_1_25) : ((var_1_35 + var_1_24))));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -230584.3009213691400e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 2305843.009213691400e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -230584.3009213691400e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 assume_abort_if_not(var_1_14 != 0.0F);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -128);
 assume_abort_if_not(var_1_19 <= 127);
 assume_abort_if_not(var_1_19 != 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 2147483647);
 assume_abort_if_not(var_1_28 <= 4294967294);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 32767);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 8191);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 16383);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 63);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 8192);
 assume_abort_if_not(var_1_38 <= 16384);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 127);
 assume_abort_if_not(var_1_45 <= 254);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 127);
 assume_abort_if_not(var_1_46 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 254);
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 127);
 assume_abort_if_not(var_1_52 <= 254);
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -922337.2036854776000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
 assume_abort_if_not(var_1_53 != 0.0F);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 1073741823);
 assume_abort_if_not(var_1_58 <= 2147483647);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= -63);
 assume_abort_if_not(var_1_60 <= 63);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 0);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 255);
 assume_abort_if_not(var_1_70 != 0);
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427383000e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 31);
 assume_abort_if_not(var_1_78 <= 63);
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 31);
 var_1_88 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_88 >= 0);
 assume_abort_if_not(var_1_88 <= 65534);
 var_1_97 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_97 >= 0);
 assume_abort_if_not(var_1_97 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_83 = var_1_83;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_92 = var_1_92;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((var_1_92 <= 2.25) ? (var_1_1 == ((double) ((((2.5) < (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) ? (2.5) : (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))))))) : (var_1_1 == ((double) ((((((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) > ((var_1_6 - var_1_7))) ? (((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) : ((var_1_6 - var_1_7))))))) && ((var_1_64 || (var_1_6 > (var_1_7 - var_1_10))) ? (var_1_8 == ((unsigned char) (! var_1_11))) : (var_1_8 == ((unsigned char) ((var_1_3 <= var_1_10) && var_1_12))))) && ((var_1_92 >= (99.3 / var_1_14)) ? ((var_1_89 > 0.4) ? (((1.0000000000075E11 + var_1_89) <= var_1_89) ? (var_1_13 == ((unsigned short int) var_1_16)) : 1) : (var_1_13 == ((unsigned short int) var_1_16))) : 1)) && ((var_1_15 < var_1_2) ? (var_1_17 == ((unsigned char) var_1_11)) : (last_1_var_1_8 ? (var_1_17 == ((unsigned char) (var_1_11 && (last_1_var_1_64 || var_1_18)))) : ((((last_1_var_1_39 / var_1_19) & var_1_16) > last_1_var_1_27) ? (var_1_17 == ((unsigned char) (var_1_18 && var_1_11))) : (last_1_var_1_64 ? (var_1_17 == ((unsigned char) (! 0))) : (var_1_17 == ((unsigned char) ((var_1_12 || var_1_21) || (! var_1_11))))))))) && ((var_1_64 || var_1_18) ? (var_1_22 == ((signed char) ((var_1_23 + var_1_24) - var_1_25))) : (((var_1_5 * var_1_92) <= 50.75) ? (var_1_22 == ((signed char) var_1_25)) : (var_1_22 == ((signed char) -2))))) && ((var_1_14 < var_1_7) ? (var_1_26 == ((unsigned char) (var_1_18 && var_1_11))) : ((var_1_14 != var_1_5) ? (var_1_26 == ((unsigned char) var_1_21)) : 1))) && ((var_1_14 < var_1_3) ? (var_1_21 ? (var_1_27 == ((unsigned long int) ((((((((last_1_var_1_27) < ((var_1_28 - var_1_16))) ? (last_1_var_1_27) : ((var_1_28 - var_1_16))))) < (var_1_25)) ? (((((last_1_var_1_27) < ((var_1_28 - var_1_16))) ? (last_1_var_1_27) : ((var_1_28 - var_1_16))))) : (var_1_25))))) : (var_1_27 == ((unsigned long int) ((var_1_16 + last_1_var_1_27) + (var_1_24 + ((((var_1_25) < (var_1_23)) ? (var_1_25) : (var_1_23)))))))) : 1)) && (var_1_74 ? ((var_1_25 < (var_1_24 + var_1_19)) ? (var_1_29 == ((unsigned short int) (var_1_30 - ((((var_1_25) < ((var_1_23 + var_1_24))) ? (var_1_25) : ((var_1_23 + var_1_24))))))) : ((((var_1_28 + var_1_24) / var_1_30) >= var_1_23) ? ((var_1_7 < ((var_1_14 + var_1_4) * var_1_10)) ? (var_1_29 == ((unsigned short int) (var_1_30 - var_1_24))) : 1) : ((! var_1_17) ? (var_1_29 == ((unsigned short int) (var_1_24 + (var_1_23 + (var_1_31 - var_1_25))))) : 1))) : ((var_1_30 <= var_1_55) ? (var_1_29 == ((unsigned short int) (var_1_30 - ((((var_1_32 - var_1_24) < 0 ) ? -(var_1_32 - var_1_24) : (var_1_32 - var_1_24)))))) : (var_1_29 == ((unsigned short int) (((((var_1_30 - var_1_31)) > (var_1_23)) ? ((var_1_30 - var_1_31)) : (var_1_23)))))))) && ((var_1_3 <= ((- var_1_7) * var_1_14)) ? (var_1_33 == ((unsigned char) ((var_1_34 + 100) - (((((var_1_23 + var_1_35)) > (var_1_25)) ? ((var_1_23 + var_1_35)) : (var_1_25)))))) : ((var_1_80 == (var_1_30 - var_1_32)) ? (var_1_33 == ((unsigned char) (((((128 - (var_1_23 + var_1_35))) > ((var_1_34 + var_1_25))) ? ((128 - (var_1_23 + var_1_35))) : ((var_1_34 + var_1_25)))))) : 1))) && ((! (var_1_12 || var_1_21)) ? (((((((- var_1_5)) < (var_1_89)) ? ((- var_1_5)) : (var_1_89))) < var_1_92) ? (var_1_37 == ((unsigned short int) (((var_1_35 + var_1_25) + var_1_23) + var_1_55))) : 1) : ((var_1_12 || var_1_18) ? (((- var_1_10) > (var_1_92 / var_1_14)) ? (var_1_37 == ((unsigned short int) var_1_30)) : ((var_1_55 >= last_1_var_1_37) ? (var_1_37 == ((unsigned short int) (var_1_32 + ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))))) : (var_1_37 == ((unsigned short int) var_1_55)))) : (var_1_37 == ((unsigned short int) (var_1_23 + ((var_1_38 - var_1_35) + var_1_24))))))) && (var_1_39 == ((unsigned long int) (((((var_1_28) > (3696626072u)) ? (var_1_28) : (3696626072u))) - var_1_23)))) && (var_1_21 ? ((((var_1_6 * var_1_14) * 0.25f) <= ((((9.99999999999925E12) > (var_1_1)) ? (9.99999999999925E12) : (var_1_1)))) ? ((var_1_8 || var_1_26) ? (var_1_40 == ((unsigned short int) ((((((((var_1_38) < (var_1_16)) ? (var_1_38) : (var_1_16)))) < (((((var_1_24) < (((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31))))) ? (var_1_24) : (((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31)))))))) ? (((((var_1_38) < (var_1_16)) ? (var_1_38) : (var_1_16)))) : (((((var_1_24) < (((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31))))) ? (var_1_24) : (((((var_1_34) < (var_1_31)) ? (var_1_34) : (var_1_31))))))))))) : (var_1_40 == ((unsigned short int) ((((((var_1_32 - 16)) > (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? ((var_1_32 - 16)) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) + (((((var_1_38 + var_1_35)) < (var_1_24)) ? ((var_1_38 + var_1_35)) : (var_1_24))))))) : ((var_1_27 > var_1_34) ? (var_1_40 == ((unsigned short int) var_1_32)) : 1)) : 1)) && ((((var_1_24 + var_1_28) + last_1_var_1_13) > (32u * (- 10u))) ? (var_1_41 == ((unsigned char) var_1_11)) : (var_1_41 == ((unsigned char) (var_1_12 || var_1_21))))) && ((var_1_19 >= var_1_32) ? ((((((((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)))) < ((var_1_40 & var_1_39))) ? (((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)))) : ((var_1_40 & var_1_39)))) < (var_1_55 * var_1_67)) ? ((((var_1_40 * var_1_35) / var_1_34) <= ((var_1_37 - var_1_31) * (var_1_40 ^ var_1_16))) ? (var_1_42 == ((unsigned char) (((((var_1_25 + var_1_34)) < (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))) ? ((var_1_25 + var_1_34)) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))))) : (var_1_42 == ((unsigned char) (var_1_44 + var_1_25)))) : (var_1_42 == ((unsigned char) (((((((((var_1_45 - var_1_24)) > ((var_1_46 - var_1_25))) ? ((var_1_45 - var_1_24)) : ((var_1_46 - var_1_25))))) > (var_1_47)) ? ((((((var_1_45 - var_1_24)) > ((var_1_46 - var_1_25))) ? ((var_1_45 - var_1_24)) : ((var_1_46 - var_1_25))))) : (var_1_47)))))) : (var_1_42 == ((unsigned char) var_1_46)))) && (var_1_48 == ((signed char) (var_1_35 + -2)))) && (((128 - var_1_25) < var_1_47) ? (var_1_74 ? (var_1_49 == ((float) (var_1_6 - var_1_7))) : 1) : (var_1_74 ? ((((var_1_83 / var_1_45) << 5) < var_1_46) ? (var_1_49 == ((float) var_1_7)) : (var_1_49 == ((float) (var_1_50 + var_1_4)))) : (var_1_49 == ((float) (((((((var_1_3) < (var_1_6)) ? (var_1_3) : (var_1_6))) < 0 ) ? -((((var_1_3) < (var_1_6)) ? (var_1_3) : (var_1_6))) : ((((var_1_3) < (var_1_6)) ? (var_1_3) : (var_1_6)))))))))) && (((16 + ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)))) != var_1_24) ? (var_1_51 == ((unsigned char) (var_1_45 - (var_1_23 + var_1_24)))) : (var_1_64 ? (var_1_51 == ((unsigned char) (var_1_52 - var_1_24))) : (((0.75f / ((((var_1_14) < (var_1_53)) ? (var_1_14) : (var_1_53)))) < var_1_50) ? (var_1_51 == ((unsigned char) ((((var_1_35) < (var_1_47)) ? (var_1_35) : (var_1_47))))) : 1)))) && ((var_1_12 && var_1_17) ? (var_1_54 == ((signed short int) (((((var_1_31 + -128)) > (0)) ? ((var_1_31 + -128)) : (0))))) : 1)) && ((var_1_75 || (var_1_17 || var_1_64)) ? ((var_1_31 > var_1_47) ? (var_1_17 ? (var_1_55 == ((unsigned long int) (((((var_1_28 - (var_1_58 - var_1_52))) < (32u)) ? ((var_1_28 - (var_1_58 - var_1_52))) : (32u))))) : (var_1_55 == ((unsigned long int) ((((((((2u) < (var_1_24)) ? (2u) : (var_1_24)))) > ((var_1_28 - var_1_25))) ? (((((2u) < (var_1_24)) ? (2u) : (var_1_24)))) : ((var_1_28 - var_1_25))))))) : 1) : 1)) && (var_1_68 ? (var_1_17 ? ((! (var_1_14 > var_1_5)) ? (var_1_59 == ((signed char) (((((var_1_23 + 1) < 0 ) ? -(var_1_23 + 1) : (var_1_23 + 1))) - var_1_25))) : 1) : (var_1_59 == ((signed char) (var_1_60 + var_1_23)))) : ((var_1_29 < var_1_91) ? (var_1_59 == ((signed char) var_1_24)) : (var_1_59 == ((signed char) ((((var_1_25) < ((var_1_35 + var_1_24))) ? (var_1_25) : ((var_1_35 + var_1_24))))))))) && (var_1_61 == ((float) ((((var_1_6) < (var_1_50)) ? (var_1_6) : (var_1_50)))))) && (var_1_18 ? (var_1_62 == ((unsigned char) ((((var_1_47) > (var_1_25)) ? (var_1_47) : (var_1_25))))) : 1)) && (var_1_75 ? (var_1_63 == ((unsigned char) (var_1_35 + (var_1_34 - var_1_24)))) : 1)) && ((var_1_23 < var_1_31) ? (var_1_64 == ((unsigned char) (var_1_21 && (var_1_12 || var_1_65)))) : (((var_1_60 == var_1_34) || (last_1_var_1_84 >= last_1_var_1_40)) ? (var_1_64 == ((unsigned char) ((last_1_var_1_92 >= var_1_10) || (var_1_65 || var_1_11)))) : (var_1_64 == ((unsigned char) var_1_18))))) && (((var_1_23 <= var_1_58) && last_1_var_1_41) ? ((var_1_31 >= last_1_var_1_37) ? (var_1_67 == ((signed long int) (last_1_var_1_13 + last_1_var_1_77))) : ((last_1_var_1_74 && last_1_var_1_75) ? (var_1_67 == ((signed long int) var_1_25)) : (var_1_67 == ((signed long int) (last_1_var_1_91 - var_1_38))))) : (var_1_67 == ((signed long int) (var_1_44 + var_1_45))))) && ((var_1_29 >= (var_1_40 % var_1_46)) ? (var_1_68 == ((unsigned char) var_1_12)) : ((var_1_87 > (var_1_34 - var_1_44)) ? (var_1_68 == ((unsigned char) (((! var_1_11) || var_1_21) || var_1_12))) : 1))) && ((((((- var_1_7) < 0 ) ? -(- var_1_7) : (- var_1_7))) <= var_1_50) ? (var_1_69 == ((float) var_1_50)) : ((var_1_34 == (var_1_42 / var_1_70)) ? (var_1_69 == ((float) ((((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) < ((var_1_7 - (var_1_71 + var_1_72)))) ? (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) : ((var_1_7 - (var_1_71 + var_1_72))))))) : (var_1_69 == ((float) (var_1_71 - var_1_6)))))) && ((var_1_71 > var_1_7) ? (((var_1_71 - var_1_6) > var_1_1) ? (var_1_73 == ((signed char) ((((var_1_35) < ((var_1_24 - 8))) ? (var_1_35) : ((var_1_24 - 8)))))) : ((var_1_25 == var_1_29) ? ((var_1_30 < var_1_32) ? (var_1_73 == ((signed char) (var_1_25 - var_1_23))) : (var_1_73 == ((signed char) var_1_23))) : 1)) : 1)) && ((var_1_6 < last_1_var_1_69) ? (last_1_var_1_68 ? ((var_1_16 < var_1_52) ? (var_1_74 == ((unsigned char) ((! last_1_var_1_64) && var_1_65))) : (last_1_var_1_64 ? (var_1_74 == ((unsigned char) ((last_1_var_1_26 || (! var_1_21)) && var_1_18))) : 1)) : (var_1_74 == ((unsigned char) (! (last_1_var_1_68 || (last_1_var_1_26 || var_1_18)))))) : ((((~ var_1_19) + var_1_60) == (var_1_23 / var_1_38)) ? ((((((last_1_var_1_89) < (var_1_14)) ? (last_1_var_1_89) : (var_1_14))) >= last_1_var_1_69) ? (var_1_74 == ((unsigned char) ((var_1_52 >= (var_1_45 - 1)) || (! var_1_21)))) : 1) : 1))) && ((var_1_39 >= var_1_58) ? ((var_1_17 && var_1_8) ? (var_1_75 == ((unsigned char) (! var_1_11))) : 1) : (var_1_75 == ((unsigned char) (! var_1_18))))) && ((var_1_68 && (var_1_39 > var_1_37)) ? ((! (99.9 <= var_1_53)) ? (var_1_77 == ((unsigned char) ((((((((var_1_46) > (var_1_34)) ? (var_1_46) : (var_1_34)))) > (var_1_44)) ? (((((var_1_46) > (var_1_34)) ? (var_1_46) : (var_1_34)))) : (var_1_44))))) : (var_1_77 == ((unsigned char) ((var_1_34 - (var_1_78 - var_1_79)) + var_1_24)))) : 1)) && ((var_1_50 > var_1_49) ? (var_1_80 == ((signed long int) ((((((var_1_85 - var_1_25) + var_1_67)) < (((((var_1_29 + var_1_30) < 0 ) ? -(var_1_29 + var_1_30) : (var_1_29 + var_1_30))))) ? (((var_1_85 - var_1_25) + var_1_67)) : (((((var_1_29 + var_1_30) < 0 ) ? -(var_1_29 + var_1_30) : (var_1_29 + var_1_30)))))))) : (var_1_80 == ((signed long int) (var_1_23 + -5))))) && ((((var_1_5 / var_1_53) + ((((var_1_71) > (8.5f)) ? (var_1_71) : (8.5f)))) != ((((var_1_92) < (31.4)) ? (var_1_92) : (31.4)))) ? (var_1_82 == ((signed char) (((((var_1_24) > (var_1_35)) ? (var_1_24) : (var_1_35))) - var_1_25))) : 1)) && ((((((var_1_99) > (var_1_40)) ? (var_1_99) : (var_1_40))) != (~ last_1_var_1_83)) ? (((var_1_16 < var_1_39) || var_1_18) ? (var_1_83 == ((unsigned short int) last_1_var_1_83)) : 1) : (var_1_83 == ((unsigned short int) (var_1_30 - var_1_70))))) && ((var_1_27 <= (var_1_51 % (var_1_28 - var_1_45))) ? ((var_1_50 < var_1_14) ? (var_1_84 == ((unsigned char) (var_1_25 + (var_1_23 + var_1_35)))) : 1) : 1)) && (var_1_17 ? (var_1_85 == ((unsigned char) var_1_34)) : 1)) && ((var_1_75 || var_1_41) ? (((((((var_1_5 * var_1_53)) > (var_1_93)) ? ((var_1_5 * var_1_53)) : (var_1_93))) < (var_1_71 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) ? (var_1_87 == ((unsigned short int) (var_1_34 + var_1_32))) : (var_1_87 == ((unsigned short int) var_1_55))) : (var_1_87 == ((unsigned short int) var_1_88)))) && (var_1_41 ? (var_1_89 == ((double) 15.5)) : (var_1_89 == ((double) var_1_7)))) && (var_1_68 ? (var_1_91 == ((signed short int) var_1_19)) : (var_1_91 == ((signed short int) var_1_33)))) && (var_1_74 ? (var_1_92 == ((double) var_1_6)) : (var_1_92 == ((double) var_1_7)))) && (var_1_17 ? (var_1_93 == ((float) var_1_72)) : (var_1_93 == ((float) 0.75f)))) && (var_1_94 == ((float) var_1_4))) && (var_1_95 == ((float) var_1_3))) && (var_1_75 ? (var_1_96 == ((unsigned short int) var_1_97)) : (var_1_96 == ((unsigned short int) var_1_13)))) && (var_1_65 ? (var_1_98 == ((unsigned char) var_1_79)) : (var_1_98 == ((unsigned char) var_1_46)))) && (var_1_99 == ((unsigned char) (var_1_45 - (var_1_34 - var_1_23))))) && ((var_1_37 > ((var_1_28 * var_1_29) ^ var_1_16)) ? (var_1_100 == ((signed char) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) : (var_1_100 == ((signed char) var_1_79)))
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

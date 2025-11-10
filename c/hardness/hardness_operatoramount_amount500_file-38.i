// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch38Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 200;
unsigned short int var_1_3 = 32;
unsigned short int var_1_4 = 32;
unsigned short int var_1_5 = 42139;
unsigned short int var_1_6 = 4;
unsigned short int var_1_7 = 1;
double var_1_9 = 0.1;
unsigned short int var_1_13 = 2;
unsigned short int var_1_14 = 23066;
unsigned short int var_1_15 = 28154;
unsigned short int var_1_16 = 57641;
unsigned short int var_1_17 = 8;
unsigned short int var_1_18 = 100;
unsigned short int var_1_19 = 32;
unsigned short int var_1_20 = 256;
unsigned short int var_1_22 = 10000;
signed char var_1_23 = -16;
signed char var_1_25 = 8;
signed char var_1_26 = 8;
unsigned short int var_1_27 = 10;
unsigned char var_1_29 = 16;
unsigned char var_1_30 = 200;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 100;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 4;
float var_1_35 = 49.5;
unsigned char var_1_36 = 100;
unsigned long int var_1_37 = 2;
unsigned long int var_1_38 = 1651095723;
signed short int var_1_39 = 5;
double var_1_40 = 7.75;
double var_1_41 = 7.375;
double var_1_42 = 127.5;
double var_1_43 = 3.2;
double var_1_45 = 255.7;
double var_1_46 = 1.25;
double var_1_47 = 99.6;
double var_1_48 = 7.75;
double var_1_49 = 0.625;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
double var_1_52 = 5.85;
signed long int var_1_53 = -500;
signed long int var_1_54 = 1;
signed long int var_1_55 = -5;
signed long int var_1_56 = 1000000000;
signed long int var_1_57 = 10;
double var_1_58 = 255.5;
double var_1_59 = 2.4;
double var_1_60 = 10.6;
signed long int var_1_61 = -32;
double var_1_62 = 64.5;
signed long int var_1_63 = 5;
double var_1_64 = 127.5;
signed char var_1_65 = -32;
float var_1_66 = 0.0;
signed char var_1_67 = 50;
signed char var_1_68 = 32;
signed char var_1_69 = 5;
float var_1_70 = 1.8;
unsigned long int var_1_71 = 50;
unsigned long int var_1_72 = 1468971295;
unsigned long int var_1_73 = 1385592794;
unsigned long int var_1_74 = 3996460118;
unsigned long int var_1_75 = 128;
signed char var_1_76 = -2;
signed char var_1_77 = -16;
double var_1_78 = 49.31;
double var_1_80 = 0.0;
double var_1_81 = 9.875;
double var_1_82 = 1.5;
double var_1_83 = 1.5;
double var_1_84 = 63.75;
unsigned char var_1_85 = 128;
float var_1_86 = 3.25;
signed long int var_1_87 = -200;
signed long int var_1_88 = -5;
unsigned long int var_1_89 = 256;
unsigned char var_1_90 = 1;
unsigned char var_1_91 = 0;
unsigned long int var_1_92 = 25;
signed long int var_1_93 = 32;
unsigned long int var_1_94 = 2;
unsigned char var_1_95 = 128;
unsigned long int var_1_96 = 2134454774;
unsigned char var_1_97 = 0;
unsigned char var_1_98 = 1;
unsigned long int var_1_99 = 256;
double var_1_100 = 16.6;
signed long int var_1_101 = 2;
double var_1_102 = 1000000.5;
unsigned short int var_1_103 = 64;
signed long int var_1_104 = 256;
unsigned char var_1_105 = 10;
unsigned char var_1_106 = 100;
signed short int var_1_107 = 200;
double var_1_109 = 64.5;
unsigned long int last_1_var_1_37 = 2;
double last_1_var_1_40 = 7.75;
signed long int last_1_var_1_53 = -500;
signed long int last_1_var_1_54 = 1;
signed long int last_1_var_1_61 = -32;
unsigned char last_1_var_1_85 = 128;
unsigned long int last_1_var_1_89 = 256;
unsigned long int last_1_var_1_92 = 25;
unsigned char last_1_var_1_97 = 0;
signed long int last_1_var_1_104 = 256;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_22 = last_1_var_1_54;
 if (last_1_var_1_85 <= stepLocal_22) {
  var_1_89 = (last_1_var_1_37 + last_1_var_1_104);
 } else {
  var_1_89 = (var_1_74 - ((((var_1_15) > (var_1_5)) ? (var_1_15) : (var_1_5))));
 }
 if (255.625f > (last_1_var_1_40 / var_1_35)) {
  if (last_1_var_1_53 < last_1_var_1_54) {
   var_1_61 = (var_1_56 + ((((last_1_var_1_104) < ((var_1_18 - last_1_var_1_92))) ? (last_1_var_1_104) : ((var_1_18 - last_1_var_1_92)))));
  }
 }
 if (last_1_var_1_61 <= ((((var_1_68) < (5)) ? (var_1_68) : (5)))) {
  var_1_87 = ((25 - var_1_3) + (var_1_26 + var_1_88));
 } else {
  var_1_87 = ((var_1_68 + 2) - last_1_var_1_61);
 }
 unsigned long int stepLocal_24 = last_1_var_1_89;
 if (stepLocal_24 < ((var_1_74 - var_1_5) * var_1_69)) {
  if (last_1_var_1_40 != var_1_48) {
   var_1_92 = (var_1_68 + var_1_30);
  } else {
   var_1_92 = (var_1_74 - last_1_var_1_92);
  }
 } else {
  var_1_92 = (4078447304u - (var_1_69 + var_1_31));
 }
 unsigned char stepLocal_8 = var_1_30;
 if (var_1_17 == stepLocal_8) {
  var_1_50 = (! ((var_1_38 >= last_1_var_1_89) && (last_1_var_1_97 && var_1_51)));
 }
 if (var_1_50) {
  var_1_97 = var_1_98;
 } else {
  var_1_97 = var_1_51;
 }
 if (var_1_97) {
  var_1_1 = (((((var_1_3 + var_1_4)) < ((var_1_5 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))) ? ((var_1_3 + var_1_4)) : ((var_1_5 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))));
 } else {
  var_1_1 = (((((var_1_5 - var_1_6)) < ((var_1_3 + (256 + 1)))) ? ((var_1_5 - var_1_6)) : ((var_1_3 + (256 + 1)))));
 }
 if (var_1_50) {
  var_1_99 = var_1_33;
 }
 if (! (var_1_97 && var_1_50)) {
  var_1_23 = (var_1_25 - var_1_26);
 }
 if (var_1_97) {
  var_1_52 = (var_1_49 + var_1_48);
 } else {
  var_1_52 = ((var_1_49 + var_1_48) - (7.2 + ((((4.375) > (var_1_47)) ? (4.375) : (var_1_47)))));
 }
 if ((- (var_1_42 + 24.75f)) >= (- 99.2)) {
  var_1_55 = var_1_16;
 } else {
  var_1_55 = (((var_1_56 - 50) - var_1_57) + var_1_25);
 }
 unsigned long int stepLocal_11 = var_1_38;
 signed long int stepLocal_10 = var_1_16 - 8;
 if (stepLocal_11 < var_1_13) {
  if (var_1_4 >= stepLocal_10) {
   var_1_58 = ((var_1_59 + (var_1_60 - 9999999.5)) + var_1_45);
  } else {
   var_1_58 = (var_1_43 - var_1_60);
  }
 }
 var_1_86 = (((var_1_81 - var_1_60) + var_1_83) + var_1_49);
 unsigned char stepLocal_23 = var_1_31;
 if (stepLocal_23 > var_1_57) {
  var_1_90 = (! (var_1_51 || var_1_91));
 } else {
  var_1_90 = (var_1_51 || var_1_91);
 }
 if (var_1_97) {
  var_1_100 = var_1_60;
 }
 var_1_102 = 0.12;
 if (var_1_97) {
  var_1_103 = var_1_18;
 } else {
  var_1_103 = var_1_3;
 }
 var_1_104 = var_1_67;
 var_1_105 = ((((((((var_1_32) < (var_1_31)) ? (var_1_32) : (var_1_31)))) > (var_1_106)) ? (((((var_1_32) < (var_1_31)) ? (var_1_32) : (var_1_31)))) : (var_1_106)));
 var_1_109 = var_1_80;
 unsigned long int stepLocal_30 = var_1_89;
 if (var_1_91) {
  if ((((((var_1_74 * var_1_14)) < (var_1_5)) ? ((var_1_74 * var_1_14)) : (var_1_5))) != stepLocal_30) {
   var_1_107 = (var_1_106 + var_1_92);
  }
 } else {
  var_1_107 = (((((var_1_30 - var_1_68)) < ((var_1_106 - ((((var_1_69) < (0)) ? (var_1_69) : (0)))))) ? ((var_1_30 - var_1_68)) : ((var_1_106 - ((((var_1_69) < (0)) ? (var_1_69) : (0)))))));
 }
 signed long int stepLocal_3 = var_1_61;
 if (var_1_9 < (var_1_109 / 0.125)) {
  if ((2 * ((((var_1_14) < (var_1_3)) ? (var_1_14) : (var_1_3)))) < stepLocal_3) {
   var_1_27 = (var_1_5 - var_1_15);
  } else {
   var_1_27 = ((((var_1_18) > (5)) ? (var_1_18) : (5)));
  }
 } else {
  var_1_27 = ((var_1_14 + var_1_15) - (var_1_22 + ((((var_1_26) > (var_1_18)) ? (var_1_26) : (var_1_18)))));
 }
 unsigned long int stepLocal_26 = var_1_73;
 unsigned short int stepLocal_25 = var_1_27;
 if ((var_1_4 + var_1_56) > stepLocal_26) {
  var_1_93 = var_1_92;
 } else {
  if (var_1_90) {
   var_1_93 = ((((var_1_6) < ((((((var_1_68) < (var_1_69)) ? (var_1_68) : (var_1_69))) + var_1_18))) ? (var_1_6) : ((((((var_1_68) < (var_1_69)) ? (var_1_68) : (var_1_69))) + var_1_18))));
  } else {
   if ((-10 + var_1_87) < stepLocal_25) {
    var_1_93 = ((var_1_13 - 8) + var_1_17);
   } else {
    var_1_93 = (var_1_92 + var_1_1);
   }
  }
 }
 unsigned char stepLocal_5 = var_1_50;
 if (stepLocal_5 || (var_1_32 == var_1_33)) {
  if (var_1_50) {
   var_1_39 = (-32 + var_1_87);
  } else {
   if (var_1_90) {
    var_1_39 = ((((-128 + ((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32)))) < 0 ) ? -(-128 + ((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32)))) : (-128 + ((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32))))));
   } else {
    var_1_39 = var_1_17;
   }
  }
 } else {
  var_1_39 = var_1_87;
 }
 unsigned char stepLocal_7 = var_1_50;
 unsigned short int stepLocal_6 = var_1_16;
 if (stepLocal_6 <= 1000) {
  if (var_1_50) {
   var_1_40 = (var_1_41 - ((((var_1_42 - var_1_43) < 0 ) ? -(var_1_42 - var_1_43) : (var_1_42 - var_1_43))));
  } else {
   var_1_40 = var_1_41;
  }
 } else {
  if (stepLocal_7 || var_1_90) {
   var_1_40 = (var_1_45 + var_1_46);
  } else {
   var_1_40 = (var_1_45 + (var_1_47 - ((((var_1_48) > (var_1_49)) ? (var_1_48) : (var_1_49)))));
  }
 }
 if (var_1_19 > 8) {
  var_1_29 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 } else {
  if (var_1_18 < (var_1_93 * (var_1_3 ^ 5))) {
   var_1_29 = ((((5) > (var_1_26)) ? (5) : (var_1_26)));
  } else {
   var_1_29 = ((var_1_30 - var_1_31) - (var_1_32 - (10 + var_1_33)));
  }
 }
 unsigned short int stepLocal_4 = var_1_6;
 if (stepLocal_4 <= var_1_93) {
  if ((var_1_9 / var_1_35) > var_1_58) {
   var_1_34 = ((((((var_1_32 + 100) - var_1_33)) > ((var_1_30 - (var_1_36 - var_1_31)))) ? (((var_1_32 + 100) - var_1_33)) : ((var_1_30 - (var_1_36 - var_1_31)))));
  }
 }
 unsigned char stepLocal_12 = var_1_90;
 if (var_1_51 || stepLocal_12) {
  if (((var_1_66 - var_1_49) - var_1_41) > var_1_60) {
   if (var_1_41 < (var_1_102 + var_1_35)) {
    var_1_65 = var_1_33;
   } else {
    var_1_65 = (((var_1_67 - var_1_33) + (var_1_68 + var_1_69)) - 1);
   }
  }
 } else {
  var_1_65 = (var_1_26 - var_1_69);
 }
 signed long int stepLocal_14 = (((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22));
 unsigned char stepLocal_13 = ! var_1_51;
 if ((((((var_1_89) < (var_1_25)) ? (var_1_89) : (var_1_25))) - var_1_6) <= stepLocal_14) {
  var_1_70 = (var_1_46 + var_1_47);
 } else {
  if (stepLocal_13 && ((! var_1_90) || var_1_90)) {
   var_1_70 = var_1_41;
  } else {
   var_1_70 = ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)));
  }
 }
 unsigned char stepLocal_21 = var_1_50;
 signed long int stepLocal_20 = var_1_69 - var_1_32;
 unsigned short int stepLocal_19 = var_1_3;
 unsigned short int stepLocal_18 = var_1_3;
 if (stepLocal_20 >= var_1_13) {
  if (var_1_97) {
   if (var_1_107 <= stepLocal_19) {
    var_1_85 = (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) - ((((var_1_32) > (((((var_1_67) > (var_1_33)) ? (var_1_67) : (var_1_33))))) ? (var_1_32) : (((((var_1_67) > (var_1_33)) ? (var_1_67) : (var_1_33)))))));
   } else {
    if (var_1_97 || stepLocal_21) {
     var_1_85 = var_1_36;
    } else {
     if (var_1_31 == stepLocal_18) {
      var_1_85 = 1;
     }
    }
   }
  } else {
   var_1_85 = ((((16) > (((((var_1_30) > (((((var_1_31) < (var_1_69)) ? (var_1_31) : (var_1_69))))) ? (var_1_30) : (((((var_1_31) < (var_1_69)) ? (var_1_31) : (var_1_69)))))))) ? (16) : (((((var_1_30) > (((((var_1_31) < (var_1_69)) ? (var_1_31) : (var_1_69))))) ? (var_1_30) : (((((var_1_31) < (var_1_69)) ? (var_1_31) : (var_1_69)))))))));
  }
 }
 if (((var_1_14 << var_1_5) * (var_1_39 / var_1_22)) < var_1_72) {
  if (((- var_1_9) + var_1_46) >= var_1_35) {
   var_1_78 = ((((((((var_1_41 - var_1_42)) < (var_1_47)) ? ((var_1_41 - var_1_42)) : (var_1_47))) < 0 ) ? -(((((var_1_41 - var_1_42)) < (var_1_47)) ? ((var_1_41 - var_1_42)) : (var_1_47))) : (((((var_1_41 - var_1_42)) < (var_1_47)) ? ((var_1_41 - var_1_42)) : (var_1_47)))));
  } else {
   if (var_1_50) {
    if (var_1_73 >= var_1_18) {
     var_1_78 = var_1_64;
    } else {
     if ((-10 < var_1_92) || var_1_50) {
      var_1_78 = var_1_42;
     } else {
      if (var_1_47 > var_1_102) {
       var_1_78 = (var_1_48 - (var_1_80 - (var_1_60 + var_1_81)));
      } else {
       if (var_1_50) {
        var_1_78 = (var_1_82 + var_1_81);
       } else {
        var_1_78 = 16.4;
       }
      }
     }
    }
   } else {
    var_1_78 = var_1_41;
   }
  }
 } else {
  if (var_1_97 && var_1_90) {
   var_1_78 = (var_1_81 - var_1_42);
  } else {
   if (var_1_27 >= ((var_1_99 + var_1_36) * var_1_92)) {
    var_1_78 = var_1_42;
   } else {
    if ((var_1_82 / var_1_35) > 127.5) {
     var_1_78 = (var_1_48 - var_1_43);
    } else {
     var_1_78 = ((var_1_60 + (var_1_83 + var_1_84)) + ((2.7787266778944676E18 - var_1_81) - var_1_49));
    }
   }
  }
 }
 unsigned short int stepLocal_1 = var_1_4;
 unsigned short int stepLocal_0 = var_1_5;
 if ((var_1_40 / var_1_9) != var_1_78) {
  if (var_1_9 >= var_1_78) {
   var_1_7 = var_1_6;
  } else {
   if (stepLocal_0 <= var_1_6) {
    if (stepLocal_1 < ((var_1_6 + var_1_87) + (var_1_92 / var_1_5))) {
     if (var_1_40 != var_1_9) {
      var_1_7 = (var_1_5 - var_1_13);
     } else {
      if (var_1_78 >= var_1_40) {
       var_1_7 = ((var_1_14 + var_1_15) - var_1_3);
      }
     }
    } else {
     var_1_7 = ((var_1_16 - ((((var_1_17) > (5)) ? (var_1_17) : (5)))) - var_1_13);
    }
   } else {
    var_1_7 = (((((var_1_17) > (var_1_3)) ? (var_1_17) : (var_1_3))) + (var_1_14 - (var_1_18 + var_1_19)));
   }
  }
 } else {
  var_1_7 = var_1_3;
 }
 signed long int stepLocal_2 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) * var_1_3;
 if ((var_1_7 + 10) != stepLocal_2) {
  var_1_20 = (var_1_3 + (var_1_14 - (var_1_22 - var_1_19)));
 } else {
  var_1_20 = var_1_6;
 }
 if (var_1_109 > var_1_102) {
  if (var_1_30 == var_1_26) {
   if ((var_1_61 < (var_1_5 - 32)) && var_1_50) {
    var_1_37 = ((((var_1_93) < 0 ) ? -(var_1_93) : (var_1_93)));
   } else {
    var_1_37 = ((1592924859u + 1867977025u) - (((((var_1_38 - var_1_93)) > (((((var_1_16) > (var_1_13)) ? (var_1_16) : (var_1_13))))) ? ((var_1_38 - var_1_93)) : (((((var_1_16) > (var_1_13)) ? (var_1_16) : (var_1_13)))))));
   }
  }
 } else {
  if ((((((var_1_20 / var_1_32)) < (1u)) ? ((var_1_20 / var_1_32)) : (1u))) < var_1_5) {
   var_1_37 = var_1_16;
  } else {
   var_1_37 = ((((((var_1_61 + var_1_6)) < ((var_1_38 - var_1_93))) ? ((var_1_61 + var_1_6)) : ((var_1_38 - var_1_93)))) + var_1_15);
  }
 }
 unsigned long int stepLocal_9 = var_1_92;
 if (stepLocal_9 >= var_1_37) {
  var_1_54 = ((((var_1_39) < (var_1_87)) ? (var_1_39) : (var_1_87)));
 } else {
  var_1_54 = ((((var_1_39) > ((var_1_22 - (last_1_var_1_54 + var_1_17)))) ? (var_1_39) : ((var_1_22 - (last_1_var_1_54 + var_1_17)))));
 }
 if (var_1_50) {
  var_1_53 = ((((var_1_5) < (((((var_1_37) > (var_1_4)) ? (var_1_37) : (var_1_4))))) ? (var_1_5) : (((((var_1_37) > (var_1_4)) ? (var_1_37) : (var_1_4))))));
 } else {
  if (var_1_97 && var_1_51) {
   var_1_53 = ((var_1_55 - var_1_7) + ((((var_1_25 + var_1_36) < 0 ) ? -(var_1_25 + var_1_36) : (var_1_25 + var_1_36))));
  }
 }
 if (((var_1_32 - var_1_26) * (~ 5)) <= (var_1_37 + var_1_22)) {
  var_1_62 = (var_1_42 - var_1_49);
 } else {
  var_1_62 = ((((((4.55 + var_1_59) + var_1_64)) < (var_1_49)) ? (((4.55 + var_1_59) + var_1_64)) : (var_1_49)));
 }
 signed long int stepLocal_17 = var_1_61;
 unsigned short int stepLocal_16 = var_1_22;
 unsigned long int stepLocal_15 = var_1_37 + ((((var_1_18) < (var_1_89)) ? (var_1_18) : (var_1_89)));
 if (200.2f >= ((var_1_41 - 7.6f) * var_1_40)) {
  if (var_1_104 <= stepLocal_16) {
   var_1_71 = ((((var_1_1 + 2u) < 0 ) ? -(var_1_1 + 2u) : (var_1_1 + 2u)));
  } else {
   var_1_71 = ((var_1_38 + ((((var_1_72) > (var_1_73)) ? (var_1_72) : (var_1_73)))) - var_1_103);
  }
 } else {
  if (var_1_89 > stepLocal_17) {
   if (var_1_51) {
    if (var_1_50) {
     if (128 >= stepLocal_15) {
      var_1_71 = ((((2704285562u - var_1_89) < 0 ) ? -(2704285562u - var_1_89) : (2704285562u - var_1_89)));
     }
    } else {
     var_1_71 = (var_1_74 - var_1_55);
    }
   } else {
    if (var_1_90) {
     var_1_71 = (((((((((var_1_74 - var_1_33)) > ((var_1_36 + 10u))) ? ((var_1_74 - var_1_33)) : ((var_1_36 + 10u))))) < (var_1_57)) ? ((((((var_1_74 - var_1_33)) > ((var_1_36 + 10u))) ? ((var_1_74 - var_1_33)) : ((var_1_36 + 10u))))) : (var_1_57)));
    } else {
     var_1_71 = (((((var_1_74 - var_1_6)) < (((((8u) < ((var_1_75 + var_1_3))) ? (8u) : ((var_1_75 + var_1_3)))))) ? ((var_1_74 - var_1_6)) : (((((8u) < ((var_1_75 + var_1_3))) ? (8u) : ((var_1_75 + var_1_3)))))));
    }
   }
  }
 }
 if (var_1_50) {
  if (var_1_71 >= (var_1_73 + var_1_37)) {
   if (var_1_51 && (4 <= (var_1_33 * var_1_16))) {
    if (var_1_68 != var_1_19) {
     var_1_76 = var_1_25;
    } else {
     var_1_76 = ((var_1_33 + var_1_69) + var_1_31);
    }
   } else {
    var_1_76 = ((((16) < 0 ) ? -(16) : (16)));
   }
  } else {
   var_1_76 = (var_1_77 + var_1_68);
  }
 }
 unsigned char stepLocal_29 = var_1_30;
 signed long int stepLocal_28 = var_1_88;
 unsigned char stepLocal_27 = var_1_90;
 if (stepLocal_27 && (var_1_97 && (var_1_84 >= var_1_100))) {
  if (stepLocal_28 >= var_1_32) {
   var_1_94 = (var_1_63 + var_1_19);
  } else {
   if (stepLocal_29 >= (var_1_95 - 16)) {
    var_1_94 = ((((var_1_69) < (var_1_14)) ? (var_1_69) : (var_1_14)));
   } else {
    var_1_94 = ((var_1_72 + (var_1_96 - var_1_36)) - ((((var_1_69) > ((var_1_53 + var_1_16))) ? (var_1_69) : ((var_1_53 + var_1_16)))));
   }
  }
 } else {
  var_1_94 = var_1_33;
 }
 if (var_1_50) {
  var_1_101 = var_1_57;
 } else {
  var_1_101 = var_1_71;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 16384);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 49150);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 8192);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 8191);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 8191);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 190);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 63);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 31);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 assume_abort_if_not(var_1_35 != 0.0F);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 63);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 1073741823);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -461168.6018427383000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 0);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 536870911);
 assume_abort_if_not(var_1_56 <= 1073741823);
 var_1_57 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 1073741823);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= -230584.3009213691400e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691400e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691400e+12F && var_1_60 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 2147483647);
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= -461168.6018427383000e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= 4611686.018427388000e+12F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854776000e+12F && var_1_66 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_67 >= 31);
 assume_abort_if_not(var_1_67 <= 63);
 var_1_68 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_68 >= 0);
 assume_abort_if_not(var_1_68 <= 32);
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 31);
 var_1_72 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_72 >= 1073741824);
 assume_abort_if_not(var_1_72 <= 2147483647);
 var_1_73 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_73 >= 1073741824);
 assume_abort_if_not(var_1_73 <= 2147483647);
 var_1_74 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_74 >= 2147483647);
 assume_abort_if_not(var_1_74 <= 4294967294);
 var_1_75 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 2147483647);
 var_1_77 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_77 >= -63);
 assume_abort_if_not(var_1_77 <= 63);
 var_1_80 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_80 >= 4611686.018427383000e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854766000e+12F && var_1_80 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 2305843.009213691400e+12F && var_1_81 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_82 >= -461168.6018427383000e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427383000e+12F && var_1_82 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_83 >= -115292.1504606845700e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 1152921.504606845700e+12F && var_1_83 >= 1.0e-20F ));
 var_1_84 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_84 >= -115292.1504606845700e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 1152921.504606845700e+12F && var_1_84 >= 1.0e-20F ));
 var_1_88 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_88 >= -536870911);
 assume_abort_if_not(var_1_88 <= 536870911);
 var_1_91 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_91 >= 0);
 assume_abort_if_not(var_1_91 <= 0);
 var_1_95 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_95 >= 127);
 assume_abort_if_not(var_1_95 <= 255);
 var_1_96 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_96 >= 1610612735);
 assume_abort_if_not(var_1_96 <= 2147483647);
 var_1_98 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_98 >= 1);
 assume_abort_if_not(var_1_98 <= 1);
 var_1_106 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_106 >= 0);
 assume_abort_if_not(var_1_106 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_37 = var_1_37;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_104 = var_1_104;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((var_1_97 ? (var_1_1 == ((unsigned short int) (((((var_1_3 + var_1_4)) < ((var_1_5 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))) ? ((var_1_3 + var_1_4)) : ((var_1_5 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))))) : (var_1_1 == ((unsigned short int) (((((var_1_5 - var_1_6)) < ((var_1_3 + (256 + 1)))) ? ((var_1_5 - var_1_6)) : ((var_1_3 + (256 + 1)))))))) && (((var_1_40 / var_1_9) != var_1_78) ? ((var_1_9 >= var_1_78) ? (var_1_7 == ((unsigned short int) var_1_6)) : ((var_1_5 <= var_1_6) ? ((var_1_4 < ((var_1_6 + var_1_87) + (var_1_92 / var_1_5))) ? ((var_1_40 != var_1_9) ? (var_1_7 == ((unsigned short int) (var_1_5 - var_1_13))) : ((var_1_78 >= var_1_40) ? (var_1_7 == ((unsigned short int) ((var_1_14 + var_1_15) - var_1_3))) : 1)) : (var_1_7 == ((unsigned short int) ((var_1_16 - ((((var_1_17) > (5)) ? (var_1_17) : (5)))) - var_1_13)))) : (var_1_7 == ((unsigned short int) (((((var_1_17) > (var_1_3)) ? (var_1_17) : (var_1_3))) + (var_1_14 - (var_1_18 + var_1_19))))))) : (var_1_7 == ((unsigned short int) var_1_3)))) && (((var_1_7 + 10) != (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) * var_1_3)) ? (var_1_20 == ((unsigned short int) (var_1_3 + (var_1_14 - (var_1_22 - var_1_19))))) : (var_1_20 == ((unsigned short int) var_1_6)))) && ((! (var_1_97 && var_1_50)) ? (var_1_23 == ((signed char) (var_1_25 - var_1_26))) : 1)) && ((var_1_9 < (var_1_109 / 0.125)) ? (((2 * ((((var_1_14) < (var_1_3)) ? (var_1_14) : (var_1_3)))) < var_1_61) ? (var_1_27 == ((unsigned short int) (var_1_5 - var_1_15))) : (var_1_27 == ((unsigned short int) ((((var_1_18) > (5)) ? (var_1_18) : (5)))))) : (var_1_27 == ((unsigned short int) ((var_1_14 + var_1_15) - (var_1_22 + ((((var_1_26) > (var_1_18)) ? (var_1_26) : (var_1_18))))))))) && ((var_1_19 > 8) ? (var_1_29 == ((unsigned char) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : ((var_1_18 < (var_1_93 * (var_1_3 ^ 5))) ? (var_1_29 == ((unsigned char) ((((5) > (var_1_26)) ? (5) : (var_1_26))))) : (var_1_29 == ((unsigned char) ((var_1_30 - var_1_31) - (var_1_32 - (10 + var_1_33)))))))) && ((var_1_6 <= var_1_93) ? (((var_1_9 / var_1_35) > var_1_58) ? (var_1_34 == ((unsigned char) ((((((var_1_32 + 100) - var_1_33)) > ((var_1_30 - (var_1_36 - var_1_31)))) ? (((var_1_32 + 100) - var_1_33)) : ((var_1_30 - (var_1_36 - var_1_31))))))) : 1) : 1)) && ((var_1_109 > var_1_102) ? ((var_1_30 == var_1_26) ? (((var_1_61 < (var_1_5 - 32)) && var_1_50) ? (var_1_37 == ((unsigned long int) ((((var_1_93) < 0 ) ? -(var_1_93) : (var_1_93))))) : (var_1_37 == ((unsigned long int) ((1592924859u + 1867977025u) - (((((var_1_38 - var_1_93)) > (((((var_1_16) > (var_1_13)) ? (var_1_16) : (var_1_13))))) ? ((var_1_38 - var_1_93)) : (((((var_1_16) > (var_1_13)) ? (var_1_16) : (var_1_13)))))))))) : 1) : (((((((var_1_20 / var_1_32)) < (1u)) ? ((var_1_20 / var_1_32)) : (1u))) < var_1_5) ? (var_1_37 == ((unsigned long int) var_1_16)) : (var_1_37 == ((unsigned long int) ((((((var_1_61 + var_1_6)) < ((var_1_38 - var_1_93))) ? ((var_1_61 + var_1_6)) : ((var_1_38 - var_1_93)))) + var_1_15)))))) && ((var_1_50 || (var_1_32 == var_1_33)) ? (var_1_50 ? (var_1_39 == ((signed short int) (-32 + var_1_87))) : (var_1_90 ? (var_1_39 == ((signed short int) ((((-128 + ((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32)))) < 0 ) ? -(-128 + ((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32)))) : (-128 + ((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32)))))))) : (var_1_39 == ((signed short int) var_1_17)))) : (var_1_39 == ((signed short int) var_1_87)))) && ((var_1_16 <= 1000) ? (var_1_50 ? (var_1_40 == ((double) (var_1_41 - ((((var_1_42 - var_1_43) < 0 ) ? -(var_1_42 - var_1_43) : (var_1_42 - var_1_43)))))) : (var_1_40 == ((double) var_1_41))) : ((var_1_50 || var_1_90) ? (var_1_40 == ((double) (var_1_45 + var_1_46))) : (var_1_40 == ((double) (var_1_45 + (var_1_47 - ((((var_1_48) > (var_1_49)) ? (var_1_48) : (var_1_49)))))))))) && ((var_1_17 == var_1_30) ? (var_1_50 == ((unsigned char) (! ((var_1_38 >= last_1_var_1_89) && (last_1_var_1_97 && var_1_51))))) : 1)) && (var_1_97 ? (var_1_52 == ((double) (var_1_49 + var_1_48))) : (var_1_52 == ((double) ((var_1_49 + var_1_48) - (7.2 + ((((4.375) > (var_1_47)) ? (4.375) : (var_1_47))))))))) && (var_1_50 ? (var_1_53 == ((signed long int) ((((var_1_5) < (((((var_1_37) > (var_1_4)) ? (var_1_37) : (var_1_4))))) ? (var_1_5) : (((((var_1_37) > (var_1_4)) ? (var_1_37) : (var_1_4)))))))) : ((var_1_97 && var_1_51) ? (var_1_53 == ((signed long int) ((var_1_55 - var_1_7) + ((((var_1_25 + var_1_36) < 0 ) ? -(var_1_25 + var_1_36) : (var_1_25 + var_1_36)))))) : 1))) && ((var_1_92 >= var_1_37) ? (var_1_54 == ((signed long int) ((((var_1_39) < (var_1_87)) ? (var_1_39) : (var_1_87))))) : (var_1_54 == ((signed long int) ((((var_1_39) > ((var_1_22 - (last_1_var_1_54 + var_1_17)))) ? (var_1_39) : ((var_1_22 - (last_1_var_1_54 + var_1_17))))))))) && (((- (var_1_42 + 24.75f)) >= (- 99.2)) ? (var_1_55 == ((signed long int) var_1_16)) : (var_1_55 == ((signed long int) (((var_1_56 - 50) - var_1_57) + var_1_25))))) && ((var_1_38 < var_1_13) ? ((var_1_4 >= (var_1_16 - 8)) ? (var_1_58 == ((double) ((var_1_59 + (var_1_60 - 9999999.5)) + var_1_45))) : (var_1_58 == ((double) (var_1_43 - var_1_60)))) : 1)) && ((255.625f > (last_1_var_1_40 / var_1_35)) ? ((last_1_var_1_53 < last_1_var_1_54) ? (var_1_61 == ((signed long int) (var_1_56 + ((((last_1_var_1_104) < ((var_1_18 - last_1_var_1_92))) ? (last_1_var_1_104) : ((var_1_18 - last_1_var_1_92))))))) : 1) : 1)) && ((((var_1_32 - var_1_26) * (~ 5)) <= (var_1_37 + var_1_22)) ? (var_1_62 == ((double) (var_1_42 - var_1_49))) : (var_1_62 == ((double) ((((((4.55 + var_1_59) + var_1_64)) < (var_1_49)) ? (((4.55 + var_1_59) + var_1_64)) : (var_1_49))))))) && ((var_1_51 || var_1_90) ? ((((var_1_66 - var_1_49) - var_1_41) > var_1_60) ? ((var_1_41 < (var_1_102 + var_1_35)) ? (var_1_65 == ((signed char) var_1_33)) : (var_1_65 == ((signed char) (((var_1_67 - var_1_33) + (var_1_68 + var_1_69)) - 1)))) : 1) : (var_1_65 == ((signed char) (var_1_26 - var_1_69))))) && (((((((var_1_89) < (var_1_25)) ? (var_1_89) : (var_1_25))) - var_1_6) <= ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) ? (var_1_70 == ((float) (var_1_46 + var_1_47))) : (((! var_1_51) && ((! var_1_90) || var_1_90)) ? (var_1_70 == ((float) var_1_41)) : (var_1_70 == ((float) ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))))))) && ((200.2f >= ((var_1_41 - 7.6f) * var_1_40)) ? ((var_1_104 <= var_1_22) ? (var_1_71 == ((unsigned long int) ((((var_1_1 + 2u) < 0 ) ? -(var_1_1 + 2u) : (var_1_1 + 2u))))) : (var_1_71 == ((unsigned long int) ((var_1_38 + ((((var_1_72) > (var_1_73)) ? (var_1_72) : (var_1_73)))) - var_1_103)))) : ((var_1_89 > var_1_61) ? (var_1_51 ? (var_1_50 ? ((128 >= (var_1_37 + ((((var_1_18) < (var_1_89)) ? (var_1_18) : (var_1_89))))) ? (var_1_71 == ((unsigned long int) ((((2704285562u - var_1_89) < 0 ) ? -(2704285562u - var_1_89) : (2704285562u - var_1_89))))) : 1) : (var_1_71 == ((unsigned long int) (var_1_74 - var_1_55)))) : (var_1_90 ? (var_1_71 == ((unsigned long int) (((((((((var_1_74 - var_1_33)) > ((var_1_36 + 10u))) ? ((var_1_74 - var_1_33)) : ((var_1_36 + 10u))))) < (var_1_57)) ? ((((((var_1_74 - var_1_33)) > ((var_1_36 + 10u))) ? ((var_1_74 - var_1_33)) : ((var_1_36 + 10u))))) : (var_1_57))))) : (var_1_71 == ((unsigned long int) (((((var_1_74 - var_1_6)) < (((((8u) < ((var_1_75 + var_1_3))) ? (8u) : ((var_1_75 + var_1_3)))))) ? ((var_1_74 - var_1_6)) : (((((8u) < ((var_1_75 + var_1_3))) ? (8u) : ((var_1_75 + var_1_3))))))))))) : 1))) && (var_1_50 ? ((var_1_71 >= (var_1_73 + var_1_37)) ? ((var_1_51 && (4 <= (var_1_33 * var_1_16))) ? ((var_1_68 != var_1_19) ? (var_1_76 == ((signed char) var_1_25)) : (var_1_76 == ((signed char) ((var_1_33 + var_1_69) + var_1_31)))) : (var_1_76 == ((signed char) ((((16) < 0 ) ? -(16) : (16)))))) : (var_1_76 == ((signed char) (var_1_77 + var_1_68)))) : 1)) && ((((var_1_14 << var_1_5) * (var_1_39 / var_1_22)) < var_1_72) ? ((((- var_1_9) + var_1_46) >= var_1_35) ? (var_1_78 == ((double) ((((((((var_1_41 - var_1_42)) < (var_1_47)) ? ((var_1_41 - var_1_42)) : (var_1_47))) < 0 ) ? -(((((var_1_41 - var_1_42)) < (var_1_47)) ? ((var_1_41 - var_1_42)) : (var_1_47))) : (((((var_1_41 - var_1_42)) < (var_1_47)) ? ((var_1_41 - var_1_42)) : (var_1_47))))))) : (var_1_50 ? ((var_1_73 >= var_1_18) ? (var_1_78 == ((double) var_1_64)) : (((-10 < var_1_92) || var_1_50) ? (var_1_78 == ((double) var_1_42)) : ((var_1_47 > var_1_102) ? (var_1_78 == ((double) (var_1_48 - (var_1_80 - (var_1_60 + var_1_81))))) : (var_1_50 ? (var_1_78 == ((double) (var_1_82 + var_1_81))) : (var_1_78 == ((double) 16.4)))))) : (var_1_78 == ((double) var_1_41)))) : ((var_1_97 && var_1_90) ? (var_1_78 == ((double) (var_1_81 - var_1_42))) : ((var_1_27 >= ((var_1_99 + var_1_36) * var_1_92)) ? (var_1_78 == ((double) var_1_42)) : (((var_1_82 / var_1_35) > 127.5) ? (var_1_78 == ((double) (var_1_48 - var_1_43))) : (var_1_78 == ((double) ((var_1_60 + (var_1_83 + var_1_84)) + ((2.7787266778944676E18 - var_1_81) - var_1_49))))))))) && (((var_1_69 - var_1_32) >= var_1_13) ? (var_1_97 ? ((var_1_107 <= var_1_3) ? (var_1_85 == ((unsigned char) (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) - ((((var_1_32) > (((((var_1_67) > (var_1_33)) ? (var_1_67) : (var_1_33))))) ? (var_1_32) : (((((var_1_67) > (var_1_33)) ? (var_1_67) : (var_1_33))))))))) : ((var_1_97 || var_1_50) ? (var_1_85 == ((unsigned char) var_1_36)) : ((var_1_31 == var_1_3) ? (var_1_85 == ((unsigned char) 1)) : 1))) : (var_1_85 == ((unsigned char) ((((16) > (((((var_1_30) > (((((var_1_31) < (var_1_69)) ? (var_1_31) : (var_1_69))))) ? (var_1_30) : (((((var_1_31) < (var_1_69)) ? (var_1_31) : (var_1_69)))))))) ? (16) : (((((var_1_30) > (((((var_1_31) < (var_1_69)) ? (var_1_31) : (var_1_69))))) ? (var_1_30) : (((((var_1_31) < (var_1_69)) ? (var_1_31) : (var_1_69)))))))))))) : 1)) && (var_1_86 == ((float) (((var_1_81 - var_1_60) + var_1_83) + var_1_49)))) && ((last_1_var_1_61 <= ((((var_1_68) < (5)) ? (var_1_68) : (5)))) ? (var_1_87 == ((signed long int) ((25 - var_1_3) + (var_1_26 + var_1_88)))) : (var_1_87 == ((signed long int) ((var_1_68 + 2) - last_1_var_1_61))))) && ((last_1_var_1_85 <= last_1_var_1_54) ? (var_1_89 == ((unsigned long int) (last_1_var_1_37 + last_1_var_1_104))) : (var_1_89 == ((unsigned long int) (var_1_74 - ((((var_1_15) > (var_1_5)) ? (var_1_15) : (var_1_5)))))))) && ((var_1_31 > var_1_57) ? (var_1_90 == ((unsigned char) (! (var_1_51 || var_1_91)))) : (var_1_90 == ((unsigned char) (var_1_51 || var_1_91))))) && ((last_1_var_1_89 < ((var_1_74 - var_1_5) * var_1_69)) ? ((last_1_var_1_40 != var_1_48) ? (var_1_92 == ((unsigned long int) (var_1_68 + var_1_30))) : (var_1_92 == ((unsigned long int) (var_1_74 - last_1_var_1_92)))) : (var_1_92 == ((unsigned long int) (4078447304u - (var_1_69 + var_1_31)))))) && (((var_1_4 + var_1_56) > var_1_73) ? (var_1_93 == ((signed long int) var_1_92)) : (var_1_90 ? (var_1_93 == ((signed long int) ((((var_1_6) < ((((((var_1_68) < (var_1_69)) ? (var_1_68) : (var_1_69))) + var_1_18))) ? (var_1_6) : ((((((var_1_68) < (var_1_69)) ? (var_1_68) : (var_1_69))) + var_1_18)))))) : (((-10 + var_1_87) < var_1_27) ? (var_1_93 == ((signed long int) ((var_1_13 - 8) + var_1_17))) : (var_1_93 == ((signed long int) (var_1_92 + var_1_1))))))) && ((var_1_90 && (var_1_97 && (var_1_84 >= var_1_100))) ? ((var_1_88 >= var_1_32) ? (var_1_94 == ((unsigned long int) (var_1_63 + var_1_19))) : ((var_1_30 >= (var_1_95 - 16)) ? (var_1_94 == ((unsigned long int) ((((var_1_69) < (var_1_14)) ? (var_1_69) : (var_1_14))))) : (var_1_94 == ((unsigned long int) ((var_1_72 + (var_1_96 - var_1_36)) - ((((var_1_69) > ((var_1_53 + var_1_16))) ? (var_1_69) : ((var_1_53 + var_1_16))))))))) : (var_1_94 == ((unsigned long int) var_1_33)))) && (var_1_50 ? (var_1_97 == ((unsigned char) var_1_98)) : (var_1_97 == ((unsigned char) var_1_51)))) && (var_1_50 ? (var_1_99 == ((unsigned long int) var_1_33)) : 1)) && (var_1_97 ? (var_1_100 == ((double) var_1_60)) : 1)) && (var_1_50 ? (var_1_101 == ((signed long int) var_1_57)) : (var_1_101 == ((signed long int) var_1_71)))) && (var_1_102 == ((double) 0.12))) && (var_1_97 ? (var_1_103 == ((unsigned short int) var_1_18)) : (var_1_103 == ((unsigned short int) var_1_3)))) && (var_1_104 == ((signed long int) var_1_67))) && (var_1_105 == ((unsigned char) ((((((((var_1_32) < (var_1_31)) ? (var_1_32) : (var_1_31)))) > (var_1_106)) ? (((((var_1_32) < (var_1_31)) ? (var_1_32) : (var_1_31)))) : (var_1_106)))))) && (var_1_91 ? (((((((var_1_74 * var_1_14)) < (var_1_5)) ? ((var_1_74 * var_1_14)) : (var_1_5))) != var_1_89) ? (var_1_107 == ((signed short int) (var_1_106 + var_1_92))) : 1) : (var_1_107 == ((signed short int) (((((var_1_30 - var_1_68)) < ((var_1_106 - ((((var_1_69) < (0)) ? (var_1_69) : (0)))))) ? ((var_1_30 - var_1_68)) : ((var_1_106 - ((((var_1_69) < (0)) ? (var_1_69) : (0))))))))))) && (var_1_109 == ((double) var_1_80))
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

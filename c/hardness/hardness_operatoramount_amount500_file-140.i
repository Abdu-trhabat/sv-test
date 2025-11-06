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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch140Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -2;
signed char var_1_3 = 0;
signed short int var_1_4 = -5;
signed char var_1_5 = -5;
signed short int var_1_7 = 8;
signed short int var_1_8 = 10;
signed short int var_1_9 = 128;
signed short int var_1_10 = 10;
signed short int var_1_11 = 0;
unsigned long int var_1_12 = 128;
unsigned long int var_1_16 = 4187631538;
unsigned long int var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 4017661490;
unsigned short int var_1_20 = 100;
unsigned short int var_1_21 = 4;
unsigned char var_1_22 = 0;
signed char var_1_24 = 8;
signed char var_1_25 = 8;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 100;
unsigned char var_1_37 = 100;
unsigned char var_1_38 = 4;
signed long int var_1_39 = -2;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 32;
unsigned char var_1_42 = 8;
unsigned char var_1_43 = 200;
unsigned char var_1_44 = 2;
unsigned short int var_1_45 = 256;
unsigned short int var_1_46 = 55984;
unsigned short int var_1_47 = 29395;
unsigned short int var_1_48 = 10000;
unsigned short int var_1_49 = 5;
signed short int var_1_50 = -5;
double var_1_51 = 99999.9;
double var_1_52 = 10.05;
double var_1_53 = 1000000000000.5;
double var_1_54 = 25.5;
double var_1_55 = 7.62;
double var_1_56 = 1.2;
float var_1_57 = 100.8;
signed long int var_1_58 = -1000000000;
unsigned short int var_1_59 = 8;
signed short int var_1_60 = 64;
signed long int var_1_61 = 1000000;
unsigned char var_1_62 = 16;
signed char var_1_63 = 1;
unsigned char var_1_65 = 1;
signed short int var_1_66 = 1;
signed long int var_1_67 = 0;
signed long int var_1_68 = 1899118180;
signed char var_1_69 = 0;
signed long int var_1_71 = -5;
double var_1_72 = 10.875;
signed long int var_1_73 = 1000000000;
signed long int var_1_74 = 2;
signed long int var_1_75 = -100;
signed short int var_1_76 = 4;
signed short int var_1_78 = 30992;
unsigned short int var_1_79 = 2;
unsigned short int var_1_80 = 60447;
unsigned short int var_1_81 = 52113;
unsigned short int var_1_82 = 10000;
unsigned char var_1_83 = 0;
signed long int var_1_84 = -8;
double var_1_85 = 63.4;
signed char var_1_86 = -32;
signed char var_1_87 = 100;
unsigned char var_1_88 = 0;
signed char var_1_89 = 25;
signed char var_1_90 = 4;
unsigned short int var_1_91 = 256;
unsigned short int var_1_92 = 5;
signed long int var_1_93 = 2;
unsigned short int var_1_95 = 5;
unsigned short int var_1_96 = 5;
unsigned short int var_1_97 = 22638;
unsigned char var_1_98 = 1;
double var_1_99 = 100000000000.8;
signed char var_1_100 = -16;
unsigned long int var_1_101 = 16;
unsigned long int var_1_102 = 128;
signed long int var_1_103 = -32;
float var_1_104 = 255.6;
unsigned long int var_1_105 = 8;
unsigned long int var_1_106 = 10;
unsigned char var_1_107 = 0;
unsigned char var_1_108 = 0;
unsigned char var_1_109 = 16;
double var_1_110 = 16.5;
float var_1_111 = 100000000000000.75;
unsigned short int var_1_112 = 64;
unsigned long int last_1_var_1_12 = 128;
signed long int last_1_var_1_58 = -1000000000;
unsigned char last_1_var_1_65 = 1;
signed long int last_1_var_1_67 = 0;
signed long int last_1_var_1_71 = -5;
signed long int last_1_var_1_84 = -8;
unsigned char last_1_var_1_88 = 0;
unsigned short int last_1_var_1_95 = 5;
unsigned char last_1_var_1_98 = 1;
signed char last_1_var_1_100 = -16;
unsigned long int last_1_var_1_102 = 128;
unsigned char last_1_var_1_107 = 0;
unsigned char last_1_var_1_108 = 0;
unsigned short int last_1_var_1_112 = 64;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_35 = (((last_1_var_1_67) < (last_1_var_1_12)) ? (last_1_var_1_67) : (last_1_var_1_12));
 if (var_1_22) {
  if (stepLocal_35 == ((((var_1_81) < (var_1_20)) ? (var_1_81) : (var_1_20)))) {
   var_1_84 = (var_1_25 + var_1_7);
  } else {
   var_1_84 = ((((var_1_44) > ((((((var_1_33) < (var_1_24)) ? (var_1_33) : (var_1_24))) + last_1_var_1_112))) ? (var_1_44) : ((((((var_1_33) < (var_1_24)) ? (var_1_33) : (var_1_24))) + last_1_var_1_112))));
  }
 } else {
  var_1_84 = (((var_1_20 + last_1_var_1_84) + var_1_8) + var_1_24);
 }
 signed long int stepLocal_31 = last_1_var_1_58;
 signed long int stepLocal_30 = 32 * last_1_var_1_95;
 unsigned char stepLocal_29 = var_1_26;
 signed char stepLocal_28 = var_1_5;
 unsigned short int stepLocal_27 = var_1_49;
 if (var_1_54 > (var_1_53 / var_1_72)) {
  if (var_1_25 >= stepLocal_30) {
   var_1_71 = (((var_1_73 - var_1_20) + var_1_35) - (var_1_68 - var_1_74));
  } else {
   var_1_71 = last_1_var_1_102;
  }
 } else {
  if (stepLocal_29 && last_1_var_1_98) {
   if (stepLocal_31 < (var_1_8 * var_1_11)) {
    var_1_71 = var_1_49;
   }
  } else {
   if (stepLocal_28 > var_1_11) {
    var_1_71 = ((((var_1_7) > ((var_1_62 - var_1_36))) ? (var_1_7) : ((var_1_62 - var_1_36))));
   } else {
    if (stepLocal_27 > (var_1_20 / ((((var_1_43) > (1)) ? (var_1_43) : (1))))) {
     var_1_71 = (var_1_37 + var_1_5);
    }
   }
  }
 }
 if ((var_1_71 * (var_1_80 - var_1_87)) <= var_1_34) {
  var_1_92 = (((((var_1_78 - var_1_34) < 0 ) ? -(var_1_78 - var_1_34) : (var_1_78 - var_1_34))) + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
 } else {
  var_1_92 = (53410 - var_1_82);
 }
 signed long int stepLocal_4 = 32;
 unsigned long int stepLocal_3 = var_1_3 + last_1_var_1_12;
 signed long int stepLocal_2 = last_1_var_1_100 / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 signed long int stepLocal_1 = 100000;
 unsigned long int stepLocal_0 = last_1_var_1_12;
 if (var_1_3 >= stepLocal_2) {
  if (stepLocal_3 <= var_1_5) {
   if (stepLocal_0 > ((last_1_var_1_100 * var_1_5) * var_1_3)) {
    if ((var_1_7 - var_1_8) <= stepLocal_1) {
     var_1_4 = (var_1_9 - var_1_10);
    } else {
     var_1_4 = ((((((var_1_11 + 10) - 2)) > (var_1_10)) ? (((var_1_11 + 10) - 2)) : (var_1_10)));
    }
   } else {
    if (last_1_var_1_100 <= stepLocal_4) {
     var_1_4 = (var_1_9 - (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + var_1_11));
    } else {
     var_1_4 = var_1_11;
    }
   }
  } else {
   var_1_4 = (var_1_5 + 5);
  }
 }
 if (last_1_var_1_71 >= var_1_78) {
  var_1_88 = var_1_26;
 }
 if (var_1_88) {
  var_1_85 = (var_1_55 + var_1_56);
 }
 if (last_1_var_1_88) {
  var_1_108 = var_1_22;
 }
 if (var_1_108) {
  var_1_107 = var_1_22;
 }
 signed short int stepLocal_13 = var_1_11;
 unsigned char stepLocal_12 = var_1_26 || var_1_108;
 if (stepLocal_13 < var_1_3) {
  if (stepLocal_12 || var_1_22) {
   var_1_39 = ((((var_1_34) < ((var_1_35 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) ? (var_1_34) : ((var_1_35 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))));
  } else {
   var_1_39 = 100;
  }
 }
 if (var_1_108) {
  var_1_105 = var_1_106;
 }
 if (var_1_107) {
  var_1_110 = var_1_52;
 }
 unsigned char stepLocal_6 = (! last_1_var_1_65) && last_1_var_1_108;
 signed short int stepLocal_5 = var_1_7;
 if (stepLocal_6 || last_1_var_1_107) {
  if (((var_1_16 - var_1_11) - (var_1_8 + var_1_10)) >= stepLocal_5) {
   var_1_12 = (3428937324u - ((((var_1_10) < (var_1_17)) ? (var_1_10) : (var_1_17))));
  }
 }
 if (8 != (var_1_38 - var_1_10)) {
  var_1_101 = 128u;
 } else {
  var_1_101 = var_1_12;
 }
 var_1_51 = ((((((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53)))) > ((((((var_1_54) > (var_1_55)) ? (var_1_54) : (var_1_55))) + var_1_56))) ? (((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53)))) : ((((((var_1_54) > (var_1_55)) ? (var_1_54) : (var_1_55))) + var_1_56))));
 signed long int stepLocal_16 = (((16) < 0 ) ? -(16) : (16));
 if (stepLocal_16 == (var_1_10 + -2)) {
  var_1_60 = (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) + var_1_44);
 }
 if (var_1_52 <= var_1_55) {
  var_1_65 = var_1_22;
 }
 var_1_79 = (((((var_1_46) < (((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81))))) ? (var_1_46) : (((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81)))))) - ((var_1_48 + var_1_82) - var_1_62));
 if (var_1_17 < var_1_35) {
  var_1_86 = (var_1_62 - var_1_44);
 } else {
  var_1_86 = (((var_1_87 - var_1_62) - var_1_44) - var_1_41);
 }
 signed long int stepLocal_38 = var_1_62 - var_1_36;
 if (var_1_24 < stepLocal_38) {
  var_1_91 = var_1_33;
 }
 unsigned long int stepLocal_40 = var_1_16;
 unsigned short int stepLocal_39 = var_1_46;
 if (stepLocal_39 <= var_1_17) {
  var_1_93 = (var_1_9 + ((((((((var_1_74) < (var_1_33)) ? (var_1_74) : (var_1_33)))) < (((((var_1_38) > (var_1_59)) ? (var_1_38) : (var_1_59))))) ? (((((var_1_74) < (var_1_33)) ? (var_1_74) : (var_1_33)))) : (((((var_1_38) > (var_1_59)) ? (var_1_38) : (var_1_59)))))));
 } else {
  if (stepLocal_40 <= var_1_101) {
   var_1_93 = var_1_84;
  }
 }
 unsigned char stepLocal_41 = var_1_43;
 if (-1 < stepLocal_41) {
  var_1_95 = ((var_1_79 + ((((var_1_96) < (var_1_36)) ? (var_1_96) : (var_1_36)))) + var_1_11);
 } else {
  if (var_1_27) {
   var_1_95 = (var_1_78 + var_1_7);
  } else {
   var_1_95 = (var_1_47 + (((((var_1_78) < (var_1_97)) ? (var_1_78) : (var_1_97))) - var_1_11));
  }
 }
 unsigned short int stepLocal_42 = var_1_96;
 if (stepLocal_42 > (var_1_80 - var_1_78)) {
  var_1_98 = ((! var_1_27) || var_1_22);
 }
 if (var_1_53 != var_1_51) {
  var_1_99 = (var_1_54 + var_1_56);
 } else {
  var_1_99 = ((((var_1_53) > (2.5)) ? (var_1_53) : (2.5)));
 }
 if (var_1_98) {
  var_1_102 = var_1_35;
 }
 var_1_103 = var_1_59;
 if (var_1_98) {
  var_1_104 = var_1_52;
 } else {
  var_1_104 = 8.25f;
 }
 var_1_109 = var_1_62;
 if (var_1_107) {
  var_1_111 = var_1_52;
 } else {
  var_1_111 = var_1_55;
 }
 signed long int stepLocal_15 = (50 + var_1_21) | (43629 - var_1_59);
 unsigned char stepLocal_14 = var_1_35;
 if (var_1_55 >= var_1_53) {
  if (200.2 <= var_1_110) {
   var_1_58 = (var_1_7 + var_1_5);
  } else {
   var_1_58 = (var_1_43 + (var_1_37 - var_1_44));
  }
 } else {
  if (var_1_46 <= stepLocal_15) {
   var_1_58 = ((((var_1_39) > (((var_1_84 + var_1_92) + var_1_7))) ? (var_1_39) : (((var_1_84 + var_1_92) + var_1_7))));
  } else {
   if (var_1_12 >= stepLocal_14) {
    var_1_58 = ((((var_1_16) < (var_1_48)) ? (var_1_16) : (var_1_48)));
   } else {
    var_1_58 = var_1_12;
   }
  }
 }
 signed long int stepLocal_34 = (var_1_34 * var_1_43) | var_1_4;
 if (stepLocal_34 >= var_1_102) {
  var_1_83 = (var_1_98 || var_1_27);
 } else {
  var_1_83 = (var_1_22 || (var_1_88 && var_1_26));
 }
 unsigned char stepLocal_43 = var_1_83;
 if (stepLocal_43 && ((- var_1_99) == var_1_51)) {
  if (var_1_51 < ((((var_1_85) < 0 ) ? -(var_1_85) : (var_1_85)))) {
   var_1_100 = (((((var_1_62 - var_1_44)) > (var_1_90)) ? ((var_1_62 - var_1_44)) : (var_1_90)));
  }
 } else {
  var_1_100 = (var_1_90 + var_1_3);
 }
 unsigned long int stepLocal_11 = var_1_12;
 signed long int stepLocal_10 = (var_1_11 / var_1_20) % var_1_21;
 signed long int stepLocal_9 = var_1_24 - var_1_25;
 unsigned char stepLocal_8 = var_1_5 == var_1_24;
 unsigned long int stepLocal_7 = (((4u) < 0 ) ? -(4u) : (4u));
 if (stepLocal_7 < (var_1_16 * (var_1_19 - var_1_11))) {
  if (stepLocal_10 == ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) {
   var_1_18 = var_1_22;
  } else {
   if (var_1_98) {
    if (stepLocal_9 <= var_1_8) {
     var_1_18 = (! var_1_22);
    } else {
     var_1_18 = (! (var_1_88 && var_1_22));
    }
   } else {
    if (((var_1_8 + var_1_25) / var_1_16) > stepLocal_11) {
     if (stepLocal_8 || var_1_108) {
      var_1_18 = (var_1_22 || var_1_26);
     } else {
      var_1_18 = ((1 > var_1_3) || var_1_27);
     }
    } else {
     if (var_1_22) {
      var_1_18 = var_1_27;
     }
    }
   }
  }
 } else {
  var_1_18 = var_1_26;
 }
 if ((var_1_101 < var_1_34) && var_1_98) {
  if (var_1_96 <= (~ (var_1_37 << var_1_105))) {
   if (var_1_82 <= ((var_1_102 ^ var_1_42) + (var_1_80 - var_1_60))) {
    var_1_112 = var_1_8;
   } else {
    var_1_112 = var_1_60;
   }
  }
 } else {
  var_1_112 = var_1_10;
 }
 if ((- 255.45f) < var_1_104) {
  var_1_1 = (var_1_3 + -16);
 }
 if ((var_1_3 / var_1_37) >= var_1_12) {
  if (var_1_98) {
   var_1_45 = (((((var_1_35) > (((((var_1_41) < (var_1_105)) ? (var_1_41) : (var_1_105))))) ? (var_1_35) : (((((var_1_41) < (var_1_105)) ? (var_1_41) : (var_1_105)))))) + ((((var_1_33) < (((((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36))))) ? (var_1_33) : (((((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36)))))));
  } else {
   var_1_45 = (var_1_46 - (var_1_47 - (var_1_48 - var_1_49)));
  }
 } else {
  var_1_45 = ((((var_1_47) < (((((((((var_1_10) > (var_1_38)) ? (var_1_10) : (var_1_38)))) < (var_1_42)) ? (((((var_1_10) > (var_1_38)) ? (var_1_10) : (var_1_38)))) : (var_1_42))))) ? (var_1_47) : (((((((((var_1_10) > (var_1_38)) ? (var_1_10) : (var_1_38)))) < (var_1_42)) ? (((((var_1_10) > (var_1_38)) ? (var_1_10) : (var_1_38)))) : (var_1_42))))));
 }
 if (var_1_110 != var_1_99) {
  var_1_57 = var_1_53;
 }
 unsigned long int stepLocal_21 = var_1_19;
 signed long int stepLocal_20 = var_1_103;
 signed long int stepLocal_19 = var_1_34 - (var_1_44 + var_1_38);
 if (stepLocal_21 >= var_1_59) {
  if (stepLocal_19 >= var_1_48) {
   if (var_1_65) {
    if (stepLocal_20 >= var_1_84) {
     var_1_63 = ((((var_1_44 + ((((var_1_62) < (var_1_3)) ? (var_1_62) : (var_1_3)))) < 0 ) ? -(var_1_44 + ((((var_1_62) < (var_1_3)) ? (var_1_62) : (var_1_3)))) : (var_1_44 + ((((var_1_62) < (var_1_3)) ? (var_1_62) : (var_1_3))))));
    }
   }
  } else {
   var_1_63 = ((((var_1_43) > (var_1_38)) ? (var_1_43) : (var_1_38)));
  }
 }
 unsigned long int stepLocal_22 = var_1_102;
 if (var_1_85 == (var_1_56 + var_1_51)) {
  if (stepLocal_22 <= var_1_44) {
   var_1_66 = var_1_3;
  } else {
   var_1_66 = (((((var_1_41 + var_1_34)) > (var_1_36)) ? ((var_1_41 + var_1_34)) : (var_1_36)));
  }
 }
 unsigned char stepLocal_26 = var_1_103 <= var_1_39;
 if (var_1_52 < var_1_85) {
  if (var_1_107 && stepLocal_26) {
   var_1_69 = -8;
  }
 }
 if (var_1_102 <= var_1_39) {
  var_1_75 = (((var_1_41 + var_1_48) + var_1_3) + var_1_102);
 } else {
  var_1_75 = (var_1_11 + 128);
 }
 unsigned char stepLocal_33 = ! var_1_88;
 unsigned long int stepLocal_32 = ((((var_1_7 / 10)) < ((var_1_102 + var_1_86))) ? ((var_1_7 / 10)) : ((var_1_102 + var_1_86)));
 if ((var_1_35 < var_1_112) && stepLocal_33) {
  if ((var_1_58 * var_1_12) < stepLocal_32) {
   var_1_76 = (((((var_1_103 + (var_1_49 - 1))) > (var_1_92)) ? ((var_1_103 + (var_1_49 - 1))) : (var_1_92)));
  }
 } else {
  var_1_76 = (((var_1_49 + var_1_112) + var_1_42) - (var_1_78 - ((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43)))));
 }
 signed short int stepLocal_37 = var_1_7;
 signed long int stepLocal_36 = - var_1_81;
 if (var_1_98) {
  if (((var_1_19 - var_1_35) / var_1_81) != stepLocal_37) {
   var_1_89 = ((var_1_42 - (var_1_62 + var_1_90)) + var_1_3);
  } else {
   if (var_1_35 >= stepLocal_36) {
    var_1_89 = (var_1_38 + ((32 - var_1_62) - var_1_41));
   } else {
    var_1_89 = var_1_38;
   }
  }
 }
 signed long int stepLocal_25 = ~ var_1_84;
 unsigned char stepLocal_24 = var_1_37;
 unsigned char stepLocal_23 = var_1_62;
 if (var_1_3 <= stepLocal_23) {
  if (var_1_8 >= stepLocal_24) {
   var_1_67 = (var_1_38 + var_1_43);
  } else {
   if (var_1_18) {
    var_1_67 = (var_1_43 - var_1_37);
   }
  }
 } else {
  if ((var_1_4 / var_1_37) >= stepLocal_25) {
   var_1_67 = (var_1_44 - (var_1_68 - ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))));
  }
 }
 if ((var_1_104 * var_1_51) <= (((((var_1_99 * var_1_51)) < (var_1_85)) ? ((var_1_99 * var_1_51)) : (var_1_85)))) {
  if (var_1_10 < ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) {
   if (var_1_67 <= ((((var_1_21) > (var_1_16)) ? (var_1_21) : (var_1_16)))) {
    var_1_28 = (((((((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))) - var_1_25)) > (16)) ? ((((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))) - var_1_25)) : (16)));
   } else {
    var_1_28 = (var_1_25 + var_1_35);
   }
  }
 } else {
  var_1_28 = ((((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))) - var_1_38) + var_1_35);
 }
 if (var_1_36 > ((var_1_9 ^ var_1_84) ^ var_1_28)) {
  var_1_40 = (var_1_34 - ((((32) < (var_1_38)) ? (32) : (var_1_38))));
 } else {
  if (var_1_27 && var_1_107) {
   var_1_40 = (((((var_1_33 - var_1_35)) > (var_1_37)) ? ((var_1_33 - var_1_35)) : (var_1_37)));
  } else {
   var_1_40 = ((((((var_1_38 + var_1_41) + (var_1_37 - var_1_42))) < (((var_1_43 - var_1_44) - ((((var_1_25) > (var_1_35)) ? (var_1_25) : (var_1_35)))))) ? (((var_1_38 + var_1_41) + (var_1_37 - var_1_42))) : (((var_1_43 - var_1_44) - ((((var_1_25) > (var_1_35)) ? (var_1_25) : (var_1_35)))))));
  }
 }
 if (! (var_1_8 <= (var_1_21 & 32))) {
  var_1_50 = var_1_35;
 } else {
  if (var_1_17 != var_1_105) {
   var_1_50 = (((((((((var_1_10) > (var_1_67)) ? (var_1_10) : (var_1_67)))) < (var_1_9)) ? (((((var_1_10) > (var_1_67)) ? (var_1_10) : (var_1_67)))) : (var_1_9))) - (var_1_48 + var_1_38));
  } else {
   if (var_1_27) {
    var_1_50 = ((var_1_112 + ((((var_1_67) < (var_1_35)) ? (var_1_67) : (var_1_35)))) - var_1_42);
   } else {
    var_1_50 = var_1_41;
   }
  }
 }
 unsigned char stepLocal_18 = -32 >= var_1_8;
 signed long int stepLocal_17 = (((var_1_46) > (var_1_10)) ? (var_1_46) : (var_1_10));
 if (stepLocal_17 != (((((var_1_48) > (var_1_41)) ? (var_1_48) : (var_1_41))) << (var_1_62 - 1))) {
  if ((var_1_53 >= var_1_104) || stepLocal_18) {
   var_1_61 = (((((var_1_102 - var_1_33)) > (((((((((8) < 0 ) ? -(8) : (8)))) > ((128 - var_1_35))) ? (((((8) < 0 ) ? -(8) : (8)))) : ((128 - var_1_35)))))) ? ((var_1_102 - var_1_33)) : (((((((((8) < 0 ) ? -(8) : (8)))) > ((128 - var_1_35))) ? (((((8) < 0 ) ? -(8) : (8)))) : ((128 - var_1_35)))))));
  }
 } else {
  if (var_1_51 == var_1_99) {
   var_1_61 = (((var_1_59 + var_1_102) - (var_1_21 + var_1_20)) + (var_1_49 - var_1_47));
  } else {
   var_1_61 = (var_1_76 + (var_1_66 + (var_1_8 + var_1_5)));
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -63);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 127);
 assume_abort_if_not(var_1_5 != 0);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 3221225471);
 assume_abort_if_not(var_1_16 <= 4294967295);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967295);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 65535);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 65535);
 assume_abort_if_not(var_1_21 != 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -1);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 127);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 127);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 63);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 63);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 190);
 assume_abort_if_not(var_1_43 <= 254);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 32767);
 assume_abort_if_not(var_1_46 <= 65534);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 16383);
 assume_abort_if_not(var_1_47 <= 32767);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 8191);
 assume_abort_if_not(var_1_48 <= 16383);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 8191);
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= -922337.2036854766000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= -922337.2036854766000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= -461168.6018427383000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= -461168.6018427383000e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= -461168.6018427383000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 32767);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 8);
 assume_abort_if_not(var_1_62 <= 17);
 var_1_68 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_68 >= 1073741823);
 assume_abort_if_not(var_1_68 <= 2147483646);
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= -922337.2036854776000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854776000e+12F && var_1_72 >= 1.0e-20F ));
 assume_abort_if_not(var_1_72 != 0.0F);
 var_1_73 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_73 >= 536870911);
 assume_abort_if_not(var_1_73 <= 1073741823);
 var_1_74 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 1073741823);
 var_1_78 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_78 >= 16383);
 assume_abort_if_not(var_1_78 <= 32766);
 var_1_80 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_80 >= 32767);
 assume_abort_if_not(var_1_80 <= 65534);
 var_1_81 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_81 >= 32767);
 assume_abort_if_not(var_1_81 <= 65534);
 var_1_82 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_82 >= 8192);
 assume_abort_if_not(var_1_82 <= 16383);
 var_1_87 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_87 >= 94);
 assume_abort_if_not(var_1_87 <= 126);
 var_1_90 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_90 >= 0);
 assume_abort_if_not(var_1_90 <= 31);
 var_1_96 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_96 >= 0);
 assume_abort_if_not(var_1_96 <= 16383);
 var_1_97 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_97 >= 16383);
 assume_abort_if_not(var_1_97 <= 32767);
 var_1_106 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_106 >= 0);
 assume_abort_if_not(var_1_106 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_107 = var_1_107;
 last_1_var_1_108 = var_1_108;
 last_1_var_1_112 = var_1_112;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((- 255.45f) < var_1_104) ? (var_1_1 == ((signed char) (var_1_3 + -16))) : 1) && ((var_1_3 >= (last_1_var_1_100 / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? (((var_1_3 + last_1_var_1_12) <= var_1_5) ? ((last_1_var_1_12 > ((last_1_var_1_100 * var_1_5) * var_1_3)) ? (((var_1_7 - var_1_8) <= 100000) ? (var_1_4 == ((signed short int) (var_1_9 - var_1_10))) : (var_1_4 == ((signed short int) ((((((var_1_11 + 10) - 2)) > (var_1_10)) ? (((var_1_11 + 10) - 2)) : (var_1_10)))))) : ((last_1_var_1_100 <= 32) ? (var_1_4 == ((signed short int) (var_1_9 - (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + var_1_11)))) : (var_1_4 == ((signed short int) var_1_11)))) : (var_1_4 == ((signed short int) (var_1_5 + 5)))) : 1)) && ((((! last_1_var_1_65) && last_1_var_1_108) || last_1_var_1_107) ? ((((var_1_16 - var_1_11) - (var_1_8 + var_1_10)) >= var_1_7) ? (var_1_12 == ((unsigned long int) (3428937324u - ((((var_1_10) < (var_1_17)) ? (var_1_10) : (var_1_17)))))) : 1) : 1)) && ((((((4u) < 0 ) ? -(4u) : (4u))) < (var_1_16 * (var_1_19 - var_1_11))) ? ((((var_1_11 / var_1_20) % var_1_21) == ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) ? (var_1_18 == ((unsigned char) var_1_22)) : (var_1_98 ? (((var_1_24 - var_1_25) <= var_1_8) ? (var_1_18 == ((unsigned char) (! var_1_22))) : (var_1_18 == ((unsigned char) (! (var_1_88 && var_1_22))))) : ((((var_1_8 + var_1_25) / var_1_16) > var_1_12) ? (((var_1_5 == var_1_24) || var_1_108) ? (var_1_18 == ((unsigned char) (var_1_22 || var_1_26))) : (var_1_18 == ((unsigned char) ((1 > var_1_3) || var_1_27)))) : (var_1_22 ? (var_1_18 == ((unsigned char) var_1_27)) : 1)))) : (var_1_18 == ((unsigned char) var_1_26)))) && (((var_1_104 * var_1_51) <= (((((var_1_99 * var_1_51)) < (var_1_85)) ? ((var_1_99 * var_1_51)) : (var_1_85)))) ? ((var_1_10 < ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) ? ((var_1_67 <= ((((var_1_21) > (var_1_16)) ? (var_1_21) : (var_1_16)))) ? (var_1_28 == ((unsigned char) (((((((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))) - var_1_25)) > (16)) ? ((((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))) - var_1_25)) : (16))))) : (var_1_28 == ((unsigned char) (var_1_25 + var_1_35)))) : 1) : (var_1_28 == ((unsigned char) ((((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))) - var_1_38) + var_1_35))))) && ((var_1_11 < var_1_3) ? (((var_1_26 || var_1_108) || var_1_22) ? (var_1_39 == ((signed long int) ((((var_1_34) < ((var_1_35 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) ? (var_1_34) : ((var_1_35 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))))) : (var_1_39 == ((signed long int) 100))) : 1)) && ((var_1_36 > ((var_1_9 ^ var_1_84) ^ var_1_28)) ? (var_1_40 == ((unsigned char) (var_1_34 - ((((32) < (var_1_38)) ? (32) : (var_1_38)))))) : ((var_1_27 && var_1_107) ? (var_1_40 == ((unsigned char) (((((var_1_33 - var_1_35)) > (var_1_37)) ? ((var_1_33 - var_1_35)) : (var_1_37))))) : (var_1_40 == ((unsigned char) ((((((var_1_38 + var_1_41) + (var_1_37 - var_1_42))) < (((var_1_43 - var_1_44) - ((((var_1_25) > (var_1_35)) ? (var_1_25) : (var_1_35)))))) ? (((var_1_38 + var_1_41) + (var_1_37 - var_1_42))) : (((var_1_43 - var_1_44) - ((((var_1_25) > (var_1_35)) ? (var_1_25) : (var_1_35)))))))))))) && (((var_1_3 / var_1_37) >= var_1_12) ? (var_1_98 ? (var_1_45 == ((unsigned short int) (((((var_1_35) > (((((var_1_41) < (var_1_105)) ? (var_1_41) : (var_1_105))))) ? (var_1_35) : (((((var_1_41) < (var_1_105)) ? (var_1_41) : (var_1_105)))))) + ((((var_1_33) < (((((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36))))) ? (var_1_33) : (((((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36))))))))) : (var_1_45 == ((unsigned short int) (var_1_46 - (var_1_47 - (var_1_48 - var_1_49)))))) : (var_1_45 == ((unsigned short int) ((((var_1_47) < (((((((((var_1_10) > (var_1_38)) ? (var_1_10) : (var_1_38)))) < (var_1_42)) ? (((((var_1_10) > (var_1_38)) ? (var_1_10) : (var_1_38)))) : (var_1_42))))) ? (var_1_47) : (((((((((var_1_10) > (var_1_38)) ? (var_1_10) : (var_1_38)))) < (var_1_42)) ? (((((var_1_10) > (var_1_38)) ? (var_1_10) : (var_1_38)))) : (var_1_42)))))))))) && ((! (var_1_8 <= (var_1_21 & 32))) ? (var_1_50 == ((signed short int) var_1_35)) : ((var_1_17 != var_1_105) ? (var_1_50 == ((signed short int) (((((((((var_1_10) > (var_1_67)) ? (var_1_10) : (var_1_67)))) < (var_1_9)) ? (((((var_1_10) > (var_1_67)) ? (var_1_10) : (var_1_67)))) : (var_1_9))) - (var_1_48 + var_1_38)))) : (var_1_27 ? (var_1_50 == ((signed short int) ((var_1_112 + ((((var_1_67) < (var_1_35)) ? (var_1_67) : (var_1_35)))) - var_1_42))) : (var_1_50 == ((signed short int) var_1_41)))))) && (var_1_51 == ((double) ((((((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53)))) > ((((((var_1_54) > (var_1_55)) ? (var_1_54) : (var_1_55))) + var_1_56))) ? (((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53)))) : ((((((var_1_54) > (var_1_55)) ? (var_1_54) : (var_1_55))) + var_1_56))))))) && ((var_1_110 != var_1_99) ? (var_1_57 == ((float) var_1_53)) : 1)) && ((var_1_55 >= var_1_53) ? ((200.2 <= var_1_110) ? (var_1_58 == ((signed long int) (var_1_7 + var_1_5))) : (var_1_58 == ((signed long int) (var_1_43 + (var_1_37 - var_1_44))))) : ((var_1_46 <= ((50 + var_1_21) | (43629 - var_1_59))) ? (var_1_58 == ((signed long int) ((((var_1_39) > (((var_1_84 + var_1_92) + var_1_7))) ? (var_1_39) : (((var_1_84 + var_1_92) + var_1_7)))))) : ((var_1_12 >= var_1_35) ? (var_1_58 == ((signed long int) ((((var_1_16) < (var_1_48)) ? (var_1_16) : (var_1_48))))) : (var_1_58 == ((signed long int) var_1_12)))))) && ((((((16) < 0 ) ? -(16) : (16))) == (var_1_10 + -2)) ? (var_1_60 == ((signed short int) (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) + var_1_44))) : 1)) && ((((((var_1_46) > (var_1_10)) ? (var_1_46) : (var_1_10))) != (((((var_1_48) > (var_1_41)) ? (var_1_48) : (var_1_41))) << (var_1_62 - 1))) ? (((var_1_53 >= var_1_104) || (-32 >= var_1_8)) ? (var_1_61 == ((signed long int) (((((var_1_102 - var_1_33)) > (((((((((8) < 0 ) ? -(8) : (8)))) > ((128 - var_1_35))) ? (((((8) < 0 ) ? -(8) : (8)))) : ((128 - var_1_35)))))) ? ((var_1_102 - var_1_33)) : (((((((((8) < 0 ) ? -(8) : (8)))) > ((128 - var_1_35))) ? (((((8) < 0 ) ? -(8) : (8)))) : ((128 - var_1_35))))))))) : 1) : ((var_1_51 == var_1_99) ? (var_1_61 == ((signed long int) (((var_1_59 + var_1_102) - (var_1_21 + var_1_20)) + (var_1_49 - var_1_47)))) : (var_1_61 == ((signed long int) (var_1_76 + (var_1_66 + (var_1_8 + var_1_5)))))))) && ((var_1_19 >= var_1_59) ? (((var_1_34 - (var_1_44 + var_1_38)) >= var_1_48) ? (var_1_65 ? ((var_1_103 >= var_1_84) ? (var_1_63 == ((signed char) ((((var_1_44 + ((((var_1_62) < (var_1_3)) ? (var_1_62) : (var_1_3)))) < 0 ) ? -(var_1_44 + ((((var_1_62) < (var_1_3)) ? (var_1_62) : (var_1_3)))) : (var_1_44 + ((((var_1_62) < (var_1_3)) ? (var_1_62) : (var_1_3)))))))) : 1) : 1) : (var_1_63 == ((signed char) ((((var_1_43) > (var_1_38)) ? (var_1_43) : (var_1_38)))))) : 1)) && ((var_1_52 <= var_1_55) ? (var_1_65 == ((unsigned char) var_1_22)) : 1)) && ((var_1_85 == (var_1_56 + var_1_51)) ? ((var_1_102 <= var_1_44) ? (var_1_66 == ((signed short int) var_1_3)) : (var_1_66 == ((signed short int) (((((var_1_41 + var_1_34)) > (var_1_36)) ? ((var_1_41 + var_1_34)) : (var_1_36)))))) : 1)) && ((var_1_3 <= var_1_62) ? ((var_1_8 >= var_1_37) ? (var_1_67 == ((signed long int) (var_1_38 + var_1_43))) : (var_1_18 ? (var_1_67 == ((signed long int) (var_1_43 - var_1_37))) : 1)) : (((var_1_4 / var_1_37) >= (~ var_1_84)) ? (var_1_67 == ((signed long int) (var_1_44 - (var_1_68 - ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))))))) : 1))) && ((var_1_52 < var_1_85) ? ((var_1_107 && (var_1_103 <= var_1_39)) ? (var_1_69 == ((signed char) -8)) : 1) : 1)) && ((var_1_54 > (var_1_53 / var_1_72)) ? ((var_1_25 >= (32 * last_1_var_1_95)) ? (var_1_71 == ((signed long int) (((var_1_73 - var_1_20) + var_1_35) - (var_1_68 - var_1_74)))) : (var_1_71 == ((signed long int) last_1_var_1_102))) : ((var_1_26 && last_1_var_1_98) ? ((last_1_var_1_58 < (var_1_8 * var_1_11)) ? (var_1_71 == ((signed long int) var_1_49)) : 1) : ((var_1_5 > var_1_11) ? (var_1_71 == ((signed long int) ((((var_1_7) > ((var_1_62 - var_1_36))) ? (var_1_7) : ((var_1_62 - var_1_36)))))) : ((var_1_49 > (var_1_20 / ((((var_1_43) > (1)) ? (var_1_43) : (1))))) ? (var_1_71 == ((signed long int) (var_1_37 + var_1_5))) : 1))))) && ((var_1_102 <= var_1_39) ? (var_1_75 == ((signed long int) (((var_1_41 + var_1_48) + var_1_3) + var_1_102))) : (var_1_75 == ((signed long int) (var_1_11 + 128))))) && (((var_1_35 < var_1_112) && (! var_1_88)) ? (((var_1_58 * var_1_12) < (((((var_1_7 / 10)) < ((var_1_102 + var_1_86))) ? ((var_1_7 / 10)) : ((var_1_102 + var_1_86))))) ? (var_1_76 == ((signed short int) (((((var_1_103 + (var_1_49 - 1))) > (var_1_92)) ? ((var_1_103 + (var_1_49 - 1))) : (var_1_92))))) : 1) : (var_1_76 == ((signed short int) (((var_1_49 + var_1_112) + var_1_42) - (var_1_78 - ((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43))))))))) && (var_1_79 == ((unsigned short int) (((((var_1_46) < (((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81))))) ? (var_1_46) : (((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81)))))) - ((var_1_48 + var_1_82) - var_1_62))))) && ((((var_1_34 * var_1_43) | var_1_4) >= var_1_102) ? (var_1_83 == ((unsigned char) (var_1_98 || var_1_27))) : (var_1_83 == ((unsigned char) (var_1_22 || (var_1_88 && var_1_26)))))) && (var_1_22 ? ((((((last_1_var_1_67) < (last_1_var_1_12)) ? (last_1_var_1_67) : (last_1_var_1_12))) == ((((var_1_81) < (var_1_20)) ? (var_1_81) : (var_1_20)))) ? (var_1_84 == ((signed long int) (var_1_25 + var_1_7))) : (var_1_84 == ((signed long int) ((((var_1_44) > ((((((var_1_33) < (var_1_24)) ? (var_1_33) : (var_1_24))) + last_1_var_1_112))) ? (var_1_44) : ((((((var_1_33) < (var_1_24)) ? (var_1_33) : (var_1_24))) + last_1_var_1_112))))))) : (var_1_84 == ((signed long int) (((var_1_20 + last_1_var_1_84) + var_1_8) + var_1_24))))) && (var_1_88 ? (var_1_85 == ((double) (var_1_55 + var_1_56))) : 1)) && ((var_1_17 < var_1_35) ? (var_1_86 == ((signed char) (var_1_62 - var_1_44))) : (var_1_86 == ((signed char) (((var_1_87 - var_1_62) - var_1_44) - var_1_41))))) && ((last_1_var_1_71 >= var_1_78) ? (var_1_88 == ((unsigned char) var_1_26)) : 1)) && (var_1_98 ? ((((var_1_19 - var_1_35) / var_1_81) != var_1_7) ? (var_1_89 == ((signed char) ((var_1_42 - (var_1_62 + var_1_90)) + var_1_3))) : ((var_1_35 >= (- var_1_81)) ? (var_1_89 == ((signed char) (var_1_38 + ((32 - var_1_62) - var_1_41)))) : (var_1_89 == ((signed char) var_1_38)))) : 1)) && ((var_1_24 < (var_1_62 - var_1_36)) ? (var_1_91 == ((unsigned short int) var_1_33)) : 1)) && (((var_1_71 * (var_1_80 - var_1_87)) <= var_1_34) ? (var_1_92 == ((unsigned short int) (((((var_1_78 - var_1_34) < 0 ) ? -(var_1_78 - var_1_34) : (var_1_78 - var_1_34))) + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) : (var_1_92 == ((unsigned short int) (53410 - var_1_82))))) && ((var_1_46 <= var_1_17) ? (var_1_93 == ((signed long int) (var_1_9 + ((((((((var_1_74) < (var_1_33)) ? (var_1_74) : (var_1_33)))) < (((((var_1_38) > (var_1_59)) ? (var_1_38) : (var_1_59))))) ? (((((var_1_74) < (var_1_33)) ? (var_1_74) : (var_1_33)))) : (((((var_1_38) > (var_1_59)) ? (var_1_38) : (var_1_59))))))))) : ((var_1_16 <= var_1_101) ? (var_1_93 == ((signed long int) var_1_84)) : 1))) && ((-1 < var_1_43) ? (var_1_95 == ((unsigned short int) ((var_1_79 + ((((var_1_96) < (var_1_36)) ? (var_1_96) : (var_1_36)))) + var_1_11))) : (var_1_27 ? (var_1_95 == ((unsigned short int) (var_1_78 + var_1_7))) : (var_1_95 == ((unsigned short int) (var_1_47 + (((((var_1_78) < (var_1_97)) ? (var_1_78) : (var_1_97))) - var_1_11))))))) && ((var_1_96 > (var_1_80 - var_1_78)) ? (var_1_98 == ((unsigned char) ((! var_1_27) || var_1_22))) : 1)) && ((var_1_53 != var_1_51) ? (var_1_99 == ((double) (var_1_54 + var_1_56))) : (var_1_99 == ((double) ((((var_1_53) > (2.5)) ? (var_1_53) : (2.5))))))) && ((var_1_83 && ((- var_1_99) == var_1_51)) ? ((var_1_51 < ((((var_1_85) < 0 ) ? -(var_1_85) : (var_1_85)))) ? (var_1_100 == ((signed char) (((((var_1_62 - var_1_44)) > (var_1_90)) ? ((var_1_62 - var_1_44)) : (var_1_90))))) : 1) : (var_1_100 == ((signed char) (var_1_90 + var_1_3))))) && ((8 != (var_1_38 - var_1_10)) ? (var_1_101 == ((unsigned long int) 128u)) : (var_1_101 == ((unsigned long int) var_1_12)))) && (var_1_98 ? (var_1_102 == ((unsigned long int) var_1_35)) : 1)) && (var_1_103 == ((signed long int) var_1_59))) && (var_1_98 ? (var_1_104 == ((float) var_1_52)) : (var_1_104 == ((float) 8.25f)))) && (var_1_108 ? (var_1_105 == ((unsigned long int) var_1_106)) : 1)) && (var_1_108 ? (var_1_107 == ((unsigned char) var_1_22)) : 1)) && (last_1_var_1_88 ? (var_1_108 == ((unsigned char) var_1_22)) : 1)) && (var_1_109 == ((unsigned char) var_1_62))) && (var_1_107 ? (var_1_110 == ((double) var_1_52)) : 1)) && (var_1_107 ? (var_1_111 == ((float) var_1_52)) : (var_1_111 == ((float) var_1_55)))) && (((var_1_101 < var_1_34) && var_1_98) ? ((var_1_96 <= (~ (var_1_37 << var_1_105))) ? ((var_1_82 <= ((var_1_102 ^ var_1_42) + (var_1_80 - var_1_60))) ? (var_1_112 == ((unsigned short int) var_1_8)) : (var_1_112 == ((unsigned short int) var_1_60))) : 1) : (var_1_112 == ((unsigned short int) var_1_10)))
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

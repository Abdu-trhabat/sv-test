// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch19Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 50;
unsigned char var_1_7 = 100;
unsigned char var_1_8 = 100;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 2;
unsigned char var_1_11 = 200;
unsigned char var_1_12 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
float var_1_20 = -0.4;
float var_1_21 = 1.4;
float var_1_22 = 99.25;
float var_1_23 = 4.625;
float var_1_24 = 9999999.1;
float var_1_25 = 32.4;
unsigned char var_1_26 = 0;
signed long int var_1_27 = 0;
signed char var_1_28 = 5;
signed char var_1_29 = 8;
signed char var_1_30 = 100;
signed char var_1_31 = 64;
signed char var_1_32 = 2;
signed short int var_1_33 = 128;
double var_1_34 = 255.4;
double var_1_35 = 0.0;
double var_1_36 = 0.0;
double var_1_37 = 0.14;
double var_1_38 = 1000000000000.6;
unsigned long int var_1_39 = 256;
float var_1_40 = 25.375;
unsigned long int var_1_41 = 2621913698;
unsigned char var_1_42 = 0;
double var_1_43 = 0.0;
signed short int var_1_44 = -8;
unsigned char var_1_45 = 64;
unsigned char var_1_46 = 32;
unsigned char var_1_47 = 0;
signed char var_1_48 = 16;
unsigned short int var_1_49 = 2;
unsigned long int var_1_50 = 2;
unsigned char var_1_51 = 0;
signed short int var_1_52 = -50;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 1;
unsigned short int var_1_57 = 4;
double var_1_58 = 99.5;
unsigned short int var_1_59 = 50;
float var_1_61 = 0.4;
float var_1_62 = 2.55;
float var_1_63 = 3.8;
float var_1_64 = 0.5;
unsigned char var_1_65 = 1;
float var_1_66 = 1.9;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 0;
float var_1_69 = 63.5;
float var_1_70 = 3.5;
float var_1_71 = 16.5;
unsigned short int var_1_72 = 128;
signed char var_1_73 = -25;
signed char var_1_74 = 50;
signed char var_1_75 = -4;
signed char var_1_76 = -1;
unsigned char var_1_77 = 0;
signed char var_1_78 = 10;
signed char var_1_79 = -1;
signed long int var_1_80 = -4;
unsigned char var_1_81 = 5;
unsigned long int var_1_82 = 10;
signed long int var_1_83 = -10;
signed long int var_1_84 = 1295038283;
unsigned long int var_1_85 = 1;
double var_1_86 = 3.025;
double var_1_87 = 50.15;
unsigned short int var_1_88 = 32;
signed long int var_1_89 = 8;
signed short int var_1_90 = 256;
unsigned char var_1_91 = 0;
signed short int var_1_92 = 16;
unsigned short int var_1_93 = 32;
signed char var_1_94 = -2;
unsigned long int var_1_95 = 16;
unsigned short int var_1_96 = 4;
double var_1_97 = 15.9;
unsigned char var_1_98 = 1;
unsigned char last_1_var_1_1 = 50;
unsigned char last_1_var_1_12 = 0;
float last_1_var_1_20 = -0.4;
float last_1_var_1_23 = 4.625;
signed char last_1_var_1_28 = 5;
signed short int last_1_var_1_33 = 128;
unsigned char last_1_var_1_42 = 0;
unsigned short int last_1_var_1_49 = 2;
signed short int last_1_var_1_52 = -50;
double last_1_var_1_58 = 99.5;
unsigned short int last_1_var_1_59 = 50;
float last_1_var_1_66 = 1.9;
unsigned char last_1_var_1_77 = 0;
signed char last_1_var_1_78 = 10;
signed long int last_1_var_1_80 = -4;
signed long int last_1_var_1_83 = -10;
double last_1_var_1_87 = 50.15;
signed long int last_1_var_1_89 = 8;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_10 = var_1_19;
 signed long int stepLocal_9 = last_1_var_1_59;
 if ((var_1_22 + last_1_var_1_87) < var_1_43) {
  if ((var_1_35 == var_1_43) && stepLocal_10) {
   if (stepLocal_9 <= (var_1_31 + var_1_32)) {
    var_1_47 = ((((var_1_8) > ((((((var_1_46) > (25)) ? (var_1_46) : (25))) + (var_1_7 - 1)))) ? (var_1_8) : ((((((var_1_46) > (25)) ? (var_1_46) : (25))) + (var_1_7 - 1)))));
   }
  } else {
   var_1_47 = var_1_46;
  }
 } else {
  var_1_47 = (((((((((200) > (var_1_11)) ? (200) : (var_1_11))) - var_1_8)) > (var_1_46)) ? ((((((200) > (var_1_11)) ? (200) : (var_1_11))) - var_1_8)) : (var_1_46)));
 }
 if (last_1_var_1_58 > (- last_1_var_1_23)) {
  var_1_77 = (! var_1_19);
 }
 if ((last_1_var_1_20 + (var_1_35 * var_1_37)) == var_1_38) {
  var_1_57 = last_1_var_1_52;
 }
 unsigned short int stepLocal_27 = var_1_57;
 if (var_1_84 >= stepLocal_27) {
  var_1_97 = var_1_71;
 }
 unsigned char stepLocal_1 = last_1_var_1_12;
 signed long int stepLocal_0 = last_1_var_1_28;
 if (last_1_var_1_77 && stepLocal_1) {
  if (stepLocal_0 <= ((((last_1_var_1_83) > (last_1_var_1_1)) ? (last_1_var_1_83) : (last_1_var_1_1)))) {
   if (last_1_var_1_12) {
    var_1_1 = (((var_1_7 + var_1_8) - var_1_9) - var_1_10);
   }
  } else {
   var_1_1 = (var_1_8 + var_1_7);
  }
 } else {
  var_1_1 = ((var_1_11 - var_1_9) - var_1_10);
 }
 unsigned char stepLocal_5 = var_1_7;
 if (stepLocal_5 < last_1_var_1_33) {
  var_1_33 = (var_1_31 + var_1_9);
 } else {
  if (var_1_22 >= var_1_97) {
   var_1_33 = ((((var_1_32) > (var_1_9)) ? (var_1_32) : (var_1_9)));
  } else {
   var_1_33 = var_1_11;
  }
 }
 if (var_1_25 < (- 24.5f)) {
  var_1_80 = ((((last_1_var_1_80) < (var_1_33)) ? (last_1_var_1_80) : (var_1_33)));
 }
 if ((last_1_var_1_66 * (- last_1_var_1_58)) >= last_1_var_1_66) {
  var_1_12 = (var_1_16 || var_1_17);
 } else {
  if (last_1_var_1_58 >= last_1_var_1_66) {
   var_1_12 = (var_1_18 && var_1_19);
  } else {
   var_1_12 = (var_1_17 || var_1_16);
  }
 }
 signed long int stepLocal_2 = var_1_8 % var_1_11;
 if (stepLocal_2 <= 2) {
  var_1_20 = ((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)));
 }
 var_1_27 = ((((-8) > (var_1_10)) ? (-8) : (var_1_10)));
 if ((var_1_36 - (var_1_37 + var_1_40)) >= 8.187) {
  var_1_39 = (((((3491399024u) > (var_1_41)) ? (3491399024u) : (var_1_41))) - var_1_11);
 }
 if (! var_1_16) {
  if (var_1_77) {
   var_1_49 = (last_1_var_1_49 + (var_1_8 + var_1_31));
  } else {
   var_1_49 = var_1_8;
  }
 }
 signed char stepLocal_22 = var_1_76;
 if (var_1_29 >= stepLocal_22) {
  var_1_79 = ((((((((32) < (var_1_74)) ? (32) : (var_1_74)))) < (((((var_1_29) > (var_1_9)) ? (var_1_29) : (var_1_9))))) ? (((((32) < (var_1_74)) ? (32) : (var_1_74)))) : (((((var_1_29) > (var_1_9)) ? (var_1_29) : (var_1_9))))));
 }
 if (var_1_16) {
  var_1_85 = var_1_46;
 }
 if (var_1_68) {
  var_1_86 = var_1_25;
 } else {
  var_1_86 = var_1_63;
 }
 if (var_1_54) {
  var_1_87 = var_1_21;
 } else {
  var_1_87 = var_1_62;
 }
 if (var_1_19) {
  var_1_89 = last_1_var_1_89;
 } else {
  var_1_89 = 1;
 }
 var_1_90 = var_1_11;
 var_1_92 = var_1_75;
 var_1_94 = var_1_30;
 unsigned long int stepLocal_26 = var_1_39;
 signed short int stepLocal_25 = var_1_33;
 signed long int stepLocal_24 = var_1_80;
 if (stepLocal_25 <= 5) {
  if (var_1_12) {
   if ((var_1_64 - (var_1_43 - 50.625f)) >= ((((24.6) < (var_1_71)) ? (24.6) : (var_1_71)))) {
    if (stepLocal_26 != last_1_var_1_83) {
     var_1_83 = var_1_8;
    } else {
     if (! var_1_18) {
      var_1_83 = (var_1_30 - (var_1_84 - var_1_10));
     } else {
      var_1_83 = ((((var_1_30 - var_1_90) < 0 ) ? -(var_1_30 - var_1_90) : (var_1_30 - var_1_90)));
     }
    }
   } else {
    if ((var_1_9 | (var_1_10 - var_1_46)) != stepLocal_24) {
     var_1_83 = ((((-16) < ((var_1_31 + last_1_var_1_83))) ? (-16) : ((var_1_31 + last_1_var_1_83))));
    } else {
     var_1_83 = ((((var_1_89) > (((((-128) > (((((var_1_76) > (var_1_10)) ? (var_1_76) : (var_1_10))))) ? (-128) : (((((var_1_76) > (var_1_10)) ? (var_1_76) : (var_1_10)))))))) ? (var_1_89) : (((((-128) > (((((var_1_76) > (var_1_10)) ? (var_1_76) : (var_1_10))))) ? (-128) : (((((var_1_76) > (var_1_10)) ? (var_1_76) : (var_1_10)))))))));
    }
   }
  }
 } else {
  var_1_83 = var_1_8;
 }
 signed short int stepLocal_7 = var_1_92;
 signed short int stepLocal_6 = var_1_92;
 if (((var_1_43 - var_1_40) - var_1_37) >= var_1_38) {
  if (stepLocal_6 > last_1_var_1_42) {
   var_1_42 = (var_1_11 - var_1_9);
  } else {
   if (stepLocal_7 <= (var_1_85 / var_1_7)) {
    var_1_42 = ((((var_1_10) < (var_1_32)) ? (var_1_10) : (var_1_32)));
   }
  }
 } else {
  var_1_42 = var_1_8;
 }
 if (var_1_7 < (128 - var_1_10)) {
  var_1_44 = ((((var_1_31) > (var_1_8)) ? (var_1_31) : (var_1_8)));
 } else {
  var_1_44 = (((((var_1_30 + var_1_31)) > (var_1_94)) ? ((var_1_30 + var_1_31)) : (var_1_94)));
 }
 signed long int stepLocal_12 = var_1_31 + (var_1_46 - var_1_79);
 if (stepLocal_12 >= (var_1_44 + var_1_49)) {
  var_1_50 = ((((var_1_30) > (var_1_9)) ? (var_1_30) : (var_1_9)));
 } else {
  var_1_50 = (var_1_41 - (var_1_31 + var_1_44));
 }
 if (var_1_32 != var_1_85) {
  var_1_61 = var_1_25;
 } else {
  var_1_61 = ((var_1_36 + var_1_37) - ((var_1_62 + var_1_63) + var_1_64));
 }
 if (((var_1_43 - var_1_63) - (var_1_64 + var_1_37)) <= var_1_87) {
  var_1_69 = ((((((var_1_37 - var_1_64) + (var_1_63 + var_1_62))) > ((((((var_1_36) < (var_1_24)) ? (var_1_36) : (var_1_24))) + (var_1_70 + var_1_71)))) ? (((var_1_37 - var_1_64) + (var_1_63 + var_1_62))) : ((((((var_1_36) < (var_1_24)) ? (var_1_36) : (var_1_24))) + (var_1_70 + var_1_71)))));
 }
 if ((- var_1_25) >= var_1_69) {
  if (var_1_16) {
   var_1_81 = (var_1_9 + (((((var_1_7) < (var_1_31)) ? (var_1_7) : (var_1_31))) - ((((var_1_32) > (var_1_46)) ? (var_1_32) : (var_1_46)))));
  } else {
   var_1_81 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
  }
 } else {
  var_1_81 = ((((var_1_9) > (var_1_11)) ? (var_1_9) : (var_1_11)));
 }
 if (var_1_16) {
  var_1_96 = var_1_42;
 } else {
  var_1_96 = var_1_85;
 }
 unsigned char stepLocal_13 = var_1_7;
 if (var_1_36 == (var_1_38 / var_1_35)) {
  var_1_53 = (var_1_77 && (! var_1_18));
 } else {
  if (var_1_18) {
   var_1_53 = (((var_1_61 > 4.25f) && var_1_17) || var_1_16);
  } else {
   if (stepLocal_13 >= var_1_47) {
    var_1_53 = (var_1_19 && (var_1_54 && var_1_55));
   }
  }
 }
 unsigned char stepLocal_8 = var_1_16;
 if (! var_1_12) {
  var_1_45 = (var_1_11 - (((((var_1_9) < (var_1_32)) ? (var_1_9) : (var_1_32))) + var_1_46));
 } else {
  if (var_1_24 < var_1_61) {
   if (stepLocal_8 || var_1_18) {
    var_1_45 = (var_1_11 - var_1_7);
   }
  } else {
   var_1_45 = (128 - ((((var_1_31) > (((((var_1_46) > (var_1_8)) ? (var_1_46) : (var_1_8))))) ? (var_1_31) : (((((var_1_46) > (var_1_8)) ? (var_1_46) : (var_1_8)))))));
  }
 }
 signed long int stepLocal_28 = (((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31));
 if (var_1_17) {
  if ((var_1_84 * var_1_45) > stepLocal_28) {
   var_1_98 = (var_1_12 && var_1_16);
  }
 } else {
  var_1_98 = var_1_19;
 }
 if (var_1_69 <= var_1_86) {
  if (var_1_25 > var_1_24) {
   if ((((((var_1_11 % var_1_8)) > (var_1_81)) ? ((var_1_11 % var_1_8)) : (var_1_81))) < ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) {
    var_1_26 = (! var_1_18);
   } else {
    var_1_26 = var_1_18;
   }
  }
 }
 if ((var_1_86 / 1.975f) >= var_1_24) {
  var_1_34 = ((var_1_35 - (var_1_36 - var_1_37)) - var_1_38);
 } else {
  if (var_1_69 >= ((((var_1_35 - var_1_36) < 0 ) ? -(var_1_35 - var_1_36) : (var_1_35 - var_1_36)))) {
   var_1_34 = (var_1_25 + var_1_24);
  }
 }
 if (var_1_64 <= var_1_69) {
  var_1_67 = (((! var_1_54) || var_1_68) || (var_1_17 || var_1_16));
 } else {
  var_1_67 = var_1_17;
 }
 if (var_1_18) {
  var_1_93 = var_1_96;
 } else {
  var_1_93 = var_1_96;
 }
 if ((var_1_8 != (var_1_10 / var_1_31)) && var_1_67) {
  if (var_1_16) {
   if (var_1_7 <= (var_1_30 + last_1_var_1_78)) {
    if ((var_1_83 * var_1_76) > (var_1_11 >> var_1_42)) {
     if (var_1_55 || var_1_77) {
      var_1_78 = ((((var_1_75) > (var_1_11)) ? (var_1_75) : (var_1_11)));
     } else {
      if (var_1_36 >= (- (- var_1_34))) {
       if (var_1_67 && (var_1_8 >= var_1_81)) {
        var_1_78 = ((var_1_30 - var_1_32) - 5);
       } else {
        var_1_78 = (var_1_30 - var_1_9);
       }
      } else {
       var_1_78 = (var_1_76 + ((((var_1_75) < ((var_1_9 - var_1_32))) ? (var_1_75) : ((var_1_9 - var_1_32)))));
      }
     }
    }
   }
  } else {
   var_1_78 = var_1_11;
  }
 }
 unsigned char stepLocal_23 = var_1_45;
 if (stepLocal_23 > var_1_46) {
  var_1_82 = (var_1_1 + var_1_83);
 }
 signed long int stepLocal_4 = ~ var_1_8;
 unsigned char stepLocal_3 = var_1_10;
 if ((- (var_1_7 * var_1_9)) >= stepLocal_3) {
  if (var_1_18) {
   if (var_1_82 != stepLocal_4) {
    var_1_23 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
   } else {
    var_1_23 = (var_1_24 + var_1_25);
   }
  } else {
   var_1_23 = var_1_25;
  }
 } else {
  var_1_23 = var_1_25;
 }
 unsigned char stepLocal_15 = var_1_1;
 signed long int stepLocal_14 = var_1_89;
 if (stepLocal_15 >= var_1_9) {
  if (var_1_89 < stepLocal_14) {
   var_1_56 = (var_1_16 || var_1_17);
  } else {
   if (var_1_55) {
    var_1_56 = (var_1_17 || var_1_16);
   }
  }
 } else {
  if (var_1_16) {
   var_1_56 = var_1_54;
  } else {
   if (var_1_34 < (var_1_25 + (- var_1_21))) {
    var_1_56 = (! ((! var_1_17) && (var_1_67 || var_1_54)));
   } else {
    var_1_56 = var_1_19;
   }
  }
 }
 if (var_1_98) {
  var_1_91 = var_1_8;
 } else {
  var_1_91 = var_1_10;
 }
 if (var_1_34 <= 99.6f) {
  var_1_28 = (((((var_1_9) > (var_1_29)) ? (var_1_9) : (var_1_29))) - (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - var_1_32));
 } else {
  var_1_28 = (var_1_32 + var_1_9);
 }
 signed long int stepLocal_17 = (var_1_32 + var_1_9) - (var_1_30 - var_1_46);
 signed long int stepLocal_16 = var_1_78 & var_1_46;
 if (var_1_37 < var_1_87) {
  if (var_1_82 == stepLocal_16) {
   var_1_58 = var_1_38;
  } else {
   var_1_58 = (var_1_37 + ((((var_1_24) > (var_1_36)) ? (var_1_24) : (var_1_36))));
  }
 } else {
  if (var_1_1 <= stepLocal_17) {
   var_1_58 = ((var_1_36 - var_1_37) + var_1_24);
  } else {
   var_1_58 = (var_1_40 - var_1_36);
  }
 }
 if (var_1_56) {
  if (var_1_43 <= var_1_97) {
   if (! (var_1_45 < (var_1_57 / var_1_31))) {
    var_1_51 = ((var_1_30 >= (var_1_10 - var_1_32)) && var_1_17);
   }
  } else {
   var_1_51 = (! var_1_18);
  }
 }
 unsigned char stepLocal_20 = var_1_68;
 if (stepLocal_20 || var_1_51) {
  var_1_72 = ((((var_1_11) < (var_1_31)) ? (var_1_11) : (var_1_31)));
 } else {
  var_1_72 = (var_1_7 + var_1_46);
 }
 if ((var_1_34 * var_1_97) > var_1_25) {
  if (! var_1_51) {
   var_1_66 = ((((((((var_1_63 + var_1_24)) > (var_1_38)) ? ((var_1_63 + var_1_24)) : (var_1_38))) < 0 ) ? -(((((var_1_63 + var_1_24)) > (var_1_38)) ? ((var_1_63 + var_1_24)) : (var_1_38))) : (((((var_1_63 + var_1_24)) > (var_1_38)) ? ((var_1_63 + var_1_24)) : (var_1_38)))));
  } else {
   var_1_66 = (1000.8f - ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))));
  }
 }
 signed long int stepLocal_21 = var_1_28 ^ var_1_72;
 if (var_1_38 < (var_1_87 + var_1_70)) {
  if (var_1_12) {
   if ((var_1_8 / ((((var_1_31) < (var_1_7)) ? (var_1_31) : (var_1_7)))) == stepLocal_21) {
    var_1_73 = ((((var_1_74) > (var_1_30)) ? (var_1_74) : (var_1_30)));
   } else {
    if (var_1_69 > (- var_1_38)) {
     var_1_73 = (var_1_46 + var_1_32);
    } else {
     var_1_73 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
    }
   }
  } else {
   var_1_73 = ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)));
  }
 } else {
  var_1_73 = ((((((var_1_32 - var_1_9) + var_1_46)) < ((((((var_1_75 + var_1_76)) > (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30))))) ? ((var_1_75 + var_1_76)) : (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30)))))))) ? (((var_1_32 - var_1_9) + var_1_46)) : ((((((var_1_75 + var_1_76)) > (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30))))) ? ((var_1_75 + var_1_76)) : (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30)))))))));
 }
 if (var_1_55) {
  var_1_88 = var_1_46;
 } else {
  var_1_88 = var_1_72;
 }
 if (var_1_51) {
  if (var_1_34 > var_1_40) {
   var_1_65 = (! (var_1_53 || var_1_18));
  } else {
   if (var_1_66 >= var_1_35) {
    var_1_65 = (var_1_18 && (! var_1_16));
   } else {
    var_1_65 = (! (var_1_17 && var_1_16));
   }
  }
 } else {
  var_1_65 = (var_1_53 || var_1_54);
 }
 if (var_1_93 >= ((var_1_9 + var_1_96) + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) {
  var_1_52 = ((((((var_1_72 - var_1_10)) > ((2 + -2))) ? ((var_1_72 - var_1_10)) : ((2 + -2)))) + var_1_7);
 } else {
  var_1_52 = ((var_1_11 - var_1_91) + ((((var_1_29) < (1)) ? (var_1_29) : (1))));
 }
 signed short int stepLocal_11 = var_1_52;
 if (stepLocal_11 > var_1_81) {
  var_1_48 = ((((var_1_30) > (var_1_46)) ? (var_1_30) : (var_1_46)));
 } else {
  var_1_48 = ((((var_1_9) < (var_1_30)) ? (var_1_9) : (var_1_30)));
 }
 if (var_1_98) {
  var_1_95 = var_1_52;
 } else {
  var_1_95 = 256u;
 }
 unsigned char stepLocal_19 = var_1_77;
 unsigned char stepLocal_18 = var_1_19;
 if ((var_1_86 >= var_1_58) && stepLocal_18) {
  var_1_59 = var_1_46;
 } else {
  if (stepLocal_19 || var_1_65) {
   var_1_59 = var_1_49;
  }
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 95);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 95);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 190);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 0);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -1);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 63);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 63);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 4611686.018427382800e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 2305843.009213691390e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691390e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427387900e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 2147483647);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 4611686.018427387900e+12F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 1);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691390e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691390e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427382800e+12F && var_1_64 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 0);
 assume_abort_if_not(var_1_68 <= 0);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= -230584.3009213691390e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 2305843.009213691390e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= -230584.3009213691390e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691390e+12F && var_1_71 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_74 >= -127);
 assume_abort_if_not(var_1_74 <= 126);
 var_1_75 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_75 >= -63);
 assume_abort_if_not(var_1_75 <= 63);
 var_1_76 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_76 >= -63);
 assume_abort_if_not(var_1_76 <= 63);
 var_1_84 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_84 >= 1073741823);
 assume_abort_if_not(var_1_84 <= 2147483646);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_83 = var_1_83;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_89 = var_1_89;
}
int property() {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_77 && last_1_var_1_12) ? ((last_1_var_1_28 <= ((((last_1_var_1_83) > (last_1_var_1_1)) ? (last_1_var_1_83) : (last_1_var_1_1)))) ? (last_1_var_1_12 ? (var_1_1 == ((unsigned char) (((var_1_7 + var_1_8) - var_1_9) - var_1_10))) : 1) : (var_1_1 == ((unsigned char) (var_1_8 + var_1_7)))) : (var_1_1 == ((unsigned char) ((var_1_11 - var_1_9) - var_1_10)))) && (((last_1_var_1_66 * (- last_1_var_1_58)) >= last_1_var_1_66) ? (var_1_12 == ((unsigned char) (var_1_16 || var_1_17))) : ((last_1_var_1_58 >= last_1_var_1_66) ? (var_1_12 == ((unsigned char) (var_1_18 && var_1_19))) : (var_1_12 == ((unsigned char) (var_1_17 || var_1_16)))))) && (((var_1_8 % var_1_11) <= 2) ? (var_1_20 == ((float) ((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22))))) : 1)) && (((- (var_1_7 * var_1_9)) >= var_1_10) ? (var_1_18 ? ((var_1_82 != (~ var_1_8)) ? (var_1_23 == ((float) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) : (var_1_23 == ((float) (var_1_24 + var_1_25)))) : (var_1_23 == ((float) var_1_25))) : (var_1_23 == ((float) var_1_25)))) && ((var_1_69 <= var_1_86) ? ((var_1_25 > var_1_24) ? (((((((var_1_11 % var_1_8)) > (var_1_81)) ? ((var_1_11 % var_1_8)) : (var_1_81))) < ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) ? (var_1_26 == ((unsigned char) (! var_1_18))) : (var_1_26 == ((unsigned char) var_1_18))) : 1) : 1)) && (var_1_27 == ((signed long int) ((((-8) > (var_1_10)) ? (-8) : (var_1_10)))))) && ((var_1_34 <= 99.6f) ? (var_1_28 == ((signed char) (((((var_1_9) > (var_1_29)) ? (var_1_9) : (var_1_29))) - (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - var_1_32)))) : (var_1_28 == ((signed char) (var_1_32 + var_1_9))))) && ((var_1_7 < last_1_var_1_33) ? (var_1_33 == ((signed short int) (var_1_31 + var_1_9))) : ((var_1_22 >= var_1_97) ? (var_1_33 == ((signed short int) ((((var_1_32) > (var_1_9)) ? (var_1_32) : (var_1_9))))) : (var_1_33 == ((signed short int) var_1_11))))) && (((var_1_86 / 1.975f) >= var_1_24) ? (var_1_34 == ((double) ((var_1_35 - (var_1_36 - var_1_37)) - var_1_38))) : ((var_1_69 >= ((((var_1_35 - var_1_36) < 0 ) ? -(var_1_35 - var_1_36) : (var_1_35 - var_1_36)))) ? (var_1_34 == ((double) (var_1_25 + var_1_24))) : 1))) && (((var_1_36 - (var_1_37 + var_1_40)) >= 8.187) ? (var_1_39 == ((unsigned long int) (((((3491399024u) > (var_1_41)) ? (3491399024u) : (var_1_41))) - var_1_11))) : 1)) && ((((var_1_43 - var_1_40) - var_1_37) >= var_1_38) ? ((var_1_92 > last_1_var_1_42) ? (var_1_42 == ((unsigned char) (var_1_11 - var_1_9))) : ((var_1_92 <= (var_1_85 / var_1_7)) ? (var_1_42 == ((unsigned char) ((((var_1_10) < (var_1_32)) ? (var_1_10) : (var_1_32))))) : 1)) : (var_1_42 == ((unsigned char) var_1_8)))) && ((var_1_7 < (128 - var_1_10)) ? (var_1_44 == ((signed short int) ((((var_1_31) > (var_1_8)) ? (var_1_31) : (var_1_8))))) : (var_1_44 == ((signed short int) (((((var_1_30 + var_1_31)) > (var_1_94)) ? ((var_1_30 + var_1_31)) : (var_1_94))))))) && ((! var_1_12) ? (var_1_45 == ((unsigned char) (var_1_11 - (((((var_1_9) < (var_1_32)) ? (var_1_9) : (var_1_32))) + var_1_46)))) : ((var_1_24 < var_1_61) ? ((var_1_16 || var_1_18) ? (var_1_45 == ((unsigned char) (var_1_11 - var_1_7))) : 1) : (var_1_45 == ((unsigned char) (128 - ((((var_1_31) > (((((var_1_46) > (var_1_8)) ? (var_1_46) : (var_1_8))))) ? (var_1_31) : (((((var_1_46) > (var_1_8)) ? (var_1_46) : (var_1_8)))))))))))) && (((var_1_22 + last_1_var_1_87) < var_1_43) ? (((var_1_35 == var_1_43) && var_1_19) ? ((last_1_var_1_59 <= (var_1_31 + var_1_32)) ? (var_1_47 == ((unsigned char) ((((var_1_8) > ((((((var_1_46) > (25)) ? (var_1_46) : (25))) + (var_1_7 - 1)))) ? (var_1_8) : ((((((var_1_46) > (25)) ? (var_1_46) : (25))) + (var_1_7 - 1))))))) : 1) : (var_1_47 == ((unsigned char) var_1_46))) : (var_1_47 == ((unsigned char) (((((((((200) > (var_1_11)) ? (200) : (var_1_11))) - var_1_8)) > (var_1_46)) ? ((((((200) > (var_1_11)) ? (200) : (var_1_11))) - var_1_8)) : (var_1_46))))))) && ((var_1_52 > var_1_81) ? (var_1_48 == ((signed char) ((((var_1_30) > (var_1_46)) ? (var_1_30) : (var_1_46))))) : (var_1_48 == ((signed char) ((((var_1_9) < (var_1_30)) ? (var_1_9) : (var_1_30))))))) && ((! var_1_16) ? (var_1_77 ? (var_1_49 == ((unsigned short int) (last_1_var_1_49 + (var_1_8 + var_1_31)))) : (var_1_49 == ((unsigned short int) var_1_8))) : 1)) && (((var_1_31 + (var_1_46 - var_1_79)) >= (var_1_44 + var_1_49)) ? (var_1_50 == ((unsigned long int) ((((var_1_30) > (var_1_9)) ? (var_1_30) : (var_1_9))))) : (var_1_50 == ((unsigned long int) (var_1_41 - (var_1_31 + var_1_44)))))) && (var_1_56 ? ((var_1_43 <= var_1_97) ? ((! (var_1_45 < (var_1_57 / var_1_31))) ? (var_1_51 == ((unsigned char) ((var_1_30 >= (var_1_10 - var_1_32)) && var_1_17))) : 1) : (var_1_51 == ((unsigned char) (! var_1_18)))) : 1)) && ((var_1_93 >= ((var_1_9 + var_1_96) + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? (var_1_52 == ((signed short int) ((((((var_1_72 - var_1_10)) > ((2 + -2))) ? ((var_1_72 - var_1_10)) : ((2 + -2)))) + var_1_7))) : (var_1_52 == ((signed short int) ((var_1_11 - var_1_91) + ((((var_1_29) < (1)) ? (var_1_29) : (1)))))))) && ((var_1_36 == (var_1_38 / var_1_35)) ? (var_1_53 == ((unsigned char) (var_1_77 && (! var_1_18)))) : (var_1_18 ? (var_1_53 == ((unsigned char) (((var_1_61 > 4.25f) && var_1_17) || var_1_16))) : ((var_1_7 >= var_1_47) ? (var_1_53 == ((unsigned char) (var_1_19 && (var_1_54 && var_1_55)))) : 1)))) && ((var_1_1 >= var_1_9) ? ((var_1_89 < var_1_89) ? (var_1_56 == ((unsigned char) (var_1_16 || var_1_17))) : (var_1_55 ? (var_1_56 == ((unsigned char) (var_1_17 || var_1_16))) : 1)) : (var_1_16 ? (var_1_56 == ((unsigned char) var_1_54)) : ((var_1_34 < (var_1_25 + (- var_1_21))) ? (var_1_56 == ((unsigned char) (! ((! var_1_17) && (var_1_67 || var_1_54))))) : (var_1_56 == ((unsigned char) var_1_19)))))) && (((last_1_var_1_20 + (var_1_35 * var_1_37)) == var_1_38) ? (var_1_57 == ((unsigned short int) last_1_var_1_52)) : 1)) && ((var_1_37 < var_1_87) ? ((var_1_82 == (var_1_78 & var_1_46)) ? (var_1_58 == ((double) var_1_38)) : (var_1_58 == ((double) (var_1_37 + ((((var_1_24) > (var_1_36)) ? (var_1_24) : (var_1_36))))))) : ((var_1_1 <= ((var_1_32 + var_1_9) - (var_1_30 - var_1_46))) ? (var_1_58 == ((double) ((var_1_36 - var_1_37) + var_1_24))) : (var_1_58 == ((double) (var_1_40 - var_1_36)))))) && (((var_1_86 >= var_1_58) && var_1_19) ? (var_1_59 == ((unsigned short int) var_1_46)) : ((var_1_77 || var_1_65) ? (var_1_59 == ((unsigned short int) var_1_49)) : 1))) && ((var_1_32 != var_1_85) ? (var_1_61 == ((float) var_1_25)) : (var_1_61 == ((float) ((var_1_36 + var_1_37) - ((var_1_62 + var_1_63) + var_1_64)))))) && (var_1_51 ? ((var_1_34 > var_1_40) ? (var_1_65 == ((unsigned char) (! (var_1_53 || var_1_18)))) : ((var_1_66 >= var_1_35) ? (var_1_65 == ((unsigned char) (var_1_18 && (! var_1_16)))) : (var_1_65 == ((unsigned char) (! (var_1_17 && var_1_16)))))) : (var_1_65 == ((unsigned char) (var_1_53 || var_1_54))))) && (((var_1_34 * var_1_97) > var_1_25) ? ((! var_1_51) ? (var_1_66 == ((float) ((((((((var_1_63 + var_1_24)) > (var_1_38)) ? ((var_1_63 + var_1_24)) : (var_1_38))) < 0 ) ? -(((((var_1_63 + var_1_24)) > (var_1_38)) ? ((var_1_63 + var_1_24)) : (var_1_38))) : (((((var_1_63 + var_1_24)) > (var_1_38)) ? ((var_1_63 + var_1_24)) : (var_1_38))))))) : (var_1_66 == ((float) (1000.8f - ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))))))) : 1)) && ((var_1_64 <= var_1_69) ? (var_1_67 == ((unsigned char) (((! var_1_54) || var_1_68) || (var_1_17 || var_1_16)))) : (var_1_67 == ((unsigned char) var_1_17)))) && ((((var_1_43 - var_1_63) - (var_1_64 + var_1_37)) <= var_1_87) ? (var_1_69 == ((float) ((((((var_1_37 - var_1_64) + (var_1_63 + var_1_62))) > ((((((var_1_36) < (var_1_24)) ? (var_1_36) : (var_1_24))) + (var_1_70 + var_1_71)))) ? (((var_1_37 - var_1_64) + (var_1_63 + var_1_62))) : ((((((var_1_36) < (var_1_24)) ? (var_1_36) : (var_1_24))) + (var_1_70 + var_1_71))))))) : 1)) && ((var_1_68 || var_1_51) ? (var_1_72 == ((unsigned short int) ((((var_1_11) < (var_1_31)) ? (var_1_11) : (var_1_31))))) : (var_1_72 == ((unsigned short int) (var_1_7 + var_1_46))))) && ((var_1_38 < (var_1_87 + var_1_70)) ? (var_1_12 ? (((var_1_8 / ((((var_1_31) < (var_1_7)) ? (var_1_31) : (var_1_7)))) == (var_1_28 ^ var_1_72)) ? (var_1_73 == ((signed char) ((((var_1_74) > (var_1_30)) ? (var_1_74) : (var_1_30))))) : ((var_1_69 > (- var_1_38)) ? (var_1_73 == ((signed char) (var_1_46 + var_1_32))) : (var_1_73 == ((signed char) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))) : (var_1_73 == ((signed char) ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))))) : (var_1_73 == ((signed char) ((((((var_1_32 - var_1_9) + var_1_46)) < ((((((var_1_75 + var_1_76)) > (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30))))) ? ((var_1_75 + var_1_76)) : (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30)))))))) ? (((var_1_32 - var_1_9) + var_1_46)) : ((((((var_1_75 + var_1_76)) > (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30))))) ? ((var_1_75 + var_1_76)) : (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30))))))))))))) && ((last_1_var_1_58 > (- last_1_var_1_23)) ? (var_1_77 == ((unsigned char) (! var_1_19))) : 1)) && (((var_1_8 != (var_1_10 / var_1_31)) && var_1_67) ? (var_1_16 ? ((var_1_7 <= (var_1_30 + last_1_var_1_78)) ? (((var_1_83 * var_1_76) > (var_1_11 >> var_1_42)) ? ((var_1_55 || var_1_77) ? (var_1_78 == ((signed char) ((((var_1_75) > (var_1_11)) ? (var_1_75) : (var_1_11))))) : ((var_1_36 >= (- (- var_1_34))) ? ((var_1_67 && (var_1_8 >= var_1_81)) ? (var_1_78 == ((signed char) ((var_1_30 - var_1_32) - 5))) : (var_1_78 == ((signed char) (var_1_30 - var_1_9)))) : (var_1_78 == ((signed char) (var_1_76 + ((((var_1_75) < ((var_1_9 - var_1_32))) ? (var_1_75) : ((var_1_9 - var_1_32))))))))) : 1) : 1) : (var_1_78 == ((signed char) var_1_11))) : 1)) && ((var_1_29 >= var_1_76) ? (var_1_79 == ((signed char) ((((((((32) < (var_1_74)) ? (32) : (var_1_74)))) < (((((var_1_29) > (var_1_9)) ? (var_1_29) : (var_1_9))))) ? (((((32) < (var_1_74)) ? (32) : (var_1_74)))) : (((((var_1_29) > (var_1_9)) ? (var_1_29) : (var_1_9)))))))) : 1)) && ((var_1_25 < (- 24.5f)) ? (var_1_80 == ((signed long int) ((((last_1_var_1_80) < (var_1_33)) ? (last_1_var_1_80) : (var_1_33))))) : 1)) && (((- var_1_25) >= var_1_69) ? (var_1_16 ? (var_1_81 == ((unsigned char) (var_1_9 + (((((var_1_7) < (var_1_31)) ? (var_1_7) : (var_1_31))) - ((((var_1_32) > (var_1_46)) ? (var_1_32) : (var_1_46))))))) : (var_1_81 == ((unsigned char) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) : (var_1_81 == ((unsigned char) ((((var_1_9) > (var_1_11)) ? (var_1_9) : (var_1_11))))))) && ((var_1_45 > var_1_46) ? (var_1_82 == ((unsigned long int) (var_1_1 + var_1_83))) : 1)) && ((var_1_33 <= 5) ? (var_1_12 ? (((var_1_64 - (var_1_43 - 50.625f)) >= ((((24.6) < (var_1_71)) ? (24.6) : (var_1_71)))) ? ((var_1_39 != last_1_var_1_83) ? (var_1_83 == ((signed long int) var_1_8)) : ((! var_1_18) ? (var_1_83 == ((signed long int) (var_1_30 - (var_1_84 - var_1_10)))) : (var_1_83 == ((signed long int) ((((var_1_30 - var_1_90) < 0 ) ? -(var_1_30 - var_1_90) : (var_1_30 - var_1_90))))))) : (((var_1_9 | (var_1_10 - var_1_46)) != var_1_80) ? (var_1_83 == ((signed long int) ((((-16) < ((var_1_31 + last_1_var_1_83))) ? (-16) : ((var_1_31 + last_1_var_1_83)))))) : (var_1_83 == ((signed long int) ((((var_1_89) > (((((-128) > (((((var_1_76) > (var_1_10)) ? (var_1_76) : (var_1_10))))) ? (-128) : (((((var_1_76) > (var_1_10)) ? (var_1_76) : (var_1_10)))))))) ? (var_1_89) : (((((-128) > (((((var_1_76) > (var_1_10)) ? (var_1_76) : (var_1_10))))) ? (-128) : (((((var_1_76) > (var_1_10)) ? (var_1_76) : (var_1_10))))))))))))) : 1) : (var_1_83 == ((signed long int) var_1_8)))) && (var_1_16 ? (var_1_85 == ((unsigned long int) var_1_46)) : 1)) && (var_1_68 ? (var_1_86 == ((double) var_1_25)) : (var_1_86 == ((double) var_1_63)))) && (var_1_54 ? (var_1_87 == ((double) var_1_21)) : (var_1_87 == ((double) var_1_62)))) && (var_1_55 ? (var_1_88 == ((unsigned short int) var_1_46)) : (var_1_88 == ((unsigned short int) var_1_72)))) && (var_1_19 ? (var_1_89 == ((signed long int) last_1_var_1_89)) : (var_1_89 == ((signed long int) 1)))) && (var_1_90 == ((signed short int) var_1_11))) && (var_1_98 ? (var_1_91 == ((unsigned char) var_1_8)) : (var_1_91 == ((unsigned char) var_1_10)))) && (var_1_92 == ((signed short int) var_1_75))) && (var_1_18 ? (var_1_93 == ((unsigned short int) var_1_96)) : (var_1_93 == ((unsigned short int) var_1_96)))) && (var_1_94 == ((signed char) var_1_30))) && (var_1_98 ? (var_1_95 == ((unsigned long int) var_1_52)) : (var_1_95 == ((unsigned long int) 256u)))) && (var_1_16 ? (var_1_96 == ((unsigned short int) var_1_42)) : (var_1_96 == ((unsigned short int) var_1_85)))) && ((var_1_84 >= var_1_57) ? (var_1_97 == ((double) var_1_71)) : 1)) && (var_1_17 ? (((var_1_84 * var_1_45) > ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) ? (var_1_98 == ((unsigned char) (var_1_12 && var_1_16))) : 1) : (var_1_98 == ((unsigned char) var_1_19)))
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

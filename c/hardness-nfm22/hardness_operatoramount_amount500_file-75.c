// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 5;
unsigned char var_1_8 = 25;
unsigned char var_1_9 = 64;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 0;
signed char var_1_12 = 4;
signed char var_1_13 = 0;
float var_1_14 = 255.5;
float var_1_18 = 2.5;
float var_1_19 = 255.8;
float var_1_20 = 49.5;
unsigned long int var_1_21 = 128;
unsigned long int var_1_23 = 2700720372;
signed char var_1_24 = 1;
signed char var_1_25 = 0;
signed char var_1_26 = 64;
signed char var_1_27 = -1;
double var_1_28 = 10.6;
double var_1_29 = 0.0;
double var_1_30 = 10000000000000.6;
unsigned short int var_1_31 = 100;
unsigned short int var_1_32 = 35719;
unsigned short int var_1_33 = 2;
signed short int var_1_35 = 50;
unsigned short int var_1_36 = 256;
unsigned short int var_1_37 = 10000;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned long int var_1_42 = 1000000000;
unsigned long int var_1_43 = 3714280535;
float var_1_44 = 63.5;
float var_1_45 = 0.0;
signed long int var_1_46 = -32;
float var_1_47 = 4.75;
float var_1_48 = 10.625;
float var_1_49 = -0.375;
signed short int var_1_50 = -16;
double var_1_52 = 99.875;
double var_1_53 = 99.107;
double var_1_54 = 0.0;
double var_1_55 = 256.4;
float var_1_56 = 255.5;
float var_1_57 = -0.5;
unsigned char var_1_58 = 32;
float var_1_59 = 16.8;
signed long int var_1_60 = -16;
signed long int var_1_61 = -5;
unsigned short int var_1_62 = 0;
unsigned long int var_1_63 = 128;
unsigned long int var_1_64 = 5;
signed long int var_1_65 = 32;
unsigned short int var_1_66 = 10;
unsigned short int var_1_67 = 58888;
unsigned short int var_1_68 = 200;
unsigned char var_1_70 = 100;
unsigned char var_1_71 = 16;
unsigned short int var_1_72 = 16;
unsigned char var_1_73 = 200;
unsigned char var_1_74 = 4;
unsigned char var_1_75 = 32;
signed char var_1_76 = 16;
signed long int var_1_77 = 5;
unsigned short int var_1_78 = 100;
signed short int var_1_79 = -64;
double var_1_82 = 0.2;
unsigned char var_1_83 = 1;
signed char var_1_84 = 2;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 1;
signed short int var_1_88 = 25;
unsigned short int var_1_89 = 256;
unsigned short int var_1_90 = 19148;
unsigned short int var_1_91 = 57682;
signed char var_1_92 = -32;
signed char var_1_93 = 32;
signed char var_1_94 = 8;
signed long int var_1_95 = 4;
signed short int var_1_96 = -4;
signed short int var_1_97 = 25;
unsigned char var_1_98 = 0;
signed short int var_1_99 = -8;
signed short int var_1_100 = -1000;
unsigned long int var_1_101 = 2;
unsigned char var_1_102 = 32;
signed long int var_1_103 = 50;
unsigned short int var_1_104 = 1;
unsigned long int var_1_105 = 1000000;
double var_1_106 = 7.875;
signed long int var_1_107 = 25;
unsigned char var_1_108 = 100;
unsigned short int var_1_109 = 16;
unsigned long int var_1_110 = 5;
unsigned char var_1_111 = 1;
unsigned short int var_1_112 = 0;
unsigned char var_1_113 = 1;
double var_1_114 = -0.8;
double var_1_115 = 49.5;
signed long int var_1_116 = 2;
unsigned char var_1_117 = 2;
float var_1_118 = 3.4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 32;
float last_1_var_1_14 = 255.5;
unsigned long int last_1_var_1_21 = 128;
unsigned short int last_1_var_1_33 = 2;
unsigned short int last_1_var_1_36 = 256;
signed short int last_1_var_1_50 = -16;
float last_1_var_1_59 = 16.8;
signed long int last_1_var_1_65 = 32;
unsigned short int last_1_var_1_68 = 200;
unsigned char last_1_var_1_74 = 4;
signed short int last_1_var_1_79 = -64;
unsigned char last_1_var_1_83 = 1;
unsigned short int last_1_var_1_89 = 256;
signed long int last_1_var_1_95 = 4;
signed long int last_1_var_1_107 = 25;
unsigned short int last_1_var_1_109 = 16;
double last_1_var_1_114 = -0.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req22Batch75Amount500
	signed long int stepLocal_19 = last_1_var_1_68 / var_1_26;
	unsigned long int stepLocal_18 = last_1_var_1_21;
	if ((max (var_1_37 , last_1_var_1_89)) <= stepLocal_19) {
		if (stepLocal_18 <= ((var_1_13 & last_1_var_1_74) / (min (var_1_60 , var_1_26)))) {
			var_1_59 = (var_1_55 + (min (var_1_57 , var_1_53)));
		} else {
			var_1_59 = (max (var_1_29 , 9.625f));
		}
	} else {
		var_1_59 = (abs (var_1_30 + var_1_57));
	}


	// From: Req52Batch75Amount500
	if (var_1_39) {
		var_1_107 = last_1_var_1_33;
	}


	// From: Req25Batch75Amount500
	var_1_65 = ((min (last_1_var_1_36 , last_1_var_1_107)) + last_1_var_1_95);


	// From: Req28Batch75Amount500
	unsigned short int stepLocal_22 = var_1_67;
	if (stepLocal_22 >= last_1_var_1_109) {
		if ((var_1_54 + 8.3) > (var_1_20 * var_1_57)) {
			var_1_71 = (var_1_4 - var_1_62);
		} else {
			var_1_71 = (var_1_8 + var_1_70);
		}
	}


	// From: Req12Batch75Amount500
	signed long int stepLocal_4 = last_1_var_1_79 / var_1_10;
	signed long int stepLocal_3 = abs (max (var_1_10 , var_1_11));
	if (last_1_var_1_65 < stepLocal_3) {
		var_1_36 = (((var_1_37 - last_1_var_1_79) + var_1_4) + var_1_9);
	} else {
		if ((min (last_1_var_1_36 , var_1_11)) >= stepLocal_4) {
			var_1_36 = var_1_8;
		}
	}


	// From: Req21Batch75Amount500
	if (! (var_1_32 <= (var_1_36 / 5))) {
		var_1_58 = (min (var_1_13 , (max (var_1_8 , var_1_26))));
	}


	// From: Req36Batch75Amount500
	unsigned char stepLocal_29 = var_1_40;
	signed char stepLocal_28 = var_1_13;
	if (stepLocal_28 == (var_1_11 - var_1_84)) {
		if (var_1_39) {
			if (stepLocal_29 || (last_1_var_1_59 > (last_1_var_1_114 / 31.5f))) {
				var_1_83 = (! (! var_1_85));
			} else {
				var_1_83 = (var_1_40 && var_1_41);
			}
		} else {
			var_1_83 = ((last_1_var_1_83 && var_1_40) && var_1_41);
		}
	} else {
		var_1_83 = ((var_1_85 && var_1_86) && var_1_87);
	}


	// From: Req33Batch75Amount500
	var_1_78 = (max ((var_1_32 - var_1_73) , (abs (var_1_11 + var_1_71))));


	// From: Req47Batch75Amount500
	if (var_1_83) {
		var_1_102 = var_1_75;
	} else {
		var_1_102 = 128;
	}


	// From: Req23Batch75Amount500
	signed long int stepLocal_20 = - var_1_5;
	if (! var_1_39) {
		if (stepLocal_20 <= (var_1_37 << (min (1 , var_1_62)))) {
			var_1_61 = (min ((min (var_1_11 , 8)) , var_1_32));
		}
	} else {
		var_1_61 = (((var_1_37 + var_1_4) + var_1_78) - var_1_26);
	}


	// From: Req3Batch75Amount500
	var_1_12 = (var_1_11 - var_1_13);


	// From: Req6Batch75Amount500
	if ((~ var_1_9) == (min (var_1_4 , var_1_13))) {
		var_1_24 = (32 + var_1_11);
	}


	// From: Req14Batch75Amount500
	unsigned char stepLocal_6 = var_1_9;
	unsigned char stepLocal_5 = var_1_5;
	if (stepLocal_6 < (var_1_4 - var_1_10)) {
		var_1_42 = (max (var_1_4 , var_1_8));
	} else {
		if (16 >= stepLocal_5) {
			var_1_42 = ((abs (var_1_43 - var_1_32)) - 8u);
		}
	}


	// From: Req17Batch75Amount500
	unsigned char stepLocal_8 = var_1_9;
	if (var_1_13 <= stepLocal_8) {
		var_1_47 = (var_1_30 + var_1_48);
	} else {
		var_1_47 = (min (((abs (var_1_48)) + 1.5f) , (var_1_30 + var_1_49)));
	}


	// From: Req43Batch75Amount500
	var_1_98 = (! (! var_1_85));


	// From: Req48Batch75Amount500
	var_1_103 = var_1_43;


	// From: Req49Batch75Amount500
	var_1_104 = 0;


	// From: Req51Batch75Amount500
	var_1_106 = var_1_30;


	// From: Req53Batch75Amount500
	if (var_1_41) {
		var_1_108 = var_1_11;
	} else {
		var_1_108 = var_1_10;
	}


	// From: Req55Batch75Amount500
	if (var_1_41) {
		var_1_110 = 2u;
	}


	// From: Req56Batch75Amount500
	var_1_111 = var_1_85;


	// From: Req58Batch75Amount500
	if (var_1_87) {
		var_1_113 = var_1_85;
	}


	// From: Req59Batch75Amount500
	var_1_114 = var_1_54;


	// From: Req60Batch75Amount500
	var_1_115 = var_1_29;


	// From: Req61Batch75Amount500
	if (var_1_87) {
		var_1_116 = var_1_5;
	}


	// From: Req62Batch75Amount500
	if (var_1_41) {
		var_1_117 = var_1_62;
	}


	// From: Req10Batch75Amount500
	unsigned char stepLocal_1 = var_1_83;
	if (stepLocal_1 || var_1_111) {
		if (var_1_111) {
			var_1_33 = var_1_107;
		} else {
			var_1_33 = var_1_11;
		}
	} else {
		var_1_33 = var_1_107;
	}


	// From: Req24Batch75Amount500
	signed long int stepLocal_21 = var_1_11 * (var_1_8 * var_1_58);
	if ((var_1_60 / (min (var_1_64 , var_1_37))) >= stepLocal_21) {
		var_1_63 = ((var_1_71 + 128u) + var_1_8);
	}


	// From: Req50Batch75Amount500
	if (var_1_111) {
		var_1_105 = var_1_102;
	} else {
		var_1_105 = var_1_43;
	}


	// From: Req9Batch75Amount500
	if (! var_1_113) {
		var_1_31 = (min ((var_1_32 - (var_1_78 + var_1_26)) , var_1_9));
	}


	// From: Req15Batch75Amount500
	signed char stepLocal_7 = var_1_26;
	if (((max (var_1_31 , var_1_117)) + var_1_27) > stepLocal_7) {
		var_1_44 = (abs (max (var_1_19 , (var_1_29 - var_1_30))));
	} else {
		if (var_1_106 == (var_1_29 - (var_1_45 - var_1_30))) {
			var_1_44 = (min (var_1_19 , var_1_29));
		}
	}


	// From: Req34Batch75Amount500
	signed long int stepLocal_26 = abs (var_1_75 - var_1_9);
	if (var_1_27 != stepLocal_26) {
		var_1_79 = (max (var_1_117 , ((min (var_1_108 , 16)) - 5)));
	} else {
		var_1_79 = (var_1_5 - (min ((min (var_1_102 , var_1_62)) , var_1_37)));
	}


	// From: Req4Batch75Amount500
	if ((max ((min (var_1_114 , var_1_47)) , 1.0000000000000006E15f)) < last_1_var_1_14) {
		if (var_1_113) {
			var_1_14 = ((min (var_1_18 , var_1_19)) - var_1_20);
		}
	}


	// From: Req11Batch75Amount500
	unsigned char stepLocal_2 = -4 < var_1_10;
	if (stepLocal_2 || var_1_113) {
		var_1_35 = (abs (var_1_5 - var_1_13));
	}


	// From: Req13Batch75Amount500
	if (var_1_20 > (- var_1_14)) {
		var_1_38 = (var_1_39 || var_1_40);
	} else {
		var_1_38 = ((var_1_8 <= var_1_5) && ((var_1_39 || var_1_40) || var_1_41));
	}


	// From: Req29Batch75Amount500
	signed long int stepLocal_23 = (var_1_73 - var_1_11) - var_1_5;
	if (stepLocal_23 < -8) {
		var_1_72 = (min ((var_1_8 + var_1_105) , var_1_9));
	}


	// From: Req30Batch75Amount500
	unsigned char stepLocal_24 = var_1_98;
	if (stepLocal_24 && (var_1_41 || var_1_40)) {
		var_1_74 = ((var_1_62 + var_1_11) + (var_1_70 - var_1_75));
	}


	// From: Req31Batch75Amount500
	unsigned char stepLocal_25 = var_1_111;
	if (var_1_113 && stepLocal_25) {
		var_1_76 = (var_1_11 + var_1_75);
	}


	// From: Req35Batch75Amount500
	signed long int stepLocal_27 = 5;
	if (var_1_55 > var_1_14) {
		var_1_82 = (var_1_49 + (var_1_53 - var_1_30));
	} else {
		if (var_1_116 < stepLocal_27) {
			var_1_82 = (var_1_30 + var_1_49);
		}
	}


	// From: Req45Batch75Amount500
	var_1_100 = (var_1_26 + (max (var_1_116 , var_1_27)));


	// From: Req57Batch75Amount500
	var_1_112 = var_1_100;


	// From: Req40Batch75Amount500
	var_1_95 = (var_1_63 - (max (2 , (var_1_65 + var_1_4))));


	// From: Req26Batch75Amount500
	if (var_1_39) {
		var_1_66 = var_1_10;
	} else {
		if (var_1_48 <= var_1_82) {
			var_1_66 = ((min (var_1_10 , 32)) + var_1_62);
		} else {
			var_1_66 = ((max ((var_1_67 - var_1_8) , var_1_32)) - (var_1_105 + var_1_26));
		}
	}


	// From: Req32Batch75Amount500
	if (var_1_4 < var_1_33) {
		var_1_77 = (abs (var_1_74 + var_1_32));
	}


	// From: Req18Batch75Amount500
	unsigned char stepLocal_9 = var_1_38;
	if (stepLocal_9 || (var_1_18 < var_1_30)) {
		var_1_50 = (((var_1_5 + last_1_var_1_50) + var_1_74) + var_1_76);
	} else {
		var_1_50 = (min (var_1_5 , (var_1_27 + var_1_26)));
	}


	// From: Req2Batch75Amount500
	if (var_1_83) {
		if (var_1_5 > var_1_4) {
			if ((16 > var_1_5) || (var_1_77 == (min (var_1_117 , var_1_50)))) {
				var_1_6 = var_1_5;
			} else {
				var_1_6 = (var_1_4 - var_1_5);
			}
		} else {
			var_1_6 = (min (var_1_5 , (var_1_4 - (min (var_1_8 , var_1_9)))));
		}
	} else {
		if (var_1_4 < var_1_9) {
			var_1_6 = (var_1_5 + (max ((var_1_10 - var_1_11) , 8)));
		} else {
			var_1_6 = var_1_10;
		}
	}


	// From: Req7Batch75Amount500
	if ((- var_1_9) > (min (var_1_76 , (var_1_66 * var_1_10)))) {
		if (4 > (max (var_1_13 , var_1_105))) {
			var_1_25 = (var_1_13 - (var_1_26 - var_1_11));
		} else {
			var_1_25 = (var_1_11 + var_1_27);
		}
	}


	// From: Req16Batch75Amount500
	if ((- (var_1_61 >> 4)) <= var_1_8) {
		var_1_46 = ((min (var_1_25 , var_1_112)) + var_1_26);
	} else {
		var_1_46 = var_1_32;
	}


	// From: Req8Batch75Amount500
	if (var_1_23 <= var_1_6) {
		var_1_28 = ((min (var_1_19 , var_1_20)) - (var_1_29 - var_1_30));
	}


	// From: Req41Batch75Amount500
	if ((abs (var_1_28)) < var_1_30) {
		var_1_96 = (var_1_70 - (max (var_1_11 , var_1_107)));
	} else {
		var_1_96 = (min ((var_1_9 - var_1_84) , var_1_5));
	}


	// From: Req1Batch75Amount500
	if (var_1_46 <= last_1_var_1_1) {
		var_1_1 = (var_1_4 - var_1_5);
	}


	// From: Req63Batch75Amount500
	unsigned char stepLocal_37 = var_1_1;
	unsigned char stepLocal_36 = 256u > var_1_1;
	if (var_1_38 || stepLocal_36) {
		if ((var_1_95 / var_1_70) > stepLocal_37) {
			var_1_118 = (min ((500.9f + 2.8f) , -0.8f));
		} else {
			var_1_118 = var_1_49;
		}
	}


	// From: Req44Batch75Amount500
	unsigned short int stepLocal_35 = var_1_91;
	if (stepLocal_35 >= var_1_90) {
		var_1_99 = (max (((min (var_1_63 , var_1_71)) + var_1_25) , var_1_37));
	}


	// From: Req20Batch75Amount500
	unsigned char stepLocal_17 = var_1_49 <= (var_1_48 + var_1_47);
	signed short int stepLocal_16 = var_1_96;
	unsigned short int stepLocal_15 = var_1_37;
	signed char stepLocal_14 = var_1_24;
	unsigned char stepLocal_13 = var_1_41 || var_1_111;
	if (var_1_83 && stepLocal_17) {
		var_1_56 = ((15.5f - (min (var_1_55 , var_1_30))) + (abs (0.19999999999999996f)));
	} else {
		if (var_1_32 == stepLocal_15) {
			if (stepLocal_16 > ((var_1_11 + var_1_26) - var_1_46)) {
				if (var_1_96 < stepLocal_14) {
					if (stepLocal_13 && ((var_1_4 ^ var_1_26) > -128)) {
						var_1_56 = (min (((max (var_1_48 , 1.5f)) + var_1_55) , var_1_49));
					} else {
						var_1_56 = ((var_1_55 + var_1_57) + var_1_30);
					}
				} else {
					var_1_56 = (max (var_1_54 , var_1_57));
				}
			}
		} else {
			var_1_56 = (var_1_29 - (var_1_54 - 3.5f));
		}
	}


	// From: Req37Batch75Amount500
	signed short int stepLocal_30 = var_1_99;
	if ((- var_1_13) >= stepLocal_30) {
		var_1_88 = (var_1_84 - var_1_117);
	}


	// From: Req38Batch75Amount500
	if ((var_1_44 + var_1_45) >= ((var_1_49 / var_1_29) + (max (var_1_82 , var_1_56)))) {
		if (var_1_108 >= var_1_100) {
			if (var_1_14 <= var_1_106) {
				var_1_89 = (var_1_8 + (min (var_1_105 , (var_1_90 - last_1_var_1_89))));
			}
		}
	} else {
		if (var_1_98) {
			var_1_89 = ((min (var_1_91 , (min (var_1_32 , var_1_67)))) - var_1_13);
		}
	}


	// From: Req42Batch75Amount500
	unsigned short int stepLocal_34 = var_1_89;
	if (stepLocal_34 >= (var_1_67 / (abs (var_1_10)))) {
		var_1_97 = ((max (var_1_12 , var_1_9)) - var_1_93);
	} else {
		var_1_97 = (var_1_4 + var_1_9);
	}


	// From: Req46Batch75Amount500
	if (var_1_88 < var_1_70) {
		var_1_101 = 128u;
	}


	// From: Req54Batch75Amount500
	if (var_1_41) {
		var_1_109 = var_1_70;
	} else {
		var_1_109 = var_1_101;
	}


	// From: Req27Batch75Amount500
	if ((var_1_97 / var_1_10) < (5 - var_1_107)) {
		var_1_68 = (var_1_11 + (abs (var_1_46)));
	} else {
		if (((var_1_46 - var_1_31) <= (min (var_1_58 , 1000000000))) || var_1_39) {
			if (((var_1_26 + var_1_70) - (abs (var_1_5))) >= var_1_37) {
				var_1_68 = var_1_32;
			}
		}
	}


	// From: Req19Batch75Amount500
	unsigned short int stepLocal_12 = var_1_72;
	signed long int stepLocal_11 = -32;
	unsigned long int stepLocal_10 = var_1_43;
	if (stepLocal_12 > var_1_27) {
		if (stepLocal_10 < (- (abs (var_1_23)))) {
			if ((var_1_68 * var_1_36) > stepLocal_11) {
				var_1_52 = (max ((var_1_49 + (var_1_30 - var_1_53)) , var_1_18));
			} else {
				if (var_1_18 >= var_1_20) {
					var_1_52 = (var_1_53 + var_1_30);
				} else {
					var_1_52 = ((var_1_29 - var_1_53) - (var_1_30 + var_1_55));
				}
			}
		}
	} else {
		var_1_52 = (min (var_1_54 , var_1_48));
	}


	// From: Req39Batch75Amount500
	unsigned char stepLocal_33 = (abs (var_1_115)) >= var_1_18;
	unsigned long int stepLocal_32 = var_1_43 - var_1_6;
	signed long int stepLocal_31 = var_1_36 / (abs (-50));
	if (stepLocal_31 >= (min (var_1_67 , (min (-128 , var_1_50))))) {
		var_1_92 = ((var_1_62 - (var_1_93 + var_1_94)) + var_1_11);
	} else {
		if (var_1_59 > (min (var_1_54 , var_1_115))) {
			if (var_1_41 && stepLocal_33) {
				if (stepLocal_32 > var_1_101) {
					var_1_92 = (var_1_93 + var_1_27);
				} else {
					var_1_92 = (var_1_11 - var_1_26);
				}
			}
		}
	}


	// From: Req5Batch75Amount500
	signed long int stepLocal_0 = ~ var_1_4;
	if (stepLocal_0 >= (var_1_92 * var_1_5)) {
		var_1_21 = (var_1_23 - (var_1_9 + 100000000u));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 2147483647);
	assume_abort_if_not(var_1_23 <= 4294967294);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 63);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 4611686.018427382800e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 32767);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 8192);
	assume_abort_if_not(var_1_37 <= 16384);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 3221225470);
	assume_abort_if_not(var_1_43 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 4611686.018427387900e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -461168.6018427382800e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 6917529.027641073700e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -230584.3009213691390e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691390e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= -2147483648);
	assume_abort_if_not(var_1_60 <= 2147483647);
	assume_abort_if_not(var_1_60 != 0);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 2);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 4294967295);
	assume_abort_if_not(var_1_64 != 0);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 49150);
	assume_abort_if_not(var_1_67 <= 65534);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 64);
	assume_abort_if_not(var_1_70 <= 127);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 191);
	assume_abort_if_not(var_1_73 <= 255);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 63);
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 127);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 1);
	assume_abort_if_not(var_1_85 <= 1);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 1);
	assume_abort_if_not(var_1_86 <= 1);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 1);
	assume_abort_if_not(var_1_87 <= 1);
	var_1_90 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_90 >= 16383);
	assume_abort_if_not(var_1_90 <= 32767);
	var_1_91 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_91 >= 32767);
	assume_abort_if_not(var_1_91 <= 65534);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 32);
	var_1_94 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 31);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_114 = var_1_114;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_46 <= last_1_var_1_1) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : 1) && (var_1_83 ? ((var_1_5 > var_1_4) ? (((16 > var_1_5) || (var_1_77 == (min (var_1_117 , var_1_50)))) ? (var_1_6 == ((unsigned char) var_1_5)) : (var_1_6 == ((unsigned char) (var_1_4 - var_1_5)))) : (var_1_6 == ((unsigned char) (min (var_1_5 , (var_1_4 - (min (var_1_8 , var_1_9)))))))) : ((var_1_4 < var_1_9) ? (var_1_6 == ((unsigned char) (var_1_5 + (max ((var_1_10 - var_1_11) , 8))))) : (var_1_6 == ((unsigned char) var_1_10))))) && (var_1_12 == ((signed char) (var_1_11 - var_1_13)))) && (((max ((min (var_1_114 , var_1_47)) , 1.0000000000000006E15f)) < last_1_var_1_14) ? (var_1_113 ? (var_1_14 == ((float) ((min (var_1_18 , var_1_19)) - var_1_20))) : 1) : 1)) && (((~ var_1_4) >= (var_1_92 * var_1_5)) ? (var_1_21 == ((unsigned long int) (var_1_23 - (var_1_9 + 100000000u)))) : 1)) && (((~ var_1_9) == (min (var_1_4 , var_1_13))) ? (var_1_24 == ((signed char) (32 + var_1_11))) : 1)) && (((- var_1_9) > (min (var_1_76 , (var_1_66 * var_1_10)))) ? ((4 > (max (var_1_13 , var_1_105))) ? (var_1_25 == ((signed char) (var_1_13 - (var_1_26 - var_1_11)))) : (var_1_25 == ((signed char) (var_1_11 + var_1_27)))) : 1)) && ((var_1_23 <= var_1_6) ? (var_1_28 == ((double) ((min (var_1_19 , var_1_20)) - (var_1_29 - var_1_30)))) : 1)) && ((! var_1_113) ? (var_1_31 == ((unsigned short int) (min ((var_1_32 - (var_1_78 + var_1_26)) , var_1_9)))) : 1)) && ((var_1_83 || var_1_111) ? (var_1_111 ? (var_1_33 == ((unsigned short int) var_1_107)) : (var_1_33 == ((unsigned short int) var_1_11))) : (var_1_33 == ((unsigned short int) var_1_107)))) && (((-4 < var_1_10) || var_1_113) ? (var_1_35 == ((signed short int) (abs (var_1_5 - var_1_13)))) : 1)) && ((last_1_var_1_65 < (abs (max (var_1_10 , var_1_11)))) ? (var_1_36 == ((unsigned short int) (((var_1_37 - last_1_var_1_79) + var_1_4) + var_1_9))) : (((min (last_1_var_1_36 , var_1_11)) >= (last_1_var_1_79 / var_1_10)) ? (var_1_36 == ((unsigned short int) var_1_8)) : 1))) && ((var_1_20 > (- var_1_14)) ? (var_1_38 == ((unsigned char) (var_1_39 || var_1_40))) : (var_1_38 == ((unsigned char) ((var_1_8 <= var_1_5) && ((var_1_39 || var_1_40) || var_1_41)))))) && ((var_1_9 < (var_1_4 - var_1_10)) ? (var_1_42 == ((unsigned long int) (max (var_1_4 , var_1_8)))) : ((16 >= var_1_5) ? (var_1_42 == ((unsigned long int) ((abs (var_1_43 - var_1_32)) - 8u))) : 1))) && ((((max (var_1_31 , var_1_117)) + var_1_27) > var_1_26) ? (var_1_44 == ((float) (abs (max (var_1_19 , (var_1_29 - var_1_30)))))) : ((var_1_106 == (var_1_29 - (var_1_45 - var_1_30))) ? (var_1_44 == ((float) (min (var_1_19 , var_1_29)))) : 1))) && (((- (var_1_61 >> 4)) <= var_1_8) ? (var_1_46 == ((signed long int) ((min (var_1_25 , var_1_112)) + var_1_26))) : (var_1_46 == ((signed long int) var_1_32)))) && ((var_1_13 <= var_1_9) ? (var_1_47 == ((float) (var_1_30 + var_1_48))) : (var_1_47 == ((float) (min (((abs (var_1_48)) + 1.5f) , (var_1_30 + var_1_49))))))) && ((var_1_38 || (var_1_18 < var_1_30)) ? (var_1_50 == ((signed short int) (((var_1_5 + last_1_var_1_50) + var_1_74) + var_1_76))) : (var_1_50 == ((signed short int) (min (var_1_5 , (var_1_27 + var_1_26))))))) && ((var_1_72 > var_1_27) ? ((var_1_43 < (- (abs (var_1_23)))) ? (((var_1_68 * var_1_36) > -32) ? (var_1_52 == ((double) (max ((var_1_49 + (var_1_30 - var_1_53)) , var_1_18)))) : ((var_1_18 >= var_1_20) ? (var_1_52 == ((double) (var_1_53 + var_1_30))) : (var_1_52 == ((double) ((var_1_29 - var_1_53) - (var_1_30 + var_1_55)))))) : 1) : (var_1_52 == ((double) (min (var_1_54 , var_1_48)))))) && ((var_1_83 && (var_1_49 <= (var_1_48 + var_1_47))) ? (var_1_56 == ((float) ((15.5f - (min (var_1_55 , var_1_30))) + (abs (0.19999999999999996f))))) : ((var_1_32 == var_1_37) ? ((var_1_96 > ((var_1_11 + var_1_26) - var_1_46)) ? ((var_1_96 < var_1_24) ? (((var_1_41 || var_1_111) && ((var_1_4 ^ var_1_26) > -128)) ? (var_1_56 == ((float) (min (((max (var_1_48 , 1.5f)) + var_1_55) , var_1_49)))) : (var_1_56 == ((float) ((var_1_55 + var_1_57) + var_1_30)))) : (var_1_56 == ((float) (max (var_1_54 , var_1_57))))) : 1) : (var_1_56 == ((float) (var_1_29 - (var_1_54 - 3.5f))))))) && ((! (var_1_32 <= (var_1_36 / 5))) ? (var_1_58 == ((unsigned char) (min (var_1_13 , (max (var_1_8 , var_1_26)))))) : 1)) && (((max (var_1_37 , last_1_var_1_89)) <= (last_1_var_1_68 / var_1_26)) ? ((last_1_var_1_21 <= ((var_1_13 & last_1_var_1_74) / (min (var_1_60 , var_1_26)))) ? (var_1_59 == ((float) (var_1_55 + (min (var_1_57 , var_1_53))))) : (var_1_59 == ((float) (max (var_1_29 , 9.625f))))) : (var_1_59 == ((float) (abs (var_1_30 + var_1_57)))))) && ((! var_1_39) ? (((- var_1_5) <= (var_1_37 << (min (1 , var_1_62)))) ? (var_1_61 == ((signed long int) (min ((min (var_1_11 , 8)) , var_1_32)))) : 1) : (var_1_61 == ((signed long int) (((var_1_37 + var_1_4) + var_1_78) - var_1_26))))) && (((var_1_60 / (min (var_1_64 , var_1_37))) >= (var_1_11 * (var_1_8 * var_1_58))) ? (var_1_63 == ((unsigned long int) ((var_1_71 + 128u) + var_1_8))) : 1)) && (var_1_65 == ((signed long int) ((min (last_1_var_1_36 , last_1_var_1_107)) + last_1_var_1_95)))) && (var_1_39 ? (var_1_66 == ((unsigned short int) var_1_10)) : ((var_1_48 <= var_1_82) ? (var_1_66 == ((unsigned short int) ((min (var_1_10 , 32)) + var_1_62))) : (var_1_66 == ((unsigned short int) ((max ((var_1_67 - var_1_8) , var_1_32)) - (var_1_105 + var_1_26))))))) && (((var_1_97 / var_1_10) < (5 - var_1_107)) ? (var_1_68 == ((unsigned short int) (var_1_11 + (abs (var_1_46))))) : ((((var_1_46 - var_1_31) <= (min (var_1_58 , 1000000000))) || var_1_39) ? ((((var_1_26 + var_1_70) - (abs (var_1_5))) >= var_1_37) ? (var_1_68 == ((unsigned short int) var_1_32)) : 1) : 1))) && ((var_1_67 >= last_1_var_1_109) ? (((var_1_54 + 8.3) > (var_1_20 * var_1_57)) ? (var_1_71 == ((unsigned char) (var_1_4 - var_1_62))) : (var_1_71 == ((unsigned char) (var_1_8 + var_1_70)))) : 1)) && ((((var_1_73 - var_1_11) - var_1_5) < -8) ? (var_1_72 == ((unsigned short int) (min ((var_1_8 + var_1_105) , var_1_9)))) : 1)) && ((var_1_98 && (var_1_41 || var_1_40)) ? (var_1_74 == ((unsigned char) ((var_1_62 + var_1_11) + (var_1_70 - var_1_75)))) : 1)) && ((var_1_113 && var_1_111) ? (var_1_76 == ((signed char) (var_1_11 + var_1_75))) : 1)) && ((var_1_4 < var_1_33) ? (var_1_77 == ((signed long int) (abs (var_1_74 + var_1_32)))) : 1)) && (var_1_78 == ((unsigned short int) (max ((var_1_32 - var_1_73) , (abs (var_1_11 + var_1_71))))))) && ((var_1_27 != (abs (var_1_75 - var_1_9))) ? (var_1_79 == ((signed short int) (max (var_1_117 , ((min (var_1_108 , 16)) - 5))))) : (var_1_79 == ((signed short int) (var_1_5 - (min ((min (var_1_102 , var_1_62)) , var_1_37))))))) && ((var_1_55 > var_1_14) ? (var_1_82 == ((double) (var_1_49 + (var_1_53 - var_1_30)))) : ((var_1_116 < 5) ? (var_1_82 == ((double) (var_1_30 + var_1_49))) : 1))) && ((var_1_13 == (var_1_11 - var_1_84)) ? (var_1_39 ? ((var_1_40 || (last_1_var_1_59 > (last_1_var_1_114 / 31.5f))) ? (var_1_83 == ((unsigned char) (! (! var_1_85)))) : (var_1_83 == ((unsigned char) (var_1_40 && var_1_41)))) : (var_1_83 == ((unsigned char) ((last_1_var_1_83 && var_1_40) && var_1_41)))) : (var_1_83 == ((unsigned char) ((var_1_85 && var_1_86) && var_1_87))))) && (((- var_1_13) >= var_1_99) ? (var_1_88 == ((signed short int) (var_1_84 - var_1_117))) : 1)) && (((var_1_44 + var_1_45) >= ((var_1_49 / var_1_29) + (max (var_1_82 , var_1_56)))) ? ((var_1_108 >= var_1_100) ? ((var_1_14 <= var_1_106) ? (var_1_89 == ((unsigned short int) (var_1_8 + (min (var_1_105 , (var_1_90 - last_1_var_1_89)))))) : 1) : 1) : (var_1_98 ? (var_1_89 == ((unsigned short int) ((min (var_1_91 , (min (var_1_32 , var_1_67)))) - var_1_13))) : 1))) && (((var_1_36 / (abs (-50))) >= (min (var_1_67 , (min (-128 , var_1_50))))) ? (var_1_92 == ((signed char) ((var_1_62 - (var_1_93 + var_1_94)) + var_1_11))) : ((var_1_59 > (min (var_1_54 , var_1_115))) ? ((var_1_41 && ((abs (var_1_115)) >= var_1_18)) ? (((var_1_43 - var_1_6) > var_1_101) ? (var_1_92 == ((signed char) (var_1_93 + var_1_27))) : (var_1_92 == ((signed char) (var_1_11 - var_1_26)))) : 1) : 1))) && (var_1_95 == ((signed long int) (var_1_63 - (max (2 , (var_1_65 + var_1_4))))))) && (((abs (var_1_28)) < var_1_30) ? (var_1_96 == ((signed short int) (var_1_70 - (max (var_1_11 , var_1_107))))) : (var_1_96 == ((signed short int) (min ((var_1_9 - var_1_84) , var_1_5)))))) && ((var_1_89 >= (var_1_67 / (abs (var_1_10)))) ? (var_1_97 == ((signed short int) ((max (var_1_12 , var_1_9)) - var_1_93))) : (var_1_97 == ((signed short int) (var_1_4 + var_1_9))))) && (var_1_98 == ((unsigned char) (! (! var_1_85))))) && ((var_1_91 >= var_1_90) ? (var_1_99 == ((signed short int) (max (((min (var_1_63 , var_1_71)) + var_1_25) , var_1_37)))) : 1)) && (var_1_100 == ((signed short int) (var_1_26 + (max (var_1_116 , var_1_27)))))) && ((var_1_88 < var_1_70) ? (var_1_101 == ((unsigned long int) 128u)) : 1)) && (var_1_83 ? (var_1_102 == ((unsigned char) var_1_75)) : (var_1_102 == ((unsigned char) 128)))) && (var_1_103 == ((signed long int) var_1_43))) && (var_1_104 == ((unsigned short int) 0))) && (var_1_111 ? (var_1_105 == ((unsigned long int) var_1_102)) : (var_1_105 == ((unsigned long int) var_1_43)))) && (var_1_106 == ((double) var_1_30))) && (var_1_39 ? (var_1_107 == ((signed long int) last_1_var_1_33)) : 1)) && (var_1_41 ? (var_1_108 == ((unsigned char) var_1_11)) : (var_1_108 == ((unsigned char) var_1_10)))) && (var_1_41 ? (var_1_109 == ((unsigned short int) var_1_70)) : (var_1_109 == ((unsigned short int) var_1_101)))) && (var_1_41 ? (var_1_110 == ((unsigned long int) 2u)) : 1)) && (var_1_111 == ((unsigned char) var_1_85))) && (var_1_112 == ((unsigned short int) var_1_100))) && (var_1_87 ? (var_1_113 == ((unsigned char) var_1_85)) : 1)) && (var_1_114 == ((double) var_1_54))) && (var_1_115 == ((double) var_1_29))) && (var_1_87 ? (var_1_116 == ((signed long int) var_1_5)) : 1)) && (var_1_41 ? (var_1_117 == ((unsigned char) var_1_62)) : 1)) && ((var_1_38 || (256u > var_1_1)) ? (((var_1_95 / var_1_70) > var_1_1) ? (var_1_118 == ((float) (min ((500.9f + 2.8f) , -0.8f)))) : (var_1_118 == ((float) var_1_49))) : 1)
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

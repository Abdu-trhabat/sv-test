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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch27Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 32;
signed char var_1_3 = 25;
signed char var_1_4 = 10;
signed char var_1_5 = -10;
signed char var_1_6 = -1;
signed char var_1_7 = 0;
signed char var_1_8 = 8;
signed char var_1_9 = 32;
signed char var_1_10 = 32;
signed char var_1_11 = 2;
signed char var_1_12 = 2;
signed char var_1_13 = 1;
signed char var_1_14 = -1;
signed long int var_1_15 = 8;
float var_1_16 = 9999999.6;
float var_1_17 = 10.6;
unsigned char var_1_20 = 25;
unsigned long int var_1_21 = 50;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 25;
double var_1_30 = 99999999999999.5;
unsigned short int var_1_31 = 22776;
unsigned short int var_1_32 = 24965;
unsigned short int var_1_33 = 58312;
unsigned short int var_1_34 = 44397;
signed char var_1_35 = -5;
signed long int var_1_36 = 1703803082;
signed long int var_1_38 = 5;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 2;
signed short int var_1_42 = 256;
double var_1_43 = 49.8;
double var_1_44 = 4.5;
double var_1_45 = 5.75;
signed long int var_1_46 = 50;
double var_1_47 = 0.125;
double var_1_48 = 1.75;
double var_1_49 = 0.19999999999999996;
double var_1_50 = 5.25;
double var_1_51 = 127.826;
double var_1_52 = 9999999999999.2;
float var_1_53 = 10.75;
float var_1_54 = 32.5;
float var_1_55 = 32.75;
float var_1_56 = 15.4;
float var_1_57 = 1000000000.375;
unsigned char var_1_58 = 1;
unsigned char var_1_60 = 1;
float var_1_61 = 0.6;
float var_1_62 = 50.8;
signed char var_1_63 = 16;
signed char var_1_64 = 25;
signed char var_1_65 = 5;
signed char var_1_66 = 5;
signed char var_1_67 = 16;
signed char var_1_68 = 1;
unsigned long int var_1_69 = 2;
unsigned long int var_1_70 = 3015743300;
signed short int var_1_71 = -10;
double var_1_73 = -0.5;
signed long int var_1_74 = -4;
unsigned char var_1_75 = 1;
unsigned char var_1_79 = 0;
float var_1_80 = 32.375;
double var_1_82 = 2.55;
signed char var_1_83 = -32;
signed char var_1_84 = 16;
double var_1_85 = 63.9;
double var_1_86 = 16.505;
double var_1_87 = 100000000.95;
double var_1_88 = 64.5;
signed short int var_1_89 = -5;
signed short int var_1_90 = 10000;
unsigned char var_1_91 = 0;
unsigned char var_1_92 = 0;
signed long int var_1_93 = -16;
signed long int var_1_94 = 1000000000;
float var_1_95 = 4.625;
float var_1_97 = 0.0;
unsigned long int var_1_98 = 2;
unsigned long int var_1_99 = 1947961073;
unsigned long int var_1_100 = 16;
unsigned char var_1_101 = 0;
unsigned char var_1_102 = 0;
float var_1_103 = 7.25;
signed long int var_1_104 = -8;
unsigned long int var_1_105 = 32;
double var_1_106 = 63.5;
unsigned short int var_1_107 = 128;
unsigned char var_1_108 = 1;
signed char var_1_109 = 8;
signed long int var_1_110 = -200;
unsigned char var_1_111 = 1;
signed short int var_1_112 = 0;
double var_1_113 = 64.25;
float var_1_114 = 5.875;
signed char var_1_115 = -128;
signed char var_1_116 = -16;
signed long int var_1_117 = 10000000;
unsigned long int var_1_118 = 128;
double var_1_119 = 199.6;

// Calibration values

// Last'ed variables
signed char last_1_var_1_8 = 8;
signed long int last_1_var_1_38 = 5;
signed long int last_1_var_1_74 = -4;
unsigned char last_1_var_1_75 = 1;
signed short int last_1_var_1_89 = -5;
unsigned long int last_1_var_1_98 = 2;
signed long int last_1_var_1_110 = -200;
signed long int last_1_var_1_117 = 10000000;
unsigned long int last_1_var_1_118 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch27Amount500
	signed long int stepLocal_16 = last_1_var_1_38;
	signed long int stepLocal_15 = - last_1_var_1_74;
	if (var_1_33 <= stepLocal_15) {
		if (var_1_60) {
			var_1_69 = (var_1_36 + (var_1_64 + last_1_var_1_38));
		}
	} else {
		if ((var_1_64 + last_1_var_1_118) <= stepLocal_16) {
			var_1_69 = (var_1_70 - var_1_31);
		}
	}


	// From: Req16Batch27Amount500
	signed char stepLocal_13 = var_1_9;
	signed long int stepLocal_12 = last_1_var_1_89 / var_1_31;
	if (stepLocal_13 <= var_1_36) {
		var_1_58 = (var_1_25 || var_1_27);
	} else {
		if (stepLocal_12 > var_1_33) {
			var_1_58 = ((var_1_28 && var_1_27) && var_1_60);
		} else {
			var_1_58 = var_1_25;
		}
	}


	// From: Req45Batch27Amount500
	if (var_1_58) {
		var_1_111 = var_1_24;
	} else {
		var_1_111 = 0;
	}


	// From: Req35Batch27Amount500
	if (last_1_var_1_75) {
		var_1_101 = (var_1_11 + (var_1_9 + var_1_12));
	}


	// From: Req12Batch27Amount500
	signed char stepLocal_11 = var_1_14;
	signed long int stepLocal_10 = var_1_36;
	signed long int stepLocal_9 = abs (var_1_101);
	if (stepLocal_9 > ((var_1_6 << var_1_101) & var_1_14)) {
		if ((~ (25 - var_1_9)) != stepLocal_10) {
			var_1_43 = var_1_44;
		}
	} else {
		if (var_1_5 <= stepLocal_11) {
			var_1_43 = (min (var_1_44 , var_1_45));
		}
	}


	// From: Req31Batch27Amount500
	if (var_1_6 >= (last_1_var_1_110 / var_1_9)) {
		var_1_93 = ((abs (var_1_5)) + ((var_1_94 - var_1_33) - last_1_var_1_98));
	} else {
		var_1_93 = (min (last_1_var_1_8 , var_1_6));
	}


	// From: Req5Batch27Amount500
	var_1_21 = ((max ((min (var_1_3 , var_1_7)) , var_1_11)) + var_1_10);


	// From: Req10Batch27Amount500
	signed long int stepLocal_8 = (- var_1_36) / var_1_34;
	if (stepLocal_8 <= (var_1_33 - (max (256 , var_1_31)))) {
		var_1_39 = (max (((abs (var_1_3)) + var_1_11) , var_1_10));
	} else {
		var_1_39 = (var_1_40 - var_1_41);
	}


	// From: Req11Batch27Amount500
	var_1_42 = (min (var_1_7 , var_1_14));


	// From: Req13Batch27Amount500
	var_1_46 = (abs (var_1_41));


	// From: Req14Batch27Amount500
	if (31.8f > var_1_45) {
		var_1_47 = ((min (var_1_48 , (abs (var_1_44)))) - (min ((min (var_1_49 , var_1_50)) , (max (var_1_51 , var_1_52)))));
	}


	// From: Req17Batch27Amount500
	var_1_61 = ((max ((var_1_56 + var_1_55) , var_1_54)) + var_1_62);


	// From: Req18Batch27Amount500
	unsigned short int stepLocal_14 = var_1_33;
	if ((var_1_41 - (abs (var_1_4))) <= stepLocal_14) {
		var_1_63 = (((var_1_12 + var_1_64) + (var_1_11 + var_1_65)) - ((var_1_10 - var_1_66) + (var_1_67 + var_1_68)));
	} else {
		var_1_63 = (var_1_11 + (max ((var_1_67 - var_1_12) , var_1_10)));
	}


	// From: Req27Batch27Amount500
	unsigned char stepLocal_25 = var_1_41;
	if (! var_1_25) {
		if (((var_1_39 + 2) / var_1_9) < stepLocal_25) {
			var_1_85 = ((var_1_55 + (var_1_86 - var_1_87)) + (var_1_56 + var_1_88));
		} else {
			var_1_85 = ((min ((min (var_1_54 , var_1_88)) , var_1_62)) + var_1_55);
		}
	} else {
		var_1_85 = var_1_57;
	}


	// From: Req29Batch27Amount500
	var_1_91 = (! var_1_60);


	// From: Req30Batch27Amount500
	var_1_92 = (! var_1_28);


	// From: Req36Batch27Amount500
	var_1_102 = (var_1_79 && var_1_23);


	// From: Req37Batch27Amount500
	if (var_1_44 <= var_1_87) {
		var_1_103 = var_1_87;
	} else {
		var_1_103 = (min (var_1_97 , var_1_50));
	}


	// From: Req40Batch27Amount500
	var_1_106 = var_1_44;


	// From: Req41Batch27Amount500
	var_1_107 = 4;


	// From: Req42Batch27Amount500
	if (var_1_92) {
		var_1_108 = var_1_60;
	} else {
		var_1_108 = var_1_28;
	}


	// From: Req43Batch27Amount500
	if (var_1_25) {
		var_1_109 = var_1_13;
	} else {
		var_1_109 = var_1_12;
	}


	// From: Req44Batch27Amount500
	if (var_1_108) {
		var_1_110 = var_1_32;
	}


	// From: Req47Batch27Amount500
	if (var_1_102) {
		var_1_113 = 15.8;
	} else {
		var_1_113 = 4.6;
	}


	// From: Req48Batch27Amount500
	if (var_1_60) {
		var_1_114 = 5.58f;
	} else {
		var_1_114 = var_1_52;
	}


	// From: Req49Batch27Amount500
	var_1_115 = var_1_7;


	// From: Req50Batch27Amount500
	var_1_116 = var_1_5;


	// From: Req52Batch27Amount500
	var_1_118 = (min (var_1_64 , (var_1_70 - var_1_90)));


	// From: Req53Batch27Amount500
	signed long int stepLocal_31 = var_1_39 * var_1_63;
	if (var_1_84 >= stepLocal_31) {
		var_1_119 = (abs (min (var_1_48 , var_1_54)));
	} else {
		var_1_119 = 32.75;
	}


	// From: Req22Batch27Amount500
	signed long int stepLocal_19 = abs (var_1_9);
	signed long int stepLocal_18 = 25;
	if (var_1_66 >= stepLocal_19) {
		var_1_74 = (var_1_3 + var_1_93);
	} else {
		if (var_1_69 <= stepLocal_18) {
			var_1_74 = (min ((var_1_68 - var_1_67) , 1000000));
		} else {
			var_1_74 = (var_1_67 - (var_1_68 + 256));
		}
	}


	// From: Req9Batch27Amount500
	signed long int stepLocal_7 = 8;
	if ((max (var_1_11 , (- var_1_101))) != stepLocal_7) {
		var_1_38 = (var_1_107 - 128);
	}


	// From: Req39Batch27Amount500
	if (var_1_48 >= (min ((9.99999999999925E12 * var_1_114) , var_1_52))) {
		if ((var_1_119 / var_1_30) >= (var_1_87 / var_1_97)) {
			if (var_1_87 < (max ((max (32.4 , var_1_61)) , (var_1_97 - var_1_50)))) {
				var_1_105 = (min (var_1_110 , var_1_101));
			} else {
				var_1_105 = var_1_99;
			}
		} else {
			var_1_105 = var_1_11;
		}
	}


	// From: Req34Batch27Amount500
	if (var_1_25) {
		if (var_1_7 > var_1_118) {
			if (var_1_99 >= var_1_70) {
				var_1_100 = var_1_9;
			} else {
				var_1_100 = (abs (var_1_69));
			}
		}
	} else {
		var_1_100 = (min ((min (var_1_10 , var_1_118)) , var_1_31));
	}


	// From: Req2Batch27Amount500
	if (((var_1_4 * var_1_42) + (max (5 , var_1_6))) > var_1_5) {
		if (! var_1_111) {
			var_1_8 = (((var_1_9 + var_1_10) - (var_1_11 + var_1_12)) - 16);
		} else {
			var_1_8 = (var_1_5 + (min ((var_1_12 + var_1_13) , (var_1_11 + var_1_14))));
		}
	} else {
		var_1_8 = (var_1_6 + var_1_5);
	}


	// From: Req1Batch27Amount500
	signed long int stepLocal_0 = -16;
	if (! (! var_1_91)) {
		var_1_1 = ((max ((var_1_3 - var_1_4) , var_1_5)) + var_1_6);
	} else {
		if (var_1_5 > stepLocal_0) {
			var_1_1 = (var_1_6 + var_1_4);
		} else {
			var_1_1 = (max (var_1_4 , (var_1_3 - var_1_7)));
		}
	}


	// From: Req6Batch27Amount500
	signed char stepLocal_4 = var_1_7;
	signed long int stepLocal_3 = var_1_110 * (var_1_12 / var_1_9);
	signed long int stepLocal_2 = var_1_110;
	if (var_1_92) {
		var_1_22 = ((var_1_23 || var_1_24) || var_1_25);
	} else {
		if (stepLocal_2 == var_1_9) {
			if (var_1_4 > stepLocal_4) {
				if (var_1_7 > stepLocal_3) {
					var_1_22 = (var_1_27 && (! var_1_23));
				} else {
					var_1_22 = (var_1_24 && var_1_25);
				}
			} else {
				var_1_22 = ((var_1_23 || var_1_24) || var_1_25);
			}
		} else {
			var_1_22 = var_1_28;
		}
	}


	// From: Req21Batch27Amount500
	unsigned char stepLocal_17 = (var_1_3 & var_1_41) >= (var_1_116 * var_1_39);
	if (var_1_102 || stepLocal_17) {
		var_1_73 = (max ((abs (var_1_49)) , var_1_54));
	} else {
		if (var_1_25) {
			var_1_73 = (abs (var_1_51));
		}
	}


	// From: Req24Batch27Amount500
	if (var_1_54 != (var_1_73 / (max (var_1_30 , 64.8f)))) {
		var_1_80 = (var_1_56 + var_1_62);
	} else {
		var_1_80 = (max ((max ((128.6f + 64.6f) , 31.5f)) , var_1_52));
	}


	// From: Req25Batch27Amount500
	unsigned char stepLocal_21 = var_1_58;
	signed char stepLocal_20 = var_1_8;
	if (stepLocal_20 >= var_1_107) {
		if (var_1_62 <= var_1_73) {
			var_1_82 = (var_1_54 + var_1_56);
		} else {
			var_1_82 = (min (var_1_44 , var_1_56));
		}
	} else {
		if (stepLocal_21 && var_1_27) {
			var_1_82 = var_1_49;
		} else {
			if ((- (- var_1_30)) >= var_1_16) {
				var_1_82 = var_1_50;
			} else {
				var_1_82 = var_1_62;
			}
		}
	}


	// From: Req3Batch27Amount500
	if ((var_1_16 - var_1_17) != var_1_43) {
		if (var_1_92) {
			var_1_15 = (max (var_1_13 , var_1_1));
		} else {
			var_1_15 = (abs ((max (var_1_5 , var_1_6)) + var_1_4));
		}
	} else {
		var_1_15 = 1;
	}


	// From: Req7Batch27Amount500
	signed long int stepLocal_6 = var_1_12 * var_1_11;
	unsigned char stepLocal_5 = (min (var_1_16 , var_1_113)) >= 1.75f;
	if (stepLocal_5 || (var_1_13 >= var_1_38)) {
		if ((var_1_17 / (abs (var_1_30))) == (var_1_16 * var_1_113)) {
			var_1_29 = (max (var_1_7 , (max ((var_1_10 + var_1_12) , 16))));
		}
	} else {
		if (stepLocal_6 < var_1_15) {
			if (! var_1_91) {
				var_1_29 = ((var_1_31 + var_1_32) - var_1_9);
			} else {
				var_1_29 = (abs ((max (var_1_33 , var_1_34)) - (var_1_31 - 1)));
			}
		}
	}


	// From: Req15Batch27Amount500
	if (var_1_15 <= (var_1_3 >> var_1_34)) {
		if (var_1_28) {
			var_1_53 = (var_1_54 + (var_1_55 + var_1_56));
		} else {
			if (var_1_42 >= (var_1_101 * (var_1_11 / var_1_9))) {
				var_1_53 = (max (var_1_51 , (256.8f - var_1_57)));
			}
		}
	}


	// From: Req26Batch27Amount500
	signed char stepLocal_24 = var_1_67;
	unsigned char stepLocal_23 = var_1_111;
	unsigned long int stepLocal_22 = 1u;
	if ((max (var_1_105 , (var_1_107 + var_1_93))) > stepLocal_24) {
		if (var_1_70 <= stepLocal_22) {
			var_1_83 = (max (var_1_11 , (max ((var_1_68 + var_1_66) , (var_1_4 + var_1_13)))));
		} else {
			if (stepLocal_23 && (var_1_50 < var_1_80)) {
				var_1_83 = ((max ((var_1_67 - var_1_84) , var_1_14)) + var_1_68);
			}
		}
	}


	// From: Req33Batch27Amount500
	if (var_1_68 < var_1_74) {
		if (var_1_109 < var_1_64) {
			var_1_98 = (abs (var_1_12));
		} else {
			if (var_1_41 > var_1_33) {
				var_1_98 = ((var_1_36 + var_1_99) - var_1_83);
			} else {
				var_1_98 = ((var_1_11 + var_1_31) + (max (var_1_64 , var_1_84)));
			}
		}
	} else {
		if ((max (var_1_3 , var_1_7)) != (var_1_93 / (min (var_1_31 , var_1_32)))) {
			var_1_98 = (3385728546u - var_1_7);
		}
	}


	// From: Req51Batch27Amount500
	if (var_1_24) {
		var_1_117 = var_1_15;
	} else {
		var_1_117 = last_1_var_1_117;
	}


	// From: Req46Batch27Amount500
	if (var_1_102) {
		var_1_112 = var_1_98;
	}


	// From: Req4Batch27Amount500
	signed char stepLocal_1 = var_1_12;
	if ((var_1_29 / var_1_9) < stepLocal_1) {
		var_1_20 = 64;
	}


	// From: Req32Batch27Amount500
	if ((var_1_20 < var_1_32) || (! var_1_22)) {
		var_1_95 = ((min (var_1_51 , (var_1_97 - var_1_86))) - var_1_50);
	} else {
		var_1_95 = var_1_56;
	}


	// From: Req8Batch27Amount500
	if (((var_1_36 - var_1_34) - (max (var_1_12 , var_1_20))) < (min (var_1_10 , var_1_32))) {
		var_1_35 = ((min (var_1_11 , var_1_4)) - var_1_9);
	} else {
		var_1_35 = var_1_13;
	}


	// From: Req20Batch27Amount500
	if (var_1_16 <= var_1_85) {
		if (((200u + var_1_65) <= (var_1_35 * var_1_31)) && var_1_24) {
			var_1_71 = ((max (var_1_41 , var_1_40)) - var_1_7);
		}
	} else {
		if (var_1_39 < 1) {
			var_1_71 = (max (50 , var_1_5));
		}
	}


	// From: Req38Batch27Amount500
	if (var_1_87 >= var_1_47) {
		var_1_104 = (var_1_71 + (var_1_41 - (max (var_1_33 , var_1_90))));
	} else {
		var_1_104 = (min (var_1_93 , (min (var_1_100 , -16))));
	}


	// From: Req28Batch27Amount500
	signed long int stepLocal_30 = var_1_110;
	signed long int stepLocal_29 = var_1_13 + var_1_35;
	unsigned char stepLocal_28 = var_1_53 <= 127.4;
	signed long int stepLocal_27 = var_1_4 - var_1_34;
	unsigned char stepLocal_26 = (var_1_51 - var_1_52) <= var_1_16;
	if (var_1_25) {
		var_1_89 = (-1 - (var_1_41 + (var_1_90 - var_1_4)));
	} else {
		if (stepLocal_26 || var_1_111) {
			if (stepLocal_30 <= ((max (var_1_67 , var_1_31)) * -5)) {
				if (var_1_12 < stepLocal_29) {
					if ((- var_1_117) >= stepLocal_27) {
						var_1_89 = (max ((var_1_64 + var_1_109) , (var_1_40 - var_1_90)));
					} else {
						var_1_89 = (var_1_90 + var_1_41);
					}
				} else {
					var_1_89 = (abs (max (var_1_11 , (abs (var_1_12)))));
				}
			} else {
				if (var_1_58 || stepLocal_28) {
					var_1_89 = (min (var_1_66 , var_1_6));
				} else {
					var_1_89 = (abs (var_1_3));
				}
			}
		} else {
			var_1_89 = (var_1_3 - (var_1_7 + var_1_71));
		}
	}


	// From: Req23Batch27Amount500
	if (var_1_105 > var_1_110) {
		if (var_1_104 <= var_1_14) {
			var_1_75 = (! (var_1_28 && var_1_25));
		} else {
			if (((var_1_34 + var_1_9) - var_1_33) >= 2) {
				if (var_1_38 == var_1_110) {
					var_1_75 = (! (! var_1_24));
				}
			} else {
				var_1_75 = (var_1_28 && var_1_27);
			}
		}
	} else {
		var_1_75 = (var_1_79 || (! var_1_27));
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -63);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 31);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 31);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 31);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -31);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -31);
	assume_abort_if_not(var_1_14 <= 31);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	assume_abort_if_not(var_1_30 != 0.0F);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 16383);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 16384);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 1073741823);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 127);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854765600e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854765600e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854765600e+12F && var_1_45 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -230584.3009213691390e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854765600e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 1);
	assume_abort_if_not(var_1_60 <= 1);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -461168.6018427382800e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 31);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 31);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 31);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 32);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 31);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 2147483647);
	assume_abort_if_not(var_1_70 <= 4294967294);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 0);
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 63);
	var_1_86 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 2305843.009213691390e+12F && var_1_86 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 2305843.009213691390e+12F && var_1_87 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_88 >= -230584.3009213691390e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 2305843.009213691390e+12F && var_1_88 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_90 >= 8191);
	assume_abort_if_not(var_1_90 <= 16383);
	var_1_94 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_94 >= 536870911);
	assume_abort_if_not(var_1_94 <= 1073741823);
	var_1_97 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_97 >= 4611686.018427382800e+12F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 9223372.036854765600e+12F && var_1_97 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_99 >= 1073741824);
	assume_abort_if_not(var_1_99 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_117 = var_1_117;
	last_1_var_1_118 = var_1_118;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((! (! var_1_91)) ? (var_1_1 == ((signed char) ((max ((var_1_3 - var_1_4) , var_1_5)) + var_1_6))) : ((var_1_5 > -16) ? (var_1_1 == ((signed char) (var_1_6 + var_1_4))) : (var_1_1 == ((signed char) (max (var_1_4 , (var_1_3 - var_1_7))))))) && ((((var_1_4 * var_1_42) + (max (5 , var_1_6))) > var_1_5) ? ((! var_1_111) ? (var_1_8 == ((signed char) (((var_1_9 + var_1_10) - (var_1_11 + var_1_12)) - 16))) : (var_1_8 == ((signed char) (var_1_5 + (min ((var_1_12 + var_1_13) , (var_1_11 + var_1_14))))))) : (var_1_8 == ((signed char) (var_1_6 + var_1_5))))) && (((var_1_16 - var_1_17) != var_1_43) ? (var_1_92 ? (var_1_15 == ((signed long int) (max (var_1_13 , var_1_1)))) : (var_1_15 == ((signed long int) (abs ((max (var_1_5 , var_1_6)) + var_1_4))))) : (var_1_15 == ((signed long int) 1)))) && (((var_1_29 / var_1_9) < var_1_12) ? (var_1_20 == ((unsigned char) 64)) : 1)) && (var_1_21 == ((unsigned long int) ((max ((min (var_1_3 , var_1_7)) , var_1_11)) + var_1_10)))) && (var_1_92 ? (var_1_22 == ((unsigned char) ((var_1_23 || var_1_24) || var_1_25))) : ((var_1_110 == var_1_9) ? ((var_1_4 > var_1_7) ? ((var_1_7 > (var_1_110 * (var_1_12 / var_1_9))) ? (var_1_22 == ((unsigned char) (var_1_27 && (! var_1_23)))) : (var_1_22 == ((unsigned char) (var_1_24 && var_1_25)))) : (var_1_22 == ((unsigned char) ((var_1_23 || var_1_24) || var_1_25)))) : (var_1_22 == ((unsigned char) var_1_28))))) && ((((min (var_1_16 , var_1_113)) >= 1.75f) || (var_1_13 >= var_1_38)) ? (((var_1_17 / (abs (var_1_30))) == (var_1_16 * var_1_113)) ? (var_1_29 == ((unsigned short int) (max (var_1_7 , (max ((var_1_10 + var_1_12) , 16)))))) : 1) : (((var_1_12 * var_1_11) < var_1_15) ? ((! var_1_91) ? (var_1_29 == ((unsigned short int) ((var_1_31 + var_1_32) - var_1_9))) : (var_1_29 == ((unsigned short int) (abs ((max (var_1_33 , var_1_34)) - (var_1_31 - 1)))))) : 1))) && ((((var_1_36 - var_1_34) - (max (var_1_12 , var_1_20))) < (min (var_1_10 , var_1_32))) ? (var_1_35 == ((signed char) ((min (var_1_11 , var_1_4)) - var_1_9))) : (var_1_35 == ((signed char) var_1_13)))) && (((max (var_1_11 , (- var_1_101))) != 8) ? (var_1_38 == ((signed long int) (var_1_107 - 128))) : 1)) && ((((- var_1_36) / var_1_34) <= (var_1_33 - (max (256 , var_1_31)))) ? (var_1_39 == ((unsigned char) (max (((abs (var_1_3)) + var_1_11) , var_1_10)))) : (var_1_39 == ((unsigned char) (var_1_40 - var_1_41))))) && (var_1_42 == ((signed short int) (min (var_1_7 , var_1_14))))) && (((abs (var_1_101)) > ((var_1_6 << var_1_101) & var_1_14)) ? (((~ (25 - var_1_9)) != var_1_36) ? (var_1_43 == ((double) var_1_44)) : 1) : ((var_1_5 <= var_1_14) ? (var_1_43 == ((double) (min (var_1_44 , var_1_45)))) : 1))) && (var_1_46 == ((signed long int) (abs (var_1_41))))) && ((31.8f > var_1_45) ? (var_1_47 == ((double) ((min (var_1_48 , (abs (var_1_44)))) - (min ((min (var_1_49 , var_1_50)) , (max (var_1_51 , var_1_52))))))) : 1)) && ((var_1_15 <= (var_1_3 >> var_1_34)) ? (var_1_28 ? (var_1_53 == ((float) (var_1_54 + (var_1_55 + var_1_56)))) : ((var_1_42 >= (var_1_101 * (var_1_11 / var_1_9))) ? (var_1_53 == ((float) (max (var_1_51 , (256.8f - var_1_57))))) : 1)) : 1)) && ((var_1_9 <= var_1_36) ? (var_1_58 == ((unsigned char) (var_1_25 || var_1_27))) : (((last_1_var_1_89 / var_1_31) > var_1_33) ? (var_1_58 == ((unsigned char) ((var_1_28 && var_1_27) && var_1_60))) : (var_1_58 == ((unsigned char) var_1_25))))) && (var_1_61 == ((float) ((max ((var_1_56 + var_1_55) , var_1_54)) + var_1_62)))) && (((var_1_41 - (abs (var_1_4))) <= var_1_33) ? (var_1_63 == ((signed char) (((var_1_12 + var_1_64) + (var_1_11 + var_1_65)) - ((var_1_10 - var_1_66) + (var_1_67 + var_1_68))))) : (var_1_63 == ((signed char) (var_1_11 + (max ((var_1_67 - var_1_12) , var_1_10))))))) && ((var_1_33 <= (- last_1_var_1_74)) ? (var_1_60 ? (var_1_69 == ((unsigned long int) (var_1_36 + (var_1_64 + last_1_var_1_38)))) : 1) : (((var_1_64 + last_1_var_1_118) <= last_1_var_1_38) ? (var_1_69 == ((unsigned long int) (var_1_70 - var_1_31))) : 1))) && ((var_1_16 <= var_1_85) ? ((((200u + var_1_65) <= (var_1_35 * var_1_31)) && var_1_24) ? (var_1_71 == ((signed short int) ((max (var_1_41 , var_1_40)) - var_1_7))) : 1) : ((var_1_39 < 1) ? (var_1_71 == ((signed short int) (max (50 , var_1_5)))) : 1))) && ((var_1_102 || ((var_1_3 & var_1_41) >= (var_1_116 * var_1_39))) ? (var_1_73 == ((double) (max ((abs (var_1_49)) , var_1_54)))) : (var_1_25 ? (var_1_73 == ((double) (abs (var_1_51)))) : 1))) && ((var_1_66 >= (abs (var_1_9))) ? (var_1_74 == ((signed long int) (var_1_3 + var_1_93))) : ((var_1_69 <= 25) ? (var_1_74 == ((signed long int) (min ((var_1_68 - var_1_67) , 1000000)))) : (var_1_74 == ((signed long int) (var_1_67 - (var_1_68 + 256))))))) && ((var_1_105 > var_1_110) ? ((var_1_104 <= var_1_14) ? (var_1_75 == ((unsigned char) (! (var_1_28 && var_1_25)))) : ((((var_1_34 + var_1_9) - var_1_33) >= 2) ? ((var_1_38 == var_1_110) ? (var_1_75 == ((unsigned char) (! (! var_1_24)))) : 1) : (var_1_75 == ((unsigned char) (var_1_28 && var_1_27))))) : (var_1_75 == ((unsigned char) (var_1_79 || (! var_1_27)))))) && ((var_1_54 != (var_1_73 / (max (var_1_30 , 64.8f)))) ? (var_1_80 == ((float) (var_1_56 + var_1_62))) : (var_1_80 == ((float) (max ((max ((128.6f + 64.6f) , 31.5f)) , var_1_52)))))) && ((var_1_8 >= var_1_107) ? ((var_1_62 <= var_1_73) ? (var_1_82 == ((double) (var_1_54 + var_1_56))) : (var_1_82 == ((double) (min (var_1_44 , var_1_56))))) : ((var_1_58 && var_1_27) ? (var_1_82 == ((double) var_1_49)) : (((- (- var_1_30)) >= var_1_16) ? (var_1_82 == ((double) var_1_50)) : (var_1_82 == ((double) var_1_62)))))) && (((max (var_1_105 , (var_1_107 + var_1_93))) > var_1_67) ? ((var_1_70 <= 1u) ? (var_1_83 == ((signed char) (max (var_1_11 , (max ((var_1_68 + var_1_66) , (var_1_4 + var_1_13))))))) : ((var_1_111 && (var_1_50 < var_1_80)) ? (var_1_83 == ((signed char) ((max ((var_1_67 - var_1_84) , var_1_14)) + var_1_68))) : 1)) : 1)) && ((! var_1_25) ? ((((var_1_39 + 2) / var_1_9) < var_1_41) ? (var_1_85 == ((double) ((var_1_55 + (var_1_86 - var_1_87)) + (var_1_56 + var_1_88)))) : (var_1_85 == ((double) ((min ((min (var_1_54 , var_1_88)) , var_1_62)) + var_1_55)))) : (var_1_85 == ((double) var_1_57)))) && (var_1_25 ? (var_1_89 == ((signed short int) (-1 - (var_1_41 + (var_1_90 - var_1_4))))) : ((((var_1_51 - var_1_52) <= var_1_16) || var_1_111) ? ((var_1_110 <= ((max (var_1_67 , var_1_31)) * -5)) ? ((var_1_12 < (var_1_13 + var_1_35)) ? (((- var_1_117) >= (var_1_4 - var_1_34)) ? (var_1_89 == ((signed short int) (max ((var_1_64 + var_1_109) , (var_1_40 - var_1_90))))) : (var_1_89 == ((signed short int) (var_1_90 + var_1_41)))) : (var_1_89 == ((signed short int) (abs (max (var_1_11 , (abs (var_1_12)))))))) : ((var_1_58 || (var_1_53 <= 127.4)) ? (var_1_89 == ((signed short int) (min (var_1_66 , var_1_6)))) : (var_1_89 == ((signed short int) (abs (var_1_3)))))) : (var_1_89 == ((signed short int) (var_1_3 - (var_1_7 + var_1_71))))))) && (var_1_91 == ((unsigned char) (! var_1_60)))) && (var_1_92 == ((unsigned char) (! var_1_28)))) && ((var_1_6 >= (last_1_var_1_110 / var_1_9)) ? (var_1_93 == ((signed long int) ((abs (var_1_5)) + ((var_1_94 - var_1_33) - last_1_var_1_98)))) : (var_1_93 == ((signed long int) (min (last_1_var_1_8 , var_1_6)))))) && (((var_1_20 < var_1_32) || (! var_1_22)) ? (var_1_95 == ((float) ((min (var_1_51 , (var_1_97 - var_1_86))) - var_1_50))) : (var_1_95 == ((float) var_1_56)))) && ((var_1_68 < var_1_74) ? ((var_1_109 < var_1_64) ? (var_1_98 == ((unsigned long int) (abs (var_1_12)))) : ((var_1_41 > var_1_33) ? (var_1_98 == ((unsigned long int) ((var_1_36 + var_1_99) - var_1_83))) : (var_1_98 == ((unsigned long int) ((var_1_11 + var_1_31) + (max (var_1_64 , var_1_84))))))) : (((max (var_1_3 , var_1_7)) != (var_1_93 / (min (var_1_31 , var_1_32)))) ? (var_1_98 == ((unsigned long int) (3385728546u - var_1_7))) : 1))) && (var_1_25 ? ((var_1_7 > var_1_118) ? ((var_1_99 >= var_1_70) ? (var_1_100 == ((unsigned long int) var_1_9)) : (var_1_100 == ((unsigned long int) (abs (var_1_69))))) : 1) : (var_1_100 == ((unsigned long int) (min ((min (var_1_10 , var_1_118)) , var_1_31)))))) && (last_1_var_1_75 ? (var_1_101 == ((unsigned char) (var_1_11 + (var_1_9 + var_1_12)))) : 1)) && (var_1_102 == ((unsigned char) (var_1_79 && var_1_23)))) && ((var_1_44 <= var_1_87) ? (var_1_103 == ((float) var_1_87)) : (var_1_103 == ((float) (min (var_1_97 , var_1_50)))))) && ((var_1_87 >= var_1_47) ? (var_1_104 == ((signed long int) (var_1_71 + (var_1_41 - (max (var_1_33 , var_1_90)))))) : (var_1_104 == ((signed long int) (min (var_1_93 , (min (var_1_100 , -16)))))))) && ((var_1_48 >= (min ((9.99999999999925E12 * var_1_114) , var_1_52))) ? (((var_1_119 / var_1_30) >= (var_1_87 / var_1_97)) ? ((var_1_87 < (max ((max (32.4 , var_1_61)) , (var_1_97 - var_1_50)))) ? (var_1_105 == ((unsigned long int) (min (var_1_110 , var_1_101)))) : (var_1_105 == ((unsigned long int) var_1_99))) : (var_1_105 == ((unsigned long int) var_1_11))) : 1)) && (var_1_106 == ((double) var_1_44))) && (var_1_107 == ((unsigned short int) 4))) && (var_1_92 ? (var_1_108 == ((unsigned char) var_1_60)) : (var_1_108 == ((unsigned char) var_1_28)))) && (var_1_25 ? (var_1_109 == ((signed char) var_1_13)) : (var_1_109 == ((signed char) var_1_12)))) && (var_1_108 ? (var_1_110 == ((signed long int) var_1_32)) : 1)) && (var_1_58 ? (var_1_111 == ((unsigned char) var_1_24)) : (var_1_111 == ((unsigned char) 0)))) && (var_1_102 ? (var_1_112 == ((signed short int) var_1_98)) : 1)) && (var_1_102 ? (var_1_113 == ((double) 15.8)) : (var_1_113 == ((double) 4.6)))) && (var_1_60 ? (var_1_114 == ((float) 5.58f)) : (var_1_114 == ((float) var_1_52)))) && (var_1_115 == ((signed char) var_1_7))) && (var_1_116 == ((signed char) var_1_5))) && (var_1_24 ? (var_1_117 == ((signed long int) var_1_15)) : (var_1_117 == ((signed long int) last_1_var_1_117)))) && (var_1_118 == ((unsigned long int) (min (var_1_64 , (var_1_70 - var_1_90)))))) && ((var_1_84 >= (var_1_39 * var_1_63)) ? (var_1_119 == ((double) (abs (min (var_1_48 , var_1_54))))) : (var_1_119 == ((double) 32.75)))
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

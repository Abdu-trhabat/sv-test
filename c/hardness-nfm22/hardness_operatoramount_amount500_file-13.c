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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
signed short int var_1_5 = 25;
signed char var_1_9 = -10;
signed char var_1_10 = -16;
signed char var_1_11 = -10;
signed char var_1_12 = -25;
double var_1_13 = 64.875;
double var_1_15 = 1.625;
double var_1_16 = 32.2;
double var_1_17 = 8.6;
double var_1_18 = 10.5;
signed long int var_1_19 = 1994586494;
unsigned long int var_1_21 = 50;
unsigned long int var_1_22 = 1000000000;
unsigned char var_1_24 = 0;
float var_1_25 = 31.6;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 200;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 200;
unsigned short int var_1_33 = 10000;
unsigned short int var_1_35 = 31670;
unsigned short int var_1_36 = 62563;
float var_1_37 = 999.75;
float var_1_38 = 32.625;
signed short int var_1_39 = 50;
unsigned char var_1_40 = 2;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned long int var_1_45 = 0;
unsigned long int var_1_46 = 3464937791;
signed long int var_1_47 = -256;
signed short int var_1_48 = 4;
signed long int var_1_49 = -8;
double var_1_50 = 2.75;
signed short int var_1_51 = -64;
signed char var_1_52 = -2;
signed char var_1_54 = 32;
signed char var_1_55 = 8;
signed char var_1_56 = 8;
unsigned short int var_1_57 = 50;
double var_1_58 = 2.1;
float var_1_59 = 4.4;
unsigned short int var_1_61 = 100;
signed char var_1_62 = -50;
signed char var_1_64 = 64;
unsigned long int var_1_65 = 128;
double var_1_67 = 256.5;
double var_1_68 = 63.8;
unsigned long int var_1_69 = 5;
unsigned long int var_1_70 = 1793636344;
unsigned long int var_1_71 = 1313120445;
unsigned char var_1_72 = 10;
unsigned char var_1_74 = 64;
unsigned char var_1_75 = 0;
float var_1_76 = 25.8;
float var_1_77 = 10.25;
float var_1_78 = 127.5;
float var_1_79 = 15.5;
float var_1_80 = 5.8;
unsigned char var_1_81 = 1;
unsigned char var_1_82 = 0;
unsigned char var_1_83 = 0;
unsigned char var_1_84 = 0;
signed char var_1_85 = 10;
signed long int var_1_86 = -16;
unsigned short int var_1_87 = 256;
signed char var_1_88 = 8;
unsigned char var_1_89 = 5;
signed long int var_1_91 = -8;
unsigned char var_1_93 = 2;
unsigned char var_1_94 = 64;
signed short int var_1_95 = 64;
signed short int var_1_96 = 20978;
signed short int var_1_97 = 28417;
signed char var_1_98 = -10;
signed char var_1_99 = 10;
signed char var_1_100 = 100;
signed long int var_1_101 = -100000;
unsigned char var_1_102 = 0;
signed char var_1_103 = -32;
unsigned short int var_1_104 = 200;
unsigned long int var_1_106 = 10;
unsigned short int var_1_107 = 64;
float var_1_108 = 100000000.875;
unsigned short int var_1_109 = 10;
unsigned char var_1_110 = 0;
double var_1_111 = 3.3;
unsigned char var_1_112 = 50;
unsigned char var_1_113 = 32;
signed long int var_1_114 = 100;
unsigned short int var_1_115 = 8;
signed char var_1_116 = -4;
unsigned short int var_1_117 = 32;
float var_1_118 = 5.75;
double var_1_119 = 9.75;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_21 = 50;
unsigned char last_1_var_1_24 = 0;
unsigned long int last_1_var_1_45 = 0;
signed long int last_1_var_1_47 = -256;
signed short int last_1_var_1_48 = 4;
signed char last_1_var_1_52 = -2;
unsigned char last_1_var_1_81 = 1;
unsigned short int last_1_var_1_87 = 256;
signed char last_1_var_1_88 = 8;
unsigned char last_1_var_1_102 = 0;
unsigned char last_1_var_1_113 = 32;
signed long int last_1_var_1_114 = 100;
unsigned short int last_1_var_1_115 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req35Batch13Amount500
	signed long int stepLocal_21 = var_1_74 - (2052788346 - 1);
	signed long int stepLocal_20 = last_1_var_1_115;
	if (stepLocal_21 == last_1_var_1_115) {
		if (stepLocal_20 < last_1_var_1_47) {
			var_1_89 = (var_1_32 - var_1_56);
		}
	} else {
		var_1_89 = var_1_56;
	}


	// From: Req37Batch13Amount500
	signed long int stepLocal_25 = last_1_var_1_87;
	signed long int stepLocal_24 = last_1_var_1_88;
	signed long int stepLocal_23 = -1000;
	if (stepLocal_23 >= last_1_var_1_88) {
		var_1_93 = ((var_1_74 + var_1_94) - var_1_75);
	} else {
		if (stepLocal_25 > (var_1_32 - (var_1_54 + var_1_55))) {
			if (last_1_var_1_81) {
				if (var_1_70 < stepLocal_24) {
					var_1_93 = (var_1_30 - var_1_74);
				} else {
					var_1_93 = (var_1_31 + var_1_54);
				}
			} else {
				var_1_93 = (var_1_55 + (5 + var_1_31));
			}
		} else {
			var_1_93 = (var_1_30 - var_1_64);
		}
	}


	// From: Req30Batch13Amount500
	unsigned char stepLocal_16 = var_1_43;
	if (var_1_26) {
		if ((1 >= last_1_var_1_52) && stepLocal_16) {
			if (last_1_var_1_102) {
				var_1_81 = ((var_1_27 || (var_1_28 || var_1_82)) || (var_1_83 || var_1_84));
			}
		}
	} else {
		var_1_81 = (! var_1_43);
	}


	// From: Req22Batch13Amount500
	if (! var_1_28) {
		var_1_61 = (abs (var_1_36 - var_1_35));
	} else {
		var_1_61 = ((var_1_35 - last_1_var_1_21) + var_1_54);
	}


	// From: Req1Batch13Amount500
	if ((last_1_var_1_113 <= last_1_var_1_52) || last_1_var_1_24) {
		var_1_1 = 0;
	}


	// From: Req50Batch13Amount500
	if (var_1_1) {
		var_1_112 = var_1_74;
	}


	// From: Req9Batch13Amount500
	if (! var_1_1) {
		if (var_1_17 < (var_1_25 * var_1_18)) {
			if (var_1_26) {
				var_1_37 = (var_1_15 + var_1_16);
			} else {
				var_1_37 = ((var_1_15 - (max (var_1_16 , var_1_38))) + var_1_18);
			}
		} else {
			var_1_37 = (var_1_38 + var_1_17);
		}
	}


	// From: Req55Batch13Amount500
	if (var_1_1) {
		var_1_117 = var_1_30;
	}


	// From: Req6Batch13Amount500
	if ((9.5f / var_1_25) != var_1_18) {
		if (! last_1_var_1_24) {
			if (var_1_16 > (- var_1_15)) {
				var_1_24 = (var_1_26 || var_1_27);
			} else {
				var_1_24 = ((var_1_27 && var_1_26) || (! (! var_1_28)));
			}
		} else {
			var_1_24 = (var_1_26 || var_1_27);
		}
	} else {
		var_1_24 = (! var_1_28);
	}


	// From: Req7Batch13Amount500
	if (var_1_24) {
		var_1_29 = (var_1_30 - (64 + var_1_31));
	} else {
		if (4u <= var_1_30) {
			var_1_29 = ((max ((var_1_32 - 16) , var_1_30)) - var_1_31);
		} else {
			var_1_29 = var_1_32;
		}
	}


	// From: Req11Batch13Amount500
	if (var_1_24) {
		var_1_40 = var_1_30;
	} else {
		var_1_40 = 0;
	}


	// From: Req20Batch13Amount500
	if (! (var_1_40 > var_1_29)) {
		var_1_57 = var_1_31;
	} else {
		var_1_57 = ((var_1_55 + var_1_30) + (var_1_35 - var_1_56));
	}


	// From: Req23Batch13Amount500
	if ((- (- 128)) >= ((max (var_1_10 , var_1_36)) * var_1_35)) {
		var_1_62 = (var_1_10 + var_1_12);
	} else {
		var_1_62 = (max (((var_1_64 - var_1_31) - (max (var_1_54 , var_1_56))) , var_1_10));
	}


	// From: Req26Batch13Amount500
	if (var_1_117 > var_1_55) {
		if (var_1_16 > var_1_37) {
			var_1_68 = var_1_38;
		}
	} else {
		var_1_68 = (var_1_15 - (max (var_1_16 , var_1_38)));
	}


	// From: Req31Batch13Amount500
	if ((var_1_77 - var_1_80) <= var_1_59) {
		var_1_85 = (var_1_31 - 16);
	}


	// From: Req34Batch13Amount500
	var_1_88 = var_1_32;


	// From: Req38Batch13Amount500
	if (var_1_26) {
		var_1_95 = (var_1_31 - ((min (var_1_96 , var_1_97)) - var_1_64));
	} else {
		var_1_95 = (var_1_112 + -32);
	}


	// From: Req46Batch13Amount500
	if (var_1_83) {
		var_1_108 = var_1_16;
	} else {
		var_1_108 = var_1_79;
	}


	// From: Req47Batch13Amount500
	var_1_109 = var_1_99;


	// From: Req48Batch13Amount500
	var_1_110 = var_1_44;


	// From: Req49Batch13Amount500
	if (var_1_81) {
		var_1_111 = var_1_17;
	} else {
		var_1_111 = var_1_38;
	}


	// From: Req51Batch13Amount500
	var_1_113 = var_1_94;


	// From: Req52Batch13Amount500
	var_1_114 = last_1_var_1_114;


	// From: Req53Batch13Amount500
	var_1_115 = var_1_32;


	// From: Req56Batch13Amount500
	if (var_1_24) {
		var_1_118 = var_1_78;
	} else {
		var_1_118 = var_1_79;
	}


	// From: Req57Batch13Amount500
	if (var_1_118 > (var_1_25 + (var_1_77 - var_1_80))) {
		var_1_119 = (max (var_1_78 , (63.648 - (abs (var_1_17)))));
	} else {
		if (var_1_43) {
			var_1_119 = var_1_38;
		} else {
			var_1_119 = 15.75;
		}
	}


	// From: Req3Batch13Amount500
	unsigned short int stepLocal_0 = var_1_61;
	if (stepLocal_0 > var_1_93) {
		var_1_9 = ((var_1_10 + var_1_11) + var_1_12);
	}


	// From: Req12Batch13Amount500
	if (var_1_1) {
		if (var_1_24 && (var_1_81 || var_1_28)) {
			var_1_41 = 0;
		} else {
			var_1_41 = (var_1_28 || var_1_42);
		}
	} else {
		var_1_41 = (((var_1_27 || var_1_42) && var_1_43) && var_1_44);
	}


	// From: Req41Batch13Amount500
	unsigned char stepLocal_29 = var_1_83;
	signed short int stepLocal_28 = var_1_97;
	if (stepLocal_29 && var_1_81) {
		if (var_1_57 >= stepLocal_28) {
			var_1_102 = (var_1_44 && var_1_42);
		} else {
			var_1_102 = (var_1_84 || (var_1_26 && var_1_82));
		}
	} else {
		var_1_102 = (! (var_1_81 || var_1_43));
	}


	// From: Req54Batch13Amount500
	if (var_1_41) {
		var_1_116 = var_1_56;
	} else {
		var_1_116 = var_1_10;
	}


	// From: Req42Batch13Amount500
	signed char stepLocal_30 = var_1_55;
	if (var_1_110) {
		if (var_1_61 != stepLocal_30) {
			var_1_103 = var_1_75;
		} else {
			var_1_103 = var_1_32;
		}
	} else {
		var_1_103 = var_1_99;
	}


	// From: Req2Batch13Amount500
	if (var_1_102 || var_1_81) {
		var_1_5 = (min (50 , var_1_116));
	} else {
		if (var_1_81) {
			var_1_5 = (var_1_93 - var_1_40);
		}
	}


	// From: Req15Batch13Amount500
	unsigned char stepLocal_7 = ! var_1_43;
	if (stepLocal_7 && var_1_102) {
		var_1_48 = (last_1_var_1_48 - var_1_31);
	}


	// From: Req18Batch13Amount500
	if ((var_1_115 & var_1_32) <= var_1_103) {
		if ((var_1_61 * var_1_32) == var_1_19) {
			var_1_51 = (2 + (max (var_1_112 , var_1_30)));
		}
	}


	// From: Req25Batch13Amount500
	signed long int stepLocal_13 = var_1_113 + var_1_64;
	if (var_1_117 != stepLocal_13) {
		var_1_67 = (abs (var_1_17));
	} else {
		var_1_67 = (min (9.2 , (var_1_38 - var_1_16)));
	}


	// From: Req27Batch13Amount500
	if (var_1_29 > var_1_89) {
		if (var_1_41) {
			var_1_69 = (((var_1_70 - var_1_35) + var_1_71) - var_1_31);
		}
	}


	// From: Req29Batch13Amount500
	if (((var_1_38 - var_1_16) / var_1_25) != var_1_17) {
		if (var_1_38 >= var_1_111) {
			var_1_76 = (var_1_38 - var_1_15);
		} else {
			var_1_76 = (8.75f + (abs (var_1_16)));
		}
	} else {
		var_1_76 = (((var_1_77 + var_1_78) - (var_1_79 + var_1_80)) + var_1_38);
	}


	// From: Req44Batch13Amount500
	if (var_1_102) {
		var_1_106 = var_1_29;
	}


	// From: Req45Batch13Amount500
	var_1_107 = var_1_69;


	// From: Req28Batch13Amount500
	unsigned char stepLocal_15 = var_1_93 >= var_1_55;
	signed char stepLocal_14 = var_1_103;
	if (var_1_10 <= stepLocal_14) {
		var_1_72 = (var_1_32 - var_1_54);
	} else {
		if ((var_1_109 <= (var_1_46 - var_1_70)) && stepLocal_15) {
			var_1_72 = (var_1_64 + (var_1_74 - (var_1_55 + var_1_75)));
		}
	}


	// From: Req43Batch13Amount500
	if (var_1_26) {
		var_1_104 = var_1_72;
	}


	// From: Req19Batch13Amount500
	signed char stepLocal_12 = var_1_103;
	unsigned long int stepLocal_11 = (var_1_89 * var_1_117) * var_1_46;
	if (var_1_117 < stepLocal_12) {
		if ((-10 * var_1_113) < stepLocal_11) {
			if (var_1_37 > var_1_18) {
				var_1_52 = ((var_1_31 - (var_1_54 - var_1_55)) + var_1_10);
			} else {
				if (var_1_27) {
					var_1_52 = (min (var_1_32 , var_1_31));
				} else {
					var_1_52 = (var_1_54 - (min (var_1_55 , (var_1_31 + var_1_56))));
				}
			}
		} else {
			var_1_52 = (var_1_12 + var_1_10);
		}
	} else {
		var_1_52 = (max (var_1_56 , var_1_54));
	}


	// From: Req39Batch13Amount500
	if ((min (var_1_32 , var_1_22)) < var_1_116) {
		if ((var_1_38 <= 32.8f) || var_1_110) {
			if (var_1_26) {
				var_1_98 = ((var_1_54 - var_1_31) + (min ((var_1_99 - var_1_75) , var_1_10)));
			} else {
				var_1_98 = (var_1_55 - var_1_54);
			}
		} else {
			var_1_98 = ((var_1_56 + var_1_55) - (min ((var_1_100 - var_1_54) , var_1_99)));
		}
	} else {
		var_1_98 = ((var_1_64 - var_1_75) - var_1_54);
	}


	// From: Req5Batch13Amount500
	signed long int stepLocal_4 = var_1_40 * var_1_112;
	unsigned char stepLocal_3 = var_1_93;
	if (var_1_52 >= stepLocal_4) {
		if (var_1_110) {
			var_1_21 = (((var_1_22 - var_1_93) + var_1_112) + (abs (var_1_19)));
		} else {
			var_1_21 = (min ((abs (var_1_19)) , (var_1_22 + (var_1_93 + var_1_112))));
		}
	} else {
		if (stepLocal_3 < var_1_19) {
			var_1_21 = (var_1_22 + var_1_109);
		} else {
			var_1_21 = (var_1_19 + (max (var_1_112 , var_1_22)));
		}
	}


	// From: Req8Batch13Amount500
	if (var_1_68 < (var_1_15 - var_1_16)) {
		var_1_33 = (max ((var_1_31 + (var_1_35 - var_1_106)) , (var_1_36 - 256)));
	} else {
		var_1_33 = (var_1_36 - var_1_30);
	}


	// From: Req10Batch13Amount500
	unsigned char stepLocal_5 = var_1_30 >= var_1_36;
	if (var_1_1 && stepLocal_5) {
		var_1_39 = (min ((-500 + var_1_52) , (var_1_11 + var_1_117)));
	}


	// From: Req24Batch13Amount500
	if (var_1_76 <= ((var_1_67 + var_1_25) / var_1_59)) {
		var_1_65 = (max ((min (var_1_107 , var_1_32)) , ((var_1_19 - var_1_36) + var_1_55)));
	}


	// From: Req32Batch13Amount500
	unsigned char stepLocal_19 = var_1_41;
	signed long int stepLocal_18 = abs (var_1_30);
	signed char stepLocal_17 = var_1_11;
	if ((var_1_109 <= (var_1_61 * var_1_54)) || stepLocal_19) {
		if (var_1_54 > stepLocal_17) {
			var_1_86 = (max ((var_1_54 + (min (var_1_29 , var_1_112))) , var_1_95));
		}
	} else {
		if ((var_1_21 | (abs (var_1_19))) != stepLocal_18) {
			var_1_86 = (abs (var_1_109));
		}
	}


	// From: Req14Batch13Amount500
	if (-16 != (var_1_89 * var_1_35)) {
		var_1_47 = (max (var_1_98 , var_1_112));
	} else {
		if ((min (var_1_15 , 63.6)) <= var_1_38) {
			if (last_1_var_1_47 <= 10u) {
				var_1_47 = 256;
			}
		}
	}


	// From: Req40Batch13Amount500
	unsigned long int stepLocal_27 = var_1_71;
	unsigned short int stepLocal_26 = var_1_104;
	if (stepLocal_26 > (abs (var_1_9))) {
		if (stepLocal_27 != (- var_1_70)) {
			var_1_101 = ((max (1 , var_1_29)) - var_1_56);
		}
	}


	// From: Req4Batch13Amount500
	signed long int stepLocal_2 = 2 | 32;
	signed long int stepLocal_1 = var_1_101;
	if (var_1_98 > stepLocal_1) {
		var_1_13 = ((var_1_15 - var_1_16) + ((max (var_1_17 , 499.25)) + var_1_18));
	} else {
		if (stepLocal_2 <= (var_1_93 - (var_1_19 - var_1_29))) {
			var_1_13 = (min (4.8 , var_1_17));
		} else {
			var_1_13 = (var_1_18 + var_1_16);
		}
	}


	// From: Req16Batch13Amount500
	var_1_49 = (var_1_12 + (max (var_1_65 , var_1_30)));


	// From: Req17Batch13Amount500
	unsigned char stepLocal_10 = var_1_89;
	signed long int stepLocal_9 = var_1_19 | var_1_49;
	unsigned char stepLocal_8 = var_1_1;
	if (stepLocal_10 <= (var_1_36 % var_1_30)) {
		if (stepLocal_9 >= var_1_72) {
			if (1.3f == var_1_108) {
				var_1_50 = var_1_38;
			}
		} else {
			if (stepLocal_8 && var_1_43) {
				var_1_50 = ((min (var_1_17 , var_1_15)) + var_1_16);
			} else {
				var_1_50 = (var_1_16 - (var_1_38 + var_1_15));
			}
		}
	} else {
		var_1_50 = (min (3.5 , var_1_17));
	}


	// From: Req36Batch13Amount500
	signed long int stepLocal_22 = - var_1_101;
	if (2.25f >= (var_1_80 - var_1_15)) {
		if (stepLocal_22 < (var_1_61 / (min (var_1_30 , var_1_54)))) {
			var_1_91 = (max (var_1_9 , var_1_85));
		}
	}


	// From: Req33Batch13Amount500
	if ((- var_1_30) < (var_1_98 | (last_1_var_1_87 - var_1_64))) {
		var_1_87 = ((abs (var_1_32 + var_1_54)) + var_1_91);
	}


	// From: Req13Batch13Amount500
	unsigned short int stepLocal_6 = var_1_87;
	if (var_1_25 > var_1_13) {
		var_1_45 = ((abs (var_1_46)) - (abs (last_1_var_1_45)));
	} else {
		if (stepLocal_6 <= ((var_1_107 / var_1_30) + var_1_85)) {
			var_1_45 = ((max (var_1_46 , (var_1_19 + 1996542993u))) - (var_1_36 + (max (var_1_31 , var_1_35))));
		} else {
			var_1_45 = (min ((var_1_22 + var_1_36) , (min (var_1_40 , var_1_85))));
		}
	}


	// From: Req21Batch13Amount500
	if (((var_1_16 / var_1_25) / var_1_59) < (var_1_68 * (var_1_38 - var_1_15))) {
		if (var_1_55 >= var_1_72) {
			if (var_1_1 || (var_1_87 <= var_1_95)) {
				var_1_58 = (min (var_1_38 , var_1_18));
			}
		} else {
			var_1_58 = (var_1_15 - var_1_38);
		}
	}
}



void updateVariables() {
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 536870912);
	assume_abort_if_not(var_1_22 <= 1073741824);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	assume_abort_if_not(var_1_25 != 0.0F);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 127);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 190);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 16383);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 32767);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 2147483647);
	assume_abort_if_not(var_1_46 <= 4294967294);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 31);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 31);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	assume_abort_if_not(var_1_59 != 0.0F);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 62);
	assume_abort_if_not(var_1_64 <= 126);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 1610612735);
	assume_abort_if_not(var_1_70 <= 2147483647);
	var_1_71 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_71 >= 1073741824);
	assume_abort_if_not(var_1_71 <= 2147483647);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 63);
	assume_abort_if_not(var_1_74 <= 127);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 31);
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691390e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 2305843.009213691390e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691390e+12F && var_1_79 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 2305843.009213691390e+12F && var_1_80 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 0);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 0);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 0);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 64);
	assume_abort_if_not(var_1_94 <= 127);
	var_1_96 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_96 >= 16383);
	assume_abort_if_not(var_1_96 <= 32766);
	var_1_97 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_97 >= 16383);
	assume_abort_if_not(var_1_97 <= 32766);
	var_1_99 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 63);
	var_1_100 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_100 >= 63);
	assume_abort_if_not(var_1_100 <= 126);
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_113 = var_1_113;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_115 = var_1_115;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_113 <= last_1_var_1_52) || last_1_var_1_24) ? (var_1_1 == ((unsigned char) 0)) : 1) && ((var_1_102 || var_1_81) ? (var_1_5 == ((signed short int) (min (50 , var_1_116)))) : (var_1_81 ? (var_1_5 == ((signed short int) (var_1_93 - var_1_40))) : 1))) && ((var_1_61 > var_1_93) ? (var_1_9 == ((signed char) ((var_1_10 + var_1_11) + var_1_12))) : 1)) && ((var_1_98 > var_1_101) ? (var_1_13 == ((double) ((var_1_15 - var_1_16) + ((max (var_1_17 , 499.25)) + var_1_18)))) : (((2 | 32) <= (var_1_93 - (var_1_19 - var_1_29))) ? (var_1_13 == ((double) (min (4.8 , var_1_17)))) : (var_1_13 == ((double) (var_1_18 + var_1_16)))))) && ((var_1_52 >= (var_1_40 * var_1_112)) ? (var_1_110 ? (var_1_21 == ((unsigned long int) (((var_1_22 - var_1_93) + var_1_112) + (abs (var_1_19))))) : (var_1_21 == ((unsigned long int) (min ((abs (var_1_19)) , (var_1_22 + (var_1_93 + var_1_112))))))) : ((var_1_93 < var_1_19) ? (var_1_21 == ((unsigned long int) (var_1_22 + var_1_109))) : (var_1_21 == ((unsigned long int) (var_1_19 + (max (var_1_112 , var_1_22)))))))) && (((9.5f / var_1_25) != var_1_18) ? ((! last_1_var_1_24) ? ((var_1_16 > (- var_1_15)) ? (var_1_24 == ((unsigned char) (var_1_26 || var_1_27))) : (var_1_24 == ((unsigned char) ((var_1_27 && var_1_26) || (! (! var_1_28)))))) : (var_1_24 == ((unsigned char) (var_1_26 || var_1_27)))) : (var_1_24 == ((unsigned char) (! var_1_28))))) && (var_1_24 ? (var_1_29 == ((unsigned char) (var_1_30 - (64 + var_1_31)))) : ((4u <= var_1_30) ? (var_1_29 == ((unsigned char) ((max ((var_1_32 - 16) , var_1_30)) - var_1_31))) : (var_1_29 == ((unsigned char) var_1_32))))) && ((var_1_68 < (var_1_15 - var_1_16)) ? (var_1_33 == ((unsigned short int) (max ((var_1_31 + (var_1_35 - var_1_106)) , (var_1_36 - 256))))) : (var_1_33 == ((unsigned short int) (var_1_36 - var_1_30))))) && ((! var_1_1) ? ((var_1_17 < (var_1_25 * var_1_18)) ? (var_1_26 ? (var_1_37 == ((float) (var_1_15 + var_1_16))) : (var_1_37 == ((float) ((var_1_15 - (max (var_1_16 , var_1_38))) + var_1_18)))) : (var_1_37 == ((float) (var_1_38 + var_1_17)))) : 1)) && ((var_1_1 && (var_1_30 >= var_1_36)) ? (var_1_39 == ((signed short int) (min ((-500 + var_1_52) , (var_1_11 + var_1_117))))) : 1)) && (var_1_24 ? (var_1_40 == ((unsigned char) var_1_30)) : (var_1_40 == ((unsigned char) 0)))) && (var_1_1 ? ((var_1_24 && (var_1_81 || var_1_28)) ? (var_1_41 == ((unsigned char) 0)) : (var_1_41 == ((unsigned char) (var_1_28 || var_1_42)))) : (var_1_41 == ((unsigned char) (((var_1_27 || var_1_42) && var_1_43) && var_1_44))))) && ((var_1_25 > var_1_13) ? (var_1_45 == ((unsigned long int) ((abs (var_1_46)) - (abs (last_1_var_1_45))))) : ((var_1_87 <= ((var_1_107 / var_1_30) + var_1_85)) ? (var_1_45 == ((unsigned long int) ((max (var_1_46 , (var_1_19 + 1996542993u))) - (var_1_36 + (max (var_1_31 , var_1_35)))))) : (var_1_45 == ((unsigned long int) (min ((var_1_22 + var_1_36) , (min (var_1_40 , var_1_85))))))))) && ((-16 != (var_1_89 * var_1_35)) ? (var_1_47 == ((signed long int) (max (var_1_98 , var_1_112)))) : (((min (var_1_15 , 63.6)) <= var_1_38) ? ((last_1_var_1_47 <= 10u) ? (var_1_47 == ((signed long int) 256)) : 1) : 1))) && (((! var_1_43) && var_1_102) ? (var_1_48 == ((signed short int) (last_1_var_1_48 - var_1_31))) : 1)) && (var_1_49 == ((signed long int) (var_1_12 + (max (var_1_65 , var_1_30)))))) && ((var_1_89 <= (var_1_36 % var_1_30)) ? (((var_1_19 | var_1_49) >= var_1_72) ? ((1.3f == var_1_108) ? (var_1_50 == ((double) var_1_38)) : 1) : ((var_1_1 && var_1_43) ? (var_1_50 == ((double) ((min (var_1_17 , var_1_15)) + var_1_16))) : (var_1_50 == ((double) (var_1_16 - (var_1_38 + var_1_15)))))) : (var_1_50 == ((double) (min (3.5 , var_1_17)))))) && (((var_1_115 & var_1_32) <= var_1_103) ? (((var_1_61 * var_1_32) == var_1_19) ? (var_1_51 == ((signed short int) (2 + (max (var_1_112 , var_1_30))))) : 1) : 1)) && ((var_1_117 < var_1_103) ? (((-10 * var_1_113) < ((var_1_89 * var_1_117) * var_1_46)) ? ((var_1_37 > var_1_18) ? (var_1_52 == ((signed char) ((var_1_31 - (var_1_54 - var_1_55)) + var_1_10))) : (var_1_27 ? (var_1_52 == ((signed char) (min (var_1_32 , var_1_31)))) : (var_1_52 == ((signed char) (var_1_54 - (min (var_1_55 , (var_1_31 + var_1_56)))))))) : (var_1_52 == ((signed char) (var_1_12 + var_1_10)))) : (var_1_52 == ((signed char) (max (var_1_56 , var_1_54)))))) && ((! (var_1_40 > var_1_29)) ? (var_1_57 == ((unsigned short int) var_1_31)) : (var_1_57 == ((unsigned short int) ((var_1_55 + var_1_30) + (var_1_35 - var_1_56)))))) && ((((var_1_16 / var_1_25) / var_1_59) < (var_1_68 * (var_1_38 - var_1_15))) ? ((var_1_55 >= var_1_72) ? ((var_1_1 || (var_1_87 <= var_1_95)) ? (var_1_58 == ((double) (min (var_1_38 , var_1_18)))) : 1) : (var_1_58 == ((double) (var_1_15 - var_1_38)))) : 1)) && ((! var_1_28) ? (var_1_61 == ((unsigned short int) (abs (var_1_36 - var_1_35)))) : (var_1_61 == ((unsigned short int) ((var_1_35 - last_1_var_1_21) + var_1_54))))) && (((- (- 128)) >= ((max (var_1_10 , var_1_36)) * var_1_35)) ? (var_1_62 == ((signed char) (var_1_10 + var_1_12))) : (var_1_62 == ((signed char) (max (((var_1_64 - var_1_31) - (max (var_1_54 , var_1_56))) , var_1_10)))))) && ((var_1_76 <= ((var_1_67 + var_1_25) / var_1_59)) ? (var_1_65 == ((unsigned long int) (max ((min (var_1_107 , var_1_32)) , ((var_1_19 - var_1_36) + var_1_55))))) : 1)) && ((var_1_117 != (var_1_113 + var_1_64)) ? (var_1_67 == ((double) (abs (var_1_17)))) : (var_1_67 == ((double) (min (9.2 , (var_1_38 - var_1_16))))))) && ((var_1_117 > var_1_55) ? ((var_1_16 > var_1_37) ? (var_1_68 == ((double) var_1_38)) : 1) : (var_1_68 == ((double) (var_1_15 - (max (var_1_16 , var_1_38))))))) && ((var_1_29 > var_1_89) ? (var_1_41 ? (var_1_69 == ((unsigned long int) (((var_1_70 - var_1_35) + var_1_71) - var_1_31))) : 1) : 1)) && ((var_1_10 <= var_1_103) ? (var_1_72 == ((unsigned char) (var_1_32 - var_1_54))) : (((var_1_109 <= (var_1_46 - var_1_70)) && (var_1_93 >= var_1_55)) ? (var_1_72 == ((unsigned char) (var_1_64 + (var_1_74 - (var_1_55 + var_1_75))))) : 1))) && ((((var_1_38 - var_1_16) / var_1_25) != var_1_17) ? ((var_1_38 >= var_1_111) ? (var_1_76 == ((float) (var_1_38 - var_1_15))) : (var_1_76 == ((float) (8.75f + (abs (var_1_16)))))) : (var_1_76 == ((float) (((var_1_77 + var_1_78) - (var_1_79 + var_1_80)) + var_1_38))))) && (var_1_26 ? (((1 >= last_1_var_1_52) && var_1_43) ? (last_1_var_1_102 ? (var_1_81 == ((unsigned char) ((var_1_27 || (var_1_28 || var_1_82)) || (var_1_83 || var_1_84)))) : 1) : 1) : (var_1_81 == ((unsigned char) (! var_1_43))))) && (((var_1_77 - var_1_80) <= var_1_59) ? (var_1_85 == ((signed char) (var_1_31 - 16))) : 1)) && (((var_1_109 <= (var_1_61 * var_1_54)) || var_1_41) ? ((var_1_54 > var_1_11) ? (var_1_86 == ((signed long int) (max ((var_1_54 + (min (var_1_29 , var_1_112))) , var_1_95)))) : 1) : (((var_1_21 | (abs (var_1_19))) != (abs (var_1_30))) ? (var_1_86 == ((signed long int) (abs (var_1_109)))) : 1))) && (((- var_1_30) < (var_1_98 | (last_1_var_1_87 - var_1_64))) ? (var_1_87 == ((unsigned short int) ((abs (var_1_32 + var_1_54)) + var_1_91))) : 1)) && (var_1_88 == ((signed char) var_1_32))) && (((var_1_74 - (2052788346 - 1)) == last_1_var_1_115) ? ((last_1_var_1_115 < last_1_var_1_47) ? (var_1_89 == ((unsigned char) (var_1_32 - var_1_56))) : 1) : (var_1_89 == ((unsigned char) var_1_56)))) && ((2.25f >= (var_1_80 - var_1_15)) ? (((- var_1_101) < (var_1_61 / (min (var_1_30 , var_1_54)))) ? (var_1_91 == ((signed long int) (max (var_1_9 , var_1_85)))) : 1) : 1)) && ((-1000 >= last_1_var_1_88) ? (var_1_93 == ((unsigned char) ((var_1_74 + var_1_94) - var_1_75))) : ((last_1_var_1_87 > (var_1_32 - (var_1_54 + var_1_55))) ? (last_1_var_1_81 ? ((var_1_70 < last_1_var_1_88) ? (var_1_93 == ((unsigned char) (var_1_30 - var_1_74))) : (var_1_93 == ((unsigned char) (var_1_31 + var_1_54)))) : (var_1_93 == ((unsigned char) (var_1_55 + (5 + var_1_31))))) : (var_1_93 == ((unsigned char) (var_1_30 - var_1_64)))))) && (var_1_26 ? (var_1_95 == ((signed short int) (var_1_31 - ((min (var_1_96 , var_1_97)) - var_1_64)))) : (var_1_95 == ((signed short int) (var_1_112 + -32))))) && (((min (var_1_32 , var_1_22)) < var_1_116) ? (((var_1_38 <= 32.8f) || var_1_110) ? (var_1_26 ? (var_1_98 == ((signed char) ((var_1_54 - var_1_31) + (min ((var_1_99 - var_1_75) , var_1_10))))) : (var_1_98 == ((signed char) (var_1_55 - var_1_54)))) : (var_1_98 == ((signed char) ((var_1_56 + var_1_55) - (min ((var_1_100 - var_1_54) , var_1_99)))))) : (var_1_98 == ((signed char) ((var_1_64 - var_1_75) - var_1_54))))) && ((var_1_104 > (abs (var_1_9))) ? ((var_1_71 != (- var_1_70)) ? (var_1_101 == ((signed long int) ((max (1 , var_1_29)) - var_1_56))) : 1) : 1)) && ((var_1_83 && var_1_81) ? ((var_1_57 >= var_1_97) ? (var_1_102 == ((unsigned char) (var_1_44 && var_1_42))) : (var_1_102 == ((unsigned char) (var_1_84 || (var_1_26 && var_1_82))))) : (var_1_102 == ((unsigned char) (! (var_1_81 || var_1_43)))))) && (var_1_110 ? ((var_1_61 != var_1_55) ? (var_1_103 == ((signed char) var_1_75)) : (var_1_103 == ((signed char) var_1_32))) : (var_1_103 == ((signed char) var_1_99)))) && (var_1_26 ? (var_1_104 == ((unsigned short int) var_1_72)) : 1)) && (var_1_102 ? (var_1_106 == ((unsigned long int) var_1_29)) : 1)) && (var_1_107 == ((unsigned short int) var_1_69))) && (var_1_83 ? (var_1_108 == ((float) var_1_16)) : (var_1_108 == ((float) var_1_79)))) && (var_1_109 == ((unsigned short int) var_1_99))) && (var_1_110 == ((unsigned char) var_1_44))) && (var_1_81 ? (var_1_111 == ((double) var_1_17)) : (var_1_111 == ((double) var_1_38)))) && (var_1_1 ? (var_1_112 == ((unsigned char) var_1_74)) : 1)) && (var_1_113 == ((unsigned char) var_1_94))) && (var_1_114 == ((signed long int) last_1_var_1_114))) && (var_1_115 == ((unsigned short int) var_1_32))) && (var_1_41 ? (var_1_116 == ((signed char) var_1_56)) : (var_1_116 == ((signed char) var_1_10)))) && (var_1_1 ? (var_1_117 == ((unsigned short int) var_1_30)) : 1)) && (var_1_24 ? (var_1_118 == ((float) var_1_78)) : (var_1_118 == ((float) var_1_79)))) && ((var_1_118 > (var_1_25 + (var_1_77 - var_1_80))) ? (var_1_119 == ((double) (max (var_1_78 , (63.648 - (abs (var_1_17))))))) : (var_1_43 ? (var_1_119 == ((double) var_1_38)) : (var_1_119 == ((double) 15.75))))
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

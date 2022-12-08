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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch56Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 256.8;
float var_1_4 = 3.5;
float var_1_5 = 99999.8;
float var_1_6 = 0.2;
float var_1_7 = 31.7;
float var_1_11 = 25.75;
float var_1_12 = 128.875;
unsigned short int var_1_13 = 10;
unsigned char var_1_22 = 5;
unsigned char var_1_23 = 4;
unsigned char var_1_24 = 100;
unsigned char var_1_25 = 4;
unsigned char var_1_26 = 16;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
signed long int var_1_31 = 32;
unsigned short int var_1_32 = 8;
signed long int var_1_35 = 1000000000;
signed short int var_1_36 = -4;
signed char var_1_37 = -128;
double var_1_38 = 4.5;
double var_1_39 = 50.5;
double var_1_40 = 3.5;
double var_1_41 = 255.25;
float var_1_42 = 24.4;
float var_1_43 = 100.875;
unsigned long int var_1_44 = 1;
float var_1_45 = 63.25;
float var_1_46 = 9.5;
float var_1_47 = 99.25;
float var_1_48 = 99.213;
float var_1_49 = 64.5;
float var_1_50 = 1.25;
signed char var_1_51 = 0;
float var_1_52 = 0.2;
signed char var_1_53 = 64;
signed char var_1_54 = 0;
signed char var_1_55 = 10;
signed char var_1_56 = 100;
signed char var_1_57 = 32;
signed long int var_1_58 = 200;
double var_1_60 = 49.6;
double var_1_61 = 9.569;
unsigned char var_1_62 = 1;
signed long int var_1_64 = 10;
unsigned short int var_1_65 = 0;
unsigned short int var_1_66 = 50;
double var_1_67 = 31.375;
unsigned long int var_1_68 = 64;
unsigned long int var_1_69 = 1000000000;
unsigned long int var_1_70 = 1000000000;
unsigned long int var_1_71 = 16;
unsigned char var_1_73 = 0;
unsigned short int var_1_74 = 128;
unsigned long int var_1_75 = 8;
double var_1_76 = 4.15;
unsigned long int var_1_77 = 4241295768;
unsigned long int var_1_78 = 1000000;
signed short int var_1_79 = 0;
unsigned short int var_1_80 = 57226;
signed long int var_1_81 = -100;
signed char var_1_82 = 8;
double var_1_83 = 5.6;
double var_1_84 = 0.0;
double var_1_85 = 0.0;
unsigned char var_1_86 = 1;
signed short int var_1_87 = 128;
double var_1_90 = 1.4;
double var_1_91 = 100.5;
unsigned char var_1_92 = 4;
unsigned long int var_1_93 = 8;
signed short int var_1_94 = 50;
unsigned char var_1_95 = 128;
unsigned long int var_1_96 = 32;
double var_1_97 = 32.5;
signed long int var_1_99 = 16;
float var_1_100 = 999999.35;
float var_1_101 = 127.7;
unsigned short int var_1_102 = 4;
signed short int var_1_103 = -2;
unsigned long int var_1_104 = 100;
double var_1_105 = 64.15;
signed short int var_1_106 = 200;
signed short int var_1_107 = 32157;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 10;
unsigned char last_1_var_1_22 = 5;
unsigned char last_1_var_1_26 = 16;
unsigned char last_1_var_1_27 = 1;
signed long int last_1_var_1_31 = 32;
unsigned short int last_1_var_1_32 = 8;
signed long int last_1_var_1_35 = 1000000000;
signed short int last_1_var_1_36 = -4;
signed char last_1_var_1_37 = -128;
unsigned long int last_1_var_1_44 = 1;
unsigned char last_1_var_1_62 = 1;
signed long int last_1_var_1_64 = 10;
unsigned short int last_1_var_1_65 = 0;
unsigned short int last_1_var_1_66 = 50;
double last_1_var_1_67 = 31.375;
unsigned long int last_1_var_1_68 = 64;
unsigned long int last_1_var_1_71 = 16;
unsigned char last_1_var_1_73 = 0;
unsigned long int last_1_var_1_75 = 8;
signed short int last_1_var_1_79 = 0;
signed long int last_1_var_1_81 = -100;
double last_1_var_1_83 = 5.6;
unsigned char last_1_var_1_86 = 1;
unsigned char last_1_var_1_92 = 4;
signed short int last_1_var_1_94 = 50;
unsigned char last_1_var_1_95 = 128;
unsigned long int last_1_var_1_96 = 32;
float last_1_var_1_100 = 999999.35;
unsigned short int last_1_var_1_102 = 4;
unsigned long int last_1_var_1_104 = 100;
signed short int last_1_var_1_106 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch56Amount500
	if ((last_1_var_1_37 + last_1_var_1_92) < last_1_var_1_95) {
		var_1_22 = (var_1_23 + (var_1_24 - var_1_25));
	}


	// From: Req31Batch56Amount500
	if (! last_1_var_1_62) {
		var_1_79 = ((var_1_25 - var_1_57) + (last_1_var_1_75 + (abs (-50))));
	} else {
		if ((var_1_80 - var_1_56) != var_1_70) {
			var_1_79 = last_1_var_1_32;
		} else {
			var_1_79 = ((min (var_1_53 , 5)) + (var_1_25 + var_1_24));
		}
	}


	// From: Req23Batch56Amount500
	if (var_1_48 >= last_1_var_1_67) {
		var_1_65 = last_1_var_1_22;
	} else {
		var_1_65 = (var_1_23 + var_1_25);
	}


	// From: Req32Batch56Amount500
	signed long int stepLocal_16 = 1 - var_1_82;
	unsigned char stepLocal_15 = var_1_29;
	if (stepLocal_15 && (last_1_var_1_26 > last_1_var_1_81)) {
		if (stepLocal_16 <= (max (last_1_var_1_79 , (last_1_var_1_68 + last_1_var_1_65)))) {
			var_1_81 = (last_1_var_1_65 + (min (last_1_var_1_96 , var_1_23)));
		}
	} else {
		var_1_81 = last_1_var_1_44;
	}


	// From: Req48Batch56Amount500
	var_1_104 = var_1_81;


	// From: Req3Batch56Amount500
	signed long int stepLocal_0 = (max (64 , last_1_var_1_79)) / (abs (-50));
	if (last_1_var_1_73) {
		if (((~ last_1_var_1_44) * (last_1_var_1_13 + last_1_var_1_104)) >= stepLocal_0) {
			var_1_13 = (max ((last_1_var_1_92 + last_1_var_1_86) , last_1_var_1_26));
		} else {
			var_1_13 = ((min (last_1_var_1_92 , last_1_var_1_86)) + (max (last_1_var_1_22 , 2)));
		}
	} else {
		var_1_13 = last_1_var_1_86;
	}


	// From: Req16Batch56Amount500
	unsigned char stepLocal_5 = var_1_24;
	if (stepLocal_5 != var_1_13) {
		var_1_45 = (min (var_1_41 , var_1_7));
	}


	// From: Req43Batch56Amount500
	if (var_1_28) {
		var_1_99 = var_1_13;
	}


	// From: Req34Batch56Amount500
	unsigned char stepLocal_19 = last_1_var_1_27;
	if (stepLocal_19 && (var_1_24 >= last_1_var_1_44)) {
		var_1_86 = (max (16 , 64));
	} else {
		var_1_86 = (2 + var_1_23);
	}


	// From: Req28Batch56Amount500
	unsigned short int stepLocal_13 = var_1_74;
	signed long int stepLocal_12 = last_1_var_1_95 / var_1_74;
	if (stepLocal_12 != (last_1_var_1_75 ^ -16)) {
		if (last_1_var_1_94 >= stepLocal_13) {
			var_1_73 = (last_1_var_1_62 || var_1_29);
		}
	} else {
		var_1_73 = (var_1_28 && var_1_29);
	}


	// From: Req38Batch56Amount500
	if (var_1_73) {
		var_1_93 = 10u;
	} else {
		var_1_93 = var_1_24;
	}


	// From: Req42Batch56Amount500
	if (var_1_73) {
		var_1_97 = var_1_61;
	}


	// From: Req21Batch56Amount500
	signed long int stepLocal_8 = last_1_var_1_64;
	if (last_1_var_1_100 < (- var_1_6)) {
		var_1_62 = (var_1_28 && var_1_29);
	} else {
		if (stepLocal_8 < last_1_var_1_106) {
			var_1_62 = var_1_30;
		}
	}


	// From: Req39Batch56Amount500
	if (var_1_62) {
		var_1_94 = 2;
	}


	// From: Req47Batch56Amount500
	if (var_1_62) {
		var_1_103 = var_1_53;
	} else {
		var_1_103 = var_1_56;
	}


	// From: Req5Batch56Amount500
	signed long int stepLocal_1 = last_1_var_1_32;
	if (stepLocal_1 > last_1_var_1_102) {
		var_1_26 = (max (var_1_24 , var_1_25));
	} else {
		if (var_1_4 >= var_1_12) {
			var_1_26 = (128 - var_1_24);
		}
	}


	// From: Req37Batch56Amount500
	if (last_1_var_1_62) {
		var_1_92 = var_1_82;
	}


	// From: Req40Batch56Amount500
	if (last_1_var_1_27) {
		var_1_95 = var_1_53;
	} else {
		var_1_95 = var_1_53;
	}


	// From: Req17Batch56Amount500
	if (var_1_30 || var_1_73) {
		var_1_46 = ((var_1_40 + (var_1_47 + var_1_48)) - var_1_41);
	} else {
		var_1_46 = (((var_1_47 + var_1_48) + var_1_40) - ((var_1_49 + var_1_50) + 15.375f));
	}


	// From: Req24Batch56Amount500
	if (var_1_30) {
		var_1_66 = ((var_1_24 + (min (last_1_var_1_66 , var_1_25))) + (var_1_56 + var_1_54));
	}


	// From: Req30Batch56Amount500
	var_1_78 = (abs (var_1_92));


	// From: Req41Batch56Amount500
	var_1_96 = var_1_24;


	// From: Req44Batch56Amount500
	if (var_1_30) {
		var_1_100 = var_1_91;
	} else {
		var_1_100 = var_1_61;
	}


	// From: Req45Batch56Amount500
	var_1_101 = var_1_39;


	// From: Req49Batch56Amount500
	if (var_1_28) {
		var_1_105 = var_1_12;
	} else {
		var_1_105 = var_1_40;
	}


	// From: Req6Batch56Amount500
	if (var_1_22 < 10) {
		if (var_1_26 < var_1_95) {
			var_1_27 = ((var_1_28 && var_1_29) && (! var_1_30));
		} else {
			var_1_27 = (var_1_73 && var_1_30);
		}
	}


	// From: Req11Batch56Amount500
	if (var_1_62 || var_1_27) {
		var_1_37 = (min (var_1_25 , -8));
	}


	// From: Req1Batch56Amount500
	if (var_1_101 != var_1_45) {
		if (var_1_45 < (var_1_4 - 2.5f)) {
			var_1_1 = (min (9.5f , ((min (var_1_5 , var_1_6)) + var_1_7)));
		} else {
			var_1_1 = (var_1_7 + (max ((abs (var_1_5)) , 1.487f)));
		}
	} else {
		if ((var_1_62 && var_1_62) || var_1_27) {
			var_1_1 = (min (var_1_7 , (var_1_6 + var_1_5)));
		}
	}


	// From: Req36Batch56Amount500
	if (var_1_30 && (var_1_66 <= (var_1_69 + var_1_95))) {
		if (var_1_66 != var_1_92) {
			var_1_90 = (min (127.3 , (var_1_5 + var_1_6)));
		} else {
			var_1_90 = (min ((9999.125 + (max (var_1_7 , var_1_40))) , (min (var_1_61 , var_1_85))));
		}
	} else {
		if (var_1_61 >= var_1_1) {
			var_1_90 = (var_1_61 + ((25.75 + var_1_91) + (min (var_1_48 , var_1_50))));
		}
	}


	// From: Req2Batch56Amount500
	if (var_1_27) {
		var_1_11 = ((abs (var_1_5)) - var_1_12);
	}


	// From: Req12Batch56Amount500
	if (var_1_101 > 1.22f) {
		var_1_38 = var_1_6;
	} else {
		var_1_38 = (((min (var_1_39 , var_1_40)) - var_1_41) + var_1_7);
	}


	// From: Req20Batch56Amount500
	signed long int stepLocal_7 = -16;
	if (var_1_62) {
		if (var_1_5 > 128.75f) {
			var_1_60 = (max (((min (var_1_47 , var_1_40)) + var_1_61) , (var_1_39 - var_1_48)));
		}
	} else {
		if (var_1_27) {
			if (stepLocal_7 >= ((var_1_104 / var_1_24) / var_1_57)) {
				var_1_60 = (min (49.177 , (var_1_12 - (max (var_1_49 , var_1_50)))));
			}
		} else {
			var_1_60 = (max (1.4 , var_1_6));
		}
	}


	// From: Req33Batch56Amount500
	unsigned long int stepLocal_18 = var_1_99 | var_1_69;
	signed long int stepLocal_17 = var_1_99;
	if ((- (var_1_38 * var_1_1)) != var_1_5) {
		if (stepLocal_17 >= var_1_69) {
			var_1_83 = (var_1_41 - (min ((var_1_84 - var_1_50) , var_1_39)));
		} else {
			if (stepLocal_18 > (var_1_65 + (var_1_66 * var_1_95))) {
				var_1_83 = (min (((var_1_48 + var_1_39) - var_1_84) , var_1_6));
			} else {
				var_1_83 = ((var_1_41 + var_1_49) - ((max (var_1_84 , var_1_85)) - var_1_50));
			}
		}
	} else {
		if (var_1_4 == last_1_var_1_83) {
			var_1_83 = (max (var_1_49 , var_1_41));
		} else {
			var_1_83 = (((max (var_1_47 , 100.8)) + (var_1_49 - 9.94)) + (var_1_50 + var_1_48));
		}
	}


	// From: Req26Batch56Amount500
	if (var_1_90 < var_1_61) {
		var_1_68 = (((var_1_69 - var_1_92) + (var_1_70 - var_1_23)) + var_1_22);
	} else {
		var_1_68 = (min ((var_1_25 + (var_1_24 + var_1_56)) , var_1_26));
	}


	// From: Req10Batch56Amount500
	if (! (last_1_var_1_36 > (min (var_1_25 , var_1_68)))) {
		if ((-2 < var_1_24) || var_1_30) {
			var_1_36 = ((last_1_var_1_36 + var_1_81) + var_1_95);
		} else {
			var_1_36 = (var_1_95 - (var_1_81 + var_1_25));
		}
	}


	// From: Req22Batch56Amount500
	unsigned char stepLocal_9 = var_1_26;
	if (var_1_61 >= -0.75) {
		if (-64 < stepLocal_9) {
			var_1_64 = (max (var_1_25 , 5));
		} else {
			var_1_64 = var_1_95;
		}
	} else {
		if (var_1_97 <= (- var_1_52)) {
			var_1_64 = (var_1_25 + (max ((last_1_var_1_64 + var_1_24) , var_1_95)));
		} else {
			var_1_64 = ((var_1_36 + (var_1_81 + var_1_95)) + var_1_26);
		}
	}


	// From: Req7Batch56Amount500
	unsigned char stepLocal_2 = var_1_22 == var_1_95;
	if (var_1_73 || stepLocal_2) {
		var_1_31 = ((32 - var_1_25) + (last_1_var_1_31 + var_1_64));
	} else {
		var_1_31 = (min (var_1_26 , var_1_25));
	}


	// From: Req8Batch56Amount500
	if (var_1_26 >= var_1_31) {
		var_1_32 = (min (var_1_93 , (max (var_1_23 , var_1_92))));
	} else {
		if ((max (last_1_var_1_32 , var_1_93)) >= var_1_26) {
			var_1_32 = ((min ((var_1_93 + var_1_31) , (var_1_24 + var_1_25))) + var_1_23);
		}
	}


	// From: Req46Batch56Amount500
	if (var_1_28) {
		var_1_102 = var_1_22;
	} else {
		var_1_102 = var_1_31;
	}


	// From: Req14Batch56Amount500
	unsigned char stepLocal_4 = var_1_73 && var_1_73;
	signed long int stepLocal_3 = 1;
	if (var_1_102 < stepLocal_3) {
		if (stepLocal_4 || (var_1_12 <= var_1_100)) {
			var_1_43 = var_1_7;
		}
	} else {
		var_1_43 = var_1_41;
	}


	// From: Req15Batch56Amount500
	if ((max (-8 , var_1_24)) >= (var_1_95 + var_1_92)) {
		var_1_44 = (max (var_1_92 , var_1_23));
	} else {
		var_1_44 = (max (var_1_23 , (max (var_1_31 , (3403365806u - var_1_26)))));
	}


	// From: Req13Batch56Amount500
	if (-10000000 >= (max (var_1_86 , (var_1_44 * var_1_92)))) {
		var_1_42 = var_1_41;
	}


	// From: Req19Batch56Amount500
	if (var_1_40 < var_1_42) {
		if (var_1_92 >= (var_1_68 ^ (var_1_99 >> var_1_86))) {
			if (var_1_65 == ((5 + var_1_54) - 8)) {
				var_1_58 = (min (16 , (min (var_1_25 , var_1_32))));
			} else {
				if (var_1_45 > var_1_40) {
					var_1_58 = var_1_92;
				} else {
					var_1_58 = (max (((var_1_32 + 128) - var_1_13) , var_1_95));
				}
			}
		} else {
			var_1_58 = ((var_1_26 - var_1_57) + var_1_86);
		}
	}


	// From: Req27Batch56Amount500
	if (var_1_40 > var_1_6) {
		var_1_71 = (max ((var_1_70 + var_1_32) , var_1_92));
	} else {
		if ((var_1_13 * last_1_var_1_71) < (var_1_95 * (var_1_23 - var_1_102))) {
			if (var_1_24 >= 128) {
				var_1_71 = (max (128u , (var_1_25 + (abs (var_1_70)))));
			} else {
				var_1_71 = var_1_58;
			}
		}
	}


	// From: Req35Batch56Amount500
	unsigned char stepLocal_21 = -2 > var_1_92;
	signed long int stepLocal_20 = var_1_58;
	if (((abs (var_1_12)) > (min (var_1_40 , var_1_48))) && stepLocal_21) {
		if (! var_1_28) {
			var_1_87 = (min ((max (var_1_55 , var_1_57)) , var_1_81));
		} else {
			var_1_87 = (max ((var_1_82 - (abs (var_1_55))) , (var_1_25 + var_1_22)));
		}
	} else {
		if ((var_1_100 * (max (var_1_100 , var_1_101))) > var_1_83) {
			var_1_87 = (var_1_86 - (min (var_1_37 , (var_1_54 + var_1_25))));
		} else {
			if (! var_1_62) {
				var_1_87 = (var_1_86 - 64);
			} else {
				if (stepLocal_20 >= var_1_95) {
					var_1_87 = (min (var_1_56 , (abs (var_1_22))));
				}
			}
		}
	}


	// From: Req25Batch56Amount500
	signed short int stepLocal_11 = var_1_103;
	unsigned char stepLocal_10 = var_1_28;
	if (var_1_73) {
		if (var_1_30) {
			var_1_67 = (min ((var_1_12 - var_1_39) , var_1_7));
		} else {
			if (stepLocal_10 || var_1_73) {
				var_1_67 = ((min (256.25 , var_1_50)) + (var_1_48 + var_1_47));
			} else {
				var_1_67 = var_1_47;
			}
		}
	} else {
		if ((var_1_95 + var_1_87) <= stepLocal_11) {
			if (var_1_73) {
				var_1_67 = (var_1_47 + var_1_48);
			} else {
				var_1_67 = ((var_1_40 + var_1_49) - (abs (var_1_12 - 15.75)));
			}
		}
	}


	// From: Req50Batch56Amount500
	if (var_1_73) {
		if (var_1_62 || var_1_73) {
			var_1_106 = (var_1_24 - var_1_87);
		}
	} else {
		var_1_106 = (var_1_23 - (var_1_107 - 10));
	}


	// From: Req9Batch56Amount500
	if ((last_1_var_1_35 == (max (var_1_25 , last_1_var_1_35))) || var_1_73) {
		if ((max (var_1_106 , var_1_25)) < var_1_24) {
			var_1_35 = (max (var_1_87 , var_1_86));
		}
	} else {
		var_1_35 = (max (var_1_86 , 1));
	}


	// From: Req18Batch56Amount500
	signed long int stepLocal_6 = (var_1_32 + var_1_23) + var_1_65;
	if ((var_1_32 / var_1_24) > stepLocal_6) {
		if (var_1_67 >= (var_1_97 / var_1_52)) {
			var_1_51 = (max ((var_1_25 - (var_1_53 - var_1_54)) , (25 + var_1_55)));
		}
	} else {
		var_1_51 = ((abs (var_1_25 + -8)) - ((var_1_56 - 2) - (var_1_57 - 16)));
	}


	// From: Req29Batch56Amount500
	unsigned char stepLocal_14 = var_1_92;
	if (var_1_40 < (var_1_47 / (max (var_1_52 , var_1_76)))) {
		if (stepLocal_14 < var_1_79) {
			var_1_75 = (var_1_77 - (max ((abs (var_1_13)) , var_1_104)));
		} else {
			var_1_75 = (max ((var_1_77 - var_1_35) , ((var_1_54 + 4u) + 1000000000u)));
		}
	} else {
		var_1_75 = (max (((var_1_24 + var_1_22) + var_1_95) , var_1_69));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 63);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691390e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691390e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691390e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691390e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	assume_abort_if_not(var_1_52 != 0.0F);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 63);
	assume_abort_if_not(var_1_53 <= 126);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -63);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 94);
	assume_abort_if_not(var_1_56 <= 126);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 31);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 536870912);
	assume_abort_if_not(var_1_69 <= 1073741824);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 536870911);
	assume_abort_if_not(var_1_70 <= 1073741823);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 65535);
	assume_abort_if_not(var_1_74 != 0);
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= -922337.2036854776000e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 9223372.036854776000e+12F && var_1_76 >= 1.0e-20F ));
	assume_abort_if_not(var_1_76 != 0.0F);
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 2147483647);
	assume_abort_if_not(var_1_77 <= 4294967294);
	var_1_80 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_80 >= 32767);
	assume_abort_if_not(var_1_80 <= 65535);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= 4611686.018427382800e+12F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854765600e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_85 >= 4611686.018427382800e+12F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854765600e+12F && var_1_85 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_91 >= -115292.1504606845700e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 1152921.504606845700e+12F && var_1_91 >= 1.0e-20F ));
	var_1_107 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_107 >= 16383);
	assume_abort_if_not(var_1_107 <= 32766);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_106 = var_1_106;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_101 != var_1_45) ? ((var_1_45 < (var_1_4 - 2.5f)) ? (var_1_1 == ((float) (min (9.5f , ((min (var_1_5 , var_1_6)) + var_1_7))))) : (var_1_1 == ((float) (var_1_7 + (max ((abs (var_1_5)) , 1.487f)))))) : (((var_1_62 && var_1_62) || var_1_27) ? (var_1_1 == ((float) (min (var_1_7 , (var_1_6 + var_1_5))))) : 1)) && (var_1_27 ? (var_1_11 == ((float) ((abs (var_1_5)) - var_1_12))) : 1)) && (last_1_var_1_73 ? ((((~ last_1_var_1_44) * (last_1_var_1_13 + last_1_var_1_104)) >= ((max (64 , last_1_var_1_79)) / (abs (-50)))) ? (var_1_13 == ((unsigned short int) (max ((last_1_var_1_92 + last_1_var_1_86) , last_1_var_1_26)))) : (var_1_13 == ((unsigned short int) ((min (last_1_var_1_92 , last_1_var_1_86)) + (max (last_1_var_1_22 , 2)))))) : (var_1_13 == ((unsigned short int) last_1_var_1_86)))) && (((last_1_var_1_37 + last_1_var_1_92) < last_1_var_1_95) ? (var_1_22 == ((unsigned char) (var_1_23 + (var_1_24 - var_1_25)))) : 1)) && ((last_1_var_1_32 > last_1_var_1_102) ? (var_1_26 == ((unsigned char) (max (var_1_24 , var_1_25)))) : ((var_1_4 >= var_1_12) ? (var_1_26 == ((unsigned char) (128 - var_1_24))) : 1))) && ((var_1_22 < 10) ? ((var_1_26 < var_1_95) ? (var_1_27 == ((unsigned char) ((var_1_28 && var_1_29) && (! var_1_30)))) : (var_1_27 == ((unsigned char) (var_1_73 && var_1_30)))) : 1)) && ((var_1_73 || (var_1_22 == var_1_95)) ? (var_1_31 == ((signed long int) ((32 - var_1_25) + (last_1_var_1_31 + var_1_64)))) : (var_1_31 == ((signed long int) (min (var_1_26 , var_1_25)))))) && ((var_1_26 >= var_1_31) ? (var_1_32 == ((unsigned short int) (min (var_1_93 , (max (var_1_23 , var_1_92)))))) : (((max (last_1_var_1_32 , var_1_93)) >= var_1_26) ? (var_1_32 == ((unsigned short int) ((min ((var_1_93 + var_1_31) , (var_1_24 + var_1_25))) + var_1_23))) : 1))) && (((last_1_var_1_35 == (max (var_1_25 , last_1_var_1_35))) || var_1_73) ? (((max (var_1_106 , var_1_25)) < var_1_24) ? (var_1_35 == ((signed long int) (max (var_1_87 , var_1_86)))) : 1) : (var_1_35 == ((signed long int) (max (var_1_86 , 1)))))) && ((! (last_1_var_1_36 > (min (var_1_25 , var_1_68)))) ? (((-2 < var_1_24) || var_1_30) ? (var_1_36 == ((signed short int) ((last_1_var_1_36 + var_1_81) + var_1_95))) : (var_1_36 == ((signed short int) (var_1_95 - (var_1_81 + var_1_25))))) : 1)) && ((var_1_62 || var_1_27) ? (var_1_37 == ((signed char) (min (var_1_25 , -8)))) : 1)) && ((var_1_101 > 1.22f) ? (var_1_38 == ((double) var_1_6)) : (var_1_38 == ((double) (((min (var_1_39 , var_1_40)) - var_1_41) + var_1_7))))) && ((-10000000 >= (max (var_1_86 , (var_1_44 * var_1_92)))) ? (var_1_42 == ((float) var_1_41)) : 1)) && ((var_1_102 < 1) ? (((var_1_73 && var_1_73) || (var_1_12 <= var_1_100)) ? (var_1_43 == ((float) var_1_7)) : 1) : (var_1_43 == ((float) var_1_41)))) && (((max (-8 , var_1_24)) >= (var_1_95 + var_1_92)) ? (var_1_44 == ((unsigned long int) (max (var_1_92 , var_1_23)))) : (var_1_44 == ((unsigned long int) (max (var_1_23 , (max (var_1_31 , (3403365806u - var_1_26))))))))) && ((var_1_24 != var_1_13) ? (var_1_45 == ((float) (min (var_1_41 , var_1_7)))) : 1)) && ((var_1_30 || var_1_73) ? (var_1_46 == ((float) ((var_1_40 + (var_1_47 + var_1_48)) - var_1_41))) : (var_1_46 == ((float) (((var_1_47 + var_1_48) + var_1_40) - ((var_1_49 + var_1_50) + 15.375f)))))) && (((var_1_32 / var_1_24) > ((var_1_32 + var_1_23) + var_1_65)) ? ((var_1_67 >= (var_1_97 / var_1_52)) ? (var_1_51 == ((signed char) (max ((var_1_25 - (var_1_53 - var_1_54)) , (25 + var_1_55))))) : 1) : (var_1_51 == ((signed char) ((abs (var_1_25 + -8)) - ((var_1_56 - 2) - (var_1_57 - 16))))))) && ((var_1_40 < var_1_42) ? ((var_1_92 >= (var_1_68 ^ (var_1_99 >> var_1_86))) ? ((var_1_65 == ((5 + var_1_54) - 8)) ? (var_1_58 == ((signed long int) (min (16 , (min (var_1_25 , var_1_32)))))) : ((var_1_45 > var_1_40) ? (var_1_58 == ((signed long int) var_1_92)) : (var_1_58 == ((signed long int) (max (((var_1_32 + 128) - var_1_13) , var_1_95)))))) : (var_1_58 == ((signed long int) ((var_1_26 - var_1_57) + var_1_86)))) : 1)) && (var_1_62 ? ((var_1_5 > 128.75f) ? (var_1_60 == ((double) (max (((min (var_1_47 , var_1_40)) + var_1_61) , (var_1_39 - var_1_48))))) : 1) : (var_1_27 ? ((-16 >= ((var_1_104 / var_1_24) / var_1_57)) ? (var_1_60 == ((double) (min (49.177 , (var_1_12 - (max (var_1_49 , var_1_50))))))) : 1) : (var_1_60 == ((double) (max (1.4 , var_1_6))))))) && ((last_1_var_1_100 < (- var_1_6)) ? (var_1_62 == ((unsigned char) (var_1_28 && var_1_29))) : ((last_1_var_1_64 < last_1_var_1_106) ? (var_1_62 == ((unsigned char) var_1_30)) : 1))) && ((var_1_61 >= -0.75) ? ((-64 < var_1_26) ? (var_1_64 == ((signed long int) (max (var_1_25 , 5)))) : (var_1_64 == ((signed long int) var_1_95))) : ((var_1_97 <= (- var_1_52)) ? (var_1_64 == ((signed long int) (var_1_25 + (max ((last_1_var_1_64 + var_1_24) , var_1_95))))) : (var_1_64 == ((signed long int) ((var_1_36 + (var_1_81 + var_1_95)) + var_1_26)))))) && ((var_1_48 >= last_1_var_1_67) ? (var_1_65 == ((unsigned short int) last_1_var_1_22)) : (var_1_65 == ((unsigned short int) (var_1_23 + var_1_25))))) && (var_1_30 ? (var_1_66 == ((unsigned short int) ((var_1_24 + (min (last_1_var_1_66 , var_1_25))) + (var_1_56 + var_1_54)))) : 1)) && (var_1_73 ? (var_1_30 ? (var_1_67 == ((double) (min ((var_1_12 - var_1_39) , var_1_7)))) : ((var_1_28 || var_1_73) ? (var_1_67 == ((double) ((min (256.25 , var_1_50)) + (var_1_48 + var_1_47)))) : (var_1_67 == ((double) var_1_47)))) : (((var_1_95 + var_1_87) <= var_1_103) ? (var_1_73 ? (var_1_67 == ((double) (var_1_47 + var_1_48))) : (var_1_67 == ((double) ((var_1_40 + var_1_49) - (abs (var_1_12 - 15.75)))))) : 1))) && ((var_1_90 < var_1_61) ? (var_1_68 == ((unsigned long int) (((var_1_69 - var_1_92) + (var_1_70 - var_1_23)) + var_1_22))) : (var_1_68 == ((unsigned long int) (min ((var_1_25 + (var_1_24 + var_1_56)) , var_1_26)))))) && ((var_1_40 > var_1_6) ? (var_1_71 == ((unsigned long int) (max ((var_1_70 + var_1_32) , var_1_92)))) : (((var_1_13 * last_1_var_1_71) < (var_1_95 * (var_1_23 - var_1_102))) ? ((var_1_24 >= 128) ? (var_1_71 == ((unsigned long int) (max (128u , (var_1_25 + (abs (var_1_70))))))) : (var_1_71 == ((unsigned long int) var_1_58))) : 1))) && (((last_1_var_1_95 / var_1_74) != (last_1_var_1_75 ^ -16)) ? ((last_1_var_1_94 >= var_1_74) ? (var_1_73 == ((unsigned char) (last_1_var_1_62 || var_1_29))) : 1) : (var_1_73 == ((unsigned char) (var_1_28 && var_1_29))))) && ((var_1_40 < (var_1_47 / (max (var_1_52 , var_1_76)))) ? ((var_1_92 < var_1_79) ? (var_1_75 == ((unsigned long int) (var_1_77 - (max ((abs (var_1_13)) , var_1_104))))) : (var_1_75 == ((unsigned long int) (max ((var_1_77 - var_1_35) , ((var_1_54 + 4u) + 1000000000u)))))) : (var_1_75 == ((unsigned long int) (max (((var_1_24 + var_1_22) + var_1_95) , var_1_69)))))) && (var_1_78 == ((unsigned long int) (abs (var_1_92))))) && ((! last_1_var_1_62) ? (var_1_79 == ((signed short int) ((var_1_25 - var_1_57) + (last_1_var_1_75 + (abs (-50)))))) : (((var_1_80 - var_1_56) != var_1_70) ? (var_1_79 == ((signed short int) last_1_var_1_32)) : (var_1_79 == ((signed short int) ((min (var_1_53 , 5)) + (var_1_25 + var_1_24))))))) && ((var_1_29 && (last_1_var_1_26 > last_1_var_1_81)) ? (((1 - var_1_82) <= (max (last_1_var_1_79 , (last_1_var_1_68 + last_1_var_1_65)))) ? (var_1_81 == ((signed long int) (last_1_var_1_65 + (min (last_1_var_1_96 , var_1_23))))) : 1) : (var_1_81 == ((signed long int) last_1_var_1_44)))) && (((- (var_1_38 * var_1_1)) != var_1_5) ? ((var_1_99 >= var_1_69) ? (var_1_83 == ((double) (var_1_41 - (min ((var_1_84 - var_1_50) , var_1_39))))) : (((var_1_99 | var_1_69) > (var_1_65 + (var_1_66 * var_1_95))) ? (var_1_83 == ((double) (min (((var_1_48 + var_1_39) - var_1_84) , var_1_6)))) : (var_1_83 == ((double) ((var_1_41 + var_1_49) - ((max (var_1_84 , var_1_85)) - var_1_50)))))) : ((var_1_4 == last_1_var_1_83) ? (var_1_83 == ((double) (max (var_1_49 , var_1_41)))) : (var_1_83 == ((double) (((max (var_1_47 , 100.8)) + (var_1_49 - 9.94)) + (var_1_50 + var_1_48))))))) && ((last_1_var_1_27 && (var_1_24 >= last_1_var_1_44)) ? (var_1_86 == ((unsigned char) (max (16 , 64)))) : (var_1_86 == ((unsigned char) (2 + var_1_23))))) && ((((abs (var_1_12)) > (min (var_1_40 , var_1_48))) && (-2 > var_1_92)) ? ((! var_1_28) ? (var_1_87 == ((signed short int) (min ((max (var_1_55 , var_1_57)) , var_1_81)))) : (var_1_87 == ((signed short int) (max ((var_1_82 - (abs (var_1_55))) , (var_1_25 + var_1_22)))))) : (((var_1_100 * (max (var_1_100 , var_1_101))) > var_1_83) ? (var_1_87 == ((signed short int) (var_1_86 - (min (var_1_37 , (var_1_54 + var_1_25)))))) : ((! var_1_62) ? (var_1_87 == ((signed short int) (var_1_86 - 64))) : ((var_1_58 >= var_1_95) ? (var_1_87 == ((signed short int) (min (var_1_56 , (abs (var_1_22)))))) : 1))))) && ((var_1_30 && (var_1_66 <= (var_1_69 + var_1_95))) ? ((var_1_66 != var_1_92) ? (var_1_90 == ((double) (min (127.3 , (var_1_5 + var_1_6))))) : (var_1_90 == ((double) (min ((9999.125 + (max (var_1_7 , var_1_40))) , (min (var_1_61 , var_1_85))))))) : ((var_1_61 >= var_1_1) ? (var_1_90 == ((double) (var_1_61 + ((25.75 + var_1_91) + (min (var_1_48 , var_1_50)))))) : 1))) && (last_1_var_1_62 ? (var_1_92 == ((unsigned char) var_1_82)) : 1)) && (var_1_73 ? (var_1_93 == ((unsigned long int) 10u)) : (var_1_93 == ((unsigned long int) var_1_24)))) && (var_1_62 ? (var_1_94 == ((signed short int) 2)) : 1)) && (last_1_var_1_27 ? (var_1_95 == ((unsigned char) var_1_53)) : (var_1_95 == ((unsigned char) var_1_53)))) && (var_1_96 == ((unsigned long int) var_1_24))) && (var_1_73 ? (var_1_97 == ((double) var_1_61)) : 1)) && (var_1_28 ? (var_1_99 == ((signed long int) var_1_13)) : 1)) && (var_1_30 ? (var_1_100 == ((float) var_1_91)) : (var_1_100 == ((float) var_1_61)))) && (var_1_101 == ((float) var_1_39))) && (var_1_28 ? (var_1_102 == ((unsigned short int) var_1_22)) : (var_1_102 == ((unsigned short int) var_1_31)))) && (var_1_62 ? (var_1_103 == ((signed short int) var_1_53)) : (var_1_103 == ((signed short int) var_1_56)))) && (var_1_104 == ((unsigned long int) var_1_81))) && (var_1_28 ? (var_1_105 == ((double) var_1_12)) : (var_1_105 == ((double) var_1_40)))) && (var_1_73 ? ((var_1_62 || var_1_73) ? (var_1_106 == ((signed short int) (var_1_24 - var_1_87))) : 1) : (var_1_106 == ((signed short int) (var_1_23 - (var_1_107 - 10)))))
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

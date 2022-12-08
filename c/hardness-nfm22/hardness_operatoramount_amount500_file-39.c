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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch39Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 200;
unsigned short int var_1_4 = 8;
unsigned short int var_1_5 = 5;
unsigned long int var_1_6 = 256;
float var_1_7 = 25.8;
float var_1_8 = 999999999.3;
unsigned long int var_1_10 = 3413017661;
signed char var_1_11 = -128;
signed char var_1_12 = 64;
signed char var_1_13 = -32;
signed char var_1_14 = -4;
signed char var_1_15 = 4;
unsigned long int var_1_16 = 100;
unsigned char var_1_18 = 0;
unsigned char var_1_20 = 0;
float var_1_21 = 256.5;
float var_1_22 = 8.4;
float var_1_23 = 15.4;
double var_1_24 = -0.125;
unsigned char var_1_25 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned long int var_1_29 = 16;
unsigned char var_1_30 = 0;
double var_1_31 = 255.75;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 8;
unsigned char var_1_37 = 200;
signed char var_1_38 = -32;
signed char var_1_39 = 16;
unsigned char var_1_40 = 5;
unsigned long int var_1_42 = 64;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned short int var_1_45 = 32;
unsigned short int var_1_46 = 24543;
signed long int var_1_47 = -4;
double var_1_48 = 32.5;
double var_1_49 = 3.8;
double var_1_50 = 128.25;
double var_1_51 = 256.5;
double var_1_52 = 32.2;
double var_1_53 = 63.1;
signed short int var_1_54 = -1;
unsigned short int var_1_57 = 16;
double var_1_58 = 32.25;
signed long int var_1_60 = -10;
double var_1_61 = 10.5;
signed short int var_1_62 = -10;
float var_1_63 = 7.375;
signed short int var_1_64 = 16;
signed short int var_1_65 = 31974;
unsigned char var_1_66 = 1;
signed char var_1_67 = 4;
signed char var_1_68 = 5;
float var_1_69 = 9.9;
unsigned char var_1_70 = 1;
float var_1_71 = 15.2;
signed char var_1_73 = 5;
unsigned long int var_1_74 = 2;
unsigned char var_1_75 = 0;
float var_1_76 = 31.375;
float var_1_77 = 9.5;
float var_1_78 = 1000.5;
unsigned short int var_1_79 = 128;
unsigned short int var_1_80 = 58667;
signed long int var_1_81 = -4;
unsigned char var_1_82 = 10;
unsigned char var_1_83 = 223;
unsigned char var_1_84 = 1;
unsigned long int var_1_86 = 100;
float var_1_87 = 16.9;
signed char var_1_88 = 32;
unsigned short int var_1_89 = 200;
unsigned short int var_1_90 = 62682;
unsigned char var_1_91 = 1;
signed short int var_1_93 = 16;
float var_1_94 = 0.0;
float var_1_95 = 0.30000000000000004;
unsigned char var_1_96 = 10;
float var_1_97 = 5.5;
signed short int var_1_98 = 256;
signed short int var_1_99 = -10;
unsigned short int var_1_100 = 128;
unsigned short int var_1_102 = 8;
unsigned short int var_1_103 = 5;
unsigned char var_1_104 = 16;
unsigned char var_1_105 = 0;
unsigned char var_1_106 = 0;
unsigned char var_1_107 = 0;
unsigned long int var_1_108 = 2;
signed short int var_1_109 = -64;
unsigned char var_1_110 = 64;
unsigned char var_1_111 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 200;
signed char last_1_var_1_11 = -128;
unsigned long int last_1_var_1_16 = 100;
unsigned char last_1_var_1_25 = 0;
unsigned char last_1_var_1_30 = 0;
unsigned char last_1_var_1_33 = 0;
unsigned short int last_1_var_1_45 = 32;
signed long int last_1_var_1_47 = -4;
double last_1_var_1_48 = 32.5;
signed short int last_1_var_1_64 = 16;
signed char last_1_var_1_67 = 4;
unsigned char last_1_var_1_70 = 1;
signed char last_1_var_1_73 = 5;
unsigned long int last_1_var_1_74 = 2;
signed long int last_1_var_1_81 = -4;
unsigned char last_1_var_1_82 = 10;
unsigned char last_1_var_1_84 = 1;
float last_1_var_1_87 = 16.9;
signed char last_1_var_1_88 = 32;
unsigned short int last_1_var_1_89 = 200;
unsigned char last_1_var_1_91 = 1;
unsigned char last_1_var_1_96 = 10;
unsigned short int last_1_var_1_100 = 128;
unsigned short int last_1_var_1_102 = 8;
unsigned char last_1_var_1_104 = 16;
unsigned char last_1_var_1_107 = 0;
unsigned long int last_1_var_1_108 = 2;
signed short int last_1_var_1_109 = -64;
unsigned char last_1_var_1_110 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req26Batch39Amount500
	unsigned char stepLocal_15 = last_1_var_1_91;
	unsigned char stepLocal_14 = last_1_var_1_107;
	if (stepLocal_15 && var_1_44) {
		var_1_64 = (last_1_var_1_11 + var_1_39);
	} else {
		if (last_1_var_1_107 && stepLocal_14) {
			var_1_64 = (var_1_5 - (var_1_65 - var_1_4));
		} else {
			var_1_64 = ((max ((last_1_var_1_64 + last_1_var_1_1) , var_1_14)) + (min (last_1_var_1_16 , last_1_var_1_104)));
		}
	}


	// From: Req23Batch39Amount500
	signed long int stepLocal_12 = last_1_var_1_89 * last_1_var_1_100;
	if (var_1_52 < ((var_1_61 - var_1_8) + last_1_var_1_87)) {
		if (var_1_20) {
			var_1_60 = (last_1_var_1_108 + var_1_37);
		} else {
			if ((last_1_var_1_74 >> last_1_var_1_102) <= stepLocal_12) {
				var_1_60 = (var_1_46 - last_1_var_1_1);
			}
		}
	} else {
		var_1_60 = (var_1_4 - var_1_12);
	}


	// From: Req9Batch39Amount500
	if (last_1_var_1_70 || (var_1_20 && last_1_var_1_25)) {
		var_1_25 = ((var_1_23 >= var_1_22) && (var_1_27 || var_1_28));
	} else {
		if (var_1_10 >= (var_1_5 / (max (var_1_4 , var_1_29)))) {
			if (var_1_29 > ((1973056656u + 1997519471u) - (min (var_1_4 , last_1_var_1_109)))) {
				var_1_25 = ((last_1_var_1_73 < last_1_var_1_47) && ((var_1_20 && var_1_28) || var_1_27));
			} else {
				var_1_25 = ((-25 > var_1_10) || var_1_20);
			}
		} else {
			var_1_25 = ((! var_1_28) && (! var_1_27));
		}
	}


	// From: Req42Batch39Amount500
	if (((min (last_1_var_1_88 , var_1_68)) << (min (var_1_75 , var_1_5))) >= last_1_var_1_96) {
		if ((64.75 * (var_1_8 + var_1_53)) >= (7.5 + last_1_var_1_48)) {
			var_1_91 = (var_1_28 && var_1_27);
		}
	}


	// From: Req55Batch39Amount500
	if (var_1_91) {
		var_1_107 = var_1_28;
	}


	// From: Req40Batch39Amount500
	unsigned char stepLocal_30 = last_1_var_1_25 || (var_1_34 == var_1_5);
	unsigned char stepLocal_29 = var_1_68 < var_1_15;
	signed long int stepLocal_28 = last_1_var_1_96;
	if (var_1_10 != stepLocal_28) {
		if (stepLocal_29 && (last_1_var_1_1 <= last_1_var_1_16)) {
			var_1_88 = ((var_1_36 + (var_1_35 - var_1_75)) - 1);
		}
	} else {
		if (stepLocal_30 || last_1_var_1_30) {
			var_1_88 = (((abs (var_1_36)) - var_1_68) + (var_1_39 - (var_1_35 - var_1_75)));
		} else {
			var_1_88 = (var_1_34 - 64);
		}
	}


	// From: Req13Batch39Amount500
	if (var_1_107 && ((max (var_1_34 , 16)) != var_1_12)) {
		var_1_38 = ((64 - var_1_39) - (var_1_35 + 4));
	}


	// From: Req53Batch39Amount500
	if (var_1_91) {
		var_1_105 = var_1_28;
	} else {
		var_1_105 = var_1_27;
	}


	// From: Req24Batch39Amount500
	signed long int stepLocal_13 = last_1_var_1_100;
	if (last_1_var_1_74 == stepLocal_13) {
		var_1_62 = ((var_1_12 - var_1_35) + (var_1_34 - (var_1_36 + 32)));
	}


	// From: Req17Batch39Amount500
	signed long int stepLocal_9 = var_1_62 + var_1_5;
	if (last_1_var_1_45 >= stepLocal_9) {
		var_1_45 = (var_1_12 + (var_1_46 - var_1_62));
	} else {
		var_1_45 = (abs (32));
	}


	// From: Req14Batch39Amount500
	unsigned char stepLocal_8 = last_1_var_1_30;
	unsigned long int stepLocal_7 = min ((last_1_var_1_110 & last_1_var_1_33) , last_1_var_1_74);
	if (stepLocal_7 <= var_1_35) {
		if (stepLocal_8 && last_1_var_1_30) {
			if (! last_1_var_1_84) {
				var_1_40 = (var_1_36 + (min (var_1_34 , 5)));
			} else {
				var_1_40 = (((min (var_1_34 , var_1_5)) + var_1_4) + var_1_39);
			}
		} else {
			if (var_1_27) {
				var_1_40 = (var_1_37 - var_1_39);
			}
		}
	}


	// From: Req49Batch39Amount500
	if (var_1_28) {
		var_1_100 = last_1_var_1_100;
	} else {
		var_1_100 = var_1_40;
	}


	// From: Req5Batch39Amount500
	signed long int stepLocal_3 = last_1_var_1_82;
	if (last_1_var_1_1 != stepLocal_3) {
		var_1_16 = (min (var_1_4 , var_1_5));
	} else {
		var_1_16 = (var_1_10 - var_1_5);
	}


	// From: Req45Batch39Amount500
	if ((var_1_80 * last_1_var_1_96) < (max ((last_1_var_1_96 * var_1_29) , var_1_16))) {
		var_1_96 = var_1_39;
	} else {
		var_1_96 = 50;
	}


	// From: Req10Batch39Amount500
	var_1_30 = (! (! 1));


	// From: Req15Batch39Amount500
	var_1_42 = var_1_36;


	// From: Req16Batch39Amount500
	if ((var_1_5 / var_1_35) > var_1_14) {
		var_1_43 = (var_1_20 && var_1_44);
	} else {
		var_1_43 = (var_1_44 && var_1_27);
	}


	// From: Req22Batch39Amount500
	unsigned long int stepLocal_11 = var_1_60 / (max (var_1_29 , 5));
	if (var_1_36 <= stepLocal_11) {
		var_1_58 = (max ((var_1_50 - var_1_53) , var_1_22));
	}


	// From: Req29Batch39Amount500
	if ((var_1_4 - var_1_65) > var_1_39) {
		var_1_69 = var_1_52;
	}


	// From: Req39Batch39Amount500
	var_1_87 = (var_1_51 + (min (-0.5f , var_1_23)));


	// From: Req43Batch39Amount500
	var_1_93 = (var_1_37 - 500);


	// From: Req47Batch39Amount500
	var_1_98 = var_1_68;


	// From: Req48Batch39Amount500
	var_1_99 = var_1_35;


	// From: Req54Batch39Amount500
	var_1_106 = var_1_44;


	// From: Req57Batch39Amount500
	var_1_109 = var_1_12;


	// From: Req58Batch39Amount500
	if (var_1_27) {
		var_1_110 = 0;
	} else {
		var_1_110 = var_1_83;
	}


	// From: Req59Batch39Amount500
	if (! (! (var_1_28 || var_1_27))) {
		var_1_111 = (var_1_27 || (var_1_106 && var_1_28));
	} else {
		var_1_111 = (! var_1_28);
	}


	// From: Req28Batch39Amount500
	if (((var_1_64 / var_1_35) << var_1_29) >= ((var_1_40 + last_1_var_1_67) - 2)) {
		var_1_67 = (max ((var_1_15 + -32) , var_1_36));
	} else {
		var_1_67 = ((var_1_4 + (var_1_5 + var_1_68)) - var_1_39);
	}


	// From: Req51Batch39Amount500
	if (var_1_25) {
		var_1_103 = var_1_96;
	} else {
		var_1_103 = var_1_96;
	}


	// From: Req3Batch39Amount500
	unsigned long int stepLocal_1 = var_1_16 / var_1_4;
	if (var_1_5 >= stepLocal_1) {
		if (! (var_1_88 >= var_1_4)) {
			var_1_11 = ((5 + (min (var_1_4 , var_1_5))) - var_1_12);
		}
	}


	// From: Req35Batch39Amount500
	signed long int stepLocal_25 = var_1_38 * (abs (var_1_110));
	unsigned char stepLocal_24 = var_1_110;
	signed short int stepLocal_23 = var_1_109;
	if ((- var_1_62) > stepLocal_25) {
		if (10 < stepLocal_23) {
			var_1_81 = (var_1_37 + var_1_68);
		} else {
			var_1_81 = (var_1_75 + (var_1_68 + last_1_var_1_81));
		}
	} else {
		if (stepLocal_24 == var_1_39) {
			if (var_1_28) {
				var_1_81 = (var_1_14 + var_1_110);
			}
		}
	}


	// From: Req50Batch39Amount500
	if (var_1_30) {
		var_1_102 = var_1_34;
	} else {
		var_1_102 = var_1_62;
	}


	// From: Req1Batch39Amount500
	signed long int stepLocal_0 = -128;
	if (((last_1_var_1_1 * var_1_93) << (var_1_4 - var_1_5)) <= stepLocal_0) {
		var_1_1 = (var_1_5 + var_1_4);
	} else {
		var_1_1 = (abs (var_1_4));
	}


	// From: Req7Batch39Amount500
	if ((- var_1_69) <= (var_1_7 * var_1_8)) {
		var_1_21 = (var_1_22 + var_1_23);
	}


	// From: Req33Batch39Amount500
	signed long int stepLocal_21 = abs (var_1_93 * var_1_81);
	if (var_1_37 <= stepLocal_21) {
		var_1_76 = (var_1_51 + (min (var_1_52 , (var_1_77 + var_1_78))));
	}


	// From: Req8Batch39Amount500
	unsigned short int stepLocal_4 = var_1_4;
	if (((var_1_67 / 32) + var_1_14) == stepLocal_4) {
		var_1_24 = (var_1_22 + var_1_23);
	} else {
		var_1_24 = var_1_23;
	}


	// From: Req2Batch39Amount500
	if ((var_1_7 - var_1_8) > var_1_24) {
		var_1_6 = var_1_4;
	} else {
		var_1_6 = ((var_1_10 - (min (0u , var_1_100))) - var_1_4);
	}


	// From: Req18Batch39Amount500
	var_1_47 = (max (var_1_5 , var_1_103));


	// From: Req4Batch39Amount500
	unsigned long int stepLocal_2 = var_1_10;
	if (stepLocal_2 < ((~ var_1_5) + var_1_47)) {
		if ((abs (var_1_7)) >= var_1_8) {
			var_1_13 = var_1_5;
		}
	} else {
		var_1_13 = (var_1_5 + (var_1_4 + (var_1_14 + var_1_15)));
	}


	// From: Req21Batch39Amount500
	var_1_57 = ((var_1_46 - var_1_36) + var_1_13);


	// From: Req36Batch39Amount500
	unsigned char stepLocal_26 = var_1_107;
	if (stepLocal_26 || (last_1_var_1_82 >= var_1_57)) {
		if (((15.125f * var_1_7) / var_1_71) >= (var_1_61 * 99.6f)) {
			var_1_82 = (((var_1_83 - var_1_75) - var_1_5) - var_1_35);
		}
	} else {
		var_1_82 = (var_1_83 - (abs (var_1_4)));
	}


	// From: Req25Batch39Amount500
	if ((- (max (var_1_34 , var_1_109))) < var_1_82) {
		var_1_63 = (abs (var_1_50));
	}


	// From: Req38Batch39Amount500
	var_1_86 = (min (var_1_65 , (var_1_6 + var_1_83)));


	// From: Req37Batch39Amount500
	unsigned long int stepLocal_27 = 8 * var_1_10;
	if (var_1_91) {
		if (var_1_71 <= var_1_22) {
			var_1_84 = var_1_27;
		} else {
			if (var_1_61 > (var_1_49 - var_1_7)) {
				var_1_84 = (! ((var_1_1 < var_1_6) && (! var_1_44)));
			} else {
				if (stepLocal_27 >= var_1_88) {
					var_1_84 = var_1_20;
				} else {
					var_1_84 = ((var_1_8 >= var_1_23) && var_1_28);
				}
			}
		}
	} else {
		var_1_84 = (var_1_27 || var_1_44);
	}


	// From: Req41Batch39Amount500
	if (last_1_var_1_89 >= (var_1_60 >> var_1_47)) {
		var_1_89 = (var_1_90 - var_1_40);
	}


	// From: Req27Batch39Amount500
	if (var_1_27) {
		var_1_66 = (var_1_84 || var_1_44);
	}


	// From: Req52Batch39Amount500
	if (var_1_84) {
		var_1_104 = var_1_36;
	}


	// From: Req20Batch39Amount500
	unsigned long int stepLocal_10 = (var_1_34 + 128) / var_1_29;
	if (stepLocal_10 <= var_1_96) {
		var_1_54 = (min (var_1_96 , -2));
	} else {
		var_1_54 = (min (((var_1_64 + var_1_4) + (abs (var_1_35))) , var_1_104));
	}


	// From: Req56Batch39Amount500
	if (var_1_66) {
		var_1_108 = var_1_65;
	} else {
		var_1_108 = var_1_12;
	}


	// From: Req30Batch39Amount500
	signed long int stepLocal_18 = var_1_60 & var_1_38;
	signed short int stepLocal_17 = var_1_62;
	signed long int stepLocal_16 = var_1_46 ^ var_1_81;
	if (var_1_108 != stepLocal_17) {
		if (((var_1_7 - var_1_61) / var_1_71) <= (- (var_1_49 + var_1_22))) {
			if (var_1_88 >= stepLocal_16) {
				var_1_70 = (var_1_25 || (var_1_106 || var_1_20));
			} else {
				var_1_70 = (var_1_44 || (var_1_105 || var_1_20));
			}
		}
	} else {
		if (stepLocal_18 <= 1) {
			var_1_70 = (var_1_27 || (last_1_var_1_70 && var_1_28));
		} else {
			if (! var_1_43) {
				var_1_70 = (! (! var_1_27));
			}
		}
	}


	// From: Req32Batch39Amount500
	signed short int stepLocal_20 = var_1_54;
	unsigned short int stepLocal_19 = var_1_4;
	if (8u >= stepLocal_19) {
		if (! var_1_107) {
			if ((- var_1_7) >= var_1_22) {
				var_1_74 = (var_1_65 + var_1_12);
			} else {
				var_1_74 = (var_1_10 - var_1_40);
			}
		}
	} else {
		if ((min (var_1_68 , (var_1_46 << var_1_75))) != stepLocal_20) {
			var_1_74 = (max ((max (var_1_45 , var_1_35)) , var_1_4));
		}
	}


	// From: Req6Batch39Amount500
	if (var_1_74 < (var_1_5 - (abs (var_1_4)))) {
		var_1_18 = (! var_1_20);
	}


	// From: Req19Batch39Amount500
	if (! var_1_18) {
		var_1_48 = (15.75 + var_1_23);
	} else {
		var_1_48 = ((max (var_1_49 , var_1_50)) - ((var_1_51 + var_1_52) + var_1_53));
	}


	// From: Req46Batch39Amount500
	if (var_1_18) {
		var_1_97 = -0.75f;
	} else {
		var_1_97 = var_1_50;
	}


	// From: Req31Batch39Amount500
	if (var_1_97 >= var_1_50) {
		if (var_1_50 < var_1_69) {
			var_1_73 = (min (var_1_35 , (var_1_4 + var_1_5)));
		}
	} else {
		var_1_73 = (min ((var_1_35 + (var_1_4 - var_1_36)) , var_1_37));
	}


	// From: Req12Batch39Amount500
	unsigned long int stepLocal_6 = var_1_10 - var_1_38;
	if (var_1_27) {
		var_1_33 = (var_1_4 + ((var_1_34 + var_1_35) - (min (var_1_5 , var_1_36))));
	} else {
		if (var_1_24 >= var_1_97) {
			var_1_33 = ((200 - var_1_35) - (min (var_1_34 , var_1_4)));
		} else {
			if (stepLocal_6 >= var_1_12) {
				var_1_33 = ((var_1_37 - var_1_36) - var_1_4);
			}
		}
	}


	// From: Req11Batch39Amount500
	signed long int stepLocal_5 = var_1_12 - var_1_4;
	if (var_1_74 != stepLocal_5) {
		if (var_1_97 >= var_1_87) {
			var_1_31 = var_1_22;
		} else {
			var_1_31 = var_1_23;
		}
	} else {
		var_1_31 = var_1_23;
	}


	// From: Req34Batch39Amount500
	signed long int stepLocal_22 = var_1_81 + (abs (var_1_15));
	if (stepLocal_22 < var_1_74) {
		var_1_79 = (var_1_80 - var_1_75);
	}


	// From: Req44Batch39Amount500
	unsigned char stepLocal_32 = var_1_34 <= (var_1_6 + var_1_5);
	signed char stepLocal_31 = var_1_38;
	if (((var_1_10 - var_1_39) / var_1_90) >= stepLocal_31) {
		var_1_94 = (var_1_53 - var_1_52);
	} else {
		if (var_1_106) {
			var_1_94 = (max (var_1_22 , var_1_95));
		} else {
			if (var_1_48 > (var_1_23 * var_1_48)) {
				if ((256.6 <= var_1_77) || stepLocal_32) {
					var_1_94 = (var_1_51 - var_1_53);
				} else {
					var_1_94 = (max ((255.5f + (var_1_78 + var_1_52)) , ((abs (var_1_49)) - var_1_53)));
				}
			} else {
				var_1_94 = (max (var_1_52 , var_1_49));
			}
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 8);
	assume_abort_if_not(var_1_4 <= 17);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 8);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 3221225470);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -15);
	assume_abort_if_not(var_1_14 <= 16);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -15);
	assume_abort_if_not(var_1_15 <= 15);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	assume_abort_if_not(var_1_29 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 31);
	assume_abort_if_not(var_1_34 <= 64);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 32);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 190);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 16383);
	assume_abort_if_not(var_1_46 <= 32767);
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691390e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_65 >= 16383);
	assume_abort_if_not(var_1_65 <= 32766);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 31);
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= -922337.2036854776000e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854776000e+12F && var_1_71 >= 1.0e-20F ));
	assume_abort_if_not(var_1_71 != 0.0F);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 1);
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= -230584.3009213691390e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691390e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -230584.3009213691390e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 2305843.009213691390e+12F && var_1_78 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_80 >= 32767);
	assume_abort_if_not(var_1_80 <= 65534);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 222);
	assume_abort_if_not(var_1_83 <= 254);
	var_1_90 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_90 >= 32767);
	assume_abort_if_not(var_1_90 <= 65534);
	var_1_95 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_95 >= -922337.2036854765600e+13F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854765600e+12F && var_1_95 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_110 = var_1_110;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_1 * var_1_93) << (var_1_4 - var_1_5)) <= -128) ? (var_1_1 == ((unsigned char) (var_1_5 + var_1_4))) : (var_1_1 == ((unsigned char) (abs (var_1_4))))) && (((var_1_7 - var_1_8) > var_1_24) ? (var_1_6 == ((unsigned long int) var_1_4)) : (var_1_6 == ((unsigned long int) ((var_1_10 - (min (0u , var_1_100))) - var_1_4))))) && ((var_1_5 >= (var_1_16 / var_1_4)) ? ((! (var_1_88 >= var_1_4)) ? (var_1_11 == ((signed char) ((5 + (min (var_1_4 , var_1_5))) - var_1_12))) : 1) : 1)) && ((var_1_10 < ((~ var_1_5) + var_1_47)) ? (((abs (var_1_7)) >= var_1_8) ? (var_1_13 == ((signed char) var_1_5)) : 1) : (var_1_13 == ((signed char) (var_1_5 + (var_1_4 + (var_1_14 + var_1_15))))))) && ((last_1_var_1_1 != last_1_var_1_82) ? (var_1_16 == ((unsigned long int) (min (var_1_4 , var_1_5)))) : (var_1_16 == ((unsigned long int) (var_1_10 - var_1_5))))) && ((var_1_74 < (var_1_5 - (abs (var_1_4)))) ? (var_1_18 == ((unsigned char) (! var_1_20))) : 1)) && (((- var_1_69) <= (var_1_7 * var_1_8)) ? (var_1_21 == ((float) (var_1_22 + var_1_23))) : 1)) && ((((var_1_67 / 32) + var_1_14) == var_1_4) ? (var_1_24 == ((double) (var_1_22 + var_1_23))) : (var_1_24 == ((double) var_1_23)))) && ((last_1_var_1_70 || (var_1_20 && last_1_var_1_25)) ? (var_1_25 == ((unsigned char) ((var_1_23 >= var_1_22) && (var_1_27 || var_1_28)))) : ((var_1_10 >= (var_1_5 / (max (var_1_4 , var_1_29)))) ? ((var_1_29 > ((1973056656u + 1997519471u) - (min (var_1_4 , last_1_var_1_109)))) ? (var_1_25 == ((unsigned char) ((last_1_var_1_73 < last_1_var_1_47) && ((var_1_20 && var_1_28) || var_1_27)))) : (var_1_25 == ((unsigned char) ((-25 > var_1_10) || var_1_20)))) : (var_1_25 == ((unsigned char) ((! var_1_28) && (! var_1_27))))))) && (var_1_30 == ((unsigned char) (! (! 1))))) && ((var_1_74 != (var_1_12 - var_1_4)) ? ((var_1_97 >= var_1_87) ? (var_1_31 == ((double) var_1_22)) : (var_1_31 == ((double) var_1_23))) : (var_1_31 == ((double) var_1_23)))) && (var_1_27 ? (var_1_33 == ((unsigned char) (var_1_4 + ((var_1_34 + var_1_35) - (min (var_1_5 , var_1_36)))))) : ((var_1_24 >= var_1_97) ? (var_1_33 == ((unsigned char) ((200 - var_1_35) - (min (var_1_34 , var_1_4))))) : (((var_1_10 - var_1_38) >= var_1_12) ? (var_1_33 == ((unsigned char) ((var_1_37 - var_1_36) - var_1_4))) : 1)))) && ((var_1_107 && ((max (var_1_34 , 16)) != var_1_12)) ? (var_1_38 == ((signed char) ((64 - var_1_39) - (var_1_35 + 4)))) : 1)) && (((min ((last_1_var_1_110 & last_1_var_1_33) , last_1_var_1_74)) <= var_1_35) ? ((last_1_var_1_30 && last_1_var_1_30) ? ((! last_1_var_1_84) ? (var_1_40 == ((unsigned char) (var_1_36 + (min (var_1_34 , 5))))) : (var_1_40 == ((unsigned char) (((min (var_1_34 , var_1_5)) + var_1_4) + var_1_39)))) : (var_1_27 ? (var_1_40 == ((unsigned char) (var_1_37 - var_1_39))) : 1)) : 1)) && (var_1_42 == ((unsigned long int) var_1_36))) && (((var_1_5 / var_1_35) > var_1_14) ? (var_1_43 == ((unsigned char) (var_1_20 && var_1_44))) : (var_1_43 == ((unsigned char) (var_1_44 && var_1_27))))) && ((last_1_var_1_45 >= (var_1_62 + var_1_5)) ? (var_1_45 == ((unsigned short int) (var_1_12 + (var_1_46 - var_1_62)))) : (var_1_45 == ((unsigned short int) (abs (32)))))) && (var_1_47 == ((signed long int) (max (var_1_5 , var_1_103))))) && ((! var_1_18) ? (var_1_48 == ((double) (15.75 + var_1_23))) : (var_1_48 == ((double) ((max (var_1_49 , var_1_50)) - ((var_1_51 + var_1_52) + var_1_53)))))) && ((((var_1_34 + 128) / var_1_29) <= var_1_96) ? (var_1_54 == ((signed short int) (min (var_1_96 , -2)))) : (var_1_54 == ((signed short int) (min (((var_1_64 + var_1_4) + (abs (var_1_35))) , var_1_104)))))) && (var_1_57 == ((unsigned short int) ((var_1_46 - var_1_36) + var_1_13)))) && ((var_1_36 <= (var_1_60 / (max (var_1_29 , 5)))) ? (var_1_58 == ((double) (max ((var_1_50 - var_1_53) , var_1_22)))) : 1)) && ((var_1_52 < ((var_1_61 - var_1_8) + last_1_var_1_87)) ? (var_1_20 ? (var_1_60 == ((signed long int) (last_1_var_1_108 + var_1_37))) : (((last_1_var_1_74 >> last_1_var_1_102) <= (last_1_var_1_89 * last_1_var_1_100)) ? (var_1_60 == ((signed long int) (var_1_46 - last_1_var_1_1))) : 1)) : (var_1_60 == ((signed long int) (var_1_4 - var_1_12))))) && ((last_1_var_1_74 == last_1_var_1_100) ? (var_1_62 == ((signed short int) ((var_1_12 - var_1_35) + (var_1_34 - (var_1_36 + 32))))) : 1)) && (((- (max (var_1_34 , var_1_109))) < var_1_82) ? (var_1_63 == ((float) (abs (var_1_50)))) : 1)) && ((last_1_var_1_91 && var_1_44) ? (var_1_64 == ((signed short int) (last_1_var_1_11 + var_1_39))) : ((last_1_var_1_107 && last_1_var_1_107) ? (var_1_64 == ((signed short int) (var_1_5 - (var_1_65 - var_1_4)))) : (var_1_64 == ((signed short int) ((max ((last_1_var_1_64 + last_1_var_1_1) , var_1_14)) + (min (last_1_var_1_16 , last_1_var_1_104)))))))) && (var_1_27 ? (var_1_66 == ((unsigned char) (var_1_84 || var_1_44))) : 1)) && ((((var_1_64 / var_1_35) << var_1_29) >= ((var_1_40 + last_1_var_1_67) - 2)) ? (var_1_67 == ((signed char) (max ((var_1_15 + -32) , var_1_36)))) : (var_1_67 == ((signed char) ((var_1_4 + (var_1_5 + var_1_68)) - var_1_39))))) && (((var_1_4 - var_1_65) > var_1_39) ? (var_1_69 == ((float) var_1_52)) : 1)) && ((var_1_108 != var_1_62) ? ((((var_1_7 - var_1_61) / var_1_71) <= (- (var_1_49 + var_1_22))) ? ((var_1_88 >= (var_1_46 ^ var_1_81)) ? (var_1_70 == ((unsigned char) (var_1_25 || (var_1_106 || var_1_20)))) : (var_1_70 == ((unsigned char) (var_1_44 || (var_1_105 || var_1_20))))) : 1) : (((var_1_60 & var_1_38) <= 1) ? (var_1_70 == ((unsigned char) (var_1_27 || (last_1_var_1_70 && var_1_28)))) : ((! var_1_43) ? (var_1_70 == ((unsigned char) (! (! var_1_27)))) : 1)))) && ((var_1_97 >= var_1_50) ? ((var_1_50 < var_1_69) ? (var_1_73 == ((signed char) (min (var_1_35 , (var_1_4 + var_1_5))))) : 1) : (var_1_73 == ((signed char) (min ((var_1_35 + (var_1_4 - var_1_36)) , var_1_37)))))) && ((8u >= var_1_4) ? ((! var_1_107) ? (((- var_1_7) >= var_1_22) ? (var_1_74 == ((unsigned long int) (var_1_65 + var_1_12))) : (var_1_74 == ((unsigned long int) (var_1_10 - var_1_40)))) : 1) : (((min (var_1_68 , (var_1_46 << var_1_75))) != var_1_54) ? (var_1_74 == ((unsigned long int) (max ((max (var_1_45 , var_1_35)) , var_1_4)))) : 1))) && ((var_1_37 <= (abs (var_1_93 * var_1_81))) ? (var_1_76 == ((float) (var_1_51 + (min (var_1_52 , (var_1_77 + var_1_78)))))) : 1)) && (((var_1_81 + (abs (var_1_15))) < var_1_74) ? (var_1_79 == ((unsigned short int) (var_1_80 - var_1_75))) : 1)) && (((- var_1_62) > (var_1_38 * (abs (var_1_110)))) ? ((10 < var_1_109) ? (var_1_81 == ((signed long int) (var_1_37 + var_1_68))) : (var_1_81 == ((signed long int) (var_1_75 + (var_1_68 + last_1_var_1_81))))) : ((var_1_110 == var_1_39) ? (var_1_28 ? (var_1_81 == ((signed long int) (var_1_14 + var_1_110))) : 1) : 1))) && ((var_1_107 || (last_1_var_1_82 >= var_1_57)) ? ((((15.125f * var_1_7) / var_1_71) >= (var_1_61 * 99.6f)) ? (var_1_82 == ((unsigned char) (((var_1_83 - var_1_75) - var_1_5) - var_1_35))) : 1) : (var_1_82 == ((unsigned char) (var_1_83 - (abs (var_1_4))))))) && (var_1_91 ? ((var_1_71 <= var_1_22) ? (var_1_84 == ((unsigned char) var_1_27)) : ((var_1_61 > (var_1_49 - var_1_7)) ? (var_1_84 == ((unsigned char) (! ((var_1_1 < var_1_6) && (! var_1_44))))) : (((8 * var_1_10) >= var_1_88) ? (var_1_84 == ((unsigned char) var_1_20)) : (var_1_84 == ((unsigned char) ((var_1_8 >= var_1_23) && var_1_28)))))) : (var_1_84 == ((unsigned char) (var_1_27 || var_1_44))))) && (var_1_86 == ((unsigned long int) (min (var_1_65 , (var_1_6 + var_1_83)))))) && (var_1_87 == ((float) (var_1_51 + (min (-0.5f , var_1_23)))))) && ((var_1_10 != last_1_var_1_96) ? (((var_1_68 < var_1_15) && (last_1_var_1_1 <= last_1_var_1_16)) ? (var_1_88 == ((signed char) ((var_1_36 + (var_1_35 - var_1_75)) - 1))) : 1) : (((last_1_var_1_25 || (var_1_34 == var_1_5)) || last_1_var_1_30) ? (var_1_88 == ((signed char) (((abs (var_1_36)) - var_1_68) + (var_1_39 - (var_1_35 - var_1_75))))) : (var_1_88 == ((signed char) (var_1_34 - 64)))))) && ((last_1_var_1_89 >= (var_1_60 >> var_1_47)) ? (var_1_89 == ((unsigned short int) (var_1_90 - var_1_40))) : 1)) && ((((min (last_1_var_1_88 , var_1_68)) << (min (var_1_75 , var_1_5))) >= last_1_var_1_96) ? (((64.75 * (var_1_8 + var_1_53)) >= (7.5 + last_1_var_1_48)) ? (var_1_91 == ((unsigned char) (var_1_28 && var_1_27))) : 1) : 1)) && (var_1_93 == ((signed short int) (var_1_37 - 500)))) && ((((var_1_10 - var_1_39) / var_1_90) >= var_1_38) ? (var_1_94 == ((float) (var_1_53 - var_1_52))) : (var_1_106 ? (var_1_94 == ((float) (max (var_1_22 , var_1_95)))) : ((var_1_48 > (var_1_23 * var_1_48)) ? (((256.6 <= var_1_77) || (var_1_34 <= (var_1_6 + var_1_5))) ? (var_1_94 == ((float) (var_1_51 - var_1_53))) : (var_1_94 == ((float) (max ((255.5f + (var_1_78 + var_1_52)) , ((abs (var_1_49)) - var_1_53)))))) : (var_1_94 == ((float) (max (var_1_52 , var_1_49)))))))) && (((var_1_80 * last_1_var_1_96) < (max ((last_1_var_1_96 * var_1_29) , var_1_16))) ? (var_1_96 == ((unsigned char) var_1_39)) : (var_1_96 == ((unsigned char) 50)))) && (var_1_18 ? (var_1_97 == ((float) -0.75f)) : (var_1_97 == ((float) var_1_50)))) && (var_1_98 == ((signed short int) var_1_68))) && (var_1_99 == ((signed short int) var_1_35))) && (var_1_28 ? (var_1_100 == ((unsigned short int) last_1_var_1_100)) : (var_1_100 == ((unsigned short int) var_1_40)))) && (var_1_30 ? (var_1_102 == ((unsigned short int) var_1_34)) : (var_1_102 == ((unsigned short int) var_1_62)))) && (var_1_25 ? (var_1_103 == ((unsigned short int) var_1_96)) : (var_1_103 == ((unsigned short int) var_1_96)))) && (var_1_84 ? (var_1_104 == ((unsigned char) var_1_36)) : 1)) && (var_1_91 ? (var_1_105 == ((unsigned char) var_1_28)) : (var_1_105 == ((unsigned char) var_1_27)))) && (var_1_106 == ((unsigned char) var_1_44))) && (var_1_91 ? (var_1_107 == ((unsigned char) var_1_28)) : 1)) && (var_1_66 ? (var_1_108 == ((unsigned long int) var_1_65)) : (var_1_108 == ((unsigned long int) var_1_12)))) && (var_1_109 == ((signed short int) var_1_12))) && (var_1_27 ? (var_1_110 == ((unsigned char) 0)) : (var_1_110 == ((unsigned char) var_1_83)))) && ((! (! (var_1_28 || var_1_27))) ? (var_1_111 == ((unsigned char) (var_1_27 || (var_1_106 && var_1_28)))) : (var_1_111 == ((unsigned char) (! var_1_28))))
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

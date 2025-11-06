// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 0;
unsigned short int var_1_5 = 16;
unsigned short int var_1_6 = 0;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 20453;
unsigned short int var_1_9 = 500;
signed short int var_1_10 = -5;
signed short int var_1_11 = 16;
unsigned char var_1_12 = 5;
unsigned short int var_1_13 = 63501;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 200;
unsigned char var_1_16 = 32;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 4;
unsigned long int var_1_20 = 32;
signed long int var_1_21 = 32;
signed long int var_1_22 = 10;
signed long int var_1_23 = 1409985475;
signed char var_1_24 = 32;
signed char var_1_25 = 16;
unsigned char var_1_26 = 0;
unsigned char var_1_30 = 0;
signed long int var_1_31 = 256;
unsigned long int var_1_32 = 4067269237;
signed long int var_1_33 = 1000000000;
signed short int var_1_35 = -5;
float var_1_36 = 64.25;
float var_1_37 = 24.625;
float var_1_38 = 15.8;
float var_1_39 = 8.9;
signed char var_1_40 = 4;
signed char var_1_41 = 100;
signed long int var_1_42 = 1;
float var_1_43 = 9999999999999.9;
float var_1_44 = 100.6;
float var_1_45 = 15.6;
float var_1_46 = 24.4;
float var_1_47 = 32.25;
float var_1_48 = 0.6;
double var_1_49 = 2.8;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 64;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 128;
unsigned char var_1_54 = 8;
unsigned char var_1_55 = 1;
signed short int var_1_56 = -4;
unsigned long int var_1_58 = 4;
signed char var_1_59 = 0;
signed short int var_1_61 = -2;
signed short int var_1_62 = 10;
unsigned char var_1_63 = 128;
unsigned char var_1_64 = 200;
unsigned char var_1_65 = 50;
unsigned long int var_1_66 = 16;
unsigned long int var_1_67 = 4193949116;
unsigned long int var_1_68 = 1748464952;
unsigned long int var_1_69 = 1835091882;
signed short int var_1_70 = -16;
signed short int var_1_71 = 18228;
signed short int var_1_72 = 20343;
unsigned char var_1_73 = 1;
signed char var_1_74 = -32;
signed char var_1_75 = 2;
signed char var_1_76 = 32;
float var_1_77 = 8.95;
signed long int var_1_78 = -2;
float var_1_79 = 0.0;
float var_1_80 = 9.5;
float var_1_81 = 10.4;
double var_1_82 = 3.875;
float var_1_84 = 31.6;
signed short int var_1_85 = -256;
unsigned char var_1_86 = 1;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 1;
signed char var_1_89 = 2;
unsigned char var_1_90 = 32;
unsigned char var_1_91 = 0;
unsigned char var_1_92 = 4;
signed long int var_1_93 = -16;
float var_1_94 = 7.2;
float var_1_95 = 0.0;
float var_1_96 = 63.125;
unsigned char var_1_97 = 0;
unsigned char var_1_98 = 0;
unsigned char var_1_99 = 0;
unsigned short int var_1_101 = 8;
unsigned char var_1_102 = 32;
unsigned char var_1_103 = 100;
signed char var_1_104 = 64;
float var_1_105 = 1000000000000000.2;
signed long int var_1_106 = 8;
signed char var_1_107 = -16;
double var_1_108 = 31.75;
float var_1_109 = 15.5;
unsigned short int var_1_110 = 4;
signed long int var_1_111 = -32;
signed short int var_1_112 = -4;
signed char var_1_113 = 64;
signed char var_1_114 = 10;
float var_1_115 = 100000.25;
signed char var_1_116 = -128;
unsigned long int var_1_117 = 5;
signed long int var_1_118 = 1;
unsigned short int var_1_119 = 5;
unsigned short int var_1_120 = 2;
unsigned long int var_1_121 = 0;
signed char var_1_122 = 4;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 0;
signed long int last_1_var_1_22 = 10;
unsigned char last_1_var_1_26 = 0;
signed short int last_1_var_1_35 = -5;
signed long int last_1_var_1_42 = 1;
float last_1_var_1_48 = 0.6;
signed short int last_1_var_1_70 = -16;
unsigned char last_1_var_1_73 = 1;
signed long int last_1_var_1_78 = -2;
float last_1_var_1_80 = 9.5;
signed short int last_1_var_1_85 = -256;
unsigned char last_1_var_1_86 = 1;
signed long int last_1_var_1_93 = -16;
float last_1_var_1_94 = 7.2;
unsigned char last_1_var_1_97 = 0;
unsigned short int last_1_var_1_101 = 8;
signed long int last_1_var_1_111 = -32;
unsigned short int last_1_var_1_120 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req25Batch10Amount500
	if (last_1_var_1_42 < var_1_50) {
		var_1_66 = (var_1_67 - (abs (min (var_1_51 , var_1_23))));
	} else {
		if (last_1_var_1_97 && (var_1_54 >= var_1_50)) {
			var_1_66 = (min ((abs (var_1_54)) , (last_1_var_1_42 + var_1_18)));
		} else {
			if ((var_1_38 + var_1_45) > last_1_var_1_94) {
				var_1_66 = ((abs (var_1_54)) + ((max (var_1_68 , var_1_69)) - var_1_18));
			}
		}
	}


	// From: Req47Batch10Amount500
	unsigned short int stepLocal_28 = var_1_6;
	if (last_1_var_1_101 <= stepLocal_28) {
		var_1_106 = var_1_41;
	} else {
		var_1_106 = last_1_var_1_1;
	}


	// From: Req42Batch10Amount500
	if ((- var_1_6) > last_1_var_1_85) {
		if ((min (var_1_44 , var_1_46)) >= last_1_var_1_80) {
			if (last_1_var_1_97 && last_1_var_1_26) {
				var_1_97 = ((var_1_30 || var_1_98) || ((last_1_var_1_26 || var_1_91) && var_1_99));
			} else {
				var_1_97 = (var_1_99 || var_1_98);
			}
		} else {
			if ((- last_1_var_1_93) <= ((min (last_1_var_1_111 , last_1_var_1_22)) + last_1_var_1_93)) {
				if (last_1_var_1_73) {
					var_1_97 = ((last_1_var_1_26 && (last_1_var_1_22 > last_1_var_1_93)) || var_1_91);
				} else {
					var_1_97 = (last_1_var_1_97 || var_1_91);
				}
			}
		}
	}


	// From: Req20Batch10Amount500
	if (var_1_97) {
		var_1_58 = var_1_18;
	}


	// From: Req32Batch10Amount500
	unsigned long int stepLocal_19 = 4u;
	if (var_1_58 != stepLocal_19) {
		var_1_80 = (max (var_1_38 , var_1_81));
	}


	// From: Req49Batch10Amount500
	if (var_1_97) {
		var_1_108 = var_1_45;
	} else {
		var_1_108 = var_1_37;
	}


	// From: Req36Batch10Amount500
	if (last_1_var_1_70 > (last_1_var_1_93 * var_1_65)) {
		var_1_86 = var_1_30;
	} else {
		if (var_1_37 != last_1_var_1_48) {
			var_1_86 = (last_1_var_1_73 || var_1_87);
		} else {
			var_1_86 = (last_1_var_1_26 && var_1_30);
		}
	}


	// From: Req52Batch10Amount500
	if (var_1_86) {
		var_1_111 = var_1_18;
	}


	// From: Req26Batch10Amount500
	signed long int stepLocal_17 = 4;
	if (var_1_106 >= stepLocal_17) {
		var_1_70 = (var_1_7 - ((max (var_1_71 , var_1_72)) - (max (var_1_14 , var_1_65))));
	} else {
		var_1_70 = var_1_71;
	}


	// From: Req8Batch10Amount500
	if (last_1_var_1_78 < var_1_23) {
		var_1_26 = 0;
	} else {
		if (last_1_var_1_97 || (last_1_var_1_97 || (last_1_var_1_97 || last_1_var_1_86))) {
			var_1_26 = var_1_30;
		}
	}


	// From: Req43Batch10Amount500
	unsigned char stepLocal_27 = var_1_26;
	if (var_1_98 && stepLocal_27) {
		var_1_101 = (abs (var_1_55));
	} else {
		var_1_101 = (max (var_1_5 , var_1_92));
	}


	// From: Req2Batch10Amount500
	var_1_10 = (var_1_11 - var_1_6);


	// From: Req6Batch10Amount500
	var_1_22 = ((var_1_23 - 4) - var_1_9);


	// From: Req7Batch10Amount500
	if (var_1_97) {
		var_1_24 = var_1_25;
	}


	// From: Req17Batch10Amount500
	if (var_1_17 < ((var_1_50 + var_1_51) - (min (var_1_18 , var_1_16)))) {
		var_1_49 = (var_1_45 - (abs (var_1_39)));
	}


	// From: Req18Batch10Amount500
	if (var_1_7 > var_1_51) {
		var_1_52 = (abs (var_1_53 - (var_1_54 + var_1_55)));
	}


	// From: Req19Batch10Amount500
	if (var_1_10 < var_1_9) {
		if ((2u / (var_1_8 + var_1_53)) > var_1_9) {
			var_1_56 = (var_1_106 - (var_1_15 + (var_1_7 - var_1_54)));
		}
	}


	// From: Req21Batch10Amount500
	signed short int stepLocal_14 = var_1_70;
	if (stepLocal_14 > (var_1_10 - var_1_16)) {
		var_1_59 = (max ((min (var_1_41 , var_1_54)) , var_1_25));
	} else {
		var_1_59 = (min ((var_1_55 + -8) , var_1_41));
	}


	// From: Req23Batch10Amount500
	unsigned short int stepLocal_15 = var_1_8;
	if ((var_1_6 / var_1_50) <= stepLocal_15) {
		var_1_62 = (-1 + ((max (var_1_17 , var_1_14)) - var_1_55));
	} else {
		var_1_62 = var_1_17;
	}


	// From: Req29Batch10Amount500
	if (var_1_72 > var_1_23) {
		var_1_75 = ((min ((max (var_1_54 , var_1_55)) , var_1_76)) - 100);
	}


	// From: Req30Batch10Amount500
	var_1_77 = ((min (var_1_45 , var_1_38)) - var_1_37);


	// From: Req35Batch10Amount500
	var_1_85 = (max ((abs (var_1_65)) , (abs (var_1_64))));


	// From: Req37Batch10Amount500
	if ((abs (var_1_46)) > var_1_37) {
		var_1_88 = (! var_1_87);
	}


	// From: Req38Batch10Amount500
	if ((var_1_79 - (abs (100.25f))) <= var_1_45) {
		var_1_89 = (var_1_76 - var_1_55);
	}


	// From: Req48Batch10Amount500
	if (var_1_98) {
		var_1_107 = 8;
	} else {
		var_1_107 = var_1_64;
	}


	// From: Req51Batch10Amount500
	var_1_110 = var_1_16;


	// From: Req53Batch10Amount500
	if (var_1_99) {
		var_1_112 = var_1_72;
	} else {
		var_1_112 = var_1_54;
	}


	// From: Req54Batch10Amount500
	if (var_1_26) {
		var_1_113 = var_1_55;
	}


	// From: Req55Batch10Amount500
	var_1_114 = var_1_54;


	// From: Req56Batch10Amount500
	var_1_115 = var_1_96;


	// From: Req57Batch10Amount500
	var_1_116 = var_1_92;


	// From: Req58Batch10Amount500
	var_1_117 = 128u;


	// From: Req60Batch10Amount500
	var_1_119 = var_1_51;


	// From: Req62Batch10Amount500
	var_1_121 = var_1_9;


	// From: Req41Batch10Amount500
	unsigned char stepLocal_26 = var_1_55;
	unsigned long int stepLocal_25 = var_1_106 + var_1_67;
	unsigned long int stepLocal_24 = var_1_121;
	unsigned long int stepLocal_23 = 10u;
	if (var_1_10 >= stepLocal_24) {
		var_1_94 = (var_1_46 + var_1_37);
	} else {
		if (stepLocal_23 <= ((~ var_1_66) / var_1_64)) {
			var_1_94 = ((6.067408938773981E18f - var_1_37) - (max (var_1_45 , (var_1_95 - 500.6f))));
		} else {
			if (stepLocal_26 > var_1_121) {
				if (stepLocal_25 <= (var_1_71 % var_1_72)) {
					var_1_94 = (max (var_1_37 , (var_1_46 + var_1_96)));
				} else {
					var_1_94 = (max (var_1_81 , var_1_95));
				}
			} else {
				var_1_94 = (max (var_1_38 , var_1_95));
			}
		}
	}


	// From: Req31Batch10Amount500
	if (var_1_108 <= ((var_1_79 - 1.75f) - var_1_45)) {
		var_1_78 = var_1_76;
	}


	// From: Req5Batch10Amount500
	signed long int stepLocal_4 = var_1_78;
	if (stepLocal_4 > (- (var_1_117 * 8))) {
		var_1_21 = (var_1_13 + var_1_11);
	}


	// From: Req10Batch10Amount500
	if (var_1_86) {
		if (var_1_111 <= var_1_8) {
			var_1_35 = (var_1_9 + 64);
		} else {
			var_1_35 = ((var_1_52 + var_1_25) + last_1_var_1_35);
		}
	} else {
		var_1_35 = var_1_16;
	}


	// From: Req12Batch10Amount500
	unsigned short int stepLocal_9 = var_1_101;
	if (var_1_35 != stepLocal_9) {
		var_1_40 = (max (var_1_25 , var_1_41));
	}


	// From: Req59Batch10Amount500
	if (var_1_87) {
		var_1_118 = var_1_35;
	} else {
		var_1_118 = 32;
	}


	// From: Req4Batch10Amount500
	signed long int stepLocal_3 = var_1_11 - var_1_7;
	if (stepLocal_3 == ((min (var_1_5 , var_1_62)) << var_1_16)) {
		var_1_20 = (2u + var_1_14);
	}


	// From: Req15Batch10Amount500
	signed long int stepLocal_13 = var_1_5 % var_1_8;
	if (var_1_121 <= stepLocal_13) {
		var_1_47 = (var_1_46 + var_1_37);
	}


	// From: Req24Batch10Amount500
	unsigned long int stepLocal_16 = -128 ^ var_1_32;
	if (stepLocal_16 > (- var_1_117)) {
		var_1_63 = ((var_1_64 - (max (1 , var_1_55))) - var_1_65);
	} else {
		if (var_1_30) {
			var_1_63 = (var_1_17 + var_1_51);
		} else {
			var_1_63 = var_1_53;
		}
	}


	// From: Req28Batch10Amount500
	unsigned char stepLocal_18 = var_1_86;
	if (stepLocal_18 || var_1_88) {
		var_1_74 = (min ((abs (var_1_54 - 8)) , var_1_55));
	}


	// From: Req34Batch10Amount500
	unsigned long int stepLocal_22 = 10u;
	if (stepLocal_22 > var_1_20) {
		var_1_84 = ((8.552082642176911E18f - 1.2f) - var_1_46);
	} else {
		var_1_84 = (abs (var_1_45));
	}


	// From: Req45Batch10Amount500
	if (((var_1_13 - var_1_17) << var_1_63) >= var_1_118) {
		var_1_104 = (max (var_1_41 , var_1_25));
	} else {
		if (((var_1_37 + var_1_46) - (max (var_1_95 , var_1_79))) >= var_1_49) {
			var_1_104 = var_1_55;
		}
	}


	// From: Req63Batch10Amount500
	signed long int stepLocal_30 = (max (var_1_6 , var_1_7)) << var_1_51;
	signed long int stepLocal_29 = max (var_1_118 , var_1_65);
	if (var_1_71 < stepLocal_30) {
		if (stepLocal_29 < (min (var_1_66 , (var_1_68 / var_1_14)))) {
			var_1_122 = var_1_55;
		} else {
			var_1_122 = var_1_54;
		}
	}


	// From: Req33Batch10Amount500
	signed long int stepLocal_21 = 10 - var_1_106;
	unsigned long int stepLocal_20 = var_1_58;
	if (stepLocal_21 > var_1_20) {
		if (var_1_68 < stepLocal_20) {
			var_1_82 = (var_1_37 + var_1_46);
		}
	}


	// From: Req27Batch10Amount500
	if (! var_1_30) {
		if (var_1_26) {
			if (((var_1_9 & var_1_40) * var_1_8) != (min (var_1_117 , var_1_101))) {
				var_1_73 = (last_1_var_1_73 && (var_1_97 && var_1_30));
			}
		}
	}


	// From: Req44Batch10Amount500
	if (var_1_51 < var_1_21) {
		if ((var_1_92 / (max (8 , var_1_53))) > var_1_112) {
			var_1_102 = (min ((var_1_15 - var_1_18) , (var_1_64 - (abs (var_1_17)))));
		} else {
			if ((- var_1_20) > (- var_1_121)) {
				if (var_1_84 >= (var_1_79 * (var_1_38 / var_1_95))) {
					var_1_102 = (var_1_51 + (var_1_103 - (min (var_1_92 , var_1_55))));
				}
			} else {
				var_1_102 = (max ((min (var_1_50 , (var_1_53 - var_1_65))) , (var_1_14 - (var_1_103 - var_1_92))));
			}
		}
	}


	// From: Req61Batch10Amount500
	if (var_1_73) {
		var_1_120 = last_1_var_1_120;
	}


	// From: Req16Batch10Amount500
	if (var_1_118 == (var_1_52 - var_1_33)) {
		var_1_48 = ((min (var_1_37 , var_1_46)) + (min ((1.00000000000008E13f + 127.625f) , -0.75f)));
	}


	// From: Req3Batch10Amount500
	unsigned long int stepLocal_2 = 2670268651u - var_1_9;
	unsigned short int stepLocal_1 = var_1_5;
	if (stepLocal_1 >= 4) {
		if (! ((var_1_13 - var_1_52) <= 64)) {
			if (stepLocal_2 < var_1_8) {
				var_1_12 = ((min (var_1_14 , var_1_15)) - (max ((max (var_1_16 , var_1_17)) , (abs (var_1_18)))));
			} else {
				var_1_12 = var_1_15;
			}
		} else {
			if (var_1_73) {
				var_1_12 = var_1_14;
			} else {
				var_1_12 = (1 + var_1_17);
			}
		}
	}


	// From: Req13Batch10Amount500
	signed short int stepLocal_11 = var_1_11;
	unsigned char stepLocal_10 = var_1_86;
	if (stepLocal_10 && var_1_73) {
		if (var_1_15 <= stepLocal_11) {
			var_1_42 = (abs (var_1_23));
		} else {
			var_1_42 = (max (var_1_7 , var_1_23));
		}
	}


	// From: Req22Batch10Amount500
	if (var_1_73) {
		var_1_61 = (var_1_7 - var_1_17);
	}


	// From: Req50Batch10Amount500
	if (var_1_73) {
		var_1_109 = var_1_46;
	} else {
		var_1_109 = var_1_37;
	}


	// From: Req1Batch10Amount500
	signed long int stepLocal_0 = 32;
	if (last_1_var_1_1 <= stepLocal_0) {
		if (var_1_82 < var_1_48) {
			var_1_1 = (last_1_var_1_1 + var_1_5);
		}
	} else {
		var_1_1 = ((var_1_6 + (var_1_7 - last_1_var_1_1)) + (var_1_8 - var_1_9));
	}


	// From: Req40Batch10Amount500
	if (var_1_26 && var_1_86) {
		if ((var_1_49 / var_1_79) <= (max ((max (var_1_81 , var_1_44)) , (var_1_39 + var_1_115)))) {
			var_1_93 = (max ((var_1_9 - (var_1_120 + var_1_92)) , var_1_120));
		} else {
			var_1_93 = (var_1_13 - (max ((var_1_17 + var_1_55) , (var_1_51 + var_1_102))));
		}
	} else {
		var_1_93 = ((var_1_16 + 64) - var_1_54);
	}


	// From: Req9Batch10Amount500
	unsigned short int stepLocal_7 = var_1_8;
	unsigned short int stepLocal_6 = var_1_13;
	unsigned long int stepLocal_5 = (var_1_8 + var_1_66) % (max (var_1_7 , 10));
	if (stepLocal_6 <= var_1_18) {
		if (stepLocal_5 >= var_1_17) {
			var_1_31 = (var_1_8 - (max (var_1_7 , var_1_117)));
		} else {
			var_1_31 = (var_1_14 - var_1_13);
		}
	} else {
		if ((min (var_1_20 , (var_1_32 - var_1_18))) >= stepLocal_7) {
			var_1_31 = (var_1_11 + (var_1_18 - (var_1_33 - var_1_6)));
		} else {
			if (var_1_48 <= (min ((max (var_1_109 , 31.5f)) , var_1_109))) {
				var_1_31 = (min (var_1_66 , var_1_13));
			} else {
				var_1_31 = (max ((8 - 100) , var_1_17));
			}
		}
	}


	// From: Req14Batch10Amount500
	unsigned short int stepLocal_12 = var_1_101;
	if (var_1_26) {
		var_1_43 = (var_1_38 - var_1_37);
	} else {
		if ((var_1_44 - (var_1_37 + var_1_45)) > var_1_94) {
			if ((- (var_1_93 % var_1_15)) < stepLocal_12) {
				var_1_43 = ((min (var_1_38 , var_1_45)) - (var_1_37 + var_1_46));
			} else {
				var_1_43 = (abs (var_1_45));
			}
		} else {
			var_1_43 = var_1_38;
		}
	}


	// From: Req39Batch10Amount500
	if ((var_1_10 + (max (var_1_25 , var_1_55))) >= ((~ var_1_31) * var_1_64)) {
		var_1_90 = ((var_1_51 - var_1_92) + 50);
	}


	// From: Req46Batch10Amount500
	if ((min ((var_1_45 + var_1_109) , (- var_1_47))) > var_1_79) {
		var_1_105 = (max ((min ((var_1_46 - var_1_37) , var_1_38)) , var_1_95));
	} else {
		var_1_105 = (max (var_1_38 , ((min (var_1_37 , var_1_45)) - (var_1_95 - var_1_46))));
	}


	// From: Req11Batch10Amount500
	unsigned long int stepLocal_8 = var_1_117;
	if (stepLocal_8 >= var_1_21) {
		if (var_1_88) {
			var_1_36 = ((1.000000000375E9f + var_1_37) - var_1_38);
		} else {
			if (! ((var_1_115 * var_1_43) <= var_1_43)) {
				var_1_36 = (max ((max (var_1_38 , (0.55f + var_1_37))) , var_1_39));
			}
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16384);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 8191);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65535);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741822);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -127);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 536870911);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427388000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 63);
	assume_abort_if_not(var_1_50 <= 128);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 64);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 127);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 64);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 190);
	assume_abort_if_not(var_1_64 <= 254);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 127);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 2147483647);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 1073741823);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 1073741823);
	assume_abort_if_not(var_1_69 <= 2147483647);
	var_1_71 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_71 >= 16383);
	assume_abort_if_not(var_1_71 <= 32766);
	var_1_72 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_72 >= 16383);
	assume_abort_if_not(var_1_72 <= 32766);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -1);
	assume_abort_if_not(var_1_76 <= 126);
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= 4611686.018427388000e+12F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854776000e+12F && var_1_79 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_81 >= -922337.2036854766000e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 9223372.036854766000e+12F && var_1_81 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 1);
	assume_abort_if_not(var_1_87 <= 1);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 1);
	assume_abort_if_not(var_1_91 <= 1);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 63);
	var_1_95 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_95 >= 4611686.018427383000e+12F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854766000e+12F && var_1_95 >= 1.0e-20F ));
	var_1_96 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_96 >= -461168.6018427383000e+13F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 4611686.018427383000e+12F && var_1_96 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 0);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 0);
	var_1_103 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_103 >= 63);
	assume_abort_if_not(var_1_103 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_111 = var_1_111;
	last_1_var_1_120 = var_1_120;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_1 <= 32) ? ((var_1_82 < var_1_48) ? (var_1_1 == ((unsigned short int) (last_1_var_1_1 + var_1_5))) : 1) : (var_1_1 == ((unsigned short int) ((var_1_6 + (var_1_7 - last_1_var_1_1)) + (var_1_8 - var_1_9))))) && (var_1_10 == ((signed short int) (var_1_11 - var_1_6)))) && ((var_1_5 >= 4) ? ((! ((var_1_13 - var_1_52) <= 64)) ? (((2670268651u - var_1_9) < var_1_8) ? (var_1_12 == ((unsigned char) ((min (var_1_14 , var_1_15)) - (max ((max (var_1_16 , var_1_17)) , (abs (var_1_18))))))) : (var_1_12 == ((unsigned char) var_1_15))) : (var_1_73 ? (var_1_12 == ((unsigned char) var_1_14)) : (var_1_12 == ((unsigned char) (1 + var_1_17))))) : 1)) && (((var_1_11 - var_1_7) == ((min (var_1_5 , var_1_62)) << var_1_16)) ? (var_1_20 == ((unsigned long int) (2u + var_1_14))) : 1)) && ((var_1_78 > (- (var_1_117 * 8))) ? (var_1_21 == ((signed long int) (var_1_13 + var_1_11))) : 1)) && (var_1_22 == ((signed long int) ((var_1_23 - 4) - var_1_9)))) && (var_1_97 ? (var_1_24 == ((signed char) var_1_25)) : 1)) && ((last_1_var_1_78 < var_1_23) ? (var_1_26 == ((unsigned char) 0)) : ((last_1_var_1_97 || (last_1_var_1_97 || (last_1_var_1_97 || last_1_var_1_86))) ? (var_1_26 == ((unsigned char) var_1_30)) : 1))) && ((var_1_13 <= var_1_18) ? ((((var_1_8 + var_1_66) % (max (var_1_7 , 10))) >= var_1_17) ? (var_1_31 == ((signed long int) (var_1_8 - (max (var_1_7 , var_1_117))))) : (var_1_31 == ((signed long int) (var_1_14 - var_1_13)))) : (((min (var_1_20 , (var_1_32 - var_1_18))) >= var_1_8) ? (var_1_31 == ((signed long int) (var_1_11 + (var_1_18 - (var_1_33 - var_1_6))))) : ((var_1_48 <= (min ((max (var_1_109 , 31.5f)) , var_1_109))) ? (var_1_31 == ((signed long int) (min (var_1_66 , var_1_13)))) : (var_1_31 == ((signed long int) (max ((8 - 100) , var_1_17)))))))) && (var_1_86 ? ((var_1_111 <= var_1_8) ? (var_1_35 == ((signed short int) (var_1_9 + 64))) : (var_1_35 == ((signed short int) ((var_1_52 + var_1_25) + last_1_var_1_35)))) : (var_1_35 == ((signed short int) var_1_16)))) && ((var_1_117 >= var_1_21) ? (var_1_88 ? (var_1_36 == ((float) ((1.000000000375E9f + var_1_37) - var_1_38))) : ((! ((var_1_115 * var_1_43) <= var_1_43)) ? (var_1_36 == ((float) (max ((max (var_1_38 , (0.55f + var_1_37))) , var_1_39)))) : 1)) : 1)) && ((var_1_35 != var_1_101) ? (var_1_40 == ((signed char) (max (var_1_25 , var_1_41)))) : 1)) && ((var_1_86 && var_1_73) ? ((var_1_15 <= var_1_11) ? (var_1_42 == ((signed long int) (abs (var_1_23)))) : (var_1_42 == ((signed long int) (max (var_1_7 , var_1_23))))) : 1)) && (var_1_26 ? (var_1_43 == ((float) (var_1_38 - var_1_37))) : (((var_1_44 - (var_1_37 + var_1_45)) > var_1_94) ? (((- (var_1_93 % var_1_15)) < var_1_101) ? (var_1_43 == ((float) ((min (var_1_38 , var_1_45)) - (var_1_37 + var_1_46)))) : (var_1_43 == ((float) (abs (var_1_45))))) : (var_1_43 == ((float) var_1_38))))) && ((var_1_121 <= (var_1_5 % var_1_8)) ? (var_1_47 == ((float) (var_1_46 + var_1_37))) : 1)) && ((var_1_118 == (var_1_52 - var_1_33)) ? (var_1_48 == ((float) ((min (var_1_37 , var_1_46)) + (min ((1.00000000000008E13f + 127.625f) , -0.75f))))) : 1)) && ((var_1_17 < ((var_1_50 + var_1_51) - (min (var_1_18 , var_1_16)))) ? (var_1_49 == ((double) (var_1_45 - (abs (var_1_39))))) : 1)) && ((var_1_7 > var_1_51) ? (var_1_52 == ((unsigned char) (abs (var_1_53 - (var_1_54 + var_1_55))))) : 1)) && ((var_1_10 < var_1_9) ? (((2u / (var_1_8 + var_1_53)) > var_1_9) ? (var_1_56 == ((signed short int) (var_1_106 - (var_1_15 + (var_1_7 - var_1_54))))) : 1) : 1)) && (var_1_97 ? (var_1_58 == ((unsigned long int) var_1_18)) : 1)) && ((var_1_70 > (var_1_10 - var_1_16)) ? (var_1_59 == ((signed char) (max ((min (var_1_41 , var_1_54)) , var_1_25)))) : (var_1_59 == ((signed char) (min ((var_1_55 + -8) , var_1_41)))))) && (var_1_73 ? (var_1_61 == ((signed short int) (var_1_7 - var_1_17))) : 1)) && (((var_1_6 / var_1_50) <= var_1_8) ? (var_1_62 == ((signed short int) (-1 + ((max (var_1_17 , var_1_14)) - var_1_55)))) : (var_1_62 == ((signed short int) var_1_17)))) && (((-128 ^ var_1_32) > (- var_1_117)) ? (var_1_63 == ((unsigned char) ((var_1_64 - (max (1 , var_1_55))) - var_1_65))) : (var_1_30 ? (var_1_63 == ((unsigned char) (var_1_17 + var_1_51))) : (var_1_63 == ((unsigned char) var_1_53))))) && ((last_1_var_1_42 < var_1_50) ? (var_1_66 == ((unsigned long int) (var_1_67 - (abs (min (var_1_51 , var_1_23)))))) : ((last_1_var_1_97 && (var_1_54 >= var_1_50)) ? (var_1_66 == ((unsigned long int) (min ((abs (var_1_54)) , (last_1_var_1_42 + var_1_18))))) : (((var_1_38 + var_1_45) > last_1_var_1_94) ? (var_1_66 == ((unsigned long int) ((abs (var_1_54)) + ((max (var_1_68 , var_1_69)) - var_1_18)))) : 1)))) && ((var_1_106 >= 4) ? (var_1_70 == ((signed short int) (var_1_7 - ((max (var_1_71 , var_1_72)) - (max (var_1_14 , var_1_65)))))) : (var_1_70 == ((signed short int) var_1_71)))) && ((! var_1_30) ? (var_1_26 ? ((((var_1_9 & var_1_40) * var_1_8) != (min (var_1_117 , var_1_101))) ? (var_1_73 == ((unsigned char) (last_1_var_1_73 && (var_1_97 && var_1_30)))) : 1) : 1) : 1)) && ((var_1_86 || var_1_88) ? (var_1_74 == ((signed char) (min ((abs (var_1_54 - 8)) , var_1_55)))) : 1)) && ((var_1_72 > var_1_23) ? (var_1_75 == ((signed char) ((min ((max (var_1_54 , var_1_55)) , var_1_76)) - 100))) : 1)) && (var_1_77 == ((float) ((min (var_1_45 , var_1_38)) - var_1_37)))) && ((var_1_108 <= ((var_1_79 - 1.75f) - var_1_45)) ? (var_1_78 == ((signed long int) var_1_76)) : 1)) && ((var_1_58 != 4u) ? (var_1_80 == ((float) (max (var_1_38 , var_1_81)))) : 1)) && (((10 - var_1_106) > var_1_20) ? ((var_1_68 < var_1_58) ? (var_1_82 == ((double) (var_1_37 + var_1_46))) : 1) : 1)) && ((10u > var_1_20) ? (var_1_84 == ((float) ((8.552082642176911E18f - 1.2f) - var_1_46))) : (var_1_84 == ((float) (abs (var_1_45)))))) && (var_1_85 == ((signed short int) (max ((abs (var_1_65)) , (abs (var_1_64))))))) && ((last_1_var_1_70 > (last_1_var_1_93 * var_1_65)) ? (var_1_86 == ((unsigned char) var_1_30)) : ((var_1_37 != last_1_var_1_48) ? (var_1_86 == ((unsigned char) (last_1_var_1_73 || var_1_87))) : (var_1_86 == ((unsigned char) (last_1_var_1_26 && var_1_30)))))) && (((abs (var_1_46)) > var_1_37) ? (var_1_88 == ((unsigned char) (! var_1_87))) : 1)) && (((var_1_79 - (abs (100.25f))) <= var_1_45) ? (var_1_89 == ((signed char) (var_1_76 - var_1_55))) : 1)) && (((var_1_10 + (max (var_1_25 , var_1_55))) >= ((~ var_1_31) * var_1_64)) ? (var_1_90 == ((unsigned char) ((var_1_51 - var_1_92) + 50))) : 1)) && ((var_1_26 && var_1_86) ? (((var_1_49 / var_1_79) <= (max ((max (var_1_81 , var_1_44)) , (var_1_39 + var_1_115)))) ? (var_1_93 == ((signed long int) (max ((var_1_9 - (var_1_120 + var_1_92)) , var_1_120)))) : (var_1_93 == ((signed long int) (var_1_13 - (max ((var_1_17 + var_1_55) , (var_1_51 + var_1_102))))))) : (var_1_93 == ((signed long int) ((var_1_16 + 64) - var_1_54))))) && ((var_1_10 >= var_1_121) ? (var_1_94 == ((float) (var_1_46 + var_1_37))) : ((10u <= ((~ var_1_66) / var_1_64)) ? (var_1_94 == ((float) ((6.067408938773981E18f - var_1_37) - (max (var_1_45 , (var_1_95 - 500.6f)))))) : ((var_1_55 > var_1_121) ? (((var_1_106 + var_1_67) <= (var_1_71 % var_1_72)) ? (var_1_94 == ((float) (max (var_1_37 , (var_1_46 + var_1_96))))) : (var_1_94 == ((float) (max (var_1_81 , var_1_95))))) : (var_1_94 == ((float) (max (var_1_38 , var_1_95)))))))) && (((- var_1_6) > last_1_var_1_85) ? (((min (var_1_44 , var_1_46)) >= last_1_var_1_80) ? ((last_1_var_1_97 && last_1_var_1_26) ? (var_1_97 == ((unsigned char) ((var_1_30 || var_1_98) || ((last_1_var_1_26 || var_1_91) && var_1_99)))) : (var_1_97 == ((unsigned char) (var_1_99 || var_1_98)))) : (((- last_1_var_1_93) <= ((min (last_1_var_1_111 , last_1_var_1_22)) + last_1_var_1_93)) ? (last_1_var_1_73 ? (var_1_97 == ((unsigned char) ((last_1_var_1_26 && (last_1_var_1_22 > last_1_var_1_93)) || var_1_91))) : (var_1_97 == ((unsigned char) (last_1_var_1_97 || var_1_91)))) : 1)) : 1)) && ((var_1_98 && var_1_26) ? (var_1_101 == ((unsigned short int) (abs (var_1_55)))) : (var_1_101 == ((unsigned short int) (max (var_1_5 , var_1_92)))))) && ((var_1_51 < var_1_21) ? (((var_1_92 / (max (8 , var_1_53))) > var_1_112) ? (var_1_102 == ((unsigned char) (min ((var_1_15 - var_1_18) , (var_1_64 - (abs (var_1_17))))))) : (((- var_1_20) > (- var_1_121)) ? ((var_1_84 >= (var_1_79 * (var_1_38 / var_1_95))) ? (var_1_102 == ((unsigned char) (var_1_51 + (var_1_103 - (min (var_1_92 , var_1_55)))))) : 1) : (var_1_102 == ((unsigned char) (max ((min (var_1_50 , (var_1_53 - var_1_65))) , (var_1_14 - (var_1_103 - var_1_92)))))))) : 1)) && ((((var_1_13 - var_1_17) << var_1_63) >= var_1_118) ? (var_1_104 == ((signed char) (max (var_1_41 , var_1_25)))) : ((((var_1_37 + var_1_46) - (max (var_1_95 , var_1_79))) >= var_1_49) ? (var_1_104 == ((signed char) var_1_55)) : 1))) && (((min ((var_1_45 + var_1_109) , (- var_1_47))) > var_1_79) ? (var_1_105 == ((float) (max ((min ((var_1_46 - var_1_37) , var_1_38)) , var_1_95)))) : (var_1_105 == ((float) (max (var_1_38 , ((min (var_1_37 , var_1_45)) - (var_1_95 - var_1_46)))))))) && ((last_1_var_1_101 <= var_1_6) ? (var_1_106 == ((signed long int) var_1_41)) : (var_1_106 == ((signed long int) last_1_var_1_1)))) && (var_1_98 ? (var_1_107 == ((signed char) 8)) : (var_1_107 == ((signed char) var_1_64)))) && (var_1_97 ? (var_1_108 == ((double) var_1_45)) : (var_1_108 == ((double) var_1_37)))) && (var_1_73 ? (var_1_109 == ((float) var_1_46)) : (var_1_109 == ((float) var_1_37)))) && (var_1_110 == ((unsigned short int) var_1_16))) && (var_1_86 ? (var_1_111 == ((signed long int) var_1_18)) : 1)) && (var_1_99 ? (var_1_112 == ((signed short int) var_1_72)) : (var_1_112 == ((signed short int) var_1_54)))) && (var_1_26 ? (var_1_113 == ((signed char) var_1_55)) : 1)) && (var_1_114 == ((signed char) var_1_54))) && (var_1_115 == ((float) var_1_96))) && (var_1_116 == ((signed char) var_1_92))) && (var_1_117 == ((unsigned long int) 128u))) && (var_1_87 ? (var_1_118 == ((signed long int) var_1_35)) : (var_1_118 == ((signed long int) 32)))) && (var_1_119 == ((unsigned short int) var_1_51))) && (var_1_73 ? (var_1_120 == ((unsigned short int) last_1_var_1_120)) : 1)) && (var_1_121 == ((unsigned long int) var_1_9))) && ((var_1_71 < ((max (var_1_6 , var_1_7)) << var_1_51)) ? (((max (var_1_118 , var_1_65)) < (min (var_1_66 , (var_1_68 / var_1_14)))) ? (var_1_122 == ((signed char) var_1_55)) : (var_1_122 == ((signed char) var_1_54))) : 1)
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

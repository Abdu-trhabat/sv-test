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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
double var_1_6 = 8.4;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
signed char var_1_10 = 32;
signed char var_1_14 = 8;
unsigned long int var_1_16 = 8;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 10;
unsigned char var_1_19 = 2;
double var_1_20 = 255.4;
double var_1_21 = 0.65;
double var_1_22 = 128.8;
double var_1_23 = 64.5;
double var_1_24 = 8.6;
double var_1_25 = 255.2;
double var_1_26 = 0.0;
double var_1_27 = 255.25;
float var_1_28 = 4.52;
float var_1_29 = 127.5;
float var_1_30 = 127.375;
unsigned short int var_1_31 = 10;
unsigned long int var_1_32 = 3352974344;
unsigned long int var_1_33 = 2528834703;
unsigned long int var_1_34 = 100;
signed char var_1_35 = 5;
signed long int var_1_37 = 50;
double var_1_38 = 200.4;
double var_1_39 = 50.8;
signed long int var_1_40 = 5;
unsigned long int var_1_41 = 32;
unsigned long int var_1_42 = 500;
unsigned long int var_1_43 = 2875494472;
unsigned long int var_1_44 = 1752315541;
unsigned long int var_1_45 = 2122572072;
unsigned long int var_1_46 = 1084332116;
unsigned long int var_1_47 = 16;
signed short int var_1_48 = -8;
signed short int var_1_49 = 10000;
signed short int var_1_50 = 10000;
unsigned long int var_1_51 = 0;
unsigned long int var_1_52 = 3496890027;
unsigned char var_1_54 = 8;
unsigned char var_1_56 = 50;
unsigned char var_1_57 = 50;
unsigned short int var_1_58 = 50;
unsigned short int var_1_59 = 39089;
unsigned char var_1_60 = 32;
double var_1_61 = 256.2;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 0;
signed long int var_1_65 = 0;
unsigned short int var_1_66 = 0;
signed short int var_1_67 = -32;
unsigned char var_1_68 = 4;
unsigned char var_1_69 = 100;
unsigned char var_1_70 = 2;
float var_1_71 = 1.75;
float var_1_72 = 0.0;
float var_1_73 = 4.1;
float var_1_74 = 8.2;
signed long int var_1_75 = 128;
signed short int var_1_76 = 8;
signed short int var_1_77 = -100;
signed short int var_1_78 = 25744;
unsigned long int var_1_79 = 10;
unsigned long int var_1_80 = 256;
double var_1_81 = 49.5;
unsigned char var_1_82 = 0;
unsigned char var_1_83 = 0;
signed char var_1_84 = 5;
unsigned long int var_1_85 = 8;
signed long int var_1_86 = 0;
signed long int var_1_87 = 0;
unsigned char var_1_89 = 5;
unsigned char var_1_90 = 200;
float var_1_91 = 15.5;
float var_1_92 = 49.45;
float var_1_93 = 255.1;
float var_1_94 = 3.75;
signed short int var_1_95 = -500;
signed short int var_1_96 = 19200;
signed short int var_1_97 = 2;
unsigned char var_1_98 = 5;
signed short int var_1_100 = 32;
unsigned char var_1_101 = 0;
unsigned char var_1_102 = 1;
unsigned char var_1_103 = 1;
unsigned char var_1_104 = 1;
unsigned char var_1_105 = 1;
unsigned char var_1_106 = 50;
unsigned short int var_1_107 = 1;
unsigned short int var_1_108 = 2;
signed char var_1_109 = -8;
signed short int var_1_110 = 16;
unsigned long int var_1_111 = 200;
double var_1_112 = 127.6;

// Calibration values

// Last'ed variables
double last_1_var_1_20 = 255.4;
unsigned short int last_1_var_1_31 = 10;
double last_1_var_1_38 = 200.4;
signed long int last_1_var_1_40 = 5;
unsigned long int last_1_var_1_41 = 32;
unsigned long int last_1_var_1_42 = 500;
signed short int last_1_var_1_48 = -8;
unsigned long int last_1_var_1_51 = 0;
unsigned short int last_1_var_1_58 = 50;
unsigned char last_1_var_1_60 = 32;
double last_1_var_1_61 = 256.2;
unsigned char last_1_var_1_62 = 1;
unsigned char last_1_var_1_68 = 4;
signed long int last_1_var_1_75 = 128;
unsigned long int last_1_var_1_79 = 10;
unsigned long int last_1_var_1_85 = 8;
float last_1_var_1_91 = 15.5;
float last_1_var_1_92 = 49.45;
signed short int last_1_var_1_100 = 32;
signed short int last_1_var_1_110 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch186Amount500
	unsigned char stepLocal_0 = last_1_var_1_61 != last_1_var_1_91;
	if (stepLocal_0 && (last_1_var_1_20 <= (last_1_var_1_38 / var_1_6))) {
		var_1_1 = ((last_1_var_1_62 || var_1_8) && var_1_9);
	}


	// From: Req32Batch186Amount500
	unsigned char stepLocal_25 = var_1_83 || var_1_1;
	if (! var_1_64) {
		var_1_82 = (! var_1_83);
	} else {
		if (stepLocal_25 || ((var_1_78 * var_1_33) >= var_1_59)) {
			var_1_82 = (! var_1_83);
		}
	}


	// From: Req42Batch186Amount500
	if (var_1_82) {
		var_1_101 = var_1_63;
	} else {
		var_1_101 = var_1_9;
	}


	// From: Req18Batch186Amount500
	unsigned long int stepLocal_17 = last_1_var_1_79;
	if (((var_1_17 - 1) % (max (var_1_56 , var_1_57))) >= stepLocal_17) {
		var_1_58 = (var_1_59 - last_1_var_1_48);
	} else {
		var_1_58 = var_1_18;
	}


	// From: Req14Batch186Amount500
	unsigned char stepLocal_13 = ! last_1_var_1_62;
	signed long int stepLocal_12 = last_1_var_1_75 / 5;
	unsigned char stepLocal_11 = ! var_1_8;
	unsigned long int stepLocal_10 = last_1_var_1_41;
	if (stepLocal_12 >= (last_1_var_1_60 / var_1_17)) {
		if (stepLocal_13 || ((var_1_14 >= var_1_18) && var_1_9)) {
			var_1_42 = (min (var_1_17 , (var_1_34 + var_1_18)));
		} else {
			var_1_42 = (var_1_43 - var_1_18);
		}
	} else {
		if (stepLocal_10 <= 8) {
			var_1_42 = (min (last_1_var_1_85 , ((var_1_44 + var_1_45) - (var_1_46 - last_1_var_1_41))));
		} else {
			if (last_1_var_1_62 || stepLocal_11) {
				var_1_42 = (min (var_1_47 , 4u));
			} else {
				var_1_42 = (var_1_43 - var_1_45);
			}
		}
	}


	// From: Req41Batch186Amount500
	if (var_1_101) {
		var_1_100 = var_1_18;
	} else {
		var_1_100 = var_1_57;
	}


	// From: Req3Batch186Amount500
	unsigned char stepLocal_5 = (last_1_var_1_42 % 10) != var_1_17;
	unsigned long int stepLocal_4 = (last_1_var_1_41 + last_1_var_1_79) >> (var_1_17 - var_1_18);
	if (stepLocal_4 <= last_1_var_1_42) {
		if (last_1_var_1_62 && stepLocal_5) {
			if (! (! var_1_9)) {
				var_1_16 = (max (16u , (abs (var_1_17))));
			} else {
				var_1_16 = var_1_18;
			}
		}
	} else {
		var_1_16 = (min ((abs (var_1_18)) , var_1_17));
	}


	// From: Req29Batch186Amount500
	var_1_79 = ((min (var_1_69 , var_1_50)) + (last_1_var_1_58 + (last_1_var_1_100 + var_1_70)));


	// From: Req8Batch186Amount500
	if (((var_1_79 * var_1_18) / var_1_17) <= ((min (var_1_32 , var_1_33)) - (var_1_34 + 5u))) {
		if (! var_1_9) {
			var_1_31 = last_1_var_1_31;
		} else {
			var_1_31 = (max (var_1_18 , last_1_var_1_31));
		}
	} else {
		var_1_31 = (max (var_1_18 , 1));
	}


	// From: Req30Batch186Amount500
	var_1_80 = ((min (2745590623u , var_1_43)) - var_1_31);


	// From: Req13Batch186Amount500
	if (last_1_var_1_92 == var_1_39) {
		var_1_41 = (var_1_18 + (abs (last_1_var_1_40)));
	} else {
		var_1_41 = var_1_17;
	}


	// From: Req6Batch186Amount500
	if (var_1_8) {
		var_1_28 = ((abs (var_1_25)) - var_1_27);
	} else {
		var_1_28 = (min ((abs (var_1_27 + var_1_23)) , (max (var_1_24 , (var_1_25 - var_1_29)))));
	}


	// From: Req11Batch186Amount500
	if (! var_1_8) {
		var_1_38 = (var_1_24 + (var_1_27 - var_1_39));
	}


	// From: Req19Batch186Amount500
	var_1_60 = (var_1_17 + (abs (var_1_18)));


	// From: Req20Batch186Amount500
	if (var_1_9) {
		var_1_61 = (var_1_25 - var_1_27);
	}


	// From: Req31Batch186Amount500
	signed short int stepLocal_24 = var_1_50;
	unsigned long int stepLocal_23 = var_1_41;
	if (stepLocal_24 < var_1_69) {
		if (var_1_16 < stepLocal_23) {
			var_1_81 = var_1_39;
		} else {
			var_1_81 = (10.25 - (var_1_72 - var_1_27));
		}
	}


	// From: Req37Batch186Amount500
	if (var_1_27 >= var_1_61) {
		var_1_92 = (((abs (999.5f)) + (var_1_73 - var_1_74)) + var_1_24);
	} else {
		var_1_92 = (((var_1_93 + var_1_94) + var_1_73) + (min (var_1_21 , var_1_74)));
	}


	// From: Req38Batch186Amount500
	if ((var_1_24 / var_1_72) < var_1_81) {
		var_1_95 = 25;
	} else {
		var_1_95 = ((var_1_87 + var_1_50) - (min (var_1_18 , (var_1_96 - var_1_90))));
	}


	// From: Req40Batch186Amount500
	signed long int stepLocal_28 = var_1_87;
	if ((var_1_31 ^ 64) < stepLocal_28) {
		var_1_98 = var_1_57;
	} else {
		var_1_98 = var_1_90;
	}


	// From: Req43Batch186Amount500
	if (var_1_64) {
		var_1_102 = var_1_8;
	}


	// From: Req44Batch186Amount500
	var_1_103 = var_1_83;


	// From: Req45Batch186Amount500
	if (var_1_64) {
		var_1_104 = var_1_8;
	}


	// From: Req46Batch186Amount500
	if (var_1_8) {
		var_1_105 = var_1_57;
	} else {
		var_1_105 = var_1_86;
	}


	// From: Req47Batch186Amount500
	if (var_1_8) {
		var_1_106 = var_1_69;
	} else {
		var_1_106 = 8;
	}


	// From: Req48Batch186Amount500
	if (var_1_9) {
		var_1_107 = var_1_108;
	}


	// From: Req49Batch186Amount500
	if (var_1_63) {
		var_1_109 = var_1_56;
	} else {
		var_1_109 = var_1_87;
	}


	// From: Req51Batch186Amount500
	if ((34722 - var_1_70) >= var_1_44) {
		var_1_111 = var_1_45;
	}


	// From: Req5Batch186Amount500
	if (var_1_101) {
		var_1_20 = (var_1_21 + (min ((max (var_1_22 , var_1_23)) , var_1_24)));
	} else {
		var_1_20 = (var_1_25 - ((abs (var_1_26)) - var_1_27));
	}


	// From: Req36Batch186Amount500
	if ((var_1_16 * var_1_41) != (max (var_1_17 , (var_1_43 - var_1_31)))) {
		var_1_91 = (max ((8.75f - var_1_39) , (abs (var_1_73))));
	} else {
		var_1_91 = var_1_39;
	}


	// From: Req17Batch186Amount500
	if (var_1_29 != (var_1_26 * var_1_91)) {
		if (var_1_9) {
			var_1_54 = (128 - (max (var_1_18 , 4)));
		}
	} else {
		var_1_54 = (var_1_18 + ((var_1_56 + var_1_57) - var_1_17));
	}


	// From: Req16Batch186Amount500
	unsigned short int stepLocal_16 = var_1_31;
	unsigned char stepLocal_15 = var_1_9;
	unsigned long int stepLocal_14 = var_1_41;
	if (var_1_8 || stepLocal_15) {
		if ((var_1_45 / var_1_46) < stepLocal_16) {
			var_1_51 = ((max ((last_1_var_1_51 + var_1_50) , 100u)) + (var_1_80 + var_1_49));
		} else {
			var_1_51 = ((max ((min (var_1_43 , var_1_52)) , (1477078077u + var_1_45))) - var_1_49);
		}
	} else {
		if (stepLocal_14 < (var_1_111 * (2 - var_1_44))) {
			var_1_51 = (var_1_18 + var_1_44);
		} else {
			var_1_51 = 0u;
		}
	}


	// From: Req25Batch186Amount500
	if ((var_1_56 & (var_1_59 - last_1_var_1_68)) < (max (var_1_14 , var_1_54))) {
		if (var_1_63) {
			var_1_68 = (((var_1_69 + 100) - var_1_18) - var_1_17);
		}
	} else {
		if (var_1_8) {
			var_1_68 = (max (var_1_18 , (var_1_17 + (max (var_1_69 , var_1_57)))));
		} else {
			var_1_68 = (8 + (min ((max (var_1_69 , 100)) , (max (var_1_18 , var_1_70)))));
		}
	}


	// From: Req23Batch186Amount500
	var_1_66 = (abs (var_1_68));


	// From: Req15Batch186Amount500
	if (! var_1_82) {
		var_1_48 = (((var_1_49 + var_1_50) - var_1_41) - var_1_18);
	} else {
		var_1_48 = (((var_1_49 + var_1_50) - var_1_41) - (abs (var_1_18 - var_1_66)));
	}


	// From: Req22Batch186Amount500
	signed long int stepLocal_20 = 32 / var_1_17;
	unsigned long int stepLocal_19 = var_1_41;
	unsigned long int stepLocal_18 = var_1_41;
	if (stepLocal_20 >= (var_1_51 + var_1_42)) {
		if (stepLocal_19 >= 256u) {
			var_1_65 = (min ((max (var_1_57 , var_1_48)) , (abs (var_1_16 - var_1_18))));
		}
	} else {
		if (var_1_63) {
			if (var_1_59 >= stepLocal_18) {
				if (var_1_61 < var_1_25) {
					var_1_65 = (min ((abs (var_1_14)) , (max (var_1_48 , var_1_18))));
				}
			}
		} else {
			var_1_65 = (var_1_48 + var_1_58);
		}
	}


	// From: Req52Batch186Amount500
	signed long int stepLocal_31 = var_1_65;
	signed long int stepLocal_30 = var_1_56 / var_1_96;
	unsigned short int stepLocal_29 = var_1_58;
	if (stepLocal_30 != var_1_34) {
		var_1_112 = ((max (var_1_73 , var_1_27)) - var_1_39);
	} else {
		if (var_1_102) {
			if (var_1_41 > stepLocal_29) {
				if (stepLocal_31 >= var_1_42) {
					var_1_112 = var_1_24;
				}
			} else {
				var_1_112 = var_1_73;
			}
		}
	}


	// From: Req34Batch186Amount500
	signed long int stepLocal_27 = var_1_70 << (var_1_86 + var_1_87);
	if (stepLocal_27 > var_1_41) {
		var_1_85 = (var_1_107 + (abs (var_1_68)));
	} else {
		var_1_85 = (abs (var_1_79));
	}


	// From: Req12Batch186Amount500
	unsigned long int stepLocal_9 = var_1_85 >> (var_1_17 - var_1_18);
	if (last_1_var_1_40 >= stepLocal_9) {
		var_1_40 = (abs (var_1_18));
	}


	// From: Req2Batch186Amount500
	unsigned long int stepLocal_3 = var_1_42 + (var_1_85 + 2u);
	unsigned char stepLocal_2 = ! (var_1_14 >= var_1_85);
	unsigned long int stepLocal_1 = 128u;
	if ((max (var_1_42 , (min (var_1_85 , var_1_111)))) <= stepLocal_1) {
		if (var_1_28 == (var_1_61 * var_1_38)) {
			if (var_1_111 <= stepLocal_3) {
				var_1_10 = (var_1_14 + 5);
			} else {
				if (stepLocal_2 && ((max (var_1_42 , var_1_111)) >= (- var_1_42))) {
					var_1_10 = var_1_14;
				} else {
					var_1_10 = 2;
				}
			}
		}
	} else {
		var_1_10 = var_1_14;
	}


	// From: Req7Batch186Amount500
	unsigned long int stepLocal_7 = var_1_41 + (var_1_111 & var_1_18);
	unsigned long int stepLocal_6 = var_1_111 + var_1_85;
	if (stepLocal_6 <= (min (var_1_16 , (min (8u , var_1_17))))) {
		var_1_30 = (var_1_21 + var_1_22);
	} else {
		if ((var_1_112 + 0.5f) <= var_1_38) {
			if (var_1_24 > (var_1_25 - var_1_27)) {
				if (var_1_16 == stepLocal_7) {
					var_1_30 = (max (var_1_29 , var_1_23));
				}
			}
		} else {
			var_1_30 = (min (var_1_26 , (var_1_21 + var_1_27)));
		}
	}


	// From: Req10Batch186Amount500
	if (! (! var_1_8)) {
		if (var_1_27 >= var_1_112) {
			var_1_37 = var_1_17;
		}
	}


	// From: Req26Batch186Amount500
	if (var_1_102 && var_1_103) {
		if (var_1_64) {
			var_1_71 = var_1_23;
		}
	} else {
		if (var_1_81 != var_1_112) {
			var_1_71 = (var_1_39 + (min (var_1_23 , var_1_27)));
		} else {
			var_1_71 = (31.8f - (var_1_72 - (var_1_73 + var_1_74)));
		}
	}


	// From: Req39Batch186Amount500
	if (var_1_22 <= var_1_71) {
		var_1_97 = var_1_50;
	}


	// From: Req21Batch186Amount500
	if (var_1_9) {
		if (var_1_20 > (max ((var_1_91 + var_1_112) , var_1_24))) {
			if (var_1_41 == (var_1_59 - (abs (var_1_57)))) {
				var_1_62 = (! var_1_8);
			} else {
				var_1_62 = ((var_1_8 && var_1_63) && var_1_64);
			}
		} else {
			var_1_62 = (var_1_1 || (var_1_63 && var_1_64));
		}
	}


	// From: Req24Batch186Amount500
	if (var_1_103) {
		var_1_67 = ((min (var_1_16 , -32)) + (var_1_50 - (var_1_79 + var_1_56)));
	} else {
		var_1_67 = ((var_1_18 + var_1_100) + (min (var_1_49 , (max (var_1_79 , var_1_85)))));
	}


	// From: Req27Batch186Amount500
	unsigned char stepLocal_21 = var_1_69;
	if (var_1_9) {
		if (var_1_6 <= var_1_23) {
			if (var_1_67 > stepLocal_21) {
				var_1_75 = ((max ((min (var_1_70 , var_1_106)) , var_1_40)) - (max (var_1_18 , 200)));
			}
		}
	} else {
		var_1_75 = (min ((max (var_1_106 , (50 + -128))) , var_1_57));
	}


	// From: Req4Batch186Amount500
	if (var_1_71 > (max (2.6f , var_1_28))) {
		var_1_19 = (abs (var_1_18));
	} else {
		var_1_19 = (abs (var_1_17));
	}


	// From: Req28Batch186Amount500
	unsigned long int stepLocal_22 = var_1_85;
	if (! (var_1_91 > (var_1_25 + var_1_29))) {
		if (var_1_97 < stepLocal_22) {
			var_1_76 = (var_1_77 + (var_1_57 - 5));
		} else {
			var_1_76 = (var_1_97 - var_1_49);
		}
	} else {
		if (256.5f < var_1_61) {
			var_1_76 = ((var_1_78 - var_1_69) - var_1_70);
		} else {
			var_1_76 = (max (64 , (var_1_50 - var_1_111)));
		}
	}


	// From: Req33Batch186Amount500
	unsigned char stepLocal_26 = var_1_64;
	if (var_1_83 || stepLocal_26) {
		if (var_1_62) {
			var_1_84 = (max ((min (var_1_56 , var_1_14)) , 1));
		} else {
			var_1_84 = var_1_57;
		}
	} else {
		var_1_84 = var_1_57;
	}


	// From: Req35Batch186Amount500
	if (var_1_42 >= (- (var_1_69 / 4u))) {
		var_1_89 = ((var_1_90 - var_1_18) - (abs (var_1_69 - var_1_17)));
	} else {
		if (var_1_103) {
			var_1_89 = (128 - var_1_18);
		} else {
			if (var_1_84 <= (var_1_78 + var_1_111)) {
				if (var_1_51 >= var_1_75) {
					var_1_89 = (abs (var_1_69 + var_1_87));
				} else {
					var_1_89 = (min ((abs (var_1_57)) , var_1_56));
				}
			} else {
				var_1_89 = (min (var_1_86 , var_1_56));
			}
		}
	}


	// From: Req50Batch186Amount500
	if (var_1_8) {
		var_1_110 = var_1_75;
	} else {
		var_1_110 = last_1_var_1_110;
	}


	// From: Req9Batch186Amount500
	unsigned long int stepLocal_8 = var_1_80 + (10 * var_1_76);
	if (stepLocal_8 <= 10) {
		var_1_35 = (min (var_1_18 , (max (var_1_17 , -32))));
	} else {
		var_1_35 = ((var_1_17 - (abs (var_1_18))) + var_1_14);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 16);
	assume_abort_if_not(var_1_17 <= 31);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 15);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= -461168.6018427383000e+13F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1073741824);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967294);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 1073741823);
	assume_abort_if_not(var_1_44 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741824);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 1073741823);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 4294967294);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 8191);
	assume_abort_if_not(var_1_49 <= 16383);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 8191);
	assume_abort_if_not(var_1_50 <= 16383);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 31);
	assume_abort_if_not(var_1_56 <= 64);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 32);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 32767);
	assume_abort_if_not(var_1_59 <= 65534);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 1);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 95);
	assume_abort_if_not(var_1_69 <= 127);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 127);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 4611686.018427383000e+12F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854766000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_77 >= -16383);
	assume_abort_if_not(var_1_77 <= 16383);
	var_1_78 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_78 >= 16382);
	assume_abort_if_not(var_1_78 <= 32766);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 0);
	var_1_86 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 1);
	var_1_87 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 0);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 190);
	assume_abort_if_not(var_1_90 <= 254);
	var_1_93 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_93 >= -115292.1504606845700e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 1152921.504606845700e+12F && var_1_93 >= 1.0e-20F ));
	var_1_94 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_94 >= -115292.1504606845700e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 1152921.504606845700e+12F && var_1_94 >= 1.0e-20F ));
	var_1_96 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_96 >= 16383);
	assume_abort_if_not(var_1_96 <= 32766);
	var_1_108 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_110 = var_1_110;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_61 != last_1_var_1_91) && (last_1_var_1_20 <= (last_1_var_1_38 / var_1_6))) ? (var_1_1 == ((unsigned char) ((last_1_var_1_62 || var_1_8) && var_1_9))) : 1) && (((max (var_1_42 , (min (var_1_85 , var_1_111)))) <= 128u) ? ((var_1_28 == (var_1_61 * var_1_38)) ? ((var_1_111 <= (var_1_42 + (var_1_85 + 2u))) ? (var_1_10 == ((signed char) (var_1_14 + 5))) : (((! (var_1_14 >= var_1_85)) && ((max (var_1_42 , var_1_111)) >= (- var_1_42))) ? (var_1_10 == ((signed char) var_1_14)) : (var_1_10 == ((signed char) 2)))) : 1) : (var_1_10 == ((signed char) var_1_14)))) && ((((last_1_var_1_41 + last_1_var_1_79) >> (var_1_17 - var_1_18)) <= last_1_var_1_42) ? ((last_1_var_1_62 && ((last_1_var_1_42 % 10) != var_1_17)) ? ((! (! var_1_9)) ? (var_1_16 == ((unsigned long int) (max (16u , (abs (var_1_17)))))) : (var_1_16 == ((unsigned long int) var_1_18))) : 1) : (var_1_16 == ((unsigned long int) (min ((abs (var_1_18)) , var_1_17)))))) && ((var_1_71 > (max (2.6f , var_1_28))) ? (var_1_19 == ((unsigned char) (abs (var_1_18)))) : (var_1_19 == ((unsigned char) (abs (var_1_17)))))) && (var_1_101 ? (var_1_20 == ((double) (var_1_21 + (min ((max (var_1_22 , var_1_23)) , var_1_24))))) : (var_1_20 == ((double) (var_1_25 - ((abs (var_1_26)) - var_1_27)))))) && (var_1_8 ? (var_1_28 == ((float) ((abs (var_1_25)) - var_1_27))) : (var_1_28 == ((float) (min ((abs (var_1_27 + var_1_23)) , (max (var_1_24 , (var_1_25 - var_1_29))))))))) && (((var_1_111 + var_1_85) <= (min (var_1_16 , (min (8u , var_1_17))))) ? (var_1_30 == ((float) (var_1_21 + var_1_22))) : (((var_1_112 + 0.5f) <= var_1_38) ? ((var_1_24 > (var_1_25 - var_1_27)) ? ((var_1_16 == (var_1_41 + (var_1_111 & var_1_18))) ? (var_1_30 == ((float) (max (var_1_29 , var_1_23)))) : 1) : 1) : (var_1_30 == ((float) (min (var_1_26 , (var_1_21 + var_1_27)))))))) && ((((var_1_79 * var_1_18) / var_1_17) <= ((min (var_1_32 , var_1_33)) - (var_1_34 + 5u))) ? ((! var_1_9) ? (var_1_31 == ((unsigned short int) last_1_var_1_31)) : (var_1_31 == ((unsigned short int) (max (var_1_18 , last_1_var_1_31))))) : (var_1_31 == ((unsigned short int) (max (var_1_18 , 1)))))) && (((var_1_80 + (10 * var_1_76)) <= 10) ? (var_1_35 == ((signed char) (min (var_1_18 , (max (var_1_17 , -32)))))) : (var_1_35 == ((signed char) ((var_1_17 - (abs (var_1_18))) + var_1_14))))) && ((! (! var_1_8)) ? ((var_1_27 >= var_1_112) ? (var_1_37 == ((signed long int) var_1_17)) : 1) : 1)) && ((! var_1_8) ? (var_1_38 == ((double) (var_1_24 + (var_1_27 - var_1_39)))) : 1)) && ((last_1_var_1_40 >= (var_1_85 >> (var_1_17 - var_1_18))) ? (var_1_40 == ((signed long int) (abs (var_1_18)))) : 1)) && ((last_1_var_1_92 == var_1_39) ? (var_1_41 == ((unsigned long int) (var_1_18 + (abs (last_1_var_1_40))))) : (var_1_41 == ((unsigned long int) var_1_17)))) && (((last_1_var_1_75 / 5) >= (last_1_var_1_60 / var_1_17)) ? (((! last_1_var_1_62) || ((var_1_14 >= var_1_18) && var_1_9)) ? (var_1_42 == ((unsigned long int) (min (var_1_17 , (var_1_34 + var_1_18))))) : (var_1_42 == ((unsigned long int) (var_1_43 - var_1_18)))) : ((last_1_var_1_41 <= 8) ? (var_1_42 == ((unsigned long int) (min (last_1_var_1_85 , ((var_1_44 + var_1_45) - (var_1_46 - last_1_var_1_41)))))) : ((last_1_var_1_62 || (! var_1_8)) ? (var_1_42 == ((unsigned long int) (min (var_1_47 , 4u)))) : (var_1_42 == ((unsigned long int) (var_1_43 - var_1_45))))))) && ((! var_1_82) ? (var_1_48 == ((signed short int) (((var_1_49 + var_1_50) - var_1_41) - var_1_18))) : (var_1_48 == ((signed short int) (((var_1_49 + var_1_50) - var_1_41) - (abs (var_1_18 - var_1_66))))))) && ((var_1_8 || var_1_9) ? (((var_1_45 / var_1_46) < var_1_31) ? (var_1_51 == ((unsigned long int) ((max ((last_1_var_1_51 + var_1_50) , 100u)) + (var_1_80 + var_1_49)))) : (var_1_51 == ((unsigned long int) ((max ((min (var_1_43 , var_1_52)) , (1477078077u + var_1_45))) - var_1_49)))) : ((var_1_41 < (var_1_111 * (2 - var_1_44))) ? (var_1_51 == ((unsigned long int) (var_1_18 + var_1_44))) : (var_1_51 == ((unsigned long int) 0u))))) && ((var_1_29 != (var_1_26 * var_1_91)) ? (var_1_9 ? (var_1_54 == ((unsigned char) (128 - (max (var_1_18 , 4))))) : 1) : (var_1_54 == ((unsigned char) (var_1_18 + ((var_1_56 + var_1_57) - var_1_17)))))) && ((((var_1_17 - 1) % (max (var_1_56 , var_1_57))) >= last_1_var_1_79) ? (var_1_58 == ((unsigned short int) (var_1_59 - last_1_var_1_48))) : (var_1_58 == ((unsigned short int) var_1_18)))) && (var_1_60 == ((unsigned char) (var_1_17 + (abs (var_1_18)))))) && (var_1_9 ? (var_1_61 == ((double) (var_1_25 - var_1_27))) : 1)) && (var_1_9 ? ((var_1_20 > (max ((var_1_91 + var_1_112) , var_1_24))) ? ((var_1_41 == (var_1_59 - (abs (var_1_57)))) ? (var_1_62 == ((unsigned char) (! var_1_8))) : (var_1_62 == ((unsigned char) ((var_1_8 && var_1_63) && var_1_64)))) : (var_1_62 == ((unsigned char) (var_1_1 || (var_1_63 && var_1_64))))) : 1)) && (((32 / var_1_17) >= (var_1_51 + var_1_42)) ? ((var_1_41 >= 256u) ? (var_1_65 == ((signed long int) (min ((max (var_1_57 , var_1_48)) , (abs (var_1_16 - var_1_18)))))) : 1) : (var_1_63 ? ((var_1_59 >= var_1_41) ? ((var_1_61 < var_1_25) ? (var_1_65 == ((signed long int) (min ((abs (var_1_14)) , (max (var_1_48 , var_1_18)))))) : 1) : 1) : (var_1_65 == ((signed long int) (var_1_48 + var_1_58)))))) && (var_1_66 == ((unsigned short int) (abs (var_1_68))))) && (var_1_103 ? (var_1_67 == ((signed short int) ((min (var_1_16 , -32)) + (var_1_50 - (var_1_79 + var_1_56))))) : (var_1_67 == ((signed short int) ((var_1_18 + var_1_100) + (min (var_1_49 , (max (var_1_79 , var_1_85))))))))) && (((var_1_56 & (var_1_59 - last_1_var_1_68)) < (max (var_1_14 , var_1_54))) ? (var_1_63 ? (var_1_68 == ((unsigned char) (((var_1_69 + 100) - var_1_18) - var_1_17))) : 1) : (var_1_8 ? (var_1_68 == ((unsigned char) (max (var_1_18 , (var_1_17 + (max (var_1_69 , var_1_57))))))) : (var_1_68 == ((unsigned char) (8 + (min ((max (var_1_69 , 100)) , (max (var_1_18 , var_1_70)))))))))) && ((var_1_102 && var_1_103) ? (var_1_64 ? (var_1_71 == ((float) var_1_23)) : 1) : ((var_1_81 != var_1_112) ? (var_1_71 == ((float) (var_1_39 + (min (var_1_23 , var_1_27))))) : (var_1_71 == ((float) (31.8f - (var_1_72 - (var_1_73 + var_1_74)))))))) && (var_1_9 ? ((var_1_6 <= var_1_23) ? ((var_1_67 > var_1_69) ? (var_1_75 == ((signed long int) ((max ((min (var_1_70 , var_1_106)) , var_1_40)) - (max (var_1_18 , 200))))) : 1) : 1) : (var_1_75 == ((signed long int) (min ((max (var_1_106 , (50 + -128))) , var_1_57)))))) && ((! (var_1_91 > (var_1_25 + var_1_29))) ? ((var_1_97 < var_1_85) ? (var_1_76 == ((signed short int) (var_1_77 + (var_1_57 - 5)))) : (var_1_76 == ((signed short int) (var_1_97 - var_1_49)))) : ((256.5f < var_1_61) ? (var_1_76 == ((signed short int) ((var_1_78 - var_1_69) - var_1_70))) : (var_1_76 == ((signed short int) (max (64 , (var_1_50 - var_1_111)))))))) && (var_1_79 == ((unsigned long int) ((min (var_1_69 , var_1_50)) + (last_1_var_1_58 + (last_1_var_1_100 + var_1_70)))))) && (var_1_80 == ((unsigned long int) ((min (2745590623u , var_1_43)) - var_1_31)))) && ((var_1_50 < var_1_69) ? ((var_1_16 < var_1_41) ? (var_1_81 == ((double) var_1_39)) : (var_1_81 == ((double) (10.25 - (var_1_72 - var_1_27))))) : 1)) && ((! var_1_64) ? (var_1_82 == ((unsigned char) (! var_1_83))) : (((var_1_83 || var_1_1) || ((var_1_78 * var_1_33) >= var_1_59)) ? (var_1_82 == ((unsigned char) (! var_1_83))) : 1))) && ((var_1_83 || var_1_64) ? (var_1_62 ? (var_1_84 == ((signed char) (max ((min (var_1_56 , var_1_14)) , 1)))) : (var_1_84 == ((signed char) var_1_57))) : (var_1_84 == ((signed char) var_1_57)))) && (((var_1_70 << (var_1_86 + var_1_87)) > var_1_41) ? (var_1_85 == ((unsigned long int) (var_1_107 + (abs (var_1_68))))) : (var_1_85 == ((unsigned long int) (abs (var_1_79)))))) && ((var_1_42 >= (- (var_1_69 / 4u))) ? (var_1_89 == ((unsigned char) ((var_1_90 - var_1_18) - (abs (var_1_69 - var_1_17))))) : (var_1_103 ? (var_1_89 == ((unsigned char) (128 - var_1_18))) : ((var_1_84 <= (var_1_78 + var_1_111)) ? ((var_1_51 >= var_1_75) ? (var_1_89 == ((unsigned char) (abs (var_1_69 + var_1_87)))) : (var_1_89 == ((unsigned char) (min ((abs (var_1_57)) , var_1_56))))) : (var_1_89 == ((unsigned char) (min (var_1_86 , var_1_56)))))))) && (((var_1_16 * var_1_41) != (max (var_1_17 , (var_1_43 - var_1_31)))) ? (var_1_91 == ((float) (max ((8.75f - var_1_39) , (abs (var_1_73)))))) : (var_1_91 == ((float) var_1_39)))) && ((var_1_27 >= var_1_61) ? (var_1_92 == ((float) (((abs (999.5f)) + (var_1_73 - var_1_74)) + var_1_24))) : (var_1_92 == ((float) (((var_1_93 + var_1_94) + var_1_73) + (min (var_1_21 , var_1_74))))))) && (((var_1_24 / var_1_72) < var_1_81) ? (var_1_95 == ((signed short int) 25)) : (var_1_95 == ((signed short int) ((var_1_87 + var_1_50) - (min (var_1_18 , (var_1_96 - var_1_90)))))))) && ((var_1_22 <= var_1_71) ? (var_1_97 == ((signed short int) var_1_50)) : 1)) && (((var_1_31 ^ 64) < var_1_87) ? (var_1_98 == ((unsigned char) var_1_57)) : (var_1_98 == ((unsigned char) var_1_90)))) && (var_1_101 ? (var_1_100 == ((signed short int) var_1_18)) : (var_1_100 == ((signed short int) var_1_57)))) && (var_1_82 ? (var_1_101 == ((unsigned char) var_1_63)) : (var_1_101 == ((unsigned char) var_1_9)))) && (var_1_64 ? (var_1_102 == ((unsigned char) var_1_8)) : 1)) && (var_1_103 == ((unsigned char) var_1_83))) && (var_1_64 ? (var_1_104 == ((unsigned char) var_1_8)) : 1)) && (var_1_8 ? (var_1_105 == ((unsigned char) var_1_57)) : (var_1_105 == ((unsigned char) var_1_86)))) && (var_1_8 ? (var_1_106 == ((unsigned char) var_1_69)) : (var_1_106 == ((unsigned char) 8)))) && (var_1_9 ? (var_1_107 == ((unsigned short int) var_1_108)) : 1)) && (var_1_63 ? (var_1_109 == ((signed char) var_1_56)) : (var_1_109 == ((signed char) var_1_87)))) && (var_1_8 ? (var_1_110 == ((signed short int) var_1_75)) : (var_1_110 == ((signed short int) last_1_var_1_110)))) && (((34722 - var_1_70) >= var_1_44) ? (var_1_111 == ((unsigned long int) var_1_45)) : 1)) && (((var_1_56 / var_1_96) != var_1_34) ? (var_1_112 == ((double) ((max (var_1_73 , var_1_27)) - var_1_39))) : (var_1_102 ? ((var_1_41 > var_1_58) ? ((var_1_65 >= var_1_42) ? (var_1_112 == ((double) var_1_24)) : 1) : (var_1_112 == ((double) var_1_73))) : 1))
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

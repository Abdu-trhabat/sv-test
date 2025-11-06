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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = 16;
unsigned char var_1_2 = 1;
signed char var_1_3 = 100;
signed long int var_1_5 = 128;
signed long int var_1_6 = -64;
unsigned short int var_1_7 = 100;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 100;
unsigned short int var_1_10 = 0;
unsigned short int var_1_11 = 0;
double var_1_12 = 127.125;
double var_1_14 = 128.7;
double var_1_15 = 7.6;
double var_1_16 = 0.0;
double var_1_17 = 0.64;
double var_1_18 = -0.5;
float var_1_19 = 255.6;
double var_1_20 = 255.2;
signed short int var_1_21 = -16;
unsigned short int var_1_22 = 62255;
signed short int var_1_23 = 18323;
signed short int var_1_24 = 10;
signed short int var_1_25 = 5;
unsigned char var_1_26 = 200;
unsigned char var_1_27 = 2;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 100;
signed short int var_1_30 = -1000;
signed long int var_1_31 = 256;
signed short int var_1_32 = 10000;
signed short int var_1_33 = 27092;
signed long int var_1_34 = -128;
signed short int var_1_35 = -16;
unsigned char var_1_36 = 0;
unsigned long int var_1_37 = 200;
unsigned long int var_1_38 = 3857760172;
unsigned long int var_1_39 = 3551807193;
signed long int var_1_40 = 128;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
float var_1_45 = 16.3;
double var_1_46 = 499.75;
double var_1_47 = 31.8;
unsigned long int var_1_48 = 10;
unsigned long int var_1_49 = 1209291618;
unsigned long int var_1_50 = 1918210178;
float var_1_51 = 16.5;
unsigned long int var_1_52 = 4;
signed char var_1_53 = 0;
signed char var_1_54 = 16;
signed char var_1_55 = 32;
signed char var_1_56 = 64;
signed char var_1_57 = 10;
signed char var_1_58 = 64;
signed char var_1_59 = 32;
unsigned short int var_1_60 = 16;
float var_1_61 = -0.6;
unsigned char var_1_62 = 128;
unsigned char var_1_63 = 5;
unsigned char var_1_64 = 1;
double var_1_65 = 100000000.4;
signed long int var_1_66 = -5;
float var_1_67 = 64.75;
float var_1_68 = 63.25;
float var_1_70 = 0.0;
float var_1_71 = 5.6;
float var_1_72 = 256.9;
unsigned short int var_1_73 = 16;
unsigned char var_1_75 = 5;
unsigned short int var_1_76 = 52924;
float var_1_77 = 25.2;
float var_1_78 = 500.8;
signed char var_1_79 = 1;
signed char var_1_80 = 100;
signed char var_1_81 = 32;
signed char var_1_82 = -32;
float var_1_84 = 2.2;
float var_1_85 = 63.7;
signed char var_1_86 = -50;
signed short int var_1_87 = -200;
signed short int var_1_88 = -16;
unsigned long int var_1_89 = 1;
unsigned long int var_1_90 = 1000000000;
signed long int var_1_91 = 8;
unsigned short int var_1_92 = 5;
signed long int var_1_93 = -1;
signed char var_1_94 = 16;
unsigned char var_1_95 = 0;
signed char var_1_96 = -25;
unsigned char var_1_97 = 5;
unsigned char var_1_98 = 128;
unsigned long int var_1_99 = 0;
signed char var_1_101 = -50;
signed short int var_1_102 = 100;
float var_1_103 = 100.4;
unsigned char var_1_104 = 0;
signed char var_1_105 = -2;
double var_1_106 = 32.75;
unsigned char var_1_107 = 8;
float var_1_108 = 4.7;
signed short int var_1_109 = -4;
signed char var_1_110 = 16;
unsigned long int var_1_111 = 10;
double var_1_112 = 16.75;
float var_1_113 = -0.48;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 16;
signed long int last_1_var_1_34 = -128;
signed short int last_1_var_1_35 = -16;
unsigned long int last_1_var_1_37 = 200;
signed long int last_1_var_1_40 = 128;
unsigned char last_1_var_1_41 = 1;
unsigned short int last_1_var_1_60 = 16;
unsigned short int last_1_var_1_73 = 16;
unsigned char last_1_var_1_95 = 0;
unsigned char last_1_var_1_104 = 0;
unsigned long int last_1_var_1_111 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req38Batch116Amount500
	if (last_1_var_1_95) {
		var_1_93 = (-32 + (var_1_56 - (1000000000 - var_1_76)));
	} else {
		if (var_1_44 && last_1_var_1_41) {
			var_1_93 = (abs (-4));
		} else {
			var_1_93 = last_1_var_1_73;
		}
	}


	// From: Req54Batch116Amount500
	if (var_1_44) {
		var_1_111 = var_1_10;
	} else {
		var_1_111 = var_1_93;
	}


	// From: Req35Batch116Amount500
	if (! (last_1_var_1_60 < (last_1_var_1_40 + last_1_var_1_35))) {
		var_1_89 = (max (var_1_76 , (var_1_39 - (var_1_90 + var_1_22))));
	} else {
		var_1_89 = (min ((min (var_1_8 , var_1_25)) , var_1_33));
	}


	// From: Req14Batch116Amount500
	unsigned char stepLocal_7 = var_1_43;
	if (! ((last_1_var_1_1 * var_1_33) > var_1_6)) {
		var_1_48 = (var_1_39 - ((max (var_1_49 , var_1_50)) - var_1_28));
	} else {
		if (stepLocal_7 || (var_1_9 > (var_1_11 + last_1_var_1_34))) {
			var_1_48 = (abs (64u));
		} else {
			var_1_48 = (max (var_1_8 , var_1_11));
		}
	}


	// From: Req12Batch116Amount500
	signed long int stepLocal_6 = var_1_31;
	if (stepLocal_6 > -10) {
		var_1_41 = ((last_1_var_1_41 && (var_1_33 < var_1_48)) && ((var_1_10 > var_1_48) && var_1_42));
	} else {
		var_1_41 = (var_1_43 && var_1_44);
	}


	// From: Req1Batch116Amount500
	if (last_1_var_1_104 || ((abs (var_1_3)) <= last_1_var_1_111)) {
		var_1_1 = (min (var_1_3 , var_1_5));
	} else {
		var_1_1 = (var_1_3 + var_1_6);
	}


	// From: Req2Batch116Amount500
	var_1_7 = ((max (var_1_8 , var_1_9)) + (min (var_1_10 , var_1_11)));


	// From: Req9Batch116Amount500
	unsigned char stepLocal_3 = var_1_36;
	if (var_1_2 && stepLocal_3) {
		var_1_35 = var_1_24;
	}


	// From: Req11Batch116Amount500
	unsigned short int stepLocal_5 = var_1_10;
	if (var_1_39 > stepLocal_5) {
		var_1_40 = (min ((max (var_1_25 , (200 - var_1_29))) , (min (64 , var_1_39))));
	}


	// From: Req13Batch116Amount500
	if ((var_1_20 - (min (var_1_16 , var_1_15))) <= (var_1_17 - (max (var_1_46 , var_1_47)))) {
		var_1_45 = var_1_15;
	} else {
		var_1_45 = ((max (64.7f , var_1_15)) - (var_1_16 + var_1_17));
	}


	// From: Req15Batch116Amount500
	if ((var_1_50 / 2) <= (var_1_40 / (max (8u , 100u)))) {
		var_1_51 = (max ((abs (var_1_18)) , var_1_14));
	} else {
		var_1_51 = var_1_17;
	}


	// From: Req19Batch116Amount500
	signed long int stepLocal_8 = var_1_31;
	if (stepLocal_8 < var_1_48) {
		var_1_61 = ((min (var_1_15 , var_1_16)) + var_1_14);
	} else {
		var_1_61 = (min ((var_1_15 + var_1_17) , var_1_18));
	}


	// From: Req21Batch116Amount500
	unsigned char stepLocal_10 = var_1_29;
	if (((var_1_59 & var_1_63) + var_1_50) >= stepLocal_10) {
		var_1_65 = (abs (32.125));
	} else {
		var_1_65 = (max (var_1_14 , var_1_18));
	}


	// From: Req24Batch116Amount500
	signed long int stepLocal_14 = var_1_23 * var_1_8;
	if (stepLocal_14 > var_1_40) {
		if (var_1_43) {
			var_1_68 = ((min ((min (1.5f , var_1_16)) , var_1_15)) - (var_1_17 + (var_1_70 - var_1_71)));
		} else {
			var_1_68 = (var_1_70 + var_1_71);
		}
	}


	// From: Req25Batch116Amount500
	if (var_1_39 >= var_1_55) {
		var_1_72 = (4.25f - var_1_15);
	}


	// From: Req27Batch116Amount500
	if (var_1_5 >= var_1_11) {
		var_1_77 = (var_1_70 - ((3.5f + var_1_71) + var_1_78));
	}


	// From: Req28Batch116Amount500
	if (var_1_42) {
		var_1_79 = var_1_54;
	}


	// From: Req29Batch116Amount500
	if (! (var_1_8 <= (- var_1_58))) {
		var_1_80 = var_1_59;
	} else {
		var_1_80 = ((var_1_56 - (var_1_81 - 2)) - (64 - var_1_64));
	}


	// From: Req37Batch116Amount500
	var_1_92 = ((max (var_1_27 , var_1_56)) + var_1_75);


	// From: Req41Batch116Amount500
	unsigned long int stepLocal_27 = 50u;
	if (stepLocal_27 <= (var_1_31 / 2u)) {
		var_1_96 = ((var_1_57 - var_1_81) + var_1_59);
	}


	// From: Req44Batch116Amount500
	var_1_101 = var_1_59;


	// From: Req45Batch116Amount500
	var_1_102 = var_1_28;


	// From: Req46Batch116Amount500
	if (var_1_42) {
		var_1_103 = var_1_85;
	} else {
		var_1_103 = var_1_14;
	}


	// From: Req47Batch116Amount500
	if (var_1_43) {
		var_1_104 = var_1_44;
	} else {
		var_1_104 = 0;
	}


	// From: Req48Batch116Amount500
	if (var_1_42) {
		var_1_105 = var_1_58;
	} else {
		var_1_105 = var_1_63;
	}


	// From: Req49Batch116Amount500
	if (var_1_41) {
		var_1_106 = var_1_70;
	}


	// From: Req50Batch116Amount500
	var_1_107 = 1;


	// From: Req52Batch116Amount500
	if (var_1_42) {
		var_1_109 = var_1_89;
	}


	// From: Req56Batch116Amount500
	var_1_113 = 255.675f;


	// From: Req8Batch116Amount500
	if ((abs (var_1_31 / 16u)) > var_1_111) {
		var_1_34 = var_1_33;
	} else {
		var_1_34 = (max (var_1_9 , (max ((var_1_11 + var_1_28) , var_1_27))));
	}


	// From: Req40Batch116Amount500
	signed long int stepLocal_26 = ~ 2;
	if ((-16 / var_1_33) <= stepLocal_26) {
		var_1_95 = (var_1_41 || var_1_43);
	}


	// From: Req6Batch116Amount500
	unsigned char stepLocal_2 = var_1_95;
	if (stepLocal_2 && (var_1_10 < var_1_6)) {
		var_1_26 = (var_1_27 + var_1_28);
	} else {
		var_1_26 = (abs (var_1_29));
	}


	// From: Req36Batch116Amount500
	if (var_1_42) {
		var_1_91 = ((1833989807 - (min (var_1_57 , var_1_26))) - var_1_1);
	}


	// From: Req5Batch116Amount500
	if (var_1_92 >= (abs (var_1_22 - var_1_8))) {
		var_1_21 = ((var_1_23 - (max (var_1_24 , var_1_25))) - 64);
	}


	// From: Req16Batch116Amount500
	if (var_1_42) {
		var_1_52 = (var_1_27 + (max (var_1_33 , var_1_92)));
	} else {
		var_1_52 = (abs (var_1_39));
	}


	// From: Req30Batch116Amount500
	if (var_1_76 < var_1_24) {
		if ((var_1_57 != (var_1_49 * 32)) && var_1_104) {
			var_1_82 = var_1_63;
		}
	}


	// From: Req39Batch116Amount500
	unsigned char stepLocal_25 = var_1_104;
	if (stepLocal_25 && var_1_43) {
		var_1_94 = (var_1_81 - 32);
	} else {
		var_1_94 = (var_1_63 + ((abs (var_1_64)) + (min (-1 , 16))));
	}


	// From: Req42Batch116Amount500
	if (! var_1_104) {
		var_1_97 = (var_1_98 - var_1_81);
	} else {
		var_1_97 = ((var_1_57 + var_1_59) + (min ((32 + var_1_81) , var_1_63)));
	}


	// From: Req43Batch116Amount500
	unsigned long int stepLocal_28 = var_1_52;
	if (stepLocal_28 <= var_1_31) {
		var_1_99 = var_1_10;
	} else {
		var_1_99 = var_1_24;
	}


	// From: Req51Batch116Amount500
	if (var_1_95) {
		var_1_108 = var_1_15;
	} else {
		var_1_108 = var_1_17;
	}


	// From: Req53Batch116Amount500
	if (var_1_95) {
		var_1_110 = var_1_58;
	}


	// From: Req10Batch116Amount500
	unsigned long int stepLocal_4 = var_1_89;
	if ((var_1_31 / (var_1_38 - var_1_22)) > stepLocal_4) {
		if (var_1_95) {
			var_1_37 = (min (var_1_23 , last_1_var_1_37));
		} else {
			var_1_37 = ((var_1_39 - (max (var_1_11 , var_1_24))) - var_1_23);
		}
	} else {
		if (var_1_95) {
			var_1_37 = var_1_33;
		} else {
			var_1_37 = var_1_28;
		}
	}


	// From: Req7Batch116Amount500
	if (var_1_11 <= var_1_27) {
		if (((var_1_25 - var_1_22) / (max (var_1_23 , var_1_31))) > (abs (var_1_10))) {
			var_1_30 = ((var_1_29 + var_1_27) - var_1_24);
		} else {
			var_1_30 = (var_1_3 + var_1_28);
		}
	} else {
		if (var_1_41 && ((min (var_1_37 , 0)) < var_1_3)) {
			if (var_1_27 >= var_1_8) {
				var_1_30 = (max ((min (1 , var_1_23)) , var_1_24));
			}
		} else {
			if (var_1_29 > var_1_5) {
				var_1_30 = ((var_1_24 + (var_1_32 - var_1_28)) - (var_1_33 - var_1_29));
			} else {
				var_1_30 = var_1_23;
			}
		}
	}


	// From: Req17Batch116Amount500
	if (var_1_24 >= var_1_5) {
		var_1_53 = (-1 + var_1_54);
	} else {
		if (var_1_1 >= var_1_29) {
			if (((min (var_1_20 , var_1_14)) <= var_1_18) || (var_1_99 <= (64 % var_1_32))) {
				var_1_53 = 32;
			}
		} else {
			var_1_53 = ((64 - var_1_55) - (min ((var_1_56 - var_1_57) , (var_1_58 - var_1_59))));
		}
	}


	// From: Req20Batch116Amount500
	unsigned long int stepLocal_9 = var_1_99;
	if (var_1_89 == stepLocal_9) {
		var_1_62 = (abs (var_1_58));
	} else {
		var_1_62 = (var_1_59 + (var_1_58 - (var_1_63 + var_1_64)));
	}


	// From: Req33Batch116Amount500
	unsigned long int stepLocal_24 = var_1_99;
	if (stepLocal_24 == var_1_28) {
		var_1_87 = var_1_64;
	}


	// From: Req34Batch116Amount500
	if (! var_1_104) {
		var_1_88 = ((min ((max (var_1_34 , 100)) , (var_1_23 - 256))) - (var_1_33 - (min (var_1_97 , var_1_25))));
	}


	// From: Req18Batch116Amount500
	if (var_1_42) {
		if ((var_1_38 - var_1_25) <= (min ((abs (var_1_52)) , var_1_89))) {
			var_1_60 = (max ((min ((min (var_1_28 , var_1_58)) , 0)) , ((min (var_1_23 , var_1_32)) + var_1_27)));
		}
	} else {
		if (var_1_37 >= (var_1_27 + var_1_11)) {
			var_1_60 = (var_1_55 + (max ((max (var_1_25 , 5)) , var_1_35)));
		}
	}


	// From: Req22Batch116Amount500
	signed long int stepLocal_13 = var_1_57 - (max (var_1_27 , var_1_29));
	unsigned char stepLocal_12 = var_1_43;
	signed long int stepLocal_11 = var_1_91;
	if ((var_1_6 & var_1_89) <= stepLocal_13) {
		if (var_1_44) {
			if (stepLocal_12 || var_1_42) {
				if (stepLocal_11 <= var_1_54) {
					var_1_66 = (var_1_55 - var_1_9);
				} else {
					var_1_66 = (min (var_1_60 , var_1_52));
				}
			}
		} else {
			var_1_66 = (var_1_22 + 256);
		}
	} else {
		var_1_66 = (max ((var_1_6 + var_1_48) , var_1_99));
	}


	// From: Req4Batch116Amount500
	if (var_1_66 >= var_1_9) {
		var_1_19 = (var_1_15 - var_1_16);
	} else {
		if (var_1_15 < (var_1_16 - (min (var_1_17 , var_1_20)))) {
			var_1_19 = (var_1_14 + 5.6f);
		} else {
			var_1_19 = (var_1_17 - var_1_15);
		}
	}


	// From: Req23Batch116Amount500
	if (var_1_104) {
		var_1_67 = (min (var_1_14 , (min (var_1_16 , var_1_17))));
	} else {
		if (var_1_39 >= (min (var_1_57 , var_1_60))) {
			if (var_1_95) {
				var_1_67 = (var_1_14 + 256.5f);
			} else {
				var_1_67 = var_1_17;
			}
		} else {
			var_1_67 = var_1_14;
		}
	}


	// From: Req32Batch116Amount500
	if (var_1_44) {
		var_1_86 = ((var_1_58 - var_1_81) - (var_1_57 + var_1_64));
	} else {
		if ((max ((var_1_50 + var_1_31) , var_1_55)) > var_1_37) {
			if (var_1_14 >= var_1_19) {
				var_1_86 = var_1_59;
			}
		} else {
			var_1_86 = (min ((min (var_1_55 , (var_1_56 - 4))) , (abs (var_1_54))));
		}
	}


	// From: Req55Batch116Amount500
	unsigned char stepLocal_29 = var_1_95;
	if (var_1_41 && stepLocal_29) {
		if (var_1_19 == var_1_70) {
			var_1_112 = (min ((var_1_15 + var_1_70) , var_1_71));
		} else {
			var_1_112 = (max (var_1_15 , (var_1_85 - var_1_78)));
		}
	} else {
		var_1_112 = var_1_18;
	}


	// From: Req3Batch116Amount500
	signed long int stepLocal_1 = var_1_40 + var_1_3;
	unsigned long int stepLocal_0 = (var_1_9 + var_1_6) * var_1_48;
	if (var_1_40 >= stepLocal_0) {
		var_1_12 = (var_1_14 + (var_1_15 - (var_1_16 - var_1_17)));
	} else {
		if ((var_1_48 + var_1_66) > stepLocal_1) {
			var_1_12 = (min (((var_1_17 - var_1_16) + var_1_15) , (max (var_1_14 , var_1_18))));
		}
	}


	// From: Req26Batch116Amount500
	signed short int stepLocal_22 = var_1_25;
	signed long int stepLocal_21 = abs (var_1_5);
	signed long int stepLocal_20 = (max (var_1_64 , var_1_60)) ^ (var_1_1 % var_1_75);
	unsigned long int stepLocal_19 = min ((var_1_23 * var_1_24) , (abs (var_1_38)));
	unsigned long int stepLocal_18 = var_1_37;
	unsigned short int stepLocal_17 = var_1_76;
	unsigned char stepLocal_16 = var_1_27;
	unsigned short int stepLocal_15 = var_1_60;
	if (var_1_31 != stepLocal_18) {
		if ((var_1_64 + var_1_60) >= stepLocal_21) {
			if ((var_1_15 / var_1_16) < var_1_12) {
				if (stepLocal_20 > (abs (var_1_54))) {
					var_1_73 = (var_1_25 + var_1_56);
				} else {
					var_1_73 = var_1_57;
				}
			} else {
				var_1_73 = (abs (var_1_76 - var_1_87));
			}
		} else {
			if (var_1_93 >= stepLocal_16) {
				var_1_73 = var_1_75;
			} else {
				var_1_73 = (var_1_76 - (var_1_33 - (var_1_64 + var_1_57)));
			}
		}
	} else {
		if (var_1_43) {
			if (2 >= stepLocal_22) {
				var_1_73 = ((var_1_63 + var_1_52) + (var_1_56 + 5));
			}
		} else {
			if (stepLocal_15 < var_1_21) {
				if (var_1_52 >= stepLocal_17) {
					if (stepLocal_19 != var_1_34) {
						var_1_73 = (max (32 , (min (128 , 1))));
					}
				} else {
					var_1_73 = (var_1_23 + var_1_55);
				}
			} else {
				var_1_73 = (min (var_1_55 , (max (var_1_8 , var_1_23))));
			}
		}
	}


	// From: Req31Batch116Amount500
	unsigned long int stepLocal_23 = var_1_37;
	if (var_1_43) {
		if (var_1_42) {
			if (stepLocal_23 < (var_1_33 | (var_1_73 / var_1_22))) {
				var_1_84 = (var_1_85 - ((var_1_16 + var_1_70) - var_1_17));
			}
		}
	} else {
		if (var_1_78 == var_1_14) {
			var_1_84 = (abs (abs (var_1_17)));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -127);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483647);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1073741823);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 2305843.009213691400e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65535);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= 16382);
	assume_abort_if_not(var_1_23 <= 32766);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 16383);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 16383);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	assume_abort_if_not(var_1_31 != 0);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 8191);
	assume_abort_if_not(var_1_32 <= 16383);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 16383);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967295);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 3221225470);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 1073741823);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -63);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 63);
	assume_abort_if_not(var_1_56 <= 126);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 63);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 32);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 31);
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= 2305843.009213691400e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 255);
	assume_abort_if_not(var_1_75 != 0);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 32767);
	assume_abort_if_not(var_1_76 <= 65534);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427383000e+12F && var_1_78 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= 31);
	assume_abort_if_not(var_1_81 <= 63);
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854766000e+12F && var_1_85 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 1073741824);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 127);
	assume_abort_if_not(var_1_98 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_111 = var_1_111;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_104 || ((abs (var_1_3)) <= last_1_var_1_111)) ? (var_1_1 == ((signed long int) (min (var_1_3 , var_1_5)))) : (var_1_1 == ((signed long int) (var_1_3 + var_1_6)))) && (var_1_7 == ((unsigned short int) ((max (var_1_8 , var_1_9)) + (min (var_1_10 , var_1_11)))))) && ((var_1_40 >= ((var_1_9 + var_1_6) * var_1_48)) ? (var_1_12 == ((double) (var_1_14 + (var_1_15 - (var_1_16 - var_1_17))))) : (((var_1_48 + var_1_66) > (var_1_40 + var_1_3)) ? (var_1_12 == ((double) (min (((var_1_17 - var_1_16) + var_1_15) , (max (var_1_14 , var_1_18)))))) : 1))) && ((var_1_66 >= var_1_9) ? (var_1_19 == ((float) (var_1_15 - var_1_16))) : ((var_1_15 < (var_1_16 - (min (var_1_17 , var_1_20)))) ? (var_1_19 == ((float) (var_1_14 + 5.6f))) : (var_1_19 == ((float) (var_1_17 - var_1_15)))))) && ((var_1_92 >= (abs (var_1_22 - var_1_8))) ? (var_1_21 == ((signed short int) ((var_1_23 - (max (var_1_24 , var_1_25))) - 64))) : 1)) && ((var_1_95 && (var_1_10 < var_1_6)) ? (var_1_26 == ((unsigned char) (var_1_27 + var_1_28))) : (var_1_26 == ((unsigned char) (abs (var_1_29)))))) && ((var_1_11 <= var_1_27) ? ((((var_1_25 - var_1_22) / (max (var_1_23 , var_1_31))) > (abs (var_1_10))) ? (var_1_30 == ((signed short int) ((var_1_29 + var_1_27) - var_1_24))) : (var_1_30 == ((signed short int) (var_1_3 + var_1_28)))) : ((var_1_41 && ((min (var_1_37 , 0)) < var_1_3)) ? ((var_1_27 >= var_1_8) ? (var_1_30 == ((signed short int) (max ((min (1 , var_1_23)) , var_1_24)))) : 1) : ((var_1_29 > var_1_5) ? (var_1_30 == ((signed short int) ((var_1_24 + (var_1_32 - var_1_28)) - (var_1_33 - var_1_29)))) : (var_1_30 == ((signed short int) var_1_23)))))) && (((abs (var_1_31 / 16u)) > var_1_111) ? (var_1_34 == ((signed long int) var_1_33)) : (var_1_34 == ((signed long int) (max (var_1_9 , (max ((var_1_11 + var_1_28) , var_1_27)))))))) && ((var_1_2 && var_1_36) ? (var_1_35 == ((signed short int) var_1_24)) : 1)) && (((var_1_31 / (var_1_38 - var_1_22)) > var_1_89) ? (var_1_95 ? (var_1_37 == ((unsigned long int) (min (var_1_23 , last_1_var_1_37)))) : (var_1_37 == ((unsigned long int) ((var_1_39 - (max (var_1_11 , var_1_24))) - var_1_23)))) : (var_1_95 ? (var_1_37 == ((unsigned long int) var_1_33)) : (var_1_37 == ((unsigned long int) var_1_28))))) && ((var_1_39 > var_1_10) ? (var_1_40 == ((signed long int) (min ((max (var_1_25 , (200 - var_1_29))) , (min (64 , var_1_39)))))) : 1)) && ((var_1_31 > -10) ? (var_1_41 == ((unsigned char) ((last_1_var_1_41 && (var_1_33 < var_1_48)) && ((var_1_10 > var_1_48) && var_1_42)))) : (var_1_41 == ((unsigned char) (var_1_43 && var_1_44))))) && (((var_1_20 - (min (var_1_16 , var_1_15))) <= (var_1_17 - (max (var_1_46 , var_1_47)))) ? (var_1_45 == ((float) var_1_15)) : (var_1_45 == ((float) ((max (64.7f , var_1_15)) - (var_1_16 + var_1_17)))))) && ((! ((last_1_var_1_1 * var_1_33) > var_1_6)) ? (var_1_48 == ((unsigned long int) (var_1_39 - ((max (var_1_49 , var_1_50)) - var_1_28)))) : ((var_1_43 || (var_1_9 > (var_1_11 + last_1_var_1_34))) ? (var_1_48 == ((unsigned long int) (abs (64u)))) : (var_1_48 == ((unsigned long int) (max (var_1_8 , var_1_11))))))) && (((var_1_50 / 2) <= (var_1_40 / (max (8u , 100u)))) ? (var_1_51 == ((float) (max ((abs (var_1_18)) , var_1_14)))) : (var_1_51 == ((float) var_1_17)))) && (var_1_42 ? (var_1_52 == ((unsigned long int) (var_1_27 + (max (var_1_33 , var_1_92))))) : (var_1_52 == ((unsigned long int) (abs (var_1_39)))))) && ((var_1_24 >= var_1_5) ? (var_1_53 == ((signed char) (-1 + var_1_54))) : ((var_1_1 >= var_1_29) ? ((((min (var_1_20 , var_1_14)) <= var_1_18) || (var_1_99 <= (64 % var_1_32))) ? (var_1_53 == ((signed char) 32)) : 1) : (var_1_53 == ((signed char) ((64 - var_1_55) - (min ((var_1_56 - var_1_57) , (var_1_58 - var_1_59))))))))) && (var_1_42 ? (((var_1_38 - var_1_25) <= (min ((abs (var_1_52)) , var_1_89))) ? (var_1_60 == ((unsigned short int) (max ((min ((min (var_1_28 , var_1_58)) , 0)) , ((min (var_1_23 , var_1_32)) + var_1_27))))) : 1) : ((var_1_37 >= (var_1_27 + var_1_11)) ? (var_1_60 == ((unsigned short int) (var_1_55 + (max ((max (var_1_25 , 5)) , var_1_35))))) : 1))) && ((var_1_31 < var_1_48) ? (var_1_61 == ((float) ((min (var_1_15 , var_1_16)) + var_1_14))) : (var_1_61 == ((float) (min ((var_1_15 + var_1_17) , var_1_18)))))) && ((var_1_89 == var_1_99) ? (var_1_62 == ((unsigned char) (abs (var_1_58)))) : (var_1_62 == ((unsigned char) (var_1_59 + (var_1_58 - (var_1_63 + var_1_64))))))) && ((((var_1_59 & var_1_63) + var_1_50) >= var_1_29) ? (var_1_65 == ((double) (abs (32.125)))) : (var_1_65 == ((double) (max (var_1_14 , var_1_18)))))) && (((var_1_6 & var_1_89) <= (var_1_57 - (max (var_1_27 , var_1_29)))) ? (var_1_44 ? ((var_1_43 || var_1_42) ? ((var_1_91 <= var_1_54) ? (var_1_66 == ((signed long int) (var_1_55 - var_1_9))) : (var_1_66 == ((signed long int) (min (var_1_60 , var_1_52))))) : 1) : (var_1_66 == ((signed long int) (var_1_22 + 256)))) : (var_1_66 == ((signed long int) (max ((var_1_6 + var_1_48) , var_1_99)))))) && (var_1_104 ? (var_1_67 == ((float) (min (var_1_14 , (min (var_1_16 , var_1_17)))))) : ((var_1_39 >= (min (var_1_57 , var_1_60))) ? (var_1_95 ? (var_1_67 == ((float) (var_1_14 + 256.5f))) : (var_1_67 == ((float) var_1_17))) : (var_1_67 == ((float) var_1_14))))) && (((var_1_23 * var_1_8) > var_1_40) ? (var_1_43 ? (var_1_68 == ((float) ((min ((min (1.5f , var_1_16)) , var_1_15)) - (var_1_17 + (var_1_70 - var_1_71))))) : (var_1_68 == ((float) (var_1_70 + var_1_71)))) : 1)) && ((var_1_39 >= var_1_55) ? (var_1_72 == ((float) (4.25f - var_1_15))) : 1)) && ((var_1_31 != var_1_37) ? (((var_1_64 + var_1_60) >= (abs (var_1_5))) ? (((var_1_15 / var_1_16) < var_1_12) ? ((((max (var_1_64 , var_1_60)) ^ (var_1_1 % var_1_75)) > (abs (var_1_54))) ? (var_1_73 == ((unsigned short int) (var_1_25 + var_1_56))) : (var_1_73 == ((unsigned short int) var_1_57))) : (var_1_73 == ((unsigned short int) (abs (var_1_76 - var_1_87))))) : ((var_1_93 >= var_1_27) ? (var_1_73 == ((unsigned short int) var_1_75)) : (var_1_73 == ((unsigned short int) (var_1_76 - (var_1_33 - (var_1_64 + var_1_57))))))) : (var_1_43 ? ((2 >= var_1_25) ? (var_1_73 == ((unsigned short int) ((var_1_63 + var_1_52) + (var_1_56 + 5)))) : 1) : ((var_1_60 < var_1_21) ? ((var_1_52 >= var_1_76) ? (((min ((var_1_23 * var_1_24) , (abs (var_1_38)))) != var_1_34) ? (var_1_73 == ((unsigned short int) (max (32 , (min (128 , 1)))))) : 1) : (var_1_73 == ((unsigned short int) (var_1_23 + var_1_55)))) : (var_1_73 == ((unsigned short int) (min (var_1_55 , (max (var_1_8 , var_1_23)))))))))) && ((var_1_5 >= var_1_11) ? (var_1_77 == ((float) (var_1_70 - ((3.5f + var_1_71) + var_1_78)))) : 1)) && (var_1_42 ? (var_1_79 == ((signed char) var_1_54)) : 1)) && ((! (var_1_8 <= (- var_1_58))) ? (var_1_80 == ((signed char) var_1_59)) : (var_1_80 == ((signed char) ((var_1_56 - (var_1_81 - 2)) - (64 - var_1_64)))))) && ((var_1_76 < var_1_24) ? (((var_1_57 != (var_1_49 * 32)) && var_1_104) ? (var_1_82 == ((signed char) var_1_63)) : 1) : 1)) && (var_1_43 ? (var_1_42 ? ((var_1_37 < (var_1_33 | (var_1_73 / var_1_22))) ? (var_1_84 == ((float) (var_1_85 - ((var_1_16 + var_1_70) - var_1_17)))) : 1) : 1) : ((var_1_78 == var_1_14) ? (var_1_84 == ((float) (abs (abs (var_1_17))))) : 1))) && (var_1_44 ? (var_1_86 == ((signed char) ((var_1_58 - var_1_81) - (var_1_57 + var_1_64)))) : (((max ((var_1_50 + var_1_31) , var_1_55)) > var_1_37) ? ((var_1_14 >= var_1_19) ? (var_1_86 == ((signed char) var_1_59)) : 1) : (var_1_86 == ((signed char) (min ((min (var_1_55 , (var_1_56 - 4))) , (abs (var_1_54))))))))) && ((var_1_99 == var_1_28) ? (var_1_87 == ((signed short int) var_1_64)) : 1)) && ((! var_1_104) ? (var_1_88 == ((signed short int) ((min ((max (var_1_34 , 100)) , (var_1_23 - 256))) - (var_1_33 - (min (var_1_97 , var_1_25)))))) : 1)) && ((! (last_1_var_1_60 < (last_1_var_1_40 + last_1_var_1_35))) ? (var_1_89 == ((unsigned long int) (max (var_1_76 , (var_1_39 - (var_1_90 + var_1_22)))))) : (var_1_89 == ((unsigned long int) (min ((min (var_1_8 , var_1_25)) , var_1_33)))))) && (var_1_42 ? (var_1_91 == ((signed long int) ((1833989807 - (min (var_1_57 , var_1_26))) - var_1_1))) : 1)) && (var_1_92 == ((unsigned short int) ((max (var_1_27 , var_1_56)) + var_1_75)))) && (last_1_var_1_95 ? (var_1_93 == ((signed long int) (-32 + (var_1_56 - (1000000000 - var_1_76))))) : ((var_1_44 && last_1_var_1_41) ? (var_1_93 == ((signed long int) (abs (-4)))) : (var_1_93 == ((signed long int) last_1_var_1_73))))) && ((var_1_104 && var_1_43) ? (var_1_94 == ((signed char) (var_1_81 - 32))) : (var_1_94 == ((signed char) (var_1_63 + ((abs (var_1_64)) + (min (-1 , 16)))))))) && (((-16 / var_1_33) <= (~ 2)) ? (var_1_95 == ((unsigned char) (var_1_41 || var_1_43))) : 1)) && ((50u <= (var_1_31 / 2u)) ? (var_1_96 == ((signed char) ((var_1_57 - var_1_81) + var_1_59))) : 1)) && ((! var_1_104) ? (var_1_97 == ((unsigned char) (var_1_98 - var_1_81))) : (var_1_97 == ((unsigned char) ((var_1_57 + var_1_59) + (min ((32 + var_1_81) , var_1_63))))))) && ((var_1_52 <= var_1_31) ? (var_1_99 == ((unsigned long int) var_1_10)) : (var_1_99 == ((unsigned long int) var_1_24)))) && (var_1_101 == ((signed char) var_1_59))) && (var_1_102 == ((signed short int) var_1_28))) && (var_1_42 ? (var_1_103 == ((float) var_1_85)) : (var_1_103 == ((float) var_1_14)))) && (var_1_43 ? (var_1_104 == ((unsigned char) var_1_44)) : (var_1_104 == ((unsigned char) 0)))) && (var_1_42 ? (var_1_105 == ((signed char) var_1_58)) : (var_1_105 == ((signed char) var_1_63)))) && (var_1_41 ? (var_1_106 == ((double) var_1_70)) : 1)) && (var_1_107 == ((unsigned char) 1))) && (var_1_95 ? (var_1_108 == ((float) var_1_15)) : (var_1_108 == ((float) var_1_17)))) && (var_1_42 ? (var_1_109 == ((signed short int) var_1_89)) : 1)) && (var_1_95 ? (var_1_110 == ((signed char) var_1_58)) : 1)) && (var_1_44 ? (var_1_111 == ((unsigned long int) var_1_10)) : (var_1_111 == ((unsigned long int) var_1_93)))) && ((var_1_41 && var_1_95) ? ((var_1_19 == var_1_70) ? (var_1_112 == ((double) (min ((var_1_15 + var_1_70) , var_1_71)))) : (var_1_112 == ((double) (max (var_1_15 , (var_1_85 - var_1_78)))))) : (var_1_112 == ((double) var_1_18)))) && (var_1_113 == ((float) 255.675f))
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

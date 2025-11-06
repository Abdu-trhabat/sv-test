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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch19Amount500.c", 13, "reach_error"); }
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
signed short int var_1_44 = 20398;
double var_1_45 = 4.4;
unsigned short int var_1_46 = 256;
signed char var_1_47 = -16;
signed char var_1_48 = 10;
signed char var_1_49 = 1;
float var_1_50 = 100000000000000.2;
float var_1_52 = 1.2;
unsigned short int var_1_53 = 5;
unsigned short int var_1_54 = 18504;
float var_1_55 = 99.8;
float var_1_57 = 50.5;
unsigned long int var_1_58 = 10;
float var_1_59 = 99999999.725;
signed char var_1_60 = 8;
float var_1_61 = 256.25;
float var_1_63 = 0.0;
signed short int var_1_64 = 64;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 0;
signed char var_1_68 = 5;
unsigned char var_1_69 = 0;
signed char var_1_71 = -16;
unsigned char var_1_72 = 0;
unsigned long int var_1_73 = 2;
unsigned long int var_1_74 = 2028122586;
unsigned char var_1_75 = 0;
unsigned short int var_1_76 = 0;
unsigned char var_1_77 = 2;
signed long int var_1_78 = 50;
signed char var_1_79 = -1;
unsigned short int var_1_80 = 0;
unsigned short int var_1_81 = 62067;
unsigned char var_1_82 = 1;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 0;
signed long int var_1_86 = -1;
unsigned char var_1_87 = 4;
double var_1_88 = 24.5;
unsigned char var_1_89 = 2;
float var_1_90 = 7.4;
float var_1_91 = 25.7;
float var_1_92 = 49.5;
float var_1_93 = 128.7;
float var_1_94 = 99.2;
unsigned char var_1_95 = 128;
unsigned char var_1_96 = 200;
signed short int var_1_97 = 4;
signed short int var_1_98 = 26204;
signed short int var_1_99 = 10;
signed short int var_1_100 = 1;
unsigned short int var_1_101 = 10;
double var_1_102 = 99.2;
unsigned long int var_1_103 = 100;
signed long int var_1_104 = -4;
unsigned char var_1_105 = 16;
signed long int var_1_106 = -10000;
unsigned short int var_1_107 = 32;
float var_1_108 = 49.05;
float var_1_109 = 9999999999.25;
float var_1_110 = 255.85;
unsigned long int var_1_111 = 32;
signed short int var_1_112 = 32;
signed char var_1_113 = -32;
float var_1_114 = 99999999999999.8;
float var_1_115 = 3.375;
double var_1_116 = 0.75;
unsigned long int var_1_117 = 16;
unsigned long int var_1_118 = 256;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_26 = 0;
double last_1_var_1_34 = 255.4;
unsigned long int last_1_var_1_58 = 10;
float last_1_var_1_59 = 99999999.725;
unsigned char last_1_var_1_69 = 0;
unsigned short int last_1_var_1_76 = 0;
unsigned char last_1_var_1_85 = 0;
double last_1_var_1_102 = 99.2;
unsigned long int last_1_var_1_103 = 100;
signed long int last_1_var_1_104 = -4;
float last_1_var_1_109 = 9999999999.25;
float last_1_var_1_114 = 99999999999999.8;
double last_1_var_1_116 = 0.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req52Batch19Amount500
	if (last_1_var_1_85) {
		var_1_111 = last_1_var_1_76;
	}


	// From: Req17Batch19Amount500
	if (((- 1u) * (last_1_var_1_104 * var_1_49)) > var_1_48) {
		if (10.6f > (5.6f + (- last_1_var_1_102))) {
			var_1_55 = (var_1_38 - (max (var_1_52 , var_1_57)));
		}
	} else {
		if ((var_1_43 + var_1_25) <= (last_1_var_1_109 * (last_1_var_1_34 + var_1_24))) {
			if (((~ var_1_8) < var_1_49) && last_1_var_1_26) {
				var_1_55 = (var_1_37 + var_1_52);
			}
		} else {
			var_1_55 = (var_1_38 - var_1_52);
		}
	}


	// From: Req16Batch19Amount500
	unsigned long int stepLocal_8 = max (0u , var_1_48);
	if (5.04f <= var_1_55) {
		if (8u == stepLocal_8) {
			var_1_53 = ((var_1_44 + var_1_54) - var_1_48);
		}
	}


	// From: Req40Batch19Amount500
	if (((var_1_44 % var_1_11) == var_1_53) || var_1_17) {
		var_1_94 = (min (var_1_63 , 99.3f));
	} else {
		var_1_94 = (var_1_24 + (max (var_1_52 , var_1_36)));
	}


	// From: Req2Batch19Amount500
	if ((last_1_var_1_59 * (- last_1_var_1_114)) >= last_1_var_1_116) {
		var_1_12 = (var_1_16 || var_1_17);
	} else {
		if (last_1_var_1_114 >= last_1_var_1_116) {
			var_1_12 = (var_1_18 && var_1_19);
		} else {
			var_1_12 = (var_1_17 || var_1_16);
		}
	}


	// From: Req57Batch19Amount500
	if (var_1_12) {
		var_1_116 = var_1_57;
	} else {
		var_1_116 = var_1_21;
	}


	// From: Req3Batch19Amount500
	signed long int stepLocal_2 = var_1_8 % var_1_11;
	if (stepLocal_2 <= 2) {
		var_1_20 = (min (var_1_21 , var_1_22));
	}


	// From: Req6Batch19Amount500
	var_1_27 = (max (-8 , var_1_10));


	// From: Req10Batch19Amount500
	if ((var_1_36 - (var_1_37 + var_1_40)) >= 8.187) {
		var_1_39 = ((max (3491399024u , var_1_41)) - var_1_11);
	}


	// From: Req14Batch19Amount500
	var_1_47 = (((var_1_48 + var_1_49) + var_1_32) - var_1_31);


	// From: Req18Batch19Amount500
	signed char stepLocal_9 = var_1_30;
	if (stepLocal_9 >= (min (var_1_10 , last_1_var_1_58))) {
		var_1_58 = (min (var_1_7 , var_1_54));
	} else {
		var_1_58 = (min ((var_1_41 - var_1_9) , (min (var_1_31 , var_1_54))));
	}


	// From: Req25Batch19Amount500
	var_1_72 = var_1_18;


	// From: Req29Batch19Amount500
	unsigned char stepLocal_18 = ! var_1_19;
	if (var_1_16 || stepLocal_18) {
		var_1_77 = (var_1_11 - (var_1_30 - var_1_48));
	}


	// From: Req34Batch19Amount500
	var_1_85 = (! var_1_17);


	// From: Req36Batch19Amount500
	var_1_87 = (((var_1_7 + var_1_8) - var_1_49) - (var_1_31 - var_1_48));


	// From: Req37Batch19Amount500
	var_1_88 = (max (var_1_25 , var_1_24));


	// From: Req38Batch19Amount500
	var_1_89 = ((200 - var_1_9) - var_1_48);


	// From: Req44Batch19Amount500
	var_1_102 = var_1_52;


	// From: Req47Batch19Amount500
	var_1_105 = var_1_11;


	// From: Req50Batch19Amount500
	if (var_1_67) {
		var_1_108 = var_1_35;
	}


	// From: Req54Batch19Amount500
	if (var_1_85) {
		var_1_113 = var_1_31;
	}


	// From: Req55Batch19Amount500
	if (var_1_67) {
		var_1_114 = var_1_61;
	}


	// From: Req56Batch19Amount500
	if (var_1_85) {
		var_1_115 = var_1_24;
	} else {
		var_1_115 = var_1_63;
	}


	// From: Req58Batch19Amount500
	if (var_1_92 != (- var_1_52)) {
		var_1_117 = (var_1_39 + var_1_27);
	}


	// From: Req23Batch19Amount500
	if (var_1_17) {
		var_1_69 = (((var_1_57 < var_1_20) && last_1_var_1_69) && ((var_1_8 < var_1_111) && var_1_67));
	}


	// From: Req32Batch19Amount500
	unsigned char stepLocal_22 = var_1_85;
	if (var_1_57 <= var_1_52) {
		if (var_1_12 || stepLocal_22) {
			var_1_80 = var_1_60;
		}
	} else {
		var_1_80 = (var_1_81 - ((abs (var_1_54)) - var_1_31));
	}


	// From: Req15Batch19Amount500
	if ((var_1_7 / var_1_31) != (64 / var_1_11)) {
		if (var_1_80 <= var_1_49) {
			var_1_50 = ((var_1_36 + var_1_37) - ((abs (-9.047183047699651E18f)) - var_1_52));
		}
	}


	// From: Req21Batch19Amount500
	unsigned char stepLocal_14 = var_1_18;
	unsigned long int stepLocal_13 = var_1_39;
	if (stepLocal_14 || var_1_12) {
		if ((max ((var_1_54 / var_1_44) , var_1_9)) > stepLocal_13) {
			var_1_66 = (var_1_12 && var_1_17);
		} else {
			if (var_1_17) {
				var_1_66 = ((var_1_27 < var_1_39) && (var_1_16 && var_1_67));
			} else {
				var_1_66 = 0;
			}
		}
	} else {
		var_1_66 = (! var_1_67);
	}


	// From: Req53Batch19Amount500
	var_1_112 = var_1_80;


	// From: Req7Batch19Amount500
	if (var_1_102 <= 99.6f) {
		var_1_28 = ((max (var_1_9 , var_1_29)) - ((max (var_1_30 , var_1_31)) - var_1_32));
	} else {
		var_1_28 = (var_1_32 + var_1_9);
	}


	// From: Req12Batch19Amount500
	if (var_1_115 < (max (var_1_35 , var_1_21))) {
		var_1_45 = (max (var_1_24 , (var_1_38 - (var_1_35 - var_1_37))));
	}


	// From: Req27Batch19Amount500
	signed long int stepLocal_16 = var_1_11 - var_1_31;
	if (stepLocal_16 >= (var_1_87 + var_1_49)) {
		var_1_75 = (abs (200));
	} else {
		var_1_75 = (var_1_11 - var_1_60);
	}


	// From: Req48Batch19Amount500
	if (var_1_69) {
		var_1_106 = var_1_49;
	}


	// From: Req4Batch19Amount500
	signed long int stepLocal_4 = var_1_106;
	signed long int stepLocal_3 = - (var_1_7 * var_1_9);
	if (stepLocal_3 >= var_1_10) {
		if (var_1_18) {
			if (stepLocal_4 != (~ var_1_8)) {
				var_1_23 = (abs (var_1_21));
			} else {
				var_1_23 = (var_1_24 + var_1_25);
			}
		} else {
			var_1_23 = var_1_25;
		}
	} else {
		var_1_23 = var_1_25;
	}


	// From: Req9Batch19Amount500
	if ((var_1_55 / 1.975f) >= var_1_24) {
		var_1_34 = ((var_1_35 - (var_1_36 - var_1_37)) - var_1_38);
	} else {
		if (var_1_50 >= (abs (var_1_35 - var_1_36))) {
			var_1_34 = (var_1_25 + var_1_24);
		}
	}


	// From: Req49Batch19Amount500
	var_1_107 = var_1_106;


	// From: Req13Batch19Amount500
	if (var_1_23 <= ((var_1_22 + 63.4f) + (- var_1_38))) {
		var_1_46 = (abs (var_1_30));
	} else {
		var_1_46 = (32 + (max (var_1_10 , var_1_44)));
	}


	// From: Req33Batch19Amount500
	unsigned char stepLocal_24 = var_1_11;
	unsigned long int stepLocal_23 = var_1_111;
	if ((var_1_102 * 256.75) <= (var_1_40 - (var_1_37 + var_1_52))) {
		var_1_82 = (var_1_19 && (var_1_12 || var_1_18));
	} else {
		if (var_1_48 <= stepLocal_24) {
			if (-32 >= stepLocal_23) {
				var_1_82 = (var_1_85 && var_1_16);
			} else {
				var_1_82 = ((var_1_19 && var_1_18) && ((var_1_88 > 9.875f) || (var_1_66 || var_1_84)));
			}
		} else {
			if ((max (10.225 , var_1_57)) > (max (var_1_55 , (max (var_1_23 , var_1_40))))) {
				var_1_82 = (! var_1_84);
			}
		}
	}


	// From: Req28Batch19Amount500
	unsigned char stepLocal_17 = var_1_16;
	if (stepLocal_17 || var_1_82) {
		var_1_76 = ((abs (max (var_1_48 , var_1_30))) + (var_1_44 - 5));
	} else {
		var_1_76 = (min (var_1_10 , (min (var_1_111 , (max (var_1_32 , var_1_7))))));
	}


	// From: Req46Batch19Amount500
	if (var_1_82) {
		var_1_104 = var_1_96;
	} else {
		var_1_104 = last_1_var_1_104;
	}


	// From: Req20Batch19Amount500
	signed long int stepLocal_12 = (var_1_75 * var_1_10) ^ var_1_8;
	if (stepLocal_12 > ((var_1_7 + var_1_53) - var_1_54)) {
		var_1_64 = (max (var_1_32 , var_1_104));
	}


	// From: Req30Batch19Amount500
	unsigned char stepLocal_20 = var_1_67 || var_1_18;
	signed char stepLocal_19 = var_1_30;
	if (stepLocal_19 > (var_1_32 - var_1_9)) {
		if (stepLocal_20 && var_1_72) {
			var_1_78 = (min (var_1_112 , var_1_105));
		}
	} else {
		var_1_78 = var_1_64;
	}


	// From: Req11Batch19Amount500
	unsigned short int stepLocal_7 = var_1_107;
	unsigned long int stepLocal_6 = var_1_117;
	if (((var_1_43 - var_1_40) - var_1_37) >= var_1_38) {
		if (var_1_107 > stepLocal_6) {
			var_1_42 = (var_1_11 - var_1_9);
		} else {
			if (stepLocal_7 <= ((var_1_44 - var_1_30) << var_1_11)) {
				var_1_42 = (var_1_32 + var_1_8);
			}
		}
	} else {
		var_1_42 = (max (var_1_10 , var_1_9));
	}


	// From: Req31Batch19Amount500
	unsigned long int stepLocal_21 = var_1_74;
	if (var_1_82) {
		if (stepLocal_21 > var_1_42) {
			var_1_79 = (abs (var_1_48));
		} else {
			var_1_79 = (((max (var_1_31 , var_1_30)) - var_1_49) - var_1_32);
		}
	} else {
		var_1_79 = ((var_1_9 - 10) + var_1_49);
	}


	// From: Req8Batch19Amount500
	unsigned char stepLocal_5 = var_1_7;
	if (stepLocal_5 < var_1_46) {
		var_1_33 = (var_1_31 + var_1_9);
	} else {
		if (var_1_22 >= var_1_94) {
			var_1_33 = (max (var_1_32 , var_1_9));
		} else {
			var_1_33 = var_1_11;
		}
	}


	// From: Req24Batch19Amount500
	if (var_1_82) {
		var_1_71 = (min (var_1_48 , var_1_49));
	}


	// From: Req26Batch19Amount500
	unsigned long int stepLocal_15 = var_1_111;
	if (var_1_108 == var_1_115) {
		if ((var_1_10 | (var_1_49 - var_1_30)) != stepLocal_15) {
			var_1_73 = (4u + (max (var_1_76 , var_1_9)));
		} else {
			var_1_73 = (var_1_76 + (var_1_74 - var_1_49));
		}
	} else {
		var_1_73 = (max ((max (var_1_32 , var_1_60)) , 100u));
	}


	// From: Req39Batch19Amount500
	unsigned char stepLocal_28 = var_1_116 <= var_1_88;
	unsigned char stepLocal_27 = var_1_85;
	if ((var_1_88 <= var_1_102) || stepLocal_27) {
		if (var_1_16) {
			if (var_1_82 || stepLocal_28) {
				var_1_90 = var_1_35;
			} else {
				var_1_90 = (var_1_63 - (var_1_52 + (var_1_36 - var_1_37)));
			}
		} else {
			var_1_90 = ((var_1_37 + var_1_91) + (var_1_92 + var_1_93));
		}
	} else {
		var_1_90 = ((var_1_52 + var_1_37) - var_1_36);
	}


	// From: Req45Batch19Amount500
	if (var_1_72) {
		var_1_103 = last_1_var_1_103;
	} else {
		var_1_103 = var_1_73;
	}


	// From: Req59Batch19Amount500
	if (((var_1_35 / var_1_63) / var_1_43) > var_1_114) {
		var_1_118 = (min (var_1_106 , var_1_103));
	}


	// From: Req5Batch19Amount500
	if (var_1_94 <= var_1_45) {
		if (var_1_25 > var_1_24) {
			if ((max ((var_1_11 % var_1_8) , var_1_78)) < (abs (var_1_7))) {
				var_1_26 = (! var_1_18);
			} else {
				var_1_26 = var_1_18;
			}
		}
	}


	// From: Req51Batch19Amount500
	if (var_1_26) {
		var_1_109 = var_1_110;
	}


	// From: Req19Batch19Amount500
	signed char stepLocal_11 = var_1_79;
	unsigned char stepLocal_10 = var_1_17;
	if (! (var_1_44 >= var_1_30)) {
		if (stepLocal_11 == (var_1_32 - 16)) {
			var_1_59 = (var_1_36 + (9.999999975E7f + var_1_37));
		} else {
			var_1_59 = (var_1_61 + (min (var_1_52 , var_1_37)));
		}
	} else {
		if (var_1_109 >= (var_1_43 * var_1_38)) {
			if ((var_1_88 >= var_1_25) || stepLocal_10) {
				var_1_59 = (var_1_38 - ((min (var_1_63 , var_1_35)) - (3.831488401473271E18f - var_1_37)));
			} else {
				var_1_59 = (var_1_40 - (var_1_52 + var_1_36));
			}
		} else {
			var_1_59 = (abs (var_1_22));
		}
	}


	// From: Req1Batch19Amount500
	unsigned long int stepLocal_1 = var_1_111;
	unsigned char stepLocal_0 = var_1_12;
	if (var_1_66 && stepLocal_0) {
		if (stepLocal_1 <= (max (var_1_73 , var_1_46))) {
			if (var_1_12) {
				var_1_1 = (((var_1_7 + var_1_8) - var_1_9) - var_1_10);
			}
		} else {
			var_1_1 = (var_1_8 + var_1_7);
		}
	} else {
		var_1_1 = ((var_1_11 - var_1_9) - var_1_10);
	}


	// From: Req22Batch19Amount500
	if (var_1_59 != ((var_1_37 - var_1_63) * (var_1_21 / var_1_43))) {
		if (var_1_116 >= var_1_63) {
			var_1_68 = (max (var_1_9 , var_1_31));
		} else {
			var_1_68 = (min (var_1_9 , -4));
		}
	}


	// From: Req41Batch19Amount500
	unsigned char stepLocal_31 = var_1_11;
	signed char stepLocal_30 = var_1_32;
	unsigned long int stepLocal_29 = var_1_103;
	if ((var_1_106 | var_1_7) > stepLocal_31) {
		if (stepLocal_30 == var_1_31) {
			var_1_95 = var_1_49;
		} else {
			var_1_95 = ((min (var_1_11 , var_1_96)) - (var_1_31 - var_1_9));
		}
	} else {
		if (var_1_80 >= stepLocal_29) {
			var_1_95 = (abs (var_1_96 - var_1_7));
		} else {
			var_1_95 = ((var_1_32 + var_1_9) + var_1_60);
		}
	}


	// From: Req43Batch19Amount500
	var_1_101 = ((var_1_44 - var_1_1) + var_1_99);


	// From: Req35Batch19Amount500
	unsigned char stepLocal_26 = var_1_75;
	signed char stepLocal_25 = var_1_48;
	if (stepLocal_26 > var_1_41) {
		if (((- var_1_7) % var_1_8) < stepLocal_25) {
			var_1_86 = var_1_76;
		}
	} else {
		if (var_1_43 > (var_1_38 * var_1_36)) {
			var_1_86 = ((var_1_101 + var_1_8) - var_1_60);
		} else {
			var_1_86 = (max (var_1_104 , (min (var_1_76 , var_1_29))));
		}
	}


	// From: Req42Batch19Amount500
	if (var_1_85) {
		var_1_97 = (((var_1_98 - var_1_7) - var_1_30) - var_1_99);
	} else {
		if (var_1_37 >= var_1_35) {
			var_1_97 = (var_1_96 + (-16 + (var_1_100 + var_1_60)));
		} else {
			if (var_1_63 == var_1_50) {
				var_1_97 = (max ((min (var_1_48 , (max (var_1_86 , var_1_60)))) , var_1_46));
			} else {
				if (var_1_26) {
					var_1_97 = (max (var_1_64 , var_1_100));
				} else {
					var_1_97 = (min ((min ((min (var_1_99 , var_1_118)) , (min (var_1_118 , 64)))) , var_1_64));
				}
			}
		}
	}
}



void updateVariables(void) {
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
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
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
	assume_abort_if_not((var_1_35 >= 4611686.018427383000e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 2305843.009213691400e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691400e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427388000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 4611686.018427388000e+12F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= 16383);
	assume_abort_if_not(var_1_44 <= 32767);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 32);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 31);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 16384);
	assume_abort_if_not(var_1_54 <= 32767);
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 127);
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -461168.6018427383000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427383000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 4611686.018427383000e+12F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854766000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 0);
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 1073741823);
	assume_abort_if_not(var_1_74 <= 2147483647);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 32767);
	assume_abort_if_not(var_1_81 <= 65534);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 1);
	assume_abort_if_not(var_1_84 <= 1);
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= -230584.3009213691400e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 2305843.009213691400e+12F && var_1_91 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_92 >= -230584.3009213691400e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 2305843.009213691400e+12F && var_1_92 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_93 >= -230584.3009213691400e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 2305843.009213691400e+12F && var_1_93 >= 1.0e-20F ));
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 127);
	assume_abort_if_not(var_1_96 <= 254);
	var_1_98 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_98 >= 24574);
	assume_abort_if_not(var_1_98 <= 32766);
	var_1_99 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 32766);
	var_1_100 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_100 >= -4095);
	assume_abort_if_not(var_1_100 <= 4096);
	var_1_110 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_110 >= -922337.2036854766000e+13F && var_1_110 <= -1.0e-20F) || (var_1_110 <= 9223372.036854766000e+12F && var_1_110 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_26 = var_1_26;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_116 = var_1_116;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_66 && var_1_12) ? ((var_1_111 <= (max (var_1_73 , var_1_46))) ? (var_1_12 ? (var_1_1 == ((unsigned char) (((var_1_7 + var_1_8) - var_1_9) - var_1_10))) : 1) : (var_1_1 == ((unsigned char) (var_1_8 + var_1_7)))) : (var_1_1 == ((unsigned char) ((var_1_11 - var_1_9) - var_1_10)))) && (((last_1_var_1_59 * (- last_1_var_1_114)) >= last_1_var_1_116) ? (var_1_12 == ((unsigned char) (var_1_16 || var_1_17))) : ((last_1_var_1_114 >= last_1_var_1_116) ? (var_1_12 == ((unsigned char) (var_1_18 && var_1_19))) : (var_1_12 == ((unsigned char) (var_1_17 || var_1_16)))))) && (((var_1_8 % var_1_11) <= 2) ? (var_1_20 == ((float) (min (var_1_21 , var_1_22)))) : 1)) && (((- (var_1_7 * var_1_9)) >= var_1_10) ? (var_1_18 ? ((var_1_106 != (~ var_1_8)) ? (var_1_23 == ((float) (abs (var_1_21)))) : (var_1_23 == ((float) (var_1_24 + var_1_25)))) : (var_1_23 == ((float) var_1_25))) : (var_1_23 == ((float) var_1_25)))) && ((var_1_94 <= var_1_45) ? ((var_1_25 > var_1_24) ? (((max ((var_1_11 % var_1_8) , var_1_78)) < (abs (var_1_7))) ? (var_1_26 == ((unsigned char) (! var_1_18))) : (var_1_26 == ((unsigned char) var_1_18))) : 1) : 1)) && (var_1_27 == ((signed long int) (max (-8 , var_1_10))))) && ((var_1_102 <= 99.6f) ? (var_1_28 == ((signed char) ((max (var_1_9 , var_1_29)) - ((max (var_1_30 , var_1_31)) - var_1_32)))) : (var_1_28 == ((signed char) (var_1_32 + var_1_9))))) && ((var_1_7 < var_1_46) ? (var_1_33 == ((signed short int) (var_1_31 + var_1_9))) : ((var_1_22 >= var_1_94) ? (var_1_33 == ((signed short int) (max (var_1_32 , var_1_9)))) : (var_1_33 == ((signed short int) var_1_11))))) && (((var_1_55 / 1.975f) >= var_1_24) ? (var_1_34 == ((double) ((var_1_35 - (var_1_36 - var_1_37)) - var_1_38))) : ((var_1_50 >= (abs (var_1_35 - var_1_36))) ? (var_1_34 == ((double) (var_1_25 + var_1_24))) : 1))) && (((var_1_36 - (var_1_37 + var_1_40)) >= 8.187) ? (var_1_39 == ((unsigned long int) ((max (3491399024u , var_1_41)) - var_1_11))) : 1)) && ((((var_1_43 - var_1_40) - var_1_37) >= var_1_38) ? ((var_1_107 > var_1_117) ? (var_1_42 == ((unsigned char) (var_1_11 - var_1_9))) : ((var_1_107 <= ((var_1_44 - var_1_30) << var_1_11)) ? (var_1_42 == ((unsigned char) (var_1_32 + var_1_8))) : 1)) : (var_1_42 == ((unsigned char) (max (var_1_10 , var_1_9)))))) && ((var_1_115 < (max (var_1_35 , var_1_21))) ? (var_1_45 == ((double) (max (var_1_24 , (var_1_38 - (var_1_35 - var_1_37)))))) : 1)) && ((var_1_23 <= ((var_1_22 + 63.4f) + (- var_1_38))) ? (var_1_46 == ((unsigned short int) (abs (var_1_30)))) : (var_1_46 == ((unsigned short int) (32 + (max (var_1_10 , var_1_44))))))) && (var_1_47 == ((signed char) (((var_1_48 + var_1_49) + var_1_32) - var_1_31)))) && (((var_1_7 / var_1_31) != (64 / var_1_11)) ? ((var_1_80 <= var_1_49) ? (var_1_50 == ((float) ((var_1_36 + var_1_37) - ((abs (-9.047183047699651E18f)) - var_1_52)))) : 1) : 1)) && ((5.04f <= var_1_55) ? ((8u == (max (0u , var_1_48))) ? (var_1_53 == ((unsigned short int) ((var_1_44 + var_1_54) - var_1_48))) : 1) : 1)) && ((((- 1u) * (last_1_var_1_104 * var_1_49)) > var_1_48) ? ((10.6f > (5.6f + (- last_1_var_1_102))) ? (var_1_55 == ((float) (var_1_38 - (max (var_1_52 , var_1_57))))) : 1) : (((var_1_43 + var_1_25) <= (last_1_var_1_109 * (last_1_var_1_34 + var_1_24))) ? ((((~ var_1_8) < var_1_49) && last_1_var_1_26) ? (var_1_55 == ((float) (var_1_37 + var_1_52))) : 1) : (var_1_55 == ((float) (var_1_38 - var_1_52)))))) && ((var_1_30 >= (min (var_1_10 , last_1_var_1_58))) ? (var_1_58 == ((unsigned long int) (min (var_1_7 , var_1_54)))) : (var_1_58 == ((unsigned long int) (min ((var_1_41 - var_1_9) , (min (var_1_31 , var_1_54)))))))) && ((! (var_1_44 >= var_1_30)) ? ((var_1_79 == (var_1_32 - 16)) ? (var_1_59 == ((float) (var_1_36 + (9.999999975E7f + var_1_37)))) : (var_1_59 == ((float) (var_1_61 + (min (var_1_52 , var_1_37)))))) : ((var_1_109 >= (var_1_43 * var_1_38)) ? (((var_1_88 >= var_1_25) || var_1_17) ? (var_1_59 == ((float) (var_1_38 - ((min (var_1_63 , var_1_35)) - (3.831488401473271E18f - var_1_37))))) : (var_1_59 == ((float) (var_1_40 - (var_1_52 + var_1_36))))) : (var_1_59 == ((float) (abs (var_1_22))))))) && ((((var_1_75 * var_1_10) ^ var_1_8) > ((var_1_7 + var_1_53) - var_1_54)) ? (var_1_64 == ((signed short int) (max (var_1_32 , var_1_104)))) : 1)) && ((var_1_18 || var_1_12) ? (((max ((var_1_54 / var_1_44) , var_1_9)) > var_1_39) ? (var_1_66 == ((unsigned char) (var_1_12 && var_1_17))) : (var_1_17 ? (var_1_66 == ((unsigned char) ((var_1_27 < var_1_39) && (var_1_16 && var_1_67)))) : (var_1_66 == ((unsigned char) 0)))) : (var_1_66 == ((unsigned char) (! var_1_67))))) && ((var_1_59 != ((var_1_37 - var_1_63) * (var_1_21 / var_1_43))) ? ((var_1_116 >= var_1_63) ? (var_1_68 == ((signed char) (max (var_1_9 , var_1_31)))) : (var_1_68 == ((signed char) (min (var_1_9 , -4))))) : 1)) && (var_1_17 ? (var_1_69 == ((unsigned char) (((var_1_57 < var_1_20) && last_1_var_1_69) && ((var_1_8 < var_1_111) && var_1_67)))) : 1)) && (var_1_82 ? (var_1_71 == ((signed char) (min (var_1_48 , var_1_49)))) : 1)) && (var_1_72 == ((unsigned char) var_1_18))) && ((var_1_108 == var_1_115) ? (((var_1_10 | (var_1_49 - var_1_30)) != var_1_111) ? (var_1_73 == ((unsigned long int) (4u + (max (var_1_76 , var_1_9))))) : (var_1_73 == ((unsigned long int) (var_1_76 + (var_1_74 - var_1_49))))) : (var_1_73 == ((unsigned long int) (max ((max (var_1_32 , var_1_60)) , 100u)))))) && (((var_1_11 - var_1_31) >= (var_1_87 + var_1_49)) ? (var_1_75 == ((unsigned char) (abs (200)))) : (var_1_75 == ((unsigned char) (var_1_11 - var_1_60))))) && ((var_1_16 || var_1_82) ? (var_1_76 == ((unsigned short int) ((abs (max (var_1_48 , var_1_30))) + (var_1_44 - 5)))) : (var_1_76 == ((unsigned short int) (min (var_1_10 , (min (var_1_111 , (max (var_1_32 , var_1_7)))))))))) && ((var_1_16 || (! var_1_19)) ? (var_1_77 == ((unsigned char) (var_1_11 - (var_1_30 - var_1_48)))) : 1)) && ((var_1_30 > (var_1_32 - var_1_9)) ? (((var_1_67 || var_1_18) && var_1_72) ? (var_1_78 == ((signed long int) (min (var_1_112 , var_1_105)))) : 1) : (var_1_78 == ((signed long int) var_1_64)))) && (var_1_82 ? ((var_1_74 > var_1_42) ? (var_1_79 == ((signed char) (abs (var_1_48)))) : (var_1_79 == ((signed char) (((max (var_1_31 , var_1_30)) - var_1_49) - var_1_32)))) : (var_1_79 == ((signed char) ((var_1_9 - 10) + var_1_49))))) && ((var_1_57 <= var_1_52) ? ((var_1_12 || var_1_85) ? (var_1_80 == ((unsigned short int) var_1_60)) : 1) : (var_1_80 == ((unsigned short int) (var_1_81 - ((abs (var_1_54)) - var_1_31)))))) && (((var_1_102 * 256.75) <= (var_1_40 - (var_1_37 + var_1_52))) ? (var_1_82 == ((unsigned char) (var_1_19 && (var_1_12 || var_1_18)))) : ((var_1_48 <= var_1_11) ? ((-32 >= var_1_111) ? (var_1_82 == ((unsigned char) (var_1_85 && var_1_16))) : (var_1_82 == ((unsigned char) ((var_1_19 && var_1_18) && ((var_1_88 > 9.875f) || (var_1_66 || var_1_84)))))) : (((max (10.225 , var_1_57)) > (max (var_1_55 , (max (var_1_23 , var_1_40))))) ? (var_1_82 == ((unsigned char) (! var_1_84))) : 1)))) && (var_1_85 == ((unsigned char) (! var_1_17)))) && ((var_1_75 > var_1_41) ? ((((- var_1_7) % var_1_8) < var_1_48) ? (var_1_86 == ((signed long int) var_1_76)) : 1) : ((var_1_43 > (var_1_38 * var_1_36)) ? (var_1_86 == ((signed long int) ((var_1_101 + var_1_8) - var_1_60))) : (var_1_86 == ((signed long int) (max (var_1_104 , (min (var_1_76 , var_1_29))))))))) && (var_1_87 == ((unsigned char) (((var_1_7 + var_1_8) - var_1_49) - (var_1_31 - var_1_48))))) && (var_1_88 == ((double) (max (var_1_25 , var_1_24))))) && (var_1_89 == ((unsigned char) ((200 - var_1_9) - var_1_48)))) && (((var_1_88 <= var_1_102) || var_1_85) ? (var_1_16 ? ((var_1_82 || (var_1_116 <= var_1_88)) ? (var_1_90 == ((float) var_1_35)) : (var_1_90 == ((float) (var_1_63 - (var_1_52 + (var_1_36 - var_1_37)))))) : (var_1_90 == ((float) ((var_1_37 + var_1_91) + (var_1_92 + var_1_93))))) : (var_1_90 == ((float) ((var_1_52 + var_1_37) - var_1_36))))) && ((((var_1_44 % var_1_11) == var_1_53) || var_1_17) ? (var_1_94 == ((float) (min (var_1_63 , 99.3f)))) : (var_1_94 == ((float) (var_1_24 + (max (var_1_52 , var_1_36))))))) && (((var_1_106 | var_1_7) > var_1_11) ? ((var_1_32 == var_1_31) ? (var_1_95 == ((unsigned char) var_1_49)) : (var_1_95 == ((unsigned char) ((min (var_1_11 , var_1_96)) - (var_1_31 - var_1_9))))) : ((var_1_80 >= var_1_103) ? (var_1_95 == ((unsigned char) (abs (var_1_96 - var_1_7)))) : (var_1_95 == ((unsigned char) ((var_1_32 + var_1_9) + var_1_60)))))) && (var_1_85 ? (var_1_97 == ((signed short int) (((var_1_98 - var_1_7) - var_1_30) - var_1_99))) : ((var_1_37 >= var_1_35) ? (var_1_97 == ((signed short int) (var_1_96 + (-16 + (var_1_100 + var_1_60))))) : ((var_1_63 == var_1_50) ? (var_1_97 == ((signed short int) (max ((min (var_1_48 , (max (var_1_86 , var_1_60)))) , var_1_46)))) : (var_1_26 ? (var_1_97 == ((signed short int) (max (var_1_64 , var_1_100)))) : (var_1_97 == ((signed short int) (min ((min ((min (var_1_99 , var_1_118)) , (min (var_1_118 , 64)))) , var_1_64))))))))) && (var_1_101 == ((unsigned short int) ((var_1_44 - var_1_1) + var_1_99)))) && (var_1_102 == ((double) var_1_52))) && (var_1_72 ? (var_1_103 == ((unsigned long int) last_1_var_1_103)) : (var_1_103 == ((unsigned long int) var_1_73)))) && (var_1_82 ? (var_1_104 == ((signed long int) var_1_96)) : (var_1_104 == ((signed long int) last_1_var_1_104)))) && (var_1_105 == ((unsigned char) var_1_11))) && (var_1_69 ? (var_1_106 == ((signed long int) var_1_49)) : 1)) && (var_1_107 == ((unsigned short int) var_1_106))) && (var_1_67 ? (var_1_108 == ((float) var_1_35)) : 1)) && (var_1_26 ? (var_1_109 == ((float) var_1_110)) : 1)) && (last_1_var_1_85 ? (var_1_111 == ((unsigned long int) last_1_var_1_76)) : 1)) && (var_1_112 == ((signed short int) var_1_80))) && (var_1_85 ? (var_1_113 == ((signed char) var_1_31)) : 1)) && (var_1_67 ? (var_1_114 == ((float) var_1_61)) : 1)) && (var_1_85 ? (var_1_115 == ((float) var_1_24)) : (var_1_115 == ((float) var_1_63)))) && (var_1_12 ? (var_1_116 == ((double) var_1_57)) : (var_1_116 == ((double) var_1_21)))) && ((var_1_92 != (- var_1_52)) ? (var_1_117 == ((unsigned long int) (var_1_39 + var_1_27))) : 1)) && ((((var_1_35 / var_1_63) / var_1_43) > var_1_114) ? (var_1_118 == ((unsigned long int) (min (var_1_106 , var_1_103)))) : 1)
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

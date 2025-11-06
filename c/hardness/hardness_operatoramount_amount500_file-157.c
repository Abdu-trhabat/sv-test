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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch157Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = 10;
double var_1_2 = 3.75;
double var_1_3 = 0.6;
signed short int var_1_4 = 32;
signed short int var_1_5 = 4;
signed short int var_1_6 = 128;
signed short int var_1_7 = -8;
signed short int var_1_8 = 4;
signed short int var_1_9 = -128;
signed short int var_1_10 = 256;
signed long int var_1_12 = -2;
signed short int var_1_13 = 16771;
unsigned char var_1_14 = 64;
double var_1_16 = 10000000000000.2;
unsigned char var_1_17 = 4;
unsigned char var_1_18 = 16;
unsigned char var_1_19 = 100;
unsigned char var_1_20 = 2;
signed long int var_1_21 = -50;
unsigned short int var_1_22 = 128;
unsigned short int var_1_23 = 34467;
double var_1_24 = 7.5;
double var_1_25 = 15.5;
double var_1_26 = 1.2;
signed char var_1_27 = -16;
signed char var_1_28 = -16;
unsigned char var_1_29 = 2;
unsigned char var_1_31 = 8;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 2;
unsigned char var_1_34 = 0;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned long int var_1_41 = 1000000000;
unsigned long int var_1_42 = 4256634838;
signed long int var_1_43 = 100;
unsigned long int var_1_44 = 1000;
signed char var_1_45 = 16;
unsigned char var_1_46 = 4;
float var_1_47 = 499.5;
unsigned long int var_1_48 = 256;
signed short int var_1_49 = 2;
unsigned char var_1_50 = 2;
unsigned char var_1_51 = 200;
double var_1_52 = 49.4;
signed long int var_1_53 = -2;
signed long int var_1_54 = 2;
signed long int var_1_55 = 1;
float var_1_56 = 32.75;
float var_1_57 = 127.09;
float var_1_58 = 0.25;
float var_1_59 = 31.2;
float var_1_60 = 10.8;
signed short int var_1_61 = -64;
double var_1_62 = 0.0;
double var_1_63 = 99999999999999.2;
signed short int var_1_64 = 10000;
signed short int var_1_65 = -5;
float var_1_66 = -0.7;
float var_1_67 = 0.0;
float var_1_68 = 0.0;
float var_1_69 = 63.6;
float var_1_70 = 5.65;
float var_1_71 = 0.8;
float var_1_72 = 2.4;
signed long int var_1_73 = 16;
signed long int var_1_74 = -8;
float var_1_75 = 2.3;
unsigned short int var_1_76 = 4;
unsigned short int var_1_77 = 100;
signed char var_1_78 = 10;
signed char var_1_79 = -25;
float var_1_80 = 3.8;
unsigned char var_1_81 = 100;
unsigned char var_1_82 = 128;
unsigned char var_1_83 = 0;
unsigned long int var_1_84 = 2;
unsigned long int var_1_85 = 2798894281;
unsigned char var_1_86 = 25;
unsigned char var_1_88 = 32;
signed long int var_1_89 = -200;
unsigned long int var_1_90 = 0;
unsigned char var_1_91 = 4;
float var_1_92 = 7.5;
float var_1_93 = 255.7;
unsigned char var_1_94 = 1;
unsigned long int var_1_95 = 25;
unsigned long int var_1_96 = 2;
signed char var_1_97 = 8;
unsigned long int var_1_98 = 32;
float var_1_99 = 8.9;
signed long int var_1_100 = -25;
signed short int var_1_101 = 256;
signed short int var_1_102 = 1;
signed long int var_1_103 = -1;
unsigned short int var_1_104 = 25;
float var_1_105 = 127.75;
unsigned short int var_1_106 = 4;
unsigned char var_1_107 = 1;
unsigned char var_1_108 = 1;
double var_1_109 = 31.2;
unsigned short int var_1_110 = 0;
unsigned short int var_1_111 = 32;
signed long int var_1_112 = 2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_34 = 0;
signed long int last_1_var_1_43 = 100;
signed short int last_1_var_1_49 = 2;
signed short int last_1_var_1_61 = -64;
unsigned char last_1_var_1_83 = 0;
unsigned short int last_1_var_1_106 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req40Batch157Amount500
	if (last_1_var_1_83) {
		var_1_95 = 10u;
	} else {
		var_1_95 = var_1_82;
	}


	// From: Req7Batch157Amount500
	var_1_22 = (var_1_23 - var_1_95);


	// From: Req36Batch157Amount500
	unsigned long int stepLocal_23 = var_1_95 / var_1_32;
	if (stepLocal_23 == var_1_45) {
		var_1_89 = (max (((var_1_32 - 2) + var_1_33) , var_1_13));
	} else {
		var_1_89 = ((min ((var_1_6 + var_1_79) , var_1_23)) + var_1_32);
	}


	// From: Req1Batch157Amount500
	if (var_1_2 < var_1_3) {
		if (var_1_3 <= var_1_2) {
			var_1_1 = ((max (10 , var_1_4)) - var_1_5);
		} else {
			var_1_1 = (max (var_1_5 , (var_1_4 - var_1_6)));
		}
	} else {
		var_1_1 = (min ((max (var_1_6 , var_1_4)) , (max ((var_1_7 + var_1_8) , (min (var_1_5 , var_1_9))))));
	}


	// From: Req3Batch157Amount500
	if (var_1_5 > ((var_1_13 - 4) - var_1_6)) {
		var_1_12 = (var_1_4 - var_1_13);
	} else {
		var_1_12 = ((var_1_6 - var_1_13) + var_1_9);
	}


	// From: Req5Batch157Amount500
	signed long int stepLocal_1 = var_1_89;
	if (var_1_5 > stepLocal_1) {
		var_1_19 = (var_1_20 + 25);
	} else {
		var_1_19 = var_1_18;
	}


	// From: Req16Batch157Amount500
	var_1_47 = (max (var_1_26 , var_1_25));


	// From: Req24Batch157Amount500
	if (var_1_38) {
		var_1_66 = ((max (var_1_63 , var_1_57)) - (var_1_67 - (var_1_68 - var_1_69)));
	}


	// From: Req27Batch157Amount500
	if (var_1_38) {
		var_1_75 = (abs (var_1_57));
	} else {
		var_1_75 = ((var_1_67 - (2.7867463553049503E18f - var_1_69)) - (7.305883381595552E18f - var_1_72));
	}


	// From: Req29Batch157Amount500
	signed long int stepLocal_16 = -64 + var_1_89;
	if (stepLocal_16 > (var_1_18 | var_1_77)) {
		var_1_78 = (min (var_1_33 , (var_1_45 + var_1_79)));
	}


	// From: Req39Batch157Amount500
	var_1_94 = var_1_40;


	// From: Req41Batch157Amount500
	if (var_1_94) {
		var_1_96 = var_1_18;
	} else {
		var_1_96 = var_1_51;
	}


	// From: Req42Batch157Amount500
	if (var_1_39) {
		var_1_97 = var_1_79;
	} else {
		var_1_97 = var_1_45;
	}


	// From: Req43Batch157Amount500
	if (var_1_36) {
		var_1_98 = var_1_6;
	} else {
		var_1_98 = 2u;
	}


	// From: Req44Batch157Amount500
	var_1_99 = var_1_68;


	// From: Req45Batch157Amount500
	if (var_1_38) {
		var_1_100 = var_1_12;
	}


	// From: Req46Batch157Amount500
	var_1_101 = var_1_51;


	// From: Req47Batch157Amount500
	if (var_1_94) {
		var_1_102 = var_1_17;
	} else {
		var_1_102 = var_1_6;
	}


	// From: Req48Batch157Amount500
	if (var_1_37) {
		var_1_103 = var_1_28;
	}


	// From: Req50Batch157Amount500
	var_1_105 = 10000.5f;


	// From: Req51Batch157Amount500
	var_1_106 = last_1_var_1_106;


	// From: Req52Batch157Amount500
	if (var_1_94) {
		var_1_107 = var_1_108;
	}


	// From: Req53Batch157Amount500
	if (var_1_107) {
		var_1_109 = var_1_68;
	}


	// From: Req54Batch157Amount500
	if ((min (var_1_69 , var_1_58)) > var_1_68) {
		var_1_110 = (min (var_1_33 , var_1_111));
	} else {
		if (((abs (var_1_99)) * var_1_72) == var_1_47) {
			var_1_110 = var_1_31;
		}
	}


	// From: Req55Batch157Amount500
	var_1_112 = var_1_64;


	// From: Req37Batch157Amount500
	if (((var_1_32 - var_1_45) >> var_1_91) <= (abs (var_1_82 - var_1_18))) {
		if (var_1_71 < ((- var_1_109) / (min (var_1_16 , var_1_92)))) {
			var_1_90 = (((var_1_95 + var_1_23) + var_1_1) + var_1_82);
		}
	}


	// From: Req9Batch157Amount500
	if ((var_1_22 + var_1_5) < var_1_12) {
		var_1_27 = -25;
	} else {
		var_1_27 = (abs (var_1_28));
	}


	// From: Req2Batch157Amount500
	signed short int stepLocal_0 = var_1_7;
	if (var_1_107) {
		var_1_10 = (abs (var_1_6));
	} else {
		if (16 < stepLocal_0) {
			var_1_10 = var_1_6;
		}
	}


	// From: Req12Batch157Amount500
	if ((var_1_26 - var_1_25) > var_1_109) {
		var_1_41 = (var_1_42 - var_1_18);
	} else {
		var_1_41 = var_1_6;
	}


	// From: Req15Batch157Amount500
	unsigned long int stepLocal_7 = var_1_41 / var_1_45;
	if (stepLocal_7 != var_1_17) {
		var_1_46 = (min (var_1_33 , (max (var_1_18 , var_1_45))));
	} else {
		var_1_46 = (abs (var_1_45));
	}


	// From: Req17Batch157Amount500
	unsigned long int stepLocal_8 = var_1_42;
	if (stepLocal_8 < var_1_32) {
		var_1_48 = (max (var_1_112 , var_1_32));
	}


	// From: Req28Batch157Amount500
	unsigned char stepLocal_15 = var_1_37;
	if (var_1_36 || stepLocal_15) {
		if (var_1_109 < var_1_72) {
			var_1_76 = (abs (var_1_18 + (abs (var_1_77))));
		} else {
			var_1_76 = (abs (var_1_23));
		}
	} else {
		var_1_76 = (var_1_23 - var_1_103);
	}


	// From: Req30Batch157Amount500
	signed long int stepLocal_17 = var_1_74;
	if (stepLocal_17 > (max (var_1_112 , var_1_12))) {
		var_1_80 = (abs (var_1_26));
	}


	// From: Req31Batch157Amount500
	unsigned char stepLocal_20 = var_1_40 && var_1_107;
	signed long int stepLocal_19 = - (var_1_18 ^ 2);
	unsigned char stepLocal_18 = 1 > 4;
	if (stepLocal_19 != (min ((var_1_32 / var_1_13) , (var_1_23 + var_1_96)))) {
		if (stepLocal_20 && ((var_1_60 / var_1_68) < var_1_59)) {
			var_1_81 = ((max (var_1_51 , var_1_82)) - var_1_31);
		} else {
			if (stepLocal_18 && var_1_39) {
				var_1_81 = var_1_32;
			} else {
				var_1_81 = (min (var_1_51 , (max (var_1_31 , (var_1_33 + var_1_45)))));
			}
		}
	} else {
		var_1_81 = var_1_20;
	}


	// From: Req33Batch157Amount500
	if (var_1_19 >= (min (var_1_96 , var_1_31))) {
		var_1_84 = (max ((var_1_10 + var_1_82) , (var_1_85 - var_1_64)));
	}


	// From: Req49Batch157Amount500
	if (var_1_37) {
		var_1_104 = var_1_90;
	} else {
		var_1_104 = var_1_51;
	}


	// From: Req8Batch157Amount500
	if ((var_1_90 & var_1_10) >= var_1_6) {
		var_1_24 = (var_1_25 - var_1_26);
	} else {
		var_1_24 = var_1_26;
	}


	// From: Req14Batch157Amount500
	signed long int stepLocal_6 = var_1_76 * var_1_27;
	signed long int stepLocal_5 = (min (var_1_20 , var_1_32)) << (var_1_45 - 1);
	signed long int stepLocal_4 = var_1_45 * var_1_89;
	unsigned char stepLocal_3 = var_1_38;
	if (stepLocal_5 >= var_1_8) {
		if (var_1_37) {
			if (stepLocal_4 < var_1_7) {
				if (var_1_25 <= var_1_24) {
					var_1_44 = var_1_76;
				}
			} else {
				var_1_44 = (abs (min (var_1_5 , var_1_42)));
			}
		} else {
			var_1_44 = var_1_89;
		}
	} else {
		if (stepLocal_6 <= var_1_90) {
			if ((var_1_6 <= (var_1_18 - var_1_5)) && stepLocal_3) {
				var_1_44 = (abs (var_1_20));
			} else {
				var_1_44 = (var_1_18 + 256u);
			}
		}
	}


	// From: Req32Batch157Amount500
	unsigned long int stepLocal_22 = var_1_41;
	unsigned char stepLocal_21 = var_1_102 <= var_1_44;
	if (stepLocal_21 && var_1_40) {
		if (var_1_24 >= var_1_109) {
			if (((var_1_13 - var_1_17) >> var_1_45) < stepLocal_22) {
				var_1_83 = (! var_1_39);
			}
		} else {
			var_1_83 = ((! var_1_37) || (! var_1_39));
		}
	} else {
		var_1_83 = (! (var_1_36 && var_1_38));
	}


	// From: Req4Batch157Amount500
	if (var_1_24 < ((min (var_1_24 , var_1_109)) / var_1_16)) {
		var_1_14 = var_1_17;
	} else {
		var_1_14 = (max ((abs (var_1_17)) , var_1_18));
	}


	// From: Req6Batch157Amount500
	if (var_1_83) {
		var_1_21 = (25 + (var_1_20 - var_1_14));
	} else {
		var_1_21 = ((min (var_1_4 , 2)) - (abs (var_1_9)));
	}


	// From: Req18Batch157Amount500
	unsigned char stepLocal_9 = var_1_83;
	if (stepLocal_9 && (var_1_12 <= (var_1_22 - var_1_31))) {
		var_1_49 = (max (var_1_20 , (min ((var_1_17 - last_1_var_1_49) , var_1_18))));
	} else {
		var_1_49 = ((min (var_1_31 , var_1_17)) - var_1_20);
	}


	// From: Req20Batch157Amount500
	if ((var_1_24 + (var_1_24 + var_1_109)) > (var_1_25 + var_1_80)) {
		var_1_53 = (var_1_112 + var_1_28);
	} else {
		var_1_53 = (var_1_18 - var_1_20);
	}


	// From: Req21Batch157Amount500
	signed long int stepLocal_11 = (max (var_1_23 , 65477)) - var_1_45;
	unsigned char stepLocal_10 = var_1_83 || var_1_107;
	if (stepLocal_11 < var_1_33) {
		if (stepLocal_10 || ((max (var_1_13 , var_1_31)) > var_1_53)) {
			var_1_54 = (max (var_1_8 , var_1_33));
		} else {
			var_1_54 = (var_1_23 - (var_1_6 + var_1_5));
		}
	} else {
		if (! var_1_39) {
			var_1_54 = (var_1_45 - (64 + var_1_55));
		} else {
			var_1_54 = (var_1_4 - var_1_17);
		}
	}


	// From: Req13Batch157Amount500
	signed long int stepLocal_2 = var_1_53;
	if (stepLocal_2 <= var_1_42) {
		var_1_43 = (min ((max (var_1_31 , var_1_17)) , (max ((last_1_var_1_43 + var_1_4) , (var_1_8 + var_1_18)))));
	} else {
		var_1_43 = (var_1_53 + -5);
	}


	// From: Req11Batch157Amount500
	if ((var_1_20 - (max (var_1_33 , var_1_96))) <= (var_1_43 * var_1_8)) {
		if (var_1_107 || (last_1_var_1_34 || var_1_107)) {
			var_1_34 = (! (var_1_36 && (var_1_37 && var_1_38)));
		} else {
			var_1_34 = (! (var_1_39 || var_1_40));
		}
	} else {
		if (var_1_24 <= (max (var_1_109 , var_1_16))) {
			var_1_34 = (var_1_107 && (var_1_36 && (var_1_39 && var_1_40)));
		} else {
			var_1_34 = (! var_1_37);
		}
	}


	// From: Req22Batch157Amount500
	if ((var_1_36 || var_1_34) && var_1_39) {
		if ((var_1_90 / (max (var_1_51 , var_1_32))) == var_1_98) {
			var_1_56 = var_1_26;
		} else {
			var_1_56 = (max (((max (var_1_26 , var_1_25)) - (max (var_1_57 , var_1_58))) , var_1_59));
		}
	} else {
		if (((min (var_1_52 , var_1_2)) / var_1_16) >= var_1_24) {
			var_1_56 = (min ((abs (var_1_58)) , (var_1_60 + 128.8f)));
		} else {
			if (var_1_21 > 100) {
				var_1_56 = (min (7.875f , var_1_26));
			} else {
				var_1_56 = (min (var_1_57 , var_1_25));
			}
		}
	}


	// From: Req34Batch157Amount500
	if (var_1_36) {
		if ((- var_1_68) > (var_1_56 / var_1_16)) {
			var_1_86 = (max ((max (var_1_82 , (var_1_51 - var_1_33))) , var_1_31));
		} else {
			var_1_86 = (var_1_32 + var_1_45);
		}
	}


	// From: Req35Batch157Amount500
	if (var_1_48 >= (min (32 , (var_1_74 + var_1_101)))) {
		if ((var_1_82 - (var_1_33 + var_1_45)) < var_1_86) {
			var_1_88 = (var_1_82 - var_1_20);
		} else {
			var_1_88 = (abs (var_1_32));
		}
	}


	// From: Req38Batch157Amount500
	unsigned char stepLocal_24 = var_1_107;
	if (stepLocal_24 && (var_1_44 <= var_1_54)) {
		if (var_1_107) {
			if (var_1_34) {
				var_1_93 = var_1_67;
			}
		}
	}


	// From: Req10Batch157Amount500
	if (var_1_107) {
		var_1_29 = (min (var_1_20 , (min (var_1_17 , var_1_18))));
	} else {
		if ((- var_1_16) != var_1_109) {
			if (var_1_34) {
				var_1_29 = (var_1_20 + var_1_31);
			} else {
				var_1_29 = var_1_18;
			}
		} else {
			var_1_29 = ((var_1_32 - var_1_33) + 64);
		}
	}


	// From: Req19Batch157Amount500
	if (var_1_112 < var_1_76) {
		var_1_50 = (max (((var_1_51 - var_1_33) - (var_1_32 - var_1_45)) , (max (var_1_31 , (min (var_1_17 , var_1_20))))));
	} else {
		if ((var_1_96 * (min (var_1_13 , var_1_90))) != var_1_31) {
			if ((- var_1_24) > (max (var_1_16 , var_1_56))) {
				var_1_50 = (var_1_51 - 25);
			}
		}
	}


	// From: Req25Batch157Amount500
	unsigned char stepLocal_12 = var_1_12 <= var_1_50;
	if (var_1_40) {
		var_1_70 = ((var_1_69 - var_1_68) + var_1_60);
	} else {
		if ((var_1_96 >= var_1_18) && stepLocal_12) {
			if (var_1_62 <= var_1_109) {
				var_1_70 = (var_1_71 + ((9.875f + var_1_69) - var_1_72));
			} else {
				var_1_70 = (min (var_1_69 , var_1_58));
			}
		}
	}


	// From: Req26Batch157Amount500
	unsigned char stepLocal_14 = var_1_6 >= var_1_110;
	unsigned short int stepLocal_13 = var_1_23;
	if (! var_1_40) {
		var_1_73 = (min (var_1_49 , var_1_88));
	} else {
		if (stepLocal_14 || var_1_94) {
			if (var_1_31 <= stepLocal_13) {
				if (var_1_58 > (50.4f * var_1_105)) {
					var_1_73 = -2;
				} else {
					var_1_73 = ((var_1_10 + var_1_9) + (min (var_1_49 , var_1_4)));
				}
			} else {
				var_1_73 = ((max (var_1_7 , -10)) + (var_1_31 + var_1_17));
			}
		} else {
			var_1_73 = (var_1_6 + (min (var_1_33 , var_1_74)));
		}
	}


	// From: Req23Batch157Amount500
	if (((var_1_62 - var_1_63) - var_1_25) >= var_1_70) {
		if (var_1_94) {
			var_1_61 = (((var_1_44 + last_1_var_1_61) + var_1_49) - (17873 - (var_1_64 - var_1_32)));
		} else {
			if (var_1_5 >= var_1_84) {
				var_1_61 = ((min (var_1_45 , var_1_20)) - (var_1_44 + (var_1_49 + var_1_32)));
			} else {
				var_1_61 = (max ((max ((min (var_1_44 , var_1_4)) , (var_1_33 - var_1_31))) , var_1_9));
			}
		}
	} else {
		var_1_61 = ((max (var_1_65 , var_1_7)) + (max ((max (var_1_89 , var_1_49)) , 32)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -16383);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 16383);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(var_1_16 != 0.0F);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -126);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 63);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 12);
	assume_abort_if_not(var_1_45 <= 24);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 190);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 1073741823);
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -922337.2036854766000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -461168.6018427383000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 4611686.018427388000e+12F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427388000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_64 >= 8191);
	assume_abort_if_not(var_1_64 <= 16383);
	var_1_65 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_65 >= -16383);
	assume_abort_if_not(var_1_65 <= 16383);
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= 4611686.018427383000e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854766000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= 2305843.009213691400e+12F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 4611686.018427383000e+12F && var_1_68 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691400e+12F && var_1_69 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= -461168.6018427383000e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427383000e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_74 >= -1073741823);
	assume_abort_if_not(var_1_74 <= 1073741823);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 32767);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= -63);
	assume_abort_if_not(var_1_79 <= 63);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 127);
	assume_abort_if_not(var_1_82 <= 254);
	var_1_85 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_85 >= 2147483647);
	assume_abort_if_not(var_1_85 <= 4294967294);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 1);
	assume_abort_if_not(var_1_91 <= 30);
	var_1_92 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_92 >= -922337.2036854776000e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 9223372.036854776000e+12F && var_1_92 >= 1.0e-20F ));
	assume_abort_if_not(var_1_92 != 0.0F);
	var_1_108 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_108 >= 1);
	assume_abort_if_not(var_1_108 <= 1);
	var_1_111 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_111 >= 0);
	assume_abort_if_not(var_1_111 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_34 = var_1_34;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_106 = var_1_106;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_2 < var_1_3) ? ((var_1_3 <= var_1_2) ? (var_1_1 == ((signed short int) ((max (10 , var_1_4)) - var_1_5))) : (var_1_1 == ((signed short int) (max (var_1_5 , (var_1_4 - var_1_6)))))) : (var_1_1 == ((signed short int) (min ((max (var_1_6 , var_1_4)) , (max ((var_1_7 + var_1_8) , (min (var_1_5 , var_1_9))))))))) && (var_1_107 ? (var_1_10 == ((signed short int) (abs (var_1_6)))) : ((16 < var_1_7) ? (var_1_10 == ((signed short int) var_1_6)) : 1))) && ((var_1_5 > ((var_1_13 - 4) - var_1_6)) ? (var_1_12 == ((signed long int) (var_1_4 - var_1_13))) : (var_1_12 == ((signed long int) ((var_1_6 - var_1_13) + var_1_9))))) && ((var_1_24 < ((min (var_1_24 , var_1_109)) / var_1_16)) ? (var_1_14 == ((unsigned char) var_1_17)) : (var_1_14 == ((unsigned char) (max ((abs (var_1_17)) , var_1_18)))))) && ((var_1_5 > var_1_89) ? (var_1_19 == ((unsigned char) (var_1_20 + 25))) : (var_1_19 == ((unsigned char) var_1_18)))) && (var_1_83 ? (var_1_21 == ((signed long int) (25 + (var_1_20 - var_1_14)))) : (var_1_21 == ((signed long int) ((min (var_1_4 , 2)) - (abs (var_1_9))))))) && (var_1_22 == ((unsigned short int) (var_1_23 - var_1_95)))) && (((var_1_90 & var_1_10) >= var_1_6) ? (var_1_24 == ((double) (var_1_25 - var_1_26))) : (var_1_24 == ((double) var_1_26)))) && (((var_1_22 + var_1_5) < var_1_12) ? (var_1_27 == ((signed char) -25)) : (var_1_27 == ((signed char) (abs (var_1_28)))))) && (var_1_107 ? (var_1_29 == ((unsigned char) (min (var_1_20 , (min (var_1_17 , var_1_18)))))) : (((- var_1_16) != var_1_109) ? (var_1_34 ? (var_1_29 == ((unsigned char) (var_1_20 + var_1_31))) : (var_1_29 == ((unsigned char) var_1_18))) : (var_1_29 == ((unsigned char) ((var_1_32 - var_1_33) + 64)))))) && (((var_1_20 - (max (var_1_33 , var_1_96))) <= (var_1_43 * var_1_8)) ? ((var_1_107 || (last_1_var_1_34 || var_1_107)) ? (var_1_34 == ((unsigned char) (! (var_1_36 && (var_1_37 && var_1_38))))) : (var_1_34 == ((unsigned char) (! (var_1_39 || var_1_40))))) : ((var_1_24 <= (max (var_1_109 , var_1_16))) ? (var_1_34 == ((unsigned char) (var_1_107 && (var_1_36 && (var_1_39 && var_1_40))))) : (var_1_34 == ((unsigned char) (! var_1_37)))))) && (((var_1_26 - var_1_25) > var_1_109) ? (var_1_41 == ((unsigned long int) (var_1_42 - var_1_18))) : (var_1_41 == ((unsigned long int) var_1_6)))) && ((var_1_53 <= var_1_42) ? (var_1_43 == ((signed long int) (min ((max (var_1_31 , var_1_17)) , (max ((last_1_var_1_43 + var_1_4) , (var_1_8 + var_1_18))))))) : (var_1_43 == ((signed long int) (var_1_53 + -5))))) && ((((min (var_1_20 , var_1_32)) << (var_1_45 - 1)) >= var_1_8) ? (var_1_37 ? (((var_1_45 * var_1_89) < var_1_7) ? ((var_1_25 <= var_1_24) ? (var_1_44 == ((unsigned long int) var_1_76)) : 1) : (var_1_44 == ((unsigned long int) (abs (min (var_1_5 , var_1_42)))))) : (var_1_44 == ((unsigned long int) var_1_89))) : (((var_1_76 * var_1_27) <= var_1_90) ? (((var_1_6 <= (var_1_18 - var_1_5)) && var_1_38) ? (var_1_44 == ((unsigned long int) (abs (var_1_20)))) : (var_1_44 == ((unsigned long int) (var_1_18 + 256u)))) : 1))) && (((var_1_41 / var_1_45) != var_1_17) ? (var_1_46 == ((unsigned char) (min (var_1_33 , (max (var_1_18 , var_1_45)))))) : (var_1_46 == ((unsigned char) (abs (var_1_45)))))) && (var_1_47 == ((float) (max (var_1_26 , var_1_25))))) && ((var_1_42 < var_1_32) ? (var_1_48 == ((unsigned long int) (max (var_1_112 , var_1_32)))) : 1)) && ((var_1_83 && (var_1_12 <= (var_1_22 - var_1_31))) ? (var_1_49 == ((signed short int) (max (var_1_20 , (min ((var_1_17 - last_1_var_1_49) , var_1_18)))))) : (var_1_49 == ((signed short int) ((min (var_1_31 , var_1_17)) - var_1_20))))) && ((var_1_112 < var_1_76) ? (var_1_50 == ((unsigned char) (max (((var_1_51 - var_1_33) - (var_1_32 - var_1_45)) , (max (var_1_31 , (min (var_1_17 , var_1_20)))))))) : (((var_1_96 * (min (var_1_13 , var_1_90))) != var_1_31) ? (((- var_1_24) > (max (var_1_16 , var_1_56))) ? (var_1_50 == ((unsigned char) (var_1_51 - 25))) : 1) : 1))) && (((var_1_24 + (var_1_24 + var_1_109)) > (var_1_25 + var_1_80)) ? (var_1_53 == ((signed long int) (var_1_112 + var_1_28))) : (var_1_53 == ((signed long int) (var_1_18 - var_1_20))))) && ((((max (var_1_23 , 65477)) - var_1_45) < var_1_33) ? (((var_1_83 || var_1_107) || ((max (var_1_13 , var_1_31)) > var_1_53)) ? (var_1_54 == ((signed long int) (max (var_1_8 , var_1_33)))) : (var_1_54 == ((signed long int) (var_1_23 - (var_1_6 + var_1_5))))) : ((! var_1_39) ? (var_1_54 == ((signed long int) (var_1_45 - (64 + var_1_55)))) : (var_1_54 == ((signed long int) (var_1_4 - var_1_17)))))) && (((var_1_36 || var_1_34) && var_1_39) ? (((var_1_90 / (max (var_1_51 , var_1_32))) == var_1_98) ? (var_1_56 == ((float) var_1_26)) : (var_1_56 == ((float) (max (((max (var_1_26 , var_1_25)) - (max (var_1_57 , var_1_58))) , var_1_59))))) : ((((min (var_1_52 , var_1_2)) / var_1_16) >= var_1_24) ? (var_1_56 == ((float) (min ((abs (var_1_58)) , (var_1_60 + 128.8f))))) : ((var_1_21 > 100) ? (var_1_56 == ((float) (min (7.875f , var_1_26)))) : (var_1_56 == ((float) (min (var_1_57 , var_1_25)))))))) && ((((var_1_62 - var_1_63) - var_1_25) >= var_1_70) ? (var_1_94 ? (var_1_61 == ((signed short int) (((var_1_44 + last_1_var_1_61) + var_1_49) - (17873 - (var_1_64 - var_1_32))))) : ((var_1_5 >= var_1_84) ? (var_1_61 == ((signed short int) ((min (var_1_45 , var_1_20)) - (var_1_44 + (var_1_49 + var_1_32))))) : (var_1_61 == ((signed short int) (max ((max ((min (var_1_44 , var_1_4)) , (var_1_33 - var_1_31))) , var_1_9)))))) : (var_1_61 == ((signed short int) ((max (var_1_65 , var_1_7)) + (max ((max (var_1_89 , var_1_49)) , 32))))))) && (var_1_38 ? (var_1_66 == ((float) ((max (var_1_63 , var_1_57)) - (var_1_67 - (var_1_68 - var_1_69))))) : 1)) && (var_1_40 ? (var_1_70 == ((float) ((var_1_69 - var_1_68) + var_1_60))) : (((var_1_96 >= var_1_18) && (var_1_12 <= var_1_50)) ? ((var_1_62 <= var_1_109) ? (var_1_70 == ((float) (var_1_71 + ((9.875f + var_1_69) - var_1_72)))) : (var_1_70 == ((float) (min (var_1_69 , var_1_58))))) : 1))) && ((! var_1_40) ? (var_1_73 == ((signed long int) (min (var_1_49 , var_1_88)))) : (((var_1_6 >= var_1_110) || var_1_94) ? ((var_1_31 <= var_1_23) ? ((var_1_58 > (50.4f * var_1_105)) ? (var_1_73 == ((signed long int) -2)) : (var_1_73 == ((signed long int) ((var_1_10 + var_1_9) + (min (var_1_49 , var_1_4)))))) : (var_1_73 == ((signed long int) ((max (var_1_7 , -10)) + (var_1_31 + var_1_17))))) : (var_1_73 == ((signed long int) (var_1_6 + (min (var_1_33 , var_1_74)))))))) && (var_1_38 ? (var_1_75 == ((float) (abs (var_1_57)))) : (var_1_75 == ((float) ((var_1_67 - (2.7867463553049503E18f - var_1_69)) - (7.305883381595552E18f - var_1_72)))))) && ((var_1_36 || var_1_37) ? ((var_1_109 < var_1_72) ? (var_1_76 == ((unsigned short int) (abs (var_1_18 + (abs (var_1_77)))))) : (var_1_76 == ((unsigned short int) (abs (var_1_23))))) : (var_1_76 == ((unsigned short int) (var_1_23 - var_1_103))))) && (((-64 + var_1_89) > (var_1_18 | var_1_77)) ? (var_1_78 == ((signed char) (min (var_1_33 , (var_1_45 + var_1_79))))) : 1)) && ((var_1_74 > (max (var_1_112 , var_1_12))) ? (var_1_80 == ((float) (abs (var_1_26)))) : 1)) && (((- (var_1_18 ^ 2)) != (min ((var_1_32 / var_1_13) , (var_1_23 + var_1_96)))) ? (((var_1_40 && var_1_107) && ((var_1_60 / var_1_68) < var_1_59)) ? (var_1_81 == ((unsigned char) ((max (var_1_51 , var_1_82)) - var_1_31))) : (((1 > 4) && var_1_39) ? (var_1_81 == ((unsigned char) var_1_32)) : (var_1_81 == ((unsigned char) (min (var_1_51 , (max (var_1_31 , (var_1_33 + var_1_45))))))))) : (var_1_81 == ((unsigned char) var_1_20)))) && (((var_1_102 <= var_1_44) && var_1_40) ? ((var_1_24 >= var_1_109) ? ((((var_1_13 - var_1_17) >> var_1_45) < var_1_41) ? (var_1_83 == ((unsigned char) (! var_1_39))) : 1) : (var_1_83 == ((unsigned char) ((! var_1_37) || (! var_1_39))))) : (var_1_83 == ((unsigned char) (! (var_1_36 && var_1_38)))))) && ((var_1_19 >= (min (var_1_96 , var_1_31))) ? (var_1_84 == ((unsigned long int) (max ((var_1_10 + var_1_82) , (var_1_85 - var_1_64))))) : 1)) && (var_1_36 ? (((- var_1_68) > (var_1_56 / var_1_16)) ? (var_1_86 == ((unsigned char) (max ((max (var_1_82 , (var_1_51 - var_1_33))) , var_1_31)))) : (var_1_86 == ((unsigned char) (var_1_32 + var_1_45)))) : 1)) && ((var_1_48 >= (min (32 , (var_1_74 + var_1_101)))) ? (((var_1_82 - (var_1_33 + var_1_45)) < var_1_86) ? (var_1_88 == ((unsigned char) (var_1_82 - var_1_20))) : (var_1_88 == ((unsigned char) (abs (var_1_32))))) : 1)) && (((var_1_95 / var_1_32) == var_1_45) ? (var_1_89 == ((signed long int) (max (((var_1_32 - 2) + var_1_33) , var_1_13)))) : (var_1_89 == ((signed long int) ((min ((var_1_6 + var_1_79) , var_1_23)) + var_1_32))))) && ((((var_1_32 - var_1_45) >> var_1_91) <= (abs (var_1_82 - var_1_18))) ? ((var_1_71 < ((- var_1_109) / (min (var_1_16 , var_1_92)))) ? (var_1_90 == ((unsigned long int) (((var_1_95 + var_1_23) + var_1_1) + var_1_82))) : 1) : 1)) && ((var_1_107 && (var_1_44 <= var_1_54)) ? (var_1_107 ? (var_1_34 ? (var_1_93 == ((float) var_1_67)) : 1) : 1) : 1)) && (var_1_94 == ((unsigned char) var_1_40))) && (last_1_var_1_83 ? (var_1_95 == ((unsigned long int) 10u)) : (var_1_95 == ((unsigned long int) var_1_82)))) && (var_1_94 ? (var_1_96 == ((unsigned long int) var_1_18)) : (var_1_96 == ((unsigned long int) var_1_51)))) && (var_1_39 ? (var_1_97 == ((signed char) var_1_79)) : (var_1_97 == ((signed char) var_1_45)))) && (var_1_36 ? (var_1_98 == ((unsigned long int) var_1_6)) : (var_1_98 == ((unsigned long int) 2u)))) && (var_1_99 == ((float) var_1_68))) && (var_1_38 ? (var_1_100 == ((signed long int) var_1_12)) : 1)) && (var_1_101 == ((signed short int) var_1_51))) && (var_1_94 ? (var_1_102 == ((signed short int) var_1_17)) : (var_1_102 == ((signed short int) var_1_6)))) && (var_1_37 ? (var_1_103 == ((signed long int) var_1_28)) : 1)) && (var_1_37 ? (var_1_104 == ((unsigned short int) var_1_90)) : (var_1_104 == ((unsigned short int) var_1_51)))) && (var_1_105 == ((float) 10000.5f))) && (var_1_106 == ((unsigned short int) last_1_var_1_106))) && (var_1_94 ? (var_1_107 == ((unsigned char) var_1_108)) : 1)) && (var_1_107 ? (var_1_109 == ((double) var_1_68)) : 1)) && (((min (var_1_69 , var_1_58)) > var_1_68) ? (var_1_110 == ((unsigned short int) (min (var_1_33 , var_1_111)))) : ((((abs (var_1_99)) * var_1_72) == var_1_47) ? (var_1_110 == ((unsigned short int) var_1_31)) : 1))) && (var_1_112 == ((signed long int) var_1_64))
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

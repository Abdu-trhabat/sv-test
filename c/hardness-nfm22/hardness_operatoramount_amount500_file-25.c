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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch25Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -64;
signed short int var_1_8 = 4;
signed long int var_1_12 = -1;
signed char var_1_13 = 0;
double var_1_15 = 7.5;
signed long int var_1_19 = 1;
signed long int var_1_20 = 4;
signed char var_1_21 = -100;
signed char var_1_22 = 1;
signed char var_1_23 = 2;
unsigned short int var_1_24 = 64;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 16;
double var_1_28 = 1.6;
double var_1_29 = 0.75;
double var_1_30 = 7.25;
double var_1_31 = 10.4;
double var_1_32 = 5.75;
unsigned char var_1_33 = 0;
double var_1_34 = 25.5;
unsigned long int var_1_35 = 256;
unsigned long int var_1_38 = 3797372097;
unsigned long int var_1_39 = 1566143549;
unsigned short int var_1_40 = 5;
signed char var_1_41 = -128;
signed char var_1_42 = 25;
signed char var_1_43 = 5;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
signed short int var_1_50 = -1;
float var_1_51 = 25.1;
float var_1_53 = 99.25;
double var_1_54 = 3.2;
double var_1_55 = 9.5;
signed short int var_1_56 = -2;
signed short int var_1_57 = 21118;
double var_1_58 = 0.6;
double var_1_60 = 127.875;
double var_1_61 = 25.5;
unsigned long int var_1_62 = 1669733863;
double var_1_63 = 10.6;
unsigned long int var_1_64 = 32;
double var_1_65 = 49.875;
double var_1_67 = 256.8;
double var_1_68 = 31.5;
signed long int var_1_69 = 1000000000;
float var_1_70 = 5.55;
float var_1_71 = 0.0;
signed char var_1_72 = -100;
signed char var_1_73 = -8;
signed long int var_1_74 = 16;
double var_1_75 = 0.0;
signed short int var_1_77 = -4;
signed long int var_1_79 = -2;
signed char var_1_80 = -128;
unsigned char var_1_81 = 10;
unsigned char var_1_82 = 100;
unsigned char var_1_83 = 0;
signed long int var_1_84 = 2;
signed long int var_1_85 = 1000000000;
signed long int var_1_86 = -5;
signed short int var_1_88 = -256;
signed long int var_1_89 = 1000;
unsigned long int var_1_90 = 10;
unsigned long int var_1_91 = 4284100184;
double var_1_93 = 0.5;
signed short int var_1_94 = 16;
unsigned long int var_1_95 = 128;
float var_1_96 = 255.62;
double var_1_97 = 128.9;
unsigned short int var_1_98 = 128;
unsigned short int var_1_99 = 59605;
signed short int var_1_100 = -8;
signed long int var_1_101 = 64;
signed short int var_1_102 = 5;
signed long int var_1_103 = 16;
signed short int var_1_104 = 32;
float var_1_105 = 1.8;
double var_1_106 = 31.75;
unsigned char var_1_108 = 1;
unsigned long int var_1_109 = 32;
unsigned short int var_1_110 = 16;
signed short int var_1_111 = -4;
float var_1_112 = 0.2;
signed short int var_1_113 = 64;
unsigned short int var_1_114 = 10;
double var_1_115 = 256.2;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -64;
signed short int last_1_var_1_8 = 4;
unsigned char last_1_var_1_25 = 16;
unsigned char last_1_var_1_33 = 0;
unsigned long int last_1_var_1_35 = 256;
signed char last_1_var_1_41 = -128;
unsigned char last_1_var_1_44 = 1;
unsigned char last_1_var_1_46 = 1;
signed short int last_1_var_1_50 = -1;
signed short int last_1_var_1_56 = -2;
signed long int last_1_var_1_69 = 1000000000;
float last_1_var_1_70 = 5.55;
signed short int last_1_var_1_77 = -4;
unsigned char last_1_var_1_81 = 10;
unsigned long int last_1_var_1_90 = 10;
double last_1_var_1_93 = 0.5;
signed short int last_1_var_1_94 = 16;
double last_1_var_1_97 = 128.9;
unsigned short int last_1_var_1_98 = 128;
signed short int last_1_var_1_100 = -8;
signed long int last_1_var_1_103 = 16;
double last_1_var_1_106 = 31.75;
unsigned char last_1_var_1_108 = 1;
unsigned short int last_1_var_1_110 = 16;
float last_1_var_1_112 = 0.2;
unsigned short int last_1_var_1_114 = 10;
double last_1_var_1_115 = 256.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req30Batch25Amount500
	if (! ((last_1_var_1_50 + var_1_73) >= last_1_var_1_35)) {
		var_1_86 = (max ((abs (last_1_var_1_98)) , (last_1_var_1_33 - last_1_var_1_33)));
	} else {
		var_1_86 = ((max (var_1_42 , last_1_var_1_33)) - last_1_var_1_110);
	}


	// From: Req23Batch25Amount500
	signed long int stepLocal_16 = last_1_var_1_94;
	if (var_1_26 <= stepLocal_16) {
		var_1_72 = (abs (var_1_27 - var_1_23));
	} else {
		if (! last_1_var_1_108) {
			var_1_72 = ((-1 + var_1_73) + var_1_43);
		} else {
			var_1_72 = (min ((var_1_43 + var_1_73) , var_1_21));
		}
	}


	// From: Req42Batch25Amount500
	if (var_1_45) {
		var_1_103 = var_1_72;
	} else {
		var_1_103 = var_1_82;
	}


	// From: Req4Batch25Amount500
	if ((last_1_var_1_70 / var_1_15) < (last_1_var_1_115 + (last_1_var_1_112 * last_1_var_1_115))) {
		if ((last_1_var_1_8 / var_1_19) <= (last_1_var_1_25 % (min (var_1_20 , 10)))) {
			var_1_13 = (max (var_1_21 , 32));
		} else {
			var_1_13 = (var_1_22 - (max (var_1_23 , 1)));
		}
	} else {
		var_1_13 = (64 - (abs (var_1_23)));
	}


	// From: Req9Batch25Amount500
	if (last_1_var_1_44 && (! last_1_var_1_46)) {
		if (last_1_var_1_44 || (last_1_var_1_46 || (last_1_var_1_25 <= var_1_26))) {
			var_1_35 = (abs (var_1_23));
		}
	} else {
		if ((- var_1_23) > (max (last_1_var_1_90 , last_1_var_1_35))) {
			var_1_35 = (var_1_38 - 16u);
		} else {
			var_1_35 = ((min ((128u + last_1_var_1_81) , (var_1_39 - last_1_var_1_56))) + (last_1_var_1_81 + (last_1_var_1_81 + var_1_23)));
		}
	}


	// From: Req38Batch25Amount500
	if (128 <= last_1_var_1_77) {
		if (last_1_var_1_108) {
			var_1_98 = ((26539 - last_1_var_1_100) + (abs (10)));
		} else {
			if ((max (var_1_20 , var_1_83)) != last_1_var_1_41) {
				if (var_1_75 == var_1_71) {
					if ((last_1_var_1_112 >= (var_1_61 + last_1_var_1_97)) && (var_1_31 == var_1_63)) {
						var_1_98 = (abs (abs (abs (last_1_var_1_90))));
					} else {
						var_1_98 = (min (((min (var_1_83 , var_1_26)) + last_1_var_1_33) , (max (var_1_23 , (var_1_99 - last_1_var_1_77)))));
					}
				} else {
					var_1_98 = (last_1_var_1_90 + var_1_83);
				}
			} else {
				if (var_1_47) {
					var_1_98 = var_1_82;
				} else {
					var_1_98 = var_1_57;
				}
			}
		}
	} else {
		var_1_98 = last_1_var_1_100;
	}


	// From: Req13Batch25Amount500
	unsigned long int stepLocal_9 = (var_1_26 + last_1_var_1_35) - last_1_var_1_56;
	unsigned char stepLocal_8 = var_1_31 != (- last_1_var_1_93);
	if (last_1_var_1_103 <= stepLocal_9) {
		var_1_46 = var_1_45;
	} else {
		if (stepLocal_8 || ((last_1_var_1_103 / var_1_26) > last_1_var_1_56)) {
			var_1_46 = ((var_1_47 || var_1_48) || var_1_49);
		} else {
			var_1_46 = ((last_1_var_1_106 > var_1_29) || var_1_45);
		}
	}


	// From: Req46Batch25Amount500
	if (var_1_46) {
		var_1_108 = var_1_45;
	}


	// From: Req39Batch25Amount500
	if (var_1_108) {
		var_1_100 = var_1_42;
	}


	// From: Req50Batch25Amount500
	if (var_1_46) {
		var_1_112 = var_1_61;
	} else {
		var_1_112 = var_1_67;
	}


	// From: Req43Batch25Amount500
	if (var_1_108) {
		var_1_104 = var_1_82;
	}


	// From: Req22Batch25Amount500
	signed char stepLocal_15 = var_1_21;
	if (stepLocal_15 != (var_1_43 * var_1_104)) {
		var_1_70 = ((var_1_71 - var_1_61) - 64.4f);
	}


	// From: Req40Batch25Amount500
	if (var_1_46) {
		var_1_101 = var_1_73;
	}


	// From: Req12Batch25Amount500
	if (last_1_var_1_44) {
		if ((last_1_var_1_56 ^ (last_1_var_1_41 + last_1_var_1_81)) > last_1_var_1_114) {
			var_1_44 = var_1_45;
		}
	}


	// From: Req45Batch25Amount500
	if (var_1_44) {
		var_1_106 = var_1_63;
	} else {
		var_1_106 = var_1_53;
	}


	// From: Req36Batch25Amount500
	signed long int stepLocal_27 = var_1_19;
	if ((- 5) <= stepLocal_27) {
		if (var_1_15 <= var_1_106) {
			var_1_96 = (5.875f - 63.875f);
		} else {
			var_1_96 = (min (var_1_31 , var_1_32));
		}
	} else {
		var_1_96 = (var_1_60 + (var_1_67 - var_1_68));
	}


	// From: Req37Batch25Amount500
	if (var_1_44) {
		var_1_97 = ((min (10.5 , (var_1_63 + var_1_30))) + var_1_60);
	}


	// From: Req6Batch25Amount500
	signed long int stepLocal_6 = var_1_19;
	if ((last_1_var_1_25 / var_1_20) <= stepLocal_6) {
		var_1_25 = (var_1_26 - var_1_23);
	} else {
		var_1_25 = (var_1_26 - ((abs (8)) + var_1_27));
	}


	// From: Req7Batch25Amount500
	if (var_1_46) {
		var_1_28 = (abs (var_1_29 + (10.75 + var_1_30)));
	} else {
		var_1_28 = (min ((var_1_31 - var_1_32) , var_1_30));
	}


	// From: Req10Batch25Amount500
	var_1_40 = (37856 - var_1_25);


	// From: Req27Batch25Amount500
	var_1_80 = (var_1_43 + var_1_73);


	// From: Req31Batch25Amount500
	signed long int stepLocal_23 = var_1_85;
	if (stepLocal_23 < (var_1_23 / (max (var_1_89 , var_1_82)))) {
		var_1_88 = (abs (var_1_43));
	}


	// From: Req41Batch25Amount500
	var_1_102 = var_1_21;


	// From: Req44Batch25Amount500
	var_1_105 = var_1_32;


	// From: Req47Batch25Amount500
	var_1_109 = 25u;


	// From: Req48Batch25Amount500
	var_1_110 = var_1_25;


	// From: Req49Batch25Amount500
	var_1_111 = -1;


	// From: Req51Batch25Amount500
	if (var_1_45) {
		var_1_113 = var_1_22;
	}


	// From: Req14Batch25Amount500
	signed long int stepLocal_10 = -8;
	if (((var_1_40 << 1) >> var_1_86) <= stepLocal_10) {
		var_1_50 = ((1 - (1 + var_1_27)) + (min (var_1_23 , var_1_35)));
	} else {
		var_1_50 = (var_1_35 + var_1_21);
	}


	// From: Req11Batch25Amount500
	unsigned char stepLocal_7 = var_1_108;
	if (var_1_44 && stepLocal_7) {
		var_1_41 = ((max ((max (var_1_23 , var_1_27)) , var_1_22)) - var_1_42);
	} else {
		var_1_41 = (var_1_27 + var_1_43);
	}


	// From: Req53Batch25Amount500
	unsigned char stepLocal_28 = var_1_44;
	if (var_1_63 <= (last_1_var_1_115 / (min (var_1_71 , var_1_75)))) {
		if (stepLocal_28 && var_1_46) {
			var_1_115 = var_1_71;
		} else {
			var_1_115 = var_1_29;
		}
	} else {
		var_1_115 = var_1_55;
	}


	// From: Req52Batch25Amount500
	if (1.0000000000025E11 != var_1_106) {
		var_1_114 = (var_1_99 - var_1_80);
	}


	// From: Req16Batch25Amount500
	if (var_1_96 > var_1_105) {
		var_1_54 = (var_1_31 - (min (var_1_32 , var_1_55)));
	} else {
		var_1_54 = (max ((var_1_30 + var_1_29) , var_1_53));
	}


	// From: Req19Batch25Amount500
	var_1_64 = (4098371881u - var_1_110);


	// From: Req28Batch25Amount500
	signed long int stepLocal_21 = 0;
	signed long int stepLocal_20 = (var_1_23 / var_1_26) << var_1_111;
	if (var_1_25 >= stepLocal_20) {
		if (stepLocal_21 >= var_1_43) {
			var_1_81 = (var_1_42 + (var_1_27 + 1));
		} else {
			var_1_81 = (min (var_1_26 , (var_1_23 + var_1_42)));
		}
	} else {
		var_1_81 = ((min ((min (var_1_42 , var_1_23)) , 10)) + (var_1_82 - (max (var_1_27 , var_1_83))));
	}


	// From: Req29Batch25Amount500
	unsigned char stepLocal_22 = var_1_45;
	if (stepLocal_22 || var_1_108) {
		if (var_1_31 != var_1_30) {
			var_1_84 = ((abs (var_1_21 + -16)) + ((var_1_85 - var_1_42) - var_1_80));
		} else {
			var_1_84 = ((var_1_41 + 32) + var_1_109);
		}
	}


	// From: Req34Batch25Amount500
	signed long int stepLocal_26 = abs (var_1_101);
	unsigned char stepLocal_25 = var_1_49;
	if (var_1_103 <= stepLocal_26) {
		if (stepLocal_25 || var_1_108) {
			var_1_94 = ((max (var_1_22 , var_1_82)) + ((max (var_1_41 , 128)) + var_1_26));
		} else {
			var_1_94 = (min (var_1_104 , var_1_13));
		}
	}


	// From: Req32Batch25Amount500
	if (var_1_98 <= (- var_1_64)) {
		if (var_1_46) {
			var_1_90 = ((var_1_62 - 2u) + (min (var_1_13 , var_1_57)));
		}
	} else {
		var_1_90 = ((var_1_91 - (var_1_98 + var_1_100)) - var_1_81);
	}


	// From: Req20Batch25Amount500
	if ((min (var_1_114 , (var_1_26 - var_1_114))) == var_1_90) {
		var_1_65 = (((var_1_67 + var_1_68) - var_1_60) + var_1_30);
	} else {
		var_1_65 = (max (((var_1_67 + var_1_68) + var_1_30) , var_1_55));
	}


	// From: Req26Batch25Amount500
	if ((var_1_68 - var_1_31) < var_1_112) {
		if (var_1_55 < var_1_54) {
			var_1_79 = (var_1_100 - (var_1_98 + var_1_102));
		}
	} else {
		var_1_79 = (var_1_88 - var_1_113);
	}


	// From: Req33Batch25Amount500
	signed long int stepLocal_24 = 32;
	if (stepLocal_24 > var_1_79) {
		var_1_93 = var_1_53;
	}


	// From: Req35Batch25Amount500
	if (var_1_46 && (var_1_31 < var_1_61)) {
		if (var_1_82 == 2) {
			var_1_95 = var_1_94;
		} else {
			var_1_95 = (min (var_1_94 , (var_1_38 - (var_1_50 + var_1_83))));
		}
	} else {
		var_1_95 = ((var_1_62 - (1000000000u - var_1_23)) + var_1_83);
	}


	// From: Req8Batch25Amount500
	if ((abs (var_1_29)) >= (var_1_65 / (max (var_1_15 , var_1_34)))) {
		if (var_1_15 > (- -0.7)) {
			var_1_33 = (var_1_26 - var_1_23);
		} else {
			var_1_33 = ((abs (var_1_23)) + var_1_27);
		}
	}


	// From: Req2Batch25Amount500
	unsigned char stepLocal_4 = var_1_81;
	unsigned char stepLocal_3 = var_1_33;
	unsigned char stepLocal_2 = var_1_44;
	if (var_1_98 > stepLocal_3) {
		if (((var_1_113 + 10) <= var_1_72) && stepLocal_2) {
			var_1_8 = (min (var_1_72 , (abs (last_1_var_1_8))));
		}
	} else {
		if (var_1_44) {
			var_1_8 = ((last_1_var_1_8 + var_1_72) - (var_1_81 + (min (var_1_25 , 2))));
		} else {
			if (var_1_98 >= stepLocal_4) {
				var_1_8 = (last_1_var_1_8 + var_1_25);
			}
		}
	}


	// From: Req17Batch25Amount500
	if (var_1_114 != var_1_98) {
		var_1_56 = ((var_1_22 + (var_1_26 - var_1_86)) + var_1_80);
	} else {
		if (var_1_20 != var_1_102) {
			var_1_56 = (abs ((var_1_57 - var_1_79) - var_1_113));
		} else {
			var_1_56 = (max ((var_1_23 + -64) , ((25 + var_1_113) - 5)));
		}
	}


	// From: Req25Batch25Amount500
	signed short int stepLocal_19 = var_1_100;
	unsigned char stepLocal_18 = var_1_81;
	if (stepLocal_19 <= var_1_103) {
		if (var_1_26 < stepLocal_18) {
			var_1_77 = (var_1_100 - var_1_27);
		}
	} else {
		var_1_77 = (((var_1_22 + var_1_43) + var_1_33) + (min ((var_1_50 + var_1_27) , var_1_33)));
	}


	// From: Req1Batch25Amount500
	signed long int stepLocal_1 = -128 / -2;
	signed long int stepLocal_0 = 256;
	if (! (last_1_var_1_1 >= var_1_79)) {
		if (stepLocal_0 != last_1_var_1_1) {
			var_1_1 = (var_1_79 + last_1_var_1_1);
		}
	} else {
		if (stepLocal_1 >= (var_1_79 + last_1_var_1_1)) {
			var_1_1 = (last_1_var_1_1 - var_1_79);
		} else {
			var_1_1 = ((max ((var_1_79 + last_1_var_1_1) , (var_1_110 - var_1_33))) + (min (var_1_110 , var_1_111)));
		}
	}


	// From: Req3Batch25Amount500
	if (var_1_33 <= var_1_98) {
		var_1_12 = (8 + var_1_98);
	} else {
		var_1_12 = (min (var_1_13 , var_1_1));
	}


	// From: Req5Batch25Amount500
	signed long int stepLocal_5 = var_1_33 - var_1_23;
	if (var_1_81 != stepLocal_5) {
		var_1_24 = (var_1_25 + var_1_23);
	}


	// From: Req18Batch25Amount500
	if (var_1_43 <= (var_1_102 * var_1_33)) {
		if ((var_1_26 - var_1_27) < (var_1_113 / -4)) {
			var_1_58 = (1.5 + (var_1_60 - var_1_61));
		} else {
			var_1_58 = var_1_32;
		}
	} else {
		if (((1126910977u + var_1_62) - var_1_94) > (var_1_102 & (128u << var_1_79))) {
			if ((abs (var_1_33 / var_1_38)) <= var_1_33) {
				var_1_58 = (var_1_60 - (6.3968465112655012E18 - var_1_61));
			} else {
				var_1_58 = ((var_1_30 + var_1_63) + var_1_61);
			}
		} else {
			var_1_58 = ((var_1_60 - var_1_61) + var_1_29);
		}
	}


	// From: Req21Batch25Amount500
	unsigned char stepLocal_14 = var_1_46;
	if ((var_1_23 == (var_1_81 & var_1_77)) || stepLocal_14) {
		var_1_69 = (last_1_var_1_69 - var_1_27);
	} else {
		if (! (var_1_19 == var_1_84)) {
			if (var_1_44) {
				var_1_69 = ((max (var_1_56 , var_1_33)) + (var_1_101 - last_1_var_1_69));
			} else {
				var_1_69 = (var_1_57 + var_1_50);
			}
		} else {
			var_1_69 = ((max (var_1_56 , var_1_50)) + (max (var_1_104 , var_1_33)));
		}
	}


	// From: Req15Batch25Amount500
	unsigned char stepLocal_13 = var_1_32 == var_1_58;
	unsigned char stepLocal_12 = var_1_58 == (var_1_32 - var_1_31);
	signed short int stepLocal_11 = var_1_100;
	if (stepLocal_12 || var_1_47) {
		var_1_51 = (var_1_29 + 16.7f);
	} else {
		if (var_1_45 || stepLocal_13) {
			var_1_51 = (max (var_1_29 , (0.75f + var_1_30)));
		} else {
			if (stepLocal_11 > (~ var_1_114)) {
				var_1_51 = (var_1_30 + (max (var_1_29 , var_1_53)));
			}
		}
	}


	// From: Req24Batch25Amount500
	unsigned long int stepLocal_17 = var_1_35 * var_1_81;
	if (var_1_51 < ((var_1_75 - var_1_61) - (var_1_68 + var_1_60))) {
		var_1_74 = var_1_100;
	} else {
		if (var_1_111 >= stepLocal_17) {
			var_1_74 = (-50 + (max (var_1_109 , var_1_88)));
		} else {
			var_1_74 = (var_1_26 - var_1_57);
		}
	}
}



void updateVariables() {
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	assume_abort_if_not(var_1_19 != 0);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -2147483648);
	assume_abort_if_not(var_1_20 <= 2147483647);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -1);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 127);
	assume_abort_if_not(var_1_26 <= 254);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -461168.6018427382800e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -230584.3009213691390e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	assume_abort_if_not(var_1_34 != 0.0F);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 1073741823);
	assume_abort_if_not(var_1_39 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -63);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -461168.6018427382800e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= 16383);
	assume_abort_if_not(var_1_57 <= 32766);
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 1073741824);
	assume_abort_if_not(var_1_62 <= 2147483647);
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -230584.3009213691390e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691390e+12F && var_1_63 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 2305843.009213691390e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691390e+12F && var_1_68 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= 4611686.018427382800e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -31);
	assume_abort_if_not(var_1_73 <= 31);
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= 4611686.018427387900e+12F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854776000e+12F && var_1_75 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 63);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 63);
	var_1_85 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_85 >= 536870911);
	assume_abort_if_not(var_1_85 <= 1073741823);
	var_1_89 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_89 >= -2147483648);
	assume_abort_if_not(var_1_89 <= 2147483647);
	assume_abort_if_not(var_1_89 != 0);
	var_1_91 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_91 >= 3221225470);
	assume_abort_if_not(var_1_91 <= 4294967294);
	var_1_99 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_99 >= 32767);
	assume_abort_if_not(var_1_99 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_112 = var_1_112;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_115 = var_1_115;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((! (last_1_var_1_1 >= var_1_79)) ? ((256 != last_1_var_1_1) ? (var_1_1 == ((signed long int) (var_1_79 + last_1_var_1_1))) : 1) : (((-128 / -2) >= (var_1_79 + last_1_var_1_1)) ? (var_1_1 == ((signed long int) (last_1_var_1_1 - var_1_79))) : (var_1_1 == ((signed long int) ((max ((var_1_79 + last_1_var_1_1) , (var_1_110 - var_1_33))) + (min (var_1_110 , var_1_111))))))) && ((var_1_98 > var_1_33) ? ((((var_1_113 + 10) <= var_1_72) && var_1_44) ? (var_1_8 == ((signed short int) (min (var_1_72 , (abs (last_1_var_1_8)))))) : 1) : (var_1_44 ? (var_1_8 == ((signed short int) ((last_1_var_1_8 + var_1_72) - (var_1_81 + (min (var_1_25 , 2)))))) : ((var_1_98 >= var_1_81) ? (var_1_8 == ((signed short int) (last_1_var_1_8 + var_1_25))) : 1)))) && ((var_1_33 <= var_1_98) ? (var_1_12 == ((signed long int) (8 + var_1_98))) : (var_1_12 == ((signed long int) (min (var_1_13 , var_1_1)))))) && (((last_1_var_1_70 / var_1_15) < (last_1_var_1_115 + (last_1_var_1_112 * last_1_var_1_115))) ? (((last_1_var_1_8 / var_1_19) <= (last_1_var_1_25 % (min (var_1_20 , 10)))) ? (var_1_13 == ((signed char) (max (var_1_21 , 32)))) : (var_1_13 == ((signed char) (var_1_22 - (max (var_1_23 , 1)))))) : (var_1_13 == ((signed char) (64 - (abs (var_1_23))))))) && ((var_1_81 != (var_1_33 - var_1_23)) ? (var_1_24 == ((unsigned short int) (var_1_25 + var_1_23))) : 1)) && (((last_1_var_1_25 / var_1_20) <= var_1_19) ? (var_1_25 == ((unsigned char) (var_1_26 - var_1_23))) : (var_1_25 == ((unsigned char) (var_1_26 - ((abs (8)) + var_1_27)))))) && (var_1_46 ? (var_1_28 == ((double) (abs (var_1_29 + (10.75 + var_1_30))))) : (var_1_28 == ((double) (min ((var_1_31 - var_1_32) , var_1_30)))))) && (((abs (var_1_29)) >= (var_1_65 / (max (var_1_15 , var_1_34)))) ? ((var_1_15 > (- -0.7)) ? (var_1_33 == ((unsigned char) (var_1_26 - var_1_23))) : (var_1_33 == ((unsigned char) ((abs (var_1_23)) + var_1_27)))) : 1)) && ((last_1_var_1_44 && (! last_1_var_1_46)) ? ((last_1_var_1_44 || (last_1_var_1_46 || (last_1_var_1_25 <= var_1_26))) ? (var_1_35 == ((unsigned long int) (abs (var_1_23)))) : 1) : (((- var_1_23) > (max (last_1_var_1_90 , last_1_var_1_35))) ? (var_1_35 == ((unsigned long int) (var_1_38 - 16u))) : (var_1_35 == ((unsigned long int) ((min ((128u + last_1_var_1_81) , (var_1_39 - last_1_var_1_56))) + (last_1_var_1_81 + (last_1_var_1_81 + var_1_23)))))))) && (var_1_40 == ((unsigned short int) (37856 - var_1_25)))) && ((var_1_44 && var_1_108) ? (var_1_41 == ((signed char) ((max ((max (var_1_23 , var_1_27)) , var_1_22)) - var_1_42))) : (var_1_41 == ((signed char) (var_1_27 + var_1_43))))) && (last_1_var_1_44 ? (((last_1_var_1_56 ^ (last_1_var_1_41 + last_1_var_1_81)) > last_1_var_1_114) ? (var_1_44 == ((unsigned char) var_1_45)) : 1) : 1)) && ((last_1_var_1_103 <= ((var_1_26 + last_1_var_1_35) - last_1_var_1_56)) ? (var_1_46 == ((unsigned char) var_1_45)) : (((var_1_31 != (- last_1_var_1_93)) || ((last_1_var_1_103 / var_1_26) > last_1_var_1_56)) ? (var_1_46 == ((unsigned char) ((var_1_47 || var_1_48) || var_1_49))) : (var_1_46 == ((unsigned char) ((last_1_var_1_106 > var_1_29) || var_1_45)))))) && ((((var_1_40 << 1) >> var_1_86) <= -8) ? (var_1_50 == ((signed short int) ((1 - (1 + var_1_27)) + (min (var_1_23 , var_1_35))))) : (var_1_50 == ((signed short int) (var_1_35 + var_1_21))))) && (((var_1_58 == (var_1_32 - var_1_31)) || var_1_47) ? (var_1_51 == ((float) (var_1_29 + 16.7f))) : ((var_1_45 || (var_1_32 == var_1_58)) ? (var_1_51 == ((float) (max (var_1_29 , (0.75f + var_1_30))))) : ((var_1_100 > (~ var_1_114)) ? (var_1_51 == ((float) (var_1_30 + (max (var_1_29 , var_1_53))))) : 1)))) && ((var_1_96 > var_1_105) ? (var_1_54 == ((double) (var_1_31 - (min (var_1_32 , var_1_55))))) : (var_1_54 == ((double) (max ((var_1_30 + var_1_29) , var_1_53)))))) && ((var_1_114 != var_1_98) ? (var_1_56 == ((signed short int) ((var_1_22 + (var_1_26 - var_1_86)) + var_1_80))) : ((var_1_20 != var_1_102) ? (var_1_56 == ((signed short int) (abs ((var_1_57 - var_1_79) - var_1_113)))) : (var_1_56 == ((signed short int) (max ((var_1_23 + -64) , ((25 + var_1_113) - 5)))))))) && ((var_1_43 <= (var_1_102 * var_1_33)) ? (((var_1_26 - var_1_27) < (var_1_113 / -4)) ? (var_1_58 == ((double) (1.5 + (var_1_60 - var_1_61)))) : (var_1_58 == ((double) var_1_32))) : ((((1126910977u + var_1_62) - var_1_94) > (var_1_102 & (128u << var_1_79))) ? (((abs (var_1_33 / var_1_38)) <= var_1_33) ? (var_1_58 == ((double) (var_1_60 - (6.3968465112655012E18 - var_1_61)))) : (var_1_58 == ((double) ((var_1_30 + var_1_63) + var_1_61)))) : (var_1_58 == ((double) ((var_1_60 - var_1_61) + var_1_29)))))) && (var_1_64 == ((unsigned long int) (4098371881u - var_1_110)))) && (((min (var_1_114 , (var_1_26 - var_1_114))) == var_1_90) ? (var_1_65 == ((double) (((var_1_67 + var_1_68) - var_1_60) + var_1_30))) : (var_1_65 == ((double) (max (((var_1_67 + var_1_68) + var_1_30) , var_1_55)))))) && (((var_1_23 == (var_1_81 & var_1_77)) || var_1_46) ? (var_1_69 == ((signed long int) (last_1_var_1_69 - var_1_27))) : ((! (var_1_19 == var_1_84)) ? (var_1_44 ? (var_1_69 == ((signed long int) ((max (var_1_56 , var_1_33)) + (var_1_101 - last_1_var_1_69)))) : (var_1_69 == ((signed long int) (var_1_57 + var_1_50)))) : (var_1_69 == ((signed long int) ((max (var_1_56 , var_1_50)) + (max (var_1_104 , var_1_33)))))))) && ((var_1_21 != (var_1_43 * var_1_104)) ? (var_1_70 == ((float) ((var_1_71 - var_1_61) - 64.4f))) : 1)) && ((var_1_26 <= last_1_var_1_94) ? (var_1_72 == ((signed char) (abs (var_1_27 - var_1_23)))) : ((! last_1_var_1_108) ? (var_1_72 == ((signed char) ((-1 + var_1_73) + var_1_43))) : (var_1_72 == ((signed char) (min ((var_1_43 + var_1_73) , var_1_21))))))) && ((var_1_51 < ((var_1_75 - var_1_61) - (var_1_68 + var_1_60))) ? (var_1_74 == ((signed long int) var_1_100)) : ((var_1_111 >= (var_1_35 * var_1_81)) ? (var_1_74 == ((signed long int) (-50 + (max (var_1_109 , var_1_88))))) : (var_1_74 == ((signed long int) (var_1_26 - var_1_57)))))) && ((var_1_100 <= var_1_103) ? ((var_1_26 < var_1_81) ? (var_1_77 == ((signed short int) (var_1_100 - var_1_27))) : 1) : (var_1_77 == ((signed short int) (((var_1_22 + var_1_43) + var_1_33) + (min ((var_1_50 + var_1_27) , var_1_33))))))) && (((var_1_68 - var_1_31) < var_1_112) ? ((var_1_55 < var_1_54) ? (var_1_79 == ((signed long int) (var_1_100 - (var_1_98 + var_1_102)))) : 1) : (var_1_79 == ((signed long int) (var_1_88 - var_1_113))))) && (var_1_80 == ((signed char) (var_1_43 + var_1_73)))) && ((var_1_25 >= ((var_1_23 / var_1_26) << var_1_111)) ? ((0 >= var_1_43) ? (var_1_81 == ((unsigned char) (var_1_42 + (var_1_27 + 1)))) : (var_1_81 == ((unsigned char) (min (var_1_26 , (var_1_23 + var_1_42)))))) : (var_1_81 == ((unsigned char) ((min ((min (var_1_42 , var_1_23)) , 10)) + (var_1_82 - (max (var_1_27 , var_1_83)))))))) && ((var_1_45 || var_1_108) ? ((var_1_31 != var_1_30) ? (var_1_84 == ((signed long int) ((abs (var_1_21 + -16)) + ((var_1_85 - var_1_42) - var_1_80)))) : (var_1_84 == ((signed long int) ((var_1_41 + 32) + var_1_109)))) : 1)) && ((! ((last_1_var_1_50 + var_1_73) >= last_1_var_1_35)) ? (var_1_86 == ((signed long int) (max ((abs (last_1_var_1_98)) , (last_1_var_1_33 - last_1_var_1_33))))) : (var_1_86 == ((signed long int) ((max (var_1_42 , last_1_var_1_33)) - last_1_var_1_110))))) && ((var_1_85 < (var_1_23 / (max (var_1_89 , var_1_82)))) ? (var_1_88 == ((signed short int) (abs (var_1_43)))) : 1)) && ((var_1_98 <= (- var_1_64)) ? (var_1_46 ? (var_1_90 == ((unsigned long int) ((var_1_62 - 2u) + (min (var_1_13 , var_1_57))))) : 1) : (var_1_90 == ((unsigned long int) ((var_1_91 - (var_1_98 + var_1_100)) - var_1_81))))) && ((32 > var_1_79) ? (var_1_93 == ((double) var_1_53)) : 1)) && ((var_1_103 <= (abs (var_1_101))) ? ((var_1_49 || var_1_108) ? (var_1_94 == ((signed short int) ((max (var_1_22 , var_1_82)) + ((max (var_1_41 , 128)) + var_1_26)))) : (var_1_94 == ((signed short int) (min (var_1_104 , var_1_13))))) : 1)) && ((var_1_46 && (var_1_31 < var_1_61)) ? ((var_1_82 == 2) ? (var_1_95 == ((unsigned long int) var_1_94)) : (var_1_95 == ((unsigned long int) (min (var_1_94 , (var_1_38 - (var_1_50 + var_1_83))))))) : (var_1_95 == ((unsigned long int) ((var_1_62 - (1000000000u - var_1_23)) + var_1_83))))) && (((- 5) <= var_1_19) ? ((var_1_15 <= var_1_106) ? (var_1_96 == ((float) (5.875f - 63.875f))) : (var_1_96 == ((float) (min (var_1_31 , var_1_32))))) : (var_1_96 == ((float) (var_1_60 + (var_1_67 - var_1_68)))))) && (var_1_44 ? (var_1_97 == ((double) ((min (10.5 , (var_1_63 + var_1_30))) + var_1_60))) : 1)) && ((128 <= last_1_var_1_77) ? (last_1_var_1_108 ? (var_1_98 == ((unsigned short int) ((26539 - last_1_var_1_100) + (abs (10))))) : (((max (var_1_20 , var_1_83)) != last_1_var_1_41) ? ((var_1_75 == var_1_71) ? (((last_1_var_1_112 >= (var_1_61 + last_1_var_1_97)) && (var_1_31 == var_1_63)) ? (var_1_98 == ((unsigned short int) (abs (abs (abs (last_1_var_1_90)))))) : (var_1_98 == ((unsigned short int) (min (((min (var_1_83 , var_1_26)) + last_1_var_1_33) , (max (var_1_23 , (var_1_99 - last_1_var_1_77)))))))) : (var_1_98 == ((unsigned short int) (last_1_var_1_90 + var_1_83)))) : (var_1_47 ? (var_1_98 == ((unsigned short int) var_1_82)) : (var_1_98 == ((unsigned short int) var_1_57))))) : (var_1_98 == ((unsigned short int) last_1_var_1_100)))) && (var_1_108 ? (var_1_100 == ((signed short int) var_1_42)) : 1)) && (var_1_46 ? (var_1_101 == ((signed long int) var_1_73)) : 1)) && (var_1_102 == ((signed short int) var_1_21))) && (var_1_45 ? (var_1_103 == ((signed long int) var_1_72)) : (var_1_103 == ((signed long int) var_1_82)))) && (var_1_108 ? (var_1_104 == ((signed short int) var_1_82)) : 1)) && (var_1_105 == ((float) var_1_32))) && (var_1_44 ? (var_1_106 == ((double) var_1_63)) : (var_1_106 == ((double) var_1_53)))) && (var_1_46 ? (var_1_108 == ((unsigned char) var_1_45)) : 1)) && (var_1_109 == ((unsigned long int) 25u))) && (var_1_110 == ((unsigned short int) var_1_25))) && (var_1_111 == ((signed short int) -1))) && (var_1_46 ? (var_1_112 == ((float) var_1_61)) : (var_1_112 == ((float) var_1_67)))) && (var_1_45 ? (var_1_113 == ((signed short int) var_1_22)) : 1)) && ((1.0000000000025E11 != var_1_106) ? (var_1_114 == ((unsigned short int) (var_1_99 - var_1_80))) : 1)) && ((var_1_63 <= (last_1_var_1_115 / (min (var_1_71 , var_1_75)))) ? ((var_1_44 && var_1_46) ? (var_1_115 == ((double) var_1_71)) : (var_1_115 == ((double) var_1_29))) : (var_1_115 == ((double) var_1_55)))
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

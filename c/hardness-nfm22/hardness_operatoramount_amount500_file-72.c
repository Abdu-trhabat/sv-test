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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = -16;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 64;
double var_1_17 = 255.2;
double var_1_18 = 0.09999999999999998;
double var_1_19 = 10.5;
double var_1_20 = 100000000000000.8;
double var_1_21 = 0.0;
double var_1_22 = 31.5;
double var_1_23 = 5.75;
signed long int var_1_24 = -16;
double var_1_25 = 63.4;
double var_1_26 = 1000000000.25;
signed char var_1_27 = -50;
signed char var_1_28 = 25;
signed char var_1_29 = 5;
signed char var_1_30 = 50;
signed long int var_1_31 = -5;
unsigned short int var_1_32 = 54054;
signed char var_1_33 = -8;
signed char var_1_34 = -64;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
signed short int var_1_37 = -128;
signed char var_1_39 = 8;
unsigned short int var_1_40 = 10;
unsigned short int var_1_41 = 27989;
unsigned short int var_1_43 = 59996;
float var_1_44 = 1000.5;
unsigned long int var_1_45 = 2;
unsigned long int var_1_46 = 4007953074;
unsigned long int var_1_47 = 1;
signed short int var_1_48 = -16;
signed short int var_1_50 = -4;
unsigned short int var_1_51 = 8;
signed short int var_1_52 = 1;
float var_1_53 = 63.5;
signed char var_1_55 = -8;
unsigned short int var_1_56 = 128;
signed char var_1_57 = -128;
signed char var_1_58 = -2;
signed char var_1_59 = -2;
unsigned char var_1_60 = 1;
unsigned long int var_1_61 = 64;
unsigned char var_1_62 = 1;
signed char var_1_63 = -25;
signed char var_1_64 = 64;
signed char var_1_65 = 32;
signed char var_1_66 = 1;
unsigned short int var_1_67 = 8;
signed char var_1_68 = 8;
signed char var_1_69 = 2;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 200;
signed long int var_1_75 = 16;
unsigned long int var_1_76 = 4;
unsigned long int var_1_77 = 1567029610;
signed long int var_1_78 = -25;
signed long int var_1_79 = 1000000000;
float var_1_81 = 25.75;
unsigned char var_1_82 = 16;
unsigned char var_1_83 = 128;
unsigned char var_1_84 = 200;
unsigned char var_1_85 = 5;
unsigned char var_1_86 = 5;
unsigned long int var_1_87 = 2;
unsigned short int var_1_88 = 0;
unsigned char var_1_89 = 32;
unsigned short int var_1_90 = 8;
unsigned char var_1_91 = 1;
signed char var_1_92 = -2;
signed char var_1_93 = -100;
unsigned char var_1_94 = 64;
unsigned long int var_1_95 = 8;
unsigned char var_1_96 = 200;
double var_1_97 = 5.4;
signed char var_1_98 = -128;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned char last_1_var_1_14 = 8;
signed char last_1_var_1_27 = -50;
unsigned char last_1_var_1_35 = 1;
signed short int last_1_var_1_37 = -128;
signed short int last_1_var_1_48 = -16;
float last_1_var_1_53 = 63.5;
unsigned char last_1_var_1_60 = 1;
unsigned short int last_1_var_1_67 = 8;
unsigned char last_1_var_1_72 = 1;
unsigned char last_1_var_1_74 = 200;
unsigned char last_1_var_1_82 = 16;
unsigned char last_1_var_1_89 = 32;
unsigned char last_1_var_1_96 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch72Amount500
	signed long int stepLocal_13 = min (1 , var_1_28);
	signed long int stepLocal_12 = (last_1_var_1_82 + var_1_29) + var_1_28;
	if (stepLocal_13 < ((var_1_15 % 32) + last_1_var_1_96)) {
		var_1_40 = ((var_1_41 - (var_1_15 + 5)) + last_1_var_1_96);
	} else {
		if (stepLocal_12 >= 64) {
			var_1_40 = (last_1_var_1_14 + (abs (max (last_1_var_1_96 , last_1_var_1_74))));
		} else {
			var_1_40 = (var_1_43 - var_1_41);
		}
	}


	// From: Req9Batch72Amount500
	unsigned short int stepLocal_10 = var_1_32;
	if (last_1_var_1_48 > stepLocal_10) {
		var_1_34 = (max (32 , (max (-10 , var_1_28))));
	} else {
		if ((last_1_var_1_53 * (min (var_1_23 , var_1_26))) > var_1_22) {
			var_1_34 = var_1_29;
		}
	}


	// From: Req1Batch72Amount500
	unsigned char stepLocal_0 = last_1_var_1_35;
	if (stepLocal_0 || last_1_var_1_72) {
		var_1_1 = (last_1_var_1_72 && var_1_4);
	} else {
		var_1_1 = (var_1_4 && ((var_1_5 || var_1_6) || var_1_7));
	}


	// From: Req10Batch72Amount500
	var_1_35 = (! (last_1_var_1_1 || var_1_36));


	// From: Req6Batch72Amount500
	if (last_1_var_1_72) {
		var_1_27 = ((var_1_28 + var_1_29) - (var_1_30 + (50 - 5)));
	}


	// From: Req19Batch72Amount500
	if (var_1_21 != (var_1_19 - (min (var_1_22 , var_1_23)))) {
		var_1_51 = (min (var_1_43 , last_1_var_1_14));
	} else {
		var_1_51 = (max (last_1_var_1_89 , (min (last_1_var_1_89 , var_1_30))));
	}


	// From: Req31Batch72Amount500
	signed long int stepLocal_34 = last_1_var_1_67 / var_1_65;
	if (((var_1_30 / var_1_43) * (min (var_1_64 , var_1_15))) > stepLocal_34) {
		var_1_74 = ((var_1_64 + 100) - (abs (var_1_29)));
	}


	// From: Req3Batch72Amount500
	signed long int stepLocal_2 = last_1_var_1_37;
	signed long int stepLocal_1 = last_1_var_1_27;
	if (last_1_var_1_89 > stepLocal_1) {
		if (! (! (var_1_7 || last_1_var_1_35))) {
			var_1_14 = var_1_15;
		}
	} else {
		if (stepLocal_2 > (last_1_var_1_82 - var_1_15)) {
			var_1_14 = (max (var_1_16 , 10));
		}
	}


	// From: Req14Batch72Amount500
	var_1_44 = (max (var_1_20 , var_1_19));


	// From: Req24Batch72Amount500
	if (! last_1_var_1_60) {
		var_1_60 = (! var_1_36);
	} else {
		var_1_60 = (var_1_36 && var_1_4);
	}


	// From: Req25Batch72Amount500
	var_1_61 = (var_1_46 - var_1_32);


	// From: Req30Batch72Amount500
	if (((abs (var_1_41)) * 2u) < (var_1_64 | (var_1_32 / var_1_46))) {
		var_1_73 = ((! var_1_4) && var_1_36);
	}


	// From: Req33Batch72Amount500
	var_1_76 = ((abs (var_1_15)) + (var_1_77 - (1000000000u - 64u)));


	// From: Req35Batch72Amount500
	signed long int stepLocal_38 = 32;
	unsigned short int stepLocal_37 = var_1_32;
	if (var_1_59 == stepLocal_38) {
		if (var_1_15 < stepLocal_37) {
			if (var_1_60) {
				var_1_81 = ((min ((var_1_21 - var_1_23) , var_1_20)) - var_1_19);
			}
		} else {
			var_1_81 = (var_1_22 + (min (var_1_23 , (abs (var_1_20)))));
		}
	} else {
		var_1_81 = (var_1_21 - var_1_22);
	}


	// From: Req37Batch72Amount500
	if (var_1_84 > var_1_69) {
		var_1_85 = var_1_16;
	}


	// From: Req40Batch72Amount500
	if (var_1_5) {
		var_1_88 = var_1_64;
	} else {
		var_1_88 = 5;
	}


	// From: Req42Batch72Amount500
	if (var_1_36) {
		var_1_90 = var_1_66;
	} else {
		var_1_90 = var_1_65;
	}


	// From: Req43Batch72Amount500
	if (var_1_5) {
		var_1_91 = var_1_36;
	} else {
		var_1_91 = var_1_7;
	}


	// From: Req44Batch72Amount500
	if (var_1_35) {
		var_1_92 = var_1_59;
	} else {
		var_1_92 = var_1_59;
	}


	// From: Req45Batch72Amount500
	if (var_1_36) {
		var_1_93 = -16;
	} else {
		var_1_93 = var_1_59;
	}


	// From: Req46Batch72Amount500
	var_1_94 = var_1_28;


	// From: Req49Batch72Amount500
	if (var_1_91) {
		var_1_97 = (max (var_1_20 , ((var_1_19 - var_1_22) + 4.25)));
	}


	// From: Req50Batch72Amount500
	var_1_98 = var_1_69;


	// From: Req36Batch72Amount500
	signed long int stepLocal_41 = abs (-1);
	signed long int stepLocal_40 = (var_1_83 - var_1_29) / var_1_55;
	unsigned long int stepLocal_39 = var_1_46 - var_1_68;
	if (stepLocal_39 != (abs (var_1_40))) {
		if (var_1_76 == stepLocal_41) {
			var_1_82 = (abs (var_1_30));
		} else {
			if (stepLocal_40 == var_1_32) {
				var_1_82 = ((var_1_65 + var_1_29) + (abs (var_1_66)));
			} else {
				var_1_82 = (min (var_1_68 , (var_1_84 - var_1_30)));
			}
		}
	} else {
		var_1_82 = (var_1_30 + var_1_69);
	}


	// From: Req39Batch72Amount500
	if (var_1_1) {
		var_1_87 = var_1_14;
	}


	// From: Req15Batch72Amount500
	unsigned char stepLocal_14 = var_1_74;
	if (((var_1_27 / var_1_32) + var_1_16) < stepLocal_14) {
		var_1_45 = (abs (var_1_16));
	} else {
		if (var_1_21 > (var_1_19 - var_1_20)) {
			var_1_45 = (var_1_46 - var_1_15);
		} else {
			var_1_45 = 200u;
		}
	}


	// From: Req16Batch72Amount500
	if ((var_1_15 + (var_1_74 / var_1_41)) >= var_1_27) {
		if (var_1_6) {
			if ((~ (var_1_43 - 5)) == var_1_51) {
				var_1_47 = var_1_16;
			} else {
				var_1_47 = (max (var_1_30 , var_1_15));
			}
		}
	} else {
		var_1_47 = (max (var_1_41 , (abs (var_1_15 + 64u))));
	}


	// From: Req22Batch72Amount500
	if (var_1_51 <= var_1_74) {
		var_1_56 = (var_1_94 + (var_1_41 - var_1_16));
	} else {
		var_1_56 = (abs (var_1_15));
	}


	// From: Req38Batch72Amount500
	if (var_1_91) {
		var_1_86 = var_1_30;
	}


	// From: Req48Batch72Amount500
	if (var_1_86 < (var_1_43 * var_1_65)) {
		var_1_96 = var_1_65;
	}


	// From: Req27Batch72Amount500
	unsigned char stepLocal_28 = ! var_1_4;
	unsigned char stepLocal_27 = var_1_35;
	if ((var_1_18 + var_1_23) < (- (max (var_1_20 , var_1_81)))) {
		if ((! (var_1_56 != var_1_43)) && stepLocal_27) {
			var_1_63 = (var_1_30 + var_1_28);
		} else {
			var_1_63 = (var_1_30 - (var_1_64 - (var_1_65 - var_1_66)));
		}
	} else {
		if (var_1_1) {
			var_1_63 = (var_1_65 - var_1_29);
		} else {
			if (stepLocal_28 && (! (var_1_25 != var_1_44))) {
				var_1_63 = var_1_58;
			} else {
				var_1_63 = var_1_64;
			}
		}
	}


	// From: Req12Batch72Amount500
	signed long int stepLocal_11 = max ((-5 + var_1_86) , var_1_14);
	if (var_1_14 > stepLocal_11) {
		var_1_39 = (((max (var_1_28 , 10)) + var_1_30) - var_1_29);
	} else {
		var_1_39 = (var_1_28 - var_1_29);
	}


	// From: Req5Batch72Amount500
	if (((128.25 + var_1_21) / var_1_25) >= ((var_1_19 + var_1_18) / var_1_26)) {
		if (var_1_4) {
			if (var_1_7) {
				if (var_1_22 > var_1_20) {
					var_1_24 = var_1_16;
				} else {
					var_1_24 = var_1_15;
				}
			} else {
				var_1_24 = var_1_96;
			}
		} else {
			var_1_24 = var_1_85;
		}
	}


	// From: Req34Batch72Amount500
	signed char stepLocal_36 = var_1_58;
	if (stepLocal_36 < (var_1_39 / var_1_65)) {
		var_1_78 = (((var_1_79 - var_1_88) + var_1_76) - 5);
	} else {
		if (var_1_73) {
			var_1_78 = (var_1_94 - var_1_29);
		} else {
			var_1_78 = (max (var_1_40 , var_1_58));
		}
	}


	// From: Req4Batch72Amount500
	unsigned char stepLocal_5 = var_1_16;
	unsigned char stepLocal_4 = var_1_86;
	unsigned char stepLocal_3 = var_1_35;
	if (stepLocal_5 < var_1_98) {
		if (stepLocal_3 || var_1_5) {
			var_1_17 = var_1_18;
		} else {
			if (var_1_35) {
				var_1_17 = (min (((var_1_19 + var_1_20) - (var_1_21 - var_1_22)) , var_1_18));
			}
		}
	} else {
		if (! (var_1_98 != var_1_40)) {
			if (stepLocal_4 > var_1_39) {
				var_1_17 = (min ((min (var_1_19 , var_1_21)) , (var_1_20 - var_1_22)));
			} else {
				var_1_17 = (var_1_20 - (var_1_21 - (var_1_23 + 9.99999995E7)));
			}
		} else {
			var_1_17 = (var_1_19 + (var_1_20 - var_1_23));
		}
	}


	// From: Req21Batch72Amount500
	signed long int stepLocal_23 = var_1_74 + var_1_90;
	unsigned char stepLocal_22 = var_1_36;
	unsigned char stepLocal_21 = var_1_74;
	unsigned char stepLocal_20 = ! (var_1_82 <= var_1_51);
	unsigned char stepLocal_19 = var_1_7;
	signed long int stepLocal_18 = max (var_1_43 , var_1_40);
	if (stepLocal_19 && (var_1_96 < var_1_56)) {
		if (stepLocal_21 == var_1_85) {
			if (var_1_17 > ((5.5 - var_1_22) + 1.00000000088E9)) {
				var_1_53 = (var_1_19 + var_1_23);
			} else {
				if (stepLocal_23 == var_1_32) {
					if (stepLocal_18 > var_1_14) {
						var_1_53 = (var_1_22 + 8.5f);
					} else {
						var_1_53 = (abs (min ((var_1_21 - var_1_22) , var_1_20)));
					}
				} else {
					if ((var_1_44 * var_1_20) >= var_1_97) {
						var_1_53 = var_1_23;
					}
				}
			}
		} else {
			var_1_53 = (var_1_22 + var_1_23);
		}
	} else {
		if (stepLocal_22 || (var_1_26 > (- var_1_17))) {
			if ((0 <= var_1_96) && stepLocal_20) {
				var_1_53 = var_1_22;
			} else {
				var_1_53 = (min (var_1_21 , (min ((var_1_19 - var_1_22) , (max (var_1_23 , var_1_18))))));
			}
		}
	}


	// From: Req23Batch72Amount500
	signed char stepLocal_25 = var_1_27;
	unsigned short int stepLocal_24 = var_1_51;
	if (var_1_29 == stepLocal_25) {
		if (stepLocal_24 >= (64 | var_1_88)) {
			var_1_57 = ((var_1_58 + var_1_59) + (var_1_28 - var_1_30));
		}
	} else {
		if (var_1_20 < var_1_53) {
			var_1_57 = (var_1_58 + var_1_28);
		} else {
			var_1_57 = var_1_59;
		}
	}


	// From: Req11Batch72Amount500
	if ((max (var_1_23 , (var_1_22 + var_1_25))) > var_1_19) {
		if (var_1_45 > var_1_24) {
			var_1_37 = (var_1_15 - ((max (var_1_29 , var_1_16)) + var_1_30));
		} else {
			var_1_37 = (var_1_14 - var_1_14);
		}
	} else {
		if (var_1_18 == var_1_25) {
			var_1_37 = (max (var_1_16 , var_1_14));
		}
	}


	// From: Req32Batch72Amount500
	unsigned char stepLocal_35 = var_1_85;
	if (var_1_60) {
		var_1_75 = (min (var_1_37 , (var_1_32 - var_1_68)));
	} else {
		if (var_1_39 <= stepLocal_35) {
			var_1_75 = (var_1_86 - (abs (var_1_39)));
		}
	}


	// From: Req17Batch72Amount500
	if (var_1_21 >= var_1_17) {
		var_1_48 = (min (var_1_34 , var_1_86));
	} else {
		var_1_48 = (var_1_16 + (-200 + var_1_63));
	}


	// From: Req18Batch72Amount500
	unsigned char stepLocal_16 = var_1_16;
	unsigned char stepLocal_15 = (~ var_1_47) >= (var_1_14 - var_1_32);
	if (var_1_7) {
		if (stepLocal_15 && var_1_4) {
			if (stepLocal_16 < var_1_57) {
				if (var_1_97 >= var_1_44) {
					var_1_50 = ((min (var_1_74 , var_1_34)) + (var_1_30 - var_1_15));
				}
			} else {
				var_1_50 = var_1_14;
			}
		}
	} else {
		var_1_50 = ((var_1_29 + var_1_30) - var_1_86);
	}


	// From: Req26Batch72Amount500
	unsigned long int stepLocal_26 = var_1_87;
	if (var_1_50 != stepLocal_26) {
		var_1_62 = ((var_1_45 <= var_1_30) || var_1_36);
	} else {
		var_1_62 = (! var_1_5);
	}


	// From: Req41Batch72Amount500
	if (var_1_62) {
		var_1_89 = var_1_29;
	} else {
		var_1_89 = var_1_66;
	}


	// From: Req2Batch72Amount500
	if (var_1_60) {
		var_1_8 = (min ((-10000 + var_1_39) , ((var_1_57 + 64) + var_1_89)));
	} else {
		var_1_8 = ((min (16 , var_1_96)) - var_1_85);
	}


	// From: Req8Batch72Amount500
	unsigned char stepLocal_9 = var_1_89;
	if (stepLocal_9 == var_1_16) {
		if (var_1_6) {
			var_1_33 = (min ((var_1_28 - var_1_30) , var_1_29));
		}
	}


	// From: Req28Batch72Amount500
	signed long int stepLocal_32 = var_1_66 / var_1_68;
	unsigned char stepLocal_31 = var_1_14;
	signed long int stepLocal_30 = var_1_48 + var_1_55;
	signed char stepLocal_29 = var_1_27;
	if (((var_1_87 * var_1_33) << (var_1_68 - var_1_69)) != stepLocal_31) {
		if (var_1_96 <= stepLocal_32) {
			if ((- (max (4.5f , var_1_23))) < (var_1_21 - var_1_22)) {
				var_1_67 = ((var_1_41 - var_1_15) + var_1_74);
			} else {
				if (stepLocal_29 <= var_1_64) {
					var_1_67 = ((var_1_28 + var_1_65) + var_1_74);
				} else {
					var_1_67 = (abs (min (16 , 1000)));
				}
			}
		} else {
			var_1_67 = (min (var_1_86 , (var_1_16 + var_1_96)));
		}
	} else {
		if (var_1_14 >= stepLocal_30) {
			var_1_67 = (55748 - (max (4 , (min (var_1_68 , var_1_64)))));
		}
	}


	// From: Req7Batch72Amount500
	signed char stepLocal_8 = var_1_33;
	signed long int stepLocal_7 = var_1_32 - (var_1_74 + var_1_28);
	unsigned char stepLocal_6 = var_1_73;
	if (stepLocal_7 >= var_1_63) {
		if (var_1_4 && stepLocal_6) {
			var_1_31 = ((var_1_89 + var_1_29) + var_1_16);
		} else {
			if ((var_1_28 + var_1_74) > stepLocal_8) {
				var_1_31 = ((max (25 , 8)) - var_1_74);
			} else {
				var_1_31 = (min (var_1_16 , var_1_74));
			}
		}
	} else {
		var_1_31 = (abs (var_1_15));
	}


	// From: Req20Batch72Amount500
	unsigned short int stepLocal_17 = var_1_41;
	if ((max ((var_1_39 + var_1_8) , var_1_28)) == stepLocal_17) {
		var_1_52 = var_1_29;
	}


	// From: Req47Batch72Amount500
	if (var_1_62) {
		var_1_95 = var_1_29;
	} else {
		var_1_95 = 64u;
	}


	// From: Req29Batch72Amount500
	unsigned char stepLocal_33 = var_1_64 < (var_1_28 + var_1_93);
	if (var_1_62) {
		if (var_1_60) {
			if (stepLocal_33 || (var_1_8 != (var_1_85 / var_1_32))) {
				var_1_72 = ((var_1_7 && var_1_6) || (! var_1_36));
			}
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 4611686.018427382800e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691390e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	assume_abort_if_not(var_1_25 != 0.0F);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 32767);
	assume_abort_if_not(var_1_32 <= 65535);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 32767);
	assume_abort_if_not(var_1_43 <= 65534);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 2147483647);
	assume_abort_if_not(var_1_46 <= 4294967294);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -128);
	assume_abort_if_not(var_1_55 <= 127);
	assume_abort_if_not(var_1_55 != 0);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -31);
	assume_abort_if_not(var_1_58 <= 32);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -31);
	assume_abort_if_not(var_1_59 <= 31);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 63);
	assume_abort_if_not(var_1_64 <= 126);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 31);
	assume_abort_if_not(var_1_65 <= 63);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 31);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 4);
	assume_abort_if_not(var_1_68 <= 9);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 4);
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 1073741823);
	assume_abort_if_not(var_1_77 <= 2147483647);
	var_1_79 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_79 >= 536870911);
	assume_abort_if_not(var_1_79 <= 1073741823);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 127);
	assume_abort_if_not(var_1_83 <= 255);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 127);
	assume_abort_if_not(var_1_84 <= 254);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_96 = var_1_96;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_35 || last_1_var_1_72) ? (var_1_1 == ((unsigned char) (last_1_var_1_72 && var_1_4))) : (var_1_1 == ((unsigned char) (var_1_4 && ((var_1_5 || var_1_6) || var_1_7))))) && (var_1_60 ? (var_1_8 == ((signed short int) (min ((-10000 + var_1_39) , ((var_1_57 + 64) + var_1_89))))) : (var_1_8 == ((signed short int) ((min (16 , var_1_96)) - var_1_85))))) && ((last_1_var_1_89 > last_1_var_1_27) ? ((! (! (var_1_7 || last_1_var_1_35))) ? (var_1_14 == ((unsigned char) var_1_15)) : 1) : ((last_1_var_1_37 > (last_1_var_1_82 - var_1_15)) ? (var_1_14 == ((unsigned char) (max (var_1_16 , 10)))) : 1))) && ((var_1_16 < var_1_98) ? ((var_1_35 || var_1_5) ? (var_1_17 == ((double) var_1_18)) : (var_1_35 ? (var_1_17 == ((double) (min (((var_1_19 + var_1_20) - (var_1_21 - var_1_22)) , var_1_18)))) : 1)) : ((! (var_1_98 != var_1_40)) ? ((var_1_86 > var_1_39) ? (var_1_17 == ((double) (min ((min (var_1_19 , var_1_21)) , (var_1_20 - var_1_22))))) : (var_1_17 == ((double) (var_1_20 - (var_1_21 - (var_1_23 + 9.99999995E7)))))) : (var_1_17 == ((double) (var_1_19 + (var_1_20 - var_1_23))))))) && ((((128.25 + var_1_21) / var_1_25) >= ((var_1_19 + var_1_18) / var_1_26)) ? (var_1_4 ? (var_1_7 ? ((var_1_22 > var_1_20) ? (var_1_24 == ((signed long int) var_1_16)) : (var_1_24 == ((signed long int) var_1_15))) : (var_1_24 == ((signed long int) var_1_96))) : (var_1_24 == ((signed long int) var_1_85))) : 1)) && (last_1_var_1_72 ? (var_1_27 == ((signed char) ((var_1_28 + var_1_29) - (var_1_30 + (50 - 5))))) : 1)) && (((var_1_32 - (var_1_74 + var_1_28)) >= var_1_63) ? ((var_1_4 && var_1_73) ? (var_1_31 == ((signed long int) ((var_1_89 + var_1_29) + var_1_16))) : (((var_1_28 + var_1_74) > var_1_33) ? (var_1_31 == ((signed long int) ((max (25 , 8)) - var_1_74))) : (var_1_31 == ((signed long int) (min (var_1_16 , var_1_74)))))) : (var_1_31 == ((signed long int) (abs (var_1_15)))))) && ((var_1_89 == var_1_16) ? (var_1_6 ? (var_1_33 == ((signed char) (min ((var_1_28 - var_1_30) , var_1_29)))) : 1) : 1)) && ((last_1_var_1_48 > var_1_32) ? (var_1_34 == ((signed char) (max (32 , (max (-10 , var_1_28)))))) : (((last_1_var_1_53 * (min (var_1_23 , var_1_26))) > var_1_22) ? (var_1_34 == ((signed char) var_1_29)) : 1))) && (var_1_35 == ((unsigned char) (! (last_1_var_1_1 || var_1_36))))) && (((max (var_1_23 , (var_1_22 + var_1_25))) > var_1_19) ? ((var_1_45 > var_1_24) ? (var_1_37 == ((signed short int) (var_1_15 - ((max (var_1_29 , var_1_16)) + var_1_30)))) : (var_1_37 == ((signed short int) (var_1_14 - var_1_14)))) : ((var_1_18 == var_1_25) ? (var_1_37 == ((signed short int) (max (var_1_16 , var_1_14)))) : 1))) && ((var_1_14 > (max ((-5 + var_1_86) , var_1_14))) ? (var_1_39 == ((signed char) (((max (var_1_28 , 10)) + var_1_30) - var_1_29))) : (var_1_39 == ((signed char) (var_1_28 - var_1_29))))) && (((min (1 , var_1_28)) < ((var_1_15 % 32) + last_1_var_1_96)) ? (var_1_40 == ((unsigned short int) ((var_1_41 - (var_1_15 + 5)) + last_1_var_1_96))) : ((((last_1_var_1_82 + var_1_29) + var_1_28) >= 64) ? (var_1_40 == ((unsigned short int) (last_1_var_1_14 + (abs (max (last_1_var_1_96 , last_1_var_1_74)))))) : (var_1_40 == ((unsigned short int) (var_1_43 - var_1_41)))))) && (var_1_44 == ((float) (max (var_1_20 , var_1_19))))) && ((((var_1_27 / var_1_32) + var_1_16) < var_1_74) ? (var_1_45 == ((unsigned long int) (abs (var_1_16)))) : ((var_1_21 > (var_1_19 - var_1_20)) ? (var_1_45 == ((unsigned long int) (var_1_46 - var_1_15))) : (var_1_45 == ((unsigned long int) 200u))))) && (((var_1_15 + (var_1_74 / var_1_41)) >= var_1_27) ? (var_1_6 ? (((~ (var_1_43 - 5)) == var_1_51) ? (var_1_47 == ((unsigned long int) var_1_16)) : (var_1_47 == ((unsigned long int) (max (var_1_30 , var_1_15))))) : 1) : (var_1_47 == ((unsigned long int) (max (var_1_41 , (abs (var_1_15 + 64u)))))))) && ((var_1_21 >= var_1_17) ? (var_1_48 == ((signed short int) (min (var_1_34 , var_1_86)))) : (var_1_48 == ((signed short int) (var_1_16 + (-200 + var_1_63)))))) && (var_1_7 ? ((((~ var_1_47) >= (var_1_14 - var_1_32)) && var_1_4) ? ((var_1_16 < var_1_57) ? ((var_1_97 >= var_1_44) ? (var_1_50 == ((signed short int) ((min (var_1_74 , var_1_34)) + (var_1_30 - var_1_15)))) : 1) : (var_1_50 == ((signed short int) var_1_14))) : 1) : (var_1_50 == ((signed short int) ((var_1_29 + var_1_30) - var_1_86))))) && ((var_1_21 != (var_1_19 - (min (var_1_22 , var_1_23)))) ? (var_1_51 == ((unsigned short int) (min (var_1_43 , last_1_var_1_14)))) : (var_1_51 == ((unsigned short int) (max (last_1_var_1_89 , (min (last_1_var_1_89 , var_1_30)))))))) && (((max ((var_1_39 + var_1_8) , var_1_28)) == var_1_41) ? (var_1_52 == ((signed short int) var_1_29)) : 1)) && ((var_1_7 && (var_1_96 < var_1_56)) ? ((var_1_74 == var_1_85) ? ((var_1_17 > ((5.5 - var_1_22) + 1.00000000088E9)) ? (var_1_53 == ((float) (var_1_19 + var_1_23))) : (((var_1_74 + var_1_90) == var_1_32) ? (((max (var_1_43 , var_1_40)) > var_1_14) ? (var_1_53 == ((float) (var_1_22 + 8.5f))) : (var_1_53 == ((float) (abs (min ((var_1_21 - var_1_22) , var_1_20)))))) : (((var_1_44 * var_1_20) >= var_1_97) ? (var_1_53 == ((float) var_1_23)) : 1))) : (var_1_53 == ((float) (var_1_22 + var_1_23)))) : ((var_1_36 || (var_1_26 > (- var_1_17))) ? (((0 <= var_1_96) && (! (var_1_82 <= var_1_51))) ? (var_1_53 == ((float) var_1_22)) : (var_1_53 == ((float) (min (var_1_21 , (min ((var_1_19 - var_1_22) , (max (var_1_23 , var_1_18))))))))) : 1))) && ((var_1_51 <= var_1_74) ? (var_1_56 == ((unsigned short int) (var_1_94 + (var_1_41 - var_1_16)))) : (var_1_56 == ((unsigned short int) (abs (var_1_15)))))) && ((var_1_29 == var_1_27) ? ((var_1_51 >= (64 | var_1_88)) ? (var_1_57 == ((signed char) ((var_1_58 + var_1_59) + (var_1_28 - var_1_30)))) : 1) : ((var_1_20 < var_1_53) ? (var_1_57 == ((signed char) (var_1_58 + var_1_28))) : (var_1_57 == ((signed char) var_1_59))))) && ((! last_1_var_1_60) ? (var_1_60 == ((unsigned char) (! var_1_36))) : (var_1_60 == ((unsigned char) (var_1_36 && var_1_4))))) && (var_1_61 == ((unsigned long int) (var_1_46 - var_1_32)))) && ((var_1_50 != var_1_87) ? (var_1_62 == ((unsigned char) ((var_1_45 <= var_1_30) || var_1_36))) : (var_1_62 == ((unsigned char) (! var_1_5))))) && (((var_1_18 + var_1_23) < (- (max (var_1_20 , var_1_81)))) ? (((! (var_1_56 != var_1_43)) && var_1_35) ? (var_1_63 == ((signed char) (var_1_30 + var_1_28))) : (var_1_63 == ((signed char) (var_1_30 - (var_1_64 - (var_1_65 - var_1_66)))))) : (var_1_1 ? (var_1_63 == ((signed char) (var_1_65 - var_1_29))) : (((! var_1_4) && (! (var_1_25 != var_1_44))) ? (var_1_63 == ((signed char) var_1_58)) : (var_1_63 == ((signed char) var_1_64)))))) && ((((var_1_87 * var_1_33) << (var_1_68 - var_1_69)) != var_1_14) ? ((var_1_96 <= (var_1_66 / var_1_68)) ? (((- (max (4.5f , var_1_23))) < (var_1_21 - var_1_22)) ? (var_1_67 == ((unsigned short int) ((var_1_41 - var_1_15) + var_1_74))) : ((var_1_27 <= var_1_64) ? (var_1_67 == ((unsigned short int) ((var_1_28 + var_1_65) + var_1_74))) : (var_1_67 == ((unsigned short int) (abs (min (16 , 1000))))))) : (var_1_67 == ((unsigned short int) (min (var_1_86 , (var_1_16 + var_1_96)))))) : ((var_1_14 >= (var_1_48 + var_1_55)) ? (var_1_67 == ((unsigned short int) (55748 - (max (4 , (min (var_1_68 , var_1_64))))))) : 1))) && (var_1_62 ? (var_1_60 ? (((var_1_64 < (var_1_28 + var_1_93)) || (var_1_8 != (var_1_85 / var_1_32))) ? (var_1_72 == ((unsigned char) ((var_1_7 && var_1_6) || (! var_1_36)))) : 1) : 1) : 1)) && ((((abs (var_1_41)) * 2u) < (var_1_64 | (var_1_32 / var_1_46))) ? (var_1_73 == ((unsigned char) ((! var_1_4) && var_1_36))) : 1)) && ((((var_1_30 / var_1_43) * (min (var_1_64 , var_1_15))) > (last_1_var_1_67 / var_1_65)) ? (var_1_74 == ((unsigned char) ((var_1_64 + 100) - (abs (var_1_29))))) : 1)) && (var_1_60 ? (var_1_75 == ((signed long int) (min (var_1_37 , (var_1_32 - var_1_68))))) : ((var_1_39 <= var_1_85) ? (var_1_75 == ((signed long int) (var_1_86 - (abs (var_1_39))))) : 1))) && (var_1_76 == ((unsigned long int) ((abs (var_1_15)) + (var_1_77 - (1000000000u - 64u)))))) && ((var_1_58 < (var_1_39 / var_1_65)) ? (var_1_78 == ((signed long int) (((var_1_79 - var_1_88) + var_1_76) - 5))) : (var_1_73 ? (var_1_78 == ((signed long int) (var_1_94 - var_1_29))) : (var_1_78 == ((signed long int) (max (var_1_40 , var_1_58))))))) && ((var_1_59 == 32) ? ((var_1_15 < var_1_32) ? (var_1_60 ? (var_1_81 == ((float) ((min ((var_1_21 - var_1_23) , var_1_20)) - var_1_19))) : 1) : (var_1_81 == ((float) (var_1_22 + (min (var_1_23 , (abs (var_1_20)))))))) : (var_1_81 == ((float) (var_1_21 - var_1_22))))) && (((var_1_46 - var_1_68) != (abs (var_1_40))) ? ((var_1_76 == (abs (-1))) ? (var_1_82 == ((unsigned char) (abs (var_1_30)))) : ((((var_1_83 - var_1_29) / var_1_55) == var_1_32) ? (var_1_82 == ((unsigned char) ((var_1_65 + var_1_29) + (abs (var_1_66))))) : (var_1_82 == ((unsigned char) (min (var_1_68 , (var_1_84 - var_1_30))))))) : (var_1_82 == ((unsigned char) (var_1_30 + var_1_69))))) && ((var_1_84 > var_1_69) ? (var_1_85 == ((unsigned char) var_1_16)) : 1)) && (var_1_91 ? (var_1_86 == ((unsigned char) var_1_30)) : 1)) && (var_1_1 ? (var_1_87 == ((unsigned long int) var_1_14)) : 1)) && (var_1_5 ? (var_1_88 == ((unsigned short int) var_1_64)) : (var_1_88 == ((unsigned short int) 5)))) && (var_1_62 ? (var_1_89 == ((unsigned char) var_1_29)) : (var_1_89 == ((unsigned char) var_1_66)))) && (var_1_36 ? (var_1_90 == ((unsigned short int) var_1_66)) : (var_1_90 == ((unsigned short int) var_1_65)))) && (var_1_5 ? (var_1_91 == ((unsigned char) var_1_36)) : (var_1_91 == ((unsigned char) var_1_7)))) && (var_1_35 ? (var_1_92 == ((signed char) var_1_59)) : (var_1_92 == ((signed char) var_1_59)))) && (var_1_36 ? (var_1_93 == ((signed char) -16)) : (var_1_93 == ((signed char) var_1_59)))) && (var_1_94 == ((unsigned char) var_1_28))) && (var_1_62 ? (var_1_95 == ((unsigned long int) var_1_29)) : (var_1_95 == ((unsigned long int) 64u)))) && ((var_1_86 < (var_1_43 * var_1_65)) ? (var_1_96 == ((unsigned char) var_1_65)) : 1)) && (var_1_91 ? (var_1_97 == ((double) (max (var_1_20 , ((var_1_19 - var_1_22) + 4.25))))) : 1)) && (var_1_98 == ((signed char) var_1_69))
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

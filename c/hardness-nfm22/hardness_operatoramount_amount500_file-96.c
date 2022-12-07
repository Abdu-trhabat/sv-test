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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch96Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 200;
float var_1_6 = 100000000.15;
float var_1_9 = -0.25;
float var_1_10 = 63.5;
signed short int var_1_11 = 1;
signed short int var_1_13 = 1;
float var_1_16 = 1000000000000.145;
float var_1_17 = 255.4;
float var_1_18 = 1.8;
float var_1_19 = 50.2;
unsigned short int var_1_20 = 2;
unsigned short int var_1_24 = 32;
unsigned char var_1_25 = 2;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 1;
unsigned short int var_1_28 = 100;
unsigned short int var_1_29 = 30769;
unsigned short int var_1_30 = 29394;
double var_1_31 = 63.775;
double var_1_32 = 1000.7;
double var_1_33 = 0.0;
unsigned char var_1_34 = 0;
unsigned short int var_1_35 = 62899;
unsigned char var_1_36 = 0;
float var_1_37 = 1.45;
unsigned char var_1_38 = 0;
signed short int var_1_39 = -5;
signed char var_1_42 = -4;
signed char var_1_43 = 1;
signed char var_1_44 = -16;
signed char var_1_45 = 25;
signed char var_1_46 = 50;
signed char var_1_47 = 4;
signed char var_1_48 = 2;
float var_1_49 = 4.5;
float var_1_50 = 25.875;
float var_1_51 = 10000000.8;
double var_1_52 = 10.5;
double var_1_53 = 0.0;
double var_1_54 = 4.125;
double var_1_55 = 0.0;
double var_1_56 = 49.25;
double var_1_57 = 0.6;
signed short int var_1_58 = -10;
signed short int var_1_59 = 10000;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 25;
unsigned char var_1_64 = 64;
unsigned char var_1_65 = 2;
float var_1_66 = 24.9;
double var_1_67 = 32.5;
double var_1_68 = 200.775;
signed short int var_1_69 = -25;
unsigned long int var_1_70 = 4;
signed short int var_1_71 = 4;
signed short int var_1_72 = 23915;
float var_1_73 = 256.4;
signed char var_1_74 = 1;
signed char var_1_75 = 2;
double var_1_76 = 31.25;
unsigned short int var_1_77 = 32;
unsigned char var_1_78 = 1;
double var_1_80 = 64.4;
unsigned short int var_1_81 = 0;
unsigned char var_1_82 = 10;
unsigned char var_1_83 = 64;
signed char var_1_84 = 50;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 1;
unsigned char var_1_87 = 0;
double var_1_88 = 2.5;
unsigned long int var_1_89 = 2816743837;
unsigned char var_1_90 = 1;
float var_1_91 = 99.4;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 1;
signed short int var_1_94 = -256;
unsigned long int var_1_95 = 25;
signed long int var_1_96 = 256;
unsigned char var_1_97 = 1;
unsigned long int var_1_98 = 128;
signed char var_1_99 = 32;
unsigned long int var_1_100 = 100;
signed long int var_1_101 = -1;
float var_1_102 = 2.75;
unsigned char var_1_103 = 2;
unsigned long int var_1_104 = 16;
signed long int var_1_105 = -64;
signed short int var_1_106 = 10;
signed short int var_1_110 = 50;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_20 = 2;
unsigned short int last_1_var_1_24 = 32;
unsigned char last_1_var_1_25 = 2;
double last_1_var_1_31 = 63.775;
unsigned char last_1_var_1_34 = 0;
signed short int last_1_var_1_58 = -10;
unsigned char last_1_var_1_60 = 0;
unsigned char last_1_var_1_63 = 25;
double last_1_var_1_67 = 32.5;
signed short int last_1_var_1_69 = -25;
unsigned short int last_1_var_1_77 = 32;
unsigned char last_1_var_1_82 = 10;
signed char last_1_var_1_84 = 50;
unsigned char last_1_var_1_85 = 0;
unsigned char last_1_var_1_93 = 1;
signed long int last_1_var_1_96 = 256;
unsigned char last_1_var_1_103 = 2;
unsigned long int last_1_var_1_104 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req42Batch96Amount500
	if (last_1_var_1_34) {
		var_1_96 = last_1_var_1_63;
	} else {
		var_1_96 = last_1_var_1_84;
	}


	// From: Req19Batch96Amount500
	unsigned long int stepLocal_11 = last_1_var_1_104;
	signed long int stepLocal_10 = abs (var_1_29);
	if (last_1_var_1_93) {
		var_1_60 = (var_1_36 || var_1_38);
	} else {
		if (var_1_27 > stepLocal_10) {
			if (var_1_33 >= (- (max (var_1_55 , last_1_var_1_67)))) {
				if (stepLocal_11 < var_1_45) {
					var_1_60 = (! var_1_61);
				} else {
					var_1_60 = (var_1_61 && var_1_62);
				}
			}
		} else {
			var_1_60 = (! (! var_1_36));
		}
	}


	// From: Req17Batch96Amount500
	if (var_1_60 || var_1_38) {
		var_1_57 = var_1_54;
	}


	// From: Req39Batch96Amount500
	if (var_1_60) {
		var_1_93 = var_1_86;
	} else {
		var_1_93 = var_1_36;
	}


	// From: Req50Batch96Amount500
	if (last_1_var_1_85) {
		var_1_104 = last_1_var_1_58;
	}


	// From: Req37Batch96Amount500
	if (var_1_93) {
		var_1_91 = var_1_54;
	} else {
		var_1_91 = var_1_33;
	}


	// From: Req51Batch96Amount500
	var_1_105 = var_1_104;


	// From: Req32Batch96Amount500
	unsigned char stepLocal_26 = var_1_83;
	unsigned char stepLocal_25 = 2 <= (min (last_1_var_1_69 , last_1_var_1_103));
	unsigned char stepLocal_24 = var_1_36;
	if ((last_1_var_1_31 > var_1_50) && stepLocal_25) {
		if (stepLocal_24 || var_1_62) {
			var_1_82 = (max (((100 + var_1_83) - (abs (var_1_27))) , var_1_46));
		}
	} else {
		if (last_1_var_1_77 >= stepLocal_26) {
			var_1_82 = (var_1_27 + var_1_65);
		} else {
			var_1_82 = (min (var_1_46 , (var_1_26 - var_1_47)));
		}
	}


	// From: Req40Batch96Amount500
	if (var_1_38) {
		var_1_94 = var_1_64;
	} else {
		var_1_94 = var_1_82;
	}


	// From: Req20Batch96Amount500
	signed long int stepLocal_12 = var_1_26 ^ var_1_48;
	if ((var_1_56 - var_1_17) < var_1_32) {
		if (last_1_var_1_96 == stepLocal_12) {
			var_1_63 = ((abs (var_1_26)) - (var_1_64 - 10));
		} else {
			var_1_63 = var_1_46;
		}
	} else {
		var_1_63 = ((25 + (var_1_47 + var_1_65)) + var_1_27);
	}


	// From: Req9Batch96Amount500
	signed long int stepLocal_3 = last_1_var_1_103;
	if (! (last_1_var_1_82 <= (- last_1_var_1_20))) {
		if (last_1_var_1_25 > stepLocal_3) {
			var_1_25 = ((min (128 , var_1_26)) - var_1_27);
		} else {
			var_1_25 = var_1_27;
		}
	} else {
		var_1_25 = var_1_27;
	}


	// From: Req49Batch96Amount500
	if (last_1_var_1_60) {
		var_1_103 = var_1_64;
	} else {
		var_1_103 = var_1_74;
	}


	// From: Req15Batch96Amount500
	unsigned char stepLocal_8 = var_1_103;
	if (var_1_35 == stepLocal_8) {
		var_1_49 = (var_1_32 + var_1_50);
	} else {
		var_1_49 = ((max ((128.375f + var_1_51) , 50.4f)) + var_1_32);
	}


	// From: Req5Batch96Amount500
	if (! (var_1_10 > var_1_9)) {
		var_1_16 = (max ((max (var_1_9 , (var_1_17 - var_1_18))) , var_1_10));
	}


	// From: Req6Batch96Amount500
	if (var_1_18 <= (- var_1_10)) {
		var_1_19 = (min (var_1_9 , var_1_10));
	}


	// From: Req36Batch96Amount500
	var_1_90 = var_1_38;


	// From: Req38Batch96Amount500
	if (var_1_86) {
		var_1_92 = var_1_36;
	}


	// From: Req43Batch96Amount500
	var_1_97 = var_1_38;


	// From: Req44Batch96Amount500
	var_1_98 = var_1_26;


	// From: Req45Batch96Amount500
	var_1_99 = var_1_45;


	// From: Req46Batch96Amount500
	var_1_100 = var_1_47;


	// From: Req48Batch96Amount500
	if (var_1_92) {
		var_1_102 = var_1_50;
	} else {
		var_1_102 = var_1_68;
	}


	// From: Req53Batch96Amount500
	var_1_110 = var_1_99;


	// From: Req33Batch96Amount500
	signed long int stepLocal_29 = (var_1_35 - var_1_27) * var_1_64;
	unsigned char stepLocal_28 = var_1_26;
	signed long int stepLocal_27 = ~ 64;
	if ((abs (64.2f)) >= var_1_51) {
		if (var_1_91 <= var_1_17) {
			if (stepLocal_27 > var_1_110) {
				var_1_84 = (((var_1_74 + var_1_75) + var_1_47) + (max ((var_1_65 + var_1_45) , -16)));
			} else {
				if (stepLocal_29 > var_1_44) {
					var_1_84 = var_1_74;
				} else {
					var_1_84 = (max ((min (var_1_47 , var_1_74)) , var_1_43));
				}
			}
		} else {
			var_1_84 = (min (var_1_45 , -16));
		}
	} else {
		if (var_1_110 <= stepLocal_28) {
			var_1_84 = (min ((min (var_1_65 , (min (var_1_45 , var_1_48)))) , -8));
		}
	}


	// From: Req3Batch96Amount500
	var_1_11 = (min (var_1_84 , 2));


	// From: Req29Batch96Amount500
	if (var_1_104 < ((max (var_1_30 , var_1_65)) - var_1_103)) {
		var_1_78 = (! var_1_61);
	}


	// From: Req16Batch96Amount500
	if (10000 <= var_1_98) {
		if (((var_1_82 | var_1_63) * (var_1_27 - var_1_47)) >= var_1_45) {
			var_1_52 = (var_1_32 + var_1_50);
		}
	} else {
		var_1_52 = (((var_1_54 + 24.8) + (var_1_55 - var_1_56)) - var_1_32);
	}


	// From: Req8Batch96Amount500
	if (var_1_10 >= (var_1_18 - var_1_17)) {
		if (var_1_92) {
			if (last_1_var_1_24 >= last_1_var_1_24) {
				var_1_24 = var_1_63;
			}
		}
	} else {
		var_1_24 = (32 + var_1_25);
	}


	// From: Req31Batch96Amount500
	if ((var_1_75 / var_1_30) > (var_1_25 - var_1_98)) {
		var_1_81 = (max (var_1_63 , var_1_59));
	}


	// From: Req21Batch96Amount500
	signed char stepLocal_14 = var_1_47;
	signed long int stepLocal_13 = var_1_96;
	if ((128u >> var_1_81) != stepLocal_14) {
		if ((- (var_1_29 + var_1_11)) < stepLocal_13) {
			var_1_66 = (var_1_56 + 1.8f);
		} else {
			var_1_66 = 24.5f;
		}
	}


	// From: Req41Batch96Amount500
	var_1_95 = var_1_81;


	// From: Req47Batch96Amount500
	var_1_101 = var_1_81;


	// From: Req10Batch96Amount500
	unsigned char stepLocal_4 = var_1_82;
	if (stepLocal_4 <= (var_1_81 % var_1_26)) {
		if (var_1_92) {
			var_1_28 = ((var_1_29 + var_1_30) - var_1_27);
		} else {
			var_1_28 = (var_1_105 + (128 + var_1_26));
		}
	}


	// From: Req28Batch96Amount500
	unsigned char stepLocal_23 = var_1_61;
	if (var_1_38) {
		if (var_1_78 || stepLocal_23) {
			var_1_77 = (max (var_1_46 , 1));
		} else {
			var_1_77 = var_1_30;
		}
	} else {
		var_1_77 = (abs (16));
	}


	// From: Req35Batch96Amount500
	if ((var_1_96 % var_1_26) == ((var_1_89 - var_1_24) + 25u)) {
		if ((~ (var_1_63 | var_1_24)) <= ((var_1_100 + var_1_94) % (abs (var_1_59)))) {
			var_1_88 = var_1_55;
		} else {
			var_1_88 = (min (var_1_10 , (var_1_55 + var_1_54)));
		}
	} else {
		if (var_1_62) {
			var_1_88 = var_1_33;
		}
	}


	// From: Req1Batch96Amount500
	var_1_1 = (min (var_1_24 , (var_1_82 - (min (var_1_63 , var_1_81)))));


	// From: Req23Batch96Amount500
	unsigned char stepLocal_16 = var_1_103;
	if ((var_1_26 / var_1_30) >= stepLocal_16) {
		var_1_69 = (max ((var_1_46 - var_1_47) , var_1_48));
	} else {
		var_1_69 = (256 - (var_1_1 + (var_1_27 + var_1_48)));
	}


	// From: Req4Batch96Amount500
	unsigned short int stepLocal_2 = var_1_77;
	if (var_1_25 <= stepLocal_2) {
		var_1_13 = (abs (max (var_1_84 , var_1_99)));
	}


	// From: Req24Batch96Amount500
	signed long int stepLocal_17 = var_1_101 + var_1_48;
	if (var_1_43 >= stepLocal_17) {
		var_1_70 = (max (var_1_27 , var_1_30));
	}


	// From: Req26Batch96Amount500
	if (var_1_10 > (- (abs (var_1_66)))) {
		if (((var_1_25 + 25) % var_1_46) <= (var_1_77 >> (var_1_74 + var_1_75))) {
			var_1_73 = (var_1_56 + (max (var_1_55 , var_1_51)));
		}
	}


	// From: Req12Batch96Amount500
	if ((var_1_69 / (var_1_35 - var_1_26)) < var_1_27) {
		if ((var_1_24 % (min (var_1_26 , var_1_35))) > (var_1_82 | var_1_96)) {
			var_1_34 = (var_1_92 && var_1_36);
		}
	} else {
		if (var_1_9 < (var_1_17 / (max (var_1_33 , var_1_37)))) {
			var_1_34 = (! ((var_1_92 || var_1_36) && var_1_38));
		} else {
			var_1_34 = var_1_36;
		}
	}


	// From: Req2Batch96Amount500
	unsigned short int stepLocal_1 = var_1_28;
	signed long int stepLocal_0 = min (-4 , var_1_1);
	if (0 == stepLocal_0) {
		if (var_1_60) {
			if (var_1_103 < stepLocal_1) {
				var_1_6 = (max (var_1_9 , var_1_10));
			} else {
				var_1_6 = var_1_10;
			}
		}
	}


	// From: Req22Batch96Amount500
	signed long int stepLocal_15 = var_1_26 * var_1_103;
	if ((var_1_49 / var_1_33) >= (var_1_54 - var_1_32)) {
		var_1_67 = (255.5 - (max ((min (var_1_33 , var_1_55)) , var_1_53)));
	} else {
		if ((min (var_1_33 , (var_1_6 + var_1_50))) == (- var_1_57)) {
			if (var_1_37 > last_1_var_1_67) {
				var_1_67 = (max (((var_1_55 - var_1_56) + var_1_32) , var_1_54));
			} else {
				var_1_67 = (min ((100.4 - var_1_55) , (var_1_56 + (abs (var_1_51)))));
			}
		} else {
			if (stepLocal_15 < (~ var_1_103)) {
				var_1_67 = (((abs (var_1_68)) + 0.3) + var_1_50);
			} else {
				var_1_67 = (max (var_1_10 , var_1_54));
			}
		}
	}


	// From: Req7Batch96Amount500
	if ((max ((128.25f + var_1_6) , var_1_52)) < (max (var_1_18 , var_1_10))) {
		var_1_20 = (max (var_1_63 , (256 + (min (var_1_82 , var_1_25)))));
	}


	// From: Req30Batch96Amount500
	if (var_1_88 < var_1_33) {
		var_1_80 = (var_1_54 + var_1_55);
	}


	// From: Req11Batch96Amount500
	if (var_1_103 < var_1_29) {
		if (var_1_92) {
			if (var_1_25 >= (- (min (var_1_20 , var_1_28)))) {
				var_1_31 = ((var_1_32 + 32.5) - var_1_17);
			} else {
				var_1_31 = (var_1_17 - (var_1_33 - var_1_32));
			}
		} else {
			var_1_31 = var_1_10;
		}
	}


	// From: Req18Batch96Amount500
	signed long int stepLocal_9 = var_1_29 + var_1_20;
	if (! var_1_92) {
		if (stepLocal_9 >= ((var_1_98 / 32) + (var_1_103 + var_1_99))) {
			var_1_58 = (min ((max ((var_1_47 + var_1_46) , var_1_43)) , (max (var_1_25 , var_1_26))));
		} else {
			if (var_1_54 > (- (var_1_56 - var_1_33))) {
				var_1_58 = (var_1_48 - ((var_1_59 - var_1_47) + (max (var_1_26 , var_1_46))));
			}
		}
	} else {
		var_1_58 = (max ((var_1_59 + var_1_45) , var_1_27));
	}


	// From: Req25Batch96Amount500
	if (var_1_62) {
		if ((var_1_30 - var_1_48) < var_1_11) {
			if (var_1_77 < ((-128 * var_1_25) * var_1_30)) {
				if (var_1_9 > var_1_53) {
					if ((var_1_10 * var_1_53) > ((var_1_54 - var_1_32) * var_1_50)) {
						if (var_1_80 < var_1_68) {
							var_1_71 = ((var_1_11 + var_1_46) + var_1_47);
						} else {
							var_1_71 = (min (((abs (var_1_65)) + var_1_44) , var_1_47));
						}
					} else {
						var_1_71 = (var_1_46 - (var_1_72 - (var_1_11 + 5)));
					}
				} else {
					var_1_71 = (var_1_47 + var_1_64);
				}
			} else {
				var_1_71 = 4;
			}
		}
	}


	// From: Req34Batch96Amount500
	if (((max (var_1_67 , var_1_54)) * var_1_31) < (- (var_1_80 * var_1_57))) {
		var_1_85 = ((var_1_71 > var_1_104) || ((var_1_84 > var_1_25) || (var_1_92 || var_1_61)));
	} else {
		if (var_1_91 <= var_1_31) {
			var_1_85 = (! ((! var_1_36) && var_1_62));
		} else {
			var_1_85 = (((var_1_62 && var_1_61) && var_1_86) && var_1_87);
		}
	}


	// From: Req13Batch96Amount500
	signed long int stepLocal_5 = max (var_1_26 , (min (var_1_20 , var_1_24)));
	if (var_1_84 >= stepLocal_5) {
		var_1_39 = ((abs (max (var_1_26 , var_1_84))) - (min (var_1_27 , (max (var_1_103 , var_1_82)))));
	} else {
		if (var_1_49 > var_1_19) {
			var_1_39 = (abs (var_1_63));
		}
	}


	// From: Req14Batch96Amount500
	unsigned char stepLocal_7 = var_1_93;
	unsigned char stepLocal_6 = var_1_63;
	if (var_1_85) {
		if (stepLocal_7 && var_1_38) {
			if (((max (var_1_63 , var_1_13)) * var_1_110) != stepLocal_6) {
				var_1_42 = var_1_43;
			} else {
				var_1_42 = ((var_1_44 + var_1_45) + ((var_1_46 - var_1_47) - (min (2 , var_1_48))));
			}
		}
	} else {
		var_1_42 = (var_1_47 - 25);
	}


	// From: Req27Batch96Amount500
	unsigned char stepLocal_22 = var_1_62;
	unsigned char stepLocal_21 = var_1_25;
	unsigned char stepLocal_20 = var_1_34;
	unsigned char stepLocal_19 = var_1_27;
	signed long int stepLocal_18 = 8;
	if ((! var_1_90) && stepLocal_22) {
		if (stepLocal_18 > var_1_63) {
			var_1_76 = (min (var_1_68 , var_1_54));
		} else {
			if (var_1_61 || stepLocal_20) {
				var_1_76 = ((abs (var_1_51)) + var_1_68);
			}
		}
	} else {
		if (stepLocal_21 <= (abs (var_1_59))) {
			var_1_76 = (var_1_56 - var_1_32);
		} else {
			if (stepLocal_19 > (~ var_1_30)) {
				var_1_76 = (abs (var_1_18));
			} else {
				var_1_76 = var_1_9;
			}
		}
	}


	// From: Req52Batch96Amount500
	if (((min (var_1_6 , var_1_57)) / (min (var_1_33 , var_1_37))) < var_1_76) {
		var_1_106 = (var_1_82 - var_1_77);
	} else {
		var_1_106 = ((min (var_1_77 , 64)) - (abs (var_1_82)));
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 127);
	assume_abort_if_not(var_1_26 <= 254);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 16383);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 16384);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 4611686.018427382800e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65535);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	assume_abort_if_not(var_1_37 != 0.0F);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -127);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -31);
	assume_abort_if_not(var_1_44 <= 32);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -31);
	assume_abort_if_not(var_1_45 <= 31);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 31);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 31);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -461168.6018427382800e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -230584.3009213691390e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 6917529.027641073700e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691390e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 2305843.009213691390e+12F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= 8191);
	assume_abort_if_not(var_1_59 <= 16383);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 1);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 1);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 63);
	assume_abort_if_not(var_1_64 <= 127);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 31);
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= -230584.3009213691390e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691390e+12F && var_1_68 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_72 >= 16383);
	assume_abort_if_not(var_1_72 <= 32766);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 16);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 16);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 64);
	assume_abort_if_not(var_1_83 <= 127);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 1);
	assume_abort_if_not(var_1_86 <= 1);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 1);
	assume_abort_if_not(var_1_87 <= 1);
	var_1_89 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_89 >= 2147483647);
	assume_abort_if_not(var_1_89 <= 4294967295);
}



void updateLastVariables() {
	last_1_var_1_20 = var_1_20;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_104 = var_1_104;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((signed long int) (min (var_1_24 , (var_1_82 - (min (var_1_63 , var_1_81))))))) && ((0 == (min (-4 , var_1_1))) ? (var_1_60 ? ((var_1_103 < var_1_28) ? (var_1_6 == ((float) (max (var_1_9 , var_1_10)))) : (var_1_6 == ((float) var_1_10))) : 1) : 1)) && (var_1_11 == ((signed short int) (min (var_1_84 , 2))))) && ((var_1_25 <= var_1_77) ? (var_1_13 == ((signed short int) (abs (max (var_1_84 , var_1_99))))) : 1)) && ((! (var_1_10 > var_1_9)) ? (var_1_16 == ((float) (max ((max (var_1_9 , (var_1_17 - var_1_18))) , var_1_10)))) : 1)) && ((var_1_18 <= (- var_1_10)) ? (var_1_19 == ((float) (min (var_1_9 , var_1_10)))) : 1)) && (((max ((128.25f + var_1_6) , var_1_52)) < (max (var_1_18 , var_1_10))) ? (var_1_20 == ((unsigned short int) (max (var_1_63 , (256 + (min (var_1_82 , var_1_25))))))) : 1)) && ((var_1_10 >= (var_1_18 - var_1_17)) ? (var_1_92 ? ((last_1_var_1_24 >= last_1_var_1_24) ? (var_1_24 == ((unsigned short int) var_1_63)) : 1) : 1) : (var_1_24 == ((unsigned short int) (32 + var_1_25))))) && ((! (last_1_var_1_82 <= (- last_1_var_1_20))) ? ((last_1_var_1_25 > last_1_var_1_103) ? (var_1_25 == ((unsigned char) ((min (128 , var_1_26)) - var_1_27))) : (var_1_25 == ((unsigned char) var_1_27))) : (var_1_25 == ((unsigned char) var_1_27)))) && ((var_1_82 <= (var_1_81 % var_1_26)) ? (var_1_92 ? (var_1_28 == ((unsigned short int) ((var_1_29 + var_1_30) - var_1_27))) : (var_1_28 == ((unsigned short int) (var_1_105 + (128 + var_1_26))))) : 1)) && ((var_1_103 < var_1_29) ? (var_1_92 ? ((var_1_25 >= (- (min (var_1_20 , var_1_28)))) ? (var_1_31 == ((double) ((var_1_32 + 32.5) - var_1_17))) : (var_1_31 == ((double) (var_1_17 - (var_1_33 - var_1_32))))) : (var_1_31 == ((double) var_1_10))) : 1)) && (((var_1_69 / (var_1_35 - var_1_26)) < var_1_27) ? (((var_1_24 % (min (var_1_26 , var_1_35))) > (var_1_82 | var_1_96)) ? (var_1_34 == ((unsigned char) (var_1_92 && var_1_36))) : 1) : ((var_1_9 < (var_1_17 / (max (var_1_33 , var_1_37)))) ? (var_1_34 == ((unsigned char) (! ((var_1_92 || var_1_36) && var_1_38)))) : (var_1_34 == ((unsigned char) var_1_36))))) && ((var_1_84 >= (max (var_1_26 , (min (var_1_20 , var_1_24))))) ? (var_1_39 == ((signed short int) ((abs (max (var_1_26 , var_1_84))) - (min (var_1_27 , (max (var_1_103 , var_1_82))))))) : ((var_1_49 > var_1_19) ? (var_1_39 == ((signed short int) (abs (var_1_63)))) : 1))) && (var_1_85 ? ((var_1_93 && var_1_38) ? ((((max (var_1_63 , var_1_13)) * var_1_110) != var_1_63) ? (var_1_42 == ((signed char) var_1_43)) : (var_1_42 == ((signed char) ((var_1_44 + var_1_45) + ((var_1_46 - var_1_47) - (min (2 , var_1_48))))))) : 1) : (var_1_42 == ((signed char) (var_1_47 - 25))))) && ((var_1_35 == var_1_103) ? (var_1_49 == ((float) (var_1_32 + var_1_50))) : (var_1_49 == ((float) ((max ((128.375f + var_1_51) , 50.4f)) + var_1_32))))) && ((10000 <= var_1_98) ? ((((var_1_82 | var_1_63) * (var_1_27 - var_1_47)) >= var_1_45) ? (var_1_52 == ((double) (var_1_32 + var_1_50))) : 1) : (var_1_52 == ((double) (((var_1_54 + 24.8) + (var_1_55 - var_1_56)) - var_1_32))))) && ((var_1_60 || var_1_38) ? (var_1_57 == ((double) var_1_54)) : 1)) && ((! var_1_92) ? (((var_1_29 + var_1_20) >= ((var_1_98 / 32) + (var_1_103 + var_1_99))) ? (var_1_58 == ((signed short int) (min ((max ((var_1_47 + var_1_46) , var_1_43)) , (max (var_1_25 , var_1_26)))))) : ((var_1_54 > (- (var_1_56 - var_1_33))) ? (var_1_58 == ((signed short int) (var_1_48 - ((var_1_59 - var_1_47) + (max (var_1_26 , var_1_46)))))) : 1)) : (var_1_58 == ((signed short int) (max ((var_1_59 + var_1_45) , var_1_27)))))) && (last_1_var_1_93 ? (var_1_60 == ((unsigned char) (var_1_36 || var_1_38))) : ((var_1_27 > (abs (var_1_29))) ? ((var_1_33 >= (- (max (var_1_55 , last_1_var_1_67)))) ? ((last_1_var_1_104 < var_1_45) ? (var_1_60 == ((unsigned char) (! var_1_61))) : (var_1_60 == ((unsigned char) (var_1_61 && var_1_62)))) : 1) : (var_1_60 == ((unsigned char) (! (! var_1_36))))))) && (((var_1_56 - var_1_17) < var_1_32) ? ((last_1_var_1_96 == (var_1_26 ^ var_1_48)) ? (var_1_63 == ((unsigned char) ((abs (var_1_26)) - (var_1_64 - 10)))) : (var_1_63 == ((unsigned char) var_1_46))) : (var_1_63 == ((unsigned char) ((25 + (var_1_47 + var_1_65)) + var_1_27))))) && (((128u >> var_1_81) != var_1_47) ? (((- (var_1_29 + var_1_11)) < var_1_96) ? (var_1_66 == ((float) (var_1_56 + 1.8f))) : (var_1_66 == ((float) 24.5f))) : 1)) && (((var_1_49 / var_1_33) >= (var_1_54 - var_1_32)) ? (var_1_67 == ((double) (255.5 - (max ((min (var_1_33 , var_1_55)) , var_1_53))))) : (((min (var_1_33 , (var_1_6 + var_1_50))) == (- var_1_57)) ? ((var_1_37 > last_1_var_1_67) ? (var_1_67 == ((double) (max (((var_1_55 - var_1_56) + var_1_32) , var_1_54)))) : (var_1_67 == ((double) (min ((100.4 - var_1_55) , (var_1_56 + (abs (var_1_51)))))))) : (((var_1_26 * var_1_103) < (~ var_1_103)) ? (var_1_67 == ((double) (((abs (var_1_68)) + 0.3) + var_1_50))) : (var_1_67 == ((double) (max (var_1_10 , var_1_54)))))))) && (((var_1_26 / var_1_30) >= var_1_103) ? (var_1_69 == ((signed short int) (max ((var_1_46 - var_1_47) , var_1_48)))) : (var_1_69 == ((signed short int) (256 - (var_1_1 + (var_1_27 + var_1_48))))))) && ((var_1_43 >= (var_1_101 + var_1_48)) ? (var_1_70 == ((unsigned long int) (max (var_1_27 , var_1_30)))) : 1)) && (var_1_62 ? (((var_1_30 - var_1_48) < var_1_11) ? ((var_1_77 < ((-128 * var_1_25) * var_1_30)) ? ((var_1_9 > var_1_53) ? (((var_1_10 * var_1_53) > ((var_1_54 - var_1_32) * var_1_50)) ? ((var_1_80 < var_1_68) ? (var_1_71 == ((signed short int) ((var_1_11 + var_1_46) + var_1_47))) : (var_1_71 == ((signed short int) (min (((abs (var_1_65)) + var_1_44) , var_1_47))))) : (var_1_71 == ((signed short int) (var_1_46 - (var_1_72 - (var_1_11 + 5)))))) : (var_1_71 == ((signed short int) (var_1_47 + var_1_64)))) : (var_1_71 == ((signed short int) 4))) : 1) : 1)) && ((var_1_10 > (- (abs (var_1_66)))) ? ((((var_1_25 + 25) % var_1_46) <= (var_1_77 >> (var_1_74 + var_1_75))) ? (var_1_73 == ((float) (var_1_56 + (max (var_1_55 , var_1_51))))) : 1) : 1)) && (((! var_1_90) && var_1_62) ? ((8 > var_1_63) ? (var_1_76 == ((double) (min (var_1_68 , var_1_54)))) : ((var_1_61 || var_1_34) ? (var_1_76 == ((double) ((abs (var_1_51)) + var_1_68))) : 1)) : ((var_1_25 <= (abs (var_1_59))) ? (var_1_76 == ((double) (var_1_56 - var_1_32))) : ((var_1_27 > (~ var_1_30)) ? (var_1_76 == ((double) (abs (var_1_18)))) : (var_1_76 == ((double) var_1_9)))))) && (var_1_38 ? ((var_1_78 || var_1_61) ? (var_1_77 == ((unsigned short int) (max (var_1_46 , 1)))) : (var_1_77 == ((unsigned short int) var_1_30))) : (var_1_77 == ((unsigned short int) (abs (16)))))) && ((var_1_104 < ((max (var_1_30 , var_1_65)) - var_1_103)) ? (var_1_78 == ((unsigned char) (! var_1_61))) : 1)) && ((var_1_88 < var_1_33) ? (var_1_80 == ((double) (var_1_54 + var_1_55))) : 1)) && (((var_1_75 / var_1_30) > (var_1_25 - var_1_98)) ? (var_1_81 == ((unsigned short int) (max (var_1_63 , var_1_59)))) : 1)) && (((last_1_var_1_31 > var_1_50) && (2 <= (min (last_1_var_1_69 , last_1_var_1_103)))) ? ((var_1_36 || var_1_62) ? (var_1_82 == ((unsigned char) (max (((100 + var_1_83) - (abs (var_1_27))) , var_1_46)))) : 1) : ((last_1_var_1_77 >= var_1_83) ? (var_1_82 == ((unsigned char) (var_1_27 + var_1_65))) : (var_1_82 == ((unsigned char) (min (var_1_46 , (var_1_26 - var_1_47)))))))) && (((abs (64.2f)) >= var_1_51) ? ((var_1_91 <= var_1_17) ? (((~ 64) > var_1_110) ? (var_1_84 == ((signed char) (((var_1_74 + var_1_75) + var_1_47) + (max ((var_1_65 + var_1_45) , -16))))) : ((((var_1_35 - var_1_27) * var_1_64) > var_1_44) ? (var_1_84 == ((signed char) var_1_74)) : (var_1_84 == ((signed char) (max ((min (var_1_47 , var_1_74)) , var_1_43)))))) : (var_1_84 == ((signed char) (min (var_1_45 , -16))))) : ((var_1_110 <= var_1_26) ? (var_1_84 == ((signed char) (min ((min (var_1_65 , (min (var_1_45 , var_1_48)))) , -8)))) : 1))) && ((((max (var_1_67 , var_1_54)) * var_1_31) < (- (var_1_80 * var_1_57))) ? (var_1_85 == ((unsigned char) ((var_1_71 > var_1_104) || ((var_1_84 > var_1_25) || (var_1_92 || var_1_61))))) : ((var_1_91 <= var_1_31) ? (var_1_85 == ((unsigned char) (! ((! var_1_36) && var_1_62)))) : (var_1_85 == ((unsigned char) (((var_1_62 && var_1_61) && var_1_86) && var_1_87)))))) && (((var_1_96 % var_1_26) == ((var_1_89 - var_1_24) + 25u)) ? (((~ (var_1_63 | var_1_24)) <= ((var_1_100 + var_1_94) % (abs (var_1_59)))) ? (var_1_88 == ((double) var_1_55)) : (var_1_88 == ((double) (min (var_1_10 , (var_1_55 + var_1_54)))))) : (var_1_62 ? (var_1_88 == ((double) var_1_33)) : 1))) && (var_1_90 == ((unsigned char) var_1_38))) && (var_1_93 ? (var_1_91 == ((float) var_1_54)) : (var_1_91 == ((float) var_1_33)))) && (var_1_86 ? (var_1_92 == ((unsigned char) var_1_36)) : 1)) && (var_1_60 ? (var_1_93 == ((unsigned char) var_1_86)) : (var_1_93 == ((unsigned char) var_1_36)))) && (var_1_38 ? (var_1_94 == ((signed short int) var_1_64)) : (var_1_94 == ((signed short int) var_1_82)))) && (var_1_95 == ((unsigned long int) var_1_81))) && (last_1_var_1_34 ? (var_1_96 == ((signed long int) last_1_var_1_63)) : (var_1_96 == ((signed long int) last_1_var_1_84)))) && (var_1_97 == ((unsigned char) var_1_38))) && (var_1_98 == ((unsigned long int) var_1_26))) && (var_1_99 == ((signed char) var_1_45))) && (var_1_100 == ((unsigned long int) var_1_47))) && (var_1_101 == ((signed long int) var_1_81))) && (var_1_92 ? (var_1_102 == ((float) var_1_50)) : (var_1_102 == ((float) var_1_68)))) && (last_1_var_1_60 ? (var_1_103 == ((unsigned char) var_1_64)) : (var_1_103 == ((unsigned char) var_1_74)))) && (last_1_var_1_85 ? (var_1_104 == ((unsigned long int) last_1_var_1_58)) : 1)) && (var_1_105 == ((signed long int) var_1_104))) && ((((min (var_1_6 , var_1_57)) / (min (var_1_33 , var_1_37))) < var_1_76) ? (var_1_106 == ((signed short int) (var_1_82 - var_1_77))) : (var_1_106 == ((signed short int) ((min (var_1_77 , 64)) - (abs (var_1_82))))))) && (var_1_110 == ((signed short int) var_1_99))
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

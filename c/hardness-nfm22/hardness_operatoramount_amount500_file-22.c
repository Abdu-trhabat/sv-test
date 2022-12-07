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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch22Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 32;
double var_1_7 = 9.75;
double var_1_8 = 0.0;
double var_1_9 = 0.0;
double var_1_10 = 8.5;
signed short int var_1_11 = 100;
float var_1_12 = 100.5;
float var_1_13 = 0.0;
float var_1_14 = 25.4;
unsigned short int var_1_15 = 4;
unsigned long int var_1_16 = 50;
unsigned short int var_1_17 = 32;
unsigned long int var_1_18 = 3616965450;
unsigned long int var_1_20 = 1000000000;
signed long int var_1_22 = 8;
signed char var_1_25 = -2;
signed char var_1_26 = 50;
signed char var_1_27 = 2;
signed char var_1_28 = 8;
unsigned char var_1_29 = 1;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
signed char var_1_33 = -16;
signed char var_1_34 = 100;
signed char var_1_35 = 64;
signed char var_1_36 = 10;
unsigned char var_1_37 = 8;
unsigned char var_1_38 = 16;
signed long int var_1_39 = 1;
float var_1_40 = 0.5;
float var_1_41 = 64.35;
signed long int var_1_42 = 2;
signed long int var_1_43 = 2;
signed char var_1_44 = 16;
unsigned long int var_1_45 = 256;
signed long int var_1_46 = 4;
unsigned short int var_1_48 = 4;
unsigned short int var_1_49 = 60697;
double var_1_51 = 127.25;
double var_1_52 = 127.5;
double var_1_53 = 255.1;
unsigned long int var_1_54 = 10;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 1;
unsigned short int var_1_57 = 1;
double var_1_58 = 24.25;
double var_1_59 = 9.2;
signed char var_1_60 = -10;
signed char var_1_61 = -4;
signed char var_1_62 = 8;
signed char var_1_63 = 0;
double var_1_64 = 100.875;
float var_1_65 = 0.19999999999999996;
float var_1_66 = 0.75;
float var_1_67 = 16.5;
unsigned char var_1_68 = 200;
unsigned long int var_1_69 = 1;
unsigned long int var_1_70 = 1518156628;
float var_1_71 = 10.75;
signed long int var_1_72 = 16;
signed long int var_1_73 = -10;
signed short int var_1_74 = -2;
unsigned char var_1_75 = 100;
unsigned char var_1_76 = 8;
double var_1_77 = 999999999999999.8;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 0;
signed short int var_1_80 = 16;
unsigned long int var_1_81 = 2;
signed char var_1_82 = -4;
signed char var_1_83 = 10;
unsigned char var_1_84 = 128;
unsigned short int var_1_85 = 0;
double var_1_86 = 32.2;
float var_1_87 = 0.44999999999999996;
unsigned short int var_1_88 = 8;
signed long int var_1_89 = -16;
signed char var_1_90 = -8;
unsigned long int var_1_91 = 1;
unsigned char var_1_92 = 5;
signed short int var_1_93 = -5;
signed short int var_1_94 = -16;
double var_1_95 = 5.25;
unsigned short int var_1_96 = 2;
unsigned short int var_1_97 = 5;
signed long int var_1_98 = 64;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 32;
signed short int last_1_var_1_11 = 100;
signed long int last_1_var_1_22 = 8;
signed char last_1_var_1_25 = -2;
signed char last_1_var_1_33 = -16;
unsigned char last_1_var_1_37 = 8;
signed long int last_1_var_1_43 = 2;
unsigned long int last_1_var_1_45 = 256;
signed long int last_1_var_1_46 = 4;
unsigned short int last_1_var_1_48 = 4;
unsigned long int last_1_var_1_54 = 10;
unsigned char last_1_var_1_55 = 0;
signed long int last_1_var_1_72 = 16;
signed long int last_1_var_1_89 = -16;
signed char last_1_var_1_90 = -8;
unsigned char last_1_var_1_92 = 5;
signed short int last_1_var_1_94 = -16;
unsigned short int last_1_var_1_97 = 5;
signed long int last_1_var_1_98 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch22Amount500
	if ((last_1_var_1_43 * last_1_var_1_54) <= (var_1_26 + last_1_var_1_43)) {
		var_1_43 = ((var_1_26 + var_1_20) - (abs (var_1_28)));
	}


	// From: Req12Batch22Amount500
	signed long int stepLocal_10 = min (2 , last_1_var_1_89);
	if (stepLocal_10 >= var_1_28) {
		var_1_39 = ((abs (var_1_26 - var_1_34)) + (max (last_1_var_1_37 , var_1_35)));
	} else {
		var_1_39 = (last_1_var_1_43 - (max (last_1_var_1_92 , last_1_var_1_94)));
	}


	// From: Req1Batch22Amount500
	signed long int stepLocal_0 = 50 * last_1_var_1_97;
	if ((last_1_var_1_25 | last_1_var_1_1) >= stepLocal_0) {
		var_1_1 = (min (last_1_var_1_1 , (max (last_1_var_1_25 , (last_1_var_1_92 + last_1_var_1_92)))));
	}


	// From: Req9Batch22Amount500
	unsigned char stepLocal_8 = last_1_var_1_1 >= last_1_var_1_48;
	signed long int stepLocal_7 = -1;
	if (last_1_var_1_55 && stepLocal_8) {
		if (stepLocal_7 > (abs (last_1_var_1_90))) {
			var_1_29 = ((var_1_20 >= var_1_18) || var_1_31);
		} else {
			var_1_29 = (var_1_31 && var_1_32);
		}
	}


	// From: Req22Batch22Amount500
	if (var_1_32) {
		if (var_1_31) {
			var_1_55 = (! var_1_56);
		} else {
			var_1_55 = (! (! (var_1_29 || var_1_56)));
		}
	}


	// From: Req42Batch22Amount500
	if (var_1_29) {
		var_1_85 = var_1_49;
	}


	// From: Req34Batch22Amount500
	if (var_1_29) {
		var_1_74 = var_1_26;
	}


	// From: Req2Batch22Amount500
	var_1_7 = (256.08 - (var_1_8 - (var_1_9 - var_1_10)));


	// From: Req11Batch22Amount500
	if ((var_1_9 * (min (var_1_8 , var_1_10))) < var_1_13) {
		var_1_37 = (min (var_1_34 , var_1_38));
	}


	// From: Req13Batch22Amount500
	var_1_40 = (min ((min (var_1_10 , var_1_13)) , (var_1_9 + var_1_41)));


	// From: Req25Batch22Amount500
	if (var_1_74 == (min (0 , var_1_28))) {
		var_1_60 = (var_1_36 + ((min (var_1_61 , var_1_62)) + (min (var_1_63 , -1))));
	}


	// From: Req29Batch22Amount500
	unsigned char stepLocal_22 = var_1_38;
	if (stepLocal_22 > (var_1_68 - (min (var_1_36 , var_1_28)))) {
		var_1_67 = (var_1_8 - var_1_13);
	}


	// From: Req35Batch22Amount500
	unsigned long int stepLocal_26 = 8 + (max (var_1_18 , var_1_17));
	if (var_1_38 < stepLocal_26) {
		var_1_75 = (min ((var_1_34 + var_1_26) , var_1_76));
	}


	// From: Req36Batch22Amount500
	var_1_77 = ((3.8 + var_1_52) + var_1_59);


	// From: Req37Batch22Amount500
	if (var_1_32) {
		var_1_78 = ((! (var_1_31 && var_1_79)) && var_1_56);
	}


	// From: Req40Batch22Amount500
	unsigned char stepLocal_28 = var_1_31;
	if (stepLocal_28 && (var_1_13 >= var_1_40)) {
		var_1_82 = (abs (var_1_62));
	}


	// From: Req43Batch22Amount500
	var_1_86 = 7.7;


	// From: Req44Batch22Amount500
	var_1_87 = var_1_10;


	// From: Req45Batch22Amount500
	if (var_1_56) {
		var_1_88 = var_1_35;
	}


	// From: Req47Batch22Amount500
	var_1_90 = var_1_36;


	// From: Req49Batch22Amount500
	if (var_1_32) {
		var_1_92 = var_1_36;
	}


	// From: Req51Batch22Amount500
	if (var_1_31) {
		var_1_94 = var_1_84;
	}


	// From: Req52Batch22Amount500
	var_1_95 = var_1_41;


	// From: Req54Batch22Amount500
	if (var_1_31) {
		var_1_97 = 2;
	} else {
		var_1_97 = 0;
	}


	// From: Req10Batch22Amount500
	signed long int stepLocal_9 = var_1_43;
	if (stepLocal_9 < ((last_1_var_1_33 * var_1_75) + var_1_37)) {
		if (var_1_55) {
			var_1_33 = (var_1_28 + (abs (var_1_26)));
		} else {
			var_1_33 = (abs (abs (var_1_28)));
		}
	} else {
		var_1_33 = ((var_1_34 - var_1_26) - (var_1_35 - (16 + var_1_36)));
	}


	// From: Req41Batch22Amount500
	unsigned short int stepLocal_29 = var_1_85;
	if (((min (var_1_68 , var_1_84)) - var_1_28) >= stepLocal_29) {
		var_1_83 = var_1_26;
	} else {
		var_1_83 = var_1_62;
	}


	// From: Req28Batch22Amount500
	unsigned char stepLocal_21 = var_1_92;
	unsigned char stepLocal_20 = var_1_29;
	if ((var_1_52 < var_1_14) || stepLocal_20) {
		var_1_66 = (var_1_59 + var_1_41);
	} else {
		if (var_1_83 != stepLocal_21) {
			var_1_66 = ((var_1_8 - var_1_9) - var_1_59);
		}
	}


	// From: Req26Batch22Amount500
	if ((! var_1_55) || (var_1_9 == var_1_67)) {
		var_1_64 = (max (var_1_53 , var_1_10));
	} else {
		var_1_64 = (max (((var_1_53 + 127.6) - 2.5) , var_1_10));
	}


	// From: Req32Batch22Amount500
	if (var_1_31 && (last_1_var_1_72 <= var_1_92)) {
		var_1_72 = (var_1_17 + var_1_75);
	} else {
		var_1_72 = (abs (var_1_17));
	}


	// From: Req33Batch22Amount500
	if (var_1_78) {
		var_1_73 = var_1_26;
	}


	// From: Req39Batch22Amount500
	if (var_1_56) {
		var_1_81 = ((max ((var_1_92 + var_1_34) , var_1_75)) + 1u);
	}


	// From: Req24Batch22Amount500
	if (var_1_56) {
		if (var_1_13 <= var_1_66) {
			var_1_58 = var_1_10;
		}
	} else {
		var_1_58 = (var_1_41 + (var_1_53 - var_1_59));
	}


	// From: Req16Batch22Amount500
	if ((4.4 / 5.15) <= var_1_58) {
		var_1_44 = ((-4 + var_1_36) + (var_1_26 - var_1_28));
	} else {
		if (var_1_10 < (var_1_58 / var_1_8)) {
			var_1_44 = (min ((max (var_1_27 , var_1_35)) , var_1_28));
		} else {
			var_1_44 = var_1_34;
		}
	}


	// From: Req20Batch22Amount500
	signed char stepLocal_17 = var_1_34;
	unsigned char stepLocal_16 = var_1_78;
	if (var_1_29 || stepLocal_16) {
		var_1_51 = (var_1_9 - ((var_1_10 + var_1_52) + var_1_53));
	} else {
		if ((min ((var_1_88 / var_1_35) , (var_1_72 | var_1_97))) <= stepLocal_17) {
			var_1_51 = (max ((max (var_1_53 , var_1_52)) , var_1_41));
		}
	}


	// From: Req48Batch22Amount500
	if (var_1_29) {
		var_1_91 = var_1_94;
	} else {
		var_1_91 = var_1_44;
	}


	// From: Req27Batch22Amount500
	signed long int stepLocal_19 = abs (var_1_61);
	if (stepLocal_19 < var_1_73) {
		var_1_65 = var_1_53;
	} else {
		var_1_65 = (1.00000000005E10f - var_1_52);
	}


	// From: Req5Batch22Amount500
	if (var_1_51 == 16.4f) {
		if ((min (var_1_73 , var_1_75)) > (var_1_73 - var_1_75)) {
			var_1_15 = (var_1_73 + var_1_75);
		} else {
			var_1_15 = var_1_1;
		}
	}


	// From: Req14Batch22Amount500
	if (var_1_58 != var_1_8) {
		var_1_42 = ((min ((50 + var_1_73) , var_1_28)) + (abs (var_1_20)));
	}


	// From: Req23Batch22Amount500
	if (! var_1_29) {
		if (((var_1_9 * var_1_65) < var_1_86) || (var_1_81 < var_1_17)) {
			var_1_57 = (37068 - var_1_36);
		}
	} else {
		var_1_57 = (var_1_26 + var_1_28);
	}


	// From: Req46Batch22Amount500
	if (var_1_79) {
		var_1_89 = var_1_83;
	} else {
		var_1_89 = var_1_91;
	}


	// From: Req19Batch22Amount500
	if (5 >= var_1_27) {
		if (var_1_31) {
			if (! (! var_1_78)) {
				if (var_1_78 && var_1_32) {
					var_1_48 = (var_1_49 - 25);
				} else {
					var_1_48 = ((var_1_28 + var_1_42) + var_1_75);
				}
			}
		} else {
			var_1_48 = (51572 - var_1_28);
		}
	} else {
		var_1_48 = (max (var_1_26 , var_1_35));
	}


	// From: Req38Batch22Amount500
	signed long int stepLocal_27 = var_1_35 - (var_1_26 + var_1_36);
	if (stepLocal_27 == var_1_34) {
		if (var_1_79) {
			var_1_80 = (-128 + var_1_76);
		} else {
			if (var_1_55) {
				var_1_80 = (var_1_42 - var_1_38);
			} else {
				var_1_80 = (max ((min (0 , var_1_82)) , var_1_36));
			}
		}
	}


	// From: Req4Batch22Amount500
	signed long int stepLocal_1 = var_1_89;
	if ((var_1_57 / -500) < stepLocal_1) {
		var_1_12 = (abs (var_1_8 - (var_1_13 - 0.8f)));
	} else {
		var_1_12 = (max (var_1_10 , (var_1_13 - var_1_14)));
	}


	// From: Req31Batch22Amount500
	unsigned char stepLocal_25 = var_1_37;
	unsigned char stepLocal_24 = var_1_55;
	signed short int stepLocal_23 = var_1_94;
	if (var_1_48 <= stepLocal_25) {
		if (var_1_86 > var_1_87) {
			var_1_71 = ((var_1_13 - (var_1_9 - var_1_10)) - var_1_53);
		} else {
			var_1_71 = (var_1_10 + var_1_52);
		}
	} else {
		if ((var_1_8 >= var_1_41) || stepLocal_24) {
			if (var_1_97 > stepLocal_23) {
				var_1_71 = (abs (var_1_9));
			} else {
				var_1_71 = ((var_1_9 - var_1_10) + (max (var_1_52 , var_1_41)));
			}
		} else {
			var_1_71 = ((abs (99.1f)) + (var_1_52 + var_1_10));
		}
	}


	// From: Req17Batch22Amount500
	unsigned long int stepLocal_15 = var_1_18;
	unsigned long int stepLocal_14 = - (25u >> var_1_35);
	signed char stepLocal_13 = var_1_90;
	signed char stepLocal_12 = var_1_34;
	unsigned char stepLocal_11 = var_1_17 != var_1_26;
	if (stepLocal_14 != var_1_90) {
		if ((var_1_92 / var_1_17) >= stepLocal_12) {
			if (stepLocal_11 && var_1_78) {
				var_1_45 = var_1_17;
			}
		} else {
			if (((last_1_var_1_45 * 64) * (min (var_1_43 , last_1_var_1_45))) < stepLocal_13) {
				if (var_1_90 <= stepLocal_15) {
					var_1_45 = (var_1_57 + (abs (var_1_35)));
				} else {
					var_1_45 = (max (var_1_90 , var_1_92));
				}
			} else {
				var_1_45 = (var_1_18 - var_1_57);
			}
		}
	}


	// From: Req18Batch22Amount500
	if (! ((var_1_57 < last_1_var_1_46) || var_1_31)) {
		if (! (var_1_55 && (var_1_1 < 5))) {
			if (var_1_8 != (var_1_41 * var_1_77)) {
				if (((var_1_39 + var_1_37) != 32u) || var_1_55) {
					if (((~ last_1_var_1_46) >= var_1_36) && (var_1_75 > (var_1_15 % var_1_20))) {
						var_1_46 = ((max (var_1_38 , var_1_37)) + var_1_20);
					} else {
						var_1_46 = (var_1_35 - var_1_17);
					}
				} else {
					var_1_46 = var_1_80;
				}
			} else {
				if ((min (var_1_33 , (var_1_74 / var_1_34))) > ((var_1_42 - var_1_38) * -1)) {
					var_1_46 = (var_1_37 - var_1_42);
				} else {
					var_1_46 = (var_1_28 - var_1_36);
				}
			}
		}
	} else {
		var_1_46 = (var_1_75 - 256);
	}


	// From: Req7Batch22Amount500
	unsigned short int stepLocal_3 = var_1_1;
	unsigned char stepLocal_2 = var_1_29;
	if (stepLocal_3 <= var_1_89) {
		if (stepLocal_2 && (var_1_39 != last_1_var_1_22)) {
			if (var_1_10 > var_1_14) {
				var_1_22 = (var_1_92 - var_1_15);
			} else {
				var_1_22 = (var_1_17 + (var_1_89 - var_1_15));
			}
		}
	}


	// From: Req53Batch22Amount500
	if (var_1_79) {
		var_1_96 = var_1_22;
	}


	// From: Req3Batch22Amount500
	if (var_1_96 > (abs (var_1_92))) {
		if ((var_1_10 + (var_1_58 / var_1_9)) >= var_1_8) {
			var_1_11 = (last_1_var_1_11 - 256);
		}
	} else {
		if ((16 * last_1_var_1_11) < var_1_92) {
			var_1_11 = (var_1_96 + (max (8 , 16)));
		} else {
			var_1_11 = var_1_96;
		}
	}


	// From: Req30Batch22Amount500
	if (var_1_71 == (min ((var_1_14 - var_1_10) , var_1_41))) {
		var_1_69 = ((max (var_1_18 , (4221446235u - var_1_96))) - (2144467685u - var_1_35));
	} else {
		if (var_1_56 && (var_1_27 == 0)) {
			if (var_1_35 > var_1_36) {
				if ((var_1_83 != (var_1_96 / var_1_17)) || (var_1_87 < var_1_71)) {
					var_1_69 = (min ((var_1_18 - (var_1_70 - var_1_89)) , var_1_28));
				} else {
					var_1_69 = (var_1_18 - (var_1_70 - var_1_22));
				}
			}
		} else {
			var_1_69 = 1u;
		}
	}


	// From: Req50Batch22Amount500
	if (var_1_32) {
		var_1_93 = var_1_69;
	} else {
		var_1_93 = var_1_84;
	}


	// From: Req55Batch22Amount500
	unsigned short int stepLocal_30 = var_1_49;
	if (((var_1_43 | var_1_17) * (last_1_var_1_98 / var_1_34)) >= stepLocal_30) {
		var_1_98 = (var_1_96 + (min ((var_1_82 + var_1_80) , -64)));
	} else {
		var_1_98 = 16;
	}


	// From: Req8Batch22Amount500
	signed long int stepLocal_6 = var_1_46;
	signed long int stepLocal_5 = var_1_26 / var_1_17;
	unsigned short int stepLocal_4 = var_1_96;
	if (stepLocal_6 <= var_1_85) {
		var_1_25 = ((min ((64 - var_1_26) , var_1_27)) - (32 + var_1_28));
	} else {
		if ((var_1_85 >> var_1_75) <= stepLocal_4) {
			var_1_25 = var_1_26;
		} else {
			if (var_1_85 <= stepLocal_5) {
				var_1_25 = (var_1_26 + var_1_28);
			} else {
				var_1_25 = var_1_27;
			}
		}
	}


	// From: Req21Batch22Amount500
	signed long int stepLocal_18 = abs (var_1_36);
	if (stepLocal_18 > (var_1_25 / var_1_35)) {
		var_1_54 = ((1108069189u - (var_1_75 + var_1_75)) + ((abs (var_1_26)) + (max (var_1_39 , var_1_45))));
	} else {
		var_1_54 = (var_1_39 + 64u);
	}


	// From: Req6Batch22Amount500
	if (var_1_92 < (max ((var_1_37 % var_1_17) , (~ var_1_93)))) {
		if (var_1_9 >= var_1_10) {
			var_1_16 = (max ((var_1_18 - var_1_72) , var_1_17));
		} else {
			if (var_1_29 && ((var_1_72 * var_1_37) >= var_1_75)) {
				if ((0.628 / var_1_9) > (max (var_1_13 , var_1_8))) {
					var_1_16 = (var_1_18 - (1167038438u - (var_1_20 - var_1_37)));
				} else {
					if ((var_1_15 >> var_1_18) >= (max (var_1_17 , (var_1_57 - var_1_37)))) {
						var_1_16 = var_1_92;
					} else {
						var_1_16 = 2u;
					}
				}
			} else {
				var_1_16 = var_1_72;
			}
		}
	} else {
		var_1_16 = var_1_72;
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 4611686.018427382800e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 2305843.009213691390e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691390e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 4611686.018427382800e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65535);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 536870911);
	assume_abort_if_not(var_1_20 <= 1073741823);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -1);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 62);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 63);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 31);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427382800e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 32767);
	assume_abort_if_not(var_1_49 <= 65534);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691390e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -31);
	assume_abort_if_not(var_1_61 <= 32);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -31);
	assume_abort_if_not(var_1_62 <= 32);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= -31);
	assume_abort_if_not(var_1_63 <= 31);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 127);
	assume_abort_if_not(var_1_68 <= 255);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 1073741823);
	assume_abort_if_not(var_1_70 <= 2147483647);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 254);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 0);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 127);
	assume_abort_if_not(var_1_84 <= 255);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_25 | last_1_var_1_1) >= (50 * last_1_var_1_97)) ? (var_1_1 == ((unsigned short int) (min (last_1_var_1_1 , (max (last_1_var_1_25 , (last_1_var_1_92 + last_1_var_1_92))))))) : 1) && (var_1_7 == ((double) (256.08 - (var_1_8 - (var_1_9 - var_1_10)))))) && ((var_1_96 > (abs (var_1_92))) ? (((var_1_10 + (var_1_58 / var_1_9)) >= var_1_8) ? (var_1_11 == ((signed short int) (last_1_var_1_11 - 256))) : 1) : (((16 * last_1_var_1_11) < var_1_92) ? (var_1_11 == ((signed short int) (var_1_96 + (max (8 , 16))))) : (var_1_11 == ((signed short int) var_1_96))))) && (((var_1_57 / -500) < var_1_89) ? (var_1_12 == ((float) (abs (var_1_8 - (var_1_13 - 0.8f))))) : (var_1_12 == ((float) (max (var_1_10 , (var_1_13 - var_1_14))))))) && ((var_1_51 == 16.4f) ? (((min (var_1_73 , var_1_75)) > (var_1_73 - var_1_75)) ? (var_1_15 == ((unsigned short int) (var_1_73 + var_1_75))) : (var_1_15 == ((unsigned short int) var_1_1))) : 1)) && ((var_1_92 < (max ((var_1_37 % var_1_17) , (~ var_1_93)))) ? ((var_1_9 >= var_1_10) ? (var_1_16 == ((unsigned long int) (max ((var_1_18 - var_1_72) , var_1_17)))) : ((var_1_29 && ((var_1_72 * var_1_37) >= var_1_75)) ? (((0.628 / var_1_9) > (max (var_1_13 , var_1_8))) ? (var_1_16 == ((unsigned long int) (var_1_18 - (1167038438u - (var_1_20 - var_1_37))))) : (((var_1_15 >> var_1_18) >= (max (var_1_17 , (var_1_57 - var_1_37)))) ? (var_1_16 == ((unsigned long int) var_1_92)) : (var_1_16 == ((unsigned long int) 2u)))) : (var_1_16 == ((unsigned long int) var_1_72)))) : (var_1_16 == ((unsigned long int) var_1_72)))) && ((var_1_1 <= var_1_89) ? ((var_1_29 && (var_1_39 != last_1_var_1_22)) ? ((var_1_10 > var_1_14) ? (var_1_22 == ((signed long int) (var_1_92 - var_1_15))) : (var_1_22 == ((signed long int) (var_1_17 + (var_1_89 - var_1_15))))) : 1) : 1)) && ((var_1_46 <= var_1_85) ? (var_1_25 == ((signed char) ((min ((64 - var_1_26) , var_1_27)) - (32 + var_1_28)))) : (((var_1_85 >> var_1_75) <= var_1_96) ? (var_1_25 == ((signed char) var_1_26)) : ((var_1_85 <= (var_1_26 / var_1_17)) ? (var_1_25 == ((signed char) (var_1_26 + var_1_28))) : (var_1_25 == ((signed char) var_1_27)))))) && ((last_1_var_1_55 && (last_1_var_1_1 >= last_1_var_1_48)) ? ((-1 > (abs (last_1_var_1_90))) ? (var_1_29 == ((unsigned char) ((var_1_20 >= var_1_18) || var_1_31))) : (var_1_29 == ((unsigned char) (var_1_31 && var_1_32)))) : 1)) && ((var_1_43 < ((last_1_var_1_33 * var_1_75) + var_1_37)) ? (var_1_55 ? (var_1_33 == ((signed char) (var_1_28 + (abs (var_1_26))))) : (var_1_33 == ((signed char) (abs (abs (var_1_28)))))) : (var_1_33 == ((signed char) ((var_1_34 - var_1_26) - (var_1_35 - (16 + var_1_36))))))) && (((var_1_9 * (min (var_1_8 , var_1_10))) < var_1_13) ? (var_1_37 == ((unsigned char) (min (var_1_34 , var_1_38)))) : 1)) && (((min (2 , last_1_var_1_89)) >= var_1_28) ? (var_1_39 == ((signed long int) ((abs (var_1_26 - var_1_34)) + (max (last_1_var_1_37 , var_1_35))))) : (var_1_39 == ((signed long int) (last_1_var_1_43 - (max (last_1_var_1_92 , last_1_var_1_94))))))) && (var_1_40 == ((float) (min ((min (var_1_10 , var_1_13)) , (var_1_9 + var_1_41)))))) && ((var_1_58 != var_1_8) ? (var_1_42 == ((signed long int) ((min ((50 + var_1_73) , var_1_28)) + (abs (var_1_20))))) : 1)) && (((last_1_var_1_43 * last_1_var_1_54) <= (var_1_26 + last_1_var_1_43)) ? (var_1_43 == ((signed long int) ((var_1_26 + var_1_20) - (abs (var_1_28))))) : 1)) && (((4.4 / 5.15) <= var_1_58) ? (var_1_44 == ((signed char) ((-4 + var_1_36) + (var_1_26 - var_1_28)))) : ((var_1_10 < (var_1_58 / var_1_8)) ? (var_1_44 == ((signed char) (min ((max (var_1_27 , var_1_35)) , var_1_28)))) : (var_1_44 == ((signed char) var_1_34))))) && (((- (25u >> var_1_35)) != var_1_90) ? (((var_1_92 / var_1_17) >= var_1_34) ? (((var_1_17 != var_1_26) && var_1_78) ? (var_1_45 == ((unsigned long int) var_1_17)) : 1) : ((((last_1_var_1_45 * 64) * (min (var_1_43 , last_1_var_1_45))) < var_1_90) ? ((var_1_90 <= var_1_18) ? (var_1_45 == ((unsigned long int) (var_1_57 + (abs (var_1_35))))) : (var_1_45 == ((unsigned long int) (max (var_1_90 , var_1_92))))) : (var_1_45 == ((unsigned long int) (var_1_18 - var_1_57))))) : 1)) && ((! ((var_1_57 < last_1_var_1_46) || var_1_31)) ? ((! (var_1_55 && (var_1_1 < 5))) ? ((var_1_8 != (var_1_41 * var_1_77)) ? ((((var_1_39 + var_1_37) != 32u) || var_1_55) ? ((((~ last_1_var_1_46) >= var_1_36) && (var_1_75 > (var_1_15 % var_1_20))) ? (var_1_46 == ((signed long int) ((max (var_1_38 , var_1_37)) + var_1_20))) : (var_1_46 == ((signed long int) (var_1_35 - var_1_17)))) : (var_1_46 == ((signed long int) var_1_80))) : (((min (var_1_33 , (var_1_74 / var_1_34))) > ((var_1_42 - var_1_38) * -1)) ? (var_1_46 == ((signed long int) (var_1_37 - var_1_42))) : (var_1_46 == ((signed long int) (var_1_28 - var_1_36))))) : 1) : (var_1_46 == ((signed long int) (var_1_75 - 256))))) && ((5 >= var_1_27) ? (var_1_31 ? ((! (! var_1_78)) ? ((var_1_78 && var_1_32) ? (var_1_48 == ((unsigned short int) (var_1_49 - 25))) : (var_1_48 == ((unsigned short int) ((var_1_28 + var_1_42) + var_1_75)))) : 1) : (var_1_48 == ((unsigned short int) (51572 - var_1_28)))) : (var_1_48 == ((unsigned short int) (max (var_1_26 , var_1_35)))))) && ((var_1_29 || var_1_78) ? (var_1_51 == ((double) (var_1_9 - ((var_1_10 + var_1_52) + var_1_53)))) : (((min ((var_1_88 / var_1_35) , (var_1_72 | var_1_97))) <= var_1_34) ? (var_1_51 == ((double) (max ((max (var_1_53 , var_1_52)) , var_1_41)))) : 1))) && (((abs (var_1_36)) > (var_1_25 / var_1_35)) ? (var_1_54 == ((unsigned long int) ((1108069189u - (var_1_75 + var_1_75)) + ((abs (var_1_26)) + (max (var_1_39 , var_1_45)))))) : (var_1_54 == ((unsigned long int) (var_1_39 + 64u))))) && (var_1_32 ? (var_1_31 ? (var_1_55 == ((unsigned char) (! var_1_56))) : (var_1_55 == ((unsigned char) (! (! (var_1_29 || var_1_56)))))) : 1)) && ((! var_1_29) ? ((((var_1_9 * var_1_65) < var_1_86) || (var_1_81 < var_1_17)) ? (var_1_57 == ((unsigned short int) (37068 - var_1_36))) : 1) : (var_1_57 == ((unsigned short int) (var_1_26 + var_1_28))))) && (var_1_56 ? ((var_1_13 <= var_1_66) ? (var_1_58 == ((double) var_1_10)) : 1) : (var_1_58 == ((double) (var_1_41 + (var_1_53 - var_1_59)))))) && ((var_1_74 == (min (0 , var_1_28))) ? (var_1_60 == ((signed char) (var_1_36 + ((min (var_1_61 , var_1_62)) + (min (var_1_63 , -1)))))) : 1)) && (((! var_1_55) || (var_1_9 == var_1_67)) ? (var_1_64 == ((double) (max (var_1_53 , var_1_10)))) : (var_1_64 == ((double) (max (((var_1_53 + 127.6) - 2.5) , var_1_10)))))) && (((abs (var_1_61)) < var_1_73) ? (var_1_65 == ((float) var_1_53)) : (var_1_65 == ((float) (1.00000000005E10f - var_1_52))))) && (((var_1_52 < var_1_14) || var_1_29) ? (var_1_66 == ((float) (var_1_59 + var_1_41))) : ((var_1_83 != var_1_92) ? (var_1_66 == ((float) ((var_1_8 - var_1_9) - var_1_59))) : 1))) && ((var_1_38 > (var_1_68 - (min (var_1_36 , var_1_28)))) ? (var_1_67 == ((float) (var_1_8 - var_1_13))) : 1)) && ((var_1_71 == (min ((var_1_14 - var_1_10) , var_1_41))) ? (var_1_69 == ((unsigned long int) ((max (var_1_18 , (4221446235u - var_1_96))) - (2144467685u - var_1_35)))) : ((var_1_56 && (var_1_27 == 0)) ? ((var_1_35 > var_1_36) ? (((var_1_83 != (var_1_96 / var_1_17)) || (var_1_87 < var_1_71)) ? (var_1_69 == ((unsigned long int) (min ((var_1_18 - (var_1_70 - var_1_89)) , var_1_28)))) : (var_1_69 == ((unsigned long int) (var_1_18 - (var_1_70 - var_1_22))))) : 1) : (var_1_69 == ((unsigned long int) 1u))))) && ((var_1_48 <= var_1_37) ? ((var_1_86 > var_1_87) ? (var_1_71 == ((float) ((var_1_13 - (var_1_9 - var_1_10)) - var_1_53))) : (var_1_71 == ((float) (var_1_10 + var_1_52)))) : (((var_1_8 >= var_1_41) || var_1_55) ? ((var_1_97 > var_1_94) ? (var_1_71 == ((float) (abs (var_1_9)))) : (var_1_71 == ((float) ((var_1_9 - var_1_10) + (max (var_1_52 , var_1_41)))))) : (var_1_71 == ((float) ((abs (99.1f)) + (var_1_52 + var_1_10))))))) && ((var_1_31 && (last_1_var_1_72 <= var_1_92)) ? (var_1_72 == ((signed long int) (var_1_17 + var_1_75))) : (var_1_72 == ((signed long int) (abs (var_1_17)))))) && (var_1_78 ? (var_1_73 == ((signed long int) var_1_26)) : 1)) && (var_1_29 ? (var_1_74 == ((signed short int) var_1_26)) : 1)) && ((var_1_38 < (8 + (max (var_1_18 , var_1_17)))) ? (var_1_75 == ((unsigned char) (min ((var_1_34 + var_1_26) , var_1_76)))) : 1)) && (var_1_77 == ((double) ((3.8 + var_1_52) + var_1_59)))) && (var_1_32 ? (var_1_78 == ((unsigned char) ((! (var_1_31 && var_1_79)) && var_1_56))) : 1)) && (((var_1_35 - (var_1_26 + var_1_36)) == var_1_34) ? (var_1_79 ? (var_1_80 == ((signed short int) (-128 + var_1_76))) : (var_1_55 ? (var_1_80 == ((signed short int) (var_1_42 - var_1_38))) : (var_1_80 == ((signed short int) (max ((min (0 , var_1_82)) , var_1_36)))))) : 1)) && (var_1_56 ? (var_1_81 == ((unsigned long int) ((max ((var_1_92 + var_1_34) , var_1_75)) + 1u))) : 1)) && ((var_1_31 && (var_1_13 >= var_1_40)) ? (var_1_82 == ((signed char) (abs (var_1_62)))) : 1)) && ((((min (var_1_68 , var_1_84)) - var_1_28) >= var_1_85) ? (var_1_83 == ((signed char) var_1_26)) : (var_1_83 == ((signed char) var_1_62)))) && (var_1_29 ? (var_1_85 == ((unsigned short int) var_1_49)) : 1)) && (var_1_86 == ((double) 7.7))) && (var_1_87 == ((float) var_1_10))) && (var_1_56 ? (var_1_88 == ((unsigned short int) var_1_35)) : 1)) && (var_1_79 ? (var_1_89 == ((signed long int) var_1_83)) : (var_1_89 == ((signed long int) var_1_91)))) && (var_1_90 == ((signed char) var_1_36))) && (var_1_29 ? (var_1_91 == ((unsigned long int) var_1_94)) : (var_1_91 == ((unsigned long int) var_1_44)))) && (var_1_32 ? (var_1_92 == ((unsigned char) var_1_36)) : 1)) && (var_1_32 ? (var_1_93 == ((signed short int) var_1_69)) : (var_1_93 == ((signed short int) var_1_84)))) && (var_1_31 ? (var_1_94 == ((signed short int) var_1_84)) : 1)) && (var_1_95 == ((double) var_1_41))) && (var_1_79 ? (var_1_96 == ((unsigned short int) var_1_22)) : 1)) && (var_1_31 ? (var_1_97 == ((unsigned short int) 2)) : (var_1_97 == ((unsigned short int) 0)))) && ((((var_1_43 | var_1_17) * (last_1_var_1_98 / var_1_34)) >= var_1_49) ? (var_1_98 == ((signed long int) (var_1_96 + (min ((var_1_82 + var_1_80) , -64))))) : (var_1_98 == ((signed long int) 16)))
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

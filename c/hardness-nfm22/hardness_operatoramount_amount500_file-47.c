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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch47Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 5;
signed char var_1_3 = -32;
signed char var_1_6 = 100;
signed char var_1_7 = 0;
signed char var_1_8 = 5;
double var_1_9 = 63.25;
double var_1_10 = 99.125;
double var_1_11 = 32.5;
double var_1_12 = 2.375;
double var_1_13 = 10000000.625;
double var_1_14 = 24.8;
double var_1_15 = 2.75;
signed short int var_1_16 = -10;
unsigned long int var_1_17 = 2253563771;
signed long int var_1_19 = 0;
signed char var_1_20 = -1;
signed char var_1_21 = 50;
float var_1_22 = 999.2;
unsigned short int var_1_23 = 5;
signed short int var_1_24 = -10;
signed long int var_1_26 = 4;
signed char var_1_27 = 8;
signed long int var_1_28 = 32;
unsigned long int var_1_29 = 64;
unsigned long int var_1_31 = 2584464034;
unsigned long int var_1_32 = 2729256798;
signed short int var_1_33 = 1;
unsigned short int var_1_34 = 500;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned short int var_1_38 = 5;
unsigned short int var_1_39 = 31821;
signed char var_1_42 = 16;
signed short int var_1_43 = 8;
unsigned long int var_1_44 = 64;
unsigned long int var_1_45 = 1439983647;
unsigned char var_1_46 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
unsigned short int var_1_52 = 8;
unsigned short int var_1_53 = 36471;
float var_1_54 = 9999999999999.5;
float var_1_55 = 1.5;
float var_1_56 = 5.45;
unsigned short int var_1_57 = 16;
signed char var_1_58 = -4;
signed char var_1_59 = 4;
unsigned char var_1_60 = 0;
signed char var_1_61 = 25;
unsigned char var_1_62 = 1;
double var_1_63 = 64.875;
double var_1_64 = 9.6;
double var_1_65 = 128.3;
double var_1_66 = 4.9;
unsigned long int var_1_67 = 2;
signed short int var_1_68 = 4;
unsigned char var_1_69 = 200;
unsigned short int var_1_71 = 128;
unsigned short int var_1_73 = 19000;
float var_1_74 = 10.8;
float var_1_75 = 0.0;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 1;
unsigned char var_1_78 = 0;
unsigned short int var_1_79 = 1000;
unsigned char var_1_80 = 1;
unsigned long int var_1_81 = 0;
double var_1_82 = 0.6;
signed short int var_1_83 = -10;
unsigned short int var_1_84 = 8;
unsigned short int var_1_85 = 0;
unsigned short int var_1_87 = 10000;
unsigned char var_1_88 = 1;
signed char var_1_89 = 2;
unsigned short int var_1_90 = 128;
unsigned short int var_1_91 = 42850;
unsigned char var_1_92 = 0;
signed char var_1_93 = -16;
float var_1_94 = 25.5;
signed char var_1_95 = -5;
double var_1_96 = 10.5;
signed long int var_1_97 = 25;
unsigned char var_1_98 = 0;
signed short int var_1_99 = 1;
unsigned short int var_1_100 = 5;
unsigned char var_1_101 = 1;
unsigned long int var_1_102 = 25;
unsigned char var_1_103 = 10;
unsigned char var_1_104 = 128;
unsigned char var_1_105 = 50;
unsigned char var_1_106 = 0;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_24 = -10;
signed long int last_1_var_1_26 = 4;
signed long int last_1_var_1_28 = 32;
unsigned long int last_1_var_1_29 = 64;
signed short int last_1_var_1_43 = 8;
unsigned long int last_1_var_1_44 = 64;
unsigned char last_1_var_1_46 = 1;
unsigned short int last_1_var_1_52 = 8;
float last_1_var_1_54 = 9999999999999.5;
unsigned char last_1_var_1_60 = 0;
signed char last_1_var_1_61 = 25;
unsigned char last_1_var_1_62 = 1;
unsigned short int last_1_var_1_71 = 128;
float last_1_var_1_74 = 10.8;
unsigned char last_1_var_1_77 = 1;
unsigned long int last_1_var_1_81 = 0;
unsigned char last_1_var_1_88 = 1;
unsigned char last_1_var_1_92 = 0;
unsigned char last_1_var_1_98 = 0;
unsigned char last_1_var_1_103 = 10;
unsigned char last_1_var_1_105 = 50;
unsigned char last_1_var_1_106 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req35Batch47Amount500
	if (var_1_49 || last_1_var_1_106) {
		var_1_79 = (max (var_1_69 , last_1_var_1_103));
	}


	// From: Req56Batch47Amount500
	if (10000000 >= var_1_79) {
		var_1_103 = (max ((var_1_104 - var_1_21) , var_1_6));
	} else {
		var_1_103 = var_1_104;
	}


	// From: Req30Batch47Amount500
	signed long int stepLocal_13 = (var_1_69 - var_1_7) << var_1_31;
	signed long int stepLocal_12 = last_1_var_1_28;
	if (stepLocal_12 < ((-8 * var_1_31) + last_1_var_1_52)) {
		if (last_1_var_1_88) {
			if (var_1_65 < last_1_var_1_74) {
				if (last_1_var_1_46) {
					var_1_68 = (min (var_1_27 , var_1_59));
				} else {
					var_1_68 = 128;
				}
			}
		}
	} else {
		if (stepLocal_13 > var_1_3) {
			var_1_68 = ((5 + (max (last_1_var_1_103 , var_1_69))) - last_1_var_1_103);
		} else {
			var_1_68 = ((last_1_var_1_103 + var_1_69) - last_1_var_1_103);
		}
	}


	// From: Req24Batch47Amount500
	unsigned long int stepLocal_9 = last_1_var_1_81;
	if (stepLocal_9 > var_1_21) {
		var_1_60 = (last_1_var_1_92 || var_1_50);
	} else {
		var_1_60 = ((var_1_49 && last_1_var_1_92) || var_1_51);
	}


	// From: Req46Batch47Amount500
	if (var_1_60) {
		var_1_93 = var_1_3;
	} else {
		var_1_93 = var_1_6;
	}


	// From: Req54Batch47Amount500
	if (var_1_60) {
		var_1_101 = var_1_49;
	} else {
		var_1_101 = var_1_49;
	}


	// From: Req18Batch47Amount500
	var_1_44 = (last_1_var_1_103 + (min ((var_1_45 - last_1_var_1_43) , var_1_21)));


	// From: Req15Batch47Amount500
	unsigned char stepLocal_6 = last_1_var_1_62;
	unsigned char stepLocal_5 = var_1_6 == last_1_var_1_26;
	signed long int stepLocal_4 = last_1_var_1_26;
	unsigned char stepLocal_3 = (- var_1_14) < (var_1_11 * var_1_15);
	if (stepLocal_5 && var_1_37) {
		var_1_38 = ((min (last_1_var_1_105 , var_1_6)) + (var_1_39 - var_1_7));
	} else {
		if (stepLocal_3 && last_1_var_1_46) {
			if (((min (last_1_var_1_71 , last_1_var_1_52)) * (last_1_var_1_105 + 10)) <= stepLocal_4) {
				if (stepLocal_6 || last_1_var_1_77) {
					var_1_38 = (last_1_var_1_105 + last_1_var_1_105);
				}
			}
		} else {
			var_1_38 = ((var_1_6 + var_1_7) + last_1_var_1_103);
		}
	}


	// From: Req11Batch47Amount500
	if ((max ((last_1_var_1_61 * last_1_var_1_103) , (min (last_1_var_1_29 , last_1_var_1_44)))) <= 1) {
		if (last_1_var_1_52 <= -16) {
			var_1_29 = (min (128u , 5u));
		} else {
			var_1_29 = (var_1_31 - var_1_7);
		}
	} else {
		var_1_29 = (max ((var_1_31 - var_1_21) , (var_1_32 - 64u)));
	}


	// From: Req4Batch47Amount500
	if ((min ((- var_1_12) , var_1_15)) < var_1_14) {
		var_1_19 = ((max (var_1_7 , var_1_6)) - var_1_103);
	} else {
		var_1_19 = (max (var_1_103 , var_1_29));
	}


	// From: Req7Batch47Amount500
	if (last_1_var_1_98 && last_1_var_1_60) {
		if (last_1_var_1_60) {
			var_1_23 = (abs (var_1_6));
		} else {
			var_1_23 = var_1_21;
		}
	} else {
		var_1_23 = (abs (var_1_6));
	}


	// From: Req40Batch47Amount500
	unsigned char stepLocal_20 = last_1_var_1_54 >= last_1_var_1_74;
	if (last_1_var_1_60 || stepLocal_20) {
		var_1_84 = (min ((min (last_1_var_1_105 , (last_1_var_1_105 + var_1_21))) , (max (var_1_73 , var_1_7))));
	}


	// From: Req42Batch47Amount500
	if (var_1_8 < var_1_84) {
		var_1_88 = (! var_1_37);
	} else {
		var_1_88 = ((! var_1_37) && var_1_78);
	}


	// From: Req3Batch47Amount500
	if (! ((var_1_17 - var_1_6) > var_1_7)) {
		var_1_16 = (var_1_7 - (min ((max (16 , var_1_6)) , var_1_103)));
	} else {
		var_1_16 = (var_1_7 + var_1_8);
	}


	// From: Req14Batch47Amount500
	if (var_1_101) {
		var_1_35 = (! (var_1_36 || var_1_37));
	}


	// From: Req20Batch47Amount500
	var_1_52 = (var_1_53 - var_1_39);


	// From: Req21Batch47Amount500
	if (var_1_37) {
		var_1_54 = (max ((var_1_10 - (var_1_12 + var_1_11)) , (var_1_55 - var_1_56)));
	} else {
		var_1_54 = var_1_11;
	}


	// From: Req25Batch47Amount500
	unsigned char stepLocal_10 = var_1_50;
	if ((var_1_103 != last_1_var_1_61) && stepLocal_10) {
		var_1_61 = (min (var_1_59 , (abs (var_1_21 + var_1_8))));
	}


	// From: Req32Batch47Amount500
	var_1_74 = (max (var_1_10 , (var_1_66 - (var_1_75 - var_1_65))));


	// From: Req38Batch47Amount500
	var_1_82 = (max (((16.2 + var_1_65) - var_1_55) , (min (var_1_11 , var_1_66))));


	// From: Req44Batch47Amount500
	var_1_90 = (var_1_91 - (var_1_39 - 64));


	// From: Req47Batch47Amount500
	var_1_94 = var_1_66;


	// From: Req49Batch47Amount500
	var_1_96 = var_1_15;


	// From: Req51Batch47Amount500
	if (var_1_78) {
		var_1_98 = var_1_50;
	} else {
		var_1_98 = var_1_50;
	}


	// From: Req53Batch47Amount500
	if (var_1_101) {
		var_1_100 = var_1_91;
	} else {
		var_1_100 = var_1_6;
	}


	// From: Req55Batch47Amount500
	var_1_102 = var_1_103;


	// From: Req57Batch47Amount500
	if (var_1_10 < var_1_94) {
		var_1_105 = var_1_6;
	}


	// From: Req58Batch47Amount500
	var_1_106 = var_1_50;


	// From: Req45Batch47Amount500
	unsigned long int stepLocal_22 = var_1_102 | var_1_39;
	if (! ((var_1_103 + var_1_29) > var_1_68)) {
		if (stepLocal_22 > -128) {
			var_1_92 = ((var_1_49 || var_1_36) || (! (var_1_50 && var_1_78)));
		} else {
			var_1_92 = (var_1_78 && var_1_51);
		}
	} else {
		var_1_92 = var_1_50;
	}


	// From: Req37Batch47Amount500
	unsigned short int stepLocal_19 = var_1_90;
	if ((var_1_55 - var_1_66) >= var_1_15) {
		if (stepLocal_19 >= var_1_103) {
			var_1_81 = var_1_23;
		} else {
			var_1_81 = (abs (var_1_39));
		}
	} else {
		var_1_81 = (2u + var_1_6);
	}


	// From: Req5Batch47Amount500
	unsigned long int stepLocal_1 = var_1_81;
	if (stepLocal_1 <= (min ((min (var_1_7 , var_1_8)) , var_1_6))) {
		var_1_20 = (var_1_6 - (var_1_7 + var_1_21));
	}


	// From: Req1Batch47Amount500
	signed char stepLocal_0 = var_1_3;
	if (var_1_92) {
		var_1_1 = (abs (min (10 , var_1_3)));
	} else {
		if (var_1_92) {
			if (stepLocal_0 <= var_1_20) {
				var_1_1 = 8;
			} else {
				var_1_1 = ((var_1_6 - var_1_7) - 64);
			}
		} else {
			var_1_1 = (var_1_7 + var_1_8);
		}
	}


	// From: Req6Batch47Amount500
	signed char stepLocal_2 = var_1_61;
	if (var_1_105 == stepLocal_2) {
		var_1_22 = (min (var_1_12 , var_1_10));
	} else {
		var_1_22 = var_1_10;
	}


	// From: Req8Batch47Amount500
	if (last_1_var_1_24 != var_1_105) {
		var_1_24 = (max ((var_1_8 + var_1_21) , -8));
	} else {
		var_1_24 = (min ((min ((var_1_105 - var_1_103) , var_1_3)) , (min ((min (var_1_7 , var_1_6)) , var_1_52))));
	}


	// From: Req22Batch47Amount500
	signed long int stepLocal_7 = - var_1_1;
	if (stepLocal_7 > var_1_105) {
		var_1_57 = (max ((min (var_1_105 , 50)) , var_1_53));
	}


	// From: Req26Batch47Amount500
	if ((var_1_55 + var_1_14) < var_1_11) {
		var_1_62 = (! ((var_1_50 && var_1_51) && (! var_1_36)));
	} else {
		var_1_62 = (var_1_98 && var_1_36);
	}


	// From: Req27Batch47Amount500
	if (var_1_10 > (var_1_82 / (max (1.5 , var_1_14)))) {
		var_1_63 = var_1_12;
	} else {
		var_1_63 = (var_1_12 + (abs (var_1_13)));
	}


	// From: Req41Batch47Amount500
	if (var_1_37) {
		var_1_85 = (var_1_73 + (var_1_105 + (var_1_87 - 32)));
	}


	// From: Req17Batch47Amount500
	if (var_1_81 >= var_1_103) {
		var_1_43 = var_1_103;
	} else {
		if (-64 != var_1_68) {
			var_1_43 = (var_1_6 - (var_1_21 + var_1_7));
		}
	}


	// From: Req33Batch47Amount500
	if (var_1_20 <= var_1_38) {
		var_1_76 = (! var_1_36);
	}


	// From: Req2Batch47Amount500
	if (var_1_6 > (var_1_7 + var_1_84)) {
		if (var_1_3 >= var_1_6) {
			if (var_1_62) {
				var_1_9 = (((var_1_10 + var_1_11) - var_1_12) + var_1_13);
			} else {
				if (var_1_10 > (- (var_1_11 / var_1_14))) {
					var_1_9 = (max (var_1_13 , (max (var_1_11 , var_1_15))));
				} else {
					if (var_1_76) {
						var_1_9 = var_1_13;
					}
				}
			}
		} else {
			var_1_9 = var_1_15;
		}
	} else {
		var_1_9 = 64.25;
	}


	// From: Req31Batch47Amount500
	if ((var_1_79 + var_1_38) > var_1_24) {
		var_1_71 = (min (var_1_103 , ((var_1_39 + var_1_73) - var_1_103)));
	} else {
		var_1_71 = (var_1_21 + (var_1_105 + (var_1_6 + var_1_69)));
	}


	// From: Req13Batch47Amount500
	if (var_1_9 >= var_1_14) {
		var_1_34 = var_1_21;
	}


	// From: Req12Batch47Amount500
	if (var_1_62) {
		var_1_33 = (min (var_1_103 , var_1_103));
	} else {
		var_1_33 = (max (var_1_103 , (var_1_6 - var_1_103)));
	}


	// From: Req29Batch47Amount500
	unsigned short int stepLocal_11 = var_1_34;
	if (stepLocal_11 <= (min (var_1_33 , var_1_44))) {
		var_1_67 = (var_1_31 - var_1_43);
	}


	// From: Req34Batch47Amount500
	signed long int stepLocal_16 = 25;
	signed long int stepLocal_15 = var_1_93 % var_1_6;
	unsigned char stepLocal_14 = var_1_88;
	if (var_1_96 <= (- (abs (var_1_11)))) {
		var_1_77 = ((var_1_82 >= var_1_55) && (! var_1_50));
	} else {
		if (var_1_33 >= stepLocal_16) {
			if (stepLocal_15 >= (abs (var_1_33))) {
				if (stepLocal_14 && var_1_101) {
					var_1_77 = ((var_1_59 <= var_1_84) || var_1_51);
				} else {
					var_1_77 = var_1_36;
				}
			} else {
				var_1_77 = ((! var_1_50) || (! var_1_51));
			}
		} else {
			var_1_77 = ((var_1_50 && var_1_51) && var_1_78);
		}
	}


	// From: Req10Batch47Amount500
	if (var_1_98) {
		if (var_1_76) {
			var_1_28 = (max (-2 , (var_1_21 + (max (var_1_23 , var_1_44)))));
		}
	}


	// From: Req23Batch47Amount500
	unsigned char stepLocal_8 = var_1_77;
	if ((var_1_54 <= var_1_14) && stepLocal_8) {
		var_1_58 = ((var_1_7 + 4) - var_1_21);
	} else {
		var_1_58 = ((abs (abs (var_1_8))) - (abs (var_1_59)));
	}


	// From: Req43Batch47Amount500
	unsigned char stepLocal_21 = var_1_49;
	if (stepLocal_21 && ((var_1_67 * var_1_53) <= var_1_20)) {
		var_1_89 = (var_1_8 + var_1_7);
	}


	// From: Req48Batch47Amount500
	if (var_1_77) {
		var_1_95 = var_1_7;
	} else {
		var_1_95 = var_1_3;
	}


	// From: Req52Batch47Amount500
	if (var_1_51) {
		var_1_99 = var_1_95;
	}


	// From: Req36Batch47Amount500
	signed long int stepLocal_18 = 16 << 10;
	unsigned short int stepLocal_17 = var_1_52;
	if (stepLocal_18 < var_1_67) {
		if (! (var_1_105 > (var_1_45 >> var_1_52))) {
			if (var_1_84 <= stepLocal_17) {
				var_1_80 = (! var_1_37);
			} else {
				var_1_80 = ((! var_1_50) || (! var_1_51));
			}
		} else {
			var_1_80 = ((var_1_92 && var_1_36) || ((var_1_7 < var_1_31) && (! var_1_51)));
		}
	}


	// From: Req50Batch47Amount500
	if (var_1_80) {
		var_1_97 = var_1_19;
	}


	// From: Req39Batch47Amount500
	if (var_1_60) {
		if ((var_1_24 > (var_1_53 - 8)) && (var_1_22 < 999.5)) {
			if (var_1_89 > (max (var_1_103 , (var_1_89 / var_1_6)))) {
				var_1_83 = (-256 + var_1_33);
			} else {
				var_1_83 = (max (var_1_105 , (max (2 , var_1_99))));
			}
		}
	}


	// From: Req19Batch47Amount500
	if ((var_1_97 < 100) && var_1_37) {
		var_1_46 = (var_1_36 && var_1_37);
	} else {
		if (var_1_80) {
			if (var_1_77 || var_1_36) {
				if ((var_1_84 < 8u) || var_1_37) {
					var_1_46 = (var_1_76 && var_1_36);
				} else {
					var_1_46 = (var_1_37 || var_1_36);
				}
			} else {
				var_1_46 = (((var_1_32 >= var_1_97) || var_1_77) && (var_1_37 || var_1_36));
			}
		} else {
			if (var_1_84 <= (var_1_7 + (var_1_105 * var_1_84))) {
				if (var_1_9 > (var_1_74 / var_1_14)) {
					if ((-32 * var_1_52) < var_1_81) {
						if (var_1_37) {
							var_1_46 = (var_1_49 || (var_1_77 && var_1_36));
						}
					} else {
						var_1_46 = var_1_50;
					}
				} else {
					var_1_46 = (var_1_77 || var_1_51);
				}
			} else {
				var_1_46 = (var_1_36 || var_1_49);
			}
		}
	}


	// From: Req28Batch47Amount500
	if (((var_1_105 - var_1_21) ^ var_1_23) < var_1_79) {
		if (var_1_46 || (var_1_38 != (var_1_3 * var_1_71))) {
			var_1_64 = ((var_1_10 + var_1_11) + (31.25 + (var_1_65 - var_1_66)));
		} else {
			var_1_64 = 127.75;
		}
	}


	// From: Req16Batch47Amount500
	if (var_1_10 <= var_1_64) {
		var_1_42 = ((var_1_7 + var_1_21) - var_1_6);
	}


	// From: Req9Batch47Amount500
	if (var_1_42 == var_1_23) {
		if ((abs (var_1_15)) >= var_1_12) {
			if (var_1_105 <= (var_1_42 >> (abs (var_1_27)))) {
				var_1_26 = (((min (var_1_79 , var_1_7)) - (max (var_1_21 , var_1_103))) + (32 + var_1_27));
			} else {
				var_1_26 = (var_1_79 - (var_1_7 + var_1_105));
			}
		} else {
			var_1_26 = (abs (var_1_8));
		}
	} else {
		if (var_1_3 < var_1_79) {
			var_1_26 = (min (((var_1_7 + var_1_6) - var_1_105) , var_1_29));
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -126);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 62);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691390e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	assume_abort_if_not(var_1_14 != 0.0F);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967295);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -8);
	assume_abort_if_not(var_1_27 <= 8);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741823);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65534);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -126);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691390e+12F && var_1_66 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 127);
	assume_abort_if_not(var_1_69 <= 255);
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 16384);
	assume_abort_if_not(var_1_73 <= 32767);
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 4611686.018427382800e+12F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854765600e+12F && var_1_75 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 1);
	assume_abort_if_not(var_1_78 <= 1);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 8191);
	assume_abort_if_not(var_1_87 <= 16383);
	var_1_91 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_91 >= 32767);
	assume_abort_if_not(var_1_91 <= 65534);
	var_1_104 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_104 >= 127);
	assume_abort_if_not(var_1_104 <= 254);
}



void updateLastVariables() {
	last_1_var_1_24 = var_1_24;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_106 = var_1_106;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_92 ? (var_1_1 == ((signed char) (abs (min (10 , var_1_3))))) : (var_1_92 ? ((var_1_3 <= var_1_20) ? (var_1_1 == ((signed char) 8)) : (var_1_1 == ((signed char) ((var_1_6 - var_1_7) - 64)))) : (var_1_1 == ((signed char) (var_1_7 + var_1_8))))) && ((var_1_6 > (var_1_7 + var_1_84)) ? ((var_1_3 >= var_1_6) ? (var_1_62 ? (var_1_9 == ((double) (((var_1_10 + var_1_11) - var_1_12) + var_1_13))) : ((var_1_10 > (- (var_1_11 / var_1_14))) ? (var_1_9 == ((double) (max (var_1_13 , (max (var_1_11 , var_1_15)))))) : (var_1_76 ? (var_1_9 == ((double) var_1_13)) : 1))) : (var_1_9 == ((double) var_1_15))) : (var_1_9 == ((double) 64.25)))) && ((! ((var_1_17 - var_1_6) > var_1_7)) ? (var_1_16 == ((signed short int) (var_1_7 - (min ((max (16 , var_1_6)) , var_1_103))))) : (var_1_16 == ((signed short int) (var_1_7 + var_1_8))))) && (((min ((- var_1_12) , var_1_15)) < var_1_14) ? (var_1_19 == ((signed long int) ((max (var_1_7 , var_1_6)) - var_1_103))) : (var_1_19 == ((signed long int) (max (var_1_103 , var_1_29)))))) && ((var_1_81 <= (min ((min (var_1_7 , var_1_8)) , var_1_6))) ? (var_1_20 == ((signed char) (var_1_6 - (var_1_7 + var_1_21)))) : 1)) && ((var_1_105 == var_1_61) ? (var_1_22 == ((float) (min (var_1_12 , var_1_10)))) : (var_1_22 == ((float) var_1_10)))) && ((last_1_var_1_98 && last_1_var_1_60) ? (last_1_var_1_60 ? (var_1_23 == ((unsigned short int) (abs (var_1_6)))) : (var_1_23 == ((unsigned short int) var_1_21))) : (var_1_23 == ((unsigned short int) (abs (var_1_6)))))) && ((last_1_var_1_24 != var_1_105) ? (var_1_24 == ((signed short int) (max ((var_1_8 + var_1_21) , -8)))) : (var_1_24 == ((signed short int) (min ((min ((var_1_105 - var_1_103) , var_1_3)) , (min ((min (var_1_7 , var_1_6)) , var_1_52)))))))) && ((var_1_42 == var_1_23) ? (((abs (var_1_15)) >= var_1_12) ? ((var_1_105 <= (var_1_42 >> (abs (var_1_27)))) ? (var_1_26 == ((signed long int) (((min (var_1_79 , var_1_7)) - (max (var_1_21 , var_1_103))) + (32 + var_1_27)))) : (var_1_26 == ((signed long int) (var_1_79 - (var_1_7 + var_1_105))))) : (var_1_26 == ((signed long int) (abs (var_1_8))))) : ((var_1_3 < var_1_79) ? (var_1_26 == ((signed long int) (min (((var_1_7 + var_1_6) - var_1_105) , var_1_29)))) : 1))) && (var_1_98 ? (var_1_76 ? (var_1_28 == ((signed long int) (max (-2 , (var_1_21 + (max (var_1_23 , var_1_44))))))) : 1) : 1)) && (((max ((last_1_var_1_61 * last_1_var_1_103) , (min (last_1_var_1_29 , last_1_var_1_44)))) <= 1) ? ((last_1_var_1_52 <= -16) ? (var_1_29 == ((unsigned long int) (min (128u , 5u)))) : (var_1_29 == ((unsigned long int) (var_1_31 - var_1_7)))) : (var_1_29 == ((unsigned long int) (max ((var_1_31 - var_1_21) , (var_1_32 - 64u))))))) && (var_1_62 ? (var_1_33 == ((signed short int) (min (var_1_103 , var_1_103)))) : (var_1_33 == ((signed short int) (max (var_1_103 , (var_1_6 - var_1_103))))))) && ((var_1_9 >= var_1_14) ? (var_1_34 == ((unsigned short int) var_1_21)) : 1)) && (var_1_101 ? (var_1_35 == ((unsigned char) (! (var_1_36 || var_1_37)))) : 1)) && (((var_1_6 == last_1_var_1_26) && var_1_37) ? (var_1_38 == ((unsigned short int) ((min (last_1_var_1_105 , var_1_6)) + (var_1_39 - var_1_7)))) : ((((- var_1_14) < (var_1_11 * var_1_15)) && last_1_var_1_46) ? ((((min (last_1_var_1_71 , last_1_var_1_52)) * (last_1_var_1_105 + 10)) <= last_1_var_1_26) ? ((last_1_var_1_62 || last_1_var_1_77) ? (var_1_38 == ((unsigned short int) (last_1_var_1_105 + last_1_var_1_105))) : 1) : 1) : (var_1_38 == ((unsigned short int) ((var_1_6 + var_1_7) + last_1_var_1_103)))))) && ((var_1_10 <= var_1_64) ? (var_1_42 == ((signed char) ((var_1_7 + var_1_21) - var_1_6))) : 1)) && ((var_1_81 >= var_1_103) ? (var_1_43 == ((signed short int) var_1_103)) : ((-64 != var_1_68) ? (var_1_43 == ((signed short int) (var_1_6 - (var_1_21 + var_1_7)))) : 1))) && (var_1_44 == ((unsigned long int) (last_1_var_1_103 + (min ((var_1_45 - last_1_var_1_43) , var_1_21)))))) && (((var_1_97 < 100) && var_1_37) ? (var_1_46 == ((unsigned char) (var_1_36 && var_1_37))) : (var_1_80 ? ((var_1_77 || var_1_36) ? (((var_1_84 < 8u) || var_1_37) ? (var_1_46 == ((unsigned char) (var_1_76 && var_1_36))) : (var_1_46 == ((unsigned char) (var_1_37 || var_1_36)))) : (var_1_46 == ((unsigned char) (((var_1_32 >= var_1_97) || var_1_77) && (var_1_37 || var_1_36))))) : ((var_1_84 <= (var_1_7 + (var_1_105 * var_1_84))) ? ((var_1_9 > (var_1_74 / var_1_14)) ? (((-32 * var_1_52) < var_1_81) ? (var_1_37 ? (var_1_46 == ((unsigned char) (var_1_49 || (var_1_77 && var_1_36)))) : 1) : (var_1_46 == ((unsigned char) var_1_50))) : (var_1_46 == ((unsigned char) (var_1_77 || var_1_51)))) : (var_1_46 == ((unsigned char) (var_1_36 || var_1_49))))))) && (var_1_52 == ((unsigned short int) (var_1_53 - var_1_39)))) && (var_1_37 ? (var_1_54 == ((float) (max ((var_1_10 - (var_1_12 + var_1_11)) , (var_1_55 - var_1_56))))) : (var_1_54 == ((float) var_1_11)))) && (((- var_1_1) > var_1_105) ? (var_1_57 == ((unsigned short int) (max ((min (var_1_105 , 50)) , var_1_53)))) : 1)) && (((var_1_54 <= var_1_14) && var_1_77) ? (var_1_58 == ((signed char) ((var_1_7 + 4) - var_1_21))) : (var_1_58 == ((signed char) ((abs (abs (var_1_8))) - (abs (var_1_59))))))) && ((last_1_var_1_81 > var_1_21) ? (var_1_60 == ((unsigned char) (last_1_var_1_92 || var_1_50))) : (var_1_60 == ((unsigned char) ((var_1_49 && last_1_var_1_92) || var_1_51))))) && (((var_1_103 != last_1_var_1_61) && var_1_50) ? (var_1_61 == ((signed char) (min (var_1_59 , (abs (var_1_21 + var_1_8)))))) : 1)) && (((var_1_55 + var_1_14) < var_1_11) ? (var_1_62 == ((unsigned char) (! ((var_1_50 && var_1_51) && (! var_1_36))))) : (var_1_62 == ((unsigned char) (var_1_98 && var_1_36))))) && ((var_1_10 > (var_1_82 / (max (1.5 , var_1_14)))) ? (var_1_63 == ((double) var_1_12)) : (var_1_63 == ((double) (var_1_12 + (abs (var_1_13))))))) && ((((var_1_105 - var_1_21) ^ var_1_23) < var_1_79) ? ((var_1_46 || (var_1_38 != (var_1_3 * var_1_71))) ? (var_1_64 == ((double) ((var_1_10 + var_1_11) + (31.25 + (var_1_65 - var_1_66))))) : (var_1_64 == ((double) 127.75))) : 1)) && ((var_1_34 <= (min (var_1_33 , var_1_44))) ? (var_1_67 == ((unsigned long int) (var_1_31 - var_1_43))) : 1)) && ((last_1_var_1_28 < ((-8 * var_1_31) + last_1_var_1_52)) ? (last_1_var_1_88 ? ((var_1_65 < last_1_var_1_74) ? (last_1_var_1_46 ? (var_1_68 == ((signed short int) (min (var_1_27 , var_1_59)))) : (var_1_68 == ((signed short int) 128))) : 1) : 1) : ((((var_1_69 - var_1_7) << var_1_31) > var_1_3) ? (var_1_68 == ((signed short int) ((5 + (max (last_1_var_1_103 , var_1_69))) - last_1_var_1_103))) : (var_1_68 == ((signed short int) ((last_1_var_1_103 + var_1_69) - last_1_var_1_103)))))) && (((var_1_79 + var_1_38) > var_1_24) ? (var_1_71 == ((unsigned short int) (min (var_1_103 , ((var_1_39 + var_1_73) - var_1_103))))) : (var_1_71 == ((unsigned short int) (var_1_21 + (var_1_105 + (var_1_6 + var_1_69))))))) && (var_1_74 == ((float) (max (var_1_10 , (var_1_66 - (var_1_75 - var_1_65))))))) && ((var_1_20 <= var_1_38) ? (var_1_76 == ((unsigned char) (! var_1_36))) : 1)) && ((var_1_96 <= (- (abs (var_1_11)))) ? (var_1_77 == ((unsigned char) ((var_1_82 >= var_1_55) && (! var_1_50)))) : ((var_1_33 >= 25) ? (((var_1_93 % var_1_6) >= (abs (var_1_33))) ? ((var_1_88 && var_1_101) ? (var_1_77 == ((unsigned char) ((var_1_59 <= var_1_84) || var_1_51))) : (var_1_77 == ((unsigned char) var_1_36))) : (var_1_77 == ((unsigned char) ((! var_1_50) || (! var_1_51))))) : (var_1_77 == ((unsigned char) ((var_1_50 && var_1_51) && var_1_78)))))) && ((var_1_49 || last_1_var_1_106) ? (var_1_79 == ((unsigned short int) (max (var_1_69 , last_1_var_1_103)))) : 1)) && (((16 << 10) < var_1_67) ? ((! (var_1_105 > (var_1_45 >> var_1_52))) ? ((var_1_84 <= var_1_52) ? (var_1_80 == ((unsigned char) (! var_1_37))) : (var_1_80 == ((unsigned char) ((! var_1_50) || (! var_1_51))))) : (var_1_80 == ((unsigned char) ((var_1_92 && var_1_36) || ((var_1_7 < var_1_31) && (! var_1_51)))))) : 1)) && (((var_1_55 - var_1_66) >= var_1_15) ? ((var_1_90 >= var_1_103) ? (var_1_81 == ((unsigned long int) var_1_23)) : (var_1_81 == ((unsigned long int) (abs (var_1_39))))) : (var_1_81 == ((unsigned long int) (2u + var_1_6))))) && (var_1_82 == ((double) (max (((16.2 + var_1_65) - var_1_55) , (min (var_1_11 , var_1_66))))))) && (var_1_60 ? (((var_1_24 > (var_1_53 - 8)) && (var_1_22 < 999.5)) ? ((var_1_89 > (max (var_1_103 , (var_1_89 / var_1_6)))) ? (var_1_83 == ((signed short int) (-256 + var_1_33))) : (var_1_83 == ((signed short int) (max (var_1_105 , (max (2 , var_1_99))))))) : 1) : 1)) && ((last_1_var_1_60 || (last_1_var_1_54 >= last_1_var_1_74)) ? (var_1_84 == ((unsigned short int) (min ((min (last_1_var_1_105 , (last_1_var_1_105 + var_1_21))) , (max (var_1_73 , var_1_7)))))) : 1)) && (var_1_37 ? (var_1_85 == ((unsigned short int) (var_1_73 + (var_1_105 + (var_1_87 - 32))))) : 1)) && ((var_1_8 < var_1_84) ? (var_1_88 == ((unsigned char) (! var_1_37))) : (var_1_88 == ((unsigned char) ((! var_1_37) && var_1_78))))) && ((var_1_49 && ((var_1_67 * var_1_53) <= var_1_20)) ? (var_1_89 == ((signed char) (var_1_8 + var_1_7))) : 1)) && (var_1_90 == ((unsigned short int) (var_1_91 - (var_1_39 - 64))))) && ((! ((var_1_103 + var_1_29) > var_1_68)) ? (((var_1_102 | var_1_39) > -128) ? (var_1_92 == ((unsigned char) ((var_1_49 || var_1_36) || (! (var_1_50 && var_1_78))))) : (var_1_92 == ((unsigned char) (var_1_78 && var_1_51)))) : (var_1_92 == ((unsigned char) var_1_50)))) && (var_1_60 ? (var_1_93 == ((signed char) var_1_3)) : (var_1_93 == ((signed char) var_1_6)))) && (var_1_94 == ((float) var_1_66))) && (var_1_77 ? (var_1_95 == ((signed char) var_1_7)) : (var_1_95 == ((signed char) var_1_3)))) && (var_1_96 == ((double) var_1_15))) && (var_1_80 ? (var_1_97 == ((signed long int) var_1_19)) : 1)) && (var_1_78 ? (var_1_98 == ((unsigned char) var_1_50)) : (var_1_98 == ((unsigned char) var_1_50)))) && (var_1_51 ? (var_1_99 == ((signed short int) var_1_95)) : 1)) && (var_1_101 ? (var_1_100 == ((unsigned short int) var_1_91)) : (var_1_100 == ((unsigned short int) var_1_6)))) && (var_1_60 ? (var_1_101 == ((unsigned char) var_1_49)) : (var_1_101 == ((unsigned char) var_1_49)))) && (var_1_102 == ((unsigned long int) var_1_103))) && ((10000000 >= var_1_79) ? (var_1_103 == ((unsigned char) (max ((var_1_104 - var_1_21) , var_1_6)))) : (var_1_103 == ((unsigned char) var_1_104)))) && ((var_1_10 < var_1_94) ? (var_1_105 == ((unsigned char) var_1_6)) : 1)) && (var_1_106 == ((unsigned char) var_1_50))
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

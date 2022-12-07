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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch99Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 8;
unsigned char var_1_4 = 200;
unsigned char var_1_5 = 0;
unsigned char var_1_8 = 4;
signed short int var_1_9 = -256;
double var_1_10 = 256.6;
double var_1_11 = 99.25;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 8;
signed short int var_1_17 = 10;
signed short int var_1_18 = 1;
signed short int var_1_19 = 21299;
double var_1_20 = 64.75;
double var_1_22 = 256.8;
double var_1_23 = 4.8;
double var_1_24 = 255.75;
double var_1_25 = 64.5;
unsigned char var_1_26 = 8;
double var_1_27 = 99.4;
unsigned char var_1_28 = 50;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 100;
unsigned char var_1_31 = 25;
unsigned char var_1_32 = 10;
signed short int var_1_33 = -64;
double var_1_34 = 127.25;
double var_1_35 = 49.75;
double var_1_36 = 0.0;
unsigned long int var_1_37 = 32;
unsigned long int var_1_38 = 4060911564;
double var_1_39 = 2.5;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 128;
unsigned char var_1_42 = 128;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
double var_1_46 = 256.95;
signed long int var_1_47 = -4;
signed short int var_1_48 = 2;
float var_1_49 = 32.8;
signed char var_1_50 = 1;
signed short int var_1_51 = -256;
signed short int var_1_52 = 10000;
unsigned long int var_1_53 = 8;
unsigned long int var_1_54 = 1726147076;
signed long int var_1_55 = 10;
float var_1_56 = 9999999999999.6;
float var_1_57 = 0.0;
float var_1_58 = 99.125;
signed char var_1_59 = 50;
signed char var_1_60 = -8;
signed char var_1_61 = 16;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 64;
float var_1_64 = 128.5;
float var_1_65 = 4.5;
float var_1_66 = 1000.4;
signed short int var_1_67 = 64;
float var_1_69 = 100.1;
float var_1_73 = 255.25;
signed short int var_1_74 = 100;
signed short int var_1_75 = 2;
unsigned long int var_1_76 = 5;
unsigned long int var_1_77 = 1;
unsigned char var_1_78 = 128;
unsigned char var_1_79 = 16;
double var_1_80 = 63.5;
double var_1_81 = 31.5;
unsigned char var_1_82 = 0;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 8;
signed long int var_1_85 = -64;
signed short int var_1_87 = -10;
unsigned char var_1_88 = 16;
unsigned short int var_1_89 = 1;
float var_1_90 = 2.2;
double var_1_91 = 1.5;
unsigned char var_1_92 = 1;
unsigned short int var_1_93 = 64;
double var_1_94 = 9999.6;
signed long int var_1_95 = -50;
float var_1_97 = 7.5;
signed short int var_1_98 = -50;
unsigned char var_1_99 = 1;
signed short int var_1_100 = -256;
float var_1_101 = 0.0;
float var_1_102 = 24.2;
unsigned long int var_1_103 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_16 = 8;
signed short int last_1_var_1_17 = 10;
unsigned char last_1_var_1_26 = 8;
signed short int last_1_var_1_33 = -64;
unsigned char last_1_var_1_43 = 1;
signed long int last_1_var_1_47 = -4;
signed short int last_1_var_1_48 = 2;
signed long int last_1_var_1_55 = 10;
unsigned char last_1_var_1_82 = 0;
signed long int last_1_var_1_85 = -64;
unsigned char last_1_var_1_88 = 16;
signed short int last_1_var_1_98 = -50;
signed short int last_1_var_1_100 = -256;
unsigned long int last_1_var_1_103 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch99Amount500
	var_1_37 = (var_1_38 - (max ((min (last_1_var_1_103 , last_1_var_1_100)) , last_1_var_1_26)));


	// From: Req27Batch99Amount500
	if (last_1_var_1_47 >= last_1_var_1_17) {
		if (! last_1_var_1_82) {
			var_1_67 = last_1_var_1_88;
		} else {
			var_1_67 = (abs (max (last_1_var_1_98 , var_1_28)));
		}
	} else {
		if (var_1_65 <= (- var_1_58)) {
			if (8u != var_1_5) {
				var_1_67 = (var_1_32 - (max (last_1_var_1_55 , last_1_var_1_100)));
			} else {
				var_1_67 = (5 + (min (var_1_29 , last_1_var_1_16)));
			}
		} else {
			var_1_67 = var_1_52;
		}
	}


	// From: Req29Batch99Amount500
	if ((var_1_41 >> (8 - var_1_75)) >= ((var_1_67 + -256) >> (var_1_76 + var_1_77))) {
		var_1_74 = (abs (var_1_67));
	}


	// From: Req3Batch99Amount500
	if ((last_1_var_1_88 ^ (min (last_1_var_1_85 , var_1_8))) <= var_1_4) {
		if (last_1_var_1_85 > 64) {
			var_1_12 = (last_1_var_1_82 || var_1_13);
		} else {
			var_1_12 = ((var_1_13 && (last_1_var_1_43 || var_1_14)) && var_1_15);
		}
	}


	// From: Req49Batch99Amount500
	if (var_1_12) {
		var_1_101 = (var_1_25 - (var_1_57 + 1.0000000000000005E15f));
	} else {
		var_1_101 = (((max (var_1_25 , var_1_102)) - (abs (var_1_58))) + (var_1_73 + 64.9f));
	}


	// From: Req43Batch99Amount500
	if (var_1_12) {
		var_1_94 = var_1_58;
	} else {
		var_1_94 = var_1_25;
	}


	// From: Req4Batch99Amount500
	if (var_1_5 <= var_1_8) {
		var_1_16 = var_1_4;
	} else {
		var_1_16 = (min (var_1_8 , var_1_4));
	}


	// From: Req8Batch99Amount500
	if ((var_1_23 * (abs (1.1))) > (var_1_25 / var_1_27)) {
		var_1_26 = var_1_5;
	} else {
		var_1_26 = ((200 - (var_1_28 - var_1_29)) - ((var_1_30 - var_1_31) - var_1_32));
	}


	// From: Req10Batch99Amount500
	unsigned char stepLocal_5 = var_1_29;
	if (stepLocal_5 >= var_1_74) {
		var_1_34 = (min ((var_1_25 - var_1_35) , var_1_22));
	} else {
		var_1_34 = ((var_1_36 - var_1_25) - 1.4);
	}


	// From: Req13Batch99Amount500
	if (! var_1_13) {
		var_1_40 = ((min ((max (var_1_4 , var_1_41)) , var_1_42)) - (var_1_32 + var_1_29));
	}


	// From: Req14Batch99Amount500
	var_1_43 = (var_1_44 || var_1_45);


	// From: Req19Batch99Amount500
	var_1_50 = (var_1_29 - var_1_31);


	// From: Req30Batch99Amount500
	if (4u != var_1_42) {
		var_1_78 = (min ((min (var_1_77 , var_1_29)) , ((abs (var_1_76)) + (var_1_61 + var_1_31))));
	} else {
		var_1_78 = (max (var_1_28 , (var_1_61 + var_1_79)));
	}


	// From: Req31Batch99Amount500
	signed char stepLocal_18 = var_1_61;
	if (25u >= stepLocal_18) {
		if (var_1_15) {
			var_1_80 = (var_1_58 + var_1_57);
		} else {
			var_1_80 = ((min (var_1_36 , (var_1_57 + var_1_73))) - var_1_58);
		}
	}


	// From: Req33Batch99Amount500
	if (var_1_45) {
		var_1_82 = (! (var_1_14 && var_1_83));
	} else {
		var_1_82 = (! (var_1_14 || var_1_83));
	}


	// From: Req34Batch99Amount500
	var_1_84 = (max (var_1_4 , (var_1_30 + var_1_61)));


	// From: Req37Batch99Amount500
	if (var_1_14) {
		var_1_88 = var_1_75;
	} else {
		var_1_88 = var_1_61;
	}


	// From: Req38Batch99Amount500
	if (var_1_44) {
		var_1_89 = var_1_41;
	}


	// From: Req39Batch99Amount500
	if (var_1_15) {
		var_1_90 = var_1_25;
	}


	// From: Req40Batch99Amount500
	var_1_91 = var_1_23;


	// From: Req41Batch99Amount500
	if (var_1_44) {
		var_1_92 = var_1_13;
	}


	// From: Req42Batch99Amount500
	if (var_1_13) {
		var_1_93 = var_1_41;
	}


	// From: Req45Batch99Amount500
	if (var_1_14) {
		var_1_97 = var_1_66;
	}


	// From: Req46Batch99Amount500
	var_1_98 = var_1_8;


	// From: Req47Batch99Amount500
	var_1_99 = var_1_14;


	// From: Req50Batch99Amount500
	if (var_1_99 || var_1_45) {
		var_1_103 = (min (last_1_var_1_103 , var_1_29));
	}


	// From: Req2Batch99Amount500
	signed long int stepLocal_1 = (~ -128) + -2;
	if (var_1_97 != (var_1_10 - var_1_11)) {
		if (var_1_43) {
			var_1_9 = (var_1_4 + (max (var_1_67 , (var_1_5 + 10))));
		}
	} else {
		if (stepLocal_1 >= var_1_67) {
			var_1_9 = (max (var_1_67 , var_1_4));
		} else {
			var_1_9 = (1 - var_1_4);
		}
	}


	// From: Req9Batch99Amount500
	signed long int stepLocal_4 = -16 ^ var_1_78;
	unsigned char stepLocal_3 = var_1_30;
	if ((var_1_11 - (min (var_1_25 , var_1_10))) > (- var_1_90)) {
		if (var_1_9 == stepLocal_4) {
			if (var_1_14) {
				var_1_33 = (last_1_var_1_33 + var_1_5);
			}
		}
	} else {
		if (((var_1_19 - var_1_29) - last_1_var_1_33) <= stepLocal_3) {
			var_1_33 = 256;
		} else {
			var_1_33 = var_1_78;
		}
	}


	// From: Req26Batch99Amount500
	signed long int stepLocal_17 = 25;
	unsigned char stepLocal_16 = var_1_12;
	signed short int stepLocal_15 = var_1_74;
	if (stepLocal_16 || var_1_15) {
		if (-2 > stepLocal_15) {
			var_1_64 = var_1_22;
		}
	} else {
		if (stepLocal_17 >= (var_1_5 - var_1_19)) {
			var_1_64 = ((var_1_58 + (min (var_1_65 , var_1_66))) + var_1_23);
		} else {
			var_1_64 = 0.3f;
		}
	}


	// From: Req20Batch99Amount500
	unsigned long int stepLocal_9 = 10u;
	if (var_1_23 >= (- var_1_101)) {
		if (stepLocal_9 > var_1_29) {
			var_1_51 = ((abs (var_1_41)) - var_1_29);
		} else {
			var_1_51 = ((var_1_5 + var_1_42) - ((var_1_52 - var_1_30) + (var_1_29 + var_1_4)));
		}
	}


	// From: Req12Batch99Amount500
	signed long int stepLocal_6 = var_1_4 - (var_1_30 - var_1_28);
	if (var_1_14) {
		var_1_39 = (var_1_25 - var_1_35);
	} else {
		if (var_1_51 <= stepLocal_6) {
			var_1_39 = var_1_35;
		} else {
			var_1_39 = (min (var_1_23 , var_1_24));
		}
	}


	// From: Req6Batch99Amount500
	if (var_1_82) {
		var_1_18 = (5 - (var_1_19 - var_1_40));
	} else {
		var_1_18 = (var_1_78 + var_1_8);
	}


	// From: Req7Batch99Amount500
	signed short int stepLocal_2 = var_1_33;
	if (var_1_82) {
		if (stepLocal_2 >= (2 + (var_1_33 / 50))) {
			if (var_1_14) {
				var_1_20 = var_1_22;
			} else {
				if (var_1_43) {
					var_1_20 = (var_1_23 + var_1_24);
				}
			}
		} else {
			var_1_20 = (abs (var_1_24));
		}
	} else {
		var_1_20 = ((max (1.000000000006E11 , (abs (var_1_23)))) + (255.325 - var_1_25));
	}


	// From: Req15Batch99Amount500
	if (! (var_1_26 > (min (var_1_28 , var_1_26)))) {
		if (var_1_36 <= var_1_97) {
			var_1_46 = (var_1_36 - var_1_35);
		}
	}


	// From: Req18Batch99Amount500
	if (var_1_29 <= var_1_8) {
		if (var_1_92) {
			var_1_49 = (min (var_1_22 , var_1_25));
		}
	}


	// From: Req25Batch99Amount500
	unsigned char stepLocal_14 = var_1_82;
	signed char stepLocal_13 = var_1_61;
	unsigned char stepLocal_12 = var_1_31;
	if (var_1_43) {
		if (stepLocal_12 != var_1_32) {
			var_1_62 = 1;
		} else {
			var_1_62 = ((abs (var_1_4)) - (abs (abs (var_1_61))));
		}
	} else {
		if (stepLocal_14 && (var_1_24 >= var_1_91)) {
			if ((var_1_19 * (4u * var_1_5)) > stepLocal_13) {
				var_1_62 = (var_1_30 + var_1_61);
			} else {
				var_1_62 = (max (var_1_5 , var_1_41));
			}
		} else {
			var_1_62 = (128 - (var_1_63 - (10 + var_1_29)));
		}
	}


	// From: Req44Batch99Amount500
	if (var_1_99) {
		var_1_95 = var_1_32;
	}


	// From: Req23Batch99Amount500
	if (! ((var_1_54 / var_1_30) >= var_1_9)) {
		if (var_1_27 <= 4.4) {
			if ((var_1_62 >= var_1_30) && var_1_45) {
				var_1_56 = var_1_23;
			} else {
				var_1_56 = 256.8f;
			}
		}
	} else {
		var_1_56 = (((var_1_57 - var_1_58) + var_1_25) - var_1_35);
	}


	// From: Req1Batch99Amount500
	unsigned char stepLocal_0 = ! var_1_12;
	if (stepLocal_0 && var_1_99) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		if ((64.888 * var_1_46) > var_1_39) {
			var_1_1 = (var_1_4 - (min (var_1_5 , var_1_8)));
		} else {
			var_1_1 = (var_1_5 + var_1_8);
		}
	}


	// From: Req16Batch99Amount500
	unsigned char stepLocal_7 = var_1_92;
	if (((var_1_98 >= -1) || (var_1_64 <= var_1_24)) && stepLocal_7) {
		if (var_1_11 > var_1_10) {
			if (var_1_44) {
				var_1_47 = (min (var_1_42 , (abs (max (var_1_5 , var_1_31)))));
			}
		} else {
			if (var_1_25 != 63.4) {
				var_1_47 = ((var_1_33 - var_1_5) + var_1_37);
			} else {
				var_1_47 = (min (var_1_1 , 0));
			}
		}
	}


	// From: Req24Batch99Amount500
	signed long int stepLocal_11 = (var_1_19 - var_1_42) - var_1_4;
	unsigned long int stepLocal_10 = var_1_38;
	if (stepLocal_11 < (var_1_30 | (var_1_47 / var_1_54))) {
		if (! (4.4 >= var_1_36)) {
			var_1_59 = var_1_32;
		} else {
			var_1_59 = (min (var_1_29 , (var_1_60 + var_1_32)));
		}
	} else {
		if ((max (var_1_46 , 1.8)) >= (min (var_1_58 , (var_1_56 / var_1_27)))) {
			if (var_1_42 != stepLocal_10) {
				var_1_59 = (((var_1_28 - var_1_29) + var_1_61) - var_1_31);
			} else {
				var_1_59 = (min ((max (var_1_61 , var_1_32)) , (max (var_1_29 , (var_1_31 - var_1_28)))));
			}
		}
	}


	// From: Req28Batch99Amount500
	if (var_1_59 != var_1_40) {
		if (var_1_14) {
			var_1_69 = (((7.7169656274788362E18f - var_1_58) - var_1_25) - var_1_57);
		} else {
			if (var_1_84 == (min (2u , (max (4u , var_1_95))))) {
				var_1_69 = (((min (-0.2f , var_1_58)) + (var_1_73 - 128.047f)) + var_1_65);
			} else {
				var_1_69 = var_1_25;
			}
		}
	}


	// From: Req32Batch99Amount500
	if (var_1_22 <= ((var_1_90 * var_1_80) / (max (var_1_57 , var_1_27)))) {
		if (var_1_90 > var_1_36) {
			var_1_81 = (((var_1_57 - var_1_73) + var_1_58) - (var_1_25 + 8.6));
		} else {
			var_1_81 = var_1_66;
		}
	} else {
		if (! var_1_13) {
			if ((abs (- var_1_69)) > var_1_66) {
				var_1_81 = (var_1_25 - (max (100000.25 , (var_1_36 - var_1_57))));
			}
		} else {
			var_1_81 = (var_1_57 + (max ((var_1_73 - var_1_58) , var_1_23)));
		}
	}


	// From: Req36Batch99Amount500
	if (var_1_94 <= (max (var_1_27 , (9.99999999999965E12 / var_1_57)))) {
		if (var_1_65 > var_1_27) {
			if ((- (var_1_22 / var_1_57)) != var_1_58) {
				if (var_1_44) {
					var_1_87 = ((var_1_19 - var_1_79) - (max (var_1_1 , (var_1_28 + var_1_63))));
				} else {
					if (var_1_81 > var_1_11) {
						var_1_87 = ((var_1_32 + var_1_77) - var_1_78);
					} else {
						var_1_87 = (min (var_1_52 , var_1_31));
					}
				}
			}
		}
	} else {
		if (-1 >= (max (var_1_79 , (var_1_19 - var_1_1)))) {
			var_1_87 = (min (var_1_5 , var_1_37));
		} else {
			var_1_87 = ((var_1_5 - var_1_4) + var_1_1);
		}
	}


	// From: Req17Batch99Amount500
	signed short int stepLocal_8 = var_1_87;
	if (var_1_25 < var_1_101) {
		if (stepLocal_8 > (var_1_42 + var_1_19)) {
			var_1_48 = (abs (var_1_93));
		} else {
			var_1_48 = (min (last_1_var_1_48 , var_1_31));
		}
	}


	// From: Req5Batch99Amount500
	if (var_1_81 <= var_1_10) {
		var_1_17 = ((last_1_var_1_17 + var_1_5) - var_1_67);
	} else {
		var_1_17 = last_1_var_1_17;
	}


	// From: Req22Batch99Amount500
	if (var_1_26 >= ((1 + var_1_95) / var_1_30)) {
		if (var_1_52 != (var_1_30 + (~ var_1_89))) {
			if ((var_1_52 + var_1_33) > var_1_26) {
				if (var_1_51 < var_1_54) {
					var_1_55 = (var_1_1 + var_1_4);
				} else {
					var_1_55 = ((abs (max (var_1_41 , var_1_51))) + var_1_17);
				}
			} else {
				var_1_55 = var_1_41;
			}
		}
	} else {
		var_1_55 = (abs (var_1_17));
	}


	// From: Req21Batch99Amount500
	if (var_1_41 > ((var_1_48 / var_1_4) + var_1_32)) {
		if ((var_1_8 << var_1_30) >= var_1_32) {
			var_1_53 = ((min (var_1_52 , (min (var_1_8 , var_1_42)))) + (var_1_54 - 128u));
		} else {
			var_1_53 = ((var_1_54 - var_1_67) + var_1_87);
		}
	} else {
		var_1_53 = var_1_29;
	}


	// From: Req48Batch99Amount500
	if (var_1_14) {
		var_1_100 = var_1_48;
	} else {
		var_1_100 = var_1_74;
	}


	// From: Req35Batch99Amount500
	unsigned char stepLocal_21 = var_1_4;
	signed short int stepLocal_20 = var_1_51;
	unsigned char stepLocal_19 = var_1_92;
	if (stepLocal_21 > (var_1_87 + var_1_28)) {
		if (stepLocal_20 >= var_1_100) {
			var_1_85 = (var_1_17 - (last_1_var_1_85 + var_1_100));
		} else {
			var_1_85 = ((abs (last_1_var_1_85)) + var_1_60);
		}
	} else {
		if ((var_1_76 > var_1_38) && stepLocal_19) {
			var_1_85 = (var_1_88 - var_1_41);
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 16383);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	assume_abort_if_not(var_1_27 != 0.0F);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 31);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 31);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 95);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 4611686.018427382800e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 127);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 8191);
	assume_abort_if_not(var_1_52 <= 16383);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 1073741823);
	assume_abort_if_not(var_1_54 <= 2147483647);
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 2305843.009213691390e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691390e+12F && var_1_58 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -63);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 63);
	assume_abort_if_not(var_1_63 <= 127);
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -230584.3009213691390e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_66 >= -230584.3009213691390e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691390e+12F && var_1_66 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691390e+12F && var_1_73 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 4);
	var_1_76 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 16);
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 16);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 127);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 1);
	assume_abort_if_not(var_1_83 <= 1);
	var_1_102 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_102 >= 0.0F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 4611686.018427382800e+12F && var_1_102 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_103 = var_1_103;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((! var_1_12) && var_1_99) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (((64.888 * var_1_46) > var_1_39) ? (var_1_1 == ((unsigned char) (var_1_4 - (min (var_1_5 , var_1_8))))) : (var_1_1 == ((unsigned char) (var_1_5 + var_1_8))))) && ((var_1_97 != (var_1_10 - var_1_11)) ? (var_1_43 ? (var_1_9 == ((signed short int) (var_1_4 + (max (var_1_67 , (var_1_5 + 10)))))) : 1) : ((((~ -128) + -2) >= var_1_67) ? (var_1_9 == ((signed short int) (max (var_1_67 , var_1_4)))) : (var_1_9 == ((signed short int) (1 - var_1_4)))))) && (((last_1_var_1_88 ^ (min (last_1_var_1_85 , var_1_8))) <= var_1_4) ? ((last_1_var_1_85 > 64) ? (var_1_12 == ((unsigned char) (last_1_var_1_82 || var_1_13))) : (var_1_12 == ((unsigned char) ((var_1_13 && (last_1_var_1_43 || var_1_14)) && var_1_15)))) : 1)) && ((var_1_5 <= var_1_8) ? (var_1_16 == ((unsigned char) var_1_4)) : (var_1_16 == ((unsigned char) (min (var_1_8 , var_1_4)))))) && ((var_1_81 <= var_1_10) ? (var_1_17 == ((signed short int) ((last_1_var_1_17 + var_1_5) - var_1_67))) : (var_1_17 == ((signed short int) last_1_var_1_17)))) && (var_1_82 ? (var_1_18 == ((signed short int) (5 - (var_1_19 - var_1_40)))) : (var_1_18 == ((signed short int) (var_1_78 + var_1_8))))) && (var_1_82 ? ((var_1_33 >= (2 + (var_1_33 / 50))) ? (var_1_14 ? (var_1_20 == ((double) var_1_22)) : (var_1_43 ? (var_1_20 == ((double) (var_1_23 + var_1_24))) : 1)) : (var_1_20 == ((double) (abs (var_1_24))))) : (var_1_20 == ((double) ((max (1.000000000006E11 , (abs (var_1_23)))) + (255.325 - var_1_25)))))) && (((var_1_23 * (abs (1.1))) > (var_1_25 / var_1_27)) ? (var_1_26 == ((unsigned char) var_1_5)) : (var_1_26 == ((unsigned char) ((200 - (var_1_28 - var_1_29)) - ((var_1_30 - var_1_31) - var_1_32)))))) && (((var_1_11 - (min (var_1_25 , var_1_10))) > (- var_1_90)) ? ((var_1_9 == (-16 ^ var_1_78)) ? (var_1_14 ? (var_1_33 == ((signed short int) (last_1_var_1_33 + var_1_5))) : 1) : 1) : ((((var_1_19 - var_1_29) - last_1_var_1_33) <= var_1_30) ? (var_1_33 == ((signed short int) 256)) : (var_1_33 == ((signed short int) var_1_78))))) && ((var_1_29 >= var_1_74) ? (var_1_34 == ((double) (min ((var_1_25 - var_1_35) , var_1_22)))) : (var_1_34 == ((double) ((var_1_36 - var_1_25) - 1.4))))) && (var_1_37 == ((unsigned long int) (var_1_38 - (max ((min (last_1_var_1_103 , last_1_var_1_100)) , last_1_var_1_26)))))) && (var_1_14 ? (var_1_39 == ((double) (var_1_25 - var_1_35))) : ((var_1_51 <= (var_1_4 - (var_1_30 - var_1_28))) ? (var_1_39 == ((double) var_1_35)) : (var_1_39 == ((double) (min (var_1_23 , var_1_24))))))) && ((! var_1_13) ? (var_1_40 == ((unsigned char) ((min ((max (var_1_4 , var_1_41)) , var_1_42)) - (var_1_32 + var_1_29)))) : 1)) && (var_1_43 == ((unsigned char) (var_1_44 || var_1_45)))) && ((! (var_1_26 > (min (var_1_28 , var_1_26)))) ? ((var_1_36 <= var_1_97) ? (var_1_46 == ((double) (var_1_36 - var_1_35))) : 1) : 1)) && ((((var_1_98 >= -1) || (var_1_64 <= var_1_24)) && var_1_92) ? ((var_1_11 > var_1_10) ? (var_1_44 ? (var_1_47 == ((signed long int) (min (var_1_42 , (abs (max (var_1_5 , var_1_31))))))) : 1) : ((var_1_25 != 63.4) ? (var_1_47 == ((signed long int) ((var_1_33 - var_1_5) + var_1_37))) : (var_1_47 == ((signed long int) (min (var_1_1 , 0)))))) : 1)) && ((var_1_25 < var_1_101) ? ((var_1_87 > (var_1_42 + var_1_19)) ? (var_1_48 == ((signed short int) (abs (var_1_93)))) : (var_1_48 == ((signed short int) (min (last_1_var_1_48 , var_1_31))))) : 1)) && ((var_1_29 <= var_1_8) ? (var_1_92 ? (var_1_49 == ((float) (min (var_1_22 , var_1_25)))) : 1) : 1)) && (var_1_50 == ((signed char) (var_1_29 - var_1_31)))) && ((var_1_23 >= (- var_1_101)) ? ((10u > var_1_29) ? (var_1_51 == ((signed short int) ((abs (var_1_41)) - var_1_29))) : (var_1_51 == ((signed short int) ((var_1_5 + var_1_42) - ((var_1_52 - var_1_30) + (var_1_29 + var_1_4)))))) : 1)) && ((var_1_41 > ((var_1_48 / var_1_4) + var_1_32)) ? (((var_1_8 << var_1_30) >= var_1_32) ? (var_1_53 == ((unsigned long int) ((min (var_1_52 , (min (var_1_8 , var_1_42)))) + (var_1_54 - 128u)))) : (var_1_53 == ((unsigned long int) ((var_1_54 - var_1_67) + var_1_87)))) : (var_1_53 == ((unsigned long int) var_1_29)))) && ((var_1_26 >= ((1 + var_1_95) / var_1_30)) ? ((var_1_52 != (var_1_30 + (~ var_1_89))) ? (((var_1_52 + var_1_33) > var_1_26) ? ((var_1_51 < var_1_54) ? (var_1_55 == ((signed long int) (var_1_1 + var_1_4))) : (var_1_55 == ((signed long int) ((abs (max (var_1_41 , var_1_51))) + var_1_17)))) : (var_1_55 == ((signed long int) var_1_41))) : 1) : (var_1_55 == ((signed long int) (abs (var_1_17)))))) && ((! ((var_1_54 / var_1_30) >= var_1_9)) ? ((var_1_27 <= 4.4) ? (((var_1_62 >= var_1_30) && var_1_45) ? (var_1_56 == ((float) var_1_23)) : (var_1_56 == ((float) 256.8f))) : 1) : (var_1_56 == ((float) (((var_1_57 - var_1_58) + var_1_25) - var_1_35))))) && ((((var_1_19 - var_1_42) - var_1_4) < (var_1_30 | (var_1_47 / var_1_54))) ? ((! (4.4 >= var_1_36)) ? (var_1_59 == ((signed char) var_1_32)) : (var_1_59 == ((signed char) (min (var_1_29 , (var_1_60 + var_1_32)))))) : (((max (var_1_46 , 1.8)) >= (min (var_1_58 , (var_1_56 / var_1_27)))) ? ((var_1_42 != var_1_38) ? (var_1_59 == ((signed char) (((var_1_28 - var_1_29) + var_1_61) - var_1_31))) : (var_1_59 == ((signed char) (min ((max (var_1_61 , var_1_32)) , (max (var_1_29 , (var_1_31 - var_1_28)))))))) : 1))) && (var_1_43 ? ((var_1_31 != var_1_32) ? (var_1_62 == ((unsigned char) 1)) : (var_1_62 == ((unsigned char) ((abs (var_1_4)) - (abs (abs (var_1_61))))))) : ((var_1_82 && (var_1_24 >= var_1_91)) ? (((var_1_19 * (4u * var_1_5)) > var_1_61) ? (var_1_62 == ((unsigned char) (var_1_30 + var_1_61))) : (var_1_62 == ((unsigned char) (max (var_1_5 , var_1_41))))) : (var_1_62 == ((unsigned char) (128 - (var_1_63 - (10 + var_1_29)))))))) && ((var_1_12 || var_1_15) ? ((-2 > var_1_74) ? (var_1_64 == ((float) var_1_22)) : 1) : ((25 >= (var_1_5 - var_1_19)) ? (var_1_64 == ((float) ((var_1_58 + (min (var_1_65 , var_1_66))) + var_1_23))) : (var_1_64 == ((float) 0.3f))))) && ((last_1_var_1_47 >= last_1_var_1_17) ? ((! last_1_var_1_82) ? (var_1_67 == ((signed short int) last_1_var_1_88)) : (var_1_67 == ((signed short int) (abs (max (last_1_var_1_98 , var_1_28)))))) : ((var_1_65 <= (- var_1_58)) ? ((8u != var_1_5) ? (var_1_67 == ((signed short int) (var_1_32 - (max (last_1_var_1_55 , last_1_var_1_100))))) : (var_1_67 == ((signed short int) (5 + (min (var_1_29 , last_1_var_1_16)))))) : (var_1_67 == ((signed short int) var_1_52))))) && ((var_1_59 != var_1_40) ? (var_1_14 ? (var_1_69 == ((float) (((7.7169656274788362E18f - var_1_58) - var_1_25) - var_1_57))) : ((var_1_84 == (min (2u , (max (4u , var_1_95))))) ? (var_1_69 == ((float) (((min (-0.2f , var_1_58)) + (var_1_73 - 128.047f)) + var_1_65))) : (var_1_69 == ((float) var_1_25)))) : 1)) && (((var_1_41 >> (8 - var_1_75)) >= ((var_1_67 + -256) >> (var_1_76 + var_1_77))) ? (var_1_74 == ((signed short int) (abs (var_1_67)))) : 1)) && ((4u != var_1_42) ? (var_1_78 == ((unsigned char) (min ((min (var_1_77 , var_1_29)) , ((abs (var_1_76)) + (var_1_61 + var_1_31)))))) : (var_1_78 == ((unsigned char) (max (var_1_28 , (var_1_61 + var_1_79))))))) && ((25u >= var_1_61) ? (var_1_15 ? (var_1_80 == ((double) (var_1_58 + var_1_57))) : (var_1_80 == ((double) ((min (var_1_36 , (var_1_57 + var_1_73))) - var_1_58)))) : 1)) && ((var_1_22 <= ((var_1_90 * var_1_80) / (max (var_1_57 , var_1_27)))) ? ((var_1_90 > var_1_36) ? (var_1_81 == ((double) (((var_1_57 - var_1_73) + var_1_58) - (var_1_25 + 8.6)))) : (var_1_81 == ((double) var_1_66))) : ((! var_1_13) ? (((abs (- var_1_69)) > var_1_66) ? (var_1_81 == ((double) (var_1_25 - (max (100000.25 , (var_1_36 - var_1_57)))))) : 1) : (var_1_81 == ((double) (var_1_57 + (max ((var_1_73 - var_1_58) , var_1_23)))))))) && (var_1_45 ? (var_1_82 == ((unsigned char) (! (var_1_14 && var_1_83)))) : (var_1_82 == ((unsigned char) (! (var_1_14 || var_1_83)))))) && (var_1_84 == ((unsigned char) (max (var_1_4 , (var_1_30 + var_1_61)))))) && ((var_1_4 > (var_1_87 + var_1_28)) ? ((var_1_51 >= var_1_100) ? (var_1_85 == ((signed long int) (var_1_17 - (last_1_var_1_85 + var_1_100)))) : (var_1_85 == ((signed long int) ((abs (last_1_var_1_85)) + var_1_60)))) : (((var_1_76 > var_1_38) && var_1_92) ? (var_1_85 == ((signed long int) (var_1_88 - var_1_41))) : 1))) && ((var_1_94 <= (max (var_1_27 , (9.99999999999965E12 / var_1_57)))) ? ((var_1_65 > var_1_27) ? (((- (var_1_22 / var_1_57)) != var_1_58) ? (var_1_44 ? (var_1_87 == ((signed short int) ((var_1_19 - var_1_79) - (max (var_1_1 , (var_1_28 + var_1_63)))))) : ((var_1_81 > var_1_11) ? (var_1_87 == ((signed short int) ((var_1_32 + var_1_77) - var_1_78))) : (var_1_87 == ((signed short int) (min (var_1_52 , var_1_31)))))) : 1) : 1) : ((-1 >= (max (var_1_79 , (var_1_19 - var_1_1)))) ? (var_1_87 == ((signed short int) (min (var_1_5 , var_1_37)))) : (var_1_87 == ((signed short int) ((var_1_5 - var_1_4) + var_1_1)))))) && (var_1_14 ? (var_1_88 == ((unsigned char) var_1_75)) : (var_1_88 == ((unsigned char) var_1_61)))) && (var_1_44 ? (var_1_89 == ((unsigned short int) var_1_41)) : 1)) && (var_1_15 ? (var_1_90 == ((float) var_1_25)) : 1)) && (var_1_91 == ((double) var_1_23))) && (var_1_44 ? (var_1_92 == ((unsigned char) var_1_13)) : 1)) && (var_1_13 ? (var_1_93 == ((unsigned short int) var_1_41)) : 1)) && (var_1_12 ? (var_1_94 == ((double) var_1_58)) : (var_1_94 == ((double) var_1_25)))) && (var_1_99 ? (var_1_95 == ((signed long int) var_1_32)) : 1)) && (var_1_14 ? (var_1_97 == ((float) var_1_66)) : 1)) && (var_1_98 == ((signed short int) var_1_8))) && (var_1_99 == ((unsigned char) var_1_14))) && (var_1_14 ? (var_1_100 == ((signed short int) var_1_48)) : (var_1_100 == ((signed short int) var_1_74)))) && (var_1_12 ? (var_1_101 == ((float) (var_1_25 - (var_1_57 + 1.0000000000000005E15f)))) : (var_1_101 == ((float) (((max (var_1_25 , var_1_102)) - (abs (var_1_58))) + (var_1_73 + 64.9f)))))) && ((var_1_99 || var_1_45) ? (var_1_103 == ((unsigned long int) (min (last_1_var_1_103 , var_1_29)))) : 1)
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

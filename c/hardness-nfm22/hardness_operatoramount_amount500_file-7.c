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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7Amount500.c", 13, "reach_error"); }
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
signed char var_1_6 = 50;
signed char var_1_7 = 2;
signed char var_1_8 = 16;
signed char var_1_9 = 8;
unsigned long int var_1_10 = 25;
signed char var_1_13 = -25;
signed char var_1_14 = 0;
signed char var_1_15 = 100;
signed char var_1_16 = 16;
signed char var_1_17 = 0;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned long int var_1_23 = 2;
unsigned long int var_1_24 = 3457730170;
unsigned long int var_1_25 = 1275895921;
unsigned long int var_1_26 = 3340514188;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned short int var_1_31 = 5;
unsigned short int var_1_32 = 61749;
unsigned short int var_1_33 = 36509;
unsigned short int var_1_34 = 48238;
unsigned char var_1_35 = 128;
double var_1_36 = 5.2;
double var_1_37 = 2.5;
double var_1_38 = 99.6;
double var_1_39 = 100000000.25;
double var_1_40 = 31.4;
double var_1_41 = 7.25;
double var_1_42 = 5.2;
signed char var_1_43 = -1;
signed char var_1_44 = 50;
unsigned short int var_1_45 = 10;
unsigned short int var_1_47 = 39627;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
float var_1_50 = 100.5;
float var_1_51 = 15.95;
float var_1_52 = 25.5;
float var_1_53 = 0.0;
float var_1_54 = 10.15;
float var_1_55 = 0.0;
unsigned char var_1_56 = 1;
double var_1_58 = 50.6;
double var_1_59 = 63.4;
double var_1_60 = 32.5;
unsigned short int var_1_61 = 128;
double var_1_62 = 9.25;
unsigned char var_1_63 = 4;
unsigned long int var_1_64 = 10;
float var_1_65 = 0.09999999999999998;
float var_1_66 = 31.8;
unsigned long int var_1_67 = 64;
unsigned char var_1_68 = 1;
signed short int var_1_70 = -2;
signed short int var_1_71 = 25993;
signed short int var_1_72 = 21443;
unsigned char var_1_73 = 8;
unsigned char var_1_75 = 128;
float var_1_76 = 50.2;
float var_1_78 = 0.0;
unsigned char var_1_79 = 0;
unsigned char var_1_80 = 0;
unsigned char var_1_81 = 0;
unsigned char var_1_82 = 0;
unsigned char var_1_84 = 1;
signed char var_1_85 = -64;
signed short int var_1_86 = 1;
float var_1_87 = 256.25;
signed long int var_1_88 = -16;
unsigned long int var_1_89 = 32;
signed long int var_1_90 = -10;
unsigned char var_1_91 = 1;
float var_1_92 = 32.75;
unsigned char var_1_93 = 1;
unsigned short int var_1_94 = 64;
unsigned short int var_1_95 = 4;
unsigned char var_1_96 = 25;
unsigned char var_1_97 = 1;
signed long int var_1_98 = 64;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = 5;
unsigned long int last_1_var_1_23 = 2;
unsigned char last_1_var_1_27 = 1;
unsigned short int last_1_var_1_31 = 5;
double last_1_var_1_36 = 5.2;
unsigned short int last_1_var_1_45 = 10;
unsigned char last_1_var_1_56 = 1;
double last_1_var_1_62 = 9.25;
unsigned long int last_1_var_1_64 = 10;
unsigned char last_1_var_1_73 = 8;
float last_1_var_1_76 = 50.2;
unsigned char last_1_var_1_79 = 0;
float last_1_var_1_87 = 256.25;
signed long int last_1_var_1_88 = -16;
unsigned char last_1_var_1_93 = 1;
unsigned short int last_1_var_1_95 = 4;
unsigned char last_1_var_1_96 = 25;
signed long int last_1_var_1_98 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch7Amount500
	if (last_1_var_1_64 > 100) {
		if (last_1_var_1_87 < var_1_37) {
			var_1_63 = var_1_9;
		} else {
			var_1_63 = (var_1_44 + (min (var_1_16 , (var_1_15 - var_1_6))));
		}
	} else {
		if (last_1_var_1_56) {
			var_1_63 = 16;
		}
	}


	// From: Req13Batch7Amount500
	signed long int stepLocal_13 = 0;
	if (var_1_34 >= stepLocal_13) {
		var_1_48 = ((var_1_29 || last_1_var_1_93) && (var_1_28 && (last_1_var_1_27 && var_1_21)));
	} else {
		var_1_48 = var_1_49;
	}


	// From: Req25Batch7Amount500
	if (last_1_var_1_88 == var_1_16) {
		if ((last_1_var_1_1 >= (last_1_var_1_73 * last_1_var_1_96)) || ((var_1_9 / var_1_15) >= 0)) {
			var_1_73 = (var_1_75 - (min (var_1_9 , 64)));
		}
	} else {
		if (last_1_var_1_76 > (var_1_60 + last_1_var_1_62)) {
			var_1_73 = ((var_1_15 - var_1_44) + (min (var_1_17 , (var_1_16 + var_1_6))));
		} else {
			var_1_73 = (abs (max (var_1_7 , var_1_15)));
		}
	}


	// From: Req39Batch7Amount500
	var_1_95 = var_1_73;


	// From: Req1Batch7Amount500
	signed long int stepLocal_1 = -16;
	signed long int stepLocal_0 = last_1_var_1_31;
	if (stepLocal_0 > last_1_var_1_95) {
		if ((abs (last_1_var_1_62)) < last_1_var_1_36) {
			var_1_1 = (((max (var_1_6 , var_1_7)) + (abs (var_1_8))) - var_1_9);
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		if (var_1_7 != stepLocal_1) {
			var_1_1 = (16 + var_1_8);
		} else {
			var_1_1 = (var_1_7 - (var_1_6 + 50));
		}
	}


	// From: Req2Batch7Amount500
	if (! var_1_48) {
		var_1_10 = (abs (32u));
	} else {
		var_1_10 = (max ((min ((max (var_1_6 , var_1_9)) , var_1_7)) , var_1_73));
	}


	// From: Req4Batch7Amount500
	signed long int stepLocal_3 = ~ -64;
	if (stepLocal_3 > var_1_7) {
		var_1_19 = ((! (! var_1_20)) || var_1_21);
	} else {
		var_1_19 = (var_1_20 || (var_1_21 || var_1_22));
	}


	// From: Req8Batch7Amount500
	signed char stepLocal_10 = var_1_7;
	signed char stepLocal_9 = var_1_9;
	signed long int stepLocal_8 = ~ 1;
	if (var_1_7 <= stepLocal_9) {
		if (var_1_21) {
			var_1_31 = (abs (var_1_16));
		} else {
			if (stepLocal_10 <= var_1_17) {
				var_1_31 = (var_1_32 - 2);
			} else {
				var_1_31 = ((max ((min (var_1_32 , var_1_33)) , var_1_34)) - var_1_15);
			}
		}
	} else {
		if (var_1_17 > stepLocal_8) {
			var_1_31 = (var_1_32 - (min (var_1_7 , (var_1_17 + var_1_16))));
		}
	}


	// From: Req29Batch7Amount500
	if (var_1_29) {
		var_1_85 = var_1_7;
	}


	// From: Req31Batch7Amount500
	if (var_1_80) {
		var_1_87 = var_1_42;
	} else {
		var_1_87 = 63.6f;
	}


	// From: Req35Batch7Amount500
	var_1_91 = var_1_21;


	// From: Req36Batch7Amount500
	var_1_92 = var_1_38;


	// From: Req37Batch7Amount500
	var_1_93 = var_1_22;


	// From: Req38Batch7Amount500
	var_1_94 = var_1_72;


	// From: Req40Batch7Amount500
	if (var_1_28) {
		var_1_96 = var_1_17;
	} else {
		var_1_96 = var_1_17;
	}


	// From: Req42Batch7Amount500
	signed long int stepLocal_38 = abs (10);
	signed long int stepLocal_37 = var_1_96 / (var_1_34 - var_1_75);
	if (stepLocal_37 <= (last_1_var_1_98 >> var_1_1)) {
		if (var_1_94 < stepLocal_38) {
			var_1_98 = var_1_73;
		}
	} else {
		var_1_98 = 5;
	}


	// From: Req21Batch7Amount500
	signed long int stepLocal_23 = (- var_1_15) << 8u;
	if (var_1_96 != stepLocal_23) {
		var_1_65 = (max (var_1_53 , (max (var_1_42 , (var_1_66 + var_1_39)))));
	}


	// From: Req23Batch7Amount500
	if ((var_1_53 - var_1_54) < var_1_66) {
		if (-16 > (min (var_1_8 , var_1_96))) {
			var_1_68 = (var_1_91 || (var_1_28 && var_1_29));
		}
	}


	// From: Req33Batch7Amount500
	if (var_1_68) {
		var_1_89 = var_1_26;
	} else {
		var_1_89 = var_1_94;
	}


	// From: Req5Batch7Amount500
	unsigned char stepLocal_4 = var_1_9 >= var_1_96;
	if (! (last_1_var_1_23 <= var_1_14)) {
		if (var_1_21) {
			var_1_23 = (var_1_24 - var_1_9);
		}
	} else {
		if (var_1_68) {
			var_1_23 = (min ((var_1_16 + var_1_17) , (max ((max (var_1_7 , var_1_6)) , var_1_24))));
		} else {
			if (! var_1_22) {
				if (((var_1_7 / var_1_15) == var_1_16) || stepLocal_4) {
					var_1_23 = (var_1_24 - var_1_17);
				} else {
					var_1_23 = (var_1_7 + (var_1_25 - 4u));
				}
			} else {
				var_1_23 = ((min (var_1_24 , (max (2780703510u , var_1_26)))) - (var_1_16 + (max (var_1_17 , var_1_6))));
			}
		}
	}


	// From: Req9Batch7Amount500
	if (var_1_24 > var_1_33) {
		if (var_1_65 >= var_1_92) {
			var_1_35 = (min (var_1_6 , var_1_15));
		}
	}


	// From: Req10Batch7Amount500
	unsigned char stepLocal_12 = var_1_19;
	unsigned long int stepLocal_11 = var_1_23;
	if ((var_1_34 > 5) || stepLocal_12) {
		if (stepLocal_11 >= 5) {
			var_1_36 = (min (var_1_37 , var_1_38));
		} else {
			var_1_36 = (((var_1_39 + var_1_40) + (min (500.2 , var_1_41))) + var_1_42);
		}
	} else {
		var_1_36 = (var_1_39 + (abs (var_1_40)));
	}


	// From: Req17Batch7Amount500
	unsigned short int stepLocal_18 = var_1_94;
	unsigned char stepLocal_17 = var_1_49;
	if ((var_1_26 < var_1_7) || stepLocal_17) {
		if (stepLocal_18 >= var_1_26) {
			if (var_1_54 <= ((min (var_1_36 , var_1_53)) * var_1_51)) {
				var_1_61 = (max ((abs (var_1_6)) , var_1_32));
			} else {
				var_1_61 = (max ((max (var_1_94 , (61990 - var_1_1))) , ((var_1_9 + var_1_6) + (min (var_1_16 , var_1_7)))));
			}
		} else {
			var_1_61 = var_1_33;
		}
	} else {
		var_1_61 = (var_1_32 - var_1_9);
	}


	// From: Req32Batch7Amount500
	var_1_88 = var_1_35;


	// From: Req16Batch7Amount500
	if ((var_1_1 * var_1_73) < var_1_32) {
		var_1_58 = ((max (31.8 , (5.0840474138294159E18 - var_1_52))) - (var_1_55 - var_1_54));
	} else {
		if (((var_1_15 - var_1_16) - (var_1_44 + var_1_17)) >= 0) {
			if (var_1_48 && (var_1_55 > (var_1_53 * var_1_36))) {
				var_1_58 = (((var_1_39 + var_1_40) + (var_1_59 + 8.5)) + (min ((var_1_53 - var_1_54) , (var_1_52 - var_1_60))));
			}
		} else {
			var_1_58 = (max (var_1_40 , (min ((var_1_54 - var_1_51) , var_1_38))));
		}
	}


	// From: Req15Batch7Amount500
	signed long int stepLocal_16 = var_1_1 + var_1_35;
	if (stepLocal_16 != var_1_9) {
		var_1_56 = (var_1_49 || var_1_21);
	}


	// From: Req30Batch7Amount500
	if (var_1_56) {
		var_1_86 = var_1_16;
	}


	// From: Req12Batch7Amount500
	if (var_1_20 && var_1_48) {
		if (var_1_58 > var_1_38) {
			if (-5 > (128 * var_1_32)) {
				if (((64 / var_1_15) / var_1_44) > (max ((var_1_9 + var_1_34) , (min (var_1_25 , var_1_23))))) {
					var_1_45 = (min ((var_1_47 - (min (var_1_44 , last_1_var_1_45))) , var_1_9));
				}
			}
		}
	}


	// From: Req26Batch7Amount500
	signed short int stepLocal_33 = var_1_86;
	signed long int stepLocal_32 = (var_1_86 / var_1_71) + var_1_6;
	signed long int stepLocal_31 = var_1_31 + var_1_9;
	unsigned long int stepLocal_30 = var_1_23;
	unsigned char stepLocal_29 = var_1_75;
	if (stepLocal_29 > var_1_32) {
		var_1_76 = (min ((9.999999995E8f - var_1_51) , var_1_55));
	} else {
		if (stepLocal_33 == var_1_86) {
			if (8 >= stepLocal_31) {
				if (stepLocal_32 < var_1_17) {
					var_1_76 = (min ((var_1_40 + var_1_53) , ((var_1_60 + var_1_52) - var_1_51)));
				} else {
					var_1_76 = (((max (var_1_55 , var_1_78)) - (var_1_53 - var_1_54)) - var_1_60);
				}
			} else {
				if (stepLocal_30 >= var_1_72) {
					var_1_76 = (var_1_53 - var_1_78);
				}
			}
		}
	}


	// From: Req22Batch7Amount500
	unsigned char stepLocal_25 = var_1_56;
	signed long int stepLocal_24 = var_1_86 + var_1_15;
	if (var_1_20) {
		if ((var_1_58 / var_1_53) < var_1_76) {
			if (var_1_19 || stepLocal_25) {
				var_1_67 = var_1_94;
			} else {
				var_1_67 = var_1_25;
			}
		}
	} else {
		if (((32 >> var_1_26) * var_1_94) == stepLocal_24) {
			var_1_67 = (var_1_94 + (var_1_25 - var_1_15));
		} else {
			var_1_67 = (100u + (abs (16u)));
		}
	}


	// From: Req20Batch7Amount500
	signed char stepLocal_22 = var_1_6;
	unsigned char stepLocal_21 = var_1_98 > (var_1_17 / var_1_15);
	signed long int stepLocal_20 = min ((var_1_17 * var_1_95) , var_1_15);
	unsigned short int stepLocal_19 = var_1_34;
	if (stepLocal_20 == var_1_73) {
		if (var_1_48) {
			if (stepLocal_19 >= var_1_96) {
				if (var_1_76 < ((var_1_55 + var_1_58) / var_1_53)) {
					var_1_64 = (min (var_1_34 , var_1_73));
				}
			} else {
				if (stepLocal_22 != ((min (var_1_32 , var_1_1)) + var_1_14)) {
					var_1_64 = (min ((min (var_1_86 , var_1_32)) , 2u));
				}
			}
		} else {
			if (stepLocal_21 || ((abs (var_1_54)) < var_1_51)) {
				var_1_64 = (max (var_1_33 , (var_1_9 + 10u)));
			} else {
				var_1_64 = (abs (var_1_16));
			}
		}
	} else {
		var_1_64 = (max ((var_1_9 + var_1_32) , ((min (var_1_26 , var_1_24)) - (min (var_1_63 , 8u)))));
	}


	// From: Req6Batch7Amount500
	signed char stepLocal_7 = var_1_16;
	signed char stepLocal_6 = var_1_7;
	signed char stepLocal_5 = var_1_17;
	if (! var_1_22) {
		if (var_1_14 <= stepLocal_5) {
			var_1_27 = 0;
		} else {
			var_1_27 = (var_1_22 && var_1_28);
		}
	} else {
		if (var_1_64 < stepLocal_6) {
			if (stepLocal_7 > var_1_63) {
				var_1_27 = (var_1_28 && ((! var_1_20) && (var_1_22 && var_1_29)));
			}
		} else {
			var_1_27 = var_1_28;
		}
	}


	// From: Req41Batch7Amount500
	if (var_1_27) {
		var_1_97 = var_1_84;
	}


	// From: Req3Batch7Amount500
	unsigned short int stepLocal_2 = var_1_31;
	if (var_1_68) {
		if (stepLocal_2 > (var_1_73 + 2u)) {
			var_1_13 = ((var_1_14 + 5) + (var_1_7 - var_1_6));
		} else {
			var_1_13 = (((var_1_15 - 25) - (var_1_16 + var_1_17)) - (min (var_1_9 , var_1_6)));
		}
	} else {
		if (var_1_97) {
			var_1_13 = ((var_1_15 - var_1_7) - 1);
		} else {
			var_1_13 = ((var_1_16 + 5) + var_1_14);
		}
	}


	// From: Req7Batch7Amount500
	if (var_1_13 < -8) {
		if (var_1_13 < (-10 * var_1_16)) {
			var_1_30 = (! var_1_29);
		} else {
			if (var_1_22) {
				var_1_30 = (var_1_20 || (var_1_97 && var_1_21));
			}
		}
	} else {
		var_1_30 = var_1_21;
	}


	// From: Req34Batch7Amount500
	if (var_1_30) {
		var_1_90 = var_1_88;
	} else {
		var_1_90 = 1;
	}


	// From: Req11Batch7Amount500
	if (var_1_64 < var_1_6) {
		if ((64 >> 1) > var_1_88) {
			var_1_43 = ((var_1_16 + var_1_17) - ((var_1_44 - 16) + var_1_6));
		} else {
			var_1_43 = (abs (min (var_1_15 , var_1_6)));
		}
	} else {
		var_1_43 = (max (var_1_7 , var_1_6));
	}


	// From: Req24Batch7Amount500
	unsigned char stepLocal_28 = var_1_93;
	unsigned char stepLocal_27 = var_1_97;
	unsigned char stepLocal_26 = var_1_29;
	if (stepLocal_28 && ((var_1_88 * var_1_35) <= var_1_10)) {
		if (var_1_22 || stepLocal_27) {
			var_1_70 = (max (10 , ((var_1_1 - var_1_15) + var_1_17)));
		} else {
			var_1_70 = (var_1_6 - ((min (var_1_71 , var_1_72)) - 32));
		}
	} else {
		if (var_1_93 && stepLocal_26) {
			var_1_70 = var_1_8;
		}
	}


	// From: Req27Batch7Amount500
	signed long int stepLocal_34 = abs (var_1_63 + var_1_13);
	if (stepLocal_34 != ((var_1_17 + var_1_98) % var_1_33)) {
		var_1_79 = (last_1_var_1_79 && ((var_1_29 && var_1_49) || var_1_80));
	} else {
		var_1_79 = (((var_1_80 || var_1_22) && (! var_1_20)) && var_1_81);
	}


	// From: Req28Batch7Amount500
	unsigned char stepLocal_36 = var_1_13 < var_1_96;
	signed char stepLocal_35 = var_1_7;
	if (var_1_31 <= stepLocal_35) {
		if (((var_1_10 % -4) == var_1_90) && stepLocal_36) {
			var_1_82 = (var_1_48 || var_1_84);
		} else {
			var_1_82 = var_1_80;
		}
	} else {
		var_1_82 = (! var_1_21);
	}


	// From: Req18Batch7Amount500
	if ((var_1_31 >= var_1_90) && ((- var_1_25) >= var_1_89)) {
		if (! (var_1_6 >= var_1_35)) {
			var_1_62 = ((var_1_60 - 3.08) + var_1_40);
		} else {
			var_1_62 = (min (var_1_52 , (var_1_39 + var_1_42)));
		}
	}


	// From: Req14Batch7Amount500
	signed char stepLocal_15 = var_1_44;
	unsigned char stepLocal_14 = var_1_73;
	if ((var_1_37 + (var_1_62 + var_1_40)) >= var_1_42) {
		if ((~ var_1_14) < stepLocal_14) {
			if ((max (var_1_61 , var_1_15)) > stepLocal_15) {
				var_1_50 = (var_1_51 - (var_1_52 + (var_1_53 - var_1_54)));
			}
		} else {
			var_1_50 = (max (((var_1_55 - var_1_54) - (var_1_53 + var_1_52)) , (max (var_1_41 , var_1_38))));
		}
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -31);
	assume_abort_if_not(var_1_14 <= 32);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 94);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 31);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 2147483647);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 32767);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -115292.1504606845700e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 1152921.504606845700e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -115292.1504606845700e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 1152921.504606845700e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -230584.3009213691390e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 31);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 32767);
	assume_abort_if_not(var_1_47 <= 65534);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 2305843.009213691390e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691390e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 4611686.018427382800e+12F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -115292.1504606845700e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 1152921.504606845700e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_66 >= -461168.6018427382800e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427382800e+12F && var_1_66 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_71 >= 16383);
	assume_abort_if_not(var_1_71 <= 32766);
	var_1_72 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_72 >= 16383);
	assume_abort_if_not(var_1_72 <= 32766);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 127);
	assume_abort_if_not(var_1_75 <= 254);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= 4611686.018427382800e+12F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854765600e+12F && var_1_78 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 0);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 1);
	assume_abort_if_not(var_1_81 <= 1);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 1);
	assume_abort_if_not(var_1_84 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_98 = var_1_98;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((last_1_var_1_31 > last_1_var_1_95) ? (((abs (last_1_var_1_62)) < last_1_var_1_36) ? (var_1_1 == ((signed char) (((max (var_1_6 , var_1_7)) + (abs (var_1_8))) - var_1_9))) : (var_1_1 == ((signed char) var_1_7))) : ((var_1_7 != -16) ? (var_1_1 == ((signed char) (16 + var_1_8))) : (var_1_1 == ((signed char) (var_1_7 - (var_1_6 + 50)))))) && ((! var_1_48) ? (var_1_10 == ((unsigned long int) (abs (32u)))) : (var_1_10 == ((unsigned long int) (max ((min ((max (var_1_6 , var_1_9)) , var_1_7)) , var_1_73)))))) && (var_1_68 ? ((var_1_31 > (var_1_73 + 2u)) ? (var_1_13 == ((signed char) ((var_1_14 + 5) + (var_1_7 - var_1_6)))) : (var_1_13 == ((signed char) (((var_1_15 - 25) - (var_1_16 + var_1_17)) - (min (var_1_9 , var_1_6)))))) : (var_1_97 ? (var_1_13 == ((signed char) ((var_1_15 - var_1_7) - 1))) : (var_1_13 == ((signed char) ((var_1_16 + 5) + var_1_14)))))) && (((~ -64) > var_1_7) ? (var_1_19 == ((unsigned char) ((! (! var_1_20)) || var_1_21))) : (var_1_19 == ((unsigned char) (var_1_20 || (var_1_21 || var_1_22)))))) && ((! (last_1_var_1_23 <= var_1_14)) ? (var_1_21 ? (var_1_23 == ((unsigned long int) (var_1_24 - var_1_9))) : 1) : (var_1_68 ? (var_1_23 == ((unsigned long int) (min ((var_1_16 + var_1_17) , (max ((max (var_1_7 , var_1_6)) , var_1_24)))))) : ((! var_1_22) ? ((((var_1_7 / var_1_15) == var_1_16) || (var_1_9 >= var_1_96)) ? (var_1_23 == ((unsigned long int) (var_1_24 - var_1_17))) : (var_1_23 == ((unsigned long int) (var_1_7 + (var_1_25 - 4u))))) : (var_1_23 == ((unsigned long int) ((min (var_1_24 , (max (2780703510u , var_1_26)))) - (var_1_16 + (max (var_1_17 , var_1_6)))))))))) && ((! var_1_22) ? ((var_1_14 <= var_1_17) ? (var_1_27 == ((unsigned char) 0)) : (var_1_27 == ((unsigned char) (var_1_22 && var_1_28)))) : ((var_1_64 < var_1_7) ? ((var_1_16 > var_1_63) ? (var_1_27 == ((unsigned char) (var_1_28 && ((! var_1_20) && (var_1_22 && var_1_29))))) : 1) : (var_1_27 == ((unsigned char) var_1_28))))) && ((var_1_13 < -8) ? ((var_1_13 < (-10 * var_1_16)) ? (var_1_30 == ((unsigned char) (! var_1_29))) : (var_1_22 ? (var_1_30 == ((unsigned char) (var_1_20 || (var_1_97 && var_1_21)))) : 1)) : (var_1_30 == ((unsigned char) var_1_21)))) && ((var_1_7 <= var_1_9) ? (var_1_21 ? (var_1_31 == ((unsigned short int) (abs (var_1_16)))) : ((var_1_7 <= var_1_17) ? (var_1_31 == ((unsigned short int) (var_1_32 - 2))) : (var_1_31 == ((unsigned short int) ((max ((min (var_1_32 , var_1_33)) , var_1_34)) - var_1_15))))) : ((var_1_17 > (~ 1)) ? (var_1_31 == ((unsigned short int) (var_1_32 - (min (var_1_7 , (var_1_17 + var_1_16)))))) : 1))) && ((var_1_24 > var_1_33) ? ((var_1_65 >= var_1_92) ? (var_1_35 == ((unsigned char) (min (var_1_6 , var_1_15)))) : 1) : 1)) && (((var_1_34 > 5) || var_1_19) ? ((var_1_23 >= 5) ? (var_1_36 == ((double) (min (var_1_37 , var_1_38)))) : (var_1_36 == ((double) (((var_1_39 + var_1_40) + (min (500.2 , var_1_41))) + var_1_42)))) : (var_1_36 == ((double) (var_1_39 + (abs (var_1_40))))))) && ((var_1_64 < var_1_6) ? (((64 >> 1) > var_1_88) ? (var_1_43 == ((signed char) ((var_1_16 + var_1_17) - ((var_1_44 - 16) + var_1_6)))) : (var_1_43 == ((signed char) (abs (min (var_1_15 , var_1_6)))))) : (var_1_43 == ((signed char) (max (var_1_7 , var_1_6)))))) && ((var_1_20 && var_1_48) ? ((var_1_58 > var_1_38) ? ((-5 > (128 * var_1_32)) ? ((((64 / var_1_15) / var_1_44) > (max ((var_1_9 + var_1_34) , (min (var_1_25 , var_1_23))))) ? (var_1_45 == ((unsigned short int) (min ((var_1_47 - (min (var_1_44 , last_1_var_1_45))) , var_1_9)))) : 1) : 1) : 1) : 1)) && ((var_1_34 >= 0) ? (var_1_48 == ((unsigned char) ((var_1_29 || last_1_var_1_93) && (var_1_28 && (last_1_var_1_27 && var_1_21))))) : (var_1_48 == ((unsigned char) var_1_49)))) && (((var_1_37 + (var_1_62 + var_1_40)) >= var_1_42) ? (((~ var_1_14) < var_1_73) ? (((max (var_1_61 , var_1_15)) > var_1_44) ? (var_1_50 == ((float) (var_1_51 - (var_1_52 + (var_1_53 - var_1_54))))) : 1) : (var_1_50 == ((float) (max (((var_1_55 - var_1_54) - (var_1_53 + var_1_52)) , (max (var_1_41 , var_1_38))))))) : 1)) && (((var_1_1 + var_1_35) != var_1_9) ? (var_1_56 == ((unsigned char) (var_1_49 || var_1_21))) : 1)) && (((var_1_1 * var_1_73) < var_1_32) ? (var_1_58 == ((double) ((max (31.8 , (5.0840474138294159E18 - var_1_52))) - (var_1_55 - var_1_54)))) : ((((var_1_15 - var_1_16) - (var_1_44 + var_1_17)) >= 0) ? ((var_1_48 && (var_1_55 > (var_1_53 * var_1_36))) ? (var_1_58 == ((double) (((var_1_39 + var_1_40) + (var_1_59 + 8.5)) + (min ((var_1_53 - var_1_54) , (var_1_52 - var_1_60)))))) : 1) : (var_1_58 == ((double) (max (var_1_40 , (min ((var_1_54 - var_1_51) , var_1_38))))))))) && (((var_1_26 < var_1_7) || var_1_49) ? ((var_1_94 >= var_1_26) ? ((var_1_54 <= ((min (var_1_36 , var_1_53)) * var_1_51)) ? (var_1_61 == ((unsigned short int) (max ((abs (var_1_6)) , var_1_32)))) : (var_1_61 == ((unsigned short int) (max ((max (var_1_94 , (61990 - var_1_1))) , ((var_1_9 + var_1_6) + (min (var_1_16 , var_1_7)))))))) : (var_1_61 == ((unsigned short int) var_1_33))) : (var_1_61 == ((unsigned short int) (var_1_32 - var_1_9))))) && (((var_1_31 >= var_1_90) && ((- var_1_25) >= var_1_89)) ? ((! (var_1_6 >= var_1_35)) ? (var_1_62 == ((double) ((var_1_60 - 3.08) + var_1_40))) : (var_1_62 == ((double) (min (var_1_52 , (var_1_39 + var_1_42)))))) : 1)) && ((last_1_var_1_64 > 100) ? ((last_1_var_1_87 < var_1_37) ? (var_1_63 == ((unsigned char) var_1_9)) : (var_1_63 == ((unsigned char) (var_1_44 + (min (var_1_16 , (var_1_15 - var_1_6))))))) : (last_1_var_1_56 ? (var_1_63 == ((unsigned char) 16)) : 1))) && (((min ((var_1_17 * var_1_95) , var_1_15)) == var_1_73) ? (var_1_48 ? ((var_1_34 >= var_1_96) ? ((var_1_76 < ((var_1_55 + var_1_58) / var_1_53)) ? (var_1_64 == ((unsigned long int) (min (var_1_34 , var_1_73)))) : 1) : ((var_1_6 != ((min (var_1_32 , var_1_1)) + var_1_14)) ? (var_1_64 == ((unsigned long int) (min ((min (var_1_86 , var_1_32)) , 2u)))) : 1)) : (((var_1_98 > (var_1_17 / var_1_15)) || ((abs (var_1_54)) < var_1_51)) ? (var_1_64 == ((unsigned long int) (max (var_1_33 , (var_1_9 + 10u))))) : (var_1_64 == ((unsigned long int) (abs (var_1_16)))))) : (var_1_64 == ((unsigned long int) (max ((var_1_9 + var_1_32) , ((min (var_1_26 , var_1_24)) - (min (var_1_63 , 8u))))))))) && ((var_1_96 != ((- var_1_15) << 8u)) ? (var_1_65 == ((float) (max (var_1_53 , (max (var_1_42 , (var_1_66 + var_1_39))))))) : 1)) && (var_1_20 ? (((var_1_58 / var_1_53) < var_1_76) ? ((var_1_19 || var_1_56) ? (var_1_67 == ((unsigned long int) var_1_94)) : (var_1_67 == ((unsigned long int) var_1_25))) : 1) : ((((32 >> var_1_26) * var_1_94) == (var_1_86 + var_1_15)) ? (var_1_67 == ((unsigned long int) (var_1_94 + (var_1_25 - var_1_15)))) : (var_1_67 == ((unsigned long int) (100u + (abs (16u)))))))) && (((var_1_53 - var_1_54) < var_1_66) ? ((-16 > (min (var_1_8 , var_1_96))) ? (var_1_68 == ((unsigned char) (var_1_91 || (var_1_28 && var_1_29)))) : 1) : 1)) && ((var_1_93 && ((var_1_88 * var_1_35) <= var_1_10)) ? ((var_1_22 || var_1_97) ? (var_1_70 == ((signed short int) (max (10 , ((var_1_1 - var_1_15) + var_1_17))))) : (var_1_70 == ((signed short int) (var_1_6 - ((min (var_1_71 , var_1_72)) - 32))))) : ((var_1_93 && var_1_29) ? (var_1_70 == ((signed short int) var_1_8)) : 1))) && ((last_1_var_1_88 == var_1_16) ? (((last_1_var_1_1 >= (last_1_var_1_73 * last_1_var_1_96)) || ((var_1_9 / var_1_15) >= 0)) ? (var_1_73 == ((unsigned char) (var_1_75 - (min (var_1_9 , 64))))) : 1) : ((last_1_var_1_76 > (var_1_60 + last_1_var_1_62)) ? (var_1_73 == ((unsigned char) ((var_1_15 - var_1_44) + (min (var_1_17 , (var_1_16 + var_1_6)))))) : (var_1_73 == ((unsigned char) (abs (max (var_1_7 , var_1_15)))))))) && ((var_1_75 > var_1_32) ? (var_1_76 == ((float) (min ((9.999999995E8f - var_1_51) , var_1_55)))) : ((var_1_86 == var_1_86) ? ((8 >= (var_1_31 + var_1_9)) ? ((((var_1_86 / var_1_71) + var_1_6) < var_1_17) ? (var_1_76 == ((float) (min ((var_1_40 + var_1_53) , ((var_1_60 + var_1_52) - var_1_51))))) : (var_1_76 == ((float) (((max (var_1_55 , var_1_78)) - (var_1_53 - var_1_54)) - var_1_60)))) : ((var_1_23 >= var_1_72) ? (var_1_76 == ((float) (var_1_53 - var_1_78))) : 1)) : 1))) && (((abs (var_1_63 + var_1_13)) != ((var_1_17 + var_1_98) % var_1_33)) ? (var_1_79 == ((unsigned char) (last_1_var_1_79 && ((var_1_29 && var_1_49) || var_1_80)))) : (var_1_79 == ((unsigned char) (((var_1_80 || var_1_22) && (! var_1_20)) && var_1_81))))) && ((var_1_31 <= var_1_7) ? ((((var_1_10 % -4) == var_1_90) && (var_1_13 < var_1_96)) ? (var_1_82 == ((unsigned char) (var_1_48 || var_1_84))) : (var_1_82 == ((unsigned char) var_1_80))) : (var_1_82 == ((unsigned char) (! var_1_21))))) && (var_1_29 ? (var_1_85 == ((signed char) var_1_7)) : 1)) && (var_1_56 ? (var_1_86 == ((signed short int) var_1_16)) : 1)) && (var_1_80 ? (var_1_87 == ((float) var_1_42)) : (var_1_87 == ((float) 63.6f)))) && (var_1_88 == ((signed long int) var_1_35))) && (var_1_68 ? (var_1_89 == ((unsigned long int) var_1_26)) : (var_1_89 == ((unsigned long int) var_1_94)))) && (var_1_30 ? (var_1_90 == ((signed long int) var_1_88)) : (var_1_90 == ((signed long int) 1)))) && (var_1_91 == ((unsigned char) var_1_21))) && (var_1_92 == ((float) var_1_38))) && (var_1_93 == ((unsigned char) var_1_22))) && (var_1_94 == ((unsigned short int) var_1_72))) && (var_1_95 == ((unsigned short int) var_1_73))) && (var_1_28 ? (var_1_96 == ((unsigned char) var_1_17)) : (var_1_96 == ((unsigned char) var_1_17)))) && (var_1_27 ? (var_1_97 == ((unsigned char) var_1_84)) : 1)) && (((var_1_96 / (var_1_34 - var_1_75)) <= (last_1_var_1_98 >> var_1_1)) ? ((var_1_94 < (abs (10))) ? (var_1_98 == ((signed long int) var_1_73)) : 1) : (var_1_98 == ((signed long int) 5)))
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

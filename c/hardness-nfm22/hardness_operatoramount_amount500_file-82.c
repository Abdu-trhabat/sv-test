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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 16;
unsigned short int var_1_7 = 34024;
float var_1_11 = 10.375;
float var_1_12 = 15.5;
float var_1_13 = 10.6;
float var_1_14 = 1.25;
float var_1_15 = -0.8;
float var_1_16 = 256.4;
signed long int var_1_17 = 32;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 4;
signed char var_1_21 = 0;
unsigned char var_1_22 = 5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed long int var_1_25 = -32;
signed char var_1_26 = 1;
float var_1_27 = 5.65;
float var_1_28 = 1.8;
float var_1_29 = 4.71;
float var_1_30 = 32.28;
float var_1_31 = 255.25;
float var_1_32 = 0.0;
float var_1_33 = 256.25;
float var_1_34 = 1.067;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 0;
signed long int var_1_38 = 4;
unsigned long int var_1_39 = 0;
unsigned long int var_1_41 = 1000000000;
unsigned long int var_1_42 = 1000000000;
unsigned char var_1_43 = 0;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 100;
signed char var_1_48 = 32;
signed char var_1_49 = 64;
unsigned char var_1_50 = 1;
unsigned short int var_1_52 = 100;
unsigned char var_1_53 = 200;
unsigned short int var_1_55 = 1;
unsigned short int var_1_57 = 31616;
unsigned short int var_1_58 = 30936;
unsigned short int var_1_59 = 32673;
signed short int var_1_60 = 128;
signed char var_1_61 = -2;
signed char var_1_62 = 100;
unsigned long int var_1_64 = 0;
unsigned long int var_1_65 = 3589117330;
unsigned long int var_1_66 = 3933655391;
float var_1_67 = 100.5;
float var_1_69 = 0.0;
float var_1_70 = 4.25;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
unsigned short int var_1_74 = 64;
unsigned char var_1_75 = 128;
unsigned short int var_1_76 = 40415;
unsigned short int var_1_77 = 34396;
float var_1_78 = 9.2;
float var_1_79 = 1.65;
unsigned char var_1_80 = 0;
unsigned char var_1_82 = 0;
float var_1_83 = 256.2;
unsigned short int var_1_85 = 64;
signed long int var_1_87 = -8;
unsigned char var_1_88 = 0;
unsigned short int var_1_89 = 5;
float var_1_90 = 9.88;
unsigned char var_1_91 = 32;
signed short int var_1_92 = -4;
float var_1_93 = 1.9;
unsigned char var_1_95 = 1;
double var_1_96 = 4.7;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 16;
float last_1_var_1_11 = 10.375;
unsigned char last_1_var_1_23 = 0;
signed long int last_1_var_1_25 = -32;
signed char last_1_var_1_26 = 1;
float last_1_var_1_31 = 255.25;
unsigned char last_1_var_1_35 = 64;
signed long int last_1_var_1_38 = 4;
unsigned char last_1_var_1_43 = 0;
unsigned char last_1_var_1_46 = 128;
signed char last_1_var_1_61 = -2;
float last_1_var_1_67 = 100.5;
unsigned char last_1_var_1_71 = 1;
unsigned short int last_1_var_1_74 = 64;
unsigned char last_1_var_1_80 = 0;
unsigned short int last_1_var_1_85 = 64;
unsigned char last_1_var_1_88 = 0;
unsigned short int last_1_var_1_89 = 5;
float last_1_var_1_90 = 9.88;
unsigned char last_1_var_1_91 = 32;
float last_1_var_1_93 = 1.9;
unsigned char last_1_var_1_95 = 1;
double last_1_var_1_96 = 4.7;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req28Batch82Amount500
	signed long int stepLocal_26 = (max (last_1_var_1_1 , last_1_var_1_85)) ^ var_1_19;
	if (stepLocal_26 > ((min (var_1_57 , -50)) * (last_1_var_1_1 / var_1_58))) {
		var_1_83 = (min ((var_1_33 - (var_1_69 + var_1_70)) , var_1_34));
	} else {
		var_1_83 = (((3.4475851045371187E18f + var_1_69) - var_1_29) - 7.6f);
	}


	// From: Req3Batch82Amount500
	unsigned char stepLocal_4 = last_1_var_1_35 > (var_1_18 * var_1_7);
	unsigned char stepLocal_3 = (var_1_7 * last_1_var_1_74) < last_1_var_1_95;
	signed long int stepLocal_2 = (32 * var_1_7) << (var_1_18 - var_1_19);
	unsigned char stepLocal_1 = (var_1_18 / var_1_7) >= last_1_var_1_95;
	if (stepLocal_3 || last_1_var_1_23) {
		if (last_1_var_1_46 >= stepLocal_2) {
			var_1_17 = ((max (var_1_18 , (last_1_var_1_46 + last_1_var_1_35))) - (min ((last_1_var_1_95 + var_1_7) , 16)));
		} else {
			var_1_17 = ((min (var_1_7 , last_1_var_1_74)) + last_1_var_1_35);
		}
	} else {
		if (stepLocal_4 || (last_1_var_1_80 || (last_1_var_1_11 <= 100.25f))) {
			var_1_17 = (abs (max (var_1_7 , (var_1_19 - 128))));
		} else {
			if ((last_1_var_1_80 || last_1_var_1_23) || stepLocal_1) {
				var_1_17 = (last_1_var_1_95 - var_1_19);
			} else {
				var_1_17 = (max (var_1_7 , last_1_var_1_35));
			}
		}
	}


	// From: Req2Batch82Amount500
	if (32.8f > ((last_1_var_1_93 * last_1_var_1_96) / var_1_12)) {
		var_1_11 = (var_1_13 + ((min (var_1_14 , var_1_15)) + var_1_16));
	} else {
		if ((var_1_12 / 25.5) > var_1_14) {
			var_1_11 = var_1_13;
		}
	}


	// From: Req16Batch82Amount500
	if (var_1_28 > (8.75f * last_1_var_1_90)) {
		if (64 < ((max (var_1_18 , var_1_37)) - (min (last_1_var_1_46 , var_1_19)))) {
			var_1_50 = (last_1_var_1_80 || var_1_45);
		} else {
			var_1_50 = (last_1_var_1_80 || var_1_45);
		}
	}


	// From: Req25Batch82Amount500
	if (last_1_var_1_91 > var_1_42) {
		if (last_1_var_1_88 || (var_1_53 > (var_1_75 - var_1_47))) {
			if (last_1_var_1_61 > last_1_var_1_26) {
				var_1_74 = (last_1_var_1_38 + var_1_37);
			} else {
				var_1_74 = (var_1_53 + last_1_var_1_95);
			}
		} else {
			var_1_74 = (max ((4 + var_1_57) , (var_1_7 - var_1_22)));
		}
	} else {
		var_1_74 = ((min (var_1_7 , (max (var_1_76 , var_1_77)))) - (max (var_1_53 , var_1_19)));
	}


	// From: Req11Batch82Amount500
	if (last_1_var_1_91 > 128) {
		var_1_38 = (var_1_7 - last_1_var_1_25);
	} else {
		if (var_1_33 > var_1_15) {
			var_1_38 = (abs (last_1_var_1_91));
		}
	}


	// From: Req1Batch82Amount500
	unsigned char stepLocal_0 = last_1_var_1_46 <= last_1_var_1_89;
	if (last_1_var_1_23) {
		if (stepLocal_0 || (last_1_var_1_31 >= last_1_var_1_67)) {
			var_1_1 = (max ((var_1_7 - 16) , last_1_var_1_46));
		} else {
			var_1_1 = (var_1_7 - ((10000 - 32) + last_1_var_1_35));
		}
	} else {
		var_1_1 = (last_1_var_1_35 + last_1_var_1_91);
	}


	// From: Req10Batch82Amount500
	unsigned char stepLocal_15 = last_1_var_1_71 && var_1_24;
	unsigned char stepLocal_14 = last_1_var_1_71;
	signed long int stepLocal_13 = last_1_var_1_46;
	if ((! var_1_24) && stepLocal_14) {
		var_1_35 = (((32 + var_1_36) - (var_1_37 + 2)) + 25);
	} else {
		if (stepLocal_13 != ((var_1_22 / var_1_18) * 50)) {
			if (last_1_var_1_43) {
				if (stepLocal_15 || last_1_var_1_43) {
					var_1_35 = (max (8 , (var_1_19 + var_1_37)));
				}
			} else {
				var_1_35 = var_1_18;
			}
		} else {
			var_1_35 = 64;
		}
	}


	// From: Req8Batch82Amount500
	unsigned short int stepLocal_10 = var_1_7;
	unsigned char stepLocal_9 = var_1_22;
	if (stepLocal_9 != var_1_35) {
		if (stepLocal_10 > var_1_38) {
			var_1_27 = ((abs (min (var_1_16 , var_1_14))) - var_1_28);
		} else {
			var_1_27 = ((abs (var_1_28)) - 9.5f);
		}
	} else {
		var_1_27 = ((var_1_29 - var_1_30) + var_1_14);
	}


	// From: Req19Batch82Amount500
	if (var_1_12 <= (200.4f - var_1_30)) {
		var_1_60 = var_1_74;
	}


	// From: Req34Batch82Amount500
	if (last_1_var_1_43) {
		var_1_91 = var_1_47;
	} else {
		var_1_91 = var_1_47;
	}


	// From: Req14Batch82Amount500
	if ((- last_1_var_1_67) <= (var_1_34 - var_1_30)) {
		if (last_1_var_1_43) {
			var_1_46 = ((var_1_47 - 25) + 25);
		}
	}


	// From: Req24Batch82Amount500
	unsigned char stepLocal_24 = var_1_53;
	if (stepLocal_24 >= var_1_49) {
		var_1_73 = (! var_1_24);
	}


	// From: Req26Batch82Amount500
	if ((var_1_19 & (var_1_75 / var_1_58)) < (min (-64 , 32))) {
		var_1_78 = (var_1_16 + (min ((var_1_70 - var_1_29) , (var_1_79 + var_1_34))));
	}


	// From: Req30Batch82Amount500
	if (var_1_82) {
		var_1_87 = var_1_53;
	} else {
		var_1_87 = var_1_59;
	}


	// From: Req31Batch82Amount500
	var_1_88 = var_1_72;


	// From: Req33Batch82Amount500
	if (var_1_82) {
		var_1_90 = var_1_13;
	} else {
		var_1_90 = var_1_28;
	}


	// From: Req37Batch82Amount500
	var_1_95 = var_1_49;


	// From: Req38Batch82Amount500
	var_1_96 = var_1_79;


	// From: Req36Batch82Amount500
	signed long int stepLocal_30 = var_1_87 % (abs (var_1_49));
	if (var_1_17 >= stepLocal_30) {
		var_1_93 = ((abs (var_1_15)) + (abs (2.5f)));
	}


	// From: Req6Batch82Amount500
	unsigned char stepLocal_8 = var_1_91;
	signed long int stepLocal_7 = abs (100);
	if (var_1_50) {
		var_1_25 = (var_1_22 + ((1000000000 - var_1_46) - (abs (var_1_18))));
	} else {
		if (var_1_18 > stepLocal_7) {
			var_1_25 = var_1_91;
		} else {
			if ((var_1_38 + last_1_var_1_25) < stepLocal_8) {
				var_1_25 = var_1_46;
			}
		}
	}


	// From: Req23Batch82Amount500
	unsigned char stepLocal_23 = var_1_32 >= var_1_28;
	if ((var_1_59 < var_1_25) && stepLocal_23) {
		var_1_71 = (var_1_50 || ((var_1_88 || var_1_45) && var_1_72));
	} else {
		var_1_71 = (var_1_45 && (! var_1_24));
	}


	// From: Req21Batch82Amount500
	unsigned short int stepLocal_21 = var_1_1;
	if (var_1_95 > stepLocal_21) {
		if ((var_1_33 + var_1_83) >= var_1_32) {
			var_1_64 = ((var_1_65 - var_1_37) - var_1_1);
		} else {
			var_1_64 = ((min (var_1_65 , var_1_66)) - var_1_1);
		}
	}


	// From: Req22Batch82Amount500
	signed long int stepLocal_22 = (var_1_25 + 64) * (var_1_18 % var_1_58);
	if (((var_1_38 ^ var_1_36) / var_1_47) > stepLocal_22) {
		var_1_67 = ((var_1_32 - (var_1_33 + var_1_34)) - ((var_1_69 - var_1_70) + var_1_29));
	}


	// From: Req13Batch82Amount500
	signed long int stepLocal_17 = 57295 - (abs (var_1_95));
	signed short int stepLocal_16 = var_1_60;
	if (var_1_16 > var_1_27) {
		if (var_1_13 > var_1_12) {
			if (var_1_60 <= stepLocal_17) {
				var_1_43 = ((! var_1_71) && (! var_1_45));
			}
		} else {
			if (var_1_46 != stepLocal_16) {
				var_1_43 = var_1_24;
			} else {
				var_1_43 = var_1_45;
			}
		}
	} else {
		var_1_43 = 0;
	}


	// From: Req7Batch82Amount500
	if ((var_1_87 * var_1_95) < -32) {
		var_1_26 = var_1_19;
	}


	// From: Req15Batch82Amount500
	if (-4 >= var_1_36) {
		if (var_1_95 > var_1_95) {
			var_1_48 = (min (var_1_18 , (var_1_37 - (var_1_49 - var_1_19))));
		} else {
			var_1_48 = (100 - (max ((max (var_1_49 , var_1_18)) , var_1_36)));
		}
	} else {
		var_1_48 = (var_1_49 - (min (var_1_18 , (var_1_37 + var_1_19))));
	}


	// From: Req17Batch82Amount500
	unsigned char stepLocal_20 = var_1_24 && var_1_45;
	signed long int stepLocal_19 = var_1_87;
	signed short int stepLocal_18 = var_1_60;
	if (stepLocal_20 && var_1_88) {
		var_1_52 = (var_1_91 + var_1_60);
	} else {
		if (stepLocal_18 != (var_1_53 - 50)) {
			if (var_1_18 > stepLocal_19) {
				var_1_52 = (min ((var_1_60 + 8) , (var_1_18 + var_1_36)));
			} else {
				var_1_52 = (max ((var_1_7 - (var_1_91 + var_1_47)) , var_1_37));
			}
		} else {
			var_1_52 = (abs (var_1_19));
		}
	}


	// From: Req32Batch82Amount500
	if (var_1_72) {
		var_1_89 = var_1_47;
	} else {
		var_1_89 = var_1_95;
	}


	// From: Req35Batch82Amount500
	var_1_92 = var_1_95;


	// From: Req29Batch82Amount500
	signed long int stepLocal_29 = var_1_22 | var_1_74;
	unsigned short int stepLocal_28 = var_1_77;
	unsigned short int stepLocal_27 = var_1_74;
	if (var_1_35 != stepLocal_27) {
		var_1_85 = (var_1_76 - (var_1_75 + var_1_74));
	} else {
		if ((min (var_1_78 , var_1_83)) == var_1_14) {
			if (stepLocal_28 != 4) {
				if (var_1_71) {
					if (var_1_66 > stepLocal_29) {
						var_1_85 = (abs (min (var_1_91 , var_1_92)));
					} else {
						var_1_85 = (var_1_36 + var_1_47);
					}
				} else {
					var_1_85 = var_1_74;
				}
			} else {
				var_1_85 = var_1_53;
			}
		} else {
			var_1_85 = var_1_46;
		}
	}


	// From: Req18Batch82Amount500
	if (var_1_14 > (var_1_67 * (var_1_32 * var_1_28))) {
		if (var_1_45 || var_1_24) {
			if (var_1_12 > (max (var_1_30 , var_1_11))) {
				var_1_55 = (min (var_1_18 , (32 + 16)));
			} else {
				var_1_55 = (var_1_53 + var_1_35);
			}
		}
	} else {
		if (((var_1_37 + var_1_35) > (- var_1_7)) || (var_1_35 > var_1_41)) {
			var_1_55 = var_1_47;
		} else {
			if (var_1_47 >= (var_1_85 | (var_1_91 + var_1_35))) {
				var_1_55 = (var_1_35 + (var_1_18 + var_1_17));
			} else {
				if (var_1_73) {
					if ((var_1_30 - var_1_34) < (var_1_29 / var_1_12)) {
						var_1_55 = ((var_1_57 + (min (var_1_58 , var_1_59))) - var_1_91);
					} else {
						var_1_55 = var_1_35;
					}
				} else {
					var_1_55 = (var_1_59 + (max ((var_1_57 - var_1_91) , var_1_95)));
				}
			}
		}
	}


	// From: Req9Batch82Amount500
	unsigned long int stepLocal_12 = (~ 128) + var_1_64;
	unsigned short int stepLocal_11 = var_1_7;
	if (var_1_91 < stepLocal_12) {
		if (var_1_1 <= stepLocal_11) {
			var_1_31 = ((var_1_14 + var_1_15) + var_1_16);
		} else {
			var_1_31 = ((min (var_1_33 , var_1_32)) - (max (var_1_29 , var_1_28)));
		}
	} else {
		var_1_31 = (3.3f + ((var_1_33 + var_1_34) - var_1_30));
	}


	// From: Req12Batch82Amount500
	if (((var_1_1 + var_1_74) / var_1_22) != (~ var_1_74)) {
		if (var_1_71) {
			var_1_39 = (max ((var_1_46 + 8u) , (max ((min (var_1_36 , var_1_1)) , var_1_95))));
		} else {
			if (var_1_87 < var_1_18) {
				if (var_1_30 > (- var_1_83)) {
					if (var_1_7 <= var_1_35) {
						var_1_39 = (min (var_1_48 , (max (var_1_36 , (abs (var_1_35))))));
					}
				} else {
					var_1_39 = (var_1_95 + var_1_36);
				}
			} else {
				if ((var_1_55 + var_1_36) >= var_1_35) {
					var_1_39 = var_1_35;
				} else {
					var_1_39 = (var_1_36 + ((var_1_41 - 8u) + (var_1_42 - var_1_35)));
				}
			}
		}
	}


	// From: Req5Batch82Amount500
	if (var_1_38 > (var_1_19 - var_1_91)) {
		if (25 <= ((var_1_39 + var_1_38) * var_1_38)) {
			if (var_1_38 <= var_1_7) {
				var_1_23 = 0;
			} else {
				if (! (var_1_35 > (- var_1_7))) {
					var_1_23 = (((var_1_7 / var_1_18) < var_1_91) || (! var_1_24));
				}
			}
		} else {
			var_1_23 = (! var_1_24);
		}
	}


	// From: Req27Batch82Amount500
	signed char stepLocal_25 = var_1_49;
	if (var_1_50) {
		var_1_80 = var_1_45;
	} else {
		if (! var_1_50) {
			if (var_1_1 < stepLocal_25) {
				var_1_80 = (var_1_72 && ((var_1_33 >= var_1_31) || (var_1_88 || var_1_45)));
			} else {
				var_1_80 = (var_1_50 && (var_1_24 || var_1_82));
			}
		}
	}


	// From: Req20Batch82Amount500
	if ((abs (var_1_39)) <= (~ var_1_85)) {
		if (var_1_37 <= (var_1_58 * var_1_55)) {
			var_1_61 = (max (var_1_37 , 1));
		} else {
			if ((var_1_13 >= var_1_32) && (var_1_91 <= var_1_57)) {
				var_1_61 = (var_1_62 - (var_1_36 + var_1_18));
			} else {
				var_1_61 = (min ((50 - (max (var_1_37 , var_1_18))) , (min (var_1_19 , var_1_36))));
			}
		}
	} else {
		if (var_1_46 >= (var_1_53 - var_1_47)) {
			var_1_61 = (min ((var_1_37 + var_1_18) , (max (var_1_36 , -16))));
		}
	}


	// From: Req4Batch82Amount500
	signed long int stepLocal_6 = abs (var_1_18);
	unsigned char stepLocal_5 = var_1_18;
	if (var_1_87 >= stepLocal_6) {
		if (stepLocal_5 >= (var_1_39 / var_1_22)) {
			var_1_21 = (var_1_18 - var_1_19);
		} else {
			var_1_21 = (var_1_18 - var_1_19);
		}
	} else {
		if (var_1_80) {
			var_1_21 = (max (var_1_18 , var_1_19));
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -230584.3009213691390e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -230584.3009213691390e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691390e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -230584.3009213691390e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691390e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 5);
	assume_abort_if_not(var_1_18 <= 10);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 5);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 255);
	assume_abort_if_not(var_1_22 != 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 6917529.027641073700e+12F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691390e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691390e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 32);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 32);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 536870912);
	assume_abort_if_not(var_1_41 <= 1073741824);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 536870911);
	assume_abort_if_not(var_1_42 <= 1073741823);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 63);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 63);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 127);
	assume_abort_if_not(var_1_53 <= 255);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 16383);
	assume_abort_if_not(var_1_57 <= 32767);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 16384);
	assume_abort_if_not(var_1_58 <= 32767);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 16384);
	assume_abort_if_not(var_1_59 <= 32767);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -1);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 3221225470);
	assume_abort_if_not(var_1_65 <= 4294967294);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 2147483647);
	assume_abort_if_not(var_1_66 <= 4294967294);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= 2305843.009213691390e+12F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427382800e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 2305843.009213691390e+12F && var_1_70 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 127);
	assume_abort_if_not(var_1_75 <= 255);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 32767);
	assume_abort_if_not(var_1_76 <= 65534);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 32767);
	assume_abort_if_not(var_1_77 <= 65534);
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= -230584.3009213691390e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691390e+12F && var_1_79 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((last_1_var_1_23 ? (((last_1_var_1_46 <= last_1_var_1_89) || (last_1_var_1_31 >= last_1_var_1_67)) ? (var_1_1 == ((unsigned short int) (max ((var_1_7 - 16) , last_1_var_1_46)))) : (var_1_1 == ((unsigned short int) (var_1_7 - ((10000 - 32) + last_1_var_1_35))))) : (var_1_1 == ((unsigned short int) (last_1_var_1_35 + last_1_var_1_91)))) && ((32.8f > ((last_1_var_1_93 * last_1_var_1_96) / var_1_12)) ? (var_1_11 == ((float) (var_1_13 + ((min (var_1_14 , var_1_15)) + var_1_16)))) : (((var_1_12 / 25.5) > var_1_14) ? (var_1_11 == ((float) var_1_13)) : 1))) && ((((var_1_7 * last_1_var_1_74) < last_1_var_1_95) || last_1_var_1_23) ? ((last_1_var_1_46 >= ((32 * var_1_7) << (var_1_18 - var_1_19))) ? (var_1_17 == ((signed long int) ((max (var_1_18 , (last_1_var_1_46 + last_1_var_1_35))) - (min ((last_1_var_1_95 + var_1_7) , 16))))) : (var_1_17 == ((signed long int) ((min (var_1_7 , last_1_var_1_74)) + last_1_var_1_35)))) : (((last_1_var_1_35 > (var_1_18 * var_1_7)) || (last_1_var_1_80 || (last_1_var_1_11 <= 100.25f))) ? (var_1_17 == ((signed long int) (abs (max (var_1_7 , (var_1_19 - 128)))))) : (((last_1_var_1_80 || last_1_var_1_23) || ((var_1_18 / var_1_7) >= last_1_var_1_95)) ? (var_1_17 == ((signed long int) (last_1_var_1_95 - var_1_19))) : (var_1_17 == ((signed long int) (max (var_1_7 , last_1_var_1_35)))))))) && ((var_1_87 >= (abs (var_1_18))) ? ((var_1_18 >= (var_1_39 / var_1_22)) ? (var_1_21 == ((signed char) (var_1_18 - var_1_19))) : (var_1_21 == ((signed char) (var_1_18 - var_1_19)))) : (var_1_80 ? (var_1_21 == ((signed char) (max (var_1_18 , var_1_19)))) : 1))) && ((var_1_38 > (var_1_19 - var_1_91)) ? ((25 <= ((var_1_39 + var_1_38) * var_1_38)) ? ((var_1_38 <= var_1_7) ? (var_1_23 == ((unsigned char) 0)) : ((! (var_1_35 > (- var_1_7))) ? (var_1_23 == ((unsigned char) (((var_1_7 / var_1_18) < var_1_91) || (! var_1_24)))) : 1)) : (var_1_23 == ((unsigned char) (! var_1_24)))) : 1)) && (var_1_50 ? (var_1_25 == ((signed long int) (var_1_22 + ((1000000000 - var_1_46) - (abs (var_1_18)))))) : ((var_1_18 > (abs (100))) ? (var_1_25 == ((signed long int) var_1_91)) : (((var_1_38 + last_1_var_1_25) < var_1_91) ? (var_1_25 == ((signed long int) var_1_46)) : 1)))) && (((var_1_87 * var_1_95) < -32) ? (var_1_26 == ((signed char) var_1_19)) : 1)) && ((var_1_22 != var_1_35) ? ((var_1_7 > var_1_38) ? (var_1_27 == ((float) ((abs (min (var_1_16 , var_1_14))) - var_1_28))) : (var_1_27 == ((float) ((abs (var_1_28)) - 9.5f)))) : (var_1_27 == ((float) ((var_1_29 - var_1_30) + var_1_14))))) && ((var_1_91 < ((~ 128) + var_1_64)) ? ((var_1_1 <= var_1_7) ? (var_1_31 == ((float) ((var_1_14 + var_1_15) + var_1_16))) : (var_1_31 == ((float) ((min (var_1_33 , var_1_32)) - (max (var_1_29 , var_1_28)))))) : (var_1_31 == ((float) (3.3f + ((var_1_33 + var_1_34) - var_1_30)))))) && (((! var_1_24) && last_1_var_1_71) ? (var_1_35 == ((unsigned char) (((32 + var_1_36) - (var_1_37 + 2)) + 25))) : ((last_1_var_1_46 != ((var_1_22 / var_1_18) * 50)) ? (last_1_var_1_43 ? (((last_1_var_1_71 && var_1_24) || last_1_var_1_43) ? (var_1_35 == ((unsigned char) (max (8 , (var_1_19 + var_1_37))))) : 1) : (var_1_35 == ((unsigned char) var_1_18))) : (var_1_35 == ((unsigned char) 64))))) && ((last_1_var_1_91 > 128) ? (var_1_38 == ((signed long int) (var_1_7 - last_1_var_1_25))) : ((var_1_33 > var_1_15) ? (var_1_38 == ((signed long int) (abs (last_1_var_1_91)))) : 1))) && ((((var_1_1 + var_1_74) / var_1_22) != (~ var_1_74)) ? (var_1_71 ? (var_1_39 == ((unsigned long int) (max ((var_1_46 + 8u) , (max ((min (var_1_36 , var_1_1)) , var_1_95)))))) : ((var_1_87 < var_1_18) ? ((var_1_30 > (- var_1_83)) ? ((var_1_7 <= var_1_35) ? (var_1_39 == ((unsigned long int) (min (var_1_48 , (max (var_1_36 , (abs (var_1_35)))))))) : 1) : (var_1_39 == ((unsigned long int) (var_1_95 + var_1_36)))) : (((var_1_55 + var_1_36) >= var_1_35) ? (var_1_39 == ((unsigned long int) var_1_35)) : (var_1_39 == ((unsigned long int) (var_1_36 + ((var_1_41 - 8u) + (var_1_42 - var_1_35)))))))) : 1)) && ((var_1_16 > var_1_27) ? ((var_1_13 > var_1_12) ? ((var_1_60 <= (57295 - (abs (var_1_95)))) ? (var_1_43 == ((unsigned char) ((! var_1_71) && (! var_1_45)))) : 1) : ((var_1_46 != var_1_60) ? (var_1_43 == ((unsigned char) var_1_24)) : (var_1_43 == ((unsigned char) var_1_45)))) : (var_1_43 == ((unsigned char) 0)))) && (((- last_1_var_1_67) <= (var_1_34 - var_1_30)) ? (last_1_var_1_43 ? (var_1_46 == ((unsigned char) ((var_1_47 - 25) + 25))) : 1) : 1)) && ((-4 >= var_1_36) ? ((var_1_95 > var_1_95) ? (var_1_48 == ((signed char) (min (var_1_18 , (var_1_37 - (var_1_49 - var_1_19)))))) : (var_1_48 == ((signed char) (100 - (max ((max (var_1_49 , var_1_18)) , var_1_36)))))) : (var_1_48 == ((signed char) (var_1_49 - (min (var_1_18 , (var_1_37 + var_1_19)))))))) && ((var_1_28 > (8.75f * last_1_var_1_90)) ? ((64 < ((max (var_1_18 , var_1_37)) - (min (last_1_var_1_46 , var_1_19)))) ? (var_1_50 == ((unsigned char) (last_1_var_1_80 || var_1_45))) : (var_1_50 == ((unsigned char) (last_1_var_1_80 || var_1_45)))) : 1)) && (((var_1_24 && var_1_45) && var_1_88) ? (var_1_52 == ((unsigned short int) (var_1_91 + var_1_60))) : ((var_1_60 != (var_1_53 - 50)) ? ((var_1_18 > var_1_87) ? (var_1_52 == ((unsigned short int) (min ((var_1_60 + 8) , (var_1_18 + var_1_36))))) : (var_1_52 == ((unsigned short int) (max ((var_1_7 - (var_1_91 + var_1_47)) , var_1_37))))) : (var_1_52 == ((unsigned short int) (abs (var_1_19))))))) && ((var_1_14 > (var_1_67 * (var_1_32 * var_1_28))) ? ((var_1_45 || var_1_24) ? ((var_1_12 > (max (var_1_30 , var_1_11))) ? (var_1_55 == ((unsigned short int) (min (var_1_18 , (32 + 16))))) : (var_1_55 == ((unsigned short int) (var_1_53 + var_1_35)))) : 1) : ((((var_1_37 + var_1_35) > (- var_1_7)) || (var_1_35 > var_1_41)) ? (var_1_55 == ((unsigned short int) var_1_47)) : ((var_1_47 >= (var_1_85 | (var_1_91 + var_1_35))) ? (var_1_55 == ((unsigned short int) (var_1_35 + (var_1_18 + var_1_17)))) : (var_1_73 ? (((var_1_30 - var_1_34) < (var_1_29 / var_1_12)) ? (var_1_55 == ((unsigned short int) ((var_1_57 + (min (var_1_58 , var_1_59))) - var_1_91))) : (var_1_55 == ((unsigned short int) var_1_35))) : (var_1_55 == ((unsigned short int) (var_1_59 + (max ((var_1_57 - var_1_91) , var_1_95)))))))))) && ((var_1_12 <= (200.4f - var_1_30)) ? (var_1_60 == ((signed short int) var_1_74)) : 1)) && (((abs (var_1_39)) <= (~ var_1_85)) ? ((var_1_37 <= (var_1_58 * var_1_55)) ? (var_1_61 == ((signed char) (max (var_1_37 , 1)))) : (((var_1_13 >= var_1_32) && (var_1_91 <= var_1_57)) ? (var_1_61 == ((signed char) (var_1_62 - (var_1_36 + var_1_18)))) : (var_1_61 == ((signed char) (min ((50 - (max (var_1_37 , var_1_18))) , (min (var_1_19 , var_1_36)))))))) : ((var_1_46 >= (var_1_53 - var_1_47)) ? (var_1_61 == ((signed char) (min ((var_1_37 + var_1_18) , (max (var_1_36 , -16)))))) : 1))) && ((var_1_95 > var_1_1) ? (((var_1_33 + var_1_83) >= var_1_32) ? (var_1_64 == ((unsigned long int) ((var_1_65 - var_1_37) - var_1_1))) : (var_1_64 == ((unsigned long int) ((min (var_1_65 , var_1_66)) - var_1_1)))) : 1)) && ((((var_1_38 ^ var_1_36) / var_1_47) > ((var_1_25 + 64) * (var_1_18 % var_1_58))) ? (var_1_67 == ((float) ((var_1_32 - (var_1_33 + var_1_34)) - ((var_1_69 - var_1_70) + var_1_29)))) : 1)) && (((var_1_59 < var_1_25) && (var_1_32 >= var_1_28)) ? (var_1_71 == ((unsigned char) (var_1_50 || ((var_1_88 || var_1_45) && var_1_72)))) : (var_1_71 == ((unsigned char) (var_1_45 && (! var_1_24)))))) && ((var_1_53 >= var_1_49) ? (var_1_73 == ((unsigned char) (! var_1_24))) : 1)) && ((last_1_var_1_91 > var_1_42) ? ((last_1_var_1_88 || (var_1_53 > (var_1_75 - var_1_47))) ? ((last_1_var_1_61 > last_1_var_1_26) ? (var_1_74 == ((unsigned short int) (last_1_var_1_38 + var_1_37))) : (var_1_74 == ((unsigned short int) (var_1_53 + last_1_var_1_95)))) : (var_1_74 == ((unsigned short int) (max ((4 + var_1_57) , (var_1_7 - var_1_22)))))) : (var_1_74 == ((unsigned short int) ((min (var_1_7 , (max (var_1_76 , var_1_77)))) - (max (var_1_53 , var_1_19))))))) && (((var_1_19 & (var_1_75 / var_1_58)) < (min (-64 , 32))) ? (var_1_78 == ((float) (var_1_16 + (min ((var_1_70 - var_1_29) , (var_1_79 + var_1_34)))))) : 1)) && (var_1_50 ? (var_1_80 == ((unsigned char) var_1_45)) : ((! var_1_50) ? ((var_1_1 < var_1_49) ? (var_1_80 == ((unsigned char) (var_1_72 && ((var_1_33 >= var_1_31) || (var_1_88 || var_1_45))))) : (var_1_80 == ((unsigned char) (var_1_50 && (var_1_24 || var_1_82))))) : 1))) && ((((max (last_1_var_1_1 , last_1_var_1_85)) ^ var_1_19) > ((min (var_1_57 , -50)) * (last_1_var_1_1 / var_1_58))) ? (var_1_83 == ((float) (min ((var_1_33 - (var_1_69 + var_1_70)) , var_1_34)))) : (var_1_83 == ((float) (((3.4475851045371187E18f + var_1_69) - var_1_29) - 7.6f))))) && ((var_1_35 != var_1_74) ? (var_1_85 == ((unsigned short int) (var_1_76 - (var_1_75 + var_1_74)))) : (((min (var_1_78 , var_1_83)) == var_1_14) ? ((var_1_77 != 4) ? (var_1_71 ? ((var_1_66 > (var_1_22 | var_1_74)) ? (var_1_85 == ((unsigned short int) (abs (min (var_1_91 , var_1_92))))) : (var_1_85 == ((unsigned short int) (var_1_36 + var_1_47)))) : (var_1_85 == ((unsigned short int) var_1_74))) : (var_1_85 == ((unsigned short int) var_1_53))) : (var_1_85 == ((unsigned short int) var_1_46))))) && (var_1_82 ? (var_1_87 == ((signed long int) var_1_53)) : (var_1_87 == ((signed long int) var_1_59)))) && (var_1_88 == ((unsigned char) var_1_72))) && (var_1_72 ? (var_1_89 == ((unsigned short int) var_1_47)) : (var_1_89 == ((unsigned short int) var_1_95)))) && (var_1_82 ? (var_1_90 == ((float) var_1_13)) : (var_1_90 == ((float) var_1_28)))) && (last_1_var_1_43 ? (var_1_91 == ((unsigned char) var_1_47)) : (var_1_91 == ((unsigned char) var_1_47)))) && (var_1_92 == ((signed short int) var_1_95))) && ((var_1_17 >= (var_1_87 % (abs (var_1_49)))) ? (var_1_93 == ((float) ((abs (var_1_15)) + (abs (2.5f))))) : 1)) && (var_1_95 == ((unsigned char) var_1_49))) && (var_1_96 == ((double) var_1_79))
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

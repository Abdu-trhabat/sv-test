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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -2;
unsigned char var_1_4 = 128;
signed char var_1_5 = 0;
signed char var_1_6 = 32;
signed char var_1_7 = 5;
signed char var_1_8 = 32;
signed char var_1_9 = 0;
double var_1_10 = 128.6;
double var_1_13 = 9.125;
double var_1_14 = 32.75;
double var_1_15 = 63.5;
double var_1_16 = 256.5;
double var_1_17 = 15.8;
unsigned short int var_1_18 = 64;
unsigned short int var_1_19 = 41023;
unsigned short int var_1_20 = 5;
unsigned short int var_1_21 = 26155;
signed char var_1_22 = 0;
float var_1_24 = 16.6;
float var_1_25 = 5.5;
float var_1_26 = -0.4;
double var_1_27 = 4.75;
double var_1_29 = 0.0;
double var_1_30 = 32.2;
unsigned short int var_1_31 = 128;
signed char var_1_32 = -4;
unsigned long int var_1_34 = 1;
unsigned short int var_1_35 = 128;
double var_1_36 = 199.4;
double var_1_37 = 31.125;
signed char var_1_38 = -4;
float var_1_39 = 100.75;
double var_1_40 = 15.75;
double var_1_41 = 0.75;
double var_1_42 = 99.2;
unsigned char var_1_43 = 10;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 64;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 200;
float var_1_48 = 255.45;
float var_1_49 = 0.0;
signed char var_1_50 = -16;
unsigned long int var_1_51 = 4146403405;
unsigned long int var_1_52 = 2929700411;
signed char var_1_53 = 2;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 128;
signed short int var_1_62 = -8;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
signed char var_1_65 = -5;
signed char var_1_66 = 100;
unsigned long int var_1_67 = 32;
unsigned long int var_1_68 = 1708921626;
unsigned long int var_1_69 = 2166382085;
unsigned char var_1_70 = 5;
unsigned char var_1_71 = 64;
signed long int var_1_72 = -256;
unsigned short int var_1_73 = 5;
signed long int var_1_74 = -16;
unsigned char var_1_75 = 1;
float var_1_76 = 15.4;
float var_1_77 = 0.8;
unsigned short int var_1_78 = 40909;
unsigned char var_1_79 = 0;
signed long int var_1_80 = -4;
unsigned char var_1_81 = 64;
unsigned char var_1_82 = 10;
float var_1_83 = 15.8;
float var_1_84 = 128.25;
signed long int var_1_85 = -1;
signed char var_1_86 = 2;
unsigned char var_1_87 = 1;
unsigned char var_1_88 = 0;
float var_1_89 = 127.6;
double var_1_90 = 0.5;
unsigned char var_1_91 = 0;
signed long int var_1_92 = -64;
unsigned char var_1_93 = 0;
signed long int var_1_94 = -2;
unsigned long int var_1_96 = 2;
signed char var_1_97 = -128;
unsigned char var_1_98 = 0;
signed char var_1_99 = -25;
unsigned char var_1_100 = 64;
double var_1_102 = 7.625;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = -2;
unsigned short int last_1_var_1_18 = 64;
unsigned long int last_1_var_1_34 = 1;
unsigned short int last_1_var_1_35 = 128;
signed short int last_1_var_1_62 = -8;
unsigned char last_1_var_1_63 = 0;
unsigned long int last_1_var_1_67 = 32;
unsigned char last_1_var_1_70 = 5;
signed long int last_1_var_1_72 = -256;
signed long int last_1_var_1_74 = -16;
unsigned char last_1_var_1_75 = 1;
float last_1_var_1_76 = 15.4;
unsigned char last_1_var_1_79 = 0;
float last_1_var_1_84 = 128.25;
signed long int last_1_var_1_85 = -1;
unsigned char last_1_var_1_91 = 0;
signed long int last_1_var_1_92 = -64;
unsigned char last_1_var_1_93 = 0;
signed char last_1_var_1_99 = -25;
unsigned char last_1_var_1_100 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch3Amount500
	if ((1u + var_1_45) >= last_1_var_1_74) {
		if (((max (var_1_51 , var_1_52)) - var_1_5) < (last_1_var_1_85 * last_1_var_1_99)) {
			var_1_50 = (min (var_1_6 , ((var_1_9 + var_1_7) - var_1_53)));
		}
	}


	// From: Req51Batch3Amount500
	if (var_1_58) {
		if (last_1_var_1_70 > var_1_61) {
			var_1_100 = ((abs (abs (var_1_46))) + var_1_8);
		} else {
			var_1_100 = var_1_61;
		}
	} else {
		var_1_100 = var_1_44;
	}


	// From: Req45Batch3Amount500
	if (last_1_var_1_75) {
		var_1_93 = var_1_56;
	} else {
		var_1_93 = var_1_58;
	}


	// From: Req40Batch3Amount500
	if (var_1_93) {
		var_1_87 = var_1_59;
	} else {
		var_1_87 = var_1_88;
	}


	// From: Req16Batch3Amount500
	signed long int stepLocal_8 = (last_1_var_1_72 + var_1_7) + -10;
	signed long int stepLocal_7 = var_1_46 / var_1_8;
	unsigned long int stepLocal_6 = last_1_var_1_34 % var_1_4;
	if (last_1_var_1_75) {
		if (stepLocal_6 < last_1_var_1_72) {
			if (last_1_var_1_79) {
				if (stepLocal_8 == last_1_var_1_62) {
					var_1_43 = ((var_1_44 + var_1_45) - (var_1_46 - var_1_9));
				} else {
					var_1_43 = (var_1_9 + (var_1_5 + var_1_8));
				}
			} else {
				if (last_1_var_1_84 <= (- (127.7 - 50.8))) {
					if (stepLocal_7 < (var_1_6 / var_1_44)) {
						var_1_43 = var_1_7;
					} else {
						var_1_43 = var_1_7;
					}
				} else {
					var_1_43 = var_1_9;
				}
			}
		}
	} else {
		var_1_43 = var_1_47;
	}


	// From: Req21Batch3Amount500
	if ((- var_1_43) > ((-5 / var_1_45) / (min (var_1_8 , var_1_4)))) {
		var_1_62 = (var_1_5 - (var_1_44 + var_1_7));
	}


	// From: Req10Batch3Amount500
	signed long int stepLocal_4 = last_1_var_1_100;
	if (stepLocal_4 < var_1_7) {
		var_1_34 = (max (var_1_8 , var_1_21));
	} else {
		var_1_34 = (max (var_1_19 , (min (last_1_var_1_91 , 1u))));
	}


	// From: Req19Batch3Amount500
	if (last_1_var_1_93) {
		if ((max (-8 , -200)) > (max ((var_1_8 + last_1_var_1_92) , (last_1_var_1_35 / var_1_44)))) {
			var_1_54 = ((last_1_var_1_63 || var_1_55) && ((var_1_56 && var_1_57) && (last_1_var_1_63 || var_1_58)));
		} else {
			var_1_54 = (last_1_var_1_63 || var_1_57);
		}
	} else {
		if (199.75 < ((var_1_42 + var_1_17) - (var_1_30 + var_1_41))) {
			var_1_54 = (var_1_59 || (! 1));
		}
	}


	// From: Req47Batch3Amount500
	if (var_1_54) {
		var_1_96 = var_1_47;
	}


	// From: Req3Batch3Amount500
	if ((min ((max (var_1_8 , var_1_4)) , (last_1_var_1_18 * var_1_7))) <= ((var_1_6 | var_1_9) * last_1_var_1_18)) {
		var_1_18 = ((abs (last_1_var_1_18)) + var_1_7);
	} else {
		var_1_18 = (var_1_19 - var_1_7);
	}


	// From: Req7Batch3Amount500
	if ((abs (-16)) != var_1_50) {
		var_1_27 = (var_1_17 - (var_1_29 - (min (100000.3 , var_1_30))));
	} else {
		if (var_1_54) {
			var_1_27 = var_1_16;
		} else {
			var_1_27 = (var_1_17 - (abs (4.75)));
		}
	}


	// From: Req11Batch3Amount500
	var_1_35 = (var_1_19 - var_1_8);


	// From: Req12Batch3Amount500
	unsigned char stepLocal_5 = var_1_93;
	if (var_1_93 || stepLocal_5) {
		var_1_36 = (min (var_1_17 , (var_1_30 - (var_1_29 - var_1_37))));
	} else {
		var_1_36 = (min (var_1_16 , var_1_13));
	}


	// From: Req13Batch3Amount500
	var_1_38 = (max (var_1_7 , (abs (var_1_5))));


	// From: Req14Batch3Amount500
	if (((56795 - var_1_5) ^ var_1_7) <= var_1_9) {
		var_1_39 = (var_1_17 + (max (var_1_16 , (max (9.8f , var_1_37)))));
	}


	// From: Req15Batch3Amount500
	var_1_40 = (((var_1_41 + var_1_42) + 24.5) - 31.8);


	// From: Req17Batch3Amount500
	if (var_1_13 == var_1_16) {
		var_1_48 = (((9.0804780570722345E18f - var_1_41) - var_1_37) - ((min (var_1_29 , var_1_49)) - 16.4f));
	} else {
		var_1_48 = (var_1_30 + var_1_41);
	}


	// From: Req23Batch3Amount500
	var_1_65 = (max (((var_1_6 - var_1_5) + var_1_8) , ((var_1_66 - var_1_7) - (abs (var_1_53)))));


	// From: Req27Batch3Amount500
	var_1_73 = (var_1_19 - var_1_47);


	// From: Req35Batch3Amount500
	var_1_82 = ((abs (var_1_8)) + (abs (var_1_5)));


	// From: Req37Batch3Amount500
	signed char stepLocal_13 = var_1_8;
	if (stepLocal_13 < var_1_51) {
		var_1_84 = ((max ((var_1_41 + var_1_30) , (var_1_37 + var_1_17))) - (var_1_29 - (3.1195649291149901E18f - var_1_42)));
	}


	// From: Req39Batch3Amount500
	signed long int stepLocal_16 = -128;
	if (stepLocal_16 <= var_1_82) {
		var_1_86 = 2;
	} else {
		var_1_86 = var_1_8;
	}


	// From: Req41Batch3Amount500
	if (var_1_64) {
		var_1_89 = var_1_49;
	}


	// From: Req42Batch3Amount500
	var_1_90 = var_1_15;


	// From: Req43Batch3Amount500
	if (var_1_57) {
		var_1_91 = var_1_44;
	}


	// From: Req48Batch3Amount500
	var_1_97 = var_1_7;


	// From: Req50Batch3Amount500
	var_1_99 = var_1_6;


	// From: Req52Batch3Amount500
	var_1_102 = var_1_16;


	// From: Req25Batch3Amount500
	if (var_1_50 > (abs (var_1_66))) {
		if (var_1_54 && (! (var_1_90 < var_1_13))) {
			if (! (var_1_9 > var_1_5)) {
				var_1_70 = (max (var_1_71 , ((var_1_46 + var_1_45) - var_1_66)));
			} else {
				var_1_70 = (min (var_1_47 , 128));
			}
		} else {
			if (var_1_18 >= var_1_7) {
				var_1_70 = (128 - var_1_45);
			}
		}
	} else {
		var_1_70 = (var_1_6 + var_1_66);
	}


	// From: Req31Batch3Amount500
	if ((var_1_89 + -0.75) <= (var_1_49 / var_1_24)) {
		if (var_1_19 >= (var_1_78 - var_1_50)) {
			var_1_77 = (min ((abs (abs (var_1_41))) , var_1_42));
		} else {
			var_1_77 = (max (var_1_17 , 64.8f));
		}
	} else {
		var_1_77 = ((max ((max (var_1_49 , var_1_37)) , var_1_42)) - (abs (var_1_17)));
	}


	// From: Req44Batch3Amount500
	if (var_1_54) {
		var_1_92 = var_1_34;
	}


	// From: Req22Batch3Amount500
	if (5 <= var_1_73) {
		var_1_63 = (! var_1_56);
	} else {
		if (! var_1_59) {
			var_1_63 = (var_1_54 && (var_1_59 || var_1_64));
		}
	}


	// From: Req49Batch3Amount500
	if (var_1_63) {
		var_1_98 = var_1_56;
	}


	// From: Req1Batch3Amount500
	signed char stepLocal_1 = var_1_86;
	signed long int stepLocal_0 = var_1_86 / var_1_4;
	if (last_1_var_1_1 != stepLocal_0) {
		if (stepLocal_1 >= last_1_var_1_1) {
			var_1_1 = ((abs (var_1_5 - var_1_6)) + (var_1_7 - (var_1_8 - var_1_9)));
		} else {
			var_1_1 = (abs (var_1_7));
		}
	}


	// From: Req4Batch3Amount500
	if ((min (var_1_14 , var_1_15)) >= -0.6) {
		var_1_20 = (var_1_5 + (var_1_21 - var_1_92));
	} else {
		var_1_20 = var_1_9;
	}


	// From: Req5Batch3Amount500
	unsigned char stepLocal_3 = (max (var_1_65 , var_1_21)) >= 2;
	if (((var_1_18 * 4u) < var_1_5) || stepLocal_3) {
		if (var_1_16 < (min (var_1_89 , var_1_13))) {
			if (((var_1_17 / var_1_24) / var_1_25) <= (abs (var_1_15))) {
				var_1_22 = (16 - var_1_6);
			} else {
				var_1_22 = (var_1_5 - (var_1_7 + var_1_9));
			}
		}
	}


	// From: Req6Batch3Amount500
	if ((max (var_1_36 , (var_1_25 * var_1_16))) > var_1_17) {
		var_1_26 = var_1_16;
	} else {
		var_1_26 = var_1_13;
	}


	// From: Req8Batch3Amount500
	var_1_31 = (var_1_19 - var_1_38);


	// From: Req20Batch3Amount500
	unsigned short int stepLocal_9 = var_1_18;
	if (stepLocal_9 <= var_1_8) {
		if (var_1_102 > -0.5) {
			var_1_60 = (abs (var_1_46));
		} else {
			var_1_60 = ((var_1_44 - var_1_7) + (var_1_9 + (var_1_8 - 10)));
		}
	} else {
		var_1_60 = (var_1_61 - var_1_7);
	}


	// From: Req26Batch3Amount500
	if (var_1_17 > var_1_15) {
		var_1_72 = (((var_1_7 + var_1_86) + (var_1_91 + var_1_6)) - var_1_91);
	} else {
		var_1_72 = (abs (var_1_71 + var_1_44));
	}


	// From: Req34Batch3Amount500
	if ((var_1_7 + var_1_99) <= var_1_44) {
		var_1_81 = ((200 - var_1_8) - 100);
	} else {
		var_1_81 = (var_1_61 - var_1_45);
	}


	// From: Req36Batch3Amount500
	if (var_1_13 == (- var_1_37)) {
		if (((var_1_43 <= 64) || var_1_56) || (var_1_60 > var_1_8)) {
			if ((100000 - (max (var_1_78 , var_1_47))) == (8 - var_1_4)) {
				var_1_83 = var_1_13;
			} else {
				if ((var_1_38 / var_1_46) < var_1_70) {
					var_1_83 = (var_1_14 + (min (var_1_17 , var_1_15)));
				} else {
					var_1_83 = (var_1_30 + var_1_37);
				}
			}
		}
	} else {
		if (var_1_66 != (var_1_7 + (var_1_43 + var_1_19))) {
			var_1_83 = (max ((max ((var_1_42 - 999999.625f) , var_1_30)) , var_1_15));
		}
	}


	// From: Req46Batch3Amount500
	if (var_1_59) {
		var_1_94 = var_1_100;
	} else {
		var_1_94 = var_1_72;
	}


	// From: Req9Batch3Amount500
	if (var_1_98) {
		var_1_32 = (var_1_5 + var_1_6);
	} else {
		if (var_1_87 || var_1_93) {
			var_1_32 = (var_1_8 - (min ((max (var_1_5 , var_1_6)) , var_1_7)));
		} else {
			var_1_32 = ((var_1_6 - var_1_9) + (abs (var_1_8)));
		}
	}


	// From: Req33Batch3Amount500
	if (var_1_43 < var_1_92) {
		if (var_1_84 <= var_1_77) {
			var_1_80 = (var_1_45 + var_1_97);
		} else {
			var_1_80 = (var_1_94 - var_1_47);
		}
	}


	// From: Req38Batch3Amount500
	unsigned long int stepLocal_15 = var_1_91 + var_1_69;
	unsigned char stepLocal_14 = var_1_47;
	if ((5 + 64) < stepLocal_14) {
		if (last_1_var_1_85 != stepLocal_15) {
			var_1_85 = (1 + (var_1_6 + var_1_96));
		}
	} else {
		var_1_85 = (min (var_1_92 , (var_1_99 - var_1_80)));
	}


	// From: Req29Batch3Amount500
	if ((min (var_1_29 , var_1_49)) >= var_1_89) {
		var_1_75 = (! var_1_59);
	} else {
		if ((var_1_85 < var_1_19) || ((var_1_43 + var_1_18) < var_1_100)) {
			if ((min (var_1_52 , var_1_100)) <= (var_1_6 | var_1_96)) {
				var_1_75 = (! var_1_56);
			} else {
				if (0.19999999999999996 <= var_1_25) {
					var_1_75 = (! var_1_59);
				}
			}
		}
	}


	// From: Req24Batch3Amount500
	unsigned char stepLocal_12 = var_1_55;
	signed long int stepLocal_11 = var_1_92;
	signed long int stepLocal_10 = (max (var_1_45 , var_1_7)) / var_1_4;
	if (stepLocal_12 && var_1_93) {
		if (var_1_66 <= stepLocal_11) {
			if (var_1_58) {
				if (var_1_64) {
					if (stepLocal_10 <= last_1_var_1_67) {
						var_1_67 = ((min ((var_1_68 - var_1_7) , var_1_43)) + var_1_61);
					} else {
						var_1_67 = (abs (max (var_1_34 , var_1_4)));
					}
				}
			} else {
				var_1_67 = ((max (2909055255u , (min (var_1_69 , 4217072818u)))) - var_1_70);
			}
		} else {
			var_1_67 = (var_1_9 + (min (var_1_43 , var_1_21)));
		}
	} else {
		if (var_1_75) {
			if ((max ((var_1_30 - var_1_42) , var_1_90)) <= var_1_13) {
				var_1_67 = var_1_9;
			}
		}
	}


	// From: Req30Batch3Amount500
	if (var_1_25 == (last_1_var_1_76 + (var_1_30 - var_1_17))) {
		if (var_1_94 < var_1_69) {
			if (var_1_67 <= var_1_22) {
				var_1_76 = (var_1_16 + var_1_17);
			} else {
				var_1_76 = var_1_29;
			}
		} else {
			var_1_76 = (min (500.4f , ((var_1_42 - 256.4f) + (var_1_41 + var_1_16))));
		}
	} else {
		var_1_76 = (min (((min (var_1_15 , var_1_42)) + var_1_16) , var_1_29));
	}


	// From: Req32Batch3Amount500
	if (var_1_40 >= (64.8f * var_1_48)) {
		if (var_1_54) {
			if (-5 >= (min ((var_1_81 | var_1_5) , var_1_72))) {
				if (var_1_64) {
					var_1_79 = (var_1_98 || var_1_55);
				} else {
					var_1_79 = (var_1_98 || ((var_1_57 && var_1_56) && var_1_55));
				}
			} else {
				if ((var_1_80 ^ var_1_67) < var_1_32) {
					var_1_79 = (! var_1_58);
				}
			}
		}
	}


	// From: Req28Batch3Amount500
	if (var_1_79) {
		var_1_74 = ((min ((var_1_8 + var_1_66) , (var_1_96 - var_1_7))) + (var_1_34 - var_1_44));
	} else {
		var_1_74 = (min ((var_1_35 - var_1_96) , (abs (var_1_61))));
	}


	// From: Req2Batch3Amount500
	unsigned char stepLocal_2 = var_1_63;
	if (stepLocal_2 && var_1_79) {
		var_1_10 = var_1_13;
	} else {
		if (var_1_63) {
			if (var_1_79) {
				var_1_10 = (var_1_14 + (var_1_15 + var_1_16));
			} else {
				var_1_10 = ((max ((max (8.2 , var_1_16)) , (2.5 - var_1_17))) + var_1_14);
			}
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 31);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 31);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -230584.3009213691390e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691390e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -230584.3009213691390e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691390e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	assume_abort_if_not(var_1_25 != 0.0F);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 4611686.018427382800e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691390e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 63);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 64);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 63);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 254);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 4611686.018427382800e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967295);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967295);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 126);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 1);
	assume_abort_if_not(var_1_57 <= 1);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 1);
	assume_abort_if_not(var_1_58 <= 1);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 0);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 127);
	assume_abort_if_not(var_1_61 <= 254);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 0);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 62);
	assume_abort_if_not(var_1_66 <= 126);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 1073741823);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 2147483647);
	assume_abort_if_not(var_1_69 <= 4294967294);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 254);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 32767);
	assume_abort_if_not(var_1_78 <= 65535);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 1);
	assume_abort_if_not(var_1_88 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_100 = var_1_100;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_1 != (var_1_86 / var_1_4)) ? ((var_1_86 >= last_1_var_1_1) ? (var_1_1 == ((signed char) ((abs (var_1_5 - var_1_6)) + (var_1_7 - (var_1_8 - var_1_9))))) : (var_1_1 == ((signed char) (abs (var_1_7))))) : 1) && ((var_1_63 && var_1_79) ? (var_1_10 == ((double) var_1_13)) : (var_1_63 ? (var_1_79 ? (var_1_10 == ((double) (var_1_14 + (var_1_15 + var_1_16)))) : (var_1_10 == ((double) ((max ((max (8.2 , var_1_16)) , (2.5 - var_1_17))) + var_1_14)))) : 1))) && (((min ((max (var_1_8 , var_1_4)) , (last_1_var_1_18 * var_1_7))) <= ((var_1_6 | var_1_9) * last_1_var_1_18)) ? (var_1_18 == ((unsigned short int) ((abs (last_1_var_1_18)) + var_1_7))) : (var_1_18 == ((unsigned short int) (var_1_19 - var_1_7))))) && (((min (var_1_14 , var_1_15)) >= -0.6) ? (var_1_20 == ((unsigned short int) (var_1_5 + (var_1_21 - var_1_92)))) : (var_1_20 == ((unsigned short int) var_1_9)))) && ((((var_1_18 * 4u) < var_1_5) || ((max (var_1_65 , var_1_21)) >= 2)) ? ((var_1_16 < (min (var_1_89 , var_1_13))) ? ((((var_1_17 / var_1_24) / var_1_25) <= (abs (var_1_15))) ? (var_1_22 == ((signed char) (16 - var_1_6))) : (var_1_22 == ((signed char) (var_1_5 - (var_1_7 + var_1_9))))) : 1) : 1)) && (((max (var_1_36 , (var_1_25 * var_1_16))) > var_1_17) ? (var_1_26 == ((float) var_1_16)) : (var_1_26 == ((float) var_1_13)))) && (((abs (-16)) != var_1_50) ? (var_1_27 == ((double) (var_1_17 - (var_1_29 - (min (100000.3 , var_1_30)))))) : (var_1_54 ? (var_1_27 == ((double) var_1_16)) : (var_1_27 == ((double) (var_1_17 - (abs (4.75)))))))) && (var_1_31 == ((unsigned short int) (var_1_19 - var_1_38)))) && (var_1_98 ? (var_1_32 == ((signed char) (var_1_5 + var_1_6))) : ((var_1_87 || var_1_93) ? (var_1_32 == ((signed char) (var_1_8 - (min ((max (var_1_5 , var_1_6)) , var_1_7))))) : (var_1_32 == ((signed char) ((var_1_6 - var_1_9) + (abs (var_1_8)))))))) && ((last_1_var_1_100 < var_1_7) ? (var_1_34 == ((unsigned long int) (max (var_1_8 , var_1_21)))) : (var_1_34 == ((unsigned long int) (max (var_1_19 , (min (last_1_var_1_91 , 1u)))))))) && (var_1_35 == ((unsigned short int) (var_1_19 - var_1_8)))) && ((var_1_93 || var_1_93) ? (var_1_36 == ((double) (min (var_1_17 , (var_1_30 - (var_1_29 - var_1_37)))))) : (var_1_36 == ((double) (min (var_1_16 , var_1_13)))))) && (var_1_38 == ((signed char) (max (var_1_7 , (abs (var_1_5))))))) && ((((56795 - var_1_5) ^ var_1_7) <= var_1_9) ? (var_1_39 == ((float) (var_1_17 + (max (var_1_16 , (max (9.8f , var_1_37))))))) : 1)) && (var_1_40 == ((double) (((var_1_41 + var_1_42) + 24.5) - 31.8)))) && (last_1_var_1_75 ? (((last_1_var_1_34 % var_1_4) < last_1_var_1_72) ? (last_1_var_1_79 ? ((((last_1_var_1_72 + var_1_7) + -10) == last_1_var_1_62) ? (var_1_43 == ((unsigned char) ((var_1_44 + var_1_45) - (var_1_46 - var_1_9)))) : (var_1_43 == ((unsigned char) (var_1_9 + (var_1_5 + var_1_8))))) : ((last_1_var_1_84 <= (- (127.7 - 50.8))) ? (((var_1_46 / var_1_8) < (var_1_6 / var_1_44)) ? (var_1_43 == ((unsigned char) var_1_7)) : (var_1_43 == ((unsigned char) var_1_7))) : (var_1_43 == ((unsigned char) var_1_9)))) : 1) : (var_1_43 == ((unsigned char) var_1_47)))) && ((var_1_13 == var_1_16) ? (var_1_48 == ((float) (((9.0804780570722345E18f - var_1_41) - var_1_37) - ((min (var_1_29 , var_1_49)) - 16.4f)))) : (var_1_48 == ((float) (var_1_30 + var_1_41))))) && (((1u + var_1_45) >= last_1_var_1_74) ? ((((max (var_1_51 , var_1_52)) - var_1_5) < (last_1_var_1_85 * last_1_var_1_99)) ? (var_1_50 == ((signed char) (min (var_1_6 , ((var_1_9 + var_1_7) - var_1_53))))) : 1) : 1)) && (last_1_var_1_93 ? (((max (-8 , -200)) > (max ((var_1_8 + last_1_var_1_92) , (last_1_var_1_35 / var_1_44)))) ? (var_1_54 == ((unsigned char) ((last_1_var_1_63 || var_1_55) && ((var_1_56 && var_1_57) && (last_1_var_1_63 || var_1_58))))) : (var_1_54 == ((unsigned char) (last_1_var_1_63 || var_1_57)))) : ((199.75 < ((var_1_42 + var_1_17) - (var_1_30 + var_1_41))) ? (var_1_54 == ((unsigned char) (var_1_59 || (! 1)))) : 1))) && ((var_1_18 <= var_1_8) ? ((var_1_102 > -0.5) ? (var_1_60 == ((unsigned char) (abs (var_1_46)))) : (var_1_60 == ((unsigned char) ((var_1_44 - var_1_7) + (var_1_9 + (var_1_8 - 10)))))) : (var_1_60 == ((unsigned char) (var_1_61 - var_1_7))))) && (((- var_1_43) > ((-5 / var_1_45) / (min (var_1_8 , var_1_4)))) ? (var_1_62 == ((signed short int) (var_1_5 - (var_1_44 + var_1_7)))) : 1)) && ((5 <= var_1_73) ? (var_1_63 == ((unsigned char) (! var_1_56))) : ((! var_1_59) ? (var_1_63 == ((unsigned char) (var_1_54 && (var_1_59 || var_1_64)))) : 1))) && (var_1_65 == ((signed char) (max (((var_1_6 - var_1_5) + var_1_8) , ((var_1_66 - var_1_7) - (abs (var_1_53)))))))) && ((var_1_55 && var_1_93) ? ((var_1_66 <= var_1_92) ? (var_1_58 ? (var_1_64 ? ((((max (var_1_45 , var_1_7)) / var_1_4) <= last_1_var_1_67) ? (var_1_67 == ((unsigned long int) ((min ((var_1_68 - var_1_7) , var_1_43)) + var_1_61))) : (var_1_67 == ((unsigned long int) (abs (max (var_1_34 , var_1_4)))))) : 1) : (var_1_67 == ((unsigned long int) ((max (2909055255u , (min (var_1_69 , 4217072818u)))) - var_1_70)))) : (var_1_67 == ((unsigned long int) (var_1_9 + (min (var_1_43 , var_1_21)))))) : (var_1_75 ? (((max ((var_1_30 - var_1_42) , var_1_90)) <= var_1_13) ? (var_1_67 == ((unsigned long int) var_1_9)) : 1) : 1))) && ((var_1_50 > (abs (var_1_66))) ? ((var_1_54 && (! (var_1_90 < var_1_13))) ? ((! (var_1_9 > var_1_5)) ? (var_1_70 == ((unsigned char) (max (var_1_71 , ((var_1_46 + var_1_45) - var_1_66))))) : (var_1_70 == ((unsigned char) (min (var_1_47 , 128))))) : ((var_1_18 >= var_1_7) ? (var_1_70 == ((unsigned char) (128 - var_1_45))) : 1)) : (var_1_70 == ((unsigned char) (var_1_6 + var_1_66))))) && ((var_1_17 > var_1_15) ? (var_1_72 == ((signed long int) (((var_1_7 + var_1_86) + (var_1_91 + var_1_6)) - var_1_91))) : (var_1_72 == ((signed long int) (abs (var_1_71 + var_1_44)))))) && (var_1_73 == ((unsigned short int) (var_1_19 - var_1_47)))) && (var_1_79 ? (var_1_74 == ((signed long int) ((min ((var_1_8 + var_1_66) , (var_1_96 - var_1_7))) + (var_1_34 - var_1_44)))) : (var_1_74 == ((signed long int) (min ((var_1_35 - var_1_96) , (abs (var_1_61)))))))) && (((min (var_1_29 , var_1_49)) >= var_1_89) ? (var_1_75 == ((unsigned char) (! var_1_59))) : (((var_1_85 < var_1_19) || ((var_1_43 + var_1_18) < var_1_100)) ? (((min (var_1_52 , var_1_100)) <= (var_1_6 | var_1_96)) ? (var_1_75 == ((unsigned char) (! var_1_56))) : ((0.19999999999999996 <= var_1_25) ? (var_1_75 == ((unsigned char) (! var_1_59))) : 1)) : 1))) && ((var_1_25 == (last_1_var_1_76 + (var_1_30 - var_1_17))) ? ((var_1_94 < var_1_69) ? ((var_1_67 <= var_1_22) ? (var_1_76 == ((float) (var_1_16 + var_1_17))) : (var_1_76 == ((float) var_1_29))) : (var_1_76 == ((float) (min (500.4f , ((var_1_42 - 256.4f) + (var_1_41 + var_1_16))))))) : (var_1_76 == ((float) (min (((min (var_1_15 , var_1_42)) + var_1_16) , var_1_29)))))) && (((var_1_89 + -0.75) <= (var_1_49 / var_1_24)) ? ((var_1_19 >= (var_1_78 - var_1_50)) ? (var_1_77 == ((float) (min ((abs (abs (var_1_41))) , var_1_42)))) : (var_1_77 == ((float) (max (var_1_17 , 64.8f))))) : (var_1_77 == ((float) ((max ((max (var_1_49 , var_1_37)) , var_1_42)) - (abs (var_1_17))))))) && ((var_1_40 >= (64.8f * var_1_48)) ? (var_1_54 ? ((-5 >= (min ((var_1_81 | var_1_5) , var_1_72))) ? (var_1_64 ? (var_1_79 == ((unsigned char) (var_1_98 || var_1_55))) : (var_1_79 == ((unsigned char) (var_1_98 || ((var_1_57 && var_1_56) && var_1_55))))) : (((var_1_80 ^ var_1_67) < var_1_32) ? (var_1_79 == ((unsigned char) (! var_1_58))) : 1)) : 1) : 1)) && ((var_1_43 < var_1_92) ? ((var_1_84 <= var_1_77) ? (var_1_80 == ((signed long int) (var_1_45 + var_1_97))) : (var_1_80 == ((signed long int) (var_1_94 - var_1_47)))) : 1)) && (((var_1_7 + var_1_99) <= var_1_44) ? (var_1_81 == ((unsigned char) ((200 - var_1_8) - 100))) : (var_1_81 == ((unsigned char) (var_1_61 - var_1_45))))) && (var_1_82 == ((unsigned char) ((abs (var_1_8)) + (abs (var_1_5)))))) && ((var_1_13 == (- var_1_37)) ? ((((var_1_43 <= 64) || var_1_56) || (var_1_60 > var_1_8)) ? (((100000 - (max (var_1_78 , var_1_47))) == (8 - var_1_4)) ? (var_1_83 == ((float) var_1_13)) : (((var_1_38 / var_1_46) < var_1_70) ? (var_1_83 == ((float) (var_1_14 + (min (var_1_17 , var_1_15))))) : (var_1_83 == ((float) (var_1_30 + var_1_37))))) : 1) : ((var_1_66 != (var_1_7 + (var_1_43 + var_1_19))) ? (var_1_83 == ((float) (max ((max ((var_1_42 - 999999.625f) , var_1_30)) , var_1_15)))) : 1))) && ((var_1_8 < var_1_51) ? (var_1_84 == ((float) ((max ((var_1_41 + var_1_30) , (var_1_37 + var_1_17))) - (var_1_29 - (3.1195649291149901E18f - var_1_42))))) : 1)) && (((5 + 64) < var_1_47) ? ((last_1_var_1_85 != (var_1_91 + var_1_69)) ? (var_1_85 == ((signed long int) (1 + (var_1_6 + var_1_96)))) : 1) : (var_1_85 == ((signed long int) (min (var_1_92 , (var_1_99 - var_1_80))))))) && ((-128 <= var_1_82) ? (var_1_86 == ((signed char) 2)) : (var_1_86 == ((signed char) var_1_8)))) && (var_1_93 ? (var_1_87 == ((unsigned char) var_1_59)) : (var_1_87 == ((unsigned char) var_1_88)))) && (var_1_64 ? (var_1_89 == ((float) var_1_49)) : 1)) && (var_1_90 == ((double) var_1_15))) && (var_1_57 ? (var_1_91 == ((unsigned char) var_1_44)) : 1)) && (var_1_54 ? (var_1_92 == ((signed long int) var_1_34)) : 1)) && (last_1_var_1_75 ? (var_1_93 == ((unsigned char) var_1_56)) : (var_1_93 == ((unsigned char) var_1_58)))) && (var_1_59 ? (var_1_94 == ((signed long int) var_1_100)) : (var_1_94 == ((signed long int) var_1_72)))) && (var_1_54 ? (var_1_96 == ((unsigned long int) var_1_47)) : 1)) && (var_1_97 == ((signed char) var_1_7))) && (var_1_63 ? (var_1_98 == ((unsigned char) var_1_56)) : 1)) && (var_1_99 == ((signed char) var_1_6))) && (var_1_58 ? ((last_1_var_1_70 > var_1_61) ? (var_1_100 == ((unsigned char) ((abs (abs (var_1_46))) + var_1_8))) : (var_1_100 == ((unsigned char) var_1_61))) : (var_1_100 == ((unsigned char) var_1_44)))) && (var_1_102 == ((double) var_1_16))
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

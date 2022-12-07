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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch83Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -256;
signed short int var_1_3 = 24009;
signed short int var_1_6 = 19467;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
float var_1_14 = 25.75;
float var_1_15 = 9.5;
float var_1_16 = 256.8;
float var_1_17 = 9.6;
signed long int var_1_18 = -4;
signed short int var_1_19 = 1;
float var_1_20 = 8.4;
float var_1_21 = 100.4;
signed char var_1_22 = 100;
float var_1_23 = 0.0;
unsigned short int var_1_24 = 2;
signed short int var_1_25 = -10;
signed short int var_1_26 = 31421;
unsigned short int var_1_27 = 16;
unsigned short int var_1_28 = 19821;
unsigned short int var_1_29 = 10000;
unsigned short int var_1_30 = 56298;
unsigned short int var_1_31 = 2;
unsigned short int var_1_32 = 10000;
signed long int var_1_33 = 4;
double var_1_34 = 16.2;
double var_1_35 = 24.8;
signed long int var_1_36 = 8;
signed long int var_1_37 = 1000000000;
unsigned char var_1_38 = 4;
signed short int var_1_40 = 8;
unsigned short int var_1_41 = 8;
unsigned short int var_1_42 = 35832;
signed short int var_1_43 = 1;
double var_1_44 = 50.8;
unsigned char var_1_45 = 128;
unsigned char var_1_47 = 64;
unsigned char var_1_48 = 100;
signed long int var_1_49 = 200;
float var_1_50 = 499.275;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned long int var_1_54 = 1000000000;
unsigned long int var_1_55 = 3845895927;
unsigned long int var_1_56 = 128;
unsigned long int var_1_57 = 1768621205;
float var_1_58 = 2.5;
float var_1_59 = 0.0;
signed long int var_1_60 = 100;
double var_1_61 = -0.25;
double var_1_62 = 100000.8;
double var_1_63 = 1.2;
double var_1_64 = 999999999999999.2;
signed long int var_1_65 = -10;
signed long int var_1_66 = 8;
unsigned short int var_1_67 = 4;
unsigned short int var_1_68 = 50051;
unsigned short int var_1_69 = 58124;
unsigned long int var_1_72 = 32;
signed long int var_1_73 = -8;
unsigned char var_1_75 = 1;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 1;
unsigned char var_1_79 = 0;
signed long int var_1_80 = -10;
signed long int var_1_81 = -8;
unsigned long int var_1_82 = 2;
unsigned short int var_1_83 = 256;
double var_1_84 = 31.5;
unsigned short int var_1_85 = 25;
signed long int var_1_86 = 256;
double var_1_87 = 7.5;
unsigned long int var_1_88 = 256;
unsigned char var_1_89 = 0;
signed char var_1_90 = -25;
float var_1_91 = 1000000000000.4;
float var_1_92 = 127.5;
signed long int var_1_93 = 50;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 64;
signed long int last_1_var_1_18 = -4;
signed short int last_1_var_1_19 = 1;
float last_1_var_1_21 = 100.4;
unsigned short int last_1_var_1_27 = 16;
signed long int last_1_var_1_33 = 4;
double last_1_var_1_34 = 16.2;
double last_1_var_1_35 = 24.8;
signed long int last_1_var_1_36 = 8;
unsigned char last_1_var_1_38 = 4;
signed short int last_1_var_1_40 = 8;
unsigned short int last_1_var_1_41 = 8;
signed short int last_1_var_1_43 = 1;
unsigned char last_1_var_1_45 = 128;
float last_1_var_1_50 = 499.275;
unsigned long int last_1_var_1_54 = 1000000000;
unsigned long int last_1_var_1_56 = 128;
signed long int last_1_var_1_60 = 100;
signed long int last_1_var_1_65 = -10;
unsigned short int last_1_var_1_67 = 4;
signed long int last_1_var_1_73 = -8;
unsigned char last_1_var_1_75 = 1;
unsigned char last_1_var_1_77 = 1;
signed long int last_1_var_1_80 = -10;
unsigned short int last_1_var_1_83 = 256;
unsigned long int last_1_var_1_88 = 256;
signed long int last_1_var_1_93 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch83Amount500
	if (var_1_11 >= (128 - var_1_10)) {
		if (var_1_8 < (var_1_9 * last_1_var_1_54)) {
			if ((last_1_var_1_35 / (min (var_1_20 , 1.5f))) < var_1_17) {
				var_1_19 = (abs (var_1_6));
			} else {
				var_1_19 = (200 + var_1_11);
			}
		} else {
			if (-128 >= (var_1_11 << var_1_3)) {
				if (last_1_var_1_43 == last_1_var_1_54) {
					var_1_19 = (min (last_1_var_1_38 , (last_1_var_1_27 + var_1_9)));
				} else {
					var_1_19 = ((var_1_6 - (10000 - last_1_var_1_27)) - var_1_9);
				}
			} else {
				var_1_19 = (max (((min (var_1_9 , last_1_var_1_27)) + last_1_var_1_38) , (max (var_1_10 , last_1_var_1_38))));
			}
		}
	}


	// From: Req14Batch83Amount500
	if (var_1_6 < var_1_22) {
		var_1_36 = ((last_1_var_1_38 - (var_1_37 - var_1_11)) + last_1_var_1_19);
	}


	// From: Req29Batch83Amount500
	if (! last_1_var_1_75) {
		var_1_65 = (var_1_42 - var_1_3);
	} else {
		if (last_1_var_1_41 > var_1_11) {
			var_1_65 = var_1_3;
		} else {
			var_1_65 = (min ((min ((min (var_1_37 , last_1_var_1_40)) , last_1_var_1_45)) , -10000000));
		}
	}


	// From: Req12Batch83Amount500
	if (var_1_26 >= var_1_65) {
		var_1_34 = var_1_23;
	} else {
		var_1_34 = (min (var_1_14 , var_1_23));
	}


	// From: Req25Batch83Amount500
	if (var_1_22 >= ((var_1_48 - var_1_9) - var_1_47)) {
		if (var_1_20 <= last_1_var_1_21) {
			var_1_56 = (max ((var_1_55 - (var_1_57 - 5u)) , var_1_28));
		} else {
			var_1_56 = last_1_var_1_18;
		}
	} else {
		var_1_56 = (max (var_1_6 , (var_1_55 - last_1_var_1_38)));
	}


	// From: Req11Batch83Amount500
	signed long int stepLocal_2 = min (last_1_var_1_45 , last_1_var_1_60);
	if (! (! last_1_var_1_77)) {
		var_1_33 = ((abs (last_1_var_1_60 + var_1_11)) - last_1_var_1_93);
	} else {
		if (var_1_9 == stepLocal_2) {
			var_1_33 = (max (last_1_var_1_60 , (var_1_8 - (max (last_1_var_1_83 , var_1_6)))));
		}
	}


	// From: Req24Batch83Amount500
	if (last_1_var_1_50 >= (abs (var_1_20))) {
		var_1_54 = (last_1_var_1_80 + (var_1_30 + last_1_var_1_56));
	} else {
		if (var_1_53) {
			var_1_54 = (last_1_var_1_38 + ((min (last_1_var_1_45 , var_1_11)) + (last_1_var_1_80 + last_1_var_1_33)));
		} else {
			var_1_54 = (max ((min ((var_1_55 - var_1_28) , var_1_30)) , var_1_48));
		}
	}


	// From: Req42Batch83Amount500
	var_1_86 = var_1_54;


	// From: Req23Batch83Amount500
	if ((min (last_1_var_1_34 , 9999999.75f)) > last_1_var_1_35) {
		if (last_1_var_1_93 > last_1_var_1_88) {
			var_1_51 = (! var_1_52);
		} else {
			var_1_51 = ((4 < (max (0 , var_1_30))) && (var_1_52 || var_1_53));
		}
	}


	// From: Req45Batch83Amount500
	if (var_1_51) {
		var_1_89 = var_1_76;
	} else {
		var_1_89 = var_1_76;
	}


	// From: Req17Batch83Amount500
	if (! var_1_89) {
		var_1_41 = ((max (var_1_30 , var_1_42)) - (var_1_28 - 1));
	}


	// From: Req18Batch83Amount500
	if (256 <= (last_1_var_1_38 * (last_1_var_1_88 + var_1_42))) {
		if (var_1_42 <= (256 % (var_1_30 - var_1_29))) {
			var_1_43 = (max (var_1_32 , 1));
		} else {
			var_1_43 = (min (var_1_32 , -2));
		}
	} else {
		if (! (last_1_var_1_88 < last_1_var_1_93)) {
			var_1_43 = (max ((32 - (var_1_26 - last_1_var_1_7)) , (last_1_var_1_67 - var_1_10)));
		} else {
			var_1_43 = last_1_var_1_38;
		}
	}


	// From: Req15Batch83Amount500
	signed long int stepLocal_3 = last_1_var_1_73;
	if (stepLocal_3 > var_1_30) {
		var_1_38 = (var_1_8 - (max (var_1_9 , var_1_11)));
	}


	// From: Req20Batch83Amount500
	if ((last_1_var_1_36 / (var_1_30 - var_1_6)) == var_1_9) {
		if (last_1_var_1_65 > var_1_30) {
			var_1_45 = ((var_1_22 + (min (var_1_47 , var_1_48))) - var_1_11);
		} else {
			if (var_1_42 == var_1_48) {
				var_1_45 = 32;
			} else {
				var_1_45 = var_1_48;
			}
		}
	}


	// From: Req7Batch83Amount500
	signed long int stepLocal_0 = - var_1_22;
	if (stepLocal_0 < var_1_3) {
		var_1_24 = (var_1_8 + var_1_10);
	} else {
		var_1_24 = ((max (var_1_45 , var_1_6)) + var_1_3);
	}


	// From: Req2Batch83Amount500
	var_1_7 = ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)));


	// From: Req19Batch83Amount500
	var_1_44 = (var_1_17 - var_1_16);


	// From: Req27Batch83Amount500
	var_1_60 = (32 - var_1_47);


	// From: Req28Batch83Amount500
	if (var_1_16 <= var_1_59) {
		var_1_61 = ((max (var_1_14 , var_1_17)) + (var_1_62 + var_1_63));
	} else {
		var_1_61 = ((var_1_64 + 10.2) + var_1_16);
	}


	// From: Req30Batch83Amount500
	if (((var_1_61 * var_1_59) / (abs (var_1_23))) >= var_1_62) {
		var_1_66 = (abs (var_1_38));
	} else {
		var_1_66 = var_1_10;
	}


	// From: Req38Batch83Amount500
	var_1_82 = var_1_26;


	// From: Req39Batch83Amount500
	if (var_1_79) {
		var_1_83 = 500;
	} else {
		var_1_83 = var_1_11;
	}


	// From: Req40Batch83Amount500
	if (var_1_79) {
		var_1_84 = 16.4;
	} else {
		var_1_84 = var_1_59;
	}


	// From: Req41Batch83Amount500
	var_1_85 = var_1_69;


	// From: Req43Batch83Amount500
	var_1_87 = var_1_17;


	// From: Req46Batch83Amount500
	if (var_1_79) {
		var_1_90 = var_1_11;
	} else {
		var_1_90 = var_1_9;
	}


	// From: Req48Batch83Amount500
	var_1_93 = var_1_6;


	// From: Req9Batch83Amount500
	if ((abs (var_1_45)) >= ((var_1_43 >> var_1_82) * last_1_var_1_27)) {
		if (var_1_51) {
			var_1_27 = (32 + var_1_45);
		} else {
			var_1_27 = (abs (var_1_9));
		}
	} else {
		if (! (var_1_7 == var_1_9)) {
			var_1_27 = (var_1_9 + (max (var_1_26 , var_1_8)));
		} else {
			if (var_1_34 > (- 5.2f)) {
				var_1_27 = (((max (var_1_26 , var_1_28)) - (var_1_29 - var_1_22)) + var_1_6);
			} else {
				var_1_27 = ((abs (var_1_30)) - var_1_8);
			}
		}
	}


	// From: Req16Batch83Amount500
	signed long int stepLocal_4 = (min (var_1_30 , var_1_45)) - var_1_9;
	if ((var_1_33 + (var_1_43 + var_1_86)) >= stepLocal_4) {
		var_1_40 = ((max ((var_1_22 + var_1_8) , (max (var_1_24 , var_1_29)))) + var_1_9);
	}


	// From: Req36Batch83Amount500
	unsigned char stepLocal_12 = var_1_9;
	unsigned short int stepLocal_11 = var_1_30;
	if (var_1_52) {
		if (stepLocal_12 == 100) {
			if (stepLocal_11 >= 256) {
				var_1_80 = ((min (var_1_82 , (5 - var_1_32))) + var_1_86);
			} else {
				var_1_80 = var_1_8;
			}
		} else {
			var_1_80 = last_1_var_1_80;
		}
	}


	// From: Req37Batch83Amount500
	if (var_1_51) {
		var_1_81 = var_1_54;
	} else {
		var_1_81 = var_1_29;
	}


	// From: Req10Batch83Amount500
	unsigned char stepLocal_1 = var_1_10;
	if ((var_1_14 * (24.05 + var_1_44)) < var_1_23) {
		if (var_1_89) {
			var_1_31 = (min (var_1_22 , var_1_8));
		} else {
			if (stepLocal_1 <= var_1_3) {
				var_1_31 = (var_1_45 + var_1_29);
			} else {
				var_1_31 = (var_1_7 + ((var_1_32 - var_1_9) + var_1_22));
			}
		}
	}


	// From: Req1Batch83Amount500
	if (var_1_89) {
		var_1_1 = ((var_1_3 - var_1_7) - var_1_38);
	} else {
		var_1_1 = ((max (var_1_3 , (var_1_6 - var_1_7))) - var_1_38);
	}


	// From: Req4Batch83Amount500
	if ((var_1_3 / var_1_8) < var_1_45) {
		var_1_18 = (var_1_38 + (var_1_10 - var_1_45));
	} else {
		if (var_1_8 <= var_1_9) {
			var_1_18 = 128;
		} else {
			var_1_18 = var_1_8;
		}
	}


	// From: Req8Batch83Amount500
	if ((min ((var_1_9 >> var_1_83) , var_1_11)) > var_1_45) {
		if ((var_1_17 - var_1_16) < (var_1_20 * var_1_15)) {
			var_1_25 = (min ((var_1_10 - var_1_3) , (var_1_8 - (var_1_26 - var_1_22))));
		} else {
			var_1_25 = (min ((var_1_6 - var_1_3) , (max ((var_1_11 + var_1_45) , var_1_9))));
		}
	} else {
		if (var_1_51) {
			if (var_1_3 < var_1_83) {
				if (var_1_10 > var_1_81) {
					var_1_25 = (max (var_1_45 , var_1_8));
				} else {
					var_1_25 = (max (var_1_9 , var_1_8));
				}
			} else {
				var_1_25 = (min ((var_1_9 + var_1_8) , (var_1_6 - (var_1_22 + var_1_45))));
			}
		}
	}


	// From: Req21Batch83Amount500
	if (var_1_89) {
		var_1_49 = (abs (var_1_26));
	} else {
		var_1_49 = (var_1_48 - var_1_31);
	}


	// From: Req47Batch83Amount500
	if ((- 16u) <= var_1_27) {
		var_1_91 = ((var_1_17 + (max (var_1_16 , var_1_92))) - var_1_23);
	} else {
		var_1_91 = (min (var_1_14 , var_1_59));
	}


	// From: Req26Batch83Amount500
	if ((var_1_6 != (var_1_19 - 100)) && ((var_1_55 - var_1_28) < var_1_27)) {
		var_1_58 = (var_1_23 - (var_1_59 - var_1_17));
	}


	// From: Req33Batch83Amount500
	if (! (var_1_3 == -2)) {
		var_1_73 = (min (var_1_28 , (max ((min (var_1_69 , var_1_11)) , var_1_36))));
	} else {
		if (var_1_53) {
			if ((~ var_1_80) <= var_1_33) {
				var_1_73 = (var_1_56 - var_1_48);
			} else {
				if (var_1_55 <= var_1_42) {
					var_1_73 = (max ((var_1_22 - var_1_29) , var_1_43));
				} else {
					var_1_73 = (max (var_1_69 , var_1_36));
				}
			}
		} else {
			var_1_73 = var_1_8;
		}
	}


	// From: Req32Batch83Amount500
	unsigned short int stepLocal_6 = var_1_83;
	if (stepLocal_6 <= (var_1_32 - var_1_8)) {
		var_1_72 = (max ((var_1_55 - (max (var_1_8 , var_1_56))) , var_1_31));
	}


	// From: Req44Batch83Amount500
	var_1_88 = var_1_18;


	// From: Req22Batch83Amount500
	unsigned short int stepLocal_5 = var_1_31;
	if ((- (var_1_58 * var_1_17)) == (min (var_1_20 , var_1_44))) {
		if (var_1_17 >= var_1_14) {
			var_1_50 = (min (var_1_23 , var_1_16));
		} else {
			if (stepLocal_5 > (var_1_36 + var_1_7)) {
				var_1_50 = (var_1_17 - (abs (max (var_1_15 , var_1_16))));
			}
		}
	}


	// From: Req34Batch83Amount500
	signed long int stepLocal_8 = var_1_42 * var_1_29;
	unsigned long int stepLocal_7 = var_1_88;
	if (stepLocal_7 != (var_1_73 / (abs (var_1_6)))) {
		if (((- var_1_72) / var_1_48) >= stepLocal_8) {
			var_1_75 = 0;
		} else {
			var_1_75 = ((var_1_1 > var_1_86) || var_1_76);
		}
	} else {
		var_1_75 = var_1_76;
	}


	// From: Req35Batch83Amount500
	signed long int stepLocal_10 = var_1_65;
	signed long int stepLocal_9 = ~ (var_1_18 * var_1_65);
	if ((abs (var_1_47 + var_1_90)) < stepLocal_9) {
		if (stepLocal_10 < var_1_80) {
			var_1_77 = (((var_1_82 <= var_1_54) || var_1_76) && (var_1_75 || (var_1_53 || var_1_79)));
		} else {
			var_1_77 = (! (var_1_76 && var_1_79));
		}
	}


	// From: Req31Batch83Amount500
	if (var_1_88 > (min ((var_1_32 * var_1_48) , var_1_86))) {
		var_1_67 = (var_1_32 + (max ((max (var_1_8 , var_1_47)) , var_1_29)));
	} else {
		if (! (! (var_1_65 < var_1_8))) {
			if (var_1_6 != var_1_86) {
				var_1_67 = (((max (var_1_68 , var_1_69)) - var_1_31) - (var_1_28 - (var_1_41 + var_1_22)));
			}
		} else {
			if (var_1_58 <= var_1_63) {
				if (((var_1_41 ^ 2) / var_1_48) >= var_1_86) {
					if (var_1_15 < (- var_1_61)) {
						var_1_67 = (((max (var_1_31 , var_1_32)) + (var_1_29 - var_1_11)) + var_1_45);
					} else {
						var_1_67 = (var_1_31 + var_1_28);
					}
				} else {
					if (var_1_72 > (var_1_29 ^ var_1_55)) {
						var_1_67 = (min ((var_1_45 + var_1_47) , var_1_68));
					} else {
						var_1_67 = ((min (var_1_32 , var_1_41)) + (min (var_1_45 , var_1_8)));
					}
				}
			} else {
				var_1_67 = var_1_68;
			}
		}
	}


	// From: Req3Batch83Amount500
	if (! var_1_75) {
		var_1_12 = ((var_1_14 + (abs (49.5f))) + var_1_15);
	} else {
		var_1_12 = (((max (10.6f , var_1_16)) - var_1_17) + var_1_15);
	}


	// From: Req6Batch83Amount500
	if (var_1_77) {
		if (((max (var_1_9 , var_1_10)) - (var_1_22 - 10)) >= (min (var_1_6 , var_1_81))) {
			var_1_21 = var_1_15;
		}
	} else {
		var_1_21 = ((min (var_1_17 , 4.25f)) - (var_1_23 - var_1_16));
	}


	// From: Req13Batch83Amount500
	if (((var_1_14 + var_1_50) * (var_1_16 - var_1_23)) <= var_1_21) {
		if (var_1_51) {
			var_1_35 = var_1_16;
		} else {
			var_1_35 = var_1_17;
		}
	} else {
		var_1_35 = var_1_16;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 16382);
	assume_abort_if_not(var_1_3 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 16382);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 190);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -230584.3009213691390e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	assume_abort_if_not(var_1_20 != 0.0F);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 63);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 4611686.018427382800e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 16383);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 8191);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 32767);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 8192);
	assume_abort_if_not(var_1_32 <= 16384);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 536870911);
	assume_abort_if_not(var_1_37 <= 1073741823);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 32767);
	assume_abort_if_not(var_1_42 <= 65534);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 64);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 64);
	assume_abort_if_not(var_1_48 <= 127);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 0);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 2147483647);
	assume_abort_if_not(var_1_55 <= 4294967294);
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 1073741823);
	assume_abort_if_not(var_1_57 <= 2147483647);
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 4611686.018427382800e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= -230584.3009213691390e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691390e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -230584.3009213691390e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691390e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -230584.3009213691390e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691390e+12F && var_1_64 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 49150);
	assume_abort_if_not(var_1_68 <= 65534);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 49150);
	assume_abort_if_not(var_1_69 <= 65534);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 1);
	assume_abort_if_not(var_1_76 <= 1);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 1);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_92 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_92 >= 0.0F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 4611686.018427382800e+12F && var_1_92 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_93 = var_1_93;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((var_1_89 ? (var_1_1 == ((signed short int) ((var_1_3 - var_1_7) - var_1_38))) : (var_1_1 == ((signed short int) ((max (var_1_3 , (var_1_6 - var_1_7))) - var_1_38)))) && (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)))))) && ((! var_1_75) ? (var_1_12 == ((float) ((var_1_14 + (abs (49.5f))) + var_1_15))) : (var_1_12 == ((float) (((max (10.6f , var_1_16)) - var_1_17) + var_1_15))))) && (((var_1_3 / var_1_8) < var_1_45) ? (var_1_18 == ((signed long int) (var_1_38 + (var_1_10 - var_1_45)))) : ((var_1_8 <= var_1_9) ? (var_1_18 == ((signed long int) 128)) : (var_1_18 == ((signed long int) var_1_8))))) && ((var_1_11 >= (128 - var_1_10)) ? ((var_1_8 < (var_1_9 * last_1_var_1_54)) ? (((last_1_var_1_35 / (min (var_1_20 , 1.5f))) < var_1_17) ? (var_1_19 == ((signed short int) (abs (var_1_6)))) : (var_1_19 == ((signed short int) (200 + var_1_11)))) : ((-128 >= (var_1_11 << var_1_3)) ? ((last_1_var_1_43 == last_1_var_1_54) ? (var_1_19 == ((signed short int) (min (last_1_var_1_38 , (last_1_var_1_27 + var_1_9))))) : (var_1_19 == ((signed short int) ((var_1_6 - (10000 - last_1_var_1_27)) - var_1_9)))) : (var_1_19 == ((signed short int) (max (((min (var_1_9 , last_1_var_1_27)) + last_1_var_1_38) , (max (var_1_10 , last_1_var_1_38)))))))) : 1)) && (var_1_77 ? ((((max (var_1_9 , var_1_10)) - (var_1_22 - 10)) >= (min (var_1_6 , var_1_81))) ? (var_1_21 == ((float) var_1_15)) : 1) : (var_1_21 == ((float) ((min (var_1_17 , 4.25f)) - (var_1_23 - var_1_16)))))) && (((- var_1_22) < var_1_3) ? (var_1_24 == ((unsigned short int) (var_1_8 + var_1_10))) : (var_1_24 == ((unsigned short int) ((max (var_1_45 , var_1_6)) + var_1_3))))) && (((min ((var_1_9 >> var_1_83) , var_1_11)) > var_1_45) ? (((var_1_17 - var_1_16) < (var_1_20 * var_1_15)) ? (var_1_25 == ((signed short int) (min ((var_1_10 - var_1_3) , (var_1_8 - (var_1_26 - var_1_22)))))) : (var_1_25 == ((signed short int) (min ((var_1_6 - var_1_3) , (max ((var_1_11 + var_1_45) , var_1_9))))))) : (var_1_51 ? ((var_1_3 < var_1_83) ? ((var_1_10 > var_1_81) ? (var_1_25 == ((signed short int) (max (var_1_45 , var_1_8)))) : (var_1_25 == ((signed short int) (max (var_1_9 , var_1_8))))) : (var_1_25 == ((signed short int) (min ((var_1_9 + var_1_8) , (var_1_6 - (var_1_22 + var_1_45))))))) : 1))) && (((abs (var_1_45)) >= ((var_1_43 >> var_1_82) * last_1_var_1_27)) ? (var_1_51 ? (var_1_27 == ((unsigned short int) (32 + var_1_45))) : (var_1_27 == ((unsigned short int) (abs (var_1_9))))) : ((! (var_1_7 == var_1_9)) ? (var_1_27 == ((unsigned short int) (var_1_9 + (max (var_1_26 , var_1_8))))) : ((var_1_34 > (- 5.2f)) ? (var_1_27 == ((unsigned short int) (((max (var_1_26 , var_1_28)) - (var_1_29 - var_1_22)) + var_1_6))) : (var_1_27 == ((unsigned short int) ((abs (var_1_30)) - var_1_8))))))) && (((var_1_14 * (24.05 + var_1_44)) < var_1_23) ? (var_1_89 ? (var_1_31 == ((unsigned short int) (min (var_1_22 , var_1_8)))) : ((var_1_10 <= var_1_3) ? (var_1_31 == ((unsigned short int) (var_1_45 + var_1_29))) : (var_1_31 == ((unsigned short int) (var_1_7 + ((var_1_32 - var_1_9) + var_1_22)))))) : 1)) && ((! (! last_1_var_1_77)) ? (var_1_33 == ((signed long int) ((abs (last_1_var_1_60 + var_1_11)) - last_1_var_1_93))) : ((var_1_9 == (min (last_1_var_1_45 , last_1_var_1_60))) ? (var_1_33 == ((signed long int) (max (last_1_var_1_60 , (var_1_8 - (max (last_1_var_1_83 , var_1_6))))))) : 1))) && ((var_1_26 >= var_1_65) ? (var_1_34 == ((double) var_1_23)) : (var_1_34 == ((double) (min (var_1_14 , var_1_23)))))) && ((((var_1_14 + var_1_50) * (var_1_16 - var_1_23)) <= var_1_21) ? (var_1_51 ? (var_1_35 == ((double) var_1_16)) : (var_1_35 == ((double) var_1_17))) : (var_1_35 == ((double) var_1_16)))) && ((var_1_6 < var_1_22) ? (var_1_36 == ((signed long int) ((last_1_var_1_38 - (var_1_37 - var_1_11)) + last_1_var_1_19))) : 1)) && ((last_1_var_1_73 > var_1_30) ? (var_1_38 == ((unsigned char) (var_1_8 - (max (var_1_9 , var_1_11))))) : 1)) && (((var_1_33 + (var_1_43 + var_1_86)) >= ((min (var_1_30 , var_1_45)) - var_1_9)) ? (var_1_40 == ((signed short int) ((max ((var_1_22 + var_1_8) , (max (var_1_24 , var_1_29)))) + var_1_9))) : 1)) && ((! var_1_89) ? (var_1_41 == ((unsigned short int) ((max (var_1_30 , var_1_42)) - (var_1_28 - 1)))) : 1)) && ((256 <= (last_1_var_1_38 * (last_1_var_1_88 + var_1_42))) ? ((var_1_42 <= (256 % (var_1_30 - var_1_29))) ? (var_1_43 == ((signed short int) (max (var_1_32 , 1)))) : (var_1_43 == ((signed short int) (min (var_1_32 , -2))))) : ((! (last_1_var_1_88 < last_1_var_1_93)) ? (var_1_43 == ((signed short int) (max ((32 - (var_1_26 - last_1_var_1_7)) , (last_1_var_1_67 - var_1_10))))) : (var_1_43 == ((signed short int) last_1_var_1_38))))) && (var_1_44 == ((double) (var_1_17 - var_1_16)))) && (((last_1_var_1_36 / (var_1_30 - var_1_6)) == var_1_9) ? ((last_1_var_1_65 > var_1_30) ? (var_1_45 == ((unsigned char) ((var_1_22 + (min (var_1_47 , var_1_48))) - var_1_11))) : ((var_1_42 == var_1_48) ? (var_1_45 == ((unsigned char) 32)) : (var_1_45 == ((unsigned char) var_1_48)))) : 1)) && (var_1_89 ? (var_1_49 == ((signed long int) (abs (var_1_26)))) : (var_1_49 == ((signed long int) (var_1_48 - var_1_31))))) && (((- (var_1_58 * var_1_17)) == (min (var_1_20 , var_1_44))) ? ((var_1_17 >= var_1_14) ? (var_1_50 == ((float) (min (var_1_23 , var_1_16)))) : ((var_1_31 > (var_1_36 + var_1_7)) ? (var_1_50 == ((float) (var_1_17 - (abs (max (var_1_15 , var_1_16)))))) : 1)) : 1)) && (((min (last_1_var_1_34 , 9999999.75f)) > last_1_var_1_35) ? ((last_1_var_1_93 > last_1_var_1_88) ? (var_1_51 == ((unsigned char) (! var_1_52))) : (var_1_51 == ((unsigned char) ((4 < (max (0 , var_1_30))) && (var_1_52 || var_1_53))))) : 1)) && ((last_1_var_1_50 >= (abs (var_1_20))) ? (var_1_54 == ((unsigned long int) (last_1_var_1_80 + (var_1_30 + last_1_var_1_56)))) : (var_1_53 ? (var_1_54 == ((unsigned long int) (last_1_var_1_38 + ((min (last_1_var_1_45 , var_1_11)) + (last_1_var_1_80 + last_1_var_1_33))))) : (var_1_54 == ((unsigned long int) (max ((min ((var_1_55 - var_1_28) , var_1_30)) , var_1_48))))))) && ((var_1_22 >= ((var_1_48 - var_1_9) - var_1_47)) ? ((var_1_20 <= last_1_var_1_21) ? (var_1_56 == ((unsigned long int) (max ((var_1_55 - (var_1_57 - 5u)) , var_1_28)))) : (var_1_56 == ((unsigned long int) last_1_var_1_18))) : (var_1_56 == ((unsigned long int) (max (var_1_6 , (var_1_55 - last_1_var_1_38))))))) && (((var_1_6 != (var_1_19 - 100)) && ((var_1_55 - var_1_28) < var_1_27)) ? (var_1_58 == ((float) (var_1_23 - (var_1_59 - var_1_17)))) : 1)) && (var_1_60 == ((signed long int) (32 - var_1_47)))) && ((var_1_16 <= var_1_59) ? (var_1_61 == ((double) ((max (var_1_14 , var_1_17)) + (var_1_62 + var_1_63)))) : (var_1_61 == ((double) ((var_1_64 + 10.2) + var_1_16))))) && ((! last_1_var_1_75) ? (var_1_65 == ((signed long int) (var_1_42 - var_1_3))) : ((last_1_var_1_41 > var_1_11) ? (var_1_65 == ((signed long int) var_1_3)) : (var_1_65 == ((signed long int) (min ((min ((min (var_1_37 , last_1_var_1_40)) , last_1_var_1_45)) , -10000000))))))) && ((((var_1_61 * var_1_59) / (abs (var_1_23))) >= var_1_62) ? (var_1_66 == ((signed long int) (abs (var_1_38)))) : (var_1_66 == ((signed long int) var_1_10)))) && ((var_1_88 > (min ((var_1_32 * var_1_48) , var_1_86))) ? (var_1_67 == ((unsigned short int) (var_1_32 + (max ((max (var_1_8 , var_1_47)) , var_1_29))))) : ((! (! (var_1_65 < var_1_8))) ? ((var_1_6 != var_1_86) ? (var_1_67 == ((unsigned short int) (((max (var_1_68 , var_1_69)) - var_1_31) - (var_1_28 - (var_1_41 + var_1_22))))) : 1) : ((var_1_58 <= var_1_63) ? ((((var_1_41 ^ 2) / var_1_48) >= var_1_86) ? ((var_1_15 < (- var_1_61)) ? (var_1_67 == ((unsigned short int) (((max (var_1_31 , var_1_32)) + (var_1_29 - var_1_11)) + var_1_45))) : (var_1_67 == ((unsigned short int) (var_1_31 + var_1_28)))) : ((var_1_72 > (var_1_29 ^ var_1_55)) ? (var_1_67 == ((unsigned short int) (min ((var_1_45 + var_1_47) , var_1_68)))) : (var_1_67 == ((unsigned short int) ((min (var_1_32 , var_1_41)) + (min (var_1_45 , var_1_8))))))) : (var_1_67 == ((unsigned short int) var_1_68)))))) && ((var_1_83 <= (var_1_32 - var_1_8)) ? (var_1_72 == ((unsigned long int) (max ((var_1_55 - (max (var_1_8 , var_1_56))) , var_1_31)))) : 1)) && ((! (var_1_3 == -2)) ? (var_1_73 == ((signed long int) (min (var_1_28 , (max ((min (var_1_69 , var_1_11)) , var_1_36)))))) : (var_1_53 ? (((~ var_1_80) <= var_1_33) ? (var_1_73 == ((signed long int) (var_1_56 - var_1_48))) : ((var_1_55 <= var_1_42) ? (var_1_73 == ((signed long int) (max ((var_1_22 - var_1_29) , var_1_43)))) : (var_1_73 == ((signed long int) (max (var_1_69 , var_1_36)))))) : (var_1_73 == ((signed long int) var_1_8))))) && ((var_1_88 != (var_1_73 / (abs (var_1_6)))) ? ((((- var_1_72) / var_1_48) >= (var_1_42 * var_1_29)) ? (var_1_75 == ((unsigned char) 0)) : (var_1_75 == ((unsigned char) ((var_1_1 > var_1_86) || var_1_76)))) : (var_1_75 == ((unsigned char) var_1_76)))) && (((abs (var_1_47 + var_1_90)) < (~ (var_1_18 * var_1_65))) ? ((var_1_65 < var_1_80) ? (var_1_77 == ((unsigned char) (((var_1_82 <= var_1_54) || var_1_76) && (var_1_75 || (var_1_53 || var_1_79))))) : (var_1_77 == ((unsigned char) (! (var_1_76 && var_1_79))))) : 1)) && (var_1_52 ? ((var_1_9 == 100) ? ((var_1_30 >= 256) ? (var_1_80 == ((signed long int) ((min (var_1_82 , (5 - var_1_32))) + var_1_86))) : (var_1_80 == ((signed long int) var_1_8))) : (var_1_80 == ((signed long int) last_1_var_1_80))) : 1)) && (var_1_51 ? (var_1_81 == ((signed long int) var_1_54)) : (var_1_81 == ((signed long int) var_1_29)))) && (var_1_82 == ((unsigned long int) var_1_26))) && (var_1_79 ? (var_1_83 == ((unsigned short int) 500)) : (var_1_83 == ((unsigned short int) var_1_11)))) && (var_1_79 ? (var_1_84 == ((double) 16.4)) : (var_1_84 == ((double) var_1_59)))) && (var_1_85 == ((unsigned short int) var_1_69))) && (var_1_86 == ((signed long int) var_1_54))) && (var_1_87 == ((double) var_1_17))) && (var_1_88 == ((unsigned long int) var_1_18))) && (var_1_51 ? (var_1_89 == ((unsigned char) var_1_76)) : (var_1_89 == ((unsigned char) var_1_76)))) && (var_1_79 ? (var_1_90 == ((signed char) var_1_11)) : (var_1_90 == ((signed char) var_1_9)))) && (((- 16u) <= var_1_27) ? (var_1_91 == ((float) ((var_1_17 + (max (var_1_16 , var_1_92))) - var_1_23))) : (var_1_91 == ((float) (min (var_1_14 , var_1_59)))))) && (var_1_93 == ((signed long int) var_1_6))
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

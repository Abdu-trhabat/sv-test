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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 10;
unsigned char var_1_2 = 1;
double var_1_3 = 0.0;
double var_1_4 = 128.2;
double var_1_5 = 50.1;
double var_1_6 = 64.5;
unsigned short int var_1_7 = 1;
unsigned char var_1_8 = 5;
double var_1_9 = 15.35;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 2;
signed long int var_1_12 = 32;
signed long int var_1_13 = 256;
signed char var_1_14 = 1;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 0;
signed char var_1_17 = -64;
unsigned short int var_1_18 = 64;
unsigned short int var_1_20 = 8;
unsigned short int var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
float var_1_24 = 5.4;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
float var_1_27 = 10000000.6;
unsigned char var_1_28 = 0;
double var_1_29 = 50.2;
double var_1_30 = 1000000000000000.5;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
signed char var_1_33 = -8;
signed char var_1_34 = -4;
signed long int var_1_35 = -4;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned long int var_1_39 = 1000;
float var_1_40 = 2.75;
float var_1_41 = 4.5;
unsigned long int var_1_42 = 3518907984;
unsigned char var_1_43 = 1;
float var_1_44 = 100000.6;
float var_1_45 = 63.5;
float var_1_46 = 1.15;
unsigned long int var_1_47 = 10;
float var_1_48 = 128.8;
float var_1_49 = 255.325;
unsigned char var_1_50 = 64;
unsigned char var_1_51 = 10;
unsigned char var_1_52 = 64;
unsigned short int var_1_53 = 256;
float var_1_54 = 16.2;
unsigned short int var_1_55 = 28698;
unsigned short int var_1_56 = 29118;
unsigned short int var_1_57 = 35038;
unsigned short int var_1_58 = 64025;
unsigned short int var_1_59 = 25;
unsigned short int var_1_60 = 256;
double var_1_61 = 63.6;
double var_1_62 = 100.25;
double var_1_63 = 64.375;
double var_1_64 = 31.375;
signed long int var_1_65 = -8;
signed short int var_1_66 = -2;
signed long int var_1_67 = 8;
signed long int var_1_68 = 4;
float var_1_69 = 256.5;
signed long int var_1_70 = 2;
signed long int var_1_71 = 16;
float var_1_72 = 128.25;
float var_1_73 = 4.125;
float var_1_74 = 99.65;
unsigned char var_1_75 = 32;
unsigned char var_1_76 = 100;
unsigned char var_1_77 = 100;
signed long int var_1_78 = -2;
unsigned char var_1_79 = 64;
double var_1_80 = 31.75;
signed char var_1_81 = 0;
signed char var_1_82 = 50;
double var_1_83 = 31.75;
double var_1_84 = 4.4;
unsigned short int var_1_85 = 16;
double var_1_86 = 16.6;
signed long int var_1_87 = -5;
signed long int var_1_88 = -16;
signed long int var_1_89 = -5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 5;
unsigned short int last_1_var_1_18 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_20 = var_1_21;


	// From: CodeObject2
	if (var_1_23 || (2.65f > var_1_24)) {
		var_1_22 = (! (! var_1_25));
	}


	// From: CodeObject3
	if (var_1_23) {
		var_1_26 = (! ((var_1_24 >= var_1_27) && var_1_28));
	}


	// From: CodeObject4
	var_1_29 = (abs (var_1_30));


	// From: CodeObject5
	if (var_1_23) {
		var_1_31 = (var_1_25 && (! var_1_28));
	}


	// From: CodeObject6
	if (var_1_22) {
		if ((min ((var_1_20 >> var_1_21) , (max (var_1_33 , var_1_34)))) >= var_1_35) {
			var_1_32 = (var_1_23 || ((var_1_20 <= var_1_21) || var_1_25));
		} else {
			var_1_32 = (var_1_28 || var_1_36);
		}
	} else {
		if (var_1_33 <= var_1_35) {
			if (var_1_36) {
				var_1_32 = (! (! var_1_28));
			} else {
				var_1_32 = (var_1_28 || (var_1_37 || var_1_38));
			}
		}
	}


	// From: CodeObject7
	if ((- (var_1_40 - var_1_41)) <= var_1_30) {
		var_1_39 = (var_1_42 - var_1_20);
	}


	// From: CodeObject8
	if (var_1_31) {
		var_1_43 = var_1_38;
	}


	// From: CodeObject9
	if ((- (10000 + 8)) > (abs (var_1_33))) {
		var_1_44 = (var_1_45 + var_1_46);
	}


	// From: CodeObject10
	if (var_1_27 < (var_1_41 - (abs (var_1_46)))) {
		var_1_47 = (abs (var_1_42));
	}


	// From: CodeObject11
	var_1_48 = ((max (var_1_46 , var_1_45)) + var_1_49);


	// From: CodeObject12
	var_1_50 = (max (var_1_51 , var_1_52));


	// From: CodeObject13
	if (var_1_48 >= (abs (var_1_24))) {
		if (var_1_24 >= var_1_54) {
			var_1_53 = (var_1_50 + (max ((var_1_55 - var_1_52) , (var_1_56 - var_1_51))));
		} else {
			var_1_53 = ((min (var_1_57 , var_1_58)) - (min ((max (var_1_52 , var_1_51)) , 5)));
		}
	} else {
		if (var_1_33 < var_1_34) {
			if (var_1_37) {
				if (var_1_59 != ((var_1_47 >> var_1_34) >> var_1_52)) {
					var_1_53 = (min ((min (var_1_58 , var_1_52)) , var_1_60));
				} else {
					var_1_53 = (var_1_57 - var_1_51);
				}
			} else {
				var_1_53 = (var_1_57 - (var_1_55 - var_1_52));
			}
		}
	}


	// From: CodeObject14
	if (var_1_38) {
		if ((var_1_52 - var_1_50) < var_1_53) {
			var_1_61 = (var_1_49 + ((max (32.2 , var_1_62)) + var_1_63));
		} else {
			if (var_1_31) {
				var_1_61 = (min (var_1_30 , (min ((var_1_46 + var_1_45) , var_1_49))));
			} else {
				var_1_61 = ((min (var_1_64 , 0.75)) + (abs (var_1_46)));
			}
		}
	} else {
		var_1_61 = var_1_64;
	}


	// From: CodeObject15
	if (var_1_22 || ((min (var_1_51 , var_1_53)) <= var_1_55)) {
		if (var_1_36) {
			if (var_1_30 >= var_1_45) {
				if (var_1_32 && var_1_31) {
					var_1_65 = (abs (var_1_58));
				}
			} else {
				if (((abs (var_1_33)) % (max (var_1_55 , var_1_56))) > (min (var_1_21 , 128))) {
					var_1_65 = var_1_53;
				}
			}
		}
	} else {
		if (var_1_38) {
			if (var_1_43) {
				var_1_65 = var_1_21;
			}
		} else {
			var_1_65 = var_1_59;
		}
	}


	// From: CodeObject16
	if (1u < var_1_56) {
		var_1_66 = (abs (var_1_52));
	} else {
		if (var_1_21 >= var_1_52) {
			if (var_1_62 < (var_1_40 * (abs (255.75)))) {
				if ((~ var_1_65) <= var_1_53) {
					if (var_1_33 != var_1_42) {
						var_1_66 = (var_1_50 - var_1_52);
					}
				} else {
					var_1_66 = (min ((abs (var_1_34)) , (abs (var_1_51))));
				}
			} else {
				var_1_66 = (var_1_50 - (26127 - (2 + var_1_51)));
			}
		} else {
			if (var_1_65 <= ((var_1_57 % var_1_56) >> (min (var_1_67 , var_1_68)))) {
				var_1_66 = (var_1_50 - var_1_51);
			}
		}
	}


	// From: CodeObject17
	if ((abs (var_1_67)) >= ((var_1_70 | var_1_71) * var_1_51)) {
		if (var_1_56 > var_1_50) {
			var_1_69 = (min (var_1_30 , ((max (var_1_64 , var_1_62)) + (var_1_63 + var_1_72))));
		} else {
			if (var_1_56 > (var_1_60 / (abs (var_1_55)))) {
				var_1_69 = ((min ((var_1_73 - var_1_74) , var_1_64)) + var_1_46);
			} else {
				var_1_69 = (var_1_74 - (abs (var_1_49)));
			}
		}
	}


	// From: CodeObject18
	if (var_1_54 <= (abs (var_1_74))) {
		var_1_75 = (abs (var_1_52));
	} else {
		if (var_1_46 >= (abs (var_1_74))) {
			var_1_75 = (((var_1_76 - var_1_67) + var_1_77) - var_1_68);
		}
	}


	// From: CodeObject19
	if ((max ((max (var_1_74 , var_1_24)) , var_1_48)) < (var_1_64 + (8.5f - var_1_73))) {
		var_1_78 = (max (((min (var_1_59 , var_1_21)) - 10) , var_1_57));
	} else {
		var_1_78 = (max (var_1_68 , var_1_58));
	}


	// From: CodeObject20
	if (256 > var_1_75) {
		var_1_79 = (max (var_1_51 , var_1_76));
	}


	// From: CodeObject21
	if ((min (var_1_34 , (~ var_1_60))) >= var_1_33) {
		if (var_1_33 <= (var_1_67 - var_1_76)) {
			var_1_80 = (abs (var_1_62));
		}
	}


	// From: CodeObject22
	if (var_1_28) {
		var_1_81 = ((var_1_67 + var_1_68) - var_1_82);
	} else {
		var_1_81 = var_1_68;
	}


	// From: CodeObject23
	if (var_1_28) {
		var_1_83 = var_1_30;
	}


	// From: CodeObject24
	var_1_84 = var_1_73;


	// From: CodeObject25
	if (var_1_37) {
		var_1_85 = var_1_68;
	} else {
		var_1_85 = var_1_82;
	}


	// From: CodeObject26
	if (var_1_26) {
		var_1_86 = var_1_30;
	}


	// From: CodeObject27
	if (var_1_33 >= (8 & var_1_58)) {
		var_1_87 = (abs (var_1_88));
	}


	// From: CodeObject28
	if (var_1_54 == (abs (min (var_1_46 , 1.4f)))) {
		if (var_1_26) {
			var_1_89 = var_1_67;
		}
	}


	// From: Req1Batch48PS_CN_250
	if (var_1_2) {
		if (((var_1_3 - var_1_4) - var_1_5) == (15.75 - var_1_6)) {
			var_1_1 = (5 + last_1_var_1_8);
		} else {
			var_1_1 = last_1_var_1_8;
		}
	} else {
		var_1_1 = 1;
	}


	// From: Req2Batch48PS_CN_250
	unsigned short int stepLocal_0 = var_1_1;
	if (var_1_6 > (var_1_5 / (max (var_1_3 , var_1_9)))) {
		var_1_8 = (abs (var_1_10));
	} else {
		if (stepLocal_0 <= var_1_7) {
			var_1_8 = var_1_10;
		} else {
			var_1_8 = var_1_11;
		}
	}


	// From: Req3Batch48PS_CN_250
	if (var_1_2) {
		if (-128 > var_1_10) {
			if (var_1_3 >= (2.75 / var_1_9)) {
				var_1_12 = (var_1_11 + (last_1_var_1_18 + var_1_10));
			} else {
				var_1_12 = last_1_var_1_18;
			}
		}
	} else {
		var_1_12 = last_1_var_1_18;
	}


	// From: Req5Batch48PS_CN_250
	signed long int stepLocal_1 = max ((var_1_15 - var_1_16) , var_1_12);
	if (var_1_10 == stepLocal_1) {
		var_1_14 = (abs (var_1_17));
	} else {
		var_1_14 = var_1_17;
	}


	// From: Req4Batch48PS_CN_250
	if (var_1_2) {
		var_1_13 = var_1_11;
	}


	// From: Req6Batch48PS_CN_250
	if (var_1_8 == var_1_13) {
		var_1_18 = (var_1_10 + (min (var_1_14 , var_1_16)));
	} else {
		if (last_1_var_1_18 != var_1_16) {
			if (-256 >= var_1_13) {
				var_1_18 = var_1_16;
			} else {
				var_1_18 = var_1_15;
			}
		} else {
			var_1_18 = var_1_10;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 4611686.018427387900e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427387900e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -126);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -128);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -461168.6018427382800e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 16383);
	assume_abort_if_not(var_1_55 <= 32767);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 16383);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 32767);
	assume_abort_if_not(var_1_57 <= 65534);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 32767);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 65535);
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 65534);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= -230584.3009213691390e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691390e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -230584.3009213691390e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691390e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -461168.6018427382800e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427382800e+12F && var_1_64 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 32);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 32);
	var_1_70 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_70 >= -2147483648);
	assume_abort_if_not(var_1_70 <= 2147483647);
	var_1_71 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_71 >= -2147483648);
	assume_abort_if_not(var_1_71 <= 2147483647);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= -230584.3009213691390e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691390e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427382800e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 95);
	assume_abort_if_not(var_1_76 <= 127);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 64);
	assume_abort_if_not(var_1_77 <= 127);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 126);
	var_1_88 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_88 >= -2147483646);
	assume_abort_if_not(var_1_88 <= 2147483646);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return (((((var_1_2 ? ((((var_1_3 - var_1_4) - var_1_5) == (15.75 - var_1_6)) ? (var_1_1 == ((unsigned short int) (5 + last_1_var_1_8))) : (var_1_1 == ((unsigned short int) last_1_var_1_8))) : (var_1_1 == ((unsigned short int) 1))) && ((var_1_6 > (var_1_5 / (max (var_1_3 , var_1_9)))) ? (var_1_8 == ((unsigned char) (abs (var_1_10)))) : ((var_1_1 <= var_1_7) ? (var_1_8 == ((unsigned char) var_1_10)) : (var_1_8 == ((unsigned char) var_1_11))))) && (var_1_2 ? ((-128 > var_1_10) ? ((var_1_3 >= (2.75 / var_1_9)) ? (var_1_12 == ((signed long int) (var_1_11 + (last_1_var_1_18 + var_1_10)))) : (var_1_12 == ((signed long int) last_1_var_1_18))) : 1) : (var_1_12 == ((signed long int) last_1_var_1_18)))) && (var_1_2 ? (var_1_13 == ((signed long int) var_1_11)) : 1)) && ((var_1_10 == (max ((var_1_15 - var_1_16) , var_1_12))) ? (var_1_14 == ((signed char) (abs (var_1_17)))) : (var_1_14 == ((signed char) var_1_17)))) && ((var_1_8 == var_1_13) ? (var_1_18 == ((unsigned short int) (var_1_10 + (min (var_1_14 , var_1_16))))) : ((last_1_var_1_18 != var_1_16) ? ((-256 >= var_1_13) ? (var_1_18 == ((unsigned short int) var_1_16)) : (var_1_18 == ((unsigned short int) var_1_15))) : (var_1_18 == ((unsigned short int) var_1_10))))
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

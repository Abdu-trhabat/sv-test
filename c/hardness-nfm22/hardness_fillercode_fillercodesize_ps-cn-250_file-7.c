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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7PS_CN_250.c", 13, "reach_error"); }
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
float var_1_2 = 200.875;
float var_1_3 = 100.25;
float var_1_4 = 99999999.34;
unsigned short int var_1_5 = 10;
unsigned short int var_1_6 = 8;
unsigned long int var_1_7 = 25;
unsigned char var_1_8 = 0;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 25;
unsigned short int var_1_11 = 10000;
signed short int var_1_12 = -32;
signed char var_1_13 = 4;
signed char var_1_14 = 25;
signed short int var_1_15 = -16;
signed short int var_1_16 = 100;
signed short int var_1_17 = 8;
float var_1_18 = 5.8;
float var_1_19 = 0.19999999999999996;
float var_1_20 = 1.5;
float var_1_21 = 10000000.5;
float var_1_22 = 4.5;
float var_1_23 = 4.25;
signed short int var_1_24 = -16;
unsigned short int var_1_25 = 100;
unsigned short int var_1_26 = 2;
unsigned long int var_1_27 = 8;
signed long int var_1_28 = 500;
signed long int var_1_29 = 5;
signed long int var_1_30 = -10;
double var_1_31 = 499.1;
double var_1_32 = 1000000.625;
double var_1_33 = 63.5;
signed char var_1_34 = -64;
unsigned long int var_1_35 = 200;
float var_1_36 = 0.5;
float var_1_37 = 0.0;
float var_1_38 = 10000000000.2;
double var_1_39 = -0.75;
unsigned char var_1_40 = 1;
float var_1_41 = 64.25;
float var_1_42 = 0.0;
float var_1_43 = 16.25;
signed short int var_1_44 = -500;
signed char var_1_45 = 10;
signed char var_1_46 = 32;
signed char var_1_47 = 32;
unsigned char var_1_48 = 5;
float var_1_49 = 31.5;
float var_1_50 = 0.0;
unsigned char var_1_51 = 25;
unsigned char var_1_52 = 64;
float var_1_53 = 499.25;
unsigned char var_1_54 = 32;
unsigned char var_1_55 = 5;
unsigned long int var_1_56 = 10;
unsigned char var_1_57 = 128;
unsigned char var_1_58 = 128;
float var_1_59 = 256.5;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 1;
unsigned char var_1_62 = 32;
unsigned short int var_1_63 = 2;
unsigned short int var_1_64 = 33854;
unsigned long int var_1_65 = 128;
signed long int var_1_66 = 128;
signed long int var_1_67 = 2;
signed long int var_1_68 = 10;
unsigned long int var_1_69 = 10;
unsigned long int var_1_70 = 256;
unsigned long int var_1_71 = 4005063476;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 1;
unsigned char var_1_75 = 1;
signed short int var_1_76 = 100;
unsigned long int var_1_77 = 128;
signed short int var_1_78 = -25;
unsigned long int var_1_79 = 10;
double var_1_80 = 255.5;
unsigned short int var_1_81 = 64;
unsigned char var_1_82 = 16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_26 >> var_1_27) > ((var_1_28 ^ var_1_29) + (abs (var_1_30)))) {
		var_1_25 = (max ((abs (var_1_27)) , 0));
	} else {
		if ((abs (var_1_31)) >= (var_1_32 - var_1_33)) {
			var_1_25 = (abs (var_1_27));
		}
	}


	// From: CodeObject2
	if (! ((max (var_1_28 , 5)) != var_1_26)) {
		var_1_34 = (abs (abs (var_1_27)));
	}


	// From: CodeObject3
	if (((abs (var_1_25)) - var_1_27) <= (var_1_29 * (var_1_28 >> var_1_30))) {
		var_1_35 = (max (var_1_25 , (abs (var_1_27))));
	}


	// From: CodeObject4
	if (var_1_27 <= (var_1_35 % 8u)) {
		var_1_36 = ((abs (-0.5f)) - (var_1_37 - var_1_38));
	} else {
		var_1_36 = (max (1.4f , var_1_37));
	}


	// From: CodeObject5
	if (var_1_40) {
		var_1_39 = (abs (var_1_37 - var_1_38));
	}


	// From: CodeObject6
	if ((var_1_38 + var_1_37) > var_1_36) {
		var_1_41 = (var_1_38 - ((max (var_1_37 , var_1_42)) - var_1_43));
	} else {
		var_1_41 = var_1_38;
	}


	// From: CodeObject7
	var_1_44 = (var_1_27 - (abs (var_1_34)));


	// From: CodeObject8
	if ((abs (min (var_1_26 , var_1_30))) <= var_1_35) {
		if (var_1_40) {
			var_1_45 = (abs (var_1_46));
		} else {
			var_1_45 = (var_1_27 + 1);
		}
	}


	// From: CodeObject9
	if (var_1_39 >= var_1_36) {
		if (((min (var_1_32 , var_1_49)) - (var_1_50 - var_1_38)) >= var_1_41) {
			if (var_1_35 <= (abs (var_1_27))) {
				var_1_48 = (abs (max (1 , (max (var_1_51 , var_1_27)))));
			}
		} else {
			var_1_48 = var_1_51;
		}
	} else {
		var_1_48 = ((64 - var_1_27) + var_1_52);
	}


	// From: CodeObject10
	if (var_1_40 && (var_1_27 < var_1_26)) {
		var_1_53 = (abs (var_1_43));
	} else {
		if ((max ((var_1_33 / var_1_42) , var_1_38)) >= (- var_1_41)) {
			if ((~ var_1_51) == ((min (-4 , var_1_47)) << var_1_48)) {
				var_1_53 = (min (255.5f , var_1_38));
			}
		} else {
			var_1_53 = (abs (var_1_43 + 200.4f));
		}
	}


	// From: CodeObject11
	if ((min ((~ var_1_29) , (var_1_27 & var_1_52))) > (var_1_48 & var_1_25)) {
		var_1_54 = 5;
	} else {
		var_1_54 = (max ((max (var_1_27 , var_1_51)) , ((abs (5)) + var_1_52)));
	}


	// From: CodeObject12
	if ((~ var_1_56) < var_1_51) {
		var_1_55 = var_1_51;
	} else {
		if (var_1_46 >= var_1_47) {
			if (var_1_25 >= var_1_44) {
				var_1_55 = ((min (var_1_57 , var_1_58)) - (abs (var_1_27)));
			} else {
				if (((var_1_52 | var_1_45) * var_1_57) <= (16 - var_1_54)) {
					var_1_55 = (max (var_1_51 , (abs (var_1_57))));
				}
			}
		} else {
			if (var_1_47 >= var_1_44) {
				var_1_55 = (var_1_52 + var_1_27);
			}
		}
	}


	// From: CodeObject13
	if ((var_1_40 && var_1_60) && var_1_61) {
		var_1_59 = (abs (max (var_1_38 , var_1_43)));
	}


	// From: CodeObject14
	if (var_1_44 != (var_1_35 * var_1_58)) {
		var_1_62 = (abs (var_1_51));
	}


	// From: CodeObject15
	if (var_1_60) {
		if (var_1_26 < var_1_44) {
			if (-64 > var_1_27) {
				var_1_63 = (min ((min ((var_1_54 + var_1_52) , var_1_48)) , (abs (var_1_58))));
			} else {
				if (var_1_49 > var_1_32) {
					var_1_63 = (min ((abs (var_1_52)) , (abs (var_1_64 - var_1_51))));
				} else {
					if ((var_1_35 & var_1_29) < var_1_54) {
						var_1_63 = ((abs (var_1_64)) - var_1_27);
					} else {
						var_1_63 = ((max (var_1_27 , var_1_55)) + 32);
					}
				}
			}
		}
	} else {
		var_1_63 = (min (var_1_64 , (abs (var_1_52))));
	}


	// From: CodeObject16
	if (var_1_50 < var_1_31) {
		var_1_65 = var_1_55;
	}


	// From: CodeObject17
	if ((- var_1_25) >= var_1_67) {
		var_1_66 = ((min (var_1_25 , var_1_55)) - var_1_27);
	} else {
		var_1_66 = ((min ((min (var_1_68 , var_1_44)) , var_1_55)) + ((min (var_1_62 , var_1_57)) - var_1_25));
	}


	// From: CodeObject18
	if (var_1_60) {
		var_1_69 = ((abs (var_1_57)) + var_1_64);
	} else {
		var_1_69 = (min (var_1_57 , var_1_51));
	}


	// From: CodeObject19
	if (8 < var_1_58) {
		var_1_70 = (abs ((abs (var_1_71)) - (min (var_1_64 , var_1_62))));
	}


	// From: CodeObject20
	if (var_1_39 <= (min (var_1_43 , var_1_49))) {
		var_1_72 = (! var_1_73);
	} else {
		if ((abs (var_1_55)) >= var_1_29) {
			var_1_72 = ((! var_1_61) || var_1_74);
		}
	}


	// From: CodeObject21
	if (var_1_40) {
		var_1_75 = (var_1_73 || var_1_74);
	}


	// From: CodeObject22
	if ((var_1_68 * -128) <= var_1_46) {
		if ((var_1_32 * 32.125f) >= (abs (var_1_31))) {
			var_1_76 = (abs (abs (-64)));
		}
	} else {
		var_1_76 = var_1_62;
	}


	// From: CodeObject23
	if (var_1_60) {
		var_1_77 = var_1_64;
	}


	// From: CodeObject24
	if (var_1_40) {
		var_1_78 = -32;
	} else {
		var_1_78 = -10;
	}


	// From: CodeObject25
	if (var_1_60) {
		var_1_79 = var_1_63;
	}


	// From: CodeObject26
	if (var_1_61) {
		var_1_80 = var_1_42;
	} else {
		var_1_80 = var_1_42;
	}


	// From: CodeObject27
	if (var_1_54 < var_1_82) {
		if (var_1_28 < var_1_51) {
			var_1_81 = (max (var_1_48 , (max (var_1_64 , var_1_82))));
		} else {
			if (! var_1_73) {
				var_1_81 = var_1_51;
			}
		}
	}


	// From: Req3Batch7PS_CN_250
	var_1_9 = (max (var_1_5 , var_1_6));


	// From: Req4Batch7PS_CN_250
	signed long int stepLocal_1 = 56016 - var_1_11;
	signed long int stepLocal_0 = 10;
	if (var_1_6 < stepLocal_0) {
		if (var_1_5 < stepLocal_1) {
			var_1_10 = var_1_5;
		}
	}


	// From: Req5Batch7PS_CN_250
	if ((var_1_13 - var_1_14) > (var_1_10 + var_1_11)) {
		if (! var_1_8) {
			var_1_12 = var_1_13;
		}
	} else {
		var_1_12 = var_1_14;
	}


	// From: Req6Batch7PS_CN_250
	var_1_15 = (var_1_14 - (max ((var_1_16 + var_1_17) , 4)));


	// From: Req7Batch7PS_CN_250
	if (var_1_4 > var_1_2) {
		var_1_18 = ((abs (var_1_19 + var_1_20)) - var_1_21);
	} else {
		if (! ((var_1_17 - var_1_11) < 128)) {
			var_1_18 = (abs (var_1_21));
		} else {
			var_1_18 = (min ((max (9.75f , var_1_19)) , (max ((var_1_21 - var_1_22) , (max (var_1_20 , var_1_23))))));
		}
	}


	// From: Req8Batch7PS_CN_250
	var_1_24 = 16;


	// From: Req1Batch7PS_CN_250
	if (var_1_18 <= (var_1_3 - var_1_4)) {
		var_1_1 = var_1_5;
	} else {
		var_1_1 = (max (var_1_5 , var_1_6));
	}


	// From: Req2Batch7PS_CN_250
	if (var_1_8) {
		if (var_1_5 < 16) {
			var_1_7 = (var_1_6 + var_1_24);
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65535);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 17);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 4611686.018427382800e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 4611686.018427382800e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -63);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -1);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 4611686.018427387900e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 4294967295);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 127);
	assume_abort_if_not(var_1_57 <= 254);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 127);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 1);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 32767);
	assume_abort_if_not(var_1_64 <= 65534);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -2147483648);
	assume_abort_if_not(var_1_67 <= 2147483647);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= -1073741823);
	assume_abort_if_not(var_1_68 <= 1073741823);
	var_1_71 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_71 >= 2147483647);
	assume_abort_if_not(var_1_71 <= 4294967294);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 0);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 1);
	assume_abort_if_not(var_1_74 <= 1);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 255);
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_18 <= (var_1_3 - var_1_4)) ? (var_1_1 == ((unsigned short int) var_1_5)) : (var_1_1 == ((unsigned short int) (max (var_1_5 , var_1_6))))) && (var_1_8 ? ((var_1_5 < 16) ? (var_1_7 == ((unsigned long int) (var_1_6 + var_1_24))) : 1) : 1)) && (var_1_9 == ((signed long int) (max (var_1_5 , var_1_6))))) && ((var_1_6 < 10) ? ((var_1_5 < (56016 - var_1_11)) ? (var_1_10 == ((unsigned short int) var_1_5)) : 1) : 1)) && (((var_1_13 - var_1_14) > (var_1_10 + var_1_11)) ? ((! var_1_8) ? (var_1_12 == ((signed short int) var_1_13)) : 1) : (var_1_12 == ((signed short int) var_1_14)))) && (var_1_15 == ((signed short int) (var_1_14 - (max ((var_1_16 + var_1_17) , 4)))))) && ((var_1_4 > var_1_2) ? (var_1_18 == ((float) ((abs (var_1_19 + var_1_20)) - var_1_21))) : ((! ((var_1_17 - var_1_11) < 128)) ? (var_1_18 == ((float) (abs (var_1_21)))) : (var_1_18 == ((float) (min ((max (9.75f , var_1_19)) , (max ((var_1_21 - var_1_22) , (max (var_1_20 , var_1_23))))))))))) && (var_1_24 == ((signed short int) 16))
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

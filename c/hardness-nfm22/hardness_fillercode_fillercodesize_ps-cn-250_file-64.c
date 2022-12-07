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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -2;
signed char var_1_10 = -32;
signed long int var_1_11 = 4;
signed long int var_1_12 = 1731242407;
signed long int var_1_13 = 0;
signed char var_1_14 = 10;
signed char var_1_15 = 8;
signed char var_1_16 = -25;
signed char var_1_17 = -16;
unsigned long int var_1_18 = 0;
signed short int var_1_19 = 256;
signed short int var_1_20 = 28075;
signed short int var_1_21 = 256;
signed short int var_1_22 = 25;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed char var_1_25 = 1;
signed char var_1_26 = 0;
signed char var_1_27 = 10;
unsigned long int var_1_28 = 64;
float var_1_30 = 127.75;
signed char var_1_31 = -25;
signed char var_1_32 = 1;
signed long int var_1_33 = 25;
float var_1_34 = 9.5;
float var_1_35 = 256.5;
unsigned long int var_1_36 = 0;
unsigned long int var_1_37 = 128;
unsigned long int var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned long int var_1_40 = 3013673348;
unsigned long int var_1_41 = 16;
signed short int var_1_42 = 100;
signed long int var_1_43 = 64;
signed short int var_1_44 = 1;
signed long int var_1_45 = 2;
double var_1_46 = 4.526;
double var_1_47 = 7.8;
double var_1_48 = 1.75;
double var_1_49 = 0.0;
double var_1_50 = 2.25;
double var_1_51 = 3.5;
unsigned short int var_1_52 = 1;
unsigned long int var_1_53 = 2;
unsigned char var_1_54 = 0;
unsigned short int var_1_55 = 32;
unsigned char var_1_56 = 128;
unsigned char var_1_57 = 50;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 5;
signed long int var_1_60 = -100;
signed char var_1_61 = 100;
unsigned long int var_1_62 = 10;
signed short int var_1_63 = -32;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 128;
unsigned char var_1_66 = 8;
unsigned char var_1_67 = 8;
signed long int var_1_68 = 256;
signed short int var_1_69 = 64;
signed char var_1_70 = 1;
signed char var_1_71 = 100;
signed char var_1_72 = -2;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
signed long int var_1_75 = -32;
signed long int var_1_76 = 32;
signed long int var_1_77 = 500;
signed short int var_1_78 = 256;
unsigned long int var_1_79 = 100;
signed short int var_1_80 = -64;
unsigned long int var_1_81 = 10000;
unsigned char var_1_82 = 0;
unsigned long int var_1_83 = 1987195434;
unsigned long int var_1_84 = 2076816759;
unsigned short int var_1_85 = 10;
unsigned char var_1_86 = 1;
unsigned char var_1_87 = 0;
float var_1_88 = 1.3;
unsigned char var_1_89 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_31 + var_1_32) < var_1_33) {
		var_1_30 = (min (var_1_34 , (abs (var_1_35))));
	}


	// From: CodeObject2
	if (var_1_30 <= (abs (var_1_34))) {
		var_1_36 = (abs (var_1_37));
	} else {
		if ((min (var_1_33 , (abs (var_1_37)))) > var_1_38) {
			if (var_1_39) {
				var_1_36 = (abs (var_1_37));
			} else {
				var_1_36 = (abs (max ((var_1_40 - var_1_41) , var_1_37)));
			}
		}
	}


	// From: CodeObject3
	if (((var_1_35 * 5.5) + var_1_30) >= var_1_34) {
		var_1_42 = (min (var_1_31 , var_1_32));
	}


	// From: CodeObject4
	if ((256 / var_1_44) < var_1_41) {
		var_1_43 = var_1_32;
	} else {
		var_1_43 = ((min (-2 , var_1_45)) + 2);
	}


	// From: CodeObject5
	if ((abs (var_1_30)) >= 8.2f) {
		if (var_1_36 > var_1_33) {
			var_1_46 = (abs (abs (abs (var_1_34))));
		} else {
			var_1_46 = (max ((var_1_47 - var_1_48) , var_1_34));
		}
	} else {
		if ((~ (abs (var_1_31))) < (abs (var_1_44))) {
			if ((var_1_42 > var_1_31) || ((var_1_47 - var_1_48) < (max (var_1_34 , var_1_30)))) {
				var_1_46 = (var_1_47 - (var_1_49 - (max (var_1_50 , var_1_51))));
			}
		} else {
			var_1_46 = (abs (var_1_47));
		}
	}


	// From: CodeObject6
	if (! (var_1_34 < var_1_46)) {
		if (var_1_40 < (var_1_43 / (abs (var_1_53)))) {
			if (var_1_54) {
				var_1_52 = (abs (abs (var_1_55)));
			}
		}
	} else {
		var_1_52 = (abs (max (4 , var_1_55)));
	}


	// From: CodeObject7
	if (var_1_35 > (abs (var_1_50))) {
		if (var_1_39) {
			var_1_56 = (max (var_1_57 , var_1_58));
		}
	}


	// From: CodeObject8
	if (var_1_60 < (abs (abs (var_1_58)))) {
		var_1_59 = (abs (var_1_58));
	}


	// From: CodeObject9
	if (-2 <= ((var_1_53 & var_1_59) >> (10u + var_1_62))) {
		if (0u < (var_1_56 & (var_1_57 & var_1_53))) {
			var_1_61 = var_1_62;
		} else {
			var_1_61 = var_1_62;
		}
	}


	// From: CodeObject10
	if (var_1_54 || (64 <= (abs (var_1_41)))) {
		var_1_63 = ((min ((abs (var_1_31)) , var_1_56)) - var_1_59);
	}


	// From: CodeObject11
	if (var_1_31 >= var_1_40) {
		var_1_64 = (max (var_1_62 , (var_1_65 - (var_1_66 + var_1_67))));
	} else {
		var_1_64 = (max (var_1_67 , var_1_57));
	}


	// From: CodeObject12
	if (var_1_39) {
		if ((var_1_44 ^ 0) < (var_1_43 / (min (var_1_53 , var_1_65)))) {
			var_1_68 = (abs (abs (var_1_59)));
		}
	}


	// From: CodeObject13
	if (var_1_43 < var_1_44) {
		var_1_69 = (abs (var_1_32));
	}


	// From: CodeObject14
	if (((var_1_59 | var_1_71) * var_1_64) != (var_1_32 * var_1_61)) {
		var_1_70 = -8;
	}


	// From: CodeObject15
	if (var_1_39 || var_1_54) {
		var_1_72 = var_1_67;
	} else {
		var_1_72 = var_1_67;
	}


	// From: CodeObject16
	if ((var_1_56 | (var_1_43 * var_1_38)) >= var_1_66) {
		if ((var_1_57 + var_1_69) < (~ var_1_58)) {
			var_1_73 = ((! var_1_54) && var_1_74);
		}
	}


	// From: CodeObject17
	if (var_1_74) {
		var_1_75 = (var_1_55 - (max ((min (var_1_52 , var_1_62)) , (abs (var_1_71)))));
	} else {
		var_1_75 = (var_1_57 - var_1_59);
	}


	// From: CodeObject18
	if (var_1_57 != (var_1_65 - (abs (var_1_66)))) {
		var_1_76 = (abs (var_1_66));
	}


	// From: CodeObject19
	if (var_1_40 <= var_1_58) {
		if (var_1_67 < (~ (var_1_65 - var_1_66))) {
			var_1_77 = (abs (var_1_45));
		} else {
			var_1_77 = (min ((abs (min (var_1_67 , -128))) , var_1_32));
		}
	}


	// From: CodeObject20
	if (((var_1_35 + var_1_49) > 0.5) && var_1_74) {
		if (var_1_65 < ((var_1_70 / var_1_44) >> var_1_77)) {
			var_1_78 = 0;
		}
	}


	// From: CodeObject21
	if ((var_1_37 + var_1_33) != var_1_52) {
		var_1_79 = var_1_41;
	} else {
		if (var_1_40 < var_1_67) {
			var_1_79 = var_1_57;
		} else {
			if (var_1_73) {
				if ((var_1_77 >> (abs (var_1_62))) > (max (var_1_67 , (max (var_1_65 , var_1_78))))) {
					var_1_79 = (abs (abs (abs (var_1_41))));
				}
			}
		}
	}


	// From: CodeObject22
	if (var_1_33 < var_1_75) {
		var_1_80 = ((abs (max (var_1_72 , var_1_61))) + (abs (max (var_1_31 , var_1_70))));
	} else {
		var_1_80 = (var_1_59 - var_1_62);
	}


	// From: CodeObject23
	if (var_1_82) {
		if ((16.4f + var_1_34) > 500.125f) {
			var_1_81 = ((var_1_83 + var_1_84) - var_1_57);
		}
	} else {
		var_1_81 = (min ((var_1_40 - var_1_83) , var_1_59));
	}


	// From: CodeObject24
	if (var_1_47 > var_1_34) {
		if (var_1_44 <= var_1_37) {
			if ((var_1_83 >> (var_1_62 + 8)) <= var_1_41) {
				var_1_85 = ((abs (var_1_58)) + (max (var_1_67 , var_1_64)));
			}
		}
	} else {
		var_1_85 = 8;
	}


	// From: CodeObject25
	var_1_86 = var_1_62;


	// From: CodeObject26
	var_1_87 = var_1_65;


	// From: CodeObject27
	if (var_1_73) {
		var_1_88 = var_1_34;
	}


	// From: CodeObject28
	if (! var_1_39) {
		if ((min (var_1_38 , var_1_36)) > (abs (var_1_85))) {
			var_1_89 = ((max (var_1_66 , var_1_67)) + var_1_62);
		}
	} else {
		var_1_89 = var_1_65;
	}


	// From: Req4Batch64PS_CN_250
	var_1_19 = ((var_1_20 - var_1_21) - var_1_22);


	// From: Req6Batch64PS_CN_250
	signed long int stepLocal_1 = (var_1_26 - var_1_27) + var_1_19;
	if (stepLocal_1 > var_1_22) {
		var_1_25 = (max (var_1_16 , var_1_17));
	} else {
		var_1_25 = (max ((abs (var_1_15)) , (abs (var_1_17))));
	}


	// From: Req2Batch64PS_CN_250
	signed long int stepLocal_0 = var_1_11 - (var_1_12 - var_1_13);
	if ((var_1_25 >> var_1_19) < stepLocal_0) {
		var_1_10 = (var_1_14 + (min (var_1_15 , var_1_16)));
	} else {
		var_1_10 = (var_1_17 + var_1_16);
	}


	// From: Req3Batch64PS_CN_250
	if (var_1_10 != var_1_25) {
		var_1_18 = (min (var_1_13 , var_1_12));
	}


	// From: Req5Batch64PS_CN_250
	if (! ((64 * var_1_18) < var_1_18)) {
		var_1_23 = var_1_24;
	}


	// From: Req1Batch64PS_CN_250
	if (-8 <= var_1_10) {
		if (var_1_10 == last_1_var_1_1) {
			var_1_1 = ((min ((var_1_10 + var_1_19) , var_1_19)) + (var_1_10 + var_1_10));
		}
	} else {
		if (128 < var_1_19) {
			var_1_1 = var_1_10;
		} else {
			var_1_1 = var_1_19;
		}
	}


	// From: Req7Batch64PS_CN_250
	if ((var_1_1 * var_1_1) < var_1_18) {
		if (var_1_1 < var_1_13) {
			var_1_28 = 64u;
		}
	}
}



void updateVariables() {
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 1073741823);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 16382);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -1);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483648);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 4294967295);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= -32768);
	assume_abort_if_not(var_1_44 <= 32767);
	assume_abort_if_not(var_1_44 != 0);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -1073741823);
	assume_abort_if_not(var_1_45 <= 1073741823);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 4611686.018427382800e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 4294967295);
	assume_abort_if_not(var_1_53 != 0);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 254);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= -2147483648);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 16);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 127);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 64);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 63);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -128);
	assume_abort_if_not(var_1_71 <= 127);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 0);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 1);
	var_1_83 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_83 >= 1073741823);
	assume_abort_if_not(var_1_83 <= 2147483647);
	var_1_84 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_84 >= 1073741824);
	assume_abort_if_not(var_1_84 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
}

int property() {
	return (((((((-8 <= var_1_10) ? ((var_1_10 == last_1_var_1_1) ? (var_1_1 == ((signed long int) ((min ((var_1_10 + var_1_19) , var_1_19)) + (var_1_10 + var_1_10)))) : 1) : ((128 < var_1_19) ? (var_1_1 == ((signed long int) var_1_10)) : (var_1_1 == ((signed long int) var_1_19)))) && (((var_1_25 >> var_1_19) < (var_1_11 - (var_1_12 - var_1_13))) ? (var_1_10 == ((signed char) (var_1_14 + (min (var_1_15 , var_1_16))))) : (var_1_10 == ((signed char) (var_1_17 + var_1_16))))) && ((var_1_10 != var_1_25) ? (var_1_18 == ((unsigned long int) (min (var_1_13 , var_1_12)))) : 1)) && (var_1_19 == ((signed short int) ((var_1_20 - var_1_21) - var_1_22)))) && ((! ((64 * var_1_18) < var_1_18)) ? (var_1_23 == ((unsigned char) var_1_24)) : 1)) && ((((var_1_26 - var_1_27) + var_1_19) > var_1_22) ? (var_1_25 == ((signed char) (max (var_1_16 , var_1_17)))) : (var_1_25 == ((signed char) (max ((abs (var_1_15)) , (abs (var_1_17)))))))) && (((var_1_1 * var_1_1) < var_1_18) ? ((var_1_1 < var_1_13) ? (var_1_28 == ((unsigned long int) 64u)) : 1) : 1)
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

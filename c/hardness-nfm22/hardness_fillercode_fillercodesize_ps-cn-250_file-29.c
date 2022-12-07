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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch29PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = 0;
signed short int var_1_9 = 0;
signed short int var_1_10 = 8;
signed char var_1_11 = 1;
signed char var_1_12 = 32;
signed char var_1_13 = -2;
signed char var_1_14 = 8;
signed char var_1_15 = 0;
signed char var_1_16 = 10;
signed char var_1_17 = 32;
unsigned char var_1_18 = 0;
signed char var_1_19 = -1;
signed short int var_1_20 = 100;
signed short int var_1_22 = 29265;
float var_1_23 = 31.6;
float var_1_24 = 9.2;
float var_1_25 = 15.6;
float var_1_26 = 25.25;
unsigned long int var_1_27 = 256;
double var_1_29 = 15.86;
signed char var_1_30 = -4;
unsigned char var_1_31 = 0;
double var_1_32 = 0.75;
double var_1_33 = 32.3;
double var_1_34 = 199.75;
double var_1_35 = 1.5;
double var_1_36 = 255.9;
unsigned short int var_1_37 = 8;
unsigned short int var_1_38 = 128;
unsigned short int var_1_39 = 1;
unsigned short int var_1_40 = 63847;
unsigned short int var_1_41 = 10;
unsigned short int var_1_42 = 32;
signed long int var_1_43 = -64;
unsigned short int var_1_44 = 32;
signed long int var_1_45 = -32;
signed long int var_1_46 = -8;
signed char var_1_47 = -100;
signed short int var_1_48 = 1;
signed long int var_1_49 = 500;
signed short int var_1_50 = 1;
signed short int var_1_51 = -5;
float var_1_52 = 31.5;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
signed long int var_1_56 = -10;
double var_1_57 = 32.5;
unsigned long int var_1_58 = 16;
unsigned long int var_1_59 = 3808110022;
unsigned long int var_1_60 = 5;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
signed long int var_1_65 = -2;
unsigned long int var_1_66 = 50;
unsigned long int var_1_67 = 1248703063;
double var_1_68 = 32.25;
signed char var_1_69 = 4;
signed char var_1_70 = -100;
unsigned short int var_1_71 = 1;
unsigned char var_1_72 = 0;
float var_1_73 = 255.625;
unsigned short int var_1_74 = 16;
unsigned long int var_1_75 = 1;
unsigned long int var_1_76 = 5;
double var_1_77 = 63.75;
unsigned char var_1_78 = 2;
unsigned char var_1_79 = 0;
unsigned short int var_1_80 = 16;
unsigned char var_1_81 = 0;
unsigned short int var_1_82 = 0;
signed long int var_1_83 = -1000;
unsigned short int var_1_84 = 25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_30 != 4) {
		if (var_1_31) {
			var_1_29 = var_1_32;
		}
	} else {
		var_1_29 = (var_1_33 - ((min (var_1_34 , var_1_35)) + var_1_36));
	}


	// From: CodeObject2
	if (var_1_33 >= var_1_35) {
		if (var_1_33 > 4.5) {
			var_1_37 = (abs (min (var_1_38 , var_1_39)));
		} else {
			var_1_37 = (((abs (var_1_40)) - var_1_41) - var_1_42);
		}
	}


	// From: CodeObject3
	if (var_1_33 <= var_1_36) {
		var_1_43 = (min ((min (var_1_40 , (abs (var_1_30)))) , var_1_38));
	}


	// From: CodeObject4
	if (var_1_31) {
		var_1_44 = (abs (min (var_1_41 , var_1_38)));
	} else {
		var_1_44 = ((abs (var_1_42)) + (max (var_1_41 , 16)));
	}


	// From: CodeObject5
	if (var_1_37 < (var_1_38 | (abs (var_1_40)))) {
		var_1_45 = (abs (-4));
	} else {
		var_1_45 = (-10 + (max (var_1_40 , var_1_39)));
	}


	// From: CodeObject6
	if (((var_1_43 >> var_1_39) / (abs (var_1_47))) < ((var_1_38 + -25) >> 16)) {
		var_1_46 = (abs (var_1_41));
	}


	// From: CodeObject7
	if (var_1_45 > ((var_1_46 / var_1_47) % var_1_40)) {
		if (64 >= var_1_43) {
			if ((var_1_37 & (abs (var_1_41))) >= var_1_49) {
				var_1_48 = (var_1_50 - (abs (min (128 , -128))));
			}
		} else {
			var_1_48 = (min (var_1_51 , var_1_41));
		}
	} else {
		var_1_48 = (min (var_1_50 , var_1_47));
	}


	// From: CodeObject8
	if (var_1_46 != var_1_45) {
		if (((var_1_44 & var_1_40) >> var_1_43) >= var_1_49) {
			var_1_52 = var_1_34;
		} else {
			var_1_52 = var_1_36;
		}
	}


	// From: CodeObject9
	var_1_53 = ((! var_1_54) || (! var_1_55));


	// From: CodeObject10
	if (var_1_43 <= var_1_42) {
		var_1_56 = (max (var_1_39 , (abs (var_1_47))));
	} else {
		if (! var_1_53) {
			var_1_56 = (max ((max (var_1_48 , var_1_39)) , (min (5 , var_1_42))));
		}
	}


	// From: CodeObject11
	if (var_1_46 >= var_1_50) {
		if ((var_1_42 - var_1_41) < (var_1_50 - (min (var_1_44 , var_1_39)))) {
			var_1_57 = (min (var_1_32 , var_1_33));
		} else {
			var_1_57 = ((abs (var_1_34)) - var_1_33);
		}
	} else {
		var_1_57 = ((abs (var_1_36 + var_1_35)) - var_1_34);
	}


	// From: CodeObject12
	if (var_1_36 >= var_1_52) {
		var_1_58 = (min (var_1_38 , ((min (var_1_59 , 2447623695u)) - var_1_60)));
	}


	// From: CodeObject13
	if ((var_1_47 * var_1_46) <= ((var_1_40 >> var_1_44) + 128)) {
		if ((var_1_48 | 5) <= var_1_41) {
			var_1_61 = (((var_1_39 > var_1_46) && var_1_62) || var_1_63);
		} else {
			var_1_61 = (var_1_63 || (var_1_62 || var_1_64));
		}
	} else {
		var_1_61 = (var_1_63 || var_1_62);
	}


	// From: CodeObject14
	if (var_1_39 <= 0) {
		if (var_1_63) {
			if ((var_1_41 % (abs (var_1_40))) <= var_1_58) {
				var_1_65 = ((min ((abs (var_1_51)) , (abs (var_1_48)))) - (abs (var_1_39)));
			} else {
				var_1_65 = -100;
			}
		} else {
			var_1_65 = (max (-200 , var_1_50));
		}
	}


	// From: CodeObject15
	if (var_1_40 >= var_1_58) {
		var_1_66 = (min (8u , (var_1_59 - var_1_44)));
	} else {
		var_1_66 = (abs (2u + (var_1_67 - var_1_39)));
	}


	// From: CodeObject16
	if (var_1_39 < (var_1_40 - (max (var_1_41 , var_1_42)))) {
		var_1_68 = (min (var_1_32 , (abs (abs (var_1_35)))));
	}


	// From: CodeObject17
	if (var_1_59 < (var_1_65 & var_1_38)) {
		var_1_69 = (abs (var_1_70));
	}


	// From: CodeObject18
	if (var_1_31) {
		if (var_1_30 > ((var_1_42 | var_1_58) & (-32 / var_1_47))) {
			if (var_1_36 != (- var_1_34)) {
				var_1_71 = (max (var_1_41 , (min (var_1_39 , var_1_38))));
			}
		} else {
			if ((abs (abs (var_1_40))) <= (var_1_48 | var_1_67)) {
				var_1_71 = (abs (16));
			}
		}
	}


	// From: CodeObject19
	if ((- var_1_68) >= var_1_57) {
		var_1_72 = 0;
	} else {
		if (var_1_49 >= var_1_50) {
			var_1_72 = (var_1_64 || var_1_55);
		}
	}


	// From: CodeObject20
	if (var_1_41 > var_1_37) {
		var_1_73 = (max ((var_1_34 - var_1_33) , var_1_32));
	}


	// From: CodeObject21
	if (var_1_43 > var_1_67) {
		var_1_74 = (min ((var_1_40 - var_1_42) , var_1_38));
	}


	// From: CodeObject22
	if (var_1_68 >= var_1_52) {
		var_1_75 = var_1_44;
	} else {
		if (var_1_33 <= var_1_34) {
			var_1_75 = (max (var_1_59 , var_1_74));
		}
	}


	// From: CodeObject23
	if (var_1_50 < var_1_65) {
		var_1_76 = var_1_67;
	}


	// From: CodeObject24
	if ((~ var_1_40) <= var_1_46) {
		var_1_77 = (max ((min (var_1_33 , var_1_34)) , var_1_32));
	} else {
		if (((max (var_1_40 , var_1_56)) >> 31) <= var_1_65) {
			var_1_77 = ((max (var_1_35 , (var_1_36 - var_1_34))) + 1000000.25);
		} else {
			var_1_77 = var_1_34;
		}
	}


	// From: CodeObject25
	if (var_1_31) {
		var_1_78 = var_1_79;
	}


	// From: CodeObject26
	if (var_1_54) {
		var_1_80 = var_1_38;
	}


	// From: CodeObject27
	if (var_1_54) {
		var_1_81 = 2;
	} else {
		var_1_81 = var_1_79;
	}


	// From: CodeObject28
	var_1_82 = var_1_38;


	// From: CodeObject29
	if (var_1_55) {
		var_1_83 = var_1_30;
	}


	// From: CodeObject30
	if (var_1_30 < var_1_67) {
		if (var_1_31) {
			if (var_1_43 > ((min (var_1_82 , var_1_37)) ^ var_1_78)) {
				var_1_84 = (var_1_41 + var_1_78);
			} else {
				var_1_84 = var_1_38;
			}
		}
	} else {
		var_1_84 = var_1_79;
	}


	// From: Req2Batch29PS_CN_250
	var_1_8 = (var_1_9 - (2 + var_1_10));


	// From: Req6Batch29PS_CN_250
	if (var_1_22 != var_1_12) {
		if (var_1_10 <= var_1_17) {
			var_1_23 = (var_1_24 + (max (var_1_25 , var_1_26)));
		}
	} else {
		var_1_23 = var_1_25;
	}


	// From: Req7Batch29PS_CN_250
	if (! ((var_1_9 - var_1_22) > var_1_12)) {
		var_1_27 = var_1_15;
	}


	// From: Req4Batch29PS_CN_250
	if (var_1_23 == var_1_23) {
		if (var_1_15 >= (var_1_27 / var_1_19)) {
			var_1_18 = var_1_7;
		}
	}


	// From: Req5Batch29PS_CN_250
	if ((- (min (var_1_23 , var_1_23))) > (1.625 * var_1_23)) {
		var_1_20 = ((var_1_22 - (var_1_16 + var_1_15)) - var_1_10);
	} else {
		var_1_20 = var_1_19;
	}


	// From: Req1Batch29PS_CN_250
	if (var_1_18) {
		var_1_1 = (((-128 <= var_1_20) || (var_1_23 >= var_1_23)) && var_1_6);
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req3Batch29PS_CN_250
	if (var_1_1) {
		var_1_11 = (var_1_12 + (min (var_1_13 , var_1_14)));
	} else {
		if (var_1_27 >= var_1_14) {
			var_1_11 = ((var_1_15 + var_1_16) - var_1_17);
		} else {
			if (var_1_7) {
				var_1_11 = var_1_16;
			} else {
				var_1_11 = var_1_12;
			}
		}
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -128);
	assume_abort_if_not(var_1_19 <= 127);
	assume_abort_if_not(var_1_19 != 0);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 16382);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -128);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 49150);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 16383);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32767);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -127);
	assume_abort_if_not(var_1_47 <= 127);
	assume_abort_if_not(var_1_47 != 0);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= -2147483648);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= -1);
	assume_abort_if_not(var_1_50 <= 32766);
	var_1_51 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_51 >= -32767);
	assume_abort_if_not(var_1_51 <= 32766);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 0);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 1073741823);
	assume_abort_if_not(var_1_67 <= 2147483647);
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= -126);
	assume_abort_if_not(var_1_70 <= 126);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 254);
}



void updateLastVariables() {
}

int property() {
	return ((((((var_1_18 ? (var_1_1 == ((unsigned char) (((-128 <= var_1_20) || (var_1_23 >= var_1_23)) && var_1_6))) : (var_1_1 == ((unsigned char) var_1_7))) && (var_1_8 == ((signed short int) (var_1_9 - (2 + var_1_10))))) && (var_1_1 ? (var_1_11 == ((signed char) (var_1_12 + (min (var_1_13 , var_1_14))))) : ((var_1_27 >= var_1_14) ? (var_1_11 == ((signed char) ((var_1_15 + var_1_16) - var_1_17))) : (var_1_7 ? (var_1_11 == ((signed char) var_1_16)) : (var_1_11 == ((signed char) var_1_12)))))) && ((var_1_23 == var_1_23) ? ((var_1_15 >= (var_1_27 / var_1_19)) ? (var_1_18 == ((unsigned char) var_1_7)) : 1) : 1)) && (((- (min (var_1_23 , var_1_23))) > (1.625 * var_1_23)) ? (var_1_20 == ((signed short int) ((var_1_22 - (var_1_16 + var_1_15)) - var_1_10))) : (var_1_20 == ((signed short int) var_1_19)))) && ((var_1_22 != var_1_12) ? ((var_1_10 <= var_1_17) ? (var_1_23 == ((float) (var_1_24 + (max (var_1_25 , var_1_26))))) : 1) : (var_1_23 == ((float) var_1_25)))) && ((! ((var_1_9 - var_1_22) > var_1_12)) ? (var_1_27 == ((unsigned long int) var_1_15)) : 1)
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

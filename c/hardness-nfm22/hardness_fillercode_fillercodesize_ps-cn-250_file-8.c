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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 999999999.675;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
unsigned long int var_1_9 = 1;
double var_1_10 = 63.25;
unsigned char var_1_11 = 0;
unsigned short int var_1_13 = 0;
unsigned short int var_1_15 = 17766;
unsigned short int var_1_16 = 28149;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 64;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 5;
unsigned char var_1_24 = 128;
signed long int var_1_25 = -16;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -4;
signed short int var_1_28 = -1;
signed short int var_1_29 = -5;
signed short int var_1_30 = 2;
unsigned char var_1_31 = 1;
signed short int var_1_32 = -256;
unsigned short int var_1_33 = 2;
unsigned short int var_1_34 = 32;
unsigned short int var_1_35 = 25;
signed long int var_1_36 = -1;
unsigned short int var_1_37 = 10;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
signed long int var_1_42 = 4;
signed long int var_1_43 = -2;
signed char var_1_44 = 8;
double var_1_45 = 8.6;
double var_1_46 = 100000000000.2;
double var_1_47 = -0.7;
signed char var_1_48 = 64;
signed char var_1_49 = 0;
signed char var_1_50 = 16;
unsigned char var_1_51 = 32;
signed long int var_1_52 = 256;
signed long int var_1_53 = -1;
signed char var_1_54 = 64;
signed char var_1_55 = -5;
signed char var_1_56 = -2;
signed char var_1_57 = 5;
signed char var_1_58 = 100;
signed char var_1_59 = 16;
signed char var_1_60 = 4;
unsigned long int var_1_61 = 128;
signed char var_1_62 = -64;
unsigned short int var_1_63 = 128;
double var_1_64 = 0.4;
unsigned short int var_1_65 = 5;
signed long int var_1_66 = 128;
signed long int var_1_67 = -64;
double var_1_68 = 16.4;
signed long int var_1_69 = 256;
double var_1_70 = 8.625;
unsigned char var_1_71 = 1;
signed char var_1_72 = -32;
signed char var_1_73 = 2;
double var_1_74 = 63.5;
signed long int var_1_75 = 5;
double var_1_76 = 10.5;
double var_1_77 = 4.6;
double var_1_78 = 5.25;
double var_1_79 = 499.4;
unsigned short int var_1_80 = 16;
float var_1_81 = 127.5;
float var_1_82 = 32.2;
unsigned char var_1_83 = 5;
double var_1_84 = 64.8;
unsigned short int var_1_85 = 16;
signed short int var_1_86 = 4;
unsigned long int var_1_87 = 10;
float var_1_88 = 128.5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_28 != (var_1_29 + var_1_30)) {
		if (var_1_31) {
			var_1_27 = (abs (var_1_32));
		}
	} else {
		var_1_27 = var_1_32;
	}


	// From: CodeObject2
	if (var_1_31) {
		var_1_33 = (max (var_1_34 , var_1_35));
	}


	// From: CodeObject3
	if (16 < var_1_27) {
		if (var_1_34 <= var_1_37) {
			if (var_1_35 < ((var_1_33 + var_1_34) ^ var_1_27)) {
				var_1_36 = (abs (var_1_29));
			}
		}
	}


	// From: CodeObject4
	if (var_1_30 > var_1_27) {
		var_1_38 = (var_1_39 && (var_1_40 && var_1_41));
	} else {
		if ((~ var_1_36) >= ((var_1_29 % var_1_42) / var_1_43)) {
			if (var_1_39 && var_1_40) {
				var_1_38 = (! var_1_41);
			} else {
				var_1_38 = (! var_1_41);
			}
		}
	}


	// From: CodeObject5
	if ((5.2 / var_1_45) <= (abs (var_1_46 * var_1_47))) {
		var_1_44 = (abs (var_1_48));
	} else {
		var_1_44 = (var_1_49 - var_1_50);
	}


	// From: CodeObject6
	if (var_1_40) {
		var_1_51 = 50;
	}


	// From: CodeObject7
	if (var_1_42 >= (~ (var_1_50 + var_1_36))) {
		if (var_1_31) {
			if (5u < var_1_43) {
				var_1_52 = (max (var_1_53 , var_1_33));
			}
		} else {
			if (var_1_29 <= -64) {
				if (var_1_53 >= var_1_51) {
					var_1_52 = (abs (max (var_1_35 , var_1_30)));
				}
			}
		}
	} else {
		var_1_52 = ((var_1_35 - (abs (var_1_32))) + var_1_37);
	}


	// From: CodeObject8
	if (var_1_40) {
		var_1_54 = (min ((min (var_1_50 , (abs (var_1_48)))) , var_1_49));
	}


	// From: CodeObject9
	if ((var_1_44 | var_1_48) < var_1_37) {
		var_1_55 = (min ((abs (var_1_56 + var_1_57)) , (abs (var_1_48))));
	} else {
		var_1_55 = ((abs (min (var_1_48 , var_1_57))) - ((var_1_58 - var_1_59) - var_1_60));
	}


	// From: CodeObject10
	if (var_1_48 != (var_1_57 + var_1_59)) {
		var_1_61 = (var_1_50 + var_1_33);
	}


	// From: CodeObject11
	if (64u <= var_1_35) {
		if ((~ var_1_48) <= (abs (-32))) {
			var_1_62 = (abs (var_1_57));
		} else {
			var_1_62 = (abs (var_1_49));
		}
	} else {
		if (var_1_27 < var_1_57) {
			var_1_62 = (max ((abs (var_1_49)) , 64));
		} else {
			var_1_62 = (max ((var_1_59 - var_1_58) , var_1_50));
		}
	}


	// From: CodeObject12
	if (var_1_45 < (abs (var_1_47))) {
		if (((max (var_1_47 , var_1_64)) / (abs (var_1_45))) > var_1_46) {
			var_1_63 = var_1_65;
		} else {
			var_1_63 = (max ((abs (min (1 , var_1_60))) , var_1_59));
		}
	}


	// From: CodeObject13
	if (var_1_38) {
		if (var_1_51 > 2) {
			var_1_66 = (abs (max ((abs (var_1_27)) , var_1_62)));
		} else {
			if (var_1_64 < var_1_46) {
				var_1_66 = var_1_60;
			}
		}
	} else {
		var_1_66 = var_1_67;
	}


	// From: CodeObject14
	if ((min (var_1_48 , var_1_44)) >= (min (var_1_58 , (max (var_1_67 , var_1_69))))) {
		if (var_1_28 >= (min (var_1_50 , var_1_36))) {
			if (! var_1_38) {
				var_1_68 = (abs (var_1_70));
			}
		}
	}


	// From: CodeObject15
	if (var_1_31 || var_1_40) {
		var_1_71 = ((min (var_1_50 , (var_1_59 + var_1_60))) + var_1_58);
	} else {
		var_1_71 = (var_1_60 + 10);
	}


	// From: CodeObject16
	if ((var_1_65 | 32) < (abs (abs (var_1_63)))) {
		if (var_1_42 >= (abs (var_1_65))) {
			var_1_72 = ((var_1_58 - var_1_60) - (max (64 , var_1_50)));
		} else {
			var_1_72 = (var_1_56 + -1);
		}
	} else {
		var_1_72 = (max (var_1_49 , (max ((var_1_60 + var_1_57) , var_1_73))));
	}


	// From: CodeObject17
	if ((- var_1_71) <= ((256 ^ var_1_75) + (var_1_57 & var_1_55))) {
		var_1_74 = ((min ((abs (var_1_76)) , var_1_77)) + (max (var_1_78 , var_1_79)));
	}


	// From: CodeObject18
	if (var_1_66 >= var_1_50) {
		if (((var_1_65 ^ 50) < var_1_27) && var_1_31) {
			var_1_80 = ((max (var_1_58 , (31931 - var_1_60))) + (min (var_1_71 , (min (var_1_50 , var_1_59)))));
		} else {
			var_1_80 = (min (var_1_60 , ((min (var_1_58 , var_1_59)) + var_1_51)));
		}
	} else {
		var_1_80 = (abs (abs (var_1_65)));
	}


	// From: CodeObject19
	if ((max (var_1_65 , var_1_75)) < var_1_49) {
		if (((var_1_30 * var_1_58) % var_1_42) > var_1_67) {
			var_1_81 = (var_1_79 + (max (var_1_82 , var_1_78)));
		}
	}


	// From: CodeObject20
	if ((var_1_37 * var_1_33) == var_1_61) {
		var_1_83 = var_1_59;
	}


	// From: CodeObject21
	if (var_1_34 >= var_1_35) {
		if (var_1_54 < var_1_61) {
			var_1_84 = (abs (min (var_1_79 , var_1_82)));
		}
	}


	// From: CodeObject22
	if (var_1_73 < ((1 / var_1_43) ^ (var_1_27 | var_1_63))) {
		var_1_85 = (44109 - var_1_51);
	} else {
		if ((abs (var_1_32)) <= var_1_52) {
			if (var_1_41) {
				var_1_85 = 10;
			} else {
				var_1_85 = var_1_83;
			}
		}
	}


	// From: CodeObject23
	if (var_1_41) {
		var_1_86 = var_1_71;
	} else {
		var_1_86 = var_1_49;
	}


	// From: CodeObject24
	if (var_1_41) {
		var_1_87 = var_1_37;
	}


	// From: CodeObject25
	if (var_1_32 < var_1_30) {
		if (var_1_43 < (var_1_63 % (min (16 , 128)))) {
			if ((var_1_35 & var_1_69) > var_1_85) {
				var_1_88 = var_1_70;
			} else {
				var_1_88 = var_1_78;
			}
		}
	}


	// From: Req1Batch8PS_CN_250
	if (last_1_var_1_13 == (last_1_var_1_13 % var_1_4)) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req5Batch8PS_CN_250
	if (var_1_10 == var_1_1) {
		if (var_1_11) {
			var_1_19 = (((32 + var_1_20) + var_1_21) - (var_1_22 + var_1_23));
		} else {
			var_1_19 = (var_1_24 - var_1_23);
		}
	} else {
		var_1_19 = var_1_24;
	}


	// From: Req7Batch8PS_CN_250
	if (var_1_19 < (var_1_21 / var_1_20)) {
		if (var_1_19 > var_1_19) {
			var_1_26 = (max ((min (var_1_22 , var_1_24)) , var_1_23));
		} else {
			var_1_26 = var_1_22;
		}
	}


	// From: Req2Batch8PS_CN_250
	if (var_1_1 >= var_1_6) {
		var_1_7 = var_1_19;
	}


	// From: Req3Batch8PS_CN_250
	if (((var_1_6 * var_1_5) / var_1_10) > var_1_1) {
		if (var_1_11) {
			var_1_9 = var_1_26;
		} else {
			var_1_9 = var_1_26;
		}
	}


	// From: Req4Batch8PS_CN_250
	if (var_1_7 < var_1_9) {
		var_1_13 = (var_1_26 + ((max (var_1_15 , var_1_16)) - (var_1_19 + var_1_19)));
	}


	// From: Req6Batch8PS_CN_250
	if ((25.3 * var_1_5) != var_1_1) {
		if (var_1_11) {
			if (var_1_15 <= var_1_13) {
				var_1_25 = var_1_26;
			}
		} else {
			var_1_25 = var_1_22;
		}
	} else {
		var_1_25 = var_1_20;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 32);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 64);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 64);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32768);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32766);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 65535);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483648);
	assume_abort_if_not(var_1_42 <= 2147483647);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483648);
	assume_abort_if_not(var_1_43 <= 2147483647);
	assume_abort_if_not(var_1_43 != 0);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	assume_abort_if_not(var_1_45 != 0.0F);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -126);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -1);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_53 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_53 >= -2147483647);
	assume_abort_if_not(var_1_53 <= 2147483646);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -63);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -63);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 94);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 31);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -922337.2036854776000e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854776000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 65534);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -2147483647);
	assume_abort_if_not(var_1_67 <= 2147483646);
	var_1_69 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_69 >= -2147483648);
	assume_abort_if_not(var_1_69 <= 2147483647);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -922337.2036854765600e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854765600e+12F && var_1_70 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -127);
	assume_abort_if_not(var_1_73 <= 126);
	var_1_75 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_75 >= -2147483648);
	assume_abort_if_not(var_1_75 <= 2147483647);
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= -461168.6018427382800e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 4611686.018427382800e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -461168.6018427382800e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427382800e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_78 >= -461168.6018427382800e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427382800e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= -461168.6018427382800e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427382800e+12F && var_1_79 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= -461168.6018427382800e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427382800e+12F && var_1_82 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
}

int property() {
	return (((((((last_1_var_1_13 == (last_1_var_1_13 % var_1_4)) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((var_1_1 >= var_1_6) ? (var_1_7 == ((signed long int) var_1_19)) : 1)) && ((((var_1_6 * var_1_5) / var_1_10) > var_1_1) ? (var_1_11 ? (var_1_9 == ((unsigned long int) var_1_26)) : (var_1_9 == ((unsigned long int) var_1_26))) : 1)) && ((var_1_7 < var_1_9) ? (var_1_13 == ((unsigned short int) (var_1_26 + ((max (var_1_15 , var_1_16)) - (var_1_19 + var_1_19))))) : 1)) && ((var_1_10 == var_1_1) ? (var_1_11 ? (var_1_19 == ((unsigned char) (((32 + var_1_20) + var_1_21) - (var_1_22 + var_1_23)))) : (var_1_19 == ((unsigned char) (var_1_24 - var_1_23)))) : (var_1_19 == ((unsigned char) var_1_24)))) && (((25.3 * var_1_5) != var_1_1) ? (var_1_11 ? ((var_1_15 <= var_1_13) ? (var_1_25 == ((signed long int) var_1_26)) : 1) : (var_1_25 == ((signed long int) var_1_22))) : (var_1_25 == ((signed long int) var_1_20)))) && ((var_1_19 < (var_1_21 / var_1_20)) ? ((var_1_19 > var_1_19) ? (var_1_26 == ((unsigned char) (max ((min (var_1_22 , var_1_24)) , var_1_23)))) : (var_1_26 == ((unsigned char) var_1_22))) : 1)
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

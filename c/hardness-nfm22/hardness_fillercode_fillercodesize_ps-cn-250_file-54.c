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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch54PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -4;
signed short int var_1_4 = 256;
signed short int var_1_5 = 0;
signed short int var_1_6 = 25;
signed short int var_1_8 = 100;
unsigned char var_1_9 = 1;
signed short int var_1_10 = -4;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 64;
double var_1_15 = 10.3;
double var_1_16 = 128.6;
unsigned long int var_1_17 = 2600113953;
float var_1_18 = 8.25;
float var_1_19 = 31.5;
float var_1_20 = 2.625;
float var_1_21 = 999999999999999.2;
float var_1_22 = 127.5;
float var_1_23 = 4.8;
signed char var_1_24 = 64;
float var_1_25 = 1000000.2;
signed char var_1_26 = 10;
float var_1_27 = 50.3;
float var_1_28 = 10.5;
float var_1_29 = 100000000000.65;
float var_1_30 = 25.4;
float var_1_31 = 255.75;
float var_1_32 = 256.625;
unsigned short int var_1_33 = 1;
signed long int var_1_34 = -128;
signed long int var_1_35 = -256;
unsigned short int var_1_36 = 50;
float var_1_37 = 15.75;
signed long int var_1_38 = -100;
signed short int var_1_39 = 16;
unsigned char var_1_40 = 16;
unsigned char var_1_41 = 1;
float var_1_42 = 3.4;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 32;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 16;
double var_1_48 = 63.25;
float var_1_49 = 256.375;
float var_1_50 = 128.8;
double var_1_51 = 99.8;
double var_1_52 = 0.5;
signed long int var_1_53 = -50;
signed short int var_1_54 = 16;
signed short int var_1_55 = 8;
signed long int var_1_56 = 256;
signed short int var_1_57 = 32526;
signed short int var_1_58 = 4;
unsigned char var_1_59 = 5;
unsigned char var_1_60 = 128;
unsigned char var_1_61 = 16;
unsigned char var_1_62 = 0;
signed long int var_1_63 = -16;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 0;
float var_1_70 = 10.9;
float var_1_71 = 1.7;
float var_1_72 = 64.6;
float var_1_73 = 0.0;
float var_1_74 = 99.75;
signed short int var_1_75 = -10;
unsigned long int var_1_76 = 16;
float var_1_77 = 16.3;
unsigned long int var_1_78 = 3357728940;
signed char var_1_79 = -5;
float var_1_80 = 3.618;
signed char var_1_81 = -4;
signed long int var_1_82 = -2;
signed char var_1_83 = 100;
unsigned long int var_1_84 = 16;
signed long int var_1_85 = -10;
signed char var_1_86 = -1;
unsigned char var_1_87 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_24 > -64) {
		var_1_23 = (max (49.2f , 63.125f));
	}


	// From: CodeObject2
	if (var_1_24 >= var_1_26) {
		var_1_25 = (max ((abs (min (9.999999999999962E13f , var_1_27))) , (abs (var_1_28))));
	} else {
		var_1_25 = ((var_1_29 + 4.1f) + (var_1_30 + (max (var_1_31 , var_1_32))));
	}


	// From: CodeObject3
	if ((5 / (min (var_1_34 , var_1_35))) <= -25) {
		var_1_33 = (abs (var_1_36));
	} else {
		if (var_1_23 <= var_1_37) {
			if (((var_1_26 ^ var_1_34) | var_1_35) > (abs (max (var_1_24 , var_1_36)))) {
				var_1_33 = var_1_36;
			}
		} else {
			if (var_1_31 < var_1_32) {
				var_1_33 = var_1_36;
			}
		}
	}


	// From: CodeObject4
	if ((var_1_34 * var_1_26) >= var_1_24) {
		if ((- (abs (var_1_36))) <= var_1_33) {
			if (var_1_34 < (var_1_36 * (abs (var_1_33)))) {
				var_1_38 = (min ((abs (2)) , ((max (var_1_24 , 4)) + var_1_26)));
			} else {
				var_1_38 = (min (8 , var_1_33));
			}
		} else {
			var_1_38 = (var_1_26 + (min ((abs (var_1_24)) , (max (-5 , var_1_36)))));
		}
	} else {
		var_1_38 = (abs (var_1_33));
	}


	// From: CodeObject5
	if (var_1_30 >= var_1_27) {
		var_1_39 = (abs (var_1_26));
	} else {
		var_1_39 = (abs (var_1_26));
	}


	// From: CodeObject6
	if ((var_1_33 >> var_1_39) > (var_1_26 / (min (var_1_35 , var_1_34)))) {
		var_1_40 = (abs (var_1_41));
	}


	// From: CodeObject7
	if ((- var_1_31) >= var_1_29) {
		var_1_42 = var_1_30;
	} else {
		var_1_42 = (max (var_1_30 , var_1_28));
	}


	// From: CodeObject8
	if (var_1_24 >= var_1_36) {
		var_1_43 = (abs (max (var_1_41 , var_1_44)));
	} else {
		if (var_1_45 || var_1_46) {
			var_1_43 = (min (var_1_41 , (max ((128 - var_1_47) , (abs (25))))));
		}
	}


	// From: CodeObject9
	if (var_1_30 < ((abs (var_1_25)) - (max (var_1_49 , var_1_50)))) {
		if (var_1_24 >= var_1_40) {
			var_1_48 = (var_1_51 - var_1_52);
		} else {
			var_1_48 = ((abs (abs (var_1_31))) - var_1_51);
		}
	}


	// From: CodeObject10
	if ((var_1_35 >> (var_1_54 - var_1_55)) < ((var_1_24 | var_1_43) % (abs (var_1_56)))) {
		if (var_1_45) {
			var_1_53 = (max (var_1_33 , (var_1_44 - var_1_43)));
		} else {
			var_1_53 = (var_1_36 - (abs (var_1_26)));
		}
	} else {
		if (var_1_41 >= (var_1_44 | var_1_55)) {
			if (((var_1_57 - var_1_58) - 16) > (abs (var_1_54))) {
				var_1_53 = (min ((max (var_1_41 , var_1_40)) , (abs (min (8 , var_1_44)))));
			} else {
				var_1_53 = (abs (min (var_1_40 , var_1_43)));
			}
		}
	}


	// From: CodeObject11
	if (var_1_34 > -200) {
		var_1_59 = (max ((var_1_60 - (min (var_1_55 , var_1_54))) , (var_1_47 + (min (var_1_61 , var_1_62)))));
	} else {
		if ((~ var_1_43) <= (var_1_63 / var_1_54)) {
			var_1_59 = (abs (var_1_47));
		} else {
			if (! (var_1_45 || var_1_46)) {
				var_1_59 = (abs (var_1_44));
			} else {
				var_1_59 = (abs (min (var_1_41 , var_1_44)));
			}
		}
	}


	// From: CodeObject12
	if ((256 << var_1_63) > var_1_43) {
		var_1_64 = ((var_1_65 || var_1_66) || var_1_67);
	} else {
		if (var_1_30 <= var_1_51) {
			var_1_64 = (! ((var_1_67 || var_1_68) && var_1_69));
		}
	}


	// From: CodeObject13
	if (var_1_45) {
		if (var_1_51 < var_1_49) {
			if (var_1_57 >= var_1_43) {
				var_1_70 = ((var_1_71 + var_1_72) - (max ((var_1_73 - var_1_74) , var_1_51)));
			} else {
				var_1_70 = (abs (var_1_71));
			}
		}
	}


	// From: CodeObject14
	if (var_1_53 == var_1_38) {
		var_1_75 = ((min ((max (var_1_62 , var_1_54)) , var_1_55)) - var_1_61);
	} else {
		if ((- (max (var_1_52 , var_1_28))) < ((128.22 - var_1_49) + var_1_37)) {
			var_1_75 = (abs (2));
		}
	}


	// From: CodeObject15
	if (var_1_24 >= (min (var_1_53 , 32))) {
		if (var_1_29 <= (50.5f - (max (var_1_73 , var_1_77)))) {
			var_1_76 = (abs (var_1_55));
		} else {
			var_1_76 = 0u;
		}
	} else {
		var_1_76 = (min (var_1_61 , (var_1_78 - (var_1_58 + var_1_55))));
	}


	// From: CodeObject16
	if (((var_1_61 % var_1_34) >= var_1_44) || (var_1_66 || (var_1_35 <= var_1_26))) {
		var_1_79 = (max (var_1_55 , var_1_54));
	} else {
		var_1_79 = 64;
	}


	// From: CodeObject17
	var_1_80 = (max ((abs (abs (var_1_72))) , (abs (var_1_28))));


	// From: CodeObject18
	if (var_1_50 >= ((var_1_71 + var_1_72) - (max (var_1_77 , var_1_74)))) {
		if (var_1_46) {
			var_1_81 = var_1_54;
		}
	}


	// From: CodeObject19
	if (var_1_44 != var_1_76) {
		if (var_1_51 > 10.2) {
			var_1_82 = var_1_59;
		}
	}


	// From: CodeObject20
	var_1_83 = 25;


	// From: CodeObject21
	var_1_84 = var_1_43;


	// From: CodeObject22
	if (var_1_45) {
		var_1_85 = var_1_75;
	} else {
		var_1_85 = var_1_58;
	}


	// From: CodeObject23
	if (var_1_68) {
		var_1_86 = var_1_55;
	}


	// From: CodeObject24
	if (var_1_26 > ((var_1_75 / var_1_34) * (max (var_1_85 , -1)))) {
		if (var_1_45) {
			if (var_1_51 <= var_1_27) {
				var_1_87 = var_1_65;
			}
		}
	} else {
		var_1_87 = var_1_68;
	}


	// From: Req2Batch54PS_CN_250
	if (last_1_var_1_9) {
		if (var_1_5 == var_1_4) {
			var_1_6 = (min ((abs (var_1_5)) , (var_1_4 - var_1_8)));
		} else {
			var_1_6 = var_1_8;
		}
	} else {
		var_1_6 = var_1_4;
	}


	// From: Req6Batch54PS_CN_250
	if (-32 >= (var_1_5 - var_1_8)) {
		if (var_1_10 > var_1_6) {
			var_1_18 = ((var_1_19 - var_1_20) + (var_1_21 + var_1_22));
		} else {
			var_1_18 = var_1_20;
		}
	} else {
		var_1_18 = var_1_19;
	}


	// From: Req5Batch54PS_CN_250
	if (var_1_18 < (max (var_1_18 , (var_1_15 - var_1_16)))) {
		var_1_14 = (var_1_17 - (var_1_8 + var_1_4));
	}


	// From: Req3Batch54PS_CN_250
	unsigned long int stepLocal_0 = var_1_14;
	if (((var_1_8 % var_1_10) * (8 + var_1_14)) >= stepLocal_0) {
		var_1_9 = ((! var_1_11) || var_1_12);
	} else {
		var_1_9 = (! var_1_12);
	}


	// From: Req1Batch54PS_CN_250
	if (var_1_18 > var_1_18) {
		var_1_1 = ((min ((2 + var_1_4) , var_1_5)) - 2);
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req4Batch54PS_CN_250
	unsigned long int stepLocal_1 = min (var_1_14 , var_1_5);
	if (((var_1_8 * var_1_1) + var_1_4) >= stepLocal_1) {
		var_1_13 = var_1_12;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32768);
	assume_abort_if_not(var_1_10 <= 32767);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -128);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -230584.3009213691390e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691390e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -230584.3009213691390e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -230584.3009213691390e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691390e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -230584.3009213691390e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691390e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483648);
	assume_abort_if_not(var_1_34 <= 2147483647);
	assume_abort_if_not(var_1_34 != 0);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	assume_abort_if_not(var_1_35 != 0);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_54 >= 16);
	assume_abort_if_not(var_1_54 <= 32);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 16);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= -2147483647);
	assume_abort_if_not(var_1_56 <= 2147483647);
	assume_abort_if_not(var_1_56 != 0);
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= 16383);
	assume_abort_if_not(var_1_57 <= 32767);
	var_1_58 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 16384);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 127);
	assume_abort_if_not(var_1_60 <= 254);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 127);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= -2147483648);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 0);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 0);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 1);
	assume_abort_if_not(var_1_68 <= 1);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 4611686.018427382800e+12F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 2147483647);
	assume_abort_if_not(var_1_78 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return ((((((var_1_18 > var_1_18) ? (var_1_1 == ((signed short int) ((min ((2 + var_1_4) , var_1_5)) - 2))) : (var_1_1 == ((signed short int) var_1_4))) && (last_1_var_1_9 ? ((var_1_5 == var_1_4) ? (var_1_6 == ((signed short int) (min ((abs (var_1_5)) , (var_1_4 - var_1_8))))) : (var_1_6 == ((signed short int) var_1_8))) : (var_1_6 == ((signed short int) var_1_4)))) && ((((var_1_8 % var_1_10) * (8 + var_1_14)) >= var_1_14) ? (var_1_9 == ((unsigned char) ((! var_1_11) || var_1_12))) : (var_1_9 == ((unsigned char) (! var_1_12))))) && ((((var_1_8 * var_1_1) + var_1_4) >= (min (var_1_14 , var_1_5))) ? (var_1_13 == ((unsigned char) var_1_12)) : 1)) && ((var_1_18 < (max (var_1_18 , (var_1_15 - var_1_16)))) ? (var_1_14 == ((unsigned long int) (var_1_17 - (var_1_8 + var_1_4)))) : 1)) && ((-32 >= (var_1_5 - var_1_8)) ? ((var_1_10 > var_1_6) ? (var_1_18 == ((float) ((var_1_19 - var_1_20) + (var_1_21 + var_1_22)))) : (var_1_18 == ((float) var_1_20))) : (var_1_18 == ((float) var_1_19)))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch45PS_CN_250.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -10;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 57653;
unsigned short int var_1_9 = 4;
signed char var_1_10 = -4;
signed char var_1_11 = 2;
signed char var_1_12 = 64;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed char var_1_15 = 32;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 50;
float var_1_19 = 100.875;
unsigned char var_1_20 = 1;
float var_1_21 = 24.5;
float var_1_22 = 499.8;
float var_1_23 = 8.25;
float var_1_24 = 100.75;
double var_1_25 = 32.15;
signed short int var_1_26 = 0;
signed long int var_1_27 = -16;
double var_1_28 = 31.56;
double var_1_29 = 0.9;
unsigned short int var_1_30 = 2;
unsigned short int var_1_31 = 128;
unsigned short int var_1_32 = 128;
signed char var_1_33 = 25;
signed char var_1_34 = 25;
signed short int var_1_35 = -1;
signed long int var_1_36 = -256;
signed char var_1_37 = -32;
signed char var_1_38 = -32;
signed char var_1_39 = -8;
signed char var_1_40 = -10;
double var_1_41 = 49.3;
double var_1_42 = 0.5;
double var_1_43 = 4.8;
unsigned char var_1_44 = 1;
signed char var_1_45 = 100;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
float var_1_49 = 64.7;
float var_1_50 = 0.0;
float var_1_51 = 999999999.8;
double var_1_52 = 32.5;
unsigned short int var_1_53 = 1;
unsigned short int var_1_54 = 5;
double var_1_55 = 127.5;
unsigned long int var_1_56 = 3917644945;
unsigned char var_1_57 = 0;
unsigned long int var_1_58 = 16;
unsigned long int var_1_59 = 4;
unsigned char var_1_60 = 1;
float var_1_61 = 0.0;
unsigned char var_1_62 = 0;
unsigned long int var_1_63 = 2;
unsigned char var_1_64 = 1;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
unsigned short int var_1_67 = 10000;
signed long int var_1_68 = -100;
unsigned char var_1_69 = 1;
signed short int var_1_70 = -50;
double var_1_71 = 1.25;
unsigned short int var_1_72 = 50;
double var_1_73 = 256.25;
unsigned char var_1_74 = 100;
unsigned char var_1_75 = 200;
unsigned char var_1_76 = 8;
unsigned char var_1_77 = 0;
signed char var_1_78 = -8;
signed short int var_1_79 = -16;
double var_1_80 = -0.75;
unsigned char var_1_81 = 128;
double var_1_82 = 3.375;
unsigned char var_1_83 = 0;
float var_1_85 = 4.4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_20) {
		var_1_19 = (max ((min (var_1_21 , var_1_22)) , (min (var_1_23 , var_1_24))));
	}


	// From: CodeObject2
	if (var_1_20) {
		if ((abs (var_1_26)) <= var_1_27) {
			var_1_25 = (var_1_28 - (max (var_1_29 , (abs (0.4)))));
		} else {
			var_1_25 = (abs (var_1_22));
		}
	}


	// From: CodeObject3
	var_1_30 = (var_1_31 + var_1_32);


	// From: CodeObject4
	if (! (var_1_31 > var_1_27)) {
		var_1_33 = (abs (var_1_34));
	}


	// From: CodeObject5
	if (var_1_25 > (var_1_23 + var_1_29)) {
		var_1_35 = (abs (var_1_33));
	}


	// From: CodeObject6
	if (var_1_20 && (var_1_34 > (var_1_30 + var_1_27))) {
		if (! ((var_1_34 % var_1_37) > (abs (var_1_26)))) {
			var_1_36 = (var_1_30 - var_1_31);
		} else {
			var_1_36 = -32;
		}
	}


	// From: CodeObject7
	if (var_1_36 <= (abs (var_1_26))) {
		var_1_38 = ((abs (var_1_39)) + var_1_40);
	}


	// From: CodeObject8
	if (var_1_28 <= var_1_23) {
		var_1_41 = (abs (abs (7.5)));
	} else {
		if (var_1_27 != var_1_26) {
			var_1_41 = (abs (min ((min (var_1_23 , var_1_42)) , var_1_29)));
		} else {
			var_1_41 = (abs (abs (var_1_43)));
		}
	}


	// From: CodeObject9
	if (var_1_40 != (min (var_1_27 , (abs (var_1_45))))) {
		if ((~ var_1_32) >= (var_1_34 + var_1_45)) {
			if ((max (var_1_37 , var_1_31)) >= var_1_26) {
				var_1_44 = var_1_47;
			}
		}
	} else {
		var_1_44 = var_1_48;
	}


	// From: CodeObject10
	if (var_1_42 <= var_1_24) {
		var_1_49 = ((var_1_50 - var_1_51) - var_1_29);
	}


	// From: CodeObject11
	var_1_52 = (min (var_1_42 , var_1_22));


	// From: CodeObject12
	if (var_1_42 >= (max (var_1_22 , var_1_29))) {
		var_1_53 = (max ((max (var_1_32 , var_1_31)) , var_1_54));
	} else {
		if ((abs (-25)) != (abs (var_1_39))) {
			var_1_53 = var_1_31;
		} else {
			var_1_53 = (abs (55746 - var_1_31));
		}
	}


	// From: CodeObject13
	if (var_1_51 <= ((min (var_1_23 , var_1_28)) + var_1_50)) {
		if ((var_1_36 + (var_1_56 - var_1_30)) > var_1_54) {
			var_1_55 = (abs (1.000000000001E11));
		} else {
			var_1_55 = var_1_24;
		}
	}


	// From: CodeObject14
	if (var_1_28 >= var_1_19) {
		var_1_57 = (((var_1_32 + var_1_36) > var_1_38) || (! (var_1_47 && var_1_48)));
	}


	// From: CodeObject15
	if ((var_1_51 <= var_1_22) || var_1_48) {
		if (var_1_42 < 0.95) {
			var_1_58 = var_1_30;
		}
	} else {
		var_1_58 = (abs (var_1_30 + 1u));
	}


	// From: CodeObject16
	var_1_59 = var_1_54;


	// From: CodeObject17
	if (var_1_43 >= var_1_42) {
		if (var_1_24 <= ((var_1_61 - var_1_51) - (min (var_1_50 , 0.1f)))) {
			if (var_1_26 < (var_1_35 | (var_1_31 - var_1_32))) {
				var_1_60 = var_1_48;
			} else {
				var_1_60 = (var_1_48 || var_1_62);
			}
		}
	}


	// From: CodeObject18
	if (var_1_62) {
		if (var_1_40 == var_1_32) {
			if (((var_1_45 % var_1_37) + -128) >= -256) {
				if ((var_1_53 + var_1_27) < var_1_58) {
					var_1_63 = var_1_30;
				} else {
					if (var_1_48) {
						var_1_63 = (var_1_32 + (abs (var_1_53)));
					}
				}
			}
		} else {
			var_1_63 = var_1_53;
		}
	}


	// From: CodeObject19
	if (var_1_29 == var_1_41) {
		var_1_64 = var_1_47;
	}


	// From: CodeObject20
	if (var_1_43 < (abs (min (var_1_28 , var_1_41)))) {
		var_1_65 = (var_1_66 && var_1_47);
	}


	// From: CodeObject21
	var_1_67 = (max (var_1_32 , var_1_54));


	// From: CodeObject22
	if (var_1_20) {
		if (var_1_24 < var_1_52) {
			var_1_68 = (abs (max ((abs (-10)) , (min (var_1_32 , var_1_45)))));
		} else {
			if ((abs (5)) >= var_1_39) {
				var_1_68 = (abs (abs (var_1_45)));
			}
		}
	}


	// From: CodeObject23
	if (var_1_53 < var_1_67) {
		var_1_69 = (var_1_47 && var_1_66);
	} else {
		var_1_69 = var_1_62;
	}


	// From: CodeObject24
	var_1_70 = (max (var_1_34 , var_1_39));


	// From: CodeObject25
	if (var_1_30 >= (- (var_1_72 & var_1_31))) {
		var_1_71 = (255.6 + (max (var_1_51 , 49.2)));
	}


	// From: CodeObject26
	if (var_1_62) {
		var_1_73 = (abs (var_1_24));
	}


	// From: CodeObject27
	if (var_1_27 < var_1_53) {
		var_1_74 = (var_1_75 - var_1_76);
	}


	// From: CodeObject28
	if (2 >= var_1_33) {
		if (var_1_44 && var_1_65) {
			if ((var_1_59 | (abs (var_1_37))) < (var_1_53 | (var_1_54 ^ var_1_76))) {
				if ((min (var_1_67 , var_1_75)) < (-10 % var_1_37)) {
					var_1_77 = (! var_1_47);
				}
			}
		}
	} else {
		if (var_1_20) {
			var_1_77 = (var_1_69 && var_1_62);
		} else {
			var_1_77 = (var_1_48 || (! (var_1_66 && var_1_47)));
		}
	}


	// From: CodeObject29
	if (var_1_77 && var_1_57) {
		if ((var_1_50 - (abs (var_1_73))) >= 1000.2) {
			if (var_1_54 > var_1_70) {
				var_1_78 = (min ((abs (abs (var_1_40))) , var_1_34));
			}
		} else {
			var_1_78 = var_1_40;
		}
	} else {
		var_1_78 = var_1_34;
	}


	// From: CodeObject30
	var_1_79 = var_1_39;


	// From: CodeObject31
	var_1_80 = var_1_23;


	// From: CodeObject32
	if (var_1_44) {
		var_1_81 = 0;
	} else {
		var_1_81 = var_1_75;
	}


	// From: CodeObject33
	if (var_1_23 >= var_1_49) {
		if (var_1_64) {
			var_1_82 = (abs (var_1_24));
		}
	}


	// From: CodeObject34
	if (var_1_61 == var_1_85) {
		if ((abs (var_1_81)) < var_1_36) {
			var_1_83 = var_1_48;
		}
	}


	// From: Req4Batch45PS_CN_250
	if (var_1_8 > var_1_9) {
		var_1_10 = (abs (var_1_11));
	} else {
		var_1_10 = (var_1_12 - (var_1_13 - 8));
	}


	// From: Req7Batch45PS_CN_250
	if (var_1_2) {
		var_1_16 = (var_1_5 || var_1_17);
	}


	// From: Req8Batch45PS_CN_250
	var_1_18 = var_1_8;


	// From: Req2Batch45PS_CN_250
	unsigned long int stepLocal_2 = var_1_18;
	signed char stepLocal_1 = var_1_10;
	if (stepLocal_2 <= var_1_10) {
		if (var_1_10 <= stepLocal_1) {
			var_1_6 = var_1_10;
		}
	}


	// From: Req3Batch45PS_CN_250
	var_1_7 = (min ((var_1_8 - var_1_18) , var_1_9));


	// From: Req5Batch45PS_CN_250
	if (! var_1_16) {
		if (var_1_16) {
			var_1_14 = ((32 + var_1_10) + (abs (var_1_11)));
		} else {
			var_1_14 = -50;
		}
	}


	// From: Req6Batch45PS_CN_250
	signed long int stepLocal_3 = var_1_6 * (var_1_6 + var_1_8);
	if (var_1_14 >= stepLocal_3) {
		var_1_15 = (min ((max (var_1_13 , var_1_11)) , (abs (var_1_12))));
	} else {
		var_1_15 = (min (var_1_11 , var_1_12));
	}


	// From: Req1Batch45PS_CN_250
	signed long int stepLocal_0 = ~ var_1_15;
	if (var_1_16) {
		if (stepLocal_0 <= (var_1_10 + 100000000)) {
			if (! var_1_16) {
				var_1_1 = (abs (var_1_15));
			} else {
				var_1_1 = (var_1_15 + 32);
			}
		} else {
			var_1_1 = var_1_15;
		}
	} else {
		var_1_1 = var_1_15;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -126);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32767);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -126);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -128);
	assume_abort_if_not(var_1_37 <= 127);
	assume_abort_if_not(var_1_37 != 0);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854765600e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -127);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 4611686.018427382800e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 65534);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 2147483647);
	assume_abort_if_not(var_1_56 <= 4294967295);
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 4611686.018427387900e+12F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 1);
	assume_abort_if_not(var_1_66 <= 1);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 65535);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 127);
	assume_abort_if_not(var_1_75 <= 254);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 127);
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= -922337.2036854776000e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854776000e+12F && var_1_85 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_16 ? (((~ var_1_15) <= (var_1_10 + 100000000)) ? ((! var_1_16) ? (var_1_1 == ((signed short int) (abs (var_1_15)))) : (var_1_1 == ((signed short int) (var_1_15 + 32)))) : (var_1_1 == ((signed short int) var_1_15))) : (var_1_1 == ((signed short int) var_1_15))) && ((var_1_18 <= var_1_10) ? ((var_1_10 <= var_1_10) ? (var_1_6 == ((signed long int) var_1_10)) : 1) : 1)) && (var_1_7 == ((unsigned short int) (min ((var_1_8 - var_1_18) , var_1_9))))) && ((var_1_8 > var_1_9) ? (var_1_10 == ((signed char) (abs (var_1_11)))) : (var_1_10 == ((signed char) (var_1_12 - (var_1_13 - 8)))))) && ((! var_1_16) ? (var_1_16 ? (var_1_14 == ((signed short int) ((32 + var_1_10) + (abs (var_1_11))))) : (var_1_14 == ((signed short int) -50))) : 1)) && ((var_1_14 >= (var_1_6 * (var_1_6 + var_1_8))) ? (var_1_15 == ((signed char) (min ((max (var_1_13 , var_1_11)) , (abs (var_1_12)))))) : (var_1_15 == ((signed char) (min (var_1_11 , var_1_12)))))) && (var_1_2 ? (var_1_16 == ((unsigned char) (var_1_5 || var_1_17))) : 1)) && (var_1_18 == ((unsigned long int) var_1_8))
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

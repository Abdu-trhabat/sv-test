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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch23PS_CN_250.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
float var_1_4 = 1.4;
float var_1_7 = 9.25;
float var_1_8 = 1.2;
float var_1_9 = 0.0;
float var_1_10 = 3.1;
float var_1_11 = 500.5;
signed long int var_1_12 = 0;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 8;
unsigned char var_1_17 = 64;
unsigned long int var_1_18 = 25;
signed char var_1_19 = -100;
signed short int var_1_20 = -4;
unsigned short int var_1_21 = 200;
unsigned short int var_1_22 = 54878;
double var_1_23 = 9999.8;
float var_1_24 = -0.25;
signed char var_1_25 = 50;
signed char var_1_26 = 100;
double var_1_27 = 128.6;
unsigned long int var_1_28 = 500;
unsigned long int var_1_29 = 4;
unsigned long int var_1_30 = 8;
double var_1_31 = 1.4;
signed char var_1_32 = 1;
signed char var_1_33 = -1;
unsigned char var_1_34 = 1;
signed char var_1_35 = -64;
unsigned char var_1_36 = 32;
float var_1_37 = 0.42500000000000004;
float var_1_38 = 10000000.6;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 16;
unsigned char var_1_41 = 5;
unsigned short int var_1_42 = 8;
signed char var_1_43 = -16;
double var_1_44 = 127.625;
unsigned char var_1_45 = 1;
double var_1_46 = 100.6;
double var_1_47 = 0.4;
float var_1_48 = 5.75;
float var_1_49 = 1.3;
float var_1_50 = 0.75;
float var_1_51 = 0.0;
float var_1_52 = 3.5;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
signed long int var_1_58 = -32;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 2;
signed long int var_1_62 = -10000000;
signed long int var_1_63 = -10;
unsigned char var_1_64 = 1;
unsigned short int var_1_65 = 256;
unsigned char var_1_66 = 0;
unsigned short int var_1_67 = 256;
signed char var_1_68 = 4;
signed char var_1_69 = 4;
signed short int var_1_70 = 64;
unsigned short int var_1_71 = 16;
unsigned short int var_1_72 = 5;
unsigned char var_1_73 = 1;
float var_1_74 = 31.4;
unsigned long int var_1_75 = 500;
signed char var_1_76 = -5;
unsigned short int var_1_77 = 1;
unsigned short int var_1_78 = 50937;
signed char var_1_79 = -32;
unsigned short int var_1_80 = 100;
unsigned short int var_1_81 = 53943;
signed long int var_1_82 = 0;
double var_1_83 = 500.25;
double var_1_84 = 15.25;
unsigned short int var_1_85 = 64;
unsigned short int var_1_86 = 4;
float var_1_87 = -0.5;
float var_1_88 = 9999.2;

// Calibration values

// Last'ed variables
signed char last_1_var_1_19 = -100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_27 < 256.5) {
		if (((max (var_1_28 , var_1_29)) > var_1_30) && (var_1_27 < var_1_31)) {
			var_1_26 = (max (var_1_32 , var_1_33));
		} else {
			if ((var_1_30 < var_1_29) && var_1_34) {
				var_1_26 = var_1_32;
			} else {
				var_1_26 = (abs (var_1_35));
			}
		}
	}


	// From: CodeObject2
	if ((var_1_37 - var_1_38) > var_1_31) {
		var_1_36 = ((var_1_39 - var_1_40) + var_1_41);
	} else {
		var_1_36 = var_1_40;
	}


	// From: CodeObject3
	if (var_1_34) {
		var_1_42 = 256;
	}


	// From: CodeObject4
	if (((max (var_1_31 , var_1_37)) / var_1_44) > (min (var_1_27 , var_1_38))) {
		if ((-5 < var_1_33) && var_1_45) {
			if (var_1_41 >= var_1_39) {
				var_1_43 = (abs (var_1_35));
			} else {
				var_1_43 = (min ((min (var_1_40 , var_1_33)) , (abs (var_1_35))));
			}
		}
	}


	// From: CodeObject5
	var_1_46 = (abs (0.19999999999999996 - var_1_47));


	// From: CodeObject6
	if (! var_1_45) {
		if (var_1_28 <= var_1_41) {
			var_1_48 = (min ((min (var_1_47 , var_1_49)) , var_1_50));
		} else {
			var_1_48 = ((var_1_51 - var_1_52) - (abs (min (var_1_50 , var_1_47))));
		}
	}


	// From: CodeObject7
	if (var_1_45) {
		var_1_53 = (((max (var_1_37 , var_1_50)) < var_1_48) || (var_1_54 && var_1_55));
	}


	// From: CodeObject8
	if ((- (var_1_39 / 5u)) < (abs (var_1_36))) {
		if (var_1_39 >= var_1_41) {
			var_1_56 = ((var_1_32 <= var_1_29) || var_1_54);
		} else {
			var_1_56 = (! var_1_57);
		}
	} else {
		var_1_56 = var_1_57;
	}


	// From: CodeObject9
	if (var_1_50 < var_1_51) {
		if ((var_1_39 * var_1_41) <= -256) {
			var_1_58 = var_1_35;
		}
	}


	// From: CodeObject10
	var_1_59 = (var_1_57 && var_1_60);


	// From: CodeObject11
	if (var_1_28 > var_1_36) {
		if ((max (var_1_40 , (-16 * var_1_39))) >= var_1_62) {
			var_1_61 = ((min (var_1_39 , var_1_40)) + var_1_41);
		}
	}


	// From: CodeObject12
	if (var_1_41 <= var_1_30) {
		var_1_63 = (abs (var_1_41));
	}


	// From: CodeObject13
	if ((min (var_1_36 , (var_1_40 >> var_1_26))) == var_1_43) {
		if ((min (var_1_44 , var_1_38)) == (var_1_27 + 4.6)) {
			var_1_64 = ((var_1_34 || var_1_54) && var_1_55);
		}
	} else {
		var_1_64 = (var_1_54 && var_1_55);
	}


	// From: CodeObject14
	if (var_1_30 >= var_1_39) {
		if (! var_1_45) {
			var_1_65 = (min ((var_1_39 + var_1_36) , var_1_40));
		}
	}


	// From: CodeObject15
	if (var_1_65 != ((54474 - var_1_61) / (max (var_1_39 , var_1_67)))) {
		var_1_66 = (var_1_60 || (var_1_64 || var_1_54));
	}


	// From: CodeObject16
	if (((abs (var_1_33)) - var_1_67) < var_1_63) {
		var_1_68 = (min ((abs (var_1_40 - var_1_69)) , 1));
	}


	// From: CodeObject17
	if (var_1_53) {
		var_1_70 = var_1_69;
	}


	// From: CodeObject18
	var_1_71 = var_1_36;


	// From: CodeObject19
	if (var_1_59) {
		var_1_72 = var_1_40;
	}


	// From: CodeObject20
	if (var_1_57) {
		var_1_73 = (var_1_54 && var_1_55);
	}


	// From: CodeObject21
	if (var_1_27 > 64.6) {
		var_1_74 = var_1_47;
	}


	// From: CodeObject22
	if (var_1_73) {
		var_1_75 = var_1_61;
	}


	// From: CodeObject23
	if (((abs (var_1_65)) >> var_1_67) > (var_1_43 * var_1_35)) {
		var_1_76 = var_1_35;
	} else {
		var_1_76 = (var_1_69 - var_1_40);
	}


	// From: CodeObject24
	if (var_1_72 >= ((var_1_42 / var_1_67) | var_1_69)) {
		var_1_77 = (abs (var_1_40));
	} else {
		if ((~ (64 - var_1_61)) > var_1_40) {
			var_1_77 = (max ((max (var_1_61 , 64)) , (var_1_78 - (abs (var_1_36)))));
		} else {
			var_1_77 = (min ((var_1_78 - var_1_40) , var_1_61));
		}
	}


	// From: CodeObject25
	if ((var_1_38 * (abs (var_1_46))) <= var_1_52) {
		if (var_1_54) {
			var_1_79 = (min (var_1_40 , var_1_35));
		} else {
			var_1_79 = var_1_32;
		}
	}


	// From: CodeObject26
	if (var_1_29 >= var_1_63) {
		if (var_1_47 < (var_1_49 * var_1_48)) {
			var_1_80 = (min ((min ((abs (var_1_78)) , var_1_36)) , (var_1_81 - var_1_61)));
		} else {
			if (var_1_73) {
				var_1_80 = (abs (max (var_1_61 , var_1_40)));
			} else {
				if ((abs (abs (var_1_32))) < var_1_78) {
					var_1_80 = var_1_36;
				} else {
					var_1_80 = (var_1_40 + var_1_41);
				}
			}
		}
	}


	// From: CodeObject27
	if (! var_1_54) {
		var_1_82 = (abs (var_1_71));
	} else {
		var_1_82 = (abs (var_1_36));
	}


	// From: CodeObject28
	if (var_1_45) {
		var_1_83 = ((max (var_1_47 , var_1_51)) - var_1_52);
	} else {
		var_1_83 = (min (var_1_51 , (abs (var_1_52 + var_1_84))));
	}


	// From: CodeObject29
	if (var_1_52 != var_1_50) {
		if ((- var_1_40) <= var_1_71) {
			if ((var_1_39 << var_1_62) > (var_1_42 * (abs (var_1_61)))) {
				if (var_1_63 == -2) {
					if (var_1_82 > (var_1_26 % (abs (var_1_67)))) {
						var_1_85 = (abs (abs (abs (var_1_86))));
					} else {
						var_1_85 = (max ((min (10 , (abs (var_1_39)))) , var_1_69));
					}
				}
			} else {
				var_1_85 = (abs (var_1_40));
			}
		} else {
			var_1_85 = var_1_40;
		}
	} else {
		var_1_85 = var_1_41;
	}


	// From: CodeObject30
	if ((var_1_71 | var_1_67) <= var_1_61) {
		if ((var_1_50 * (min (var_1_48 , var_1_51))) > var_1_88) {
			var_1_87 = (min (var_1_84 , var_1_52));
		}
	} else {
		var_1_87 = var_1_50;
	}


	// From: Req1Batch23PS_CN_250
	if (var_1_2) {
		var_1_1 = var_1_3;
	}


	// From: Req6Batch23PS_CN_250
	signed long int stepLocal_4 = 5;
	if (stepLocal_4 <= var_1_17) {
		var_1_21 = (var_1_22 - var_1_17);
	} else {
		if (var_1_1) {
			if (var_1_1) {
				var_1_21 = var_1_17;
			} else {
				var_1_21 = var_1_17;
			}
		}
	}


	// From: Req7Batch23PS_CN_250
	var_1_23 = var_1_10;


	// From: Req8Batch23PS_CN_250
	var_1_24 = 31.75f;


	// From: Req9Batch23PS_CN_250
	var_1_25 = -5;


	// From: Req2Batch23PS_CN_250
	unsigned char stepLocal_0 = var_1_1;
	if ((var_1_23 <= var_1_23) || stepLocal_0) {
		var_1_4 = (max (31.5f , (min (var_1_7 , var_1_8))));
	} else {
		var_1_4 = ((var_1_9 - var_1_10) - var_1_11);
	}


	// From: Req3Batch23PS_CN_250
	signed long int stepLocal_3 = (200 - var_1_13) - var_1_14;
	unsigned char stepLocal_2 = var_1_13;
	unsigned char stepLocal_1 = var_1_13;
	if (stepLocal_3 != var_1_25) {
		var_1_12 = (var_1_13 + (min (var_1_14 , var_1_21)));
	} else {
		if ((var_1_25 / (128 - var_1_17)) < stepLocal_2) {
			if (stepLocal_1 >= var_1_25) {
				var_1_12 = var_1_14;
			} else {
				var_1_12 = var_1_17;
			}
		} else {
			var_1_12 = var_1_17;
		}
	}


	// From: Req4Batch23PS_CN_250
	if ((- (var_1_13 / var_1_17)) > var_1_25) {
		var_1_18 = var_1_13;
	}


	// From: Req5Batch23PS_CN_250
	if ((last_1_var_1_19 / (min (var_1_17 , var_1_20))) > var_1_21) {
		var_1_19 = (max (var_1_17 , var_1_13));
	} else {
		var_1_19 = var_1_17;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 4611686.018427382800e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 64);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 126);
	assume_abort_if_not(var_1_17 != 127);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	assume_abort_if_not(var_1_20 != 0);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -126);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 63);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	assume_abort_if_not(var_1_44 != 0.0F);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -922337.2036854765600e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -922337.2036854765600e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 4611686.018427382800e+12F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 0);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 0);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= -2147483648);
	assume_abort_if_not(var_1_62 <= 2147483647);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 65535);
	assume_abort_if_not(var_1_67 != 0);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 126);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 32767);
	assume_abort_if_not(var_1_78 <= 65534);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 32767);
	assume_abort_if_not(var_1_81 <= 65534);
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= -461168.6018427382800e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427382800e+12F && var_1_84 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 65534);
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= -922337.2036854776000e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854776000e+12F && var_1_88 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_19 = var_1_19;
}

int property() {
	return ((((((((var_1_2 ? (var_1_1 == ((unsigned char) var_1_3)) : 1) && (((var_1_23 <= var_1_23) || var_1_1) ? (var_1_4 == ((float) (max (31.5f , (min (var_1_7 , var_1_8)))))) : (var_1_4 == ((float) ((var_1_9 - var_1_10) - var_1_11))))) && ((((200 - var_1_13) - var_1_14) != var_1_25) ? (var_1_12 == ((signed long int) (var_1_13 + (min (var_1_14 , var_1_21))))) : (((var_1_25 / (128 - var_1_17)) < var_1_13) ? ((var_1_13 >= var_1_25) ? (var_1_12 == ((signed long int) var_1_14)) : (var_1_12 == ((signed long int) var_1_17))) : (var_1_12 == ((signed long int) var_1_17))))) && (((- (var_1_13 / var_1_17)) > var_1_25) ? (var_1_18 == ((unsigned long int) var_1_13)) : 1)) && (((last_1_var_1_19 / (min (var_1_17 , var_1_20))) > var_1_21) ? (var_1_19 == ((signed char) (max (var_1_17 , var_1_13)))) : (var_1_19 == ((signed char) var_1_17)))) && ((5 <= var_1_17) ? (var_1_21 == ((unsigned short int) (var_1_22 - var_1_17))) : (var_1_1 ? (var_1_1 ? (var_1_21 == ((unsigned short int) var_1_17)) : (var_1_21 == ((unsigned short int) var_1_17))) : 1))) && (var_1_23 == ((double) var_1_10))) && (var_1_24 == ((float) 31.75f))) && (var_1_25 == ((signed char) -5))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch31PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 2;
unsigned char var_1_3 = 5;
unsigned char var_1_4 = 50;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 8;
unsigned long int var_1_9 = 1;
signed char var_1_10 = 4;
signed char var_1_11 = 50;
signed char var_1_12 = 5;
signed char var_1_13 = 16;
signed char var_1_14 = 5;
signed char var_1_15 = 4;
unsigned char var_1_16 = 128;
unsigned short int var_1_17 = 10;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
float var_1_22 = 8.625;
float var_1_23 = 16.5;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
float var_1_27 = 2.5;
float var_1_28 = 7.7;
signed short int var_1_29 = -256;
signed short int var_1_30 = 100;
signed long int var_1_31 = 32;
float var_1_32 = 4.774;
signed char var_1_33 = -10;
signed char var_1_34 = 50;
float var_1_35 = 5.5;
float var_1_36 = 7.8;
float var_1_37 = 0.0;
float var_1_38 = 9.5;
float var_1_39 = 100.5;
signed short int var_1_40 = 10;
signed short int var_1_41 = 0;
signed short int var_1_42 = 5;
double var_1_43 = 0.6;
double var_1_44 = 24.25;
unsigned long int var_1_45 = 256;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 50;
unsigned char var_1_48 = 100;
unsigned char var_1_49 = 64;
unsigned char var_1_50 = 64;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 16;
unsigned short int var_1_53 = 0;
unsigned short int var_1_54 = 35510;
unsigned long int var_1_55 = 2;
signed char var_1_56 = -2;
signed short int var_1_57 = -64;
signed long int var_1_58 = -2;
signed long int var_1_59 = 10;
unsigned char var_1_60 = 1;
double var_1_61 = 99.4;
unsigned long int var_1_62 = 32;
double var_1_63 = 200.4;
unsigned long int var_1_64 = 2111963031;
unsigned long int var_1_65 = 16;
double var_1_66 = 63.25;
unsigned char var_1_67 = 200;
float var_1_68 = 63.5;
double var_1_69 = -0.35;
signed long int var_1_70 = -10;
float var_1_71 = 10000000000.5;
float var_1_72 = 4.5;
unsigned char var_1_73 = 16;
unsigned long int var_1_74 = 16;
unsigned char var_1_75 = 0;
unsigned short int var_1_76 = 8;
signed char var_1_77 = -4;
unsigned long int var_1_78 = 2;
unsigned char var_1_79 = 4;
float var_1_80 = 10.875;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_22 <= var_1_23) {
		var_1_21 = (var_1_24 || (var_1_25 || var_1_26));
	} else {
		var_1_21 = var_1_26;
	}


	// From: CodeObject2
	if (! var_1_25) {
		var_1_27 = (min (4.2f , var_1_28));
	} else {
		if (var_1_22 <= var_1_23) {
			if (((abs (var_1_29)) - var_1_30) < var_1_31) {
				if (var_1_31 < var_1_30) {
					var_1_27 = (abs (min (var_1_28 , var_1_32)));
				}
			} else {
				var_1_27 = var_1_32;
			}
		}
	}


	// From: CodeObject3
	if (var_1_23 > var_1_32) {
		var_1_33 = var_1_34;
	}


	// From: CodeObject4
	if ((abs (abs (-0.6))) < var_1_22) {
		if (var_1_32 < (var_1_22 * var_1_28)) {
			if ((var_1_32 >= var_1_22) && ((max (var_1_27 , var_1_23)) > var_1_28)) {
				var_1_35 = (-0.9f + var_1_36);
			} else {
				var_1_35 = (((var_1_37 - var_1_38) - var_1_39) + 3.4f);
			}
		}
	}


	// From: CodeObject5
	if (var_1_30 < var_1_31) {
		var_1_40 = (var_1_41 - var_1_42);
	}


	// From: CodeObject6
	if (var_1_40 < var_1_33) {
		var_1_43 = (min ((var_1_36 + var_1_37) , (var_1_38 - var_1_44)));
	} else {
		var_1_43 = ((min (var_1_38 , var_1_36)) + var_1_39);
	}


	// From: CodeObject7
	if (var_1_33 <= (var_1_41 + var_1_31)) {
		if (var_1_26) {
			if ((abs (var_1_31)) <= var_1_30) {
				var_1_45 = (var_1_42 + var_1_30);
			}
		} else {
			var_1_45 = var_1_30;
		}
	}


	// From: CodeObject8
	if (var_1_26) {
		var_1_46 = (min (var_1_47 , 5));
	}


	// From: CodeObject9
	if (! ((- var_1_30) < var_1_29)) {
		if ((var_1_32 >= var_1_38) && var_1_25) {
			var_1_48 = var_1_49;
		}
	} else {
		var_1_48 = ((var_1_50 - var_1_51) + (abs (var_1_52)));
	}


	// From: CodeObject10
	if (var_1_24 || (-64 <= -10)) {
		var_1_53 = (abs (var_1_54 - var_1_51));
	} else {
		var_1_53 = var_1_48;
	}


	// From: CodeObject11
	if (var_1_24) {
		var_1_55 = (abs (var_1_48));
	}


	// From: CodeObject12
	var_1_56 = var_1_34;


	// From: CodeObject13
	if ((- var_1_37) <= (var_1_38 * var_1_28)) {
		if (var_1_38 >= ((var_1_43 / var_1_37) * var_1_32)) {
			if (var_1_24) {
				var_1_57 = (abs (max (var_1_51 , var_1_42)));
			}
		}
	}


	// From: CodeObject14
	if ((min ((~ var_1_53) , (64 ^ var_1_57))) < var_1_49) {
		var_1_58 = (max ((min ((max (var_1_29 , var_1_52)) , var_1_53)) , var_1_46));
	}


	// From: CodeObject15
	if (var_1_24) {
		if (var_1_36 > var_1_37) {
			var_1_59 = (max (var_1_33 , (abs (var_1_41))));
		}
	} else {
		if (var_1_25) {
			if (var_1_27 <= (var_1_37 + var_1_39)) {
				var_1_59 = ((max (var_1_40 , var_1_49)) + ((var_1_51 + var_1_42) - var_1_47));
			} else {
				var_1_59 = (max ((max (var_1_56 , var_1_57)) , var_1_42));
			}
		}
	}


	// From: CodeObject16
	if (! var_1_25) {
		var_1_60 = (! (! var_1_26));
	}


	// From: CodeObject17
	if ((var_1_28 / var_1_37) >= (- (var_1_39 - var_1_44))) {
		var_1_61 = (min ((max (var_1_44 , 2.2)) , (min ((max (var_1_36 , var_1_32)) , var_1_39))));
	}


	// From: CodeObject18
	if (var_1_26) {
		if (var_1_63 < (min ((- var_1_39) , var_1_61))) {
			var_1_62 = ((var_1_64 - (min (var_1_46 , var_1_52))) + var_1_30);
		}
	}


	// From: CodeObject19
	if (var_1_39 > var_1_63) {
		var_1_65 = (min ((max (var_1_52 , var_1_30)) , var_1_64));
	}


	// From: CodeObject20
	if ((abs (var_1_22)) < (abs (-0.625f))) {
		if (var_1_50 >= ((var_1_67 - var_1_51) - var_1_52)) {
			if (var_1_65 > var_1_31) {
				var_1_66 = (abs (var_1_32));
			}
		} else {
			var_1_66 = (abs (var_1_44));
		}
	}


	// From: CodeObject21
	if (var_1_61 >= (var_1_44 - var_1_38)) {
		var_1_68 = (abs (min (var_1_32 , var_1_28)));
	}


	// From: CodeObject22
	if (var_1_26) {
		if (var_1_60) {
			if (((max (var_1_67 , var_1_51)) - var_1_47) <= (~ (var_1_45 * var_1_42))) {
				if (var_1_33 == (var_1_40 % (abs (var_1_50)))) {
					var_1_69 = (min (((var_1_39 + var_1_37) - (var_1_38 + 3.7)) , (abs (var_1_32))));
				}
			}
		} else {
			var_1_69 = var_1_37;
		}
	}


	// From: CodeObject23
	if (var_1_69 >= 5.5) {
		var_1_70 = (max (((var_1_49 + var_1_47) - var_1_50) , var_1_46));
	} else {
		var_1_70 = (var_1_30 - var_1_53);
	}


	// From: CodeObject24
	if ((var_1_30 % var_1_50) != (var_1_40 & (var_1_54 >> var_1_58))) {
		if (var_1_59 <= ((-128 ^ var_1_33) | (abs (var_1_64)))) {
			if (var_1_37 > (var_1_23 / (abs (var_1_72)))) {
				if (var_1_31 >= var_1_57) {
					var_1_71 = (abs (abs (var_1_39)));
				} else {
					var_1_71 = (abs ((abs (var_1_38)) - var_1_39));
				}
			}
		}
	}


	// From: CodeObject25
	if (var_1_21) {
		var_1_73 = (abs (var_1_50 + var_1_52));
	} else {
		var_1_73 = var_1_50;
	}


	// From: CodeObject26
	if (var_1_24) {
		var_1_74 = var_1_54;
	} else {
		var_1_74 = var_1_30;
	}


	// From: CodeObject27
	var_1_75 = var_1_24;


	// From: CodeObject28
	if (var_1_26) {
		var_1_76 = var_1_48;
	}


	// From: CodeObject29
	if (var_1_41 > var_1_46) {
		var_1_77 = (abs (min ((abs (var_1_67)) , var_1_51)));
	}


	// From: CodeObject30
	var_1_78 = var_1_64;


	// From: CodeObject31
	var_1_79 = var_1_50;


	// From: CodeObject32
	var_1_80 = var_1_44;


	// From: Req2Batch31PS_CN_250
	var_1_8 = (min ((var_1_5 + (64 - 16)) , 64));


	// From: Req4Batch31PS_CN_250
	if ((var_1_6 + var_1_4) >= var_1_5) {
		if (var_1_6 > var_1_8) {
			var_1_10 = (((abs (var_1_11)) + (var_1_12 + var_1_13)) - (max (var_1_14 , var_1_15)));
		} else {
			var_1_10 = (max ((min (var_1_14 , var_1_12)) , var_1_15));
		}
	}


	// From: Req6Batch31PS_CN_250
	var_1_17 = var_1_13;


	// From: Req7Batch31PS_CN_250
	signed long int stepLocal_2 = var_1_17 / 64;
	if (var_1_12 <= stepLocal_2) {
		var_1_18 = (! var_1_19);
	} else {
		if (var_1_19) {
			var_1_18 = var_1_20;
		} else {
			var_1_18 = var_1_20;
		}
	}


	// From: Req1Batch31PS_CN_250
	if (var_1_18) {
		var_1_1 = (max ((abs (var_1_3)) , var_1_4));
	} else {
		var_1_1 = ((var_1_5 + var_1_6) - var_1_7);
	}


	// From: Req3Batch31PS_CN_250
	if ((var_1_8 * var_1_7) >= var_1_3) {
		var_1_9 = (5u + var_1_4);
	} else {
		if (var_1_18) {
			var_1_9 = var_1_4;
		} else {
			var_1_9 = var_1_8;
		}
	}


	// From: Req5Batch31PS_CN_250
	unsigned char stepLocal_1 = (-128 | var_1_12) >= (abs (var_1_4));
	unsigned char stepLocal_0 = var_1_3;
	if (stepLocal_1 || var_1_18) {
		if (stepLocal_0 <= 16) {
			var_1_16 = var_1_12;
		} else {
			var_1_16 = var_1_6;
		}
	} else {
		var_1_16 = var_1_12;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 64);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32767);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -127);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 2305843.009213691390e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691390e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= -1);
	assume_abort_if_not(var_1_41 <= 32766);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32766);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 254);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 63);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 32767);
	assume_abort_if_not(var_1_54 <= 65534);
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -922337.2036854776000e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854776000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 1073741823);
	assume_abort_if_not(var_1_64 <= 2147483647);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 191);
	assume_abort_if_not(var_1_67 <= 255);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= -922337.2036854776000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854776000e+12F && var_1_72 >= 1.0e-20F ));
	assume_abort_if_not(var_1_72 != 0.0F);
}



void updateLastVariables() {
}

int property() {
	return ((((((var_1_18 ? (var_1_1 == ((unsigned char) (max ((abs (var_1_3)) , var_1_4)))) : (var_1_1 == ((unsigned char) ((var_1_5 + var_1_6) - var_1_7)))) && (var_1_8 == ((unsigned char) (min ((var_1_5 + (64 - 16)) , 64))))) && (((var_1_8 * var_1_7) >= var_1_3) ? (var_1_9 == ((unsigned long int) (5u + var_1_4))) : (var_1_18 ? (var_1_9 == ((unsigned long int) var_1_4)) : (var_1_9 == ((unsigned long int) var_1_8))))) && (((var_1_6 + var_1_4) >= var_1_5) ? ((var_1_6 > var_1_8) ? (var_1_10 == ((signed char) (((abs (var_1_11)) + (var_1_12 + var_1_13)) - (max (var_1_14 , var_1_15))))) : (var_1_10 == ((signed char) (max ((min (var_1_14 , var_1_12)) , var_1_15))))) : 1)) && ((((-128 | var_1_12) >= (abs (var_1_4))) || var_1_18) ? ((var_1_3 <= 16) ? (var_1_16 == ((unsigned char) var_1_12)) : (var_1_16 == ((unsigned char) var_1_6))) : (var_1_16 == ((unsigned char) var_1_12)))) && (var_1_17 == ((unsigned short int) var_1_13))) && ((var_1_12 <= (var_1_17 / 64)) ? (var_1_18 == ((unsigned char) (! var_1_19))) : (var_1_19 ? (var_1_18 == ((unsigned char) var_1_20)) : (var_1_18 == ((unsigned char) var_1_20))))
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

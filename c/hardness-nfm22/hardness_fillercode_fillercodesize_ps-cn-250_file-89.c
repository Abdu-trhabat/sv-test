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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch89PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 32;
unsigned char var_1_4 = 0;
unsigned short int var_1_8 = 32;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 5;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
double var_1_16 = 63.75;
double var_1_17 = 8.5;
signed short int var_1_18 = -64;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 5;
unsigned char var_1_21 = 100;
signed long int var_1_22 = -256;
unsigned char var_1_23 = 16;
signed short int var_1_24 = -1;
signed short int var_1_25 = 2;
unsigned long int var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 64;
float var_1_30 = -0.5;
float var_1_31 = 63.4;
float var_1_32 = 9.75;
unsigned long int var_1_33 = 10;
unsigned long int var_1_34 = 2286977514;
unsigned short int var_1_35 = 10;
unsigned short int var_1_36 = 2;
unsigned short int var_1_37 = 27187;
unsigned char var_1_38 = 1;
unsigned short int var_1_39 = 60041;
unsigned short int var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
signed char var_1_43 = -2;
signed char var_1_44 = -16;
signed long int var_1_45 = -2;
double var_1_46 = 127.75;
double var_1_47 = 25.75;
double var_1_48 = 15.5;
signed long int var_1_49 = -50;
signed long int var_1_50 = -128;
signed long int var_1_51 = -2;
unsigned long int var_1_52 = 10;
signed long int var_1_53 = -256;
float var_1_54 = 128.5;
float var_1_55 = 64.75;
unsigned short int var_1_56 = 8;
signed long int var_1_57 = 4;
signed short int var_1_58 = 500;
signed short int var_1_59 = 16;
signed char var_1_60 = 10;
signed char var_1_61 = 0;
unsigned long int var_1_62 = 16;
signed long int var_1_63 = -5;
signed char var_1_64 = 4;
double var_1_65 = 16.45;
double var_1_66 = 100.5;
float var_1_67 = -0.75;
unsigned long int var_1_68 = 128;
unsigned long int var_1_69 = 1663053255;
unsigned short int var_1_70 = 256;
double var_1_71 = 128.2;
unsigned short int var_1_72 = 64;
signed long int var_1_73 = 10000000;
float var_1_74 = 200.75;
signed long int var_1_75 = -128;
unsigned char var_1_76 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 32;
unsigned char last_1_var_1_12 = 32;
signed short int last_1_var_1_18 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_20 & var_1_21) >= var_1_22) {
		var_1_19 = var_1_23;
	}


	// From: CodeObject2
	if ((min (var_1_22 , 25)) > (var_1_21 >> (min (var_1_25 , 1)))) {
		if (var_1_19 >= var_1_23) {
			var_1_24 = (min (var_1_25 , (max (var_1_23 , 128))));
		} else {
			var_1_24 = (var_1_20 - 50);
		}
	}


	// From: CodeObject3
	if (var_1_24 <= (min (var_1_23 , var_1_21))) {
		if (var_1_24 > var_1_19) {
			if (! var_1_27) {
				if (var_1_28) {
					var_1_26 = (var_1_25 + (abs (var_1_21)));
				} else {
					var_1_26 = (var_1_25 + var_1_19);
				}
			}
		}
	}


	// From: CodeObject4
	if (var_1_27) {
		var_1_29 = (min ((abs (max (var_1_19 , var_1_23))) , (abs (var_1_25))));
	}


	// From: CodeObject5
	if (var_1_24 >= var_1_21) {
		var_1_30 = var_1_31;
	} else {
		var_1_30 = (abs (min (var_1_31 , var_1_32)));
	}


	// From: CodeObject6
	if ((var_1_29 >= var_1_21) || var_1_27) {
		var_1_33 = (min (25u , (abs (var_1_34 - 1u))));
	}


	// From: CodeObject7
	if (var_1_32 >= var_1_31) {
		if (var_1_24 <= (-2 * var_1_34)) {
			var_1_35 = (abs (var_1_21));
		}
	}


	// From: CodeObject8
	if (var_1_26 <= ((abs (var_1_21)) ^ (abs (var_1_34)))) {
		var_1_36 = ((var_1_37 - (abs (var_1_23))) + var_1_21);
	}


	// From: CodeObject9
	if (var_1_37 > (min ((var_1_39 - var_1_25) , var_1_40))) {
		if ((- var_1_30) < var_1_31) {
			var_1_38 = (var_1_41 && var_1_42);
		} else {
			if (var_1_40 != (abs (var_1_24))) {
				var_1_38 = (! var_1_41);
			}
		}
	} else {
		var_1_38 = 0;
	}


	// From: CodeObject10
	if (var_1_35 <= var_1_19) {
		if (var_1_19 > (var_1_21 * (var_1_26 | 128))) {
			var_1_43 = (var_1_25 + (abs (var_1_44)));
		} else {
			if ((var_1_36 & var_1_21) <= (~ var_1_19)) {
				var_1_43 = (max (-8 , var_1_25));
			}
		}
	} else {
		var_1_43 = (var_1_44 + var_1_25);
	}


	// From: CodeObject11
	if (var_1_42) {
		if (((max (var_1_46 , var_1_47)) - var_1_48) == ((min (var_1_30 , var_1_32)) + (abs (var_1_31)))) {
			var_1_45 = (max (var_1_43 , var_1_20));
		} else {
			var_1_45 = (max (var_1_49 , (abs (2))));
		}
	} else {
		var_1_45 = (min (var_1_23 , var_1_37));
	}


	// From: CodeObject12
	if (var_1_28) {
		var_1_50 = (max ((abs (abs (var_1_24))) , var_1_40));
	} else {
		var_1_50 = var_1_51;
	}


	// From: CodeObject13
	if (var_1_48 < var_1_30) {
		if (var_1_25 >= var_1_29) {
			var_1_52 = (var_1_34 - var_1_37);
		} else {
			var_1_52 = (var_1_34 - (min (var_1_25 , var_1_37)));
		}
	} else {
		var_1_52 = (min ((min (var_1_34 , 1u)) , var_1_23));
	}


	// From: CodeObject14
	if (((var_1_32 / var_1_54) / var_1_55) >= var_1_46) {
		var_1_53 = var_1_37;
	} else {
		if (var_1_48 < var_1_31) {
			var_1_53 = (abs (var_1_29));
		}
	}


	// From: CodeObject15
	if ((var_1_37 * var_1_53) < (abs (var_1_23))) {
		var_1_56 = ((min (var_1_25 , var_1_19)) + var_1_20);
	}


	// From: CodeObject16
	if (var_1_55 > var_1_30) {
		var_1_57 = (64 - var_1_21);
	}


	// From: CodeObject17
	if (var_1_37 != (abs (var_1_50 + var_1_39))) {
		var_1_58 = (abs (min (var_1_43 , var_1_44)));
	} else {
		if ((abs (min (var_1_55 , var_1_47))) > var_1_48) {
			var_1_58 = (var_1_21 + var_1_59);
		} else {
			var_1_58 = 128;
		}
	}


	// From: CodeObject18
	if (! var_1_38) {
		if (var_1_33 > 2u) {
			var_1_60 = (-1 + ((abs (var_1_25)) + var_1_61));
		} else {
			var_1_60 = (min (1 , var_1_25));
		}
	}


	// From: CodeObject19
	var_1_62 = var_1_29;


	// From: CodeObject20
	var_1_63 = (max (((abs (var_1_20)) - (abs (var_1_19))) , ((abs (var_1_23)) + var_1_58)));


	// From: CodeObject21
	if (var_1_42) {
		if ((var_1_31 + var_1_46) >= var_1_47) {
			var_1_64 = (abs (4));
		}
	}


	// From: CodeObject22
	if (var_1_20 > var_1_24) {
		if (64u < (var_1_63 / (var_1_37 + 32u))) {
			var_1_65 = (var_1_66 - (abs (9.875)));
		}
	}


	// From: CodeObject23
	if (var_1_25 >= var_1_64) {
		if ((- var_1_65) == var_1_48) {
			var_1_67 = (max (var_1_32 , var_1_31));
		}
	} else {
		if (var_1_27 && var_1_42) {
			if (var_1_49 < var_1_58) {
				var_1_67 = (abs (var_1_66));
			} else {
				var_1_67 = (abs (abs (1.875f)));
			}
		} else {
			var_1_67 = var_1_32;
		}
	}


	// From: CodeObject24
	if (var_1_39 <= (min (var_1_25 , 4))) {
		if (var_1_63 >= (~ (var_1_40 / var_1_39))) {
			var_1_68 = var_1_19;
		}
	} else {
		if (var_1_60 >= var_1_20) {
			if (var_1_41 || var_1_42) {
				var_1_68 = (3572895129u - (var_1_69 - var_1_23));
			} else {
				var_1_68 = (max (var_1_39 , var_1_56));
			}
		}
	}


	// From: CodeObject25
	if ((abs (var_1_65)) >= var_1_71) {
		var_1_70 = var_1_21;
	} else {
		var_1_70 = var_1_21;
	}


	// From: CodeObject26
	var_1_72 = var_1_23;


	// From: CodeObject27
	if (var_1_27) {
		var_1_73 = var_1_25;
	} else {
		var_1_73 = var_1_25;
	}


	// From: CodeObject28
	var_1_74 = var_1_31;


	// From: CodeObject29
	if (var_1_27) {
		if (var_1_29 >= var_1_50) {
			var_1_75 = ((var_1_23 + var_1_56) + var_1_43);
		} else {
			var_1_75 = (min (var_1_24 , var_1_20));
		}
	} else {
		var_1_75 = var_1_70;
	}


	// From: CodeObject30
	var_1_76 = 0;


	// From: Req2Batch89PS_CN_250
	signed long int stepLocal_1 = last_1_var_1_18;
	signed long int stepLocal_0 = last_1_var_1_18;
	if (stepLocal_1 >= (last_1_var_1_18 / var_1_9)) {
		if (stepLocal_0 < (last_1_var_1_1 * 256)) {
			var_1_8 = (min (last_1_var_1_12 , (min (128 , last_1_var_1_12))));
		} else {
			var_1_8 = last_1_var_1_12;
		}
	} else {
		var_1_8 = last_1_var_1_12;
	}


	// From: Req6Batch89PS_CN_250
	var_1_18 = var_1_8;


	// From: Req3Batch89PS_CN_250
	if (var_1_10 < var_1_18) {
		if (last_1_var_1_12 <= (5 - last_1_var_1_12)) {
			var_1_12 = var_1_13;
		} else {
			if (last_1_var_1_12 == var_1_8) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = var_1_13;
			}
		}
	}


	// From: Req4Batch89PS_CN_250
	unsigned short int stepLocal_2 = var_1_8;
	if (stepLocal_2 > ((min (var_1_8 , var_1_8)) + var_1_12)) {
		if (! (var_1_8 >= var_1_12)) {
			if (var_1_4) {
				var_1_14 = 0;
			} else {
				var_1_14 = var_1_15;
			}
		} else {
			var_1_14 = var_1_15;
		}
	}


	// From: Req1Batch89PS_CN_250
	if (var_1_18 != var_1_12) {
		if (var_1_14) {
			var_1_1 = (min ((max (-5 , var_1_12)) , (min (var_1_8 , var_1_18))));
		}
	}


	// From: Req5Batch89PS_CN_250
	if (var_1_14) {
		if (var_1_15) {
			var_1_16 = var_1_17;
		} else {
			var_1_16 = (max (((max (25.8 , 7.5)) - 50.25) , var_1_17));
		}
	} else {
		if (var_1_14) {
			var_1_16 = 5.2;
		} else {
			var_1_16 = var_1_17;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 255);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 255);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -2147483648);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 9);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 16383);
	assume_abort_if_not(var_1_37 <= 32767);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65535);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65535);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -63);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= -2147483647);
	assume_abort_if_not(var_1_49 <= 2147483646);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= -2147483647);
	assume_abort_if_not(var_1_51 <= 2147483646);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	assume_abort_if_not(var_1_54 != 0.0F);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -922337.2036854776000e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854776000e+12F && var_1_55 >= 1.0e-20F ));
	assume_abort_if_not(var_1_55 != 0.0F);
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= -16383);
	assume_abort_if_not(var_1_59 <= 16383);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -31);
	assume_abort_if_not(var_1_61 <= 31);
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854765600e+12F && var_1_66 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 1073741823);
	assume_abort_if_not(var_1_69 <= 2147483647);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= -922337.2036854776000e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854776000e+12F && var_1_71 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return ((((((var_1_18 != var_1_12) ? (var_1_14 ? (var_1_1 == ((signed long int) (min ((max (-5 , var_1_12)) , (min (var_1_8 , var_1_18)))))) : 1) : 1) && ((last_1_var_1_18 >= (last_1_var_1_18 / var_1_9)) ? ((last_1_var_1_18 < (last_1_var_1_1 * 256)) ? (var_1_8 == ((unsigned short int) (min (last_1_var_1_12 , (min (128 , last_1_var_1_12)))))) : (var_1_8 == ((unsigned short int) last_1_var_1_12))) : (var_1_8 == ((unsigned short int) last_1_var_1_12)))) && ((var_1_10 < var_1_18) ? ((last_1_var_1_12 <= (5 - last_1_var_1_12)) ? (var_1_12 == ((unsigned char) var_1_13)) : ((last_1_var_1_12 == var_1_8) ? (var_1_12 == ((unsigned char) var_1_13)) : (var_1_12 == ((unsigned char) var_1_13)))) : 1)) && ((var_1_8 > ((min (var_1_8 , var_1_8)) + var_1_12)) ? ((! (var_1_8 >= var_1_12)) ? (var_1_4 ? (var_1_14 == ((unsigned char) 0)) : (var_1_14 == ((unsigned char) var_1_15))) : (var_1_14 == ((unsigned char) var_1_15))) : 1)) && (var_1_14 ? (var_1_15 ? (var_1_16 == ((double) var_1_17)) : (var_1_16 == ((double) (max (((max (25.8 , 7.5)) - 50.25) , var_1_17))))) : (var_1_14 ? (var_1_16 == ((double) 5.2)) : (var_1_16 == ((double) var_1_17))))) && (var_1_18 == ((signed short int) var_1_8))
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

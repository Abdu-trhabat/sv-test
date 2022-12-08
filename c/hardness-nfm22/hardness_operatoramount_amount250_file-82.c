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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 16;
unsigned short int var_1_7 = 34024;
float var_1_11 = 10.375;
float var_1_12 = 15.5;
float var_1_13 = 10.6;
float var_1_14 = 1.25;
float var_1_15 = -0.8;
float var_1_16 = 256.4;
double var_1_17 = 63.75;
double var_1_18 = 99.5;
double var_1_20 = 24.5;
double var_1_21 = 100.8;
unsigned char var_1_22 = 0;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 64;
unsigned char var_1_26 = 64;
unsigned char var_1_27 = 5;
signed char var_1_29 = 16;
double var_1_30 = 2.6;
double var_1_31 = 16.5;
signed char var_1_32 = 100;
signed char var_1_33 = 1;
float var_1_34 = 1000.75;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
float var_1_39 = 5.8;
float var_1_40 = 0.0;
float var_1_41 = 256.25;
unsigned char var_1_42 = 1;
signed short int var_1_43 = -25;
signed long int var_1_44 = -128;
unsigned short int var_1_46 = 1000;
unsigned short int var_1_47 = 62867;
double var_1_48 = 1.375;
unsigned long int var_1_49 = 8;
unsigned long int var_1_51 = 3026452312;
unsigned long int var_1_52 = 4129757384;
float var_1_53 = 4.5;
unsigned short int var_1_54 = 0;
signed short int var_1_56 = -1;
signed short int var_1_57 = 30879;
unsigned char var_1_58 = 4;
unsigned char var_1_59 = 200;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 0;
unsigned short int var_1_62 = 16;
unsigned short int var_1_63 = 2;
unsigned short int var_1_64 = 5;
signed char var_1_65 = -10;
signed char var_1_66 = -128;
signed short int var_1_67 = 32;
float var_1_68 = 5.4;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 16;
unsigned char last_1_var_1_22 = 0;
unsigned char last_1_var_1_35 = 1;
unsigned char last_1_var_1_42 = 1;
signed short int last_1_var_1_43 = -25;
unsigned short int last_1_var_1_54 = 0;
signed short int last_1_var_1_56 = -1;
unsigned char last_1_var_1_58 = 4;
unsigned short int last_1_var_1_62 = 16;
signed char last_1_var_1_65 = -10;
signed short int last_1_var_1_67 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch82Amount250
	if (last_1_var_1_54 >= (min ((- 32) , (last_1_var_1_56 | last_1_var_1_22)))) {
		var_1_18 = (var_1_14 + (var_1_16 + var_1_15));
	} else {
		var_1_18 = (min ((var_1_16 + var_1_15) , (var_1_20 - var_1_21)));
	}


	// From: Req18Batch82Amount250
	if ((min ((var_1_59 - var_1_24) , last_1_var_1_54)) <= last_1_var_1_1) {
		var_1_58 = var_1_33;
	} else {
		if (var_1_36) {
			var_1_58 = (128 - var_1_24);
		} else {
			var_1_58 = (min (32 , var_1_33));
		}
	}


	// From: Req16Batch82Amount250
	if ((last_1_var_1_22 + 2) < (var_1_33 + last_1_var_1_65)) {
		var_1_54 = (last_1_var_1_58 + last_1_var_1_67);
	} else {
		var_1_54 = (min (var_1_7 , last_1_var_1_22));
	}


	// From: Req21Batch82Amount250
	if (var_1_54 > var_1_33) {
		var_1_65 = ((min (var_1_64 , var_1_63)) - var_1_33);
	}


	// From: Req4Batch82Amount250
	unsigned char stepLocal_3 = last_1_var_1_42;
	signed long int stepLocal_2 = last_1_var_1_54 - last_1_var_1_58;
	signed long int stepLocal_1 = last_1_var_1_43 * var_1_7;
	if (last_1_var_1_35 && stepLocal_3) {
		if ((- 1) > stepLocal_2) {
			var_1_22 = ((var_1_24 + var_1_25) - (var_1_26 + var_1_27));
		}
	} else {
		if (stepLocal_1 <= last_1_var_1_58) {
			var_1_22 = var_1_25;
		}
	}


	// From: Req10Batch82Amount250
	signed long int stepLocal_4 = 16;
	if (var_1_33 <= stepLocal_4) {
		var_1_43 = ((min (var_1_65 , var_1_26)) + var_1_32);
	}


	// From: Req12Batch82Amount250
	if ((var_1_58 ^ var_1_54) > var_1_26) {
		if (var_1_37) {
			var_1_46 = var_1_26;
		}
	} else {
		var_1_46 = (min (((var_1_47 - var_1_33) - var_1_24) , var_1_27));
	}


	// From: Req19Batch82Amount250
	if (var_1_21 == var_1_31) {
		var_1_60 = (var_1_37 || var_1_61);
	} else {
		var_1_60 = ((var_1_22 <= var_1_24) || (var_1_36 && var_1_38));
	}


	// From: Req13Batch82Amount250
	var_1_48 = (min (var_1_30 , (max (var_1_14 , (max (var_1_20 , var_1_16))))));


	// From: Req15Batch82Amount250
	if (var_1_13 > var_1_41) {
		var_1_53 = (var_1_21 - (min (var_1_31 , (1.0000000000000038E14f + var_1_41))));
	} else {
		var_1_53 = var_1_14;
	}


	// From: Req20Batch82Amount250
	signed long int stepLocal_7 = var_1_54 >> (var_1_63 + var_1_64);
	if (stepLocal_7 != (last_1_var_1_62 & var_1_22)) {
		if (var_1_37) {
			var_1_62 = var_1_24;
		}
	} else {
		var_1_62 = var_1_58;
	}


	// From: Req22Batch82Amount250
	var_1_66 = var_1_27;


	// From: Req23Batch82Amount250
	var_1_67 = -1;


	// From: Req24Batch82Amount250
	var_1_68 = var_1_41;


	// From: Req17Batch82Amount250
	signed long int stepLocal_6 = var_1_46 ^ var_1_26;
	if ((- (1.00000000000008E13f * var_1_15)) <= (var_1_18 + var_1_53)) {
		if (stepLocal_6 != var_1_43) {
			if (var_1_37) {
				var_1_56 = ((min (var_1_25 , var_1_32)) - (abs (var_1_24 - var_1_22)));
			} else {
				var_1_56 = ((min (var_1_25 , var_1_27)) - (abs (var_1_24 - var_1_33)));
			}
		}
	} else {
		var_1_56 = (var_1_32 - (var_1_57 - (last_1_var_1_56 + var_1_24)));
	}


	// From: Req7Batch82Amount250
	if (! var_1_60) {
		if ((min (var_1_13 , (min (var_1_12 , var_1_68)))) > var_1_17) {
			var_1_35 = (! var_1_36);
		} else {
			var_1_35 = (var_1_60 && var_1_37);
		}
	} else {
		if (var_1_56 > var_1_32) {
			if (var_1_20 < var_1_13) {
				if (! var_1_37) {
					var_1_35 = ((var_1_21 < var_1_12) || (! var_1_37));
				} else {
					var_1_35 = (! (! var_1_36));
				}
			} else {
				if (var_1_60) {
					var_1_35 = ((! var_1_37) && var_1_36);
				}
			}
		} else {
			var_1_35 = (var_1_36 && var_1_38);
		}
	}


	// From: Req14Batch82Amount250
	if (var_1_18 >= (max ((var_1_68 * 8.3f) , (var_1_15 + var_1_53)))) {
		var_1_49 = ((abs (max (var_1_51 , var_1_52))) - var_1_46);
	} else {
		var_1_49 = 64u;
	}


	// From: Req2Batch82Amount250
	if (32.8f > ((var_1_48 * var_1_48) / var_1_12)) {
		var_1_11 = (var_1_13 + ((min (var_1_14 , var_1_15)) + var_1_16));
	} else {
		if (((var_1_15 / var_1_12) / var_1_17) > var_1_16) {
			var_1_11 = (var_1_15 + var_1_14);
		}
	}


	// From: Req8Batch82Amount250
	if (var_1_7 != var_1_58) {
		var_1_39 = (abs (5.2f));
	} else {
		if (var_1_36) {
			if (-25 >= var_1_67) {
				if (var_1_22 <= var_1_67) {
					var_1_39 = ((var_1_14 + var_1_15) + var_1_16);
				} else {
					var_1_39 = ((min (var_1_20 , var_1_30)) - (max (var_1_31 , var_1_40)));
				}
			} else {
				var_1_39 = var_1_31;
			}
		} else {
			var_1_39 = 31.5f;
		}
	}


	// From: Req1Batch82Amount250
	unsigned char stepLocal_0 = var_1_58 <= var_1_58;
	if (var_1_60) {
		if (stepLocal_0 || (var_1_11 >= var_1_11)) {
			var_1_1 = (max ((var_1_7 - 16) , var_1_22));
		} else {
			var_1_1 = (var_1_7 - ((10000 - 32) + var_1_22));
		}
	} else {
		var_1_1 = (var_1_22 + var_1_22);
	}


	// From: Req6Batch82Amount250
	if ((var_1_58 + var_1_1) != var_1_49) {
		if (16 >= var_1_58) {
			var_1_34 = (abs (var_1_15));
		} else {
			var_1_34 = (1.00000005E7f - var_1_20);
		}
	} else {
		if (var_1_17 < var_1_21) {
			var_1_34 = (var_1_21 - var_1_31);
		} else {
			var_1_34 = (min (var_1_13 , var_1_14));
		}
	}


	// From: Req9Batch82Amount250
	if ((- var_1_34) != var_1_53) {
		var_1_42 = (! (! var_1_37));
	}


	// From: Req5Batch82Amount250
	if (((var_1_30 + var_1_31) - var_1_20) > ((- var_1_15) / var_1_12)) {
		if (var_1_34 >= var_1_11) {
			var_1_29 = (var_1_26 - (max (var_1_27 , var_1_32)));
		}
	} else {
		var_1_29 = ((min ((max (var_1_32 , var_1_27)) , -1)) - (max (var_1_26 , var_1_33)));
	}


	// From: Req11Batch82Amount250
	unsigned char stepLocal_5 = var_1_26;
	if (var_1_42) {
		var_1_44 = (var_1_62 + (var_1_58 - var_1_33));
	} else {
		if (stepLocal_5 >= 0) {
			if ((var_1_18 + var_1_15) > ((- var_1_31) * var_1_16)) {
				var_1_44 = var_1_62;
			}
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -230584.3009213691390e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -230584.3009213691390e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691390e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -230584.3009213691390e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691390e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 63);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 64);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 64);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427387900e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427387900e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 6917529.027641073700e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 49150);
	assume_abort_if_not(var_1_47 <= 65534);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= 16383);
	assume_abort_if_not(var_1_57 <= 32766);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 127);
	assume_abort_if_not(var_1_59 <= 255);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 9);
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 8);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_67 = var_1_67;
}

int property() {
	return (((((((((((((((((((((((var_1_60 ? (((var_1_58 <= var_1_58) || (var_1_11 >= var_1_11)) ? (var_1_1 == ((unsigned short int) (max ((var_1_7 - 16) , var_1_22)))) : (var_1_1 == ((unsigned short int) (var_1_7 - ((10000 - 32) + var_1_22))))) : (var_1_1 == ((unsigned short int) (var_1_22 + var_1_22)))) && ((32.8f > ((var_1_48 * var_1_48) / var_1_12)) ? (var_1_11 == ((float) (var_1_13 + ((min (var_1_14 , var_1_15)) + var_1_16)))) : ((((var_1_15 / var_1_12) / var_1_17) > var_1_16) ? (var_1_11 == ((float) (var_1_15 + var_1_14))) : 1))) && ((last_1_var_1_54 >= (min ((- 32) , (last_1_var_1_56 | last_1_var_1_22)))) ? (var_1_18 == ((double) (var_1_14 + (var_1_16 + var_1_15)))) : (var_1_18 == ((double) (min ((var_1_16 + var_1_15) , (var_1_20 - var_1_21))))))) && ((last_1_var_1_35 && last_1_var_1_42) ? (((- 1) > (last_1_var_1_54 - last_1_var_1_58)) ? (var_1_22 == ((unsigned char) ((var_1_24 + var_1_25) - (var_1_26 + var_1_27)))) : 1) : (((last_1_var_1_43 * var_1_7) <= last_1_var_1_58) ? (var_1_22 == ((unsigned char) var_1_25)) : 1))) && ((((var_1_30 + var_1_31) - var_1_20) > ((- var_1_15) / var_1_12)) ? ((var_1_34 >= var_1_11) ? (var_1_29 == ((signed char) (var_1_26 - (max (var_1_27 , var_1_32))))) : 1) : (var_1_29 == ((signed char) ((min ((max (var_1_32 , var_1_27)) , -1)) - (max (var_1_26 , var_1_33))))))) && (((var_1_58 + var_1_1) != var_1_49) ? ((16 >= var_1_58) ? (var_1_34 == ((float) (abs (var_1_15)))) : (var_1_34 == ((float) (1.00000005E7f - var_1_20)))) : ((var_1_17 < var_1_21) ? (var_1_34 == ((float) (var_1_21 - var_1_31))) : (var_1_34 == ((float) (min (var_1_13 , var_1_14))))))) && ((! var_1_60) ? (((min (var_1_13 , (min (var_1_12 , var_1_68)))) > var_1_17) ? (var_1_35 == ((unsigned char) (! var_1_36))) : (var_1_35 == ((unsigned char) (var_1_60 && var_1_37)))) : ((var_1_56 > var_1_32) ? ((var_1_20 < var_1_13) ? ((! var_1_37) ? (var_1_35 == ((unsigned char) ((var_1_21 < var_1_12) || (! var_1_37)))) : (var_1_35 == ((unsigned char) (! (! var_1_36))))) : (var_1_60 ? (var_1_35 == ((unsigned char) ((! var_1_37) && var_1_36))) : 1)) : (var_1_35 == ((unsigned char) (var_1_36 && var_1_38)))))) && ((var_1_7 != var_1_58) ? (var_1_39 == ((float) (abs (5.2f)))) : (var_1_36 ? ((-25 >= var_1_67) ? ((var_1_22 <= var_1_67) ? (var_1_39 == ((float) ((var_1_14 + var_1_15) + var_1_16))) : (var_1_39 == ((float) ((min (var_1_20 , var_1_30)) - (max (var_1_31 , var_1_40)))))) : (var_1_39 == ((float) var_1_31))) : (var_1_39 == ((float) 31.5f))))) && (((- var_1_34) != var_1_53) ? (var_1_42 == ((unsigned char) (! (! var_1_37)))) : 1)) && ((var_1_33 <= 16) ? (var_1_43 == ((signed short int) ((min (var_1_65 , var_1_26)) + var_1_32))) : 1)) && (var_1_42 ? (var_1_44 == ((signed long int) (var_1_62 + (var_1_58 - var_1_33)))) : ((var_1_26 >= 0) ? (((var_1_18 + var_1_15) > ((- var_1_31) * var_1_16)) ? (var_1_44 == ((signed long int) var_1_62)) : 1) : 1))) && (((var_1_58 ^ var_1_54) > var_1_26) ? (var_1_37 ? (var_1_46 == ((unsigned short int) var_1_26)) : 1) : (var_1_46 == ((unsigned short int) (min (((var_1_47 - var_1_33) - var_1_24) , var_1_27)))))) && (var_1_48 == ((double) (min (var_1_30 , (max (var_1_14 , (max (var_1_20 , var_1_16))))))))) && ((var_1_18 >= (max ((var_1_68 * 8.3f) , (var_1_15 + var_1_53)))) ? (var_1_49 == ((unsigned long int) ((abs (max (var_1_51 , var_1_52))) - var_1_46))) : (var_1_49 == ((unsigned long int) 64u)))) && ((var_1_13 > var_1_41) ? (var_1_53 == ((float) (var_1_21 - (min (var_1_31 , (1.0000000000000038E14f + var_1_41)))))) : (var_1_53 == ((float) var_1_14)))) && (((last_1_var_1_22 + 2) < (var_1_33 + last_1_var_1_65)) ? (var_1_54 == ((unsigned short int) (last_1_var_1_58 + last_1_var_1_67))) : (var_1_54 == ((unsigned short int) (min (var_1_7 , last_1_var_1_22)))))) && (((- (1.00000000000008E13f * var_1_15)) <= (var_1_18 + var_1_53)) ? (((var_1_46 ^ var_1_26) != var_1_43) ? (var_1_37 ? (var_1_56 == ((signed short int) ((min (var_1_25 , var_1_32)) - (abs (var_1_24 - var_1_22))))) : (var_1_56 == ((signed short int) ((min (var_1_25 , var_1_27)) - (abs (var_1_24 - var_1_33)))))) : 1) : (var_1_56 == ((signed short int) (var_1_32 - (var_1_57 - (last_1_var_1_56 + var_1_24))))))) && (((min ((var_1_59 - var_1_24) , last_1_var_1_54)) <= last_1_var_1_1) ? (var_1_58 == ((unsigned char) var_1_33)) : (var_1_36 ? (var_1_58 == ((unsigned char) (128 - var_1_24))) : (var_1_58 == ((unsigned char) (min (32 , var_1_33))))))) && ((var_1_21 == var_1_31) ? (var_1_60 == ((unsigned char) (var_1_37 || var_1_61))) : (var_1_60 == ((unsigned char) ((var_1_22 <= var_1_24) || (var_1_36 && var_1_38)))))) && (((var_1_54 >> (var_1_63 + var_1_64)) != (last_1_var_1_62 & var_1_22)) ? (var_1_37 ? (var_1_62 == ((unsigned short int) var_1_24)) : 1) : (var_1_62 == ((unsigned short int) var_1_58)))) && ((var_1_54 > var_1_33) ? (var_1_65 == ((signed char) ((min (var_1_64 , var_1_63)) - var_1_33))) : 1)) && (var_1_66 == ((signed char) var_1_27))) && (var_1_67 == ((signed short int) -1))) && (var_1_68 == ((float) var_1_41))
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

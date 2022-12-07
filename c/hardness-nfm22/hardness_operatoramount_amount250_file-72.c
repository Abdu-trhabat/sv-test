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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = -16;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 64;
double var_1_17 = 255.2;
double var_1_18 = 0.09999999999999998;
double var_1_19 = 128.5;
double var_1_20 = 256.2;
signed long int var_1_21 = 0;
signed long int var_1_22 = -16;
signed long int var_1_23 = 1685016490;
unsigned short int var_1_24 = 50;
float var_1_25 = 49.25;
float var_1_26 = 10.75;
float var_1_27 = 5.3;
float var_1_28 = 4.46;
float var_1_29 = 4.4;
float var_1_30 = 199.125;
float var_1_31 = 0.0;
float var_1_32 = 32.5;
float var_1_33 = 0.0;
signed short int var_1_34 = 100;
unsigned short int var_1_36 = 5;
unsigned short int var_1_37 = 38379;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 64;
unsigned short int var_1_40 = 500;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
double var_1_43 = 3.2;
float var_1_44 = 15.825;
signed long int var_1_45 = -4;
signed long int var_1_46 = -8;
float var_1_47 = 3.267;
signed long int var_1_48 = -2;
unsigned long int var_1_49 = 3277538632;
signed char var_1_50 = -128;
signed char var_1_51 = -1;
signed char var_1_52 = 32;
signed char var_1_53 = 25;
signed char var_1_54 = 4;
signed char var_1_55 = -4;
signed char var_1_56 = 64;
float var_1_57 = 4.4;
float var_1_58 = 25.75;
unsigned char var_1_59 = 16;
unsigned char var_1_60 = 5;
signed short int var_1_61 = 200;
unsigned short int var_1_62 = 128;
unsigned short int var_1_63 = 62066;
signed char var_1_64 = 16;
signed char var_1_65 = 100;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned char last_1_var_1_14 = 8;
signed long int last_1_var_1_21 = 0;
signed long int last_1_var_1_45 = -4;
signed char last_1_var_1_50 = -128;
float last_1_var_1_57 = 4.4;
unsigned char last_1_var_1_59 = 16;
signed char last_1_var_1_64 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch72Amount250
	if ((- (var_1_19 * last_1_var_1_57)) <= var_1_18) {
		var_1_22 = ((var_1_23 - last_1_var_1_45) - last_1_var_1_59);
	} else {
		if ((16 | last_1_var_1_21) > last_1_var_1_59) {
			var_1_22 = (abs (last_1_var_1_59));
		} else {
			var_1_22 = var_1_16;
		}
	}


	// From: Req12Batch72Amount250
	if ((var_1_37 - var_1_15) > var_1_38) {
		var_1_41 = (((var_1_38 < 64) && last_1_var_1_1) && var_1_5);
	} else {
		if (((last_1_var_1_59 >> last_1_var_1_50) % var_1_39) > ((max (last_1_var_1_64 , var_1_15)) / var_1_23)) {
			var_1_41 = (var_1_6 || (var_1_5 || var_1_4));
		} else {
			if (! last_1_var_1_1) {
				var_1_41 = (last_1_var_1_1 && var_1_4);
			} else {
				var_1_41 = (var_1_5 || var_1_42);
			}
		}
	}


	// From: Req18Batch72Amount250
	if (var_1_41) {
		if (var_1_27 <= var_1_20) {
			var_1_50 = ((min (0 , var_1_51)) - var_1_52);
		} else {
			var_1_50 = ((var_1_53 - var_1_54) + var_1_55);
		}
	} else {
		var_1_50 = var_1_55;
	}


	// From: Req1Batch72Amount250
	unsigned char stepLocal_0 = var_1_41;
	if (var_1_41 || stepLocal_0) {
		var_1_1 = (var_1_41 && var_1_4);
	} else {
		var_1_1 = (var_1_4 && ((var_1_5 || var_1_6) || var_1_7));
	}


	// From: Req7Batch72Amount250
	var_1_24 = var_1_15;


	// From: Req23Batch72Amount250
	if (var_1_4) {
		var_1_62 = var_1_39;
	} else {
		var_1_62 = ((var_1_63 - var_1_16) - var_1_60);
	}


	// From: Req24Batch72Amount250
	var_1_64 = ((min ((var_1_65 - var_1_53) , var_1_54)) - var_1_52);


	// From: Req21Batch72Amount250
	unsigned short int stepLocal_10 = var_1_37;
	if (((min (var_1_64 , 64)) << var_1_50) <= stepLocal_10) {
		if (var_1_6) {
			var_1_59 = var_1_60;
		} else {
			var_1_59 = var_1_38;
		}
	}


	// From: Req22Batch72Amount250
	if (var_1_42) {
		var_1_61 = var_1_59;
	}


	// From: Req19Batch72Amount250
	signed long int stepLocal_9 = (~ 128) / var_1_37;
	if (stepLocal_9 >= var_1_61) {
		var_1_56 = (var_1_51 - var_1_52);
	}


	// From: Req3Batch72Amount250
	unsigned char stepLocal_2 = var_1_59;
	signed char stepLocal_1 = var_1_56;
	if (stepLocal_2 > last_1_var_1_14) {
		if (! (! (var_1_7 || var_1_41))) {
			var_1_14 = var_1_15;
		}
	} else {
		if (stepLocal_1 > (var_1_59 - var_1_15)) {
			var_1_14 = (max (var_1_16 , 10));
		}
	}


	// From: Req4Batch72Amount250
	unsigned char stepLocal_4 = var_1_1;
	unsigned char stepLocal_3 = var_1_16;
	if (stepLocal_3 < var_1_56) {
		if (stepLocal_4 || var_1_5) {
			var_1_17 = var_1_18;
		} else {
			if (var_1_1) {
				var_1_17 = (min ((var_1_19 - var_1_20) , var_1_18));
			}
		}
	} else {
		var_1_17 = var_1_20;
	}


	// From: Req5Batch72Amount250
	if (var_1_56 <= (~ -256)) {
		var_1_21 = var_1_14;
	} else {
		if (2 <= var_1_64) {
			var_1_21 = (min (var_1_56 , (var_1_14 + -5)));
		} else {
			var_1_21 = var_1_15;
		}
	}


	// From: Req8Batch72Amount250
	if ((var_1_56 > var_1_16) && var_1_41) {
		if ((64 < var_1_59) && var_1_41) {
			var_1_25 = ((min (var_1_26 , var_1_27)) + (min ((var_1_28 - var_1_29) , var_1_30)));
		}
	} else {
		var_1_25 = (((max (var_1_31 , var_1_33)) - (max (var_1_28 , var_1_29))) - (var_1_32 + 15.5f));
	}


	// From: Req9Batch72Amount250
	if ((32u << var_1_16) < (~ (min (var_1_14 , var_1_61)))) {
		var_1_34 = (-25 + var_1_56);
	}


	// From: Req10Batch72Amount250
	if ((var_1_15 / var_1_23) >= var_1_14) {
		var_1_36 = (var_1_37 - var_1_56);
	} else {
		if (((var_1_38 + var_1_39) - 5) != (max (var_1_56 , var_1_59))) {
			var_1_36 = (var_1_56 + var_1_16);
		} else {
			var_1_36 = (38523 - var_1_16);
		}
	}


	// From: Req15Batch72Amount250
	if (var_1_1 || var_1_6) {
		var_1_46 = (var_1_16 + -4);
	} else {
		var_1_46 = ((min (var_1_14 , var_1_38)) - var_1_36);
	}


	// From: Req16Batch72Amount250
	if ((-10 == var_1_24) || var_1_4) {
		if ((var_1_56 / var_1_37) >= var_1_14) {
			if (((var_1_28 + var_1_32) - var_1_29) >= (max (var_1_20 , var_1_30))) {
				var_1_47 = var_1_18;
			}
		} else {
			if (var_1_41 && ((var_1_24 * var_1_16) > (-100 * var_1_15))) {
				var_1_47 = (min (var_1_20 , var_1_30));
			} else {
				var_1_47 = (var_1_19 - 31.125f);
			}
		}
	}


	// From: Req20Batch72Amount250
	if (((max (var_1_39 , var_1_59)) - var_1_14) > (abs (var_1_37))) {
		if (var_1_5) {
			var_1_57 = ((abs (var_1_28)) - (var_1_31 - var_1_29));
		}
	} else {
		if (var_1_53 < var_1_14) {
			var_1_57 = (abs (var_1_29));
		} else {
			var_1_57 = (var_1_28 + (255.2f + (min (var_1_32 , var_1_58))));
		}
	}


	// From: Req2Batch72Amount250
	if (var_1_1) {
		var_1_8 = (min ((-10000 + var_1_50) , ((var_1_56 + 64) + var_1_14)));
	} else {
		var_1_8 = ((min (16 , var_1_59)) - var_1_59);
	}


	// From: Req11Batch72Amount250
	unsigned char stepLocal_7 = var_1_14;
	signed short int stepLocal_6 = var_1_8;
	unsigned char stepLocal_5 = (~ var_1_21) >= (var_1_59 - var_1_16);
	if (stepLocal_5 && var_1_1) {
		if (stepLocal_7 < var_1_50) {
			if (stepLocal_6 >= var_1_59) {
				var_1_40 = (max (var_1_38 , (min (var_1_59 , var_1_8))));
			}
		} else {
			var_1_40 = var_1_59;
		}
	} else {
		var_1_40 = var_1_8;
	}


	// From: Req13Batch72Amount250
	if (var_1_47 >= (var_1_32 / var_1_44)) {
		var_1_43 = (var_1_32 + (min (var_1_27 , var_1_28)));
	}


	// From: Req17Batch72Amount250
	unsigned long int stepLocal_8 = var_1_24 * (var_1_49 - var_1_37);
	if (stepLocal_8 != var_1_40) {
		if (var_1_27 < 1.25f) {
			var_1_48 = (abs (1000));
		} else {
			var_1_48 = (-50 + var_1_14);
		}
	} else {
		var_1_48 = (min (var_1_14 , var_1_59));
	}


	// From: Req14Batch72Amount250
	if (var_1_59 > var_1_59) {
		if (var_1_48 >= var_1_36) {
			var_1_45 = (var_1_39 - (max ((var_1_48 + var_1_22) , var_1_15)));
		} else {
			var_1_45 = (var_1_36 + ((min (var_1_59 , var_1_37)) + var_1_59));
		}
	} else {
		var_1_45 = (min ((var_1_22 - var_1_39) , var_1_15));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741822);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427382800e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -461168.6018427382800e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 6917529.027641073700e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691390e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 4611686.018427382800e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 32767);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 128);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 64);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	assume_abort_if_not(var_1_44 != 0.0F);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 2147483647);
	assume_abort_if_not(var_1_49 <= 4294967295);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -1);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 126);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 63);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -63);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= -230584.3009213691390e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691390e+12F && var_1_58 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 254);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 49150);
	assume_abort_if_not(var_1_63 <= 65534);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 62);
	assume_abort_if_not(var_1_65 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_64 = var_1_64;
}

int property() {
	return ((((((((((((((((((((((((var_1_41 || var_1_41) ? (var_1_1 == ((unsigned char) (var_1_41 && var_1_4))) : (var_1_1 == ((unsigned char) (var_1_4 && ((var_1_5 || var_1_6) || var_1_7))))) && (var_1_1 ? (var_1_8 == ((signed short int) (min ((-10000 + var_1_50) , ((var_1_56 + 64) + var_1_14))))) : (var_1_8 == ((signed short int) ((min (16 , var_1_59)) - var_1_59))))) && ((var_1_59 > last_1_var_1_14) ? ((! (! (var_1_7 || var_1_41))) ? (var_1_14 == ((unsigned char) var_1_15)) : 1) : ((var_1_56 > (var_1_59 - var_1_15)) ? (var_1_14 == ((unsigned char) (max (var_1_16 , 10)))) : 1))) && ((var_1_16 < var_1_56) ? ((var_1_1 || var_1_5) ? (var_1_17 == ((double) var_1_18)) : (var_1_1 ? (var_1_17 == ((double) (min ((var_1_19 - var_1_20) , var_1_18)))) : 1)) : (var_1_17 == ((double) var_1_20)))) && ((var_1_56 <= (~ -256)) ? (var_1_21 == ((signed long int) var_1_14)) : ((2 <= var_1_64) ? (var_1_21 == ((signed long int) (min (var_1_56 , (var_1_14 + -5))))) : (var_1_21 == ((signed long int) var_1_15))))) && (((- (var_1_19 * last_1_var_1_57)) <= var_1_18) ? (var_1_22 == ((signed long int) ((var_1_23 - last_1_var_1_45) - last_1_var_1_59))) : (((16 | last_1_var_1_21) > last_1_var_1_59) ? (var_1_22 == ((signed long int) (abs (last_1_var_1_59)))) : (var_1_22 == ((signed long int) var_1_16))))) && (var_1_24 == ((unsigned short int) var_1_15))) && (((var_1_56 > var_1_16) && var_1_41) ? (((64 < var_1_59) && var_1_41) ? (var_1_25 == ((float) ((min (var_1_26 , var_1_27)) + (min ((var_1_28 - var_1_29) , var_1_30))))) : 1) : (var_1_25 == ((float) (((max (var_1_31 , var_1_33)) - (max (var_1_28 , var_1_29))) - (var_1_32 + 15.5f)))))) && (((32u << var_1_16) < (~ (min (var_1_14 , var_1_61)))) ? (var_1_34 == ((signed short int) (-25 + var_1_56))) : 1)) && (((var_1_15 / var_1_23) >= var_1_14) ? (var_1_36 == ((unsigned short int) (var_1_37 - var_1_56))) : ((((var_1_38 + var_1_39) - 5) != (max (var_1_56 , var_1_59))) ? (var_1_36 == ((unsigned short int) (var_1_56 + var_1_16))) : (var_1_36 == ((unsigned short int) (38523 - var_1_16)))))) && ((((~ var_1_21) >= (var_1_59 - var_1_16)) && var_1_1) ? ((var_1_14 < var_1_50) ? ((var_1_8 >= var_1_59) ? (var_1_40 == ((unsigned short int) (max (var_1_38 , (min (var_1_59 , var_1_8)))))) : 1) : (var_1_40 == ((unsigned short int) var_1_59))) : (var_1_40 == ((unsigned short int) var_1_8)))) && (((var_1_37 - var_1_15) > var_1_38) ? (var_1_41 == ((unsigned char) (((var_1_38 < 64) && last_1_var_1_1) && var_1_5))) : ((((last_1_var_1_59 >> last_1_var_1_50) % var_1_39) > ((max (last_1_var_1_64 , var_1_15)) / var_1_23)) ? (var_1_41 == ((unsigned char) (var_1_6 || (var_1_5 || var_1_4)))) : ((! last_1_var_1_1) ? (var_1_41 == ((unsigned char) (last_1_var_1_1 && var_1_4))) : (var_1_41 == ((unsigned char) (var_1_5 || var_1_42))))))) && ((var_1_47 >= (var_1_32 / var_1_44)) ? (var_1_43 == ((double) (var_1_32 + (min (var_1_27 , var_1_28))))) : 1)) && ((var_1_59 > var_1_59) ? ((var_1_48 >= var_1_36) ? (var_1_45 == ((signed long int) (var_1_39 - (max ((var_1_48 + var_1_22) , var_1_15))))) : (var_1_45 == ((signed long int) (var_1_36 + ((min (var_1_59 , var_1_37)) + var_1_59))))) : (var_1_45 == ((signed long int) (min ((var_1_22 - var_1_39) , var_1_15)))))) && ((var_1_1 || var_1_6) ? (var_1_46 == ((signed long int) (var_1_16 + -4))) : (var_1_46 == ((signed long int) ((min (var_1_14 , var_1_38)) - var_1_36))))) && (((-10 == var_1_24) || var_1_4) ? (((var_1_56 / var_1_37) >= var_1_14) ? ((((var_1_28 + var_1_32) - var_1_29) >= (max (var_1_20 , var_1_30))) ? (var_1_47 == ((float) var_1_18)) : 1) : ((var_1_41 && ((var_1_24 * var_1_16) > (-100 * var_1_15))) ? (var_1_47 == ((float) (min (var_1_20 , var_1_30)))) : (var_1_47 == ((float) (var_1_19 - 31.125f))))) : 1)) && (((var_1_24 * (var_1_49 - var_1_37)) != var_1_40) ? ((var_1_27 < 1.25f) ? (var_1_48 == ((signed long int) (abs (1000)))) : (var_1_48 == ((signed long int) (-50 + var_1_14)))) : (var_1_48 == ((signed long int) (min (var_1_14 , var_1_59)))))) && (var_1_41 ? ((var_1_27 <= var_1_20) ? (var_1_50 == ((signed char) ((min (0 , var_1_51)) - var_1_52))) : (var_1_50 == ((signed char) ((var_1_53 - var_1_54) + var_1_55)))) : (var_1_50 == ((signed char) var_1_55)))) && ((((~ 128) / var_1_37) >= var_1_61) ? (var_1_56 == ((signed char) (var_1_51 - var_1_52))) : 1)) && ((((max (var_1_39 , var_1_59)) - var_1_14) > (abs (var_1_37))) ? (var_1_5 ? (var_1_57 == ((float) ((abs (var_1_28)) - (var_1_31 - var_1_29)))) : 1) : ((var_1_53 < var_1_14) ? (var_1_57 == ((float) (abs (var_1_29)))) : (var_1_57 == ((float) (var_1_28 + (255.2f + (min (var_1_32 , var_1_58))))))))) && ((((min (var_1_64 , 64)) << var_1_50) <= var_1_37) ? (var_1_6 ? (var_1_59 == ((unsigned char) var_1_60)) : (var_1_59 == ((unsigned char) var_1_38))) : 1)) && (var_1_42 ? (var_1_61 == ((signed short int) var_1_59)) : 1)) && (var_1_4 ? (var_1_62 == ((unsigned short int) var_1_39)) : (var_1_62 == ((unsigned short int) ((var_1_63 - var_1_16) - var_1_60))))) && (var_1_64 == ((signed char) ((min ((var_1_65 - var_1_53) , var_1_54)) - var_1_52)))
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

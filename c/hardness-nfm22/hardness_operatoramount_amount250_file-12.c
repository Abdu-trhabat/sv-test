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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 100;
double var_1_8 = 8.4;
double var_1_9 = 24.5;
double var_1_10 = 999999.25;
double var_1_11 = 24.8;
double var_1_12 = 500.5;
double var_1_13 = 256.5;
double var_1_14 = 15.5;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 50;
unsigned char var_1_18 = 2;
unsigned char var_1_19 = 32;
float var_1_20 = 24.875;
float var_1_21 = 9.7;
float var_1_22 = 8.125;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned short int var_1_28 = 128;
unsigned long int var_1_30 = 1;
unsigned long int var_1_31 = 1804783077;
unsigned long int var_1_32 = 1659937661;
unsigned long int var_1_33 = 1205994122;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 64;
unsigned char var_1_37 = 64;
unsigned long int var_1_38 = 1;
unsigned long int var_1_39 = 1871245297;
unsigned char var_1_40 = 128;
float var_1_41 = 64.5;
float var_1_42 = 8.08;
signed char var_1_43 = -16;
signed char var_1_44 = 25;
signed char var_1_45 = 32;
signed char var_1_46 = 8;
signed long int var_1_47 = -4;
double var_1_48 = 24.75;
signed long int var_1_49 = 2115197670;
signed char var_1_50 = 100;
signed char var_1_51 = 4;
double var_1_52 = 128.375;
unsigned long int var_1_53 = 16;
unsigned long int var_1_55 = 4077236229;
signed long int var_1_56 = 10;
float var_1_57 = 256.2;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 100;
unsigned char last_1_var_1_15 = 2;
float last_1_var_1_20 = 24.875;
unsigned short int last_1_var_1_28 = 128;
unsigned long int last_1_var_1_30 = 1;
unsigned char last_1_var_1_35 = 0;
unsigned long int last_1_var_1_38 = 1;
unsigned char last_1_var_1_40 = 128;
signed long int last_1_var_1_47 = -4;
signed char last_1_var_1_50 = 100;
unsigned long int last_1_var_1_53 = 16;
signed long int last_1_var_1_56 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch12Amount250
	unsigned char stepLocal_15 = (last_1_var_1_15 - 2) <= (min (var_1_31 , 256));
	signed long int stepLocal_14 = last_1_var_1_40;
	if (((var_1_42 - var_1_21) / var_1_48) < (var_1_22 * var_1_10)) {
		var_1_50 = (((max (var_1_44 , var_1_18)) + var_1_51) - 2);
	} else {
		if ((var_1_22 - 15.8f) < last_1_var_1_20) {
			var_1_50 = (max (var_1_44 , (min ((var_1_18 + var_1_51) , (abs (var_1_45))))));
		} else {
			if ((max ((last_1_var_1_50 | last_1_var_1_40) , last_1_var_1_38)) >= stepLocal_14) {
				if (stepLocal_15 || (var_1_16 != var_1_39)) {
					var_1_50 = (min (var_1_46 , var_1_51));
				} else {
					var_1_50 = (abs (var_1_44));
				}
			} else {
				var_1_50 = (var_1_44 - var_1_45);
			}
		}
	}


	// From: Req8Batch12Amount250
	signed long int stepLocal_11 = abs (last_1_var_1_40);
	signed long int stepLocal_10 = last_1_var_1_47;
	if (stepLocal_11 >= var_1_17) {
		if (stepLocal_10 < var_1_17) {
			var_1_30 = ((var_1_31 + (var_1_32 - last_1_var_1_28)) - (max ((var_1_33 - var_1_19) , last_1_var_1_28)));
		} else {
			var_1_30 = last_1_var_1_47;
		}
	}


	// From: Req16Batch12Amount250
	signed long int stepLocal_16 = -50;
	if (stepLocal_16 <= var_1_30) {
		var_1_52 = (var_1_42 - var_1_21);
	}


	// From: Req6Batch12Amount250
	signed long int stepLocal_7 = (last_1_var_1_56 + 64) * (var_1_16 * var_1_18);
	if (var_1_9 < var_1_14) {
		var_1_27 = (var_1_25 || var_1_24);
	} else {
		if (last_1_var_1_30 <= stepLocal_7) {
			var_1_27 = (var_1_25 || var_1_26);
		}
	}


	// From: Req9Batch12Amount250
	if (var_1_27) {
		var_1_35 = ((var_1_36 + var_1_37) - var_1_17);
	} else {
		var_1_35 = var_1_17;
	}


	// From: Req4Batch12Amount250
	if (var_1_27) {
		var_1_20 = var_1_9;
	} else {
		var_1_20 = (((var_1_21 - var_1_22) + var_1_11) + var_1_12);
	}


	// From: Req3Batch12Amount250
	unsigned long int stepLocal_4 = - (last_1_var_1_53 * last_1_var_1_35);
	unsigned char stepLocal_3 = var_1_19;
	if (last_1_var_1_50 < stepLocal_4) {
		var_1_15 = (var_1_16 - (min ((var_1_17 + var_1_18) , var_1_19)));
	} else {
		if (last_1_var_1_1 <= stepLocal_3) {
			var_1_15 = (max (var_1_18 , var_1_19));
		} else {
			var_1_15 = (abs (var_1_17));
		}
	}


	// From: Req13Batch12Amount250
	signed long int stepLocal_12 = max (var_1_16 , var_1_15);
	if (stepLocal_12 >= var_1_15) {
		var_1_43 = (min (((var_1_18 + var_1_44) - (min (var_1_17 , var_1_45))) , var_1_46));
	}


	// From: Req2Batch12Amount250
	if (var_1_27) {
		var_1_8 = (max ((max (var_1_9 , var_1_10)) , ((var_1_11 + var_1_12) + (max (var_1_13 , var_1_14)))));
	} else {
		var_1_8 = ((min (var_1_13 , var_1_12)) + var_1_11);
	}


	// From: Req11Batch12Amount250
	var_1_40 = (min (var_1_19 , (min ((var_1_16 - var_1_18) , var_1_37))));


	// From: Req12Batch12Amount250
	if (var_1_12 >= var_1_52) {
		var_1_41 = (max ((abs (max (var_1_9 , var_1_11))) , (64.6f + var_1_21)));
	} else {
		var_1_41 = ((max (var_1_11 , var_1_22)) + ((var_1_21 - var_1_42) + var_1_12));
	}


	// From: Req19Batch12Amount250
	if ((max (var_1_41 , var_1_14)) < (max (var_1_20 , var_1_20))) {
		var_1_57 = (max ((min (7.4f , (var_1_21 - 63.6f))) , (max (var_1_11 , var_1_22))));
	}


	// From: Req1Batch12Amount250
	unsigned char stepLocal_2 = ! var_1_27;
	unsigned long int stepLocal_1 = var_1_30;
	signed long int stepLocal_0 = 1;
	if (((last_1_var_1_1 * var_1_35) >= var_1_50) && stepLocal_2) {
		var_1_1 = (var_1_35 - (max (last_1_var_1_1 , var_1_40)));
	} else {
		if ((65169 - last_1_var_1_1) < stepLocal_1) {
			var_1_1 = ((min (last_1_var_1_1 , var_1_35)) - var_1_40);
		} else {
			if ((4 + last_1_var_1_1) != stepLocal_0) {
				var_1_1 = last_1_var_1_1;
			}
		}
	}


	// From: Req10Batch12Amount250
	if (var_1_35 <= -32) {
		if (var_1_35 >= var_1_16) {
			if (((max (var_1_35 , var_1_15)) / var_1_36) != (min ((-64 >> var_1_35) , var_1_15))) {
				var_1_38 = var_1_50;
			} else {
				if ((min (var_1_35 , var_1_17)) < (var_1_1 & -128)) {
					var_1_38 = ((var_1_32 + var_1_39) - var_1_35);
				} else {
					var_1_38 = (min ((var_1_35 + var_1_32) , var_1_37));
				}
			}
		} else {
			var_1_38 = (var_1_18 + (var_1_15 + 8u));
		}
	} else {
		var_1_38 = var_1_33;
	}


	// From: Req7Batch12Amount250
	unsigned char stepLocal_9 = var_1_24;
	signed long int stepLocal_8 = var_1_40 * (~ var_1_19);
	if (stepLocal_9 || var_1_25) {
		if ((var_1_18 / var_1_16) >= stepLocal_8) {
			var_1_28 = (min ((var_1_40 + var_1_19) , (var_1_30 + (var_1_16 + var_1_40))));
		} else {
			var_1_28 = last_1_var_1_28;
		}
	}


	// From: Req14Batch12Amount250
	unsigned long int stepLocal_13 = var_1_33;
	if (stepLocal_13 != var_1_35) {
		if ((var_1_9 + (var_1_52 * var_1_10)) <= (var_1_13 / var_1_48)) {
			var_1_47 = ((var_1_49 - var_1_50) - var_1_16);
		}
	} else {
		var_1_47 = (var_1_49 - var_1_28);
	}


	// From: Req18Batch12Amount250
	unsigned char stepLocal_20 = var_1_26;
	unsigned char stepLocal_19 = var_1_16;
	if ((var_1_48 * var_1_9) != (min (var_1_12 , var_1_52))) {
		if (stepLocal_20 && (! var_1_27)) {
			var_1_56 = (-200 + var_1_15);
		} else {
			if ((0 ^ var_1_17) < stepLocal_19) {
				var_1_56 = var_1_36;
			}
		}
	} else {
		var_1_56 = var_1_15;
	}


	// From: Req5Batch12Amount250
	signed long int stepLocal_6 = abs (var_1_19);
	unsigned char stepLocal_5 = (min (var_1_21 , var_1_20)) != var_1_10;
	if (var_1_43 > stepLocal_6) {
		if ((var_1_19 <= var_1_17) || stepLocal_5) {
			var_1_23 = ((! var_1_24) || var_1_25);
		} else {
			var_1_23 = ((var_1_27 || (var_1_15 <= var_1_47)) && (var_1_24 && var_1_26));
		}
	} else {
		var_1_23 = ((var_1_13 <= var_1_10) && var_1_25);
	}


	// From: Req17Batch12Amount250
	unsigned char stepLocal_18 = var_1_42 > var_1_48;
	signed long int stepLocal_17 = var_1_47;
	if ((min (var_1_35 , var_1_36)) < stepLocal_17) {
		var_1_53 = var_1_49;
	} else {
		if (var_1_25) {
			if ((var_1_52 >= var_1_21) && stepLocal_18) {
				var_1_53 = (var_1_55 - (var_1_1 + var_1_15));
			} else {
				if (! var_1_23) {
					var_1_53 = (min (var_1_40 , (var_1_33 + var_1_1)));
				} else {
					var_1_53 = (abs (var_1_33));
				}
			}
		} else {
			var_1_53 = (abs (var_1_56));
		}
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 64);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1610612735);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 1073741823);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 63);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 64);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 1073741824);
	assume_abort_if_not(var_1_39 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691390e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -127);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	assume_abort_if_not(var_1_48 != 0.0F);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 1073741822);
	assume_abort_if_not(var_1_49 <= 2147483646);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 2147483647);
	assume_abort_if_not(var_1_55 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_56 = var_1_56;
}

int property() {
	return (((((((((((((((((((((last_1_var_1_1 * var_1_35) >= var_1_50) && (! var_1_27)) ? (var_1_1 == ((signed short int) (var_1_35 - (max (last_1_var_1_1 , var_1_40))))) : (((65169 - last_1_var_1_1) < var_1_30) ? (var_1_1 == ((signed short int) ((min (last_1_var_1_1 , var_1_35)) - var_1_40))) : (((4 + last_1_var_1_1) != 1) ? (var_1_1 == ((signed short int) last_1_var_1_1)) : 1))) && (var_1_27 ? (var_1_8 == ((double) (max ((max (var_1_9 , var_1_10)) , ((var_1_11 + var_1_12) + (max (var_1_13 , var_1_14))))))) : (var_1_8 == ((double) ((min (var_1_13 , var_1_12)) + var_1_11))))) && ((last_1_var_1_50 < (- (last_1_var_1_53 * last_1_var_1_35))) ? (var_1_15 == ((unsigned char) (var_1_16 - (min ((var_1_17 + var_1_18) , var_1_19))))) : ((last_1_var_1_1 <= var_1_19) ? (var_1_15 == ((unsigned char) (max (var_1_18 , var_1_19)))) : (var_1_15 == ((unsigned char) (abs (var_1_17))))))) && (var_1_27 ? (var_1_20 == ((float) var_1_9)) : (var_1_20 == ((float) (((var_1_21 - var_1_22) + var_1_11) + var_1_12))))) && ((var_1_43 > (abs (var_1_19))) ? (((var_1_19 <= var_1_17) || ((min (var_1_21 , var_1_20)) != var_1_10)) ? (var_1_23 == ((unsigned char) ((! var_1_24) || var_1_25))) : (var_1_23 == ((unsigned char) ((var_1_27 || (var_1_15 <= var_1_47)) && (var_1_24 && var_1_26))))) : (var_1_23 == ((unsigned char) ((var_1_13 <= var_1_10) && var_1_25))))) && ((var_1_9 < var_1_14) ? (var_1_27 == ((unsigned char) (var_1_25 || var_1_24))) : ((last_1_var_1_30 <= ((last_1_var_1_56 + 64) * (var_1_16 * var_1_18))) ? (var_1_27 == ((unsigned char) (var_1_25 || var_1_26))) : 1))) && ((var_1_24 || var_1_25) ? (((var_1_18 / var_1_16) >= (var_1_40 * (~ var_1_19))) ? (var_1_28 == ((unsigned short int) (min ((var_1_40 + var_1_19) , (var_1_30 + (var_1_16 + var_1_40)))))) : (var_1_28 == ((unsigned short int) last_1_var_1_28))) : 1)) && (((abs (last_1_var_1_40)) >= var_1_17) ? ((last_1_var_1_47 < var_1_17) ? (var_1_30 == ((unsigned long int) ((var_1_31 + (var_1_32 - last_1_var_1_28)) - (max ((var_1_33 - var_1_19) , last_1_var_1_28))))) : (var_1_30 == ((unsigned long int) last_1_var_1_47))) : 1)) && (var_1_27 ? (var_1_35 == ((unsigned char) ((var_1_36 + var_1_37) - var_1_17))) : (var_1_35 == ((unsigned char) var_1_17)))) && ((var_1_35 <= -32) ? ((var_1_35 >= var_1_16) ? ((((max (var_1_35 , var_1_15)) / var_1_36) != (min ((-64 >> var_1_35) , var_1_15))) ? (var_1_38 == ((unsigned long int) var_1_50)) : (((min (var_1_35 , var_1_17)) < (var_1_1 & -128)) ? (var_1_38 == ((unsigned long int) ((var_1_32 + var_1_39) - var_1_35))) : (var_1_38 == ((unsigned long int) (min ((var_1_35 + var_1_32) , var_1_37)))))) : (var_1_38 == ((unsigned long int) (var_1_18 + (var_1_15 + 8u))))) : (var_1_38 == ((unsigned long int) var_1_33)))) && (var_1_40 == ((unsigned char) (min (var_1_19 , (min ((var_1_16 - var_1_18) , var_1_37))))))) && ((var_1_12 >= var_1_52) ? (var_1_41 == ((float) (max ((abs (max (var_1_9 , var_1_11))) , (64.6f + var_1_21))))) : (var_1_41 == ((float) ((max (var_1_11 , var_1_22)) + ((var_1_21 - var_1_42) + var_1_12)))))) && (((max (var_1_16 , var_1_15)) >= var_1_15) ? (var_1_43 == ((signed char) (min (((var_1_18 + var_1_44) - (min (var_1_17 , var_1_45))) , var_1_46)))) : 1)) && ((var_1_33 != var_1_35) ? (((var_1_9 + (var_1_52 * var_1_10)) <= (var_1_13 / var_1_48)) ? (var_1_47 == ((signed long int) ((var_1_49 - var_1_50) - var_1_16))) : 1) : (var_1_47 == ((signed long int) (var_1_49 - var_1_28))))) && ((((var_1_42 - var_1_21) / var_1_48) < (var_1_22 * var_1_10)) ? (var_1_50 == ((signed char) (((max (var_1_44 , var_1_18)) + var_1_51) - 2))) : (((var_1_22 - 15.8f) < last_1_var_1_20) ? (var_1_50 == ((signed char) (max (var_1_44 , (min ((var_1_18 + var_1_51) , (abs (var_1_45)))))))) : (((max ((last_1_var_1_50 | last_1_var_1_40) , last_1_var_1_38)) >= last_1_var_1_40) ? ((((last_1_var_1_15 - 2) <= (min (var_1_31 , 256))) || (var_1_16 != var_1_39)) ? (var_1_50 == ((signed char) (min (var_1_46 , var_1_51)))) : (var_1_50 == ((signed char) (abs (var_1_44))))) : (var_1_50 == ((signed char) (var_1_44 - var_1_45))))))) && ((-50 <= var_1_30) ? (var_1_52 == ((double) (var_1_42 - var_1_21))) : 1)) && (((min (var_1_35 , var_1_36)) < var_1_47) ? (var_1_53 == ((unsigned long int) var_1_49)) : (var_1_25 ? (((var_1_52 >= var_1_21) && (var_1_42 > var_1_48)) ? (var_1_53 == ((unsigned long int) (var_1_55 - (var_1_1 + var_1_15)))) : ((! var_1_23) ? (var_1_53 == ((unsigned long int) (min (var_1_40 , (var_1_33 + var_1_1))))) : (var_1_53 == ((unsigned long int) (abs (var_1_33)))))) : (var_1_53 == ((unsigned long int) (abs (var_1_56))))))) && (((var_1_48 * var_1_9) != (min (var_1_12 , var_1_52))) ? ((var_1_26 && (! var_1_27)) ? (var_1_56 == ((signed long int) (-200 + var_1_15))) : (((0 ^ var_1_17) < var_1_16) ? (var_1_56 == ((signed long int) var_1_36)) : 1)) : (var_1_56 == ((signed long int) var_1_15)))) && (((max (var_1_41 , var_1_14)) < (max (var_1_20 , var_1_20))) ? (var_1_57 == ((float) (max ((min (7.4f , (var_1_21 - 63.6f))) , (max (var_1_11 , var_1_22)))))) : 1)
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

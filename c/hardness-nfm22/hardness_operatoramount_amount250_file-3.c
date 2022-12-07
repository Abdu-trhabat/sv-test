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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -2;
unsigned char var_1_4 = 128;
signed char var_1_5 = 0;
signed char var_1_6 = 32;
signed char var_1_7 = 5;
signed char var_1_8 = 32;
signed char var_1_9 = 0;
double var_1_10 = 128.6;
double var_1_13 = 9.125;
double var_1_14 = 32.75;
double var_1_15 = 63.5;
double var_1_16 = 256.5;
double var_1_17 = 15.8;
unsigned short int var_1_18 = 64;
unsigned short int var_1_19 = 41023;
unsigned short int var_1_20 = 5;
unsigned short int var_1_21 = 26155;
signed char var_1_22 = 0;
double var_1_24 = 499.8;
double var_1_25 = 3.75;
double var_1_26 = 9999.33;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
signed char var_1_31 = -2;
signed short int var_1_32 = -5;
signed short int var_1_33 = 18382;
signed char var_1_34 = -1;
signed char var_1_35 = 64;
signed char var_1_36 = 8;
unsigned short int var_1_37 = 32;
double var_1_39 = 9.6;
float var_1_40 = 2.75;
double var_1_41 = 0.0;
float var_1_42 = 256.8;
float var_1_43 = 64.75;
signed short int var_1_44 = 4;
unsigned short int var_1_45 = 32;
signed long int var_1_46 = 8;
signed long int var_1_47 = 2;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned long int var_1_53 = 2;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 64;
double var_1_56 = 10000.5;
double var_1_57 = 4.125;
double var_1_58 = 99999999999.5;
double var_1_59 = 0.75;
unsigned char var_1_60 = 8;
unsigned char var_1_61 = 128;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_32 = -5;
float last_1_var_1_40 = 2.75;
unsigned short int last_1_var_1_45 = 32;
unsigned char last_1_var_1_49 = 0;
unsigned char last_1_var_1_54 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req14Batch3Amount250
	if (var_1_26 > ((var_1_25 + last_1_var_1_40) + var_1_41)) {
		var_1_44 = var_1_4;
	}


	// From: Req21Batch3Amount250
	if (! var_1_51) {
		var_1_60 = (var_1_8 + var_1_5);
	} else {
		if (last_1_var_1_49 && (last_1_var_1_54 < var_1_46)) {
			var_1_60 = (var_1_61 - var_1_9);
		} else {
			var_1_60 = var_1_5;
		}
	}


	// From: Req18Batch3Amount250
	unsigned char stepLocal_13 = last_1_var_1_49;
	if (stepLocal_13 || (var_1_16 <= var_1_39)) {
		var_1_54 = ((var_1_55 - var_1_6) + 10);
	}


	// From: Req7Batch3Amount250
	if (var_1_9 >= var_1_8) {
		var_1_27 = (var_1_28 && var_1_29);
	} else {
		var_1_27 = (! var_1_30);
	}


	// From: Req19Batch3Amount250
	signed char stepLocal_14 = var_1_9;
	if (var_1_60 >= stepLocal_14) {
		var_1_56 = var_1_15;
	} else {
		if (! var_1_27) {
			var_1_56 = (max ((min ((var_1_25 - 0.25) , var_1_15)) , var_1_17));
		} else {
			if (var_1_28) {
				var_1_56 = ((min (var_1_25 , var_1_16)) + (var_1_17 - var_1_26));
			} else {
				var_1_56 = (max (var_1_13 , var_1_42));
			}
		}
	}


	// From: Req15Batch3Amount250
	if (var_1_5 > (var_1_60 >> (var_1_46 - var_1_47))) {
		var_1_45 = (min (2 , (36840 - var_1_21)));
	} else {
		if (((- 32) >= var_1_60) || ((var_1_4 % var_1_8) >= 16)) {
			if (last_1_var_1_45 >= var_1_33) {
				var_1_45 = (max ((min (var_1_46 , var_1_54)) , var_1_9));
			}
		} else {
			var_1_45 = (last_1_var_1_45 + var_1_47);
		}
	}


	// From: Req5Batch3Amount250
	unsigned char stepLocal_4 = (max (var_1_45 , var_1_21)) >= 2;
	if (((var_1_60 * 4u) < var_1_5) || stepLocal_4) {
		if (var_1_16 < var_1_56) {
			var_1_22 = var_1_6;
		}
	}


	// From: Req17Batch3Amount250
	unsigned short int stepLocal_12 = var_1_45;
	if (stepLocal_12 != (var_1_7 | (var_1_19 - var_1_5))) {
		var_1_53 = (min (var_1_7 , var_1_6));
	} else {
		var_1_53 = (abs (2u + var_1_45));
	}


	// From: Req9Batch3Amount250
	signed long int stepLocal_6 = ~ var_1_4;
	unsigned short int stepLocal_5 = var_1_45;
	if ((var_1_21 | var_1_9) >= stepLocal_5) {
		if (last_1_var_1_32 != stepLocal_6) {
			var_1_32 = ((var_1_33 - var_1_4) - var_1_6);
		} else {
			var_1_32 = (abs (-64));
		}
	} else {
		if (var_1_29) {
			var_1_32 = last_1_var_1_32;
		} else {
			var_1_32 = last_1_var_1_32;
		}
	}


	// From: Req10Batch3Amount250
	signed long int stepLocal_7 = min (var_1_54 , var_1_60);
	if (stepLocal_7 != ((min (var_1_21 , var_1_32)) / var_1_8)) {
		var_1_34 = ((max (var_1_8 , (var_1_35 - var_1_9))) - var_1_36);
	} else {
		var_1_34 = var_1_6;
	}


	// From: Req3Batch3Amount250
	signed long int stepLocal_3 = (var_1_6 | var_1_9) * var_1_34;
	if ((min ((max (var_1_8 , var_1_4)) , (var_1_60 * var_1_7))) <= stepLocal_3) {
		var_1_18 = ((abs (var_1_60)) + var_1_7);
	} else {
		var_1_18 = (var_1_19 - var_1_7);
	}


	// From: Req4Batch3Amount250
	if ((min (var_1_14 , var_1_15)) >= -0.6) {
		var_1_20 = (var_1_5 + (var_1_21 - var_1_18));
	} else {
		var_1_20 = var_1_9;
	}


	// From: Req13Batch3Amount250
	unsigned short int stepLocal_11 = var_1_20;
	if (stepLocal_11 <= var_1_8) {
		var_1_43 = (min (((max (var_1_25 , var_1_26)) + var_1_15) , 9999.25f));
	}


	// From: Req16Batch3Amount250
	if ((var_1_7 ^ var_1_19) <= var_1_18) {
		if (! var_1_27) {
			var_1_49 = (var_1_30 || ((var_1_28 && var_1_50) || var_1_51));
		} else {
			var_1_49 = (! var_1_29);
		}
	} else {
		var_1_49 = ((var_1_28 && var_1_29) && (var_1_30 || var_1_52));
	}


	// From: Req2Batch3Amount250
	unsigned char stepLocal_2 = var_1_27;
	if (stepLocal_2 && var_1_49) {
		var_1_10 = var_1_13;
	} else {
		if (var_1_27) {
			if (var_1_49) {
				var_1_10 = (var_1_14 + (var_1_15 + var_1_16));
			} else {
				var_1_10 = ((max ((max (8.2 , var_1_16)) , (2.5 - var_1_17))) + var_1_14);
			}
		}
	}


	// From: Req6Batch3Amount250
	if (var_1_6 <= -8) {
		if (var_1_27 || (var_1_5 == var_1_6)) {
			var_1_24 = (var_1_16 + var_1_17);
		} else {
			var_1_24 = ((max ((var_1_16 + var_1_15) , (abs (-0.25)))) + (var_1_17 - (var_1_25 + var_1_26)));
		}
	} else {
		if (var_1_49) {
			var_1_24 = var_1_13;
		}
	}


	// From: Req20Batch3Amount250
	if (var_1_26 >= var_1_13) {
		var_1_57 = (((var_1_58 + var_1_59) + (max (var_1_16 , var_1_26))) + (max (var_1_14 , var_1_25)));
	} else {
		if (0u <= var_1_54) {
			if (var_1_49) {
				var_1_57 = (var_1_17 - var_1_25);
			}
		} else {
			var_1_57 = var_1_13;
		}
	}


	// From: Req8Batch3Amount250
	if ((max (var_1_13 , var_1_43)) < var_1_25) {
		if (var_1_49) {
			var_1_31 = (abs (var_1_9));
		} else {
			if ((var_1_44 - var_1_32) > var_1_60) {
				var_1_31 = (var_1_5 + var_1_8);
			} else {
				var_1_31 = var_1_8;
			}
		}
	} else {
		var_1_31 = var_1_8;
	}


	// From: Req1Batch3Amount250
	signed char stepLocal_1 = var_1_34;
	signed char stepLocal_0 = var_1_31;
	if (stepLocal_0 != (var_1_34 / var_1_4)) {
		if (stepLocal_1 >= var_1_31) {
			var_1_1 = ((abs (var_1_5 - var_1_6)) + (var_1_7 - (var_1_8 - var_1_9)));
		} else {
			var_1_1 = (abs (var_1_7));
		}
	}


	// From: Req11Batch3Amount250
	unsigned char stepLocal_8 = var_1_1 > var_1_44;
	if (stepLocal_8 || var_1_27) {
		if (var_1_57 <= (- var_1_26)) {
			if (var_1_14 != ((- var_1_16) / var_1_39)) {
				var_1_37 = var_1_5;
			}
		}
	}


	// From: Req12Batch3Amount250
	unsigned short int stepLocal_10 = var_1_37;
	unsigned long int stepLocal_9 = var_1_53;
	if (var_1_43 <= ((var_1_41 - var_1_17) - var_1_26)) {
		var_1_40 = (min ((var_1_17 - var_1_26) , var_1_13));
	} else {
		if (var_1_49) {
			if (stepLocal_10 < var_1_5) {
				var_1_40 = (max ((min (var_1_14 , var_1_26)) , ((max (var_1_25 , var_1_16)) + var_1_17)));
			} else {
				if (stepLocal_9 <= var_1_37) {
					var_1_40 = (max (var_1_16 , (min (var_1_26 , var_1_25))));
				} else {
					var_1_40 = (min (var_1_42 , (min (var_1_25 , (min (var_1_16 , var_1_17))))));
				}
			}
		} else {
			var_1_40 = var_1_25;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 31);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 31);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -230584.3009213691390e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691390e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -230584.3009213691390e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691390e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691390e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691390e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 16382);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 62);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	assume_abort_if_not(var_1_39 != 0.0F);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 4611686.018427387900e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854765600e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= 8);
	assume_abort_if_not(var_1_46 <= 16);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 8);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 63);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -115292.1504606845700e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 1152921.504606845700e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -115292.1504606845700e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 1152921.504606845700e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 127);
	assume_abort_if_not(var_1_61 <= 254);
}



void updateLastVariables() {
	last_1_var_1_32 = var_1_32;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_54 = var_1_54;
}

int property() {
	return (((((((((((((((((((((var_1_31 != (var_1_34 / var_1_4)) ? ((var_1_34 >= var_1_31) ? (var_1_1 == ((signed char) ((abs (var_1_5 - var_1_6)) + (var_1_7 - (var_1_8 - var_1_9))))) : (var_1_1 == ((signed char) (abs (var_1_7))))) : 1) && ((var_1_27 && var_1_49) ? (var_1_10 == ((double) var_1_13)) : (var_1_27 ? (var_1_49 ? (var_1_10 == ((double) (var_1_14 + (var_1_15 + var_1_16)))) : (var_1_10 == ((double) ((max ((max (8.2 , var_1_16)) , (2.5 - var_1_17))) + var_1_14)))) : 1))) && (((min ((max (var_1_8 , var_1_4)) , (var_1_60 * var_1_7))) <= ((var_1_6 | var_1_9) * var_1_34)) ? (var_1_18 == ((unsigned short int) ((abs (var_1_60)) + var_1_7))) : (var_1_18 == ((unsigned short int) (var_1_19 - var_1_7))))) && (((min (var_1_14 , var_1_15)) >= -0.6) ? (var_1_20 == ((unsigned short int) (var_1_5 + (var_1_21 - var_1_18)))) : (var_1_20 == ((unsigned short int) var_1_9)))) && ((((var_1_60 * 4u) < var_1_5) || ((max (var_1_45 , var_1_21)) >= 2)) ? ((var_1_16 < var_1_56) ? (var_1_22 == ((signed char) var_1_6)) : 1) : 1)) && ((var_1_6 <= -8) ? ((var_1_27 || (var_1_5 == var_1_6)) ? (var_1_24 == ((double) (var_1_16 + var_1_17))) : (var_1_24 == ((double) ((max ((var_1_16 + var_1_15) , (abs (-0.25)))) + (var_1_17 - (var_1_25 + var_1_26)))))) : (var_1_49 ? (var_1_24 == ((double) var_1_13)) : 1))) && ((var_1_9 >= var_1_8) ? (var_1_27 == ((unsigned char) (var_1_28 && var_1_29))) : (var_1_27 == ((unsigned char) (! var_1_30))))) && (((max (var_1_13 , var_1_43)) < var_1_25) ? (var_1_49 ? (var_1_31 == ((signed char) (abs (var_1_9)))) : (((var_1_44 - var_1_32) > var_1_60) ? (var_1_31 == ((signed char) (var_1_5 + var_1_8))) : (var_1_31 == ((signed char) var_1_8)))) : (var_1_31 == ((signed char) var_1_8)))) && (((var_1_21 | var_1_9) >= var_1_45) ? ((last_1_var_1_32 != (~ var_1_4)) ? (var_1_32 == ((signed short int) ((var_1_33 - var_1_4) - var_1_6))) : (var_1_32 == ((signed short int) (abs (-64))))) : (var_1_29 ? (var_1_32 == ((signed short int) last_1_var_1_32)) : (var_1_32 == ((signed short int) last_1_var_1_32))))) && (((min (var_1_54 , var_1_60)) != ((min (var_1_21 , var_1_32)) / var_1_8)) ? (var_1_34 == ((signed char) ((max (var_1_8 , (var_1_35 - var_1_9))) - var_1_36))) : (var_1_34 == ((signed char) var_1_6)))) && (((var_1_1 > var_1_44) || var_1_27) ? ((var_1_57 <= (- var_1_26)) ? ((var_1_14 != ((- var_1_16) / var_1_39)) ? (var_1_37 == ((unsigned short int) var_1_5)) : 1) : 1) : 1)) && ((var_1_43 <= ((var_1_41 - var_1_17) - var_1_26)) ? (var_1_40 == ((float) (min ((var_1_17 - var_1_26) , var_1_13)))) : (var_1_49 ? ((var_1_37 < var_1_5) ? (var_1_40 == ((float) (max ((min (var_1_14 , var_1_26)) , ((max (var_1_25 , var_1_16)) + var_1_17))))) : ((var_1_53 <= var_1_37) ? (var_1_40 == ((float) (max (var_1_16 , (min (var_1_26 , var_1_25)))))) : (var_1_40 == ((float) (min (var_1_42 , (min (var_1_25 , (min (var_1_16 , var_1_17)))))))))) : (var_1_40 == ((float) var_1_25))))) && ((var_1_20 <= var_1_8) ? (var_1_43 == ((float) (min (((max (var_1_25 , var_1_26)) + var_1_15) , 9999.25f)))) : 1)) && ((var_1_26 > ((var_1_25 + last_1_var_1_40) + var_1_41)) ? (var_1_44 == ((signed short int) var_1_4)) : 1)) && ((var_1_5 > (var_1_60 >> (var_1_46 - var_1_47))) ? (var_1_45 == ((unsigned short int) (min (2 , (36840 - var_1_21))))) : ((((- 32) >= var_1_60) || ((var_1_4 % var_1_8) >= 16)) ? ((last_1_var_1_45 >= var_1_33) ? (var_1_45 == ((unsigned short int) (max ((min (var_1_46 , var_1_54)) , var_1_9)))) : 1) : (var_1_45 == ((unsigned short int) (last_1_var_1_45 + var_1_47)))))) && (((var_1_7 ^ var_1_19) <= var_1_18) ? ((! var_1_27) ? (var_1_49 == ((unsigned char) (var_1_30 || ((var_1_28 && var_1_50) || var_1_51)))) : (var_1_49 == ((unsigned char) (! var_1_29)))) : (var_1_49 == ((unsigned char) ((var_1_28 && var_1_29) && (var_1_30 || var_1_52)))))) && ((var_1_45 != (var_1_7 | (var_1_19 - var_1_5))) ? (var_1_53 == ((unsigned long int) (min (var_1_7 , var_1_6)))) : (var_1_53 == ((unsigned long int) (abs (2u + var_1_45)))))) && ((last_1_var_1_49 || (var_1_16 <= var_1_39)) ? (var_1_54 == ((unsigned char) ((var_1_55 - var_1_6) + 10))) : 1)) && ((var_1_60 >= var_1_9) ? (var_1_56 == ((double) var_1_15)) : ((! var_1_27) ? (var_1_56 == ((double) (max ((min ((var_1_25 - 0.25) , var_1_15)) , var_1_17)))) : (var_1_28 ? (var_1_56 == ((double) ((min (var_1_25 , var_1_16)) + (var_1_17 - var_1_26)))) : (var_1_56 == ((double) (max (var_1_13 , var_1_42)))))))) && ((var_1_26 >= var_1_13) ? (var_1_57 == ((double) (((var_1_58 + var_1_59) + (max (var_1_16 , var_1_26))) + (max (var_1_14 , var_1_25))))) : ((0u <= var_1_54) ? (var_1_49 ? (var_1_57 == ((double) (var_1_17 - var_1_25))) : 1) : (var_1_57 == ((double) var_1_13))))) && ((! var_1_51) ? (var_1_60 == ((unsigned char) (var_1_8 + var_1_5))) : ((last_1_var_1_49 && (last_1_var_1_54 < var_1_46)) ? (var_1_60 == ((unsigned char) (var_1_61 - var_1_9))) : (var_1_60 == ((unsigned char) var_1_5))))
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

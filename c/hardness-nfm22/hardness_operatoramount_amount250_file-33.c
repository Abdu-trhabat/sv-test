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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 128;
signed long int var_1_2 = 1420370654;
signed char var_1_4 = -2;
signed char var_1_5 = 25;
signed char var_1_6 = -16;
signed char var_1_7 = -50;
signed char var_1_8 = -16;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
float var_1_11 = 256.5;
float var_1_12 = -0.25;
float var_1_13 = 0.30000000000000004;
float var_1_14 = 49.5;
signed long int var_1_15 = -8;
float var_1_19 = 32.3;
signed short int var_1_20 = -50;
float var_1_21 = 1.25;
float var_1_22 = 99999.375;
float var_1_23 = 1000000.5;
unsigned long int var_1_25 = 128;
unsigned long int var_1_27 = 3559842512;
unsigned long int var_1_28 = 2049003553;
double var_1_30 = 31.5;
unsigned long int var_1_31 = 16;
double var_1_32 = 4.55;
float var_1_33 = 31.5;
double var_1_35 = 4.125;
double var_1_36 = 0.0;
double var_1_37 = 0.4;
signed short int var_1_38 = -8;
float var_1_39 = 3.25;
unsigned long int var_1_41 = 10;
unsigned long int var_1_42 = 3549089523;
signed long int var_1_43 = 25;
signed long int var_1_44 = 1631121473;
unsigned long int var_1_45 = 4;
float var_1_46 = 8.75;
double var_1_47 = 100.411;
signed char var_1_48 = 0;
signed char var_1_50 = 5;
signed char var_1_51 = 16;
signed char var_1_52 = -1;
signed long int var_1_53 = -1;
signed char var_1_54 = 5;
signed char var_1_57 = 5;
signed char var_1_58 = 8;
signed char var_1_59 = 1;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
double var_1_63 = 32.75;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
unsigned char var_1_68 = 1;

// Calibration values

// Last'ed variables
signed char last_1_var_1_4 = -2;
unsigned char last_1_var_1_9 = 25;
float last_1_var_1_11 = 256.5;
signed long int last_1_var_1_15 = -8;
float last_1_var_1_19 = 32.3;
double last_1_var_1_30 = 31.5;
unsigned long int last_1_var_1_31 = 16;
double last_1_var_1_35 = 4.125;
signed short int last_1_var_1_38 = -8;
signed long int last_1_var_1_43 = 25;
float last_1_var_1_46 = 8.75;
signed long int last_1_var_1_53 = -1;
signed char last_1_var_1_54 = 5;
signed char last_1_var_1_59 = 1;
unsigned char last_1_var_1_60 = 1;
unsigned char last_1_var_1_65 = 0;
unsigned char last_1_var_1_66 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch33Amount250
	unsigned char stepLocal_7 = ! last_1_var_1_66;
	unsigned char stepLocal_6 = last_1_var_1_66 && (var_1_13 > last_1_var_1_35);
	if (stepLocal_7 || last_1_var_1_66) {
		if (stepLocal_6 && last_1_var_1_66) {
			var_1_25 = (abs (max (last_1_var_1_9 , (min (last_1_var_1_65 , var_1_10)))));
		} else {
			var_1_25 = (var_1_27 - (max (last_1_var_1_9 , (var_1_28 - last_1_var_1_4))));
		}
	} else {
		var_1_25 = (abs (abs (var_1_27 - last_1_var_1_9)));
	}


	// From: Req18Batch33Amount250
	signed long int stepLocal_15 = last_1_var_1_4;
	unsigned char stepLocal_14 = last_1_var_1_30 <= last_1_var_1_19;
	if (var_1_37 < (min (var_1_21 , var_1_36))) {
		if (last_1_var_1_60 || stepLocal_14) {
			var_1_48 = (max ((min (var_1_8 , (var_1_50 - var_1_51))) , (min (var_1_6 , (var_1_7 + -1)))));
		} else {
			var_1_48 = (min ((max (var_1_6 , (max (var_1_51 , var_1_52)))) , (var_1_7 + -5)));
		}
	} else {
		if (stepLocal_15 <= last_1_var_1_53) {
			var_1_48 = (var_1_50 - (max (32 , var_1_51)));
		} else {
			var_1_48 = (abs (-2));
		}
	}


	// From: Req6Batch33Amount250
	unsigned char stepLocal_5 = (var_1_6 / var_1_20) > last_1_var_1_38;
	unsigned char stepLocal_4 = last_1_var_1_66;
	signed long int stepLocal_3 = last_1_var_1_38 * last_1_var_1_54;
	unsigned char stepLocal_2 = var_1_10;
	signed long int stepLocal_1 = - last_1_var_1_65;
	if (stepLocal_5 || (-50 > last_1_var_1_9)) {
		if (stepLocal_2 <= last_1_var_1_9) {
			if ((var_1_13 < last_1_var_1_11) || stepLocal_4) {
				var_1_19 = ((min (var_1_13 , (var_1_21 + var_1_22))) + var_1_23);
			}
		} else {
			if (stepLocal_1 <= (last_1_var_1_54 * last_1_var_1_31)) {
				var_1_19 = (abs (9.375f));
			}
		}
	} else {
		if (stepLocal_3 < last_1_var_1_31) {
			var_1_19 = var_1_22;
		} else {
			var_1_19 = var_1_23;
		}
	}


	// From: Req20Batch33Amount250
	if (last_1_var_1_35 >= (- var_1_37)) {
		if ((min ((var_1_20 + last_1_var_1_53) , last_1_var_1_15)) < (last_1_var_1_9 - var_1_28)) {
			var_1_54 = (var_1_7 + (max (var_1_5 , (var_1_57 - var_1_58))));
		} else {
			var_1_54 = (min (var_1_6 , var_1_5));
		}
	} else {
		var_1_54 = ((abs (var_1_57)) + var_1_58);
	}


	// From: Req25Batch33Amount250
	if (last_1_var_1_66) {
		if (var_1_23 > (var_1_21 * (max (var_1_14 , last_1_var_1_46)))) {
			var_1_66 = ((last_1_var_1_15 >= last_1_var_1_59) || (last_1_var_1_60 || var_1_68));
		} else {
			var_1_66 = var_1_62;
		}
	}


	// From: Req22Batch33Amount250
	unsigned char stepLocal_16 = var_1_66;
	if (var_1_66 || stepLocal_16) {
		var_1_60 = (! (var_1_61 || var_1_62));
	}


	// From: Req2Batch33Amount250
	var_1_4 = (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8));


	// From: Req3Batch33Amount250
	signed char stepLocal_0 = var_1_7;
	if (last_1_var_1_9 < stepLocal_0) {
		var_1_9 = (var_1_10 + 1);
	}


	// From: Req8Batch33Amount250
	if (var_1_22 == (var_1_13 - var_1_14)) {
		var_1_30 = var_1_21;
	} else {
		var_1_30 = var_1_23;
	}


	// From: Req15Batch33Amount250
	var_1_45 = (var_1_44 + var_1_2);


	// From: Req17Batch33Amount250
	if (var_1_66) {
		var_1_47 = (max ((0.30000000000000004 - var_1_36) , (15.4 + var_1_23)));
	} else {
		var_1_47 = (var_1_21 + var_1_22);
	}


	// From: Req21Batch33Amount250
	var_1_59 = var_1_51;


	// From: Req23Batch33Amount250
	unsigned char stepLocal_17 = var_1_60;
	if (var_1_66) {
		if ((var_1_25 == (var_1_9 ^ -50)) || stepLocal_17) {
			var_1_63 = (((abs (var_1_21)) + var_1_22) + var_1_13);
		}
	} else {
		var_1_63 = var_1_37;
	}


	// From: Req5Batch33Amount250
	if (! var_1_66) {
		var_1_15 = var_1_5;
	} else {
		if (var_1_12 > (var_1_14 - var_1_13)) {
			var_1_15 = (var_1_48 + (var_1_9 - var_1_54));
		} else {
			var_1_15 = ((min (var_1_54 , var_1_5)) + (last_1_var_1_15 + var_1_6));
		}
	}


	// From: Req24Batch33Amount250
	if (var_1_60) {
		var_1_65 = var_1_58;
	}


	// From: Req14Batch33Amount250
	if (((- var_1_9) >= var_1_45) || var_1_66) {
		var_1_43 = (abs (var_1_20));
	} else {
		var_1_43 = (var_1_10 - (var_1_44 - last_1_var_1_43));
	}


	// From: Req11Batch33Amount250
	unsigned char stepLocal_10 = var_1_66;
	if (var_1_60 || stepLocal_10) {
		var_1_38 = (max (((var_1_25 + 10) + (var_1_10 - var_1_43)) , var_1_8));
	}


	// From: Req16Batch33Amount250
	signed char stepLocal_13 = var_1_8;
	if (stepLocal_13 < (var_1_15 % (min (var_1_20 , -50)))) {
		var_1_46 = ((min (var_1_13 , var_1_14)) - ((abs (var_1_22)) + var_1_37));
	}


	// From: Req1Batch33Amount250
	var_1_1 = ((var_1_2 - 256) - var_1_65);


	// From: Req13Batch33Amount250
	signed char stepLocal_12 = var_1_4;
	if (var_1_63 < var_1_30) {
		var_1_41 = (max ((var_1_10 + var_1_15) , var_1_9));
	} else {
		if (stepLocal_12 >= var_1_65) {
			var_1_41 = (var_1_42 - var_1_2);
		} else {
			if (var_1_37 < var_1_63) {
				var_1_41 = (var_1_9 + var_1_28);
			} else {
				var_1_41 = ((var_1_28 + 1556394234u) - var_1_15);
			}
		}
	}


	// From: Req10Batch33Amount250
	unsigned char stepLocal_9 = var_1_66;
	unsigned long int stepLocal_8 = var_1_2 + (var_1_65 % var_1_28);
	if ((var_1_14 < var_1_63) || stepLocal_9) {
		if ((var_1_9 / 10000000u) <= stepLocal_8) {
			var_1_35 = (min (var_1_12 , (max ((abs (var_1_23)) , (var_1_22 + var_1_13)))));
		} else {
			var_1_35 = ((min ((var_1_36 - 128.5) , var_1_14)) - (var_1_13 + (min (64.65 , var_1_37))));
		}
	}


	// From: Req19Batch33Amount250
	if (var_1_45 > var_1_65) {
		var_1_53 = (var_1_15 + var_1_45);
	}


	// From: Req4Batch33Amount250
	if (var_1_48 < (var_1_65 & (var_1_10 | var_1_7))) {
		var_1_11 = (abs (var_1_12 + (var_1_13 - var_1_14)));
	}


	// From: Req9Batch33Amount250
	if (var_1_19 >= (var_1_21 / var_1_32)) {
		if (! var_1_66) {
			if ((min (var_1_22 , var_1_12)) < (var_1_32 / (min (1.000000005E8f , var_1_33)))) {
				if ((min (var_1_5 , var_1_54)) > var_1_2) {
					var_1_31 = var_1_9;
				}
			} else {
				var_1_31 = (var_1_9 + var_1_65);
			}
		} else {
			var_1_31 = var_1_65;
		}
	} else {
		var_1_31 = var_1_43;
	}


	// From: Req12Batch33Amount250
	signed long int stepLocal_11 = var_1_43 >> var_1_31;
	if (stepLocal_11 > (min ((var_1_59 - var_1_9) , var_1_54))) {
		if (var_1_66) {
			var_1_39 = var_1_12;
		} else {
			var_1_39 = (var_1_36 - var_1_14);
		}
	} else {
		var_1_39 = var_1_36;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 1073741822);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -31);
	assume_abort_if_not(var_1_5 <= 32);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -31);
	assume_abort_if_not(var_1_6 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 2147483647);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 1073741823);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	assume_abort_if_not(var_1_32 != 0.0F);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 4611686.018427382800e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= 1073741823);
	assume_abort_if_not(var_1_44 <= 2147483646);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -1);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -127);
	assume_abort_if_not(var_1_52 <= 126);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 1);
	assume_abort_if_not(var_1_68 <= 1);
}



void updateLastVariables() {
	last_1_var_1_4 = var_1_4;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_66 = var_1_66;
}

int property() {
	return ((((((((((((((((((((((((var_1_1 == ((signed long int) ((var_1_2 - 256) - var_1_65))) && (var_1_4 == ((signed char) (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8))))) && ((last_1_var_1_9 < var_1_7) ? (var_1_9 == ((unsigned char) (var_1_10 + 1))) : 1)) && ((var_1_48 < (var_1_65 & (var_1_10 | var_1_7))) ? (var_1_11 == ((float) (abs (var_1_12 + (var_1_13 - var_1_14))))) : 1)) && ((! var_1_66) ? (var_1_15 == ((signed long int) var_1_5)) : ((var_1_12 > (var_1_14 - var_1_13)) ? (var_1_15 == ((signed long int) (var_1_48 + (var_1_9 - var_1_54)))) : (var_1_15 == ((signed long int) ((min (var_1_54 , var_1_5)) + (last_1_var_1_15 + var_1_6))))))) && ((((var_1_6 / var_1_20) > last_1_var_1_38) || (-50 > last_1_var_1_9)) ? ((var_1_10 <= last_1_var_1_9) ? (((var_1_13 < last_1_var_1_11) || last_1_var_1_66) ? (var_1_19 == ((float) ((min (var_1_13 , (var_1_21 + var_1_22))) + var_1_23))) : 1) : (((- last_1_var_1_65) <= (last_1_var_1_54 * last_1_var_1_31)) ? (var_1_19 == ((float) (abs (9.375f)))) : 1)) : (((last_1_var_1_38 * last_1_var_1_54) < last_1_var_1_31) ? (var_1_19 == ((float) var_1_22)) : (var_1_19 == ((float) var_1_23))))) && (((! last_1_var_1_66) || last_1_var_1_66) ? (((last_1_var_1_66 && (var_1_13 > last_1_var_1_35)) && last_1_var_1_66) ? (var_1_25 == ((unsigned long int) (abs (max (last_1_var_1_9 , (min (last_1_var_1_65 , var_1_10))))))) : (var_1_25 == ((unsigned long int) (var_1_27 - (max (last_1_var_1_9 , (var_1_28 - last_1_var_1_4))))))) : (var_1_25 == ((unsigned long int) (abs (abs (var_1_27 - last_1_var_1_9))))))) && ((var_1_22 == (var_1_13 - var_1_14)) ? (var_1_30 == ((double) var_1_21)) : (var_1_30 == ((double) var_1_23)))) && ((var_1_19 >= (var_1_21 / var_1_32)) ? ((! var_1_66) ? (((min (var_1_22 , var_1_12)) < (var_1_32 / (min (1.000000005E8f , var_1_33)))) ? (((min (var_1_5 , var_1_54)) > var_1_2) ? (var_1_31 == ((unsigned long int) var_1_9)) : 1) : (var_1_31 == ((unsigned long int) (var_1_9 + var_1_65)))) : (var_1_31 == ((unsigned long int) var_1_65))) : (var_1_31 == ((unsigned long int) var_1_43)))) && (((var_1_14 < var_1_63) || var_1_66) ? (((var_1_9 / 10000000u) <= (var_1_2 + (var_1_65 % var_1_28))) ? (var_1_35 == ((double) (min (var_1_12 , (max ((abs (var_1_23)) , (var_1_22 + var_1_13))))))) : (var_1_35 == ((double) ((min ((var_1_36 - 128.5) , var_1_14)) - (var_1_13 + (min (64.65 , var_1_37))))))) : 1)) && ((var_1_60 || var_1_66) ? (var_1_38 == ((signed short int) (max (((var_1_25 + 10) + (var_1_10 - var_1_43)) , var_1_8)))) : 1)) && (((var_1_43 >> var_1_31) > (min ((var_1_59 - var_1_9) , var_1_54))) ? (var_1_66 ? (var_1_39 == ((float) var_1_12)) : (var_1_39 == ((float) (var_1_36 - var_1_14)))) : (var_1_39 == ((float) var_1_36)))) && ((var_1_63 < var_1_30) ? (var_1_41 == ((unsigned long int) (max ((var_1_10 + var_1_15) , var_1_9)))) : ((var_1_4 >= var_1_65) ? (var_1_41 == ((unsigned long int) (var_1_42 - var_1_2))) : ((var_1_37 < var_1_63) ? (var_1_41 == ((unsigned long int) (var_1_9 + var_1_28))) : (var_1_41 == ((unsigned long int) ((var_1_28 + 1556394234u) - var_1_15))))))) && ((((- var_1_9) >= var_1_45) || var_1_66) ? (var_1_43 == ((signed long int) (abs (var_1_20)))) : (var_1_43 == ((signed long int) (var_1_10 - (var_1_44 - last_1_var_1_43)))))) && (var_1_45 == ((unsigned long int) (var_1_44 + var_1_2)))) && ((var_1_8 < (var_1_15 % (min (var_1_20 , -50)))) ? (var_1_46 == ((float) ((min (var_1_13 , var_1_14)) - ((abs (var_1_22)) + var_1_37)))) : 1)) && (var_1_66 ? (var_1_47 == ((double) (max ((0.30000000000000004 - var_1_36) , (15.4 + var_1_23))))) : (var_1_47 == ((double) (var_1_21 + var_1_22))))) && ((var_1_37 < (min (var_1_21 , var_1_36))) ? ((last_1_var_1_60 || (last_1_var_1_30 <= last_1_var_1_19)) ? (var_1_48 == ((signed char) (max ((min (var_1_8 , (var_1_50 - var_1_51))) , (min (var_1_6 , (var_1_7 + -1))))))) : (var_1_48 == ((signed char) (min ((max (var_1_6 , (max (var_1_51 , var_1_52)))) , (var_1_7 + -5)))))) : ((last_1_var_1_4 <= last_1_var_1_53) ? (var_1_48 == ((signed char) (var_1_50 - (max (32 , var_1_51))))) : (var_1_48 == ((signed char) (abs (-2))))))) && ((var_1_45 > var_1_65) ? (var_1_53 == ((signed long int) (var_1_15 + var_1_45))) : 1)) && ((last_1_var_1_35 >= (- var_1_37)) ? (((min ((var_1_20 + last_1_var_1_53) , last_1_var_1_15)) < (last_1_var_1_9 - var_1_28)) ? (var_1_54 == ((signed char) (var_1_7 + (max (var_1_5 , (var_1_57 - var_1_58)))))) : (var_1_54 == ((signed char) (min (var_1_6 , var_1_5))))) : (var_1_54 == ((signed char) ((abs (var_1_57)) + var_1_58))))) && (var_1_59 == ((signed char) var_1_51))) && ((var_1_66 || var_1_66) ? (var_1_60 == ((unsigned char) (! (var_1_61 || var_1_62)))) : 1)) && (var_1_66 ? (((var_1_25 == (var_1_9 ^ -50)) || var_1_60) ? (var_1_63 == ((double) (((abs (var_1_21)) + var_1_22) + var_1_13))) : 1) : (var_1_63 == ((double) var_1_37)))) && (var_1_60 ? (var_1_65 == ((unsigned char) var_1_58)) : 1)) && (last_1_var_1_66 ? ((var_1_23 > (var_1_21 * (max (var_1_14 , last_1_var_1_46)))) ? (var_1_66 == ((unsigned char) ((last_1_var_1_15 >= last_1_var_1_59) || (last_1_var_1_60 || var_1_68)))) : (var_1_66 == ((unsigned char) var_1_62))) : 1)
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

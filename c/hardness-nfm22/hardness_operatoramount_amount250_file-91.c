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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch91Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 200;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 16;
unsigned char var_1_6 = 16;
signed short int var_1_7 = -8;
signed char var_1_9 = 0;
signed char var_1_10 = 0;
signed char var_1_11 = -64;
signed char var_1_12 = 4;
signed char var_1_13 = -2;
signed char var_1_14 = 25;
signed char var_1_15 = 64;
signed char var_1_16 = 50;
signed char var_1_17 = 5;
float var_1_18 = 128.25;
float var_1_19 = 32.5;
float var_1_20 = 25.38;
float var_1_21 = 64.8;
float var_1_22 = 127.6;
float var_1_23 = 199.8;
unsigned long int var_1_24 = 1;
float var_1_27 = 10000.6;
signed short int var_1_28 = 2;
unsigned short int var_1_29 = 128;
unsigned short int var_1_30 = 43183;
unsigned long int var_1_31 = 100000;
double var_1_32 = 7.4;
unsigned long int var_1_33 = 3282038403;
double var_1_34 = 15.5;
double var_1_35 = 3.5;
double var_1_36 = 8.5;
double var_1_37 = 0.0;
double var_1_38 = 3.8;
double var_1_39 = 32.6;
double var_1_40 = 128.4;
double var_1_41 = 255.75;
unsigned short int var_1_42 = 2;
unsigned short int var_1_43 = 10000;
unsigned short int var_1_44 = 61706;
signed long int var_1_46 = 4;
signed char var_1_47 = 16;
signed char var_1_48 = 0;
unsigned long int var_1_49 = 32;
unsigned long int var_1_50 = 1861332591;
signed char var_1_51 = -25;
unsigned char var_1_52 = 2;
unsigned char var_1_53 = 0;
signed long int var_1_54 = 4;
unsigned short int var_1_55 = 16;
unsigned short int var_1_56 = 10000;
unsigned short int var_1_57 = 1;
unsigned short int var_1_58 = 24134;
unsigned short int var_1_59 = 27730;
signed long int var_1_60 = -5;
signed long int var_1_61 = 1972720212;
signed char var_1_62 = 2;
unsigned char var_1_63 = 0;
signed short int var_1_64 = -10;
unsigned short int var_1_65 = 0;
unsigned short int var_1_66 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_29 = 128;
unsigned long int last_1_var_1_31 = 100000;
unsigned short int last_1_var_1_55 = 16;
unsigned short int last_1_var_1_57 = 1;
unsigned short int last_1_var_1_66 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch91Amount250
	signed long int stepLocal_12 = max (last_1_var_1_66 , var_1_30);
	signed long int stepLocal_11 = max (last_1_var_1_57 , var_1_17);
	if (stepLocal_12 < var_1_4) {
		if (stepLocal_11 <= 4) {
			var_1_54 = var_1_4;
		}
	} else {
		var_1_54 = (var_1_11 + var_1_53);
	}


	// From: Req6Batch91Amount250
	var_1_27 = (var_1_22 + var_1_23);


	// From: Req12Batch91Amount250
	var_1_41 = (7.5 - var_1_19);


	// From: Req20Batch91Amount250
	var_1_57 = ((max (var_1_44 , (var_1_58 + var_1_59))) - var_1_43);


	// From: Req23Batch91Amount250
	var_1_63 = 0;


	// From: Req24Batch91Amount250
	if (var_1_63) {
		var_1_64 = var_1_5;
	} else {
		var_1_64 = var_1_12;
	}


	// From: Req25Batch91Amount250
	if (var_1_63) {
		var_1_65 = var_1_44;
	}


	// From: Req9Batch91Amount250
	if (! var_1_63) {
		var_1_31 = (var_1_5 + (min (last_1_var_1_31 , var_1_6)));
	}


	// From: Req15Batch91Amount250
	if ((64.5 >= var_1_21) || var_1_63) {
		if (! var_1_63) {
			var_1_47 = (abs ((var_1_15 - var_1_16) - 2));
		} else {
			var_1_47 = ((var_1_17 + var_1_48) + var_1_16);
		}
	} else {
		var_1_47 = (var_1_48 + var_1_17);
	}


	// From: Req21Batch91Amount250
	signed long int stepLocal_13 = (32 - var_1_30) % var_1_15;
	if (var_1_63) {
		if (var_1_54 > stepLocal_13) {
			var_1_60 = (var_1_31 - (var_1_61 - var_1_59));
		}
	}


	// From: Req1Batch91Amount250
	unsigned long int stepLocal_0 = var_1_31;
	if (var_1_64 != stepLocal_0) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		var_1_1 = ((max (50 , var_1_5)) + var_1_6);
	}


	// From: Req2Batch91Amount250
	var_1_7 = (abs ((max (0 , var_1_6)) - var_1_1));


	// From: Req8Batch91Amount250
	if ((abs (var_1_12)) < var_1_6) {
		if (last_1_var_1_29 >= var_1_14) {
			var_1_29 = (min ((var_1_4 + var_1_15) , (max (var_1_5 , var_1_1))));
		} else {
			var_1_29 = (var_1_30 - (max (var_1_16 , 128)));
		}
	}


	// From: Req11Batch91Amount250
	unsigned char stepLocal_5 = var_1_63;
	if (stepLocal_5 || (var_1_64 > var_1_7)) {
		if (var_1_63) {
			var_1_36 = var_1_22;
		} else {
			var_1_36 = (var_1_35 - (var_1_37 - (var_1_38 + var_1_39)));
		}
	} else {
		var_1_36 = ((var_1_39 - (var_1_38 + var_1_40)) + (min (128.6 , var_1_34)));
	}


	// From: Req14Batch91Amount250
	if (var_1_10 > (var_1_29 | var_1_16)) {
		var_1_46 = (var_1_1 - var_1_30);
	} else {
		var_1_46 = (var_1_5 - var_1_1);
	}


	// From: Req16Batch91Amount250
	if (var_1_63) {
		var_1_49 = ((min (var_1_17 , var_1_64)) + (abs (var_1_1 + 32u)));
	} else {
		if (var_1_63) {
			var_1_49 = ((var_1_50 - (min (var_1_1 , var_1_64))) + var_1_29);
		} else {
			var_1_49 = (max (var_1_64 , (min (var_1_31 , (var_1_1 + var_1_43)))));
		}
	}


	// From: Req19Batch91Amount250
	if (! var_1_63) {
		var_1_55 = (var_1_5 + ((var_1_56 - last_1_var_1_55) + (min (32 , var_1_6))));
	} else {
		var_1_55 = (var_1_30 - (max (var_1_1 , var_1_6)));
	}


	// From: Req26Batch91Amount250
	unsigned long int stepLocal_15 = var_1_49 ^ (8 - var_1_6);
	unsigned short int stepLocal_14 = var_1_58;
	if (stepLocal_14 == var_1_29) {
		var_1_66 = var_1_53;
	} else {
		if (var_1_60 != stepLocal_15) {
			var_1_66 = (var_1_6 + var_1_15);
		}
	}


	// From: Req4Batch91Amount250
	if (((var_1_55 / var_1_4) ^ var_1_6) > (var_1_10 | (var_1_14 / var_1_15))) {
		var_1_18 = (var_1_19 - var_1_20);
	} else {
		var_1_18 = (2.5f + ((var_1_21 + var_1_22) + var_1_23));
	}


	// From: Req13Batch91Amount250
	unsigned char stepLocal_8 = var_1_63;
	unsigned short int stepLocal_7 = var_1_66;
	signed short int stepLocal_6 = var_1_64;
	if (var_1_63) {
		if (stepLocal_8 && ((max (var_1_18 , var_1_22)) < var_1_39)) {
			var_1_42 = (min (2 , (var_1_30 - var_1_15)));
		} else {
			var_1_42 = (var_1_15 + ((var_1_43 + 10000) - (abs (var_1_4))));
		}
	} else {
		if (stepLocal_7 < 5) {
			var_1_42 = (var_1_44 - (var_1_43 + (min (var_1_29 , var_1_17))));
		} else {
			if (255.125f > var_1_36) {
				if (stepLocal_6 >= var_1_55) {
					var_1_42 = ((min (var_1_44 , 46289)) - 10);
				} else {
					var_1_42 = (var_1_30 - var_1_43);
				}
			} else {
				var_1_42 = 2;
			}
		}
	}


	// From: Req17Batch91Amount250
	signed char stepLocal_10 = var_1_48;
	signed long int stepLocal_9 = (max (var_1_12 , var_1_48)) << var_1_66;
	if (stepLocal_9 < (var_1_5 >> (var_1_52 + var_1_53))) {
		if (var_1_66 > stepLocal_10) {
			var_1_51 = 25;
		} else {
			var_1_51 = var_1_53;
		}
	}


	// From: Req3Batch91Amount250
	signed long int stepLocal_2 = var_1_42 - var_1_5;
	signed long int stepLocal_1 = min (var_1_29 , (var_1_5 / var_1_4));
	if (stepLocal_1 < (var_1_49 * (var_1_6 + var_1_29))) {
		if (var_1_29 < stepLocal_2) {
			var_1_9 = (min (var_1_10 , (min ((min (var_1_11 , var_1_12)) , var_1_13))));
		}
	} else {
		var_1_9 = (var_1_14 - ((min (var_1_15 , 64)) - (var_1_16 - var_1_17)));
	}


	// From: Req10Batch91Amount250
	unsigned short int stepLocal_4 = var_1_42;
	unsigned char stepLocal_3 = var_1_4 > var_1_42;
	if (stepLocal_3 && (var_1_42 == (var_1_33 - var_1_30))) {
		var_1_32 = (var_1_21 + (var_1_34 - var_1_35));
	} else {
		if (stepLocal_4 < (var_1_6 + (32 + 200))) {
			var_1_32 = var_1_23;
		} else {
			var_1_32 = var_1_22;
		}
	}


	// From: Req22Batch91Amount250
	if (var_1_23 != (var_1_21 * var_1_32)) {
		var_1_62 = (min ((var_1_16 + var_1_53) , var_1_14));
	} else {
		if (var_1_29 != (~ var_1_42)) {
			var_1_62 = (abs (var_1_52));
		} else {
			if (var_1_55 > var_1_17) {
				var_1_62 = ((var_1_53 + var_1_52) + var_1_16);
			}
		}
	}


	// From: Req7Batch91Amount250
	if ((min (var_1_62 , var_1_6)) >= var_1_14) {
		if (var_1_63) {
			var_1_28 = ((var_1_6 + var_1_10) + ((var_1_16 + var_1_4) + var_1_12));
		}
	} else {
		var_1_28 = var_1_4;
	}


	// From: Req5Batch91Amount250
	if (var_1_21 <= var_1_36) {
		if (var_1_63 && var_1_63) {
			if ((var_1_16 + var_1_28) > var_1_10) {
				var_1_24 = (max (var_1_4 , (max (var_1_17 , var_1_6))));
			}
		} else {
			if (var_1_63) {
				var_1_24 = var_1_5;
			} else {
				var_1_24 = var_1_4;
			}
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 63);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 31);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 31);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -115292.1504606845700e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 1152921.504606845700e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -115292.1504606845700e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 1152921.504606845700e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -230584.3009213691390e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691390e+12F && var_1_23 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 32767);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 4611686.018427382800e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691390e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691390e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691390e+12F && var_1_40 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 8191);
	assume_abort_if_not(var_1_43 <= 16384);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 32767);
	assume_abort_if_not(var_1_44 <= 65534);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -31);
	assume_abort_if_not(var_1_48 <= 31);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 1073741823);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 5);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 4);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 8192);
	assume_abort_if_not(var_1_56 <= 16384);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 16383);
	assume_abort_if_not(var_1_58 <= 32767);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 16384);
	assume_abort_if_not(var_1_59 <= 32767);
	var_1_61 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_61 >= 1073741823);
	assume_abort_if_not(var_1_61 <= 2147483646);
}



void updateLastVariables() {
	last_1_var_1_29 = var_1_29;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_66 = var_1_66;
}

int property() {
	return ((((((((((((((((((((((((((var_1_64 != var_1_31) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned char) ((max (50 , var_1_5)) + var_1_6)))) && (var_1_7 == ((signed short int) (abs ((max (0 , var_1_6)) - var_1_1))))) && (((min (var_1_29 , (var_1_5 / var_1_4))) < (var_1_49 * (var_1_6 + var_1_29))) ? ((var_1_29 < (var_1_42 - var_1_5)) ? (var_1_9 == ((signed char) (min (var_1_10 , (min ((min (var_1_11 , var_1_12)) , var_1_13)))))) : 1) : (var_1_9 == ((signed char) (var_1_14 - ((min (var_1_15 , 64)) - (var_1_16 - var_1_17))))))) && ((((var_1_55 / var_1_4) ^ var_1_6) > (var_1_10 | (var_1_14 / var_1_15))) ? (var_1_18 == ((float) (var_1_19 - var_1_20))) : (var_1_18 == ((float) (2.5f + ((var_1_21 + var_1_22) + var_1_23)))))) && ((var_1_21 <= var_1_36) ? ((var_1_63 && var_1_63) ? (((var_1_16 + var_1_28) > var_1_10) ? (var_1_24 == ((unsigned long int) (max (var_1_4 , (max (var_1_17 , var_1_6)))))) : 1) : (var_1_63 ? (var_1_24 == ((unsigned long int) var_1_5)) : (var_1_24 == ((unsigned long int) var_1_4)))) : 1)) && (var_1_27 == ((float) (var_1_22 + var_1_23)))) && (((min (var_1_62 , var_1_6)) >= var_1_14) ? (var_1_63 ? (var_1_28 == ((signed short int) ((var_1_6 + var_1_10) + ((var_1_16 + var_1_4) + var_1_12)))) : 1) : (var_1_28 == ((signed short int) var_1_4)))) && (((abs (var_1_12)) < var_1_6) ? ((last_1_var_1_29 >= var_1_14) ? (var_1_29 == ((unsigned short int) (min ((var_1_4 + var_1_15) , (max (var_1_5 , var_1_1)))))) : (var_1_29 == ((unsigned short int) (var_1_30 - (max (var_1_16 , 128)))))) : 1)) && ((! var_1_63) ? (var_1_31 == ((unsigned long int) (var_1_5 + (min (last_1_var_1_31 , var_1_6))))) : 1)) && (((var_1_4 > var_1_42) && (var_1_42 == (var_1_33 - var_1_30))) ? (var_1_32 == ((double) (var_1_21 + (var_1_34 - var_1_35)))) : ((var_1_42 < (var_1_6 + (32 + 200))) ? (var_1_32 == ((double) var_1_23)) : (var_1_32 == ((double) var_1_22))))) && ((var_1_63 || (var_1_64 > var_1_7)) ? (var_1_63 ? (var_1_36 == ((double) var_1_22)) : (var_1_36 == ((double) (var_1_35 - (var_1_37 - (var_1_38 + var_1_39)))))) : (var_1_36 == ((double) ((var_1_39 - (var_1_38 + var_1_40)) + (min (128.6 , var_1_34))))))) && (var_1_41 == ((double) (7.5 - var_1_19)))) && (var_1_63 ? ((var_1_63 && ((max (var_1_18 , var_1_22)) < var_1_39)) ? (var_1_42 == ((unsigned short int) (min (2 , (var_1_30 - var_1_15))))) : (var_1_42 == ((unsigned short int) (var_1_15 + ((var_1_43 + 10000) - (abs (var_1_4))))))) : ((var_1_66 < 5) ? (var_1_42 == ((unsigned short int) (var_1_44 - (var_1_43 + (min (var_1_29 , var_1_17)))))) : ((255.125f > var_1_36) ? ((var_1_64 >= var_1_55) ? (var_1_42 == ((unsigned short int) ((min (var_1_44 , 46289)) - 10))) : (var_1_42 == ((unsigned short int) (var_1_30 - var_1_43)))) : (var_1_42 == ((unsigned short int) 2)))))) && ((var_1_10 > (var_1_29 | var_1_16)) ? (var_1_46 == ((signed long int) (var_1_1 - var_1_30))) : (var_1_46 == ((signed long int) (var_1_5 - var_1_1))))) && (((64.5 >= var_1_21) || var_1_63) ? ((! var_1_63) ? (var_1_47 == ((signed char) (abs ((var_1_15 - var_1_16) - 2)))) : (var_1_47 == ((signed char) ((var_1_17 + var_1_48) + var_1_16)))) : (var_1_47 == ((signed char) (var_1_48 + var_1_17))))) && (var_1_63 ? (var_1_49 == ((unsigned long int) ((min (var_1_17 , var_1_64)) + (abs (var_1_1 + 32u))))) : (var_1_63 ? (var_1_49 == ((unsigned long int) ((var_1_50 - (min (var_1_1 , var_1_64))) + var_1_29))) : (var_1_49 == ((unsigned long int) (max (var_1_64 , (min (var_1_31 , (var_1_1 + var_1_43)))))))))) && ((((max (var_1_12 , var_1_48)) << var_1_66) < (var_1_5 >> (var_1_52 + var_1_53))) ? ((var_1_66 > var_1_48) ? (var_1_51 == ((signed char) 25)) : (var_1_51 == ((signed char) var_1_53))) : 1)) && (((max (last_1_var_1_66 , var_1_30)) < var_1_4) ? (((max (last_1_var_1_57 , var_1_17)) <= 4) ? (var_1_54 == ((signed long int) var_1_4)) : 1) : (var_1_54 == ((signed long int) (var_1_11 + var_1_53))))) && ((! var_1_63) ? (var_1_55 == ((unsigned short int) (var_1_5 + ((var_1_56 - last_1_var_1_55) + (min (32 , var_1_6)))))) : (var_1_55 == ((unsigned short int) (var_1_30 - (max (var_1_1 , var_1_6))))))) && (var_1_57 == ((unsigned short int) ((max (var_1_44 , (var_1_58 + var_1_59))) - var_1_43)))) && (var_1_63 ? ((var_1_54 > ((32 - var_1_30) % var_1_15)) ? (var_1_60 == ((signed long int) (var_1_31 - (var_1_61 - var_1_59)))) : 1) : 1)) && ((var_1_23 != (var_1_21 * var_1_32)) ? (var_1_62 == ((signed char) (min ((var_1_16 + var_1_53) , var_1_14)))) : ((var_1_29 != (~ var_1_42)) ? (var_1_62 == ((signed char) (abs (var_1_52)))) : ((var_1_55 > var_1_17) ? (var_1_62 == ((signed char) ((var_1_53 + var_1_52) + var_1_16))) : 1)))) && (var_1_63 == ((unsigned char) 0))) && (var_1_63 ? (var_1_64 == ((signed short int) var_1_5)) : (var_1_64 == ((signed short int) var_1_12)))) && (var_1_63 ? (var_1_65 == ((unsigned short int) var_1_44)) : 1)) && ((var_1_58 == var_1_29) ? (var_1_66 == ((unsigned short int) var_1_53)) : ((var_1_60 != (var_1_49 ^ (8 - var_1_6))) ? (var_1_66 == ((unsigned short int) (var_1_6 + var_1_15))) : 1))
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

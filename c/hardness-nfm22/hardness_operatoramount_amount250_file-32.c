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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch32Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 32;
signed char var_1_11 = 4;
signed char var_1_12 = 2;
signed char var_1_13 = 4;
signed char var_1_14 = -25;
signed char var_1_15 = 8;
signed char var_1_16 = 50;
signed char var_1_17 = 32;
signed char var_1_18 = 64;
double var_1_19 = 4.775;
unsigned long int var_1_20 = 1;
unsigned long int var_1_21 = 0;
unsigned long int var_1_22 = 3621235500;
unsigned long int var_1_23 = 2039543602;
signed long int var_1_24 = 10;
signed long int var_1_25 = 2132272618;
unsigned char var_1_26 = 50;
unsigned long int var_1_27 = 128;
double var_1_29 = 100.6;
double var_1_31 = 4.875;
double var_1_32 = 0.6;
double var_1_33 = 256.9;
signed char var_1_34 = -128;
unsigned long int var_1_35 = 2770131137;
signed long int var_1_36 = -5;
double var_1_37 = 10.075;
double var_1_38 = 0.0;
double var_1_39 = 8.7;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
signed char var_1_44 = -128;
unsigned char var_1_46 = 10;
unsigned long int var_1_47 = 256;
unsigned long int var_1_48 = 1208140427;
double var_1_49 = -0.5;
unsigned long int var_1_50 = 1000000000;
unsigned long int var_1_51 = 3310668720;
unsigned long int var_1_52 = 3706032336;
signed char var_1_53 = -5;
signed char var_1_54 = 50;
signed char var_1_55 = 4;
unsigned short int var_1_56 = 0;
unsigned short int var_1_57 = 65130;
unsigned short int var_1_58 = 50797;
unsigned long int var_1_59 = 8;
unsigned char var_1_60 = 10;
unsigned char var_1_61 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_6 = 32;
signed long int last_1_var_1_24 = 10;
signed long int last_1_var_1_36 = -5;
unsigned char last_1_var_1_42 = 0;
signed char last_1_var_1_44 = -128;
unsigned char last_1_var_1_46 = 10;
double last_1_var_1_49 = -0.5;
unsigned long int last_1_var_1_50 = 1000000000;
unsigned short int last_1_var_1_56 = 0;
unsigned long int last_1_var_1_59 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch32Amount250
	if (last_1_var_1_50 > last_1_var_1_44) {
		if (last_1_var_1_44 > (max (last_1_var_1_50 , last_1_var_1_24))) {
			var_1_11 = ((var_1_12 - var_1_13) + (max (var_1_14 , (var_1_15 - var_1_16))));
		} else {
			var_1_11 = (max (var_1_17 , (var_1_12 - (var_1_18 - var_1_16))));
		}
	}


	// From: Req1Batch32Amount250
	if (last_1_var_1_42) {
		var_1_1 = ((! (var_1_3 || var_1_4)) && var_1_5);
	} else {
		var_1_1 = (var_1_5 && var_1_4);
	}


	// From: Req12Batch32Amount250
	unsigned char stepLocal_5 = var_1_3;
	if (var_1_1 && stepLocal_5) {
		var_1_42 = ((var_1_3 || (! var_1_5)) || (! var_1_43));
	}


	// From: Req10Batch32Amount250
	if (var_1_22 >= (- (var_1_35 - last_1_var_1_56))) {
		if (last_1_var_1_59 < last_1_var_1_6) {
			var_1_34 = (min (var_1_17 , 4));
		}
	} else {
		if (((last_1_var_1_49 != var_1_31) && (last_1_var_1_46 < var_1_17)) && var_1_5) {
			if (var_1_3) {
				var_1_34 = var_1_15;
			} else {
				var_1_34 = var_1_17;
			}
		}
	}


	// From: Req7Batch32Amount250
	unsigned long int stepLocal_3 = abs (last_1_var_1_50);
	if ((var_1_12 * last_1_var_1_36) > stepLocal_3) {
		var_1_26 = (var_1_16 + var_1_18);
	}


	// From: Req4Batch32Amount250
	if ((max ((var_1_18 / var_1_20) , var_1_15)) > var_1_12) {
		var_1_19 = (8.25 - 255.8);
	}


	// From: Req14Batch32Amount250
	if (var_1_19 > var_1_32) {
		var_1_46 = var_1_16;
	}


	// From: Req15Batch32Amount250
	if (32u < var_1_34) {
		if (var_1_5 && var_1_42) {
			if ((var_1_39 - var_1_37) <= 1.4) {
				var_1_47 = var_1_25;
			} else {
				var_1_47 = (var_1_22 - (max (var_1_12 , (var_1_16 + var_1_13))));
			}
		} else {
			if (var_1_4 || var_1_42) {
				var_1_47 = ((var_1_23 + var_1_48) - var_1_26);
			}
		}
	} else {
		var_1_47 = ((32u + (min (var_1_16 , var_1_15))) + var_1_18);
	}


	// From: Req16Batch32Amount250
	if (var_1_33 > var_1_38) {
		var_1_49 = (var_1_39 - (abs (max (50.25 , var_1_31))));
	} else {
		var_1_49 = (max ((var_1_39 - 128.2) , var_1_32));
	}


	// From: Req20Batch32Amount250
	if ((var_1_39 - (max (var_1_38 , var_1_37))) > (max (var_1_49 , var_1_19))) {
		if (var_1_13 >= (var_1_25 + var_1_51)) {
			var_1_59 = var_1_55;
		} else {
			var_1_59 = var_1_16;
		}
	} else {
		var_1_59 = var_1_18;
	}


	// From: Req21Batch32Amount250
	if (var_1_4) {
		var_1_60 = var_1_18;
	} else {
		var_1_60 = var_1_16;
	}


	// From: Req8Batch32Amount250
	if ((- var_1_19) > var_1_49) {
		var_1_27 = (16u + var_1_15);
	} else {
		var_1_27 = var_1_22;
	}


	// From: Req9Batch32Amount250
	signed long int stepLocal_4 = var_1_46 + var_1_14;
	if (var_1_25 > stepLocal_4) {
		var_1_29 = (var_1_31 + ((abs (var_1_32)) + var_1_33));
	} else {
		var_1_29 = ((var_1_32 + var_1_33) + var_1_31);
	}


	// From: Req22Batch32Amount250
	unsigned char stepLocal_11 = var_1_42;
	signed long int stepLocal_10 = 25;
	if (var_1_27 > stepLocal_10) {
		if (var_1_4 || stepLocal_11) {
			var_1_61 = (! (var_1_3 && var_1_4));
		} else {
			if (var_1_5) {
				var_1_61 = var_1_43;
			} else {
				var_1_61 = var_1_43;
			}
		}
	} else {
		var_1_61 = var_1_43;
	}


	// From: Req11Batch32Amount250
	if (((min (var_1_32 , var_1_31)) * var_1_29) < (var_1_37 - (var_1_38 - var_1_39))) {
		if (last_1_var_1_36 < ((var_1_11 & var_1_59) ^ (var_1_15 - var_1_16))) {
			var_1_36 = (var_1_26 + (min (var_1_34 , var_1_13)));
		}
	} else {
		if ((- var_1_29) <= ((var_1_33 / var_1_38) * var_1_19)) {
			if (var_1_5) {
				var_1_36 = (var_1_25 - var_1_18);
			} else {
				var_1_36 = (min (var_1_12 , (max (last_1_var_1_36 , (var_1_26 + var_1_13)))));
			}
		}
	}


	// From: Req13Batch32Amount250
	unsigned char stepLocal_6 = var_1_61;
	if (var_1_5 && stepLocal_6) {
		var_1_44 = (var_1_14 + var_1_15);
	} else {
		var_1_44 = var_1_13;
	}


	// From: Req6Batch32Amount250
	signed char stepLocal_2 = var_1_44;
	signed char stepLocal_1 = var_1_15;
	if (var_1_13 > stepLocal_1) {
		if (var_1_18 < stepLocal_2) {
			var_1_24 = (var_1_15 + (var_1_17 + var_1_13));
		} else {
			var_1_24 = ((16 + (var_1_16 + var_1_18)) - (max ((max (var_1_12 , var_1_13)) , (var_1_25 - var_1_15))));
		}
	} else {
		var_1_24 = var_1_14;
	}


	// From: Req17Batch32Amount250
	unsigned char stepLocal_9 = (var_1_11 & var_1_12) < (var_1_27 + var_1_20);
	unsigned char stepLocal_8 = var_1_46;
	signed char stepLocal_7 = var_1_14;
	if (stepLocal_8 <= var_1_24) {
		if (stepLocal_7 > (var_1_24 / (max (var_1_20 , var_1_18)))) {
			var_1_50 = ((var_1_51 - (min (var_1_12 , var_1_15))) - ((var_1_23 - var_1_11) - (var_1_13 + var_1_60)));
		} else {
			var_1_50 = ((max (var_1_51 , (var_1_52 - var_1_16))) - (max (var_1_13 , 16u)));
		}
	} else {
		if (var_1_42 && stepLocal_9) {
			var_1_50 = var_1_16;
		} else {
			var_1_50 = var_1_51;
		}
	}


	// From: Req19Batch32Amount250
	if (var_1_5) {
		var_1_56 = (var_1_57 - var_1_50);
	} else {
		var_1_56 = (min (((var_1_58 - var_1_55) - var_1_12) , var_1_54));
	}


	// From: Req2Batch32Amount250
	unsigned short int stepLocal_0 = var_1_56;
	if (stepLocal_0 == var_1_44) {
		var_1_6 = var_1_26;
	} else {
		if (! (! (var_1_56 < var_1_44))) {
			var_1_6 = (min (var_1_26 , var_1_34));
		}
	}


	// From: Req18Batch32Amount250
	if (var_1_12 > var_1_50) {
		if ((abs (- var_1_35)) > var_1_51) {
			var_1_53 = var_1_12;
		}
	} else {
		if (var_1_16 <= (var_1_17 + var_1_56)) {
			var_1_53 = (var_1_14 + ((var_1_54 - var_1_55) - var_1_15));
		} else {
			var_1_53 = (abs (min (-1 , (abs (var_1_14)))));
		}
	}


	// From: Req5Batch32Amount250
	if (var_1_1) {
		if (var_1_42) {
			var_1_21 = var_1_13;
		} else {
			if (((var_1_47 + var_1_53) * var_1_14) >= var_1_13) {
				var_1_21 = (var_1_22 - ((var_1_23 - var_1_18) - 256u));
			} else {
				if (var_1_53 <= (max (var_1_13 , (var_1_18 & var_1_11)))) {
					var_1_21 = (var_1_22 - (var_1_23 - var_1_15));
				}
			}
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 4294967295);
	assume_abort_if_not(var_1_20 != 0);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 1610612735);
	assume_abort_if_not(var_1_23 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -461168.6018427382800e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -230584.3009213691390e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691390e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -230584.3009213691390e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691390e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967295);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 4611686.018427387900e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427387900e+12F && var_1_39 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 1073741824);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 3221225470);
	assume_abort_if_not(var_1_51 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 3221225470);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 31);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 31);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 32767);
	assume_abort_if_not(var_1_57 <= 65534);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 49150);
	assume_abort_if_not(var_1_58 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_59 = var_1_59;
}

int property() {
	return (((((((((((((((((((((last_1_var_1_42 ? (var_1_1 == ((unsigned char) ((! (var_1_3 || var_1_4)) && var_1_5))) : (var_1_1 == ((unsigned char) (var_1_5 && var_1_4)))) && ((var_1_56 == var_1_44) ? (var_1_6 == ((signed long int) var_1_26)) : ((! (! (var_1_56 < var_1_44))) ? (var_1_6 == ((signed long int) (min (var_1_26 , var_1_34)))) : 1))) && ((last_1_var_1_50 > last_1_var_1_44) ? ((last_1_var_1_44 > (max (last_1_var_1_50 , last_1_var_1_24))) ? (var_1_11 == ((signed char) ((var_1_12 - var_1_13) + (max (var_1_14 , (var_1_15 - var_1_16)))))) : (var_1_11 == ((signed char) (max (var_1_17 , (var_1_12 - (var_1_18 - var_1_16))))))) : 1)) && (((max ((var_1_18 / var_1_20) , var_1_15)) > var_1_12) ? (var_1_19 == ((double) (8.25 - 255.8))) : 1)) && (var_1_1 ? (var_1_42 ? (var_1_21 == ((unsigned long int) var_1_13)) : ((((var_1_47 + var_1_53) * var_1_14) >= var_1_13) ? (var_1_21 == ((unsigned long int) (var_1_22 - ((var_1_23 - var_1_18) - 256u)))) : ((var_1_53 <= (max (var_1_13 , (var_1_18 & var_1_11)))) ? (var_1_21 == ((unsigned long int) (var_1_22 - (var_1_23 - var_1_15)))) : 1))) : 1)) && ((var_1_13 > var_1_15) ? ((var_1_18 < var_1_44) ? (var_1_24 == ((signed long int) (var_1_15 + (var_1_17 + var_1_13)))) : (var_1_24 == ((signed long int) ((16 + (var_1_16 + var_1_18)) - (max ((max (var_1_12 , var_1_13)) , (var_1_25 - var_1_15))))))) : (var_1_24 == ((signed long int) var_1_14)))) && (((var_1_12 * last_1_var_1_36) > (abs (last_1_var_1_50))) ? (var_1_26 == ((unsigned char) (var_1_16 + var_1_18))) : 1)) && (((- var_1_19) > var_1_49) ? (var_1_27 == ((unsigned long int) (16u + var_1_15))) : (var_1_27 == ((unsigned long int) var_1_22)))) && ((var_1_25 > (var_1_46 + var_1_14)) ? (var_1_29 == ((double) (var_1_31 + ((abs (var_1_32)) + var_1_33)))) : (var_1_29 == ((double) ((var_1_32 + var_1_33) + var_1_31))))) && ((var_1_22 >= (- (var_1_35 - last_1_var_1_56))) ? ((last_1_var_1_59 < last_1_var_1_6) ? (var_1_34 == ((signed char) (min (var_1_17 , 4)))) : 1) : ((((last_1_var_1_49 != var_1_31) && (last_1_var_1_46 < var_1_17)) && var_1_5) ? (var_1_3 ? (var_1_34 == ((signed char) var_1_15)) : (var_1_34 == ((signed char) var_1_17))) : 1))) && ((((min (var_1_32 , var_1_31)) * var_1_29) < (var_1_37 - (var_1_38 - var_1_39))) ? ((last_1_var_1_36 < ((var_1_11 & var_1_59) ^ (var_1_15 - var_1_16))) ? (var_1_36 == ((signed long int) (var_1_26 + (min (var_1_34 , var_1_13))))) : 1) : (((- var_1_29) <= ((var_1_33 / var_1_38) * var_1_19)) ? (var_1_5 ? (var_1_36 == ((signed long int) (var_1_25 - var_1_18))) : (var_1_36 == ((signed long int) (min (var_1_12 , (max (last_1_var_1_36 , (var_1_26 + var_1_13)))))))) : 1))) && ((var_1_1 && var_1_3) ? (var_1_42 == ((unsigned char) ((var_1_3 || (! var_1_5)) || (! var_1_43)))) : 1)) && ((var_1_5 && var_1_61) ? (var_1_44 == ((signed char) (var_1_14 + var_1_15))) : (var_1_44 == ((signed char) var_1_13)))) && ((var_1_19 > var_1_32) ? (var_1_46 == ((unsigned char) var_1_16)) : 1)) && ((32u < var_1_34) ? ((var_1_5 && var_1_42) ? (((var_1_39 - var_1_37) <= 1.4) ? (var_1_47 == ((unsigned long int) var_1_25)) : (var_1_47 == ((unsigned long int) (var_1_22 - (max (var_1_12 , (var_1_16 + var_1_13))))))) : ((var_1_4 || var_1_42) ? (var_1_47 == ((unsigned long int) ((var_1_23 + var_1_48) - var_1_26))) : 1)) : (var_1_47 == ((unsigned long int) ((32u + (min (var_1_16 , var_1_15))) + var_1_18))))) && ((var_1_33 > var_1_38) ? (var_1_49 == ((double) (var_1_39 - (abs (max (50.25 , var_1_31)))))) : (var_1_49 == ((double) (max ((var_1_39 - 128.2) , var_1_32)))))) && ((var_1_46 <= var_1_24) ? ((var_1_14 > (var_1_24 / (max (var_1_20 , var_1_18)))) ? (var_1_50 == ((unsigned long int) ((var_1_51 - (min (var_1_12 , var_1_15))) - ((var_1_23 - var_1_11) - (var_1_13 + var_1_60))))) : (var_1_50 == ((unsigned long int) ((max (var_1_51 , (var_1_52 - var_1_16))) - (max (var_1_13 , 16u)))))) : ((var_1_42 && ((var_1_11 & var_1_12) < (var_1_27 + var_1_20))) ? (var_1_50 == ((unsigned long int) var_1_16)) : (var_1_50 == ((unsigned long int) var_1_51))))) && ((var_1_12 > var_1_50) ? (((abs (- var_1_35)) > var_1_51) ? (var_1_53 == ((signed char) var_1_12)) : 1) : ((var_1_16 <= (var_1_17 + var_1_56)) ? (var_1_53 == ((signed char) (var_1_14 + ((var_1_54 - var_1_55) - var_1_15)))) : (var_1_53 == ((signed char) (abs (min (-1 , (abs (var_1_14)))))))))) && (var_1_5 ? (var_1_56 == ((unsigned short int) (var_1_57 - var_1_50))) : (var_1_56 == ((unsigned short int) (min (((var_1_58 - var_1_55) - var_1_12) , var_1_54)))))) && (((var_1_39 - (max (var_1_38 , var_1_37))) > (max (var_1_49 , var_1_19))) ? ((var_1_13 >= (var_1_25 + var_1_51)) ? (var_1_59 == ((unsigned long int) var_1_55)) : (var_1_59 == ((unsigned long int) var_1_16))) : (var_1_59 == ((unsigned long int) var_1_18)))) && (var_1_4 ? (var_1_60 == ((unsigned char) var_1_18)) : (var_1_60 == ((unsigned char) var_1_16)))) && ((var_1_27 > 25) ? ((var_1_4 || var_1_42) ? (var_1_61 == ((unsigned char) (! (var_1_3 && var_1_4)))) : (var_1_5 ? (var_1_61 == ((unsigned char) var_1_43)) : (var_1_61 == ((unsigned char) var_1_43)))) : (var_1_61 == ((unsigned char) var_1_43)))
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

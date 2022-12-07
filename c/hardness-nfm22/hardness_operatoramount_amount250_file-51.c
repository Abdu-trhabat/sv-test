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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch51Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 0;
float var_1_3 = -0.1;
float var_1_4 = 127.25;
float var_1_5 = 2.75;
float var_1_6 = 255.25;
signed char var_1_7 = 25;
signed char var_1_8 = 16;
signed char var_1_9 = -4;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 53860;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 8;
unsigned long int var_1_16 = 64;
unsigned short int var_1_17 = 100;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 100;
unsigned short int var_1_20 = 57356;
unsigned char var_1_21 = 0;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 50;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 2;
unsigned char var_1_31 = 25;
unsigned char var_1_32 = 10;
signed long int var_1_33 = -256;
signed long int var_1_34 = -4;
signed long int var_1_35 = -8;
signed long int var_1_36 = 500;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 4;
signed char var_1_40 = 32;
signed char var_1_41 = 10;
signed char var_1_42 = 1;
signed char var_1_43 = -8;
signed short int var_1_44 = -256;
unsigned short int var_1_45 = 256;
double var_1_46 = 9.85;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
signed char var_1_50 = -16;
float var_1_51 = 128.5;
signed char var_1_52 = 2;
signed char var_1_53 = 16;
signed char var_1_54 = 0;
unsigned long int var_1_55 = 50;
unsigned long int var_1_56 = 3260334368;
signed long int var_1_57 = -500;
unsigned char var_1_58 = 64;
unsigned char var_1_59 = 64;
unsigned char var_1_60 = 2;
unsigned char var_1_61 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_12 = 32;
unsigned char last_1_var_1_21 = 0;
signed long int last_1_var_1_33 = -256;
unsigned char last_1_var_1_38 = 1;
signed char last_1_var_1_40 = 32;
unsigned char last_1_var_1_47 = 0;
signed long int last_1_var_1_57 = -500;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch51Amount250
	if (last_1_var_1_40 < ((var_1_18 + var_1_19) - var_1_15)) {
		var_1_17 = (abs ((var_1_20 - var_1_19) - var_1_11));
	}


	// From: Req7Batch51Amount250
	signed long int stepLocal_1 = last_1_var_1_12;
	if (var_1_13 == stepLocal_1) {
		var_1_28 = (var_1_29 - var_1_8);
	} else {
		var_1_28 = (var_1_15 + ((max (var_1_30 , var_1_31)) + var_1_32));
	}


	// From: Req16Batch51Amount250
	if (5.88 > (max (var_1_4 , (var_1_5 - var_1_46)))) {
		var_1_45 = (var_1_13 - var_1_11);
	} else {
		if (var_1_31 > var_1_28) {
			var_1_45 = (var_1_13 - (var_1_19 + var_1_8));
		} else {
			var_1_45 = (max ((var_1_13 - var_1_41) , (abs (var_1_42))));
		}
	}


	// From: Req6Batch51Amount250
	signed long int stepLocal_0 = var_1_13 + var_1_8;
	if (stepLocal_0 >= var_1_9) {
		if (last_1_var_1_38) {
			var_1_21 = (last_1_var_1_38 || (last_1_var_1_21 || (last_1_var_1_47 || var_1_25)));
		} else {
			if (! last_1_var_1_38) {
				var_1_21 = (var_1_26 || var_1_27);
			}
		}
	} else {
		var_1_21 = var_1_27;
	}


	// From: Req1Batch51Amount250
	if ((- var_1_3) <= (var_1_4 - var_1_5)) {
		if (var_1_3 >= ((min (var_1_5 , var_1_4)) / var_1_6)) {
			var_1_1 = (min ((var_1_7 - var_1_8) , var_1_9));
		} else {
			var_1_1 = (min ((abs (var_1_8)) , var_1_9));
		}
	}


	// From: Req2Batch51Amount250
	if (var_1_4 < 64.4f) {
		var_1_10 = (max ((abs (max (8 , var_1_8))) , var_1_11));
	}


	// From: Req11Batch51Amount250
	if (var_1_3 != var_1_5) {
		var_1_37 = var_1_25;
	} else {
		var_1_37 = (! var_1_25);
	}


	// From: Req12Batch51Amount250
	unsigned short int stepLocal_7 = var_1_20;
	if (var_1_11 < stepLocal_7) {
		var_1_38 = var_1_26;
	}


	// From: Req19Batch51Amount250
	if (var_1_21) {
		var_1_54 = (abs (var_1_8));
	}


	// From: Req17Batch51Amount250
	if (var_1_5 <= var_1_4) {
		var_1_47 = (var_1_48 && ((var_1_41 != var_1_45) || var_1_25));
	} else {
		var_1_47 = ((var_1_21 || var_1_25) && (var_1_48 && var_1_49));
	}


	// From: Req22Batch51Amount250
	if (var_1_21) {
		var_1_58 = (((min (var_1_19 , var_1_59)) - (var_1_60 + var_1_61)) + var_1_8);
	} else {
		if ((var_1_8 - var_1_29) <= var_1_28) {
			var_1_58 = var_1_30;
		} else {
			var_1_58 = var_1_29;
		}
	}


	// From: Req4Batch51Amount250
	if (var_1_7 < (~ (var_1_8 - var_1_15))) {
		var_1_16 = (min (var_1_13 , var_1_14));
	} else {
		var_1_16 = (min (var_1_58 , (min (var_1_13 , var_1_11))));
	}


	// From: Req15Batch51Amount250
	unsigned char stepLocal_10 = var_1_27;
	if (var_1_25 || stepLocal_10) {
		if (var_1_26) {
			var_1_44 = (min (var_1_11 , ((var_1_54 - var_1_31) + var_1_7)));
		} else {
			var_1_44 = ((var_1_18 + (max (var_1_11 , var_1_29))) - var_1_14);
		}
	}


	// From: Req18Batch51Amount250
	signed char stepLocal_11 = var_1_43;
	if ((abs (var_1_6 + var_1_5)) <= (var_1_3 / var_1_51)) {
		if ((var_1_13 | (var_1_16 - var_1_29)) > stepLocal_11) {
			var_1_50 = var_1_43;
		} else {
			var_1_50 = (max ((var_1_32 + (var_1_52 + var_1_53)) , (-1 - (var_1_41 + var_1_42))));
		}
	} else {
		var_1_50 = (min (var_1_30 , (max ((var_1_7 - var_1_41) , var_1_53))));
	}


	// From: Req10Batch51Amount250
	unsigned char stepLocal_6 = var_1_18;
	signed char stepLocal_5 = var_1_50;
	if (var_1_25) {
		var_1_35 = (max ((min (var_1_58 , var_1_15)) , var_1_17));
	} else {
		if (-128 <= stepLocal_6) {
			if (stepLocal_5 == ((min (var_1_17 , var_1_31)) / var_1_36)) {
				var_1_35 = (abs ((var_1_14 - 50) + var_1_15));
			}
		} else {
			if (var_1_27) {
				var_1_35 = (min (-64 , var_1_28));
			}
		}
	}


	// From: Req3Batch51Amount250
	if (! var_1_47) {
		var_1_12 = (min ((var_1_13 - var_1_11) , (var_1_8 + var_1_10)));
	} else {
		if (var_1_11 > ((128 - var_1_8) / (var_1_14 + var_1_15))) {
			if (((- var_1_15) / 100) > (var_1_58 / (max (50 , -1000000000)))) {
				var_1_12 = 8;
			}
		} else {
			var_1_12 = var_1_14;
		}
	}


	// From: Req13Batch51Amount250
	if ((- var_1_8) < var_1_12) {
		if (var_1_27) {
			var_1_39 = (max ((var_1_31 + 4) , var_1_29));
		} else {
			var_1_39 = (min ((var_1_32 + var_1_31) , var_1_29));
		}
	} else {
		var_1_39 = (abs (var_1_15 + var_1_19));
	}


	// From: Req20Batch51Amount250
	if (var_1_35 >= ((max (var_1_15 , var_1_50)) >> var_1_12)) {
		var_1_55 = (var_1_56 - 8u);
	}


	// From: Req8Batch51Amount250
	unsigned char stepLocal_2 = var_1_21;
	if ((var_1_6 > (min (var_1_4 , var_1_3))) && stepLocal_2) {
		if (! var_1_37) {
			var_1_33 = (abs (var_1_39 + (last_1_var_1_33 + last_1_var_1_33)));
		}
	} else {
		if (! var_1_27) {
			if (! var_1_25) {
				var_1_33 = var_1_39;
			} else {
				var_1_33 = (var_1_19 - var_1_32);
			}
		} else {
			var_1_33 = (-10 + var_1_31);
		}
	}


	// From: Req9Batch51Amount250
	unsigned char stepLocal_4 = var_1_14;
	signed char stepLocal_3 = var_1_9;
	if (stepLocal_3 <= var_1_20) {
		var_1_34 = (min ((min ((max (var_1_54 , var_1_15)) , var_1_11)) , var_1_13));
	} else {
		if (stepLocal_4 < var_1_39) {
			var_1_34 = (var_1_20 + (var_1_30 + var_1_13));
		}
	}


	// From: Req21Batch51Amount250
	signed long int stepLocal_14 = min ((var_1_13 + var_1_28) , (~ var_1_28));
	unsigned char stepLocal_13 = var_1_30;
	signed long int stepLocal_12 = var_1_34;
	if (((var_1_28 + var_1_11) << var_1_13) > stepLocal_12) {
		var_1_57 = ((var_1_18 - var_1_50) + 25);
	} else {
		if (var_1_55 < stepLocal_14) {
			if (var_1_50 >= stepLocal_13) {
				var_1_57 = last_1_var_1_57;
			}
		} else {
			var_1_57 = var_1_55;
		}
	}


	// From: Req14Batch51Amount250
	unsigned char stepLocal_9 = -5 >= var_1_19;
	unsigned char stepLocal_8 = var_1_11;
	if (stepLocal_9 || var_1_27) {
		if (((var_1_55 + var_1_18) * var_1_32) <= stepLocal_8) {
			var_1_40 = var_1_9;
		} else {
			var_1_40 = ((max (var_1_32 , (var_1_41 - var_1_42))) + var_1_43);
		}
	} else {
		var_1_40 = (max (var_1_43 , 100));
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 128);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 128);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 64);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 49150);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 64);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 64);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	assume_abort_if_not(var_1_36 != 0);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -63);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -31);
	assume_abort_if_not(var_1_52 <= 32);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -31);
	assume_abort_if_not(var_1_53 <= 31);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 2147483647);
	assume_abort_if_not(var_1_56 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 63);
	assume_abort_if_not(var_1_59 <= 127);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 32);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 31);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_57 = var_1_57;
}

int property() {
	return (((((((((((((((((((((((- var_1_3) <= (var_1_4 - var_1_5)) ? ((var_1_3 >= ((min (var_1_5 , var_1_4)) / var_1_6)) ? (var_1_1 == ((signed char) (min ((var_1_7 - var_1_8) , var_1_9)))) : (var_1_1 == ((signed char) (min ((abs (var_1_8)) , var_1_9))))) : 1) && ((var_1_4 < 64.4f) ? (var_1_10 == ((unsigned char) (max ((abs (max (8 , var_1_8))) , var_1_11)))) : 1)) && ((! var_1_47) ? (var_1_12 == ((unsigned short int) (min ((var_1_13 - var_1_11) , (var_1_8 + var_1_10))))) : ((var_1_11 > ((128 - var_1_8) / (var_1_14 + var_1_15))) ? ((((- var_1_15) / 100) > (var_1_58 / (max (50 , -1000000000)))) ? (var_1_12 == ((unsigned short int) 8)) : 1) : (var_1_12 == ((unsigned short int) var_1_14))))) && ((var_1_7 < (~ (var_1_8 - var_1_15))) ? (var_1_16 == ((unsigned long int) (min (var_1_13 , var_1_14)))) : (var_1_16 == ((unsigned long int) (min (var_1_58 , (min (var_1_13 , var_1_11)))))))) && ((last_1_var_1_40 < ((var_1_18 + var_1_19) - var_1_15)) ? (var_1_17 == ((unsigned short int) (abs ((var_1_20 - var_1_19) - var_1_11)))) : 1)) && (((var_1_13 + var_1_8) >= var_1_9) ? (last_1_var_1_38 ? (var_1_21 == ((unsigned char) (last_1_var_1_38 || (last_1_var_1_21 || (last_1_var_1_47 || var_1_25))))) : ((! last_1_var_1_38) ? (var_1_21 == ((unsigned char) (var_1_26 || var_1_27))) : 1)) : (var_1_21 == ((unsigned char) var_1_27)))) && ((var_1_13 == last_1_var_1_12) ? (var_1_28 == ((unsigned char) (var_1_29 - var_1_8))) : (var_1_28 == ((unsigned char) (var_1_15 + ((max (var_1_30 , var_1_31)) + var_1_32)))))) && (((var_1_6 > (min (var_1_4 , var_1_3))) && var_1_21) ? ((! var_1_37) ? (var_1_33 == ((signed long int) (abs (var_1_39 + (last_1_var_1_33 + last_1_var_1_33))))) : 1) : ((! var_1_27) ? ((! var_1_25) ? (var_1_33 == ((signed long int) var_1_39)) : (var_1_33 == ((signed long int) (var_1_19 - var_1_32)))) : (var_1_33 == ((signed long int) (-10 + var_1_31)))))) && ((var_1_9 <= var_1_20) ? (var_1_34 == ((signed long int) (min ((min ((max (var_1_54 , var_1_15)) , var_1_11)) , var_1_13)))) : ((var_1_14 < var_1_39) ? (var_1_34 == ((signed long int) (var_1_20 + (var_1_30 + var_1_13)))) : 1))) && (var_1_25 ? (var_1_35 == ((signed long int) (max ((min (var_1_58 , var_1_15)) , var_1_17)))) : ((-128 <= var_1_18) ? ((var_1_50 == ((min (var_1_17 , var_1_31)) / var_1_36)) ? (var_1_35 == ((signed long int) (abs ((var_1_14 - 50) + var_1_15)))) : 1) : (var_1_27 ? (var_1_35 == ((signed long int) (min (-64 , var_1_28)))) : 1)))) && ((var_1_3 != var_1_5) ? (var_1_37 == ((unsigned char) var_1_25)) : (var_1_37 == ((unsigned char) (! var_1_25))))) && ((var_1_11 < var_1_20) ? (var_1_38 == ((unsigned char) var_1_26)) : 1)) && (((- var_1_8) < var_1_12) ? (var_1_27 ? (var_1_39 == ((unsigned char) (max ((var_1_31 + 4) , var_1_29)))) : (var_1_39 == ((unsigned char) (min ((var_1_32 + var_1_31) , var_1_29))))) : (var_1_39 == ((unsigned char) (abs (var_1_15 + var_1_19)))))) && (((-5 >= var_1_19) || var_1_27) ? ((((var_1_55 + var_1_18) * var_1_32) <= var_1_11) ? (var_1_40 == ((signed char) var_1_9)) : (var_1_40 == ((signed char) ((max (var_1_32 , (var_1_41 - var_1_42))) + var_1_43)))) : (var_1_40 == ((signed char) (max (var_1_43 , 100)))))) && ((var_1_25 || var_1_27) ? (var_1_26 ? (var_1_44 == ((signed short int) (min (var_1_11 , ((var_1_54 - var_1_31) + var_1_7))))) : (var_1_44 == ((signed short int) ((var_1_18 + (max (var_1_11 , var_1_29))) - var_1_14)))) : 1)) && ((5.88 > (max (var_1_4 , (var_1_5 - var_1_46)))) ? (var_1_45 == ((unsigned short int) (var_1_13 - var_1_11))) : ((var_1_31 > var_1_28) ? (var_1_45 == ((unsigned short int) (var_1_13 - (var_1_19 + var_1_8)))) : (var_1_45 == ((unsigned short int) (max ((var_1_13 - var_1_41) , (abs (var_1_42))))))))) && ((var_1_5 <= var_1_4) ? (var_1_47 == ((unsigned char) (var_1_48 && ((var_1_41 != var_1_45) || var_1_25)))) : (var_1_47 == ((unsigned char) ((var_1_21 || var_1_25) && (var_1_48 && var_1_49)))))) && (((abs (var_1_6 + var_1_5)) <= (var_1_3 / var_1_51)) ? (((var_1_13 | (var_1_16 - var_1_29)) > var_1_43) ? (var_1_50 == ((signed char) var_1_43)) : (var_1_50 == ((signed char) (max ((var_1_32 + (var_1_52 + var_1_53)) , (-1 - (var_1_41 + var_1_42))))))) : (var_1_50 == ((signed char) (min (var_1_30 , (max ((var_1_7 - var_1_41) , var_1_53)))))))) && (var_1_21 ? (var_1_54 == ((signed char) (abs (var_1_8)))) : 1)) && ((var_1_35 >= ((max (var_1_15 , var_1_50)) >> var_1_12)) ? (var_1_55 == ((unsigned long int) (var_1_56 - 8u))) : 1)) && ((((var_1_28 + var_1_11) << var_1_13) > var_1_34) ? (var_1_57 == ((signed long int) ((var_1_18 - var_1_50) + 25))) : ((var_1_55 < (min ((var_1_13 + var_1_28) , (~ var_1_28)))) ? ((var_1_50 >= var_1_30) ? (var_1_57 == ((signed long int) last_1_var_1_57)) : 1) : (var_1_57 == ((signed long int) var_1_55))))) && (var_1_21 ? (var_1_58 == ((unsigned char) (((min (var_1_19 , var_1_59)) - (var_1_60 + var_1_61)) + var_1_8))) : (((var_1_8 - var_1_29) <= var_1_28) ? (var_1_58 == ((unsigned char) var_1_30)) : (var_1_58 == ((unsigned char) var_1_29))))
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

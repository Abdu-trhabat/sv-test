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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 5;
signed char var_1_6 = 50;
signed char var_1_7 = 2;
signed char var_1_8 = 16;
signed char var_1_9 = 8;
unsigned long int var_1_10 = 25;
signed char var_1_13 = -25;
signed char var_1_14 = 0;
signed char var_1_15 = 100;
signed char var_1_16 = 16;
signed char var_1_17 = 0;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned long int var_1_23 = 2;
unsigned long int var_1_24 = 3457730170;
signed char var_1_26 = -16;
double var_1_27 = 0.5;
double var_1_28 = 32.75;
unsigned short int var_1_30 = 1;
unsigned short int var_1_31 = 0;
signed short int var_1_32 = -2;
signed char var_1_34 = -10;
signed char var_1_35 = 64;
unsigned char var_1_36 = 1;
signed char var_1_38 = -5;
unsigned long int var_1_39 = 4245266801;
unsigned long int var_1_40 = 3996163309;
signed short int var_1_41 = -8;
unsigned short int var_1_42 = 32;
signed long int var_1_44 = 32;
unsigned short int var_1_45 = 26462;
unsigned short int var_1_46 = 10000;
unsigned short int var_1_47 = 26060;
unsigned short int var_1_48 = 60047;
signed char var_1_49 = 4;
signed char var_1_50 = 25;
signed char var_1_51 = -32;
double var_1_52 = 25.75;
double var_1_53 = 0.8;
unsigned char var_1_54 = 1;
double var_1_55 = 0.0;
double var_1_56 = 127.825;
double var_1_57 = 0.5;
double var_1_58 = 128.8;
signed long int var_1_59 = -50;
signed long int var_1_60 = 2066820527;
signed short int var_1_61 = 2;
double var_1_63 = 7.25;
signed long int var_1_64 = 256;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = 5;
unsigned long int last_1_var_1_10 = 25;
signed char last_1_var_1_13 = -25;
unsigned char last_1_var_1_19 = 1;
signed short int last_1_var_1_32 = -2;
signed char last_1_var_1_34 = -10;
unsigned short int last_1_var_1_42 = 32;
signed short int last_1_var_1_61 = 2;
double last_1_var_1_63 = 7.25;
signed long int last_1_var_1_64 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch7Amount250
	signed long int stepLocal_15 = max (last_1_var_1_1 , -10);
	unsigned short int stepLocal_14 = var_1_47;
	if (stepLocal_15 <= (var_1_15 * var_1_45)) {
		if (var_1_58 == -0.125) {
			if (var_1_44 == stepLocal_14) {
				var_1_64 = var_1_7;
			} else {
				var_1_64 = var_1_46;
			}
		} else {
			var_1_64 = var_1_50;
		}
	}


	// From: Req17Batch7Amount250
	if (-16 != (4 - var_1_7)) {
		if (last_1_var_1_13 != last_1_var_1_34) {
			var_1_59 = (abs (-8));
		} else {
			var_1_59 = (min ((var_1_6 + last_1_var_1_32) , ((var_1_60 - var_1_15) - var_1_35)));
		}
	} else {
		var_1_59 = ((max ((var_1_47 - last_1_var_1_32) , last_1_var_1_61)) + last_1_var_1_13);
	}


	// From: Req12Batch7Amount250
	unsigned long int stepLocal_11 = last_1_var_1_10 / (max (var_1_35 , var_1_44));
	signed long int stepLocal_10 = var_1_15 ^ last_1_var_1_64;
	if (! last_1_var_1_19) {
		if ((last_1_var_1_42 % var_1_15) > stepLocal_11) {
			var_1_42 = ((var_1_45 - (var_1_46 - var_1_15)) + (var_1_47 - var_1_35));
		} else {
			if (var_1_47 != stepLocal_10) {
				var_1_42 = (var_1_48 - (var_1_35 + (min (var_1_9 , var_1_31))));
			} else {
				var_1_42 = ((var_1_47 - (10000 - var_1_31)) + var_1_16);
			}
		}
	} else {
		var_1_42 = (abs (var_1_47));
	}


	// From: Req4Batch7Amount250
	signed long int stepLocal_3 = ~ -64;
	if (stepLocal_3 > var_1_7) {
		var_1_19 = ((! (! var_1_20)) || var_1_21);
	} else {
		var_1_19 = (var_1_20 || (var_1_21 || var_1_22));
	}


	// From: Req8Batch7Amount250
	var_1_34 = (var_1_15 - (var_1_35 - var_1_30));


	// From: Req14Batch7Amount250
	var_1_51 = (max (var_1_9 , (var_1_6 - var_1_31)));


	// From: Req15Batch7Amount250
	signed long int stepLocal_13 = 1;
	signed long int stepLocal_12 = var_1_7 / var_1_44;
	if (var_1_9 != stepLocal_12) {
		if ((var_1_50 + -16) > stepLocal_13) {
			var_1_52 = (abs (var_1_53));
		}
	} else {
		var_1_52 = var_1_53;
	}


	// From: Req19Batch7Amount250
	if ((256.4f / (max (var_1_55 , var_1_57))) != last_1_var_1_63) {
		var_1_63 = var_1_56;
	} else {
		var_1_63 = 15.44;
	}


	// From: Req10Batch7Amount250
	signed char stepLocal_9 = var_1_34;
	unsigned long int stepLocal_8 = (min (var_1_39 , var_1_40)) - var_1_35;
	signed long int stepLocal_7 = var_1_59;
	if (((16u >> 5u) / (min (var_1_15 , var_1_24))) <= stepLocal_8) {
		var_1_38 = ((var_1_6 - (min (var_1_17 , var_1_16))) + (var_1_30 + (max (var_1_31 , -10))));
	} else {
		if (var_1_17 > stepLocal_9) {
			if (stepLocal_7 >= ((abs (var_1_40)) - (var_1_17 + var_1_15))) {
				var_1_38 = var_1_8;
			} else {
				var_1_38 = var_1_6;
			}
		} else {
			var_1_38 = -2;
		}
	}


	// From: Req16Batch7Amount250
	if ((var_1_28 - (var_1_55 - var_1_56)) > (var_1_63 / (max (var_1_57 , var_1_58)))) {
		var_1_54 = (var_1_21 || (! var_1_20));
	}


	// From: Req2Batch7Amount250
	if (! var_1_54) {
		var_1_10 = (abs (32u));
	} else {
		var_1_10 = (max ((min ((max (var_1_6 , var_1_9)) , var_1_7)) , var_1_42));
	}


	// From: Req3Batch7Amount250
	unsigned short int stepLocal_2 = var_1_42;
	if (var_1_54) {
		if (stepLocal_2 > (var_1_42 + 2u)) {
			var_1_13 = ((var_1_14 + 5) + (var_1_7 - var_1_6));
		} else {
			var_1_13 = (((var_1_15 - 25) - (var_1_16 + var_1_17)) - (min (var_1_9 , var_1_6)));
		}
	} else {
		if (var_1_19) {
			var_1_13 = ((var_1_15 - var_1_7) - 1);
		} else {
			var_1_13 = ((var_1_16 + 5) + var_1_14);
		}
	}


	// From: Req9Batch7Amount250
	if ((var_1_8 == var_1_24) && var_1_20) {
		var_1_36 = (var_1_19 && ((var_1_22 && var_1_54) && var_1_21));
	}


	// From: Req11Batch7Amount250
	if (var_1_36) {
		var_1_41 = (min (var_1_14 , (abs (var_1_16))));
	} else {
		var_1_41 = (min ((var_1_35 + var_1_64) , var_1_30));
	}


	// From: Req7Batch7Amount250
	signed long int stepLocal_6 = var_1_14 << (min (0 , var_1_31));
	unsigned short int stepLocal_5 = var_1_42;
	signed long int stepLocal_4 = max (var_1_59 , (- var_1_64));
	if (stepLocal_4 <= (var_1_6 + (- var_1_15))) {
		if (var_1_27 >= var_1_63) {
			if ((var_1_7 % var_1_15) < stepLocal_6) {
				var_1_32 = (max (var_1_51 , var_1_8));
			} else {
				if (stepLocal_5 < (var_1_15 ^ var_1_42)) {
					var_1_32 = (var_1_15 - (max (var_1_17 , var_1_7)));
				}
			}
		} else {
			var_1_32 = (abs (min (var_1_41 , var_1_14)));
		}
	}


	// From: Req6Batch7Amount250
	if ((var_1_27 - var_1_28) == var_1_52) {
		if ((var_1_7 << (var_1_30 + var_1_31)) < (var_1_42 * 10000)) {
			var_1_26 = -50;
		} else {
			if (var_1_30 > ((var_1_16 * var_1_31) >> var_1_42)) {
				if ((! var_1_22) || var_1_36) {
					var_1_26 = var_1_31;
				}
			}
		}
	} else {
		var_1_26 = var_1_30;
	}


	// From: Req5Batch7Amount250
	if (! (var_1_26 <= var_1_14)) {
		if (var_1_21) {
			var_1_23 = (var_1_24 - var_1_9);
		}
	} else {
		if (var_1_54) {
			var_1_23 = (min ((var_1_16 + var_1_17) , var_1_42));
		} else {
			var_1_23 = var_1_9;
		}
	}


	// From: Req1Batch7Amount250
	signed char stepLocal_1 = var_1_7;
	unsigned long int stepLocal_0 = var_1_23;
	if (var_1_64 > stepLocal_0) {
		if ((abs (var_1_52)) < var_1_63) {
			var_1_1 = (((max (var_1_6 , var_1_7)) + (abs (var_1_8))) - var_1_9);
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		if (stepLocal_1 != -16) {
			var_1_1 = (16 + var_1_8);
		} else {
			var_1_1 = (var_1_7 - (var_1_6 + 50));
		}
	}


	// From: Req13Batch7Amount250
	if (var_1_27 > var_1_63) {
		var_1_49 = (var_1_7 - var_1_31);
	} else {
		if (var_1_59 >= var_1_23) {
			var_1_49 = (var_1_50 - var_1_30);
		} else {
			if (var_1_46 < var_1_35) {
				var_1_49 = (var_1_30 + (min (-4 , var_1_31)));
			}
		}
	}


	// From: Req18Batch7Amount250
	if (var_1_19) {
		if (var_1_54) {
			var_1_61 = (last_1_var_1_61 + var_1_38);
		} else {
			var_1_61 = ((var_1_14 + last_1_var_1_61) + var_1_6);
		}
	} else {
		var_1_61 = ((max (var_1_38 , (min (-1000 , var_1_8)))) + var_1_49);
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -31);
	assume_abort_if_not(var_1_14 <= 32);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 94);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 31);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 2147483647);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 63);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 2147483647);
	assume_abort_if_not(var_1_39 <= 4294967295);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967295);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= -2147483648);
	assume_abort_if_not(var_1_44 <= 2147483647);
	assume_abort_if_not(var_1_44 != 0);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 16383);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 8191);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 16383);
	assume_abort_if_not(var_1_47 <= 32767);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65534);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -1);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -922337.2036854765600e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 4611686.018427387900e+12F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854776000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427387900e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -922337.2036854776000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	assume_abort_if_not(var_1_57 != 0.0F);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -922337.2036854776000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	assume_abort_if_not(var_1_58 != 0.0F);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= 1073741822);
	assume_abort_if_not(var_1_60 <= 2147483646);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
}

int property() {
	return ((((((((((((((((((((var_1_64 > var_1_23) ? (((abs (var_1_52)) < var_1_63) ? (var_1_1 == ((signed char) (((max (var_1_6 , var_1_7)) + (abs (var_1_8))) - var_1_9))) : (var_1_1 == ((signed char) var_1_7))) : ((var_1_7 != -16) ? (var_1_1 == ((signed char) (16 + var_1_8))) : (var_1_1 == ((signed char) (var_1_7 - (var_1_6 + 50)))))) && ((! var_1_54) ? (var_1_10 == ((unsigned long int) (abs (32u)))) : (var_1_10 == ((unsigned long int) (max ((min ((max (var_1_6 , var_1_9)) , var_1_7)) , var_1_42)))))) && (var_1_54 ? ((var_1_42 > (var_1_42 + 2u)) ? (var_1_13 == ((signed char) ((var_1_14 + 5) + (var_1_7 - var_1_6)))) : (var_1_13 == ((signed char) (((var_1_15 - 25) - (var_1_16 + var_1_17)) - (min (var_1_9 , var_1_6)))))) : (var_1_19 ? (var_1_13 == ((signed char) ((var_1_15 - var_1_7) - 1))) : (var_1_13 == ((signed char) ((var_1_16 + 5) + var_1_14)))))) && (((~ -64) > var_1_7) ? (var_1_19 == ((unsigned char) ((! (! var_1_20)) || var_1_21))) : (var_1_19 == ((unsigned char) (var_1_20 || (var_1_21 || var_1_22)))))) && ((! (var_1_26 <= var_1_14)) ? (var_1_21 ? (var_1_23 == ((unsigned long int) (var_1_24 - var_1_9))) : 1) : (var_1_54 ? (var_1_23 == ((unsigned long int) (min ((var_1_16 + var_1_17) , var_1_42)))) : (var_1_23 == ((unsigned long int) var_1_9))))) && (((var_1_27 - var_1_28) == var_1_52) ? (((var_1_7 << (var_1_30 + var_1_31)) < (var_1_42 * 10000)) ? (var_1_26 == ((signed char) -50)) : ((var_1_30 > ((var_1_16 * var_1_31) >> var_1_42)) ? (((! var_1_22) || var_1_36) ? (var_1_26 == ((signed char) var_1_31)) : 1) : 1)) : (var_1_26 == ((signed char) var_1_30)))) && (((max (var_1_59 , (- var_1_64))) <= (var_1_6 + (- var_1_15))) ? ((var_1_27 >= var_1_63) ? (((var_1_7 % var_1_15) < (var_1_14 << (min (0 , var_1_31)))) ? (var_1_32 == ((signed short int) (max (var_1_51 , var_1_8)))) : ((var_1_42 < (var_1_15 ^ var_1_42)) ? (var_1_32 == ((signed short int) (var_1_15 - (max (var_1_17 , var_1_7))))) : 1)) : (var_1_32 == ((signed short int) (abs (min (var_1_41 , var_1_14)))))) : 1)) && (var_1_34 == ((signed char) (var_1_15 - (var_1_35 - var_1_30))))) && (((var_1_8 == var_1_24) && var_1_20) ? (var_1_36 == ((unsigned char) (var_1_19 && ((var_1_22 && var_1_54) && var_1_21)))) : 1)) && ((((16u >> 5u) / (min (var_1_15 , var_1_24))) <= ((min (var_1_39 , var_1_40)) - var_1_35)) ? (var_1_38 == ((signed char) ((var_1_6 - (min (var_1_17 , var_1_16))) + (var_1_30 + (max (var_1_31 , -10)))))) : ((var_1_17 > var_1_34) ? ((var_1_59 >= ((abs (var_1_40)) - (var_1_17 + var_1_15))) ? (var_1_38 == ((signed char) var_1_8)) : (var_1_38 == ((signed char) var_1_6))) : (var_1_38 == ((signed char) -2))))) && (var_1_36 ? (var_1_41 == ((signed short int) (min (var_1_14 , (abs (var_1_16)))))) : (var_1_41 == ((signed short int) (min ((var_1_35 + var_1_64) , var_1_30)))))) && ((! last_1_var_1_19) ? (((last_1_var_1_42 % var_1_15) > (last_1_var_1_10 / (max (var_1_35 , var_1_44)))) ? (var_1_42 == ((unsigned short int) ((var_1_45 - (var_1_46 - var_1_15)) + (var_1_47 - var_1_35)))) : ((var_1_47 != (var_1_15 ^ last_1_var_1_64)) ? (var_1_42 == ((unsigned short int) (var_1_48 - (var_1_35 + (min (var_1_9 , var_1_31)))))) : (var_1_42 == ((unsigned short int) ((var_1_47 - (10000 - var_1_31)) + var_1_16))))) : (var_1_42 == ((unsigned short int) (abs (var_1_47)))))) && ((var_1_27 > var_1_63) ? (var_1_49 == ((signed char) (var_1_7 - var_1_31))) : ((var_1_59 >= var_1_23) ? (var_1_49 == ((signed char) (var_1_50 - var_1_30))) : ((var_1_46 < var_1_35) ? (var_1_49 == ((signed char) (var_1_30 + (min (-4 , var_1_31))))) : 1)))) && (var_1_51 == ((signed char) (max (var_1_9 , (var_1_6 - var_1_31)))))) && ((var_1_9 != (var_1_7 / var_1_44)) ? (((var_1_50 + -16) > 1) ? (var_1_52 == ((double) (abs (var_1_53)))) : 1) : (var_1_52 == ((double) var_1_53)))) && (((var_1_28 - (var_1_55 - var_1_56)) > (var_1_63 / (max (var_1_57 , var_1_58)))) ? (var_1_54 == ((unsigned char) (var_1_21 || (! var_1_20)))) : 1)) && ((-16 != (4 - var_1_7)) ? ((last_1_var_1_13 != last_1_var_1_34) ? (var_1_59 == ((signed long int) (abs (-8)))) : (var_1_59 == ((signed long int) (min ((var_1_6 + last_1_var_1_32) , ((var_1_60 - var_1_15) - var_1_35)))))) : (var_1_59 == ((signed long int) ((max ((var_1_47 - last_1_var_1_32) , last_1_var_1_61)) + last_1_var_1_13))))) && (var_1_19 ? (var_1_54 ? (var_1_61 == ((signed short int) (last_1_var_1_61 + var_1_38))) : (var_1_61 == ((signed short int) ((var_1_14 + last_1_var_1_61) + var_1_6)))) : (var_1_61 == ((signed short int) ((max (var_1_38 , (min (-1000 , var_1_8)))) + var_1_49))))) && (((256.4f / (max (var_1_55 , var_1_57))) != last_1_var_1_63) ? (var_1_63 == ((double) var_1_56)) : (var_1_63 == ((double) 15.44)))) && (((max (last_1_var_1_1 , -10)) <= (var_1_15 * var_1_45)) ? ((var_1_58 == -0.125) ? ((var_1_44 == var_1_47) ? (var_1_64 == ((signed long int) var_1_7)) : (var_1_64 == ((signed long int) var_1_46))) : (var_1_64 == ((signed long int) var_1_50))) : 1)
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

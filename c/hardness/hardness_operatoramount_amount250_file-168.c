// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -16;
signed char var_1_5 = -25;
signed char var_1_6 = 50;
signed char var_1_7 = -4;
signed char var_1_8 = 64;
signed char var_1_9 = 16;
unsigned char var_1_10 = 128;
signed char var_1_12 = 10;
signed short int var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 256;
signed char var_1_17 = 64;
unsigned short int var_1_20 = 57683;
unsigned short int var_1_22 = 31482;
unsigned short int var_1_23 = 24968;
unsigned short int var_1_24 = 4;
signed long int var_1_25 = -1;
signed long int var_1_26 = 2126169706;
double var_1_28 = 99999.72;
double var_1_29 = 4.95;
double var_1_30 = 1000.375;
double var_1_31 = 1000000.25;
signed char var_1_32 = 2;
signed char var_1_33 = 16;
signed char var_1_34 = 5;
signed char var_1_35 = 16;
signed char var_1_36 = -16;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned long int var_1_42 = 16;
unsigned long int var_1_43 = 1661592511;
unsigned long int var_1_44 = 1566057112;
unsigned long int var_1_45 = 8;
float var_1_46 = 255.75;
unsigned short int var_1_48 = 2;
float var_1_49 = 15.75;
signed char var_1_50 = 0;
signed char var_1_51 = 100;
signed char var_1_52 = 64;
signed char var_1_53 = 50;
unsigned short int var_1_54 = 5;
double var_1_55 = 0.5;
double var_1_56 = 3.5;
double var_1_57 = 24.5;
float var_1_58 = 25.6;
double var_1_59 = 15.125;
unsigned char var_1_60 = 16;
signed short int var_1_61 = 128;
signed char var_1_63 = 1;
unsigned short int var_1_64 = 128;
signed long int var_1_65 = -2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_24 = 4;
signed long int last_1_var_1_25 = -1;
unsigned char last_1_var_1_37 = 0;
unsigned long int last_1_var_1_42 = 16;
signed long int last_1_var_1_65 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch168Amount250
	if (last_1_var_1_65 <= var_1_5) {
		if (-1 <= ((max (0 , var_1_8)) << var_1_20)) {
			var_1_25 = ((min (var_1_23 , var_1_8)) - (min ((var_1_26 - last_1_var_1_65) , var_1_17)));
		} else {
			if (last_1_var_1_37) {
				if (last_1_var_1_25 < last_1_var_1_24) {
					var_1_25 = var_1_26;
				} else {
					var_1_25 = last_1_var_1_42;
				}
			} else {
				var_1_25 = var_1_8;
			}
		}
	} else {
		var_1_25 = var_1_9;
	}


	// From: Req10Batch168Amount250
	signed long int stepLocal_9 = last_1_var_1_25;
	if (stepLocal_9 < var_1_33) {
		if (! last_1_var_1_37) {
			if (var_1_39) {
				var_1_42 = (abs (var_1_17));
			}
		} else {
			if (last_1_var_1_37) {
				var_1_42 = (abs (var_1_23));
			} else {
				var_1_42 = (((max (var_1_26 , var_1_43)) + var_1_44) - (var_1_9 + var_1_33));
			}
		}
	}


	// From: Req11Batch168Amount250
	if (((var_1_17 - var_1_9) / (max (var_1_5 , var_1_8))) <= var_1_10) {
		if ((- var_1_35) <= (min ((var_1_8 / var_1_26) , var_1_42))) {
			var_1_45 = var_1_43;
		} else {
			var_1_45 = var_1_44;
		}
	}


	// From: Req4Batch168Amount250
	signed long int stepLocal_6 = 1000 - var_1_8;
	unsigned long int stepLocal_5 = 100000u * var_1_22;
	if (stepLocal_5 == 32u) {
		if (stepLocal_6 > -5) {
			var_1_24 = var_1_9;
		} else {
			var_1_24 = var_1_8;
		}
	}


	// From: Req13Batch168Amount250
	var_1_49 = var_1_30;


	// From: Req15Batch168Amount250
	signed long int stepLocal_11 = (var_1_22 / var_1_10) / var_1_17;
	if (8 < stepLocal_11) {
		var_1_54 = (var_1_20 - var_1_8);
	}


	// From: Req16Batch168Amount250
	unsigned long int stepLocal_12 = var_1_45;
	if (stepLocal_12 > var_1_53) {
		var_1_55 = (128.5 + (var_1_30 - var_1_29));
	} else {
		var_1_55 = ((var_1_56 + var_1_57) + (min (var_1_30 , (var_1_31 - var_1_29))));
	}


	// From: Req18Batch168Amount250
	unsigned char stepLocal_13 = var_1_38;
	if (stepLocal_13 && var_1_39) {
		var_1_60 = ((var_1_17 - 10) + var_1_51);
	}


	// From: Req20Batch168Amount250
	var_1_64 = (var_1_63 + var_1_10);


	// From: Req9Batch168Amount250
	unsigned long int stepLocal_8 = var_1_42 / var_1_17;
	if (! last_1_var_1_37) {
		var_1_37 = (var_1_38 && var_1_39);
	} else {
		if (var_1_54 == stepLocal_8) {
			var_1_37 = (! 0);
		} else {
			var_1_37 = (var_1_40 || var_1_41);
		}
	}


	// From: Req7Batch168Amount250
	if (var_1_24 > (var_1_9 * var_1_45)) {
		var_1_32 = ((var_1_9 - var_1_33) + (var_1_34 + (var_1_35 - 10)));
	} else {
		var_1_32 = (abs ((max (var_1_33 , -10)) + var_1_35));
	}


	// From: Req6Batch168Amount250
	if (var_1_37) {
		var_1_28 = ((var_1_29 + 100.5) - (var_1_30 + var_1_31));
	} else {
		var_1_28 = var_1_31;
	}


	// From: Req8Batch168Amount250
	signed char stepLocal_7 = var_1_34;
	if (stepLocal_7 >= ((var_1_25 + var_1_26) + var_1_54)) {
		var_1_36 = var_1_9;
	} else {
		var_1_36 = (min (var_1_35 , (abs (max (var_1_33 , var_1_9)))));
	}


	// From: Req12Batch168Amount250
	signed long int stepLocal_10 = (abs (var_1_12)) << (abs (var_1_48));
	if (var_1_28 >= var_1_49) {
		if (var_1_35 >= stepLocal_10) {
			var_1_46 = var_1_31;
		} else {
			var_1_46 = var_1_30;
		}
	} else {
		var_1_46 = var_1_29;
	}


	// From: Req17Batch168Amount250
	if (((var_1_46 * 64.4) / var_1_59) > (var_1_55 * var_1_28)) {
		var_1_58 = ((var_1_31 - var_1_29) + var_1_57);
	}


	// From: Req21Batch168Amount250
	unsigned long int stepLocal_15 = var_1_43;
	signed long int stepLocal_14 = var_1_25;
	if (-256 <= stepLocal_14) {
		if ((var_1_32 + var_1_6) > stepLocal_15) {
			var_1_65 = var_1_22;
		} else {
			var_1_65 = (min (var_1_63 , var_1_35));
		}
	}


	// From: Req1Batch168Amount250
	unsigned long int stepLocal_4 = var_1_42;
	signed long int stepLocal_3 = 50;
	signed char stepLocal_2 = var_1_7;
	signed long int stepLocal_1 = var_1_10 - (max (var_1_8 , 32));
	signed long int stepLocal_0 = -1 / var_1_5;
	if (var_1_45 <= stepLocal_4) {
		if (stepLocal_0 < var_1_65) {
			var_1_1 = (max ((abs (abs (-1))) , (max (var_1_6 , var_1_7))));
		} else {
			var_1_1 = ((var_1_8 - 2) - (var_1_9 + 10));
		}
	} else {
		if (stepLocal_1 != var_1_42) {
			if (stepLocal_3 <= (min (var_1_45 , var_1_5))) {
				var_1_1 = (max (2 , (var_1_9 + var_1_12)));
			} else {
				if (stepLocal_2 != var_1_42) {
					var_1_1 = var_1_9;
				} else {
					var_1_1 = var_1_6;
				}
			}
		} else {
			var_1_1 = var_1_12;
		}
	}


	// From: Req2Batch168Amount250
	if (var_1_65 < var_1_42) {
		if (var_1_14 || var_1_15) {
			var_1_13 = (abs (var_1_42));
		} else {
			var_1_13 = (max (var_1_12 , (var_1_6 + var_1_10)));
		}
	} else {
		var_1_13 = (max ((var_1_10 - 4) , var_1_42));
	}


	// From: Req3Batch168Amount250
	if (var_1_6 >= (var_1_8 - (var_1_17 - var_1_9))) {
		if (var_1_45 < var_1_65) {
			if (! (var_1_10 < (var_1_65 * 1))) {
				if ((- var_1_46) < (10.4f + var_1_58)) {
					var_1_16 = (abs (min ((var_1_20 - var_1_8) , (var_1_10 + var_1_9))));
				} else {
					var_1_16 = (var_1_8 + var_1_10);
				}
			} else {
				var_1_16 = (min (var_1_8 , var_1_20));
			}
		} else {
			var_1_16 = var_1_20;
		}
	} else {
		if ((2314031763u - (var_1_20 + var_1_9)) != var_1_42) {
			if (var_1_37) {
				if (var_1_45 >= var_1_8) {
					var_1_16 = var_1_9;
				}
			}
		} else {
			if (var_1_37) {
				var_1_16 = (max (var_1_20 , var_1_9));
			} else {
				var_1_16 = ((var_1_22 + (var_1_23 - var_1_10)) - var_1_17);
			}
		}
	}


	// From: Req19Batch168Amount250
	if (var_1_54 <= (- var_1_42)) {
		var_1_61 = ((max (var_1_65 , var_1_24)) + var_1_52);
	} else {
		if (var_1_45 < var_1_23) {
			if ((var_1_34 % -50) < (var_1_26 >> var_1_63)) {
				var_1_61 = (var_1_17 - (30028 - var_1_10));
			}
		}
	}


	// From: Req14Batch168Amount250
	if (var_1_6 < ((var_1_9 - var_1_17) + var_1_65)) {
		if (var_1_13 <= var_1_61) {
			var_1_50 = ((max (var_1_9 , var_1_48)) + var_1_35);
		}
	} else {
		var_1_50 = (var_1_35 - ((min (var_1_51 , var_1_52)) - (var_1_53 - var_1_48)));
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -128);
	assume_abort_if_not(var_1_5 <= 127);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 62);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 255);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 63);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 16383);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 24575);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= 1073741823);
	assume_abort_if_not(var_1_26 <= 2147483646);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -31);
	assume_abort_if_not(var_1_34 <= 32);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 31);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 1073741823);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 1073741824);
	assume_abort_if_not(var_1_44 <= 2147483647);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 25);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= 63);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 63);
	assume_abort_if_not(var_1_52 <= 126);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 31);
	assume_abort_if_not(var_1_53 <= 63);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= -230584.3009213691400e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -230584.3009213691400e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	assume_abort_if_not(var_1_59 != 0.0F);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 30);
}



void updateLastVariables(void) {
	last_1_var_1_24 = var_1_24;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_65 = var_1_65;
}

int property(void) {
	return (((((((((((((((((((((var_1_45 <= var_1_42) ? (((-1 / var_1_5) < var_1_65) ? (var_1_1 == ((signed char) (max ((abs (abs (-1))) , (max (var_1_6 , var_1_7)))))) : (var_1_1 == ((signed char) ((var_1_8 - 2) - (var_1_9 + 10))))) : (((var_1_10 - (max (var_1_8 , 32))) != var_1_42) ? ((50 <= (min (var_1_45 , var_1_5))) ? (var_1_1 == ((signed char) (max (2 , (var_1_9 + var_1_12))))) : ((var_1_7 != var_1_42) ? (var_1_1 == ((signed char) var_1_9)) : (var_1_1 == ((signed char) var_1_6)))) : (var_1_1 == ((signed char) var_1_12)))) && ((var_1_65 < var_1_42) ? ((var_1_14 || var_1_15) ? (var_1_13 == ((signed short int) (abs (var_1_42)))) : (var_1_13 == ((signed short int) (max (var_1_12 , (var_1_6 + var_1_10)))))) : (var_1_13 == ((signed short int) (max ((var_1_10 - 4) , var_1_42)))))) && ((var_1_6 >= (var_1_8 - (var_1_17 - var_1_9))) ? ((var_1_45 < var_1_65) ? ((! (var_1_10 < (var_1_65 * 1))) ? (((- var_1_46) < (10.4f + var_1_58)) ? (var_1_16 == ((unsigned short int) (abs (min ((var_1_20 - var_1_8) , (var_1_10 + var_1_9)))))) : (var_1_16 == ((unsigned short int) (var_1_8 + var_1_10)))) : (var_1_16 == ((unsigned short int) (min (var_1_8 , var_1_20))))) : (var_1_16 == ((unsigned short int) var_1_20))) : (((2314031763u - (var_1_20 + var_1_9)) != var_1_42) ? (var_1_37 ? ((var_1_45 >= var_1_8) ? (var_1_16 == ((unsigned short int) var_1_9)) : 1) : 1) : (var_1_37 ? (var_1_16 == ((unsigned short int) (max (var_1_20 , var_1_9)))) : (var_1_16 == ((unsigned short int) ((var_1_22 + (var_1_23 - var_1_10)) - var_1_17))))))) && (((100000u * var_1_22) == 32u) ? (((1000 - var_1_8) > -5) ? (var_1_24 == ((unsigned short int) var_1_9)) : (var_1_24 == ((unsigned short int) var_1_8))) : 1)) && ((last_1_var_1_65 <= var_1_5) ? ((-1 <= ((max (0 , var_1_8)) << var_1_20)) ? (var_1_25 == ((signed long int) ((min (var_1_23 , var_1_8)) - (min ((var_1_26 - last_1_var_1_65) , var_1_17))))) : (last_1_var_1_37 ? ((last_1_var_1_25 < last_1_var_1_24) ? (var_1_25 == ((signed long int) var_1_26)) : (var_1_25 == ((signed long int) last_1_var_1_42))) : (var_1_25 == ((signed long int) var_1_8)))) : (var_1_25 == ((signed long int) var_1_9)))) && (var_1_37 ? (var_1_28 == ((double) ((var_1_29 + 100.5) - (var_1_30 + var_1_31)))) : (var_1_28 == ((double) var_1_31)))) && ((var_1_24 > (var_1_9 * var_1_45)) ? (var_1_32 == ((signed char) ((var_1_9 - var_1_33) + (var_1_34 + (var_1_35 - 10))))) : (var_1_32 == ((signed char) (abs ((max (var_1_33 , -10)) + var_1_35)))))) && ((var_1_34 >= ((var_1_25 + var_1_26) + var_1_54)) ? (var_1_36 == ((signed char) var_1_9)) : (var_1_36 == ((signed char) (min (var_1_35 , (abs (max (var_1_33 , var_1_9))))))))) && ((! last_1_var_1_37) ? (var_1_37 == ((unsigned char) (var_1_38 && var_1_39))) : ((var_1_54 == (var_1_42 / var_1_17)) ? (var_1_37 == ((unsigned char) (! 0))) : (var_1_37 == ((unsigned char) (var_1_40 || var_1_41)))))) && ((last_1_var_1_25 < var_1_33) ? ((! last_1_var_1_37) ? (var_1_39 ? (var_1_42 == ((unsigned long int) (abs (var_1_17)))) : 1) : (last_1_var_1_37 ? (var_1_42 == ((unsigned long int) (abs (var_1_23)))) : (var_1_42 == ((unsigned long int) (((max (var_1_26 , var_1_43)) + var_1_44) - (var_1_9 + var_1_33)))))) : 1)) && ((((var_1_17 - var_1_9) / (max (var_1_5 , var_1_8))) <= var_1_10) ? (((- var_1_35) <= (min ((var_1_8 / var_1_26) , var_1_42))) ? (var_1_45 == ((unsigned long int) var_1_43)) : (var_1_45 == ((unsigned long int) var_1_44))) : 1)) && ((var_1_28 >= var_1_49) ? ((var_1_35 >= ((abs (var_1_12)) << (abs (var_1_48)))) ? (var_1_46 == ((float) var_1_31)) : (var_1_46 == ((float) var_1_30))) : (var_1_46 == ((float) var_1_29)))) && (var_1_49 == ((float) var_1_30))) && ((var_1_6 < ((var_1_9 - var_1_17) + var_1_65)) ? ((var_1_13 <= var_1_61) ? (var_1_50 == ((signed char) ((max (var_1_9 , var_1_48)) + var_1_35))) : 1) : (var_1_50 == ((signed char) (var_1_35 - ((min (var_1_51 , var_1_52)) - (var_1_53 - var_1_48))))))) && ((8 < ((var_1_22 / var_1_10) / var_1_17)) ? (var_1_54 == ((unsigned short int) (var_1_20 - var_1_8))) : 1)) && ((var_1_45 > var_1_53) ? (var_1_55 == ((double) (128.5 + (var_1_30 - var_1_29)))) : (var_1_55 == ((double) ((var_1_56 + var_1_57) + (min (var_1_30 , (var_1_31 - var_1_29)))))))) && ((((var_1_46 * 64.4) / var_1_59) > (var_1_55 * var_1_28)) ? (var_1_58 == ((float) ((var_1_31 - var_1_29) + var_1_57))) : 1)) && ((var_1_38 && var_1_39) ? (var_1_60 == ((unsigned char) ((var_1_17 - 10) + var_1_51))) : 1)) && ((var_1_54 <= (- var_1_42)) ? (var_1_61 == ((signed short int) ((max (var_1_65 , var_1_24)) + var_1_52))) : ((var_1_45 < var_1_23) ? (((var_1_34 % -50) < (var_1_26 >> var_1_63)) ? (var_1_61 == ((signed short int) (var_1_17 - (30028 - var_1_10)))) : 1) : 1))) && (var_1_64 == ((unsigned short int) (var_1_63 + var_1_10)))) && ((-256 <= var_1_25) ? (((var_1_32 + var_1_6) > var_1_43) ? (var_1_65 == ((signed long int) var_1_22)) : (var_1_65 == ((signed long int) (min (var_1_63 , var_1_35))))) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch129Amount250.c", 13, "reach_error"); }
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
float var_1_1 = 32.125;
unsigned char var_1_2 = 1;
float var_1_3 = 4.7;
float var_1_4 = 255.75;
float var_1_5 = 255.5;
float var_1_6 = 64.8;
float var_1_7 = 128.75;
float var_1_8 = 99.4;
float var_1_9 = 128.5;
float var_1_10 = 8.5;
float var_1_11 = 50.375;
double var_1_12 = 4.25;
unsigned long int var_1_14 = 2696373135;
unsigned long int var_1_15 = 5;
signed char var_1_16 = 32;
unsigned char var_1_17 = 1;
signed char var_1_18 = 2;
signed char var_1_19 = 5;
signed char var_1_20 = 0;
signed char var_1_21 = 5;
signed char var_1_22 = -32;
signed char var_1_23 = -5;
signed char var_1_24 = 1;
signed char var_1_25 = 4;
signed long int var_1_26 = 100;
signed long int var_1_27 = -2;
unsigned char var_1_28 = 0;
double var_1_29 = 32.7;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
signed short int var_1_32 = -64;
unsigned long int var_1_33 = 4;
signed short int var_1_34 = -1000;
signed short int var_1_36 = 10000;
float var_1_37 = -0.5;
float var_1_38 = 0.0;
float var_1_39 = 2.5;
unsigned short int var_1_40 = 256;
double var_1_41 = 1.15;
unsigned long int var_1_42 = 1884208538;
unsigned long int var_1_43 = 1922038608;
double var_1_44 = 64.75;
double var_1_45 = 999999999.5;
double var_1_46 = 64.75;
double var_1_47 = 16.5;
double var_1_48 = 1.425;
double var_1_49 = 16.25;
double var_1_50 = 1000000.75;
double var_1_51 = 256.45;
double var_1_52 = 1000.8;
unsigned long int var_1_53 = 64;
unsigned long int var_1_56 = 2769948473;
unsigned char var_1_57 = 8;
unsigned char var_1_58 = 64;
unsigned char var_1_59 = 128;
signed char var_1_60 = 25;
signed char var_1_61 = 100;
signed char var_1_62 = 0;
signed char var_1_63 = -4;
signed short int var_1_64 = 256;
double var_1_65 = 4.4;
unsigned short int var_1_66 = 128;
signed char var_1_67 = -5;
unsigned char var_1_68 = 100;

// Calibration values

// Last'ed variables
double last_1_var_1_12 = 4.25;
unsigned char last_1_var_1_30 = 1;
double last_1_var_1_41 = 1.15;
unsigned long int last_1_var_1_53 = 64;
signed short int last_1_var_1_64 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch129Amount250
	unsigned char stepLocal_6 = var_1_21 < last_1_var_1_53;
	if (last_1_var_1_30 || stepLocal_6) {
		var_1_37 = var_1_11;
	} else {
		if (! last_1_var_1_30) {
			var_1_37 = ((var_1_38 - var_1_39) - var_1_11);
		} else {
			var_1_37 = var_1_10;
		}
	}


	// From: Req6Batch129Amount250
	if ((last_1_var_1_12 / var_1_29) > (last_1_var_1_41 * var_1_10)) {
		var_1_30 = var_1_31;
	}


	// From: Req20Batch129Amount250
	if (var_1_30) {
		var_1_65 = 2.4;
	}


	// From: Req8Batch129Amount250
	signed char stepLocal_5 = var_1_21;
	unsigned char stepLocal_4 = var_1_28;
	if (var_1_65 > var_1_11) {
		if (var_1_19 > stepLocal_5) {
			if (var_1_30 || stepLocal_4) {
				var_1_33 = (min (var_1_20 , (max (var_1_25 , var_1_15))));
			} else {
				if (! var_1_17) {
					var_1_33 = var_1_20;
				} else {
					var_1_33 = var_1_19;
				}
			}
		} else {
			var_1_33 = var_1_15;
		}
	} else {
		var_1_33 = var_1_15;
	}


	// From: Req12Batch129Amount250
	unsigned long int stepLocal_8 = (var_1_42 + var_1_43) - var_1_15;
	if (var_1_9 != var_1_65) {
		if ((var_1_14 * var_1_25) <= stepLocal_8) {
			if (var_1_3 > var_1_7) {
				var_1_41 = (var_1_4 - (max ((abs (var_1_44)) , (var_1_38 - var_1_39))));
			}
		}
	} else {
		var_1_41 = ((var_1_39 - (var_1_45 + var_1_46)) + (4.35 - var_1_47));
	}


	// From: Req1Batch129Amount250
	if (! var_1_30) {
		var_1_1 = (max ((var_1_3 - var_1_4) , var_1_5));
	}


	// From: Req2Batch129Amount250
	unsigned char stepLocal_0 = var_1_5 == var_1_37;
	if (stepLocal_0 && var_1_30) {
		if (var_1_37 > (var_1_4 + var_1_5)) {
			var_1_6 = (var_1_7 + (min (var_1_8 , (var_1_9 + var_1_10))));
		}
	} else {
		if ((- var_1_3) <= (min (9.625f , var_1_7))) {
			var_1_6 = (var_1_4 - var_1_11);
		} else {
			var_1_6 = var_1_9;
		}
	}


	// From: Req5Batch129Amount250
	unsigned char stepLocal_3 = var_1_17;
	if (var_1_2) {
		var_1_26 = (var_1_27 + (var_1_19 - (max (var_1_20 , var_1_25))));
	} else {
		if (stepLocal_3 && var_1_28) {
			var_1_26 = (max (var_1_22 , (var_1_19 - var_1_20)));
		} else {
			if ((var_1_11 / var_1_29) < 10.57) {
				var_1_26 = var_1_24;
			}
		}
	}


	// From: Req7Batch129Amount250
	if (var_1_30) {
		var_1_32 = var_1_19;
	}


	// From: Req9Batch129Amount250
	if ((var_1_11 - var_1_4) != var_1_65) {
		if ((- 4.22) >= ((- var_1_4) * var_1_10)) {
			var_1_34 = (var_1_20 + (var_1_19 - (var_1_36 - var_1_25)));
		}
	}


	// From: Req11Batch129Amount250
	unsigned char stepLocal_7 = var_1_31;
	if (stepLocal_7 || (var_1_26 <= -5)) {
		var_1_40 = (var_1_19 + var_1_20);
	} else {
		var_1_40 = (var_1_20 + (max (var_1_36 , 64)));
	}


	// From: Req14Batch129Amount250
	signed short int stepLocal_11 = var_1_36;
	if (var_1_30) {
		var_1_49 = (max ((var_1_11 - var_1_3) , var_1_38));
	} else {
		if (var_1_30) {
			var_1_49 = ((var_1_38 - var_1_46) - var_1_11);
		} else {
			if (stepLocal_11 > (var_1_18 - (max (var_1_20 , var_1_19)))) {
				var_1_49 = ((var_1_46 - var_1_39) + (min ((var_1_47 - var_1_45) , (var_1_50 - var_1_51))));
			} else {
				var_1_49 = (min (var_1_8 , (max (256.7 , var_1_52))));
			}
		}
	}


	// From: Req16Batch129Amount250
	unsigned long int stepLocal_13 = var_1_56;
	signed char stepLocal_12 = var_1_21;
	if ((var_1_20 * 5) == stepLocal_12) {
		var_1_57 = (var_1_25 + var_1_19);
	} else {
		if (var_1_33 < stepLocal_13) {
			if (! var_1_30) {
				var_1_57 = (128 - (var_1_58 - var_1_25));
			} else {
				var_1_57 = (var_1_59 - var_1_20);
			}
		}
	}


	// From: Req17Batch129Amount250
	if (var_1_23 == var_1_14) {
		if (var_1_19 < var_1_32) {
			var_1_60 = (min ((min ((var_1_22 + var_1_24) , var_1_25)) , -10));
		} else {
			var_1_60 = (var_1_19 - ((var_1_61 - var_1_62) - var_1_25));
		}
	} else {
		var_1_60 = (max (var_1_22 , var_1_18));
	}


	// From: Req18Batch129Amount250
	unsigned char stepLocal_14 = var_1_31;
	if (stepLocal_14 || var_1_30) {
		var_1_63 = ((max (var_1_24 , var_1_22)) + var_1_21);
	} else {
		var_1_63 = (var_1_62 - ((100 - 8) - var_1_25));
	}


	// From: Req21Batch129Amount250
	if (var_1_30) {
		var_1_66 = var_1_58;
	} else {
		var_1_66 = 16;
	}


	// From: Req22Batch129Amount250
	if (((var_1_61 + var_1_68) - (var_1_62 + var_1_25)) >= var_1_60) {
		if ((var_1_27 | var_1_33) > var_1_15) {
			var_1_67 = var_1_23;
		} else {
			var_1_67 = var_1_61;
		}
	} else {
		var_1_67 = var_1_18;
	}


	// From: Req15Batch129Amount250
	if ((max ((- var_1_37) , var_1_49)) >= var_1_5) {
		var_1_53 = (max (var_1_15 , var_1_20));
	} else {
		var_1_53 = (var_1_56 - var_1_43);
	}


	// From: Req3Batch129Amount250
	unsigned long int stepLocal_1 = var_1_33;
	if (stepLocal_1 >= (var_1_14 - var_1_15)) {
		var_1_12 = (var_1_9 + var_1_8);
	} else {
		var_1_12 = var_1_9;
	}


	// From: Req4Batch129Amount250
	unsigned char stepLocal_2 = var_1_2;
	if (var_1_5 > var_1_4) {
		if (var_1_49 == 9.999999991E8) {
			if (stepLocal_2 && var_1_17) {
				if (var_1_17) {
					var_1_16 = (var_1_18 - var_1_19);
				} else {
					var_1_16 = (abs (min ((var_1_19 - var_1_20) , (var_1_21 + var_1_22))));
				}
			} else {
				var_1_16 = (max (var_1_23 , (var_1_21 + (max (var_1_22 , var_1_24)))));
			}
		} else {
			var_1_16 = ((64 - var_1_25) - var_1_19);
		}
	}


	// From: Req19Batch129Amount250
	if ((~ var_1_40) > var_1_36) {
		if (var_1_12 >= ((min (var_1_37 , var_1_46)) + var_1_44)) {
			if (((- var_1_45) / (max (var_1_38 , var_1_29))) < var_1_44) {
				var_1_64 = (var_1_36 + last_1_var_1_64);
			} else {
				var_1_64 = (abs (var_1_25));
			}
		}
	} else {
		if (var_1_7 <= var_1_37) {
			if (var_1_23 > (var_1_20 - var_1_25)) {
				var_1_64 = -1;
			}
		}
	}


	// From: Req13Batch129Amount250
	signed long int stepLocal_10 = 2 - var_1_36;
	unsigned char stepLocal_9 = var_1_33 != var_1_53;
	if (((var_1_25 + var_1_20) << var_1_64) != stepLocal_10) {
		if (stepLocal_9 && var_1_30) {
			var_1_48 = (var_1_7 + var_1_8);
		} else {
			var_1_48 = (var_1_10 + var_1_9);
		}
	} else {
		if (var_1_30) {
			var_1_48 = (var_1_38 - var_1_47);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -230584.3009213691400e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -230584.3009213691400e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -1073741823);
	assume_abort_if_not(var_1_27 <= 1073741823);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	assume_abort_if_not(var_1_29 != 0.0F);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 8191);
	assume_abort_if_not(var_1_36 <= 16383);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 4611686.018427383000e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 1073741823);
	assume_abort_if_not(var_1_42 <= 2147483648);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 1073741824);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -922337.2036854766000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 2147483647);
	assume_abort_if_not(var_1_56 <= 4294967294);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 63);
	assume_abort_if_not(var_1_58 <= 127);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 127);
	assume_abort_if_not(var_1_59 <= 254);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 94);
	assume_abort_if_not(var_1_61 <= 126);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 31);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 64);
	assume_abort_if_not(var_1_68 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_64 = var_1_64;
}

int property(void) {
	return ((((((((((((((((((((((! var_1_30) ? (var_1_1 == ((float) (max ((var_1_3 - var_1_4) , var_1_5)))) : 1) && (((var_1_5 == var_1_37) && var_1_30) ? ((var_1_37 > (var_1_4 + var_1_5)) ? (var_1_6 == ((float) (var_1_7 + (min (var_1_8 , (var_1_9 + var_1_10)))))) : 1) : (((- var_1_3) <= (min (9.625f , var_1_7))) ? (var_1_6 == ((float) (var_1_4 - var_1_11))) : (var_1_6 == ((float) var_1_9))))) && ((var_1_33 >= (var_1_14 - var_1_15)) ? (var_1_12 == ((double) (var_1_9 + var_1_8))) : (var_1_12 == ((double) var_1_9)))) && ((var_1_5 > var_1_4) ? ((var_1_49 == 9.999999991E8) ? ((var_1_2 && var_1_17) ? (var_1_17 ? (var_1_16 == ((signed char) (var_1_18 - var_1_19))) : (var_1_16 == ((signed char) (abs (min ((var_1_19 - var_1_20) , (var_1_21 + var_1_22))))))) : (var_1_16 == ((signed char) (max (var_1_23 , (var_1_21 + (max (var_1_22 , var_1_24)))))))) : (var_1_16 == ((signed char) ((64 - var_1_25) - var_1_19)))) : 1)) && (var_1_2 ? (var_1_26 == ((signed long int) (var_1_27 + (var_1_19 - (max (var_1_20 , var_1_25)))))) : ((var_1_17 && var_1_28) ? (var_1_26 == ((signed long int) (max (var_1_22 , (var_1_19 - var_1_20))))) : (((var_1_11 / var_1_29) < 10.57) ? (var_1_26 == ((signed long int) var_1_24)) : 1)))) && (((last_1_var_1_12 / var_1_29) > (last_1_var_1_41 * var_1_10)) ? (var_1_30 == ((unsigned char) var_1_31)) : 1)) && (var_1_30 ? (var_1_32 == ((signed short int) var_1_19)) : 1)) && ((var_1_65 > var_1_11) ? ((var_1_19 > var_1_21) ? ((var_1_30 || var_1_28) ? (var_1_33 == ((unsigned long int) (min (var_1_20 , (max (var_1_25 , var_1_15)))))) : ((! var_1_17) ? (var_1_33 == ((unsigned long int) var_1_20)) : (var_1_33 == ((unsigned long int) var_1_19)))) : (var_1_33 == ((unsigned long int) var_1_15))) : (var_1_33 == ((unsigned long int) var_1_15)))) && (((var_1_11 - var_1_4) != var_1_65) ? (((- 4.22) >= ((- var_1_4) * var_1_10)) ? (var_1_34 == ((signed short int) (var_1_20 + (var_1_19 - (var_1_36 - var_1_25))))) : 1) : 1)) && ((last_1_var_1_30 || (var_1_21 < last_1_var_1_53)) ? (var_1_37 == ((float) var_1_11)) : ((! last_1_var_1_30) ? (var_1_37 == ((float) ((var_1_38 - var_1_39) - var_1_11))) : (var_1_37 == ((float) var_1_10))))) && ((var_1_31 || (var_1_26 <= -5)) ? (var_1_40 == ((unsigned short int) (var_1_19 + var_1_20))) : (var_1_40 == ((unsigned short int) (var_1_20 + (max (var_1_36 , 64))))))) && ((var_1_9 != var_1_65) ? (((var_1_14 * var_1_25) <= ((var_1_42 + var_1_43) - var_1_15)) ? ((var_1_3 > var_1_7) ? (var_1_41 == ((double) (var_1_4 - (max ((abs (var_1_44)) , (var_1_38 - var_1_39)))))) : 1) : 1) : (var_1_41 == ((double) ((var_1_39 - (var_1_45 + var_1_46)) + (4.35 - var_1_47)))))) && ((((var_1_25 + var_1_20) << var_1_64) != (2 - var_1_36)) ? (((var_1_33 != var_1_53) && var_1_30) ? (var_1_48 == ((double) (var_1_7 + var_1_8))) : (var_1_48 == ((double) (var_1_10 + var_1_9)))) : (var_1_30 ? (var_1_48 == ((double) (var_1_38 - var_1_47))) : 1))) && (var_1_30 ? (var_1_49 == ((double) (max ((var_1_11 - var_1_3) , var_1_38)))) : (var_1_30 ? (var_1_49 == ((double) ((var_1_38 - var_1_46) - var_1_11))) : ((var_1_36 > (var_1_18 - (max (var_1_20 , var_1_19)))) ? (var_1_49 == ((double) ((var_1_46 - var_1_39) + (min ((var_1_47 - var_1_45) , (var_1_50 - var_1_51)))))) : (var_1_49 == ((double) (min (var_1_8 , (max (256.7 , var_1_52)))))))))) && (((max ((- var_1_37) , var_1_49)) >= var_1_5) ? (var_1_53 == ((unsigned long int) (max (var_1_15 , var_1_20)))) : (var_1_53 == ((unsigned long int) (var_1_56 - var_1_43))))) && (((var_1_20 * 5) == var_1_21) ? (var_1_57 == ((unsigned char) (var_1_25 + var_1_19))) : ((var_1_33 < var_1_56) ? ((! var_1_30) ? (var_1_57 == ((unsigned char) (128 - (var_1_58 - var_1_25)))) : (var_1_57 == ((unsigned char) (var_1_59 - var_1_20)))) : 1))) && ((var_1_23 == var_1_14) ? ((var_1_19 < var_1_32) ? (var_1_60 == ((signed char) (min ((min ((var_1_22 + var_1_24) , var_1_25)) , -10)))) : (var_1_60 == ((signed char) (var_1_19 - ((var_1_61 - var_1_62) - var_1_25))))) : (var_1_60 == ((signed char) (max (var_1_22 , var_1_18)))))) && ((var_1_31 || var_1_30) ? (var_1_63 == ((signed char) ((max (var_1_24 , var_1_22)) + var_1_21))) : (var_1_63 == ((signed char) (var_1_62 - ((100 - 8) - var_1_25)))))) && (((~ var_1_40) > var_1_36) ? ((var_1_12 >= ((min (var_1_37 , var_1_46)) + var_1_44)) ? ((((- var_1_45) / (max (var_1_38 , var_1_29))) < var_1_44) ? (var_1_64 == ((signed short int) (var_1_36 + last_1_var_1_64))) : (var_1_64 == ((signed short int) (abs (var_1_25))))) : 1) : ((var_1_7 <= var_1_37) ? ((var_1_23 > (var_1_20 - var_1_25)) ? (var_1_64 == ((signed short int) -1)) : 1) : 1))) && (var_1_30 ? (var_1_65 == ((double) 2.4)) : 1)) && (var_1_30 ? (var_1_66 == ((unsigned short int) var_1_58)) : (var_1_66 == ((unsigned short int) 16)))) && ((((var_1_61 + var_1_68) - (var_1_62 + var_1_25)) >= var_1_60) ? (((var_1_27 | var_1_33) > var_1_15) ? (var_1_67 == ((signed char) var_1_23)) : (var_1_67 == ((signed char) var_1_61))) : (var_1_67 == ((signed char) var_1_18)))
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

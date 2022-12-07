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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 10;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 25;
unsigned short int var_1_14 = 31408;
double var_1_15 = 64.375;
double var_1_16 = 10.85;
double var_1_17 = 128.8;
double var_1_18 = 2.6;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = -64;
signed long int var_1_22 = -32;
unsigned short int var_1_23 = 10;
unsigned short int var_1_24 = 0;
unsigned short int var_1_25 = 32;
signed char var_1_26 = 25;
signed char var_1_27 = 4;
unsigned long int var_1_28 = 32;
double var_1_29 = 8.9;
signed short int var_1_30 = 5;
double var_1_31 = 63.7;
unsigned long int var_1_32 = 4;
unsigned char var_1_33 = 0;
float var_1_34 = 31.25;
unsigned char var_1_35 = 1;
float var_1_36 = 7.8;
float var_1_37 = 16.2;
float var_1_38 = 4.5;
double var_1_39 = 7.4;
double var_1_40 = 0.5;
double var_1_41 = 128.6;
double var_1_42 = 256.25;
double var_1_43 = 2.25;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
signed long int var_1_46 = 32;
unsigned char var_1_47 = 1;
signed long int var_1_48 = -10;
unsigned long int var_1_49 = 10;
unsigned long int var_1_50 = 3010297372;
unsigned long int var_1_51 = 1171786177;
unsigned long int var_1_52 = 1985265779;
double var_1_53 = 8.1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_12 = 25;
double last_1_var_1_15 = 64.375;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_23 <= ((min (var_1_24 , var_1_25)) >> (var_1_26 - var_1_27))) {
		var_1_22 = (max (var_1_25 , var_1_24));
	} else {
		var_1_22 = var_1_25;
	}


	// From: CodeObject2
	if (8.4 <= var_1_29) {
		var_1_28 = (abs (min (var_1_23 , var_1_24)));
	} else {
		var_1_28 = (abs (var_1_23));
	}


	// From: CodeObject3
	if (var_1_29 == (min (32.5 , var_1_31))) {
		var_1_30 = var_1_27;
	} else {
		if (var_1_23 < var_1_22) {
			if (var_1_27 < var_1_25) {
				var_1_30 = var_1_27;
			} else {
				var_1_30 = var_1_26;
			}
		}
	}


	// From: CodeObject4
	if (var_1_33) {
		var_1_32 = (abs (var_1_23 + var_1_25));
	}


	// From: CodeObject5
	if (var_1_33) {
		if (var_1_35) {
			if (var_1_30 > var_1_25) {
				var_1_34 = (9.5f + 128.5f);
			}
		} else {
			var_1_34 = (min ((abs (min (var_1_36 , var_1_37))) , var_1_38));
		}
	}


	// From: CodeObject6
	if (-256 < (var_1_24 * 10)) {
		if (var_1_29 >= var_1_38) {
			var_1_39 = ((max ((min (var_1_40 , var_1_41)) , var_1_42)) - var_1_43);
		}
	} else {
		var_1_39 = (min (9.75 , (max ((abs (var_1_42)) , (abs (var_1_41))))));
	}


	// From: CodeObject7
	if (var_1_25 <= var_1_27) {
		var_1_44 = (! var_1_45);
	} else {
		if (var_1_35) {
			var_1_44 = var_1_45;
		}
	}


	// From: CodeObject8
	if (var_1_25 > var_1_27) {
		var_1_46 = (var_1_23 - var_1_24);
	} else {
		if (var_1_39 < var_1_31) {
			if (var_1_45) {
				var_1_46 = var_1_25;
			} else {
				var_1_46 = (min (var_1_23 , ((abs (var_1_30)) + var_1_27)));
			}
		} else {
			var_1_46 = (var_1_26 - var_1_23);
		}
	}


	// From: CodeObject9
	if ((var_1_24 & 2) > (max (var_1_28 , var_1_48))) {
		if (var_1_37 < var_1_36) {
			var_1_47 = (var_1_33 || var_1_45);
		}
	}


	// From: CodeObject10
	if (var_1_45) {
		if (var_1_47 || (var_1_40 > (abs (var_1_43)))) {
			var_1_49 = (var_1_50 - (min (var_1_27 , var_1_23)));
		}
	} else {
		var_1_49 = (max (var_1_26 , ((var_1_51 + var_1_52) - (abs (var_1_27)))));
	}


	// From: CodeObject11
	if ((var_1_48 >> var_1_52) >= (var_1_27 - var_1_25)) {
		var_1_53 = (abs (var_1_36));
	}


	// From: Req2Batch5PS_CN_100
	if (last_1_var_1_12 > var_1_4) {
		if ((- last_1_var_1_15) < last_1_var_1_15) {
			var_1_6 = 10u;
		}
	}


	// From: Req1Batch5PS_CN_100
	if (((- 64) + var_1_6) == var_1_6) {
		var_1_1 = ((abs (var_1_4)) - var_1_5);
	} else {
		var_1_1 = ((min (128 , var_1_4)) - 64);
	}


	// From: Req3Batch5PS_CN_100
	if (var_1_5 == (var_1_6 / var_1_4)) {
		var_1_9 = (min (var_1_5 , (abs (var_1_4))));
	} else {
		var_1_9 = ((var_1_10 + var_1_11) - var_1_5);
	}


	// From: Req7Batch5PS_CN_100
	var_1_21 = var_1_10;


	// From: Req6Batch5PS_CN_100
	unsigned long int stepLocal_3 = var_1_6;
	unsigned char stepLocal_2 = var_1_4;
	if (stepLocal_2 < var_1_1) {
		if (stepLocal_3 > var_1_21) {
			var_1_19 = var_1_20;
		}
	}


	// From: Req4Batch5PS_CN_100
	unsigned long int stepLocal_0 = max (var_1_6 , var_1_4);
	if ((abs (var_1_21)) <= stepLocal_0) {
		var_1_12 = ((var_1_14 - var_1_5) + (abs (var_1_6)));
	} else {
		var_1_12 = var_1_6;
	}


	// From: Req5Batch5PS_CN_100
	signed long int stepLocal_1 = ~ (var_1_5 * var_1_1);
	if (stepLocal_1 <= var_1_12) {
		var_1_15 = (max ((5.25 - var_1_16) , var_1_17));
	} else {
		var_1_15 = (min ((min (var_1_17 , var_1_16)) , var_1_18));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 64);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65535);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 16);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= -2147483648);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 2147483647);
	assume_abort_if_not(var_1_50 <= 4294967294);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 1073741823);
	assume_abort_if_not(var_1_51 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 1073741824);
	assume_abort_if_not(var_1_52 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((((- 64) + var_1_6) == var_1_6) ? (var_1_1 == ((unsigned char) ((abs (var_1_4)) - var_1_5))) : (var_1_1 == ((unsigned char) ((min (128 , var_1_4)) - 64)))) && ((last_1_var_1_12 > var_1_4) ? (((- last_1_var_1_15) < last_1_var_1_15) ? (var_1_6 == ((unsigned long int) 10u)) : 1) : 1)) && ((var_1_5 == (var_1_6 / var_1_4)) ? (var_1_9 == ((unsigned char) (min (var_1_5 , (abs (var_1_4)))))) : (var_1_9 == ((unsigned char) ((var_1_10 + var_1_11) - var_1_5))))) && (((abs (var_1_21)) <= (max (var_1_6 , var_1_4))) ? (var_1_12 == ((unsigned short int) ((var_1_14 - var_1_5) + (abs (var_1_6))))) : (var_1_12 == ((unsigned short int) var_1_6)))) && (((~ (var_1_5 * var_1_1)) <= var_1_12) ? (var_1_15 == ((double) (max ((5.25 - var_1_16) , var_1_17)))) : (var_1_15 == ((double) (min ((min (var_1_17 , var_1_16)) , var_1_18)))))) && ((var_1_4 < var_1_1) ? ((var_1_6 > var_1_21) ? (var_1_19 == ((unsigned char) var_1_20)) : 1) : 1)) && (var_1_21 == ((signed short int) var_1_10))
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

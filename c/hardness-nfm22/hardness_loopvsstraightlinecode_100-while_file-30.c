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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch30100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 256;
unsigned long int var_1_8 = 3645380125;
float var_1_11 = 0.625;
float var_1_12 = 31.2;
float var_1_13 = 0.0;
float var_1_14 = 32.8;
unsigned short int var_1_15 = 64;
signed char var_1_17 = -16;
signed char var_1_18 = 64;
signed char var_1_19 = 16;
signed char var_1_20 = 32;
signed char var_1_21 = 0;
unsigned char var_1_22 = 50;
unsigned short int var_1_23 = 32;
unsigned char var_1_24 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 16;
float var_1_33 = 10.5;
float var_1_34 = 9.75;
float var_1_35 = 3.6;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 10;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_15 = 64;
unsigned char last_1_var_1_22 = 50;
unsigned short int last_1_var_1_23 = 32;
unsigned char last_1_var_1_24 = 0;
unsigned char last_1_var_1_32 = 16;
float last_1_var_1_35 = 3.6;
unsigned char last_1_var_1_36 = 0;
unsigned char last_1_var_1_40 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch30100_while
	if (! last_1_var_1_40) {
		if (last_1_var_1_40) {
			var_1_24 = ((last_1_var_1_40 || last_1_var_1_24) && (! (last_1_var_1_40 || var_1_29)));
		} else {
			var_1_24 = (var_1_30 || var_1_31);
		}
	} else {
		var_1_24 = var_1_29;
	}


	// From: Req6Batch30100_while
	if (63.25f != last_1_var_1_35) {
		var_1_23 = (max (var_1_21 , var_1_20));
	} else {
		var_1_23 = (((65440 - var_1_20) - last_1_var_1_22) - var_1_21);
	}


	// From: Req11Batch30100_while
	signed long int stepLocal_4 = last_1_var_1_15;
	signed long int stepLocal_3 = last_1_var_1_15 + (last_1_var_1_32 | var_1_21);
	unsigned char stepLocal_2 = var_1_31;
	if ((last_1_var_1_24 && (last_1_var_1_22 <= last_1_var_1_36)) || stepLocal_2) {
		if (last_1_var_1_15 <= stepLocal_4) {
			if (last_1_var_1_40) {
				var_1_36 = (min ((abs (var_1_20)) , var_1_21));
			} else {
				var_1_36 = (var_1_37 + (min (var_1_21 , var_1_20)));
			}
		} else {
			if (last_1_var_1_15 != stepLocal_3) {
				var_1_36 = (max (var_1_21 , (var_1_20 + var_1_37)));
			}
		}
	} else {
		var_1_36 = (var_1_39 - 2);
	}


	// From: Req2Batch30100_while
	var_1_11 = ((127.25f + var_1_12) - (var_1_13 - var_1_14));


	// From: Req8Batch30100_while
	if (var_1_14 < var_1_13) {
		if (31.875f <= var_1_12) {
			var_1_32 = var_1_20;
		}
	}


	// From: Req12Batch30100_while
	if (var_1_24) {
		var_1_40 = ((var_1_8 == var_1_32) && (var_1_30 && (! var_1_29)));
	} else {
		if (var_1_24) {
			var_1_40 = (var_1_29 && var_1_30);
		} else {
			var_1_40 = 0;
		}
	}


	// From: Req5Batch30100_while
	if ((last_1_var_1_36 | last_1_var_1_23) != -128) {
		var_1_22 = (max (var_1_20 , 8));
	}


	// From: Req3Batch30100_while
	unsigned char stepLocal_0 = var_1_36;
	if (last_1_var_1_15 > (max (last_1_var_1_15 , var_1_36))) {
		if (stepLocal_0 >= last_1_var_1_15) {
			var_1_15 = var_1_32;
		}
	}


	// From: Req9Batch30100_while
	if ((- var_1_8) == (var_1_23 * var_1_15)) {
		var_1_33 = var_1_14;
	} else {
		var_1_33 = ((6.7886887876129004E18f - var_1_12) - (var_1_14 + var_1_34));
	}


	// From: Req1Batch30100_while
	if (var_1_23 == var_1_22) {
		var_1_1 = (max (var_1_36 , (max ((min (var_1_32 , var_1_15)) , var_1_22))));
	} else {
		var_1_1 = (var_1_8 - (max (var_1_36 , var_1_23)));
	}


	// From: Req10Batch30100_while
	unsigned long int stepLocal_1 = var_1_1;
	if (var_1_23 == stepLocal_1) {
		var_1_35 = (var_1_14 - (var_1_13 - var_1_34));
	}


	// From: Req4Batch30100_while
	if (var_1_35 >= var_1_13) {
		var_1_17 = var_1_18;
	} else {
		var_1_17 = (var_1_19 - (64 - (min (var_1_20 , var_1_21))));
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 4611686.018427382800e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_40 = var_1_40;
}

int property() {
	return ((((((((((((var_1_23 == var_1_22) ? (var_1_1 == ((unsigned long int) (max (var_1_36 , (max ((min (var_1_32 , var_1_15)) , var_1_22)))))) : (var_1_1 == ((unsigned long int) (var_1_8 - (max (var_1_36 , var_1_23)))))) && (var_1_11 == ((float) ((127.25f + var_1_12) - (var_1_13 - var_1_14))))) && ((last_1_var_1_15 > (max (last_1_var_1_15 , var_1_36))) ? ((var_1_36 >= last_1_var_1_15) ? (var_1_15 == ((unsigned short int) var_1_32)) : 1) : 1)) && ((var_1_35 >= var_1_13) ? (var_1_17 == ((signed char) var_1_18)) : (var_1_17 == ((signed char) (var_1_19 - (64 - (min (var_1_20 , var_1_21)))))))) && (((last_1_var_1_36 | last_1_var_1_23) != -128) ? (var_1_22 == ((unsigned char) (max (var_1_20 , 8)))) : 1)) && ((63.25f != last_1_var_1_35) ? (var_1_23 == ((unsigned short int) (max (var_1_21 , var_1_20)))) : (var_1_23 == ((unsigned short int) (((65440 - var_1_20) - last_1_var_1_22) - var_1_21))))) && ((! last_1_var_1_40) ? (last_1_var_1_40 ? (var_1_24 == ((unsigned char) ((last_1_var_1_40 || last_1_var_1_24) && (! (last_1_var_1_40 || var_1_29))))) : (var_1_24 == ((unsigned char) (var_1_30 || var_1_31)))) : (var_1_24 == ((unsigned char) var_1_29)))) && ((var_1_14 < var_1_13) ? ((31.875f <= var_1_12) ? (var_1_32 == ((unsigned char) var_1_20)) : 1) : 1)) && (((- var_1_8) == (var_1_23 * var_1_15)) ? (var_1_33 == ((float) var_1_14)) : (var_1_33 == ((float) ((6.7886887876129004E18f - var_1_12) - (var_1_14 + var_1_34)))))) && ((var_1_23 == var_1_1) ? (var_1_35 == ((float) (var_1_14 - (var_1_13 - var_1_34)))) : 1)) && (((last_1_var_1_24 && (last_1_var_1_22 <= last_1_var_1_36)) || var_1_31) ? ((last_1_var_1_15 <= last_1_var_1_15) ? (last_1_var_1_40 ? (var_1_36 == ((unsigned char) (min ((abs (var_1_20)) , var_1_21)))) : (var_1_36 == ((unsigned char) (var_1_37 + (min (var_1_21 , var_1_20)))))) : ((last_1_var_1_15 != (last_1_var_1_15 + (last_1_var_1_32 | var_1_21))) ? (var_1_36 == ((unsigned char) (max (var_1_21 , (var_1_20 + var_1_37))))) : 1)) : (var_1_36 == ((unsigned char) (var_1_39 - 2))))) && (var_1_24 ? (var_1_40 == ((unsigned char) ((var_1_8 == var_1_32) && (var_1_30 && (! var_1_29))))) : (var_1_24 ? (var_1_40 == ((unsigned char) (var_1_29 && var_1_30))) : (var_1_40 == ((unsigned char) 0))))
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

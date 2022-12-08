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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch99100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 8;
unsigned char var_1_4 = 200;
unsigned char var_1_5 = 0;
unsigned long int var_1_6 = 1000000;
signed short int var_1_7 = -1;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 128;
unsigned char var_1_12 = 1;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 25;
unsigned char var_1_16 = 1;
float var_1_17 = 1.25;
float var_1_18 = 3.5;
float var_1_19 = 127.45;
float var_1_20 = 1.5;
float var_1_21 = 24.4;
float var_1_22 = 0.8;
unsigned char var_1_23 = 4;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 8;
unsigned char var_1_26 = 64;
signed short int var_1_27 = 256;
unsigned char var_1_28 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 8;
unsigned long int last_1_var_1_6 = 1000000;
signed short int last_1_var_1_7 = -1;
unsigned char last_1_var_1_12 = 1;
float last_1_var_1_17 = 1.25;
unsigned char last_1_var_1_23 = 4;
unsigned char last_1_var_1_25 = 8;
unsigned char last_1_var_1_28 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch99100_1loop
	signed long int stepLocal_5 = last_1_var_1_7;
	signed long int stepLocal_4 = last_1_var_1_7;
	signed long int stepLocal_3 = last_1_var_1_1;
	if (stepLocal_4 > last_1_var_1_6) {
		if (stepLocal_5 < last_1_var_1_25) {
			if (stepLocal_3 <= last_1_var_1_12) {
				var_1_12 = ((min (var_1_4 , var_1_14)) - var_1_5);
			} else {
				var_1_12 = ((min (var_1_5 , var_1_15)) + var_1_16);
			}
		} else {
			var_1_12 = var_1_16;
		}
	}


	// From: Req11Batch99100_1loop
	if (last_1_var_1_25 < last_1_var_1_1) {
		if ((- last_1_var_1_17) < (abs (var_1_22))) {
			var_1_28 = ((last_1_var_1_28 || var_1_9) && var_1_30);
		} else {
			var_1_28 = var_1_30;
		}
	} else {
		var_1_28 = var_1_31;
	}


	// From: Req9Batch99100_1loop
	if (var_1_21 != var_1_19) {
		if (var_1_28) {
			var_1_25 = (min (var_1_24 , (abs (var_1_16))));
		} else {
			var_1_25 = (max (4 , var_1_5));
		}
	} else {
		var_1_25 = (var_1_14 - (var_1_26 - var_1_24));
	}


	// From: Req1Batch99100_1loop
	unsigned char stepLocal_0 = ! var_1_28;
	if (stepLocal_0 && var_1_28) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		if (var_1_28) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = 1;
		}
	}


	// From: Req3Batch99100_1loop
	var_1_7 = var_1_5;


	// From: Req4Batch99100_1loop
	unsigned char stepLocal_2 = var_1_12;
	if (stepLocal_2 == (max (var_1_7 , var_1_12))) {
		if (! (var_1_12 > (min (var_1_7 , var_1_4)))) {
			var_1_8 = var_1_9;
		}
	}


	// From: Req5Batch99100_1loop
	if (var_1_12 < var_1_12) {
		var_1_10 = (var_1_25 - (min (var_1_5 , 16)));
	} else {
		if (var_1_28) {
			var_1_10 = var_1_4;
		} else {
			var_1_10 = var_1_25;
		}
	}


	// From: Req10Batch99100_1loop
	unsigned char stepLocal_10 = var_1_9;
	signed short int stepLocal_9 = var_1_10;
	unsigned char stepLocal_8 = var_1_15;
	if (var_1_28) {
		var_1_27 = var_1_5;
	} else {
		if (var_1_28) {
			if (var_1_10 <= stepLocal_8) {
				var_1_27 = -10;
			}
		} else {
			if (stepLocal_9 <= (var_1_4 - var_1_5)) {
				if (stepLocal_10 || (var_1_19 < var_1_20)) {
					var_1_27 = ((min (1 , var_1_4)) + (max (var_1_14 , var_1_10)));
				}
			}
		}
	}


	// From: Req2Batch99100_1loop
	unsigned char stepLocal_1 = var_1_4 > 2;
	if (var_1_28) {
		var_1_6 = (var_1_4 + var_1_27);
	} else {
		if (stepLocal_1 && var_1_8) {
			var_1_6 = (max (var_1_27 , var_1_4));
		}
	}


	// From: Req8Batch99100_1loop
	signed short int stepLocal_7 = var_1_27;
	if (var_1_8) {
		if (stepLocal_7 <= last_1_var_1_23) {
			var_1_23 = 10;
		} else {
			var_1_23 = ((200 - var_1_24) - 64);
		}
	}


	// From: Req7Batch99100_1loop
	signed short int stepLocal_6 = var_1_10;
	if (var_1_8) {
		if (stepLocal_6 <= var_1_23) {
			var_1_17 = ((min ((1.0000000000000012E14f + var_1_18) , var_1_19)) + var_1_20);
		} else {
			var_1_17 = (var_1_21 - var_1_22);
		}
	} else {
		var_1_17 = var_1_21;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 63);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return ((((((((((((! var_1_28) && var_1_28) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_28 ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) 1)))) && (var_1_28 ? (var_1_6 == ((unsigned long int) (var_1_4 + var_1_27))) : (((var_1_4 > 2) && var_1_8) ? (var_1_6 == ((unsigned long int) (max (var_1_27 , var_1_4)))) : 1))) && (var_1_7 == ((signed short int) var_1_5))) && ((var_1_12 == (max (var_1_7 , var_1_12))) ? ((! (var_1_12 > (min (var_1_7 , var_1_4)))) ? (var_1_8 == ((unsigned char) var_1_9)) : 1) : 1)) && ((var_1_12 < var_1_12) ? (var_1_10 == ((signed short int) (var_1_25 - (min (var_1_5 , 16))))) : (var_1_28 ? (var_1_10 == ((signed short int) var_1_4)) : (var_1_10 == ((signed short int) var_1_25))))) && ((last_1_var_1_7 > last_1_var_1_6) ? ((last_1_var_1_7 < last_1_var_1_25) ? ((last_1_var_1_1 <= last_1_var_1_12) ? (var_1_12 == ((unsigned char) ((min (var_1_4 , var_1_14)) - var_1_5))) : (var_1_12 == ((unsigned char) ((min (var_1_5 , var_1_15)) + var_1_16)))) : (var_1_12 == ((unsigned char) var_1_16))) : 1)) && (var_1_8 ? ((var_1_10 <= var_1_23) ? (var_1_17 == ((float) ((min ((1.0000000000000012E14f + var_1_18) , var_1_19)) + var_1_20))) : (var_1_17 == ((float) (var_1_21 - var_1_22)))) : (var_1_17 == ((float) var_1_21)))) && (var_1_8 ? ((var_1_27 <= last_1_var_1_23) ? (var_1_23 == ((unsigned char) 10)) : (var_1_23 == ((unsigned char) ((200 - var_1_24) - 64)))) : 1)) && ((var_1_21 != var_1_19) ? (var_1_28 ? (var_1_25 == ((unsigned char) (min (var_1_24 , (abs (var_1_16)))))) : (var_1_25 == ((unsigned char) (max (4 , var_1_5))))) : (var_1_25 == ((unsigned char) (var_1_14 - (var_1_26 - var_1_24)))))) && (var_1_28 ? (var_1_27 == ((signed short int) var_1_5)) : (var_1_28 ? ((var_1_10 <= var_1_15) ? (var_1_27 == ((signed short int) -10)) : 1) : ((var_1_10 <= (var_1_4 - var_1_5)) ? ((var_1_9 || (var_1_19 < var_1_20)) ? (var_1_27 == ((signed short int) ((min (1 , var_1_4)) + (max (var_1_14 , var_1_10))))) : 1) : 1)))) && ((last_1_var_1_25 < last_1_var_1_1) ? (((- last_1_var_1_17) < (abs (var_1_22))) ? (var_1_28 == ((unsigned char) ((last_1_var_1_28 || var_1_9) && var_1_30))) : (var_1_28 == ((unsigned char) var_1_30))) : (var_1_28 == ((unsigned char) var_1_31)))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}

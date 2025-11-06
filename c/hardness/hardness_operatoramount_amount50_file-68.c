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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch68Amount50.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 10;
unsigned char var_1_3 = 25;
unsigned char var_1_4 = 16;
unsigned char var_1_5 = 0;
float var_1_7 = 0.5;
unsigned char var_1_9 = 1;
unsigned short int var_1_10 = 2;
unsigned short int var_1_11 = 128;
unsigned char var_1_12 = 0;
float var_1_14 = 16.5;
double var_1_15 = 8.9;
double var_1_16 = 31.996;
double var_1_17 = 15.5;
double var_1_18 = 8.5;
float var_1_19 = 0.8;
signed short int var_1_20 = 4;
float var_1_21 = 50.6;
float var_1_22 = 63.8;
unsigned char var_1_23 = 1;
signed char var_1_24 = 1;
signed char var_1_25 = 5;
signed char var_1_26 = 4;
signed char var_1_27 = 1;
unsigned long int var_1_28 = 2;
unsigned long int var_1_29 = 1;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_28 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch68Amount50
	if ((var_1_15 - var_1_16) == (var_1_17 - var_1_18)) {
		var_1_14 = var_1_19;
	}


	// From: Req4Batch68Amount50
	if (! (var_1_7 > var_1_14)) {
		if (var_1_12) {
			var_1_23 = var_1_5;
		}
	}


	// From: Req5Batch68Amount50
	if (var_1_23 || var_1_12) {
		if (var_1_9) {
			var_1_24 = (var_1_25 - (var_1_26 + var_1_27));
		}
	}


	// From: Req6Batch68Amount50
	if (var_1_14 > var_1_22) {
		if (! var_1_23) {
			var_1_28 = (var_1_27 + last_1_var_1_28);
		} else {
			var_1_28 = var_1_29;
		}
	}


	// From: Req1Batch68Amount50
	unsigned char stepLocal_2 = var_1_2;
	signed long int stepLocal_1 = var_1_3 ^ var_1_4;
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2 <= stepLocal_1) {
		var_1_1 = (! var_1_5);
	} else {
		if ((var_1_14 + (- var_1_14)) >= var_1_14) {
			if ((var_1_3 / (min (var_1_10 , var_1_11))) > stepLocal_2) {
				var_1_1 = (var_1_9 || (var_1_5 || var_1_12));
			} else {
				if ((var_1_24 * var_1_4) < stepLocal_0) {
					var_1_1 = var_1_12;
				} else {
					var_1_1 = var_1_9;
				}
			}
		} else {
			var_1_1 = var_1_12;
		}
	}


	// From: Req3Batch68Amount50
	if (((min (var_1_17 , var_1_16)) - (var_1_21 + var_1_22)) >= 63.6) {
		var_1_20 = var_1_28;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65535);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65535);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427388000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427388000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_28 = var_1_28;
}

int property(void) {
	return ((((((var_1_2 <= (var_1_3 ^ var_1_4)) ? (var_1_1 == ((unsigned char) (! var_1_5))) : (((var_1_14 + (- var_1_14)) >= var_1_14) ? (((var_1_3 / (min (var_1_10 , var_1_11))) > var_1_2) ? (var_1_1 == ((unsigned char) (var_1_9 || (var_1_5 || var_1_12)))) : (((var_1_24 * var_1_4) < var_1_3) ? (var_1_1 == ((unsigned char) var_1_12)) : (var_1_1 == ((unsigned char) var_1_9)))) : (var_1_1 == ((unsigned char) var_1_12)))) && (((var_1_15 - var_1_16) == (var_1_17 - var_1_18)) ? (var_1_14 == ((float) var_1_19)) : 1)) && ((((min (var_1_17 , var_1_16)) - (var_1_21 + var_1_22)) >= 63.6) ? (var_1_20 == ((signed short int) var_1_28)) : 1)) && ((! (var_1_7 > var_1_14)) ? (var_1_12 ? (var_1_23 == ((unsigned char) var_1_5)) : 1) : 1)) && ((var_1_23 || var_1_12) ? (var_1_9 ? (var_1_24 == ((signed char) (var_1_25 - (var_1_26 + var_1_27)))) : 1) : 1)) && ((var_1_14 > var_1_22) ? ((! var_1_23) ? (var_1_28 == ((unsigned long int) (var_1_27 + last_1_var_1_28))) : (var_1_28 == ((unsigned long int) var_1_29))) : 1)
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

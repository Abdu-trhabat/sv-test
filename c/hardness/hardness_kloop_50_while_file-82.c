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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8250_while.c", 13, "reach_error"); }
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
double var_1_1 = 10.8;
double var_1_4 = 5.5;
float var_1_5 = 49.2;
double var_1_6 = 15.1;
signed char var_1_7 = 4;
signed char var_1_8 = 32;
signed char var_1_9 = 2;
signed char var_1_10 = 2;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 1;
signed char var_1_17 = -2;
unsigned short int var_1_19 = 25;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 56857;
unsigned char var_1_22 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_19 = 25;
unsigned char last_1_var_1_20 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch8250_while
	if (last_1_var_1_20) {
		var_1_13 = (min (var_1_12 , var_1_15));
	} else {
		if (last_1_var_1_20) {
			var_1_13 = var_1_12;
		}
	}


	// From: Req3Batch8250_while
	var_1_11 = (200 - var_1_12);


	// From: Req1Batch8250_while
	unsigned char stepLocal_0 = var_1_13;
	if (stepLocal_0 == var_1_11) {
		var_1_1 = (var_1_4 - 4.531);
	} else {
		if ((var_1_4 - var_1_5) > var_1_6) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = 200.5;
		}
	}


	// From: Req2Batch8250_while
	if (var_1_5 < var_1_1) {
		var_1_7 = ((max (var_1_8 , -8)) + ((min (var_1_9 , var_1_10)) + 2));
	}


	// From: Req6Batch8250_while
	if (var_1_14 || var_1_16) {
		if (var_1_8 > var_1_13) {
			var_1_19 = ((max (var_1_12 , var_1_15)) + last_1_var_1_19);
		} else {
			var_1_19 = var_1_11;
		}
	} else {
		var_1_19 = var_1_11;
	}


	// From: Req7Batch8250_while
	if (var_1_19 <= (var_1_21 - (max (var_1_11 , 8)))) {
		if (var_1_16) {
			var_1_20 = var_1_22;
		}
	}


	// From: Req5Batch8250_while
	signed long int stepLocal_1 = min ((var_1_13 * var_1_12) , var_1_11);
	if (var_1_1 <= (var_1_5 - var_1_4)) {
		var_1_17 = var_1_9;
	} else {
		if (! var_1_20) {
			if (var_1_11 > stepLocal_1) {
				var_1_17 = var_1_10;
			} else {
				var_1_17 = (min (var_1_9 , var_1_8));
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -31);
	assume_abort_if_not(var_1_9 <= 32);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65535);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	return (((((((var_1_13 == var_1_11) ? (var_1_1 == ((double) (var_1_4 - 4.531))) : (((var_1_4 - var_1_5) > var_1_6) ? (var_1_1 == ((double) var_1_4)) : (var_1_1 == ((double) 200.5)))) && ((var_1_5 < var_1_1) ? (var_1_7 == ((signed char) ((max (var_1_8 , -8)) + ((min (var_1_9 , var_1_10)) + 2)))) : 1)) && (var_1_11 == ((unsigned char) (200 - var_1_12)))) && (last_1_var_1_20 ? (var_1_13 == ((unsigned char) (min (var_1_12 , var_1_15)))) : (last_1_var_1_20 ? (var_1_13 == ((unsigned char) var_1_12)) : 1))) && ((var_1_1 <= (var_1_5 - var_1_4)) ? (var_1_17 == ((signed char) var_1_9)) : ((! var_1_20) ? ((var_1_11 > (min ((var_1_13 * var_1_12) , var_1_11))) ? (var_1_17 == ((signed char) var_1_10)) : (var_1_17 == ((signed char) (min (var_1_9 , var_1_8))))) : 1))) && ((var_1_14 || var_1_16) ? ((var_1_8 > var_1_13) ? (var_1_19 == ((unsigned short int) ((max (var_1_12 , var_1_15)) + last_1_var_1_19))) : (var_1_19 == ((unsigned short int) var_1_11))) : (var_1_19 == ((unsigned short int) var_1_11)))) && ((var_1_19 <= (var_1_21 - (max (var_1_11 , 8)))) ? (var_1_16 ? (var_1_20 == ((unsigned char) var_1_22)) : 1) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch31Amount50.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 2;
unsigned char var_1_3 = 5;
unsigned char var_1_4 = 50;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 8;
unsigned long int var_1_9 = 1;
signed char var_1_10 = 4;
signed char var_1_11 = 50;
signed char var_1_12 = 5;
signed char var_1_13 = 16;
signed char var_1_14 = 5;
signed char var_1_15 = 4;
unsigned char var_1_16 = 128;
unsigned short int var_1_17 = 10;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 8;
unsigned char last_1_var_1_18 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch31Amount50
	if ((last_1_var_1_8 * var_1_7) >= var_1_3) {
		var_1_9 = (5u + var_1_4);
	} else {
		if (last_1_var_1_18) {
			var_1_9 = var_1_4;
		} else {
			var_1_9 = last_1_var_1_8;
		}
	}


	// From: Req7Batch31Amount50
	signed char stepLocal_2 = var_1_12;
	if (stepLocal_2 <= (var_1_9 / 64)) {
		var_1_18 = (! var_1_19);
	} else {
		if (var_1_19) {
			var_1_18 = var_1_20;
		} else {
			var_1_18 = 0;
		}
	}


	// From: Req1Batch31Amount50
	if (var_1_18) {
		var_1_1 = (max ((abs (var_1_3)) , var_1_4));
	} else {
		var_1_1 = ((var_1_5 + var_1_6) - var_1_7);
	}


	// From: Req2Batch31Amount50
	var_1_8 = (min ((var_1_5 + (64 - 16)) , 64));


	// From: Req4Batch31Amount50
	if ((var_1_6 + var_1_4) >= var_1_5) {
		if (var_1_6 > var_1_9) {
			var_1_10 = (((abs (var_1_11)) + (var_1_12 + var_1_13)) - (max (var_1_14 , var_1_15)));
		} else {
			var_1_10 = (max ((min (var_1_14 , var_1_12)) , var_1_15));
		}
	}


	// From: Req5Batch31Amount50
	signed long int stepLocal_1 = 16;
	unsigned char stepLocal_0 = (-128 | var_1_12) >= (abs (var_1_4));
	if (stepLocal_0 || var_1_18) {
		if (var_1_3 <= stepLocal_1) {
			var_1_16 = var_1_12;
		} else {
			var_1_16 = var_1_6;
		}
	} else {
		var_1_16 = var_1_12;
	}


	// From: Req6Batch31Amount50
	var_1_17 = var_1_13;
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 64);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	return ((((((var_1_18 ? (var_1_1 == ((unsigned char) (max ((abs (var_1_3)) , var_1_4)))) : (var_1_1 == ((unsigned char) ((var_1_5 + var_1_6) - var_1_7)))) && (var_1_8 == ((unsigned char) (min ((var_1_5 + (64 - 16)) , 64))))) && (((last_1_var_1_8 * var_1_7) >= var_1_3) ? (var_1_9 == ((unsigned long int) (5u + var_1_4))) : (last_1_var_1_18 ? (var_1_9 == ((unsigned long int) var_1_4)) : (var_1_9 == ((unsigned long int) last_1_var_1_8))))) && (((var_1_6 + var_1_4) >= var_1_5) ? ((var_1_6 > var_1_9) ? (var_1_10 == ((signed char) (((abs (var_1_11)) + (var_1_12 + var_1_13)) - (max (var_1_14 , var_1_15))))) : (var_1_10 == ((signed char) (max ((min (var_1_14 , var_1_12)) , var_1_15))))) : 1)) && ((((-128 | var_1_12) >= (abs (var_1_4))) || var_1_18) ? ((var_1_3 <= 16) ? (var_1_16 == ((unsigned char) var_1_12)) : (var_1_16 == ((unsigned char) var_1_6))) : (var_1_16 == ((unsigned char) var_1_12)))) && (var_1_17 == ((unsigned short int) var_1_13))) && ((var_1_12 <= (var_1_9 / 64)) ? (var_1_18 == ((unsigned char) (! var_1_19))) : (var_1_19 ? (var_1_18 == ((unsigned char) var_1_20)) : (var_1_18 == ((unsigned char) 0))))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109normal.c", 13, "reach_error"); }
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
signed short int var_1_1 = 2;
signed short int var_1_4 = 256;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 32;
unsigned char var_1_7 = 16;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 64;
double var_1_11 = 63.5;
double var_1_12 = 63.5;
unsigned char var_1_13 = 1;
signed long int var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned long int var_1_16 = 8;
unsigned long int var_1_17 = 3232261878;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 128;
unsigned short int var_1_20 = 16;
unsigned char var_1_21 = 128;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_16 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch109normal
	unsigned long int stepLocal_0 = last_1_var_1_16;
	if (! var_1_5) {
		if ((var_1_8 >> var_1_14) <= stepLocal_0) {
			var_1_13 = var_1_15;
		}
	}


	// From: Req3Batch109normal
	if (var_1_13) {
		var_1_10 = var_1_8;
	} else {
		var_1_10 = (abs (abs (-4 + -32)));
	}


	// From: Req2Batch109normal
	var_1_6 = (max (var_1_7 , ((10 + var_1_8) + var_1_9)));


	// From: Req7Batch109normal
	signed long int stepLocal_1 = var_1_14 * 5;
	if ((16 + (var_1_6 * var_1_8)) <= stepLocal_1) {
		var_1_18 = (var_1_19 - var_1_9);
	}


	// From: Req8Batch109normal
	var_1_20 = var_1_19;


	// From: Req9Batch109normal
	var_1_21 = var_1_9;


	// From: Req1Batch109normal
	if (var_1_6 < var_1_18) {
		var_1_1 = (min ((var_1_4 - 4) , var_1_18));
	} else {
		if ((var_1_6 < var_1_4) || var_1_13) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req4Batch109normal
	if (var_1_1 <= (var_1_9 ^ var_1_20)) {
		if (var_1_13) {
			var_1_11 = var_1_12;
		}
	}


	// From: Req6Batch109normal
	if (var_1_13) {
		var_1_16 = (var_1_17 - (max (var_1_9 , (var_1_20 + var_1_14))));
	} else {
		if ((min (5u , var_1_10)) > var_1_14) {
			var_1_16 = var_1_7;
		} else {
			var_1_16 = var_1_17;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 7);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	return (((((((((var_1_6 < var_1_18) ? (var_1_1 == ((signed short int) (min ((var_1_4 - 4) , var_1_18)))) : (((var_1_6 < var_1_4) || var_1_13) ? (var_1_1 == ((signed short int) var_1_6)) : (var_1_1 == ((signed short int) var_1_4)))) && (var_1_6 == ((unsigned char) (max (var_1_7 , ((10 + var_1_8) + var_1_9)))))) && (var_1_13 ? (var_1_10 == ((signed long int) var_1_8)) : (var_1_10 == ((signed long int) (abs (abs (-4 + -32))))))) && ((var_1_1 <= (var_1_9 ^ var_1_20)) ? (var_1_13 ? (var_1_11 == ((double) var_1_12)) : 1) : 1)) && ((! var_1_5) ? (((var_1_8 >> var_1_14) <= last_1_var_1_16) ? (var_1_13 == ((unsigned char) var_1_15)) : 1) : 1)) && (var_1_13 ? (var_1_16 == ((unsigned long int) (var_1_17 - (max (var_1_9 , (var_1_20 + var_1_14)))))) : (((min (5u , var_1_10)) > var_1_14) ? (var_1_16 == ((unsigned long int) var_1_7)) : (var_1_16 == ((unsigned long int) var_1_17))))) && (((16 + (var_1_6 * var_1_8)) <= (var_1_14 * 5)) ? (var_1_18 == ((unsigned char) (var_1_19 - var_1_9))) : 1)) && (var_1_20 == ((unsigned short int) var_1_19))) && (var_1_21 == ((unsigned char) var_1_9))
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

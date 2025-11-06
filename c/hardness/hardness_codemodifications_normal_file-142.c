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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142normal.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 1;
double var_1_2 = 100.85;
double var_1_3 = 10000000000000.64;
unsigned long int var_1_4 = 1;
signed long int var_1_5 = 1;
unsigned char var_1_6 = 0;
signed long int var_1_7 = -1;
signed long int var_1_8 = 500;
signed char var_1_9 = 64;
signed long int var_1_10 = 5;
signed long int var_1_11 = 256;
signed char var_1_12 = 1;
unsigned long int var_1_13 = 1000000;
unsigned long int var_1_14 = 25;
unsigned long int var_1_15 = 10;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 256;
unsigned long int var_1_18 = 1000000000;
unsigned long int var_1_19 = 2;
unsigned long int var_1_20 = 4147625730;
unsigned long int var_1_21 = 1095643256;
float var_1_22 = 10000000.8;
float var_1_23 = 499.5;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch142normal
	if (var_1_2 < (max (63.875 , var_1_3))) {
		if (! (var_1_3 > var_1_2)) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = 32u;
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch142normal
	if (var_1_6) {
		var_1_5 = (max (var_1_7 , var_1_8));
	} else {
		if (var_1_3 != var_1_2) {
			var_1_5 = var_1_8;
		} else {
			var_1_5 = var_1_7;
		}
	}


	// From: Req3Batch142normal
	if (-128 <= (var_1_10 - (var_1_11 + 50))) {
		var_1_9 = var_1_12;
	}


	// From: Req4Batch142normal
	if ((max (var_1_7 , var_1_8)) >= (var_1_11 >> var_1_14)) {
		var_1_13 = var_1_4;
	}


	// From: Req5Batch142normal
	var_1_15 = (10u + (var_1_14 + var_1_16));


	// From: Req6Batch142normal
	if (-10 > var_1_12) {
		var_1_17 = ((var_1_11 + (var_1_18 - var_1_14)) + (10000u + var_1_16));
	} else {
		var_1_17 = var_1_18;
	}


	// From: Req7Batch142normal
	if ((var_1_13 >= (var_1_20 - 8u)) || (! var_1_6)) {
		var_1_19 = (var_1_14 + (var_1_21 - var_1_16));
	} else {
		var_1_19 = (abs (max (var_1_18 , 0u)));
	}


	// From: Req8Batch142normal
	var_1_22 = var_1_23;


	// From: Req9Batch142normal
	var_1_24 = var_1_25;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741824);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 30);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 536870911);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967295);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 < (max (63.875 , var_1_3))) ? ((! (var_1_3 > var_1_2)) ? (var_1_1 == ((unsigned long int) var_1_4)) : (var_1_1 == ((unsigned long int) 32u))) : (var_1_1 == ((unsigned long int) var_1_4))) && (var_1_6 ? (var_1_5 == ((signed long int) (max (var_1_7 , var_1_8)))) : ((var_1_3 != var_1_2) ? (var_1_5 == ((signed long int) var_1_8)) : (var_1_5 == ((signed long int) var_1_7))))) && ((-128 <= (var_1_10 - (var_1_11 + 50))) ? (var_1_9 == ((signed char) var_1_12)) : 1)) && (((max (var_1_7 , var_1_8)) >= (var_1_11 >> var_1_14)) ? (var_1_13 == ((unsigned long int) var_1_4)) : 1)) && (var_1_15 == ((unsigned long int) (10u + (var_1_14 + var_1_16))))) && ((-10 > var_1_12) ? (var_1_17 == ((unsigned long int) ((var_1_11 + (var_1_18 - var_1_14)) + (10000u + var_1_16)))) : (var_1_17 == ((unsigned long int) var_1_18)))) && (((var_1_13 >= (var_1_20 - 8u)) || (! var_1_6)) ? (var_1_19 == ((unsigned long int) (var_1_14 + (var_1_21 - var_1_16)))) : (var_1_19 == ((unsigned long int) (abs (max (var_1_18 , 0u))))))) && (var_1_22 == ((float) var_1_23))) && (var_1_24 == ((unsigned char) var_1_25))
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

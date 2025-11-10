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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch75normal.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 32;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 5;
signed long int var_1_5 = 1;
signed long int var_1_6 = 100;
unsigned char var_1_7 = 32;
signed short int var_1_8 = 1;
double var_1_9 = 9.3;
double var_1_10 = 31.2;
unsigned char var_1_11 = 0;
signed char var_1_12 = 1;
signed char var_1_13 = -32;
signed char var_1_14 = -32;
signed char var_1_15 = -50;
signed char var_1_16 = -16;
float var_1_17 = 99999999999999.2;
float var_1_18 = 4.9;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 32;
signed short int last_1_var_1_8 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch75normal
	signed long int stepLocal_0 = max (var_1_5 , var_1_6);
	if (((last_1_var_1_1 * last_1_var_1_8) * last_1_var_1_8) < stepLocal_0) {
		var_1_1 = var_1_7;
	} else {
		var_1_1 = 10;
	}


	// From: Req2Batch75normal
	if ((- var_1_9) >= var_1_10) {
		if (var_1_11) {
			var_1_8 = (abs ((min (var_1_2 , last_1_var_1_8)) + (max (var_1_1 , var_1_3))));
		} else {
			var_1_8 = (var_1_3 + var_1_1);
		}
	}


	// From: Req3Batch75normal
	if (2.8f == var_1_10) {
		var_1_12 = ((max ((max (var_1_13 , 16)) , var_1_14)) + var_1_15);
	}


	// From: Req4Batch75normal
	var_1_16 = (min (-4 , var_1_14));


	// From: Req5Batch75normal
	if (var_1_1 > (var_1_8 + var_1_16)) {
		var_1_17 = var_1_18;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
}

int property(void) {
	return (((((((last_1_var_1_1 * last_1_var_1_8) * last_1_var_1_8) < (max (var_1_5 , var_1_6))) ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) 10))) && (((- var_1_9) >= var_1_10) ? (var_1_11 ? (var_1_8 == ((signed short int) (abs ((min (var_1_2 , last_1_var_1_8)) + (max (var_1_1 , var_1_3)))))) : (var_1_8 == ((signed short int) (var_1_3 + var_1_1)))) : 1)) && ((2.8f == var_1_10) ? (var_1_12 == ((signed char) ((max ((max (var_1_13 , 16)) , var_1_14)) + var_1_15))) : 1)) && (var_1_16 == ((signed char) (min (-4 , var_1_14))))) && ((var_1_1 > (var_1_8 + var_1_16)) ? (var_1_17 == ((float) var_1_18)) : 1)
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

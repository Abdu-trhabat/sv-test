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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125has_floats.c", 13, "reach_error"); }
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
float var_1_1 = -16.0;
float var_1_4 = 32.0;
float var_1_5 = 32.0;
signed long int var_1_6 = 16;
float var_1_7 = 10.0;
signed long int var_1_8 = 1;
signed long int var_1_9 = 16;
signed long int var_1_10 = 128;
signed long int var_1_11 = -5;
signed short int var_1_12 = -25;
signed short int var_1_13 = 1000;
signed short int var_1_14 = 10000;
signed short int var_1_15 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_10 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch125has_floats
	if (var_1_4 < (var_1_5 / var_1_7)) {
		var_1_6 = (max (last_1_var_1_10 , ((var_1_8 + 4) - var_1_9)));
	} else {
		var_1_6 = var_1_8;
	}


	// From: Req3Batch125has_floats
	var_1_10 = (((var_1_6 + 4) - var_1_8) + (max (var_1_11 , -64)));


	// From: Req1Batch125has_floats
	signed long int stepLocal_0 = var_1_6;
	if ((32 * (var_1_6 | 4)) >= stepLocal_0) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req4Batch125has_floats
	unsigned long int stepLocal_1 = - (max (8u , var_1_9));
	if (stepLocal_1 <= var_1_8) {
		var_1_12 = (50 - ((32541 - var_1_13) - (var_1_14 - var_1_15)));
	} else {
		var_1_12 = 2;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	assume_abort_if_not(var_1_7 != 0.0F);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1073741823);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 8191);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 8191);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 8191);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
}

int property(void) {
	return (((((32 * (var_1_6 | 4)) >= var_1_6) ? (var_1_1 == ((float) (var_1_4 - var_1_5))) : (var_1_1 == ((float) var_1_5))) && ((var_1_4 < (var_1_5 / var_1_7)) ? (var_1_6 == ((signed long int) (max (last_1_var_1_10 , ((var_1_8 + 4) - var_1_9))))) : (var_1_6 == ((signed long int) var_1_8)))) && (var_1_10 == ((signed long int) (((var_1_6 + 4) - var_1_8) + (max (var_1_11 , -64)))))) && (((- (max (8u , var_1_9))) <= var_1_8) ? (var_1_12 == ((signed short int) (50 - ((32541 - var_1_13) - (var_1_14 - var_1_15))))) : (var_1_12 == ((signed short int) 2)))
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

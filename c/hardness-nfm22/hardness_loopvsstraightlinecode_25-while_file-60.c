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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6025_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 9999.6;
double var_1_2 = 64.25;
double var_1_3 = 31.2;
signed long int var_1_4 = 1;
float var_1_7 = 100.5;
float var_1_9 = 50.2;
float var_1_10 = 0.125;
float var_1_11 = 9999999999999.8;
float var_1_12 = 3.5;
unsigned short int var_1_13 = 0;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 9999.6;
unsigned short int last_1_var_1_13 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch6025_while
	if ((- last_1_var_1_13) >= last_1_var_1_13) {
		if (last_1_var_1_13 > last_1_var_1_13) {
			if (var_1_3 == last_1_var_1_1) {
				var_1_4 = last_1_var_1_13;
			} else {
				var_1_4 = last_1_var_1_13;
			}
		}
	}


	// From: Req4Batch6025_while
	if (-4 < var_1_4) {
		if (var_1_11 <= (24.6f * var_1_9)) {
			var_1_13 = var_1_4;
		}
	}


	// From: Req1Batch6025_while
	var_1_1 = (var_1_2 - var_1_3);


	// From: Req3Batch6025_while
	signed long int stepLocal_0 = var_1_13 + var_1_4;
	if (stepLocal_0 < var_1_4) {
		var_1_7 = (min ((var_1_3 - (var_1_9 + var_1_10)) , (var_1_11 + var_1_12)));
	} else {
		var_1_7 = var_1_11;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854765600e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
}

int property() {
	return (((var_1_1 == ((double) (var_1_2 - var_1_3))) && (((- last_1_var_1_13) >= last_1_var_1_13) ? ((last_1_var_1_13 > last_1_var_1_13) ? ((var_1_3 == last_1_var_1_1) ? (var_1_4 == ((signed long int) last_1_var_1_13)) : (var_1_4 == ((signed long int) last_1_var_1_13))) : 1) : 1)) && (((var_1_13 + var_1_4) < var_1_4) ? (var_1_7 == ((float) (min ((var_1_3 - (var_1_9 + var_1_10)) , (var_1_11 + var_1_12))))) : (var_1_7 == ((float) var_1_11)))) && ((-4 < var_1_4) ? ((var_1_11 <= (24.6f * var_1_9)) ? (var_1_13 == ((unsigned short int) var_1_4)) : 1) : 1)
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

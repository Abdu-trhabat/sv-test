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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch85Amount50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 1000;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
float var_1_7 = 0.6;
unsigned long int var_1_8 = 32;
unsigned long int var_1_9 = 32;
float var_1_11 = 5.5;
unsigned long int var_1_12 = 128;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
double var_1_18 = 1.8;
double var_1_19 = 4.5;
double var_1_20 = 15.5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 1000;
unsigned char last_1_var_1_5 = 1;
unsigned long int last_1_var_1_12 = 128;
unsigned char last_1_var_1_13 = 16;
unsigned long int last_1_var_1_15 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch85Amount50
	signed long int stepLocal_1 = last_1_var_1_13;
	signed long int stepLocal_0 = last_1_var_1_13;
	if (stepLocal_1 < ((- last_1_var_1_12) * 64)) {
		if (last_1_var_1_5) {
			var_1_1 = (abs (last_1_var_1_12));
		} else {
			if (-10000000 < stepLocal_0) {
				var_1_1 = (abs (max (last_1_var_1_12 , 5u)));
			} else {
				var_1_1 = 50u;
			}
		}
	}


	// From: Req2Batch85Amount50
	unsigned long int stepLocal_2 = last_1_var_1_15 + last_1_var_1_1;
	if (last_1_var_1_13 <= stepLocal_2) {
		var_1_5 = ((last_1_var_1_15 == last_1_var_1_13) && var_1_6);
	} else {
		var_1_5 = var_1_6;
	}


	// From: Req8Batch85Amount50
	unsigned char stepLocal_3 = var_1_5;
	if (stepLocal_3 || var_1_17) {
		var_1_18 = (((abs (var_1_19)) + var_1_20) - 63.6);
	}


	// From: Req5Batch85Amount50
	var_1_13 = (abs (var_1_14));


	// From: Req7Batch85Amount50
	var_1_16 = (var_1_6 && var_1_17);


	// From: Req6Batch85Amount50
	if (var_1_5) {
		var_1_15 = (max (var_1_1 , (var_1_13 + (abs (var_1_14)))));
	}


	// From: Req3Batch85Amount50
	if ((var_1_15 + (var_1_15 * var_1_13)) <= ((32u / var_1_8) / var_1_9)) {
		if (1.25f < var_1_18) {
			var_1_7 = 1000000.1f;
		}
	} else {
		var_1_7 = var_1_11;
	}


	// From: Req4Batch85Amount50
	if (var_1_7 <= (- (32.8f + var_1_7))) {
		var_1_12 = last_1_var_1_12;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	assume_abort_if_not(var_1_9 != 0);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((((((last_1_var_1_13 < ((- last_1_var_1_12) * 64)) ? (last_1_var_1_5 ? (var_1_1 == ((unsigned long int) (abs (last_1_var_1_12)))) : ((-10000000 < last_1_var_1_13) ? (var_1_1 == ((unsigned long int) (abs (max (last_1_var_1_12 , 5u))))) : (var_1_1 == ((unsigned long int) 50u)))) : 1) && ((last_1_var_1_13 <= (last_1_var_1_15 + last_1_var_1_1)) ? (var_1_5 == ((unsigned char) ((last_1_var_1_15 == last_1_var_1_13) && var_1_6))) : (var_1_5 == ((unsigned char) var_1_6)))) && (((var_1_15 + (var_1_15 * var_1_13)) <= ((32u / var_1_8) / var_1_9)) ? ((1.25f < var_1_18) ? (var_1_7 == ((float) 1000000.1f)) : 1) : (var_1_7 == ((float) var_1_11)))) && ((var_1_7 <= (- (32.8f + var_1_7))) ? (var_1_12 == ((unsigned long int) last_1_var_1_12)) : 1)) && (var_1_13 == ((unsigned char) (abs (var_1_14))))) && (var_1_5 ? (var_1_15 == ((unsigned long int) (max (var_1_1 , (var_1_13 + (abs (var_1_14))))))) : 1)) && (var_1_16 == ((unsigned char) (var_1_6 && var_1_17)))) && ((var_1_5 || var_1_17) ? (var_1_18 == ((double) (((abs (var_1_19)) + var_1_20) - 63.6))) : 1)
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

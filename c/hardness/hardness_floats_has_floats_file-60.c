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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch60has_floats.c", 13, "reach_error"); }
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
double var_1_1 = -64.0;
double var_1_2 = -8.0;
double var_1_4 = -4.0;
double var_1_5 = -16.0;
double var_1_6 = -1.0;
float var_1_7 = -1000.0;
double var_1_8 = -1.0;
unsigned long int var_1_9 = 5;
double var_1_10 = -25.0;
signed long int var_1_11 = 8;
signed long int var_1_12 = 4;
unsigned long int var_1_13 = 256;
float var_1_14 = 10.0;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch60has_floats
	var_1_14 = var_1_6;


	// From: Req5Batch60has_floats
	var_1_15 = var_1_16;


	// From: Req1Batch60has_floats
	unsigned char stepLocal_0 = var_1_2 <= (var_1_4 * var_1_5);
	if (var_1_2 > -25.0) {
		if (var_1_15 && stepLocal_0) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = -2.0;
		}
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req2Batch60has_floats
	if (var_1_1 < ((min (var_1_4 , var_1_2)) / var_1_8)) {
		var_1_7 = var_1_6;
	}


	// From: Req3Batch60has_floats
	unsigned char stepLocal_2 = var_1_15;
	signed long int stepLocal_1 = var_1_11 - var_1_12;
	if ((var_1_1 == var_1_6) || stepLocal_2) {
		if (var_1_8 <= (var_1_1 / var_1_10)) {
			if (stepLocal_1 > -10) {
				var_1_9 = (max (var_1_12 , var_1_13));
			} else {
				var_1_9 = var_1_12;
			}
		} else {
			var_1_9 = var_1_12;
		}
	} else {
		var_1_9 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 > -25.0) ? ((var_1_15 && (var_1_2 <= (var_1_4 * var_1_5))) ? (var_1_1 == ((double) var_1_6)) : (var_1_1 == ((double) -2.0))) : (var_1_1 == ((double) var_1_6))) && ((var_1_1 < ((min (var_1_4 , var_1_2)) / var_1_8)) ? (var_1_7 == ((float) var_1_6)) : 1)) && (((var_1_1 == var_1_6) || var_1_15) ? ((var_1_8 <= (var_1_1 / var_1_10)) ? (((var_1_11 - var_1_12) > -10) ? (var_1_9 == ((unsigned long int) (max (var_1_12 , var_1_13)))) : (var_1_9 == ((unsigned long int) var_1_12))) : (var_1_9 == ((unsigned long int) var_1_12))) : (var_1_9 == ((unsigned long int) var_1_12)))) && (var_1_14 == ((float) var_1_6))) && (var_1_15 == ((unsigned char) var_1_16))
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

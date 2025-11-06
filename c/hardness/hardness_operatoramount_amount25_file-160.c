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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Amount25.c", 13, "reach_error"); }
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
signed char var_1_1 = -128;
signed long int var_1_2 = 8;
signed long int var_1_3 = 1;
signed long int var_1_4 = 2;
signed char var_1_5 = 16;
signed char var_1_6 = 1;
signed char var_1_7 = 10;
signed char var_1_8 = 5;
signed char var_1_9 = 4;
double var_1_10 = 200.75;
signed char var_1_11 = -5;
signed char var_1_12 = 1;
double var_1_13 = 256.5;
double var_1_14 = 100000000.875;
double var_1_15 = 256.5;
signed long int var_1_16 = 0;
unsigned char var_1_17 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch160Amount25
	signed long int stepLocal_0 = var_1_3 + var_1_4;
	if (var_1_2 >= stepLocal_0) {
		var_1_1 = (var_1_5 - ((var_1_6 + var_1_7) + (max (var_1_8 , var_1_9))));
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req2Batch160Amount25
	signed char stepLocal_1 = var_1_6;
	if (stepLocal_1 >= (var_1_9 / (min (var_1_11 , var_1_12)))) {
		var_1_10 = (max (((min (var_1_13 , var_1_14)) + var_1_15) , 9.2));
	} else {
		var_1_10 = var_1_14;
	}


	// From: Req3Batch160Amount25
	if (var_1_17) {
		if (((abs (var_1_13)) - 32.64f) < 8.5) {
			if (var_1_10 > var_1_13) {
				var_1_16 = var_1_5;
			}
		} else {
			var_1_16 = var_1_9;
		}
	} else {
		var_1_16 = var_1_6;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 31);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -128);
	assume_abort_if_not(var_1_11 <= 127);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -128);
	assume_abort_if_not(var_1_12 <= 127);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 >= (var_1_3 + var_1_4)) ? (var_1_1 == ((signed char) (var_1_5 - ((var_1_6 + var_1_7) + (max (var_1_8 , var_1_9)))))) : (var_1_1 == ((signed char) var_1_8))) && ((var_1_6 >= (var_1_9 / (min (var_1_11 , var_1_12)))) ? (var_1_10 == ((double) (max (((min (var_1_13 , var_1_14)) + var_1_15) , 9.2)))) : (var_1_10 == ((double) var_1_14)))) && (var_1_17 ? ((((abs (var_1_13)) - 32.64f) < 8.5) ? ((var_1_10 > var_1_13) ? (var_1_16 == ((signed long int) var_1_5)) : 1) : (var_1_16 == ((signed long int) var_1_9))) : (var_1_16 == ((signed long int) var_1_6)))
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

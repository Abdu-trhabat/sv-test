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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198normal.c", 13, "reach_error"); }
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
double var_1_1 = 0.8;
signed long int var_1_2 = 32;
unsigned char var_1_3 = 0;
signed long int var_1_4 = 0;
double var_1_5 = 16.75;
double var_1_6 = 15.5;
double var_1_7 = 0.9;
float var_1_8 = 16.8;
signed char var_1_9 = -64;
unsigned char var_1_10 = 0;
signed char var_1_11 = -32;
signed char var_1_12 = -1;
signed char var_1_13 = 100;
signed char var_1_14 = 16;
signed char var_1_15 = 2;
signed char var_1_16 = 5;
signed char var_1_17 = -8;
signed short int var_1_18 = 256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch198normal
	signed long int stepLocal_0 = var_1_2;
	if (stepLocal_0 >= var_1_4) {
		var_1_1 = (((min (var_1_5 , var_1_6)) + 10.55) + var_1_7);
	}


	// From: Req2Batch198normal
	if (var_1_7 > 64.2) {
		var_1_8 = var_1_5;
	}


	// From: Req3Batch198normal
	unsigned char stepLocal_1 = var_1_10;
	if (var_1_3 || stepLocal_1) {
		var_1_9 = (min (var_1_11 , (var_1_12 - var_1_13)));
	} else {
		if (var_1_3) {
			var_1_9 = (var_1_14 + (max (var_1_15 , (max (var_1_16 , var_1_17)))));
		} else {
			if (var_1_7 >= var_1_6) {
				var_1_9 = var_1_17;
			} else {
				var_1_9 = var_1_16;
			}
		}
	}


	// From: Req4Batch198normal
	if (var_1_1 > (abs (max (var_1_5 , var_1_6)))) {
		var_1_18 = (25 - (max (4 , var_1_13)));
	} else {
		var_1_18 = 32;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -230584.3009213691400e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -230584.3009213691400e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 >= var_1_4) ? (var_1_1 == ((double) (((min (var_1_5 , var_1_6)) + 10.55) + var_1_7))) : 1) && ((var_1_7 > 64.2) ? (var_1_8 == ((float) var_1_5)) : 1)) && ((var_1_3 || var_1_10) ? (var_1_9 == ((signed char) (min (var_1_11 , (var_1_12 - var_1_13))))) : (var_1_3 ? (var_1_9 == ((signed char) (var_1_14 + (max (var_1_15 , (max (var_1_16 , var_1_17))))))) : ((var_1_7 >= var_1_6) ? (var_1_9 == ((signed char) var_1_17)) : (var_1_9 == ((signed char) var_1_16)))))) && ((var_1_1 > (abs (max (var_1_5 , var_1_6)))) ? (var_1_18 == ((signed short int) (25 - (max (4 , var_1_13))))) : (var_1_18 == ((signed short int) 32)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83Amount25.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 128;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 25;
unsigned char var_1_4 = 4;
signed long int var_1_5 = 1000000000;
signed long int var_1_6 = 128;
signed long int var_1_7 = 16;
double var_1_8 = 49.8;
double var_1_9 = 127.8;
double var_1_10 = 7.2;
signed char var_1_11 = -1;
signed char var_1_12 = 2;
signed char var_1_13 = 4;
signed char var_1_14 = 16;
unsigned short int var_1_15 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch83Amount25
	signed long int stepLocal_0 = min ((var_1_5 * var_1_6) , var_1_7);
	if (var_1_2) {
		var_1_1 = (abs (abs (var_1_3)));
	} else {
		if ((var_1_3 / var_1_4) >= stepLocal_0) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = 5;
		}
	}


	// From: Req2Batch83Amount25
	if (var_1_7 >= ((var_1_3 / var_1_4) + (var_1_1 * var_1_6))) {
		var_1_8 = (var_1_9 + (abs (var_1_10)));
	} else {
		var_1_8 = var_1_9;
	}


	// From: Req3Batch83Amount25
	var_1_11 = ((var_1_12 + var_1_13) - (min (25 , var_1_14)));


	// From: Req4Batch83Amount25
	var_1_15 = var_1_14;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((unsigned short int) (abs (abs (var_1_3))))) : (((var_1_3 / var_1_4) >= (min ((var_1_5 * var_1_6) , var_1_7))) ? (var_1_1 == ((unsigned short int) var_1_4)) : (var_1_1 == ((unsigned short int) 5)))) && ((var_1_7 >= ((var_1_3 / var_1_4) + (var_1_1 * var_1_6))) ? (var_1_8 == ((double) (var_1_9 + (abs (var_1_10))))) : (var_1_8 == ((double) var_1_9)))) && (var_1_11 == ((signed char) ((var_1_12 + var_1_13) - (min (25 , var_1_14)))))) && (var_1_15 == ((unsigned short int) var_1_14))
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

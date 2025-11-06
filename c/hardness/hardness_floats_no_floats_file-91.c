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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch91no_floats.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 100000000;
signed long int var_1_2 = 1;
signed long int var_1_3 = -1;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 5;
unsigned long int var_1_6 = 128;
unsigned long int var_1_7 = 1000000000;
signed long int var_1_8 = -10;
unsigned long int var_1_9 = 200;
signed long int var_1_10 = 5;
signed long int var_1_11 = 5;
signed long int var_1_12 = -4;
signed long int var_1_13 = 1;
signed long int var_1_14 = -4;
unsigned char var_1_15 = 1;
signed long int var_1_16 = -8;
signed long int var_1_17 = -100;
signed char var_1_18 = 8;
signed char var_1_19 = 4;
signed long int var_1_20 = -2;
signed long int var_1_21 = 0;
unsigned char var_1_22 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch91no_floats
	if (var_1_2 >= var_1_3) {
		if (var_1_4) {
			var_1_1 = (var_1_5 + (min (var_1_6 , var_1_7)));
		}
	}


	// From: Req2Batch91no_floats
	unsigned long int stepLocal_0 = var_1_1;
	if (stepLocal_0 <= var_1_9) {
		var_1_8 = (var_1_10 + (abs (max (256 , var_1_11))));
	}


	// From: Req3Batch91no_floats
	if (var_1_3 <= (var_1_2 * (var_1_13 + var_1_14))) {
		if (var_1_4 && var_1_15) {
			var_1_12 = (abs (abs (min (var_1_16 , var_1_17))));
		} else {
			if ((var_1_18 - var_1_19) >= var_1_5) {
				var_1_12 = (var_1_20 + var_1_21);
			}
		}
	} else {
		if (var_1_22) {
			var_1_12 = 10000;
		} else {
			var_1_12 = var_1_21;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -1073741823);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1073741823);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -2147483648);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 >= var_1_3) ? (var_1_4 ? (var_1_1 == ((unsigned long int) (var_1_5 + (min (var_1_6 , var_1_7))))) : 1) : 1) && ((var_1_1 <= var_1_9) ? (var_1_8 == ((signed long int) (var_1_10 + (abs (max (256 , var_1_11)))))) : 1)) && ((var_1_3 <= (var_1_2 * (var_1_13 + var_1_14))) ? ((var_1_4 && var_1_15) ? (var_1_12 == ((signed long int) (abs (abs (min (var_1_16 , var_1_17)))))) : (((var_1_18 - var_1_19) >= var_1_5) ? (var_1_12 == ((signed long int) (var_1_20 + var_1_21))) : 1)) : (var_1_22 ? (var_1_12 == ((signed long int) 10000)) : (var_1_12 == ((signed long int) var_1_21))))
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

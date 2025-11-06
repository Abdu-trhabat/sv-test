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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch61has_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
float var_1_2 = 0.0;
float var_1_3 = 2.0;
float var_1_4 = 200.0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
signed char var_1_7 = -10;
signed char var_1_8 = -10;
signed char var_1_9 = 4;
signed char var_1_10 = 32;
signed short int var_1_11 = -64;
signed long int var_1_12 = 32;
signed char var_1_13 = -128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch61has_floats
	if (var_1_2 < (var_1_3 - var_1_4)) {
		if (var_1_4 < (- var_1_3)) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = var_1_6;
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch61has_floats
	var_1_7 = ((abs (var_1_8 + var_1_9)) - var_1_10);


	// From: Req3Batch61has_floats
	unsigned char stepLocal_2 = var_1_10 == (var_1_9 / var_1_13);
	signed char stepLocal_1 = var_1_13;
	signed long int stepLocal_0 = (var_1_10 - var_1_12) ^ var_1_7;
	if ((var_1_9 * var_1_8) < stepLocal_0) {
		if (! ((var_1_8 != var_1_9) || var_1_6)) {
			if (var_1_1 && stepLocal_2) {
				if ((var_1_10 + var_1_12) <= stepLocal_1) {
					var_1_11 = var_1_13;
				} else {
					var_1_11 = 128;
				}
			} else {
				var_1_11 = var_1_9;
			}
		} else {
			var_1_11 = var_1_13;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -128);
	assume_abort_if_not(var_1_13 <= 127);
	assume_abort_if_not(var_1_13 != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 < (var_1_3 - var_1_4)) ? ((var_1_4 < (- var_1_3)) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) var_1_6))) : (var_1_1 == ((unsigned char) var_1_5))) && (var_1_7 == ((signed char) ((abs (var_1_8 + var_1_9)) - var_1_10)))) && (((var_1_9 * var_1_8) < ((var_1_10 - var_1_12) ^ var_1_7)) ? ((! ((var_1_8 != var_1_9) || var_1_6)) ? ((var_1_1 && (var_1_10 == (var_1_9 / var_1_13))) ? (((var_1_10 + var_1_12) <= var_1_13) ? (var_1_11 == ((signed short int) var_1_13)) : (var_1_11 == ((signed short int) 128))) : (var_1_11 == ((signed short int) var_1_9))) : (var_1_11 == ((signed short int) var_1_13))) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29has_floats.c", 13, "reach_error"); }
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
float var_1_1 = 0.0;
unsigned char var_1_2 = 1;
signed short int var_1_3 = 256;
signed long int var_1_5 = 100;
float var_1_6 = -1.0;
signed char var_1_7 = 1;
signed char var_1_8 = 1;
signed char var_1_9 = 8;
signed char var_1_10 = 100;
signed char var_1_11 = 100;
unsigned char var_1_12 = 8;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 32;
float var_1_17 = -32.0;
float var_1_18 = -64.0;
float var_1_19 = 32.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch29has_floats
	var_1_7 = var_1_8;


	// From: Req4Batch29has_floats
	if (var_1_2 && (! var_1_13)) {
		var_1_12 = (2 + ((var_1_14 + var_1_15) + var_1_16));
	} else {
		var_1_12 = var_1_11;
	}


	// From: Req5Batch29has_floats
	unsigned char stepLocal_0 = var_1_15;
	if (var_1_12 >= stepLocal_0) {
		var_1_17 = (max (var_1_18 , (-256.0f + var_1_19)));
	}


	// From: Req1Batch29has_floats
	if (var_1_2) {
		if (var_1_3 < -50) {
			if ((var_1_3 + var_1_7) > var_1_5) {
				var_1_1 = var_1_6;
			} else {
				var_1_1 = -16.0f;
			}
		} else {
			var_1_1 = var_1_6;
		}
	}


	// From: Req3Batch29has_floats
	if (! (var_1_6 == var_1_17)) {
		var_1_9 = var_1_8;
	} else {
		var_1_9 = (max ((var_1_10 - var_1_11) , var_1_8));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 ? ((var_1_3 < -50) ? (((var_1_3 + var_1_7) > var_1_5) ? (var_1_1 == ((float) var_1_6)) : (var_1_1 == ((float) -16.0f))) : (var_1_1 == ((float) var_1_6))) : 1) && (var_1_7 == ((signed char) var_1_8))) && ((! (var_1_6 == var_1_17)) ? (var_1_9 == ((signed char) var_1_8)) : (var_1_9 == ((signed char) (max ((var_1_10 - var_1_11) , var_1_8)))))) && ((var_1_2 && (! var_1_13)) ? (var_1_12 == ((unsigned char) (2 + ((var_1_14 + var_1_15) + var_1_16)))) : (var_1_12 == ((unsigned char) var_1_11)))) && ((var_1_12 >= var_1_15) ? (var_1_17 == ((float) (max (var_1_18 , (-256.0f + var_1_19))))) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42has_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -1;
signed short int var_1_2 = -8;
signed short int var_1_3 = -200;
signed long int var_1_4 = 64;
signed long int var_1_5 = 256;
signed long int var_1_6 = 10;
signed long int var_1_7 = 100;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 4;
float var_1_10 = 50.0;
float var_1_11 = 25.0;
float var_1_12 = 0.0;
float var_1_13 = 5.0;
float var_1_14 = 8.0;
signed char var_1_15 = -1;
signed char var_1_16 = -64;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch42has_floats
	if (var_1_2 > var_1_3) {
		var_1_1 = ((min (var_1_4 , var_1_5)) - 10);
	} else {
		var_1_1 = (max ((var_1_5 - var_1_6) , (var_1_4 - var_1_7)));
	}


	// From: Req2Batch42has_floats
	var_1_8 = (var_1_9 + 100);


	// From: Req3Batch42has_floats
	var_1_10 = (max (var_1_11 , var_1_12));


	// From: Req4Batch42has_floats
	signed long int stepLocal_2 = var_1_7;
	unsigned char stepLocal_1 = var_1_7 > var_1_9;
	signed long int stepLocal_0 = ~ -1;
	if (stepLocal_2 > var_1_6) {
		if ((var_1_10 > -2.0f) || stepLocal_1) {
			if (var_1_1 == stepLocal_0) {
				var_1_13 = (var_1_14 - (min ((abs (var_1_12)) , 1.0f)));
			} else {
				var_1_13 = var_1_12;
			}
		} else {
			var_1_13 = var_1_12;
		}
	} else {
		var_1_13 = var_1_12;
	}


	// From: Req5Batch42has_floats
	var_1_15 = var_1_16;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 > var_1_3) ? (var_1_1 == ((signed long int) ((min (var_1_4 , var_1_5)) - 10))) : (var_1_1 == ((signed long int) (max ((var_1_5 - var_1_6) , (var_1_4 - var_1_7)))))) && (var_1_8 == ((unsigned char) (var_1_9 + 100)))) && (var_1_10 == ((float) (max (var_1_11 , var_1_12))))) && ((var_1_7 > var_1_6) ? (((var_1_10 > -2.0f) || (var_1_7 > var_1_9)) ? ((var_1_1 == (~ -1)) ? (var_1_13 == ((float) (var_1_14 - (min ((abs (var_1_12)) , 1.0f))))) : (var_1_13 == ((float) var_1_12))) : (var_1_13 == ((float) var_1_12))) : (var_1_13 == ((float) var_1_12)))) && (var_1_15 == ((signed char) var_1_16))
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

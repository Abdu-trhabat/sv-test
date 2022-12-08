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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5025_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
double var_1_2 = 8.875;
double var_1_3 = 63.5;
double var_1_4 = 16.6;
double var_1_5 = 127.8;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed short int var_1_9 = 256;
signed short int var_1_10 = 10000;
signed short int var_1_11 = 4;
signed short int var_1_12 = -32;
signed long int var_1_13 = 32;
signed short int var_1_14 = 32;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_13 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch5025_1loop
	if ((min ((var_1_2 + var_1_3) , (var_1_4 - var_1_5))) != 31.9) {
		if (var_1_6) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch5025_1loop
	if (var_1_2 > var_1_5) {
		var_1_9 = (var_1_10 - var_1_11);
	}


	// From: Req3Batch5025_1loop
	unsigned char stepLocal_0 = var_1_8;
	if (var_1_1 && stepLocal_0) {
		var_1_12 = (var_1_11 - 1);
	}


	// From: Req4Batch5025_1loop
	signed short int stepLocal_2 = var_1_9;
	signed long int stepLocal_1 = var_1_11 - var_1_14;
	if (var_1_11 <= stepLocal_2) {
		var_1_13 = (var_1_10 - var_1_11);
	} else {
		if (last_1_var_1_13 > stepLocal_1) {
			var_1_13 = last_1_var_1_13;
		} else {
			var_1_13 = last_1_var_1_13;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
}

int property() {
	return (((((min ((var_1_2 + var_1_3) , (var_1_4 - var_1_5))) != 31.9) ? (var_1_6 ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) var_1_8))) : (var_1_1 == ((unsigned char) var_1_7))) && ((var_1_2 > var_1_5) ? (var_1_9 == ((signed short int) (var_1_10 - var_1_11))) : 1)) && ((var_1_1 && var_1_8) ? (var_1_12 == ((signed short int) (var_1_11 - 1))) : 1)) && ((var_1_11 <= var_1_9) ? (var_1_13 == ((signed long int) (var_1_10 - var_1_11))) : ((last_1_var_1_13 > (var_1_11 - var_1_14)) ? (var_1_13 == ((signed long int) last_1_var_1_13)) : (var_1_13 == ((signed long int) last_1_var_1_13))))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}

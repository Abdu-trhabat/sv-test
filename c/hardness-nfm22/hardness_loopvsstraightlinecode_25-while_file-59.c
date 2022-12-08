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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5925_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -128;
signed long int var_1_4 = -32;
signed long int var_1_5 = 10;
signed long int var_1_6 = -1;
unsigned long int var_1_7 = 25;
unsigned char var_1_8 = 1;
unsigned long int var_1_9 = 2;
unsigned long int var_1_10 = 32;
unsigned long int var_1_11 = 128;
float var_1_12 = 24.2;
double var_1_13 = 999999999999999.2;
double var_1_14 = 9999999.6;
double var_1_15 = 9.75;
float var_1_16 = 999999999999999.4;
float var_1_17 = 256.6;
float var_1_18 = 8.875;
float var_1_19 = 256.25;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -128;
unsigned long int last_1_var_1_7 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch5925_while
	if ((max (last_1_var_1_7 , 1)) <= (256 + last_1_var_1_1)) {
		var_1_1 = ((var_1_4 + var_1_5) + var_1_6);
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req2Batch5925_while
	if (var_1_8) {
		if (var_1_1 <= var_1_1) {
			var_1_7 = (max (var_1_9 , (max (var_1_10 , var_1_11))));
		} else {
			var_1_7 = var_1_10;
		}
	} else {
		var_1_7 = var_1_11;
	}


	// From: Req3Batch5925_while
	unsigned long int stepLocal_0 = var_1_7;
	if (var_1_7 <= stepLocal_0) {
		if ((var_1_13 - var_1_14) == var_1_15) {
			var_1_12 = (max (var_1_16 , ((var_1_17 + var_1_18) - var_1_19)));
		} else {
			var_1_12 = var_1_19;
		}
	} else {
		var_1_12 = var_1_16;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -536870911);
	assume_abort_if_not(var_1_4 <= 536870912);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -536870911);
	assume_abort_if_not(var_1_5 <= 536870911);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1073741823);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
}

int property() {
	return ((((max (last_1_var_1_7 , 1)) <= (256 + last_1_var_1_1)) ? (var_1_1 == ((signed long int) ((var_1_4 + var_1_5) + var_1_6))) : (var_1_1 == ((signed long int) var_1_6))) && (var_1_8 ? ((var_1_1 <= var_1_1) ? (var_1_7 == ((unsigned long int) (max (var_1_9 , (max (var_1_10 , var_1_11)))))) : (var_1_7 == ((unsigned long int) var_1_10))) : (var_1_7 == ((unsigned long int) var_1_11)))) && ((var_1_7 <= var_1_7) ? (((var_1_13 - var_1_14) == var_1_15) ? (var_1_12 == ((float) (max (var_1_16 , ((var_1_17 + var_1_18) - var_1_19))))) : (var_1_12 == ((float) var_1_19))) : (var_1_12 == ((float) var_1_16)))
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

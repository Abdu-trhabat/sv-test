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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5150_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 128;
double var_1_4 = 32.3;
double var_1_5 = 0.25;
unsigned char var_1_7 = 2;
signed char var_1_8 = -10;
signed char var_1_9 = 5;
signed char var_1_10 = 4;
signed char var_1_11 = 100;
unsigned long int var_1_12 = 8;
unsigned char var_1_13 = 0;
unsigned long int var_1_15 = 1114432789;
double var_1_17 = 256.8;
double var_1_18 = 1.25;
unsigned long int var_1_19 = 16;
unsigned char var_1_21 = 1;
double var_1_22 = -0.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 128;
unsigned long int last_1_var_1_12 = 8;
double last_1_var_1_17 = 256.8;
unsigned char last_1_var_1_21 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch5150_1loop
	unsigned char stepLocal_3 = (max (var_1_4 , last_1_var_1_17)) > var_1_18;
	if (last_1_var_1_21 || stepLocal_3) {
		if (var_1_18 > (abs (last_1_var_1_17))) {
			var_1_19 = last_1_var_1_1;
		} else {
			var_1_19 = var_1_11;
		}
	} else {
		var_1_19 = last_1_var_1_1;
	}


	// From: Req1Batch5150_1loop
	unsigned long int stepLocal_1 = last_1_var_1_12;
	unsigned long int stepLocal_0 = 32u;
	if (stepLocal_0 >= last_1_var_1_12) {
		if (stepLocal_1 <= last_1_var_1_12) {
			if ((var_1_4 - var_1_5) >= last_1_var_1_17) {
				var_1_1 = var_1_7;
			}
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req4Batch5150_1loop
	if ((min ((~ var_1_1) , 8)) > var_1_11) {
		var_1_17 = var_1_18;
	}


	// From: Req2Batch5150_1loop
	if (! (var_1_17 > var_1_5)) {
		var_1_8 = ((min (var_1_9 , var_1_10)) - var_1_11);
	} else {
		var_1_8 = -4;
	}


	// From: Req6Batch5150_1loop
	unsigned long int stepLocal_4 = var_1_19;
	if ((var_1_18 / (max (5.5 , var_1_22))) > 10.5) {
		if (var_1_13) {
			if (var_1_1 < stepLocal_4) {
				var_1_21 = (! var_1_23);
			} else {
				var_1_21 = var_1_24;
			}
		} else {
			var_1_21 = var_1_23;
		}
	} else {
		var_1_21 = var_1_23;
	}


	// From: Req3Batch5150_1loop
	unsigned char stepLocal_2 = var_1_21;
	if (var_1_21 && stepLocal_2) {
		var_1_12 = var_1_11;
	} else {
		if (var_1_21) {
			var_1_12 = ((max (var_1_19 , (var_1_11 + var_1_7))) + (var_1_15 - var_1_1));
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 1073741823);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_21 = var_1_21;
}

int property() {
	return ((((((32u >= last_1_var_1_12) ? ((last_1_var_1_12 <= last_1_var_1_12) ? (((var_1_4 - var_1_5) >= last_1_var_1_17) ? (var_1_1 == ((unsigned char) var_1_7)) : 1) : 1) : (var_1_1 == ((unsigned char) var_1_7))) && ((! (var_1_17 > var_1_5)) ? (var_1_8 == ((signed char) ((min (var_1_9 , var_1_10)) - var_1_11))) : (var_1_8 == ((signed char) -4)))) && ((var_1_21 && var_1_21) ? (var_1_12 == ((unsigned long int) var_1_11)) : (var_1_21 ? (var_1_12 == ((unsigned long int) ((max (var_1_19 , (var_1_11 + var_1_7))) + (var_1_15 - var_1_1)))) : 1))) && (((min ((~ var_1_1) , 8)) > var_1_11) ? (var_1_17 == ((double) var_1_18)) : 1)) && ((last_1_var_1_21 || ((max (var_1_4 , last_1_var_1_17)) > var_1_18)) ? ((var_1_18 > (abs (last_1_var_1_17))) ? (var_1_19 == ((unsigned long int) last_1_var_1_1)) : (var_1_19 == ((unsigned long int) var_1_11))) : (var_1_19 == ((unsigned long int) last_1_var_1_1)))) && (((var_1_18 / (max (5.5 , var_1_22))) > 10.5) ? (var_1_13 ? ((var_1_1 < var_1_19) ? (var_1_21 == ((unsigned char) (! var_1_23))) : (var_1_21 == ((unsigned char) var_1_24))) : (var_1_21 == ((unsigned char) var_1_23))) : (var_1_21 == ((unsigned char) var_1_23)))
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

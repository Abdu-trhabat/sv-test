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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104has_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = 256;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed short int var_1_8 = -1;
signed short int var_1_9 = 256;
signed short int var_1_10 = 1;
unsigned long int var_1_11 = 5;
unsigned long int var_1_12 = 2080937386;
signed long int var_1_13 = 128;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 256;
unsigned long int last_1_var_1_11 = 5;
signed long int last_1_var_1_13 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch104has_floats
	signed long int stepLocal_1 = last_1_var_1_13;
	signed long int stepLocal_0 = last_1_var_1_13;
	if (stepLocal_0 > last_1_var_1_11) {
		if (stepLocal_1 < (min (last_1_var_1_11 , last_1_var_1_13))) {
			var_1_1 = last_1_var_1_13;
		}
	} else {
		var_1_1 = (abs (max (last_1_var_1_13 , last_1_var_1_11)));
	}


	// From: Req4Batch104has_floats
	if ((~ var_1_10) < var_1_9) {
		var_1_11 = ((max (last_1_var_1_13 , (var_1_12 - last_1_var_1_1))) + (max (last_1_var_1_1 , var_1_10)));
	} else {
		var_1_11 = ((max (var_1_12 , last_1_var_1_13)) + var_1_10);
	}


	// From: Req2Batch104has_floats
	if (var_1_6) {
		var_1_5 = (! var_1_7);
	}


	// From: Req3Batch104has_floats
	if (var_1_5) {
		var_1_8 = (var_1_9 - var_1_10);
	}


	// From: Req5Batch104has_floats
	if (var_1_1 != var_1_12) {
		if (var_1_7 || var_1_5) {
			var_1_13 = var_1_11;
		}
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 1073741823);
	assume_abort_if_not(var_1_12 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	return (((((last_1_var_1_13 > last_1_var_1_11) ? ((last_1_var_1_13 < (min (last_1_var_1_11 , last_1_var_1_13))) ? (var_1_1 == ((signed long int) last_1_var_1_13)) : 1) : (var_1_1 == ((signed long int) (abs (max (last_1_var_1_13 , last_1_var_1_11)))))) && (var_1_6 ? (var_1_5 == ((unsigned char) (! var_1_7))) : 1)) && (var_1_5 ? (var_1_8 == ((signed short int) (var_1_9 - var_1_10))) : 1)) && (((~ var_1_10) < var_1_9) ? (var_1_11 == ((unsigned long int) ((max (last_1_var_1_13 , (var_1_12 - last_1_var_1_1))) + (max (last_1_var_1_1 , var_1_10))))) : (var_1_11 == ((unsigned long int) ((max (var_1_12 , last_1_var_1_13)) + var_1_10))))) && ((var_1_1 != var_1_12) ? ((var_1_7 || var_1_5) ? (var_1_13 == ((signed long int) var_1_11)) : 1) : 1)
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

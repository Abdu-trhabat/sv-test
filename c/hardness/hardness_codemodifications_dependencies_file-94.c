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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch94dependencies.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed char var_1_2 = 0;
signed char var_1_3 = 32;
signed short int var_1_5 = 16;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
signed long int var_1_9 = 50;
double var_1_10 = 32.7;
double var_1_11 = 64.25;
double var_1_12 = 10.3;
double var_1_13 = 3.3;
double var_1_14 = 16.5;
double var_1_15 = 7.125;
unsigned short int var_1_16 = 50;
unsigned short int var_1_17 = 64;
unsigned long int var_1_18 = 16;
signed short int var_1_19 = 8;
signed long int var_1_20 = -4;
double var_1_21 = 15.125;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed long int last_1_var_1_20 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch94dependencies
	if (var_1_8 || last_1_var_1_1) {
		if ((var_1_2 >= last_1_var_1_20) && last_1_var_1_1) {
			var_1_9 = (min (var_1_3 , last_1_var_1_20));
		} else {
			if (last_1_var_1_1) {
				var_1_9 = var_1_5;
			} else {
				var_1_9 = var_1_2;
			}
		}
	} else {
		var_1_9 = last_1_var_1_20;
	}


	// From: Req3Batch94dependencies
	var_1_10 = ((min (var_1_11 , var_1_12)) + (var_1_13 + (var_1_14 - var_1_15)));


	// From: Req4Batch94dependencies
	if (var_1_14 >= var_1_11) {
		var_1_16 = (max ((max ((abs (var_1_3)) , var_1_2)) , var_1_17));
	}


	// From: Req5Batch94dependencies
	if (((max (var_1_2 , var_1_3)) - var_1_19) >= var_1_9) {
		var_1_18 = (max (var_1_3 , var_1_19));
	}


	// From: Req7Batch94dependencies
	if ((var_1_15 + (4.6f * var_1_11)) == var_1_14) {
		var_1_21 = (var_1_13 + var_1_15);
	} else {
		var_1_21 = var_1_14;
	}


	// From: Req6Batch94dependencies
	if (var_1_7 || (var_1_21 <= (- var_1_12))) {
		var_1_20 = (var_1_17 + var_1_9);
	}


	// From: Req1Batch94dependencies
	if ((10 << var_1_2) < var_1_3) {
		if ((var_1_16 / var_1_5) > (-1000000000 + var_1_2)) {
			var_1_1 = (var_1_6 || var_1_7);
		} else {
			var_1_1 = var_1_8;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 64);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -230584.3009213691400e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	return ((((((((10 << var_1_2) < var_1_3) ? (((var_1_16 / var_1_5) > (-1000000000 + var_1_2)) ? (var_1_1 == ((unsigned char) (var_1_6 || var_1_7))) : (var_1_1 == ((unsigned char) var_1_8))) : 1) && ((var_1_8 || last_1_var_1_1) ? (((var_1_2 >= last_1_var_1_20) && last_1_var_1_1) ? (var_1_9 == ((signed long int) (min (var_1_3 , last_1_var_1_20)))) : (last_1_var_1_1 ? (var_1_9 == ((signed long int) var_1_5)) : (var_1_9 == ((signed long int) var_1_2)))) : (var_1_9 == ((signed long int) last_1_var_1_20)))) && (var_1_10 == ((double) ((min (var_1_11 , var_1_12)) + (var_1_13 + (var_1_14 - var_1_15)))))) && ((var_1_14 >= var_1_11) ? (var_1_16 == ((unsigned short int) (max ((max ((abs (var_1_3)) , var_1_2)) , var_1_17)))) : 1)) && ((((max (var_1_2 , var_1_3)) - var_1_19) >= var_1_9) ? (var_1_18 == ((unsigned long int) (max (var_1_3 , var_1_19)))) : 1)) && ((var_1_7 || (var_1_21 <= (- var_1_12))) ? (var_1_20 == ((signed long int) (var_1_17 + var_1_9))) : 1)) && (((var_1_15 + (4.6f * var_1_11)) == var_1_14) ? (var_1_21 == ((double) (var_1_13 + var_1_15))) : (var_1_21 == ((double) var_1_14)))
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

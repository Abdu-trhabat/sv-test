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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch58dependencies.c", 13, "reach_error"); }
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
unsigned char var_1_3 = 16;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed long int var_1_14 = -8;
unsigned long int var_1_15 = 128;
unsigned long int var_1_17 = 5;
unsigned short int var_1_18 = 32;
unsigned char var_1_19 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned char last_1_var_1_10 = 0;
signed long int last_1_var_1_14 = -8;
unsigned long int last_1_var_1_17 = 5;
unsigned short int last_1_var_1_18 = 32;
unsigned char last_1_var_1_19 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch58dependencies
	if ((last_1_var_1_18 + last_1_var_1_17) < 1) {
		if (var_1_12) {
			if (last_1_var_1_10) {
				var_1_19 = var_1_11;
			}
		}
	}


	// From: Req2Batch58dependencies
	if (last_1_var_1_1 <= var_1_5) {
		var_1_10 = (last_1_var_1_19 || ((var_1_3 != var_1_5) || var_1_11));
	} else {
		var_1_10 = (var_1_12 || var_1_13);
	}


	// From: Req1Batch58dependencies
	if ((last_1_var_1_17 / var_1_3) <= 2) {
		if (var_1_3 < (min ((~ last_1_var_1_17) , last_1_var_1_14))) {
			var_1_1 = (min (var_1_5 , 16));
		} else {
			if (((var_1_6 || var_1_7) && var_1_8) || var_1_9) {
				var_1_1 = var_1_5;
			} else {
				var_1_1 = 32;
			}
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req3Batch58dependencies
	if (var_1_5 >= var_1_3) {
		var_1_14 = (min (last_1_var_1_14 , var_1_1));
	} else {
		var_1_14 = (32 + var_1_1);
	}


	// From: Req6Batch58dependencies
	var_1_18 = var_1_1;


	// From: Req5Batch58dependencies
	if (var_1_14 < (32 / var_1_3)) {
		if (var_1_10 || var_1_19) {
			var_1_17 = var_1_18;
		}
	}


	// From: Req4Batch58dependencies
	if (var_1_10 || ((max (var_1_14 , var_1_3)) < (min (var_1_17 , var_1_18)))) {
		var_1_15 = (max (1u , var_1_17));
	} else {
		var_1_15 = 32u;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	return ((((((((last_1_var_1_17 / var_1_3) <= 2) ? ((var_1_3 < (min ((~ last_1_var_1_17) , last_1_var_1_14))) ? (var_1_1 == ((unsigned char) (min (var_1_5 , 16)))) : ((((var_1_6 || var_1_7) && var_1_8) || var_1_9) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) 32)))) : (var_1_1 == ((unsigned char) var_1_5))) && ((last_1_var_1_1 <= var_1_5) ? (var_1_10 == ((unsigned char) (last_1_var_1_19 || ((var_1_3 != var_1_5) || var_1_11)))) : (var_1_10 == ((unsigned char) (var_1_12 || var_1_13))))) && ((var_1_5 >= var_1_3) ? (var_1_14 == ((signed long int) (min (last_1_var_1_14 , var_1_1)))) : (var_1_14 == ((signed long int) (32 + var_1_1))))) && ((var_1_10 || ((max (var_1_14 , var_1_3)) < (min (var_1_17 , var_1_18)))) ? (var_1_15 == ((unsigned long int) (max (1u , var_1_17)))) : (var_1_15 == ((unsigned long int) 32u)))) && ((var_1_14 < (32 / var_1_3)) ? ((var_1_10 || var_1_19) ? (var_1_17 == ((unsigned long int) var_1_18)) : 1) : 1)) && (var_1_18 == ((unsigned short int) var_1_1))) && (((last_1_var_1_18 + last_1_var_1_17) < 1) ? (var_1_12 ? (last_1_var_1_10 ? (var_1_19 == ((unsigned char) var_1_11)) : 1) : 1) : 1)
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

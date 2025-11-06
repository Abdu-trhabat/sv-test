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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch19125_while.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 64;
unsigned short int var_1_3 = 32;
unsigned short int var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned short int var_1_7 = 1;
unsigned long int var_1_8 = 128;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 64;
unsigned short int last_1_var_1_5 = 1;
unsigned char last_1_var_1_9 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch19125_while
	unsigned char stepLocal_1 = last_1_var_1_9;
	if ((var_1_7 >= (min (var_1_3 , last_1_var_1_1))) && stepLocal_1) {
		var_1_8 = (abs (max (last_1_var_1_5 , var_1_7)));
	}


	// From: Req4Batch19125_while
	if (var_1_6) {
		if (! (! (var_1_3 < var_1_8))) {
			var_1_9 = (var_1_10 || var_1_11);
		}
	} else {
		var_1_9 = var_1_11;
	}


	// From: Req2Batch19125_while
	if (last_1_var_1_9) {
		var_1_5 = 2;
	} else {
		var_1_5 = var_1_7;
	}


	// From: Req1Batch19125_while
	unsigned long int stepLocal_0 = var_1_8;
	if ((var_1_5 / var_1_3) == stepLocal_0) {
		var_1_1 = (max (25u , var_1_5));
	} else {
		var_1_1 = (var_1_5 + (1453750250u - var_1_3));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	assume_abort_if_not(var_1_3 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_9 = var_1_9;
}

int property(void) {
	return (((((var_1_5 / var_1_3) == var_1_8) ? (var_1_1 == ((unsigned long int) (max (25u , var_1_5)))) : (var_1_1 == ((unsigned long int) (var_1_5 + (1453750250u - var_1_3))))) && (last_1_var_1_9 ? (var_1_5 == ((unsigned short int) 2)) : (var_1_5 == ((unsigned short int) var_1_7)))) && (((var_1_7 >= (min (var_1_3 , last_1_var_1_1))) && last_1_var_1_9) ? (var_1_8 == ((unsigned long int) (abs (max (last_1_var_1_5 , var_1_7))))) : 1)) && (var_1_6 ? ((! (! (var_1_3 < var_1_8))) ? (var_1_9 == ((unsigned char) (var_1_10 || var_1_11))) : 1) : (var_1_9 == ((unsigned char) var_1_11)))
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

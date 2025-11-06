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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116Amount50.c", 13, "reach_error"); }
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
signed long int var_1_1 = 100;
signed long int var_1_5 = -128;
unsigned char var_1_6 = 0;
unsigned long int var_1_7 = 32;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 10;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 50;
signed long int var_1_15 = 8;
signed long int var_1_16 = 1155742021;
signed long int var_1_17 = -32;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_7 = 32;
unsigned short int last_1_var_1_8 = 4;
signed long int last_1_var_1_15 = 8;
signed long int last_1_var_1_17 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch116Amount50
	if (last_1_var_1_17 <= last_1_var_1_15) {
		if (! var_1_6) {
			var_1_8 = var_1_9;
		}
	}


	// From: Req6Batch116Amount50
	if ((var_1_12 * last_1_var_1_7) > last_1_var_1_7) {
		var_1_15 = (max (var_1_13 , var_1_12));
	} else {
		var_1_15 = ((max ((var_1_16 - var_1_9) , last_1_var_1_8)) - 4);
	}


	// From: Req5Batch116Amount50
	if (var_1_15 >= 1) {
		var_1_14 = var_1_13;
	} else {
		var_1_14 = (var_1_13 + 5);
	}


	// From: Req4Batch116Amount50
	if (var_1_6 || var_1_11) {
		var_1_10 = (max (5 , var_1_12));
	} else {
		var_1_10 = (128 - var_1_13);
	}


	// From: Req7Batch116Amount50
	if (var_1_6) {
		var_1_17 = (max ((min (var_1_8 , var_1_10)) , -25));
	} else {
		if (var_1_15 >= var_1_8) {
			var_1_17 = (max (var_1_10 , var_1_14));
		} else {
			var_1_17 = 16;
		}
	}


	// From: Req1Batch116Amount50
	if ((~ var_1_8) < ((var_1_17 * var_1_15) / var_1_5)) {
		if (var_1_6) {
			var_1_1 = (128 - var_1_8);
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req2Batch116Amount50
	unsigned char stepLocal_0 = var_1_8 <= var_1_5;
	if ((var_1_1 < var_1_15) || stepLocal_0) {
		if (var_1_6) {
			var_1_7 = var_1_8;
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 1073741822);
	assume_abort_if_not(var_1_16 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	return ((((((((~ var_1_8) < ((var_1_17 * var_1_15) / var_1_5)) ? (var_1_6 ? (var_1_1 == ((signed long int) (128 - var_1_8))) : (var_1_1 == ((signed long int) var_1_8))) : (var_1_1 == ((signed long int) var_1_8))) && (((var_1_1 < var_1_15) || (var_1_8 <= var_1_5)) ? (var_1_6 ? (var_1_7 == ((unsigned long int) var_1_8)) : 1) : 1)) && ((last_1_var_1_17 <= last_1_var_1_15) ? ((! var_1_6) ? (var_1_8 == ((unsigned short int) var_1_9)) : 1) : 1)) && ((var_1_6 || var_1_11) ? (var_1_10 == ((unsigned char) (max (5 , var_1_12)))) : (var_1_10 == ((unsigned char) (128 - var_1_13))))) && ((var_1_15 >= 1) ? (var_1_14 == ((unsigned char) var_1_13)) : (var_1_14 == ((unsigned char) (var_1_13 + 5))))) && (((var_1_12 * last_1_var_1_7) > last_1_var_1_7) ? (var_1_15 == ((signed long int) (max (var_1_13 , var_1_12)))) : (var_1_15 == ((signed long int) ((max ((var_1_16 - var_1_9) , last_1_var_1_8)) - 4))))) && (var_1_6 ? (var_1_17 == ((signed long int) (max ((min (var_1_8 , var_1_10)) , -25)))) : ((var_1_15 >= var_1_8) ? (var_1_17 == ((signed long int) (max (var_1_10 , var_1_14)))) : (var_1_17 == ((signed long int) 16))))
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

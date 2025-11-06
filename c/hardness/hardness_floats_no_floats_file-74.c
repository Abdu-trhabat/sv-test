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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch74no_floats.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 25;
signed long int var_1_2 = 64;
signed long int var_1_3 = -5;
signed long int var_1_4 = 1;
unsigned short int var_1_5 = 10;
unsigned short int var_1_6 = 55888;
unsigned short int var_1_7 = 64;
signed long int var_1_8 = 4;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 1;
signed long int var_1_12 = 32;
signed long int var_1_13 = 32;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch74no_floats
	signed long int stepLocal_0 = min ((- var_1_5) , (var_1_6 - var_1_7));
	if ((min ((max (var_1_2 , -64)) , var_1_3)) < var_1_4) {
		if (stepLocal_0 != var_1_8) {
			var_1_1 = (abs (var_1_6));
		} else {
			var_1_1 = (min (var_1_7 , 8u));
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch74no_floats
	if (var_1_3 <= 2) {
		if (var_1_8 == var_1_1) {
			var_1_9 = ((! (! var_1_10)) && var_1_11);
		}
	} else {
		var_1_9 = var_1_10;
	}


	// From: Req3Batch74no_floats
	if (var_1_9) {
		if ((var_1_6 + var_1_1) <= var_1_1) {
			var_1_12 = var_1_13;
		} else {
			if (var_1_3 != var_1_4) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = -64;
			}
		}
	} else {
		var_1_12 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65535);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65535);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((min ((max (var_1_2 , -64)) , var_1_3)) < var_1_4) ? (((min ((- var_1_5) , (var_1_6 - var_1_7))) != var_1_8) ? (var_1_1 == ((unsigned long int) (abs (var_1_6)))) : (var_1_1 == ((unsigned long int) (min (var_1_7 , 8u))))) : (var_1_1 == ((unsigned long int) var_1_7))) && ((var_1_3 <= 2) ? ((var_1_8 == var_1_1) ? (var_1_9 == ((unsigned char) ((! (! var_1_10)) && var_1_11))) : 1) : (var_1_9 == ((unsigned char) var_1_10)))) && (var_1_9 ? (((var_1_6 + var_1_1) <= var_1_1) ? (var_1_12 == ((signed long int) var_1_13)) : ((var_1_3 != var_1_4) ? (var_1_12 == ((signed long int) var_1_13)) : (var_1_12 == ((signed long int) -64)))) : (var_1_12 == ((signed long int) var_1_13)))
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

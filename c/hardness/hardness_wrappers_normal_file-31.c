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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch31normal.c", 13, "reach_error"); }
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
signed long int var_1_1 = 200;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 1107940323;
signed long int var_1_4 = 1;
signed long int var_1_5 = 4;
unsigned char var_1_6 = 0;
signed long int var_1_7 = 4;
signed long int var_1_8 = -32;
unsigned char var_1_9 = 64;
unsigned char var_1_12 = 4;
double var_1_13 = 0.97;
double var_1_14 = 32.6;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch31normal
	if (var_1_2) {
		var_1_1 = ((var_1_3 - var_1_4) - var_1_5);
	} else {
		if (var_1_6 && (var_1_3 < var_1_4)) {
			var_1_1 = var_1_3;
		}
	}


	// From: Req2Batch31normal
	if (var_1_5 < var_1_4) {
		var_1_7 = (var_1_4 + var_1_8);
	} else {
		var_1_7 = (var_1_4 - var_1_3);
	}


	// From: Req4Batch31normal
	if ((var_1_7 + var_1_3) < var_1_4) {
		if (var_1_2 && var_1_6) {
			if (var_1_6) {
				var_1_13 = 0.8;
			} else {
				var_1_13 = var_1_14;
			}
		} else {
			var_1_13 = var_1_14;
		}
	} else {
		var_1_13 = var_1_14;
	}


	// From: Req3Batch31normal
	if (! (var_1_3 < (var_1_8 * var_1_7))) {
		if ((abs (var_1_13)) < var_1_13) {
			if (var_1_6) {
				var_1_9 = var_1_12;
			}
		}
	} else {
		var_1_9 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 1073741822);
	assume_abort_if_not(var_1_3 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -1073741823);
	assume_abort_if_not(var_1_8 <= 1073741823);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((signed long int) ((var_1_3 - var_1_4) - var_1_5))) : ((var_1_6 && (var_1_3 < var_1_4)) ? (var_1_1 == ((signed long int) var_1_3)) : 1)) && ((var_1_5 < var_1_4) ? (var_1_7 == ((signed long int) (var_1_4 + var_1_8))) : (var_1_7 == ((signed long int) (var_1_4 - var_1_3))))) && ((! (var_1_3 < (var_1_8 * var_1_7))) ? (((abs (var_1_13)) < var_1_13) ? (var_1_6 ? (var_1_9 == ((unsigned char) var_1_12)) : 1) : 1) : (var_1_9 == ((unsigned char) var_1_12)))) && (((var_1_7 + var_1_3) < var_1_4) ? ((var_1_2 && var_1_6) ? (var_1_6 ? (var_1_13 == ((double) 0.8)) : (var_1_13 == ((double) var_1_14))) : (var_1_13 == ((double) var_1_14))) : (var_1_13 == ((double) var_1_14)))
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

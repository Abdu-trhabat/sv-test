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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3125_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 16;
unsigned char var_1_9 = 16;
unsigned short int var_1_10 = 4;
double var_1_11 = 1000000.5;
double var_1_12 = 1.25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch3125_1loop
	if (var_1_2) {
		var_1_1 = ((var_1_3 - var_1_4) - var_1_5);
	} else {
		if (var_1_6 && var_1_7) {
			var_1_1 = var_1_4;
		}
	}


	// From: Req2Batch3125_1loop
	signed long int stepLocal_0 = var_1_5 / var_1_3;
	if (stepLocal_0 >= (500 - var_1_4)) {
		var_1_8 = var_1_9;
	}


	// From: Req3Batch3125_1loop
	signed long int stepLocal_2 = var_1_3 * var_1_5;
	signed long int stepLocal_1 = var_1_5 ^ var_1_1;
	if (stepLocal_2 >= var_1_1) {
		var_1_10 = (2 + var_1_9);
	} else {
		if (var_1_4 == stepLocal_1) {
			var_1_10 = (var_1_9 + (min (var_1_1 , 4)));
		} else {
			var_1_10 = var_1_1;
		}
	}


	// From: Req4Batch3125_1loop
	var_1_11 = var_1_12;
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
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((signed long int) ((var_1_3 - var_1_4) - var_1_5))) : ((var_1_6 && var_1_7) ? (var_1_1 == ((signed long int) var_1_4)) : 1)) && (((var_1_5 / var_1_3) >= (500 - var_1_4)) ? (var_1_8 == ((unsigned char) var_1_9)) : 1)) && (((var_1_3 * var_1_5) >= var_1_1) ? (var_1_10 == ((unsigned short int) (2 + var_1_9))) : ((var_1_4 == (var_1_5 ^ var_1_1)) ? (var_1_10 == ((unsigned short int) (var_1_9 + (min (var_1_1 , 4))))) : (var_1_10 == ((unsigned short int) var_1_1))))) && (var_1_11 == ((double) var_1_12))
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

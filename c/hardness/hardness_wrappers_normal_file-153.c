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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153normal.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 50;
unsigned long int var_1_3 = 256;
signed short int var_1_4 = -50;
unsigned short int var_1_6 = 32;
unsigned short int var_1_7 = 1;
unsigned short int var_1_8 = 32;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
double var_1_13 = 256.2;
signed char var_1_15 = 10;
double var_1_17 = 100000000000000.5;
double var_1_18 = 24.75;
signed short int var_1_19 = -32;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_4 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch153normal
	if (last_1_var_1_4 <= ((abs (-32)) + 16)) {
		var_1_1 = (abs (var_1_3));
	} else {
		var_1_1 = var_1_3;
	}


	// From: Req3Batch153normal
	var_1_6 = ((abs (var_1_7)) + var_1_8);


	// From: Req6Batch153normal
	var_1_18 = var_1_17;


	// From: Req7Batch153normal
	var_1_19 = var_1_6;


	// From: Req4Batch153normal
	signed short int stepLocal_0 = var_1_19;
	if (var_1_6 <= stepLocal_0) {
		var_1_9 = (! var_1_10);
	} else {
		var_1_9 = (var_1_11 && var_1_12);
	}


	// From: Req2Batch153normal
	if (var_1_19 <= var_1_3) {
		if (var_1_19 <= var_1_1) {
			if (var_1_9) {
				var_1_4 = var_1_19;
			}
		}
	}


	// From: Req5Batch153normal
	unsigned long int stepLocal_1 = var_1_1;
	if ((var_1_4 / var_1_15) == stepLocal_1) {
		if (var_1_10) {
			var_1_13 = (min (var_1_17 , 1000000.5));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_4 = var_1_4;
}

int property(void) {
	return (((((((last_1_var_1_4 <= ((abs (-32)) + 16)) ? (var_1_1 == ((unsigned long int) (abs (var_1_3)))) : (var_1_1 == ((unsigned long int) var_1_3))) && ((var_1_19 <= var_1_3) ? ((var_1_19 <= var_1_1) ? (var_1_9 ? (var_1_4 == ((signed short int) var_1_19)) : 1) : 1) : 1)) && (var_1_6 == ((unsigned short int) ((abs (var_1_7)) + var_1_8)))) && ((var_1_6 <= var_1_19) ? (var_1_9 == ((unsigned char) (! var_1_10))) : (var_1_9 == ((unsigned char) (var_1_11 && var_1_12))))) && (((var_1_4 / var_1_15) == var_1_1) ? (var_1_10 ? (var_1_13 == ((double) (min (var_1_17 , 1000000.5)))) : 1) : 1)) && (var_1_18 == ((double) var_1_17))) && (var_1_19 == ((signed short int) var_1_6))
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

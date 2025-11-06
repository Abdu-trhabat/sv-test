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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18625_1loop.c", 13, "reach_error"); }
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
signed short int var_1_1 = -5;
double var_1_2 = 15.5;
double var_1_3 = 50.4;
signed short int var_1_4 = 100;
unsigned char var_1_5 = 16;
unsigned char var_1_6 = 128;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 0;
signed long int var_1_10 = 256;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
signed long int var_1_14 = 1000000000;
unsigned char var_1_15 = 0;
double var_1_16 = 8.6;
unsigned char var_1_17 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch18625_1loop
	if (var_1_2 < var_1_3) {
		if (var_1_3 < var_1_2) {
			var_1_1 = (var_1_4 + (abs (128)));
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req2Batch18625_1loop
	var_1_5 = (var_1_6 - ((var_1_7 - var_1_8) + var_1_9));


	// From: Req3Batch18625_1loop
	unsigned char stepLocal_0 = var_1_13;
	if ((var_1_11 && var_1_12) || stepLocal_0) {
		if (var_1_13) {
			var_1_10 = ((var_1_7 + (var_1_14 - var_1_5)) - var_1_9);
		} else {
			var_1_10 = var_1_4;
		}
	}


	// From: Req4Batch18625_1loop
	if ((var_1_2 + var_1_3) < var_1_16) {
		var_1_15 = var_1_17;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 127);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 32);
	assume_abort_if_not(var_1_7 <= 64);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 536870911);
	assume_abort_if_not(var_1_14 <= 1073741823);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 < var_1_3) ? ((var_1_3 < var_1_2) ? (var_1_1 == ((signed short int) (var_1_4 + (abs (128))))) : (var_1_1 == ((signed short int) var_1_4))) : 1) && (var_1_5 == ((unsigned char) (var_1_6 - ((var_1_7 - var_1_8) + var_1_9))))) && (((var_1_11 && var_1_12) || var_1_13) ? (var_1_13 ? (var_1_10 == ((signed long int) ((var_1_7 + (var_1_14 - var_1_5)) - var_1_9))) : (var_1_10 == ((signed long int) var_1_4))) : 1)) && (((var_1_2 + var_1_3) < var_1_16) ? (var_1_15 == ((unsigned char) var_1_17)) : 1)
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

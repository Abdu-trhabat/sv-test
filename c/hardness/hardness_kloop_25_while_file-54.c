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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5425_while.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 16;
unsigned char var_1_3 = 10;
unsigned char var_1_4 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 5;
unsigned long int var_1_10 = 3126062476;
unsigned long int var_1_11 = 16;
unsigned long int var_1_12 = 128;
unsigned short int var_1_13 = 10;
signed long int var_1_14 = 128;
float var_1_15 = 4.2;
float var_1_16 = 5.1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch5425_while
	var_1_13 = var_1_3;


	// From: Req5Batch5425_while
	var_1_14 = var_1_3;


	// From: Req6Batch5425_while
	var_1_15 = var_1_16;


	// From: Req1Batch5425_while
	signed long int stepLocal_0 = -4;
	if (stepLocal_0 >= var_1_14) {
		var_1_1 = (min (var_1_3 , (abs (1))));
	}


	// From: Req3Batch5425_while
	unsigned char stepLocal_2 = var_1_3;
	if (stepLocal_2 < var_1_14) {
		var_1_9 = (min ((3851651024u - var_1_3) , (max ((var_1_10 - var_1_1) , (var_1_11 + var_1_12)))));
	}


	// From: Req2Batch5425_while
	unsigned long int stepLocal_1 = max (10 , var_1_9);
	if ((8 * var_1_9) == stepLocal_1) {
		if (var_1_6) {
			var_1_4 = (var_1_7 && var_1_8);
		} else {
			var_1_4 = var_1_8;
		}
	} else {
		var_1_4 = var_1_8;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((-4 >= var_1_14) ? (var_1_1 == ((unsigned char) (min (var_1_3 , (abs (1)))))) : 1) && (((8 * var_1_9) == (max (10 , var_1_9))) ? (var_1_6 ? (var_1_4 == ((unsigned char) (var_1_7 && var_1_8))) : (var_1_4 == ((unsigned char) var_1_8))) : (var_1_4 == ((unsigned char) var_1_8)))) && ((var_1_3 < var_1_14) ? (var_1_9 == ((unsigned long int) (min ((3851651024u - var_1_3) , (max ((var_1_10 - var_1_1) , (var_1_11 + var_1_12))))))) : 1)) && (var_1_13 == ((unsigned short int) var_1_3))) && (var_1_14 == ((signed long int) var_1_3))) && (var_1_15 == ((float) var_1_16))
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

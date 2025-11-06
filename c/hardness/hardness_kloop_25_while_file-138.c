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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13825_while.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 0;
unsigned short int var_1_4 = 5;
unsigned short int var_1_5 = 55712;
unsigned short int var_1_6 = 4;
unsigned short int var_1_7 = 8;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 32;
signed long int var_1_10 = 1;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 4;
float var_1_15 = 1.5;
float var_1_16 = 999.5;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
signed char var_1_19 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch13825_while
	unsigned short int stepLocal_2 = var_1_6;
	signed long int stepLocal_1 = abs (var_1_8);
	if ((max ((max (var_1_9 , 2)) , (var_1_6 * var_1_7))) <= stepLocal_1) {
		if (var_1_8 != stepLocal_2) {
			var_1_10 = var_1_9;
		}
	}


	// From: Req3Batch13825_while
	var_1_11 = (var_1_12 + (var_1_13 - var_1_14));


	// From: Req4Batch13825_while
	var_1_15 = var_1_16;


	// From: Req5Batch13825_while
	var_1_17 = var_1_18;


	// From: Req6Batch13825_while
	var_1_19 = var_1_14;


	// From: Req1Batch13825_while
	signed long int stepLocal_0 = var_1_10;
	if (var_1_11 >= stepLocal_0) {
		var_1_1 = (max (var_1_4 , (var_1_5 - (max (100 , var_1_6)))));
	} else {
		var_1_1 = (var_1_6 + (var_1_7 + (min (var_1_8 , var_1_9))));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16384);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_11 >= var_1_10) ? (var_1_1 == ((unsigned short int) (max (var_1_4 , (var_1_5 - (max (100 , var_1_6))))))) : (var_1_1 == ((unsigned short int) (var_1_6 + (var_1_7 + (min (var_1_8 , var_1_9))))))) && (((max ((max (var_1_9 , 2)) , (var_1_6 * var_1_7))) <= (abs (var_1_8))) ? ((var_1_8 != var_1_6) ? (var_1_10 == ((signed long int) var_1_9)) : 1) : 1)) && (var_1_11 == ((unsigned char) (var_1_12 + (var_1_13 - var_1_14))))) && (var_1_15 == ((float) var_1_16))) && (var_1_17 == ((unsigned char) var_1_18))) && (var_1_19 == ((signed char) var_1_14))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160stepLocals.c", 13, "reach_error"); }
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
signed short int var_1_1 = -64;
signed long int var_1_2 = -256;
signed long int var_1_3 = 1;
signed short int var_1_4 = 8;
signed short int var_1_5 = 500;
signed short int var_1_6 = 5;
signed short int var_1_7 = 100;
unsigned char var_1_8 = 1;
unsigned short int var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = -8;
signed short int var_1_14 = 23230;
signed short int var_1_15 = 32;
unsigned long int var_1_16 = 2;
unsigned long int var_1_17 = 1108857779;
signed long int var_1_18 = -100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch160stepLocals
	signed long int stepLocal_0 = var_1_2;
	if (stepLocal_0 >= var_1_3) {
		var_1_1 = ((var_1_4 - (var_1_5 + var_1_6)) + (1 - var_1_7));
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch160stepLocals
	if ((1 << (var_1_9 + 10)) >= var_1_1) {
		var_1_8 = (! (var_1_10 || var_1_11));
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req3Batch160stepLocals
	if (var_1_11 || var_1_8) {
		var_1_12 = 0;
	}


	// From: Req4Batch160stepLocals
	signed long int stepLocal_1 = (var_1_14 - var_1_5) - var_1_9;
	if (var_1_6 < stepLocal_1) {
		var_1_13 = (((var_1_9 + var_1_6) - var_1_5) + var_1_7);
	} else {
		var_1_13 = (abs (1 - 50));
	}


	// From: Req5Batch160stepLocals
	if (var_1_9 == var_1_14) {
		var_1_15 = (var_1_6 - var_1_4);
	}


	// From: Req6Batch160stepLocals
	if (((var_1_15 / var_1_14) * var_1_9) < (min (var_1_5 , (var_1_6 - var_1_4)))) {
		var_1_16 = (var_1_9 + (var_1_17 - var_1_14));
	}


	// From: Req7Batch160stepLocals
	signed long int stepLocal_3 = var_1_4 << var_1_16;
	unsigned short int stepLocal_2 = var_1_9;
	if (stepLocal_2 >= var_1_2) {
		var_1_18 = (var_1_4 + var_1_15);
	} else {
		if (var_1_5 > stepLocal_3) {
			var_1_18 = var_1_13;
		} else {
			var_1_18 = var_1_15;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8191);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 15);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 >= var_1_3) ? (var_1_1 == ((signed short int) ((var_1_4 - (var_1_5 + var_1_6)) + (1 - var_1_7)))) : (var_1_1 == ((signed short int) var_1_5))) && (((1 << (var_1_9 + 10)) >= var_1_1) ? (var_1_8 == ((unsigned char) (! (var_1_10 || var_1_11)))) : (var_1_8 == ((unsigned char) var_1_11)))) && ((var_1_11 || var_1_8) ? (var_1_12 == ((unsigned char) 0)) : 1)) && ((var_1_6 < ((var_1_14 - var_1_5) - var_1_9)) ? (var_1_13 == ((signed short int) (((var_1_9 + var_1_6) - var_1_5) + var_1_7))) : (var_1_13 == ((signed short int) (abs (1 - 50)))))) && ((var_1_9 == var_1_14) ? (var_1_15 == ((signed short int) (var_1_6 - var_1_4))) : 1)) && ((((var_1_15 / var_1_14) * var_1_9) < (min (var_1_5 , (var_1_6 - var_1_4)))) ? (var_1_16 == ((unsigned long int) (var_1_9 + (var_1_17 - var_1_14)))) : 1)) && ((var_1_9 >= var_1_2) ? (var_1_18 == ((signed long int) (var_1_4 + var_1_15))) : ((var_1_5 > (var_1_4 << var_1_16)) ? (var_1_18 == ((signed long int) var_1_13)) : (var_1_18 == ((signed long int) var_1_15))))
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

// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10Amount50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 4;
unsigned short int var_1_4 = 58792;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
unsigned short int var_1_7 = 16;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1000;
signed short int var_1_11 = 1;
signed short int var_1_12 = -25;
signed short int var_1_13 = 25;
unsigned short int var_1_14 = 5;
unsigned short int var_1_16 = 20511;
unsigned long int var_1_17 = 50;
unsigned short int var_1_18 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch10Amount50
	unsigned short int stepLocal_1 = var_1_6;
	unsigned char stepLocal_0 = last_1_var_1_8;
	if (last_1_var_1_8 && stepLocal_0) {
		var_1_1 = (((min (56892 , var_1_4)) - var_1_5) - (max (var_1_6 , var_1_7)));
	} else {
		if ((max (var_1_7 , var_1_5)) < stepLocal_1) {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch10Amount50
	var_1_8 = (((var_1_7 >= var_1_5) && (var_1_4 >= var_1_1)) || var_1_9);


	// From: Req4Batch10Amount50
	if (var_1_8) {
		var_1_14 = ((abs (var_1_4)) - (max (var_1_5 , (var_1_16 - var_1_11))));
	}


	// From: Req5Batch10Amount50
	signed long int stepLocal_4 = max (var_1_13 , (var_1_16 << var_1_7));
	if (stepLocal_4 >= var_1_14) {
		var_1_17 = var_1_11;
	} else {
		var_1_17 = (var_1_6 + var_1_5);
	}


	// From: Req6Batch10Amount50
	unsigned short int stepLocal_5 = var_1_5;
	if (stepLocal_5 == var_1_16) {
		if (var_1_8) {
			var_1_18 = (abs ((var_1_16 + 30393) - var_1_5));
		} else {
			var_1_18 = var_1_4;
		}
	} else {
		if (var_1_9) {
			var_1_18 = 200;
		}
	}


	// From: Req3Batch10Amount50
	unsigned char stepLocal_3 = var_1_9;
	unsigned long int stepLocal_2 = var_1_17;
	if (stepLocal_2 < var_1_6) {
		if ((var_1_6 != var_1_5) || stepLocal_3) {
			var_1_10 = (((10000 - var_1_11) - var_1_5) + (abs (var_1_12)));
		} else {
			var_1_10 = var_1_4;
		}
	} else {
		var_1_10 = var_1_13;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 49150);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 8191);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
}

int property() {
	return ((((((last_1_var_1_8 && last_1_var_1_8) ? (var_1_1 == ((unsigned short int) (((min (56892 , var_1_4)) - var_1_5) - (max (var_1_6 , var_1_7))))) : (((max (var_1_7 , var_1_5)) < var_1_6) ? (var_1_1 == ((unsigned short int) var_1_5)) : 1)) && (var_1_8 == ((unsigned char) (((var_1_7 >= var_1_5) && (var_1_4 >= var_1_1)) || var_1_9)))) && ((var_1_17 < var_1_6) ? (((var_1_6 != var_1_5) || var_1_9) ? (var_1_10 == ((signed short int) (((10000 - var_1_11) - var_1_5) + (abs (var_1_12))))) : (var_1_10 == ((signed short int) var_1_4))) : (var_1_10 == ((signed short int) var_1_13)))) && (var_1_8 ? (var_1_14 == ((unsigned short int) ((abs (var_1_4)) - (max (var_1_5 , (var_1_16 - var_1_11)))))) : 1)) && (((max (var_1_13 , (var_1_16 << var_1_7))) >= var_1_14) ? (var_1_17 == ((unsigned long int) var_1_11)) : (var_1_17 == ((unsigned long int) (var_1_6 + var_1_5))))) && ((var_1_5 == var_1_16) ? (var_1_8 ? (var_1_18 == ((unsigned short int) (abs ((var_1_16 + 30393) - var_1_5)))) : (var_1_18 == ((unsigned short int) var_1_4))) : (var_1_9 ? (var_1_18 == ((unsigned short int) 200)) : 1))
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

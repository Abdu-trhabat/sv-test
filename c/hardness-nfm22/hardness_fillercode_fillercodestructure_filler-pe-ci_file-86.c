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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86Filler_PE_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 128;
unsigned char var_1_6 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 500;
signed char var_1_11 = 4;
signed char var_1_12 = 1;
signed long int var_1_14 = 256;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 100;
signed char var_1_23 = 0;
signed char var_1_25 = 0;
signed char var_1_26 = 50;
signed char var_1_27 = -1;
signed char var_1_28 = 2;
signed char var_1_29 = 5;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 8;
signed short int var_1_32 = -5;
signed short int var_1_33 = -128;
unsigned long int var_1_34 = 1;
unsigned short int var_1_35 = 10;
signed long int var_1_36 = 32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 128;
unsigned char last_1_var_1_6 = 0;
signed long int last_1_var_1_10 = 500;
signed long int last_1_var_1_14 = 256;
unsigned char last_1_var_1_16 = 64;
unsigned short int last_1_var_1_22 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch86Filler_PE_CI
	signed long int stepLocal_0 = last_1_var_1_16 / -2;
	if (last_1_var_1_10 <= stepLocal_0) {
		var_1_1 = (57907 - (last_1_var_1_16 + last_1_var_1_16));
	} else {
		var_1_1 = 1;
	}


	// From: Req6Batch86Filler_PE_CI
	unsigned long int stepLocal_5 = (last_1_var_1_16 % var_1_15) + (last_1_var_1_22 / var_1_20);
	if (stepLocal_5 != last_1_var_1_10) {
		var_1_19 = var_1_9;
	} else {
		if (! (! last_1_var_1_6)) {
			var_1_19 = ((last_1_var_1_1 >= var_1_15) || (var_1_9 && var_1_21));
		}
	}


	// From: Req2Batch86Filler_PE_CI
	if (var_1_19) {
		var_1_6 = (last_1_var_1_6 || var_1_9);
	}


	// From: Req4Batch86Filler_PE_CI
	signed char stepLocal_2 = var_1_11;
	if (! var_1_19) {
		if (((var_1_15 - var_1_12) * (- last_1_var_1_14)) <= stepLocal_2) {
			var_1_14 = var_1_11;
		}
	}


	// From: Req7Batch86Filler_PE_CI
	var_1_22 = var_1_15;


	// From: Req5Batch86Filler_PE_CI
	unsigned short int stepLocal_4 = var_1_22;
	unsigned short int stepLocal_3 = var_1_22;
	if (stepLocal_3 >= var_1_12) {
		var_1_16 = (var_1_12 + var_1_17);
	} else {
		if (stepLocal_4 > var_1_22) {
			var_1_16 = (min (var_1_17 , var_1_12));
		} else {
			var_1_16 = var_1_12;
		}
	}


	// From: Req3Batch86Filler_PE_CI
	signed long int stepLocal_1 = var_1_11 - var_1_12;
	if (stepLocal_1 < (abs (min (32 , var_1_1)))) {
		var_1_10 = var_1_11;
	} else {
		if (var_1_19) {
			var_1_10 = var_1_16;
		} else {
			var_1_10 = var_1_16;
		}
	}


	// From: CodeObject1
	if (var_1_9) {
		var_1_23 = (min ((var_1_25 - (abs (var_1_26))) , (var_1_27 - var_1_28)));
	}


	// From: CodeObject2
	if ((var_1_22 / (var_1_30 + var_1_31)) >= var_1_27) {
		if (var_1_21 || ((var_1_27 >> var_1_26) > (var_1_30 | 10))) {
			if (var_1_26 > var_1_22) {
				var_1_29 = -1;
			} else {
				var_1_29 = var_1_25;
			}
		}
	} else {
		var_1_29 = var_1_25;
	}


	// From: CodeObject3
	var_1_32 = var_1_25;


	// From: CodeObject4
	var_1_33 = var_1_16;


	// From: CodeObject5
	if (-2 >= (var_1_16 & var_1_26)) {
		var_1_34 = (abs (var_1_28));
	} else {
		var_1_34 = ((min ((abs (var_1_31)) , var_1_28)) + var_1_30);
	}


	// From: CodeObject6
	if ((abs (var_1_16)) > (~ (var_1_30 % var_1_31))) {
		if (var_1_28 >= 2) {
			var_1_35 = (max (var_1_31 , var_1_28));
		} else {
			var_1_35 = var_1_31;
		}
	}


	// From: CodeObject7
	if ((abs (var_1_30)) <= (-2 ^ var_1_25)) {
		var_1_36 = var_1_28;
	} else {
		if ((var_1_17 ^ var_1_28) >= var_1_25) {
			var_1_36 = -2;
		}
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 4294967295);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -126);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -1);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 128);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 127);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_22 = var_1_22;
}

int property() {
	return (((((((last_1_var_1_10 <= (last_1_var_1_16 / -2)) ? (var_1_1 == ((unsigned short int) (57907 - (last_1_var_1_16 + last_1_var_1_16)))) : (var_1_1 == ((unsigned short int) 1))) && (var_1_19 ? (var_1_6 == ((unsigned char) (last_1_var_1_6 || var_1_9))) : 1)) && (((var_1_11 - var_1_12) < (abs (min (32 , var_1_1)))) ? (var_1_10 == ((signed long int) var_1_11)) : (var_1_19 ? (var_1_10 == ((signed long int) var_1_16)) : (var_1_10 == ((signed long int) var_1_16))))) && ((! var_1_19) ? ((((var_1_15 - var_1_12) * (- last_1_var_1_14)) <= var_1_11) ? (var_1_14 == ((signed long int) var_1_11)) : 1) : 1)) && ((var_1_22 >= var_1_12) ? (var_1_16 == ((unsigned char) (var_1_12 + var_1_17))) : ((var_1_22 > var_1_22) ? (var_1_16 == ((unsigned char) (min (var_1_17 , var_1_12)))) : (var_1_16 == ((unsigned char) var_1_12))))) && ((((last_1_var_1_16 % var_1_15) + (last_1_var_1_22 / var_1_20)) != last_1_var_1_10) ? (var_1_19 == ((unsigned char) var_1_9)) : ((! (! last_1_var_1_6)) ? (var_1_19 == ((unsigned char) ((last_1_var_1_1 >= var_1_15) || (var_1_9 && var_1_21)))) : 1))) && (var_1_22 == ((unsigned short int) var_1_15))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = 10;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 500;
signed long int var_1_4 = 25;
signed long int var_1_5 = 50;
signed long int var_1_6 = 50;
signed long int var_1_7 = 32;
signed long int var_1_8 = 500;
unsigned short int var_1_9 = 8;
signed long int var_1_10 = 32;
unsigned short int var_1_11 = 25;
unsigned short int var_1_12 = 25009;
unsigned short int var_1_13 = 32;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 32;
unsigned char var_1_18 = 25;
unsigned char var_1_19 = 10;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch179no_floats
	if (var_1_2 <= var_1_3) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		var_1_1 = ((var_1_6 + (var_1_7 + var_1_8)) - var_1_5);
	}


	// From: Req2Batch179no_floats
	unsigned char stepLocal_0 = var_1_14;
	if (var_1_7 <= ((- 16) * (var_1_6 / var_1_10))) {
		var_1_9 = (var_1_11 + ((abs (var_1_12)) - var_1_13));
	} else {
		if ((var_1_1 < (var_1_8 * var_1_5)) || stepLocal_0) {
			var_1_9 = var_1_13;
		} else {
			var_1_9 = var_1_12;
		}
	}


	// From: Req3Batch179no_floats
	if (var_1_14) {
		if (var_1_16) {
			var_1_15 = (max (((min (var_1_17 , var_1_18)) + (var_1_19 + var_1_20)) , var_1_21));
		} else {
			var_1_15 = var_1_21;
		}
	} else {
		var_1_15 = 10;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 16383);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 64);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 <= var_1_3) ? (var_1_1 == ((signed long int) (var_1_4 - var_1_5))) : (var_1_1 == ((signed long int) ((var_1_6 + (var_1_7 + var_1_8)) - var_1_5)))) && ((var_1_7 <= ((- 16) * (var_1_6 / var_1_10))) ? (var_1_9 == ((unsigned short int) (var_1_11 + ((abs (var_1_12)) - var_1_13)))) : (((var_1_1 < (var_1_8 * var_1_5)) || var_1_14) ? (var_1_9 == ((unsigned short int) var_1_13)) : (var_1_9 == ((unsigned short int) var_1_12))))) && (var_1_14 ? (var_1_16 ? (var_1_15 == ((unsigned char) (max (((min (var_1_17 , var_1_18)) + (var_1_19 + var_1_20)) , var_1_21)))) : (var_1_15 == ((unsigned char) var_1_21))) : (var_1_15 == ((unsigned char) 10)))
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

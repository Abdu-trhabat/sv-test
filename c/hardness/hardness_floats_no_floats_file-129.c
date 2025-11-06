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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch129no_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 0;
unsigned short int var_1_8 = 0;
signed long int var_1_9 = -100000000;
unsigned short int var_1_10 = 47589;
unsigned short int var_1_11 = 4;
signed long int var_1_12 = -10;
signed long int var_1_13 = 64;
signed long int var_1_14 = 2;
signed long int var_1_15 = 16;
signed long int var_1_16 = 2;
unsigned long int var_1_17 = 2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned short int last_1_var_1_6 = 0;
signed long int last_1_var_1_9 = -100000000;
unsigned long int last_1_var_1_17 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch129no_floats
	signed long int stepLocal_0 = last_1_var_1_9;
	if (! last_1_var_1_1) {
		if (stepLocal_0 > last_1_var_1_6) {
			var_1_1 = (last_1_var_1_1 || var_1_5);
		} else {
			if (! var_1_5) {
				var_1_1 = var_1_5;
			}
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req5Batch129no_floats
	var_1_17 = last_1_var_1_17;


	// From: Req3Batch129no_floats
	if (var_1_17 > (var_1_10 - var_1_11)) {
		var_1_9 = var_1_10;
	}


	// From: Req2Batch129no_floats
	unsigned long int stepLocal_1 = var_1_17;
	if (var_1_1) {
		if ((max (5 , var_1_17)) < stepLocal_1) {
			if (! var_1_5) {
				var_1_6 = var_1_8;
			} else {
				var_1_6 = 1;
			}
		}
	} else {
		var_1_6 = var_1_8;
	}


	// From: Req4Batch129no_floats
	if (var_1_8 > var_1_6) {
		var_1_12 = ((var_1_13 - (min (var_1_14 , var_1_15))) + var_1_16);
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65535);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	return (((((! last_1_var_1_1) ? ((last_1_var_1_9 > last_1_var_1_6) ? (var_1_1 == ((unsigned char) (last_1_var_1_1 || var_1_5))) : ((! var_1_5) ? (var_1_1 == ((unsigned char) var_1_5)) : 1)) : (var_1_1 == ((unsigned char) var_1_5))) && (var_1_1 ? (((max (5 , var_1_17)) < var_1_17) ? ((! var_1_5) ? (var_1_6 == ((unsigned short int) var_1_8)) : (var_1_6 == ((unsigned short int) 1))) : 1) : (var_1_6 == ((unsigned short int) var_1_8)))) && ((var_1_17 > (var_1_10 - var_1_11)) ? (var_1_9 == ((signed long int) var_1_10)) : 1)) && ((var_1_8 > var_1_6) ? (var_1_12 == ((signed long int) ((var_1_13 - (min (var_1_14 , var_1_15))) + var_1_16))) : 1)) && (var_1_17 == ((unsigned long int) last_1_var_1_17))
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

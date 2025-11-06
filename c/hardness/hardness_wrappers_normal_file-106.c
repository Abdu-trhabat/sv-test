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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106normal.c", 13, "reach_error"); }
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
signed long int var_1_1 = -64;
signed long int var_1_2 = -4;
float var_1_3 = 4.95;
unsigned char var_1_4 = 1;
float var_1_5 = 63.5;
float var_1_6 = 127.5;
float var_1_7 = 100.875;
float var_1_8 = 15.2;
signed char var_1_9 = 32;
signed char var_1_10 = 2;
signed long int var_1_11 = 25;
signed short int var_1_12 = -2;
unsigned char var_1_13 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch106normal
	var_1_1 = var_1_2;


	// From: Req2Batch106normal
	signed long int stepLocal_1 = var_1_1;
	signed long int stepLocal_0 = var_1_2;
	if (! var_1_4) {
		if (stepLocal_0 >= var_1_1) {
			var_1_3 = (var_1_5 + var_1_6);
		} else {
			if (stepLocal_1 <= var_1_2) {
				var_1_3 = (min ((min (var_1_6 , var_1_5)) , var_1_7));
			}
		}
	} else {
		var_1_3 = 64.6f;
	}


	// From: Req3Batch106normal
	signed long int stepLocal_3 = (max (var_1_9 , var_1_10)) >> var_1_11;
	unsigned char stepLocal_2 = var_1_4;
	if ((var_1_5 == var_1_7) || stepLocal_2) {
		if (stepLocal_3 >= (var_1_2 + -32)) {
			var_1_8 = var_1_5;
		} else {
			var_1_8 = var_1_6;
		}
	} else {
		var_1_8 = var_1_5;
	}


	// From: Req4Batch106normal
	unsigned char stepLocal_4 = var_1_13;
	if (var_1_4) {
		if ((8 > var_1_10) || stepLocal_4) {
			if (var_1_13) {
				var_1_12 = var_1_11;
			} else {
				var_1_12 = var_1_9;
			}
		} else {
			var_1_12 = var_1_11;
		}
	} else {
		var_1_12 = var_1_11;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483647);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 30);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_1 == ((signed long int) var_1_2)) && ((! var_1_4) ? ((var_1_2 >= var_1_1) ? (var_1_3 == ((float) (var_1_5 + var_1_6))) : ((var_1_1 <= var_1_2) ? (var_1_3 == ((float) (min ((min (var_1_6 , var_1_5)) , var_1_7)))) : 1)) : (var_1_3 == ((float) 64.6f)))) && (((var_1_5 == var_1_7) || var_1_4) ? ((((max (var_1_9 , var_1_10)) >> var_1_11) >= (var_1_2 + -32)) ? (var_1_8 == ((float) var_1_5)) : (var_1_8 == ((float) var_1_6))) : (var_1_8 == ((float) var_1_5)))) && (var_1_4 ? (((8 > var_1_10) || var_1_13) ? (var_1_13 ? (var_1_12 == ((signed short int) var_1_11)) : (var_1_12 == ((signed short int) var_1_9))) : (var_1_12 == ((signed short int) var_1_11))) : (var_1_12 == ((signed short int) var_1_11)))
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

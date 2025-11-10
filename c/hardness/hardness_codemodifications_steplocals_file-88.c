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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch88stepLocals.c", 13, "reach_error"); }
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
double var_1_1 = 15.8;
float var_1_2 = 9.5;
unsigned char var_1_3 = 1;
float var_1_4 = 127.6;
double var_1_5 = 100000000000000.5;
double var_1_6 = 100000000000000.7;
double var_1_7 = 256.75;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
signed char var_1_12 = 0;
signed char var_1_13 = 2;
signed char var_1_14 = 1;
double var_1_15 = 3.25;
float var_1_16 = 7.25;
unsigned short int var_1_17 = 0;
unsigned short int var_1_18 = 200;
signed long int var_1_19 = -50;
signed long int var_1_20 = -16;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch88stepLocals
	if (64.5f <= var_1_2) {
		if (var_1_3) {
			if (var_1_2 == var_1_4) {
				var_1_1 = (var_1_5 + (min ((max (var_1_6 , var_1_7)) , 50.25)));
			} else {
				var_1_1 = var_1_7;
			}
		} else {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch88stepLocals
	if (var_1_1 > ((var_1_4 * var_1_5) + 5.3)) {
		if ((var_1_7 + var_1_4) < var_1_6) {
			var_1_8 = var_1_9;
		} else {
			var_1_8 = var_1_10;
		}
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req3Batch88stepLocals
	if (((- var_1_4) / 24.75) < var_1_6) {
		if (var_1_7 >= var_1_4) {
			var_1_12 = var_1_13;
		} else {
			var_1_12 = var_1_14;
		}
	}


	// From: Req4Batch88stepLocals
	if (var_1_5 < var_1_7) {
		if (var_1_1 <= (- 8.5)) {
			var_1_15 = (var_1_5 + var_1_7);
		} else {
			var_1_15 = var_1_5;
		}
	} else {
		var_1_15 = var_1_6;
	}


	// From: Req5Batch88stepLocals
	if (var_1_5 < var_1_4) {
		if (! var_1_10) {
			var_1_16 = var_1_6;
		}
	}


	// From: Req6Batch88stepLocals
	signed long int stepLocal_0 = 500 / (min (var_1_19 , var_1_20));
	if ((- var_1_18) > stepLocal_0) {
		var_1_17 = (max (var_1_21 , var_1_22));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 65535);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	assume_abort_if_not(var_1_19 != 0);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -2147483648);
	assume_abort_if_not(var_1_20 <= 2147483647);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((64.5f <= var_1_2) ? (var_1_3 ? ((var_1_2 == var_1_4) ? (var_1_1 == ((double) (var_1_5 + (min ((max (var_1_6 , var_1_7)) , 50.25))))) : (var_1_1 == ((double) var_1_7))) : (var_1_1 == ((double) var_1_5))) : 1) && ((var_1_1 > ((var_1_4 * var_1_5) + 5.3)) ? (((var_1_7 + var_1_4) < var_1_6) ? (var_1_8 == ((unsigned char) var_1_9)) : (var_1_8 == ((unsigned char) var_1_10))) : (var_1_8 == ((unsigned char) var_1_11)))) && ((((- var_1_4) / 24.75) < var_1_6) ? ((var_1_7 >= var_1_4) ? (var_1_12 == ((signed char) var_1_13)) : (var_1_12 == ((signed char) var_1_14))) : 1)) && ((var_1_5 < var_1_7) ? ((var_1_1 <= (- 8.5)) ? (var_1_15 == ((double) (var_1_5 + var_1_7))) : (var_1_15 == ((double) var_1_5))) : (var_1_15 == ((double) var_1_6)))) && ((var_1_5 < var_1_4) ? ((! var_1_10) ? (var_1_16 == ((float) var_1_6)) : 1) : 1)) && (((- var_1_18) > (500 / (min (var_1_19 , var_1_20)))) ? (var_1_17 == ((unsigned short int) (max (var_1_21 , var_1_22)))) : 1)
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

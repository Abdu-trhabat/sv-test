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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch163Amount50.c", 13, "reach_error"); }
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
signed long int var_1_1 = 64;
double var_1_2 = 15.75;
double var_1_3 = 2.5;
signed long int var_1_4 = 0;
signed long int var_1_5 = 4;
signed long int var_1_6 = 25;
signed long int var_1_7 = -2;
unsigned long int var_1_8 = 8;
unsigned char var_1_9 = 1;
unsigned long int var_1_10 = 100;
unsigned long int var_1_11 = 5;
unsigned long int var_1_12 = 3498199434;
unsigned short int var_1_13 = 1;
double var_1_14 = 100000000000000.6;
unsigned short int var_1_15 = 128;
signed short int var_1_16 = -2;
signed long int var_1_17 = 1479159454;
signed short int var_1_19 = 10;
signed short int var_1_20 = 256;
signed short int var_1_21 = 32;
float var_1_22 = 2.75;
unsigned char var_1_23 = 1;
float var_1_24 = 15.5;
float var_1_25 = 8.8;
unsigned char var_1_26 = 1;
unsigned long int var_1_27 = 4;
unsigned char var_1_28 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch163Amount50
	if ((var_1_2 / 31.4) <= var_1_3) {
		var_1_1 = ((min ((var_1_4 + var_1_5) , var_1_6)) + var_1_7);
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req5Batch163Amount50
	if (var_1_9 || var_1_23) {
		var_1_22 = (min (var_1_24 , var_1_25));
	} else {
		if (var_1_4 == var_1_17) {
			var_1_22 = 16.25f;
		}
	}


	// From: Req6Batch163Amount50
	signed long int stepLocal_2 = (max (var_1_21 , var_1_19)) - var_1_20;
	if (stepLocal_2 > (256 << (2u + var_1_27))) {
		var_1_26 = 1;
	} else {
		var_1_26 = var_1_28;
	}


	// From: Req2Batch163Amount50
	signed long int stepLocal_0 = var_1_7;
	if (var_1_1 > stepLocal_0) {
		if (var_1_26) {
			var_1_8 = (min ((max (var_1_10 , var_1_11)) , (var_1_12 - 64u)));
		} else {
			var_1_8 = var_1_11;
		}
	}


	// From: Req3Batch163Amount50
	if (var_1_26 && (var_1_11 >= var_1_8)) {
		if (var_1_2 < (max (var_1_14 , var_1_3))) {
			var_1_13 = var_1_15;
		} else {
			var_1_13 = 10;
		}
	} else {
		var_1_13 = var_1_15;
	}


	// From: Req4Batch163Amount50
	signed long int stepLocal_1 = var_1_1;
	if (stepLocal_1 < (16 - (var_1_17 - var_1_13))) {
		if (1.000000000005E11 >= var_1_14) {
			var_1_16 = (var_1_21 - 10);
		} else {
			if (var_1_26) {
				var_1_16 = var_1_21;
			} else {
				var_1_16 = -16;
			}
		}
	} else {
		var_1_16 = var_1_21;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -536870911);
	assume_abort_if_not(var_1_4 <= 536870912);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -536870911);
	assume_abort_if_not(var_1_5 <= 536870911);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1073741823);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1073741823);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 2147483647);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 11);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 / 31.4) <= var_1_3) ? (var_1_1 == ((signed long int) ((min ((var_1_4 + var_1_5) , var_1_6)) + var_1_7))) : (var_1_1 == ((signed long int) var_1_6))) && ((var_1_1 > var_1_7) ? (var_1_26 ? (var_1_8 == ((unsigned long int) (min ((max (var_1_10 , var_1_11)) , (var_1_12 - 64u))))) : (var_1_8 == ((unsigned long int) var_1_11))) : 1)) && ((var_1_26 && (var_1_11 >= var_1_8)) ? ((var_1_2 < (max (var_1_14 , var_1_3))) ? (var_1_13 == ((unsigned short int) var_1_15)) : (var_1_13 == ((unsigned short int) 10))) : (var_1_13 == ((unsigned short int) var_1_15)))) && ((var_1_1 < (16 - (var_1_17 - var_1_13))) ? ((1.000000000005E11 >= var_1_14) ? (var_1_16 == ((signed short int) (var_1_21 - 10))) : (var_1_26 ? (var_1_16 == ((signed short int) var_1_21)) : (var_1_16 == ((signed short int) -16)))) : (var_1_16 == ((signed short int) var_1_21)))) && ((var_1_9 || var_1_23) ? (var_1_22 == ((float) (min (var_1_24 , var_1_25)))) : ((var_1_4 == var_1_17) ? (var_1_22 == ((float) 16.25f)) : 1))) && ((((max (var_1_21 , var_1_19)) - var_1_20) > (256 << (2u + var_1_27))) ? (var_1_26 == ((unsigned char) 1)) : (var_1_26 == ((unsigned char) var_1_28)))
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

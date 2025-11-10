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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145normal.c", 13, "reach_error"); }
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
signed short int var_1_1 = 50;
unsigned char var_1_2 = 0;
signed char var_1_3 = 8;
signed char var_1_4 = 16;
signed short int var_1_5 = 256;
signed short int var_1_6 = 2;
signed short int var_1_7 = 64;
signed short int var_1_8 = -50;
signed short int var_1_9 = 2;
signed long int var_1_10 = -16;
unsigned char var_1_11 = 1;
signed long int var_1_12 = 5;
unsigned short int var_1_13 = 32;
float var_1_14 = 10000000000.7;
float var_1_15 = 999.4;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 8;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 128;
unsigned long int var_1_23 = 2;
unsigned long int var_1_24 = 4138893358;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch145normal
	if (var_1_2) {
		if (var_1_3 == var_1_4) {
			var_1_1 = (((var_1_5 + var_1_6) + var_1_7) - (abs (abs (var_1_8))));
		} else {
			var_1_1 = (var_1_9 - var_1_6);
		}
	}


	// From: Req2Batch145normal
	if (var_1_2 || var_1_11) {
		var_1_10 = (max ((var_1_6 + var_1_1) , (var_1_9 + (var_1_5 - var_1_12))));
	} else {
		var_1_10 = (var_1_8 + var_1_7);
	}


	// From: Req3Batch145normal
	if ((var_1_14 + var_1_15) > 10.5f) {
		if (var_1_9 >= var_1_8) {
			var_1_13 = (37936 - var_1_7);
		}
	} else {
		var_1_13 = 50;
	}


	// From: Req4Batch145normal
	var_1_16 = (min (var_1_17 , var_1_18));


	// From: Req5Batch145normal
	if ((min ((var_1_18 >> var_1_20) , var_1_5)) < var_1_17) {
		var_1_19 = var_1_18;
	}


	// From: Req6Batch145normal
	if (! var_1_11) {
		var_1_21 = (var_1_22 - var_1_20);
	} else {
		var_1_21 = var_1_17;
	}


	// From: Req7Batch145normal
	var_1_23 = (var_1_24 - var_1_7);


	// From: Req8Batch145normal
	if (var_1_10 >= (var_1_4 + (var_1_17 - var_1_16))) {
		if (var_1_5 >= var_1_18) {
			if (var_1_14 == var_1_15) {
				var_1_25 = 0;
			} else {
				var_1_25 = var_1_26;
			}
		} else {
			var_1_25 = var_1_26;
		}
	} else {
		var_1_25 = var_1_27;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8191);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32766);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 7);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 127);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 2147483647);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 ? ((var_1_3 == var_1_4) ? (var_1_1 == ((signed short int) (((var_1_5 + var_1_6) + var_1_7) - (abs (abs (var_1_8)))))) : (var_1_1 == ((signed short int) (var_1_9 - var_1_6)))) : 1) && ((var_1_2 || var_1_11) ? (var_1_10 == ((signed long int) (max ((var_1_6 + var_1_1) , (var_1_9 + (var_1_5 - var_1_12)))))) : (var_1_10 == ((signed long int) (var_1_8 + var_1_7))))) && (((var_1_14 + var_1_15) > 10.5f) ? ((var_1_9 >= var_1_8) ? (var_1_13 == ((unsigned short int) (37936 - var_1_7))) : 1) : (var_1_13 == ((unsigned short int) 50)))) && (var_1_16 == ((unsigned char) (min (var_1_17 , var_1_18))))) && (((min ((var_1_18 >> var_1_20) , var_1_5)) < var_1_17) ? (var_1_19 == ((unsigned long int) var_1_18)) : 1)) && ((! var_1_11) ? (var_1_21 == ((unsigned char) (var_1_22 - var_1_20))) : (var_1_21 == ((unsigned char) var_1_17)))) && (var_1_23 == ((unsigned long int) (var_1_24 - var_1_7)))) && ((var_1_10 >= (var_1_4 + (var_1_17 - var_1_16))) ? ((var_1_5 >= var_1_18) ? ((var_1_14 == var_1_15) ? (var_1_25 == ((unsigned char) 0)) : (var_1_25 == ((unsigned char) var_1_26))) : (var_1_25 == ((unsigned char) var_1_26))) : (var_1_25 == ((unsigned char) var_1_27)))
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

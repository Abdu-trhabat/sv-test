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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch158stepLocals.c", 13, "reach_error"); }
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
signed long int var_1_1 = -128;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 1;
signed long int var_1_4 = -64;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
double var_1_7 = 500.625;
double var_1_8 = 16.5;
double var_1_9 = 99.5;
signed long int var_1_10 = 5;
signed long int var_1_11 = 64;
signed long int var_1_12 = -5;
signed long int var_1_13 = 1;
unsigned long int var_1_14 = 2;
signed long int var_1_15 = 256;
signed long int var_1_17 = -10;
signed short int var_1_18 = 256;
signed short int var_1_19 = 10;
signed short int var_1_20 = -128;
unsigned char var_1_21 = 4;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
signed char var_1_25 = -32;
signed char var_1_26 = -10;
signed long int var_1_27 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch158stepLocals
	unsigned char stepLocal_0 = var_1_3 < var_1_4;
	if (stepLocal_0 && ((var_1_2 || var_1_5) && var_1_6)) {
		if ((- (9.75 + var_1_7)) >= (var_1_8 - var_1_9)) {
			var_1_1 = (var_1_10 + var_1_11);
		} else {
			var_1_1 = var_1_10;
		}
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req2Batch158stepLocals
	signed long int stepLocal_1 = var_1_10 * -32;
	if ((var_1_13 >> var_1_14) < stepLocal_1) {
		var_1_12 = var_1_17;
	} else {
		var_1_12 = var_1_11;
	}


	// From: Req3Batch158stepLocals
	if (var_1_7 > var_1_9) {
		var_1_18 = var_1_20;
	}


	// From: Req4Batch158stepLocals
	signed long int stepLocal_2 = -256;
	if (var_1_2) {
		if (var_1_17 > stepLocal_2) {
			var_1_21 = (max (8 , var_1_14));
		}
	}


	// From: Req5Batch158stepLocals
	var_1_22 = ((var_1_2 && var_1_23) || (! var_1_24));


	// From: Req6Batch158stepLocals
	unsigned char stepLocal_5 = var_1_5;
	unsigned long int stepLocal_4 = var_1_13 / var_1_14;
	signed long int stepLocal_3 = var_1_19 * var_1_1;
	if (stepLocal_5 || (var_1_17 < var_1_21)) {
		var_1_25 = var_1_14;
	} else {
		if (stepLocal_3 > ((max (var_1_15 , var_1_13)) - var_1_21)) {
			if (stepLocal_4 <= var_1_15) {
				var_1_25 = var_1_14;
			} else {
				var_1_25 = var_1_26;
			}
		}
	}


	// From: Req7Batch158stepLocals
	if (var_1_26 <= (-1 * var_1_18)) {
		var_1_27 = var_1_21;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -1073741823);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1073741823);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 30);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -268435455);
	assume_abort_if_not(var_1_17 <= 268435456);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32767);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_3 < var_1_4) && ((var_1_2 || var_1_5) && var_1_6)) ? (((- (9.75 + var_1_7)) >= (var_1_8 - var_1_9)) ? (var_1_1 == ((signed long int) (var_1_10 + var_1_11))) : (var_1_1 == ((signed long int) var_1_10))) : (var_1_1 == ((signed long int) var_1_10))) && (((var_1_13 >> var_1_14) < (var_1_10 * -32)) ? (var_1_12 == ((signed long int) var_1_17)) : (var_1_12 == ((signed long int) var_1_11)))) && ((var_1_7 > var_1_9) ? (var_1_18 == ((signed short int) var_1_20)) : 1)) && (var_1_2 ? ((var_1_17 > -256) ? (var_1_21 == ((unsigned char) (max (8 , var_1_14)))) : 1) : 1)) && (var_1_22 == ((unsigned char) ((var_1_2 && var_1_23) || (! var_1_24))))) && ((var_1_5 || (var_1_17 < var_1_21)) ? (var_1_25 == ((signed char) var_1_14)) : (((var_1_19 * var_1_1) > ((max (var_1_15 , var_1_13)) - var_1_21)) ? (((var_1_13 / var_1_14) <= var_1_15) ? (var_1_25 == ((signed char) var_1_14)) : (var_1_25 == ((signed char) var_1_26))) : 1))) && ((var_1_26 <= (-1 * var_1_18)) ? (var_1_27 == ((signed long int) var_1_21)) : 1)
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

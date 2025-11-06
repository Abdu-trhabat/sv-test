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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch46Amount50.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 10;
signed long int var_1_6 = 2;
signed char var_1_7 = 10;
signed long int var_1_8 = -25;
signed char var_1_9 = -16;
signed char var_1_10 = -2;
signed char var_1_11 = 2;
signed char var_1_12 = 10;
signed char var_1_13 = 4;
signed char var_1_14 = -10;
double var_1_15 = 32.25;
double var_1_16 = 64.7;
double var_1_17 = 9.42;
double var_1_18 = 0.0;
unsigned short int var_1_19 = 8;
signed long int var_1_20 = 256;
unsigned short int var_1_21 = 8;
unsigned short int var_1_22 = 27400;
double var_1_23 = 499.5;
double var_1_24 = 50.5;
unsigned char var_1_25 = 8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_20 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch46Amount50
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2 && stepLocal_0) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch46Amount50
	var_1_6 = (var_1_5 + var_1_4);


	// From: Req3Batch46Amount50
	signed long int stepLocal_1 = var_1_4 / var_1_8;
	if (stepLocal_1 != var_1_1) {
		var_1_7 = (min (((abs (var_1_9)) + var_1_10) , var_1_11));
	} else {
		var_1_7 = (var_1_12 - var_1_13);
	}


	// From: Req4Batch46Amount50
	signed long int stepLocal_2 = var_1_8;
	if ((var_1_15 * (max (var_1_16 , var_1_17))) >= var_1_18) {
		if (stepLocal_2 < ((var_1_5 << var_1_11) + (var_1_4 + var_1_6))) {
			var_1_14 = var_1_12;
		} else {
			var_1_14 = (var_1_9 + var_1_10);
		}
	}


	// From: Req6Batch46Amount50
	if ((last_1_var_1_20 ^ var_1_6) >= var_1_13) {
		var_1_20 = (max (-5 , (abs (var_1_4))));
	}


	// From: Req7Batch46Amount50
	if (var_1_12 == var_1_6) {
		var_1_21 = ((max (var_1_5 , var_1_6)) + (var_1_22 - var_1_13));
	} else {
		var_1_21 = var_1_6;
	}


	// From: Req8Batch46Amount50
	var_1_23 = var_1_24;


	// From: Req9Batch46Amount50
	var_1_25 = 64;


	// From: Req5Batch46Amount50
	signed long int stepLocal_3 = var_1_12 % (abs (var_1_4));
	if (stepLocal_3 != -10) {
		var_1_19 = (min (4 , var_1_21));
	} else {
		var_1_19 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 16383);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	return (((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned char) var_1_4))) && (var_1_6 == ((signed long int) (var_1_5 + var_1_4)))) && (((var_1_4 / var_1_8) != var_1_1) ? (var_1_7 == ((signed char) (min (((abs (var_1_9)) + var_1_10) , var_1_11)))) : (var_1_7 == ((signed char) (var_1_12 - var_1_13))))) && (((var_1_15 * (max (var_1_16 , var_1_17))) >= var_1_18) ? ((var_1_8 < ((var_1_5 << var_1_11) + (var_1_4 + var_1_6))) ? (var_1_14 == ((signed char) var_1_12)) : (var_1_14 == ((signed char) (var_1_9 + var_1_10)))) : 1)) && (((var_1_12 % (abs (var_1_4))) != -10) ? (var_1_19 == ((unsigned short int) (min (4 , var_1_21)))) : (var_1_19 == ((unsigned short int) var_1_13)))) && (((last_1_var_1_20 ^ var_1_6) >= var_1_13) ? (var_1_20 == ((signed long int) (max (-5 , (abs (var_1_4)))))) : 1)) && ((var_1_12 == var_1_6) ? (var_1_21 == ((unsigned short int) ((max (var_1_5 , var_1_6)) + (var_1_22 - var_1_13)))) : (var_1_21 == ((unsigned short int) var_1_6)))) && (var_1_23 == ((double) var_1_24))) && (var_1_25 == ((unsigned char) 64))
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

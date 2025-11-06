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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147stepLocals.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 1;
unsigned char var_1_2 = 128;
unsigned char var_1_3 = 32;
unsigned char var_1_4 = 5;
double var_1_5 = 1.625;
double var_1_6 = 7.5;
double var_1_7 = 9.9;
unsigned long int var_1_8 = 100000000;
unsigned char var_1_9 = 1;
unsigned short int var_1_10 = 10;
unsigned long int var_1_11 = 3110153948;
signed char var_1_12 = 16;
signed char var_1_13 = -1;
signed char var_1_14 = 100;
signed char var_1_15 = -25;
signed long int var_1_16 = 64;
signed long int var_1_17 = -10;
signed long int var_1_18 = 4;
unsigned char var_1_19 = 1;
signed long int var_1_20 = 1880114960;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch147stepLocals
	if (var_1_2 > var_1_3) {
		if (var_1_3 == (128 - var_1_4)) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = (max ((abs (var_1_3)) , (abs (32u))));
		}
	} else {
		var_1_1 = var_1_2;
	}


	// From: Req2Batch147stepLocals
	unsigned long int stepLocal_0 = var_1_1;
	if (stepLocal_0 == var_1_4) {
		var_1_5 = (var_1_6 + var_1_7);
	}


	// From: Req3Batch147stepLocals
	if ((var_1_1 < 16u) || var_1_9) {
		if (var_1_9) {
			if (var_1_10 >= var_1_4) {
				var_1_8 = (var_1_11 - var_1_2);
			} else {
				var_1_8 = var_1_2;
			}
		} else {
			var_1_8 = var_1_10;
		}
	} else {
		var_1_8 = var_1_2;
	}


	// From: Req4Batch147stepLocals
	if (-1000000 != var_1_1) {
		var_1_12 = (min ((max (var_1_13 , var_1_14)) , var_1_15));
	}


	// From: Req5Batch147stepLocals
	if (var_1_4 <= (var_1_10 + (var_1_12 + 5))) {
		var_1_16 = var_1_2;
	}


	// From: Req6Batch147stepLocals
	signed char stepLocal_1 = var_1_15;
	if ((min (var_1_12 , var_1_13)) <= stepLocal_1) {
		var_1_17 = (var_1_3 - var_1_10);
	}


	// From: Req7Batch147stepLocals
	if (var_1_9) {
		if (var_1_19) {
			var_1_18 = (min ((max (var_1_4 , var_1_14)) , (2 + var_1_13)));
		}
	} else {
		var_1_18 = (var_1_4 - (var_1_20 - var_1_3));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65535);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 1073741823);
	assume_abort_if_not(var_1_20 <= 2147483646);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 > var_1_3) ? ((var_1_3 == (128 - var_1_4)) ? (var_1_1 == ((unsigned long int) var_1_4)) : (var_1_1 == ((unsigned long int) (max ((abs (var_1_3)) , (abs (32u))))))) : (var_1_1 == ((unsigned long int) var_1_2))) && ((var_1_1 == var_1_4) ? (var_1_5 == ((double) (var_1_6 + var_1_7))) : 1)) && (((var_1_1 < 16u) || var_1_9) ? (var_1_9 ? ((var_1_10 >= var_1_4) ? (var_1_8 == ((unsigned long int) (var_1_11 - var_1_2))) : (var_1_8 == ((unsigned long int) var_1_2))) : (var_1_8 == ((unsigned long int) var_1_10))) : (var_1_8 == ((unsigned long int) var_1_2)))) && ((-1000000 != var_1_1) ? (var_1_12 == ((signed char) (min ((max (var_1_13 , var_1_14)) , var_1_15)))) : 1)) && ((var_1_4 <= (var_1_10 + (var_1_12 + 5))) ? (var_1_16 == ((signed long int) var_1_2)) : 1)) && (((min (var_1_12 , var_1_13)) <= var_1_15) ? (var_1_17 == ((signed long int) (var_1_3 - var_1_10))) : 1)) && (var_1_9 ? (var_1_19 ? (var_1_18 == ((signed long int) (min ((max (var_1_4 , var_1_14)) , (2 + var_1_13))))) : 1) : (var_1_18 == ((signed long int) (var_1_4 - (var_1_20 - var_1_3)))))
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

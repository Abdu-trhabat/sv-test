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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch155stepLocals.c", 13, "reach_error"); }
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
float var_1_1 = 0.8;
unsigned char var_1_2 = 0;
float var_1_3 = 3.25;
float var_1_4 = 15.25;
float var_1_5 = 3.2;
float var_1_6 = 100.5;
signed long int var_1_7 = 100;
double var_1_8 = 31.2;
signed long int var_1_9 = -256;
signed long int var_1_10 = 64;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 5;
unsigned short int var_1_14 = 51323;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 50;
signed char var_1_17 = -16;
signed char var_1_18 = 25;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 64;
unsigned char var_1_22 = 2;
unsigned char var_1_23 = 4;
unsigned short int var_1_24 = 0;
signed short int var_1_25 = 128;
signed short int var_1_26 = -20555;
unsigned short int var_1_27 = 8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch155stepLocals
	if (var_1_2) {
		var_1_1 = var_1_3;
	} else {
		var_1_1 = (max (var_1_3 , ((var_1_4 + var_1_5) + var_1_6)));
	}


	// From: Req2Batch155stepLocals
	if ((min (var_1_5 , (- 50.6))) <= ((max (var_1_4 , var_1_3)) / var_1_8)) {
		var_1_7 = var_1_9;
	} else {
		var_1_7 = var_1_10;
	}


	// From: Req3Batch155stepLocals
	if ((abs (var_1_7)) == var_1_9) {
		var_1_11 = var_1_12;
	}


	// From: Req4Batch155stepLocals
	if ((32.3 * var_1_1) > var_1_8) {
		var_1_13 = (abs (var_1_14 - var_1_15));
	}


	// From: Req5Batch155stepLocals
	var_1_16 = (var_1_17 + var_1_18);


	// From: Req6Batch155stepLocals
	if (((var_1_20 ^ var_1_7) / var_1_21) >= var_1_17) {
		var_1_19 = (var_1_22 + var_1_23);
	}


	// From: Req7Batch155stepLocals
	if (var_1_13 > (var_1_10 * var_1_15)) {
		var_1_24 = (var_1_14 - var_1_19);
	} else {
		var_1_24 = (var_1_14 - (max (var_1_22 , var_1_21)));
	}


	// From: Req8Batch155stepLocals
	if (var_1_12) {
		var_1_25 = (((abs (var_1_26)) - 25) - var_1_21);
	}


	// From: Req9Batch155stepLocals
	if ((~ (abs (var_1_21))) > var_1_10) {
		var_1_27 = 10;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -230584.3009213691400e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -230584.3009213691400e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483647);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483647);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 255);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 255);
	assume_abort_if_not(var_1_21 != 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32766);
	assume_abort_if_not(var_1_26 <= -16382);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 ? (var_1_1 == ((float) var_1_3)) : (var_1_1 == ((float) (max (var_1_3 , ((var_1_4 + var_1_5) + var_1_6)))))) && (((min (var_1_5 , (- 50.6))) <= ((max (var_1_4 , var_1_3)) / var_1_8)) ? (var_1_7 == ((signed long int) var_1_9)) : (var_1_7 == ((signed long int) var_1_10)))) && (((abs (var_1_7)) == var_1_9) ? (var_1_11 == ((unsigned char) var_1_12)) : 1)) && (((32.3 * var_1_1) > var_1_8) ? (var_1_13 == ((unsigned short int) (abs (var_1_14 - var_1_15)))) : 1)) && (var_1_16 == ((signed char) (var_1_17 + var_1_18)))) && ((((var_1_20 ^ var_1_7) / var_1_21) >= var_1_17) ? (var_1_19 == ((unsigned char) (var_1_22 + var_1_23))) : 1)) && ((var_1_13 > (var_1_10 * var_1_15)) ? (var_1_24 == ((unsigned short int) (var_1_14 - var_1_19))) : (var_1_24 == ((unsigned short int) (var_1_14 - (max (var_1_22 , var_1_21))))))) && (var_1_12 ? (var_1_25 == ((signed short int) (((abs (var_1_26)) - 25) - var_1_21))) : 1)) && (((~ (abs (var_1_21))) > var_1_10) ? (var_1_27 == ((unsigned short int) 10)) : 1)
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

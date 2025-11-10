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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch95normal.c", 13, "reach_error"); }
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
signed long int var_1_2 = 10;
float var_1_3 = 1.8;
float var_1_4 = 8.54;
float var_1_5 = 255.8;
float var_1_6 = 50.4;
unsigned char var_1_7 = 0;
unsigned long int var_1_8 = 8;
unsigned long int var_1_9 = 256;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 2;
signed short int var_1_13 = 0;
unsigned long int var_1_14 = 16;
unsigned long int var_1_15 = 256;
unsigned long int var_1_16 = 16;
double var_1_17 = 63.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch95normal
	var_1_1 = (abs (var_1_2));


	// From: Req2Batch95normal
	var_1_3 = ((var_1_4 - var_1_5) + (min (256.5f , (var_1_6 - 16.125f))));


	// From: Req3Batch95normal
	unsigned long int stepLocal_0 = - (3351680781u - var_1_8);
	if (stepLocal_0 > (var_1_1 & var_1_9)) {
		var_1_7 = ((min (var_1_10 , (abs (var_1_11)))) + var_1_12);
	}


	// From: Req4Batch95normal
	if ((var_1_7 / var_1_14) < (var_1_15 >> var_1_16)) {
		var_1_13 = (abs (4 - var_1_12));
	} else {
		if (var_1_9 >= var_1_1) {
			var_1_13 = (max ((256 - var_1_16) , var_1_7));
		} else {
			var_1_13 = var_1_12;
		}
	}


	// From: Req5Batch95normal
	var_1_17 = var_1_6;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483646);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967295);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 4294967295);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 31);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_1 == ((signed long int) (abs (var_1_2)))) && (var_1_3 == ((float) ((var_1_4 - var_1_5) + (min (256.5f , (var_1_6 - 16.125f))))))) && (((- (3351680781u - var_1_8)) > (var_1_1 & var_1_9)) ? (var_1_7 == ((unsigned char) ((min (var_1_10 , (abs (var_1_11)))) + var_1_12))) : 1)) && (((var_1_7 / var_1_14) < (var_1_15 >> var_1_16)) ? (var_1_13 == ((signed short int) (abs (4 - var_1_12)))) : ((var_1_9 >= var_1_1) ? (var_1_13 == ((signed short int) (max ((256 - var_1_16) , var_1_7)))) : (var_1_13 == ((signed short int) var_1_12))))) && (var_1_17 == ((double) var_1_6))
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

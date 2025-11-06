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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199has_floats.c", 13, "reach_error"); }
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
float var_1_1 = -8.0;
unsigned char var_1_2 = 0;
float var_1_3 = 5.0;
float var_1_4 = 5.0;
float var_1_5 = 4.0;
float var_1_6 = 1000000.0;
signed char var_1_7 = 4;
unsigned short int var_1_8 = 42112;
unsigned short int var_1_9 = 8;
unsigned char var_1_10 = 0;
signed char var_1_11 = 1;
unsigned short int var_1_12 = 2;
unsigned short int var_1_13 = 128;
unsigned short int var_1_14 = 25;
unsigned short int var_1_15 = 4;
unsigned char var_1_16 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch199has_floats
	if (var_1_2) {
		var_1_1 = ((max ((abs (var_1_3)) , var_1_4)) - 2.0f);
	} else {
		var_1_1 = (var_1_5 + var_1_6);
	}


	// From: Req3Batch199has_floats
	var_1_12 = (min (var_1_13 , (var_1_14 + 5)));


	// From: Req4Batch199has_floats
	signed long int stepLocal_1 = max ((var_1_13 - var_1_8) , (var_1_12 - var_1_9));
	unsigned char stepLocal_0 = var_1_16;
	if (-500 > stepLocal_1) {
		if ((var_1_10 || var_1_2) && stepLocal_0) {
			var_1_15 = var_1_14;
		} else {
			var_1_15 = var_1_13;
		}
	} else {
		var_1_15 = var_1_13;
	}


	// From: Req2Batch199has_floats
	if (((var_1_8 - 8) + var_1_12) < -500) {
		if (var_1_12 <= var_1_8) {
			if ((! var_1_2) && var_1_10) {
				var_1_7 = var_1_11;
			}
		} else {
			var_1_7 = var_1_11;
		}
	} else {
		var_1_7 = var_1_11;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65535);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65535);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((float) ((max ((abs (var_1_3)) , var_1_4)) - 2.0f))) : (var_1_1 == ((float) (var_1_5 + var_1_6)))) && ((((var_1_8 - 8) + var_1_12) < -500) ? ((var_1_12 <= var_1_8) ? (((! var_1_2) && var_1_10) ? (var_1_7 == ((signed char) var_1_11)) : 1) : (var_1_7 == ((signed char) var_1_11))) : (var_1_7 == ((signed char) var_1_11)))) && (var_1_12 == ((unsigned short int) (min (var_1_13 , (var_1_14 + 5)))))) && ((-500 > (max ((var_1_13 - var_1_8) , (var_1_12 - var_1_9)))) ? (((var_1_10 || var_1_2) && var_1_16) ? (var_1_15 == ((unsigned short int) var_1_14)) : (var_1_15 == ((unsigned short int) var_1_13))) : (var_1_15 == ((unsigned short int) var_1_13)))
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

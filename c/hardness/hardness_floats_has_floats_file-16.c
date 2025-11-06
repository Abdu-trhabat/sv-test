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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16has_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed short int var_1_3 = 4;
signed short int var_1_4 = 256;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
float var_1_7 = 2.0;
float var_1_8 = 2.0;
float var_1_9 = 128.0;
float var_1_10 = 1.0;
float var_1_11 = 64.0;
float var_1_12 = 32.0;
float var_1_13 = -64.0;
float var_1_14 = 10.0;
float var_1_15 = 16.0;
float var_1_16 = 8.0;
float var_1_17 = 10000.0;
signed short int var_1_18 = -32;
signed short int var_1_19 = -64;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch16has_floats
	signed short int stepLocal_0 = var_1_3;
	if (var_1_4 <= stepLocal_0) {
		var_1_7 = ((max (var_1_8 , var_1_9)) - (var_1_10 + 64.0f));
	} else {
		var_1_7 = ((max (var_1_10 , var_1_11)) + var_1_12);
	}


	// From: Req4Batch16has_floats
	var_1_18 = var_1_19;


	// From: Req1Batch16has_floats
	if ((var_1_18 % (max (var_1_3 , var_1_4))) <= -1000000) {
		var_1_1 = (var_1_5 || var_1_6);
	}


	// From: Req3Batch16has_floats
	unsigned char stepLocal_1 = var_1_8 > var_1_12;
	if (stepLocal_1 || var_1_1) {
		var_1_13 = (var_1_10 + ((var_1_14 - var_1_15) + var_1_16));
	} else {
		if (var_1_9 >= (10.0f / -64.0f)) {
			if (var_1_1) {
				var_1_13 = var_1_17;
			} else {
				var_1_13 = var_1_10;
			}
		} else {
			var_1_13 = var_1_9;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32767);
	assume_abort_if_not(var_1_19 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_18 % (max (var_1_3 , var_1_4))) <= -1000000) ? (var_1_1 == ((unsigned char) (var_1_5 || var_1_6))) : 1) && ((var_1_4 <= var_1_3) ? (var_1_7 == ((float) ((max (var_1_8 , var_1_9)) - (var_1_10 + 64.0f)))) : (var_1_7 == ((float) ((max (var_1_10 , var_1_11)) + var_1_12))))) && (((var_1_8 > var_1_12) || var_1_1) ? (var_1_13 == ((float) (var_1_10 + ((var_1_14 - var_1_15) + var_1_16)))) : ((var_1_9 >= (10.0f / -64.0f)) ? (var_1_1 ? (var_1_13 == ((float) var_1_17)) : (var_1_13 == ((float) var_1_10))) : (var_1_13 == ((float) var_1_9))))) && (var_1_18 == ((signed short int) var_1_19))
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

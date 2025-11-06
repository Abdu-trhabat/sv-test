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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch110has_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
signed long int var_1_3 = 1;
signed long int var_1_4 = -10;
signed long int var_1_5 = -1000;
signed long int var_1_6 = -16;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
double var_1_10 = 256.0;
double var_1_11 = -2.0;
double var_1_12 = 64.0;
double var_1_13 = 256.0;
float var_1_14 = -128.0;
float var_1_15 = 50.0;
float var_1_16 = -10.0;
float var_1_17 = -10.0;
unsigned short int var_1_18 = 0;
unsigned short int var_1_19 = 100;
unsigned short int var_1_20 = 16;
unsigned short int var_1_21 = 10;
unsigned short int var_1_22 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch110has_floats
	signed long int stepLocal_0 = var_1_3;
	if (stepLocal_0 != ((min (var_1_4 , var_1_5)) / var_1_6)) {
		var_1_1 = (! var_1_7);
	} else {
		var_1_1 = ((var_1_7 && var_1_8) && var_1_9);
	}


	// From: Req2Batch110has_floats
	var_1_10 = (min ((var_1_11 + var_1_12) , (abs (var_1_13))));


	// From: Req3Batch110has_floats
	if (var_1_12 != var_1_13) {
		var_1_14 = (var_1_15 - 1.0f);
	} else {
		if (var_1_10 > (-32.0 + var_1_11)) {
			var_1_14 = var_1_16;
		} else {
			var_1_14 = var_1_17;
		}
	}


	// From: Req4Batch110has_floats
	signed long int stepLocal_1 = var_1_6;
	if (var_1_4 >= stepLocal_1) {
		var_1_18 = ((min (var_1_19 , (128 + var_1_20))) + (abs (min (var_1_21 , var_1_22))));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_3 != ((min (var_1_4 , var_1_5)) / var_1_6)) ? (var_1_1 == ((unsigned char) (! var_1_7))) : (var_1_1 == ((unsigned char) ((var_1_7 && var_1_8) && var_1_9)))) && (var_1_10 == ((double) (min ((var_1_11 + var_1_12) , (abs (var_1_13))))))) && ((var_1_12 != var_1_13) ? (var_1_14 == ((float) (var_1_15 - 1.0f))) : ((var_1_10 > (-32.0 + var_1_11)) ? (var_1_14 == ((float) var_1_16)) : (var_1_14 == ((float) var_1_17))))) && ((var_1_4 >= var_1_6) ? (var_1_18 == ((unsigned short int) ((min (var_1_19 , (128 + var_1_20))) + (abs (min (var_1_21 , var_1_22)))))) : 1)
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

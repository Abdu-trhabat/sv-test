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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149has_floats.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 4;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 52712;
unsigned short int var_1_4 = 25;
unsigned long int var_1_5 = 64;
double var_1_6 = 200.0;
double var_1_7 = -500.0;
double var_1_8 = -32.0;
float var_1_9 = 10.0;
float var_1_10 = 10.0;
float var_1_11 = 32.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch149has_floats
	signed long int stepLocal_2 = 4;
	unsigned short int stepLocal_1 = var_1_3;
	signed long int stepLocal_0 = - 4;
	if (var_1_2) {
		var_1_1 = (var_1_3 - var_1_4);
	} else {
		if (stepLocal_1 == var_1_4) {
			if (var_1_3 < stepLocal_2) {
				var_1_1 = var_1_4;
			} else {
				if (stepLocal_0 < var_1_3) {
					var_1_1 = (min (var_1_3 , var_1_4));
				} else {
					var_1_1 = var_1_3;
				}
			}
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req2Batch149has_floats
	unsigned short int stepLocal_4 = var_1_4;
	unsigned short int stepLocal_3 = var_1_3;
	if (var_1_3 < stepLocal_4) {
		if (var_1_1 < stepLocal_3) {
			var_1_5 = (var_1_4 + var_1_1);
		} else {
			var_1_5 = var_1_1;
		}
	}


	// From: Req3Batch149has_floats
	var_1_6 = (var_1_7 + var_1_8);


	// From: Req4Batch149has_floats
	if (var_1_6 == 8.0) {
		var_1_9 = ((min (0.0f , 2.0f)) - (min (var_1_10 , var_1_11)));
	} else {
		var_1_9 = -64.0f;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((unsigned short int) (var_1_3 - var_1_4))) : ((var_1_3 == var_1_4) ? ((var_1_3 < 4) ? (var_1_1 == ((unsigned short int) var_1_4)) : (((- 4) < var_1_3) ? (var_1_1 == ((unsigned short int) (min (var_1_3 , var_1_4)))) : (var_1_1 == ((unsigned short int) var_1_3)))) : (var_1_1 == ((unsigned short int) var_1_4)))) && ((var_1_3 < var_1_4) ? ((var_1_1 < var_1_3) ? (var_1_5 == ((unsigned long int) (var_1_4 + var_1_1))) : (var_1_5 == ((unsigned long int) var_1_1))) : 1)) && (var_1_6 == ((double) (var_1_7 + var_1_8)))) && ((var_1_6 == 8.0) ? (var_1_9 == ((float) ((min (0.0f , 2.0f)) - (min (var_1_10 , var_1_11))))) : (var_1_9 == ((float) -64.0f)))
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

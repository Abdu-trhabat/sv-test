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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198has_floats.c", 13, "reach_error"); }
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
double var_1_1 = -256.0;
double var_1_4 = 25.0;
double var_1_5 = 25.0;
double var_1_6 = 25.0;
double var_1_7 = -64.0;
float var_1_8 = 8.0;
unsigned short int var_1_9 = 56707;
unsigned short int var_1_10 = 100;
unsigned long int var_1_11 = 2;
unsigned long int var_1_12 = 256;
unsigned long int var_1_13 = 3563515945;
signed long int var_1_14 = 10;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = -256.0;
float last_1_var_1_8 = 8.0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch198has_floats
	unsigned short int stepLocal_0 = var_1_9;
	if ((abs (last_1_var_1_1)) < last_1_var_1_8) {
		if (stepLocal_0 <= var_1_11) {
			var_1_12 = (max ((var_1_13 - var_1_10) , (2468038396u - var_1_9)));
		} else {
			var_1_12 = (max ((var_1_13 - var_1_9) , var_1_10));
		}
	}


	// From: Req1Batch198has_floats
	if (8u <= (- (var_1_12 + 2u))) {
		var_1_1 = ((var_1_4 - (max (var_1_5 , var_1_6))) + (max (var_1_7 , 128.0)));
	}


	// From: Req2Batch198has_floats
	if ((max ((var_1_9 - var_1_10) , var_1_12)) >= var_1_12) {
		var_1_8 = (var_1_7 + (max (var_1_6 , var_1_4)));
	} else {
		var_1_8 = var_1_7;
	}


	// From: Req4Batch198has_floats
	var_1_14 = var_1_9;
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65535);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967295);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
}

int property(void) {
	return ((((8u <= (- (var_1_12 + 2u))) ? (var_1_1 == ((double) ((var_1_4 - (max (var_1_5 , var_1_6))) + (max (var_1_7 , 128.0))))) : 1) && (((max ((var_1_9 - var_1_10) , var_1_12)) >= var_1_12) ? (var_1_8 == ((float) (var_1_7 + (max (var_1_6 , var_1_4))))) : (var_1_8 == ((float) var_1_7)))) && (((abs (last_1_var_1_1)) < last_1_var_1_8) ? ((var_1_9 <= var_1_11) ? (var_1_12 == ((unsigned long int) (max ((var_1_13 - var_1_10) , (2468038396u - var_1_9))))) : (var_1_12 == ((unsigned long int) (max ((var_1_13 - var_1_9) , var_1_10))))) : 1)) && (var_1_14 == ((signed long int) var_1_9))
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

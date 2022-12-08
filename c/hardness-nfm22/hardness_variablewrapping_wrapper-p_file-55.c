// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch55Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 10;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
double var_1_7 = 256.75;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 63.5;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 1.8;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 0.25;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 16.5;
double* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = -5;
signed long int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_14 = 128;
unsigned char* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 4.6;
float* var_1_15_Pointer = &(var_1_15);
unsigned long int var_1_16 = 500;
unsigned long int* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 2;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 100;
unsigned char* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = -5;
unsigned char last_1_var_1_17 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch55Wrapper_P
	unsigned char stepLocal_1 = last_1_var_1_12 >= last_1_var_1_17;
	signed long int stepLocal_0 = last_1_var_1_17;
	if ((*(var_1_2_Pointer))) {
		if (stepLocal_1 && (*(var_1_5_Pointer))) {
			if (last_1_var_1_12 >= stepLocal_0) {
				(*(var_1_1_Pointer)) = 5;
			} else {
				(*(var_1_1_Pointer)) = (min (25 , last_1_var_1_17));
			}
		}
	} else {
		(*(var_1_1_Pointer)) = last_1_var_1_17;
	}


	// From: Req2Batch55Wrapper_P
	if ((*(var_1_2_Pointer))) {
		(*(var_1_7_Pointer)) = ((((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer))) - (*(var_1_11_Pointer)));
	}


	// From: Req4Batch55Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_8_Pointer));


	// From: Req5Batch55Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_14_Pointer));


	// From: Req6Batch55Wrapper_P
	(*(var_1_17_Pointer)) = (*(var_1_18_Pointer));


	// From: Req3Batch55Wrapper_P
	signed long int stepLocal_3 = min ((-4 >> (*(var_1_1_Pointer))) , (*(var_1_1_Pointer)));
	signed long int stepLocal_2 = (*(var_1_1_Pointer)) / -8;
	if ((~ (*(var_1_17_Pointer))) <= stepLocal_3) {
		if (((*(var_1_14_Pointer)) - 64) < stepLocal_2) {
			(*(var_1_12_Pointer)) = (*(var_1_1_Pointer));
		}
	} else {
		(*(var_1_12_Pointer)) = ((*(var_1_17_Pointer)) - (*(var_1_14_Pointer)));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691390e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691390e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 255);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return ((((((*(var_1_2_Pointer)) ? (((last_1_var_1_12 >= last_1_var_1_17) && (*(var_1_5_Pointer))) ? ((last_1_var_1_12 >= last_1_var_1_17) ? ((*(var_1_1_Pointer)) == ((unsigned short int) 5)) : ((*(var_1_1_Pointer)) == ((unsigned short int) (min (25 , last_1_var_1_17))))) : 1) : ((*(var_1_1_Pointer)) == ((unsigned short int) last_1_var_1_17))) && ((*(var_1_2_Pointer)) ? ((*(var_1_7_Pointer)) == ((double) ((((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer))) - (*(var_1_11_Pointer))))) : 1)) && (((~ (*(var_1_17_Pointer))) <= (min ((-4 >> (*(var_1_1_Pointer))) , (*(var_1_1_Pointer))))) ? ((((*(var_1_14_Pointer)) - 64) < ((*(var_1_1_Pointer)) / -8)) ? ((*(var_1_12_Pointer)) == ((signed long int) (*(var_1_1_Pointer)))) : 1) : ((*(var_1_12_Pointer)) == ((signed long int) ((*(var_1_17_Pointer)) - (*(var_1_14_Pointer))))))) && ((*(var_1_15_Pointer)) == ((float) (*(var_1_8_Pointer))))) && ((*(var_1_16_Pointer)) == ((unsigned long int) (*(var_1_14_Pointer))))) && ((*(var_1_17_Pointer)) == ((unsigned char) (*(var_1_18_Pointer))))
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

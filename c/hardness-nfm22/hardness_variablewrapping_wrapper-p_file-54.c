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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch54Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 16;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_3 = 10;
unsigned char* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 9.75;
double* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 5.5;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 4.1;
double* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 9.8;
float* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 25;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 2;
signed char* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch54Wrapper_P
	(*(var_1_14_Pointer)) = (*(var_1_12_Pointer));


	// From: Req5Batch54Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_16_Pointer));


	// From: Req1Batch54Wrapper_P
	signed long int stepLocal_0 = -4;
	if (stepLocal_0 >= (*(var_1_15_Pointer))) {
		(*(var_1_1_Pointer)) = (min ((*(var_1_3_Pointer)) , (abs (1))));
	}


	// From: Req3Batch54Wrapper_P
	unsigned char stepLocal_2 = (*(var_1_3_Pointer));
	if ((*(var_1_9_Pointer))) {
		if (stepLocal_2 > (*(var_1_15_Pointer))) {
			(*(var_1_11_Pointer)) = (max ((max ((*(var_1_12_Pointer)) , 16.5)) , (*(var_1_13_Pointer))));
		} else {
			if ((*(var_1_10_Pointer))) {
				(*(var_1_11_Pointer)) = (*(var_1_12_Pointer));
			}
		}
	}


	// From: Req2Batch54Wrapper_P
	signed long int stepLocal_1 = max (10 , (*(var_1_1_Pointer)));
	if ((8 * (*(var_1_1_Pointer))) == stepLocal_1) {
		if ((*(var_1_6_Pointer))) {
			(*(var_1_4_Pointer)) = (((*(var_1_11_Pointer)) < (*(var_1_14_Pointer))) && (*(var_1_9_Pointer)));
		} else {
			if ((*(var_1_14_Pointer)) >= (abs ((*(var_1_11_Pointer))))) {
				(*(var_1_4_Pointer)) = (! (*(var_1_9_Pointer)));
			} else {
				(*(var_1_4_Pointer)) = 0;
			}
		}
	} else {
		(*(var_1_4_Pointer)) = (*(var_1_10_Pointer));
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
}



void updateLastVariables() {
}

int property() {
	return (((((-4 >= (*(var_1_15_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (min ((*(var_1_3_Pointer)) , (abs (1)))))) : 1) && (((8 * (*(var_1_1_Pointer))) == (max (10 , (*(var_1_1_Pointer))))) ? ((*(var_1_6_Pointer)) ? ((*(var_1_4_Pointer)) == ((unsigned char) (((*(var_1_11_Pointer)) < (*(var_1_14_Pointer))) && (*(var_1_9_Pointer))))) : (((*(var_1_14_Pointer)) >= (abs ((*(var_1_11_Pointer))))) ? ((*(var_1_4_Pointer)) == ((unsigned char) (! (*(var_1_9_Pointer))))) : ((*(var_1_4_Pointer)) == ((unsigned char) 0)))) : ((*(var_1_4_Pointer)) == ((unsigned char) (*(var_1_10_Pointer)))))) && ((*(var_1_9_Pointer)) ? (((*(var_1_3_Pointer)) > (*(var_1_15_Pointer))) ? ((*(var_1_11_Pointer)) == ((double) (max ((max ((*(var_1_12_Pointer)) , 16.5)) , (*(var_1_13_Pointer)))))) : ((*(var_1_10_Pointer)) ? ((*(var_1_11_Pointer)) == ((double) (*(var_1_12_Pointer)))) : 1)) : 1)) && ((*(var_1_14_Pointer)) == ((float) (*(var_1_12_Pointer))))) && ((*(var_1_15_Pointer)) == ((signed char) (*(var_1_16_Pointer))))
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

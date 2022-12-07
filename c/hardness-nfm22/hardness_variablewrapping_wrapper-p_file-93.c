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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 255.3;
float* var_1_1_Pointer = &(var_1_1);
double var_1_3 = -0.9;
double* var_1_3_Pointer = &(var_1_3);
double var_1_5 = 128.5;
double* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 9.186;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 31.75;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 9.6;
double* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 499.2;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 1.5;
float* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 1;
unsigned char* var_1_14_Pointer = &(var_1_14);

// Calibration values

// Last'ed variables
float last_1_var_1_10 = 1.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch93Wrapper_P
	if (((- last_1_var_1_10) / (*(var_1_3_Pointer))) != (last_1_var_1_10 / (*(var_1_5_Pointer)))) {
		if (last_1_var_1_10 != ((max ((*(var_1_6_Pointer)) , (*(var_1_7_Pointer)))) - (*(var_1_8_Pointer)))) {
			(*(var_1_1_Pointer)) = (*(var_1_9_Pointer));
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_9_Pointer));
		}
	} else {
		(*(var_1_1_Pointer)) = 64.51f;
	}


	// From: Req2Batch93Wrapper_P
	if ((*(var_1_1_Pointer)) > (max (((*(var_1_9_Pointer)) * 128.4) , ((*(var_1_5_Pointer)) * (*(var_1_1_Pointer)))))) {
		(*(var_1_10_Pointer)) = 1.00000000000004E13f;
	} else {
		(*(var_1_10_Pointer)) = (*(var_1_9_Pointer));
	}


	// From: Req3Batch93Wrapper_P
	if (! ((*(var_1_3_Pointer)) <= (*(var_1_10_Pointer)))) {
		(*(var_1_11_Pointer)) = ((*(var_1_12_Pointer)) && (*(var_1_13_Pointer)));
	} else {
		if (((*(var_1_7_Pointer)) / (*(var_1_3_Pointer))) < (min ((max ((*(var_1_8_Pointer)) , (*(var_1_6_Pointer)))) , (*(var_1_5_Pointer))))) {
			(*(var_1_11_Pointer)) = (*(var_1_14_Pointer));
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
}

int property() {
	return (((((- last_1_var_1_10) / (*(var_1_3_Pointer))) != (last_1_var_1_10 / (*(var_1_5_Pointer)))) ? ((last_1_var_1_10 != ((max ((*(var_1_6_Pointer)) , (*(var_1_7_Pointer)))) - (*(var_1_8_Pointer)))) ? ((*(var_1_1_Pointer)) == ((float) (*(var_1_9_Pointer)))) : ((*(var_1_1_Pointer)) == ((float) (*(var_1_9_Pointer))))) : ((*(var_1_1_Pointer)) == ((float) 64.51f))) && (((*(var_1_1_Pointer)) > (max (((*(var_1_9_Pointer)) * 128.4) , ((*(var_1_5_Pointer)) * (*(var_1_1_Pointer)))))) ? ((*(var_1_10_Pointer)) == ((float) 1.00000000000004E13f)) : ((*(var_1_10_Pointer)) == ((float) (*(var_1_9_Pointer)))))) && ((! ((*(var_1_3_Pointer)) <= (*(var_1_10_Pointer)))) ? ((*(var_1_11_Pointer)) == ((unsigned char) ((*(var_1_12_Pointer)) && (*(var_1_13_Pointer))))) : ((((*(var_1_7_Pointer)) / (*(var_1_3_Pointer))) < (min ((max ((*(var_1_8_Pointer)) , (*(var_1_6_Pointer)))) , (*(var_1_5_Pointer))))) ? ((*(var_1_11_Pointer)) == ((unsigned char) (*(var_1_14_Pointer)))) : 1))
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

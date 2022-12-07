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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch98Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 4.8;
double* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 63.5;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 9999999.5;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 0.6;
double* var_1_4_Pointer = &(var_1_4);
signed short int var_1_6 = 10;
signed short int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = -1;
signed long int* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 4.4;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 7.25;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 7.5;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 2.3;
double* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 128;
unsigned long int* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 0;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_14 = 4078799264;
unsigned long int* var_1_14_Pointer = &(var_1_14);
unsigned long int var_1_15 = 500;
unsigned long int* var_1_15_Pointer = &(var_1_15);
unsigned long int var_1_16 = 25;
unsigned long int* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_15 = 500;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch98Wrapper_P
	(*(var_1_1_Pointer)) = ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)));


	// From: Req4Batch98Wrapper_P
	if ((min (-128 , last_1_var_1_15)) < (*(var_1_13_Pointer))) {
		if (last_1_var_1_15 > (*(var_1_7_Pointer))) {
			(*(var_1_15_Pointer)) = ((*(var_1_6_Pointer)) + (*(var_1_16_Pointer)));
		} else {
			(*(var_1_15_Pointer)) = (*(var_1_14_Pointer));
		}
	} else {
		(*(var_1_15_Pointer)) = (*(var_1_16_Pointer));
	}


	// From: Req2Batch98Wrapper_P
	unsigned long int stepLocal_0 = ((*(var_1_15_Pointer)) >> (*(var_1_6_Pointer))) / (*(var_1_7_Pointer));
	if (8 < stepLocal_0) {
		(*(var_1_4_Pointer)) = ((((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (min ((*(var_1_10_Pointer)) , 1.9))) + (99.125 + (*(var_1_11_Pointer))));
	}


	// From: Req3Batch98Wrapper_P
	if ((*(var_1_2_Pointer)) < (*(var_1_8_Pointer))) {
		if (((- (*(var_1_15_Pointer))) <= (*(var_1_6_Pointer))) || ((*(var_1_4_Pointer)) < (*(var_1_10_Pointer)))) {
			(*(var_1_12_Pointer)) = (min ((*(var_1_6_Pointer)) , (*(var_1_13_Pointer))));
		} else {
			(*(var_1_12_Pointer)) = ((*(var_1_14_Pointer)) - (*(var_1_6_Pointer)));
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854765600e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -115292.1504606845700e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 1152921.504606845700e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -115292.1504606845700e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 1152921.504606845700e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -230584.3009213691390e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691390e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((*(var_1_1_Pointer)) == ((double) ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer))))) && ((8 < (((*(var_1_15_Pointer)) >> (*(var_1_6_Pointer))) / (*(var_1_7_Pointer)))) ? ((*(var_1_4_Pointer)) == ((double) ((((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (min ((*(var_1_10_Pointer)) , 1.9))) + (99.125 + (*(var_1_11_Pointer)))))) : 1)) && (((*(var_1_2_Pointer)) < (*(var_1_8_Pointer))) ? ((((- (*(var_1_15_Pointer))) <= (*(var_1_6_Pointer))) || ((*(var_1_4_Pointer)) < (*(var_1_10_Pointer)))) ? ((*(var_1_12_Pointer)) == ((unsigned long int) (min ((*(var_1_6_Pointer)) , (*(var_1_13_Pointer)))))) : ((*(var_1_12_Pointer)) == ((unsigned long int) ((*(var_1_14_Pointer)) - (*(var_1_6_Pointer)))))) : 1)) && (((min (-128 , last_1_var_1_15)) < (*(var_1_13_Pointer))) ? ((last_1_var_1_15 > (*(var_1_7_Pointer))) ? ((*(var_1_15_Pointer)) == ((unsigned long int) ((*(var_1_6_Pointer)) + (*(var_1_16_Pointer))))) : ((*(var_1_15_Pointer)) == ((unsigned long int) (*(var_1_14_Pointer))))) : ((*(var_1_15_Pointer)) == ((unsigned long int) (*(var_1_16_Pointer)))))
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

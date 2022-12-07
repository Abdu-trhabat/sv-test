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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 5;
unsigned long int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 8;
unsigned long int* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 9.15;
double* var_1_3_Pointer = &(var_1_3);
double var_1_6 = 1000000.875;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 49.25;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = -0.8;
double* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = -10;
signed char* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 58996;
unsigned short int* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 32;
unsigned short int* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = 32;
signed char* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = 16;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = 2;
signed char* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = 32;
signed long int* var_1_15_Pointer = &(var_1_15);
signed long int var_1_17 = 1000000000;
signed long int* var_1_17_Pointer = &(var_1_17);
float var_1_18 = -0.5;
float* var_1_18_Pointer = &(var_1_18);
signed char var_1_19 = 2;
signed char* var_1_19_Pointer = &(var_1_19);
unsigned char var_1_20 = 0;
unsigned char* var_1_20_Pointer = &(var_1_20);
unsigned char var_1_21 = 0;
unsigned char* var_1_21_Pointer = &(var_1_21);

// Calibration values

// Last'ed variables
double last_1_var_1_3 = 9.15;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch10Wrapper_P
	(*(var_1_1_Pointer)) = (*(var_1_2_Pointer));


	// From: Req5Batch10Wrapper_P
	(*(var_1_18_Pointer)) = (*(var_1_8_Pointer));


	// From: Req6Batch10Wrapper_P
	(*(var_1_19_Pointer)) = (*(var_1_12_Pointer));


	// From: Req7Batch10Wrapper_P
	(*(var_1_20_Pointer)) = (*(var_1_21_Pointer));


	// From: Req3Batch10Wrapper_P
	signed char stepLocal_1 = (*(var_1_19_Pointer));
	if ((- ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer)))) >= stepLocal_1) {
		(*(var_1_9_Pointer)) = ((*(var_1_12_Pointer)) - (max ((*(var_1_13_Pointer)) , (*(var_1_14_Pointer)))));
	} else {
		(*(var_1_9_Pointer)) = (min ((*(var_1_12_Pointer)) , (*(var_1_14_Pointer))));
	}


	// From: Req4Batch10Wrapper_P
	if ((*(var_1_20_Pointer))) {
		(*(var_1_15_Pointer)) = ((*(var_1_12_Pointer)) - (*(var_1_14_Pointer)));
	} else {
		(*(var_1_15_Pointer)) = ((*(var_1_13_Pointer)) - (((*(var_1_17_Pointer)) - 4) + (abs ((*(var_1_11_Pointer))))));
	}


	// From: Req2Batch10Wrapper_P
	signed long int stepLocal_0 = (*(var_1_15_Pointer));
	if (stepLocal_0 < (*(var_1_1_Pointer))) {
		(*(var_1_3_Pointer)) = -0.5;
	} else {
		if ((- last_1_var_1_3) == ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer)))) {
			(*(var_1_3_Pointer)) = (*(var_1_8_Pointer));
		} else {
			(*(var_1_3_Pointer)) = (*(var_1_8_Pointer));
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65535);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 536870911);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
}



void updateLastVariables() {
	last_1_var_1_3 = var_1_3;
}

int property() {
	return (((((((*(var_1_1_Pointer)) == ((unsigned long int) (*(var_1_2_Pointer)))) && (((*(var_1_15_Pointer)) < (*(var_1_1_Pointer))) ? ((*(var_1_3_Pointer)) == ((double) -0.5)) : (((- last_1_var_1_3) == ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer)))) ? ((*(var_1_3_Pointer)) == ((double) (*(var_1_8_Pointer)))) : ((*(var_1_3_Pointer)) == ((double) (*(var_1_8_Pointer))))))) && (((- ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer)))) >= (*(var_1_19_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed char) ((*(var_1_12_Pointer)) - (max ((*(var_1_13_Pointer)) , (*(var_1_14_Pointer))))))) : ((*(var_1_9_Pointer)) == ((signed char) (min ((*(var_1_12_Pointer)) , (*(var_1_14_Pointer)))))))) && ((*(var_1_20_Pointer)) ? ((*(var_1_15_Pointer)) == ((signed long int) ((*(var_1_12_Pointer)) - (*(var_1_14_Pointer))))) : ((*(var_1_15_Pointer)) == ((signed long int) ((*(var_1_13_Pointer)) - (((*(var_1_17_Pointer)) - 4) + (abs ((*(var_1_11_Pointer)))))))))) && ((*(var_1_18_Pointer)) == ((float) (*(var_1_8_Pointer))))) && ((*(var_1_19_Pointer)) == ((signed char) (*(var_1_12_Pointer))))) && ((*(var_1_20_Pointer)) == ((unsigned char) (*(var_1_21_Pointer))))
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

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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch79Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -16;
signed char* var_1_1_Pointer = &(var_1_1);
signed char var_1_3 = 0;
signed char* var_1_3_Pointer = &(var_1_3);
signed char var_1_4 = 64;
signed char* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = 64;
signed char* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = -64;
signed long int* var_1_6_Pointer = &(var_1_6);
double var_1_8 = 32.5;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 1.6;
double* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 32;
unsigned short int* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 15.5;
float* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_10 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch79Wrapper_P
	signed long int stepLocal_0 = max ((*(var_1_5_Pointer)) , last_1_var_1_10);
	if (stepLocal_0 <= ((*(var_1_4_Pointer)) * (last_1_var_1_10 >> (*(var_1_3_Pointer))))) {
		if ((- (*(var_1_8_Pointer))) >= (*(var_1_9_Pointer))) {
			(*(var_1_6_Pointer)) = (*(var_1_4_Pointer));
		} else {
			(*(var_1_6_Pointer)) = (*(var_1_5_Pointer));
		}
	} else {
		(*(var_1_6_Pointer)) = (*(var_1_5_Pointer));
	}


	// From: Req3Batch79Wrapper_P
	signed long int stepLocal_1 = (*(var_1_5_Pointer)) + (*(var_1_6_Pointer));
	if ((*(var_1_11_Pointer)) < (*(var_1_9_Pointer))) {
		if (stepLocal_1 <= (~ ((*(var_1_6_Pointer)) % -32))) {
			(*(var_1_10_Pointer)) = (*(var_1_5_Pointer));
		} else {
			(*(var_1_10_Pointer)) = (*(var_1_5_Pointer));
		}
	}


	// From: Req4Batch79Wrapper_P
	(*(var_1_12_Pointer)) = (*(var_1_13_Pointer));


	// From: Req1Batch79Wrapper_P
	if (! (*(var_1_12_Pointer))) {
		if (! (*(var_1_12_Pointer))) {
			(*(var_1_1_Pointer)) = ((*(var_1_3_Pointer)) + -32);
		} else {
			(*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) - (min ((*(var_1_5_Pointer)) , 16)));
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
}

int property() {
	return ((((! (*(var_1_12_Pointer))) ? ((! (*(var_1_12_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed char) ((*(var_1_3_Pointer)) + -32))) : ((*(var_1_1_Pointer)) == ((signed char) ((*(var_1_4_Pointer)) - (min ((*(var_1_5_Pointer)) , 16)))))) : 1) && (((max ((*(var_1_5_Pointer)) , last_1_var_1_10)) <= ((*(var_1_4_Pointer)) * (last_1_var_1_10 >> (*(var_1_3_Pointer))))) ? (((- (*(var_1_8_Pointer))) >= (*(var_1_9_Pointer))) ? ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_4_Pointer)))) : ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_5_Pointer))))) : ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_5_Pointer)))))) && (((*(var_1_11_Pointer)) < (*(var_1_9_Pointer))) ? ((((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))) <= (~ ((*(var_1_6_Pointer)) % -32))) ? ((*(var_1_10_Pointer)) == ((unsigned short int) (*(var_1_5_Pointer)))) : ((*(var_1_10_Pointer)) == ((unsigned short int) (*(var_1_5_Pointer))))) : 1)) && ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_13_Pointer))))
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

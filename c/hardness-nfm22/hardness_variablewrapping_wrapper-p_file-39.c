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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch39Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -5;
signed short int* var_1_1_Pointer = &(var_1_1);
signed short int var_1_2 = 0;
signed short int* var_1_2_Pointer = &(var_1_2);
signed short int var_1_3 = 1000;
signed short int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 10;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 32;
signed short int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 5;
signed long int* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 1.1;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 7.8;
float* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 1.75;
float* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = 32;
signed long int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 64;
unsigned char* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 1230482582;
signed long int* var_1_12_Pointer = &(var_1_12);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch39Wrapper_P
	(*(var_1_1_Pointer)) = (((max (16 , 4)) + (*(var_1_2_Pointer))) - ((*(var_1_3_Pointer)) + (min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer))))));


	// From: Req2Batch39Wrapper_P
	if ((*(var_1_2_Pointer)) >= (*(var_1_1_Pointer))) {
		if ((abs ((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) < (*(var_1_9_Pointer))) {
			(*(var_1_6_Pointer)) = (*(var_1_3_Pointer));
		} else {
			(*(var_1_6_Pointer)) = (*(var_1_1_Pointer));
		}
	} else {
		(*(var_1_6_Pointer)) = (*(var_1_4_Pointer));
	}


	// From: Req3Batch39Wrapper_P
	signed long int stepLocal_1 = (*(var_1_6_Pointer)) + ((*(var_1_4_Pointer)) << (*(var_1_2_Pointer)));
	signed long int stepLocal_0 = (*(var_1_2_Pointer)) - ((*(var_1_12_Pointer)) - (*(var_1_5_Pointer)));
	if (stepLocal_1 != (*(var_1_5_Pointer))) {
		if (((*(var_1_3_Pointer)) / (*(var_1_11_Pointer))) < stepLocal_0) {
			(*(var_1_10_Pointer)) = (min (-256 , (min ((*(var_1_4_Pointer)) , (max ((*(var_1_5_Pointer)) , (*(var_1_2_Pointer))))))));
		} else {
			(*(var_1_10_Pointer)) = (*(var_1_4_Pointer));
		}
	} else {
		(*(var_1_10_Pointer)) = (*(var_1_2_Pointer));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 16383);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 255);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 1073741823);
	assume_abort_if_not(var_1_12 <= 2147483647);
}



void updateLastVariables() {
}

int property() {
	return (((*(var_1_1_Pointer)) == ((signed short int) (((max (16 , 4)) + (*(var_1_2_Pointer))) - ((*(var_1_3_Pointer)) + (min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer)))))))) && (((*(var_1_2_Pointer)) >= (*(var_1_1_Pointer))) ? (((abs ((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)))) < (*(var_1_9_Pointer))) ? ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_3_Pointer)))) : ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_1_Pointer))))) : ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_4_Pointer)))))) && ((((*(var_1_6_Pointer)) + ((*(var_1_4_Pointer)) << (*(var_1_2_Pointer)))) != (*(var_1_5_Pointer))) ? ((((*(var_1_3_Pointer)) / (*(var_1_11_Pointer))) < ((*(var_1_2_Pointer)) - ((*(var_1_12_Pointer)) - (*(var_1_5_Pointer))))) ? ((*(var_1_10_Pointer)) == ((signed long int) (min (-256 , (min ((*(var_1_4_Pointer)) , (max ((*(var_1_5_Pointer)) , (*(var_1_2_Pointer)))))))))) : ((*(var_1_10_Pointer)) == ((signed long int) (*(var_1_4_Pointer))))) : ((*(var_1_10_Pointer)) == ((signed long int) (*(var_1_2_Pointer)))))
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

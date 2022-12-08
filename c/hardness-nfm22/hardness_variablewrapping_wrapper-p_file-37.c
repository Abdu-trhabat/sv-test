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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch37Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 8;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned short int var_1_2 = 59049;
unsigned short int* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 100;
unsigned short int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_6 = 16;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = -25;
signed char* var_1_7_Pointer = &(var_1_7);
signed char var_1_8 = 16;
signed char* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 25;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = -10;
signed char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = 0;
signed char* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 25.1;
float* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 2531521428;
unsigned long int* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = -128;
signed long int* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = 256;
signed long int* var_1_15_Pointer = &(var_1_15);
signed short int var_1_16 = -16;
signed short int* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch37Wrapper_P
	(*(var_1_14_Pointer)) = (*(var_1_8_Pointer));


	// From: Req6Batch37Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_14_Pointer));


	// From: Req2Batch37Wrapper_P
	signed long int stepLocal_0 = abs ((*(var_1_14_Pointer)));
	if ((*(var_1_2_Pointer)) <= stepLocal_0) {
		(*(var_1_7_Pointer)) = (((*(var_1_8_Pointer)) - (1 + (*(var_1_9_Pointer)))) + (*(var_1_10_Pointer)));
	} else {
		(*(var_1_7_Pointer)) = (*(var_1_10_Pointer));
	}


	// From: Req5Batch37Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_16_Pointer));


	// From: Req1Batch37Wrapper_P
	if ((((*(var_1_2_Pointer)) - (*(var_1_3_Pointer))) ^ ((*(var_1_15_Pointer)) * (*(var_1_16_Pointer)))) <= -64) {
		(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
	}


	// From: Req3Batch37Wrapper_P
	unsigned char stepLocal_1 = (*(var_1_1_Pointer));
	if (2.75f > (*(var_1_12_Pointer))) {
		(*(var_1_11_Pointer)) = ((*(var_1_10_Pointer)) + (*(var_1_8_Pointer)));
	} else {
		if (((*(var_1_13_Pointer)) - (max ((*(var_1_14_Pointer)) , (*(var_1_8_Pointer))))) > stepLocal_1) {
			(*(var_1_11_Pointer)) = (min ((min ((*(var_1_8_Pointer)) , (1 + 5))) , (*(var_1_10_Pointer))));
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 32767);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 31);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967295);
}



void updateLastVariables() {
}

int property() {
	return (((((((((*(var_1_2_Pointer)) - (*(var_1_3_Pointer))) ^ ((*(var_1_15_Pointer)) * (*(var_1_16_Pointer)))) <= -64) ? ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_6_Pointer)))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_6_Pointer))))) && (((*(var_1_2_Pointer)) <= (abs ((*(var_1_14_Pointer))))) ? ((*(var_1_7_Pointer)) == ((signed char) (((*(var_1_8_Pointer)) - (1 + (*(var_1_9_Pointer)))) + (*(var_1_10_Pointer))))) : ((*(var_1_7_Pointer)) == ((signed char) (*(var_1_10_Pointer)))))) && ((2.75f > (*(var_1_12_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed char) ((*(var_1_10_Pointer)) + (*(var_1_8_Pointer))))) : ((((*(var_1_13_Pointer)) - (max ((*(var_1_14_Pointer)) , (*(var_1_8_Pointer))))) > (*(var_1_1_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed char) (min ((min ((*(var_1_8_Pointer)) , (1 + 5))) , (*(var_1_10_Pointer)))))) : 1))) && ((*(var_1_14_Pointer)) == ((signed long int) (*(var_1_8_Pointer))))) && ((*(var_1_15_Pointer)) == ((signed long int) (*(var_1_16_Pointer))))) && ((*(var_1_16_Pointer)) == ((signed short int) (*(var_1_14_Pointer))))
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

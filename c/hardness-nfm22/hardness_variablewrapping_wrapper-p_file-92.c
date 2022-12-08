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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 32;
signed char* var_1_1_Pointer = &(var_1_1);
signed char var_1_2 = 2;
signed char* var_1_2_Pointer = &(var_1_2);
signed char var_1_3 = 8;
signed char* var_1_3_Pointer = &(var_1_3);
signed char var_1_4 = 0;
signed char* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = 32;
signed char* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = 10;
signed char* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 1000000.625;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 16.65;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 15.5;
double* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 500;
signed short int* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 8;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned short int var_1_14 = 100;
unsigned short int* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
float var_1_17 = 2.4;
float* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch92Wrapper_P
	(*(var_1_1_Pointer)) = (((*(var_1_2_Pointer)) + (*(var_1_3_Pointer))) - (max ((*(var_1_4_Pointer)) , ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))))));


	// From: Req2Batch92Wrapper_P
	signed long int stepLocal_0 = (~ (*(var_1_5_Pointer))) * ((*(var_1_6_Pointer)) & (*(var_1_3_Pointer)));
	if (stepLocal_0 >= (*(var_1_4_Pointer))) {
		(*(var_1_7_Pointer)) = (*(var_1_8_Pointer));
	} else {
		(*(var_1_7_Pointer)) = (*(var_1_9_Pointer));
	}


	// From: Req3Batch92Wrapper_P
	(*(var_1_10_Pointer)) = (abs ((*(var_1_2_Pointer))));


	// From: Req5Batch92Wrapper_P
	signed long int stepLocal_1 = (*(var_1_6_Pointer)) / (*(var_1_14_Pointer));
	if (stepLocal_1 < -100) {
		(*(var_1_13_Pointer)) = (! (! (! (*(var_1_15_Pointer)))));
	} else {
		(*(var_1_13_Pointer)) = ((*(var_1_15_Pointer)) && (*(var_1_16_Pointer)));
	}


	// From: Req6Batch92Wrapper_P
	(*(var_1_17_Pointer)) = (*(var_1_8_Pointer));


	// From: Req4Batch92Wrapper_P
	if (! (*(var_1_13_Pointer))) {
		(*(var_1_11_Pointer)) = ((*(var_1_5_Pointer)) + ((max ((*(var_1_6_Pointer)) , 1)) + 64));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 63);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65535);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
}



void updateLastVariables() {
}

int property() {
	return ((((((*(var_1_1_Pointer)) == ((signed char) (((*(var_1_2_Pointer)) + (*(var_1_3_Pointer))) - (max ((*(var_1_4_Pointer)) , ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer)))))))) && ((((~ (*(var_1_5_Pointer))) * ((*(var_1_6_Pointer)) & (*(var_1_3_Pointer)))) >= (*(var_1_4_Pointer))) ? ((*(var_1_7_Pointer)) == ((double) (*(var_1_8_Pointer)))) : ((*(var_1_7_Pointer)) == ((double) (*(var_1_9_Pointer)))))) && ((*(var_1_10_Pointer)) == ((signed short int) (abs ((*(var_1_2_Pointer))))))) && ((! (*(var_1_13_Pointer))) ? ((*(var_1_11_Pointer)) == ((unsigned short int) ((*(var_1_5_Pointer)) + ((max ((*(var_1_6_Pointer)) , 1)) + 64)))) : 1)) && ((((*(var_1_6_Pointer)) / (*(var_1_14_Pointer))) < -100) ? ((*(var_1_13_Pointer)) == ((unsigned char) (! (! (! (*(var_1_15_Pointer))))))) : ((*(var_1_13_Pointer)) == ((unsigned char) ((*(var_1_15_Pointer)) && (*(var_1_16_Pointer))))))) && ((*(var_1_17_Pointer)) == ((float) (*(var_1_8_Pointer))))
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

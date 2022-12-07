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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch45Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 999999.2;
double* var_1_1_Pointer = &(var_1_1);
unsigned short int var_1_2 = 5;
unsigned short int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_4 = -2;
signed long int* var_1_4_Pointer = &(var_1_4);
double var_1_6 = 0.0;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 5.9;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 255.6;
double* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 25.5;
float* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 0.0;
float* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 1;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 1;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 64;
unsigned char* var_1_18_Pointer = &(var_1_18);
signed char var_1_19 = -10;
signed char* var_1_19_Pointer = &(var_1_19);
unsigned char var_1_20 = 5;
unsigned char* var_1_20_Pointer = &(var_1_20);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_18 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch45Wrapper_P
	if ((((*(var_1_2_Pointer)) + (*(var_1_4_Pointer))) / (*(var_1_19_Pointer))) != last_1_var_1_18) {
		(*(var_1_18_Pointer)) = (*(var_1_20_Pointer));
	}


	// From: Req1Batch45Wrapper_P
	if (((*(var_1_18_Pointer)) / 32) < (min (((*(var_1_18_Pointer)) + (*(var_1_18_Pointer))) , (*(var_1_18_Pointer))))) {
		(*(var_1_1_Pointer)) = (((*(var_1_6_Pointer)) - (*(var_1_7_Pointer))) - (*(var_1_8_Pointer)));
	} else {
		(*(var_1_1_Pointer)) = ((*(var_1_8_Pointer)) - (*(var_1_7_Pointer)));
	}


	// From: Req3Batch45Wrapper_P
	if ((*(var_1_18_Pointer)) == (*(var_1_18_Pointer))) {
		if ((*(var_1_10_Pointer))) {
			(*(var_1_12_Pointer)) = ((*(var_1_13_Pointer)) || (*(var_1_14_Pointer)));
		} else {
			(*(var_1_12_Pointer)) = ((((*(var_1_8_Pointer)) >= (*(var_1_1_Pointer))) || (*(var_1_15_Pointer))) && (((*(var_1_13_Pointer)) || (*(var_1_16_Pointer))) && (*(var_1_17_Pointer))));
		}
	}


	// From: Req2Batch45Wrapper_P
	if ((*(var_1_12_Pointer))) {
		(*(var_1_9_Pointer)) = ((min ((*(var_1_8_Pointer)) , (*(var_1_6_Pointer)))) - ((*(var_1_11_Pointer)) - 0.8f));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 4611686.018427382800e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 4611686.018427382800e+12F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -128);
	assume_abort_if_not(var_1_19 <= 127);
	assume_abort_if_not(var_1_19 != 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 254);
}



void updateLastVariables() {
	last_1_var_1_18 = var_1_18;
}

int property() {
	return ((((((*(var_1_18_Pointer)) / 32) < (min (((*(var_1_18_Pointer)) + (*(var_1_18_Pointer))) , (*(var_1_18_Pointer))))) ? ((*(var_1_1_Pointer)) == ((double) (((*(var_1_6_Pointer)) - (*(var_1_7_Pointer))) - (*(var_1_8_Pointer))))) : ((*(var_1_1_Pointer)) == ((double) ((*(var_1_8_Pointer)) - (*(var_1_7_Pointer)))))) && ((*(var_1_12_Pointer)) ? ((*(var_1_9_Pointer)) == ((float) ((min ((*(var_1_8_Pointer)) , (*(var_1_6_Pointer)))) - ((*(var_1_11_Pointer)) - 0.8f)))) : 1)) && (((*(var_1_18_Pointer)) == (*(var_1_18_Pointer))) ? ((*(var_1_10_Pointer)) ? ((*(var_1_12_Pointer)) == ((unsigned char) ((*(var_1_13_Pointer)) || (*(var_1_14_Pointer))))) : ((*(var_1_12_Pointer)) == ((unsigned char) ((((*(var_1_8_Pointer)) >= (*(var_1_1_Pointer))) || (*(var_1_15_Pointer))) && (((*(var_1_13_Pointer)) || (*(var_1_16_Pointer))) && (*(var_1_17_Pointer))))))) : 1)) && (((((*(var_1_2_Pointer)) + (*(var_1_4_Pointer))) / (*(var_1_19_Pointer))) != last_1_var_1_18) ? ((*(var_1_18_Pointer)) == ((unsigned char) (*(var_1_20_Pointer)))) : 1)
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

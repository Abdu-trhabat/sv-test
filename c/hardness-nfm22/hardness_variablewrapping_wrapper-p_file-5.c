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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 10000;
signed short int* var_1_1_Pointer = &(var_1_1);
signed short int var_1_6 = 0;
signed short int* var_1_6_Pointer = &(var_1_6);
signed short int var_1_7 = 4;
signed short int* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 10;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 2;
signed short int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_12 = 100;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned short int var_1_13 = 25;
unsigned short int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 4;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 128;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned short int var_1_16 = 20416;
unsigned short int* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 21022;
unsigned short int* var_1_17_Pointer = &(var_1_17);
signed long int var_1_18 = 0;
signed long int* var_1_18_Pointer = &(var_1_18);
signed short int var_1_19 = -1;
signed short int* var_1_19_Pointer = &(var_1_19);
signed short int var_1_20 = -10;
signed short int* var_1_20_Pointer = &(var_1_20);

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 25;
signed short int last_1_var_1_20 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch5Wrapper_P
	signed long int stepLocal_2 = last_1_var_1_13 + ((*(var_1_6_Pointer)) - (*(var_1_10_Pointer)));
	signed long int stepLocal_1 = last_1_var_1_13;
	if ((*(var_1_9_Pointer))) {
		if ((*(var_1_7_Pointer)) > stepLocal_2) {
			if (stepLocal_1 < (~ last_1_var_1_20)) {
				(*(var_1_8_Pointer)) = (*(var_1_12_Pointer));
			} else {
				(*(var_1_8_Pointer)) = (*(var_1_12_Pointer));
			}
		} else {
			(*(var_1_8_Pointer)) = (*(var_1_12_Pointer));
		}
	}


	// From: Req3Batch5Wrapper_P
	if ((*(var_1_12_Pointer)) <= (((*(var_1_8_Pointer)) / (*(var_1_14_Pointer))) * (2 % (*(var_1_15_Pointer))))) {
		(*(var_1_13_Pointer)) = ((*(var_1_8_Pointer)) + ((max ((*(var_1_16_Pointer)) , (*(var_1_17_Pointer)))) - (*(var_1_15_Pointer))));
	}


	// From: Req1Batch5Wrapper_P
	signed long int stepLocal_0 = (*(var_1_8_Pointer)) - (*(var_1_8_Pointer));
	if (((*(var_1_13_Pointer)) - (*(var_1_13_Pointer))) >= stepLocal_0) {
		(*(var_1_1_Pointer)) = (abs ((*(var_1_8_Pointer)) - (*(var_1_8_Pointer))));
	}


	// From: Req4Batch5Wrapper_P
	(*(var_1_18_Pointer)) = -4;


	// From: Req5Batch5Wrapper_P
	(*(var_1_19_Pointer)) = (*(var_1_8_Pointer));


	// From: Req6Batch5Wrapper_P
	(*(var_1_20_Pointer)) = (*(var_1_12_Pointer));
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 255);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 255);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 16383);
	assume_abort_if_not(var_1_17 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return ((((((((*(var_1_13_Pointer)) - (*(var_1_13_Pointer))) >= ((*(var_1_8_Pointer)) - (*(var_1_8_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed short int) (abs ((*(var_1_8_Pointer)) - (*(var_1_8_Pointer)))))) : 1) && ((*(var_1_9_Pointer)) ? (((*(var_1_7_Pointer)) > (last_1_var_1_13 + ((*(var_1_6_Pointer)) - (*(var_1_10_Pointer))))) ? ((last_1_var_1_13 < (~ last_1_var_1_20)) ? ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))) : ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_12_Pointer))))) : ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_12_Pointer))))) : 1)) && (((*(var_1_12_Pointer)) <= (((*(var_1_8_Pointer)) / (*(var_1_14_Pointer))) * (2 % (*(var_1_15_Pointer))))) ? ((*(var_1_13_Pointer)) == ((unsigned short int) ((*(var_1_8_Pointer)) + ((max ((*(var_1_16_Pointer)) , (*(var_1_17_Pointer)))) - (*(var_1_15_Pointer)))))) : 1)) && ((*(var_1_18_Pointer)) == ((signed long int) -4))) && ((*(var_1_19_Pointer)) == ((signed short int) (*(var_1_8_Pointer))))) && ((*(var_1_20_Pointer)) == ((signed short int) (*(var_1_12_Pointer))))
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

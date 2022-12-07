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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch59Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -128;
signed long int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_4 = 0;
signed long int* var_1_4_Pointer = &(var_1_4);
signed char var_1_7 = -1;
signed char* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 32;
signed long int* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 32;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = -4;
signed char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = -4;
signed char* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = -32;
signed short int* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 128;
signed short int* var_1_13_Pointer = &(var_1_13);
signed short int var_1_14 = 1000;
signed short int* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -128;
signed char last_1_var_1_7 = -1;
signed short int last_1_var_1_12 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch59Wrapper_P
	if (last_1_var_1_1 > (abs (last_1_var_1_7))) {
		(*(var_1_12_Pointer)) = ((*(var_1_13_Pointer)) - (*(var_1_14_Pointer)));
	} else {
		if ((*(var_1_15_Pointer)) || (*(var_1_16_Pointer))) {
			if (2 < last_1_var_1_7) {
				(*(var_1_12_Pointer)) = last_1_var_1_7;
			}
		}
	}


	// From: Req2Batch59Wrapper_P
	if (last_1_var_1_12 > (last_1_var_1_7 * ((*(var_1_4_Pointer)) - (*(var_1_8_Pointer))))) {
		if ((*(var_1_8_Pointer)) > last_1_var_1_7) {
			(*(var_1_7_Pointer)) = (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))) + (*(var_1_11_Pointer)));
		} else {
			(*(var_1_7_Pointer)) = (*(var_1_10_Pointer));
		}
	} else {
		(*(var_1_7_Pointer)) = (*(var_1_11_Pointer));
	}


	// From: Req1Batch59Wrapper_P
	if ((max ((*(var_1_12_Pointer)) , 1)) <= (256 + last_1_var_1_1)) {
		(*(var_1_1_Pointer)) = ((((*(var_1_4_Pointer)) - 128) + (*(var_1_12_Pointer))) + (*(var_1_7_Pointer)));
	} else {
		(*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + (*(var_1_12_Pointer)));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 536870912);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -31);
	assume_abort_if_not(var_1_9 <= 32);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 31);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_12 = var_1_12;
}

int property() {
	return ((((max ((*(var_1_12_Pointer)) , 1)) <= (256 + last_1_var_1_1)) ? ((*(var_1_1_Pointer)) == ((signed long int) ((((*(var_1_4_Pointer)) - 128) + (*(var_1_12_Pointer))) + (*(var_1_7_Pointer))))) : ((*(var_1_1_Pointer)) == ((signed long int) ((*(var_1_4_Pointer)) + (*(var_1_12_Pointer)))))) && ((last_1_var_1_12 > (last_1_var_1_7 * ((*(var_1_4_Pointer)) - (*(var_1_8_Pointer))))) ? (((*(var_1_8_Pointer)) > last_1_var_1_7) ? ((*(var_1_7_Pointer)) == ((signed char) (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))) + (*(var_1_11_Pointer))))) : ((*(var_1_7_Pointer)) == ((signed char) (*(var_1_10_Pointer))))) : ((*(var_1_7_Pointer)) == ((signed char) (*(var_1_11_Pointer)))))) && ((last_1_var_1_1 > (abs (last_1_var_1_7))) ? ((*(var_1_12_Pointer)) == ((signed short int) ((*(var_1_13_Pointer)) - (*(var_1_14_Pointer))))) : (((*(var_1_15_Pointer)) || (*(var_1_16_Pointer))) ? ((2 < last_1_var_1_7) ? ((*(var_1_12_Pointer)) == ((signed short int) last_1_var_1_7)) : 1) : 1))
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

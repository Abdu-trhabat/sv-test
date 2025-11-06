// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 5;
unsigned long int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 0;
unsigned char* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_4 = 10;
unsigned long int* var_1_4_Pointer = &(var_1_4);
unsigned long int var_1_5 = 10;
unsigned long int* var_1_5_Pointer = &(var_1_5);
unsigned long int var_1_6 = 4016566698;
unsigned long int* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 99999999999999.6;
float* var_1_7_Pointer = &(var_1_7);
signed char var_1_8 = 4;
signed char* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 16;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = 2;
signed char* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 50.625;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 32.5;
float* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = 2;
signed long int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch136Wrapper_P
	if ((*(var_1_2_Pointer))) {
		if ((*(var_1_3_Pointer))) {
			(*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)));
		} else {
			(*(var_1_1_Pointer)) = ((min ((*(var_1_6_Pointer)) , 3757035609u)) - (*(var_1_4_Pointer)));
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
	}


	// From: Req2Batch136Wrapper_P
	signed long int stepLocal_1 = (*(var_1_9_Pointer)) - (*(var_1_10_Pointer));
	signed long int stepLocal_0 = (*(var_1_8_Pointer)) - (*(var_1_9_Pointer));
	if (stepLocal_0 == (*(var_1_4_Pointer))) {
		if ((*(var_1_8_Pointer)) < stepLocal_1) {
			(*(var_1_7_Pointer)) = (abs ((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))));
		} else {
			if ((*(var_1_2_Pointer))) {
				(*(var_1_7_Pointer)) = (*(var_1_11_Pointer));
			} else {
				(*(var_1_7_Pointer)) = (*(var_1_12_Pointer));
			}
		}
	}


	// From: Req3Batch136Wrapper_P
	if ((*(var_1_2_Pointer))) {
		if ((*(var_1_3_Pointer)) || (*(var_1_14_Pointer))) {
			(*(var_1_13_Pointer)) = (*(var_1_8_Pointer));
		} else {
			(*(var_1_13_Pointer)) = ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer)));
		}
	} else {
		if ((*(var_1_14_Pointer))) {
			if ((*(var_1_9_Pointer)) <= (*(var_1_6_Pointer))) {
				(*(var_1_13_Pointer)) = (*(var_1_9_Pointer));
			} else {
				(*(var_1_13_Pointer)) = (*(var_1_10_Pointer));
			}
		} else {
			(*(var_1_13_Pointer)) = 32;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 2147483647);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((*(var_1_2_Pointer)) ? ((*(var_1_3_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned long int) ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) : ((*(var_1_1_Pointer)) == ((unsigned long int) ((min ((*(var_1_6_Pointer)) , 3757035609u)) - (*(var_1_4_Pointer)))))) : ((*(var_1_1_Pointer)) == ((unsigned long int) (*(var_1_4_Pointer))))) && ((((*(var_1_8_Pointer)) - (*(var_1_9_Pointer))) == (*(var_1_4_Pointer))) ? (((*(var_1_8_Pointer)) < ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer)))) ? ((*(var_1_7_Pointer)) == ((float) (abs ((*(var_1_11_Pointer)) - (*(var_1_12_Pointer)))))) : ((*(var_1_2_Pointer)) ? ((*(var_1_7_Pointer)) == ((float) (*(var_1_11_Pointer)))) : ((*(var_1_7_Pointer)) == ((float) (*(var_1_12_Pointer)))))) : 1)) && ((*(var_1_2_Pointer)) ? (((*(var_1_3_Pointer)) || (*(var_1_14_Pointer))) ? ((*(var_1_13_Pointer)) == ((signed long int) (*(var_1_8_Pointer)))) : ((*(var_1_13_Pointer)) == ((signed long int) ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer)))))) : ((*(var_1_14_Pointer)) ? (((*(var_1_9_Pointer)) <= (*(var_1_6_Pointer))) ? ((*(var_1_13_Pointer)) == ((signed long int) (*(var_1_9_Pointer)))) : ((*(var_1_13_Pointer)) == ((signed long int) (*(var_1_10_Pointer))))) : ((*(var_1_13_Pointer)) == ((signed long int) 32))))
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

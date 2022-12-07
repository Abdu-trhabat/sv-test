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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = -8;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 128;
signed long int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 1;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 5;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 128;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 5;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 10;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch12Wrapper_P
	signed long int stepLocal_2 = (*(var_1_2_Pointer));
	if ((*(var_1_3_Pointer)) != stepLocal_2) {
		(*(var_1_6_Pointer)) = (abs ((*(var_1_7_Pointer)) - (max ((*(var_1_8_Pointer)) , (*(var_1_9_Pointer))))));
	}


	// From: Req3Batch12Wrapper_P
	unsigned char stepLocal_4 = (*(var_1_9_Pointer));
	signed long int stepLocal_3 = (*(var_1_6_Pointer)) * ((*(var_1_6_Pointer)) + (*(var_1_6_Pointer)));
	if (((*(var_1_8_Pointer)) * ((*(var_1_6_Pointer)) + (*(var_1_6_Pointer)))) <= stepLocal_4) {
		if ((128 + (*(var_1_9_Pointer))) < stepLocal_3) {
			(*(var_1_10_Pointer)) = ((*(var_1_4_Pointer)) || (! ((*(var_1_5_Pointer)) && (*(var_1_12_Pointer)))));
		} else {
			(*(var_1_10_Pointer)) = (*(var_1_5_Pointer));
		}
	} else {
		(*(var_1_10_Pointer)) = (*(var_1_12_Pointer));
	}


	// From: Req1Batch12Wrapper_P
	unsigned char stepLocal_1 = (*(var_1_6_Pointer));
	unsigned char stepLocal_0 = (*(var_1_6_Pointer));
	if (! (-50 < (*(var_1_6_Pointer)))) {
		if (stepLocal_1 != (*(var_1_6_Pointer))) {
			if (stepLocal_0 <= (*(var_1_6_Pointer))) {
				(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
			}
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
}



void updateLastVariables() {
}

int property() {
	return (((! (-50 < (*(var_1_6_Pointer)))) ? (((*(var_1_6_Pointer)) != (*(var_1_6_Pointer))) ? (((*(var_1_6_Pointer)) <= (*(var_1_6_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_4_Pointer)))) : 1) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_5_Pointer))))) : 1) && (((*(var_1_3_Pointer)) != (*(var_1_2_Pointer))) ? ((*(var_1_6_Pointer)) == ((unsigned char) (abs ((*(var_1_7_Pointer)) - (max ((*(var_1_8_Pointer)) , (*(var_1_9_Pointer)))))))) : 1)) && ((((*(var_1_8_Pointer)) * ((*(var_1_6_Pointer)) + (*(var_1_6_Pointer)))) <= (*(var_1_9_Pointer))) ? (((128 + (*(var_1_9_Pointer))) < ((*(var_1_6_Pointer)) * ((*(var_1_6_Pointer)) + (*(var_1_6_Pointer))))) ? ((*(var_1_10_Pointer)) == ((unsigned char) ((*(var_1_4_Pointer)) || (! ((*(var_1_5_Pointer)) && (*(var_1_12_Pointer))))))) : ((*(var_1_10_Pointer)) == ((unsigned char) (*(var_1_5_Pointer))))) : ((*(var_1_10_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))))
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

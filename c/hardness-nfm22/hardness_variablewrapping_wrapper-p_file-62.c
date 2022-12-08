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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch62Wrapper_P.c", 13, "reach_error"); }
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
signed char var_1_2 = -128;
signed char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 1;
unsigned char* var_1_3_Pointer = &(var_1_3);
signed char var_1_4 = -5;
signed char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 16;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 16;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 256;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 1494406358;
signed long int* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = 4;
signed long int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = -32;
signed short int* var_1_10_Pointer = &(var_1_10);

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = 32;
unsigned char last_1_var_1_5 = 16;
signed short int last_1_var_1_10 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch62Wrapper_P
	signed char stepLocal_1 = (*(var_1_4_Pointer));
	signed long int stepLocal_0 = last_1_var_1_5;
	if (last_1_var_1_5 <= stepLocal_1) {
		if (stepLocal_0 <= (*(var_1_4_Pointer))) {
			(*(var_1_7_Pointer)) = (((*(var_1_8_Pointer)) - (*(var_1_6_Pointer))) - last_1_var_1_1);
		} else {
			if (! (*(var_1_3_Pointer))) {
				(*(var_1_7_Pointer)) = last_1_var_1_10;
			} else {
				(*(var_1_7_Pointer)) = (last_1_var_1_5 + (*(var_1_6_Pointer)));
			}
		}
	} else {
		(*(var_1_7_Pointer)) = (((*(var_1_8_Pointer)) - (*(var_1_6_Pointer))) - last_1_var_1_1);
	}


	// From: Req6Batch62Wrapper_P
	(*(var_1_10_Pointer)) = (*(var_1_7_Pointer));


	// From: Req1Batch62Wrapper_P
	(*(var_1_1_Pointer)) = (16 - 2);


	// From: Req2Batch62Wrapper_P
	if ((*(var_1_3_Pointer))) {
		(*(var_1_2_Pointer)) = (abs (-4));
	} else {
		(*(var_1_2_Pointer)) = (abs ((*(var_1_4_Pointer))));
	}


	// From: Req5Batch62Wrapper_P
	(*(var_1_9_Pointer)) = (*(var_1_8_Pointer));


	// From: Req3Batch62Wrapper_P
	if ((*(var_1_4_Pointer)) < (*(var_1_9_Pointer))) {
		if ((*(var_1_3_Pointer))) {
			if ((*(var_1_1_Pointer)) != (*(var_1_4_Pointer))) {
				(*(var_1_5_Pointer)) = (*(var_1_6_Pointer));
			}
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -126);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 1073741822);
	assume_abort_if_not(var_1_8 <= 2147483646);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_10 = var_1_10;
}

int property() {
	return ((((((*(var_1_1_Pointer)) == ((signed char) (16 - 2))) && ((*(var_1_3_Pointer)) ? ((*(var_1_2_Pointer)) == ((signed char) (abs (-4)))) : ((*(var_1_2_Pointer)) == ((signed char) (abs ((*(var_1_4_Pointer)))))))) && (((*(var_1_4_Pointer)) < (*(var_1_9_Pointer))) ? ((*(var_1_3_Pointer)) ? (((*(var_1_1_Pointer)) != (*(var_1_4_Pointer))) ? ((*(var_1_5_Pointer)) == ((unsigned char) (*(var_1_6_Pointer)))) : 1) : 1) : 1)) && ((last_1_var_1_5 <= (*(var_1_4_Pointer))) ? ((last_1_var_1_5 <= (*(var_1_4_Pointer))) ? ((*(var_1_7_Pointer)) == ((signed long int) (((*(var_1_8_Pointer)) - (*(var_1_6_Pointer))) - last_1_var_1_1))) : ((! (*(var_1_3_Pointer))) ? ((*(var_1_7_Pointer)) == ((signed long int) last_1_var_1_10)) : ((*(var_1_7_Pointer)) == ((signed long int) (last_1_var_1_5 + (*(var_1_6_Pointer))))))) : ((*(var_1_7_Pointer)) == ((signed long int) (((*(var_1_8_Pointer)) - (*(var_1_6_Pointer))) - last_1_var_1_1))))) && ((*(var_1_9_Pointer)) == ((signed long int) (*(var_1_8_Pointer))))) && ((*(var_1_10_Pointer)) == ((signed short int) (*(var_1_7_Pointer))))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch49Wrapper_P.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 4;
unsigned short int* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 1000000000000000.4;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 1000.2;
float* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 256;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 4;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 10;
unsigned short int* var_1_6_Pointer = &(var_1_6);
signed short int var_1_8 = 128;
signed short int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = -2;
signed short int* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 1;
unsigned char* var_1_14_Pointer = &(var_1_14);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_14 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch49Wrapper_P
	if ((*(var_1_2_Pointer)) >= 64.5f) {
		if ((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) {
			(*(var_1_1_Pointer)) = (abs (max ((*(var_1_4_Pointer)) , (max ((*(var_1_5_Pointer)) , (*(var_1_6_Pointer)))))));
		} else {
			if (last_1_var_1_14) {
				(*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
			} else {
				(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
			}
		}
	} else {
		(*(var_1_1_Pointer)) = 50;
	}


	// From: Req2Batch49Wrapper_P
	(*(var_1_8_Pointer)) = (abs ((*(var_1_9_Pointer))));


	// From: Req3Batch49Wrapper_P
	if ((- 16) <= (*(var_1_9_Pointer))) {
		(*(var_1_10_Pointer)) = (! (! (! (*(var_1_12_Pointer)))));
	} else {
		(*(var_1_10_Pointer)) = ((*(var_1_12_Pointer)) && (*(var_1_13_Pointer)));
	}


	// From: Req4Batch49Wrapper_P
	if (! (*(var_1_13_Pointer))) {
		if ((*(var_1_4_Pointer)) >= (min ((*(var_1_6_Pointer)) , (*(var_1_1_Pointer))))) {
			(*(var_1_14_Pointer)) = ((*(var_1_10_Pointer)) && (*(var_1_13_Pointer)));
		} else {
			(*(var_1_14_Pointer)) = (*(var_1_13_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32766);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	return (((((*(var_1_2_Pointer)) >= 64.5f) ? (((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (abs (max ((*(var_1_4_Pointer)) , (max ((*(var_1_5_Pointer)) , (*(var_1_6_Pointer))))))))) : (last_1_var_1_14 ? ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_5_Pointer)))) : ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_6_Pointer)))))) : ((*(var_1_1_Pointer)) == ((unsigned short int) 50))) && ((*(var_1_8_Pointer)) == ((signed short int) (abs ((*(var_1_9_Pointer))))))) && (((- 16) <= (*(var_1_9_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned char) (! (! (! (*(var_1_12_Pointer))))))) : ((*(var_1_10_Pointer)) == ((unsigned char) ((*(var_1_12_Pointer)) && (*(var_1_13_Pointer))))))) && ((! (*(var_1_13_Pointer))) ? (((*(var_1_4_Pointer)) >= (min ((*(var_1_6_Pointer)) , (*(var_1_1_Pointer))))) ? ((*(var_1_14_Pointer)) == ((unsigned char) ((*(var_1_10_Pointer)) && (*(var_1_13_Pointer))))) : ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_13_Pointer))))) : 1)
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

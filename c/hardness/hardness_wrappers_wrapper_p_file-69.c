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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch69Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = -100;
signed short int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 0;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 8;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_4 = 256;
unsigned long int* var_1_4_Pointer = &(var_1_4);
unsigned long int var_1_5 = 500;
unsigned long int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = -128;
signed short int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = -5;
signed long int* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = -4;
signed char* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = -1;
signed short int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = 32;
signed short int* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 8;
signed long int* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 1;
signed short int* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 16.25;
float* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 16;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 50;
signed char* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = -100;
signed char* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch69Wrapper_P
	unsigned long int stepLocal_1 = (*(var_1_2_Pointer));
	unsigned long int stepLocal_0 = (*(var_1_2_Pointer)) * (min ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer))));
	if (stepLocal_0 < (*(var_1_5_Pointer))) {
		if ((*(var_1_5_Pointer)) > stepLocal_1) {
			(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
		} else {
			(*(var_1_1_Pointer)) = 4;
		}
	}


	// From: Req2Batch69Wrapper_P
	unsigned long int stepLocal_3 = (*(var_1_2_Pointer));
	unsigned char stepLocal_2 = (*(var_1_2_Pointer)) > ((*(var_1_4_Pointer)) + (*(var_1_3_Pointer)));
	if ((*(var_1_8_Pointer)) || stepLocal_2) {
		(*(var_1_7_Pointer)) = (min ((*(var_1_1_Pointer)) , (min (-200 , (*(var_1_6_Pointer))))));
	} else {
		if (stepLocal_3 != 1u) {
			(*(var_1_7_Pointer)) = (*(var_1_1_Pointer));
		} else {
			(*(var_1_7_Pointer)) = (*(var_1_6_Pointer));
		}
	}


	// From: Req3Batch69Wrapper_P
	signed long int stepLocal_4 = (*(var_1_12_Pointer)) >> (*(var_1_13_Pointer));
	if (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) >= stepLocal_4) {
		if ((- 999999.75f) > (*(var_1_14_Pointer))) {
			(*(var_1_9_Pointer)) = ((*(var_1_13_Pointer)) + (max ((*(var_1_15_Pointer)) , (*(var_1_16_Pointer)))));
		}
	}


	// From: Req4Batch69Wrapper_P
	(*(var_1_17_Pointer)) = 4;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32767);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 30);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(var_1_2_Pointer)) * (min ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer))))) < (*(var_1_5_Pointer))) ? (((*(var_1_5_Pointer)) > (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_6_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed short int) 4))) : 1) && (((*(var_1_8_Pointer)) || ((*(var_1_2_Pointer)) > ((*(var_1_4_Pointer)) + (*(var_1_3_Pointer))))) ? ((*(var_1_7_Pointer)) == ((signed long int) (min ((*(var_1_1_Pointer)) , (min (-200 , (*(var_1_6_Pointer)))))))) : (((*(var_1_2_Pointer)) != 1u) ? ((*(var_1_7_Pointer)) == ((signed long int) (*(var_1_1_Pointer)))) : ((*(var_1_7_Pointer)) == ((signed long int) (*(var_1_6_Pointer))))))) && ((((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) >= ((*(var_1_12_Pointer)) >> (*(var_1_13_Pointer)))) ? (((- 999999.75f) > (*(var_1_14_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed char) ((*(var_1_13_Pointer)) + (max ((*(var_1_15_Pointer)) , (*(var_1_16_Pointer))))))) : 1) : 1)) && ((*(var_1_17_Pointer)) == ((signed char) 4))
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

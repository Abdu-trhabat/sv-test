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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch171Wrapper_P.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 16;
unsigned char* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 9.5;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = -0.25;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = -0.75;
float* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 32;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 8;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 8;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 2;
unsigned char* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = -50;
signed long int* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 256.9;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 32.4;
float* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = -128;
signed short int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 1;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 1;
unsigned char* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch171Wrapper_P
	if (((*(var_1_2_Pointer)) - 15.25f) <= ((*(var_1_3_Pointer)) * (- (*(var_1_4_Pointer))))) {
		(*(var_1_1_Pointer)) = (((*(var_1_5_Pointer)) + (min ((*(var_1_6_Pointer)) , (*(var_1_7_Pointer))))) + ((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))));
	}


	// From: Req2Batch171Wrapper_P
	if (((min ((*(var_1_2_Pointer)) , 15.8f)) - ((*(var_1_11_Pointer)) + (*(var_1_12_Pointer)))) != (min ((max (-0.05f , (*(var_1_4_Pointer)))) , (*(var_1_3_Pointer))))) {
		if ((*(var_1_11_Pointer)) < (*(var_1_12_Pointer))) {
			(*(var_1_10_Pointer)) = (*(var_1_9_Pointer));
		} else {
			(*(var_1_10_Pointer)) = (*(var_1_7_Pointer));
		}
	}


	// From: Req3Batch171Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_15_Pointer));
	if ((*(var_1_14_Pointer)) || stepLocal_0) {
		(*(var_1_13_Pointer)) = (min ((*(var_1_1_Pointer)) , (min ((max ((*(var_1_8_Pointer)) , (*(var_1_9_Pointer)))) , (*(var_1_5_Pointer))))));
	} else {
		(*(var_1_13_Pointer)) = ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)));
	}


	// From: Req4Batch171Wrapper_P
	(*(var_1_16_Pointer)) = 0;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 64);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 64);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427388000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427388000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(var_1_2_Pointer)) - 15.25f) <= ((*(var_1_3_Pointer)) * (- (*(var_1_4_Pointer))))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (((*(var_1_5_Pointer)) + (min ((*(var_1_6_Pointer)) , (*(var_1_7_Pointer))))) + ((*(var_1_8_Pointer)) + (*(var_1_9_Pointer)))))) : 1) && ((((min ((*(var_1_2_Pointer)) , 15.8f)) - ((*(var_1_11_Pointer)) + (*(var_1_12_Pointer)))) != (min ((max (-0.05f , (*(var_1_4_Pointer)))) , (*(var_1_3_Pointer))))) ? (((*(var_1_11_Pointer)) < (*(var_1_12_Pointer))) ? ((*(var_1_10_Pointer)) == ((signed long int) (*(var_1_9_Pointer)))) : ((*(var_1_10_Pointer)) == ((signed long int) (*(var_1_7_Pointer))))) : 1)) && (((*(var_1_14_Pointer)) || (*(var_1_15_Pointer))) ? ((*(var_1_13_Pointer)) == ((signed short int) (min ((*(var_1_1_Pointer)) , (min ((max ((*(var_1_8_Pointer)) , (*(var_1_9_Pointer)))) , (*(var_1_5_Pointer)))))))) : ((*(var_1_13_Pointer)) == ((signed short int) ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))))))) && ((*(var_1_16_Pointer)) == ((unsigned char) 0))
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

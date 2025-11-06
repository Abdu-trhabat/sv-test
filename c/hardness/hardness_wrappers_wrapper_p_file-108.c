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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch108Wrapper_P.c", 13, "reach_error"); }
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
float var_1_1 = -0.6;
float* var_1_1_Pointer = &(var_1_1);
signed char var_1_2 = -64;
signed char* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = -32;
signed long int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 1;
unsigned char* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 127.2;
float* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 999999.2;
float* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 256.75;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 99.2;
float* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 15.375;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 4.25;
float* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 8;
unsigned char* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 500;
signed long int* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = 1;
signed long int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 4;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 8;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 32;
unsigned char* var_1_16_Pointer = &(var_1_16);
float var_1_17 = -0.6;
float* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch108Wrapper_P
	if (((*(var_1_3_Pointer)) * (*(var_1_12_Pointer))) != ((*(var_1_2_Pointer)) & (*(var_1_13_Pointer)))) {
		(*(var_1_11_Pointer)) = (max ((*(var_1_14_Pointer)) , (*(var_1_15_Pointer))));
	} else {
		(*(var_1_11_Pointer)) = (100 + (*(var_1_16_Pointer)));
	}


	// From: Req3Batch108Wrapper_P
	if ((*(var_1_4_Pointer))) {
		(*(var_1_17_Pointer)) = (max ((max ((*(var_1_6_Pointer)) , (*(var_1_10_Pointer)))) , (*(var_1_7_Pointer))));
	}


	// From: Req1Batch108Wrapper_P
	unsigned char stepLocal_1 = ((*(var_1_11_Pointer)) * -2) != (*(var_1_3_Pointer));
	signed long int stepLocal_0 = (*(var_1_3_Pointer));
	if (stepLocal_1 || (*(var_1_4_Pointer))) {
		if ((*(var_1_11_Pointer)) > stepLocal_0) {
			if (! ((*(var_1_3_Pointer)) > (*(var_1_11_Pointer)))) {
				(*(var_1_1_Pointer)) = ((max ((*(var_1_5_Pointer)) , ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer))))) + (((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer))));
			} else {
				(*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
			}
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_9_Pointer));
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -115292.1504606845700e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 1152921.504606845700e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -115292.1504606845700e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 1152921.504606845700e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -230584.3009213691400e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(var_1_11_Pointer)) * -2) != (*(var_1_3_Pointer))) || (*(var_1_4_Pointer))) ? (((*(var_1_11_Pointer)) > (*(var_1_3_Pointer))) ? ((! ((*(var_1_3_Pointer)) > (*(var_1_11_Pointer)))) ? ((*(var_1_1_Pointer)) == ((float) ((max ((*(var_1_5_Pointer)) , ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer))))) + (((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer)))))) : ((*(var_1_1_Pointer)) == ((float) (*(var_1_7_Pointer))))) : ((*(var_1_1_Pointer)) == ((float) (*(var_1_9_Pointer))))) : ((*(var_1_1_Pointer)) == ((float) (*(var_1_8_Pointer))))) && ((((*(var_1_3_Pointer)) * (*(var_1_12_Pointer))) != ((*(var_1_2_Pointer)) & (*(var_1_13_Pointer)))) ? ((*(var_1_11_Pointer)) == ((unsigned char) (max ((*(var_1_14_Pointer)) , (*(var_1_15_Pointer)))))) : ((*(var_1_11_Pointer)) == ((unsigned char) (100 + (*(var_1_16_Pointer))))))) && ((*(var_1_4_Pointer)) ? ((*(var_1_17_Pointer)) == ((float) (max ((max ((*(var_1_6_Pointer)) , (*(var_1_10_Pointer)))) , (*(var_1_7_Pointer)))))) : 1)
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

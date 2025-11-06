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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch190Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = 64;
signed short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 0;
unsigned char* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 1;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 256;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 2;
unsigned short int* var_1_6_Pointer = &(var_1_6);
signed short int var_1_7 = 16;
signed short int* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 24.5;
double* var_1_8_Pointer = &(var_1_8);
double var_1_10 = 64.75;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 9999.2;
double* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = -64;
signed long int* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = 100;
signed char* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = 256;
signed long int* var_1_14_Pointer = &(var_1_14);
float var_1_15 = -0.75;
float* var_1_15_Pointer = &(var_1_15);
unsigned long int var_1_16 = 16;
unsigned long int* var_1_16_Pointer = &(var_1_16);
signed short int var_1_17 = -4;
signed short int* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch190Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_3_Pointer)) && ((*(var_1_5_Pointer)) <= (*(var_1_6_Pointer)));
	if ((*(var_1_2_Pointer)) || stepLocal_0) {
		(*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
	} else {
		if ((*(var_1_3_Pointer))) {
			(*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
		} else {
			(*(var_1_1_Pointer)) = -32;
		}
	}


	// From: Req3Batch190Wrapper_P
	signed long int stepLocal_1 = -5 % (*(var_1_13_Pointer));
	if (! (*(var_1_4_Pointer))) {
		if (stepLocal_1 == (max (10 , ((*(var_1_7_Pointer)) / (*(var_1_14_Pointer)))))) {
			(*(var_1_12_Pointer)) = ((*(var_1_6_Pointer)) - (*(var_1_5_Pointer)));
		}
	}


	// From: Req4Batch190Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_11_Pointer));


	// From: Req5Batch190Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_12_Pointer));


	// From: Req6Batch190Wrapper_P
	(*(var_1_17_Pointer)) = (*(var_1_7_Pointer));


	// From: Req2Batch190Wrapper_P
	if (! ((*(var_1_16_Pointer)) > ((*(var_1_12_Pointer)) + 1))) {
		if (8.5f <= (*(var_1_15_Pointer))) {
			(*(var_1_8_Pointer)) = (max ((*(var_1_10_Pointer)) , (*(var_1_11_Pointer))));
		} else {
			(*(var_1_8_Pointer)) = (*(var_1_10_Pointer));
		}
	} else {
		(*(var_1_8_Pointer)) = (*(var_1_10_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65535);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65535);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -128);
	assume_abort_if_not(var_1_13 <= 127);
	assume_abort_if_not(var_1_13 != 0);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	assume_abort_if_not(var_1_14 != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((*(var_1_2_Pointer)) || ((*(var_1_3_Pointer)) && ((*(var_1_5_Pointer)) <= (*(var_1_6_Pointer))))) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_7_Pointer)))) : ((*(var_1_3_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_7_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed short int) -32)))) && ((! ((*(var_1_16_Pointer)) > ((*(var_1_12_Pointer)) + 1))) ? ((8.5f <= (*(var_1_15_Pointer))) ? ((*(var_1_8_Pointer)) == ((double) (max ((*(var_1_10_Pointer)) , (*(var_1_11_Pointer)))))) : ((*(var_1_8_Pointer)) == ((double) (*(var_1_10_Pointer))))) : ((*(var_1_8_Pointer)) == ((double) (*(var_1_10_Pointer)))))) && ((! (*(var_1_4_Pointer))) ? (((-5 % (*(var_1_13_Pointer))) == (max (10 , ((*(var_1_7_Pointer)) / (*(var_1_14_Pointer)))))) ? ((*(var_1_12_Pointer)) == ((signed long int) ((*(var_1_6_Pointer)) - (*(var_1_5_Pointer))))) : 1) : 1)) && ((*(var_1_15_Pointer)) == ((float) (*(var_1_11_Pointer))))) && ((*(var_1_16_Pointer)) == ((unsigned long int) (*(var_1_12_Pointer))))) && ((*(var_1_17_Pointer)) == ((signed short int) (*(var_1_7_Pointer))))
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

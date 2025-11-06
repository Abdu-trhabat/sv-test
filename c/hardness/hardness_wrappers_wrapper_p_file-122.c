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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch122Wrapper_P.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 8;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 1;
unsigned long int* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 1.3;
double* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 5.75;
double* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 16.6;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 255.75;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 999999999.2;
double* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = 100;
signed long int* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 1999204289;
signed long int* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = 32;
signed long int* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = 1433281976;
signed long int* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = 64;
signed long int* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 16.5;
float* var_1_16_Pointer = &(var_1_16);
unsigned long int var_1_17 = 2427043635;
unsigned long int* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch122Wrapper_P
	(*(var_1_1_Pointer)) = (abs (min (1 , (*(var_1_2_Pointer)))));


	// From: Req2Batch122Wrapper_P
	if ((*(var_1_4_Pointer)) < (*(var_1_5_Pointer))) {
		(*(var_1_3_Pointer)) = ((abs ((*(var_1_1_Pointer)))) + (*(var_1_2_Pointer)));
	} else {
		(*(var_1_3_Pointer)) = (*(var_1_2_Pointer));
	}


	// From: Req3Batch122Wrapper_P
	if ((*(var_1_4_Pointer)) >= (*(var_1_5_Pointer))) {
		(*(var_1_6_Pointer)) = (min (7.8 , ((*(var_1_7_Pointer)) - (*(var_1_8_Pointer)))));
	}


	// From: Req4Batch122Wrapper_P
	unsigned long int stepLocal_1 = (*(var_1_3_Pointer));
	unsigned char stepLocal_0 = (*(var_1_11_Pointer));
	if ((*(var_1_10_Pointer)) || stepLocal_0) {
		(*(var_1_9_Pointer)) = 128;
	} else {
		if ((*(var_1_2_Pointer)) < stepLocal_1) {
			(*(var_1_9_Pointer)) = (min (((*(var_1_2_Pointer)) - ((*(var_1_12_Pointer)) - (*(var_1_3_Pointer)))) , ((*(var_1_13_Pointer)) - ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))))));
		}
	}


	// From: Req5Batch122Wrapper_P
	unsigned long int stepLocal_2 = (*(var_1_3_Pointer));
	if (stepLocal_2 > ((*(var_1_14_Pointer)) % ((*(var_1_17_Pointer)) - (*(var_1_12_Pointer))))) {
		(*(var_1_16_Pointer)) = (*(var_1_7_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 254);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 1073741823);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 1073741823);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(var_1_1_Pointer)) == ((unsigned char) (abs (min (1 , (*(var_1_2_Pointer))))))) && (((*(var_1_4_Pointer)) < (*(var_1_5_Pointer))) ? ((*(var_1_3_Pointer)) == ((unsigned long int) ((abs ((*(var_1_1_Pointer)))) + (*(var_1_2_Pointer))))) : ((*(var_1_3_Pointer)) == ((unsigned long int) (*(var_1_2_Pointer)))))) && (((*(var_1_4_Pointer)) >= (*(var_1_5_Pointer))) ? ((*(var_1_6_Pointer)) == ((double) (min (7.8 , ((*(var_1_7_Pointer)) - (*(var_1_8_Pointer))))))) : 1)) && (((*(var_1_10_Pointer)) || (*(var_1_11_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed long int) 128)) : (((*(var_1_2_Pointer)) < (*(var_1_3_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed long int) (min (((*(var_1_2_Pointer)) - ((*(var_1_12_Pointer)) - (*(var_1_3_Pointer)))) , ((*(var_1_13_Pointer)) - ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer)))))))) : 1))) && (((*(var_1_3_Pointer)) > ((*(var_1_14_Pointer)) % ((*(var_1_17_Pointer)) - (*(var_1_12_Pointer))))) ? ((*(var_1_16_Pointer)) == ((float) (*(var_1_7_Pointer)))) : 1)
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

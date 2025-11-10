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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch133Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = -64;
signed short int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 16;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 1;
signed long int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = -16;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 2;
signed short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 5;
unsigned short int* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 256;
unsigned short int* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 4;
unsigned short int* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 49.5;
double* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_11 = 1;
unsigned char* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 0.5;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 9.4;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 0.30000000000000004;
double* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = -10000;
signed short int* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 1;
unsigned char* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch133Wrapper_P
	if (8 >= ((*(var_1_2_Pointer)) + (*(var_1_3_Pointer)))) {
		(*(var_1_1_Pointer)) = (min ((*(var_1_4_Pointer)) , ((*(var_1_5_Pointer)) + 10)));
	}


	// From: Req2Batch133Wrapper_P
	signed long int stepLocal_0 = (*(var_1_3_Pointer));
	if (stepLocal_0 <= (*(var_1_2_Pointer))) {
		(*(var_1_6_Pointer)) = ((*(var_1_7_Pointer)) + (*(var_1_8_Pointer)));
	}


	// From: Req4Batch133Wrapper_P
	unsigned short int stepLocal_4 = (*(var_1_6_Pointer));
	unsigned char stepLocal_3 = (*(var_1_11_Pointer)) || (*(var_1_16_Pointer));
	if (stepLocal_3 || (! (*(var_1_17_Pointer)))) {
		if (stepLocal_4 < (*(var_1_7_Pointer))) {
			(*(var_1_15_Pointer)) = (min ((*(var_1_5_Pointer)) , (*(var_1_4_Pointer))));
		} else {
			if ((*(var_1_17_Pointer))) {
				(*(var_1_15_Pointer)) = (*(var_1_5_Pointer));
			}
		}
	} else {
		(*(var_1_15_Pointer)) = (*(var_1_5_Pointer));
	}


	// From: Req3Batch133Wrapper_P
	signed long int stepLocal_2 = (*(var_1_6_Pointer)) + (*(var_1_15_Pointer));
	unsigned short int stepLocal_1 = (*(var_1_7_Pointer));
	if ((*(var_1_7_Pointer)) <= stepLocal_2) {
		if ((*(var_1_3_Pointer)) >= stepLocal_1) {
			(*(var_1_9_Pointer)) = ((*(var_1_12_Pointer)) + (abs (min ((*(var_1_13_Pointer)) , (*(var_1_14_Pointer))))));
		}
	} else {
		(*(var_1_9_Pointer)) = ((*(var_1_14_Pointer)) + (*(var_1_12_Pointer)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((8 >= ((*(var_1_2_Pointer)) + (*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed short int) (min ((*(var_1_4_Pointer)) , ((*(var_1_5_Pointer)) + 10))))) : 1) && (((*(var_1_3_Pointer)) <= (*(var_1_2_Pointer))) ? ((*(var_1_6_Pointer)) == ((unsigned short int) ((*(var_1_7_Pointer)) + (*(var_1_8_Pointer))))) : 1)) && (((*(var_1_7_Pointer)) <= ((*(var_1_6_Pointer)) + (*(var_1_15_Pointer)))) ? (((*(var_1_3_Pointer)) >= (*(var_1_7_Pointer))) ? ((*(var_1_9_Pointer)) == ((double) ((*(var_1_12_Pointer)) + (abs (min ((*(var_1_13_Pointer)) , (*(var_1_14_Pointer)))))))) : 1) : ((*(var_1_9_Pointer)) == ((double) ((*(var_1_14_Pointer)) + (*(var_1_12_Pointer))))))) && ((((*(var_1_11_Pointer)) || (*(var_1_16_Pointer))) || (! (*(var_1_17_Pointer)))) ? (((*(var_1_6_Pointer)) < (*(var_1_7_Pointer))) ? ((*(var_1_15_Pointer)) == ((signed short int) (min ((*(var_1_5_Pointer)) , (*(var_1_4_Pointer)))))) : ((*(var_1_17_Pointer)) ? ((*(var_1_15_Pointer)) == ((signed short int) (*(var_1_5_Pointer)))) : 1)) : ((*(var_1_15_Pointer)) == ((signed short int) (*(var_1_5_Pointer)))))
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

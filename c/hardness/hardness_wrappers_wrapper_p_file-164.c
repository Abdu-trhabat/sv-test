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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164Wrapper_P.c", 13, "reach_error"); }
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
double var_1_1 = 2.5;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 0;
unsigned char* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 8;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = -256;
signed long int* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 100000000000000.5;
double* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = -1000;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = -100000;
signed long int* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 31.375;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 63.3;
double* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 64;
unsigned short int* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = -1;
signed long int* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = 100;
signed long int* var_1_13_Pointer = &(var_1_13);
unsigned short int var_1_14 = 2;
unsigned short int* var_1_14_Pointer = &(var_1_14);
unsigned short int var_1_15 = 1;
unsigned short int* var_1_15_Pointer = &(var_1_15);
signed short int var_1_16 = 32;
signed short int* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 10000;
unsigned short int* var_1_17_Pointer = &(var_1_17);
unsigned short int var_1_18 = 0;
unsigned short int* var_1_18_Pointer = &(var_1_18);
unsigned short int var_1_19 = 500;
unsigned short int* var_1_19_Pointer = &(var_1_19);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch164Wrapper_P
	if ((*(var_1_2_Pointer)) || (*(var_1_3_Pointer))) {
		if (((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))) <= -1) {
			(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
		} else {
			if ((*(var_1_5_Pointer)) > ((min ((*(var_1_4_Pointer)) , (*(var_1_7_Pointer)))) * (*(var_1_8_Pointer)))) {
				(*(var_1_1_Pointer)) = ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer)));
			} else {
				(*(var_1_1_Pointer)) = (min (99.5 , (*(var_1_6_Pointer))));
			}
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
	}


	// From: Req2Batch164Wrapper_P
	signed long int stepLocal_0 = (*(var_1_8_Pointer));
	if (((*(var_1_12_Pointer)) - (*(var_1_13_Pointer))) <= stepLocal_0) {
		(*(var_1_11_Pointer)) = (min (5 , (*(var_1_14_Pointer))));
	}


	// From: Req3Batch164Wrapper_P
	if ((*(var_1_2_Pointer))) {
		if (! (((*(var_1_4_Pointer)) / (*(var_1_16_Pointer))) < (*(var_1_11_Pointer)))) {
			(*(var_1_15_Pointer)) = (10 + (((*(var_1_17_Pointer)) - (*(var_1_18_Pointer))) + (*(var_1_19_Pointer))));
		}
	} else {
		(*(var_1_15_Pointer)) = (*(var_1_14_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -32768);
	assume_abort_if_not(var_1_16 <= 32767);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 8192);
	assume_abort_if_not(var_1_17 <= 16384);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 8192);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16383);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(var_1_2_Pointer)) || (*(var_1_3_Pointer))) ? ((((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))) <= -1) ? ((*(var_1_1_Pointer)) == ((double) (*(var_1_6_Pointer)))) : (((*(var_1_5_Pointer)) > ((min ((*(var_1_4_Pointer)) , (*(var_1_7_Pointer)))) * (*(var_1_8_Pointer)))) ? ((*(var_1_1_Pointer)) == ((double) ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer))))) : ((*(var_1_1_Pointer)) == ((double) (min (99.5 , (*(var_1_6_Pointer)))))))) : ((*(var_1_1_Pointer)) == ((double) (*(var_1_6_Pointer))))) && ((((*(var_1_12_Pointer)) - (*(var_1_13_Pointer))) <= (*(var_1_8_Pointer))) ? ((*(var_1_11_Pointer)) == ((unsigned short int) (min (5 , (*(var_1_14_Pointer)))))) : 1)) && ((*(var_1_2_Pointer)) ? ((! (((*(var_1_4_Pointer)) / (*(var_1_16_Pointer))) < (*(var_1_11_Pointer)))) ? ((*(var_1_15_Pointer)) == ((unsigned short int) (10 + (((*(var_1_17_Pointer)) - (*(var_1_18_Pointer))) + (*(var_1_19_Pointer)))))) : 1) : ((*(var_1_15_Pointer)) == ((unsigned short int) (*(var_1_14_Pointer)))))
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

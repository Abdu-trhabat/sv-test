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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Wrapper_P.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 10;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
signed short int var_1_3 = 128;
signed short int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 1;
signed short int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 25;
unsigned short int* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 256.75;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 63.5;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 1.8;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 0.25;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 16.5;
double* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = -5;
signed long int* var_1_12_Pointer = &(var_1_12);
unsigned short int var_1_13 = 8;
unsigned short int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_15 = 128;
unsigned char* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 4.6;
float* var_1_16_Pointer = &(var_1_16);
unsigned long int var_1_17 = 500;
unsigned long int* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 2;
unsigned char* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 10;
signed long int last_1_var_1_12 = -5;
unsigned long int last_1_var_1_17 = 500;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch55Wrapper_P
	signed long int stepLocal_3 = ~ (*(var_1_6_Pointer));
	signed long int stepLocal_2 = (*(var_1_15_Pointer)) - (*(var_1_13_Pointer));
	if (stepLocal_3 <= (min ((16 >> (*(var_1_13_Pointer))) , last_1_var_1_12))) {
		if (stepLocal_2 < (last_1_var_1_1 / -8)) {
			(*(var_1_12_Pointer)) = last_1_var_1_1;
		}
	} else {
		(*(var_1_12_Pointer)) = (last_1_var_1_17 - (*(var_1_13_Pointer)));
	}


	// From: Req5Batch55Wrapper_P
	(*(var_1_17_Pointer)) = (*(var_1_12_Pointer));


	// From: Req1Batch55Wrapper_P
	unsigned char stepLocal_1 = (*(var_1_3_Pointer)) >= (*(var_1_4_Pointer));
	signed short int stepLocal_0 = (*(var_1_3_Pointer));
	if ((*(var_1_2_Pointer))) {
		if (stepLocal_1 && (*(var_1_5_Pointer))) {
			if (stepLocal_0 >= (*(var_1_4_Pointer))) {
				(*(var_1_1_Pointer)) = 5;
			} else {
				(*(var_1_1_Pointer)) = (min (25 , (*(var_1_6_Pointer))));
			}
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
	}


	// From: Req2Batch55Wrapper_P
	if ((*(var_1_2_Pointer))) {
		(*(var_1_7_Pointer)) = ((((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer))) - (*(var_1_11_Pointer)));
	}


	// From: Req4Batch55Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_8_Pointer));


	// From: Req6Batch55Wrapper_P
	(*(var_1_18_Pointer)) = (*(var_1_13_Pointer));
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 30);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	return ((((((*(var_1_2_Pointer)) ? ((((*(var_1_3_Pointer)) >= (*(var_1_4_Pointer))) && (*(var_1_5_Pointer))) ? (((*(var_1_3_Pointer)) >= (*(var_1_4_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) 5)) : ((*(var_1_1_Pointer)) == ((unsigned short int) (min (25 , (*(var_1_6_Pointer))))))) : 1) : ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_6_Pointer))))) && ((*(var_1_2_Pointer)) ? ((*(var_1_7_Pointer)) == ((double) ((((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (*(var_1_10_Pointer))) - (*(var_1_11_Pointer))))) : 1)) && (((~ (*(var_1_6_Pointer))) <= (min ((16 >> (*(var_1_13_Pointer))) , last_1_var_1_12))) ? ((((*(var_1_15_Pointer)) - (*(var_1_13_Pointer))) < (last_1_var_1_1 / -8)) ? ((*(var_1_12_Pointer)) == ((signed long int) last_1_var_1_1)) : 1) : ((*(var_1_12_Pointer)) == ((signed long int) (last_1_var_1_17 - (*(var_1_13_Pointer))))))) && ((*(var_1_16_Pointer)) == ((float) (*(var_1_8_Pointer))))) && ((*(var_1_17_Pointer)) == ((unsigned long int) (*(var_1_12_Pointer))))) && ((*(var_1_18_Pointer)) == ((unsigned char) (*(var_1_13_Pointer))))
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

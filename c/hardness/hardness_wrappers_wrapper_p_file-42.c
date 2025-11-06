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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42Wrapper_P.c", 13, "reach_error"); }
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
signed long int var_1_1 = -1;
signed long int* var_1_1_Pointer = &(var_1_1);
signed short int var_1_2 = -8;
signed short int* var_1_2_Pointer = &(var_1_2);
signed short int var_1_3 = -200;
signed short int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 64;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 256;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 10;
signed long int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 100;
signed long int* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 5;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 4;
unsigned char* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 16.5;
float* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 127.25;
float* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 0;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 0;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 0;
unsigned char* var_1_19_Pointer = &(var_1_19);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch42Wrapper_P
	if ((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) {
		(*(var_1_1_Pointer)) = ((min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer)))) - 10);
	} else {
		(*(var_1_1_Pointer)) = (max (((*(var_1_5_Pointer)) - (*(var_1_6_Pointer))) , ((*(var_1_4_Pointer)) - (*(var_1_7_Pointer)))));
	}


	// From: Req2Batch42Wrapper_P
	(*(var_1_8_Pointer)) = ((*(var_1_9_Pointer)) + 100);


	// From: Req3Batch42Wrapper_P
	(*(var_1_10_Pointer)) = (min ((*(var_1_11_Pointer)) , 64.15f));


	// From: Req5Batch42Wrapper_P
	if ((*(var_1_11_Pointer)) <= (*(var_1_10_Pointer))) {
		if ((*(var_1_1_Pointer)) != (*(var_1_7_Pointer))) {
			(*(var_1_17_Pointer)) = (*(var_1_18_Pointer));
		}
	} else {
		if ((*(var_1_4_Pointer)) <= 1000000) {
			(*(var_1_17_Pointer)) = 0;
		} else {
			(*(var_1_17_Pointer)) = (*(var_1_19_Pointer));
		}
	}


	// From: Req4Batch42Wrapper_P
	if ((- (*(var_1_10_Pointer))) > (*(var_1_11_Pointer))) {
		(*(var_1_12_Pointer)) = ((*(var_1_13_Pointer)) || ((*(var_1_17_Pointer)) && ((*(var_1_15_Pointer)) || (*(var_1_16_Pointer)))));
	} else {
		(*(var_1_12_Pointer)) = (((*(var_1_1_Pointer)) <= (*(var_1_9_Pointer))) && (*(var_1_16_Pointer)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) ((min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer)))) - 10))) : ((*(var_1_1_Pointer)) == ((signed long int) (max (((*(var_1_5_Pointer)) - (*(var_1_6_Pointer))) , ((*(var_1_4_Pointer)) - (*(var_1_7_Pointer)))))))) && ((*(var_1_8_Pointer)) == ((unsigned char) ((*(var_1_9_Pointer)) + 100)))) && ((*(var_1_10_Pointer)) == ((float) (min ((*(var_1_11_Pointer)) , 64.15f))))) && (((- (*(var_1_10_Pointer))) > (*(var_1_11_Pointer))) ? ((*(var_1_12_Pointer)) == ((unsigned char) ((*(var_1_13_Pointer)) || ((*(var_1_17_Pointer)) && ((*(var_1_15_Pointer)) || (*(var_1_16_Pointer))))))) : ((*(var_1_12_Pointer)) == ((unsigned char) (((*(var_1_1_Pointer)) <= (*(var_1_9_Pointer))) && (*(var_1_16_Pointer))))))) && (((*(var_1_11_Pointer)) <= (*(var_1_10_Pointer))) ? (((*(var_1_1_Pointer)) != (*(var_1_7_Pointer))) ? ((*(var_1_17_Pointer)) == ((unsigned char) (*(var_1_18_Pointer)))) : 1) : (((*(var_1_4_Pointer)) <= 1000000) ? ((*(var_1_17_Pointer)) == ((unsigned char) 0)) : ((*(var_1_17_Pointer)) == ((unsigned char) (*(var_1_19_Pointer))))))
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

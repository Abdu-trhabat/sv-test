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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11Wrapper_P.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
signed char* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 50.75;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 7.675;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = -0.5;
double* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 1;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = 10;
signed char* var_1_7_Pointer = &(var_1_7);
signed char var_1_8 = 10;
signed char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 16;
unsigned char* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 15.875;
double* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 128;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 10;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 5;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 10;
unsigned char* var_1_19_Pointer = &(var_1_19);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch11Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_5_Pointer));
	if (((*(var_1_2_Pointer)) - 5.25) < ((*(var_1_3_Pointer)) * ((*(var_1_4_Pointer)) * 199.4))) {
		if (stepLocal_0 && (*(var_1_6_Pointer))) {
			if ((*(var_1_4_Pointer)) < (*(var_1_3_Pointer))) {
				(*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
			} else {
				(*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
			}
		}
	}


	// From: Req2Batch11Wrapper_P
	if ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) {
		(*(var_1_9_Pointer)) = (((*(var_1_10_Pointer)) || (*(var_1_11_Pointer))) || (*(var_1_12_Pointer)));
	} else {
		if (((*(var_1_2_Pointer)) < (*(var_1_4_Pointer))) || last_1_var_1_9) {
			(*(var_1_9_Pointer)) = 0;
		} else {
			(*(var_1_9_Pointer)) = (*(var_1_13_Pointer));
		}
	}


	// From: Req3Batch11Wrapper_P
	if ((*(var_1_9_Pointer)) && ((*(var_1_3_Pointer)) > ((*(var_1_2_Pointer)) / (*(var_1_15_Pointer))))) {
		(*(var_1_14_Pointer)) = (max (((abs ((*(var_1_16_Pointer)))) - (*(var_1_17_Pointer))) , ((*(var_1_18_Pointer)) + (*(var_1_19_Pointer)))));
	} else {
		(*(var_1_14_Pointer)) = (*(var_1_17_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
}

int property(void) {
	return (((((*(var_1_2_Pointer)) - 5.25) < ((*(var_1_3_Pointer)) * ((*(var_1_4_Pointer)) * 199.4))) ? (((*(var_1_5_Pointer)) && (*(var_1_6_Pointer))) ? (((*(var_1_4_Pointer)) < (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_7_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_8_Pointer))))) : 1) : 1) && (((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) ? ((*(var_1_9_Pointer)) == ((unsigned char) (((*(var_1_10_Pointer)) || (*(var_1_11_Pointer))) || (*(var_1_12_Pointer))))) : ((((*(var_1_2_Pointer)) < (*(var_1_4_Pointer))) || last_1_var_1_9) ? ((*(var_1_9_Pointer)) == ((unsigned char) 0)) : ((*(var_1_9_Pointer)) == ((unsigned char) (*(var_1_13_Pointer))))))) && (((*(var_1_9_Pointer)) && ((*(var_1_3_Pointer)) > ((*(var_1_2_Pointer)) / (*(var_1_15_Pointer))))) ? ((*(var_1_14_Pointer)) == ((unsigned char) (max (((abs ((*(var_1_16_Pointer)))) - (*(var_1_17_Pointer))) , ((*(var_1_18_Pointer)) + (*(var_1_19_Pointer))))))) : ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_17_Pointer)))))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124normal.c", 13, "reach_error"); }
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
double var_1_1 = 64.5;
double var_1_2 = 8.5;
double var_1_3 = 3.2;
unsigned char var_1_4 = 0;
double var_1_5 = 100000000.4;
unsigned long int var_1_6 = 64;
unsigned long int var_1_7 = 8;
unsigned long int var_1_8 = 16;
signed char var_1_9 = 64;
signed char var_1_10 = 100;
signed char var_1_11 = 2;
signed char var_1_12 = 5;
unsigned short int var_1_13 = 8;
signed short int var_1_14 = -8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch124normal
	unsigned char stepLocal_0 = var_1_4;
	if (! (var_1_2 == (15.2 + var_1_3))) {
		if (stepLocal_0 && (var_1_2 == var_1_3)) {
			if (var_1_4) {
				var_1_1 = (2.5 - var_1_5);
			} else {
				var_1_1 = var_1_5;
			}
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch124normal
	var_1_6 = (var_1_7 + var_1_8);


	// From: Req3Batch124normal
	unsigned long int stepLocal_1 = max (var_1_8 , var_1_7);
	if ((abs (var_1_6)) < stepLocal_1) {
		var_1_9 = ((var_1_10 - var_1_11) - (abs (var_1_12)));
	}


	// From: Req5Batch124normal
	var_1_14 = 16;


	// From: Req4Batch124normal
	if (var_1_4) {
		if (var_1_5 > 99.4) {
			if (var_1_14 >= var_1_6) {
				var_1_13 = (min (var_1_10 , 256));
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 62);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -126);
	assume_abort_if_not(var_1_12 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((! (var_1_2 == (15.2 + var_1_3))) ? ((var_1_4 && (var_1_2 == var_1_3)) ? (var_1_4 ? (var_1_1 == ((double) (2.5 - var_1_5))) : (var_1_1 == ((double) var_1_5))) : 1) : (var_1_1 == ((double) var_1_5))) && (var_1_6 == ((unsigned long int) (var_1_7 + var_1_8)))) && (((abs (var_1_6)) < (max (var_1_8 , var_1_7))) ? (var_1_9 == ((signed char) ((var_1_10 - var_1_11) - (abs (var_1_12))))) : 1)) && (var_1_4 ? ((var_1_5 > 99.4) ? ((var_1_14 >= var_1_6) ? (var_1_13 == ((unsigned short int) (min (var_1_10 , 256)))) : 1) : 1) : 1)) && (var_1_14 == ((signed short int) 16))
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

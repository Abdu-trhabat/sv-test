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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1525_while.c", 13, "reach_error"); }
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
signed char var_1_1 = -128;
unsigned char var_1_2 = 1;
signed long int var_1_4 = -256;
signed long int var_1_5 = -32;
unsigned char var_1_6 = 1;
unsigned long int var_1_7 = 1000;
signed char var_1_8 = -4;
unsigned short int var_1_9 = 1000;
double var_1_10 = 5.75;
double var_1_11 = 5.5;
double var_1_12 = 15.1;
unsigned short int var_1_13 = 5;
unsigned long int var_1_14 = 64;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch1525_while
	if (((var_1_10 * var_1_11) / var_1_12) >= (abs (255.025))) {
		var_1_9 = var_1_13;
	}


	// From: Req3Batch1525_while
	var_1_14 = var_1_9;


	// From: Req4Batch1525_while
	var_1_15 = var_1_16;


	// From: Req1Batch1525_while
	unsigned char stepLocal_2 = (- var_1_7) <= var_1_9;
	signed long int stepLocal_1 = var_1_4;
	unsigned char stepLocal_0 = var_1_2;
	if (stepLocal_0 || ((~ var_1_9) >= var_1_4)) {
		if (stepLocal_1 < var_1_5) {
			if (! var_1_6) {
				if ((var_1_4 > var_1_5) && stepLocal_2) {
					var_1_1 = var_1_8;
				} else {
					var_1_1 = 4;
				}
			}
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = 5;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967295);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 || ((~ var_1_9) >= var_1_4)) ? ((var_1_4 < var_1_5) ? ((! var_1_6) ? (((var_1_4 > var_1_5) && ((- var_1_7) <= var_1_9)) ? (var_1_1 == ((signed char) var_1_8)) : (var_1_1 == ((signed char) 4))) : 1) : (var_1_1 == ((signed char) var_1_8))) : (var_1_1 == ((signed char) 5))) && ((((var_1_10 * var_1_11) / var_1_12) >= (abs (255.025))) ? (var_1_9 == ((unsigned short int) var_1_13)) : 1)) && (var_1_14 == ((unsigned long int) var_1_9))) && (var_1_15 == ((unsigned char) var_1_16))
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

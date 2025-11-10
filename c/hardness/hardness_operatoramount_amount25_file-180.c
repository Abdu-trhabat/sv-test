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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180Amount25.c", 13, "reach_error"); }
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
signed short int var_1_1 = -10;
signed long int var_1_3 = 1;
signed long int var_1_4 = -256;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 4;
unsigned char var_1_10 = 50;
double var_1_11 = 255.5;
double var_1_12 = 63.7;
double var_1_13 = 16.625;
double var_1_14 = 0.5;
unsigned char var_1_15 = 0;
double var_1_16 = 2.4;
double var_1_17 = 3.5;
double var_1_18 = 999.75;
double var_1_19 = 100.75;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch180Amount25
	signed long int stepLocal_0 = (var_1_3 * -10) & var_1_4;
	if ((~ last_1_var_1_1) >= stepLocal_0) {
		var_1_1 = last_1_var_1_1;
	}


	// From: Req3Batch180Amount25
	var_1_11 = (((7.2 - var_1_12) + var_1_13) + ((abs (16.6)) + var_1_14));


	// From: Req4Batch180Amount25
	if (var_1_12 == ((var_1_16 + var_1_17) - (var_1_18 + var_1_19))) {
		if (var_1_6) {
			var_1_15 = var_1_20;
		} else {
			var_1_15 = var_1_21;
		}
	} else {
		var_1_15 = var_1_21;
	}


	// From: Req2Batch180Amount25
	if (! var_1_15) {
		var_1_5 = (min (var_1_7 , (var_1_8 - (var_1_9 + var_1_10))));
	} else {
		var_1_5 = 10;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 127);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 64);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -230584.3009213691400e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427388000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427388000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427388000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427388000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	return (((((~ last_1_var_1_1) >= ((var_1_3 * -10) & var_1_4)) ? (var_1_1 == ((signed short int) last_1_var_1_1)) : 1) && ((! var_1_15) ? (var_1_5 == ((unsigned char) (min (var_1_7 , (var_1_8 - (var_1_9 + var_1_10)))))) : (var_1_5 == ((unsigned char) 10)))) && (var_1_11 == ((double) (((7.2 - var_1_12) + var_1_13) + ((abs (16.6)) + var_1_14))))) && ((var_1_12 == ((var_1_16 + var_1_17) - (var_1_18 + var_1_19))) ? (var_1_6 ? (var_1_15 == ((unsigned char) var_1_20)) : (var_1_15 == ((unsigned char) var_1_21))) : (var_1_15 == ((unsigned char) var_1_21)))
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

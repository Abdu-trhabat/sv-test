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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12550_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
signed long int var_1_3 = 8;
signed long int var_1_4 = 1281657540;
signed long int var_1_5 = 2;
signed long int var_1_6 = 8;
signed long int var_1_7 = 256;
signed char var_1_8 = 4;
signed char var_1_9 = 32;
double var_1_10 = 25.5;
signed char var_1_11 = 4;
signed char var_1_12 = -4;
signed char var_1_13 = 2;
double var_1_14 = 128.4;
double var_1_15 = 0.0;
double var_1_16 = 0.875;
double var_1_17 = 100.5;
unsigned short int var_1_18 = 50;
unsigned short int var_1_19 = 44049;
signed short int var_1_20 = -32;
signed short int var_1_21 = 1;
signed short int var_1_22 = 2;
signed char var_1_23 = 8;
unsigned char var_1_24 = 1;
signed char var_1_25 = 2;
signed char var_1_26 = -2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch12550_1loop
	if (var_1_3 >= ((var_1_4 - var_1_5) - (min (var_1_6 , var_1_7)))) {
		if ((var_1_8 - var_1_9) > (var_1_7 - 25)) {
			var_1_1 = var_1_10;
		} else {
			var_1_1 = 10000.88;
		}
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req2Batch12550_1loop
	var_1_11 = ((abs (var_1_12)) + var_1_13);


	// From: Req3Batch12550_1loop
	signed char stepLocal_0 = var_1_8;
	if (var_1_2) {
		if (stepLocal_0 > var_1_12) {
			var_1_14 = ((var_1_15 - var_1_16) - var_1_17);
		} else {
			var_1_14 = var_1_10;
		}
	} else {
		var_1_14 = var_1_17;
	}


	// From: Req4Batch12550_1loop
	var_1_18 = (min ((var_1_19 - 100) , var_1_9));


	// From: Req5Batch12550_1loop
	if (var_1_2) {
		var_1_20 = var_1_18;
	} else {
		var_1_20 = ((var_1_9 - 64) + var_1_18);
	}


	// From: Req6Batch12550_1loop
	if (var_1_1 <= (var_1_17 / var_1_15)) {
		var_1_21 = (min (var_1_12 , ((max (var_1_8 , var_1_9)) - var_1_22)));
	} else {
		var_1_21 = (var_1_8 - (abs (var_1_9)));
	}


	// From: Req7Batch12550_1loop
	if (var_1_18 < var_1_21) {
		if (var_1_2 && var_1_24) {
			var_1_23 = ((min ((var_1_25 - 5) , (min (var_1_13 , var_1_12)))) + var_1_26);
		} else {
			var_1_23 = var_1_12;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 1073741823);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741824);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 4611686.018427383000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_3 >= ((var_1_4 - var_1_5) - (min (var_1_6 , var_1_7)))) ? (((var_1_8 - var_1_9) > (var_1_7 - 25)) ? (var_1_1 == ((double) var_1_10)) : (var_1_1 == ((double) 10000.88))) : (var_1_1 == ((double) var_1_10))) && (var_1_11 == ((signed char) ((abs (var_1_12)) + var_1_13)))) && (var_1_2 ? ((var_1_8 > var_1_12) ? (var_1_14 == ((double) ((var_1_15 - var_1_16) - var_1_17))) : (var_1_14 == ((double) var_1_10))) : (var_1_14 == ((double) var_1_17)))) && (var_1_18 == ((unsigned short int) (min ((var_1_19 - 100) , var_1_9))))) && (var_1_2 ? (var_1_20 == ((signed short int) var_1_18)) : (var_1_20 == ((signed short int) ((var_1_9 - 64) + var_1_18))))) && ((var_1_1 <= (var_1_17 / var_1_15)) ? (var_1_21 == ((signed short int) (min (var_1_12 , ((max (var_1_8 , var_1_9)) - var_1_22))))) : (var_1_21 == ((signed short int) (var_1_8 - (abs (var_1_9))))))) && ((var_1_18 < var_1_21) ? ((var_1_2 && var_1_24) ? (var_1_23 == ((signed char) ((min ((var_1_25 - 5) , (min (var_1_13 , var_1_12)))) + var_1_26))) : (var_1_23 == ((signed char) var_1_12))) : 1)
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}

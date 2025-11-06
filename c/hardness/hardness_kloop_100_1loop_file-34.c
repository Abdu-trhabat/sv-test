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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch34100_1loop.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 64;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 200;
unsigned char var_1_4 = 16;
unsigned char var_1_5 = 0;
double var_1_7 = 31.75;
double var_1_8 = 64.75;
double var_1_9 = 1.625;
double var_1_10 = 0.0;
double var_1_11 = 15.75;
double var_1_12 = 199.6;
double var_1_13 = 31.625;
float var_1_14 = 2.575;
float var_1_15 = 0.0;
double var_1_16 = 64.8;
double var_1_18 = 8.01;
double var_1_19 = 1000000.5;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
double var_1_26 = 49.31;
signed long int var_1_28 = 1;
unsigned long int var_1_29 = 128;
signed short int var_1_30 = 2;
unsigned long int var_1_31 = 2129180744;
unsigned char var_1_32 = 16;
unsigned char var_1_33 = 128;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_29 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch34100_1loop
	unsigned char stepLocal_4 = var_1_4;
	if (stepLocal_4 <= (abs (var_1_5))) {
		var_1_14 = (min (var_1_12 , (var_1_10 - (var_1_15 - var_1_11))));
	} else {
		var_1_14 = var_1_15;
	}


	// From: Req6Batch34100_1loop
	if ((- var_1_14) == var_1_10) {
		var_1_16 = (max ((var_1_18 - var_1_15) , var_1_11));
	}


	// From: Req8Batch34100_1loop
	unsigned char stepLocal_6 = var_1_2;
	if (stepLocal_6 && var_1_21) {
		var_1_22 = ((var_1_20 || var_1_23) && var_1_24);
	} else {
		var_1_22 = (! (var_1_24 && (! var_1_25)));
	}


	// From: Req11Batch34100_1loop
	unsigned char stepLocal_7 = var_1_3;
	if (stepLocal_7 <= (last_1_var_1_29 >> var_1_30)) {
		var_1_29 = ((var_1_31 - (var_1_5 + var_1_4)) + 2u);
	}


	// From: Req2Batch34100_1loop
	unsigned long int stepLocal_1 = var_1_29;
	if (var_1_4 >= stepLocal_1) {
		var_1_7 = (abs (var_1_8));
	}


	// From: Req3Batch34100_1loop
	if (var_1_22) {
		if (var_1_29 >= var_1_5) {
			var_1_9 = (min (((var_1_10 - var_1_11) - var_1_12) , var_1_8));
		}
	} else {
		if (var_1_12 == var_1_8) {
			var_1_9 = var_1_11;
		} else {
			var_1_9 = var_1_12;
		}
	}


	// From: Req7Batch34100_1loop
	unsigned char stepLocal_5 = var_1_21;
	if (var_1_2) {
		if (var_1_10 >= (var_1_8 * var_1_7)) {
			var_1_19 = (var_1_18 - (var_1_15 - var_1_11));
		} else {
			var_1_19 = (min ((abs (var_1_12)) , (abs (var_1_11))));
		}
	} else {
		if (var_1_20 || stepLocal_5) {
			var_1_19 = var_1_12;
		}
	}


	// From: Req9Batch34100_1loop
	if (var_1_23 || ((max (var_1_3 , var_1_5)) < var_1_29)) {
		var_1_26 = 25.5;
	}


	// From: Req10Batch34100_1loop
	if (var_1_8 <= (min ((- var_1_12) , (var_1_11 - 99999.75)))) {
		if (var_1_20 && var_1_22) {
			var_1_28 = var_1_29;
		} else {
			var_1_28 = var_1_4;
		}
	}


	// From: Req12Batch34100_1loop
	unsigned char stepLocal_9 = var_1_4;
	unsigned long int stepLocal_8 = var_1_31 << var_1_29;
	if (var_1_29 <= stepLocal_8) {
		var_1_32 = (var_1_33 - var_1_5);
	} else {
		if (stepLocal_9 >= var_1_28) {
			var_1_32 = (abs (var_1_4));
		}
	}


	// From: Req1Batch34100_1loop
	signed long int stepLocal_0 = (var_1_3 - var_1_4) - var_1_5;
	if (var_1_22) {
		if (stepLocal_0 <= var_1_28) {
			var_1_1 = var_1_3;
		}
	}


	// From: Req4Batch34100_1loop
	unsigned char stepLocal_3 = var_1_10 != var_1_19;
	unsigned long int stepLocal_2 = var_1_29;
	if (stepLocal_3 && var_1_22) {
		if (var_1_11 >= (127.5 / var_1_10)) {
			if (var_1_3 >= stepLocal_2) {
				var_1_13 = var_1_10;
			} else {
				var_1_13 = 9.9999999999996E12;
			}
		} else {
			var_1_13 = var_1_11;
		}
	} else {
		var_1_13 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 191);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 64);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 4611686.018427383000e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 4611686.018427383000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 30);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	return (((((((((((var_1_22 ? ((((var_1_3 - var_1_4) - var_1_5) <= var_1_28) ? (var_1_1 == ((unsigned short int) var_1_3)) : 1) : 1) && ((var_1_4 >= var_1_29) ? (var_1_7 == ((double) (abs (var_1_8)))) : 1)) && (var_1_22 ? ((var_1_29 >= var_1_5) ? (var_1_9 == ((double) (min (((var_1_10 - var_1_11) - var_1_12) , var_1_8)))) : 1) : ((var_1_12 == var_1_8) ? (var_1_9 == ((double) var_1_11)) : (var_1_9 == ((double) var_1_12))))) && (((var_1_10 != var_1_19) && var_1_22) ? ((var_1_11 >= (127.5 / var_1_10)) ? ((var_1_3 >= var_1_29) ? (var_1_13 == ((double) var_1_10)) : (var_1_13 == ((double) 9.9999999999996E12))) : (var_1_13 == ((double) var_1_11))) : (var_1_13 == ((double) var_1_12)))) && ((var_1_4 <= (abs (var_1_5))) ? (var_1_14 == ((float) (min (var_1_12 , (var_1_10 - (var_1_15 - var_1_11)))))) : (var_1_14 == ((float) var_1_15)))) && (((- var_1_14) == var_1_10) ? (var_1_16 == ((double) (max ((var_1_18 - var_1_15) , var_1_11)))) : 1)) && (var_1_2 ? ((var_1_10 >= (var_1_8 * var_1_7)) ? (var_1_19 == ((double) (var_1_18 - (var_1_15 - var_1_11)))) : (var_1_19 == ((double) (min ((abs (var_1_12)) , (abs (var_1_11))))))) : ((var_1_20 || var_1_21) ? (var_1_19 == ((double) var_1_12)) : 1))) && ((var_1_2 && var_1_21) ? (var_1_22 == ((unsigned char) ((var_1_20 || var_1_23) && var_1_24))) : (var_1_22 == ((unsigned char) (! (var_1_24 && (! var_1_25))))))) && ((var_1_23 || ((max (var_1_3 , var_1_5)) < var_1_29)) ? (var_1_26 == ((double) 25.5)) : 1)) && ((var_1_8 <= (min ((- var_1_12) , (var_1_11 - 99999.75)))) ? ((var_1_20 && var_1_22) ? (var_1_28 == ((signed long int) var_1_29)) : (var_1_28 == ((signed long int) var_1_4))) : 1)) && ((var_1_3 <= (last_1_var_1_29 >> var_1_30)) ? (var_1_29 == ((unsigned long int) ((var_1_31 - (var_1_5 + var_1_4)) + 2u))) : 1)) && ((var_1_29 <= (var_1_31 << var_1_29)) ? (var_1_32 == ((unsigned char) (var_1_33 - var_1_5))) : ((var_1_4 >= var_1_28) ? (var_1_32 == ((unsigned char) (abs (var_1_4)))) : 1))
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

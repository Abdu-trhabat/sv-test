// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch53100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -100;
unsigned char var_1_2 = 200;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 8;
unsigned char var_1_7 = 16;
unsigned char var_1_9 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned short int var_1_17 = 256;
signed short int var_1_19 = -100;
signed short int var_1_20 = 32;
unsigned char var_1_21 = 1;
signed short int var_1_23 = -256;
float var_1_24 = -0.5;
float var_1_25 = 255.8;
float var_1_26 = 31.2;
float var_1_27 = 0.5;
unsigned char var_1_28 = 32;
unsigned char var_1_29 = 64;
unsigned short int var_1_30 = 16;
double var_1_31 = 255.9;
unsigned short int var_1_33 = 39141;
unsigned short int var_1_34 = 52589;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -100;
unsigned char last_1_var_1_7 = 16;
unsigned short int last_1_var_1_17 = 256;
signed short int last_1_var_1_19 = -100;
signed short int last_1_var_1_20 = 32;
signed short int last_1_var_1_23 = -256;
unsigned char last_1_var_1_28 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch53100_1loop
	if ((var_1_2 - (var_1_3 - var_1_4)) == last_1_var_1_7) {
		if ((var_1_3 + last_1_var_1_7) >= (var_1_4 / var_1_2)) {
			if (last_1_var_1_7 > var_1_4) {
				var_1_1 = (var_1_4 + last_1_var_1_20);
			} else {
				var_1_1 = var_1_2;
			}
		}
	} else {
		var_1_1 = var_1_2;
	}


	// From: Req2Batch53100_1loop
	unsigned char stepLocal_1 = last_1_var_1_28 < (var_1_3 - var_1_4);
	signed long int stepLocal_0 = last_1_var_1_28;
	if (stepLocal_1 || (last_1_var_1_23 > (last_1_var_1_19 * last_1_var_1_1))) {
		if (stepLocal_0 >= var_1_4) {
			var_1_7 = 2;
		} else {
			var_1_7 = var_1_4;
		}
	} else {
		var_1_7 = var_1_3;
	}


	// From: Req4Batch53100_1loop
	unsigned char stepLocal_3 = var_1_4;
	signed long int stepLocal_2 = last_1_var_1_17;
	if (stepLocal_2 < (max (var_1_2 , var_1_4))) {
		if (stepLocal_3 >= last_1_var_1_19) {
			var_1_14 = var_1_12;
		} else {
			var_1_14 = (var_1_15 && var_1_16);
		}
	} else {
		var_1_14 = var_1_15;
	}


	// From: Req10Batch53100_1loop
	var_1_24 = (var_1_25 + (min (var_1_26 , var_1_27)));


	// From: Req11Batch53100_1loop
	if (! var_1_12) {
		var_1_28 = (((abs (var_1_3)) + var_1_29) - var_1_4);
	} else {
		var_1_28 = (max ((min (var_1_29 , var_1_4)) , var_1_3));
	}


	// From: Req12Batch53100_1loop
	if ((var_1_24 / var_1_31) > var_1_24) {
		var_1_30 = ((max (var_1_33 , var_1_34)) - var_1_4);
	}


	// From: Req6Batch53100_1loop
	var_1_19 = (min ((min (var_1_3 , var_1_4)) , var_1_28));


	// From: Req3Batch53100_1loop
	if (var_1_1 != (var_1_4 ^ var_1_1)) {
		if (var_1_14) {
			if (var_1_14) {
				var_1_9 = (var_1_12 || (! (! var_1_13)));
			}
		} else {
			var_1_9 = var_1_13;
		}
	}


	// From: Req7Batch53100_1loop
	unsigned char stepLocal_6 = var_1_9;
	if (stepLocal_6 || (var_1_28 >= last_1_var_1_20)) {
		var_1_20 = ((max (var_1_2 , var_1_3)) + var_1_4);
	} else {
		var_1_20 = (var_1_4 - (abs (max (last_1_var_1_20 , var_1_3))));
	}


	// From: Req9Batch53100_1loop
	unsigned char stepLocal_8 = var_1_28 > var_1_7;
	if (stepLocal_8 || var_1_14) {
		var_1_23 = (min ((var_1_3 + (var_1_2 - var_1_28)) , var_1_4));
	} else {
		var_1_23 = (var_1_2 - var_1_28);
	}


	// From: Req8Batch53100_1loop
	unsigned char stepLocal_7 = (max (var_1_23 , var_1_19)) <= 0;
	if (stepLocal_7 && var_1_13) {
		if (var_1_14) {
			var_1_21 = var_1_16;
		}
	}


	// From: Req5Batch53100_1loop
	signed short int stepLocal_5 = var_1_23;
	unsigned char stepLocal_4 = var_1_12;
	if ((var_1_28 / (2571661009u - var_1_2)) != stepLocal_5) {
		if (stepLocal_4 && var_1_21) {
			var_1_17 = 2;
		}
	} else {
		if (var_1_21) {
			var_1_17 = var_1_7;
		} else {
			var_1_17 = var_1_2;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 127);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 63);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427382800e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 64);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	assume_abort_if_not(var_1_31 != 0.0F);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return (((((((((((((var_1_2 - (var_1_3 - var_1_4)) == last_1_var_1_7) ? (((var_1_3 + last_1_var_1_7) >= (var_1_4 / var_1_2)) ? ((last_1_var_1_7 > var_1_4) ? (var_1_1 == ((signed long int) (var_1_4 + last_1_var_1_20))) : (var_1_1 == ((signed long int) var_1_2))) : 1) : (var_1_1 == ((signed long int) var_1_2))) && (((last_1_var_1_28 < (var_1_3 - var_1_4)) || (last_1_var_1_23 > (last_1_var_1_19 * last_1_var_1_1))) ? ((last_1_var_1_28 >= var_1_4) ? (var_1_7 == ((unsigned char) 2)) : (var_1_7 == ((unsigned char) var_1_4))) : (var_1_7 == ((unsigned char) var_1_3)))) && ((var_1_1 != (var_1_4 ^ var_1_1)) ? (var_1_14 ? (var_1_14 ? (var_1_9 == ((unsigned char) (var_1_12 || (! (! var_1_13))))) : 1) : (var_1_9 == ((unsigned char) var_1_13))) : 1)) && ((last_1_var_1_17 < (max (var_1_2 , var_1_4))) ? ((var_1_4 >= last_1_var_1_19) ? (var_1_14 == ((unsigned char) var_1_12)) : (var_1_14 == ((unsigned char) (var_1_15 && var_1_16)))) : (var_1_14 == ((unsigned char) var_1_15)))) && (((var_1_28 / (2571661009u - var_1_2)) != var_1_23) ? ((var_1_12 && var_1_21) ? (var_1_17 == ((unsigned short int) 2)) : 1) : (var_1_21 ? (var_1_17 == ((unsigned short int) var_1_7)) : (var_1_17 == ((unsigned short int) var_1_2))))) && (var_1_19 == ((signed short int) (min ((min (var_1_3 , var_1_4)) , var_1_28))))) && ((var_1_9 || (var_1_28 >= last_1_var_1_20)) ? (var_1_20 == ((signed short int) ((max (var_1_2 , var_1_3)) + var_1_4))) : (var_1_20 == ((signed short int) (var_1_4 - (abs (max (last_1_var_1_20 , var_1_3)))))))) && ((((max (var_1_23 , var_1_19)) <= 0) && var_1_13) ? (var_1_14 ? (var_1_21 == ((unsigned char) var_1_16)) : 1) : 1)) && (((var_1_28 > var_1_7) || var_1_14) ? (var_1_23 == ((signed short int) (min ((var_1_3 + (var_1_2 - var_1_28)) , var_1_4)))) : (var_1_23 == ((signed short int) (var_1_2 - var_1_28))))) && (var_1_24 == ((float) (var_1_25 + (min (var_1_26 , var_1_27)))))) && ((! var_1_12) ? (var_1_28 == ((unsigned char) (((abs (var_1_3)) + var_1_29) - var_1_4))) : (var_1_28 == ((unsigned char) (max ((min (var_1_29 , var_1_4)) , var_1_3)))))) && (((var_1_24 / var_1_31) > var_1_24) ? (var_1_30 == ((unsigned short int) ((max (var_1_33 , var_1_34)) - var_1_4))) : 1)
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

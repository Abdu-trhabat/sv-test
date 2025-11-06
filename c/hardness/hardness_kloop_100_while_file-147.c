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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147100_while.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 100;
unsigned char var_1_3 = 1;
signed long int var_1_4 = -2;
unsigned short int var_1_5 = 44494;
unsigned char var_1_6 = 16;
unsigned char var_1_7 = 0;
signed char var_1_8 = 100;
signed short int var_1_9 = 2;
double var_1_10 = 499.25;
unsigned short int var_1_11 = 54462;
double var_1_12 = 10.607;
signed short int var_1_13 = -2;
unsigned long int var_1_14 = 2;
unsigned long int var_1_15 = 3945804927;
float var_1_16 = 16.8;
float var_1_17 = 127.5;
float var_1_18 = 9.75;
float var_1_19 = 50.2;
float var_1_20 = 9.75;
unsigned char var_1_22 = 1;
float var_1_23 = 127.375;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned short int var_1_27 = 1;
unsigned short int var_1_29 = 32;
unsigned char var_1_30 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_6 = 16;
double last_1_var_1_10 = 499.25;
unsigned short int last_1_var_1_27 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch147100_while
	if (last_1_var_1_10 > var_1_12) {
		var_1_13 = (((var_1_9 + last_1_var_1_27) + var_1_3) - last_1_var_1_6);
	} else {
		var_1_13 = last_1_var_1_6;
	}


	// From: Req6Batch147100_while
	unsigned char stepLocal_3 = var_1_3;
	if (-1 > stepLocal_3) {
		var_1_14 = (abs (var_1_15 - last_1_var_1_6));
	}


	// From: Req1Batch147100_while
	unsigned long int stepLocal_0 = var_1_14 >> var_1_3;
	if (stepLocal_0 < var_1_14) {
		var_1_1 = (max ((min (var_1_3 , 256)) , (var_1_5 - var_1_14)));
	}


	// From: Req8Batch147100_while
	unsigned char stepLocal_6 = var_1_3;
	unsigned short int stepLocal_5 = var_1_1;
	unsigned char stepLocal_4 = var_1_7;
	if (var_1_1 < stepLocal_6) {
		var_1_20 = (var_1_19 + var_1_17);
	} else {
		if ((var_1_5 * var_1_14) < stepLocal_5) {
			if (stepLocal_4 && var_1_22) {
				var_1_20 = (var_1_23 - 0.8f);
			} else {
				var_1_20 = (max (var_1_12 , var_1_19));
			}
		}
	}


	// From: Req11Batch147100_while
	var_1_30 = var_1_26;


	// From: Req2Batch147100_while
	if (var_1_30) {
		var_1_6 = (abs (2));
	} else {
		if (! (var_1_3 < (var_1_14 * var_1_13))) {
			if (var_1_1 > var_1_3) {
				var_1_6 = var_1_3;
			}
		} else {
			var_1_6 = var_1_3;
		}
	}


	// From: Req10Batch147100_while
	if (var_1_23 < var_1_12) {
		if (5u >= var_1_5) {
			var_1_27 = (4 + var_1_3);
		}
	} else {
		if ((var_1_1 + var_1_11) > (max ((var_1_5 - var_1_1) , var_1_14))) {
			if (! (var_1_13 <= var_1_1)) {
				var_1_27 = (var_1_1 + var_1_29);
			}
		}
	}


	// From: Req4Batch147100_while
	unsigned long int stepLocal_2 = var_1_11 - (128 + var_1_14);
	if (var_1_5 >= stepLocal_2) {
		var_1_10 = var_1_12;
	} else {
		if (var_1_30) {
			var_1_10 = var_1_12;
		} else {
			var_1_10 = 128.5;
		}
	}


	// From: Req3Batch147100_while
	signed long int stepLocal_1 = (var_1_27 % var_1_5) + (abs (var_1_13));
	if ((var_1_3 << (var_1_9 + 1)) != stepLocal_1) {
		var_1_8 = (var_1_3 + var_1_9);
	}


	// From: Req7Batch147100_while
	if (var_1_6 != var_1_4) {
		var_1_16 = ((max (var_1_17 , var_1_18)) + var_1_19);
	} else {
		if ((var_1_14 < var_1_6) && var_1_30) {
			var_1_16 = var_1_12;
		} else {
			var_1_16 = var_1_19;
		}
	}


	// From: Req9Batch147100_while
	if (var_1_13 < var_1_14) {
		var_1_24 = ((var_1_12 >= var_1_10) && var_1_25);
	} else {
		if (var_1_30) {
			if (var_1_17 >= var_1_12) {
				if (var_1_14 >= var_1_5) {
					var_1_24 = var_1_25;
				}
			} else {
				var_1_24 = var_1_26;
			}
		} else {
			var_1_24 = var_1_25;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 7);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 3);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65535);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 2147483647);
	assume_abort_if_not(var_1_15 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	return ((((((((((((var_1_14 >> var_1_3) < var_1_14) ? (var_1_1 == ((unsigned short int) (max ((min (var_1_3 , 256)) , (var_1_5 - var_1_14))))) : 1) && (var_1_30 ? (var_1_6 == ((unsigned char) (abs (2)))) : ((! (var_1_3 < (var_1_14 * var_1_13))) ? ((var_1_1 > var_1_3) ? (var_1_6 == ((unsigned char) var_1_3)) : 1) : (var_1_6 == ((unsigned char) var_1_3))))) && (((var_1_3 << (var_1_9 + 1)) != ((var_1_27 % var_1_5) + (abs (var_1_13)))) ? (var_1_8 == ((signed char) (var_1_3 + var_1_9))) : 1)) && ((var_1_5 >= (var_1_11 - (128 + var_1_14))) ? (var_1_10 == ((double) var_1_12)) : (var_1_30 ? (var_1_10 == ((double) var_1_12)) : (var_1_10 == ((double) 128.5))))) && ((last_1_var_1_10 > var_1_12) ? (var_1_13 == ((signed short int) (((var_1_9 + last_1_var_1_27) + var_1_3) - last_1_var_1_6))) : (var_1_13 == ((signed short int) last_1_var_1_6)))) && ((-1 > var_1_3) ? (var_1_14 == ((unsigned long int) (abs (var_1_15 - last_1_var_1_6)))) : 1)) && ((var_1_6 != var_1_4) ? (var_1_16 == ((float) ((max (var_1_17 , var_1_18)) + var_1_19))) : (((var_1_14 < var_1_6) && var_1_30) ? (var_1_16 == ((float) var_1_12)) : (var_1_16 == ((float) var_1_19))))) && ((var_1_1 < var_1_3) ? (var_1_20 == ((float) (var_1_19 + var_1_17))) : (((var_1_5 * var_1_14) < var_1_1) ? ((var_1_7 && var_1_22) ? (var_1_20 == ((float) (var_1_23 - 0.8f))) : (var_1_20 == ((float) (max (var_1_12 , var_1_19))))) : 1))) && ((var_1_13 < var_1_14) ? (var_1_24 == ((unsigned char) ((var_1_12 >= var_1_10) && var_1_25))) : (var_1_30 ? ((var_1_17 >= var_1_12) ? ((var_1_14 >= var_1_5) ? (var_1_24 == ((unsigned char) var_1_25)) : 1) : (var_1_24 == ((unsigned char) var_1_26))) : (var_1_24 == ((unsigned char) var_1_25))))) && ((var_1_23 < var_1_12) ? ((5u >= var_1_5) ? (var_1_27 == ((unsigned short int) (4 + var_1_3))) : 1) : (((var_1_1 + var_1_11) > (max ((var_1_5 - var_1_1) , var_1_14))) ? ((! (var_1_13 <= var_1_1)) ? (var_1_27 == ((unsigned short int) (var_1_1 + var_1_29))) : 1) : 1))) && (var_1_30 == ((unsigned char) var_1_26))
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

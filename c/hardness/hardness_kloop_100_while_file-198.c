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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198100_while.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 128;
unsigned long int var_1_2 = 1254234167;
unsigned long int var_1_3 = 1802018976;
unsigned long int var_1_4 = 3238871499;
unsigned long int var_1_5 = 50;
unsigned char var_1_6 = 0;
unsigned short int var_1_7 = 34820;
unsigned short int var_1_8 = 10;
signed char var_1_9 = 0;
signed char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
double var_1_13 = 50.4;
double var_1_14 = 9.84;
double var_1_15 = 9.5;
double var_1_16 = -0.6;
double var_1_17 = 200.8;
double var_1_18 = 0.7;
double var_1_19 = 10.5;
double var_1_20 = 64.5;
double var_1_21 = 99999999999.2;
signed short int var_1_22 = -100;
signed char var_1_23 = -100;
signed short int var_1_24 = 25;
signed char var_1_25 = -128;
signed char var_1_26 = 16;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
signed short int var_1_30 = 8;
float var_1_31 = 0.4;
unsigned long int var_1_32 = 5;
signed long int var_1_33 = -128;
signed long int var_1_34 = -4;
signed long int var_1_35 = 100;
signed short int var_1_36 = -16;
signed short int var_1_37 = 64;
unsigned char var_1_38 = 50;

// Calibration values

// Last'ed variables
double last_1_var_1_17 = 200.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch198100_while
	if (var_1_8 < var_1_10) {
		if ((var_1_14 - var_1_15) == last_1_var_1_17) {
			var_1_13 = 127.7;
		}
	}


	// From: Req4Batch198100_while
	if (var_1_16 < var_1_13) {
		var_1_17 = (var_1_18 - var_1_19);
	} else {
		var_1_17 = (min ((min (var_1_18 , var_1_19)) , (min (var_1_20 , var_1_21))));
	}


	// From: Req1Batch198100_while
	var_1_1 = ((max ((var_1_2 + var_1_3) , var_1_4)) - var_1_5);


	// From: Req2Batch198100_while
	unsigned long int stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = max (var_1_7 , var_1_8);
	if ((min (0 , var_1_1)) > stepLocal_1) {
		if ((var_1_9 - var_1_10) < stepLocal_0) {
			var_1_6 = (! (var_1_11 || var_1_12));
		} else {
			var_1_6 = (! var_1_12);
		}
	}


	// From: Req6Batch198100_while
	unsigned char stepLocal_2 = var_1_20 >= (abs (var_1_18));
	if (var_1_14 <= var_1_13) {
		if (stepLocal_2 && var_1_11) {
			var_1_24 = (min (var_1_9 , var_1_10));
		}
	} else {
		var_1_24 = (min (var_1_9 , var_1_23));
	}


	// From: Req7Batch198100_while
	if (var_1_11) {
		var_1_25 = (var_1_26 + -1);
	} else {
		var_1_25 = (abs (var_1_26));
	}


	// From: Req8Batch198100_while
	unsigned char stepLocal_4 = var_1_12;
	unsigned long int stepLocal_3 = var_1_3;
	if (var_1_8 <= stepLocal_3) {
		if (var_1_6 || stepLocal_4) {
			var_1_27 = (! (var_1_28 && var_1_29));
		}
	}


	// From: Req11Batch198100_while
	var_1_32 = var_1_4;


	// From: Req14Batch198100_while
	if (var_1_26 <= (var_1_2 ^ 0)) {
		var_1_36 = ((var_1_10 - var_1_37) + var_1_9);
	}


	// From: Req15Batch198100_while
	var_1_38 = var_1_10;


	// From: Req5Batch198100_while
	if (! var_1_12) {
		if (var_1_27) {
			if (var_1_11) {
				var_1_22 = (abs (var_1_23));
			} else {
				var_1_22 = var_1_10;
			}
		}
	} else {
		var_1_22 = -50;
	}


	// From: Req12Batch198100_while
	if (var_1_17 > var_1_21) {
		var_1_33 = var_1_22;
	} else {
		var_1_33 = (var_1_7 + var_1_8);
	}


	// From: Req9Batch198100_while
	if (var_1_5 < var_1_10) {
		var_1_30 = ((abs (var_1_33 + 500)) - var_1_10);
	} else {
		var_1_30 = var_1_10;
	}


	// From: Req13Batch198100_while
	unsigned long int stepLocal_6 = var_1_1;
	unsigned long int stepLocal_5 = var_1_3;
	if (stepLocal_6 < var_1_2) {
		if (stepLocal_5 <= 16u) {
			var_1_34 = (max (var_1_30 , ((max (var_1_35 , var_1_36)) + (var_1_10 - var_1_8))));
		}
	} else {
		var_1_34 = var_1_26;
	}


	// From: Req10Batch198100_while
	if (var_1_2 > var_1_32) {
		if (var_1_12 || (var_1_17 < (0.8 * var_1_19))) {
			if (var_1_34 > var_1_8) {
				var_1_31 = (abs (var_1_19));
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 1073741823);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 1073741824);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 2147483647);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65535);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -128);
	assume_abort_if_not(var_1_23 <= 127);
	assume_abort_if_not(var_1_23 != 0);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -1073741823);
	assume_abort_if_not(var_1_35 <= 1073741823);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	return ((((((((((((((var_1_1 == ((unsigned long int) ((max ((var_1_2 + var_1_3) , var_1_4)) - var_1_5))) && (((min (0 , var_1_1)) > var_1_5) ? (((var_1_9 - var_1_10) < (max (var_1_7 , var_1_8))) ? (var_1_6 == ((unsigned char) (! (var_1_11 || var_1_12)))) : (var_1_6 == ((unsigned char) (! var_1_12)))) : 1)) && ((var_1_8 < var_1_10) ? (((var_1_14 - var_1_15) == last_1_var_1_17) ? (var_1_13 == ((double) 127.7)) : 1) : 1)) && ((var_1_16 < var_1_13) ? (var_1_17 == ((double) (var_1_18 - var_1_19))) : (var_1_17 == ((double) (min ((min (var_1_18 , var_1_19)) , (min (var_1_20 , var_1_21)))))))) && ((! var_1_12) ? (var_1_27 ? (var_1_11 ? (var_1_22 == ((signed short int) (abs (var_1_23)))) : (var_1_22 == ((signed short int) var_1_10))) : 1) : (var_1_22 == ((signed short int) -50)))) && ((var_1_14 <= var_1_13) ? (((var_1_20 >= (abs (var_1_18))) && var_1_11) ? (var_1_24 == ((signed short int) (min (var_1_9 , var_1_10)))) : 1) : (var_1_24 == ((signed short int) (min (var_1_9 , var_1_23)))))) && (var_1_11 ? (var_1_25 == ((signed char) (var_1_26 + -1))) : (var_1_25 == ((signed char) (abs (var_1_26)))))) && ((var_1_8 <= var_1_3) ? ((var_1_6 || var_1_12) ? (var_1_27 == ((unsigned char) (! (var_1_28 && var_1_29)))) : 1) : 1)) && ((var_1_5 < var_1_10) ? (var_1_30 == ((signed short int) ((abs (var_1_33 + 500)) - var_1_10))) : (var_1_30 == ((signed short int) var_1_10)))) && ((var_1_2 > var_1_32) ? ((var_1_12 || (var_1_17 < (0.8 * var_1_19))) ? ((var_1_34 > var_1_8) ? (var_1_31 == ((float) (abs (var_1_19)))) : 1) : 1) : 1)) && (var_1_32 == ((unsigned long int) var_1_4))) && ((var_1_17 > var_1_21) ? (var_1_33 == ((signed long int) var_1_22)) : (var_1_33 == ((signed long int) (var_1_7 + var_1_8))))) && ((var_1_1 < var_1_2) ? ((var_1_3 <= 16u) ? (var_1_34 == ((signed long int) (max (var_1_30 , ((max (var_1_35 , var_1_36)) + (var_1_10 - var_1_8)))))) : 1) : (var_1_34 == ((signed long int) var_1_26)))) && ((var_1_26 <= (var_1_2 ^ 0)) ? (var_1_36 == ((signed short int) ((var_1_10 - var_1_37) + var_1_9))) : 1)) && (var_1_38 == ((unsigned char) var_1_10))
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

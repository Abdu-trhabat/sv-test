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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18Amount100.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 1000000;
unsigned long int var_1_5 = 256;
signed long int var_1_6 = -5;
unsigned long int var_1_7 = 2;
unsigned long int var_1_9 = 3246615681;
unsigned long int var_1_10 = 2115734915;
unsigned long int var_1_11 = 1;
unsigned long int var_1_12 = 32;
double var_1_13 = 32.8;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 100;
unsigned char var_1_16 = 5;
double var_1_17 = 4.6;
double var_1_18 = 63.1;
double var_1_19 = 7.5;
double var_1_20 = 128.875;
double var_1_21 = 0.5;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
float var_1_25 = 32.6;
float var_1_26 = 100.5;
float var_1_27 = 3.375;
unsigned char var_1_29 = 1;
float var_1_30 = 256.8;
float var_1_31 = 64.1;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 16;
unsigned char var_1_34 = 64;
signed char var_1_35 = 16;
signed long int var_1_36 = 25;
signed char var_1_37 = 16;
signed char var_1_39 = 8;
signed char var_1_40 = -2;
double var_1_41 = 24.65;
double var_1_42 = 127.2;
double var_1_43 = 127.6;

// Calibration values

// Last'ed variables
signed char last_1_var_1_35 = 16;
signed char last_1_var_1_37 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch18Amount100
	var_1_6 = (10 + (last_1_var_1_35 + last_1_var_1_37));


	// From: Req5Batch18Amount100
	if ((- (9.99999999999015E11f - 24.5f)) < (var_1_17 + var_1_19)) {
		var_1_22 = var_1_23;
	} else {
		var_1_22 = var_1_24;
	}


	// From: Req6Batch18Amount100
	unsigned long int stepLocal_3 = var_1_12 / var_1_15;
	if (25 >= stepLocal_3) {
		var_1_25 = (max (var_1_17 , var_1_20));
	}


	// From: Req8Batch18Amount100
	if (! (var_1_19 != var_1_17)) {
		if ((min (var_1_15 , var_1_11)) == (var_1_9 - var_1_16)) {
			var_1_27 = 255.25f;
		}
	} else {
		var_1_27 = var_1_18;
	}


	// From: Req9Batch18Amount100
	if ((var_1_30 - var_1_31) < 31.5f) {
		if (var_1_30 > var_1_31) {
			var_1_29 = (max (var_1_16 , (var_1_32 - (max (var_1_15 , var_1_33)))));
		}
	} else {
		var_1_29 = ((100 + var_1_34) - var_1_15);
	}


	// From: Req10Batch18Amount100
	var_1_35 = var_1_16;


	// From: Req11Batch18Amount100
	if (var_1_27 >= var_1_30) {
		var_1_36 = var_1_34;
	}


	// From: Req13Batch18Amount100
	signed long int stepLocal_6 = var_1_36;
	signed char stepLocal_5 = var_1_35;
	if (var_1_6 >= stepLocal_6) {
		if (var_1_40 < stepLocal_5) {
			var_1_41 = (var_1_21 + ((max (var_1_42 , 16.75)) - var_1_43));
		} else {
			var_1_41 = 127.75;
		}
	} else {
		var_1_41 = var_1_21;
	}


	// From: Req7Batch18Amount100
	signed long int stepLocal_4 = var_1_6;
	if (var_1_19 < var_1_17) {
		if (var_1_12 < stepLocal_4) {
			if (var_1_22) {
				var_1_26 = var_1_18;
			}
		}
	}


	// From: Req3Batch18Amount100
	unsigned long int stepLocal_1 = var_1_5;
	unsigned long int stepLocal_0 = abs (var_1_9);
	if (stepLocal_1 == var_1_36) {
		var_1_7 = (var_1_9 - ((var_1_10 - var_1_11) - var_1_12));
	} else {
		if ((var_1_10 + var_1_11) >= stepLocal_0) {
			var_1_7 = (abs (var_1_9));
		} else {
			var_1_7 = (abs (min ((var_1_9 - var_1_11) , var_1_10)));
		}
	}


	// From: Req4Batch18Amount100
	unsigned long int stepLocal_2 = var_1_12 * var_1_10;
	if ((var_1_14 - (var_1_15 - var_1_16)) == stepLocal_2) {
		var_1_13 = (max (var_1_17 , ((min (var_1_18 , var_1_19)) + (max (var_1_20 , var_1_21)))));
	} else {
		if (var_1_22) {
			var_1_13 = var_1_20;
		}
	}


	// From: Req12Batch18Amount100
	if (var_1_24) {
		if (var_1_19 <= (min (var_1_26 , var_1_13))) {
			var_1_37 = ((100 - var_1_16) - var_1_39);
		} else {
			var_1_37 = (max (var_1_39 , var_1_16));
		}
	} else {
		var_1_37 = (var_1_16 + var_1_40);
	}


	// From: Req1Batch18Amount100
	if (var_1_22) {
		if (! (var_1_7 != var_1_29)) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = 32u;
		}
	} else {
		var_1_1 = var_1_5;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 1610612735);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 536870912);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 255);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 63);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 64);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_35 = var_1_35;
	last_1_var_1_37 = var_1_37;
}

int property(void) {
	return ((((((((((((var_1_22 ? ((! (var_1_7 != var_1_29)) ? (var_1_1 == ((unsigned long int) var_1_5)) : (var_1_1 == ((unsigned long int) 32u))) : (var_1_1 == ((unsigned long int) var_1_5))) && (var_1_6 == ((signed long int) (10 + (last_1_var_1_35 + last_1_var_1_37))))) && ((var_1_5 == var_1_36) ? (var_1_7 == ((unsigned long int) (var_1_9 - ((var_1_10 - var_1_11) - var_1_12)))) : (((var_1_10 + var_1_11) >= (abs (var_1_9))) ? (var_1_7 == ((unsigned long int) (abs (var_1_9)))) : (var_1_7 == ((unsigned long int) (abs (min ((var_1_9 - var_1_11) , var_1_10)))))))) && (((var_1_14 - (var_1_15 - var_1_16)) == (var_1_12 * var_1_10)) ? (var_1_13 == ((double) (max (var_1_17 , ((min (var_1_18 , var_1_19)) + (max (var_1_20 , var_1_21))))))) : (var_1_22 ? (var_1_13 == ((double) var_1_20)) : 1))) && (((- (9.99999999999015E11f - 24.5f)) < (var_1_17 + var_1_19)) ? (var_1_22 == ((unsigned char) var_1_23)) : (var_1_22 == ((unsigned char) var_1_24)))) && ((25 >= (var_1_12 / var_1_15)) ? (var_1_25 == ((float) (max (var_1_17 , var_1_20)))) : 1)) && ((var_1_19 < var_1_17) ? ((var_1_12 < var_1_6) ? (var_1_22 ? (var_1_26 == ((float) var_1_18)) : 1) : 1) : 1)) && ((! (var_1_19 != var_1_17)) ? (((min (var_1_15 , var_1_11)) == (var_1_9 - var_1_16)) ? (var_1_27 == ((float) 255.25f)) : 1) : (var_1_27 == ((float) var_1_18)))) && (((var_1_30 - var_1_31) < 31.5f) ? ((var_1_30 > var_1_31) ? (var_1_29 == ((unsigned char) (max (var_1_16 , (var_1_32 - (max (var_1_15 , var_1_33))))))) : 1) : (var_1_29 == ((unsigned char) ((100 + var_1_34) - var_1_15))))) && (var_1_35 == ((signed char) var_1_16))) && ((var_1_27 >= var_1_30) ? (var_1_36 == ((signed long int) var_1_34)) : 1)) && (var_1_24 ? ((var_1_19 <= (min (var_1_26 , var_1_13))) ? (var_1_37 == ((signed char) ((100 - var_1_16) - var_1_39))) : (var_1_37 == ((signed char) (max (var_1_39 , var_1_16))))) : (var_1_37 == ((signed char) (var_1_16 + var_1_40))))) && ((var_1_6 >= var_1_36) ? ((var_1_40 < var_1_35) ? (var_1_41 == ((double) (var_1_21 + ((max (var_1_42 , 16.75)) - var_1_43)))) : (var_1_41 == ((double) 127.75))) : (var_1_41 == ((double) var_1_21)))
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

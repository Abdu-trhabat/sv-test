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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch22100_1loop.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 32;
unsigned short int var_1_5 = 2;
signed short int var_1_6 = -1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
signed char var_1_9 = -128;
float var_1_10 = 99.875;
float var_1_11 = 5.5;
signed char var_1_12 = 10;
signed char var_1_13 = -64;
signed char var_1_14 = 1;
signed char var_1_15 = -25;
unsigned short int var_1_16 = 256;
unsigned short int var_1_17 = 10;
signed char var_1_18 = 4;
float var_1_19 = 100.5;
float var_1_20 = 4.5;
signed char var_1_21 = 0;
signed char var_1_22 = 64;
signed char var_1_23 = 2;
signed char var_1_24 = 4;
unsigned long int var_1_25 = 8;
unsigned long int var_1_26 = 1;
unsigned char var_1_27 = 50;
unsigned char var_1_28 = 5;
signed short int var_1_29 = 32;
signed long int var_1_30 = 1;
signed long int var_1_31 = 0;
unsigned char var_1_33 = 2;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 2;
unsigned char var_1_36 = 200;
unsigned char var_1_37 = 32;
double var_1_38 = 10.3;
signed short int var_1_39 = -256;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 32;
float last_1_var_1_19 = 100.5;
unsigned long int last_1_var_1_25 = 8;
signed short int last_1_var_1_29 = 32;
unsigned char last_1_var_1_33 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch22100_1loop
	unsigned char stepLocal_2 = ! (var_1_5 < last_1_var_1_1);
	if (var_1_10 <= (max (var_1_11 , last_1_var_1_19))) {
		if (stepLocal_2 && var_1_7) {
			var_1_25 = var_1_26;
		}
	} else {
		var_1_25 = 2u;
	}


	// From: Req10Batch22100_1loop
	if ((var_1_17 << (max (var_1_30 , var_1_31))) >= last_1_var_1_29) {
		if (last_1_var_1_1 != (max (-64 , var_1_23))) {
			var_1_29 = (abs ((50 + var_1_23) - last_1_var_1_33));
		}
	} else {
		var_1_29 = (var_1_28 - var_1_30);
	}


	// From: Req6Batch22100_1loop
	var_1_19 = var_1_20;


	// From: Req7Batch22100_1loop
	var_1_21 = (min (var_1_12 , (var_1_22 - (var_1_23 + var_1_24))));


	// From: Req9Batch22100_1loop
	var_1_27 = ((max ((var_1_24 + 50) , var_1_23)) + var_1_28);


	// From: Req13Batch22100_1loop
	var_1_38 = var_1_20;


	// From: Req14Batch22100_1loop
	var_1_39 = 128;


	// From: Req5Batch22100_1loop
	unsigned char stepLocal_1 = var_1_27;
	if (var_1_25 <= stepLocal_1) {
		var_1_18 = ((min ((abs (4)) , var_1_15)) + var_1_14);
	} else {
		var_1_18 = var_1_13;
	}


	// From: Req4Batch22100_1loop
	if (var_1_7) {
		if (! var_1_8) {
			var_1_16 = (abs (var_1_29 + var_1_17));
		} else {
			var_1_16 = var_1_5;
		}
	} else {
		var_1_16 = var_1_39;
	}


	// From: Req3Batch22100_1loop
	if ((var_1_38 + var_1_19) > 200.875f) {
		if (var_1_16 > var_1_25) {
			var_1_9 = (max (var_1_12 , (max (var_1_13 , (var_1_14 + var_1_15)))));
		} else {
			var_1_9 = (max ((min (-32 , 100)) , var_1_13));
		}
	}


	// From: Req11Batch22100_1loop
	signed long int stepLocal_4 = var_1_24 % var_1_34;
	unsigned short int stepLocal_3 = var_1_16;
	if (stepLocal_3 <= var_1_25) {
		var_1_33 = (var_1_34 - var_1_28);
	} else {
		if (stepLocal_4 >= var_1_25) {
			if (var_1_7) {
				var_1_33 = ((max ((max (var_1_28 , var_1_23)) , (64 - var_1_30))) + 1);
			} else {
				var_1_33 = var_1_28;
			}
		}
	}


	// From: Req2Batch22100_1loop
	if (var_1_33 > var_1_16) {
		var_1_6 = (var_1_33 - var_1_16);
	} else {
		if (var_1_7 && var_1_8) {
			var_1_6 = var_1_16;
		} else {
			var_1_6 = -2;
		}
	}


	// From: Req12Batch22100_1loop
	signed long int stepLocal_5 = var_1_39 - var_1_33;
	if (stepLocal_5 <= (var_1_30 + var_1_39)) {
		if (var_1_7) {
			var_1_35 = var_1_28;
		} else {
			var_1_35 = ((var_1_36 - (var_1_37 - var_1_30)) - (min (var_1_28 , var_1_24)));
		}
	}


	// From: Req1Batch22100_1loop
	unsigned long int stepLocal_0 = 50 * last_1_var_1_25;
	if ((last_1_var_1_33 | last_1_var_1_29) >= stepLocal_0) {
		var_1_1 = (min (last_1_var_1_29 , (max (last_1_var_1_33 , var_1_5))));
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -1);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 190);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 31);
	assume_abort_if_not(var_1_37 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_33 = var_1_33;
}

int property(void) {
	return (((((((((((((((last_1_var_1_33 | last_1_var_1_29) >= (50 * last_1_var_1_25)) ? (var_1_1 == ((unsigned short int) (min (last_1_var_1_29 , (max (last_1_var_1_33 , var_1_5)))))) : 1) && ((var_1_33 > var_1_16) ? (var_1_6 == ((signed short int) (var_1_33 - var_1_16))) : ((var_1_7 && var_1_8) ? (var_1_6 == ((signed short int) var_1_16)) : (var_1_6 == ((signed short int) -2))))) && (((var_1_38 + var_1_19) > 200.875f) ? ((var_1_16 > var_1_25) ? (var_1_9 == ((signed char) (max (var_1_12 , (max (var_1_13 , (var_1_14 + var_1_15))))))) : (var_1_9 == ((signed char) (max ((min (-32 , 100)) , var_1_13))))) : 1)) && (var_1_7 ? ((! var_1_8) ? (var_1_16 == ((unsigned short int) (abs (var_1_29 + var_1_17)))) : (var_1_16 == ((unsigned short int) var_1_5))) : (var_1_16 == ((unsigned short int) var_1_39)))) && ((var_1_25 <= var_1_27) ? (var_1_18 == ((signed char) ((min ((abs (4)) , var_1_15)) + var_1_14))) : (var_1_18 == ((signed char) var_1_13)))) && (var_1_19 == ((float) var_1_20))) && (var_1_21 == ((signed char) (min (var_1_12 , (var_1_22 - (var_1_23 + var_1_24))))))) && ((var_1_10 <= (max (var_1_11 , last_1_var_1_19))) ? (((! (var_1_5 < last_1_var_1_1)) && var_1_7) ? (var_1_25 == ((unsigned long int) var_1_26)) : 1) : (var_1_25 == ((unsigned long int) 2u)))) && (var_1_27 == ((unsigned char) ((max ((var_1_24 + 50) , var_1_23)) + var_1_28)))) && (((var_1_17 << (max (var_1_30 , var_1_31))) >= last_1_var_1_29) ? ((last_1_var_1_1 != (max (-64 , var_1_23))) ? (var_1_29 == ((signed short int) (abs ((50 + var_1_23) - last_1_var_1_33)))) : 1) : (var_1_29 == ((signed short int) (var_1_28 - var_1_30))))) && ((var_1_16 <= var_1_25) ? (var_1_33 == ((unsigned char) (var_1_34 - var_1_28))) : (((var_1_24 % var_1_34) >= var_1_25) ? (var_1_7 ? (var_1_33 == ((unsigned char) ((max ((max (var_1_28 , var_1_23)) , (64 - var_1_30))) + 1))) : (var_1_33 == ((unsigned char) var_1_28))) : 1))) && (((var_1_39 - var_1_33) <= (var_1_30 + var_1_39)) ? (var_1_7 ? (var_1_35 == ((unsigned char) var_1_28)) : (var_1_35 == ((unsigned char) ((var_1_36 - (var_1_37 - var_1_30)) - (min (var_1_28 , var_1_24)))))) : 1)) && (var_1_38 == ((double) var_1_20))) && (var_1_39 == ((signed short int) 128))
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

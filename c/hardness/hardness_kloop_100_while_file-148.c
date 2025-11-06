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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch148100_while.c", 13, "reach_error"); }
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
double var_1_1 = 64.8;
float var_1_5 = 5.4;
double var_1_6 = 15.05;
double var_1_7 = 15.9;
double var_1_8 = 7.56;
double var_1_9 = 10.75;
double var_1_10 = 99.4;
double var_1_11 = 1000000000000.8;
double var_1_12 = 10.5;
signed short int var_1_13 = -256;
signed short int var_1_16 = 25;
signed short int var_1_17 = 256;
signed short int var_1_18 = 27798;
signed short int var_1_19 = 16;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
double var_1_22 = 3.7;
double var_1_23 = 256.4;
unsigned short int var_1_24 = 0;
signed long int var_1_25 = 16;
signed long int var_1_26 = 8;
unsigned short int var_1_27 = 36196;
unsigned char var_1_28 = 5;
double var_1_29 = 4.75;
signed char var_1_30 = 5;
signed long int var_1_32 = 2;
float var_1_33 = 7.5;
float var_1_34 = 64.35;
float var_1_35 = 255.45;
float var_1_36 = 3.5;
float var_1_37 = 9.2;
float var_1_38 = 4.1;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 16;
double var_1_44 = 32.658;

// Calibration values

// Last'ed variables
double last_1_var_1_7 = 15.9;
signed long int last_1_var_1_32 = 2;
unsigned char last_1_var_1_39 = 1;
double last_1_var_1_44 = 32.658;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch148100_while
	if (last_1_var_1_44 >= var_1_11) {
		var_1_20 = ((! last_1_var_1_39) || var_1_21);
	}


	// From: Req8Batch148100_while
	if ((var_1_19 / var_1_25) <= last_1_var_1_32) {
		var_1_28 = (var_1_26 + var_1_25);
	}


	// From: Req3Batch148100_while
	var_1_10 = (var_1_11 + var_1_12);


	// From: Req7Batch148100_while
	if (-25 <= (16 << (var_1_25 - var_1_26))) {
		if (var_1_23 != var_1_9) {
			var_1_24 = (var_1_27 - var_1_17);
		} else {
			var_1_24 = (max (var_1_26 , var_1_17));
		}
	}


	// From: Req13Batch148100_while
	if ((~ 1000u) < var_1_26) {
		var_1_42 = (! ((var_1_17 < var_1_26) || var_1_40));
	} else {
		if ((var_1_26 - var_1_30) < var_1_18) {
			var_1_42 = var_1_41;
		}
	}


	// From: Req14Batch148100_while
	var_1_43 = var_1_25;


	// From: Req15Batch148100_while
	var_1_44 = var_1_23;


	// From: Req10Batch148100_while
	if (! var_1_42) {
		var_1_32 = (var_1_19 - (var_1_27 + var_1_28));
	}


	// From: Req9Batch148100_while
	signed long int stepLocal_0 = var_1_18 / var_1_25;
	if (stepLocal_0 != ((4 >> var_1_30) + var_1_32)) {
		var_1_29 = (24.132 - var_1_9);
	} else {
		var_1_29 = var_1_12;
	}


	// From: Req11Batch148100_while
	if (var_1_29 > var_1_5) {
		var_1_33 = ((var_1_34 + (var_1_35 - var_1_36)) + (var_1_37 - var_1_38));
	} else {
		var_1_33 = (max (var_1_9 , var_1_36));
	}


	// From: Req2Batch148100_while
	if ((var_1_29 != last_1_var_1_7) && (var_1_29 > -0.375f)) {
		var_1_7 = (var_1_8 - var_1_9);
	}


	// From: Req6Batch148100_while
	if (var_1_21) {
		var_1_22 = (min ((var_1_23 + (abs (var_1_12))) , 5.7));
	} else {
		if (var_1_29 >= var_1_44) {
			var_1_22 = var_1_23;
		} else {
			var_1_22 = var_1_11;
		}
	}


	// From: Req1Batch148100_while
	if (var_1_22 > var_1_10) {
		if (var_1_22 >= (var_1_5 - (abs (var_1_10)))) {
			var_1_1 = var_1_6;
		}
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req12Batch148100_while
	if (var_1_22 == var_1_44) {
		var_1_39 = (! (var_1_20 || (var_1_21 || var_1_40)));
	} else {
		var_1_39 = (var_1_42 && (var_1_21 && var_1_41));
	}


	// From: Req4Batch148100_while
	if (var_1_39 || var_1_42) {
		if (var_1_11 > var_1_7) {
			var_1_13 = (var_1_16 - var_1_17);
		} else {
			var_1_13 = (abs (-32));
		}
	} else {
		var_1_13 = ((var_1_18 - var_1_19) - var_1_17);
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -1);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32766);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 16382);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 13);
	assume_abort_if_not(var_1_25 <= 26);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 13);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 30);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_44 = var_1_44;
}

int property(void) {
	return (((((((((((((((var_1_22 > var_1_10) ? ((var_1_22 >= (var_1_5 - (abs (var_1_10)))) ? (var_1_1 == ((double) var_1_6)) : 1) : (var_1_1 == ((double) var_1_6))) && (((var_1_29 != last_1_var_1_7) && (var_1_29 > -0.375f)) ? (var_1_7 == ((double) (var_1_8 - var_1_9))) : 1)) && (var_1_10 == ((double) (var_1_11 + var_1_12)))) && ((var_1_39 || var_1_42) ? ((var_1_11 > var_1_7) ? (var_1_13 == ((signed short int) (var_1_16 - var_1_17))) : (var_1_13 == ((signed short int) (abs (-32))))) : (var_1_13 == ((signed short int) ((var_1_18 - var_1_19) - var_1_17))))) && ((last_1_var_1_44 >= var_1_11) ? (var_1_20 == ((unsigned char) ((! last_1_var_1_39) || var_1_21))) : 1)) && (var_1_21 ? (var_1_22 == ((double) (min ((var_1_23 + (abs (var_1_12))) , 5.7)))) : ((var_1_29 >= var_1_44) ? (var_1_22 == ((double) var_1_23)) : (var_1_22 == ((double) var_1_11))))) && ((-25 <= (16 << (var_1_25 - var_1_26))) ? ((var_1_23 != var_1_9) ? (var_1_24 == ((unsigned short int) (var_1_27 - var_1_17))) : (var_1_24 == ((unsigned short int) (max (var_1_26 , var_1_17))))) : 1)) && (((var_1_19 / var_1_25) <= last_1_var_1_32) ? (var_1_28 == ((unsigned char) (var_1_26 + var_1_25))) : 1)) && (((var_1_18 / var_1_25) != ((4 >> var_1_30) + var_1_32)) ? (var_1_29 == ((double) (24.132 - var_1_9))) : (var_1_29 == ((double) var_1_12)))) && ((! var_1_42) ? (var_1_32 == ((signed long int) (var_1_19 - (var_1_27 + var_1_28)))) : 1)) && ((var_1_29 > var_1_5) ? (var_1_33 == ((float) ((var_1_34 + (var_1_35 - var_1_36)) + (var_1_37 - var_1_38)))) : (var_1_33 == ((float) (max (var_1_9 , var_1_36)))))) && ((var_1_22 == var_1_44) ? (var_1_39 == ((unsigned char) (! (var_1_20 || (var_1_21 || var_1_40))))) : (var_1_39 == ((unsigned char) (var_1_42 && (var_1_21 && var_1_41)))))) && (((~ 1000u) < var_1_26) ? (var_1_42 == ((unsigned char) (! ((var_1_17 < var_1_26) || var_1_40)))) : (((var_1_26 - var_1_30) < var_1_18) ? (var_1_42 == ((unsigned char) var_1_41)) : 1))) && (var_1_43 == ((unsigned char) var_1_25))) && (var_1_44 == ((double) var_1_23))
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

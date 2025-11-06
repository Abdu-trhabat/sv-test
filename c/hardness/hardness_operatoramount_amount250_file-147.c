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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147Amount250.c", 13, "reach_error"); }
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
unsigned short int var_1_5 = 56408;
unsigned short int var_1_6 = 53053;
signed short int var_1_7 = -256;
signed short int var_1_8 = -64;
double var_1_9 = 100.18;
double var_1_10 = 0.0;
double var_1_11 = 1000000000000.5;
double var_1_12 = 0.0;
double var_1_13 = 32.9;
unsigned char var_1_14 = 2;
unsigned char var_1_16 = 0;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 3726310948;
unsigned char var_1_21 = 1;
double var_1_22 = 15.5;
unsigned long int var_1_23 = 10;
double var_1_24 = 1.2;
signed short int var_1_25 = 0;
signed short int var_1_26 = 23524;
double var_1_27 = 0.75;
double var_1_29 = 3.25;
double var_1_30 = 31.05;
float var_1_31 = 4.5;
signed char var_1_32 = -100;
signed char var_1_33 = -5;
unsigned short int var_1_34 = 5;
unsigned short int var_1_35 = 29866;
unsigned short int var_1_36 = 19214;
unsigned short int var_1_37 = 29798;
signed long int var_1_38 = 100;
unsigned short int var_1_40 = 256;
unsigned char var_1_41 = 1;
unsigned long int var_1_42 = 5;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
unsigned short int var_1_46 = 1;
unsigned char var_1_47 = 0;
signed short int var_1_48 = -64;
unsigned short int var_1_49 = 25;
unsigned short int var_1_50 = 25187;
unsigned short int var_1_51 = 64;
unsigned long int var_1_52 = 8;
unsigned long int var_1_53 = 25;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 100;
unsigned char last_1_var_1_19 = 0;
unsigned long int last_1_var_1_23 = 10;
signed short int last_1_var_1_25 = 0;
double last_1_var_1_27 = 0.75;
double last_1_var_1_29 = 3.25;
unsigned short int last_1_var_1_34 = 5;
unsigned char last_1_var_1_41 = 1;
unsigned long int last_1_var_1_42 = 5;
unsigned short int last_1_var_1_49 = 25;
unsigned long int last_1_var_1_52 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req23Batch147Amount250
	unsigned char stepLocal_11 = var_1_44 && var_1_21;
	unsigned short int stepLocal_10 = var_1_35;
	if (stepLocal_10 >= (last_1_var_1_42 % var_1_6)) {
		if (stepLocal_11 && (last_1_var_1_27 > var_1_10)) {
			if (! var_1_21) {
				var_1_49 = (((var_1_50 - var_1_16) - 10000) + last_1_var_1_52);
			} else {
				if (((- var_1_30) * var_1_11) <= last_1_var_1_29) {
					var_1_49 = last_1_var_1_52;
				} else {
					var_1_49 = (var_1_6 - last_1_var_1_52);
				}
			}
		}
	}


	// From: Req15Batch147Amount250
	if ((var_1_21 && last_1_var_1_19) || last_1_var_1_41) {
		if (! (var_1_30 > 256.8)) {
			var_1_38 = (max (var_1_16 , last_1_var_1_1));
		}
	}


	// From: Req1Batch147Amount250
	unsigned long int stepLocal_0 = last_1_var_1_52;
	if ((last_1_var_1_23 >> var_1_3) < stepLocal_0) {
		var_1_1 = (max ((min (var_1_3 , 256)) , ((max (var_1_5 , var_1_6)) - (abs (last_1_var_1_23)))));
	}


	// From: Req7Batch147Amount250
	var_1_23 = last_1_var_1_49;


	// From: Req9Batch147Amount250
	if (var_1_13 > var_1_11) {
		var_1_25 = (var_1_3 - (var_1_16 + last_1_var_1_25));
	} else {
		var_1_25 = ((min ((var_1_26 - 64) , (28940 - last_1_var_1_25))) - var_1_3);
	}


	// From: Req11Batch147Amount250
	if (! (var_1_11 > (- var_1_10))) {
		var_1_29 = (var_1_12 + (min ((min (var_1_13 , var_1_11)) , (abs (var_1_30)))));
	} else {
		var_1_29 = (var_1_12 + (min ((min (var_1_30 , var_1_11)) , 127.5)));
	}


	// From: Req13Batch147Amount250
	if (var_1_1 >= ((min (var_1_26 , var_1_16)) << var_1_6)) {
		var_1_32 = (min (var_1_3 , var_1_33));
	}


	// From: Req16Batch147Amount250
	var_1_40 = (min (var_1_35 , (abs (64))));


	// From: Req17Batch147Amount250
	var_1_41 = ((! var_1_21) || (! 1));


	// From: Req21Batch147Amount250
	var_1_47 = (! var_1_21);


	// From: Req24Batch147Amount250
	if (var_1_41) {
		var_1_51 = var_1_5;
	} else {
		var_1_51 = var_1_37;
	}


	// From: Req3Batch147Amount250
	if ((- var_1_5) >= var_1_51) {
		var_1_9 = ((max (var_1_11 , 15.7)) - (8.5 + (var_1_12 - var_1_13)));
	}


	// From: Req6Batch147Amount250
	if (var_1_5 <= var_1_51) {
		var_1_22 = (var_1_13 + var_1_11);
	} else {
		var_1_22 = (var_1_11 + var_1_12);
	}


	// From: Req8Batch147Amount250
	if (16 > (abs (var_1_25))) {
		var_1_24 = ((24.5 - (var_1_12 - var_1_11)) + var_1_13);
	}


	// From: Req22Batch147Amount250
	if (var_1_22 < var_1_10) {
		var_1_48 = var_1_8;
	} else {
		var_1_48 = (abs (var_1_38 - 8));
	}


	// From: Req19Batch147Amount250
	signed long int stepLocal_8 = (var_1_37 + var_1_36) - var_1_3;
	if (var_1_29 == (var_1_24 + (var_1_10 - var_1_13))) {
		if (stepLocal_8 >= (var_1_38 & (var_1_35 << var_1_23))) {
			var_1_43 = ((! var_1_44) && (var_1_21 && var_1_45));
		} else {
			var_1_43 = var_1_21;
		}
	}


	// From: Req14Batch147Amount250
	signed long int stepLocal_6 = 64;
	unsigned short int stepLocal_5 = var_1_1;
	if (var_1_47) {
		if (last_1_var_1_34 > stepLocal_6) {
			var_1_34 = (max (var_1_3 , var_1_48));
		} else {
			if ((last_1_var_1_34 + var_1_3) <= stepLocal_5) {
				var_1_34 = ((min (var_1_3 , var_1_26)) + var_1_25);
			} else {
				var_1_34 = ((var_1_35 + (min (var_1_36 , var_1_37))) - (min (2 , (100 + var_1_16))));
			}
		}
	} else {
		var_1_34 = (var_1_37 + var_1_25);
	}


	// From: Req2Batch147Amount250
	if ((128 | var_1_48) < (var_1_49 - var_1_5)) {
		if (((var_1_49 + var_1_6) + (50 << var_1_3)) > -128) {
			if (((-100 + var_1_3) + var_1_5) >= var_1_49) {
				var_1_7 = (min ((abs (var_1_48)) , (var_1_3 + (max (var_1_8 , -16)))));
			}
		} else {
			var_1_7 = (abs (var_1_8));
		}
	} else {
		var_1_7 = (min (var_1_48 , var_1_3));
	}


	// From: Req20Batch147Amount250
	signed long int stepLocal_9 = var_1_1 / var_1_3;
	if (var_1_43) {
		if (var_1_9 == var_1_30) {
			var_1_46 = ((abs (var_1_6)) - var_1_37);
		} else {
			var_1_46 = var_1_51;
		}
	} else {
		if (var_1_48 <= stepLocal_9) {
			var_1_46 = (abs (16));
		}
	}


	// From: Req18Batch147Amount250
	signed long int stepLocal_7 = var_1_16 + -10;
	if (stepLocal_7 < var_1_23) {
		if (! (last_1_var_1_42 <= var_1_46)) {
			if (var_1_12 < var_1_30) {
				var_1_42 = (max (10u , var_1_3));
			}
		} else {
			var_1_42 = var_1_26;
		}
	} else {
		if (var_1_24 < var_1_12) {
			var_1_42 = ((var_1_35 + var_1_38) + (last_1_var_1_42 + (var_1_46 + var_1_16)));
		}
	}


	// From: Req5Batch147Amount250
	unsigned long int stepLocal_4 = (abs (var_1_20)) - (var_1_42 + 10u);
	if (var_1_11 > var_1_12) {
		if (stepLocal_4 < var_1_6) {
			var_1_19 = (! 0);
		} else {
			if (var_1_11 > (var_1_10 - var_1_13)) {
				var_1_19 = var_1_21;
			}
		}
	}


	// From: Req25Batch147Amount250
	if (var_1_19) {
		if (var_1_30 <= var_1_29) {
			var_1_52 = ((min (100u , var_1_42)) + var_1_53);
		} else {
			var_1_52 = (var_1_26 + var_1_34);
		}
	} else {
		var_1_52 = var_1_3;
	}


	// From: Req4Batch147Amount250
	signed long int stepLocal_3 = var_1_34 % var_1_3;
	signed long int stepLocal_2 = 25 | (var_1_3 + var_1_38);
	unsigned short int stepLocal_1 = var_1_5;
	if ((var_1_42 / var_1_3) <= stepLocal_1) {
		var_1_14 = (var_1_16 + var_1_3);
	} else {
		if (stepLocal_3 > var_1_42) {
			if (var_1_6 != stepLocal_2) {
				var_1_14 = (min (var_1_16 , var_1_3));
			} else {
				var_1_14 = (var_1_3 + var_1_16);
			}
		}
	}


	// From: Req12Batch147Amount250
	if (var_1_47) {
		if (((- var_1_8) % var_1_3) >= ((var_1_52 * var_1_51) ^ var_1_34)) {
			var_1_31 = (min (var_1_30 , var_1_13));
		} else {
			var_1_31 = var_1_10;
		}
	}


	// From: Req10Batch147Amount250
	if (((var_1_16 >> var_1_3) * (var_1_42 / var_1_26)) >= ((max (var_1_23 , var_1_7)) & var_1_46)) {
		var_1_27 = (abs (var_1_12 - var_1_13));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 7);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -16383);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 6917529.027641074000e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 2305843.009213691400e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967295);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 16382);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 16383);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 16384);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 16384);
	assume_abort_if_not(var_1_37 <= 32767);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 24575);
	assume_abort_if_not(var_1_50 <= 32767);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_52 = var_1_52;
}

int property(void) {
	return ((((((((((((((((((((((((((last_1_var_1_23 >> var_1_3) < last_1_var_1_52) ? (var_1_1 == ((unsigned short int) (max ((min (var_1_3 , 256)) , ((max (var_1_5 , var_1_6)) - (abs (last_1_var_1_23))))))) : 1) && (((128 | var_1_48) < (var_1_49 - var_1_5)) ? ((((var_1_49 + var_1_6) + (50 << var_1_3)) > -128) ? ((((-100 + var_1_3) + var_1_5) >= var_1_49) ? (var_1_7 == ((signed short int) (min ((abs (var_1_48)) , (var_1_3 + (max (var_1_8 , -16))))))) : 1) : (var_1_7 == ((signed short int) (abs (var_1_8))))) : (var_1_7 == ((signed short int) (min (var_1_48 , var_1_3)))))) && (((- var_1_5) >= var_1_51) ? (var_1_9 == ((double) ((max (var_1_11 , 15.7)) - (8.5 + (var_1_12 - var_1_13))))) : 1)) && (((var_1_42 / var_1_3) <= var_1_5) ? (var_1_14 == ((unsigned char) (var_1_16 + var_1_3))) : (((var_1_34 % var_1_3) > var_1_42) ? ((var_1_6 != (25 | (var_1_3 + var_1_38))) ? (var_1_14 == ((unsigned char) (min (var_1_16 , var_1_3)))) : (var_1_14 == ((unsigned char) (var_1_3 + var_1_16)))) : 1))) && ((var_1_11 > var_1_12) ? ((((abs (var_1_20)) - (var_1_42 + 10u)) < var_1_6) ? (var_1_19 == ((unsigned char) (! 0))) : ((var_1_11 > (var_1_10 - var_1_13)) ? (var_1_19 == ((unsigned char) var_1_21)) : 1)) : 1)) && ((var_1_5 <= var_1_51) ? (var_1_22 == ((double) (var_1_13 + var_1_11))) : (var_1_22 == ((double) (var_1_11 + var_1_12))))) && (var_1_23 == ((unsigned long int) last_1_var_1_49))) && ((16 > (abs (var_1_25))) ? (var_1_24 == ((double) ((24.5 - (var_1_12 - var_1_11)) + var_1_13))) : 1)) && ((var_1_13 > var_1_11) ? (var_1_25 == ((signed short int) (var_1_3 - (var_1_16 + last_1_var_1_25)))) : (var_1_25 == ((signed short int) ((min ((var_1_26 - 64) , (28940 - last_1_var_1_25))) - var_1_3))))) && ((((var_1_16 >> var_1_3) * (var_1_42 / var_1_26)) >= ((max (var_1_23 , var_1_7)) & var_1_46)) ? (var_1_27 == ((double) (abs (var_1_12 - var_1_13)))) : 1)) && ((! (var_1_11 > (- var_1_10))) ? (var_1_29 == ((double) (var_1_12 + (min ((min (var_1_13 , var_1_11)) , (abs (var_1_30))))))) : (var_1_29 == ((double) (var_1_12 + (min ((min (var_1_30 , var_1_11)) , 127.5))))))) && (var_1_47 ? ((((- var_1_8) % var_1_3) >= ((var_1_52 * var_1_51) ^ var_1_34)) ? (var_1_31 == ((float) (min (var_1_30 , var_1_13)))) : (var_1_31 == ((float) var_1_10))) : 1)) && ((var_1_1 >= ((min (var_1_26 , var_1_16)) << var_1_6)) ? (var_1_32 == ((signed char) (min (var_1_3 , var_1_33)))) : 1)) && (var_1_47 ? ((last_1_var_1_34 > 64) ? (var_1_34 == ((unsigned short int) (max (var_1_3 , var_1_48)))) : (((last_1_var_1_34 + var_1_3) <= var_1_1) ? (var_1_34 == ((unsigned short int) ((min (var_1_3 , var_1_26)) + var_1_25))) : (var_1_34 == ((unsigned short int) ((var_1_35 + (min (var_1_36 , var_1_37))) - (min (2 , (100 + var_1_16)))))))) : (var_1_34 == ((unsigned short int) (var_1_37 + var_1_25))))) && (((var_1_21 && last_1_var_1_19) || last_1_var_1_41) ? ((! (var_1_30 > 256.8)) ? (var_1_38 == ((signed long int) (max (var_1_16 , last_1_var_1_1)))) : 1) : 1)) && (var_1_40 == ((unsigned short int) (min (var_1_35 , (abs (64))))))) && (var_1_41 == ((unsigned char) ((! var_1_21) || (! 1))))) && (((var_1_16 + -10) < var_1_23) ? ((! (last_1_var_1_42 <= var_1_46)) ? ((var_1_12 < var_1_30) ? (var_1_42 == ((unsigned long int) (max (10u , var_1_3)))) : 1) : (var_1_42 == ((unsigned long int) var_1_26))) : ((var_1_24 < var_1_12) ? (var_1_42 == ((unsigned long int) ((var_1_35 + var_1_38) + (last_1_var_1_42 + (var_1_46 + var_1_16))))) : 1))) && ((var_1_29 == (var_1_24 + (var_1_10 - var_1_13))) ? ((((var_1_37 + var_1_36) - var_1_3) >= (var_1_38 & (var_1_35 << var_1_23))) ? (var_1_43 == ((unsigned char) ((! var_1_44) && (var_1_21 && var_1_45)))) : (var_1_43 == ((unsigned char) var_1_21))) : 1)) && (var_1_43 ? ((var_1_9 == var_1_30) ? (var_1_46 == ((unsigned short int) ((abs (var_1_6)) - var_1_37))) : (var_1_46 == ((unsigned short int) var_1_51))) : ((var_1_48 <= (var_1_1 / var_1_3)) ? (var_1_46 == ((unsigned short int) (abs (16)))) : 1))) && (var_1_47 == ((unsigned char) (! var_1_21)))) && ((var_1_22 < var_1_10) ? (var_1_48 == ((signed short int) var_1_8)) : (var_1_48 == ((signed short int) (abs (var_1_38 - 8)))))) && ((var_1_35 >= (last_1_var_1_42 % var_1_6)) ? (((var_1_44 && var_1_21) && (last_1_var_1_27 > var_1_10)) ? ((! var_1_21) ? (var_1_49 == ((unsigned short int) (((var_1_50 - var_1_16) - 10000) + last_1_var_1_52))) : ((((- var_1_30) * var_1_11) <= last_1_var_1_29) ? (var_1_49 == ((unsigned short int) last_1_var_1_52)) : (var_1_49 == ((unsigned short int) (var_1_6 - last_1_var_1_52))))) : 1) : 1)) && (var_1_41 ? (var_1_51 == ((unsigned short int) var_1_5)) : (var_1_51 == ((unsigned short int) var_1_37)))) && (var_1_19 ? ((var_1_30 <= var_1_29) ? (var_1_52 == ((unsigned long int) ((min (100u , var_1_42)) + var_1_53))) : (var_1_52 == ((unsigned long int) (var_1_26 + var_1_34)))) : (var_1_52 == ((unsigned long int) var_1_3)))
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

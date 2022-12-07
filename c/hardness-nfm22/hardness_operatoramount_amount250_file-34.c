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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


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
double var_1_13 = 199.2;
unsigned short int var_1_14 = 128;
unsigned short int var_1_15 = 24244;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 256;
double var_1_21 = 100000.8;
unsigned long int var_1_22 = 16;
float var_1_23 = 25.35;
float var_1_24 = 1.425;
signed short int var_1_25 = -2;
signed long int var_1_28 = 2;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 200;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 10;
unsigned long int var_1_35 = 4;
unsigned short int var_1_36 = 56702;
signed long int var_1_37 = -128;
unsigned long int var_1_39 = 10;
unsigned short int var_1_40 = 0;
unsigned short int var_1_41 = 30871;
float var_1_42 = 5.5;
float var_1_43 = 2.88;
float var_1_44 = 24.5;
float var_1_45 = 0.95;
float var_1_46 = 24.2;
signed long int var_1_47 = 16;
unsigned long int var_1_49 = 256;
unsigned long int var_1_50 = 4015529347;
unsigned long int var_1_51 = 3468554309;
unsigned long int var_1_52 = 3723034803;
signed char var_1_53 = 4;
unsigned short int var_1_54 = 5;
signed long int var_1_55 = -500;
signed long int var_1_56 = 10000000;
signed long int var_1_57 = 4;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 64;
double last_1_var_1_7 = 31.75;
unsigned char last_1_var_1_16 = 1;
unsigned long int last_1_var_1_22 = 16;
float last_1_var_1_23 = 25.35;
signed short int last_1_var_1_25 = -2;
unsigned char last_1_var_1_30 = 0;
unsigned long int last_1_var_1_35 = 4;
signed long int last_1_var_1_37 = -128;
unsigned long int last_1_var_1_39 = 10;
unsigned short int last_1_var_1_40 = 0;
float last_1_var_1_45 = 0.95;
signed char last_1_var_1_53 = 4;
unsigned short int last_1_var_1_54 = 5;
signed long int last_1_var_1_56 = 10000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch34Amount250
	unsigned char stepLocal_9 = -2 >= (min (last_1_var_1_35 , last_1_var_1_39));
	signed long int stepLocal_8 = max (var_1_4 , var_1_3);
	if (stepLocal_9 && last_1_var_1_16) {
		var_1_45 = var_1_44;
	} else {
		if (var_1_44 < (last_1_var_1_23 / (min (var_1_10 , var_1_46)))) {
			if (last_1_var_1_30 == stepLocal_8) {
				if (var_1_19) {
					var_1_45 = (var_1_13 + var_1_44);
				} else {
					var_1_45 = var_1_43;
				}
			} else {
				var_1_45 = ((49.4f + var_1_11) - var_1_10);
			}
		}
	}


	// From: Req11Batch34Amount250
	if ((last_1_var_1_7 / var_1_10) != (min (var_1_11 , last_1_var_1_23))) {
		var_1_28 = (last_1_var_1_30 + (max (var_1_4 , last_1_var_1_30)));
	}


	// From: Req2Batch34Amount250
	unsigned char stepLocal_1 = var_1_4;
	if (stepLocal_1 >= var_1_28) {
		var_1_7 = (abs (var_1_8));
	}


	// From: Req10Batch34Amount250
	if (last_1_var_1_45 > last_1_var_1_23) {
		if ((1 * (last_1_var_1_25 & var_1_15)) > (last_1_var_1_22 + (var_1_3 + last_1_var_1_30))) {
			if (var_1_15 > (max (var_1_5 , last_1_var_1_22))) {
				var_1_25 = (var_1_4 - var_1_5);
			} else {
				var_1_25 = ((var_1_5 - (var_1_4 + var_1_3)) + (min (last_1_var_1_53 , last_1_var_1_30)));
			}
		} else {
			var_1_25 = (var_1_5 + (var_1_3 + var_1_4));
		}
	}


	// From: Req5Batch34Amount250
	if (last_1_var_1_1 < ((var_1_4 % var_1_15) * var_1_5)) {
		if ((! var_1_2) && var_1_17) {
			var_1_16 = (! var_1_18);
		} else {
			var_1_16 = var_1_19;
		}
	} else {
		var_1_16 = var_1_18;
	}


	// From: Req9Batch34Amount250
	if ((abs (100 + var_1_3)) <= (min (var_1_4 , var_1_5))) {
		if ((max (last_1_var_1_54 , 25)) < last_1_var_1_35) {
			var_1_23 = ((min (var_1_12 , var_1_11)) - var_1_10);
		} else {
			if (last_1_var_1_40 <= (~ last_1_var_1_40)) {
				var_1_23 = var_1_24;
			}
		}
	} else {
		var_1_23 = var_1_12;
	}


	// From: Req13Batch34Amount250
	unsigned short int stepLocal_4 = var_1_36;
	signed long int stepLocal_3 = (var_1_36 - var_1_31) + last_1_var_1_37;
	if (stepLocal_3 > (last_1_var_1_56 >> var_1_34)) {
		if (stepLocal_4 > last_1_var_1_56) {
			var_1_35 = (max (var_1_34 , 1u));
		}
	} else {
		var_1_35 = (var_1_33 + (min (last_1_var_1_56 , var_1_15)));
	}


	// From: Req4Batch34Amount250
	if (var_1_13 >= var_1_10) {
		var_1_14 = ((max (8 , var_1_4)) + (var_1_15 - var_1_3));
	} else {
		var_1_14 = var_1_5;
	}


	// From: Req6Batch34Amount250
	if (var_1_19) {
		var_1_20 = var_1_3;
	} else {
		var_1_20 = var_1_4;
	}


	// From: Req7Batch34Amount250
	if (var_1_19 && (var_1_7 <= (9.999999995E8 * var_1_11))) {
		var_1_21 = (max (var_1_13 , var_1_12));
	} else {
		var_1_21 = (abs (var_1_11));
	}


	// From: Req21Batch34Amount250
	var_1_53 = var_1_33;


	// From: Req22Batch34Amount250
	if (var_1_16) {
		var_1_54 = var_1_5;
	} else {
		var_1_54 = var_1_41;
	}


	// From: Req19Batch34Amount250
	unsigned char stepLocal_10 = var_1_16;
	if (((- var_1_8) / (abs (var_1_46))) < 63.5) {
		if (var_1_16 || stepLocal_10) {
			var_1_47 = var_1_15;
		} else {
			if (var_1_16) {
				var_1_47 = (var_1_14 - var_1_31);
			}
		}
	}


	// From: Req16Batch34Amount250
	unsigned char stepLocal_6 = var_1_31;
	unsigned char stepLocal_5 = (var_1_53 >> var_1_35) >= (var_1_25 / var_1_15);
	if (stepLocal_5 || var_1_19) {
		if (last_1_var_1_40 >= stepLocal_6) {
			var_1_40 = var_1_31;
		} else {
			if (var_1_12 > (max (var_1_10 , 8.6))) {
				var_1_40 = var_1_5;
			} else {
				var_1_40 = var_1_32;
			}
		}
	} else {
		var_1_40 = (61819 - ((max (var_1_15 , var_1_41)) - var_1_5));
	}


	// From: Req3Batch34Amount250
	if (var_1_16) {
		if (var_1_20 >= var_1_5) {
			var_1_9 = (min (((var_1_10 - var_1_11) - var_1_12) , var_1_8));
		}
	} else {
		if ((min ((var_1_5 + 4) , (var_1_20 - var_1_4))) == var_1_3) {
			var_1_9 = var_1_12;
		} else {
			var_1_9 = (var_1_11 + (max (var_1_13 , 9.99999999999998E13)));
		}
	}


	// From: Req12Batch34Amount250
	signed long int stepLocal_2 = var_1_47;
	if ((var_1_12 / var_1_10) > 8.25) {
		if (var_1_47 > stepLocal_2) {
			var_1_30 = (var_1_31 - (var_1_32 - var_1_33));
		} else {
			var_1_30 = (var_1_32 + (max (var_1_4 , var_1_5)));
		}
	} else {
		var_1_30 = ((var_1_33 + var_1_34) + var_1_32);
	}


	// From: Req17Batch34Amount250
	unsigned char stepLocal_7 = ! (var_1_30 == var_1_20);
	if (var_1_18 || stepLocal_7) {
		var_1_42 = (var_1_11 - (var_1_10 - (max (var_1_43 , var_1_44))));
	}


	// From: Req20Batch34Amount250
	if (var_1_16 || var_1_16) {
		if ((max (var_1_14 , var_1_15)) > (- var_1_36)) {
			if (var_1_46 <= (var_1_9 + var_1_45)) {
				if (((var_1_31 - var_1_4) + 25) >= (var_1_35 + var_1_30)) {
					var_1_49 = (var_1_50 - (max ((max (var_1_3 , 16u)) , var_1_32)));
				} else {
					var_1_49 = (min ((var_1_50 - (var_1_41 + var_1_5)) , ((max (var_1_51 , var_1_52)) - var_1_34)));
				}
			}
		} else {
			var_1_49 = (var_1_53 + var_1_41);
		}
	} else {
		var_1_49 = var_1_52;
	}


	// From: Req25Batch34Amount250
	if (((var_1_50 - 1u) * var_1_3) >= var_1_51) {
		if (var_1_16) {
			var_1_57 = var_1_49;
		}
	}


	// From: Req15Batch34Amount250
	if ((abs (var_1_57)) < last_1_var_1_39) {
		if (var_1_16) {
			var_1_39 = (min (var_1_36 , (var_1_3 + (var_1_31 + var_1_57))));
		} else {
			var_1_39 = ((max ((var_1_3 + var_1_33) , (var_1_34 + 32u))) + var_1_4);
		}
	}


	// From: Req24Batch34Amount250
	signed long int stepLocal_12 = 16 << var_1_25;
	unsigned long int stepLocal_11 = var_1_49;
	if (stepLocal_11 >= (var_1_41 - (var_1_28 + var_1_20))) {
		if (stepLocal_12 <= var_1_3) {
			var_1_56 = (min (last_1_var_1_56 , (min (var_1_32 , var_1_15))));
		}
	}


	// From: Req8Batch34Amount250
	var_1_22 = (max (var_1_56 , var_1_4));


	// From: Req1Batch34Amount250
	signed long int stepLocal_0 = var_1_47;
	if (var_1_16) {
		if (((var_1_3 - var_1_4) - var_1_5) <= stepLocal_0) {
			var_1_1 = var_1_3;
		}
	}


	// From: Req23Batch34Amount250
	var_1_55 = var_1_57;


	// From: Req14Batch34Amount250
	if (var_1_9 <= (- var_1_12)) {
		if (var_1_16) {
			var_1_37 = (abs (max ((4 + var_1_53) , var_1_55)));
		}
	}
}



void updateVariables() {
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
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 4611686.018427382800e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 127);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 63);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 32767);
	assume_abort_if_not(var_1_36 <= 65535);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	assume_abort_if_not(var_1_46 != 0.0F);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 2147483647);
	assume_abort_if_not(var_1_50 <= 4294967294);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_56 = var_1_56;
}

int property() {
	return ((((((((((((((((((((((((var_1_16 ? ((((var_1_3 - var_1_4) - var_1_5) <= var_1_47) ? (var_1_1 == ((unsigned short int) var_1_3)) : 1) : 1) && ((var_1_4 >= var_1_28) ? (var_1_7 == ((double) (abs (var_1_8)))) : 1)) && (var_1_16 ? ((var_1_20 >= var_1_5) ? (var_1_9 == ((double) (min (((var_1_10 - var_1_11) - var_1_12) , var_1_8)))) : 1) : (((min ((var_1_5 + 4) , (var_1_20 - var_1_4))) == var_1_3) ? (var_1_9 == ((double) var_1_12)) : (var_1_9 == ((double) (var_1_11 + (max (var_1_13 , 9.99999999999998E13)))))))) && ((var_1_13 >= var_1_10) ? (var_1_14 == ((unsigned short int) ((max (8 , var_1_4)) + (var_1_15 - var_1_3)))) : (var_1_14 == ((unsigned short int) var_1_5)))) && ((last_1_var_1_1 < ((var_1_4 % var_1_15) * var_1_5)) ? (((! var_1_2) && var_1_17) ? (var_1_16 == ((unsigned char) (! var_1_18))) : (var_1_16 == ((unsigned char) var_1_19))) : (var_1_16 == ((unsigned char) var_1_18)))) && (var_1_19 ? (var_1_20 == ((unsigned long int) var_1_3)) : (var_1_20 == ((unsigned long int) var_1_4)))) && ((var_1_19 && (var_1_7 <= (9.999999995E8 * var_1_11))) ? (var_1_21 == ((double) (max (var_1_13 , var_1_12)))) : (var_1_21 == ((double) (abs (var_1_11)))))) && (var_1_22 == ((unsigned long int) (max (var_1_56 , var_1_4))))) && (((abs (100 + var_1_3)) <= (min (var_1_4 , var_1_5))) ? (((max (last_1_var_1_54 , 25)) < last_1_var_1_35) ? (var_1_23 == ((float) ((min (var_1_12 , var_1_11)) - var_1_10))) : ((last_1_var_1_40 <= (~ last_1_var_1_40)) ? (var_1_23 == ((float) var_1_24)) : 1)) : (var_1_23 == ((float) var_1_12)))) && ((last_1_var_1_45 > last_1_var_1_23) ? (((1 * (last_1_var_1_25 & var_1_15)) > (last_1_var_1_22 + (var_1_3 + last_1_var_1_30))) ? ((var_1_15 > (max (var_1_5 , last_1_var_1_22))) ? (var_1_25 == ((signed short int) (var_1_4 - var_1_5))) : (var_1_25 == ((signed short int) ((var_1_5 - (var_1_4 + var_1_3)) + (min (last_1_var_1_53 , last_1_var_1_30)))))) : (var_1_25 == ((signed short int) (var_1_5 + (var_1_3 + var_1_4))))) : 1)) && (((last_1_var_1_7 / var_1_10) != (min (var_1_11 , last_1_var_1_23))) ? (var_1_28 == ((signed long int) (last_1_var_1_30 + (max (var_1_4 , last_1_var_1_30))))) : 1)) && (((var_1_12 / var_1_10) > 8.25) ? ((var_1_47 > var_1_47) ? (var_1_30 == ((unsigned char) (var_1_31 - (var_1_32 - var_1_33)))) : (var_1_30 == ((unsigned char) (var_1_32 + (max (var_1_4 , var_1_5)))))) : (var_1_30 == ((unsigned char) ((var_1_33 + var_1_34) + var_1_32))))) && ((((var_1_36 - var_1_31) + last_1_var_1_37) > (last_1_var_1_56 >> var_1_34)) ? ((var_1_36 > last_1_var_1_56) ? (var_1_35 == ((unsigned long int) (max (var_1_34 , 1u)))) : 1) : (var_1_35 == ((unsigned long int) (var_1_33 + (min (last_1_var_1_56 , var_1_15))))))) && ((var_1_9 <= (- var_1_12)) ? (var_1_16 ? (var_1_37 == ((signed long int) (abs (max ((4 + var_1_53) , var_1_55))))) : 1) : 1)) && (((abs (var_1_57)) < last_1_var_1_39) ? (var_1_16 ? (var_1_39 == ((unsigned long int) (min (var_1_36 , (var_1_3 + (var_1_31 + var_1_57)))))) : (var_1_39 == ((unsigned long int) ((max ((var_1_3 + var_1_33) , (var_1_34 + 32u))) + var_1_4)))) : 1)) && ((((var_1_53 >> var_1_35) >= (var_1_25 / var_1_15)) || var_1_19) ? ((last_1_var_1_40 >= var_1_31) ? (var_1_40 == ((unsigned short int) var_1_31)) : ((var_1_12 > (max (var_1_10 , 8.6))) ? (var_1_40 == ((unsigned short int) var_1_5)) : (var_1_40 == ((unsigned short int) var_1_32)))) : (var_1_40 == ((unsigned short int) (61819 - ((max (var_1_15 , var_1_41)) - var_1_5)))))) && ((var_1_18 || (! (var_1_30 == var_1_20))) ? (var_1_42 == ((float) (var_1_11 - (var_1_10 - (max (var_1_43 , var_1_44)))))) : 1)) && (((-2 >= (min (last_1_var_1_35 , last_1_var_1_39))) && last_1_var_1_16) ? (var_1_45 == ((float) var_1_44)) : ((var_1_44 < (last_1_var_1_23 / (min (var_1_10 , var_1_46)))) ? ((last_1_var_1_30 == (max (var_1_4 , var_1_3))) ? (var_1_19 ? (var_1_45 == ((float) (var_1_13 + var_1_44))) : (var_1_45 == ((float) var_1_43))) : (var_1_45 == ((float) ((49.4f + var_1_11) - var_1_10)))) : 1))) && ((((- var_1_8) / (abs (var_1_46))) < 63.5) ? ((var_1_16 || var_1_16) ? (var_1_47 == ((signed long int) var_1_15)) : (var_1_16 ? (var_1_47 == ((signed long int) (var_1_14 - var_1_31))) : 1)) : 1)) && ((var_1_16 || var_1_16) ? (((max (var_1_14 , var_1_15)) > (- var_1_36)) ? ((var_1_46 <= (var_1_9 + var_1_45)) ? ((((var_1_31 - var_1_4) + 25) >= (var_1_35 + var_1_30)) ? (var_1_49 == ((unsigned long int) (var_1_50 - (max ((max (var_1_3 , 16u)) , var_1_32))))) : (var_1_49 == ((unsigned long int) (min ((var_1_50 - (var_1_41 + var_1_5)) , ((max (var_1_51 , var_1_52)) - var_1_34)))))) : 1) : (var_1_49 == ((unsigned long int) (var_1_53 + var_1_41)))) : (var_1_49 == ((unsigned long int) var_1_52)))) && (var_1_53 == ((signed char) var_1_33))) && (var_1_16 ? (var_1_54 == ((unsigned short int) var_1_5)) : (var_1_54 == ((unsigned short int) var_1_41)))) && (var_1_55 == ((signed long int) var_1_57))) && ((var_1_49 >= (var_1_41 - (var_1_28 + var_1_20))) ? (((16 << var_1_25) <= var_1_3) ? (var_1_56 == ((signed long int) (min (last_1_var_1_56 , (min (var_1_32 , var_1_15)))))) : 1) : 1)) && ((((var_1_50 - 1u) * var_1_3) >= var_1_51) ? (var_1_16 ? (var_1_57 == ((signed long int) var_1_49)) : 1) : 1)
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

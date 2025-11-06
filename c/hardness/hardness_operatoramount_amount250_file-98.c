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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch98Amount250.c", 13, "reach_error"); }
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
signed char var_1_1 = -2;
unsigned long int var_1_4 = 128;
signed char var_1_5 = 100;
signed char var_1_6 = 5;
signed char var_1_7 = 64;
signed char var_1_8 = 2;
unsigned char var_1_9 = 8;
signed char var_1_10 = 64;
signed char var_1_12 = 8;
signed char var_1_13 = 10;
signed char var_1_14 = 10;
signed long int var_1_15 = 2;
signed long int var_1_16 = 1;
unsigned short int var_1_17 = 32;
unsigned short int var_1_18 = 41527;
unsigned char var_1_19 = 0;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
signed char var_1_24 = 4;
signed char var_1_27 = 2;
signed char var_1_28 = 4;
unsigned short int var_1_29 = 2;
unsigned short int var_1_30 = 62294;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
signed short int var_1_33 = 256;
signed short int var_1_34 = 32;
float var_1_35 = 3.2;
float var_1_36 = 199.88;
signed char var_1_37 = 32;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned short int var_1_41 = 32;
signed short int var_1_42 = -4;
unsigned char var_1_43 = 0;
double var_1_45 = 128.1;
double var_1_46 = 15.2;
double var_1_47 = 31.5;
double var_1_48 = 0.0;
double var_1_49 = 3.75;
double var_1_51 = 1.25;
double var_1_52 = 16.5;
double var_1_53 = 64.6;
double var_1_54 = -0.5;
double var_1_55 = 50.4;
signed char var_1_57 = 32;
unsigned long int var_1_58 = 32;
unsigned char var_1_59 = 0;
unsigned long int var_1_60 = 50;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_19 = 0;
unsigned char last_1_var_1_31 = 1;
signed short int last_1_var_1_34 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch98Amount250
	var_1_41 = (abs (last_1_var_1_34));


	// From: Req5Batch98Amount250
	if (! last_1_var_1_19) {
		var_1_19 = ((last_1_var_1_19 || last_1_var_1_31) || (var_1_21 && (var_1_22 && var_1_23)));
	}


	// From: Req20Batch98Amount250
	if (var_1_19) {
		var_1_57 = var_1_15;
	} else {
		var_1_57 = var_1_7;
	}


	// From: Req2Batch98Amount250
	var_1_9 = 8;


	// From: Req4Batch98Amount250
	signed long int stepLocal_3 = var_1_16;
	if (stepLocal_3 == (var_1_13 * var_1_14)) {
		var_1_17 = (var_1_18 - 8);
	}


	// From: Req7Batch98Amount250
	signed long int stepLocal_6 = var_1_15 + (5 / -1);
	unsigned long int stepLocal_5 = var_1_15 / var_1_4;
	if (stepLocal_5 >= var_1_41) {
		if (var_1_12 <= stepLocal_6) {
			var_1_27 = (max ((min ((min (-10 , var_1_28)) , (min (var_1_6 , var_1_15)))) , var_1_8));
		} else {
			var_1_27 = (abs (var_1_6));
		}
	}


	// From: Req12Batch98Amount250
	if (((var_1_18 - var_1_16) % var_1_5) <= var_1_30) {
		var_1_35 = (abs (max (var_1_36 , 100.75f)));
	}


	// From: Req21Batch98Amount250
	if (var_1_40) {
		var_1_58 = var_1_16;
	} else {
		var_1_58 = 8u;
	}


	// From: Req23Batch98Amount250
	var_1_60 = var_1_17;


	// From: Req11Batch98Amount250
	unsigned char stepLocal_9 = var_1_41 == var_1_57;
	if (var_1_19 && stepLocal_9) {
		var_1_34 = (max ((min (var_1_41 , 32)) , var_1_8));
	}


	// From: Req13Batch98Amount250
	signed char stepLocal_14 = var_1_8;
	unsigned long int stepLocal_13 = var_1_60;
	signed long int stepLocal_12 = var_1_16;
	signed char stepLocal_11 = var_1_28;
	unsigned long int stepLocal_10 = var_1_58;
	if ((var_1_41 * (min (var_1_14 , var_1_13))) != stepLocal_13) {
		if (var_1_19) {
			var_1_37 = (max ((4 + var_1_12) , var_1_28));
		} else {
			if ((var_1_18 * var_1_7) < stepLocal_14) {
				if (stepLocal_11 >= var_1_16) {
					var_1_37 = var_1_7;
				} else {
					var_1_37 = var_1_16;
				}
			}
		}
	} else {
		if ((var_1_6 ^ (var_1_30 - var_1_14)) == stepLocal_10) {
			if ((var_1_13 + (min (var_1_6 , var_1_17))) != stepLocal_12) {
				var_1_37 = (min (((abs (var_1_16)) - var_1_13) , var_1_7));
			}
		}
	}


	// From: Req1Batch98Amount250
	if (10u <= (abs (var_1_58))) {
		if ((min (16u , var_1_58)) >= (var_1_58 % var_1_4)) {
			var_1_1 = ((var_1_5 - var_1_6) - (var_1_7 - var_1_8));
		}
	}


	// From: Req19Batch98Amount250
	unsigned short int stepLocal_17 = var_1_41;
	if (! (var_1_16 <= var_1_58)) {
		if (stepLocal_17 <= ((var_1_37 + var_1_28) % 5)) {
			var_1_55 = var_1_49;
		}
	}


	// From: Req8Batch98Amount250
	if (var_1_55 < (min (15.8 , 8.2))) {
		var_1_29 = (var_1_14 + (max (var_1_16 , (abs (64)))));
	} else {
		var_1_29 = ((var_1_30 - var_1_15) - var_1_16);
	}


	// From: Req18Batch98Amount250
	if (var_1_55 <= 0.75) {
		if (((var_1_58 + var_1_29) == (var_1_30 / var_1_18)) && var_1_19) {
			var_1_45 = (max ((min (var_1_36 , var_1_46)) , (var_1_47 - (var_1_48 - var_1_49))));
		}
	} else {
		if (! (var_1_55 >= var_1_49)) {
			var_1_45 = (max ((var_1_49 + (min (var_1_51 , var_1_52))) , (var_1_53 + var_1_54)));
		} else {
			var_1_45 = (max ((var_1_49 - var_1_48) , var_1_51));
		}
	}


	// From: Req6Batch98Amount250
	signed char stepLocal_4 = var_1_13;
	if (var_1_18 <= stepLocal_4) {
		if (var_1_22) {
			var_1_24 = (var_1_13 - var_1_5);
		} else {
			if ((- var_1_45) <= var_1_55) {
				var_1_24 = ((max (var_1_16 , -2)) + var_1_14);
			}
		}
	} else {
		var_1_24 = var_1_16;
	}


	// From: Req10Batch98Amount250
	if (((var_1_15 - 50) <= var_1_6) || (var_1_55 <= var_1_45)) {
		if (! (var_1_16 >= var_1_18)) {
			var_1_33 = var_1_29;
		} else {
			var_1_33 = var_1_7;
		}
	}


	// From: Req9Batch98Amount250
	unsigned long int stepLocal_8 = var_1_58;
	signed char stepLocal_7 = var_1_37;
	if (stepLocal_8 == var_1_5) {
		var_1_31 = (! var_1_21);
	} else {
		if (var_1_33 != stepLocal_7) {
			var_1_31 = (var_1_19 || ((var_1_23 && var_1_21) && (! var_1_32)));
		}
	}


	// From: Req3Batch98Amount250
	unsigned long int stepLocal_2 = var_1_4;
	signed long int stepLocal_1 = min (var_1_13 , (var_1_7 / var_1_5));
	unsigned long int stepLocal_0 = - 128u;
	if (! var_1_31) {
		var_1_10 = ((var_1_12 + (var_1_13 - var_1_14)) + var_1_6);
	} else {
		if (stepLocal_1 <= var_1_8) {
			var_1_10 = (min ((min (var_1_14 , var_1_12)) , var_1_8));
		} else {
			if ((var_1_60 * var_1_8) == stepLocal_0) {
				if (stepLocal_2 >= (var_1_5 >> (max (var_1_15 , var_1_16)))) {
					var_1_10 = (var_1_13 + var_1_14);
				} else {
					var_1_10 = -5;
				}
			} else {
				var_1_10 = var_1_6;
			}
		}
	}


	// From: Req14Batch98Amount250
	signed long int stepLocal_16 = var_1_15 + (var_1_13 % var_1_30);
	signed long int stepLocal_15 = var_1_16;
	if (stepLocal_15 != (var_1_15 * (var_1_10 / var_1_18))) {
		if (stepLocal_16 >= -4) {
			var_1_39 = (! var_1_40);
		} else {
			var_1_39 = (var_1_40 || ((var_1_55 <= var_1_36) && var_1_32));
		}
	} else {
		var_1_39 = ((var_1_6 < (var_1_13 - var_1_8)) || var_1_23);
	}


	// From: Req22Batch98Amount250
	if ((min (var_1_54 , var_1_53)) < var_1_45) {
		if (var_1_31) {
			var_1_59 = (! var_1_21);
		}
	} else {
		var_1_59 = 1;
	}


	// From: Req16Batch98Amount250
	if (var_1_45 > (abs (var_1_45))) {
		if (var_1_13 < var_1_4) {
			var_1_42 = (var_1_13 - (var_1_6 + var_1_7));
		} else {
			if (! var_1_40) {
				if ((var_1_27 ^ var_1_16) <= ((max (var_1_41 , var_1_7)) << var_1_18)) {
					var_1_42 = var_1_37;
				} else {
					var_1_42 = (-5 + ((min (var_1_7 , var_1_5)) + var_1_12));
				}
			} else {
				if (var_1_59) {
					var_1_42 = (128 - var_1_14);
				} else {
					var_1_42 = (var_1_27 + var_1_9);
				}
			}
		}
	}


	// From: Req17Batch98Amount250
	if (var_1_18 >= var_1_29) {
		if (var_1_1 > var_1_60) {
			var_1_43 = (! (var_1_39 && (! var_1_22)));
		} else {
			var_1_43 = (var_1_59 && (! var_1_21));
		}
	} else {
		var_1_43 = ((! 1) || var_1_40);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 62);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 63);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 31);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 6);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 6);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 32767);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 49150);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854766000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 4611686.018427383000e+12F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -461168.6018427383000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -461168.6018427383000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -461168.6018427383000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -461168.6018427383000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_34 = var_1_34;
}

int property(void) {
	return (((((((((((((((((((((((10u <= (abs (var_1_58))) ? (((min (16u , var_1_58)) >= (var_1_58 % var_1_4)) ? (var_1_1 == ((signed char) ((var_1_5 - var_1_6) - (var_1_7 - var_1_8)))) : 1) : 1) && (var_1_9 == ((unsigned char) 8))) && ((! var_1_31) ? (var_1_10 == ((signed char) ((var_1_12 + (var_1_13 - var_1_14)) + var_1_6))) : (((min (var_1_13 , (var_1_7 / var_1_5))) <= var_1_8) ? (var_1_10 == ((signed char) (min ((min (var_1_14 , var_1_12)) , var_1_8)))) : (((var_1_60 * var_1_8) == (- 128u)) ? ((var_1_4 >= (var_1_5 >> (max (var_1_15 , var_1_16)))) ? (var_1_10 == ((signed char) (var_1_13 + var_1_14))) : (var_1_10 == ((signed char) -5))) : (var_1_10 == ((signed char) var_1_6)))))) && ((var_1_16 == (var_1_13 * var_1_14)) ? (var_1_17 == ((unsigned short int) (var_1_18 - 8))) : 1)) && ((! last_1_var_1_19) ? (var_1_19 == ((unsigned char) ((last_1_var_1_19 || last_1_var_1_31) || (var_1_21 && (var_1_22 && var_1_23))))) : 1)) && ((var_1_18 <= var_1_13) ? (var_1_22 ? (var_1_24 == ((signed char) (var_1_13 - var_1_5))) : (((- var_1_45) <= var_1_55) ? (var_1_24 == ((signed char) ((max (var_1_16 , -2)) + var_1_14))) : 1)) : (var_1_24 == ((signed char) var_1_16)))) && (((var_1_15 / var_1_4) >= var_1_41) ? ((var_1_12 <= (var_1_15 + (5 / -1))) ? (var_1_27 == ((signed char) (max ((min ((min (-10 , var_1_28)) , (min (var_1_6 , var_1_15)))) , var_1_8)))) : (var_1_27 == ((signed char) (abs (var_1_6))))) : 1)) && ((var_1_55 < (min (15.8 , 8.2))) ? (var_1_29 == ((unsigned short int) (var_1_14 + (max (var_1_16 , (abs (64))))))) : (var_1_29 == ((unsigned short int) ((var_1_30 - var_1_15) - var_1_16))))) && ((var_1_58 == var_1_5) ? (var_1_31 == ((unsigned char) (! var_1_21))) : ((var_1_33 != var_1_37) ? (var_1_31 == ((unsigned char) (var_1_19 || ((var_1_23 && var_1_21) && (! var_1_32))))) : 1))) && ((((var_1_15 - 50) <= var_1_6) || (var_1_55 <= var_1_45)) ? ((! (var_1_16 >= var_1_18)) ? (var_1_33 == ((signed short int) var_1_29)) : (var_1_33 == ((signed short int) var_1_7))) : 1)) && ((var_1_19 && (var_1_41 == var_1_57)) ? (var_1_34 == ((signed short int) (max ((min (var_1_41 , 32)) , var_1_8)))) : 1)) && ((((var_1_18 - var_1_16) % var_1_5) <= var_1_30) ? (var_1_35 == ((float) (abs (max (var_1_36 , 100.75f))))) : 1)) && (((var_1_41 * (min (var_1_14 , var_1_13))) != var_1_60) ? (var_1_19 ? (var_1_37 == ((signed char) (max ((4 + var_1_12) , var_1_28)))) : (((var_1_18 * var_1_7) < var_1_8) ? ((var_1_28 >= var_1_16) ? (var_1_37 == ((signed char) var_1_7)) : (var_1_37 == ((signed char) var_1_16))) : 1)) : (((var_1_6 ^ (var_1_30 - var_1_14)) == var_1_58) ? (((var_1_13 + (min (var_1_6 , var_1_17))) != var_1_16) ? (var_1_37 == ((signed char) (min (((abs (var_1_16)) - var_1_13) , var_1_7)))) : 1) : 1))) && ((var_1_16 != (var_1_15 * (var_1_10 / var_1_18))) ? (((var_1_15 + (var_1_13 % var_1_30)) >= -4) ? (var_1_39 == ((unsigned char) (! var_1_40))) : (var_1_39 == ((unsigned char) (var_1_40 || ((var_1_55 <= var_1_36) && var_1_32))))) : (var_1_39 == ((unsigned char) ((var_1_6 < (var_1_13 - var_1_8)) || var_1_23))))) && (var_1_41 == ((unsigned short int) (abs (last_1_var_1_34))))) && ((var_1_45 > (abs (var_1_45))) ? ((var_1_13 < var_1_4) ? (var_1_42 == ((signed short int) (var_1_13 - (var_1_6 + var_1_7)))) : ((! var_1_40) ? (((var_1_27 ^ var_1_16) <= ((max (var_1_41 , var_1_7)) << var_1_18)) ? (var_1_42 == ((signed short int) var_1_37)) : (var_1_42 == ((signed short int) (-5 + ((min (var_1_7 , var_1_5)) + var_1_12))))) : (var_1_59 ? (var_1_42 == ((signed short int) (128 - var_1_14))) : (var_1_42 == ((signed short int) (var_1_27 + var_1_9)))))) : 1)) && ((var_1_18 >= var_1_29) ? ((var_1_1 > var_1_60) ? (var_1_43 == ((unsigned char) (! (var_1_39 && (! var_1_22))))) : (var_1_43 == ((unsigned char) (var_1_59 && (! var_1_21))))) : (var_1_43 == ((unsigned char) ((! 1) || var_1_40))))) && ((var_1_55 <= 0.75) ? ((((var_1_58 + var_1_29) == (var_1_30 / var_1_18)) && var_1_19) ? (var_1_45 == ((double) (max ((min (var_1_36 , var_1_46)) , (var_1_47 - (var_1_48 - var_1_49)))))) : 1) : ((! (var_1_55 >= var_1_49)) ? (var_1_45 == ((double) (max ((var_1_49 + (min (var_1_51 , var_1_52))) , (var_1_53 + var_1_54))))) : (var_1_45 == ((double) (max ((var_1_49 - var_1_48) , var_1_51))))))) && ((! (var_1_16 <= var_1_58)) ? ((var_1_41 <= ((var_1_37 + var_1_28) % 5)) ? (var_1_55 == ((double) var_1_49)) : 1) : 1)) && (var_1_19 ? (var_1_57 == ((signed char) var_1_15)) : (var_1_57 == ((signed char) var_1_7)))) && (var_1_40 ? (var_1_58 == ((unsigned long int) var_1_16)) : (var_1_58 == ((unsigned long int) 8u)))) && (((min (var_1_54 , var_1_53)) < var_1_45) ? (var_1_31 ? (var_1_59 == ((unsigned char) (! var_1_21))) : 1) : (var_1_59 == ((unsigned char) 1)))) && (var_1_60 == ((unsigned long int) var_1_17))
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

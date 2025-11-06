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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch171Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 999999999999.6;
double var_1_2 = 31.5;
signed char var_1_3 = -2;
double var_1_4 = 10.57;
double var_1_5 = 4.6;
double var_1_6 = 25.25;
signed char var_1_7 = 16;
signed char var_1_8 = -25;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
signed long int var_1_11 = 16;
signed long int var_1_12 = -16;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 4;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 64;
signed char var_1_19 = -16;
signed char var_1_21 = -50;
unsigned short int var_1_22 = 0;
unsigned char var_1_23 = 1;
signed long int var_1_24 = 1711059475;
double var_1_25 = 0.5;
double var_1_26 = 63.375;
double var_1_27 = 99999999.125;
double var_1_28 = 2.7;
double var_1_29 = 0.0;
double var_1_30 = 0.0;
double var_1_31 = 100000000.75;
double var_1_32 = 15.96;
signed long int var_1_33 = 1341144198;
unsigned short int var_1_34 = 4;
unsigned char var_1_35 = 100;
unsigned char var_1_36 = 200;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 4;
signed char var_1_40 = 0;
unsigned long int var_1_41 = 5;
unsigned long int var_1_42 = 4073809875;
unsigned char var_1_43 = 0;
unsigned long int var_1_44 = 16;
unsigned long int var_1_45 = 3722218555;
unsigned long int var_1_46 = 128;
unsigned long int var_1_47 = 5;
unsigned long int var_1_48 = 2;
unsigned short int var_1_49 = 16;
unsigned short int var_1_50 = 32892;
unsigned char var_1_51 = 25;
unsigned char var_1_52 = 10;
double var_1_53 = 127.5;
float var_1_55 = 32.05;
signed long int var_1_56 = -100;
signed char var_1_57 = 1;
signed short int var_1_58 = 50;
unsigned long int var_1_60 = 1000;
unsigned long int var_1_61 = 32;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
signed char var_1_64 = -16;
unsigned short int var_1_65 = 8;
unsigned long int var_1_66 = 500;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_22 = 0;
unsigned char last_1_var_1_23 = 1;
double last_1_var_1_25 = 0.5;
unsigned long int last_1_var_1_44 = 16;
unsigned short int last_1_var_1_49 = 16;
signed long int last_1_var_1_56 = -100;
signed short int last_1_var_1_58 = 50;
unsigned long int last_1_var_1_60 = 1000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch171Amount250
	signed long int stepLocal_9 = min (var_1_36 , (last_1_var_1_49 / var_1_38));
	unsigned char stepLocal_8 = last_1_var_1_23;
	if ((- var_1_24) < stepLocal_9) {
		var_1_44 = ((var_1_45 - var_1_39) - last_1_var_1_44);
	} else {
		if (stepLocal_8 || var_1_14) {
			var_1_44 = (max (((var_1_46 + var_1_38) + last_1_var_1_60) , (last_1_var_1_49 + var_1_36)));
		}
	}


	// From: Req9Batch171Amount250
	if (var_1_4 >= (var_1_2 * last_1_var_1_25)) {
		var_1_32 = (var_1_31 - var_1_27);
	} else {
		if (var_1_24 < ((last_1_var_1_22 - 32) + var_1_7)) {
			var_1_32 = (max (var_1_26 , var_1_2));
		}
	}


	// From: Req8Batch171Amount250
	unsigned char stepLocal_2 = var_1_14;
	if (stepLocal_2 && var_1_15) {
		if (var_1_5 <= (- var_1_32)) {
			if (var_1_5 == (- 4.25)) {
				var_1_25 = (((var_1_26 + var_1_27) + var_1_28) - ((var_1_29 + var_1_30) - var_1_31));
			} else {
				var_1_25 = 255.5;
			}
		} else {
			var_1_25 = 49.6;
		}
	} else {
		var_1_25 = var_1_28;
	}


	// From: Req6Batch171Amount250
	if (var_1_12 >= (last_1_var_1_44 * last_1_var_1_58)) {
		var_1_22 = (abs (last_1_var_1_44 + var_1_17));
	}


	// From: Req26Batch171Amount250
	unsigned short int stepLocal_11 = var_1_22;
	if (stepLocal_11 > var_1_18) {
		var_1_62 = var_1_14;
	} else {
		var_1_62 = ((var_1_32 <= (var_1_2 / 255.9)) || (var_1_10 || var_1_63));
	}


	// From: Req1Batch171Amount250
	var_1_1 = (var_1_2 + (4.5 - 128.8));


	// From: Req2Batch171Amount250
	if (var_1_2 == (var_1_25 / var_1_4)) {
		if ((var_1_5 - var_1_6) <= var_1_2) {
			var_1_3 = (var_1_7 - 16);
		} else {
			var_1_3 = (max (var_1_7 , var_1_8));
		}
	}


	// From: Req3Batch171Amount250
	if (var_1_6 > var_1_2) {
		var_1_9 = (! var_1_10);
	} else {
		if (-100 != (var_1_7 / var_1_12)) {
			var_1_9 = var_1_13;
		} else {
			var_1_9 = (var_1_13 || (var_1_14 || var_1_15));
		}
	}


	// From: Req4Batch171Amount250
	if (! (var_1_13 && var_1_10)) {
		if ((var_1_5 * var_1_1) != (var_1_4 * (max (var_1_2 , var_1_6)))) {
			var_1_16 = (max (var_1_17 , ((abs (var_1_18)) + 2)));
		}
	}


	// From: Req10Batch171Amount250
	if (var_1_15) {
		if (var_1_7 < var_1_12) {
			var_1_34 = (var_1_17 + var_1_18);
		}
	}


	// From: Req12Batch171Amount250
	if (! var_1_15) {
		var_1_40 = (min (var_1_39 , var_1_8));
	} else {
		var_1_40 = (abs (var_1_39));
	}


	// From: Req17Batch171Amount250
	if (var_1_4 <= var_1_1) {
		var_1_49 = (max ((var_1_50 - 10) , var_1_34));
	}


	// From: Req20Batch171Amount250
	var_1_55 = (max (var_1_26 , var_1_29));


	// From: Req22Batch171Amount250
	var_1_57 = var_1_7;


	// From: Req24Batch171Amount250
	if (var_1_13) {
		var_1_60 = last_1_var_1_60;
	}


	// From: Req27Batch171Amount250
	var_1_64 = -8;


	// From: Req29Batch171Amount250
	var_1_66 = var_1_39;


	// From: Req11Batch171Amount250
	if (var_1_5 >= (var_1_30 - (min (var_1_6 , var_1_31)))) {
		if (var_1_62 || var_1_10) {
			var_1_35 = ((var_1_36 - var_1_37) - (var_1_38 - var_1_39));
		}
	}


	// From: Req16Batch171Amount250
	if (var_1_2 < var_1_1) {
		var_1_47 = (min ((var_1_17 + var_1_18) , ((min (var_1_22 , var_1_48)) + var_1_22)));
	}


	// From: Req25Batch171Amount250
	if (var_1_13) {
		var_1_61 = var_1_66;
	} else {
		var_1_61 = var_1_48;
	}


	// From: Req28Batch171Amount250
	var_1_65 = var_1_47;


	// From: Req13Batch171Amount250
	unsigned char stepLocal_4 = ! var_1_13;
	unsigned short int stepLocal_3 = var_1_34;
	if (stepLocal_4 && (var_1_34 <= var_1_37)) {
		var_1_41 = (var_1_42 - (abs (var_1_38)));
	} else {
		if (var_1_24 != stepLocal_3) {
			var_1_41 = (max ((var_1_35 + var_1_65) , var_1_11));
		} else {
			if ((var_1_4 / var_1_30) >= (var_1_31 - (var_1_28 + var_1_29))) {
				var_1_41 = ((min (var_1_35 , (var_1_17 + 128u))) + (abs (var_1_24)));
			} else {
				var_1_41 = var_1_35;
			}
		}
	}


	// From: Req14Batch171Amount250
	unsigned short int stepLocal_7 = var_1_65;
	unsigned char stepLocal_6 = var_1_17;
	unsigned long int stepLocal_5 = var_1_41 - (var_1_33 - var_1_37);
	if (stepLocal_7 < var_1_57) {
		var_1_43 = ((! var_1_10) || var_1_14);
	} else {
		if (stepLocal_6 < var_1_11) {
			if (((var_1_27 + var_1_31) - (min (var_1_5 , var_1_26))) > var_1_6) {
				if (var_1_24 <= stepLocal_5) {
					var_1_43 = (var_1_15 || var_1_14);
				} else {
					var_1_43 = 0;
				}
			}
		} else {
			var_1_43 = ((var_1_15 || var_1_14) || var_1_13);
		}
	}


	// From: Req19Batch171Amount250
	unsigned long int stepLocal_10 = var_1_61;
	if (var_1_11 < stepLocal_10) {
		var_1_53 = (var_1_31 - var_1_30);
	}


	// From: Req23Batch171Amount250
	if (var_1_44 > var_1_40) {
		if (var_1_43) {
			var_1_58 = var_1_17;
		} else {
			if ((var_1_66 >= var_1_61) && (var_1_18 != var_1_39)) {
				var_1_58 = var_1_37;
			} else {
				var_1_58 = var_1_57;
			}
		}
	}


	// From: Req7Batch171Amount250
	signed long int stepLocal_1 = (min (var_1_65 , var_1_11)) - (var_1_17 + var_1_18);
	if ((var_1_7 - (var_1_24 - var_1_58)) < stepLocal_1) {
		if (! (var_1_14 || var_1_10)) {
			var_1_23 = (var_1_15 && (! var_1_10));
		} else {
			var_1_23 = (! var_1_10);
		}
	}


	// From: Req5Batch171Amount250
	signed long int stepLocal_0 = var_1_11 | var_1_18;
	if (200.75 < var_1_53) {
		if (stepLocal_0 <= 16) {
			var_1_19 = (min ((max (var_1_8 , var_1_7)) , (min (-32 , var_1_21))));
		}
	}


	// From: Req18Batch171Amount250
	if (var_1_53 < (var_1_28 * var_1_53)) {
		var_1_51 = (var_1_37 + 64);
	} else {
		var_1_51 = (var_1_18 + (var_1_38 - var_1_52));
	}


	// From: Req21Batch171Amount250
	if (var_1_66 != last_1_var_1_56) {
		if ((max (var_1_2 , (min (var_1_27 , var_1_1)))) <= var_1_32) {
			var_1_56 = var_1_66;
		} else {
			if ((var_1_49 / var_1_12) != var_1_7) {
				var_1_56 = (min (var_1_18 , (max (var_1_37 , last_1_var_1_56))));
			} else {
				var_1_56 = var_1_8;
			}
		}
	} else {
		if (var_1_32 > (var_1_27 - (8.342656757373431E18 - var_1_29))) {
			var_1_56 = (max (var_1_51 , (max (var_1_7 , (var_1_39 - var_1_52)))));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -461168.6018427383000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 2305843.009213691400e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 2305843.009213691400e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 1073741823);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 190);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 3221225470);
	assume_abort_if_not(var_1_45 <= 4294967294);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1073741824);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 32767);
	assume_abort_if_not(var_1_50 <= 65534);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 63);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_22 = var_1_22;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
}

int property(void) {
	return ((((((((((((((((((((((((((((var_1_1 == ((double) (var_1_2 + (4.5 - 128.8)))) && ((var_1_2 == (var_1_25 / var_1_4)) ? (((var_1_5 - var_1_6) <= var_1_2) ? (var_1_3 == ((signed char) (var_1_7 - 16))) : (var_1_3 == ((signed char) (max (var_1_7 , var_1_8))))) : 1)) && ((var_1_6 > var_1_2) ? (var_1_9 == ((unsigned char) (! var_1_10))) : ((-100 != (var_1_7 / var_1_12)) ? (var_1_9 == ((unsigned char) var_1_13)) : (var_1_9 == ((unsigned char) (var_1_13 || (var_1_14 || var_1_15))))))) && ((! (var_1_13 && var_1_10)) ? (((var_1_5 * var_1_1) != (var_1_4 * (max (var_1_2 , var_1_6)))) ? (var_1_16 == ((unsigned char) (max (var_1_17 , ((abs (var_1_18)) + 2))))) : 1) : 1)) && ((200.75 < var_1_53) ? (((var_1_11 | var_1_18) <= 16) ? (var_1_19 == ((signed char) (min ((max (var_1_8 , var_1_7)) , (min (-32 , var_1_21)))))) : 1) : 1)) && ((var_1_12 >= (last_1_var_1_44 * last_1_var_1_58)) ? (var_1_22 == ((unsigned short int) (abs (last_1_var_1_44 + var_1_17)))) : 1)) && (((var_1_7 - (var_1_24 - var_1_58)) < ((min (var_1_65 , var_1_11)) - (var_1_17 + var_1_18))) ? ((! (var_1_14 || var_1_10)) ? (var_1_23 == ((unsigned char) (var_1_15 && (! var_1_10)))) : (var_1_23 == ((unsigned char) (! var_1_10)))) : 1)) && ((var_1_14 && var_1_15) ? ((var_1_5 <= (- var_1_32)) ? ((var_1_5 == (- 4.25)) ? (var_1_25 == ((double) (((var_1_26 + var_1_27) + var_1_28) - ((var_1_29 + var_1_30) - var_1_31)))) : (var_1_25 == ((double) 255.5))) : (var_1_25 == ((double) 49.6))) : (var_1_25 == ((double) var_1_28)))) && ((var_1_4 >= (var_1_2 * last_1_var_1_25)) ? (var_1_32 == ((double) (var_1_31 - var_1_27))) : ((var_1_24 < ((last_1_var_1_22 - 32) + var_1_7)) ? (var_1_32 == ((double) (max (var_1_26 , var_1_2)))) : 1))) && (var_1_15 ? ((var_1_7 < var_1_12) ? (var_1_34 == ((unsigned short int) (var_1_17 + var_1_18))) : 1) : 1)) && ((var_1_5 >= (var_1_30 - (min (var_1_6 , var_1_31)))) ? ((var_1_62 || var_1_10) ? (var_1_35 == ((unsigned char) ((var_1_36 - var_1_37) - (var_1_38 - var_1_39)))) : 1) : 1)) && ((! var_1_15) ? (var_1_40 == ((signed char) (min (var_1_39 , var_1_8)))) : (var_1_40 == ((signed char) (abs (var_1_39)))))) && (((! var_1_13) && (var_1_34 <= var_1_37)) ? (var_1_41 == ((unsigned long int) (var_1_42 - (abs (var_1_38))))) : ((var_1_24 != var_1_34) ? (var_1_41 == ((unsigned long int) (max ((var_1_35 + var_1_65) , var_1_11)))) : (((var_1_4 / var_1_30) >= (var_1_31 - (var_1_28 + var_1_29))) ? (var_1_41 == ((unsigned long int) ((min (var_1_35 , (var_1_17 + 128u))) + (abs (var_1_24))))) : (var_1_41 == ((unsigned long int) var_1_35)))))) && ((var_1_65 < var_1_57) ? (var_1_43 == ((unsigned char) ((! var_1_10) || var_1_14))) : ((var_1_17 < var_1_11) ? ((((var_1_27 + var_1_31) - (min (var_1_5 , var_1_26))) > var_1_6) ? ((var_1_24 <= (var_1_41 - (var_1_33 - var_1_37))) ? (var_1_43 == ((unsigned char) (var_1_15 || var_1_14))) : (var_1_43 == ((unsigned char) 0))) : 1) : (var_1_43 == ((unsigned char) ((var_1_15 || var_1_14) || var_1_13)))))) && (((- var_1_24) < (min (var_1_36 , (last_1_var_1_49 / var_1_38)))) ? (var_1_44 == ((unsigned long int) ((var_1_45 - var_1_39) - last_1_var_1_44))) : ((last_1_var_1_23 || var_1_14) ? (var_1_44 == ((unsigned long int) (max (((var_1_46 + var_1_38) + last_1_var_1_60) , (last_1_var_1_49 + var_1_36))))) : 1))) && ((var_1_2 < var_1_1) ? (var_1_47 == ((unsigned long int) (min ((var_1_17 + var_1_18) , ((min (var_1_22 , var_1_48)) + var_1_22))))) : 1)) && ((var_1_4 <= var_1_1) ? (var_1_49 == ((unsigned short int) (max ((var_1_50 - 10) , var_1_34)))) : 1)) && ((var_1_53 < (var_1_28 * var_1_53)) ? (var_1_51 == ((unsigned char) (var_1_37 + 64))) : (var_1_51 == ((unsigned char) (var_1_18 + (var_1_38 - var_1_52)))))) && ((var_1_11 < var_1_61) ? (var_1_53 == ((double) (var_1_31 - var_1_30))) : 1)) && (var_1_55 == ((float) (max (var_1_26 , var_1_29))))) && ((var_1_66 != last_1_var_1_56) ? (((max (var_1_2 , (min (var_1_27 , var_1_1)))) <= var_1_32) ? (var_1_56 == ((signed long int) var_1_66)) : (((var_1_49 / var_1_12) != var_1_7) ? (var_1_56 == ((signed long int) (min (var_1_18 , (max (var_1_37 , last_1_var_1_56)))))) : (var_1_56 == ((signed long int) var_1_8)))) : ((var_1_32 > (var_1_27 - (8.342656757373431E18 - var_1_29))) ? (var_1_56 == ((signed long int) (max (var_1_51 , (max (var_1_7 , (var_1_39 - var_1_52))))))) : 1))) && (var_1_57 == ((signed char) var_1_7))) && ((var_1_44 > var_1_40) ? (var_1_43 ? (var_1_58 == ((signed short int) var_1_17)) : (((var_1_66 >= var_1_61) && (var_1_18 != var_1_39)) ? (var_1_58 == ((signed short int) var_1_37)) : (var_1_58 == ((signed short int) var_1_57)))) : 1)) && (var_1_13 ? (var_1_60 == ((unsigned long int) last_1_var_1_60)) : 1)) && (var_1_13 ? (var_1_61 == ((unsigned long int) var_1_66)) : (var_1_61 == ((unsigned long int) var_1_48)))) && ((var_1_22 > var_1_18) ? (var_1_62 == ((unsigned char) var_1_14)) : (var_1_62 == ((unsigned char) ((var_1_32 <= (var_1_2 / 255.9)) || (var_1_10 || var_1_63)))))) && (var_1_64 == ((signed char) -8))) && (var_1_65 == ((unsigned short int) var_1_47))) && (var_1_66 == ((unsigned long int) var_1_39))
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

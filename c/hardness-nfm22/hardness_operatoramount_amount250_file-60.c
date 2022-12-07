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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch60Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 128;
signed short int var_1_8 = 28520;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 1;
double var_1_14 = 255.25;
float var_1_15 = 64.75;
double var_1_16 = 128.25;
double var_1_17 = 0.0;
double var_1_18 = 256.375;
double var_1_19 = 15.8;
double var_1_20 = 99.65;
double var_1_21 = 0.0;
double var_1_22 = 8.75;
float var_1_23 = 10.2;
float var_1_24 = 9.25;
float var_1_25 = 499.6;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed char var_1_29 = -16;
signed char var_1_30 = -5;
signed char var_1_31 = 5;
double var_1_32 = 7.5;
unsigned short int var_1_33 = 8;
unsigned short int var_1_34 = 59952;
unsigned short int var_1_35 = 42916;
unsigned short int var_1_36 = 4;
float var_1_37 = 255.5;
float var_1_38 = 127.5;
float var_1_39 = 5.8;
float var_1_40 = 0.0;
float var_1_41 = 10.5;
float var_1_42 = 499.375;
float var_1_43 = 4.1;
double var_1_44 = 15.1;
unsigned short int var_1_45 = 21516;
double var_1_46 = 99999.5;
float var_1_47 = 7.25;
unsigned long int var_1_48 = 32;
unsigned long int var_1_49 = 1550005798;
unsigned char var_1_50 = 10;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 16;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 100;
unsigned char var_1_56 = 16;
unsigned long int var_1_57 = 16;
unsigned long int var_1_58 = 4162651551;
unsigned long int var_1_59 = 3674537755;
unsigned long int var_1_60 = 4218243826;
signed short int var_1_61 = 64;
signed short int var_1_62 = 26722;
signed short int var_1_63 = 10000;
unsigned char var_1_64 = 0;
float var_1_65 = 10.25;
unsigned char var_1_66 = 8;
unsigned char var_1_67 = 50;
signed short int var_1_68 = -8;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
signed long int var_1_73 = 5;
double var_1_74 = 64.7;

// Calibration values

// Last'ed variables
float last_1_var_1_23 = 10.2;
unsigned char last_1_var_1_50 = 10;
signed short int last_1_var_1_61 = 64;
unsigned char last_1_var_1_64 = 0;
signed short int last_1_var_1_68 = -8;
unsigned char last_1_var_1_70 = 0;
unsigned char last_1_var_1_72 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req17Batch60Amount250
	unsigned char stepLocal_11 = var_1_46 >= var_1_24;
	unsigned short int stepLocal_10 = var_1_34;
	if (last_1_var_1_64) {
		if (stepLocal_11 && last_1_var_1_70) {
			var_1_57 = (var_1_58 - var_1_12);
		}
	} else {
		if ((last_1_var_1_61 / var_1_51) == stepLocal_10) {
			var_1_57 = ((max (var_1_58 , var_1_59)) - (abs (last_1_var_1_61)));
		} else {
			var_1_57 = (var_1_60 - (var_1_49 - last_1_var_1_72));
		}
	}


	// From: Req19Batch60Amount250
	var_1_64 = ((var_1_55 <= var_1_57) && var_1_27);


	// From: Req15Batch60Amount250
	if (var_1_22 <= (last_1_var_1_23 + (last_1_var_1_23 * var_1_17))) {
		var_1_50 = ((max (var_1_51 , 128)) - var_1_31);
	}


	// From: Req2Batch60Amount250
	signed long int stepLocal_1 = (32 % var_1_12) * last_1_var_1_72;
	if (stepLocal_1 >= (last_1_var_1_68 + (max (var_1_8 , last_1_var_1_50)))) {
		var_1_11 = var_1_13;
	}


	// From: Req22Batch60Amount250
	if (var_1_11) {
		var_1_68 = var_1_31;
	} else {
		var_1_68 = 64;
	}


	// From: Req9Batch60Amount250
	signed long int stepLocal_5 = var_1_30 / var_1_8;
	if (var_1_16 >= var_1_19) {
		if ((-10 & var_1_12) < stepLocal_5) {
			var_1_33 = ((max (var_1_34 , var_1_35)) - 128);
		}
	} else {
		var_1_33 = var_1_12;
	}


	// From: Req20Batch60Amount250
	unsigned short int stepLocal_12 = var_1_33;
	if (stepLocal_12 >= (var_1_12 * var_1_49)) {
		var_1_65 = (abs (var_1_39));
	}


	// From: Req21Batch60Amount250
	unsigned long int stepLocal_13 = var_1_59;
	if (var_1_53 > stepLocal_13) {
		if (var_1_11) {
			var_1_66 = ((abs (var_1_56)) + (var_1_31 + (abs (1))));
		}
	} else {
		if (var_1_64) {
			var_1_66 = var_1_67;
		} else {
			var_1_66 = var_1_53;
		}
	}


	// From: Req23Batch60Amount250
	if (var_1_28) {
		var_1_70 = (! var_1_13);
	} else {
		var_1_70 = (var_1_27 || var_1_71);
	}


	// From: Req24Batch60Amount250
	var_1_72 = var_1_67;


	// From: Req25Batch60Amount250
	var_1_73 = var_1_55;


	// From: Req26Batch60Amount250
	var_1_74 = var_1_43;


	// From: Req11Batch60Amount250
	if ((max ((var_1_74 + var_1_22) , var_1_19)) > (var_1_24 / var_1_17)) {
		if ((var_1_11 && var_1_28) || var_1_27) {
			var_1_37 = var_1_25;
		} else {
			var_1_37 = ((var_1_38 - var_1_39) + ((var_1_40 - var_1_41) - (min (var_1_42 , var_1_43))));
		}
	}


	// From: Req16Batch60Amount250
	if (! (var_1_74 < var_1_39)) {
		if ((var_1_22 > (var_1_37 / var_1_17)) && (var_1_25 >= var_1_16)) {
			var_1_52 = (max ((max (var_1_51 , var_1_31)) , var_1_53));
		} else {
			var_1_52 = ((var_1_54 + (var_1_55 - var_1_56)) - var_1_31);
		}
	} else {
		if ((var_1_49 * (abs (var_1_51))) > (- var_1_8)) {
			var_1_52 = (var_1_51 - var_1_56);
		} else {
			var_1_52 = (16 + var_1_31);
		}
	}


	// From: Req7Batch60Amount250
	if (var_1_21 < (var_1_65 / 8.5)) {
		var_1_29 = (var_1_30 + (var_1_31 - 1));
	} else {
		if (var_1_31 < var_1_52) {
			var_1_29 = (abs (var_1_30));
		}
	}


	// From: Req10Batch60Amount250
	var_1_36 = ((min ((max (var_1_34 , 55441)) , var_1_35)) - (var_1_72 + var_1_12));


	// From: Req18Batch60Amount250
	var_1_61 = (((var_1_62 - var_1_54) - (var_1_63 - var_1_53)) - (var_1_72 + var_1_56));


	// From: Req6Batch60Amount250
	if (! ((32 + var_1_50) <= (var_1_52 / var_1_12))) {
		var_1_26 = 0;
	} else {
		var_1_26 = (var_1_27 || (var_1_64 && var_1_28));
	}


	// From: Req8Batch60Amount250
	unsigned char stepLocal_4 = var_1_26;
	if (var_1_27 && stepLocal_4) {
		var_1_32 = var_1_20;
	}


	// From: Req13Batch60Amount250
	if (var_1_32 > var_1_25) {
		if (var_1_41 <= (min (var_1_43 , (- var_1_15)))) {
			var_1_47 = (max (var_1_39 , (var_1_38 - var_1_40)));
		} else {
			var_1_47 = (abs (63.4f + var_1_19));
		}
	} else {
		var_1_47 = (max ((var_1_20 + var_1_22) , (var_1_19 + var_1_39)));
	}


	// From: Req4Batch60Amount250
	if ((var_1_72 % var_1_12) >= var_1_72) {
		var_1_18 = (var_1_19 + var_1_20);
	} else {
		if (! var_1_13) {
			if (128.7 <= var_1_32) {
				var_1_18 = (max (var_1_17 , (var_1_20 + var_1_19)));
			} else {
				var_1_18 = ((var_1_21 + var_1_22) + (abs (var_1_20)));
			}
		} else {
			var_1_18 = 200.125;
		}
	}


	// From: Req5Batch60Amount250
	if (var_1_64) {
		if (var_1_18 >= var_1_22) {
			var_1_23 = (var_1_17 - var_1_24);
		}
	} else {
		if ((- var_1_65) < var_1_18) {
			var_1_23 = ((max (var_1_25 , var_1_17)) - var_1_24);
		} else {
			var_1_23 = (var_1_22 + (max (var_1_21 , var_1_19)));
		}
	}


	// From: Req1Batch60Amount250
	unsigned char stepLocal_0 = var_1_26;
	if (var_1_70) {
		if (stepLocal_0 && (var_1_18 <= (max (var_1_37 , var_1_23)))) {
			if (var_1_18 >= var_1_23) {
				var_1_1 = (var_1_50 - (var_1_8 - var_1_66));
			} else {
				var_1_1 = ((max (var_1_66 , var_1_66)) + -1);
			}
		} else {
			var_1_1 = (var_1_66 + var_1_66);
		}
	}


	// From: Req14Batch60Amount250
	signed char stepLocal_9 = var_1_30;
	if (var_1_19 >= var_1_16) {
		if (stepLocal_9 < var_1_8) {
			if (var_1_24 != (max (var_1_17 , (var_1_23 * var_1_18)))) {
				var_1_48 = (2u + (min ((max (16u , var_1_35)) , 256u)));
			}
		}
	} else {
		var_1_48 = (3310061384u - (var_1_49 - var_1_12));
	}


	// From: Req12Batch60Amount250
	unsigned short int stepLocal_8 = var_1_34;
	unsigned short int stepLocal_7 = var_1_34;
	signed long int stepLocal_6 = var_1_45 / 10;
	if (var_1_35 <= stepLocal_7) {
		if (((var_1_8 + var_1_45) - (max (var_1_12 , var_1_31))) == stepLocal_8) {
			var_1_44 = (var_1_41 + var_1_19);
		} else {
			if ((var_1_12 + var_1_48) < stepLocal_6) {
				var_1_44 = var_1_46;
			}
		}
	} else {
		var_1_44 = ((var_1_43 + var_1_39) - var_1_42);
	}


	// From: Req3Batch60Amount250
	unsigned char stepLocal_3 = var_1_12;
	signed short int stepLocal_2 = var_1_8;
	if (stepLocal_3 < var_1_50) {
		if (var_1_65 >= ((var_1_44 + var_1_65) / var_1_15)) {
			var_1_14 = var_1_16;
		} else {
			if (stepLocal_2 == (abs (var_1_52))) {
				var_1_14 = var_1_16;
			}
		}
	} else {
		var_1_14 = ((var_1_17 - 9.75) - 31.25);
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 255);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 4611686.018427382800e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -63);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 2305843.009213691390e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 16384);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854765600e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854765600e+12F && var_1_46 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 127);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 63);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 95);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 31);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 2147483647);
	assume_abort_if_not(var_1_58 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 2147483647);
	assume_abort_if_not(var_1_60 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_62 >= 24574);
	assume_abort_if_not(var_1_62 <= 32766);
	var_1_63 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_63 >= 8191);
	assume_abort_if_not(var_1_63 <= 16383);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 254);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 0);
}



void updateLastVariables() {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_72 = var_1_72;
}

int property() {
	return (((((((((((((((((((((((((var_1_70 ? ((var_1_26 && (var_1_18 <= (max (var_1_37 , var_1_23)))) ? ((var_1_18 >= var_1_23) ? (var_1_1 == ((signed short int) (var_1_50 - (var_1_8 - var_1_66)))) : (var_1_1 == ((signed short int) ((max (var_1_66 , var_1_66)) + -1)))) : (var_1_1 == ((signed short int) (var_1_66 + var_1_66)))) : 1) && ((((32 % var_1_12) * last_1_var_1_72) >= (last_1_var_1_68 + (max (var_1_8 , last_1_var_1_50)))) ? (var_1_11 == ((unsigned char) var_1_13)) : 1)) && ((var_1_12 < var_1_50) ? ((var_1_65 >= ((var_1_44 + var_1_65) / var_1_15)) ? (var_1_14 == ((double) var_1_16)) : ((var_1_8 == (abs (var_1_52))) ? (var_1_14 == ((double) var_1_16)) : 1)) : (var_1_14 == ((double) ((var_1_17 - 9.75) - 31.25))))) && (((var_1_72 % var_1_12) >= var_1_72) ? (var_1_18 == ((double) (var_1_19 + var_1_20))) : ((! var_1_13) ? ((128.7 <= var_1_32) ? (var_1_18 == ((double) (max (var_1_17 , (var_1_20 + var_1_19))))) : (var_1_18 == ((double) ((var_1_21 + var_1_22) + (abs (var_1_20)))))) : (var_1_18 == ((double) 200.125))))) && (var_1_64 ? ((var_1_18 >= var_1_22) ? (var_1_23 == ((float) (var_1_17 - var_1_24))) : 1) : (((- var_1_65) < var_1_18) ? (var_1_23 == ((float) ((max (var_1_25 , var_1_17)) - var_1_24))) : (var_1_23 == ((float) (var_1_22 + (max (var_1_21 , var_1_19)))))))) && ((! ((32 + var_1_50) <= (var_1_52 / var_1_12))) ? (var_1_26 == ((unsigned char) 0)) : (var_1_26 == ((unsigned char) (var_1_27 || (var_1_64 && var_1_28)))))) && ((var_1_21 < (var_1_65 / 8.5)) ? (var_1_29 == ((signed char) (var_1_30 + (var_1_31 - 1)))) : ((var_1_31 < var_1_52) ? (var_1_29 == ((signed char) (abs (var_1_30)))) : 1))) && ((var_1_27 && var_1_26) ? (var_1_32 == ((double) var_1_20)) : 1)) && ((var_1_16 >= var_1_19) ? (((-10 & var_1_12) < (var_1_30 / var_1_8)) ? (var_1_33 == ((unsigned short int) ((max (var_1_34 , var_1_35)) - 128))) : 1) : (var_1_33 == ((unsigned short int) var_1_12)))) && (var_1_36 == ((unsigned short int) ((min ((max (var_1_34 , 55441)) , var_1_35)) - (var_1_72 + var_1_12))))) && (((max ((var_1_74 + var_1_22) , var_1_19)) > (var_1_24 / var_1_17)) ? (((var_1_11 && var_1_28) || var_1_27) ? (var_1_37 == ((float) var_1_25)) : (var_1_37 == ((float) ((var_1_38 - var_1_39) + ((var_1_40 - var_1_41) - (min (var_1_42 , var_1_43))))))) : 1)) && ((var_1_35 <= var_1_34) ? ((((var_1_8 + var_1_45) - (max (var_1_12 , var_1_31))) == var_1_34) ? (var_1_44 == ((double) (var_1_41 + var_1_19))) : (((var_1_12 + var_1_48) < (var_1_45 / 10)) ? (var_1_44 == ((double) var_1_46)) : 1)) : (var_1_44 == ((double) ((var_1_43 + var_1_39) - var_1_42))))) && ((var_1_32 > var_1_25) ? ((var_1_41 <= (min (var_1_43 , (- var_1_15)))) ? (var_1_47 == ((float) (max (var_1_39 , (var_1_38 - var_1_40))))) : (var_1_47 == ((float) (abs (63.4f + var_1_19))))) : (var_1_47 == ((float) (max ((var_1_20 + var_1_22) , (var_1_19 + var_1_39))))))) && ((var_1_19 >= var_1_16) ? ((var_1_30 < var_1_8) ? ((var_1_24 != (max (var_1_17 , (var_1_23 * var_1_18)))) ? (var_1_48 == ((unsigned long int) (2u + (min ((max (16u , var_1_35)) , 256u))))) : 1) : 1) : (var_1_48 == ((unsigned long int) (3310061384u - (var_1_49 - var_1_12)))))) && ((var_1_22 <= (last_1_var_1_23 + (last_1_var_1_23 * var_1_17))) ? (var_1_50 == ((unsigned char) ((max (var_1_51 , 128)) - var_1_31))) : 1)) && ((! (var_1_74 < var_1_39)) ? (((var_1_22 > (var_1_37 / var_1_17)) && (var_1_25 >= var_1_16)) ? (var_1_52 == ((unsigned char) (max ((max (var_1_51 , var_1_31)) , var_1_53)))) : (var_1_52 == ((unsigned char) ((var_1_54 + (var_1_55 - var_1_56)) - var_1_31)))) : (((var_1_49 * (abs (var_1_51))) > (- var_1_8)) ? (var_1_52 == ((unsigned char) (var_1_51 - var_1_56))) : (var_1_52 == ((unsigned char) (16 + var_1_31)))))) && (last_1_var_1_64 ? (((var_1_46 >= var_1_24) && last_1_var_1_70) ? (var_1_57 == ((unsigned long int) (var_1_58 - var_1_12))) : 1) : (((last_1_var_1_61 / var_1_51) == var_1_34) ? (var_1_57 == ((unsigned long int) ((max (var_1_58 , var_1_59)) - (abs (last_1_var_1_61))))) : (var_1_57 == ((unsigned long int) (var_1_60 - (var_1_49 - last_1_var_1_72))))))) && (var_1_61 == ((signed short int) (((var_1_62 - var_1_54) - (var_1_63 - var_1_53)) - (var_1_72 + var_1_56))))) && (var_1_64 == ((unsigned char) ((var_1_55 <= var_1_57) && var_1_27)))) && ((var_1_33 >= (var_1_12 * var_1_49)) ? (var_1_65 == ((float) (abs (var_1_39)))) : 1)) && ((var_1_53 > var_1_59) ? (var_1_11 ? (var_1_66 == ((unsigned char) ((abs (var_1_56)) + (var_1_31 + (abs (1)))))) : 1) : (var_1_64 ? (var_1_66 == ((unsigned char) var_1_67)) : (var_1_66 == ((unsigned char) var_1_53))))) && (var_1_11 ? (var_1_68 == ((signed short int) var_1_31)) : (var_1_68 == ((signed short int) 64)))) && (var_1_28 ? (var_1_70 == ((unsigned char) (! var_1_13))) : (var_1_70 == ((unsigned char) (var_1_27 || var_1_71))))) && (var_1_72 == ((unsigned char) var_1_67))) && (var_1_73 == ((signed long int) var_1_55))) && (var_1_74 == ((double) var_1_43))
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

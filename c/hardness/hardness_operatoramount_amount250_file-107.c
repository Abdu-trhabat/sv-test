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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = -1;
signed long int var_1_2 = 2;
signed long int var_1_3 = 4;
signed short int var_1_6 = 4;
signed short int var_1_7 = 10;
signed short int var_1_8 = 200;
signed short int var_1_9 = -4;
unsigned short int var_1_10 = 5;
signed long int var_1_11 = -64;
signed short int var_1_12 = 2;
unsigned long int var_1_13 = 4;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 2;
signed short int var_1_18 = 17608;
unsigned char var_1_19 = 64;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 4;
double var_1_22 = 255.4;
double var_1_23 = 255.45;
signed char var_1_24 = 4;
float var_1_25 = 999999999999.836;
unsigned char var_1_26 = 128;
float var_1_27 = 1.75;
float var_1_28 = 9.4;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 16;
unsigned char var_1_32 = 236;
signed long int var_1_33 = -128;
unsigned long int var_1_34 = 3534531055;
unsigned long int var_1_35 = 4042435609;
unsigned long int var_1_36 = 5;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
float var_1_40 = 64.36;
float var_1_41 = 4.8;
double var_1_42 = 9.25;
double var_1_43 = 10000000.6;
double var_1_44 = 1.8;
double var_1_46 = 128.8;
double var_1_47 = 255.74;
double var_1_48 = 5.4;
double var_1_49 = 99.4;
double var_1_50 = 16.125;
double var_1_51 = 9999.03;
unsigned long int var_1_52 = 64;
signed short int var_1_53 = 4;
signed char var_1_54 = -16;
signed char var_1_55 = 0;
signed char var_1_56 = 2;
signed char var_1_57 = 64;
double var_1_58 = 128.2;
double var_1_59 = 2.625;
signed char var_1_60 = 25;
signed char var_1_61 = -1;
unsigned char var_1_62 = 64;
signed short int var_1_63 = 1;
double var_1_64 = 1000000.5;
double var_1_65 = 0.15000000000000002;
unsigned long int var_1_66 = 64;
unsigned long int var_1_67 = 1179562140;
signed short int var_1_68 = 0;
float var_1_69 = 256.6;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_33 = -128;
double last_1_var_1_42 = 9.25;
signed short int last_1_var_1_68 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch107Amount250
	if (last_1_var_1_33 != last_1_var_1_68) {
		var_1_36 = (2272788701u - var_1_10);
	}


	// From: Req3Batch107Amount250
	unsigned char stepLocal_1 = var_1_14;
	signed long int stepLocal_0 = min (var_1_12 , var_1_10);
	if (stepLocal_0 >= (abs (var_1_6))) {
		if (stepLocal_1 && (var_1_15 || var_1_16)) {
			var_1_13 = (max ((max ((var_1_12 + 2u) , var_1_8)) , var_1_10));
		} else {
			var_1_13 = (min (var_1_10 , (max (var_1_3 , var_1_12))));
		}
	} else {
		var_1_13 = (2740616589u - var_1_10);
	}


	// From: Req4Batch107Amount250
	signed long int stepLocal_2 = (var_1_18 - var_1_8) << 5;
	if (var_1_9 <= stepLocal_2) {
		var_1_17 = (abs (var_1_12));
	} else {
		var_1_17 = (min ((200 - var_1_10) , ((var_1_19 + var_1_20) - var_1_12)));
	}


	// From: Req6Batch107Amount250
	var_1_22 = var_1_23;


	// From: Req7Batch107Amount250
	var_1_24 = (var_1_12 + var_1_10);


	// From: Req10Batch107Amount250
	unsigned char stepLocal_7 = var_1_16;
	unsigned char stepLocal_6 = var_1_26;
	if (! var_1_14) {
		if (stepLocal_7 && var_1_15) {
			if (stepLocal_6 < var_1_19) {
				var_1_31 = (((var_1_32 - var_1_12) - (max (var_1_10 , 5))) - var_1_19);
			} else {
				var_1_31 = (max (var_1_32 , var_1_20));
			}
		} else {
			var_1_31 = ((200 - 2) - (min (var_1_20 , (max (var_1_12 , var_1_19)))));
		}
	} else {
		var_1_31 = var_1_30;
	}


	// From: Req11Batch107Amount250
	unsigned long int stepLocal_8 = var_1_34 - var_1_10;
	if (stepLocal_8 == (var_1_35 - var_1_26)) {
		var_1_33 = var_1_20;
	}


	// From: Req16Batch107Amount250
	unsigned char stepLocal_10 = var_1_38;
	if (var_1_39 || stepLocal_10) {
		var_1_52 = (abs (8u + 64u));
	} else {
		var_1_52 = (min ((min (var_1_12 , var_1_18)) , var_1_10));
	}


	// From: Req19Batch107Amount250
	var_1_58 = ((abs (var_1_27)) + var_1_59);


	// From: Req20Batch107Amount250
	var_1_60 = ((1 - var_1_55) + -32);


	// From: Req21Batch107Amount250
	unsigned long int stepLocal_13 = min (var_1_52 , var_1_30);
	if (var_1_49 >= var_1_58) {
		if (stepLocal_13 < var_1_24) {
			var_1_61 = (var_1_12 - (min ((min (var_1_56 , var_1_55)) , var_1_10)));
		} else {
			var_1_61 = ((var_1_10 + var_1_56) - var_1_57);
		}
	}


	// From: Req24Batch107Amount250
	var_1_64 = var_1_65;


	// From: Req26Batch107Amount250
	if (var_1_22 <= (var_1_48 - var_1_69)) {
		var_1_68 = (last_1_var_1_68 - (abs (last_1_var_1_68)));
	} else {
		var_1_68 = var_1_36;
	}


	// From: Req1Batch107Amount250
	if ((var_1_2 - var_1_3) > ((var_1_13 * -256) + var_1_36)) {
		var_1_1 = (max ((var_1_6 - (var_1_7 + var_1_8)) , var_1_9));
	} else {
		if (500 >= (var_1_7 >> var_1_10)) {
			var_1_1 = ((min (var_1_10 , var_1_8)) + (max (var_1_7 , 0)));
		} else {
			if (var_1_6 < 64) {
				var_1_1 = ((32 - var_1_7) + var_1_8);
			}
		}
	}


	// From: Req2Batch107Amount250
	if (((2102649480 - 25) >> (min (var_1_10 , var_1_12))) <= var_1_52) {
		var_1_11 = (var_1_12 + var_1_7);
	}


	// From: Req5Batch107Amount250
	unsigned long int stepLocal_3 = var_1_52;
	if (stepLocal_3 >= (var_1_3 * var_1_18)) {
		var_1_21 = (abs (var_1_20));
	}


	// From: Req8Batch107Amount250
	if ((var_1_26 - var_1_10) < var_1_52) {
		var_1_25 = (var_1_27 + (min ((min (3.45f , 255.8f)) , var_1_28)));
	}


	// From: Req9Batch107Amount250
	signed long int stepLocal_5 = var_1_18 / var_1_19;
	unsigned long int stepLocal_4 = var_1_1 ^ (var_1_19 * var_1_36);
	if (stepLocal_4 <= 4) {
		if ((- var_1_36) > stepLocal_5) {
			var_1_29 = var_1_19;
		}
	} else {
		var_1_29 = (var_1_30 - ((min (var_1_20 , 64)) - (min (var_1_10 , var_1_12))));
	}


	// From: Req13Batch107Amount250
	if ((var_1_30 - (max (var_1_20 , 256))) <= var_1_18) {
		var_1_37 = ((var_1_64 >= var_1_28) && (var_1_16 && (var_1_38 || var_1_39)));
	}


	// From: Req15Batch107Amount250
	signed long int stepLocal_9 = var_1_6 / (max (-64 , var_1_19));
	if (var_1_38) {
		if (var_1_64 >= (var_1_28 + var_1_41)) {
			var_1_42 = (min ((min ((var_1_28 + var_1_27) , var_1_41)) , (var_1_43 - var_1_44)));
		} else {
			if ((min ((var_1_64 + var_1_41) , last_1_var_1_42)) != last_1_var_1_42) {
				var_1_42 = ((max ((var_1_46 + var_1_47) , var_1_44)) - (var_1_48 + var_1_49));
			} else {
				var_1_42 = ((var_1_49 + var_1_47) - (max (var_1_48 , var_1_44)));
			}
		}
	} else {
		if (stepLocal_9 != 500) {
			var_1_42 = (((var_1_50 + var_1_51) + var_1_49) - var_1_48);
		} else {
			var_1_42 = ((min ((9.2 + var_1_48) , 1.1)) - (max (var_1_51 , var_1_50)));
		}
	}


	// From: Req17Batch107Amount250
	signed long int stepLocal_11 = -8;
	if (var_1_18 >= stepLocal_11) {
		if (var_1_39) {
			var_1_53 = var_1_19;
		} else {
			var_1_53 = (-16 + (max (var_1_29 , var_1_32)));
		}
	}


	// From: Req22Batch107Amount250
	signed long int stepLocal_14 = ~ var_1_12;
	if (! var_1_37) {
		if ((- var_1_52) > stepLocal_14) {
			var_1_62 = (var_1_30 - (var_1_57 - 5));
		} else {
			var_1_62 = var_1_30;
		}
	} else {
		var_1_62 = var_1_19;
	}


	// From: Req23Batch107Amount250
	if (var_1_37) {
		var_1_63 = var_1_29;
	}


	// From: Req25Batch107Amount250
	var_1_66 = (min ((var_1_10 + (var_1_67 - var_1_62)) , (abs (16u))));


	// From: Req14Batch107Amount250
	if (var_1_63 < (var_1_30 - var_1_20)) {
		var_1_40 = (var_1_27 + var_1_28);
	} else {
		if ((var_1_19 + var_1_7) >= var_1_33) {
			var_1_40 = (max (9999999.1f , (max (var_1_27 , var_1_23))));
		} else {
			var_1_40 = (var_1_41 - 255.01f);
		}
	}


	// From: Req18Batch107Amount250
	unsigned long int stepLocal_12 = var_1_36;
	if ((var_1_60 + (max (var_1_66 , var_1_36))) > stepLocal_12) {
		if (var_1_37) {
			if ((min ((var_1_47 / 3.5f) , (var_1_22 * var_1_58))) > (var_1_28 + var_1_22)) {
				var_1_54 = (var_1_12 - (max (var_1_10 , (var_1_55 + var_1_56))));
			} else {
				var_1_54 = ((min (var_1_56 , var_1_55)) + var_1_10);
			}
		} else {
			var_1_54 = (var_1_12 - (max ((var_1_57 - var_1_10) , var_1_55)));
		}
	} else {
		var_1_54 = var_1_55;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 14);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 30);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 63);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 64);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 127);
	assume_abort_if_not(var_1_26 <= 255);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 127);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 222);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967295);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967295);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 63);
	assume_abort_if_not(var_1_57 <= 126);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -461168.6018427383000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= -922337.2036854766000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854766000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 1073741823);
	assume_abort_if_not(var_1_67 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854776000e+12F && var_1_69 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_33 = var_1_33;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_68 = var_1_68;
}

int property(void) {
	return (((((((((((((((((((((((((((var_1_2 - var_1_3) > ((var_1_13 * -256) + var_1_36)) ? (var_1_1 == ((signed short int) (max ((var_1_6 - (var_1_7 + var_1_8)) , var_1_9)))) : ((500 >= (var_1_7 >> var_1_10)) ? (var_1_1 == ((signed short int) ((min (var_1_10 , var_1_8)) + (max (var_1_7 , 0))))) : ((var_1_6 < 64) ? (var_1_1 == ((signed short int) ((32 - var_1_7) + var_1_8))) : 1))) && ((((2102649480 - 25) >> (min (var_1_10 , var_1_12))) <= var_1_52) ? (var_1_11 == ((signed long int) (var_1_12 + var_1_7))) : 1)) && (((min (var_1_12 , var_1_10)) >= (abs (var_1_6))) ? ((var_1_14 && (var_1_15 || var_1_16)) ? (var_1_13 == ((unsigned long int) (max ((max ((var_1_12 + 2u) , var_1_8)) , var_1_10)))) : (var_1_13 == ((unsigned long int) (min (var_1_10 , (max (var_1_3 , var_1_12))))))) : (var_1_13 == ((unsigned long int) (2740616589u - var_1_10))))) && ((var_1_9 <= ((var_1_18 - var_1_8) << 5)) ? (var_1_17 == ((unsigned char) (abs (var_1_12)))) : (var_1_17 == ((unsigned char) (min ((200 - var_1_10) , ((var_1_19 + var_1_20) - var_1_12))))))) && ((var_1_52 >= (var_1_3 * var_1_18)) ? (var_1_21 == ((unsigned char) (abs (var_1_20)))) : 1)) && (var_1_22 == ((double) var_1_23))) && (var_1_24 == ((signed char) (var_1_12 + var_1_10)))) && (((var_1_26 - var_1_10) < var_1_52) ? (var_1_25 == ((float) (var_1_27 + (min ((min (3.45f , 255.8f)) , var_1_28))))) : 1)) && (((var_1_1 ^ (var_1_19 * var_1_36)) <= 4) ? (((- var_1_36) > (var_1_18 / var_1_19)) ? (var_1_29 == ((unsigned char) var_1_19)) : 1) : (var_1_29 == ((unsigned char) (var_1_30 - ((min (var_1_20 , 64)) - (min (var_1_10 , var_1_12)))))))) && ((! var_1_14) ? ((var_1_16 && var_1_15) ? ((var_1_26 < var_1_19) ? (var_1_31 == ((unsigned char) (((var_1_32 - var_1_12) - (max (var_1_10 , 5))) - var_1_19))) : (var_1_31 == ((unsigned char) (max (var_1_32 , var_1_20))))) : (var_1_31 == ((unsigned char) ((200 - 2) - (min (var_1_20 , (max (var_1_12 , var_1_19)))))))) : (var_1_31 == ((unsigned char) var_1_30)))) && (((var_1_34 - var_1_10) == (var_1_35 - var_1_26)) ? (var_1_33 == ((signed long int) var_1_20)) : 1)) && ((last_1_var_1_33 != last_1_var_1_68) ? (var_1_36 == ((unsigned long int) (2272788701u - var_1_10))) : 1)) && (((var_1_30 - (max (var_1_20 , 256))) <= var_1_18) ? (var_1_37 == ((unsigned char) ((var_1_64 >= var_1_28) && (var_1_16 && (var_1_38 || var_1_39))))) : 1)) && ((var_1_63 < (var_1_30 - var_1_20)) ? (var_1_40 == ((float) (var_1_27 + var_1_28))) : (((var_1_19 + var_1_7) >= var_1_33) ? (var_1_40 == ((float) (max (9999999.1f , (max (var_1_27 , var_1_23)))))) : (var_1_40 == ((float) (var_1_41 - 255.01f)))))) && (var_1_38 ? ((var_1_64 >= (var_1_28 + var_1_41)) ? (var_1_42 == ((double) (min ((min ((var_1_28 + var_1_27) , var_1_41)) , (var_1_43 - var_1_44))))) : (((min ((var_1_64 + var_1_41) , last_1_var_1_42)) != last_1_var_1_42) ? (var_1_42 == ((double) ((max ((var_1_46 + var_1_47) , var_1_44)) - (var_1_48 + var_1_49)))) : (var_1_42 == ((double) ((var_1_49 + var_1_47) - (max (var_1_48 , var_1_44))))))) : (((var_1_6 / (max (-64 , var_1_19))) != 500) ? (var_1_42 == ((double) (((var_1_50 + var_1_51) + var_1_49) - var_1_48))) : (var_1_42 == ((double) ((min ((9.2 + var_1_48) , 1.1)) - (max (var_1_51 , var_1_50)))))))) && ((var_1_39 || var_1_38) ? (var_1_52 == ((unsigned long int) (abs (8u + 64u)))) : (var_1_52 == ((unsigned long int) (min ((min (var_1_12 , var_1_18)) , var_1_10)))))) && ((var_1_18 >= -8) ? (var_1_39 ? (var_1_53 == ((signed short int) var_1_19)) : (var_1_53 == ((signed short int) (-16 + (max (var_1_29 , var_1_32)))))) : 1)) && (((var_1_60 + (max (var_1_66 , var_1_36))) > var_1_36) ? (var_1_37 ? (((min ((var_1_47 / 3.5f) , (var_1_22 * var_1_58))) > (var_1_28 + var_1_22)) ? (var_1_54 == ((signed char) (var_1_12 - (max (var_1_10 , (var_1_55 + var_1_56)))))) : (var_1_54 == ((signed char) ((min (var_1_56 , var_1_55)) + var_1_10)))) : (var_1_54 == ((signed char) (var_1_12 - (max ((var_1_57 - var_1_10) , var_1_55)))))) : (var_1_54 == ((signed char) var_1_55)))) && (var_1_58 == ((double) ((abs (var_1_27)) + var_1_59)))) && (var_1_60 == ((signed char) ((1 - var_1_55) + -32)))) && ((var_1_49 >= var_1_58) ? (((min (var_1_52 , var_1_30)) < var_1_24) ? (var_1_61 == ((signed char) (var_1_12 - (min ((min (var_1_56 , var_1_55)) , var_1_10))))) : (var_1_61 == ((signed char) ((var_1_10 + var_1_56) - var_1_57)))) : 1)) && ((! var_1_37) ? (((- var_1_52) > (~ var_1_12)) ? (var_1_62 == ((unsigned char) (var_1_30 - (var_1_57 - 5)))) : (var_1_62 == ((unsigned char) var_1_30))) : (var_1_62 == ((unsigned char) var_1_19)))) && (var_1_37 ? (var_1_63 == ((signed short int) var_1_29)) : 1)) && (var_1_64 == ((double) var_1_65))) && (var_1_66 == ((unsigned long int) (min ((var_1_10 + (var_1_67 - var_1_62)) , (abs (16u))))))) && ((var_1_22 <= (var_1_48 - var_1_69)) ? (var_1_68 == ((signed short int) (last_1_var_1_68 - (abs (last_1_var_1_68))))) : (var_1_68 == ((signed short int) var_1_36)))
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

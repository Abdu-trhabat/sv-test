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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch69Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 2;
unsigned short int var_1_3 = 47136;
unsigned long int var_1_6 = 1660677957;
float var_1_9 = 31.6;
float var_1_10 = 2.75;
float var_1_11 = 3.5;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 4;
signed short int var_1_15 = 128;
unsigned char var_1_16 = 10;
double var_1_17 = 1000000000000.75;
double var_1_18 = 4.6;
double var_1_19 = 0.5;
double var_1_20 = 0.25;
double var_1_21 = 31.2;
double var_1_22 = 9.6;
float var_1_23 = 99.75;
signed char var_1_24 = -16;
signed char var_1_25 = -8;
signed char var_1_26 = 16;
signed char var_1_27 = 16;
signed char var_1_28 = 0;
signed long int var_1_29 = 2;
signed long int var_1_31 = 1000000000;
signed char var_1_32 = 2;
double var_1_33 = 8.4;
double var_1_34 = 127.4;
float var_1_35 = 255.75;
unsigned long int var_1_36 = 0;
unsigned long int var_1_37 = 1596594737;
signed short int var_1_38 = -5;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 32;
unsigned char var_1_47 = 100;
unsigned char var_1_48 = 32;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 200;
unsigned char var_1_51 = 8;
unsigned char var_1_52 = 200;
unsigned char var_1_53 = 4;
unsigned short int var_1_54 = 0;
unsigned short int var_1_55 = 10000;
signed char var_1_56 = -100;
signed char var_1_57 = 10;
unsigned long int var_1_58 = 10;
unsigned long int var_1_59 = 3996381901;
unsigned char var_1_60 = 1;
signed char var_1_61 = 16;
signed char var_1_62 = 8;
signed char var_1_63 = 0;
unsigned short int var_1_64 = 32;
unsigned short int var_1_65 = 31499;
float var_1_66 = 1.875;
unsigned char var_1_67 = 1;
unsigned short int var_1_68 = 128;
unsigned char var_1_69 = 64;
signed short int var_1_70 = -64;
signed char var_1_71 = 50;
unsigned long int var_1_72 = 256;
unsigned long int var_1_73 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 0;
float last_1_var_1_35 = 255.75;
unsigned char last_1_var_1_46 = 32;
unsigned char last_1_var_1_51 = 8;
unsigned short int last_1_var_1_54 = 0;
signed short int last_1_var_1_70 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch69Amount250
	signed long int stepLocal_1 = last_1_var_1_46;
	signed long int stepLocal_0 = -100 * last_1_var_1_51;
	if (last_1_var_1_35 < var_1_11) {
		var_1_12 = (min (var_1_13 , var_1_14));
	} else {
		if (((abs (var_1_14)) % var_1_15) >= stepLocal_1) {
			if (stepLocal_0 >= var_1_14) {
				var_1_12 = var_1_13;
			}
		} else {
			var_1_12 = var_1_16;
		}
	}


	// From: Req17Batch69Amount250
	signed long int stepLocal_6 = var_1_31;
	if (var_1_42) {
		if (stepLocal_6 <= (max ((var_1_12 + var_1_15) , (var_1_26 / var_1_50)))) {
			var_1_51 = (var_1_50 - ((var_1_27 + var_1_26) + var_1_48));
		} else {
			var_1_51 = ((max (var_1_50 , var_1_52)) - ((100 - var_1_26) - (var_1_27 + var_1_53)));
		}
	} else {
		var_1_51 = ((var_1_47 - (max (var_1_26 , var_1_48))) + 64);
	}


	// From: Req25Batch69Amount250
	signed long int stepLocal_12 = min (var_1_65 , var_1_15);
	if (last_1_var_1_12 <= stepLocal_12) {
		var_1_67 = var_1_40;
	} else {
		var_1_67 = 0;
	}


	// From: Req9Batch69Amount250
	if (var_1_67) {
		var_1_33 = ((var_1_20 - var_1_21) + (var_1_22 - (var_1_34 + 9.6)));
	}


	// From: Req20Batch69Amount250
	if (var_1_67) {
		var_1_58 = (var_1_59 - var_1_26);
	}


	// From: Req24Batch69Amount250
	unsigned long int stepLocal_11 = var_1_37 * var_1_58;
	if (var_1_65 < stepLocal_11) {
		var_1_66 = (var_1_20 + var_1_22);
	} else {
		var_1_66 = ((max ((max (var_1_22 , var_1_21)) , (var_1_34 + 255.7f))) + (var_1_20 + 0.75f));
	}


	// From: Req14Batch69Amount250
	var_1_45 = var_1_40;


	// From: Req15Batch69Amount250
	if (var_1_44) {
		var_1_46 = (128 - (var_1_47 - (max (var_1_26 , var_1_48))));
	} else {
		var_1_46 = (var_1_48 + (max (var_1_27 , var_1_26)));
	}


	// From: Req18Batch69Amount250
	signed short int stepLocal_7 = var_1_15;
	if (stepLocal_7 >= (abs (last_1_var_1_54 + var_1_52))) {
		var_1_54 = ((4 + (var_1_55 - 32)) + (min (var_1_50 , var_1_14)));
	} else {
		var_1_54 = (min ((abs (2)) , var_1_46));
	}


	// From: Req19Batch69Amount250
	var_1_56 = (max (var_1_48 , var_1_57));


	// From: Req26Batch69Amount250
	var_1_68 = var_1_55;


	// From: Req27Batch69Amount250
	if (var_1_40) {
		var_1_69 = var_1_47;
	} else {
		var_1_69 = var_1_13;
	}


	// From: Req29Batch69Amount250
	var_1_71 = var_1_28;


	// From: Req30Batch69Amount250
	var_1_72 = var_1_52;


	// From: Req31Batch69Amount250
	var_1_73 = var_1_48;


	// From: Req23Batch69Amount250
	if (((abs (var_1_66)) - 9.8f) > (- var_1_19)) {
		var_1_64 = (57474 - ((var_1_65 - var_1_48) - 1));
	}


	// From: Req6Batch69Amount250
	if (! var_1_45) {
		var_1_24 = (var_1_25 + ((var_1_26 - var_1_27) + var_1_28));
	}


	// From: Req16Batch69Amount250
	signed long int stepLocal_5 = var_1_26 - var_1_69;
	if (stepLocal_5 == 1000) {
		var_1_49 = ((abs (var_1_50)) - var_1_27);
	}


	// From: Req28Batch69Amount250
	if (2.4 == var_1_10) {
		var_1_70 = (min ((var_1_24 + (max (var_1_50 , last_1_var_1_70))) , var_1_47));
	}


	// From: Req13Batch69Amount250
	unsigned short int stepLocal_4 = var_1_3;
	unsigned char stepLocal_3 = var_1_13;
	if (stepLocal_4 >= var_1_64) {
		var_1_39 = ((var_1_67 || var_1_40) && ((var_1_67 || var_1_41) && var_1_42));
	} else {
		if (var_1_3 > stepLocal_3) {
			var_1_39 = (! var_1_43);
		} else {
			var_1_39 = var_1_44;
		}
	}


	// From: Req5Batch69Amount250
	if (var_1_22 > var_1_33) {
		if (! var_1_39) {
			var_1_23 = (var_1_19 + (min (var_1_20 , (max (var_1_18 , var_1_22)))));
		}
	}


	// From: Req10Batch69Amount250
	if (var_1_31 > var_1_6) {
		if ((var_1_49 ^ var_1_31) != var_1_14) {
			if (((var_1_33 + var_1_10) >= (255.6f * var_1_23)) && var_1_39) {
				var_1_35 = (min (((var_1_21 + 63.5f) + var_1_22) , var_1_34));
			} else {
				var_1_35 = var_1_20;
			}
		}
	}


	// From: Req1Batch69Amount250
	if (var_1_45 && ((var_1_3 - var_1_12) <= var_1_70)) {
		var_1_1 = ((max ((var_1_3 + var_1_12) , (var_1_6 - var_1_12))) + var_1_64);
	} else {
		var_1_1 = (max (var_1_3 , 100u));
	}


	// From: Req2Batch69Amount250
	if (var_1_68 <= (var_1_6 | (min (10 , var_1_54)))) {
		var_1_9 = (min (var_1_10 , var_1_11));
	} else {
		if (var_1_67) {
			if (var_1_6 < ((var_1_12 << var_1_58) + var_1_49)) {
				var_1_9 = var_1_11;
			} else {
				var_1_9 = var_1_10;
			}
		} else {
			var_1_9 = var_1_11;
		}
	}


	// From: Req4Batch69Amount250
	if (var_1_39) {
		var_1_17 = (var_1_18 + var_1_19);
	} else {
		var_1_17 = (((var_1_20 + var_1_21) - var_1_22) + (max (1.25 , var_1_18)));
	}


	// From: Req11Batch69Amount250
	signed char stepLocal_2 = var_1_26;
	if (stepLocal_2 < var_1_31) {
		var_1_36 = ((var_1_6 - (var_1_71 + var_1_14)) + (max ((var_1_37 - var_1_68) , var_1_49)));
	}


	// From: Req12Batch69Amount250
	if (var_1_45 || var_1_39) {
		if (var_1_3 >= var_1_27) {
			if (var_1_19 <= ((- var_1_11) + var_1_66)) {
				var_1_38 = var_1_25;
			}
		} else {
			var_1_38 = var_1_28;
		}
	} else {
		var_1_38 = var_1_28;
	}


	// From: Req21Batch69Amount250
	unsigned char stepLocal_8 = var_1_44;
	if (var_1_41 || stepLocal_8) {
		if (var_1_23 >= var_1_17) {
			var_1_60 = (! (! (! var_1_44)));
		}
	}


	// From: Req22Batch69Amount250
	unsigned char stepLocal_10 = var_1_40;
	unsigned char stepLocal_9 = var_1_50;
	if (var_1_17 <= (var_1_21 - 128.35f)) {
		var_1_61 = (min (var_1_26 , var_1_57));
	} else {
		if ((var_1_16 >= var_1_59) || stepLocal_10) {
			var_1_61 = (var_1_26 + var_1_27);
		} else {
			if (var_1_46 <= stepLocal_9) {
				var_1_61 = ((var_1_48 - var_1_53) + ((var_1_62 + var_1_63) + var_1_27));
			} else {
				var_1_61 = ((var_1_53 + var_1_26) - var_1_48);
			}
		}
	}


	// From: Req7Batch69Amount250
	if (var_1_60 && var_1_60) {
		if (var_1_16 <= var_1_13) {
			var_1_29 = (var_1_49 + var_1_54);
		} else {
			var_1_29 = (min ((max (var_1_15 , (max (var_1_3 , var_1_51)))) , (max (var_1_16 , var_1_25))));
		}
	} else {
		var_1_29 = (((var_1_31 - var_1_13) + var_1_27) - var_1_26);
	}


	// From: Req8Batch69Amount250
	if (var_1_68 < (var_1_38 / var_1_31)) {
		var_1_32 = (max (var_1_28 , var_1_25));
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 1073741823);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32768);
	assume_abort_if_not(var_1_15 <= 32767);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691390e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -31);
	assume_abort_if_not(var_1_28 <= 31);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= 536870911);
	assume_abort_if_not(var_1_31 <= 1073741823);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691390e+12F && var_1_34 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 1073741823);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 63);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 127);
	assume_abort_if_not(var_1_50 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 127);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 31);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 8191);
	assume_abort_if_not(var_1_55 <= 16383);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -127);
	assume_abort_if_not(var_1_57 <= 126);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -15);
	assume_abort_if_not(var_1_62 <= 16);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= -15);
	assume_abort_if_not(var_1_63 <= 16);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 24575);
	assume_abort_if_not(var_1_65 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_70 = var_1_70;
}

int property() {
	return (((((((((((((((((((((((((((((((var_1_45 && ((var_1_3 - var_1_12) <= var_1_70)) ? (var_1_1 == ((unsigned long int) ((max ((var_1_3 + var_1_12) , (var_1_6 - var_1_12))) + var_1_64))) : (var_1_1 == ((unsigned long int) (max (var_1_3 , 100u))))) && ((var_1_68 <= (var_1_6 | (min (10 , var_1_54)))) ? (var_1_9 == ((float) (min (var_1_10 , var_1_11)))) : (var_1_67 ? ((var_1_6 < ((var_1_12 << var_1_58) + var_1_49)) ? (var_1_9 == ((float) var_1_11)) : (var_1_9 == ((float) var_1_10))) : (var_1_9 == ((float) var_1_11))))) && ((last_1_var_1_35 < var_1_11) ? (var_1_12 == ((unsigned char) (min (var_1_13 , var_1_14)))) : ((((abs (var_1_14)) % var_1_15) >= last_1_var_1_46) ? (((-100 * last_1_var_1_51) >= var_1_14) ? (var_1_12 == ((unsigned char) var_1_13)) : 1) : (var_1_12 == ((unsigned char) var_1_16))))) && (var_1_39 ? (var_1_17 == ((double) (var_1_18 + var_1_19))) : (var_1_17 == ((double) (((var_1_20 + var_1_21) - var_1_22) + (max (1.25 , var_1_18))))))) && ((var_1_22 > var_1_33) ? ((! var_1_39) ? (var_1_23 == ((float) (var_1_19 + (min (var_1_20 , (max (var_1_18 , var_1_22))))))) : 1) : 1)) && ((! var_1_45) ? (var_1_24 == ((signed char) (var_1_25 + ((var_1_26 - var_1_27) + var_1_28)))) : 1)) && ((var_1_60 && var_1_60) ? ((var_1_16 <= var_1_13) ? (var_1_29 == ((signed long int) (var_1_49 + var_1_54))) : (var_1_29 == ((signed long int) (min ((max (var_1_15 , (max (var_1_3 , var_1_51)))) , (max (var_1_16 , var_1_25))))))) : (var_1_29 == ((signed long int) (((var_1_31 - var_1_13) + var_1_27) - var_1_26))))) && ((var_1_68 < (var_1_38 / var_1_31)) ? (var_1_32 == ((signed char) (max (var_1_28 , var_1_25)))) : 1)) && (var_1_67 ? (var_1_33 == ((double) ((var_1_20 - var_1_21) + (var_1_22 - (var_1_34 + 9.6))))) : 1)) && ((var_1_31 > var_1_6) ? (((var_1_49 ^ var_1_31) != var_1_14) ? ((((var_1_33 + var_1_10) >= (255.6f * var_1_23)) && var_1_39) ? (var_1_35 == ((float) (min (((var_1_21 + 63.5f) + var_1_22) , var_1_34)))) : (var_1_35 == ((float) var_1_20))) : 1) : 1)) && ((var_1_26 < var_1_31) ? (var_1_36 == ((unsigned long int) ((var_1_6 - (var_1_71 + var_1_14)) + (max ((var_1_37 - var_1_68) , var_1_49))))) : 1)) && ((var_1_45 || var_1_39) ? ((var_1_3 >= var_1_27) ? ((var_1_19 <= ((- var_1_11) + var_1_66)) ? (var_1_38 == ((signed short int) var_1_25)) : 1) : (var_1_38 == ((signed short int) var_1_28))) : (var_1_38 == ((signed short int) var_1_28)))) && ((var_1_3 >= var_1_64) ? (var_1_39 == ((unsigned char) ((var_1_67 || var_1_40) && ((var_1_67 || var_1_41) && var_1_42)))) : ((var_1_3 > var_1_13) ? (var_1_39 == ((unsigned char) (! var_1_43))) : (var_1_39 == ((unsigned char) var_1_44))))) && (var_1_45 == ((unsigned char) var_1_40))) && (var_1_44 ? (var_1_46 == ((unsigned char) (128 - (var_1_47 - (max (var_1_26 , var_1_48)))))) : (var_1_46 == ((unsigned char) (var_1_48 + (max (var_1_27 , var_1_26))))))) && (((var_1_26 - var_1_69) == 1000) ? (var_1_49 == ((unsigned char) ((abs (var_1_50)) - var_1_27))) : 1)) && (var_1_42 ? ((var_1_31 <= (max ((var_1_12 + var_1_15) , (var_1_26 / var_1_50)))) ? (var_1_51 == ((unsigned char) (var_1_50 - ((var_1_27 + var_1_26) + var_1_48)))) : (var_1_51 == ((unsigned char) ((max (var_1_50 , var_1_52)) - ((100 - var_1_26) - (var_1_27 + var_1_53)))))) : (var_1_51 == ((unsigned char) ((var_1_47 - (max (var_1_26 , var_1_48))) + 64))))) && ((var_1_15 >= (abs (last_1_var_1_54 + var_1_52))) ? (var_1_54 == ((unsigned short int) ((4 + (var_1_55 - 32)) + (min (var_1_50 , var_1_14))))) : (var_1_54 == ((unsigned short int) (min ((abs (2)) , var_1_46)))))) && (var_1_56 == ((signed char) (max (var_1_48 , var_1_57))))) && (var_1_67 ? (var_1_58 == ((unsigned long int) (var_1_59 - var_1_26))) : 1)) && ((var_1_41 || var_1_44) ? ((var_1_23 >= var_1_17) ? (var_1_60 == ((unsigned char) (! (! (! var_1_44))))) : 1) : 1)) && ((var_1_17 <= (var_1_21 - 128.35f)) ? (var_1_61 == ((signed char) (min (var_1_26 , var_1_57)))) : (((var_1_16 >= var_1_59) || var_1_40) ? (var_1_61 == ((signed char) (var_1_26 + var_1_27))) : ((var_1_46 <= var_1_50) ? (var_1_61 == ((signed char) ((var_1_48 - var_1_53) + ((var_1_62 + var_1_63) + var_1_27)))) : (var_1_61 == ((signed char) ((var_1_53 + var_1_26) - var_1_48))))))) && ((((abs (var_1_66)) - 9.8f) > (- var_1_19)) ? (var_1_64 == ((unsigned short int) (57474 - ((var_1_65 - var_1_48) - 1)))) : 1)) && ((var_1_65 < (var_1_37 * var_1_58)) ? (var_1_66 == ((float) (var_1_20 + var_1_22))) : (var_1_66 == ((float) ((max ((max (var_1_22 , var_1_21)) , (var_1_34 + 255.7f))) + (var_1_20 + 0.75f)))))) && ((last_1_var_1_12 <= (min (var_1_65 , var_1_15))) ? (var_1_67 == ((unsigned char) var_1_40)) : (var_1_67 == ((unsigned char) 0)))) && (var_1_68 == ((unsigned short int) var_1_55))) && (var_1_40 ? (var_1_69 == ((unsigned char) var_1_47)) : (var_1_69 == ((unsigned char) var_1_13)))) && ((2.4 == var_1_10) ? (var_1_70 == ((signed short int) (min ((var_1_24 + (max (var_1_50 , last_1_var_1_70))) , var_1_47)))) : 1)) && (var_1_71 == ((signed char) var_1_28))) && (var_1_72 == ((unsigned long int) var_1_52))) && (var_1_73 == ((unsigned long int) var_1_48))
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

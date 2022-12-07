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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 0;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
signed char var_1_8 = 1;
signed char var_1_9 = 32;
signed char var_1_10 = 5;
signed char var_1_11 = 2;
signed char var_1_12 = -100;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 4;
signed char var_1_17 = -50;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed char var_1_22 = -10;
float var_1_24 = 0.25;
signed short int var_1_26 = 1;
signed short int var_1_27 = 28319;
signed char var_1_28 = 32;
float var_1_30 = 8.25;
float var_1_31 = 256.5;
float var_1_32 = 128.25;
float var_1_33 = 255.25;
float var_1_34 = 4.7;
float var_1_35 = 9.25;
float var_1_36 = 9999999999999.3;
float var_1_37 = 4.625;
float var_1_38 = 100.2;
float var_1_39 = 9.4;
unsigned char var_1_40 = 8;
unsigned char var_1_42 = 128;
unsigned char var_1_43 = 64;
signed char var_1_44 = 32;
signed char var_1_45 = -100;
unsigned short int var_1_46 = 32;
unsigned long int var_1_47 = 2;
unsigned long int var_1_48 = 2;
unsigned short int var_1_49 = 64481;
unsigned short int var_1_50 = 10000;
signed char var_1_52 = -5;
float var_1_53 = 0.0;
float var_1_54 = 5.5;
signed char var_1_55 = 4;
signed char var_1_56 = -5;
signed char var_1_57 = -32;
double var_1_58 = -0.2;
double var_1_59 = 1000000.1;
double var_1_60 = 100.5;
unsigned char var_1_61 = 0;
float var_1_62 = 0.6;
signed short int var_1_63 = 25;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 0;
unsigned short int var_1_68 = 128;
float var_1_69 = 3.375;
double var_1_70 = 1.2;

// Calibration values

// Last'ed variables
signed char last_1_var_1_28 = 32;
signed char last_1_var_1_44 = 32;
unsigned short int last_1_var_1_46 = 32;
signed short int last_1_var_1_63 = 25;
double last_1_var_1_70 = 1.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch86Amount250
	if (((var_1_9 - 128) % var_1_19) >= last_1_var_1_44) {
		var_1_20 = (var_1_15 || var_1_21);
	} else {
		var_1_20 = (var_1_21 || var_1_15);
	}


	// From: Req10Batch86Amount250
	unsigned char stepLocal_7 = var_1_20;
	if (var_1_15 || stepLocal_7) {
		var_1_44 = var_1_45;
	}


	// From: Req15Batch86Amount250
	signed long int stepLocal_13 = min (last_1_var_1_46 , var_1_19);
	if (stepLocal_13 < var_1_56) {
		var_1_61 = (! var_1_15);
	} else {
		var_1_61 = (((var_1_31 * var_1_35) <= (var_1_36 + last_1_var_1_70)) && var_1_21);
	}


	// From: Req2Batch86Amount250
	if (! (var_1_12 <= (var_1_6 - var_1_10))) {
		if (! var_1_61) {
			var_1_13 = (! var_1_14);
		} else {
			var_1_13 = var_1_15;
		}
	} else {
		var_1_13 = var_1_14;
	}


	// From: Req9Batch86Amount250
	if (var_1_10 == last_1_var_1_63) {
		var_1_40 = ((max (var_1_19 , var_1_42)) - (max (var_1_7 , var_1_6)));
	} else {
		var_1_40 = ((var_1_43 - var_1_7) + 32);
	}


	// From: Req3Batch86Amount250
	signed char stepLocal_1 = var_1_11;
	signed char stepLocal_0 = var_1_8;
	if (stepLocal_0 > var_1_7) {
		if (stepLocal_1 == (var_1_6 / var_1_17)) {
			var_1_16 = (max ((abs (var_1_9 + var_1_6)) , (min (var_1_18 , (var_1_19 - var_1_7)))));
		}
	}


	// From: Req20Batch86Amount250
	if (var_1_21) {
		var_1_69 = (abs ((min (15.16f , var_1_36)) + var_1_34));
	}


	// From: Req21Batch86Amount250
	signed long int stepLocal_16 = - var_1_27;
	if (stepLocal_16 == ((var_1_19 / var_1_50) + 4)) {
		var_1_70 = (max (var_1_39 , var_1_60));
	} else {
		var_1_70 = var_1_59;
	}


	// From: Req14Batch86Amount250
	signed long int stepLocal_12 = max ((- var_1_40) , var_1_49);
	signed char stepLocal_11 = var_1_8;
	if (var_1_21) {
		if (((var_1_16 / var_1_17) + var_1_40) >= stepLocal_11) {
			var_1_58 = ((max (7.5 , (var_1_59 - var_1_60))) + var_1_34);
		} else {
			var_1_58 = (127.4 - (min (100.5 , var_1_54)));
		}
	} else {
		if (var_1_40 >= stepLocal_12) {
			var_1_58 = (min (var_1_34 , (min ((var_1_33 + var_1_59) , (max (var_1_54 , var_1_38))))));
		}
	}


	// From: Req16Batch86Amount250
	if (var_1_69 < var_1_58) {
		var_1_62 = (max ((max (var_1_39 , (max (var_1_33 , var_1_59)))) , var_1_36));
	} else {
		var_1_62 = (var_1_38 - var_1_60);
	}


	// From: Req1Batch86Amount250
	if (! (var_1_13 || (var_1_58 > var_1_70))) {
		if (var_1_13) {
			if (var_1_13) {
				var_1_1 = (abs ((var_1_6 - var_1_7) + var_1_8));
			} else {
				var_1_1 = (min ((var_1_7 - var_1_6) , ((var_1_9 + var_1_10) - var_1_11)));
			}
		} else {
			var_1_1 = var_1_12;
		}
	} else {
		var_1_1 = (var_1_9 - (min (var_1_11 , var_1_7)));
	}


	// From: Req8Batch86Amount250
	signed long int stepLocal_6 = min (var_1_6 , var_1_10);
	if (var_1_19 > stepLocal_6) {
		if ((var_1_24 * (var_1_31 - var_1_32)) > (var_1_62 + (max (var_1_58 , var_1_58)))) {
			var_1_30 = ((max (var_1_33 , (min (var_1_34 , var_1_35)))) + var_1_36);
		} else {
			var_1_30 = (var_1_37 - var_1_38);
		}
	} else {
		var_1_30 = (var_1_39 + (max (var_1_35 , var_1_33)));
	}


	// From: Req5Batch86Amount250
	signed char stepLocal_2 = var_1_7;
	if (var_1_20) {
		if (((var_1_58 + var_1_58) + (var_1_70 / var_1_24)) >= (- var_1_30)) {
			var_1_22 = var_1_6;
		}
	} else {
		if (var_1_10 != stepLocal_2) {
			var_1_22 = var_1_7;
		} else {
			var_1_22 = var_1_12;
		}
	}


	// From: Req18Batch86Amount250
	unsigned char stepLocal_15 = var_1_61;
	if ((var_1_16 == 1) && stepLocal_15) {
		if (var_1_14) {
			if (var_1_33 != (max (var_1_30 , var_1_39))) {
				var_1_64 = (var_1_15 || var_1_21);
			}
		}
	} else {
		var_1_64 = (((var_1_13 && var_1_61) || var_1_65) && (var_1_66 && var_1_67));
	}


	// From: Req12Batch86Amount250
	unsigned char stepLocal_9 = var_1_64;
	signed char stepLocal_8 = var_1_10;
	if (stepLocal_9 && ((var_1_49 + var_1_27) < var_1_7)) {
		var_1_52 = var_1_12;
	} else {
		if ((min (var_1_69 , (var_1_38 - var_1_31))) <= ((var_1_53 - var_1_54) - var_1_32)) {
			var_1_52 = (var_1_56 + var_1_55);
		} else {
			if ((var_1_6 - var_1_9) <= stepLocal_8) {
				var_1_52 = (var_1_48 - var_1_11);
			} else {
				var_1_52 = (min (-1 , var_1_10));
			}
		}
	}


	// From: Req13Batch86Amount250
	unsigned char stepLocal_10 = var_1_64;
	if (stepLocal_10 && ((var_1_44 / var_1_43) > var_1_19)) {
		var_1_57 = ((var_1_47 + var_1_10) - var_1_7);
	} else {
		var_1_57 = var_1_6;
	}


	// From: Req19Batch86Amount250
	if (var_1_40 < var_1_57) {
		var_1_68 = (max (var_1_16 , var_1_40));
	} else {
		var_1_68 = var_1_47;
	}


	// From: Req7Batch86Amount250
	signed long int stepLocal_5 = (abs (var_1_11)) << var_1_17;
	unsigned char stepLocal_4 = var_1_19;
	unsigned char stepLocal_3 = var_1_20;
	if (var_1_57 <= stepLocal_5) {
		if (stepLocal_4 < last_1_var_1_28) {
			if (var_1_24 > var_1_69) {
				if (0.30000000000000004f >= var_1_62) {
					var_1_28 = (-1 - var_1_7);
				}
			}
		} else {
			if (stepLocal_3 || var_1_15) {
				var_1_28 = var_1_8;
			}
		}
	} else {
		var_1_28 = (2 + var_1_8);
	}


	// From: Req11Batch86Amount250
	if ((min ((var_1_9 - var_1_10) , var_1_52)) < 8) {
		if ((var_1_6 - var_1_27) <= (var_1_17 >> (var_1_47 + var_1_48))) {
			var_1_46 = (var_1_49 - (var_1_27 - (max (var_1_10 , var_1_6))));
		} else {
			var_1_46 = (var_1_49 - (256 + (var_1_50 - var_1_19)));
		}
	} else {
		if (var_1_11 == (var_1_16 / var_1_43)) {
			var_1_46 = 16;
		} else {
			var_1_46 = (min (50 , var_1_40));
		}
	}


	// From: Req17Batch86Amount250
	signed long int stepLocal_14 = var_1_43 + (max (var_1_42 , var_1_49));
	if (var_1_20) {
		if (stepLocal_14 > 8) {
			var_1_63 = ((var_1_50 + var_1_47) - var_1_10);
		} else {
			var_1_63 = (var_1_18 - var_1_50);
		}
	} else {
		var_1_63 = ((min (var_1_10 , var_1_43)) - (abs (var_1_68)));
	}


	// From: Req6Batch86Amount250
	if (var_1_8 <= (min (var_1_9 , var_1_6))) {
		var_1_26 = (var_1_9 - (var_1_27 - var_1_28));
	} else {
		var_1_26 = (abs (var_1_7));
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -128);
	assume_abort_if_not(var_1_17 <= 127);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 16383);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -461168.6018427382800e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427382800e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -461168.6018427382800e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 63);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -127);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 4);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 4);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 32767);
	assume_abort_if_not(var_1_49 <= 65534);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 8191);
	assume_abort_if_not(var_1_50 <= 16383);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 4611686.018427387900e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427387900e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -31);
	assume_abort_if_not(var_1_55 <= 31);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -31);
	assume_abort_if_not(var_1_56 <= 31);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 1);
	assume_abort_if_not(var_1_66 <= 1);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 1);
	assume_abort_if_not(var_1_67 <= 1);
}



void updateLastVariables() {
	last_1_var_1_28 = var_1_28;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_70 = var_1_70;
}

int property() {
	return (((((((((((((((((((((! (var_1_13 || (var_1_58 > var_1_70))) ? (var_1_13 ? (var_1_13 ? (var_1_1 == ((signed char) (abs ((var_1_6 - var_1_7) + var_1_8)))) : (var_1_1 == ((signed char) (min ((var_1_7 - var_1_6) , ((var_1_9 + var_1_10) - var_1_11)))))) : (var_1_1 == ((signed char) var_1_12))) : (var_1_1 == ((signed char) (var_1_9 - (min (var_1_11 , var_1_7)))))) && ((! (var_1_12 <= (var_1_6 - var_1_10))) ? ((! var_1_61) ? (var_1_13 == ((unsigned char) (! var_1_14))) : (var_1_13 == ((unsigned char) var_1_15))) : (var_1_13 == ((unsigned char) var_1_14)))) && ((var_1_8 > var_1_7) ? ((var_1_11 == (var_1_6 / var_1_17)) ? (var_1_16 == ((unsigned char) (max ((abs (var_1_9 + var_1_6)) , (min (var_1_18 , (var_1_19 - var_1_7))))))) : 1) : 1)) && ((((var_1_9 - 128) % var_1_19) >= last_1_var_1_44) ? (var_1_20 == ((unsigned char) (var_1_15 || var_1_21))) : (var_1_20 == ((unsigned char) (var_1_21 || var_1_15))))) && (var_1_20 ? ((((var_1_58 + var_1_58) + (var_1_70 / var_1_24)) >= (- var_1_30)) ? (var_1_22 == ((signed char) var_1_6)) : 1) : ((var_1_10 != var_1_7) ? (var_1_22 == ((signed char) var_1_7)) : (var_1_22 == ((signed char) var_1_12))))) && ((var_1_8 <= (min (var_1_9 , var_1_6))) ? (var_1_26 == ((signed short int) (var_1_9 - (var_1_27 - var_1_28)))) : (var_1_26 == ((signed short int) (abs (var_1_7)))))) && ((var_1_57 <= ((abs (var_1_11)) << var_1_17)) ? ((var_1_19 < last_1_var_1_28) ? ((var_1_24 > var_1_69) ? ((0.30000000000000004f >= var_1_62) ? (var_1_28 == ((signed char) (-1 - var_1_7))) : 1) : 1) : ((var_1_20 || var_1_15) ? (var_1_28 == ((signed char) var_1_8)) : 1)) : (var_1_28 == ((signed char) (2 + var_1_8))))) && ((var_1_19 > (min (var_1_6 , var_1_10))) ? (((var_1_24 * (var_1_31 - var_1_32)) > (var_1_62 + (max (var_1_58 , var_1_58)))) ? (var_1_30 == ((float) ((max (var_1_33 , (min (var_1_34 , var_1_35)))) + var_1_36))) : (var_1_30 == ((float) (var_1_37 - var_1_38)))) : (var_1_30 == ((float) (var_1_39 + (max (var_1_35 , var_1_33))))))) && ((var_1_10 == last_1_var_1_63) ? (var_1_40 == ((unsigned char) ((max (var_1_19 , var_1_42)) - (max (var_1_7 , var_1_6))))) : (var_1_40 == ((unsigned char) ((var_1_43 - var_1_7) + 32))))) && ((var_1_15 || var_1_20) ? (var_1_44 == ((signed char) var_1_45)) : 1)) && (((min ((var_1_9 - var_1_10) , var_1_52)) < 8) ? (((var_1_6 - var_1_27) <= (var_1_17 >> (var_1_47 + var_1_48))) ? (var_1_46 == ((unsigned short int) (var_1_49 - (var_1_27 - (max (var_1_10 , var_1_6)))))) : (var_1_46 == ((unsigned short int) (var_1_49 - (256 + (var_1_50 - var_1_19)))))) : ((var_1_11 == (var_1_16 / var_1_43)) ? (var_1_46 == ((unsigned short int) 16)) : (var_1_46 == ((unsigned short int) (min (50 , var_1_40))))))) && ((var_1_64 && ((var_1_49 + var_1_27) < var_1_7)) ? (var_1_52 == ((signed char) var_1_12)) : (((min (var_1_69 , (var_1_38 - var_1_31))) <= ((var_1_53 - var_1_54) - var_1_32)) ? (var_1_52 == ((signed char) (var_1_56 + var_1_55))) : (((var_1_6 - var_1_9) <= var_1_10) ? (var_1_52 == ((signed char) (var_1_48 - var_1_11))) : (var_1_52 == ((signed char) (min (-1 , var_1_10)))))))) && ((var_1_64 && ((var_1_44 / var_1_43) > var_1_19)) ? (var_1_57 == ((signed char) ((var_1_47 + var_1_10) - var_1_7))) : (var_1_57 == ((signed char) var_1_6)))) && (var_1_21 ? ((((var_1_16 / var_1_17) + var_1_40) >= var_1_8) ? (var_1_58 == ((double) ((max (7.5 , (var_1_59 - var_1_60))) + var_1_34))) : (var_1_58 == ((double) (127.4 - (min (100.5 , var_1_54)))))) : ((var_1_40 >= (max ((- var_1_40) , var_1_49))) ? (var_1_58 == ((double) (min (var_1_34 , (min ((var_1_33 + var_1_59) , (max (var_1_54 , var_1_38)))))))) : 1))) && (((min (last_1_var_1_46 , var_1_19)) < var_1_56) ? (var_1_61 == ((unsigned char) (! var_1_15))) : (var_1_61 == ((unsigned char) (((var_1_31 * var_1_35) <= (var_1_36 + last_1_var_1_70)) && var_1_21))))) && ((var_1_69 < var_1_58) ? (var_1_62 == ((float) (max ((max (var_1_39 , (max (var_1_33 , var_1_59)))) , var_1_36)))) : (var_1_62 == ((float) (var_1_38 - var_1_60))))) && (var_1_20 ? (((var_1_43 + (max (var_1_42 , var_1_49))) > 8) ? (var_1_63 == ((signed short int) ((var_1_50 + var_1_47) - var_1_10))) : (var_1_63 == ((signed short int) (var_1_18 - var_1_50)))) : (var_1_63 == ((signed short int) ((min (var_1_10 , var_1_43)) - (abs (var_1_68))))))) && (((var_1_16 == 1) && var_1_61) ? (var_1_14 ? ((var_1_33 != (max (var_1_30 , var_1_39))) ? (var_1_64 == ((unsigned char) (var_1_15 || var_1_21))) : 1) : 1) : (var_1_64 == ((unsigned char) (((var_1_13 && var_1_61) || var_1_65) && (var_1_66 && var_1_67)))))) && ((var_1_40 < var_1_57) ? (var_1_68 == ((unsigned short int) (max (var_1_16 , var_1_40)))) : (var_1_68 == ((unsigned short int) var_1_47)))) && (var_1_21 ? (var_1_69 == ((float) (abs ((min (15.16f , var_1_36)) + var_1_34)))) : 1)) && (((- var_1_27) == ((var_1_19 / var_1_50) + 4)) ? (var_1_70 == ((double) (max (var_1_39 , var_1_60)))) : (var_1_70 == ((double) var_1_59)))
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

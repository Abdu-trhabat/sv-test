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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch63Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 100;
signed long int var_1_8 = -256;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 200;
signed char var_1_14 = 16;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 25;
unsigned char var_1_19 = 4;
unsigned char var_1_21 = 0;
signed char var_1_22 = 16;
unsigned char var_1_23 = 1;
unsigned short int var_1_24 = 32;
signed short int var_1_26 = 256;
signed char var_1_27 = -4;
unsigned char var_1_28 = 16;
signed char var_1_30 = -4;
signed char var_1_31 = 4;
signed char var_1_32 = 8;
double var_1_33 = 100.8;
unsigned short int var_1_34 = 0;
double var_1_35 = 100.5;
double var_1_36 = 31.8;
signed long int var_1_37 = -128;
signed long int var_1_38 = -2;
signed char var_1_39 = -128;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 4;
unsigned char var_1_42 = 32;
unsigned char var_1_43 = 32;
double var_1_44 = 31.2;
double var_1_45 = 15.5;
double var_1_46 = 99.5;
double var_1_47 = 10.45;
double var_1_48 = 0.0;
double var_1_49 = 31.5;
double var_1_50 = 10.5;
unsigned short int var_1_51 = 0;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned short int var_1_55 = 25;
unsigned short int var_1_57 = 44965;
unsigned short int var_1_58 = 61922;
unsigned short int var_1_59 = 8;
signed short int var_1_60 = 8;
signed short int var_1_61 = 4;
signed long int var_1_62 = 64;
unsigned long int var_1_63 = 10;
unsigned short int var_1_64 = 64;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = -256;
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_21 = 0;
unsigned short int last_1_var_1_24 = 32;
double last_1_var_1_44 = 31.2;
unsigned char last_1_var_1_52 = 1;
unsigned short int last_1_var_1_59 = 8;
signed short int last_1_var_1_60 = 8;
signed long int last_1_var_1_62 = 64;
unsigned long int last_1_var_1_63 = 10;
unsigned short int last_1_var_1_64 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch63Amount250
	if (last_1_var_1_21) {
		var_1_8 = (max (var_1_6 , var_1_7));
	} else {
		var_1_8 = (25 + var_1_6);
	}


	// From: Req20Batch63Amount250
	if (var_1_48 >= last_1_var_1_44) {
		if (var_1_48 <= last_1_var_1_44) {
			var_1_59 = var_1_16;
		}
	} else {
		if (last_1_var_1_59 > (var_1_28 * (var_1_22 / var_1_15))) {
			if (last_1_var_1_44 <= var_1_48) {
				var_1_59 = (34665 - (min (256 , var_1_5)));
			}
		} else {
			var_1_59 = ((max (var_1_58 , (max (var_1_57 , 36513)))) - var_1_5);
		}
	}


	// From: Req9Batch63Amount250
	if (var_1_5 >= (var_1_59 & last_1_var_1_24)) {
		var_1_24 = (min ((min (var_1_18 , last_1_var_1_24)) , (var_1_15 + var_1_16)));
	}


	// From: Req13Batch63Amount250
	unsigned char stepLocal_12 = var_1_31 <= last_1_var_1_63;
	signed long int stepLocal_11 = last_1_var_1_8;
	if ((last_1_var_1_60 == var_1_7) || stepLocal_12) {
		if (last_1_var_1_9) {
			if (var_1_6 > stepLocal_11) {
				var_1_37 = var_1_38;
			}
		} else {
			var_1_37 = (((var_1_22 - var_1_5) + var_1_32) + last_1_var_1_60);
		}
	}


	// From: Req7Batch63Amount250
	if (last_1_var_1_52 || last_1_var_1_21) {
		var_1_19 = (var_1_14 + (max (var_1_7 , var_1_16)));
	} else {
		if (var_1_18 != (max (var_1_5 , last_1_var_1_62))) {
			var_1_19 = (var_1_5 - var_1_6);
		}
	}


	// From: Req18Batch63Amount250
	if (var_1_34 >= (var_1_22 * last_1_var_1_24)) {
		if (((200 - var_1_18) - var_1_28) < var_1_15) {
			if (last_1_var_1_52 || last_1_var_1_9) {
				var_1_52 = (var_1_10 && var_1_11);
			} else {
				var_1_52 = (! var_1_23);
			}
		}
	} else {
		var_1_52 = (((var_1_10 || var_1_23) && var_1_53) && (last_1_var_1_52 || (last_1_var_1_9 || var_1_54)));
	}


	// From: Req23Batch63Amount250
	if (var_1_53) {
		var_1_63 = last_1_var_1_64;
	}


	// From: Req24Batch63Amount250
	signed char stepLocal_16 = var_1_30;
	signed long int stepLocal_15 = max (var_1_8 , (abs (var_1_5)));
	if (10.4f < var_1_45) {
		if (stepLocal_16 == var_1_28) {
			if (stepLocal_15 != var_1_63) {
				var_1_64 = var_1_34;
			}
		}
	} else {
		var_1_64 = var_1_34;
	}


	// From: Req4Batch63Amount250
	if (var_1_11) {
		var_1_12 = var_1_6;
	}


	// From: Req12Batch63Amount250
	signed long int stepLocal_10 = var_1_7 << (abs (var_1_34));
	if (var_1_14 < stepLocal_10) {
		var_1_33 = ((max (1.8 , var_1_35)) + (min (var_1_36 , 15.25)));
	}


	// From: Req15Batch63Amount250
	signed char stepLocal_13 = var_1_22;
	if (var_1_8 <= stepLocal_13) {
		var_1_40 = (min ((max ((min (var_1_18 , var_1_7)) , var_1_16)) , var_1_41));
	} else {
		var_1_40 = (((var_1_42 - var_1_34) + (max (var_1_22 , var_1_14))) + ((var_1_43 + 32) - (abs (var_1_18))));
	}


	// From: Req22Batch63Amount250
	if (var_1_53) {
		var_1_62 = 50;
	}


	// From: Req5Batch63Amount250
	signed long int stepLocal_1 = (var_1_6 + var_1_14) - var_1_7;
	if (var_1_10) {
		var_1_13 = var_1_7;
	} else {
		if (stepLocal_1 >= (var_1_24 | (min (var_1_37 , var_1_5)))) {
			var_1_13 = ((var_1_15 + var_1_16) - var_1_6);
		} else {
			var_1_13 = var_1_14;
		}
	}


	// From: Req1Batch63Amount250
	if (((var_1_19 / -2) <= var_1_37) && var_1_52) {
		var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
	} else {
		var_1_1 = (var_1_6 + var_1_7);
	}


	// From: Req17Batch63Amount250
	if ((var_1_42 * (min (var_1_59 , var_1_63))) < 0) {
		var_1_51 = (min (var_1_19 , var_1_6));
	}


	// From: Req19Batch63Amount250
	unsigned long int stepLocal_14 = var_1_63;
	if (stepLocal_14 > var_1_51) {
		var_1_55 = var_1_43;
	} else {
		if (var_1_54) {
			var_1_55 = ((max (var_1_57 , var_1_58)) - var_1_18);
		}
	}


	// From: Req11Batch63Amount250
	unsigned char stepLocal_9 = var_1_5;
	signed long int stepLocal_8 = var_1_22 / (var_1_5 - var_1_28);
	if (var_1_1 == stepLocal_8) {
		if (var_1_63 < stepLocal_9) {
			var_1_27 = (var_1_28 - (min (var_1_6 , var_1_18)));
		} else {
			var_1_27 = (var_1_18 + (var_1_22 + var_1_30));
		}
	} else {
		var_1_27 = (((var_1_31 + var_1_32) + var_1_30) + var_1_22);
	}


	// From: Req8Batch63Amount250
	unsigned char stepLocal_5 = var_1_18;
	signed long int stepLocal_4 = (var_1_14 + var_1_8) >> var_1_22;
	if (stepLocal_4 > var_1_62) {
		if (stepLocal_5 > var_1_12) {
			var_1_21 = (! var_1_11);
		} else {
			var_1_21 = ((var_1_12 < var_1_1) || (var_1_10 && var_1_23));
		}
	}


	// From: Req21Batch63Amount250
	if (((- 32) <= var_1_22) && ((var_1_57 - var_1_6) <= (min (var_1_28 , var_1_37)))) {
		if (var_1_52) {
			var_1_60 = ((32315 - var_1_61) - (var_1_13 + (var_1_7 + var_1_28)));
		} else {
			var_1_60 = (var_1_13 - var_1_16);
		}
	} else {
		if ((min (var_1_47 , (var_1_33 + var_1_45))) == var_1_36) {
			var_1_60 = var_1_59;
		} else {
			var_1_60 = var_1_32;
		}
	}


	// From: Req16Batch63Amount250
	if (var_1_19 >= var_1_60) {
		var_1_44 = (max (((var_1_45 + var_1_46) - var_1_47) , ((var_1_48 - var_1_49) - var_1_50)));
	} else {
		var_1_44 = (abs (var_1_46));
	}


	// From: Req3Batch63Amount250
	unsigned char stepLocal_0 = var_1_55 < var_1_63;
	if (stepLocal_0 && var_1_52) {
		var_1_9 = ((var_1_55 > var_1_63) || var_1_10);
	} else {
		var_1_9 = (! var_1_11);
	}


	// From: Req6Batch63Amount250
	signed short int stepLocal_3 = var_1_60;
	signed long int stepLocal_2 = var_1_5 ^ 50;
	if (var_1_9) {
		if (var_1_16 >= stepLocal_3) {
			var_1_17 = (max (((abs (var_1_14)) + var_1_16) , var_1_7));
		}
	} else {
		if (var_1_6 != stepLocal_2) {
			var_1_17 = (min (var_1_14 , var_1_6));
		} else {
			var_1_17 = ((max (var_1_15 , var_1_6)) + (max (1 , (var_1_14 + var_1_18))));
		}
	}


	// From: Req10Batch63Amount250
	unsigned char stepLocal_7 = var_1_15;
	unsigned char stepLocal_6 = var_1_23;
	if (stepLocal_6 && var_1_9) {
		if ((var_1_12 ^ var_1_6) < stepLocal_7) {
			if (var_1_52) {
				if (var_1_9) {
					var_1_26 = (var_1_14 + var_1_22);
				} else {
					var_1_26 = var_1_15;
				}
			}
		} else {
			var_1_26 = var_1_7;
		}
	} else {
		var_1_26 = 16;
	}


	// From: Req14Batch63Amount250
	if (! var_1_21) {
		var_1_39 = (var_1_22 - (max (var_1_34 , (25 + var_1_18))));
	} else {
		if (var_1_6 > 128) {
			var_1_39 = (max (var_1_28 , ((var_1_34 - var_1_6) + var_1_18)));
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 63);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 64);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 30);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 126);
	assume_abort_if_not(var_1_28 != 127);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -31);
	assume_abort_if_not(var_1_30 <= 31);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -15);
	assume_abort_if_not(var_1_31 <= 16);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -15);
	assume_abort_if_not(var_1_32 <= 16);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -461168.6018427383000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483647);
	assume_abort_if_not(var_1_38 <= 2147483646);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 32);
	assume_abort_if_not(var_1_42 <= 64);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 31);
	assume_abort_if_not(var_1_43 <= 64);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 4611686.018427383000e+12F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 32767);
	assume_abort_if_not(var_1_57 <= 65534);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 32767);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_61 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
}

int property(void) {
	return ((((((((((((((((((((((((((var_1_19 / -2) <= var_1_37) && var_1_52) ? (var_1_1 == ((unsigned char) ((var_1_5 - var_1_6) - var_1_7))) : (var_1_1 == ((unsigned char) (var_1_6 + var_1_7)))) && (last_1_var_1_21 ? (var_1_8 == ((signed long int) (max (var_1_6 , var_1_7)))) : (var_1_8 == ((signed long int) (25 + var_1_6))))) && (((var_1_55 < var_1_63) && var_1_52) ? (var_1_9 == ((unsigned char) ((var_1_55 > var_1_63) || var_1_10))) : (var_1_9 == ((unsigned char) (! var_1_11))))) && (var_1_11 ? (var_1_12 == ((unsigned char) var_1_6)) : 1)) && (var_1_10 ? (var_1_13 == ((unsigned char) var_1_7)) : ((((var_1_6 + var_1_14) - var_1_7) >= (var_1_24 | (min (var_1_37 , var_1_5)))) ? (var_1_13 == ((unsigned char) ((var_1_15 + var_1_16) - var_1_6))) : (var_1_13 == ((unsigned char) var_1_14))))) && (var_1_9 ? ((var_1_16 >= var_1_60) ? (var_1_17 == ((unsigned char) (max (((abs (var_1_14)) + var_1_16) , var_1_7)))) : 1) : ((var_1_6 != (var_1_5 ^ 50)) ? (var_1_17 == ((unsigned char) (min (var_1_14 , var_1_6)))) : (var_1_17 == ((unsigned char) ((max (var_1_15 , var_1_6)) + (max (1 , (var_1_14 + var_1_18))))))))) && ((last_1_var_1_52 || last_1_var_1_21) ? (var_1_19 == ((unsigned char) (var_1_14 + (max (var_1_7 , var_1_16))))) : ((var_1_18 != (max (var_1_5 , last_1_var_1_62))) ? (var_1_19 == ((unsigned char) (var_1_5 - var_1_6))) : 1))) && ((((var_1_14 + var_1_8) >> var_1_22) > var_1_62) ? ((var_1_18 > var_1_12) ? (var_1_21 == ((unsigned char) (! var_1_11))) : (var_1_21 == ((unsigned char) ((var_1_12 < var_1_1) || (var_1_10 && var_1_23))))) : 1)) && ((var_1_5 >= (var_1_59 & last_1_var_1_24)) ? (var_1_24 == ((unsigned short int) (min ((min (var_1_18 , last_1_var_1_24)) , (var_1_15 + var_1_16))))) : 1)) && ((var_1_23 && var_1_9) ? (((var_1_12 ^ var_1_6) < var_1_15) ? (var_1_52 ? (var_1_9 ? (var_1_26 == ((signed short int) (var_1_14 + var_1_22))) : (var_1_26 == ((signed short int) var_1_15))) : 1) : (var_1_26 == ((signed short int) var_1_7))) : (var_1_26 == ((signed short int) 16)))) && ((var_1_1 == (var_1_22 / (var_1_5 - var_1_28))) ? ((var_1_63 < var_1_5) ? (var_1_27 == ((signed char) (var_1_28 - (min (var_1_6 , var_1_18))))) : (var_1_27 == ((signed char) (var_1_18 + (var_1_22 + var_1_30))))) : (var_1_27 == ((signed char) (((var_1_31 + var_1_32) + var_1_30) + var_1_22))))) && ((var_1_14 < (var_1_7 << (abs (var_1_34)))) ? (var_1_33 == ((double) ((max (1.8 , var_1_35)) + (min (var_1_36 , 15.25))))) : 1)) && (((last_1_var_1_60 == var_1_7) || (var_1_31 <= last_1_var_1_63)) ? (last_1_var_1_9 ? ((var_1_6 > last_1_var_1_8) ? (var_1_37 == ((signed long int) var_1_38)) : 1) : (var_1_37 == ((signed long int) (((var_1_22 - var_1_5) + var_1_32) + last_1_var_1_60)))) : 1)) && ((! var_1_21) ? (var_1_39 == ((signed char) (var_1_22 - (max (var_1_34 , (25 + var_1_18)))))) : ((var_1_6 > 128) ? (var_1_39 == ((signed char) (max (var_1_28 , ((var_1_34 - var_1_6) + var_1_18))))) : 1))) && ((var_1_8 <= var_1_22) ? (var_1_40 == ((unsigned char) (min ((max ((min (var_1_18 , var_1_7)) , var_1_16)) , var_1_41)))) : (var_1_40 == ((unsigned char) (((var_1_42 - var_1_34) + (max (var_1_22 , var_1_14))) + ((var_1_43 + 32) - (abs (var_1_18)))))))) && ((var_1_19 >= var_1_60) ? (var_1_44 == ((double) (max (((var_1_45 + var_1_46) - var_1_47) , ((var_1_48 - var_1_49) - var_1_50))))) : (var_1_44 == ((double) (abs (var_1_46)))))) && (((var_1_42 * (min (var_1_59 , var_1_63))) < 0) ? (var_1_51 == ((unsigned short int) (min (var_1_19 , var_1_6)))) : 1)) && ((var_1_34 >= (var_1_22 * last_1_var_1_24)) ? ((((200 - var_1_18) - var_1_28) < var_1_15) ? ((last_1_var_1_52 || last_1_var_1_9) ? (var_1_52 == ((unsigned char) (var_1_10 && var_1_11))) : (var_1_52 == ((unsigned char) (! var_1_23)))) : 1) : (var_1_52 == ((unsigned char) (((var_1_10 || var_1_23) && var_1_53) && (last_1_var_1_52 || (last_1_var_1_9 || var_1_54))))))) && ((var_1_63 > var_1_51) ? (var_1_55 == ((unsigned short int) var_1_43)) : (var_1_54 ? (var_1_55 == ((unsigned short int) ((max (var_1_57 , var_1_58)) - var_1_18))) : 1))) && ((var_1_48 >= last_1_var_1_44) ? ((var_1_48 <= last_1_var_1_44) ? (var_1_59 == ((unsigned short int) var_1_16)) : 1) : ((last_1_var_1_59 > (var_1_28 * (var_1_22 / var_1_15))) ? ((last_1_var_1_44 <= var_1_48) ? (var_1_59 == ((unsigned short int) (34665 - (min (256 , var_1_5))))) : 1) : (var_1_59 == ((unsigned short int) ((max (var_1_58 , (max (var_1_57 , 36513)))) - var_1_5)))))) && ((((- 32) <= var_1_22) && ((var_1_57 - var_1_6) <= (min (var_1_28 , var_1_37)))) ? (var_1_52 ? (var_1_60 == ((signed short int) ((32315 - var_1_61) - (var_1_13 + (var_1_7 + var_1_28))))) : (var_1_60 == ((signed short int) (var_1_13 - var_1_16)))) : (((min (var_1_47 , (var_1_33 + var_1_45))) == var_1_36) ? (var_1_60 == ((signed short int) var_1_59)) : (var_1_60 == ((signed short int) var_1_32))))) && (var_1_53 ? (var_1_62 == ((signed long int) 50)) : 1)) && (var_1_53 ? (var_1_63 == ((unsigned long int) last_1_var_1_64)) : 1)) && ((10.4f < var_1_45) ? ((var_1_30 == var_1_28) ? (((max (var_1_8 , (abs (var_1_5)))) != var_1_63) ? (var_1_64 == ((unsigned short int) var_1_34)) : 1) : 1) : (var_1_64 == ((unsigned short int) var_1_34)))
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

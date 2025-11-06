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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 10000.2;
unsigned short int var_1_3 = 128;
double var_1_5 = 200.125;
double var_1_6 = 10000.75;
double var_1_7 = 25.8;
unsigned short int var_1_8 = 2;
unsigned short int var_1_10 = 26765;
unsigned short int var_1_11 = 5;
unsigned short int var_1_12 = 23687;
unsigned short int var_1_13 = 50;
float var_1_14 = 99999.125;
float var_1_16 = 5.75;
unsigned short int var_1_17 = 5;
unsigned short int var_1_18 = 57464;
unsigned short int var_1_19 = 25;
unsigned short int var_1_20 = 64;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned char var_1_24 = 0;
float var_1_25 = 9.75;
float var_1_26 = 256.8;
float var_1_27 = 25.375;
unsigned char var_1_28 = 5;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
float var_1_31 = 7.4;
unsigned long int var_1_32 = 10;
unsigned long int var_1_33 = 4281672327;
unsigned long int var_1_34 = 64;
double var_1_35 = 5.4;
double var_1_36 = -0.5;
double var_1_37 = 0.0;
double var_1_38 = 32.7;
signed char var_1_39 = 16;
signed char var_1_40 = 1;
signed char var_1_41 = 1;
signed char var_1_42 = -16;
signed char var_1_43 = 5;
signed char var_1_44 = 16;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
double var_1_47 = 9999999.375;
unsigned char var_1_48 = 4;
signed char var_1_49 = 4;
signed char var_1_51 = 10;
signed short int var_1_52 = -5;
signed char var_1_53 = -8;
signed short int var_1_55 = -64;
double var_1_56 = 256.5;
signed char var_1_57 = 0;
signed char var_1_58 = 0;

// Calibration values

// Last'ed variables
float last_1_var_1_14 = 99999.125;
unsigned short int last_1_var_1_17 = 5;
unsigned long int last_1_var_1_32 = 10;
double last_1_var_1_35 = 5.4;
unsigned char last_1_var_1_45 = 0;
signed short int last_1_var_1_55 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch139Amount250
	signed long int stepLocal_4 = var_1_20 * var_1_10;
	unsigned short int stepLocal_3 = var_1_13;
	if (stepLocal_4 != var_1_19) {
		var_1_21 = (! (! var_1_22));
	} else {
		if (stepLocal_3 < (last_1_var_1_17 ^ (var_1_20 / 1))) {
			var_1_21 = ((last_1_var_1_14 != var_1_16) && var_1_24);
		}
	}


	// From: Req10Batch139Amount250
	unsigned char stepLocal_8 = last_1_var_1_45;
	signed long int stepLocal_7 = ~ var_1_3;
	if ((var_1_33 < var_1_30) && stepLocal_8) {
		var_1_34 = (min (last_1_var_1_55 , (min (var_1_30 , var_1_3))));
	} else {
		if (var_1_13 >= stepLocal_7) {
			var_1_34 = var_1_12;
		}
	}


	// From: Req8Batch139Amount250
	if (var_1_21) {
		var_1_31 = (max (var_1_5 , 8.75f));
	}


	// From: Req15Batch139Amount250
	if (var_1_21) {
		var_1_48 = var_1_43;
	}


	// From: Req13Batch139Amount250
	if (25 < var_1_34) {
		if (! var_1_22) {
			var_1_45 = (((var_1_21 || var_1_22) && var_1_46) && (! var_1_24));
		}
	}


	// From: Req9Batch139Amount250
	if (32u >= var_1_20) {
		if (! (last_1_var_1_32 > var_1_34)) {
			var_1_32 = (abs (256u + var_1_30));
		} else {
			if ((var_1_18 - var_1_13) > var_1_34) {
				if (var_1_45) {
					var_1_32 = (max ((4199557168u - last_1_var_1_32) , (var_1_33 - var_1_30)));
				} else {
					var_1_32 = 10000000u;
				}
			} else {
				var_1_32 = last_1_var_1_32;
			}
		}
	}


	// From: Req17Batch139Amount250
	var_1_52 = (var_1_51 - (18719 - (abs (var_1_32))));


	// From: Req16Batch139Amount250
	if (((- var_1_18) * var_1_20) <= (var_1_41 / var_1_3)) {
		if ((var_1_32 * var_1_34) < var_1_33) {
			var_1_49 = (min (var_1_42 , var_1_40));
		} else {
			var_1_49 = (var_1_42 + (max (var_1_43 , (var_1_44 - var_1_51))));
		}
	}


	// From: Req2Batch139Amount250
	unsigned char stepLocal_2 = var_1_45;
	unsigned short int stepLocal_1 = var_1_12;
	if (stepLocal_2 || (! (var_1_7 > var_1_5))) {
		var_1_8 = (((var_1_10 - var_1_11) + var_1_12) - var_1_13);
	} else {
		if (var_1_5 > (max (var_1_6 , 16.15))) {
			var_1_8 = var_1_10;
		} else {
			if (stepLocal_1 >= var_1_32) {
				var_1_8 = var_1_12;
			} else {
				var_1_8 = var_1_13;
			}
		}
	}


	// From: Req1Batch139Amount250
	signed long int stepLocal_0 = var_1_8 / var_1_3;
	if (stepLocal_0 != var_1_32) {
		var_1_1 = ((var_1_5 + (abs (var_1_6))) + var_1_7);
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req6Batch139Amount250
	unsigned long int stepLocal_6 = var_1_34;
	unsigned char stepLocal_5 = var_1_18 < var_1_13;
	if ((max ((var_1_8 + var_1_19) , var_1_10)) != stepLocal_6) {
		if (var_1_21 && stepLocal_5) {
			var_1_25 = (var_1_26 - var_1_27);
		} else {
			var_1_25 = (max (127.2f , var_1_5));
		}
	} else {
		if (127.4 > var_1_5) {
			var_1_25 = var_1_27;
		}
	}


	// From: Req3Batch139Amount250
	if ((var_1_25 / var_1_16) != (var_1_5 + var_1_1)) {
		var_1_14 = (min ((min (var_1_5 , var_1_6)) , var_1_7));
	}


	// From: Req14Batch139Amount250
	unsigned long int stepLocal_10 = var_1_8 / (min (10u , var_1_18));
	if (var_1_34 <= stepLocal_10) {
		var_1_47 = (min (var_1_27 , var_1_36));
	} else {
		if (var_1_21) {
			var_1_47 = (var_1_7 + (max ((var_1_38 - 255.5) , var_1_5)));
		} else {
			var_1_47 = ((abs (var_1_7)) + (var_1_38 + var_1_5));
		}
	}


	// From: Req19Batch139Amount250
	signed long int stepLocal_13 = (var_1_18 - var_1_19) << 1;
	unsigned long int stepLocal_12 = var_1_34 + var_1_42;
	if (var_1_32 > stepLocal_13) {
		if (var_1_25 <= (abs (var_1_5))) {
			if ((- (- var_1_8)) >= stepLocal_12) {
				var_1_55 = (var_1_44 + (var_1_11 - 32));
			} else {
				var_1_55 = ((var_1_52 + (var_1_29 - var_1_8)) + -50);
			}
		} else {
			var_1_55 = (min ((var_1_51 + (max (var_1_43 , var_1_42))) , var_1_19));
		}
	} else {
		var_1_55 = (min (var_1_41 , -128));
	}


	// From: Req7Batch139Amount250
	if (var_1_21) {
		if (var_1_1 <= var_1_26) {
			var_1_28 = (min (var_1_29 , var_1_30));
		}
	}


	// From: Req11Batch139Amount250
	unsigned char stepLocal_9 = var_1_24;
	if (var_1_22) {
		var_1_35 = (min (var_1_6 , var_1_26));
	} else {
		if ((- (last_1_var_1_35 + var_1_25)) > var_1_1) {
			if (stepLocal_9 && (var_1_6 > var_1_25)) {
				var_1_35 = (var_1_5 + (abs (var_1_7)));
			} else {
				var_1_35 = (var_1_7 + var_1_36);
			}
		} else {
			var_1_35 = ((abs (var_1_7)) - var_1_38);
		}
	}


	// From: Req21Batch139Amount250
	unsigned char stepLocal_15 = var_1_46;
	if (var_1_37 >= var_1_35) {
		if (((199.375 * var_1_35) >= var_1_7) && stepLocal_15) {
			var_1_57 = (var_1_43 + (var_1_58 + -5));
		} else {
			var_1_57 = var_1_40;
		}
	} else {
		var_1_57 = var_1_43;
	}


	// From: Req4Batch139Amount250
	if (var_1_21) {
		var_1_17 = (var_1_10 + (min ((var_1_12 - var_1_11) , var_1_13)));
	} else {
		if ((max ((var_1_1 * var_1_16) , var_1_6)) >= (min (var_1_5 , (var_1_47 * var_1_7)))) {
			var_1_17 = var_1_10;
		} else {
			if (8 < (var_1_34 & var_1_3)) {
				var_1_17 = (var_1_18 - (var_1_19 + var_1_11));
			} else {
				if (var_1_13 > var_1_34) {
					var_1_17 = (min ((min (var_1_10 , var_1_20)) , ((var_1_12 - var_1_11) + var_1_13)));
				} else {
					var_1_17 = (abs (var_1_11));
				}
			}
		}
	}


	// From: Req20Batch139Amount250
	unsigned long int stepLocal_14 = min (var_1_17 , var_1_34);
	if ((abs (var_1_43)) >= stepLocal_14) {
		var_1_56 = (min ((var_1_37 - var_1_27) , var_1_6));
	} else {
		if (! var_1_21) {
			var_1_56 = ((max (9.4 , var_1_38)) - (max (var_1_27 , (max (var_1_26 , var_1_37)))));
		}
	}


	// From: Req12Batch139Amount250
	if (var_1_56 != var_1_37) {
		var_1_39 = (min (var_1_40 , var_1_41));
	} else {
		var_1_39 = (var_1_42 + (var_1_43 - var_1_44));
	}


	// From: Req18Batch139Amount250
	unsigned long int stepLocal_11 = var_1_32;
	if (((var_1_14 * var_1_16) * var_1_56) != (max (255.75f , (var_1_5 + var_1_25)))) {
		if (var_1_13 < stepLocal_11) {
			var_1_53 = (var_1_44 - var_1_51);
		}
	} else {
		var_1_53 = var_1_51;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -230584.3009213691400e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -230584.3009213691400e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 24575);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 8192);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 16384);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(var_1_16 != 0.0F);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 32767);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16384);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -461168.6018427383000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 6917529.027641074000e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691400e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -127);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -63);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -31);
	assume_abort_if_not(var_1_58 <= 32);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_55 = var_1_55;
}

int property(void) {
	return ((((((((((((((((((((((var_1_8 / var_1_3) != var_1_32) ? (var_1_1 == ((double) ((var_1_5 + (abs (var_1_6))) + var_1_7))) : (var_1_1 == ((double) var_1_7))) && ((var_1_45 || (! (var_1_7 > var_1_5))) ? (var_1_8 == ((unsigned short int) (((var_1_10 - var_1_11) + var_1_12) - var_1_13))) : ((var_1_5 > (max (var_1_6 , 16.15))) ? (var_1_8 == ((unsigned short int) var_1_10)) : ((var_1_12 >= var_1_32) ? (var_1_8 == ((unsigned short int) var_1_12)) : (var_1_8 == ((unsigned short int) var_1_13)))))) && (((var_1_25 / var_1_16) != (var_1_5 + var_1_1)) ? (var_1_14 == ((float) (min ((min (var_1_5 , var_1_6)) , var_1_7)))) : 1)) && (var_1_21 ? (var_1_17 == ((unsigned short int) (var_1_10 + (min ((var_1_12 - var_1_11) , var_1_13))))) : (((max ((var_1_1 * var_1_16) , var_1_6)) >= (min (var_1_5 , (var_1_47 * var_1_7)))) ? (var_1_17 == ((unsigned short int) var_1_10)) : ((8 < (var_1_34 & var_1_3)) ? (var_1_17 == ((unsigned short int) (var_1_18 - (var_1_19 + var_1_11)))) : ((var_1_13 > var_1_34) ? (var_1_17 == ((unsigned short int) (min ((min (var_1_10 , var_1_20)) , ((var_1_12 - var_1_11) + var_1_13))))) : (var_1_17 == ((unsigned short int) (abs (var_1_11))))))))) && (((var_1_20 * var_1_10) != var_1_19) ? (var_1_21 == ((unsigned char) (! (! var_1_22)))) : ((var_1_13 < (last_1_var_1_17 ^ (var_1_20 / 1))) ? (var_1_21 == ((unsigned char) ((last_1_var_1_14 != var_1_16) && var_1_24))) : 1))) && (((max ((var_1_8 + var_1_19) , var_1_10)) != var_1_34) ? ((var_1_21 && (var_1_18 < var_1_13)) ? (var_1_25 == ((float) (var_1_26 - var_1_27))) : (var_1_25 == ((float) (max (127.2f , var_1_5))))) : ((127.4 > var_1_5) ? (var_1_25 == ((float) var_1_27)) : 1))) && (var_1_21 ? ((var_1_1 <= var_1_26) ? (var_1_28 == ((unsigned char) (min (var_1_29 , var_1_30)))) : 1) : 1)) && (var_1_21 ? (var_1_31 == ((float) (max (var_1_5 , 8.75f)))) : 1)) && ((32u >= var_1_20) ? ((! (last_1_var_1_32 > var_1_34)) ? (var_1_32 == ((unsigned long int) (abs (256u + var_1_30)))) : (((var_1_18 - var_1_13) > var_1_34) ? (var_1_45 ? (var_1_32 == ((unsigned long int) (max ((4199557168u - last_1_var_1_32) , (var_1_33 - var_1_30))))) : (var_1_32 == ((unsigned long int) 10000000u))) : (var_1_32 == ((unsigned long int) last_1_var_1_32)))) : 1)) && (((var_1_33 < var_1_30) && last_1_var_1_45) ? (var_1_34 == ((unsigned long int) (min (last_1_var_1_55 , (min (var_1_30 , var_1_3)))))) : ((var_1_13 >= (~ var_1_3)) ? (var_1_34 == ((unsigned long int) var_1_12)) : 1))) && (var_1_22 ? (var_1_35 == ((double) (min (var_1_6 , var_1_26)))) : (((- (last_1_var_1_35 + var_1_25)) > var_1_1) ? ((var_1_24 && (var_1_6 > var_1_25)) ? (var_1_35 == ((double) (var_1_5 + (abs (var_1_7))))) : (var_1_35 == ((double) (var_1_7 + var_1_36)))) : (var_1_35 == ((double) ((abs (var_1_7)) - var_1_38)))))) && ((var_1_56 != var_1_37) ? (var_1_39 == ((signed char) (min (var_1_40 , var_1_41)))) : (var_1_39 == ((signed char) (var_1_42 + (var_1_43 - var_1_44)))))) && ((25 < var_1_34) ? ((! var_1_22) ? (var_1_45 == ((unsigned char) (((var_1_21 || var_1_22) && var_1_46) && (! var_1_24)))) : 1) : 1)) && ((var_1_34 <= (var_1_8 / (min (10u , var_1_18)))) ? (var_1_47 == ((double) (min (var_1_27 , var_1_36)))) : (var_1_21 ? (var_1_47 == ((double) (var_1_7 + (max ((var_1_38 - 255.5) , var_1_5))))) : (var_1_47 == ((double) ((abs (var_1_7)) + (var_1_38 + var_1_5))))))) && (var_1_21 ? (var_1_48 == ((unsigned char) var_1_43)) : 1)) && ((((- var_1_18) * var_1_20) <= (var_1_41 / var_1_3)) ? (((var_1_32 * var_1_34) < var_1_33) ? (var_1_49 == ((signed char) (min (var_1_42 , var_1_40)))) : (var_1_49 == ((signed char) (var_1_42 + (max (var_1_43 , (var_1_44 - var_1_51))))))) : 1)) && (var_1_52 == ((signed short int) (var_1_51 - (18719 - (abs (var_1_32))))))) && ((((var_1_14 * var_1_16) * var_1_56) != (max (255.75f , (var_1_5 + var_1_25)))) ? ((var_1_13 < var_1_32) ? (var_1_53 == ((signed char) (var_1_44 - var_1_51))) : 1) : (var_1_53 == ((signed char) var_1_51)))) && ((var_1_32 > ((var_1_18 - var_1_19) << 1)) ? ((var_1_25 <= (abs (var_1_5))) ? (((- (- var_1_8)) >= (var_1_34 + var_1_42)) ? (var_1_55 == ((signed short int) (var_1_44 + (var_1_11 - 32)))) : (var_1_55 == ((signed short int) ((var_1_52 + (var_1_29 - var_1_8)) + -50)))) : (var_1_55 == ((signed short int) (min ((var_1_51 + (max (var_1_43 , var_1_42))) , var_1_19))))) : (var_1_55 == ((signed short int) (min (var_1_41 , -128)))))) && (((abs (var_1_43)) >= (min (var_1_17 , var_1_34))) ? (var_1_56 == ((double) (min ((var_1_37 - var_1_27) , var_1_6)))) : ((! var_1_21) ? (var_1_56 == ((double) ((max (9.4 , var_1_38)) - (max (var_1_27 , (max (var_1_26 , var_1_37))))))) : 1))) && ((var_1_37 >= var_1_35) ? ((((199.375 * var_1_35) >= var_1_7) && var_1_46) ? (var_1_57 == ((signed char) (var_1_43 + (var_1_58 + -5)))) : (var_1_57 == ((signed char) var_1_40))) : (var_1_57 == ((signed char) var_1_43)))
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

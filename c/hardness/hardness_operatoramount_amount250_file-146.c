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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed long int var_1_3 = 32;
signed long int var_1_4 = 100;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 256;
unsigned short int var_1_13 = 49113;
unsigned short int var_1_14 = 8;
unsigned short int var_1_15 = 32170;
unsigned short int var_1_16 = 27042;
unsigned char var_1_17 = 0;
signed short int var_1_21 = -256;
signed short int var_1_22 = 64;
signed short int var_1_23 = -32;
signed short int var_1_24 = -1;
unsigned long int var_1_25 = 0;
unsigned long int var_1_26 = 4;
signed char var_1_27 = 5;
signed char var_1_28 = 8;
signed char var_1_29 = -8;
signed char var_1_30 = -2;
signed char var_1_31 = 64;
signed char var_1_32 = 0;
signed short int var_1_33 = 64;
unsigned long int var_1_34 = 2985557672;
signed short int var_1_35 = 32;
signed long int var_1_36 = -25;
unsigned char var_1_37 = 0;
float var_1_39 = 0.1;
float var_1_40 = 63.4;
float var_1_41 = 10000000000.5;
unsigned long int var_1_42 = 256;
signed long int var_1_43 = 64;
unsigned char var_1_44 = 1;
signed long int var_1_46 = 64;
unsigned char var_1_47 = 1;
float var_1_48 = 5.5;
float var_1_49 = 0.75;
float var_1_50 = 63.4;
double var_1_51 = 10.2;
float var_1_52 = 49.65;
float var_1_53 = 3.25;
float var_1_54 = 0.0;
float var_1_55 = 7.25;
signed char var_1_56 = -64;
float var_1_57 = 100000.6;
unsigned long int var_1_58 = 32;
unsigned long int var_1_59 = 2937881280;
unsigned short int var_1_60 = 32;
unsigned long int var_1_61 = 1;
unsigned long int var_1_62 = 16;
unsigned short int var_1_63 = 256;
signed long int var_1_64 = -16;
signed long int var_1_65 = 100000000;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_17 = 0;
signed short int last_1_var_1_35 = 32;
float last_1_var_1_39 = 0.1;
unsigned char last_1_var_1_47 = 1;
unsigned long int last_1_var_1_58 = 32;
unsigned long int last_1_var_1_61 = 1;
signed long int last_1_var_1_64 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch146Amount250
	signed long int stepLocal_20 = -5 | var_1_43;
	if (last_1_var_1_58 >= stepLocal_20) {
		var_1_57 = (abs ((var_1_54 - var_1_55) - 128.5f));
	} else {
		var_1_57 = var_1_53;
	}


	// From: Req6Batch146Amount250
	unsigned long int stepLocal_8 = last_1_var_1_61;
	if (var_1_8) {
		var_1_26 = (3321171348u - var_1_14);
	} else {
		if (var_1_16 > stepLocal_8) {
			var_1_26 = (min ((min (var_1_4 , var_1_15)) , 128u));
		} else {
			if (! last_1_var_1_17) {
				if (last_1_var_1_47) {
					var_1_26 = 100u;
				} else {
					var_1_26 = last_1_var_1_61;
				}
			} else {
				var_1_26 = var_1_14;
			}
		}
	}


	// From: Req10Batch146Amount250
	if ((- (var_1_26 * 1u)) < 256u) {
		var_1_36 = (var_1_13 + var_1_23);
	} else {
		var_1_36 = (var_1_28 + var_1_13);
	}


	// From: Req3Batch146Amount250
	signed long int stepLocal_7 = var_1_3 / var_1_13;
	unsigned short int stepLocal_6 = var_1_15;
	signed long int stepLocal_5 = var_1_3;
	if ((last_1_var_1_39 + (0.25f + last_1_var_1_39)) >= 1.8f) {
		if (stepLocal_6 <= 1) {
			if (stepLocal_5 != last_1_var_1_64) {
				var_1_17 = var_1_10;
			}
		}
	} else {
		if (stepLocal_7 >= (min (last_1_var_1_64 , var_1_5))) {
			var_1_17 = var_1_10;
		} else {
			var_1_17 = var_1_8;
		}
	}


	// From: Req2Batch146Amount250
	unsigned long int stepLocal_4 = var_1_26;
	if (! (var_1_26 <= var_1_3)) {
		var_1_12 = (var_1_13 - var_1_14);
	} else {
		if (-8 > stepLocal_4) {
			var_1_12 = (min (((var_1_15 + var_1_16) - var_1_14) , var_1_13));
		}
	}


	// From: Req5Batch146Amount250
	var_1_25 = var_1_15;


	// From: Req16Batch146Amount250
	signed long int stepLocal_17 = var_1_43;
	if ((var_1_31 * var_1_29) == stepLocal_17) {
		var_1_47 = (var_1_11 || var_1_10);
	}


	// From: Req21Batch146Amount250
	var_1_60 = var_1_14;


	// From: Req23Batch146Amount250
	var_1_63 = var_1_13;


	// From: Req24Batch146Amount250
	var_1_64 = var_1_22;


	// From: Req25Batch146Amount250
	var_1_65 = -32;


	// From: Req13Batch146Amount250
	unsigned long int stepLocal_14 = var_1_43 - (var_1_16 + var_1_26);
	if (var_1_7) {
		if (var_1_36 < stepLocal_14) {
			var_1_42 = (min ((min (var_1_15 , var_1_16)) , (32u + var_1_4)));
		}
	}


	// From: Req22Batch146Amount250
	unsigned long int stepLocal_21 = var_1_42;
	if ((var_1_5 ^ var_1_42) < stepLocal_21) {
		var_1_61 = (min ((max (var_1_62 , (3319406950u - var_1_31))) , var_1_13));
	}


	// From: Req8Batch146Amount250
	signed long int stepLocal_11 = ~ var_1_28;
	unsigned long int stepLocal_10 = var_1_28 + (var_1_34 - var_1_15);
	unsigned char stepLocal_9 = var_1_47;
	if (var_1_8 || stepLocal_9) {
		if ((min (var_1_26 , var_1_4)) >= stepLocal_10) {
			if (stepLocal_11 > var_1_4) {
				var_1_33 = -50;
			} else {
				var_1_33 = var_1_22;
			}
		} else {
			var_1_33 = var_1_25;
		}
	}


	// From: Req9Batch146Amount250
	if (var_1_24 != var_1_29) {
		if (var_1_6 || (var_1_23 != (var_1_28 + var_1_61))) {
			var_1_35 = (max ((abs (-16 + var_1_22)) , last_1_var_1_35));
		} else {
			var_1_35 = (var_1_32 - (min (var_1_31 , var_1_28)));
		}
	} else {
		if (! var_1_6) {
			var_1_35 = (var_1_32 - var_1_31);
		}
	}


	// From: Req14Batch146Amount250
	unsigned long int stepLocal_15 = var_1_25;
	if (var_1_47) {
		if (stepLocal_15 < var_1_26) {
			var_1_44 = (! (var_1_11 || var_1_10));
		} else {
			var_1_44 = (! var_1_11);
		}
	} else {
		var_1_44 = (! var_1_8);
	}


	// From: Req15Batch146Amount250
	signed long int stepLocal_16 = -8;
	if (var_1_24 < stepLocal_16) {
		var_1_46 = var_1_60;
	}


	// From: Req17Batch146Amount250
	unsigned long int stepLocal_19 = (var_1_34 - var_1_31) / var_1_15;
	signed long int stepLocal_18 = var_1_13 - (var_1_31 + var_1_28);
	if (var_1_16 >= stepLocal_18) {
		var_1_48 = (max (var_1_40 , ((var_1_49 + var_1_50) + (abs (128.75f)))));
	} else {
		if (stepLocal_19 >= (var_1_42 * var_1_65)) {
			if ((var_1_57 / var_1_51) >= (0.8 - var_1_40)) {
				var_1_48 = (var_1_50 + (min (8.25f , var_1_49)));
			} else {
				var_1_48 = (((var_1_52 + 127.2f) + var_1_53) + (max (var_1_49 , var_1_50)));
			}
		} else {
			var_1_48 = ((abs (abs (var_1_41))) - (var_1_54 - var_1_55));
		}
	}


	// From: Req7Batch146Amount250
	if (var_1_10 && var_1_11) {
		if ((64 * (var_1_24 + var_1_4)) > ((var_1_36 - 1000000000) + var_1_15)) {
			var_1_27 = (16 - var_1_28);
		}
	} else {
		if (var_1_48 >= var_1_57) {
			var_1_27 = (var_1_29 + (-8 + (min (var_1_30 , -16))));
		} else {
			var_1_27 = ((var_1_31 - var_1_32) - var_1_28);
		}
	}


	// From: Req12Batch146Amount250
	unsigned char stepLocal_13 = var_1_17;
	signed long int stepLocal_12 = var_1_3;
	if (var_1_48 > var_1_57) {
		var_1_39 = (max ((min ((var_1_40 - 24.5f) , var_1_41)) , -0.75f));
	} else {
		if (stepLocal_13 || ((var_1_34 - var_1_4) > var_1_14)) {
			var_1_39 = var_1_41;
		} else {
			if (var_1_60 <= stepLocal_12) {
				var_1_39 = 4.8f;
			} else {
				var_1_39 = (abs (16.1f));
			}
		}
	}


	// From: Req20Batch146Amount250
	if (var_1_39 > var_1_51) {
		var_1_58 = (var_1_59 - var_1_4);
	}


	// From: Req1Batch146Amount250
	signed long int stepLocal_3 = var_1_65;
	signed long int stepLocal_2 = var_1_65 / var_1_5;
	signed long int stepLocal_1 = var_1_3;
	signed long int stepLocal_0 = var_1_3 / var_1_5;
	if (stepLocal_3 == (var_1_3 - var_1_4)) {
		if (stepLocal_2 <= var_1_3) {
			var_1_1 = (var_1_6 && (var_1_7 && var_1_8));
		} else {
			var_1_1 = (! var_1_6);
		}
	} else {
		if ((var_1_27 & var_1_4) != stepLocal_0) {
			if (stepLocal_1 < -64) {
				var_1_1 = (var_1_10 || var_1_11);
			}
		}
	}


	// From: Req11Batch146Amount250
	if ((- var_1_39) > var_1_48) {
		var_1_37 = (((- var_1_32) >= var_1_3) && (var_1_7 && (! var_1_6)));
	} else {
		var_1_37 = (((max (var_1_48 , var_1_39)) > var_1_48) || var_1_6);
	}


	// From: Req18Batch146Amount250
	if (var_1_54 == ((100.375f - var_1_40) * var_1_39)) {
		var_1_56 = (var_1_30 + var_1_29);
	}


	// From: Req4Batch146Amount250
	if (var_1_13 < (var_1_15 * (min (var_1_46 , var_1_14)))) {
		if (var_1_5 < var_1_16) {
			if (var_1_26 < var_1_16) {
				var_1_21 = (max ((var_1_56 + (-2 + var_1_22)) , var_1_23));
			}
		} else {
			var_1_21 = ((max (var_1_56 , var_1_22)) + var_1_24);
		}
	} else {
		var_1_21 = (min (var_1_23 , var_1_24));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16384);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= -8191);
	assume_abort_if_not(var_1_22 <= 8191);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32767);
	assume_abort_if_not(var_1_23 <= 32766);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -16383);
	assume_abort_if_not(var_1_24 <= 16383);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -31);
	assume_abort_if_not(var_1_30 <= 31);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 62);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967295);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -1);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -230584.3009213691400e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -230584.3009213691400e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -115292.1504606845700e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 1152921.504606845700e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -230584.3009213691400e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691400e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 4611686.018427383000e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_17 = var_1_17;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_64 = var_1_64;
}

int property(void) {
	return (((((((((((((((((((((((((var_1_65 == (var_1_3 - var_1_4)) ? (((var_1_65 / var_1_5) <= var_1_3) ? (var_1_1 == ((unsigned char) (var_1_6 && (var_1_7 && var_1_8)))) : (var_1_1 == ((unsigned char) (! var_1_6)))) : (((var_1_27 & var_1_4) != (var_1_3 / var_1_5)) ? ((var_1_3 < -64) ? (var_1_1 == ((unsigned char) (var_1_10 || var_1_11))) : 1) : 1)) && ((! (var_1_26 <= var_1_3)) ? (var_1_12 == ((unsigned short int) (var_1_13 - var_1_14))) : ((-8 > var_1_26) ? (var_1_12 == ((unsigned short int) (min (((var_1_15 + var_1_16) - var_1_14) , var_1_13)))) : 1))) && (((last_1_var_1_39 + (0.25f + last_1_var_1_39)) >= 1.8f) ? ((var_1_15 <= 1) ? ((var_1_3 != last_1_var_1_64) ? (var_1_17 == ((unsigned char) var_1_10)) : 1) : 1) : (((var_1_3 / var_1_13) >= (min (last_1_var_1_64 , var_1_5))) ? (var_1_17 == ((unsigned char) var_1_10)) : (var_1_17 == ((unsigned char) var_1_8))))) && ((var_1_13 < (var_1_15 * (min (var_1_46 , var_1_14)))) ? ((var_1_5 < var_1_16) ? ((var_1_26 < var_1_16) ? (var_1_21 == ((signed short int) (max ((var_1_56 + (-2 + var_1_22)) , var_1_23)))) : 1) : (var_1_21 == ((signed short int) ((max (var_1_56 , var_1_22)) + var_1_24)))) : (var_1_21 == ((signed short int) (min (var_1_23 , var_1_24)))))) && (var_1_25 == ((unsigned long int) var_1_15))) && (var_1_8 ? (var_1_26 == ((unsigned long int) (3321171348u - var_1_14))) : ((var_1_16 > last_1_var_1_61) ? (var_1_26 == ((unsigned long int) (min ((min (var_1_4 , var_1_15)) , 128u)))) : ((! last_1_var_1_17) ? (last_1_var_1_47 ? (var_1_26 == ((unsigned long int) 100u)) : (var_1_26 == ((unsigned long int) last_1_var_1_61))) : (var_1_26 == ((unsigned long int) var_1_14)))))) && ((var_1_10 && var_1_11) ? (((64 * (var_1_24 + var_1_4)) > ((var_1_36 - 1000000000) + var_1_15)) ? (var_1_27 == ((signed char) (16 - var_1_28))) : 1) : ((var_1_48 >= var_1_57) ? (var_1_27 == ((signed char) (var_1_29 + (-8 + (min (var_1_30 , -16)))))) : (var_1_27 == ((signed char) ((var_1_31 - var_1_32) - var_1_28)))))) && ((var_1_8 || var_1_47) ? (((min (var_1_26 , var_1_4)) >= (var_1_28 + (var_1_34 - var_1_15))) ? (((~ var_1_28) > var_1_4) ? (var_1_33 == ((signed short int) -50)) : (var_1_33 == ((signed short int) var_1_22))) : (var_1_33 == ((signed short int) var_1_25))) : 1)) && ((var_1_24 != var_1_29) ? ((var_1_6 || (var_1_23 != (var_1_28 + var_1_61))) ? (var_1_35 == ((signed short int) (max ((abs (-16 + var_1_22)) , last_1_var_1_35)))) : (var_1_35 == ((signed short int) (var_1_32 - (min (var_1_31 , var_1_28)))))) : ((! var_1_6) ? (var_1_35 == ((signed short int) (var_1_32 - var_1_31))) : 1))) && (((- (var_1_26 * 1u)) < 256u) ? (var_1_36 == ((signed long int) (var_1_13 + var_1_23))) : (var_1_36 == ((signed long int) (var_1_28 + var_1_13))))) && (((- var_1_39) > var_1_48) ? (var_1_37 == ((unsigned char) (((- var_1_32) >= var_1_3) && (var_1_7 && (! var_1_6))))) : (var_1_37 == ((unsigned char) (((max (var_1_48 , var_1_39)) > var_1_48) || var_1_6))))) && ((var_1_48 > var_1_57) ? (var_1_39 == ((float) (max ((min ((var_1_40 - 24.5f) , var_1_41)) , -0.75f)))) : ((var_1_17 || ((var_1_34 - var_1_4) > var_1_14)) ? (var_1_39 == ((float) var_1_41)) : ((var_1_60 <= var_1_3) ? (var_1_39 == ((float) 4.8f)) : (var_1_39 == ((float) (abs (16.1f)))))))) && (var_1_7 ? ((var_1_36 < (var_1_43 - (var_1_16 + var_1_26))) ? (var_1_42 == ((unsigned long int) (min ((min (var_1_15 , var_1_16)) , (32u + var_1_4))))) : 1) : 1)) && (var_1_47 ? ((var_1_25 < var_1_26) ? (var_1_44 == ((unsigned char) (! (var_1_11 || var_1_10)))) : (var_1_44 == ((unsigned char) (! var_1_11)))) : (var_1_44 == ((unsigned char) (! var_1_8))))) && ((var_1_24 < -8) ? (var_1_46 == ((signed long int) var_1_60)) : 1)) && (((var_1_31 * var_1_29) == var_1_43) ? (var_1_47 == ((unsigned char) (var_1_11 || var_1_10))) : 1)) && ((var_1_16 >= (var_1_13 - (var_1_31 + var_1_28))) ? (var_1_48 == ((float) (max (var_1_40 , ((var_1_49 + var_1_50) + (abs (128.75f))))))) : ((((var_1_34 - var_1_31) / var_1_15) >= (var_1_42 * var_1_65)) ? (((var_1_57 / var_1_51) >= (0.8 - var_1_40)) ? (var_1_48 == ((float) (var_1_50 + (min (8.25f , var_1_49))))) : (var_1_48 == ((float) (((var_1_52 + 127.2f) + var_1_53) + (max (var_1_49 , var_1_50)))))) : (var_1_48 == ((float) ((abs (abs (var_1_41))) - (var_1_54 - var_1_55))))))) && ((var_1_54 == ((100.375f - var_1_40) * var_1_39)) ? (var_1_56 == ((signed char) (var_1_30 + var_1_29))) : 1)) && ((last_1_var_1_58 >= (-5 | var_1_43)) ? (var_1_57 == ((float) (abs ((var_1_54 - var_1_55) - 128.5f)))) : (var_1_57 == ((float) var_1_53)))) && ((var_1_39 > var_1_51) ? (var_1_58 == ((unsigned long int) (var_1_59 - var_1_4))) : 1)) && (var_1_60 == ((unsigned short int) var_1_14))) && (((var_1_5 ^ var_1_42) < var_1_42) ? (var_1_61 == ((unsigned long int) (min ((max (var_1_62 , (3319406950u - var_1_31))) , var_1_13)))) : 1)) && (var_1_63 == ((unsigned short int) var_1_13))) && (var_1_64 == ((signed long int) var_1_22))) && (var_1_65 == ((signed long int) -32))
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

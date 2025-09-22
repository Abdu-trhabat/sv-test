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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch95Amount250.c", 13, "reach_error"); }
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
double var_1_2 = 3.75;
double var_1_3 = 32.25;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed char var_1_8 = 10;
double var_1_9 = 10.9;
signed char var_1_10 = 64;
signed char var_1_11 = 10;
signed char var_1_12 = 8;
signed char var_1_13 = 0;
signed char var_1_14 = -8;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
signed char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
signed short int var_1_20 = -128;
float var_1_21 = 32.5;
float var_1_22 = 99999.25;
signed short int var_1_23 = 64;
signed long int var_1_24 = -4;
unsigned char var_1_25 = 10;
unsigned char var_1_26 = 100;
double var_1_27 = 32.4;
double var_1_28 = 0.0;
double var_1_29 = 31.5;
double var_1_30 = 49.5;
double var_1_31 = 256.3;
double var_1_32 = 4.4;
double var_1_33 = 8.8;
unsigned short int var_1_34 = 0;
unsigned short int var_1_35 = 17182;
unsigned short int var_1_36 = 31875;
signed long int var_1_37 = 1253842326;
unsigned long int var_1_38 = 1;
signed long int var_1_39 = 0;
double var_1_40 = 256.8;
signed short int var_1_41 = 32;
signed char var_1_42 = -100;
double var_1_43 = 63.75;
double var_1_44 = 0.0;
double var_1_45 = 0.0;
signed char var_1_46 = -128;
signed char var_1_47 = 50;
signed char var_1_48 = -100;
signed long int var_1_49 = 32;
signed short int var_1_50 = -256;
unsigned long int var_1_51 = 1;
unsigned long int var_1_52 = 3725856494;
unsigned long int var_1_53 = 1000000000;
unsigned long int var_1_54 = 1000000000;
float var_1_55 = 255.75;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 0;

// Calibration values

// Last'ed variables
double last_1_var_1_27 = 32.4;
double last_1_var_1_43 = 63.75;
signed short int last_1_var_1_50 = -256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch95Amount250
	if (last_1_var_1_43 > last_1_var_1_27) {
		var_1_15 = ((last_1_var_1_27 == 31.65) || var_1_16);
	}


	// From: Req10Batch95Amount250
	if (var_1_15) {
		var_1_27 = ((var_1_28 - var_1_29) - ((4.140687232810147E18 - var_1_30) + var_1_31));
	} else {
		if (var_1_31 == (max (var_1_22 , (var_1_3 + var_1_9)))) {
			var_1_27 = (min ((var_1_30 + var_1_29) , (min ((var_1_31 + var_1_32) , var_1_28))));
		} else {
			var_1_27 = (max ((min ((var_1_28 - var_1_30) , (var_1_31 - var_1_29))) , 2.75));
		}
	}


	// From: Req1Batch95Amount250
	unsigned char stepLocal_0 = (var_1_4 || var_1_5) && var_1_6;
	if (var_1_2 > var_1_3) {
		if (var_1_3 < var_1_2) {
			if (stepLocal_0 && var_1_7) {
				var_1_1 = (8 - (64 - var_1_8));
			} else {
				if (var_1_9 <= (var_1_3 / 15.8)) {
					var_1_1 = -4;
				} else {
					var_1_1 = (max (((var_1_10 - var_1_8) - var_1_11) , (min ((var_1_12 - var_1_13) , var_1_14))));
				}
			}
		}
	}


	// From: Req4Batch95Amount250
	if (var_1_16) {
		var_1_18 = (abs (var_1_8));
	} else {
		var_1_18 = (var_1_19 - 64);
	}


	// From: Req8Batch95Amount250
	var_1_24 = -100;


	// From: Req9Batch95Amount250
	if (var_1_16) {
		var_1_25 = (max (var_1_11 , (var_1_19 - (64 - var_1_8))));
	} else {
		var_1_25 = (var_1_19 - (max (var_1_10 , var_1_26)));
	}


	// From: Req17Batch95Amount250
	if (var_1_15) {
		var_1_46 = (var_1_10 - var_1_8);
	}


	// From: Req18Batch95Amount250
	var_1_48 = (var_1_47 - (64 - var_1_8));


	// From: Req19Batch95Amount250
	if (var_1_16) {
		var_1_49 = (2 - ((var_1_38 + var_1_35) + var_1_11));
	} else {
		var_1_49 = var_1_46;
	}


	// From: Req23Batch95Amount250
	if (var_1_36 >= (var_1_10 / var_1_19)) {
		if (! var_1_16) {
			var_1_56 = (! var_1_16);
		} else {
			var_1_56 = (! var_1_57);
		}
	}


	// From: Req5Batch95Amount250
	var_1_20 = (var_1_13 - ((var_1_11 + 50) + (max (var_1_25 , var_1_19))));


	// From: Req6Batch95Amount250
	if ((4.5 / 9999.5) > (max (var_1_9 , var_1_3))) {
		var_1_21 = 4.6f;
	} else {
		if (var_1_56) {
			var_1_21 = var_1_22;
		} else {
			var_1_21 = (min (var_1_22 , 64.8f));
		}
	}


	// From: Req14Batch95Amount250
	if (var_1_30 <= (var_1_27 * var_1_31)) {
		var_1_41 = (var_1_13 - var_1_38);
	} else {
		if (var_1_56) {
			var_1_41 = ((max (var_1_8 , (256 + var_1_10))) - var_1_19);
		} else {
			var_1_41 = (128 - var_1_11);
		}
	}


	// From: Req16Batch95Amount250
	unsigned char stepLocal_5 = var_1_19;
	if (var_1_56) {
		var_1_43 = ((var_1_31 + var_1_30) - ((var_1_44 + var_1_45) - var_1_29));
	} else {
		if (stepLocal_5 <= var_1_36) {
			if (var_1_56) {
				var_1_43 = (max ((abs (var_1_28)) , var_1_29));
			} else {
				var_1_43 = ((abs (var_1_28 - var_1_30)) - (var_1_45 + var_1_29));
			}
		} else {
			var_1_43 = (max ((0.625 + (var_1_30 - var_1_44)) , var_1_29));
		}
	}


	// From: Req21Batch95Amount250
	if ((var_1_26 + var_1_49) > (var_1_35 / (abs (var_1_38)))) {
		if (var_1_16) {
			var_1_51 = var_1_20;
		}
	} else {
		if (var_1_56) {
			var_1_51 = var_1_49;
		} else {
			if (var_1_15) {
				var_1_51 = (var_1_52 - ((var_1_53 + var_1_54) - var_1_11));
			}
		}
	}


	// From: Req22Batch95Amount250
	if (! var_1_15) {
		if (var_1_43 == var_1_27) {
			var_1_55 = (var_1_29 + var_1_32);
		} else {
			var_1_55 = 64.91f;
		}
	} else {
		var_1_55 = var_1_45;
	}


	// From: Req11Batch95Amount250
	unsigned char stepLocal_2 = var_1_15 || (var_1_41 > var_1_8);
	if (stepLocal_2 && (var_1_27 > var_1_30)) {
		var_1_33 = (var_1_31 - var_1_29);
	} else {
		var_1_33 = (var_1_31 + var_1_30);
	}


	// From: Req13Batch95Amount250
	if ((max (var_1_28 , (var_1_32 + 63.125))) <= (var_1_22 / var_1_40)) {
		if ((var_1_29 / (min (var_1_40 , var_1_28))) >= (var_1_32 * var_1_33)) {
			var_1_39 = var_1_11;
		}
	} else {
		var_1_39 = var_1_36;
	}


	// From: Req7Batch95Amount250
	unsigned char stepLocal_1 = var_1_56;
	if (! var_1_56) {
		var_1_23 = (min (var_1_8 , var_1_39));
	} else {
		if (stepLocal_1 || (var_1_10 > var_1_13)) {
			var_1_23 = ((var_1_19 + 2) - var_1_10);
		} else {
			var_1_23 = var_1_19;
		}
	}


	// From: Req15Batch95Amount250
	if ((var_1_29 / (abs (var_1_40))) < ((var_1_33 + var_1_32) + var_1_22)) {
		if (var_1_15) {
			var_1_42 = -8;
		}
	} else {
		if ((- var_1_36) >= ((var_1_23 + var_1_10) * (var_1_13 + -100))) {
			if (! ((var_1_19 - var_1_26) > var_1_51)) {
				var_1_42 = (var_1_8 + var_1_38);
			} else {
				var_1_42 = (var_1_13 - (var_1_38 + var_1_8));
			}
		} else {
			var_1_42 = (var_1_8 + var_1_38);
		}
	}


	// From: Req20Batch95Amount250
	signed long int stepLocal_6 = (var_1_11 | 2) | (var_1_12 - var_1_26);
	if (var_1_56) {
		if ((var_1_23 + var_1_24) >= stepLocal_6) {
			var_1_50 = (max (var_1_10 , var_1_18));
		}
	} else {
		var_1_50 = ((var_1_19 - var_1_23) + last_1_var_1_50);
	}


	// From: Req12Batch95Amount250
	signed long int stepLocal_4 = var_1_11 / var_1_36;
	signed long int stepLocal_3 = (var_1_10 + var_1_11) - (var_1_37 - var_1_26);
	if (((var_1_35 + var_1_36) - (min (64 , var_1_50))) <= stepLocal_3) {
		if (stepLocal_4 < (var_1_13 >> var_1_38)) {
			var_1_34 = (min (var_1_50 , var_1_10));
		} else {
			var_1_34 = (max (var_1_24 , 32));
		}
	} else {
		var_1_34 = (max (var_1_19 , var_1_10));
	}


	// From: Req3Batch95Amount250
	if ((abs (var_1_11)) == (var_1_13 + var_1_10)) {
		if ((var_1_34 * 256) >= var_1_11) {
			var_1_17 = (max ((var_1_12 - var_1_10) , (min (var_1_14 , (min (var_1_8 , -5))))));
		} else {
			var_1_17 = var_1_13;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 62);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 4611686.018427383000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 16383);
	assume_abort_if_not(var_1_35 <= 32768);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 16384);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 1073741823);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 6);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	assume_abort_if_not(var_1_40 != 0.0F);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 2305843.009213691400e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 2305843.009213691400e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 536870911);
	assume_abort_if_not(var_1_53 <= 1073741824);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 536870912);
	assume_abort_if_not(var_1_54 <= 1073741823);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_27 = var_1_27;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_50 = var_1_50;
}

int property(void) {
	return (((((((((((((((((((((((var_1_2 > var_1_3) ? ((var_1_3 < var_1_2) ? ((((var_1_4 || var_1_5) && var_1_6) && var_1_7) ? (var_1_1 == ((signed char) (8 - (64 - var_1_8)))) : ((var_1_9 <= (var_1_3 / 15.8)) ? (var_1_1 == ((signed char) -4)) : (var_1_1 == ((signed char) (max (((var_1_10 - var_1_8) - var_1_11) , (min ((var_1_12 - var_1_13) , var_1_14)))))))) : 1) : 1) && ((last_1_var_1_43 > last_1_var_1_27) ? (var_1_15 == ((unsigned char) ((last_1_var_1_27 == 31.65) || var_1_16))) : 1)) && (((abs (var_1_11)) == (var_1_13 + var_1_10)) ? (((var_1_34 * 256) >= var_1_11) ? (var_1_17 == ((signed char) (max ((var_1_12 - var_1_10) , (min (var_1_14 , (min (var_1_8 , -5)))))))) : (var_1_17 == ((signed char) var_1_13))) : 1)) && (var_1_16 ? (var_1_18 == ((unsigned char) (abs (var_1_8)))) : (var_1_18 == ((unsigned char) (var_1_19 - 64))))) && (var_1_20 == ((signed short int) (var_1_13 - ((var_1_11 + 50) + (max (var_1_25 , var_1_19))))))) && (((4.5 / 9999.5) > (max (var_1_9 , var_1_3))) ? (var_1_21 == ((float) 4.6f)) : (var_1_56 ? (var_1_21 == ((float) var_1_22)) : (var_1_21 == ((float) (min (var_1_22 , 64.8f))))))) && ((! var_1_56) ? (var_1_23 == ((signed short int) (min (var_1_8 , var_1_39)))) : ((var_1_56 || (var_1_10 > var_1_13)) ? (var_1_23 == ((signed short int) ((var_1_19 + 2) - var_1_10))) : (var_1_23 == ((signed short int) var_1_19))))) && (var_1_24 == ((signed long int) -100))) && (var_1_16 ? (var_1_25 == ((unsigned char) (max (var_1_11 , (var_1_19 - (64 - var_1_8)))))) : (var_1_25 == ((unsigned char) (var_1_19 - (max (var_1_10 , var_1_26))))))) && (var_1_15 ? (var_1_27 == ((double) ((var_1_28 - var_1_29) - ((4.140687232810147E18 - var_1_30) + var_1_31)))) : ((var_1_31 == (max (var_1_22 , (var_1_3 + var_1_9)))) ? (var_1_27 == ((double) (min ((var_1_30 + var_1_29) , (min ((var_1_31 + var_1_32) , var_1_28)))))) : (var_1_27 == ((double) (max ((min ((var_1_28 - var_1_30) , (var_1_31 - var_1_29))) , 2.75))))))) && (((var_1_15 || (var_1_41 > var_1_8)) && (var_1_27 > var_1_30)) ? (var_1_33 == ((double) (var_1_31 - var_1_29))) : (var_1_33 == ((double) (var_1_31 + var_1_30))))) && ((((var_1_35 + var_1_36) - (min (64 , var_1_50))) <= ((var_1_10 + var_1_11) - (var_1_37 - var_1_26))) ? (((var_1_11 / var_1_36) < (var_1_13 >> var_1_38)) ? (var_1_34 == ((unsigned short int) (min (var_1_50 , var_1_10)))) : (var_1_34 == ((unsigned short int) (max (var_1_24 , 32))))) : (var_1_34 == ((unsigned short int) (max (var_1_19 , var_1_10)))))) && (((max (var_1_28 , (var_1_32 + 63.125))) <= (var_1_22 / var_1_40)) ? (((var_1_29 / (min (var_1_40 , var_1_28))) >= (var_1_32 * var_1_33)) ? (var_1_39 == ((signed long int) var_1_11)) : 1) : (var_1_39 == ((signed long int) var_1_36)))) && ((var_1_30 <= (var_1_27 * var_1_31)) ? (var_1_41 == ((signed short int) (var_1_13 - var_1_38))) : (var_1_56 ? (var_1_41 == ((signed short int) ((max (var_1_8 , (256 + var_1_10))) - var_1_19))) : (var_1_41 == ((signed short int) (128 - var_1_11)))))) && (((var_1_29 / (abs (var_1_40))) < ((var_1_33 + var_1_32) + var_1_22)) ? (var_1_15 ? (var_1_42 == ((signed char) -8)) : 1) : (((- var_1_36) >= ((var_1_23 + var_1_10) * (var_1_13 + -100))) ? ((! ((var_1_19 - var_1_26) > var_1_51)) ? (var_1_42 == ((signed char) (var_1_8 + var_1_38))) : (var_1_42 == ((signed char) (var_1_13 - (var_1_38 + var_1_8))))) : (var_1_42 == ((signed char) (var_1_8 + var_1_38)))))) && (var_1_56 ? (var_1_43 == ((double) ((var_1_31 + var_1_30) - ((var_1_44 + var_1_45) - var_1_29)))) : ((var_1_19 <= var_1_36) ? (var_1_56 ? (var_1_43 == ((double) (max ((abs (var_1_28)) , var_1_29)))) : (var_1_43 == ((double) ((abs (var_1_28 - var_1_30)) - (var_1_45 + var_1_29))))) : (var_1_43 == ((double) (max ((0.625 + (var_1_30 - var_1_44)) , var_1_29))))))) && (var_1_15 ? (var_1_46 == ((signed char) (var_1_10 - var_1_8))) : 1)) && (var_1_48 == ((signed char) (var_1_47 - (64 - var_1_8))))) && (var_1_16 ? (var_1_49 == ((signed long int) (2 - ((var_1_38 + var_1_35) + var_1_11)))) : (var_1_49 == ((signed long int) var_1_46)))) && (var_1_56 ? (((var_1_23 + var_1_24) >= ((var_1_11 | 2) | (var_1_12 - var_1_26))) ? (var_1_50 == ((signed short int) (max (var_1_10 , var_1_18)))) : 1) : (var_1_50 == ((signed short int) ((var_1_19 - var_1_23) + last_1_var_1_50))))) && (((var_1_26 + var_1_49) > (var_1_35 / (abs (var_1_38)))) ? (var_1_16 ? (var_1_51 == ((unsigned long int) var_1_20)) : 1) : (var_1_56 ? (var_1_51 == ((unsigned long int) var_1_49)) : (var_1_15 ? (var_1_51 == ((unsigned long int) (var_1_52 - ((var_1_53 + var_1_54) - var_1_11)))) : 1)))) && ((! var_1_15) ? ((var_1_43 == var_1_27) ? (var_1_55 == ((float) (var_1_29 + var_1_32))) : (var_1_55 == ((float) 64.91f))) : (var_1_55 == ((float) var_1_45)))) && ((var_1_36 >= (var_1_10 / var_1_19)) ? ((! var_1_16) ? (var_1_56 == ((unsigned char) (! var_1_16))) : (var_1_56 == ((unsigned char) (! var_1_57)))) : 1)
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

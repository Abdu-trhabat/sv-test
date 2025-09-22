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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 255.75;
double var_1_6 = 5.25;
double var_1_7 = 99.25;
double var_1_8 = 3.7;
unsigned short int var_1_9 = 128;
signed char var_1_10 = 100;
signed char var_1_11 = 1;
signed long int var_1_12 = 32;
unsigned short int var_1_13 = 10000;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
double var_1_18 = 31.4;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 10;
signed char var_1_21 = -128;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 128;
unsigned long int var_1_24 = 256;
unsigned char var_1_25 = 32;
unsigned short int var_1_26 = 5;
unsigned short int var_1_27 = 4;
float var_1_28 = 63.475;
float var_1_29 = 1.5;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 10;
unsigned short int var_1_33 = 2;
double var_1_34 = 15.4;
double var_1_35 = 25.375;
float var_1_36 = 16.8;
double var_1_37 = 1000000000000000.2;
double var_1_38 = 128.8;
double var_1_39 = 199.9;
double var_1_40 = 50.5;
double var_1_41 = 24.875;
double var_1_42 = -0.8;
unsigned long int var_1_43 = 32;
unsigned long int var_1_44 = 2023381808;
unsigned long int var_1_45 = 256;
double var_1_46 = 63.6;
unsigned long int var_1_47 = 4288800150;
unsigned long int var_1_48 = 3644355517;
unsigned char var_1_49 = 1;
float var_1_50 = 128.8;
double var_1_51 = 128.25;
double var_1_52 = 255.5;
double var_1_53 = 63.075;
signed char var_1_54 = -4;
signed char var_1_55 = -100;
signed char var_1_56 = 16;
signed char var_1_57 = 1;
signed char var_1_58 = 16;
signed char var_1_59 = -32;
signed char var_1_60 = 5;
signed char var_1_61 = 16;
float var_1_62 = 999999.5;
float var_1_63 = 500.4;
double var_1_64 = 0.5;
unsigned char var_1_65 = 0;
signed short int var_1_66 = 64;
signed long int var_1_67 = 0;
unsigned short int var_1_68 = 128;
unsigned short int var_1_69 = 59378;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_14 = 0;
unsigned long int last_1_var_1_24 = 256;
unsigned long int last_1_var_1_43 = 32;
unsigned char last_1_var_1_49 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch187Amount250
	if (last_1_var_1_49) {
		var_1_25 = (var_1_23 - var_1_11);
	} else {
		var_1_25 = (var_1_11 + var_1_15);
	}


	// From: Req6Batch187Amount250
	if (var_1_7 >= var_1_18) {
		var_1_22 = (abs (var_1_11));
	} else {
		var_1_22 = (var_1_23 - var_1_15);
	}


	// From: Req9Batch187Amount250
	if (var_1_10 != var_1_12) {
		var_1_26 = var_1_27;
	}


	// From: Req11Batch187Amount250
	if (var_1_19) {
		var_1_30 = (! var_1_31);
	}


	// From: Req13Batch187Amount250
	if (((var_1_34 + var_1_35) - var_1_18) >= ((- 256.5) * var_1_6)) {
		var_1_33 = var_1_23;
	}


	// From: Req19Batch187Amount250
	var_1_50 = (abs (128.75f));


	// From: Req21Batch187Amount250
	if (var_1_15 < var_1_23) {
		var_1_54 = var_1_55;
	} else {
		var_1_54 = (var_1_15 - (var_1_56 + (max (var_1_57 , var_1_58))));
	}


	// From: Req22Batch187Amount250
	if (var_1_16) {
		var_1_59 = (max ((min (var_1_55 , var_1_15)) , var_1_58));
	} else {
		if (var_1_58 <= ((abs (var_1_11)) - 2)) {
			var_1_59 = (var_1_56 + ((var_1_15 + var_1_60) + var_1_61));
		} else {
			var_1_59 = ((abs (min (16 , var_1_61))) + (var_1_57 - 5));
		}
	}


	// From: Req24Batch187Amount250
	signed long int stepLocal_11 = var_1_25 - var_1_57;
	signed char stepLocal_10 = var_1_10;
	if ((var_1_29 / 1.5f) > var_1_63) {
		if (var_1_57 > stepLocal_10) {
			if (stepLocal_11 < -1) {
				var_1_64 = (var_1_35 - (var_1_52 + var_1_39));
			} else {
				var_1_64 = var_1_7;
			}
		} else {
			var_1_64 = ((max (var_1_29 , var_1_52)) - var_1_63);
		}
	} else {
		var_1_64 = var_1_52;
	}


	// From: Req25Batch187Amount250
	var_1_65 = var_1_15;


	// From: Req26Batch187Amount250
	var_1_66 = var_1_11;


	// From: Req18Batch187Amount250
	unsigned char stepLocal_9 = var_1_65;
	if (var_1_25 == stepLocal_9) {
		var_1_49 = (! (! var_1_16));
	}


	// From: Req3Batch187Amount250
	if ((var_1_11 >> var_1_15) <= (var_1_10 / -64)) {
		if (last_1_var_1_14) {
			if ((var_1_7 + var_1_6) <= 100.75) {
				if (! var_1_30) {
					var_1_14 = (var_1_16 || var_1_17);
				}
			} else {
				var_1_14 = (((var_1_18 - 1.0000000005E9) <= 63.5) || var_1_19);
			}
		}
	}


	// From: Req4Batch187Amount250
	signed long int stepLocal_3 = ~ var_1_13;
	if (var_1_8 >= ((- var_1_7) + (max (var_1_64 , var_1_6)))) {
		var_1_20 = (var_1_15 + var_1_11);
	} else {
		if (stepLocal_3 < var_1_12) {
			var_1_20 = var_1_13;
		} else {
			var_1_20 = var_1_11;
		}
	}


	// From: Req7Batch187Amount250
	if ((var_1_19 || var_1_16) || var_1_30) {
		if ((abs (var_1_18)) >= var_1_6) {
			if (var_1_30) {
				var_1_24 = ((min (var_1_23 , (min (var_1_15 , last_1_var_1_24)))) + var_1_20);
			} else {
				var_1_24 = var_1_15;
			}
		} else {
			var_1_24 = 10u;
		}
	} else {
		if (var_1_49) {
			var_1_24 = (var_1_11 + (var_1_13 + var_1_15));
		}
	}


	// From: Req15Batch187Amount250
	unsigned short int stepLocal_6 = var_1_27;
	if (! (var_1_20 <= var_1_24)) {
		if (var_1_24 > stepLocal_6) {
			var_1_37 = ((var_1_38 + (var_1_39 - var_1_40)) + var_1_41);
		} else {
			if (var_1_40 != 2.4) {
				var_1_37 = (max (var_1_41 , var_1_8));
			}
		}
	} else {
		var_1_37 = ((min ((var_1_38 + var_1_42) , var_1_39)) + var_1_41);
	}


	// From: Req17Batch187Amount250
	unsigned char stepLocal_8 = var_1_22;
	if ((var_1_29 / var_1_46) > ((min (var_1_37 , var_1_38)) * var_1_6)) {
		if (stepLocal_8 >= (- var_1_13)) {
			var_1_45 = ((abs (var_1_47)) - (var_1_44 - var_1_24));
		}
	} else {
		var_1_45 = ((var_1_48 - 1u) - (var_1_24 + var_1_66));
	}


	// From: Req20Batch187Amount250
	if (var_1_30) {
		if ((4 > var_1_27) || (var_1_64 < var_1_35)) {
			var_1_51 = (((var_1_40 + var_1_39) - (max (var_1_52 , 63.5))) + var_1_38);
		} else {
			var_1_51 = (var_1_52 + var_1_53);
		}
	}


	// From: Req23Batch187Amount250
	if (var_1_56 >= var_1_66) {
		if (var_1_13 <= (var_1_23 + var_1_47)) {
			var_1_62 = (var_1_40 + (min (var_1_52 , (var_1_39 - var_1_63))));
		} else {
			var_1_62 = ((min (var_1_63 , 10.45f)) - (var_1_52 + (abs (var_1_42))));
		}
	}


	// From: Req16Batch187Amount250
	unsigned char stepLocal_7 = var_1_23;
	if ((0.5f - var_1_18) < (min (var_1_51 , var_1_6))) {
		var_1_43 = (var_1_22 + (var_1_44 - (var_1_20 + var_1_26)));
	} else {
		if (last_1_var_1_43 < stepLocal_7) {
			var_1_43 = var_1_44;
		}
	}


	// From: Req27Batch187Amount250
	if (var_1_19) {
		var_1_67 = var_1_43;
	} else {
		var_1_67 = var_1_61;
	}


	// From: Req28Batch187Amount250
	unsigned long int stepLocal_13 = var_1_43;
	unsigned char stepLocal_12 = var_1_24 < var_1_58;
	if (8u < stepLocal_13) {
		if ((var_1_24 <= var_1_22) || stepLocal_12) {
			var_1_68 = (var_1_69 - 4);
		}
	} else {
		var_1_68 = var_1_24;
	}


	// From: Req1Batch187Amount250
	unsigned char stepLocal_1 = var_1_14;
	unsigned long int stepLocal_0 = var_1_24 + 16u;
	if (var_1_30 && stepLocal_1) {
		if (var_1_43 >= stepLocal_0) {
			var_1_1 = (max (var_1_6 , (max (var_1_7 , var_1_8))));
		} else {
			if (var_1_6 == var_1_8) {
				var_1_1 = var_1_6;
			}
		}
	}


	// From: Req2Batch187Amount250
	unsigned long int stepLocal_2 = var_1_45 * (var_1_43 / var_1_12);
	if ((var_1_10 - var_1_11) >= stepLocal_2) {
		var_1_9 = (34006 - ((var_1_13 + 10000) - (var_1_11 + 100)));
	}


	// From: Req5Batch187Amount250
	unsigned long int stepLocal_4 = 2 ^ (var_1_24 * var_1_68);
	if ((- var_1_11) <= stepLocal_4) {
		var_1_21 = (min (-32 , var_1_15));
	}


	// From: Req10Batch187Amount250
	if (var_1_33 >= (var_1_67 | (~ var_1_45))) {
		var_1_28 = (max (var_1_7 , (32.4f - var_1_29)));
	}


	// From: Req12Batch187Amount250
	if ((var_1_68 / -4) < (var_1_24 / (min (var_1_23 , var_1_12)))) {
		if (var_1_24 >= (~ (var_1_68 * var_1_11))) {
			var_1_32 = var_1_11;
		} else {
			var_1_32 = var_1_23;
		}
	}


	// From: Req14Batch187Amount250
	unsigned long int stepLocal_5 = var_1_45 + var_1_43;
	if (1 == stepLocal_5) {
		var_1_36 = (abs (var_1_34));
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 8191);
	assume_abort_if_not(var_1_13 <= 16384);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 6);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427388000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427388000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -230584.3009213691400e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691400e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 1073741823);
	assume_abort_if_not(var_1_44 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	assume_abort_if_not(var_1_46 != 0.0F);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 2147483647);
	assume_abort_if_not(var_1_47 <= 4294967294);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 3221225470);
	assume_abort_if_not(var_1_48 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -461168.6018427383000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -127);
	assume_abort_if_not(var_1_55 <= 126);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -15);
	assume_abort_if_not(var_1_60 <= 16);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -31);
	assume_abort_if_not(var_1_61 <= 31);
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 32767);
	assume_abort_if_not(var_1_69 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_49 = var_1_49;
}

int property(void) {
	return ((((((((((((((((((((((((((((var_1_30 && var_1_14) ? ((var_1_43 >= (var_1_24 + 16u)) ? (var_1_1 == ((double) (max (var_1_6 , (max (var_1_7 , var_1_8)))))) : ((var_1_6 == var_1_8) ? (var_1_1 == ((double) var_1_6)) : 1)) : 1) && (((var_1_10 - var_1_11) >= (var_1_45 * (var_1_43 / var_1_12))) ? (var_1_9 == ((unsigned short int) (34006 - ((var_1_13 + 10000) - (var_1_11 + 100))))) : 1)) && (((var_1_11 >> var_1_15) <= (var_1_10 / -64)) ? (last_1_var_1_14 ? (((var_1_7 + var_1_6) <= 100.75) ? ((! var_1_30) ? (var_1_14 == ((unsigned char) (var_1_16 || var_1_17))) : 1) : (var_1_14 == ((unsigned char) (((var_1_18 - 1.0000000005E9) <= 63.5) || var_1_19)))) : 1) : 1)) && ((var_1_8 >= ((- var_1_7) + (max (var_1_64 , var_1_6)))) ? (var_1_20 == ((unsigned short int) (var_1_15 + var_1_11))) : (((~ var_1_13) < var_1_12) ? (var_1_20 == ((unsigned short int) var_1_13)) : (var_1_20 == ((unsigned short int) var_1_11))))) && (((- var_1_11) <= (2 ^ (var_1_24 * var_1_68))) ? (var_1_21 == ((signed char) (min (-32 , var_1_15)))) : 1)) && ((var_1_7 >= var_1_18) ? (var_1_22 == ((unsigned char) (abs (var_1_11)))) : (var_1_22 == ((unsigned char) (var_1_23 - var_1_15))))) && (((var_1_19 || var_1_16) || var_1_30) ? (((abs (var_1_18)) >= var_1_6) ? (var_1_30 ? (var_1_24 == ((unsigned long int) ((min (var_1_23 , (min (var_1_15 , last_1_var_1_24)))) + var_1_20))) : (var_1_24 == ((unsigned long int) var_1_15))) : (var_1_24 == ((unsigned long int) 10u))) : (var_1_49 ? (var_1_24 == ((unsigned long int) (var_1_11 + (var_1_13 + var_1_15)))) : 1))) && (last_1_var_1_49 ? (var_1_25 == ((unsigned char) (var_1_23 - var_1_11))) : (var_1_25 == ((unsigned char) (var_1_11 + var_1_15))))) && ((var_1_10 != var_1_12) ? (var_1_26 == ((unsigned short int) var_1_27)) : 1)) && ((var_1_33 >= (var_1_67 | (~ var_1_45))) ? (var_1_28 == ((float) (max (var_1_7 , (32.4f - var_1_29))))) : 1)) && (var_1_19 ? (var_1_30 == ((unsigned char) (! var_1_31))) : 1)) && (((var_1_68 / -4) < (var_1_24 / (min (var_1_23 , var_1_12)))) ? ((var_1_24 >= (~ (var_1_68 * var_1_11))) ? (var_1_32 == ((unsigned char) var_1_11)) : (var_1_32 == ((unsigned char) var_1_23))) : 1)) && ((((var_1_34 + var_1_35) - var_1_18) >= ((- 256.5) * var_1_6)) ? (var_1_33 == ((unsigned short int) var_1_23)) : 1)) && ((1 == (var_1_45 + var_1_43)) ? (var_1_36 == ((float) (abs (var_1_34)))) : 1)) && ((! (var_1_20 <= var_1_24)) ? ((var_1_24 > var_1_27) ? (var_1_37 == ((double) ((var_1_38 + (var_1_39 - var_1_40)) + var_1_41))) : ((var_1_40 != 2.4) ? (var_1_37 == ((double) (max (var_1_41 , var_1_8)))) : 1)) : (var_1_37 == ((double) ((min ((var_1_38 + var_1_42) , var_1_39)) + var_1_41))))) && (((0.5f - var_1_18) < (min (var_1_51 , var_1_6))) ? (var_1_43 == ((unsigned long int) (var_1_22 + (var_1_44 - (var_1_20 + var_1_26))))) : ((last_1_var_1_43 < var_1_23) ? (var_1_43 == ((unsigned long int) var_1_44)) : 1))) && (((var_1_29 / var_1_46) > ((min (var_1_37 , var_1_38)) * var_1_6)) ? ((var_1_22 >= (- var_1_13)) ? (var_1_45 == ((unsigned long int) ((abs (var_1_47)) - (var_1_44 - var_1_24)))) : 1) : (var_1_45 == ((unsigned long int) ((var_1_48 - 1u) - (var_1_24 + var_1_66)))))) && ((var_1_25 == var_1_65) ? (var_1_49 == ((unsigned char) (! (! var_1_16)))) : 1)) && (var_1_50 == ((float) (abs (128.75f))))) && (var_1_30 ? (((4 > var_1_27) || (var_1_64 < var_1_35)) ? (var_1_51 == ((double) (((var_1_40 + var_1_39) - (max (var_1_52 , 63.5))) + var_1_38))) : (var_1_51 == ((double) (var_1_52 + var_1_53)))) : 1)) && ((var_1_15 < var_1_23) ? (var_1_54 == ((signed char) var_1_55)) : (var_1_54 == ((signed char) (var_1_15 - (var_1_56 + (max (var_1_57 , var_1_58)))))))) && (var_1_16 ? (var_1_59 == ((signed char) (max ((min (var_1_55 , var_1_15)) , var_1_58)))) : ((var_1_58 <= ((abs (var_1_11)) - 2)) ? (var_1_59 == ((signed char) (var_1_56 + ((var_1_15 + var_1_60) + var_1_61)))) : (var_1_59 == ((signed char) ((abs (min (16 , var_1_61))) + (var_1_57 - 5))))))) && ((var_1_56 >= var_1_66) ? ((var_1_13 <= (var_1_23 + var_1_47)) ? (var_1_62 == ((float) (var_1_40 + (min (var_1_52 , (var_1_39 - var_1_63)))))) : (var_1_62 == ((float) ((min (var_1_63 , 10.45f)) - (var_1_52 + (abs (var_1_42))))))) : 1)) && (((var_1_29 / 1.5f) > var_1_63) ? ((var_1_57 > var_1_10) ? (((var_1_25 - var_1_57) < -1) ? (var_1_64 == ((double) (var_1_35 - (var_1_52 + var_1_39)))) : (var_1_64 == ((double) var_1_7))) : (var_1_64 == ((double) ((max (var_1_29 , var_1_52)) - var_1_63)))) : (var_1_64 == ((double) var_1_52)))) && (var_1_65 == ((unsigned char) var_1_15))) && (var_1_66 == ((signed short int) var_1_11))) && (var_1_19 ? (var_1_67 == ((signed long int) var_1_43)) : (var_1_67 == ((signed long int) var_1_61)))) && ((8u < var_1_43) ? (((var_1_24 <= var_1_22) || (var_1_24 < var_1_58)) ? (var_1_68 == ((unsigned short int) (var_1_69 - 4))) : 1) : (var_1_68 == ((unsigned short int) var_1_24)))
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

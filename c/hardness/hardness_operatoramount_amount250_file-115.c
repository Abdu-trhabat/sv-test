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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115Amount250.c", 13, "reach_error"); }
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
signed char var_1_3 = -4;
unsigned char var_1_5 = 32;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 200;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
signed short int var_1_19 = 16;
float var_1_21 = 64.9;
float var_1_23 = 2.5;
float var_1_24 = 5.5;
float var_1_25 = 0.1;
float var_1_26 = 100.65;
float var_1_27 = 128.375;
float var_1_28 = 8.1;
float var_1_29 = 2.75;
unsigned char var_1_30 = 1;
float var_1_33 = 0.0;
float var_1_34 = 0.0;
float var_1_35 = 256.5;
unsigned char var_1_36 = 4;
unsigned short int var_1_37 = 2;
unsigned short int var_1_39 = 50604;
unsigned short int var_1_40 = 2;
signed long int var_1_41 = 4;
signed long int var_1_42 = 1094071306;
signed long int var_1_43 = 2073666493;
signed long int var_1_44 = 25;
signed short int var_1_45 = 4;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 10;
signed short int var_1_49 = 0;
unsigned long int var_1_51 = 64;
unsigned short int var_1_52 = 64;
unsigned short int var_1_53 = 49183;
unsigned char var_1_54 = 100;
float var_1_55 = 1000000000000000.8;
float var_1_56 = 24.8;
float var_1_58 = 9999999.5;
float var_1_59 = 25.5;
float var_1_60 = 0.25;
float var_1_61 = 100000.75;
unsigned long int var_1_62 = 2;
unsigned long int var_1_63 = 3325149896;
signed short int var_1_65 = -1000;
unsigned short int var_1_66 = 128;
unsigned short int var_1_67 = 28364;
unsigned short int var_1_68 = 27799;
unsigned char var_1_69 = 64;
unsigned char var_1_70 = 5;
signed char var_1_71 = -32;
float var_1_72 = 2.125;
double var_1_73 = 31.75;
signed short int var_1_74 = -50;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
unsigned char last_1_var_1_14 = 0;
float last_1_var_1_35 = 256.5;
unsigned short int last_1_var_1_40 = 2;
signed long int last_1_var_1_41 = 4;
unsigned long int last_1_var_1_51 = 64;
unsigned char last_1_var_1_54 = 100;
unsigned long int last_1_var_1_62 = 2;
signed short int last_1_var_1_65 = -1000;
unsigned char last_1_var_1_69 = 64;
double last_1_var_1_73 = 31.75;
signed short int last_1_var_1_74 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch115Amount250
	unsigned char stepLocal_8 = var_1_30;
	if (stepLocal_8 && var_1_16) {
		if (last_1_var_1_14) {
			var_1_41 = (max (last_1_var_1_1 , var_1_10));
		}
	} else {
		if (var_1_25 <= var_1_23) {
			var_1_41 = ((var_1_42 - var_1_39) - ((var_1_43 - var_1_44) - last_1_var_1_40));
		} else {
			var_1_41 = var_1_8;
		}
	}


	// From: Req18Batch115Amount250
	signed long int stepLocal_17 = ~ var_1_43;
	signed long int stepLocal_16 = var_1_44 << last_1_var_1_54;
	if (stepLocal_16 < var_1_11) {
		if (stepLocal_17 >= var_1_44) {
			var_1_65 = (last_1_var_1_62 + var_1_3);
		}
	} else {
		var_1_65 = (max ((last_1_var_1_69 + (var_1_10 + last_1_var_1_74)) , last_1_var_1_54));
	}


	// From: Req17Batch115Amount250
	unsigned char stepLocal_15 = last_1_var_1_14;
	unsigned char stepLocal_14 = var_1_16;
	unsigned char stepLocal_13 = last_1_var_1_41 < last_1_var_1_51;
	if (((var_1_25 * var_1_33) < var_1_60) && stepLocal_13) {
		var_1_62 = (((abs (var_1_63)) - var_1_5) - var_1_48);
	} else {
		if ((2.1f / var_1_34) <= (- (last_1_var_1_73 * last_1_var_1_35))) {
			if (var_1_26 <= (min (var_1_24 , var_1_60))) {
				if (stepLocal_15 && ((var_1_10 << 1u) >= var_1_42)) {
					var_1_62 = (max (last_1_var_1_65 , var_1_10));
				}
			} else {
				if ((var_1_24 < (var_1_33 / var_1_34)) || stepLocal_14) {
					var_1_62 = (var_1_63 - var_1_9);
				} else {
					var_1_62 = (var_1_63 - var_1_5);
				}
			}
		} else {
			var_1_62 = (var_1_63 - (var_1_6 + var_1_13));
		}
	}


	// From: Req13Batch115Amount250
	if (var_1_11 <= var_1_62) {
		var_1_51 = (last_1_var_1_51 + var_1_13);
	} else {
		var_1_51 = var_1_5;
	}


	// From: Req11Batch115Amount250
	unsigned short int stepLocal_9 = var_1_39;
	if ((var_1_62 / var_1_12) < stepLocal_9) {
		if ((- var_1_29) == var_1_33) {
			var_1_46 = ((var_1_47 + var_1_48) + var_1_11);
		} else {
			var_1_46 = (min (var_1_6 , var_1_12));
		}
	} else {
		var_1_46 = var_1_11;
	}


	// From: Req2Batch115Amount250
	unsigned char stepLocal_2 = var_1_9;
	signed long int stepLocal_1 = var_1_12 * var_1_3;
	unsigned char stepLocal_0 = var_1_7;
	if (stepLocal_1 <= (abs (var_1_10))) {
		if (stepLocal_0 || var_1_15) {
			if ((min (var_1_12 , var_1_13)) < stepLocal_2) {
				var_1_14 = (var_1_16 && var_1_17);
			} else {
				var_1_14 = (var_1_16 && (var_1_17 || var_1_18));
			}
		}
	}


	// From: Req6Batch115Amount250
	if (var_1_33 == var_1_24) {
		var_1_36 = (var_1_9 - var_1_12);
	}


	// From: Req19Batch115Amount250
	if (var_1_56 >= var_1_27) {
		var_1_66 = ((var_1_67 + var_1_68) - (abs (256)));
	}


	// From: Req20Batch115Amount250
	if (var_1_30) {
		var_1_69 = (var_1_9 - (min ((var_1_12 - var_1_48) , (var_1_11 - var_1_70))));
	}


	// From: Req21Batch115Amount250
	signed long int stepLocal_18 = 200 * var_1_48;
	if ((var_1_39 + var_1_66) < stepLocal_18) {
		var_1_71 = (var_1_48 + var_1_70);
	} else {
		var_1_71 = var_1_47;
	}


	// From: Req22Batch115Amount250
	if (! var_1_30) {
		var_1_72 = var_1_23;
	} else {
		var_1_72 = (min (var_1_23 , (2.2f - var_1_25)));
	}


	// From: Req23Batch115Amount250
	var_1_73 = var_1_24;


	// From: Req24Batch115Amount250
	var_1_74 = last_1_var_1_74;


	// From: Req1Batch115Amount250
	if ((var_1_41 / (min (8 , var_1_3))) >= var_1_62) {
		if (! ((min (var_1_62 , var_1_41)) >= (5 / var_1_3))) {
			var_1_1 = (max (var_1_5 , var_1_6));
		} else {
			if (var_1_14) {
				var_1_1 = ((max (var_1_8 , var_1_9)) - var_1_10);
			} else {
				var_1_1 = ((var_1_11 + (abs (var_1_12))) - (max (var_1_10 , var_1_13)));
			}
		}
	}


	// From: Req16Batch115Amount250
	signed char stepLocal_12 = var_1_3;
	unsigned long int stepLocal_11 = (abs (var_1_51)) + var_1_43;
	if ((var_1_47 - (abs (var_1_11))) >= stepLocal_12) {
		var_1_58 = (abs (var_1_23));
	} else {
		if (var_1_48 >= stepLocal_11) {
			var_1_58 = ((var_1_27 + 1.375f) + var_1_34);
		} else {
			if (var_1_14) {
				var_1_58 = ((min ((var_1_34 - var_1_59) , (min (var_1_28 , var_1_27)))) + (var_1_60 + var_1_61));
			}
		}
	}


	// From: Req4Batch115Amount250
	signed long int stepLocal_4 = var_1_69 * var_1_66;
	if (var_1_14) {
		if (var_1_14) {
			if (var_1_16) {
				if (var_1_14) {
					var_1_21 = (min (var_1_23 , ((min (var_1_24 , var_1_25)) - var_1_26)));
				} else {
					var_1_21 = (var_1_24 - (max (var_1_26 , var_1_25)));
				}
			} else {
				var_1_21 = ((var_1_27 + var_1_28) + var_1_29);
			}
		} else {
			if (var_1_10 < stepLocal_4) {
				var_1_21 = ((var_1_33 - (var_1_34 - 64.25f)) - var_1_26);
			} else {
				var_1_21 = var_1_24;
			}
		}
	} else {
		var_1_21 = (var_1_33 - var_1_34);
	}


	// From: Req14Batch115Amount250
	if (var_1_28 >= var_1_58) {
		var_1_52 = (1 + var_1_74);
	} else {
		var_1_52 = ((max (var_1_39 , var_1_53)) - var_1_36);
	}


	// From: Req8Batch115Amount250
	if ((- var_1_58) > var_1_23) {
		var_1_40 = ((var_1_12 + var_1_6) + var_1_9);
	}


	// From: Req7Batch115Amount250
	signed long int stepLocal_7 = var_1_11 * var_1_40;
	unsigned char stepLocal_6 = var_1_17;
	if (((- var_1_73) > var_1_29) && stepLocal_6) {
		if (var_1_6 >= stepLocal_7) {
			var_1_37 = (max ((128 + var_1_6) , var_1_65));
		} else {
			var_1_37 = var_1_10;
		}
	} else {
		var_1_37 = (var_1_39 - var_1_10);
	}


	// From: Req12Batch115Amount250
	signed long int stepLocal_10 = var_1_8 ^ -5;
	if ((var_1_46 + var_1_37) > stepLocal_10) {
		var_1_49 = ((abs (min (var_1_74 , -32))) - var_1_8);
	}


	// From: Req10Batch115Amount250
	var_1_45 = ((var_1_49 + var_1_11) + var_1_65);


	// From: Req3Batch115Amount250
	unsigned char stepLocal_3 = var_1_11;
	if (stepLocal_3 == ((- var_1_45) * (var_1_51 & 8))) {
		var_1_19 = (min (var_1_9 , var_1_3));
	} else {
		var_1_19 = (max (var_1_10 , -1));
	}


	// From: Req5Batch115Amount250
	signed short int stepLocal_5 = var_1_19;
	if (var_1_34 >= var_1_27) {
		if (var_1_9 > stepLocal_5) {
			if (var_1_25 <= var_1_29) {
				var_1_35 = (min ((var_1_34 + var_1_29) , var_1_24));
			} else {
				var_1_35 = var_1_29;
			}
		}
	}


	// From: Req15Batch115Amount250
	if (var_1_35 <= (var_1_34 - (var_1_55 + var_1_56))) {
		var_1_54 = (var_1_9 - var_1_13);
	} else {
		if (var_1_29 < var_1_58) {
			var_1_54 = var_1_48;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 127);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 127);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 64);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 2305843.009213691400e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 1073741822);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= 1610612734);
	assume_abort_if_not(var_1_43 <= 2147483646);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 536870911);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 64);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65534);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427388000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427388000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -230584.3009213691400e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691400e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -230584.3009213691400e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 3221225470);
	assume_abort_if_not(var_1_63 <= 4294967294);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 16383);
	assume_abort_if_not(var_1_67 <= 32767);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 16384);
	assume_abort_if_not(var_1_68 <= 32767);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_74 = var_1_74;
}

int property(void) {
	return (((((((((((((((((((((((((var_1_41 / (min (8 , var_1_3))) >= var_1_62) ? ((! ((min (var_1_62 , var_1_41)) >= (5 / var_1_3))) ? (var_1_1 == ((unsigned char) (max (var_1_5 , var_1_6)))) : (var_1_14 ? (var_1_1 == ((unsigned char) ((max (var_1_8 , var_1_9)) - var_1_10))) : (var_1_1 == ((unsigned char) ((var_1_11 + (abs (var_1_12))) - (max (var_1_10 , var_1_13))))))) : 1) && (((var_1_12 * var_1_3) <= (abs (var_1_10))) ? ((var_1_7 || var_1_15) ? (((min (var_1_12 , var_1_13)) < var_1_9) ? (var_1_14 == ((unsigned char) (var_1_16 && var_1_17))) : (var_1_14 == ((unsigned char) (var_1_16 && (var_1_17 || var_1_18))))) : 1) : 1)) && ((var_1_11 == ((- var_1_45) * (var_1_51 & 8))) ? (var_1_19 == ((signed short int) (min (var_1_9 , var_1_3)))) : (var_1_19 == ((signed short int) (max (var_1_10 , -1)))))) && (var_1_14 ? (var_1_14 ? (var_1_16 ? (var_1_14 ? (var_1_21 == ((float) (min (var_1_23 , ((min (var_1_24 , var_1_25)) - var_1_26))))) : (var_1_21 == ((float) (var_1_24 - (max (var_1_26 , var_1_25)))))) : (var_1_21 == ((float) ((var_1_27 + var_1_28) + var_1_29)))) : ((var_1_10 < (var_1_69 * var_1_66)) ? (var_1_21 == ((float) ((var_1_33 - (var_1_34 - 64.25f)) - var_1_26))) : (var_1_21 == ((float) var_1_24)))) : (var_1_21 == ((float) (var_1_33 - var_1_34))))) && ((var_1_34 >= var_1_27) ? ((var_1_9 > var_1_19) ? ((var_1_25 <= var_1_29) ? (var_1_35 == ((float) (min ((var_1_34 + var_1_29) , var_1_24)))) : (var_1_35 == ((float) var_1_29))) : 1) : 1)) && ((var_1_33 == var_1_24) ? (var_1_36 == ((unsigned char) (var_1_9 - var_1_12))) : 1)) && ((((- var_1_73) > var_1_29) && var_1_17) ? ((var_1_6 >= (var_1_11 * var_1_40)) ? (var_1_37 == ((unsigned short int) (max ((128 + var_1_6) , var_1_65)))) : (var_1_37 == ((unsigned short int) var_1_10))) : (var_1_37 == ((unsigned short int) (var_1_39 - var_1_10))))) && (((- var_1_58) > var_1_23) ? (var_1_40 == ((unsigned short int) ((var_1_12 + var_1_6) + var_1_9))) : 1)) && ((var_1_30 && var_1_16) ? (last_1_var_1_14 ? (var_1_41 == ((signed long int) (max (last_1_var_1_1 , var_1_10)))) : 1) : ((var_1_25 <= var_1_23) ? (var_1_41 == ((signed long int) ((var_1_42 - var_1_39) - ((var_1_43 - var_1_44) - last_1_var_1_40)))) : (var_1_41 == ((signed long int) var_1_8))))) && (var_1_45 == ((signed short int) ((var_1_49 + var_1_11) + var_1_65)))) && (((var_1_62 / var_1_12) < var_1_39) ? (((- var_1_29) == var_1_33) ? (var_1_46 == ((unsigned char) ((var_1_47 + var_1_48) + var_1_11))) : (var_1_46 == ((unsigned char) (min (var_1_6 , var_1_12))))) : (var_1_46 == ((unsigned char) var_1_11)))) && (((var_1_46 + var_1_37) > (var_1_8 ^ -5)) ? (var_1_49 == ((signed short int) ((abs (min (var_1_74 , -32))) - var_1_8))) : 1)) && ((var_1_11 <= var_1_62) ? (var_1_51 == ((unsigned long int) (last_1_var_1_51 + var_1_13))) : (var_1_51 == ((unsigned long int) var_1_5)))) && ((var_1_28 >= var_1_58) ? (var_1_52 == ((unsigned short int) (1 + var_1_74))) : (var_1_52 == ((unsigned short int) ((max (var_1_39 , var_1_53)) - var_1_36))))) && ((var_1_35 <= (var_1_34 - (var_1_55 + var_1_56))) ? (var_1_54 == ((unsigned char) (var_1_9 - var_1_13))) : ((var_1_29 < var_1_58) ? (var_1_54 == ((unsigned char) var_1_48)) : 1))) && (((var_1_47 - (abs (var_1_11))) >= var_1_3) ? (var_1_58 == ((float) (abs (var_1_23)))) : ((var_1_48 >= ((abs (var_1_51)) + var_1_43)) ? (var_1_58 == ((float) ((var_1_27 + 1.375f) + var_1_34))) : (var_1_14 ? (var_1_58 == ((float) ((min ((var_1_34 - var_1_59) , (min (var_1_28 , var_1_27)))) + (var_1_60 + var_1_61)))) : 1)))) && ((((var_1_25 * var_1_33) < var_1_60) && (last_1_var_1_41 < last_1_var_1_51)) ? (var_1_62 == ((unsigned long int) (((abs (var_1_63)) - var_1_5) - var_1_48))) : (((2.1f / var_1_34) <= (- (last_1_var_1_73 * last_1_var_1_35))) ? ((var_1_26 <= (min (var_1_24 , var_1_60))) ? ((last_1_var_1_14 && ((var_1_10 << 1u) >= var_1_42)) ? (var_1_62 == ((unsigned long int) (max (last_1_var_1_65 , var_1_10)))) : 1) : (((var_1_24 < (var_1_33 / var_1_34)) || var_1_16) ? (var_1_62 == ((unsigned long int) (var_1_63 - var_1_9))) : (var_1_62 == ((unsigned long int) (var_1_63 - var_1_5))))) : (var_1_62 == ((unsigned long int) (var_1_63 - (var_1_6 + var_1_13))))))) && (((var_1_44 << last_1_var_1_54) < var_1_11) ? (((~ var_1_43) >= var_1_44) ? (var_1_65 == ((signed short int) (last_1_var_1_62 + var_1_3))) : 1) : (var_1_65 == ((signed short int) (max ((last_1_var_1_69 + (var_1_10 + last_1_var_1_74)) , last_1_var_1_54)))))) && ((var_1_56 >= var_1_27) ? (var_1_66 == ((unsigned short int) ((var_1_67 + var_1_68) - (abs (256))))) : 1)) && (var_1_30 ? (var_1_69 == ((unsigned char) (var_1_9 - (min ((var_1_12 - var_1_48) , (var_1_11 - var_1_70)))))) : 1)) && (((var_1_39 + var_1_66) < (200 * var_1_48)) ? (var_1_71 == ((signed char) (var_1_48 + var_1_70))) : (var_1_71 == ((signed char) var_1_47)))) && ((! var_1_30) ? (var_1_72 == ((float) var_1_23)) : (var_1_72 == ((float) (min (var_1_23 , (2.2f - var_1_25))))))) && (var_1_73 == ((double) var_1_24))) && (var_1_74 == ((signed short int) last_1_var_1_74))
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

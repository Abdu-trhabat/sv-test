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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149Amount250.c", 13, "reach_error"); }
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
float var_1_1 = 10.53;
signed long int var_1_2 = 256;
signed long int var_1_3 = -2;
float var_1_5 = 15.75;
float var_1_6 = 15.25;
float var_1_8 = 1.5;
float var_1_9 = 1.35;
float var_1_10 = 49.2;
float var_1_11 = 256.5;
signed short int var_1_13 = 4;
signed short int var_1_14 = 25;
signed short int var_1_15 = 500;
signed short int var_1_16 = -32;
signed char var_1_17 = 0;
signed char var_1_18 = -2;
signed char var_1_19 = 5;
signed char var_1_20 = 25;
signed char var_1_21 = -4;
signed char var_1_22 = 1;
signed char var_1_23 = -4;
unsigned long int var_1_24 = 5;
unsigned char var_1_25 = 0;
unsigned long int var_1_26 = 10;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 50;
unsigned char var_1_29 = 25;
unsigned char var_1_30 = 1;
float var_1_31 = 4.9;
float var_1_32 = 16.6;
signed char var_1_33 = -16;
double var_1_34 = 1.7;
double var_1_35 = 15.375;
double var_1_36 = 199.5;
signed long int var_1_37 = 1;
float var_1_38 = 255.6;
unsigned long int var_1_39 = 32;
signed char var_1_40 = -100;
unsigned char var_1_41 = 200;
unsigned char var_1_42 = 32;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 16;
unsigned char var_1_45 = 0;
float var_1_46 = 63.924;
signed char var_1_47 = 10;
signed char var_1_48 = 0;
unsigned short int var_1_49 = 8;
unsigned short int var_1_50 = 2;
float var_1_51 = 8.2;
float var_1_52 = 64.5;
signed long int var_1_53 = -200;
signed long int var_1_54 = 1326358906;
signed long int var_1_55 = 50;
signed long int var_1_56 = 1828430652;
unsigned char var_1_57 = 16;
unsigned char var_1_58 = 4;
float var_1_59 = 0.75;
float var_1_60 = 63.5;
double var_1_61 = 128.25;
double var_1_62 = 255.6;
float var_1_63 = 100000000000.9;
signed short int var_1_64 = -256;
signed char var_1_65 = 32;
double var_1_66 = 1.2;
unsigned short int var_1_67 = 5;
signed short int var_1_68 = 256;
signed short int var_1_69 = 29538;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_24 = 5;
unsigned long int last_1_var_1_39 = 32;
signed long int last_1_var_1_53 = -200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch149Amount250
	var_1_39 = (max ((max ((last_1_var_1_53 + var_1_20) , var_1_15)) , var_1_29));


	// From: Req17Batch149Amount250
	if ((2u << (var_1_47 + var_1_48)) >= ((max (var_1_39 , var_1_29)) >> (var_1_49 + var_1_50))) {
		var_1_46 = ((max ((var_1_36 + 127.5f) , (min (var_1_10 , var_1_11)))) + ((min (199.75f , var_1_51)) - var_1_52));
	}


	// From: Req6Batch149Amount250
	var_1_25 = (((last_1_var_1_39 % var_1_26) > last_1_var_1_53) || var_1_27);


	// From: Req16Batch149Amount250
	if (var_1_25) {
		var_1_45 = var_1_27;
	} else {
		var_1_45 = 0;
	}


	// From: Req25Batch149Amount250
	if (var_1_45) {
		var_1_67 = var_1_48;
	} else {
		var_1_67 = var_1_15;
	}


	// From: Req2Batch149Amount250
	var_1_13 = (max ((var_1_14 + (32 - var_1_15)) , var_1_16));


	// From: Req4Batch149Amount250
	if (var_1_8 <= (15.9f + (var_1_9 * var_1_11))) {
		if (! var_1_45) {
			var_1_18 = ((min (var_1_19 , 10)) - var_1_20);
		} else {
			var_1_18 = ((max ((min (var_1_21 , -8)) , var_1_22)) + var_1_23);
		}
	}


	// From: Req5Batch149Amount250
	var_1_24 = ((max (last_1_var_1_24 , var_1_15)) + var_1_20);


	// From: Req7Batch149Amount250
	if (var_1_25) {
		var_1_28 = (((var_1_29 + var_1_30) + 16) + var_1_20);
	} else {
		var_1_28 = var_1_29;
	}


	// From: Req9Batch149Amount250
	if ((max ((min (var_1_32 , var_1_46)) , var_1_6)) < 24.9f) {
		var_1_33 = ((min (var_1_29 , var_1_21)) + var_1_22);
	}


	// From: Req10Batch149Amount250
	unsigned char stepLocal_6 = var_1_24 <= var_1_26;
	if (var_1_25) {
		var_1_34 = (var_1_11 - var_1_8);
	} else {
		if (var_1_27 && stepLocal_6) {
			var_1_34 = (2.75 + var_1_11);
		} else {
			var_1_34 = (max (var_1_5 , ((var_1_35 + var_1_36) + var_1_11)));
		}
	}


	// From: Req11Batch149Amount250
	unsigned long int stepLocal_7 = ~ var_1_24;
	if (stepLocal_7 >= var_1_15) {
		var_1_37 = (abs (var_1_14 + var_1_15));
	} else {
		var_1_37 = (abs (var_1_16));
	}


	// From: Req14Batch149Amount250
	signed short int stepLocal_9 = var_1_16;
	signed long int stepLocal_8 = (var_1_41 - var_1_29) - var_1_30;
	if (var_1_67 >= stepLocal_8) {
		if (stepLocal_9 != var_1_30) {
			var_1_40 = var_1_23;
		}
	} else {
		var_1_40 = ((abs (var_1_21)) + 2);
	}


	// From: Req20Batch149Amount250
	if ((var_1_52 + (var_1_11 - var_1_8)) == var_1_34) {
		var_1_57 = (((var_1_44 + var_1_49) + var_1_48) + var_1_47);
	} else {
		var_1_57 = (min ((min (var_1_58 , var_1_20)) , var_1_30));
	}


	// From: Req22Batch149Amount250
	var_1_64 = (var_1_58 + (abs (var_1_48)));


	// From: Req23Batch149Amount250
	var_1_65 = var_1_47;


	// From: Req24Batch149Amount250
	if (var_1_25) {
		var_1_66 = var_1_5;
	} else {
		var_1_66 = var_1_11;
	}


	// From: Req26Batch149Amount250
	if (! (var_1_63 == var_1_52)) {
		var_1_68 = (((var_1_69 - 32) - var_1_47) - (abs (-2)));
	} else {
		var_1_68 = var_1_50;
	}


	// From: Req1Batch149Amount250
	signed long int stepLocal_2 = var_1_2;
	unsigned short int stepLocal_1 = var_1_67;
	signed long int stepLocal_0 = var_1_3;
	if (var_1_2 <= stepLocal_0) {
		if (var_1_25) {
			if (stepLocal_2 == (max (1000000000 , var_1_3))) {
				var_1_1 = (abs (min (var_1_5 , 3.7f)));
			}
		} else {
			var_1_1 = (max ((abs (var_1_5)) , var_1_6));
		}
	} else {
		if (var_1_6 <= var_1_5) {
			if (stepLocal_1 >= var_1_3) {
				var_1_1 = (var_1_8 - var_1_9);
			} else {
				var_1_1 = (var_1_8 - (max ((var_1_10 + var_1_11) , 64.5f)));
			}
		} else {
			if (var_1_45) {
				var_1_1 = (min (var_1_10 , var_1_8));
			}
		}
	}


	// From: Req15Batch149Amount250
	unsigned char stepLocal_10 = 128 <= var_1_41;
	if ((var_1_35 == var_1_1) && stepLocal_10) {
		var_1_42 = (var_1_43 - (var_1_30 + (5 + var_1_44)));
	} else {
		var_1_42 = (max (var_1_20 , var_1_29));
	}


	// From: Req3Batch149Amount250
	unsigned char stepLocal_3 = (var_1_15 + var_1_13) > var_1_16;
	if (stepLocal_3 && (var_1_24 >= (abs (var_1_39)))) {
		var_1_17 = (max (-1 , (min ((abs (64)) , 0))));
	}


	// From: Req12Batch149Amount250
	if (var_1_67 < var_1_16) {
		if (var_1_1 > var_1_36) {
			var_1_38 = (min (var_1_36 , var_1_9));
		} else {
			if ((var_1_67 * var_1_15) != var_1_22) {
				var_1_38 = var_1_11;
			} else {
				var_1_38 = (max ((max (var_1_36 , var_1_8)) , (min (var_1_5 , var_1_10))));
			}
		}
	} else {
		var_1_38 = (var_1_10 + (var_1_35 + var_1_36));
	}


	// From: Req21Batch149Amount250
	if ((var_1_38 * (var_1_35 / var_1_60)) == (var_1_32 / (max (var_1_61 , var_1_62)))) {
		var_1_59 = (min ((max (var_1_63 , var_1_36)) , var_1_32));
	}


	// From: Req19Batch149Amount250
	unsigned char stepLocal_13 = var_1_25;
	signed long int stepLocal_12 = -2;
	unsigned char stepLocal_11 = (var_1_36 * var_1_52) < var_1_10;
	if (var_1_10 != var_1_35) {
		var_1_55 = ((var_1_39 - (max (var_1_15 , 8))) + var_1_49);
	} else {
		if (stepLocal_11 || var_1_25) {
			var_1_55 = (max (var_1_39 , var_1_54));
		} else {
			if (stepLocal_12 <= (var_1_47 * var_1_42)) {
				var_1_55 = (min ((var_1_15 + var_1_16) , (min (var_1_13 , var_1_41))));
			} else {
				if (var_1_25) {
					if (stepLocal_13 && ((var_1_20 * var_1_43) > (var_1_13 - var_1_30))) {
						var_1_55 = ((var_1_54 - var_1_50) - var_1_47);
					} else {
						if (var_1_46 <= var_1_11) {
							if (((var_1_9 - var_1_11) + var_1_10) < (- var_1_5)) {
								var_1_55 = (abs ((var_1_56 - var_1_15) - var_1_47));
							}
						} else {
							var_1_55 = var_1_43;
						}
					}
				}
			}
		}
	}


	// From: Req18Batch149Amount250
	var_1_53 = ((max ((max (var_1_44 , var_1_64)) , (var_1_54 - var_1_55))) - 8);


	// From: Req8Batch149Amount250
	unsigned long int stepLocal_5 = var_1_39;
	signed long int stepLocal_4 = var_1_53;
	if (var_1_11 >= var_1_5) {
		var_1_31 = ((var_1_11 + (max (var_1_10 , 24.6f))) - var_1_9);
	} else {
		if (stepLocal_4 <= var_1_30) {
			var_1_31 = var_1_5;
		} else {
			if (var_1_22 > stepLocal_5) {
				var_1_31 = var_1_9;
			} else {
				var_1_31 = (min ((min (var_1_6 , (max (64.25f , var_1_32)))) , (var_1_9 - 1.00000005E7f)));
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -16383);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -32767);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -230584.3009213691400e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 191);
	assume_abort_if_not(var_1_41 <= 255);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 127);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 31);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 15);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 15);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 15);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 15);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_54 >= 1073741822);
	assume_abort_if_not(var_1_54 <= 2147483646);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= 1073741823);
	assume_abort_if_not(var_1_56 <= 2147483646);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
	assume_abort_if_not(var_1_60 != 0.0F);
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -922337.2036854776000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
	assume_abort_if_not(var_1_61 != 0.0F);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
	assume_abort_if_not(var_1_62 != 0.0F);
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= -922337.2036854766000e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854766000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_69 >= 24574);
	assume_abort_if_not(var_1_69 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_24 = var_1_24;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_53 = var_1_53;
}

int property(void) {
	return ((((((((((((((((((((((((((var_1_2 <= var_1_3) ? (var_1_25 ? ((var_1_2 == (max (1000000000 , var_1_3))) ? (var_1_1 == ((float) (abs (min (var_1_5 , 3.7f))))) : 1) : (var_1_1 == ((float) (max ((abs (var_1_5)) , var_1_6))))) : ((var_1_6 <= var_1_5) ? ((var_1_67 >= var_1_3) ? (var_1_1 == ((float) (var_1_8 - var_1_9))) : (var_1_1 == ((float) (var_1_8 - (max ((var_1_10 + var_1_11) , 64.5f)))))) : (var_1_45 ? (var_1_1 == ((float) (min (var_1_10 , var_1_8)))) : 1))) && (var_1_13 == ((signed short int) (max ((var_1_14 + (32 - var_1_15)) , var_1_16))))) && ((((var_1_15 + var_1_13) > var_1_16) && (var_1_24 >= (abs (var_1_39)))) ? (var_1_17 == ((signed char) (max (-1 , (min ((abs (64)) , 0)))))) : 1)) && ((var_1_8 <= (15.9f + (var_1_9 * var_1_11))) ? ((! var_1_45) ? (var_1_18 == ((signed char) ((min (var_1_19 , 10)) - var_1_20))) : (var_1_18 == ((signed char) ((max ((min (var_1_21 , -8)) , var_1_22)) + var_1_23)))) : 1)) && (var_1_24 == ((unsigned long int) ((max (last_1_var_1_24 , var_1_15)) + var_1_20)))) && (var_1_25 == ((unsigned char) (((last_1_var_1_39 % var_1_26) > last_1_var_1_53) || var_1_27)))) && (var_1_25 ? (var_1_28 == ((unsigned char) (((var_1_29 + var_1_30) + 16) + var_1_20))) : (var_1_28 == ((unsigned char) var_1_29)))) && ((var_1_11 >= var_1_5) ? (var_1_31 == ((float) ((var_1_11 + (max (var_1_10 , 24.6f))) - var_1_9))) : ((var_1_53 <= var_1_30) ? (var_1_31 == ((float) var_1_5)) : ((var_1_22 > var_1_39) ? (var_1_31 == ((float) var_1_9)) : (var_1_31 == ((float) (min ((min (var_1_6 , (max (64.25f , var_1_32)))) , (var_1_9 - 1.00000005E7f))))))))) && (((max ((min (var_1_32 , var_1_46)) , var_1_6)) < 24.9f) ? (var_1_33 == ((signed char) ((min (var_1_29 , var_1_21)) + var_1_22))) : 1)) && (var_1_25 ? (var_1_34 == ((double) (var_1_11 - var_1_8))) : ((var_1_27 && (var_1_24 <= var_1_26)) ? (var_1_34 == ((double) (2.75 + var_1_11))) : (var_1_34 == ((double) (max (var_1_5 , ((var_1_35 + var_1_36) + var_1_11)))))))) && (((~ var_1_24) >= var_1_15) ? (var_1_37 == ((signed long int) (abs (var_1_14 + var_1_15)))) : (var_1_37 == ((signed long int) (abs (var_1_16)))))) && ((var_1_67 < var_1_16) ? ((var_1_1 > var_1_36) ? (var_1_38 == ((float) (min (var_1_36 , var_1_9)))) : (((var_1_67 * var_1_15) != var_1_22) ? (var_1_38 == ((float) var_1_11)) : (var_1_38 == ((float) (max ((max (var_1_36 , var_1_8)) , (min (var_1_5 , var_1_10)))))))) : (var_1_38 == ((float) (var_1_10 + (var_1_35 + var_1_36)))))) && (var_1_39 == ((unsigned long int) (max ((max ((last_1_var_1_53 + var_1_20) , var_1_15)) , var_1_29))))) && ((var_1_67 >= ((var_1_41 - var_1_29) - var_1_30)) ? ((var_1_16 != var_1_30) ? (var_1_40 == ((signed char) var_1_23)) : 1) : (var_1_40 == ((signed char) ((abs (var_1_21)) + 2))))) && (((var_1_35 == var_1_1) && (128 <= var_1_41)) ? (var_1_42 == ((unsigned char) (var_1_43 - (var_1_30 + (5 + var_1_44))))) : (var_1_42 == ((unsigned char) (max (var_1_20 , var_1_29)))))) && (var_1_25 ? (var_1_45 == ((unsigned char) var_1_27)) : (var_1_45 == ((unsigned char) 0)))) && (((2u << (var_1_47 + var_1_48)) >= ((max (var_1_39 , var_1_29)) >> (var_1_49 + var_1_50))) ? (var_1_46 == ((float) ((max ((var_1_36 + 127.5f) , (min (var_1_10 , var_1_11)))) + ((min (199.75f , var_1_51)) - var_1_52)))) : 1)) && (var_1_53 == ((signed long int) ((max ((max (var_1_44 , var_1_64)) , (var_1_54 - var_1_55))) - 8)))) && ((var_1_10 != var_1_35) ? (var_1_55 == ((signed long int) ((var_1_39 - (max (var_1_15 , 8))) + var_1_49))) : ((((var_1_36 * var_1_52) < var_1_10) || var_1_25) ? (var_1_55 == ((signed long int) (max (var_1_39 , var_1_54)))) : ((-2 <= (var_1_47 * var_1_42)) ? (var_1_55 == ((signed long int) (min ((var_1_15 + var_1_16) , (min (var_1_13 , var_1_41)))))) : (var_1_25 ? ((var_1_25 && ((var_1_20 * var_1_43) > (var_1_13 - var_1_30))) ? (var_1_55 == ((signed long int) ((var_1_54 - var_1_50) - var_1_47))) : ((var_1_46 <= var_1_11) ? ((((var_1_9 - var_1_11) + var_1_10) < (- var_1_5)) ? (var_1_55 == ((signed long int) (abs ((var_1_56 - var_1_15) - var_1_47)))) : 1) : (var_1_55 == ((signed long int) var_1_43)))) : 1))))) && (((var_1_52 + (var_1_11 - var_1_8)) == var_1_34) ? (var_1_57 == ((unsigned char) (((var_1_44 + var_1_49) + var_1_48) + var_1_47))) : (var_1_57 == ((unsigned char) (min ((min (var_1_58 , var_1_20)) , var_1_30)))))) && (((var_1_38 * (var_1_35 / var_1_60)) == (var_1_32 / (max (var_1_61 , var_1_62)))) ? (var_1_59 == ((float) (min ((max (var_1_63 , var_1_36)) , var_1_32)))) : 1)) && (var_1_64 == ((signed short int) (var_1_58 + (abs (var_1_48)))))) && (var_1_65 == ((signed char) var_1_47))) && (var_1_25 ? (var_1_66 == ((double) var_1_5)) : (var_1_66 == ((double) var_1_11)))) && (var_1_45 ? (var_1_67 == ((unsigned short int) var_1_48)) : (var_1_67 == ((unsigned short int) var_1_15)))) && ((! (var_1_63 == var_1_52)) ? (var_1_68 == ((signed short int) (((var_1_69 - 32) - var_1_47) - (abs (-2))))) : (var_1_68 == ((signed short int) var_1_50)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch185Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = 10;
signed short int var_1_4 = 100;
signed short int var_1_5 = 16;
signed short int var_1_6 = -256;
signed short int var_1_7 = 16;
unsigned char var_1_8 = 1;
double var_1_9 = 10.6;
double var_1_10 = 7.2;
double var_1_11 = 15.2;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed short int var_1_14 = -2;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 64;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 16;
double var_1_23 = 256.95;
double var_1_24 = 128.25;
double var_1_25 = 15.5;
signed short int var_1_26 = -8;
double var_1_27 = 256.95;
double var_1_28 = 16.5;
double var_1_29 = 32.5;
double var_1_30 = 10.6;
double var_1_31 = 100.75;
unsigned short int var_1_32 = 64;
unsigned short int var_1_33 = 40851;
unsigned short int var_1_34 = 49891;
unsigned short int var_1_35 = 10;
unsigned long int var_1_37 = 10;
unsigned long int var_1_38 = 1188111849;
unsigned long int var_1_39 = 2555686858;
signed char var_1_40 = -128;
signed char var_1_41 = -32;
signed char var_1_42 = 0;
float var_1_43 = 199.5;
float var_1_44 = 5.8;
float var_1_45 = 32.5;
unsigned long int var_1_46 = 64;
unsigned long int var_1_47 = 1190780862;
signed long int var_1_48 = 1;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned long int var_1_52 = 25;
double var_1_53 = 2.5;
double var_1_55 = 4.2;
double var_1_56 = 127.5;
double var_1_57 = 24.5;
unsigned char var_1_58 = 1;
float var_1_59 = 127.2;
float var_1_60 = 9.5;
signed long int var_1_61 = -5;
unsigned char var_1_62 = 1;
unsigned char var_1_64 = 50;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 4;
unsigned char var_1_67 = 10;
unsigned short int var_1_68 = 32;
unsigned char var_1_69 = 32;
unsigned long int var_1_70 = 10;
signed short int var_1_71 = 8;
unsigned char var_1_72 = 1;
signed long int var_1_73 = 128;
double var_1_74 = 0.5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_32 = 64;
unsigned long int last_1_var_1_37 = 10;
unsigned char last_1_var_1_49 = 1;
unsigned long int last_1_var_1_52 = 25;
unsigned char last_1_var_1_58 = 1;
unsigned long int last_1_var_1_70 = 10;
signed long int last_1_var_1_73 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch185Amount250
	signed long int stepLocal_5 = last_1_var_1_32;
	if (stepLocal_5 < (10 | last_1_var_1_70)) {
		var_1_46 = ((max (var_1_39 , (var_1_38 + var_1_47))) - var_1_21);
	} else {
		var_1_46 = (min (var_1_33 , last_1_var_1_73));
	}


	// From: Req15Batch185Amount250
	if (last_1_var_1_58) {
		if (var_1_24 < var_1_30) {
			var_1_49 = var_1_50;
		} else {
			var_1_49 = (! (var_1_13 && var_1_51));
		}
	}


	// From: Req8Batch185Amount250
	unsigned char stepLocal_3 = var_1_16 >= (10 << var_1_5);
	if (stepLocal_3 || var_1_13) {
		if (var_1_49) {
			if (var_1_25 < (var_1_29 * (max (var_1_31 , 9999999.5)))) {
				var_1_32 = var_1_17;
			}
		} else {
			var_1_32 = (var_1_33 - var_1_19);
		}
	} else {
		var_1_32 = ((var_1_34 - var_1_18) - var_1_17);
	}


	// From: Req12Batch185Amount250
	if (var_1_49) {
		var_1_43 = (var_1_30 - 499.5f);
	} else {
		var_1_43 = (max (((min (var_1_30 , var_1_44)) - var_1_45) , var_1_28));
	}


	// From: Req7Batch185Amount250
	if (last_1_var_1_49) {
		var_1_27 = (var_1_28 + (var_1_29 + (4.4 - var_1_30)));
	} else {
		var_1_27 = (var_1_28 + (max ((max (var_1_29 , var_1_30)) , var_1_31)));
	}


	// From: Req5Batch185Amount250
	if ((var_1_27 / var_1_24) <= ((max (4.75 , var_1_11)) / 199.5)) {
		var_1_23 = (abs (var_1_25));
	}


	// From: Req10Batch185Amount250
	signed short int stepLocal_4 = var_1_6;
	if (stepLocal_4 != var_1_17) {
		var_1_37 = (max ((var_1_21 + (var_1_38 - last_1_var_1_37)) , (var_1_39 - (min (var_1_34 , var_1_33)))));
	} else {
		var_1_37 = (var_1_39 - var_1_21);
	}


	// From: Req11Batch185Amount250
	var_1_40 = (max ((max ((var_1_22 + -10) , var_1_41)) , var_1_42));


	// From: Req16Batch185Amount250
	unsigned long int stepLocal_6 = var_1_37 & var_1_34;
	if (stepLocal_6 <= var_1_41) {
		var_1_52 = (var_1_34 + (var_1_38 - last_1_var_1_52));
	} else {
		var_1_52 = ((max (var_1_38 , var_1_37)) + var_1_34);
	}


	// From: Req19Batch185Amount250
	signed long int stepLocal_10 = var_1_19 - var_1_17;
	unsigned long int stepLocal_9 = 100u;
	if (stepLocal_10 > var_1_52) {
		if (var_1_38 > stepLocal_9) {
			var_1_59 = (max (var_1_28 , (var_1_44 - (var_1_30 + var_1_60))));
		}
	} else {
		var_1_59 = (abs (var_1_25));
	}


	// From: Req20Batch185Amount250
	var_1_61 = (max (var_1_22 , (var_1_18 - (max (var_1_46 , var_1_16)))));


	// From: Req24Batch185Amount250
	unsigned long int stepLocal_14 = var_1_16 + var_1_37;
	if (stepLocal_14 >= var_1_38) {
		var_1_69 = 64;
	} else {
		var_1_69 = (var_1_20 - (var_1_17 - var_1_65));
	}


	// From: Req25Batch185Amount250
	var_1_70 = var_1_16;


	// From: Req26Batch185Amount250
	signed long int stepLocal_15 = 2 - var_1_33;
	if ((2 << var_1_34) >= stepLocal_15) {
		var_1_71 = var_1_19;
	}


	// From: Req27Batch185Amount250
	var_1_72 = var_1_50;


	// From: Req9Batch185Amount250
	if (var_1_28 > (- var_1_23)) {
		var_1_35 = ((17335 - var_1_18) + var_1_32);
	} else {
		if ((max ((var_1_11 - var_1_10) , var_1_27)) != (var_1_28 / var_1_24)) {
			var_1_35 = (min (var_1_19 , var_1_34));
		}
	}


	// From: Req17Batch185Amount250
	if (var_1_35 < var_1_34) {
		if ((var_1_10 > (abs (var_1_27))) || (var_1_22 < var_1_18)) {
			var_1_53 = (var_1_29 + (var_1_30 + (abs (var_1_55))));
		}
	} else {
		var_1_53 = ((var_1_55 + (var_1_56 + var_1_57)) + var_1_29);
	}


	// From: Req2Batch185Amount250
	if ((var_1_9 - (min (var_1_10 , var_1_11))) >= var_1_27) {
		var_1_8 = (var_1_72 || var_1_13);
	}


	// From: Req21Batch185Amount250
	unsigned char stepLocal_12 = var_1_8;
	unsigned char stepLocal_11 = var_1_20;
	if (var_1_24 <= var_1_25) {
		if (stepLocal_11 < var_1_37) {
			if (var_1_72 && stepLocal_12) {
				var_1_62 = (((var_1_64 - var_1_65) + var_1_66) + var_1_18);
			}
		}
	}


	// From: Req22Batch185Amount250
	unsigned char stepLocal_13 = var_1_8;
	if (stepLocal_13 && var_1_12) {
		var_1_67 = (4 + (2 + var_1_65));
	}


	// From: Req23Batch185Amount250
	if (var_1_8 && (var_1_53 < var_1_11)) {
		var_1_68 = (max ((var_1_18 + var_1_17) , var_1_21));
	}


	// From: Req1Batch185Amount250
	if (-0.87 >= (- (var_1_53 + var_1_27))) {
		var_1_1 = (min ((max ((max (var_1_4 , var_1_5)) , var_1_6)) , var_1_7));
	}


	// From: Req18Batch185Amount250
	signed short int stepLocal_8 = var_1_7;
	unsigned char stepLocal_7 = var_1_22;
	if (var_1_43 >= var_1_9) {
		var_1_58 = var_1_13;
	} else {
		if ((min ((var_1_46 | var_1_18) , var_1_52)) > stepLocal_7) {
			if (var_1_8) {
				var_1_58 = (! var_1_50);
			}
		} else {
			if (var_1_1 >= stepLocal_8) {
				var_1_58 = (var_1_13 || var_1_51);
			} else {
				var_1_58 = var_1_51;
			}
		}
	}


	// From: Req28Batch185Amount250
	if (var_1_58) {
		var_1_73 = var_1_46;
	} else {
		var_1_73 = var_1_37;
	}


	// From: Req3Batch185Amount250
	unsigned char stepLocal_0 = var_1_58;
	if (stepLocal_0 && var_1_13) {
		var_1_14 = (max (-200 , var_1_4));
	}


	// From: Req6Batch185Amount250
	if (var_1_6 >= (var_1_18 * var_1_22)) {
		var_1_26 = ((var_1_16 + var_1_18) + var_1_22);
	} else {
		var_1_26 = (max (var_1_18 , var_1_73));
	}


	// From: Req14Batch185Amount250
	if (var_1_13) {
		if (var_1_45 >= var_1_44) {
			var_1_48 = (var_1_73 + ((min (var_1_32 , -64)) + var_1_1));
		} else {
			var_1_48 = (min (var_1_42 , var_1_22));
		}
	} else {
		var_1_48 = (min (var_1_34 , (min (var_1_42 , var_1_41))));
	}


	// From: Req29Batch185Amount250
	if (var_1_13 || var_1_58) {
		if (var_1_45 < ((24.8f + var_1_53) / var_1_24)) {
			var_1_74 = (abs (var_1_55 + var_1_31));
		}
	}


	// From: Req4Batch185Amount250
	signed long int stepLocal_2 = max (var_1_18 , (32 * var_1_7));
	signed long int stepLocal_1 = var_1_18 + (var_1_16 << var_1_4);
	if (var_1_10 > var_1_74) {
		var_1_15 = (var_1_16 + ((max (var_1_17 , var_1_18)) - 16));
	} else {
		if ((var_1_48 * var_1_4) <= stepLocal_2) {
			var_1_15 = (max (var_1_18 , var_1_17));
		} else {
			if (var_1_9 >= var_1_11) {
				if (((var_1_17 - 2) * var_1_48) == stepLocal_1) {
					var_1_15 = ((min (var_1_19 , (max (var_1_20 , var_1_21)))) - var_1_17);
				}
			} else {
				if (var_1_13) {
					var_1_15 = (var_1_17 + (var_1_18 - var_1_22));
				} else {
					var_1_15 = var_1_17;
				}
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32767);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 63);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 127);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 49150);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 1073741823);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 2147483647);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -127);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 1073741824);
	assume_abort_if_not(var_1_47 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= -230584.3009213691400e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691400e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= -115292.1504606845700e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 1152921.504606845700e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -115292.1504606845700e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 1152921.504606845700e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 32);
	assume_abort_if_not(var_1_64 <= 64);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 32);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_32 = var_1_32;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_73 = var_1_73;
}

int property(void) {
	return (((((((((((((((((((((((((((((-0.87 >= (- (var_1_53 + var_1_27))) ? (var_1_1 == ((signed short int) (min ((max ((max (var_1_4 , var_1_5)) , var_1_6)) , var_1_7)))) : 1) && (((var_1_9 - (min (var_1_10 , var_1_11))) >= var_1_27) ? (var_1_8 == ((unsigned char) (var_1_72 || var_1_13))) : 1)) && ((var_1_58 && var_1_13) ? (var_1_14 == ((signed short int) (max (-200 , var_1_4)))) : 1)) && ((var_1_10 > var_1_74) ? (var_1_15 == ((unsigned char) (var_1_16 + ((max (var_1_17 , var_1_18)) - 16)))) : (((var_1_48 * var_1_4) <= (max (var_1_18 , (32 * var_1_7)))) ? (var_1_15 == ((unsigned char) (max (var_1_18 , var_1_17)))) : ((var_1_9 >= var_1_11) ? ((((var_1_17 - 2) * var_1_48) == (var_1_18 + (var_1_16 << var_1_4))) ? (var_1_15 == ((unsigned char) ((min (var_1_19 , (max (var_1_20 , var_1_21)))) - var_1_17))) : 1) : (var_1_13 ? (var_1_15 == ((unsigned char) (var_1_17 + (var_1_18 - var_1_22)))) : (var_1_15 == ((unsigned char) var_1_17))))))) && (((var_1_27 / var_1_24) <= ((max (4.75 , var_1_11)) / 199.5)) ? (var_1_23 == ((double) (abs (var_1_25)))) : 1)) && ((var_1_6 >= (var_1_18 * var_1_22)) ? (var_1_26 == ((signed short int) ((var_1_16 + var_1_18) + var_1_22))) : (var_1_26 == ((signed short int) (max (var_1_18 , var_1_73)))))) && (last_1_var_1_49 ? (var_1_27 == ((double) (var_1_28 + (var_1_29 + (4.4 - var_1_30))))) : (var_1_27 == ((double) (var_1_28 + (max ((max (var_1_29 , var_1_30)) , var_1_31))))))) && (((var_1_16 >= (10 << var_1_5)) || var_1_13) ? (var_1_49 ? ((var_1_25 < (var_1_29 * (max (var_1_31 , 9999999.5)))) ? (var_1_32 == ((unsigned short int) var_1_17)) : 1) : (var_1_32 == ((unsigned short int) (var_1_33 - var_1_19)))) : (var_1_32 == ((unsigned short int) ((var_1_34 - var_1_18) - var_1_17))))) && ((var_1_28 > (- var_1_23)) ? (var_1_35 == ((unsigned short int) ((17335 - var_1_18) + var_1_32))) : (((max ((var_1_11 - var_1_10) , var_1_27)) != (var_1_28 / var_1_24)) ? (var_1_35 == ((unsigned short int) (min (var_1_19 , var_1_34)))) : 1))) && ((var_1_6 != var_1_17) ? (var_1_37 == ((unsigned long int) (max ((var_1_21 + (var_1_38 - last_1_var_1_37)) , (var_1_39 - (min (var_1_34 , var_1_33))))))) : (var_1_37 == ((unsigned long int) (var_1_39 - var_1_21))))) && (var_1_40 == ((signed char) (max ((max ((var_1_22 + -10) , var_1_41)) , var_1_42))))) && (var_1_49 ? (var_1_43 == ((float) (var_1_30 - 499.5f))) : (var_1_43 == ((float) (max (((min (var_1_30 , var_1_44)) - var_1_45) , var_1_28)))))) && ((last_1_var_1_32 < (10 | last_1_var_1_70)) ? (var_1_46 == ((unsigned long int) ((max (var_1_39 , (var_1_38 + var_1_47))) - var_1_21))) : (var_1_46 == ((unsigned long int) (min (var_1_33 , last_1_var_1_73)))))) && (var_1_13 ? ((var_1_45 >= var_1_44) ? (var_1_48 == ((signed long int) (var_1_73 + ((min (var_1_32 , -64)) + var_1_1)))) : (var_1_48 == ((signed long int) (min (var_1_42 , var_1_22))))) : (var_1_48 == ((signed long int) (min (var_1_34 , (min (var_1_42 , var_1_41)))))))) && (last_1_var_1_58 ? ((var_1_24 < var_1_30) ? (var_1_49 == ((unsigned char) var_1_50)) : (var_1_49 == ((unsigned char) (! (var_1_13 && var_1_51))))) : 1)) && (((var_1_37 & var_1_34) <= var_1_41) ? (var_1_52 == ((unsigned long int) (var_1_34 + (var_1_38 - last_1_var_1_52)))) : (var_1_52 == ((unsigned long int) ((max (var_1_38 , var_1_37)) + var_1_34))))) && ((var_1_35 < var_1_34) ? (((var_1_10 > (abs (var_1_27))) || (var_1_22 < var_1_18)) ? (var_1_53 == ((double) (var_1_29 + (var_1_30 + (abs (var_1_55)))))) : 1) : (var_1_53 == ((double) ((var_1_55 + (var_1_56 + var_1_57)) + var_1_29))))) && ((var_1_43 >= var_1_9) ? (var_1_58 == ((unsigned char) var_1_13)) : (((min ((var_1_46 | var_1_18) , var_1_52)) > var_1_22) ? (var_1_8 ? (var_1_58 == ((unsigned char) (! var_1_50))) : 1) : ((var_1_1 >= var_1_7) ? (var_1_58 == ((unsigned char) (var_1_13 || var_1_51))) : (var_1_58 == ((unsigned char) var_1_51)))))) && (((var_1_19 - var_1_17) > var_1_52) ? ((var_1_38 > 100u) ? (var_1_59 == ((float) (max (var_1_28 , (var_1_44 - (var_1_30 + var_1_60)))))) : 1) : (var_1_59 == ((float) (abs (var_1_25)))))) && (var_1_61 == ((signed long int) (max (var_1_22 , (var_1_18 - (max (var_1_46 , var_1_16)))))))) && ((var_1_24 <= var_1_25) ? ((var_1_20 < var_1_37) ? ((var_1_72 && var_1_8) ? (var_1_62 == ((unsigned char) (((var_1_64 - var_1_65) + var_1_66) + var_1_18))) : 1) : 1) : 1)) && ((var_1_8 && var_1_12) ? (var_1_67 == ((unsigned char) (4 + (2 + var_1_65)))) : 1)) && ((var_1_8 && (var_1_53 < var_1_11)) ? (var_1_68 == ((unsigned short int) (max ((var_1_18 + var_1_17) , var_1_21)))) : 1)) && (((var_1_16 + var_1_37) >= var_1_38) ? (var_1_69 == ((unsigned char) 64)) : (var_1_69 == ((unsigned char) (var_1_20 - (var_1_17 - var_1_65)))))) && (var_1_70 == ((unsigned long int) var_1_16))) && (((2 << var_1_34) >= (2 - var_1_33)) ? (var_1_71 == ((signed short int) var_1_19)) : 1)) && (var_1_72 == ((unsigned char) var_1_50))) && (var_1_58 ? (var_1_73 == ((signed long int) var_1_46)) : (var_1_73 == ((signed long int) var_1_37)))) && ((var_1_13 || var_1_58) ? ((var_1_45 < ((24.8f + var_1_53) / var_1_24)) ? (var_1_74 == ((double) (abs (var_1_55 + var_1_31)))) : 1) : 1)
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

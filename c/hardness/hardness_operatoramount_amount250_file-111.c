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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = 128;
double var_1_2 = 99.5;
double var_1_3 = 0.225;
signed short int var_1_7 = 0;
signed short int var_1_8 = -10;
signed short int var_1_9 = 1;
signed short int var_1_10 = 32;
signed short int var_1_11 = 19853;
signed short int var_1_12 = 10000;
signed short int var_1_13 = 32;
signed short int var_1_14 = -128;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 5;
unsigned char var_1_19 = 2;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 64;
unsigned long int var_1_22 = 0;
signed long int var_1_23 = -10;
float var_1_24 = 49.3;
float var_1_25 = 0.0;
float var_1_27 = 16.2;
float var_1_28 = 10.15;
float var_1_29 = 1.4;
float var_1_30 = 16.5;
float var_1_31 = 16.4;
float var_1_32 = 49.35;
signed short int var_1_33 = -16;
unsigned long int var_1_34 = 3324436183;
unsigned long int var_1_35 = 3859055328;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 1;
unsigned long int var_1_39 = 200;
unsigned short int var_1_40 = 10;
unsigned char var_1_41 = 2;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 200;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 128;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned long int var_1_51 = 25;
unsigned short int var_1_52 = 54848;
unsigned long int var_1_53 = 3442312639;
signed long int var_1_54 = -5;
signed long int var_1_55 = 1303741141;
signed long int var_1_56 = 1632202511;
signed long int var_1_57 = -64;
double var_1_58 = 0.0;
float var_1_59 = 10.8;
signed long int var_1_60 = -50;
signed long int var_1_61 = -16;
unsigned char var_1_63 = 2;
unsigned char var_1_64 = 1;
unsigned char var_1_65 = 1;
double var_1_66 = 15.25;
double var_1_67 = 63.75;
signed short int var_1_68 = 1;
unsigned char var_1_69 = 5;
double var_1_70 = 31.25;
unsigned char var_1_71 = 8;
unsigned char var_1_72 = 0;
float var_1_73 = 127.5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_22 = 0;
signed long int last_1_var_1_23 = -10;
signed long int last_1_var_1_54 = -5;
signed long int last_1_var_1_57 = -64;
unsigned char last_1_var_1_64 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch111Amount250
	signed short int stepLocal_7 = var_1_9;
	if (stepLocal_7 > var_1_10) {
		var_1_37 = ((1.6 > (max (var_1_31 , var_1_29))) || var_1_38);
	} else {
		var_1_37 = (((last_1_var_1_22 & var_1_9) <= -1) && (! var_1_38));
	}


	// From: Req13Batch111Amount250
	unsigned char stepLocal_11 = var_1_38;
	signed long int stepLocal_10 = last_1_var_1_57;
	if (last_1_var_1_64 && stepLocal_11) {
		var_1_51 = (max (last_1_var_1_23 , var_1_42));
	} else {
		if (stepLocal_10 >= (var_1_52 - var_1_21)) {
			var_1_51 = (var_1_53 - var_1_13);
		} else {
			var_1_51 = (var_1_53 - (min ((min (var_1_20 , var_1_9)) , last_1_var_1_54)));
		}
	}


	// From: Req18Batch111Amount250
	unsigned char stepLocal_15 = (var_1_16 * var_1_44) >= var_1_51;
	unsigned char stepLocal_14 = var_1_21;
	if (var_1_50 || stepLocal_15) {
		if (stepLocal_14 <= 16) {
			var_1_61 = (var_1_12 - var_1_55);
		}
	}


	// From: Req25Batch111Amount250
	if (var_1_65 && (var_1_51 < var_1_8)) {
		var_1_72 = var_1_65;
	}


	// From: Req2Batch111Amount250
	signed long int stepLocal_3 = var_1_7 * (2 - var_1_9);
	if (stepLocal_3 <= (var_1_13 - (var_1_12 + 1))) {
		var_1_15 = (min ((var_1_16 + var_1_17) , var_1_18));
	}


	// From: Req3Batch111Amount250
	if (var_1_72) {
		var_1_19 = ((var_1_20 + var_1_21) - var_1_16);
	}


	// From: Req21Batch111Amount250
	if (var_1_65 && ((var_1_17 == var_1_21) && var_1_49)) {
		var_1_66 = (var_1_27 - var_1_28);
	} else {
		var_1_66 = (var_1_27 - (max (var_1_28 , var_1_67)));
	}


	// From: Req24Batch111Amount250
	unsigned long int stepLocal_18 = - 16u;
	if (stepLocal_18 >= (- var_1_34)) {
		var_1_71 = (min (var_1_18 , (var_1_44 + var_1_21)));
	}


	// From: Req26Batch111Amount250
	var_1_73 = var_1_67;


	// From: Req7Batch111Amount250
	unsigned long int stepLocal_6 = var_1_35 - (max (var_1_20 , var_1_13));
	if (((var_1_34 - var_1_10) / 16u) > stepLocal_6) {
		if ((var_1_31 + var_1_66) >= var_1_66) {
			if (var_1_37) {
				var_1_33 = var_1_13;
			} else {
				var_1_33 = (max (var_1_13 , -8));
			}
		} else {
			var_1_33 = (abs (var_1_14));
		}
	} else {
		var_1_33 = (var_1_10 + var_1_16);
	}


	// From: Req20Batch111Amount250
	if (var_1_38) {
		var_1_64 = ((var_1_49 || var_1_50) && var_1_65);
	} else {
		if (! var_1_72) {
			var_1_64 = ((var_1_72 || var_1_50) && var_1_65);
		}
	}


	// From: Req12Batch111Amount250
	if (! var_1_64) {
		if ((var_1_66 + (var_1_28 - var_1_27)) <= var_1_29) {
			var_1_48 = (! var_1_38);
		} else {
			var_1_48 = var_1_49;
		}
	} else {
		var_1_48 = (var_1_38 && var_1_50);
	}


	// From: Req23Batch111Amount250
	if ((- var_1_66) >= ((16.125 + var_1_70) - var_1_28)) {
		if (var_1_66 <= var_1_70) {
			if (! var_1_48) {
				var_1_69 = var_1_17;
			}
		}
	} else {
		var_1_69 = var_1_47;
	}


	// From: Req17Batch111Amount250
	if (! var_1_37) {
		var_1_60 = (var_1_42 - (max (var_1_51 , (var_1_52 + var_1_33))));
	}


	// From: Req4Batch111Amount250
	var_1_22 = (var_1_11 + var_1_60);


	// From: Req15Batch111Amount250
	if (var_1_66 < ((var_1_58 - 255.2) - var_1_27)) {
		var_1_57 = var_1_47;
	} else {
		var_1_57 = (abs (min (var_1_7 , var_1_22)));
	}


	// From: Req10Batch111Amount250
	unsigned long int stepLocal_8 = var_1_34;
	if (stepLocal_8 > (var_1_69 | var_1_51)) {
		var_1_40 = (max (16 , (44260 - 32)));
	}


	// From: Req5Batch111Amount250
	signed short int stepLocal_5 = var_1_11;
	signed long int stepLocal_4 = var_1_20 - var_1_17;
	if (stepLocal_5 >= (var_1_10 & var_1_57)) {
		if (stepLocal_4 > var_1_18) {
			var_1_23 = 32;
		}
	} else {
		var_1_23 = var_1_16;
	}


	// From: Req22Batch111Amount250
	signed long int stepLocal_17 = var_1_60;
	if ((min ((var_1_44 - 1) , (var_1_16 - var_1_17))) <= stepLocal_17) {
		var_1_68 = (var_1_61 - (var_1_16 + (var_1_23 + var_1_43)));
	}


	// From: Req6Batch111Amount250
	if (var_1_16 < var_1_60) {
		var_1_24 = (var_1_25 + 10.875f);
	} else {
		if (var_1_37 || (var_1_40 >= var_1_11)) {
			if (1000.5f <= var_1_66) {
				var_1_24 = (var_1_27 - var_1_28);
			} else {
				var_1_24 = ((min (var_1_25 , (min (var_1_29 , var_1_30)))) + (var_1_31 + var_1_32));
			}
		}
	}


	// From: Req11Batch111Amount250
	unsigned char stepLocal_9 = (5 % var_1_21) < var_1_17;
	if (! (var_1_24 >= var_1_30)) {
		if (stepLocal_9 && var_1_72) {
			var_1_41 = (32 + (max ((var_1_21 - var_1_42) , (var_1_43 + var_1_44))));
		} else {
			var_1_41 = (min (var_1_17 , var_1_42));
		}
	} else {
		var_1_41 = ((min ((var_1_45 - var_1_42) , (min (var_1_46 , var_1_47)))) - var_1_43);
	}


	// From: Req1Batch111Amount250
	signed long int stepLocal_2 = 2;
	signed long int stepLocal_1 = var_1_9 - (max (var_1_12 , var_1_10));
	unsigned char stepLocal_0 = 4.25 <= var_1_3;
	if (var_1_2 == var_1_3) {
		if ((min (var_1_51 , var_1_68)) > stepLocal_2) {
			if (stepLocal_0 || var_1_37) {
				var_1_1 = (var_1_7 + var_1_8);
			} else {
				var_1_1 = (8 - (var_1_9 + (min (50 , var_1_10))));
			}
		} else {
			var_1_1 = (var_1_10 - ((max (var_1_11 , 21328)) - (var_1_12 - var_1_13)));
		}
	} else {
		if (stepLocal_1 <= var_1_8) {
			var_1_1 = ((min (var_1_9 , var_1_14)) + var_1_8);
		}
	}


	// From: Req14Batch111Amount250
	signed long int stepLocal_13 = min ((var_1_60 & var_1_55) , (max (var_1_1 , var_1_44)));
	signed long int stepLocal_12 = -16 ^ var_1_60;
	if (100 > stepLocal_12) {
		var_1_54 = ((var_1_55 - var_1_16) - (max ((var_1_56 - var_1_43) , var_1_47)));
	} else {
		if (stepLocal_13 > (var_1_56 * var_1_20)) {
			var_1_54 = (var_1_52 + var_1_45);
		}
	}


	// From: Req9Batch111Amount250
	if (var_1_1 == var_1_12) {
		var_1_39 = (max (var_1_54 , var_1_10));
	} else {
		var_1_39 = (abs (var_1_61));
	}


	// From: Req16Batch111Amount250
	if (var_1_22 >= (var_1_1 / var_1_45)) {
		var_1_59 = (128.375f + (min (var_1_32 , 2.5f)));
	} else {
		var_1_59 = (max ((min (1.0000000008E9f , var_1_27)) , var_1_32));
	}


	// From: Req19Batch111Amount250
	signed long int stepLocal_16 = var_1_54 / var_1_11;
	if (var_1_23 != stepLocal_16) {
		var_1_63 = (abs (var_1_46));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -16383);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 16383);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 8191);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 8191);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -16383);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 63);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 64);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -230584.3009213691400e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967295);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967295);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 64);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 190);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 127);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 127);
	assume_abort_if_not(var_1_47 <= 254);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 32767);
	assume_abort_if_not(var_1_52 <= 65535);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 2147483647);
	assume_abort_if_not(var_1_53 <= 4294967294);
	var_1_55 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_55 >= 1073741822);
	assume_abort_if_not(var_1_55 <= 2147483646);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= 1073741823);
	assume_abort_if_not(var_1_56 <= 2147483646);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 4611686.018427388000e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854766000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427388000e+12F && var_1_70 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_22 = var_1_22;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_64 = var_1_64;
}

int property(void) {
	return ((((((((((((((((((((((((((var_1_2 == var_1_3) ? (((min (var_1_51 , var_1_68)) > 2) ? (((4.25 <= var_1_3) || var_1_37) ? (var_1_1 == ((signed short int) (var_1_7 + var_1_8))) : (var_1_1 == ((signed short int) (8 - (var_1_9 + (min (50 , var_1_10))))))) : (var_1_1 == ((signed short int) (var_1_10 - ((max (var_1_11 , 21328)) - (var_1_12 - var_1_13)))))) : (((var_1_9 - (max (var_1_12 , var_1_10))) <= var_1_8) ? (var_1_1 == ((signed short int) ((min (var_1_9 , var_1_14)) + var_1_8))) : 1)) && (((var_1_7 * (2 - var_1_9)) <= (var_1_13 - (var_1_12 + 1))) ? (var_1_15 == ((unsigned char) (min ((var_1_16 + var_1_17) , var_1_18)))) : 1)) && (var_1_72 ? (var_1_19 == ((unsigned char) ((var_1_20 + var_1_21) - var_1_16))) : 1)) && (var_1_22 == ((unsigned long int) (var_1_11 + var_1_60)))) && ((var_1_11 >= (var_1_10 & var_1_57)) ? (((var_1_20 - var_1_17) > var_1_18) ? (var_1_23 == ((signed long int) 32)) : 1) : (var_1_23 == ((signed long int) var_1_16)))) && ((var_1_16 < var_1_60) ? (var_1_24 == ((float) (var_1_25 + 10.875f))) : ((var_1_37 || (var_1_40 >= var_1_11)) ? ((1000.5f <= var_1_66) ? (var_1_24 == ((float) (var_1_27 - var_1_28))) : (var_1_24 == ((float) ((min (var_1_25 , (min (var_1_29 , var_1_30)))) + (var_1_31 + var_1_32))))) : 1))) && ((((var_1_34 - var_1_10) / 16u) > (var_1_35 - (max (var_1_20 , var_1_13)))) ? (((var_1_31 + var_1_66) >= var_1_66) ? (var_1_37 ? (var_1_33 == ((signed short int) var_1_13)) : (var_1_33 == ((signed short int) (max (var_1_13 , -8))))) : (var_1_33 == ((signed short int) (abs (var_1_14))))) : (var_1_33 == ((signed short int) (var_1_10 + var_1_16))))) && ((var_1_9 > var_1_10) ? (var_1_37 == ((unsigned char) ((1.6 > (max (var_1_31 , var_1_29))) || var_1_38))) : (var_1_37 == ((unsigned char) (((last_1_var_1_22 & var_1_9) <= -1) && (! var_1_38)))))) && ((var_1_1 == var_1_12) ? (var_1_39 == ((unsigned long int) (max (var_1_54 , var_1_10)))) : (var_1_39 == ((unsigned long int) (abs (var_1_61)))))) && ((var_1_34 > (var_1_69 | var_1_51)) ? (var_1_40 == ((unsigned short int) (max (16 , (44260 - 32))))) : 1)) && ((! (var_1_24 >= var_1_30)) ? ((((5 % var_1_21) < var_1_17) && var_1_72) ? (var_1_41 == ((unsigned char) (32 + (max ((var_1_21 - var_1_42) , (var_1_43 + var_1_44)))))) : (var_1_41 == ((unsigned char) (min (var_1_17 , var_1_42))))) : (var_1_41 == ((unsigned char) ((min ((var_1_45 - var_1_42) , (min (var_1_46 , var_1_47)))) - var_1_43))))) && ((! var_1_64) ? (((var_1_66 + (var_1_28 - var_1_27)) <= var_1_29) ? (var_1_48 == ((unsigned char) (! var_1_38))) : (var_1_48 == ((unsigned char) var_1_49))) : (var_1_48 == ((unsigned char) (var_1_38 && var_1_50))))) && ((last_1_var_1_64 && var_1_38) ? (var_1_51 == ((unsigned long int) (max (last_1_var_1_23 , var_1_42)))) : ((last_1_var_1_57 >= (var_1_52 - var_1_21)) ? (var_1_51 == ((unsigned long int) (var_1_53 - var_1_13))) : (var_1_51 == ((unsigned long int) (var_1_53 - (min ((min (var_1_20 , var_1_9)) , last_1_var_1_54)))))))) && ((100 > (-16 ^ var_1_60)) ? (var_1_54 == ((signed long int) ((var_1_55 - var_1_16) - (max ((var_1_56 - var_1_43) , var_1_47))))) : (((min ((var_1_60 & var_1_55) , (max (var_1_1 , var_1_44)))) > (var_1_56 * var_1_20)) ? (var_1_54 == ((signed long int) (var_1_52 + var_1_45))) : 1))) && ((var_1_66 < ((var_1_58 - 255.2) - var_1_27)) ? (var_1_57 == ((signed long int) var_1_47)) : (var_1_57 == ((signed long int) (abs (min (var_1_7 , var_1_22))))))) && ((var_1_22 >= (var_1_1 / var_1_45)) ? (var_1_59 == ((float) (128.375f + (min (var_1_32 , 2.5f))))) : (var_1_59 == ((float) (max ((min (1.0000000008E9f , var_1_27)) , var_1_32)))))) && ((! var_1_37) ? (var_1_60 == ((signed long int) (var_1_42 - (max (var_1_51 , (var_1_52 + var_1_33)))))) : 1)) && ((var_1_50 || ((var_1_16 * var_1_44) >= var_1_51)) ? ((var_1_21 <= 16) ? (var_1_61 == ((signed long int) (var_1_12 - var_1_55))) : 1) : 1)) && ((var_1_23 != (var_1_54 / var_1_11)) ? (var_1_63 == ((unsigned char) (abs (var_1_46)))) : 1)) && (var_1_38 ? (var_1_64 == ((unsigned char) ((var_1_49 || var_1_50) && var_1_65))) : ((! var_1_72) ? (var_1_64 == ((unsigned char) ((var_1_72 || var_1_50) && var_1_65))) : 1))) && ((var_1_65 && ((var_1_17 == var_1_21) && var_1_49)) ? (var_1_66 == ((double) (var_1_27 - var_1_28))) : (var_1_66 == ((double) (var_1_27 - (max (var_1_28 , var_1_67))))))) && (((min ((var_1_44 - 1) , (var_1_16 - var_1_17))) <= var_1_60) ? (var_1_68 == ((signed short int) (var_1_61 - (var_1_16 + (var_1_23 + var_1_43))))) : 1)) && (((- var_1_66) >= ((16.125 + var_1_70) - var_1_28)) ? ((var_1_66 <= var_1_70) ? ((! var_1_48) ? (var_1_69 == ((unsigned char) var_1_17)) : 1) : 1) : (var_1_69 == ((unsigned char) var_1_47)))) && (((- 16u) >= (- var_1_34)) ? (var_1_71 == ((unsigned char) (min (var_1_18 , (var_1_44 + var_1_21))))) : 1)) && ((var_1_65 && (var_1_51 < var_1_8)) ? (var_1_72 == ((unsigned char) var_1_65)) : 1)) && (var_1_73 == ((float) var_1_67))
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

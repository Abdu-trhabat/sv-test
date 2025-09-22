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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126Amount250.c", 13, "reach_error"); }
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
signed char var_1_1 = 0;
signed char var_1_4 = -2;
signed char var_1_5 = -8;
float var_1_6 = 0.6;
signed char var_1_7 = 10;
float var_1_8 = 63.5;
float var_1_9 = 7.125;
float var_1_10 = 127.75;
float var_1_11 = 8.5;
float var_1_12 = 2.6;
float var_1_13 = 25.75;
float var_1_14 = 8.25;
unsigned short int var_1_15 = 256;
float var_1_16 = 127.8;
unsigned short int var_1_17 = 4;
unsigned short int var_1_18 = 18429;
unsigned short int var_1_19 = 128;
unsigned short int var_1_20 = 2;
unsigned long int var_1_21 = 0;
unsigned long int var_1_22 = 3472825073;
unsigned long int var_1_23 = 3909558108;
float var_1_24 = 2.5;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
float var_1_28 = 31.2;
signed char var_1_29 = 32;
signed char var_1_30 = 25;
float var_1_31 = 128.5;
unsigned short int var_1_32 = 16;
unsigned char var_1_33 = 32;
unsigned short int var_1_34 = 45383;
unsigned char var_1_35 = 1;
unsigned long int var_1_36 = 0;
unsigned long int var_1_38 = 1968618632;
unsigned long int var_1_39 = 1338478948;
signed char var_1_40 = 5;
signed char var_1_41 = 64;
signed char var_1_42 = 10;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
signed long int var_1_46 = -2;
signed long int var_1_47 = 10;
unsigned long int var_1_48 = 256;
signed short int var_1_49 = 500;
double var_1_50 = 3.5;
unsigned char var_1_51 = 200;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 50;
unsigned char var_1_58 = 128;
unsigned long int var_1_59 = 2;
signed char var_1_60 = -1;
unsigned short int var_1_61 = 4;
double var_1_62 = 5.25;
signed char var_1_63 = 4;
double var_1_64 = 1.875;
unsigned long int var_1_65 = 5;
signed short int var_1_66 = 8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_21 = 0;
unsigned char last_1_var_1_25 = 0;
unsigned char last_1_var_1_35 = 1;
unsigned char last_1_var_1_43 = 0;
signed short int last_1_var_1_49 = 500;
unsigned long int last_1_var_1_59 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch126Amount250
	if ((abs (last_1_var_1_21)) <= last_1_var_1_49) {
		var_1_43 = ((last_1_var_1_35 && var_1_26) && var_1_44);
	} else {
		var_1_43 = (var_1_26 || var_1_45);
	}


	// From: Req2Batch126Amount250
	if (last_1_var_1_25) {
		if (var_1_5 >= ((var_1_4 ^ last_1_var_1_59) / var_1_7)) {
			if (last_1_var_1_43) {
				var_1_6 = (abs ((max (127.8f , var_1_8)) + var_1_9));
			}
		} else {
			var_1_6 = ((min ((min (var_1_10 , var_1_11)) , (var_1_12 + var_1_13))) - var_1_14);
		}
	}


	// From: Req3Batch126Amount250
	if (var_1_9 >= (var_1_6 / var_1_16)) {
		var_1_15 = (abs (var_1_17));
	} else {
		var_1_15 = ((var_1_18 - var_1_19) + var_1_20);
	}


	// From: Req16Batch126Amount250
	unsigned char stepLocal_7 = var_1_33;
	unsigned short int stepLocal_6 = var_1_15;
	if (((var_1_39 & var_1_34) >> var_1_47) >= stepLocal_6) {
		if (((var_1_51 - var_1_47) - var_1_42) < stepLocal_7) {
			if (var_1_44) {
				var_1_50 = (var_1_14 - var_1_31);
			}
		}
	} else {
		var_1_50 = ((max (var_1_10 , var_1_12)) - var_1_31);
	}


	// From: Req20Batch126Amount250
	if (var_1_10 <= (var_1_12 + var_1_11)) {
		var_1_59 = (max ((var_1_23 - 100000u) , (abs (1u))));
	} else {
		var_1_59 = (min (var_1_18 , var_1_34));
	}


	// From: Req22Batch126Amount250
	if (var_1_9 < (var_1_16 + var_1_8)) {
		var_1_61 = (var_1_30 + var_1_51);
	} else {
		var_1_61 = (max (var_1_30 , 16));
	}


	// From: Req23Batch126Amount250
	var_1_62 = (var_1_8 + var_1_13);


	// From: Req24Batch126Amount250
	if (var_1_15 != var_1_59) {
		if ((var_1_62 / var_1_16) > ((var_1_14 / var_1_64) + (abs (var_1_31)))) {
			var_1_63 = var_1_42;
		}
	} else {
		var_1_63 = (max ((64 - (max (5 , var_1_47))) , (min (var_1_4 , var_1_42))));
	}


	// From: Req25Batch126Amount250
	if (var_1_44) {
		var_1_65 = 256u;
	}


	// From: Req6Batch126Amount250
	if ((256 << 10) >= var_1_15) {
		if (var_1_6 <= 63.7f) {
			var_1_25 = (var_1_43 || ((! var_1_26) && var_1_27));
		} else {
			var_1_25 = (! 1);
		}
	} else {
		var_1_25 = var_1_26;
	}


	// From: Req4Batch126Amount250
	var_1_21 = ((max (var_1_22 , var_1_23)) - (var_1_19 + var_1_61));


	// From: Req7Batch126Amount250
	signed long int stepLocal_3 = min (var_1_18 , -16);
	unsigned char stepLocal_2 = var_1_5 <= (var_1_29 - var_1_30);
	if (stepLocal_3 <= var_1_19) {
		if (stepLocal_2 && var_1_25) {
			var_1_28 = (var_1_31 - (abs (max (var_1_12 , var_1_11))));
		} else {
			var_1_28 = (var_1_13 + (max (var_1_8 , 15.375f)));
		}
	}


	// From: Req14Batch126Amount250
	if (var_1_13 <= var_1_11) {
		var_1_48 = (var_1_47 + var_1_59);
	} else {
		var_1_48 = (var_1_59 + (var_1_39 - var_1_18));
	}


	// From: Req17Batch126Amount250
	if (32 > (var_1_42 | var_1_21)) {
		if (var_1_25) {
			var_1_52 = (! var_1_27);
		} else {
			var_1_52 = (var_1_27 && var_1_53);
		}
	} else {
		var_1_52 = var_1_26;
	}


	// From: Req18Batch126Amount250
	if ((var_1_42 / var_1_33) <= (max (var_1_41 , var_1_19))) {
		if (var_1_25) {
			var_1_54 = (! ((var_1_53 && var_1_27) && var_1_55));
		}
	} else {
		var_1_54 = (! ((var_1_42 >= var_1_21) && var_1_45));
	}


	// From: Req19Batch126Amount250
	unsigned long int stepLocal_8 = var_1_39;
	if (var_1_62 <= var_1_11) {
		if (var_1_29 > stepLocal_8) {
			var_1_56 = (min (var_1_42 , (var_1_47 + 8)));
		} else {
			var_1_56 = (max (var_1_47 , var_1_42));
		}
	} else {
		var_1_56 = (var_1_58 - 16);
	}


	// From: Req21Batch126Amount250
	signed char stepLocal_9 = var_1_7;
	if (stepLocal_9 <= ((5 << var_1_61) + var_1_33)) {
		var_1_60 = (var_1_47 - var_1_42);
	} else {
		var_1_60 = (var_1_42 - var_1_47);
	}


	// From: Req9Batch126Amount250
	if (! var_1_43) {
		if (var_1_50 >= (max (var_1_6 , var_1_9))) {
			var_1_35 = ((var_1_21 < var_1_20) || var_1_27);
		} else {
			var_1_35 = var_1_26;
		}
	}


	// From: Req1Batch126Amount250
	if (var_1_52 || var_1_25) {
		var_1_1 = (abs (min (var_1_4 , var_1_5)));
	}


	// From: Req8Batch126Amount250
	if ((var_1_30 / (min (var_1_7 , var_1_33))) >= (var_1_65 * (var_1_19 / var_1_18))) {
		if ((var_1_62 <= var_1_9) || (! var_1_54)) {
			var_1_32 = (abs (var_1_20));
		} else {
			var_1_32 = ((abs (var_1_34)) - var_1_20);
		}
	} else {
		var_1_32 = (var_1_30 + var_1_33);
	}


	// From: Req13Batch126Amount250
	unsigned long int stepLocal_4 = var_1_65 + (var_1_22 >> var_1_47);
	if (stepLocal_4 > (abs (var_1_48))) {
		var_1_46 = 10000;
	}


	// From: Req15Batch126Amount250
	unsigned char stepLocal_5 = var_1_11 >= var_1_8;
	if (var_1_11 <= var_1_16) {
		var_1_49 = (var_1_33 + (var_1_42 + (max (var_1_7 , var_1_46))));
	} else {
		if (stepLocal_5 || var_1_25) {
			var_1_49 = (max (var_1_33 , var_1_46));
		} else {
			var_1_49 = (max (var_1_47 , (var_1_29 - var_1_33)));
		}
	}


	// From: Req10Batch126Amount250
	if (var_1_34 >= (10 ^ var_1_46)) {
		var_1_36 = ((var_1_38 + var_1_39) - var_1_20);
	}


	// From: Req26Batch126Amount250
	unsigned long int stepLocal_11 = var_1_48 / var_1_51;
	signed long int stepLocal_10 = var_1_4 / (max (var_1_47 , var_1_18));
	if (stepLocal_11 <= 8) {
		if (stepLocal_10 <= (var_1_34 - var_1_17)) {
			if (var_1_54) {
				var_1_66 = var_1_29;
			} else {
				var_1_66 = var_1_36;
			}
		} else {
			var_1_66 = var_1_30;
		}
	} else {
		var_1_66 = var_1_65;
	}


	// From: Req5Batch126Amount250
	unsigned short int stepLocal_1 = var_1_20;
	unsigned char stepLocal_0 = var_1_43;
	if (stepLocal_0 && ((var_1_7 ^ var_1_1) < (var_1_36 / var_1_18))) {
		var_1_24 = (abs (var_1_11));
	} else {
		if ((-5 * (abs (var_1_4))) <= stepLocal_1) {
			var_1_24 = (var_1_11 - var_1_13);
		} else {
			if (var_1_43) {
				var_1_24 = var_1_11;
			} else {
				var_1_24 = var_1_13;
			}
		}
	}


	// From: Req11Batch126Amount250
	if (var_1_26) {
		if (((var_1_14 + var_1_24) + var_1_16) < var_1_13) {
			var_1_40 = var_1_4;
		} else {
			var_1_40 = (var_1_41 - var_1_42);
		}
	} else {
		var_1_40 = (var_1_42 - 16);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -126);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -126);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(var_1_16 != 0.0F);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 2147483647);
	assume_abort_if_not(var_1_23 <= 4294967294);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -1);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 255);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 1073741823);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 1073741824);
	assume_abort_if_not(var_1_39 <= 2147483647);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -1);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 31);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 191);
	assume_abort_if_not(var_1_51 <= 255);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 127);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -922337.2036854776000e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854776000e+12F && var_1_64 >= 1.0e-20F ));
	assume_abort_if_not(var_1_64 != 0.0F);
}



void updateLastVariables(void) {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_59 = var_1_59;
}

int property(void) {
	return ((((((((((((((((((((((((((var_1_52 || var_1_25) ? (var_1_1 == ((signed char) (abs (min (var_1_4 , var_1_5))))) : 1) && (last_1_var_1_25 ? ((var_1_5 >= ((var_1_4 ^ last_1_var_1_59) / var_1_7)) ? (last_1_var_1_43 ? (var_1_6 == ((float) (abs ((max (127.8f , var_1_8)) + var_1_9)))) : 1) : (var_1_6 == ((float) ((min ((min (var_1_10 , var_1_11)) , (var_1_12 + var_1_13))) - var_1_14)))) : 1)) && ((var_1_9 >= (var_1_6 / var_1_16)) ? (var_1_15 == ((unsigned short int) (abs (var_1_17)))) : (var_1_15 == ((unsigned short int) ((var_1_18 - var_1_19) + var_1_20))))) && (var_1_21 == ((unsigned long int) ((max (var_1_22 , var_1_23)) - (var_1_19 + var_1_61))))) && ((var_1_43 && ((var_1_7 ^ var_1_1) < (var_1_36 / var_1_18))) ? (var_1_24 == ((float) (abs (var_1_11)))) : (((-5 * (abs (var_1_4))) <= var_1_20) ? (var_1_24 == ((float) (var_1_11 - var_1_13))) : (var_1_43 ? (var_1_24 == ((float) var_1_11)) : (var_1_24 == ((float) var_1_13)))))) && (((256 << 10) >= var_1_15) ? ((var_1_6 <= 63.7f) ? (var_1_25 == ((unsigned char) (var_1_43 || ((! var_1_26) && var_1_27)))) : (var_1_25 == ((unsigned char) (! 1)))) : (var_1_25 == ((unsigned char) var_1_26)))) && (((min (var_1_18 , -16)) <= var_1_19) ? (((var_1_5 <= (var_1_29 - var_1_30)) && var_1_25) ? (var_1_28 == ((float) (var_1_31 - (abs (max (var_1_12 , var_1_11)))))) : (var_1_28 == ((float) (var_1_13 + (max (var_1_8 , 15.375f)))))) : 1)) && (((var_1_30 / (min (var_1_7 , var_1_33))) >= (var_1_65 * (var_1_19 / var_1_18))) ? (((var_1_62 <= var_1_9) || (! var_1_54)) ? (var_1_32 == ((unsigned short int) (abs (var_1_20)))) : (var_1_32 == ((unsigned short int) ((abs (var_1_34)) - var_1_20)))) : (var_1_32 == ((unsigned short int) (var_1_30 + var_1_33))))) && ((! var_1_43) ? ((var_1_50 >= (max (var_1_6 , var_1_9))) ? (var_1_35 == ((unsigned char) ((var_1_21 < var_1_20) || var_1_27))) : (var_1_35 == ((unsigned char) var_1_26))) : 1)) && ((var_1_34 >= (10 ^ var_1_46)) ? (var_1_36 == ((unsigned long int) ((var_1_38 + var_1_39) - var_1_20))) : 1)) && (var_1_26 ? ((((var_1_14 + var_1_24) + var_1_16) < var_1_13) ? (var_1_40 == ((signed char) var_1_4)) : (var_1_40 == ((signed char) (var_1_41 - var_1_42)))) : (var_1_40 == ((signed char) (var_1_42 - 16))))) && (((abs (last_1_var_1_21)) <= last_1_var_1_49) ? (var_1_43 == ((unsigned char) ((last_1_var_1_35 && var_1_26) && var_1_44))) : (var_1_43 == ((unsigned char) (var_1_26 || var_1_45))))) && (((var_1_65 + (var_1_22 >> var_1_47)) > (abs (var_1_48))) ? (var_1_46 == ((signed long int) 10000)) : 1)) && ((var_1_13 <= var_1_11) ? (var_1_48 == ((unsigned long int) (var_1_47 + var_1_59))) : (var_1_48 == ((unsigned long int) (var_1_59 + (var_1_39 - var_1_18)))))) && ((var_1_11 <= var_1_16) ? (var_1_49 == ((signed short int) (var_1_33 + (var_1_42 + (max (var_1_7 , var_1_46)))))) : (((var_1_11 >= var_1_8) || var_1_25) ? (var_1_49 == ((signed short int) (max (var_1_33 , var_1_46)))) : (var_1_49 == ((signed short int) (max (var_1_47 , (var_1_29 - var_1_33)))))))) && ((((var_1_39 & var_1_34) >> var_1_47) >= var_1_15) ? ((((var_1_51 - var_1_47) - var_1_42) < var_1_33) ? (var_1_44 ? (var_1_50 == ((double) (var_1_14 - var_1_31))) : 1) : 1) : (var_1_50 == ((double) ((max (var_1_10 , var_1_12)) - var_1_31))))) && ((32 > (var_1_42 | var_1_21)) ? (var_1_25 ? (var_1_52 == ((unsigned char) (! var_1_27))) : (var_1_52 == ((unsigned char) (var_1_27 && var_1_53)))) : (var_1_52 == ((unsigned char) var_1_26)))) && (((var_1_42 / var_1_33) <= (max (var_1_41 , var_1_19))) ? (var_1_25 ? (var_1_54 == ((unsigned char) (! ((var_1_53 && var_1_27) && var_1_55)))) : 1) : (var_1_54 == ((unsigned char) (! ((var_1_42 >= var_1_21) && var_1_45)))))) && ((var_1_62 <= var_1_11) ? ((var_1_29 > var_1_39) ? (var_1_56 == ((unsigned char) (min (var_1_42 , (var_1_47 + 8))))) : (var_1_56 == ((unsigned char) (max (var_1_47 , var_1_42))))) : (var_1_56 == ((unsigned char) (var_1_58 - 16))))) && ((var_1_10 <= (var_1_12 + var_1_11)) ? (var_1_59 == ((unsigned long int) (max ((var_1_23 - 100000u) , (abs (1u)))))) : (var_1_59 == ((unsigned long int) (min (var_1_18 , var_1_34)))))) && ((var_1_7 <= ((5 << var_1_61) + var_1_33)) ? (var_1_60 == ((signed char) (var_1_47 - var_1_42))) : (var_1_60 == ((signed char) (var_1_42 - var_1_47))))) && ((var_1_9 < (var_1_16 + var_1_8)) ? (var_1_61 == ((unsigned short int) (var_1_30 + var_1_51))) : (var_1_61 == ((unsigned short int) (max (var_1_30 , 16)))))) && (var_1_62 == ((double) (var_1_8 + var_1_13)))) && ((var_1_15 != var_1_59) ? (((var_1_62 / var_1_16) > ((var_1_14 / var_1_64) + (abs (var_1_31)))) ? (var_1_63 == ((signed char) var_1_42)) : 1) : (var_1_63 == ((signed char) (max ((64 - (max (5 , var_1_47))) , (min (var_1_4 , var_1_42)))))))) && (var_1_44 ? (var_1_65 == ((unsigned long int) 256u)) : 1)) && (((var_1_48 / var_1_51) <= 8) ? (((var_1_4 / (max (var_1_47 , var_1_18))) <= (var_1_34 - var_1_17)) ? (var_1_54 ? (var_1_66 == ((signed short int) var_1_29)) : (var_1_66 == ((signed short int) var_1_36))) : (var_1_66 == ((signed short int) var_1_30))) : (var_1_66 == ((signed short int) var_1_65)))
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

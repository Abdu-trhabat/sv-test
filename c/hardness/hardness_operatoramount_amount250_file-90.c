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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch90Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 0.6;
double var_1_5 = 49.1;
double var_1_6 = 1.25;
double var_1_7 = 99.5;
double var_1_8 = 63.4;
unsigned short int var_1_9 = 64;
unsigned short int var_1_10 = 32;
unsigned short int var_1_11 = 5;
unsigned short int var_1_12 = 4;
unsigned short int var_1_13 = 4;
unsigned short int var_1_14 = 48284;
unsigned short int var_1_15 = 2;
float var_1_16 = 255.75;
float var_1_17 = 5.25;
float var_1_18 = 16.5;
float var_1_19 = 99.5;
float var_1_20 = 2.5;
signed char var_1_21 = 64;
signed char var_1_24 = -5;
signed char var_1_25 = 50;
signed char var_1_26 = -10;
signed char var_1_27 = 10;
signed char var_1_28 = -1;
signed char var_1_29 = 1;
signed char var_1_30 = 4;
signed char var_1_31 = 8;
signed char var_1_32 = 25;
signed long int var_1_33 = 128;
signed char var_1_34 = -100;
unsigned long int var_1_35 = 32;
unsigned long int var_1_36 = 1750451515;
unsigned long int var_1_37 = 1974690329;
unsigned long int var_1_38 = 2094102767;
unsigned char var_1_39 = 0;
float var_1_40 = 0.0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 100;
unsigned long int var_1_45 = 2544471796;
double var_1_46 = 1.5;
unsigned char var_1_47 = 16;
unsigned char var_1_48 = 10;
unsigned short int var_1_49 = 8;
unsigned short int var_1_50 = 10;
double var_1_51 = 16.25;
unsigned char var_1_52 = 2;
unsigned char var_1_53 = 128;
float var_1_54 = 100.125;
float var_1_55 = 2.38;
double var_1_56 = -0.5;
double var_1_57 = 999999999999.75;
double var_1_58 = 128.7;
unsigned char var_1_59 = 1;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned long int var_1_62 = 64;
unsigned long int var_1_63 = 1901262585;
unsigned char var_1_64 = 1;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 4;
unsigned long int var_1_67 = 256;
unsigned long int var_1_68 = 1000000000;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_12 = 4;
float last_1_var_1_16 = 255.75;
signed long int last_1_var_1_33 = 128;
unsigned char last_1_var_1_48 = 10;
unsigned short int last_1_var_1_49 = 8;
double last_1_var_1_51 = 16.25;
float last_1_var_1_54 = 100.125;
unsigned long int last_1_var_1_62 = 64;
unsigned long int last_1_var_1_67 = 256;
unsigned long int last_1_var_1_68 = 1000000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch90Amount250
	if ((- last_1_var_1_51) >= last_1_var_1_16) {
		if (last_1_var_1_16 < ((last_1_var_1_51 * last_1_var_1_54) * 0.5f)) {
			var_1_1 = (max (var_1_5 , ((max (var_1_6 , var_1_7)) + var_1_8)));
		} else {
			var_1_1 = var_1_8;
		}
	}


	// From: Req13Batch90Amount250
	if (var_1_5 < (abs (var_1_1))) {
		if (2.5 <= var_1_6) {
			var_1_49 = (var_1_14 - last_1_var_1_49);
		}
	} else {
		var_1_49 = (abs (var_1_50));
	}


	// From: Req21Batch90Amount250
	unsigned char stepLocal_11 = var_1_42;
	if (var_1_41) {
		if (((last_1_var_1_12 / var_1_37) <= last_1_var_1_12) || stepLocal_11) {
			var_1_62 = ((var_1_36 + (min (var_1_38 , var_1_63))) - (max (last_1_var_1_48 , var_1_30)));
		} else {
			var_1_62 = ((min ((var_1_36 + var_1_38) , var_1_45)) - (min (var_1_50 , last_1_var_1_62)));
		}
	} else {
		var_1_62 = (last_1_var_1_33 + var_1_14);
	}


	// From: Req24Batch90Amount250
	unsigned long int stepLocal_12 = (50 / 128) + last_1_var_1_62;
	if (stepLocal_12 >= (min (last_1_var_1_67 , last_1_var_1_62))) {
		var_1_67 = (var_1_11 + (abs (var_1_13)));
	} else {
		var_1_67 = var_1_45;
	}


	// From: Req3Batch90Amount250
	if (var_1_67 >= var_1_11) {
		var_1_12 = (min ((max ((min (var_1_11 , var_1_10)) , 1)) , (abs (var_1_13))));
	} else {
		var_1_12 = (var_1_14 - var_1_15);
	}


	// From: Req2Batch90Amount250
	var_1_9 = (abs (max (var_1_10 , var_1_11)));


	// From: Req4Batch90Amount250
	unsigned short int stepLocal_0 = var_1_11;
	if (var_1_5 >= 1.75) {
		if (stepLocal_0 < var_1_10) {
			var_1_16 = ((var_1_17 + var_1_18) - (abs (var_1_7)));
		} else {
			var_1_16 = (var_1_18 - (var_1_17 + (var_1_19 + var_1_20)));
		}
	}


	// From: Req11Batch90Amount250
	unsigned char stepLocal_4 = 15.2f >= var_1_1;
	if (var_1_42 && stepLocal_4) {
		var_1_47 = (min ((var_1_31 + (abs (var_1_29))) , (max (var_1_32 , var_1_30))));
	}


	// From: Req15Batch90Amount250
	if (var_1_37 <= 5u) {
		var_1_52 = (10 + (100 - var_1_32));
	} else {
		if (var_1_12 < var_1_10) {
			var_1_52 = ((max (128 , var_1_53)) - var_1_30);
		} else {
			if (var_1_41) {
				var_1_52 = (min ((abs (var_1_29 + var_1_31)) , var_1_53));
			} else {
				var_1_52 = (32 + var_1_30);
			}
		}
	}


	// From: Req19Batch90Amount250
	if (! (var_1_26 <= (var_1_13 + 2))) {
		if (var_1_9 != var_1_50) {
			var_1_57 = (var_1_18 + (var_1_58 - var_1_20));
		}
	}


	// From: Req20Batch90Amount250
	var_1_59 = (! (var_1_60 || var_1_61));


	// From: Req22Batch90Amount250
	var_1_64 = ((var_1_59 && (var_1_61 && var_1_60)) || ((var_1_30 > -16) && var_1_65));


	// From: Req23Batch90Amount250
	if (var_1_59) {
		var_1_66 = var_1_31;
	} else {
		var_1_66 = var_1_29;
	}


	// From: Req25Batch90Amount250
	var_1_68 = last_1_var_1_68;


	// From: Req16Batch90Amount250
	unsigned short int stepLocal_7 = var_1_49;
	if ((var_1_28 / 8) != stepLocal_7) {
		var_1_54 = (min (var_1_6 , var_1_17));
	} else {
		if (var_1_64) {
			var_1_54 = var_1_20;
		}
	}


	// From: Req6Batch90Amount250
	if (var_1_12 <= var_1_29) {
		var_1_33 = ((var_1_68 - var_1_14) + var_1_32);
	} else {
		if (! (var_1_31 < (var_1_29 / var_1_34))) {
			if (var_1_25 < 32) {
				var_1_33 = var_1_32;
			}
		}
	}


	// From: Req7Batch90Amount250
	unsigned short int stepLocal_3 = var_1_9;
	if (((var_1_15 + var_1_27) + var_1_14) == stepLocal_3) {
		if ((var_1_20 * (0.75 / 1.9)) > ((var_1_18 - 50.2) + var_1_6)) {
			var_1_35 = (((min (var_1_36 , var_1_37)) + var_1_38) - var_1_10);
		}
	} else {
		var_1_35 = (var_1_67 + (max ((max (var_1_29 , var_1_38)) , var_1_30)));
	}


	// From: Req5Batch90Amount250
	unsigned char stepLocal_2 = var_1_64;
	unsigned long int stepLocal_1 = 5u;
	if (stepLocal_1 <= var_1_15) {
		if (stepLocal_2 && (var_1_35 <= var_1_13)) {
			var_1_21 = ((abs (min (var_1_24 , var_1_25))) + (var_1_26 + var_1_27));
		} else {
			var_1_21 = (var_1_28 - var_1_29);
		}
	} else {
		var_1_21 = (-5 + (var_1_30 - (var_1_31 + var_1_32)));
	}


	// From: Req9Batch90Amount250
	if (var_1_40 > (- (min (var_1_7 , var_1_57)))) {
		if (((var_1_67 / var_1_34) + (min (var_1_15 , 16))) >= var_1_30) {
			var_1_43 = (max (var_1_49 , var_1_38));
		} else {
			var_1_43 = ((max (var_1_45 , (var_1_36 + var_1_38))) - (var_1_29 + (var_1_10 + var_1_14)));
		}
	}


	// From: Req14Batch90Amount250
	if (var_1_57 <= (var_1_18 - 31.4f)) {
		var_1_51 = (var_1_19 - var_1_18);
	}


	// From: Req18Batch90Amount250
	unsigned char stepLocal_10 = var_1_47;
	unsigned long int stepLocal_9 = var_1_67;
	if (stepLocal_9 < var_1_62) {
		var_1_56 = (var_1_20 + var_1_18);
	} else {
		if (stepLocal_10 > 16) {
			if (! (var_1_35 <= var_1_66)) {
				var_1_56 = (max ((var_1_18 + var_1_19) , (var_1_20 - var_1_17)));
			} else {
				var_1_56 = (var_1_7 + var_1_19);
			}
		} else {
			var_1_56 = (min (var_1_6 , var_1_18));
		}
	}


	// From: Req10Batch90Amount250
	if (var_1_8 >= (max ((max (var_1_1 , var_1_56)) , (min (0.30000000000000004 , var_1_6))))) {
		var_1_46 = (var_1_20 - ((max (var_1_17 , var_1_19)) + (max (500.11 , var_1_18))));
	} else {
		var_1_46 = var_1_8;
	}


	// From: Req8Batch90Amount250
	if ((var_1_17 * var_1_46) <= ((max (var_1_20 , var_1_19)) - (var_1_40 - var_1_18))) {
		var_1_39 = var_1_41;
	} else {
		var_1_39 = ((! var_1_41) || (! var_1_42));
	}


	// From: Req12Batch90Amount250
	unsigned char stepLocal_6 = var_1_39;
	unsigned long int stepLocal_5 = var_1_36;
	if ((16 << var_1_37) <= stepLocal_5) {
		if (stepLocal_6 && (var_1_33 == (min (var_1_15 , var_1_14)))) {
			var_1_48 = (((var_1_32 + var_1_31) + var_1_30) + var_1_29);
		} else {
			var_1_48 = (abs (var_1_30));
		}
	} else {
		var_1_48 = (var_1_29 + var_1_31);
	}


	// From: Req17Batch90Amount250
	unsigned char stepLocal_8 = var_1_39;
	if (var_1_42 && stepLocal_8) {
		var_1_55 = var_1_6;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -31);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -31);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -1);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 31);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -128);
	assume_abort_if_not(var_1_34 <= 127);
	assume_abort_if_not(var_1_34 != 0);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 1073741823);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 1073741823);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 1073741824);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 4611686.018427388000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 2147483647);
	assume_abort_if_not(var_1_45 <= 4294967294);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 65534);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 127);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 0);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 1073741824);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
}

int property(void) {
	return ((((((((((((((((((((((((((- last_1_var_1_51) >= last_1_var_1_16) ? ((last_1_var_1_16 < ((last_1_var_1_51 * last_1_var_1_54) * 0.5f)) ? (var_1_1 == ((double) (max (var_1_5 , ((max (var_1_6 , var_1_7)) + var_1_8))))) : (var_1_1 == ((double) var_1_8))) : 1) && (var_1_9 == ((unsigned short int) (abs (max (var_1_10 , var_1_11)))))) && ((var_1_67 >= var_1_11) ? (var_1_12 == ((unsigned short int) (min ((max ((min (var_1_11 , var_1_10)) , 1)) , (abs (var_1_13)))))) : (var_1_12 == ((unsigned short int) (var_1_14 - var_1_15))))) && ((var_1_5 >= 1.75) ? ((var_1_11 < var_1_10) ? (var_1_16 == ((float) ((var_1_17 + var_1_18) - (abs (var_1_7))))) : (var_1_16 == ((float) (var_1_18 - (var_1_17 + (var_1_19 + var_1_20)))))) : 1)) && ((5u <= var_1_15) ? ((var_1_64 && (var_1_35 <= var_1_13)) ? (var_1_21 == ((signed char) ((abs (min (var_1_24 , var_1_25))) + (var_1_26 + var_1_27)))) : (var_1_21 == ((signed char) (var_1_28 - var_1_29)))) : (var_1_21 == ((signed char) (-5 + (var_1_30 - (var_1_31 + var_1_32))))))) && ((var_1_12 <= var_1_29) ? (var_1_33 == ((signed long int) ((var_1_68 - var_1_14) + var_1_32))) : ((! (var_1_31 < (var_1_29 / var_1_34))) ? ((var_1_25 < 32) ? (var_1_33 == ((signed long int) var_1_32)) : 1) : 1))) && ((((var_1_15 + var_1_27) + var_1_14) == var_1_9) ? (((var_1_20 * (0.75 / 1.9)) > ((var_1_18 - 50.2) + var_1_6)) ? (var_1_35 == ((unsigned long int) (((min (var_1_36 , var_1_37)) + var_1_38) - var_1_10))) : 1) : (var_1_35 == ((unsigned long int) (var_1_67 + (max ((max (var_1_29 , var_1_38)) , var_1_30))))))) && (((var_1_17 * var_1_46) <= ((max (var_1_20 , var_1_19)) - (var_1_40 - var_1_18))) ? (var_1_39 == ((unsigned char) var_1_41)) : (var_1_39 == ((unsigned char) ((! var_1_41) || (! var_1_42)))))) && ((var_1_40 > (- (min (var_1_7 , var_1_57)))) ? ((((var_1_67 / var_1_34) + (min (var_1_15 , 16))) >= var_1_30) ? (var_1_43 == ((unsigned long int) (max (var_1_49 , var_1_38)))) : (var_1_43 == ((unsigned long int) ((max (var_1_45 , (var_1_36 + var_1_38))) - (var_1_29 + (var_1_10 + var_1_14)))))) : 1)) && ((var_1_8 >= (max ((max (var_1_1 , var_1_56)) , (min (0.30000000000000004 , var_1_6))))) ? (var_1_46 == ((double) (var_1_20 - ((max (var_1_17 , var_1_19)) + (max (500.11 , var_1_18)))))) : (var_1_46 == ((double) var_1_8)))) && ((var_1_42 && (15.2f >= var_1_1)) ? (var_1_47 == ((unsigned char) (min ((var_1_31 + (abs (var_1_29))) , (max (var_1_32 , var_1_30)))))) : 1)) && (((16 << var_1_37) <= var_1_36) ? ((var_1_39 && (var_1_33 == (min (var_1_15 , var_1_14)))) ? (var_1_48 == ((unsigned char) (((var_1_32 + var_1_31) + var_1_30) + var_1_29))) : (var_1_48 == ((unsigned char) (abs (var_1_30))))) : (var_1_48 == ((unsigned char) (var_1_29 + var_1_31))))) && ((var_1_5 < (abs (var_1_1))) ? ((2.5 <= var_1_6) ? (var_1_49 == ((unsigned short int) (var_1_14 - last_1_var_1_49))) : 1) : (var_1_49 == ((unsigned short int) (abs (var_1_50)))))) && ((var_1_57 <= (var_1_18 - 31.4f)) ? (var_1_51 == ((double) (var_1_19 - var_1_18))) : 1)) && ((var_1_37 <= 5u) ? (var_1_52 == ((unsigned char) (10 + (100 - var_1_32)))) : ((var_1_12 < var_1_10) ? (var_1_52 == ((unsigned char) ((max (128 , var_1_53)) - var_1_30))) : (var_1_41 ? (var_1_52 == ((unsigned char) (min ((abs (var_1_29 + var_1_31)) , var_1_53)))) : (var_1_52 == ((unsigned char) (32 + var_1_30))))))) && (((var_1_28 / 8) != var_1_49) ? (var_1_54 == ((float) (min (var_1_6 , var_1_17)))) : (var_1_64 ? (var_1_54 == ((float) var_1_20)) : 1))) && ((var_1_42 && var_1_39) ? (var_1_55 == ((float) var_1_6)) : 1)) && ((var_1_67 < var_1_62) ? (var_1_56 == ((double) (var_1_20 + var_1_18))) : ((var_1_47 > 16) ? ((! (var_1_35 <= var_1_66)) ? (var_1_56 == ((double) (max ((var_1_18 + var_1_19) , (var_1_20 - var_1_17))))) : (var_1_56 == ((double) (var_1_7 + var_1_19)))) : (var_1_56 == ((double) (min (var_1_6 , var_1_18))))))) && ((! (var_1_26 <= (var_1_13 + 2))) ? ((var_1_9 != var_1_50) ? (var_1_57 == ((double) (var_1_18 + (var_1_58 - var_1_20)))) : 1) : 1)) && (var_1_59 == ((unsigned char) (! (var_1_60 || var_1_61))))) && (var_1_41 ? ((((last_1_var_1_12 / var_1_37) <= last_1_var_1_12) || var_1_42) ? (var_1_62 == ((unsigned long int) ((var_1_36 + (min (var_1_38 , var_1_63))) - (max (last_1_var_1_48 , var_1_30))))) : (var_1_62 == ((unsigned long int) ((min ((var_1_36 + var_1_38) , var_1_45)) - (min (var_1_50 , last_1_var_1_62)))))) : (var_1_62 == ((unsigned long int) (last_1_var_1_33 + var_1_14))))) && (var_1_64 == ((unsigned char) ((var_1_59 && (var_1_61 && var_1_60)) || ((var_1_30 > -16) && var_1_65))))) && (var_1_59 ? (var_1_66 == ((unsigned char) var_1_31)) : (var_1_66 == ((unsigned char) var_1_29)))) && ((((50 / 128) + last_1_var_1_62) >= (min (last_1_var_1_67 , last_1_var_1_62))) ? (var_1_67 == ((unsigned long int) (var_1_11 + (abs (var_1_13))))) : (var_1_67 == ((unsigned long int) var_1_45)))) && (var_1_68 == ((unsigned long int) last_1_var_1_68))
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

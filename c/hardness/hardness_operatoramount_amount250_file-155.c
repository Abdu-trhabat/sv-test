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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch155Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 32;
double var_1_3 = 2.75;
unsigned long int var_1_9 = 16;
unsigned long int var_1_10 = 3958720529;
unsigned long int var_1_11 = 1209717143;
signed char var_1_12 = -10;
signed char var_1_13 = 0;
signed char var_1_14 = -32;
signed char var_1_15 = -10;
unsigned short int var_1_16 = 64;
unsigned short int var_1_18 = 256;
unsigned short int var_1_19 = 100;
float var_1_20 = 255.375;
float var_1_21 = 0.5;
float var_1_22 = 10.2;
float var_1_23 = 9.9;
float var_1_24 = 10.6;
signed long int var_1_25 = -8;
unsigned char var_1_26 = 64;
unsigned char var_1_27 = 64;
unsigned char var_1_28 = 100;
unsigned char var_1_29 = 10;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned long int var_1_34 = 128;
unsigned char var_1_36 = 0;
double var_1_37 = 7.4;
double var_1_38 = 128.9;
float var_1_39 = 255.4;
signed char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 32;
unsigned char var_1_43 = 64;
double var_1_44 = 25.45;
double var_1_45 = 999999999999.6;
double var_1_46 = 255.8;
double var_1_47 = 1.8;
double var_1_48 = 3.2;
double var_1_49 = 0.0;
unsigned char var_1_50 = 0;
unsigned long int var_1_51 = 8;
unsigned long int var_1_52 = 1000000000;
unsigned long int var_1_53 = 1000000000;
unsigned long int var_1_54 = 1180552058;
unsigned long int var_1_55 = 256;
float var_1_56 = 64.3;
unsigned short int var_1_57 = 256;
double var_1_58 = 7.8;
double var_1_61 = 64.2;
signed long int var_1_62 = 5;
signed long int var_1_63 = -32;
unsigned char var_1_64 = 4;
unsigned char var_1_65 = 0;
unsigned long int var_1_66 = 256;
unsigned long int var_1_67 = 16;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 32;
unsigned long int last_1_var_1_9 = 16;
unsigned short int last_1_var_1_16 = 64;
unsigned char last_1_var_1_26 = 64;
unsigned char last_1_var_1_30 = 0;
unsigned long int last_1_var_1_34 = 128;
unsigned char last_1_var_1_41 = 0;
double last_1_var_1_44 = 25.45;
unsigned char last_1_var_1_50 = 0;
unsigned long int last_1_var_1_51 = 8;
unsigned short int last_1_var_1_57 = 256;
signed long int last_1_var_1_62 = 5;
unsigned char last_1_var_1_64 = 4;
unsigned long int last_1_var_1_66 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch155Amount250
	unsigned long int stepLocal_8 = (last_1_var_1_51 / var_1_28) * (44488 - last_1_var_1_41);
	unsigned long int stepLocal_7 = last_1_var_1_9;
	if (! (3.2 <= (var_1_23 * var_1_24))) {
		if (var_1_18 < stepLocal_8) {
			var_1_36 = var_1_31;
		}
	} else {
		if (var_1_21 <= var_1_22) {
			if ((max (var_1_14 , last_1_var_1_66)) < stepLocal_7) {
				var_1_36 = 0;
			}
		}
	}


	// From: Req14Batch155Amount250
	unsigned long int stepLocal_13 = last_1_var_1_66;
	if (last_1_var_1_51 < stepLocal_13) {
		if (last_1_var_1_50) {
			var_1_41 = ((min (var_1_28 , var_1_29)) + var_1_42);
		} else {
			if (last_1_var_1_30) {
				var_1_41 = ((var_1_28 + var_1_43) - var_1_42);
			} else {
				var_1_41 = (abs (var_1_42));
			}
		}
	}


	// From: Req8Batch155Amount250
	unsigned char stepLocal_6 = var_1_36;
	if ((var_1_10 > (32u + var_1_41)) || stepLocal_6) {
		if (var_1_24 == var_1_3) {
			var_1_30 = ((var_1_31 && (! var_1_32)) && (! var_1_33));
		}
	}


	// From: Req17Batch155Amount250
	unsigned long int stepLocal_14 = var_1_13 & (last_1_var_1_9 + last_1_var_1_1);
	if (stepLocal_14 != last_1_var_1_9) {
		var_1_51 = (((var_1_52 + var_1_53) + var_1_54) - (max (var_1_42 , (max (last_1_var_1_1 , last_1_var_1_57)))));
	} else {
		var_1_51 = (max ((min (var_1_55 , last_1_var_1_26)) , var_1_27));
	}


	// From: Req24Batch155Amount250
	if (var_1_30) {
		var_1_65 = var_1_32;
	} else {
		var_1_65 = var_1_31;
	}


	// From: Req1Batch155Amount250
	signed long int stepLocal_0 = last_1_var_1_62;
	if (63.5 <= (last_1_var_1_44 + (256.75 / var_1_3))) {
		if (last_1_var_1_30) {
			if (((last_1_var_1_26 * last_1_var_1_34) * last_1_var_1_64) > stepLocal_0) {
				var_1_1 = (min (last_1_var_1_34 , last_1_var_1_64));
			} else {
				var_1_1 = (min (last_1_var_1_26 , (min (last_1_var_1_34 , last_1_var_1_64))));
			}
		}
	}


	// From: Req3Batch155Amount250
	unsigned long int stepLocal_1 = var_1_10;
	if (stepLocal_1 < var_1_41) {
		var_1_12 = (max (var_1_13 , (var_1_14 + (max (-5 , -50)))));
	} else {
		var_1_12 = (min ((var_1_14 + var_1_15) , var_1_13));
	}


	// From: Req5Batch155Amount250
	if (0.5 != var_1_3) {
		var_1_20 = (((min (var_1_21 , var_1_22)) + var_1_23) + var_1_24);
	} else {
		var_1_20 = (var_1_23 + var_1_22);
	}


	// From: Req16Batch155Amount250
	var_1_50 = var_1_33;


	// From: Req21Batch155Amount250
	unsigned long int stepLocal_19 = - (- 50u);
	unsigned char stepLocal_18 = var_1_36;
	if (stepLocal_18 && (var_1_21 == var_1_22)) {
		if (var_1_51 <= stepLocal_19) {
			var_1_61 = var_1_45;
		} else {
			var_1_61 = (var_1_48 + 99.75);
		}
	}


	// From: Req23Batch155Amount250
	unsigned long int stepLocal_22 = var_1_52;
	if (var_1_28 <= stepLocal_22) {
		var_1_64 = (128 - (64 - var_1_29));
	} else {
		var_1_64 = (abs (var_1_27));
	}


	// From: Req2Batch155Amount250
	if (! var_1_36) {
		var_1_9 = (var_1_10 - (var_1_11 - var_1_1));
	}


	// From: Req9Batch155Amount250
	if ((var_1_1 + var_1_51) <= var_1_51) {
		var_1_34 = (min (var_1_11 , (min (var_1_19 , (var_1_10 - var_1_28)))));
	} else {
		var_1_34 = var_1_29;
	}


	// From: Req25Batch155Amount250
	unsigned short int stepLocal_23 = var_1_18;
	if ((min (var_1_11 , var_1_34)) <= stepLocal_23) {
		var_1_66 = var_1_67;
	} else {
		var_1_66 = (min ((max (var_1_34 , var_1_51)) , (3193913910u - var_1_64)));
	}


	// From: Req6Batch155Amount250
	if (var_1_65) {
		var_1_25 = (min (var_1_18 , var_1_15));
	} else {
		if ((1.00000000000025E12f * var_1_21) > var_1_22) {
			var_1_25 = (var_1_18 - (min (var_1_51 , var_1_34)));
		} else {
			var_1_25 = (min ((var_1_51 + var_1_19) , var_1_1));
		}
	}


	// From: Req4Batch155Amount250
	unsigned char stepLocal_3 = var_1_36;
	unsigned long int stepLocal_2 = var_1_66 % (min (var_1_11 , var_1_10));
	if (stepLocal_3 || var_1_50) {
		if (var_1_36) {
			var_1_16 = (max (var_1_41 , 8));
		} else {
			if (var_1_9 < stepLocal_2) {
				var_1_16 = (min (((max (last_1_var_1_16 , var_1_41)) + (var_1_41 + var_1_18)) , var_1_19));
			} else {
				var_1_16 = (var_1_18 + var_1_41);
			}
		}
	}


	// From: Req7Batch155Amount250
	unsigned char stepLocal_5 = var_1_30;
	unsigned char stepLocal_4 = var_1_30;
	if (stepLocal_5 && (2 <= var_1_41)) {
		if ((var_1_25 >= var_1_9) && stepLocal_4) {
			var_1_26 = (min (64 , var_1_27));
		} else {
			var_1_26 = (200 - (var_1_28 - var_1_29));
		}
	}


	// From: Req19Batch155Amount250
	signed long int stepLocal_17 = var_1_25;
	if (var_1_24 >= (var_1_45 - var_1_46)) {
		if (stepLocal_17 >= (abs (var_1_54))) {
			var_1_57 = (256 + var_1_16);
		}
	}


	// From: Req15Batch155Amount250
	if (var_1_29 == var_1_1) {
		if (64 <= var_1_42) {
			var_1_44 = ((var_1_45 - (var_1_46 + var_1_47)) + (abs (50.75)));
		} else {
			var_1_44 = (max ((var_1_48 + var_1_24) , (max (var_1_23 , var_1_22))));
		}
	} else {
		if (var_1_19 > (var_1_25 / (max (256 , var_1_28)))) {
			var_1_44 = (max ((var_1_38 - (var_1_49 - var_1_46)) , var_1_47));
		} else {
			var_1_44 = var_1_48;
		}
	}


	// From: Req22Batch155Amount250
	unsigned long int stepLocal_21 = var_1_13 + (var_1_27 + var_1_66);
	unsigned char stepLocal_20 = var_1_50;
	if ((max (var_1_47 , (var_1_49 - var_1_45))) >= (- var_1_44)) {
		if (var_1_65 && stepLocal_20) {
			if ((var_1_16 + last_1_var_1_62) != stepLocal_21) {
				var_1_62 = (abs (var_1_28));
			} else {
				var_1_62 = (max (64 , var_1_13));
			}
		} else {
			var_1_62 = var_1_63;
		}
	}


	// From: Req11Batch155Amount250
	signed long int stepLocal_9 = (50 * var_1_28) << var_1_1;
	if (stepLocal_9 >= var_1_62) {
		var_1_37 = (256.4 - var_1_38);
	}


	// From: Req12Batch155Amount250
	unsigned long int stepLocal_10 = var_1_1;
	if ((var_1_9 ^ var_1_25) != stepLocal_10) {
		var_1_39 = var_1_38;
	} else {
		if (var_1_33) {
			var_1_39 = var_1_22;
		} else {
			var_1_39 = (var_1_24 + (var_1_21 + var_1_23));
		}
	}


	// From: Req13Batch155Amount250
	unsigned char stepLocal_12 = var_1_32;
	unsigned long int stepLocal_11 = - var_1_1;
	if (stepLocal_11 > (var_1_1 ^ (var_1_25 | var_1_34))) {
		if (stepLocal_12 && var_1_65) {
			var_1_40 = (var_1_29 + var_1_15);
		}
	}


	// From: Req18Batch155Amount250
	signed long int stepLocal_16 = var_1_25;
	unsigned char stepLocal_15 = (var_1_54 | var_1_18) <= var_1_16;
	if (stepLocal_16 >= var_1_51) {
		if (stepLocal_15 && var_1_31) {
			var_1_56 = (abs (var_1_23));
		}
	} else {
		var_1_56 = (abs (abs (var_1_38 - var_1_49)));
	}


	// From: Req20Batch155Amount250
	if (var_1_20 >= var_1_44) {
		var_1_58 = var_1_46;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 1073741823);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 16383);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 63);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 64);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 4611686.018427383000e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 536870911);
	assume_abort_if_not(var_1_52 <= 1073741824);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 536870912);
	assume_abort_if_not(var_1_53 <= 1073741823);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 1073741824);
	assume_abort_if_not(var_1_54 <= 2147483647);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 4294967294);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= -2147483647);
	assume_abort_if_not(var_1_63 <= 2147483646);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_66 = var_1_66;
}

int property(void) {
	return (((((((((((((((((((((((((63.5 <= (last_1_var_1_44 + (256.75 / var_1_3))) ? (last_1_var_1_30 ? ((((last_1_var_1_26 * last_1_var_1_34) * last_1_var_1_64) > last_1_var_1_62) ? (var_1_1 == ((unsigned long int) (min (last_1_var_1_34 , last_1_var_1_64)))) : (var_1_1 == ((unsigned long int) (min (last_1_var_1_26 , (min (last_1_var_1_34 , last_1_var_1_64))))))) : 1) : 1) && ((! var_1_36) ? (var_1_9 == ((unsigned long int) (var_1_10 - (var_1_11 - var_1_1)))) : 1)) && ((var_1_10 < var_1_41) ? (var_1_12 == ((signed char) (max (var_1_13 , (var_1_14 + (max (-5 , -50))))))) : (var_1_12 == ((signed char) (min ((var_1_14 + var_1_15) , var_1_13)))))) && ((var_1_36 || var_1_50) ? (var_1_36 ? (var_1_16 == ((unsigned short int) (max (var_1_41 , 8)))) : ((var_1_9 < (var_1_66 % (min (var_1_11 , var_1_10)))) ? (var_1_16 == ((unsigned short int) (min (((max (last_1_var_1_16 , var_1_41)) + (var_1_41 + var_1_18)) , var_1_19)))) : (var_1_16 == ((unsigned short int) (var_1_18 + var_1_41))))) : 1)) && ((0.5 != var_1_3) ? (var_1_20 == ((float) (((min (var_1_21 , var_1_22)) + var_1_23) + var_1_24))) : (var_1_20 == ((float) (var_1_23 + var_1_22))))) && (var_1_65 ? (var_1_25 == ((signed long int) (min (var_1_18 , var_1_15)))) : (((1.00000000000025E12f * var_1_21) > var_1_22) ? (var_1_25 == ((signed long int) (var_1_18 - (min (var_1_51 , var_1_34))))) : (var_1_25 == ((signed long int) (min ((var_1_51 + var_1_19) , var_1_1))))))) && ((var_1_30 && (2 <= var_1_41)) ? (((var_1_25 >= var_1_9) && var_1_30) ? (var_1_26 == ((unsigned char) (min (64 , var_1_27)))) : (var_1_26 == ((unsigned char) (200 - (var_1_28 - var_1_29))))) : 1)) && (((var_1_10 > (32u + var_1_41)) || var_1_36) ? ((var_1_24 == var_1_3) ? (var_1_30 == ((unsigned char) ((var_1_31 && (! var_1_32)) && (! var_1_33)))) : 1) : 1)) && (((var_1_1 + var_1_51) <= var_1_51) ? (var_1_34 == ((unsigned long int) (min (var_1_11 , (min (var_1_19 , (var_1_10 - var_1_28))))))) : (var_1_34 == ((unsigned long int) var_1_29)))) && ((! (3.2 <= (var_1_23 * var_1_24))) ? ((var_1_18 < ((last_1_var_1_51 / var_1_28) * (44488 - last_1_var_1_41))) ? (var_1_36 == ((unsigned char) var_1_31)) : 1) : ((var_1_21 <= var_1_22) ? (((max (var_1_14 , last_1_var_1_66)) < last_1_var_1_9) ? (var_1_36 == ((unsigned char) 0)) : 1) : 1))) && ((((50 * var_1_28) << var_1_1) >= var_1_62) ? (var_1_37 == ((double) (256.4 - var_1_38))) : 1)) && (((var_1_9 ^ var_1_25) != var_1_1) ? (var_1_39 == ((float) var_1_38)) : (var_1_33 ? (var_1_39 == ((float) var_1_22)) : (var_1_39 == ((float) (var_1_24 + (var_1_21 + var_1_23))))))) && (((- var_1_1) > (var_1_1 ^ (var_1_25 | var_1_34))) ? ((var_1_32 && var_1_65) ? (var_1_40 == ((signed char) (var_1_29 + var_1_15))) : 1) : 1)) && ((last_1_var_1_51 < last_1_var_1_66) ? (last_1_var_1_50 ? (var_1_41 == ((unsigned char) ((min (var_1_28 , var_1_29)) + var_1_42))) : (last_1_var_1_30 ? (var_1_41 == ((unsigned char) ((var_1_28 + var_1_43) - var_1_42))) : (var_1_41 == ((unsigned char) (abs (var_1_42)))))) : 1)) && ((var_1_29 == var_1_1) ? ((64 <= var_1_42) ? (var_1_44 == ((double) ((var_1_45 - (var_1_46 + var_1_47)) + (abs (50.75))))) : (var_1_44 == ((double) (max ((var_1_48 + var_1_24) , (max (var_1_23 , var_1_22))))))) : ((var_1_19 > (var_1_25 / (max (256 , var_1_28)))) ? (var_1_44 == ((double) (max ((var_1_38 - (var_1_49 - var_1_46)) , var_1_47)))) : (var_1_44 == ((double) var_1_48))))) && (var_1_50 == ((unsigned char) var_1_33))) && (((var_1_13 & (last_1_var_1_9 + last_1_var_1_1)) != last_1_var_1_9) ? (var_1_51 == ((unsigned long int) (((var_1_52 + var_1_53) + var_1_54) - (max (var_1_42 , (max (last_1_var_1_1 , last_1_var_1_57))))))) : (var_1_51 == ((unsigned long int) (max ((min (var_1_55 , last_1_var_1_26)) , var_1_27)))))) && ((var_1_25 >= var_1_51) ? ((((var_1_54 | var_1_18) <= var_1_16) && var_1_31) ? (var_1_56 == ((float) (abs (var_1_23)))) : 1) : (var_1_56 == ((float) (abs (abs (var_1_38 - var_1_49))))))) && ((var_1_24 >= (var_1_45 - var_1_46)) ? ((var_1_25 >= (abs (var_1_54))) ? (var_1_57 == ((unsigned short int) (256 + var_1_16))) : 1) : 1)) && ((var_1_20 >= var_1_44) ? (var_1_58 == ((double) var_1_46)) : 1)) && ((var_1_36 && (var_1_21 == var_1_22)) ? ((var_1_51 <= (- (- 50u))) ? (var_1_61 == ((double) var_1_45)) : (var_1_61 == ((double) (var_1_48 + 99.75)))) : 1)) && (((max (var_1_47 , (var_1_49 - var_1_45))) >= (- var_1_44)) ? ((var_1_65 && var_1_50) ? (((var_1_16 + last_1_var_1_62) != (var_1_13 + (var_1_27 + var_1_66))) ? (var_1_62 == ((signed long int) (abs (var_1_28)))) : (var_1_62 == ((signed long int) (max (64 , var_1_13))))) : (var_1_62 == ((signed long int) var_1_63))) : 1)) && ((var_1_28 <= var_1_52) ? (var_1_64 == ((unsigned char) (128 - (64 - var_1_29)))) : (var_1_64 == ((unsigned char) (abs (var_1_27)))))) && (var_1_30 ? (var_1_65 == ((unsigned char) var_1_32)) : (var_1_65 == ((unsigned char) var_1_31)))) && (((min (var_1_11 , var_1_34)) <= var_1_18) ? (var_1_66 == ((unsigned long int) var_1_67)) : (var_1_66 == ((unsigned long int) (min ((max (var_1_34 , var_1_51)) , (3193913910u - var_1_64))))))
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

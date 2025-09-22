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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch102Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 99999999.4;
unsigned long int var_1_4 = 4;
double var_1_5 = 50.75;
double var_1_6 = 4.625;
double var_1_7 = 10.25;
float var_1_8 = 9999999999.4;
signed char var_1_9 = 10;
signed char var_1_10 = 5;
signed char var_1_11 = 4;
signed char var_1_12 = 1;
signed char var_1_13 = 8;
signed char var_1_14 = 4;
unsigned char var_1_15 = 16;
unsigned char var_1_18 = 25;
signed short int var_1_19 = -1;
signed short int var_1_20 = 10;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed short int var_1_25 = -200;
double var_1_26 = 10000000.5;
double var_1_28 = 8.25;
double var_1_29 = 9999999999.2;
unsigned short int var_1_30 = 1;
unsigned short int var_1_31 = 38442;
signed long int var_1_32 = -50;
unsigned long int var_1_33 = 16;
signed long int var_1_34 = 64;
signed long int var_1_35 = 32;
float var_1_36 = 255.4;
float var_1_37 = 500.5;
float var_1_38 = 32.625;
signed char var_1_39 = -16;
signed char var_1_40 = -2;
float var_1_41 = 0.5;
float var_1_42 = 2.6;
unsigned char var_1_43 = 50;
unsigned char var_1_44 = 10;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 32;
unsigned short int var_1_47 = 2;
unsigned short int var_1_48 = 62402;
signed char var_1_49 = -4;
unsigned long int var_1_50 = 2857523328;
unsigned char var_1_52 = 128;
double var_1_53 = 8.2;
double var_1_54 = 5.25;
double var_1_55 = 4.65;
unsigned long int var_1_56 = 100;
double var_1_57 = 3.2;
double var_1_59 = 1.75;
unsigned char var_1_60 = 0;
signed short int var_1_61 = 4;
unsigned char var_1_62 = 0;
unsigned short int var_1_63 = 32;
unsigned long int var_1_64 = 0;
unsigned long int var_1_65 = 2889104593;
unsigned long int var_1_66 = 1845450427;
unsigned char var_1_67 = 5;
unsigned char var_1_68 = 200;
unsigned char var_1_69 = 0;
signed long int var_1_70 = 8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_33 = 16;
unsigned short int last_1_var_1_47 = 2;
unsigned char last_1_var_1_60 = 0;
unsigned long int last_1_var_1_64 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch102Amount250
	if (last_1_var_1_60 && ((last_1_var_1_33 / var_1_31) > var_1_48)) {
		if (var_1_13 <= last_1_var_1_64) {
			var_1_53 = ((var_1_54 - var_1_55) + var_1_29);
		}
	} else {
		var_1_53 = (abs (2.25));
	}


	// From: Req10Batch102Amount250
	var_1_32 = (min (16 , var_1_31));


	// From: Req11Batch102Amount250
	if (var_1_22) {
		var_1_33 = var_1_10;
	}


	// From: Req12Batch102Amount250
	signed char stepLocal_7 = var_1_10;
	if (var_1_22) {
		if (-2 <= stepLocal_7) {
			var_1_34 = ((var_1_35 + (var_1_31 - var_1_10)) + var_1_13);
		}
	} else {
		var_1_34 = var_1_31;
	}


	// From: Req21Batch102Amount250
	var_1_56 = ((4062430401u - var_1_45) - var_1_46);


	// From: Req23Batch102Amount250
	if ((- var_1_41) < (min (var_1_59 , var_1_42))) {
		var_1_60 = (! ((var_1_11 > var_1_50) || (var_1_22 || var_1_23)));
	}


	// From: Req24Batch102Amount250
	if (var_1_60) {
		var_1_61 = 25;
	}


	// From: Req25Batch102Amount250
	var_1_62 = 0;


	// From: Req26Batch102Amount250
	var_1_63 = var_1_61;


	// From: Req28Batch102Amount250
	var_1_67 = ((var_1_68 - var_1_10) - var_1_11);


	// From: Req29Batch102Amount250
	var_1_69 = var_1_68;


	// From: Req27Batch102Amount250
	if (var_1_53 > var_1_54) {
		var_1_64 = (var_1_65 - (var_1_66 - var_1_69));
	}


	// From: Req1Batch102Amount250
	unsigned long int stepLocal_1 = 25u / var_1_4;
	unsigned long int stepLocal_0 = ~ var_1_4;
	if ((var_1_64 + var_1_56) != stepLocal_1) {
		if (stepLocal_0 > (var_1_56 + (- var_1_64))) {
			var_1_1 = (min ((var_1_5 - var_1_6) , var_1_7));
		} else {
			if (((6.806564372052625E18f - var_1_8) - var_1_6) >= (- var_1_5)) {
				var_1_1 = var_1_5;
			} else {
				var_1_1 = var_1_6;
			}
		}
	}


	// From: Req2Batch102Amount250
	unsigned long int stepLocal_3 = var_1_56 * var_1_4;
	unsigned long int stepLocal_2 = var_1_4;
	if (var_1_7 != (- var_1_5)) {
		if (var_1_64 > stepLocal_3) {
			if (var_1_6 >= var_1_5) {
				var_1_9 = ((var_1_10 - var_1_11) + (var_1_12 + (var_1_13 + var_1_14)));
			}
		}
	} else {
		if (var_1_56 < stepLocal_2) {
			var_1_9 = (var_1_11 + (min (var_1_13 , var_1_12)));
		}
	}


	// From: Req4Batch102Amount250
	if (var_1_60) {
		if (! (var_1_6 < var_1_8)) {
			var_1_19 = (max (var_1_11 , var_1_13));
		} else {
			var_1_19 = (var_1_10 - var_1_18);
		}
	}


	// From: Req5Batch102Amount250
	if (var_1_62) {
		var_1_20 = (min (var_1_14 , ((abs (var_1_10)) - var_1_11)));
	}


	// From: Req6Batch102Amount250
	unsigned char stepLocal_4 = var_1_18;
	if (stepLocal_4 <= (var_1_11 + var_1_10)) {
		if (var_1_62) {
			var_1_21 = (! ((var_1_33 > 4u) || var_1_22));
		} else {
			var_1_21 = (! (var_1_22 && var_1_23));
		}
	} else {
		if (var_1_60) {
			var_1_21 = var_1_23;
		} else {
			var_1_21 = var_1_22;
		}
	}


	// From: Req8Batch102Amount250
	unsigned long int stepLocal_5 = var_1_33;
	if (var_1_5 > var_1_8) {
		if (((var_1_32 * var_1_34) * (var_1_11 + -256)) > stepLocal_5) {
			var_1_26 = (0.8 - 9.9999999975E8);
		} else {
			var_1_26 = ((min ((var_1_28 + 127.2) , var_1_29)) + 50.1);
		}
	} else {
		var_1_26 = 9.99999999999995E13;
	}


	// From: Req9Batch102Amount250
	unsigned char stepLocal_6 = var_1_23;
	if (stepLocal_6 && var_1_21) {
		var_1_30 = (var_1_31 - var_1_18);
	}


	// From: Req13Batch102Amount250
	if (var_1_62) {
		var_1_36 = (min ((var_1_29 + (max (var_1_28 , var_1_37))) , var_1_5));
	} else {
		var_1_36 = (max (var_1_38 , var_1_28));
	}


	// From: Req14Batch102Amount250
	unsigned long int stepLocal_10 = var_1_64;
	signed char stepLocal_9 = var_1_11;
	unsigned char stepLocal_8 = var_1_21;
	if (var_1_13 > stepLocal_9) {
		var_1_39 = ((var_1_14 + var_1_13) + ((min (var_1_12 , var_1_40)) + -25));
	} else {
		if (var_1_24 && stepLocal_8) {
			var_1_39 = (var_1_40 + var_1_14);
		} else {
			if (stepLocal_10 < (32u + var_1_33)) {
				var_1_39 = (min ((var_1_14 + var_1_12) , (min (var_1_40 , (min (var_1_13 , var_1_10))))));
			} else {
				if ((var_1_7 / (max (var_1_41 , var_1_42))) <= var_1_8) {
					var_1_39 = (var_1_14 + (max (var_1_40 , var_1_11)));
				}
			}
		}
	}


	// From: Req15Batch102Amount250
	unsigned long int stepLocal_11 = var_1_56;
	if (stepLocal_11 < var_1_4) {
		var_1_43 = (128 - var_1_11);
	}


	// From: Req16Batch102Amount250
	signed long int stepLocal_12 = var_1_35;
	if (stepLocal_12 > (min (var_1_64 , (var_1_33 / var_1_4)))) {
		var_1_44 = (max (((var_1_10 + var_1_11) + var_1_18) , (var_1_45 - (10 + var_1_46))));
	} else {
		var_1_44 = (min ((max (var_1_46 , var_1_11)) , (max (var_1_18 , var_1_45))));
	}


	// From: Req19Batch102Amount250
	unsigned char stepLocal_18 = var_1_21;
	if (stepLocal_18 && var_1_22) {
		var_1_52 = (abs (var_1_10));
	}


	// From: Req22Batch102Amount250
	signed char stepLocal_20 = var_1_10;
	unsigned char stepLocal_19 = var_1_21;
	if (((-128 + var_1_64) < var_1_33) || stepLocal_19) {
		if (stepLocal_20 != var_1_64) {
			if (var_1_38 > var_1_7) {
				var_1_57 = (1.4 - var_1_6);
			} else {
				var_1_57 = (max ((var_1_37 + (var_1_28 + var_1_59)) , var_1_5));
			}
		} else {
			var_1_57 = (max (var_1_7 , 31.8));
		}
	}


	// From: Req3Batch102Amount250
	if (var_1_60) {
		if ((- (var_1_6 * var_1_57)) >= ((var_1_8 * var_1_7) + var_1_5)) {
			if (var_1_60) {
				var_1_15 = (max (var_1_11 , (var_1_10 + var_1_18)));
			}
		}
	}


	// From: Req7Batch102Amount250
	var_1_25 = ((min (var_1_11 , var_1_39)) + var_1_14);


	// From: Req30Batch102Amount250
	var_1_70 = var_1_25;


	// From: Req17Batch102Amount250
	signed long int stepLocal_15 = var_1_70;
	signed char stepLocal_14 = var_1_11;
	signed long int stepLocal_13 = var_1_31 + var_1_30;
	if (stepLocal_14 <= (min (last_1_var_1_47 , var_1_12))) {
		var_1_47 = (var_1_31 - ((var_1_11 + var_1_46) + last_1_var_1_47));
	} else {
		if (var_1_64 == stepLocal_13) {
			if (stepLocal_15 > (var_1_33 % var_1_31)) {
				var_1_47 = (min (var_1_18 , var_1_31));
			} else {
				var_1_47 = ((var_1_48 - 2) - 2);
			}
		}
	}


	// From: Req18Batch102Amount250
	unsigned long int stepLocal_17 = var_1_50 - var_1_47;
	signed long int stepLocal_16 = (var_1_46 + var_1_10) << var_1_64;
	if (var_1_22) {
		var_1_49 = (max (var_1_12 , var_1_11));
	} else {
		if ((var_1_64 + var_1_31) > stepLocal_17) {
			if (var_1_11 >= stepLocal_16) {
				var_1_49 = var_1_13;
			} else {
				var_1_49 = ((max ((var_1_40 + var_1_14) , var_1_10)) + var_1_13);
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427388000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -15);
	assume_abort_if_not(var_1_13 <= 16);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -15);
	assume_abort_if_not(var_1_14 <= 15);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -536870911);
	assume_abort_if_not(var_1_35 <= 536870912);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -31);
	assume_abort_if_not(var_1_40 <= 32);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	assume_abort_if_not(var_1_41 != 0.0F);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	assume_abort_if_not(var_1_42 != 0.0F);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 49150);
	assume_abort_if_not(var_1_48 <= 65534);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 2147483647);
	assume_abort_if_not(var_1_50 <= 4294967295);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -230584.3009213691400e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691400e+12F && var_1_59 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 2147483647);
	assume_abort_if_not(var_1_65 <= 4294967294);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 1073741823);
	assume_abort_if_not(var_1_66 <= 2147483647);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 190);
	assume_abort_if_not(var_1_68 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_33 = var_1_33;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_64 = var_1_64;
}

int property(void) {
	return (((((((((((((((((((((((((((((((var_1_64 + var_1_56) != (25u / var_1_4)) ? (((~ var_1_4) > (var_1_56 + (- var_1_64))) ? (var_1_1 == ((double) (min ((var_1_5 - var_1_6) , var_1_7)))) : ((((6.806564372052625E18f - var_1_8) - var_1_6) >= (- var_1_5)) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) var_1_6)))) : 1) && ((var_1_7 != (- var_1_5)) ? ((var_1_64 > (var_1_56 * var_1_4)) ? ((var_1_6 >= var_1_5) ? (var_1_9 == ((signed char) ((var_1_10 - var_1_11) + (var_1_12 + (var_1_13 + var_1_14))))) : 1) : 1) : ((var_1_56 < var_1_4) ? (var_1_9 == ((signed char) (var_1_11 + (min (var_1_13 , var_1_12))))) : 1))) && (var_1_60 ? (((- (var_1_6 * var_1_57)) >= ((var_1_8 * var_1_7) + var_1_5)) ? (var_1_60 ? (var_1_15 == ((unsigned char) (max (var_1_11 , (var_1_10 + var_1_18))))) : 1) : 1) : 1)) && (var_1_60 ? ((! (var_1_6 < var_1_8)) ? (var_1_19 == ((signed short int) (max (var_1_11 , var_1_13)))) : (var_1_19 == ((signed short int) (var_1_10 - var_1_18)))) : 1)) && (var_1_62 ? (var_1_20 == ((signed short int) (min (var_1_14 , ((abs (var_1_10)) - var_1_11))))) : 1)) && ((var_1_18 <= (var_1_11 + var_1_10)) ? (var_1_62 ? (var_1_21 == ((unsigned char) (! ((var_1_33 > 4u) || var_1_22)))) : (var_1_21 == ((unsigned char) (! (var_1_22 && var_1_23))))) : (var_1_60 ? (var_1_21 == ((unsigned char) var_1_23)) : (var_1_21 == ((unsigned char) var_1_22))))) && (var_1_25 == ((signed short int) ((min (var_1_11 , var_1_39)) + var_1_14)))) && ((var_1_5 > var_1_8) ? ((((var_1_32 * var_1_34) * (var_1_11 + -256)) > var_1_33) ? (var_1_26 == ((double) (0.8 - 9.9999999975E8))) : (var_1_26 == ((double) ((min ((var_1_28 + 127.2) , var_1_29)) + 50.1)))) : (var_1_26 == ((double) 9.99999999999995E13)))) && ((var_1_23 && var_1_21) ? (var_1_30 == ((unsigned short int) (var_1_31 - var_1_18))) : 1)) && (var_1_32 == ((signed long int) (min (16 , var_1_31))))) && (var_1_22 ? (var_1_33 == ((unsigned long int) var_1_10)) : 1)) && (var_1_22 ? ((-2 <= var_1_10) ? (var_1_34 == ((signed long int) ((var_1_35 + (var_1_31 - var_1_10)) + var_1_13))) : 1) : (var_1_34 == ((signed long int) var_1_31)))) && (var_1_62 ? (var_1_36 == ((float) (min ((var_1_29 + (max (var_1_28 , var_1_37))) , var_1_5)))) : (var_1_36 == ((float) (max (var_1_38 , var_1_28)))))) && ((var_1_13 > var_1_11) ? (var_1_39 == ((signed char) ((var_1_14 + var_1_13) + ((min (var_1_12 , var_1_40)) + -25)))) : ((var_1_24 && var_1_21) ? (var_1_39 == ((signed char) (var_1_40 + var_1_14))) : ((var_1_64 < (32u + var_1_33)) ? (var_1_39 == ((signed char) (min ((var_1_14 + var_1_12) , (min (var_1_40 , (min (var_1_13 , var_1_10)))))))) : (((var_1_7 / (max (var_1_41 , var_1_42))) <= var_1_8) ? (var_1_39 == ((signed char) (var_1_14 + (max (var_1_40 , var_1_11))))) : 1))))) && ((var_1_56 < var_1_4) ? (var_1_43 == ((unsigned char) (128 - var_1_11))) : 1)) && ((var_1_35 > (min (var_1_64 , (var_1_33 / var_1_4)))) ? (var_1_44 == ((unsigned char) (max (((var_1_10 + var_1_11) + var_1_18) , (var_1_45 - (10 + var_1_46)))))) : (var_1_44 == ((unsigned char) (min ((max (var_1_46 , var_1_11)) , (max (var_1_18 , var_1_45)))))))) && ((var_1_11 <= (min (last_1_var_1_47 , var_1_12))) ? (var_1_47 == ((unsigned short int) (var_1_31 - ((var_1_11 + var_1_46) + last_1_var_1_47)))) : ((var_1_64 == (var_1_31 + var_1_30)) ? ((var_1_70 > (var_1_33 % var_1_31)) ? (var_1_47 == ((unsigned short int) (min (var_1_18 , var_1_31)))) : (var_1_47 == ((unsigned short int) ((var_1_48 - 2) - 2)))) : 1))) && (var_1_22 ? (var_1_49 == ((signed char) (max (var_1_12 , var_1_11)))) : (((var_1_64 + var_1_31) > (var_1_50 - var_1_47)) ? ((var_1_11 >= ((var_1_46 + var_1_10) << var_1_64)) ? (var_1_49 == ((signed char) var_1_13)) : (var_1_49 == ((signed char) ((max ((var_1_40 + var_1_14) , var_1_10)) + var_1_13)))) : 1))) && ((var_1_21 && var_1_22) ? (var_1_52 == ((unsigned char) (abs (var_1_10)))) : 1)) && ((last_1_var_1_60 && ((last_1_var_1_33 / var_1_31) > var_1_48)) ? ((var_1_13 <= last_1_var_1_64) ? (var_1_53 == ((double) ((var_1_54 - var_1_55) + var_1_29))) : 1) : (var_1_53 == ((double) (abs (2.25)))))) && (var_1_56 == ((unsigned long int) ((4062430401u - var_1_45) - var_1_46)))) && ((((-128 + var_1_64) < var_1_33) || var_1_21) ? ((var_1_10 != var_1_64) ? ((var_1_38 > var_1_7) ? (var_1_57 == ((double) (1.4 - var_1_6))) : (var_1_57 == ((double) (max ((var_1_37 + (var_1_28 + var_1_59)) , var_1_5))))) : (var_1_57 == ((double) (max (var_1_7 , 31.8))))) : 1)) && (((- var_1_41) < (min (var_1_59 , var_1_42))) ? (var_1_60 == ((unsigned char) (! ((var_1_11 > var_1_50) || (var_1_22 || var_1_23))))) : 1)) && (var_1_60 ? (var_1_61 == ((signed short int) 25)) : 1)) && (var_1_62 == ((unsigned char) 0))) && (var_1_63 == ((unsigned short int) var_1_61))) && ((var_1_53 > var_1_54) ? (var_1_64 == ((unsigned long int) (var_1_65 - (var_1_66 - var_1_69)))) : 1)) && (var_1_67 == ((unsigned char) ((var_1_68 - var_1_10) - var_1_11)))) && (var_1_69 == ((unsigned char) var_1_68))) && (var_1_70 == ((signed long int) var_1_25))
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

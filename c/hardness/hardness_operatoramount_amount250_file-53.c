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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch53Amount250.c", 13, "reach_error"); }
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
signed long int var_1_1 = -100;
unsigned char var_1_2 = 200;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 8;
signed long int var_1_6 = 2;
double var_1_8 = 256.75;
double var_1_10 = -0.6;
unsigned char var_1_11 = 64;
unsigned char var_1_13 = 25;
unsigned long int var_1_14 = 64;
unsigned long int var_1_15 = 3306323827;
unsigned long int var_1_16 = 1334080422;
double var_1_17 = 4.375;
unsigned char var_1_18 = 4;
signed char var_1_19 = -128;
double var_1_20 = 1.3;
double var_1_21 = 199.5;
double var_1_22 = 63.8;
signed char var_1_23 = 10;
unsigned char var_1_24 = 50;
unsigned char var_1_26 = 50;
unsigned char var_1_27 = 4;
signed long int var_1_28 = 2;
float var_1_29 = 31.625;
float var_1_30 = 5.4;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 10;
float var_1_33 = 10000000000.4;
float var_1_34 = 4.65;
float var_1_35 = 64.6;
float var_1_36 = 0.0;
float var_1_37 = 4.45;
float var_1_38 = 4.125;
float var_1_39 = 1.3;
float var_1_40 = 2.46;
float var_1_42 = 0.0;
float var_1_43 = 128.5;
unsigned char var_1_44 = 1;
unsigned short int var_1_45 = 55899;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
float var_1_48 = 2.8;
float var_1_49 = 3.25;
signed long int var_1_50 = -2;
double var_1_51 = 999999999.2;
unsigned char var_1_52 = 1;
float var_1_53 = 5.5;
unsigned long int var_1_55 = 16;
unsigned long int var_1_56 = 8;
double var_1_57 = 128.5;
float var_1_58 = 99999999.8;
double var_1_59 = 99.4;
double var_1_60 = 9999999999.7;
unsigned long int var_1_61 = 128;
float var_1_62 = 4.25;
signed short int var_1_63 = -5;
signed char var_1_64 = 2;
signed char var_1_65 = 32;
unsigned short int var_1_66 = 1;
unsigned short int var_1_67 = 2;
float var_1_68 = 128.05;
unsigned short int var_1_69 = 100;
signed char var_1_70 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_14 = 64;
float last_1_var_1_48 = 2.8;
unsigned char last_1_var_1_52 = 1;
unsigned long int last_1_var_1_55 = 16;
unsigned long int last_1_var_1_56 = 8;
unsigned long int last_1_var_1_61 = 128;
float last_1_var_1_62 = 4.25;
unsigned short int last_1_var_1_69 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch53Amount250
	if (((var_1_45 - var_1_3) ^ last_1_var_1_55) >= last_1_var_1_14) {
		if (last_1_var_1_61 <= (min (var_1_13 , last_1_var_1_69))) {
			if (last_1_var_1_52) {
				if (! (var_1_30 > last_1_var_1_48)) {
					var_1_44 = ((! var_1_31) || var_1_46);
				}
			} else {
				var_1_44 = (var_1_46 && var_1_47);
			}
		} else {
			var_1_44 = (! (var_1_31 && var_1_47));
		}
	} else {
		var_1_44 = var_1_46;
	}


	// From: Req9Batch53Amount250
	if (last_1_var_1_56 > var_1_16) {
		var_1_28 = (max (var_1_2 , 8));
	} else {
		var_1_28 = (64 - var_1_13);
	}


	// From: Req2Batch53Amount250
	if ((max (-10000 , var_1_2)) < var_1_28) {
		var_1_8 = var_1_10;
	}


	// From: Req3Batch53Amount250
	signed long int stepLocal_0 = var_1_28;
	if (var_1_2 < stepLocal_0) {
		var_1_11 = (max (var_1_13 , (var_1_3 + var_1_4)));
	}


	// From: Req5Batch53Amount250
	var_1_17 = var_1_10;


	// From: Req6Batch53Amount250
	var_1_18 = var_1_4;


	// From: Req13Batch53Amount250
	if (var_1_22 <= (var_1_35 - var_1_37)) {
		if (var_1_39 > 24.5f) {
			var_1_48 = ((min ((var_1_43 + var_1_36) , var_1_49)) - 16.8f);
		} else {
			var_1_48 = (var_1_36 + var_1_42);
		}
	}


	// From: Req14Batch53Amount250
	var_1_50 = var_1_4;


	// From: Req15Batch53Amount250
	var_1_51 = ((6.913434690974606E18 - var_1_43) - var_1_35);


	// From: Req16Batch53Amount250
	var_1_52 = (! var_1_31);


	// From: Req17Batch53Amount250
	if (var_1_21 >= (var_1_17 * (4.2 / var_1_36))) {
		var_1_53 = (var_1_42 + (var_1_43 - var_1_37));
	}


	// From: Req20Batch53Amount250
	if (var_1_39 > var_1_42) {
		var_1_57 = (max (var_1_38 , var_1_10));
	}


	// From: Req22Batch53Amount250
	unsigned char stepLocal_4 = var_1_44;
	if (((max (var_1_50 , var_1_11)) >= var_1_50) || stepLocal_4) {
		var_1_59 = ((max (var_1_37 , var_1_49)) - ((max (var_1_60 , var_1_35)) + 2.8));
	} else {
		var_1_59 = (max (var_1_35 , var_1_34));
	}


	// From: Req24Batch53Amount250
	if (! (var_1_17 > (var_1_60 * last_1_var_1_62))) {
		if (var_1_31) {
			var_1_62 = (abs (var_1_40 + (var_1_36 - 199.5f)));
		} else {
			if (var_1_44) {
				if (var_1_34 != last_1_var_1_62) {
					var_1_62 = (max ((min ((var_1_60 - var_1_34) , (abs (var_1_49)))) , var_1_10));
				}
			} else {
				var_1_62 = var_1_34;
			}
		}
	} else {
		var_1_62 = var_1_39;
	}


	// From: Req25Batch53Amount250
	var_1_63 = var_1_13;


	// From: Req29Batch53Amount250
	if (var_1_31) {
		var_1_68 = var_1_60;
	} else {
		var_1_68 = var_1_42;
	}


	// From: Req31Batch53Amount250
	if (var_1_44) {
		if (! (var_1_40 == var_1_59)) {
			var_1_70 = var_1_27;
		}
	}


	// From: Req23Batch53Amount250
	signed long int stepLocal_5 = min ((abs (var_1_28)) , -2);
	if ((max (var_1_50 , 10000)) >= stepLocal_5) {
		var_1_61 = (var_1_32 + var_1_27);
	} else {
		if (var_1_52) {
			var_1_61 = (max (var_1_11 , var_1_27));
		}
	}


	// From: Req4Batch53Amount250
	if (var_1_52) {
		var_1_14 = ((var_1_15 - var_1_4) - (var_1_16 - var_1_2));
	}


	// From: Req7Batch53Amount250
	unsigned char stepLocal_1 = var_1_44;
	if (var_1_57 < (var_1_20 - var_1_21)) {
		if (stepLocal_1 || ((var_1_57 / var_1_22) < (var_1_21 * var_1_10))) {
			var_1_19 = (var_1_4 + var_1_23);
		}
	} else {
		var_1_19 = var_1_23;
	}


	// From: Req11Batch53Amount250
	if (var_1_14 >= var_1_18) {
		if (var_1_21 < var_1_22) {
			if (var_1_31) {
				var_1_33 = (var_1_34 - (var_1_35 + (var_1_36 - var_1_37)));
			} else {
				var_1_33 = ((max (var_1_37 , var_1_30)) + ((min (var_1_38 , var_1_39)) + var_1_40));
			}
		} else {
			if (var_1_61 <= ((abs (128)) - var_1_27)) {
				var_1_33 = ((max (var_1_35 , var_1_37)) - (var_1_36 + (var_1_42 - var_1_43)));
			} else {
				var_1_33 = var_1_34;
			}
		}
	} else {
		var_1_33 = (max (((min (var_1_36 , var_1_43)) - var_1_34) , (min (64.25f , var_1_38))));
	}


	// From: Req26Batch53Amount250
	if (var_1_21 <= var_1_22) {
		var_1_64 = (min (var_1_23 , var_1_26));
	} else {
		if ((- var_1_68) > (var_1_33 * var_1_39)) {
			if (! var_1_52) {
				var_1_64 = var_1_32;
			} else {
				var_1_64 = (abs (var_1_65));
			}
		}
	}


	// From: Req10Batch53Amount250
	unsigned long int stepLocal_2 = var_1_26 + (var_1_14 >> var_1_32);
	if (var_1_44) {
		var_1_29 = (16.4f + var_1_30);
	} else {
		if (stepLocal_2 == var_1_50) {
			var_1_29 = var_1_30;
		}
	}


	// From: Req18Batch53Amount250
	if (var_1_46 && var_1_44) {
		var_1_55 = (abs (var_1_61));
	} else {
		var_1_55 = (var_1_15 - (max ((max (var_1_26 , var_1_16)) , var_1_4)));
	}


	// From: Req1Batch53Amount250
	if ((var_1_2 - (var_1_3 - var_1_4)) == var_1_55) {
		if ((var_1_3 + var_1_55) >= (var_1_4 / var_1_2)) {
			if (var_1_55 > var_1_4) {
				var_1_1 = ((var_1_3 + var_1_2) + var_1_6);
			} else {
				if (var_1_44 || (var_1_2 < (min (var_1_6 , var_1_55)))) {
					var_1_1 = (min (var_1_6 , ((var_1_3 - var_1_2) + (min (var_1_4 , 64)))));
				} else {
					if (var_1_44) {
						var_1_1 = var_1_4;
					} else {
						var_1_1 = var_1_2;
					}
				}
			}
		}
	} else {
		var_1_1 = -1000;
	}


	// From: Req30Batch53Amount250
	if (var_1_8 >= (max (var_1_60 , var_1_29))) {
		var_1_69 = (min (64 , var_1_13));
	}


	// From: Req27Batch53Amount250
	if (var_1_26 == var_1_69) {
		var_1_66 = var_1_4;
	} else {
		var_1_66 = var_1_63;
	}


	// From: Req19Batch53Amount250
	unsigned long int stepLocal_3 = var_1_61 + var_1_66;
	if (((min (var_1_61 , var_1_26)) * var_1_61) < stepLocal_3) {
		var_1_56 = var_1_15;
	}


	// From: Req8Batch53Amount250
	if (var_1_16 <= var_1_56) {
		var_1_24 = ((200 - (var_1_26 - var_1_27)) - var_1_3);
	}


	// From: Req21Batch53Amount250
	if (((max (var_1_37 , var_1_17)) + (15.5f + var_1_20)) <= var_1_33) {
		var_1_58 = (abs (var_1_35));
	} else {
		if (var_1_56 >= (var_1_3 / (max (var_1_32 , var_1_16)))) {
			var_1_58 = var_1_30;
		} else {
			var_1_58 = var_1_36;
		}
	}


	// From: Req28Batch53Amount250
	if (var_1_47) {
		var_1_67 = var_1_56;
	} else {
		var_1_67 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 127);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 63);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1073741823);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 3221225470);
	assume_abort_if_not(var_1_15 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 1073741823);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 31);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 31);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 2305843.009213691400e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691400e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -230584.3009213691400e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691400e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -230584.3009213691400e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 2305843.009213691400e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65535);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -126);
	assume_abort_if_not(var_1_65 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_69 = var_1_69;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((var_1_2 - (var_1_3 - var_1_4)) == var_1_55) ? (((var_1_3 + var_1_55) >= (var_1_4 / var_1_2)) ? ((var_1_55 > var_1_4) ? (var_1_1 == ((signed long int) ((var_1_3 + var_1_2) + var_1_6))) : ((var_1_44 || (var_1_2 < (min (var_1_6 , var_1_55)))) ? (var_1_1 == ((signed long int) (min (var_1_6 , ((var_1_3 - var_1_2) + (min (var_1_4 , 64))))))) : (var_1_44 ? (var_1_1 == ((signed long int) var_1_4)) : (var_1_1 == ((signed long int) var_1_2))))) : 1) : (var_1_1 == ((signed long int) -1000))) && (((max (-10000 , var_1_2)) < var_1_28) ? (var_1_8 == ((double) var_1_10)) : 1)) && ((var_1_2 < var_1_28) ? (var_1_11 == ((unsigned char) (max (var_1_13 , (var_1_3 + var_1_4))))) : 1)) && (var_1_52 ? (var_1_14 == ((unsigned long int) ((var_1_15 - var_1_4) - (var_1_16 - var_1_2)))) : 1)) && (var_1_17 == ((double) var_1_10))) && (var_1_18 == ((unsigned char) var_1_4))) && ((var_1_57 < (var_1_20 - var_1_21)) ? ((var_1_44 || ((var_1_57 / var_1_22) < (var_1_21 * var_1_10))) ? (var_1_19 == ((signed char) (var_1_4 + var_1_23))) : 1) : (var_1_19 == ((signed char) var_1_23)))) && ((var_1_16 <= var_1_56) ? (var_1_24 == ((unsigned char) ((200 - (var_1_26 - var_1_27)) - var_1_3))) : 1)) && ((last_1_var_1_56 > var_1_16) ? (var_1_28 == ((signed long int) (max (var_1_2 , 8)))) : (var_1_28 == ((signed long int) (64 - var_1_13))))) && (var_1_44 ? (var_1_29 == ((float) (16.4f + var_1_30))) : (((var_1_26 + (var_1_14 >> var_1_32)) == var_1_50) ? (var_1_29 == ((float) var_1_30)) : 1))) && ((var_1_14 >= var_1_18) ? ((var_1_21 < var_1_22) ? (var_1_31 ? (var_1_33 == ((float) (var_1_34 - (var_1_35 + (var_1_36 - var_1_37))))) : (var_1_33 == ((float) ((max (var_1_37 , var_1_30)) + ((min (var_1_38 , var_1_39)) + var_1_40))))) : ((var_1_61 <= ((abs (128)) - var_1_27)) ? (var_1_33 == ((float) ((max (var_1_35 , var_1_37)) - (var_1_36 + (var_1_42 - var_1_43))))) : (var_1_33 == ((float) var_1_34)))) : (var_1_33 == ((float) (max (((min (var_1_36 , var_1_43)) - var_1_34) , (min (64.25f , var_1_38)))))))) && ((((var_1_45 - var_1_3) ^ last_1_var_1_55) >= last_1_var_1_14) ? ((last_1_var_1_61 <= (min (var_1_13 , last_1_var_1_69))) ? (last_1_var_1_52 ? ((! (var_1_30 > last_1_var_1_48)) ? (var_1_44 == ((unsigned char) ((! var_1_31) || var_1_46))) : 1) : (var_1_44 == ((unsigned char) (var_1_46 && var_1_47)))) : (var_1_44 == ((unsigned char) (! (var_1_31 && var_1_47))))) : (var_1_44 == ((unsigned char) var_1_46)))) && ((var_1_22 <= (var_1_35 - var_1_37)) ? ((var_1_39 > 24.5f) ? (var_1_48 == ((float) ((min ((var_1_43 + var_1_36) , var_1_49)) - 16.8f))) : (var_1_48 == ((float) (var_1_36 + var_1_42)))) : 1)) && (var_1_50 == ((signed long int) var_1_4))) && (var_1_51 == ((double) ((6.913434690974606E18 - var_1_43) - var_1_35)))) && (var_1_52 == ((unsigned char) (! var_1_31)))) && ((var_1_21 >= (var_1_17 * (4.2 / var_1_36))) ? (var_1_53 == ((float) (var_1_42 + (var_1_43 - var_1_37)))) : 1)) && ((var_1_46 && var_1_44) ? (var_1_55 == ((unsigned long int) (abs (var_1_61)))) : (var_1_55 == ((unsigned long int) (var_1_15 - (max ((max (var_1_26 , var_1_16)) , var_1_4))))))) && ((((min (var_1_61 , var_1_26)) * var_1_61) < (var_1_61 + var_1_66)) ? (var_1_56 == ((unsigned long int) var_1_15)) : 1)) && ((var_1_39 > var_1_42) ? (var_1_57 == ((double) (max (var_1_38 , var_1_10)))) : 1)) && ((((max (var_1_37 , var_1_17)) + (15.5f + var_1_20)) <= var_1_33) ? (var_1_58 == ((float) (abs (var_1_35)))) : ((var_1_56 >= (var_1_3 / (max (var_1_32 , var_1_16)))) ? (var_1_58 == ((float) var_1_30)) : (var_1_58 == ((float) var_1_36))))) && ((((max (var_1_50 , var_1_11)) >= var_1_50) || var_1_44) ? (var_1_59 == ((double) ((max (var_1_37 , var_1_49)) - ((max (var_1_60 , var_1_35)) + 2.8)))) : (var_1_59 == ((double) (max (var_1_35 , var_1_34)))))) && (((max (var_1_50 , 10000)) >= (min ((abs (var_1_28)) , -2))) ? (var_1_61 == ((unsigned long int) (var_1_32 + var_1_27))) : (var_1_52 ? (var_1_61 == ((unsigned long int) (max (var_1_11 , var_1_27)))) : 1))) && ((! (var_1_17 > (var_1_60 * last_1_var_1_62))) ? (var_1_31 ? (var_1_62 == ((float) (abs (var_1_40 + (var_1_36 - 199.5f))))) : (var_1_44 ? ((var_1_34 != last_1_var_1_62) ? (var_1_62 == ((float) (max ((min ((var_1_60 - var_1_34) , (abs (var_1_49)))) , var_1_10)))) : 1) : (var_1_62 == ((float) var_1_34)))) : (var_1_62 == ((float) var_1_39)))) && (var_1_63 == ((signed short int) var_1_13))) && ((var_1_21 <= var_1_22) ? (var_1_64 == ((signed char) (min (var_1_23 , var_1_26)))) : (((- var_1_68) > (var_1_33 * var_1_39)) ? ((! var_1_52) ? (var_1_64 == ((signed char) var_1_32)) : (var_1_64 == ((signed char) (abs (var_1_65))))) : 1))) && ((var_1_26 == var_1_69) ? (var_1_66 == ((unsigned short int) var_1_4)) : (var_1_66 == ((unsigned short int) var_1_63)))) && (var_1_47 ? (var_1_67 == ((unsigned short int) var_1_56)) : (var_1_67 == ((unsigned short int) var_1_13)))) && (var_1_31 ? (var_1_68 == ((float) var_1_60)) : (var_1_68 == ((float) var_1_42)))) && ((var_1_8 >= (max (var_1_60 , var_1_29))) ? (var_1_69 == ((unsigned short int) (min (64 , var_1_13)))) : 1)) && (var_1_44 ? ((! (var_1_40 == var_1_59)) ? (var_1_70 == ((signed char) var_1_27)) : 1) : 1)
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

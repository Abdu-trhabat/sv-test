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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch76Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 8;
float var_1_12 = 15.75;
float var_1_13 = 99.2;
signed short int var_1_14 = -1;
signed short int var_1_15 = 32;
signed short int var_1_16 = 50;
signed short int var_1_17 = 5;
signed short int var_1_18 = 1;
double var_1_19 = 3.25;
double var_1_20 = 256.25;
double var_1_21 = 0.4;
double var_1_22 = 50.35;
double var_1_23 = 100.8;
signed short int var_1_24 = 200;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 3244026400;
unsigned char var_1_27 = 32;
signed short int var_1_28 = -256;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 128;
unsigned long int var_1_31 = 2;
unsigned long int var_1_32 = 1671264176;
unsigned long int var_1_33 = 64;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 128;
signed short int var_1_41 = 16;
signed short int var_1_42 = -100;
signed short int var_1_43 = -50;
unsigned short int var_1_44 = 8;
unsigned short int var_1_45 = 25;
float var_1_46 = 10.75;
float var_1_47 = 0.0;
float var_1_48 = 0.0;
float var_1_49 = 255.5;
double var_1_50 = 4.484;
unsigned char var_1_51 = 8;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned short int var_1_54 = 1;
unsigned long int var_1_55 = 5;
unsigned short int var_1_56 = 4;
unsigned short int var_1_57 = 5;
unsigned short int var_1_58 = 34230;
signed long int var_1_59 = 64;
signed short int var_1_60 = 128;
unsigned long int var_1_61 = 4;
signed short int var_1_62 = 2;
signed char var_1_63 = -2;
signed char var_1_64 = 10;
signed char var_1_65 = 8;
signed char var_1_66 = 2;
float var_1_67 = 64.6;
signed short int var_1_68 = 64;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_25 = 2;
unsigned long int last_1_var_1_33 = 64;
unsigned short int last_1_var_1_44 = 8;
float last_1_var_1_46 = 10.75;
double last_1_var_1_50 = 4.484;
unsigned char last_1_var_1_52 = 0;
unsigned long int last_1_var_1_55 = 5;
unsigned short int last_1_var_1_56 = 4;
signed short int last_1_var_1_68 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req16Batch76Amount250
	signed short int stepLocal_8 = var_1_16;
	signed short int stepLocal_7 = var_1_15;
	unsigned char stepLocal_6 = last_1_var_1_55 < (last_1_var_1_56 * var_1_26);
	if (var_1_4 && stepLocal_6) {
		if (last_1_var_1_55 < stepLocal_7) {
			var_1_50 = (var_1_47 - var_1_48);
		} else {
			if (var_1_47 == var_1_49) {
				var_1_50 = (var_1_20 - (max (16.2 , var_1_48)));
			} else {
				if (stepLocal_8 >= ((max (last_1_var_1_25 , var_1_35)) >> var_1_51)) {
					var_1_50 = ((min (var_1_21 , 0.0)) - var_1_48);
				} else {
					var_1_50 = (var_1_49 + var_1_48);
				}
			}
		}
	}


	// From: Req13Batch76Amount250
	if (((last_1_var_1_68 * last_1_var_1_33) % var_1_40) >= (last_1_var_1_25 % var_1_26)) {
		if (last_1_var_1_52) {
			var_1_44 = (max ((var_1_15 + var_1_17) , var_1_40));
		} else {
			var_1_44 = var_1_35;
		}
	} else {
		var_1_44 = var_1_17;
	}


	// From: Req8Batch76Amount250
	signed long int stepLocal_1 = var_1_34 - var_1_35;
	if ((last_1_var_1_46 + (var_1_21 - var_1_20)) <= last_1_var_1_50) {
		var_1_33 = var_1_32;
	} else {
		if (stepLocal_1 <= 128) {
			var_1_33 = (((last_1_var_1_44 + var_1_30) + var_1_16) + var_1_32);
		}
	}


	// From: Req9Batch76Amount250
	signed short int stepLocal_5 = var_1_17;
	unsigned char stepLocal_4 = var_1_35;
	unsigned long int stepLocal_3 = min (var_1_35 , var_1_33);
	signed long int stepLocal_2 = abs (var_1_14);
	if (var_1_18 < stepLocal_2) {
		if (stepLocal_5 > var_1_15) {
			if ((var_1_30 & (- 1)) < stepLocal_3) {
				if (var_1_26 > stepLocal_4) {
					var_1_36 = var_1_38;
				}
			} else {
				var_1_36 = var_1_4;
			}
		} else {
			var_1_36 = 0;
		}
	} else {
		var_1_36 = var_1_9;
	}


	// From: Req3Batch76Amount250
	if (var_1_5) {
		var_1_19 = (min ((var_1_20 - var_1_21) , (min (var_1_22 , var_1_23))));
	}


	// From: Req4Batch76Amount250
	var_1_24 = (max ((var_1_14 - var_1_17) , (50 + (min (var_1_16 , var_1_15)))));


	// From: Req5Batch76Amount250
	var_1_25 = (var_1_26 - 25u);


	// From: Req10Batch76Amount250
	if (var_1_6) {
		var_1_39 = (var_1_40 - var_1_35);
	} else {
		var_1_39 = var_1_35;
	}


	// From: Req14Batch76Amount250
	var_1_45 = var_1_35;


	// From: Req15Batch76Amount250
	var_1_46 = (((var_1_47 + var_1_48) - var_1_49) - var_1_21);


	// From: Req18Batch76Amount250
	var_1_54 = (abs (var_1_17));


	// From: Req19Batch76Amount250
	if (var_1_38) {
		if (var_1_40 < var_1_17) {
			var_1_55 = (abs (var_1_40));
		}
	} else {
		var_1_55 = (abs (var_1_40));
	}


	// From: Req24Batch76Amount250
	var_1_67 = 2.25f;


	// From: Req25Batch76Amount250
	signed long int stepLocal_16 = 64;
	unsigned char stepLocal_15 = (abs (var_1_48)) >= var_1_67;
	if ((var_1_55 * var_1_65) > stepLocal_16) {
		if (var_1_7) {
			if ((var_1_12 > var_1_13) || stepLocal_15) {
				var_1_68 = var_1_14;
			}
		} else {
			var_1_68 = var_1_29;
		}
	} else {
		var_1_68 = var_1_51;
	}


	// From: Req20Batch76Amount250
	if (var_1_47 > (abs (var_1_19 / var_1_48))) {
		if (! (var_1_50 <= (var_1_47 - var_1_48))) {
			if (((var_1_19 + var_1_47) + var_1_19) != (var_1_21 / (abs (var_1_48)))) {
				var_1_56 = (max ((abs (var_1_57 + 200)) , var_1_17));
			} else {
				var_1_56 = (min ((var_1_58 - var_1_51) , (max (var_1_35 , last_1_var_1_56))));
			}
		}
	} else {
		var_1_56 = (abs (min ((last_1_var_1_56 + var_1_35) , (max (var_1_15 , var_1_17)))));
	}


	// From: Req17Batch76Amount250
	unsigned short int stepLocal_9 = var_1_44;
	if (stepLocal_9 < var_1_56) {
		var_1_52 = (var_1_36 || var_1_6);
	} else {
		if (var_1_5) {
			var_1_52 = (var_1_4 || var_1_53);
		} else {
			var_1_52 = (! (! var_1_4));
		}
	}


	// From: Req1Batch76Amount250
	if (! (var_1_36 || var_1_52)) {
		var_1_1 = (var_1_4 || var_1_5);
	} else {
		var_1_1 = ((var_1_6 && var_1_7) && (var_1_8 && var_1_9));
	}


	// From: Req2Batch76Amount250
	if (var_1_19 != (- var_1_50)) {
		if (var_1_36) {
			var_1_10 = (var_1_14 - (var_1_15 + (var_1_16 + var_1_17)));
		} else {
			if (var_1_4) {
				var_1_10 = var_1_17;
			}
		}
	} else {
		var_1_10 = var_1_18;
	}


	// From: Req6Batch76Amount250
	unsigned char stepLocal_0 = var_1_67 <= var_1_19;
	if (stepLocal_0 && ((var_1_16 + 5) > var_1_28)) {
		if (var_1_36) {
			var_1_27 = (max (var_1_29 , var_1_30));
		}
	} else {
		var_1_27 = (min (var_1_30 , var_1_29));
	}


	// From: Req7Batch76Amount250
	if (var_1_36) {
		if (var_1_22 == var_1_20) {
			var_1_31 = (var_1_26 - (var_1_32 - (var_1_29 + var_1_17)));
		} else {
			if ((max (var_1_17 , var_1_45)) > var_1_25) {
				var_1_31 = var_1_45;
			} else {
				var_1_31 = (abs (16u));
			}
		}
	} else {
		var_1_31 = ((var_1_32 - var_1_17) + var_1_45);
	}


	// From: Req11Batch76Amount250
	if (((var_1_20 + var_1_19) * var_1_50) >= 128.75) {
		if ((var_1_19 + var_1_20) >= (var_1_21 + var_1_22)) {
			var_1_41 = ((var_1_54 - var_1_17) + (min (var_1_42 , (var_1_15 - var_1_35))));
		}
	}


	// From: Req12Batch76Amount250
	if (var_1_36) {
		var_1_43 = ((min (var_1_16 , var_1_40)) + var_1_31);
	} else {
		var_1_43 = (abs (var_1_14));
	}


	// From: Req22Batch76Amount250
	unsigned long int stepLocal_14 = var_1_55;
	unsigned short int stepLocal_13 = var_1_57;
	unsigned long int stepLocal_12 = var_1_55;
	if ((var_1_34 * (var_1_26 - var_1_61)) <= stepLocal_13) {
		if (stepLocal_14 >= var_1_57) {
			var_1_60 = (min (var_1_30 , (2 + var_1_40)));
		} else {
			if (stepLocal_12 > var_1_29) {
				var_1_60 = (var_1_10 + (var_1_40 - (32 + var_1_34)));
			} else {
				var_1_60 = ((var_1_62 + var_1_34) - var_1_17);
			}
		}
	} else {
		var_1_60 = (var_1_62 - var_1_40);
	}


	// From: Req23Batch76Amount250
	if (var_1_68 < var_1_25) {
		if (var_1_52) {
			var_1_63 = ((abs (var_1_51)) - ((min (var_1_64 , var_1_65)) + var_1_66));
		} else {
			var_1_63 = var_1_66;
		}
	} else {
		var_1_63 = var_1_64;
	}


	// From: Req21Batch76Amount250
	unsigned long int stepLocal_11 = min ((min (var_1_30 , var_1_57)) , var_1_55);
	unsigned short int stepLocal_10 = var_1_57;
	if (var_1_33 == stepLocal_10) {
		if (var_1_26 > stepLocal_11) {
			var_1_59 = (max ((max (var_1_29 , var_1_57)) , (var_1_54 - 32)));
		} else {
			var_1_59 = (max ((var_1_56 - var_1_33) , var_1_51));
		}
	} else {
		var_1_59 = (min ((var_1_60 + var_1_25) , var_1_51));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 8192);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 8191);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= -32767);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741823);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 255);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 127);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= -16383);
	assume_abort_if_not(var_1_42 <= 16383);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 2305843.009213691400e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 2305843.009213691400e+12F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 30);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 0);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 32767);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 32767);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 2147483647);
	var_1_62 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 16383);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 63);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_25 = var_1_25;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_68 = var_1_68;
}

int property(void) {
	return (((((((((((((((((((((((((! (var_1_36 || var_1_52)) ? (var_1_1 == ((unsigned char) (var_1_4 || var_1_5))) : (var_1_1 == ((unsigned char) ((var_1_6 && var_1_7) && (var_1_8 && var_1_9))))) && ((var_1_19 != (- var_1_50)) ? (var_1_36 ? (var_1_10 == ((signed short int) (var_1_14 - (var_1_15 + (var_1_16 + var_1_17))))) : (var_1_4 ? (var_1_10 == ((signed short int) var_1_17)) : 1)) : (var_1_10 == ((signed short int) var_1_18)))) && (var_1_5 ? (var_1_19 == ((double) (min ((var_1_20 - var_1_21) , (min (var_1_22 , var_1_23)))))) : 1)) && (var_1_24 == ((signed short int) (max ((var_1_14 - var_1_17) , (50 + (min (var_1_16 , var_1_15)))))))) && (var_1_25 == ((unsigned long int) (var_1_26 - 25u)))) && (((var_1_67 <= var_1_19) && ((var_1_16 + 5) > var_1_28)) ? (var_1_36 ? (var_1_27 == ((unsigned char) (max (var_1_29 , var_1_30)))) : 1) : (var_1_27 == ((unsigned char) (min (var_1_30 , var_1_29)))))) && (var_1_36 ? ((var_1_22 == var_1_20) ? (var_1_31 == ((unsigned long int) (var_1_26 - (var_1_32 - (var_1_29 + var_1_17))))) : (((max (var_1_17 , var_1_45)) > var_1_25) ? (var_1_31 == ((unsigned long int) var_1_45)) : (var_1_31 == ((unsigned long int) (abs (16u)))))) : (var_1_31 == ((unsigned long int) ((var_1_32 - var_1_17) + var_1_45))))) && (((last_1_var_1_46 + (var_1_21 - var_1_20)) <= last_1_var_1_50) ? (var_1_33 == ((unsigned long int) var_1_32)) : (((var_1_34 - var_1_35) <= 128) ? (var_1_33 == ((unsigned long int) (((last_1_var_1_44 + var_1_30) + var_1_16) + var_1_32))) : 1))) && ((var_1_18 < (abs (var_1_14))) ? ((var_1_17 > var_1_15) ? (((var_1_30 & (- 1)) < (min (var_1_35 , var_1_33))) ? ((var_1_26 > var_1_35) ? (var_1_36 == ((unsigned char) var_1_38)) : 1) : (var_1_36 == ((unsigned char) var_1_4))) : (var_1_36 == ((unsigned char) 0))) : (var_1_36 == ((unsigned char) var_1_9)))) && (var_1_6 ? (var_1_39 == ((unsigned char) (var_1_40 - var_1_35))) : (var_1_39 == ((unsigned char) var_1_35)))) && ((((var_1_20 + var_1_19) * var_1_50) >= 128.75) ? (((var_1_19 + var_1_20) >= (var_1_21 + var_1_22)) ? (var_1_41 == ((signed short int) ((var_1_54 - var_1_17) + (min (var_1_42 , (var_1_15 - var_1_35)))))) : 1) : 1)) && (var_1_36 ? (var_1_43 == ((signed short int) ((min (var_1_16 , var_1_40)) + var_1_31))) : (var_1_43 == ((signed short int) (abs (var_1_14)))))) && ((((last_1_var_1_68 * last_1_var_1_33) % var_1_40) >= (last_1_var_1_25 % var_1_26)) ? (last_1_var_1_52 ? (var_1_44 == ((unsigned short int) (max ((var_1_15 + var_1_17) , var_1_40)))) : (var_1_44 == ((unsigned short int) var_1_35))) : (var_1_44 == ((unsigned short int) var_1_17)))) && (var_1_45 == ((unsigned short int) var_1_35))) && (var_1_46 == ((float) (((var_1_47 + var_1_48) - var_1_49) - var_1_21)))) && ((var_1_4 && (last_1_var_1_55 < (last_1_var_1_56 * var_1_26))) ? ((last_1_var_1_55 < var_1_15) ? (var_1_50 == ((double) (var_1_47 - var_1_48))) : ((var_1_47 == var_1_49) ? (var_1_50 == ((double) (var_1_20 - (max (16.2 , var_1_48))))) : ((var_1_16 >= ((max (last_1_var_1_25 , var_1_35)) >> var_1_51)) ? (var_1_50 == ((double) ((min (var_1_21 , 0.0)) - var_1_48))) : (var_1_50 == ((double) (var_1_49 + var_1_48)))))) : 1)) && ((var_1_44 < var_1_56) ? (var_1_52 == ((unsigned char) (var_1_36 || var_1_6))) : (var_1_5 ? (var_1_52 == ((unsigned char) (var_1_4 || var_1_53))) : (var_1_52 == ((unsigned char) (! (! var_1_4))))))) && (var_1_54 == ((unsigned short int) (abs (var_1_17))))) && (var_1_38 ? ((var_1_40 < var_1_17) ? (var_1_55 == ((unsigned long int) (abs (var_1_40)))) : 1) : (var_1_55 == ((unsigned long int) (abs (var_1_40)))))) && ((var_1_47 > (abs (var_1_19 / var_1_48))) ? ((! (var_1_50 <= (var_1_47 - var_1_48))) ? ((((var_1_19 + var_1_47) + var_1_19) != (var_1_21 / (abs (var_1_48)))) ? (var_1_56 == ((unsigned short int) (max ((abs (var_1_57 + 200)) , var_1_17)))) : (var_1_56 == ((unsigned short int) (min ((var_1_58 - var_1_51) , (max (var_1_35 , last_1_var_1_56))))))) : 1) : (var_1_56 == ((unsigned short int) (abs (min ((last_1_var_1_56 + var_1_35) , (max (var_1_15 , var_1_17))))))))) && ((var_1_33 == var_1_57) ? ((var_1_26 > (min ((min (var_1_30 , var_1_57)) , var_1_55))) ? (var_1_59 == ((signed long int) (max ((max (var_1_29 , var_1_57)) , (var_1_54 - 32))))) : (var_1_59 == ((signed long int) (max ((var_1_56 - var_1_33) , var_1_51))))) : (var_1_59 == ((signed long int) (min ((var_1_60 + var_1_25) , var_1_51)))))) && (((var_1_34 * (var_1_26 - var_1_61)) <= var_1_57) ? ((var_1_55 >= var_1_57) ? (var_1_60 == ((signed short int) (min (var_1_30 , (2 + var_1_40))))) : ((var_1_55 > var_1_29) ? (var_1_60 == ((signed short int) (var_1_10 + (var_1_40 - (32 + var_1_34))))) : (var_1_60 == ((signed short int) ((var_1_62 + var_1_34) - var_1_17))))) : (var_1_60 == ((signed short int) (var_1_62 - var_1_40))))) && ((var_1_68 < var_1_25) ? (var_1_52 ? (var_1_63 == ((signed char) ((abs (var_1_51)) - ((min (var_1_64 , var_1_65)) + var_1_66)))) : (var_1_63 == ((signed char) var_1_66))) : (var_1_63 == ((signed char) var_1_64)))) && (var_1_67 == ((float) 2.25f))) && (((var_1_55 * var_1_65) > 64) ? (var_1_7 ? (((var_1_12 > var_1_13) || ((abs (var_1_48)) >= var_1_67)) ? (var_1_68 == ((signed short int) var_1_14)) : 1) : (var_1_68 == ((signed short int) var_1_29))) : (var_1_68 == ((signed short int) var_1_51)))
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

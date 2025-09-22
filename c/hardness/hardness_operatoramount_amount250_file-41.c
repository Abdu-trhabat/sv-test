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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch41Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 100000;
unsigned long int var_1_4 = 0;
unsigned long int var_1_5 = 5;
unsigned long int var_1_6 = 100;
unsigned long int var_1_7 = 128;
unsigned long int var_1_8 = 4;
signed long int var_1_9 = -5;
signed long int var_1_10 = 1484384233;
signed long int var_1_11 = 1;
signed long int var_1_12 = 32;
signed long int var_1_13 = 100;
signed long int var_1_14 = 100000000;
float var_1_15 = 15.88;
signed long int var_1_17 = -1;
float var_1_18 = 32.4;
float var_1_19 = 9.2;
float var_1_20 = 5.75;
double var_1_21 = 999999999999999.8;
unsigned short int var_1_22 = 44379;
unsigned short int var_1_23 = 8;
double var_1_24 = 1.7;
double var_1_25 = 15.75;
double var_1_26 = 10.2;
unsigned char var_1_27 = 1;
double var_1_28 = 0.0;
double var_1_29 = 24.2;
unsigned char var_1_30 = 0;
signed long int var_1_31 = 1;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 50;
unsigned long int var_1_34 = 8;
unsigned long int var_1_36 = 4091253961;
float var_1_37 = 8.7;
float var_1_38 = 99999999.125;
float var_1_39 = 0.5;
float var_1_40 = 0.0;
double var_1_41 = 32.5;
double var_1_42 = 64.8;
signed short int var_1_43 = -16;
signed short int var_1_44 = 16978;
signed char var_1_45 = -8;
signed char var_1_46 = 64;
signed char var_1_47 = -50;
double var_1_48 = 16.3;
unsigned short int var_1_49 = 100;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 8;
unsigned char var_1_55 = 100;
unsigned char var_1_56 = 64;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 64;
signed char var_1_59 = -10;
signed char var_1_60 = 5;
unsigned long int var_1_61 = 1;
double var_1_63 = 0.125;
signed char var_1_64 = -128;
signed char var_1_65 = 16;
unsigned short int var_1_66 = 5;
unsigned short int var_1_67 = 51416;
unsigned short int var_1_68 = 56073;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 100000;
float last_1_var_1_15 = 15.88;
double last_1_var_1_42 = 64.8;
signed short int last_1_var_1_43 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch41Amount250
	if (((max (last_1_var_1_1 , var_1_8)) + var_1_10) == (var_1_14 * var_1_17)) {
		var_1_34 = (var_1_36 - last_1_var_1_43);
	} else {
		var_1_34 = var_1_5;
	}


	// From: Req20Batch41Amount250
	unsigned long int stepLocal_17 = var_1_34;
	unsigned long int stepLocal_16 = min (var_1_57 , var_1_34);
	if (var_1_17 == stepLocal_17) {
		if (stepLocal_16 <= var_1_17) {
			var_1_63 = (abs (var_1_20));
		} else {
			var_1_63 = (var_1_29 - var_1_28);
		}
	} else {
		var_1_63 = var_1_38;
	}


	// From: Req1Batch41Amount250
	if ((- last_1_var_1_15) == last_1_var_1_42) {
		var_1_1 = (min (((abs (var_1_4)) + var_1_5) , var_1_6));
	} else {
		if (var_1_5 != (var_1_4 / (min (var_1_7 , var_1_8)))) {
			var_1_1 = (min (100000000u , (min ((2998348225u - var_1_5) , var_1_4))));
		}
	}


	// From: Req2Batch41Amount250
	if (var_1_6 >= (var_1_5 / var_1_8)) {
		var_1_9 = ((var_1_10 - var_1_11) - var_1_12);
	} else {
		var_1_9 = ((min ((var_1_10 - var_1_11) , var_1_12)) - (max (var_1_13 , var_1_14)));
	}


	// From: Req7Batch41Amount250
	signed long int stepLocal_4 = 61405 - var_1_23;
	if (stepLocal_4 > var_1_4) {
		var_1_32 = var_1_33;
	}


	// From: Req10Batch41Amount250
	signed long int stepLocal_6 = var_1_11;
	if ((10 << var_1_13) >= stepLocal_6) {
		var_1_41 = ((var_1_28 - var_1_38) - var_1_29);
	}


	// From: Req16Batch41Amount250
	unsigned long int stepLocal_14 = var_1_7;
	unsigned char stepLocal_13 = var_1_27;
	unsigned short int stepLocal_12 = var_1_23;
	if (stepLocal_13 && var_1_30) {
		if (var_1_6 >= stepLocal_14) {
			if (var_1_27) {
				var_1_50 = (var_1_30 && var_1_51);
			} else {
				if (var_1_13 >= stepLocal_12) {
					var_1_50 = (var_1_51 && var_1_52);
				} else {
					var_1_50 = (! (var_1_51 || var_1_53));
				}
			}
		} else {
			var_1_50 = var_1_53;
		}
	}


	// From: Req17Batch41Amount250
	if (((var_1_40 - var_1_29) * var_1_25) <= (32.93 + var_1_39)) {
		var_1_54 = ((100 + var_1_55) - var_1_56);
	} else {
		var_1_54 = ((min ((var_1_55 - var_1_57) , var_1_56)) + var_1_58);
	}


	// From: Req18Batch41Amount250
	if (var_1_53) {
		var_1_59 = (var_1_57 - (var_1_60 + 32));
	}


	// From: Req22Batch41Amount250
	unsigned long int stepLocal_19 = var_1_1 * var_1_23;
	if (stepLocal_19 >= (var_1_12 * var_1_11)) {
		var_1_66 = ((max (var_1_67 , var_1_68)) - var_1_23);
	} else {
		var_1_66 = var_1_58;
	}


	// From: Req19Batch41Amount250
	unsigned long int stepLocal_15 = var_1_1;
	if (var_1_53) {
		if (var_1_38 > (var_1_40 + (var_1_63 + var_1_25))) {
			var_1_61 = (min (var_1_5 , (var_1_4 + var_1_44)));
		} else {
			var_1_61 = (max (var_1_58 , (var_1_57 + (max (var_1_4 , 5u)))));
		}
	} else {
		if (stepLocal_15 <= var_1_5) {
			var_1_61 = var_1_5;
		}
	}


	// From: Req12Batch41Amount250
	unsigned long int stepLocal_7 = var_1_34;
	if (! var_1_50) {
		if (var_1_50) {
			var_1_43 = (min (var_1_61 , var_1_33));
		} else {
			var_1_43 = (abs (var_1_33 - (var_1_44 - var_1_61)));
		}
	} else {
		if (stepLocal_7 < (var_1_13 * (2u << var_1_23))) {
			var_1_43 = ((max (var_1_61 , var_1_33)) - var_1_44);
		}
	}


	// From: Req9Batch41Amount250
	unsigned short int stepLocal_5 = var_1_23;
	if (var_1_50) {
		var_1_37 = (var_1_29 + (max ((var_1_38 - var_1_39) , var_1_18)));
	} else {
		if (var_1_39 <= 10.25f) {
			var_1_37 = ((var_1_29 + var_1_38) - ((max (var_1_28 , var_1_40)) - var_1_39));
		} else {
			if (stepLocal_5 <= var_1_61) {
				var_1_37 = var_1_38;
			} else {
				var_1_37 = (abs (var_1_28));
			}
		}
	}


	// From: Req4Batch41Amount250
	unsigned long int stepLocal_3 = var_1_61;
	signed long int stepLocal_2 = var_1_11;
	if (stepLocal_3 >= var_1_34) {
		if ((var_1_22 - var_1_23) < stepLocal_2) {
			var_1_21 = (max (var_1_18 , var_1_19));
		}
	} else {
		var_1_21 = ((256.8 - (abs (var_1_19))) + (var_1_24 + var_1_25));
	}


	// From: Req5Batch41Amount250
	if (var_1_50) {
		var_1_26 = (max (63.75 , ((var_1_28 - 128.6) - (var_1_29 + 8.5))));
	} else {
		if (var_1_50) {
			var_1_26 = (var_1_19 + var_1_29);
		} else {
			if (var_1_14 > var_1_7) {
				var_1_26 = (var_1_20 - var_1_29);
			} else {
				var_1_26 = (var_1_29 + 64.25);
			}
		}
	}


	// From: Req6Batch41Amount250
	if (! var_1_50) {
		var_1_31 = (var_1_11 + var_1_23);
	} else {
		if (! var_1_50) {
			var_1_31 = var_1_13;
		}
	}


	// From: Req13Batch41Amount250
	signed long int stepLocal_9 = var_1_31;
	unsigned char stepLocal_8 = var_1_27;
	if (stepLocal_8 && var_1_30) {
		var_1_45 = (abs (min (var_1_46 , var_1_47)));
	} else {
		if ((min (var_1_34 , var_1_22)) != stepLocal_9) {
			var_1_45 = var_1_46;
		} else {
			var_1_45 = (max (var_1_47 , var_1_46));
		}
	}


	// From: Req15Batch41Amount250
	signed long int stepLocal_11 = var_1_17;
	unsigned long int stepLocal_10 = (- var_1_34) * var_1_4;
	if (var_1_34 != stepLocal_11) {
		if (var_1_50) {
			if (var_1_50) {
				var_1_49 = (var_1_33 + 2);
			}
		} else {
			if (var_1_34 <= stepLocal_10) {
				var_1_49 = ((var_1_1 + var_1_33) + 50);
			} else {
				var_1_49 = (4 + (max (var_1_44 , var_1_33)));
			}
		}
	}


	// From: Req11Batch41Amount250
	if ((- 50.6f) >= var_1_37) {
		var_1_42 = (var_1_28 - var_1_29);
	}


	// From: Req14Batch41Amount250
	if (var_1_42 == var_1_38) {
		var_1_48 = (25.25 - (var_1_40 - var_1_38));
	} else {
		if (var_1_17 == (var_1_9 >> 2)) {
			var_1_48 = var_1_19;
		} else {
			var_1_48 = var_1_18;
		}
	}


	// From: Req21Batch41Amount250
	signed long int stepLocal_18 = 100;
	if (! (var_1_4 > 64u)) {
		var_1_64 = (abs (var_1_47));
	} else {
		if (var_1_39 < var_1_38) {
			if (stepLocal_18 < var_1_9) {
				var_1_64 = (var_1_60 + -10);
			} else {
				var_1_64 = (var_1_57 - (min (var_1_60 , var_1_65)));
			}
		} else {
			if (var_1_48 >= var_1_39) {
				var_1_64 = var_1_60;
			} else {
				var_1_64 = var_1_46;
			}
		}
	}


	// From: Req3Batch41Amount250
	unsigned long int stepLocal_1 = var_1_5;
	unsigned long int stepLocal_0 = (var_1_12 / var_1_17) / var_1_8;
	if (var_1_48 != (min ((min (var_1_48 , 7.375f)) , var_1_48))) {
		if (stepLocal_0 > var_1_13) {
			var_1_15 = ((abs (var_1_18 + var_1_19)) - var_1_20);
		}
	} else {
		if (stepLocal_1 != var_1_1) {
			var_1_15 = var_1_19;
		} else {
			var_1_15 = var_1_20;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967295);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741822);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65535);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -230584.3009213691400e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -230584.3009213691400e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 4611686.018427383000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 2147483647);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 4611686.018427383000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= 16383);
	assume_abort_if_not(var_1_44 <= 32766);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -126);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -126);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 64);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 127);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 127);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 126);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 32767);
	assume_abort_if_not(var_1_67 <= 65534);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 32767);
	assume_abort_if_not(var_1_68 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_43 = var_1_43;
}

int property(void) {
	return (((((((((((((((((((((((- last_1_var_1_15) == last_1_var_1_42) ? (var_1_1 == ((unsigned long int) (min (((abs (var_1_4)) + var_1_5) , var_1_6)))) : ((var_1_5 != (var_1_4 / (min (var_1_7 , var_1_8)))) ? (var_1_1 == ((unsigned long int) (min (100000000u , (min ((2998348225u - var_1_5) , var_1_4)))))) : 1)) && ((var_1_6 >= (var_1_5 / var_1_8)) ? (var_1_9 == ((signed long int) ((var_1_10 - var_1_11) - var_1_12))) : (var_1_9 == ((signed long int) ((min ((var_1_10 - var_1_11) , var_1_12)) - (max (var_1_13 , var_1_14))))))) && ((var_1_48 != (min ((min (var_1_48 , 7.375f)) , var_1_48))) ? ((((var_1_12 / var_1_17) / var_1_8) > var_1_13) ? (var_1_15 == ((float) ((abs (var_1_18 + var_1_19)) - var_1_20))) : 1) : ((var_1_5 != var_1_1) ? (var_1_15 == ((float) var_1_19)) : (var_1_15 == ((float) var_1_20))))) && ((var_1_61 >= var_1_34) ? (((var_1_22 - var_1_23) < var_1_11) ? (var_1_21 == ((double) (max (var_1_18 , var_1_19)))) : 1) : (var_1_21 == ((double) ((256.8 - (abs (var_1_19))) + (var_1_24 + var_1_25)))))) && (var_1_50 ? (var_1_26 == ((double) (max (63.75 , ((var_1_28 - 128.6) - (var_1_29 + 8.5)))))) : (var_1_50 ? (var_1_26 == ((double) (var_1_19 + var_1_29))) : ((var_1_14 > var_1_7) ? (var_1_26 == ((double) (var_1_20 - var_1_29))) : (var_1_26 == ((double) (var_1_29 + 64.25))))))) && ((! var_1_50) ? (var_1_31 == ((signed long int) (var_1_11 + var_1_23))) : ((! var_1_50) ? (var_1_31 == ((signed long int) var_1_13)) : 1))) && (((61405 - var_1_23) > var_1_4) ? (var_1_32 == ((unsigned char) var_1_33)) : 1)) && ((((max (last_1_var_1_1 , var_1_8)) + var_1_10) == (var_1_14 * var_1_17)) ? (var_1_34 == ((unsigned long int) (var_1_36 - last_1_var_1_43))) : (var_1_34 == ((unsigned long int) var_1_5)))) && (var_1_50 ? (var_1_37 == ((float) (var_1_29 + (max ((var_1_38 - var_1_39) , var_1_18))))) : ((var_1_39 <= 10.25f) ? (var_1_37 == ((float) ((var_1_29 + var_1_38) - ((max (var_1_28 , var_1_40)) - var_1_39)))) : ((var_1_23 <= var_1_61) ? (var_1_37 == ((float) var_1_38)) : (var_1_37 == ((float) (abs (var_1_28)))))))) && (((10 << var_1_13) >= var_1_11) ? (var_1_41 == ((double) ((var_1_28 - var_1_38) - var_1_29))) : 1)) && (((- 50.6f) >= var_1_37) ? (var_1_42 == ((double) (var_1_28 - var_1_29))) : 1)) && ((! var_1_50) ? (var_1_50 ? (var_1_43 == ((signed short int) (min (var_1_61 , var_1_33)))) : (var_1_43 == ((signed short int) (abs (var_1_33 - (var_1_44 - var_1_61)))))) : ((var_1_34 < (var_1_13 * (2u << var_1_23))) ? (var_1_43 == ((signed short int) ((max (var_1_61 , var_1_33)) - var_1_44))) : 1))) && ((var_1_27 && var_1_30) ? (var_1_45 == ((signed char) (abs (min (var_1_46 , var_1_47))))) : (((min (var_1_34 , var_1_22)) != var_1_31) ? (var_1_45 == ((signed char) var_1_46)) : (var_1_45 == ((signed char) (max (var_1_47 , var_1_46))))))) && ((var_1_42 == var_1_38) ? (var_1_48 == ((double) (25.25 - (var_1_40 - var_1_38)))) : ((var_1_17 == (var_1_9 >> 2)) ? (var_1_48 == ((double) var_1_19)) : (var_1_48 == ((double) var_1_18))))) && ((var_1_34 != var_1_17) ? (var_1_50 ? (var_1_50 ? (var_1_49 == ((unsigned short int) (var_1_33 + 2))) : 1) : ((var_1_34 <= ((- var_1_34) * var_1_4)) ? (var_1_49 == ((unsigned short int) ((var_1_1 + var_1_33) + 50))) : (var_1_49 == ((unsigned short int) (4 + (max (var_1_44 , var_1_33))))))) : 1)) && ((var_1_27 && var_1_30) ? ((var_1_6 >= var_1_7) ? (var_1_27 ? (var_1_50 == ((unsigned char) (var_1_30 && var_1_51))) : ((var_1_13 >= var_1_23) ? (var_1_50 == ((unsigned char) (var_1_51 && var_1_52))) : (var_1_50 == ((unsigned char) (! (var_1_51 || var_1_53)))))) : (var_1_50 == ((unsigned char) var_1_53))) : 1)) && ((((var_1_40 - var_1_29) * var_1_25) <= (32.93 + var_1_39)) ? (var_1_54 == ((unsigned char) ((100 + var_1_55) - var_1_56))) : (var_1_54 == ((unsigned char) ((min ((var_1_55 - var_1_57) , var_1_56)) + var_1_58))))) && (var_1_53 ? (var_1_59 == ((signed char) (var_1_57 - (var_1_60 + 32)))) : 1)) && (var_1_53 ? ((var_1_38 > (var_1_40 + (var_1_63 + var_1_25))) ? (var_1_61 == ((unsigned long int) (min (var_1_5 , (var_1_4 + var_1_44))))) : (var_1_61 == ((unsigned long int) (max (var_1_58 , (var_1_57 + (max (var_1_4 , 5u)))))))) : ((var_1_1 <= var_1_5) ? (var_1_61 == ((unsigned long int) var_1_5)) : 1))) && ((var_1_17 == var_1_34) ? (((min (var_1_57 , var_1_34)) <= var_1_17) ? (var_1_63 == ((double) (abs (var_1_20)))) : (var_1_63 == ((double) (var_1_29 - var_1_28)))) : (var_1_63 == ((double) var_1_38)))) && ((! (var_1_4 > 64u)) ? (var_1_64 == ((signed char) (abs (var_1_47)))) : ((var_1_39 < var_1_38) ? ((100 < var_1_9) ? (var_1_64 == ((signed char) (var_1_60 + -10))) : (var_1_64 == ((signed char) (var_1_57 - (min (var_1_60 , var_1_65)))))) : ((var_1_48 >= var_1_39) ? (var_1_64 == ((signed char) var_1_60)) : (var_1_64 == ((signed char) var_1_46)))))) && (((var_1_1 * var_1_23) >= (var_1_12 * var_1_11)) ? (var_1_66 == ((unsigned short int) ((max (var_1_67 , var_1_68)) - var_1_23))) : (var_1_66 == ((unsigned short int) var_1_58)))
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

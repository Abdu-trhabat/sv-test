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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch120Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
signed long int var_1_2 = -4;
signed long int var_1_4 = 5;
signed long int var_1_5 = 16;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 255.5;
double var_1_12 = 200.25;
unsigned long int var_1_14 = 256;
signed long int var_1_15 = 64;
signed long int var_1_16 = 4;
signed long int var_1_17 = -50;
signed long int var_1_18 = -5;
signed long int var_1_19 = 64;
signed long int var_1_20 = 4;
signed long int var_1_21 = 50;
signed long int var_1_22 = 1642957906;
signed long int var_1_23 = 32;
unsigned long int var_1_24 = 256;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 16;
unsigned long int var_1_27 = 256;
double var_1_28 = 64.5;
unsigned long int var_1_29 = 256;
signed char var_1_30 = 64;
signed short int var_1_31 = -1;
signed char var_1_32 = 50;
signed char var_1_33 = 64;
signed char var_1_34 = 5;
signed long int var_1_35 = 100;
signed long int var_1_36 = 10;
unsigned short int var_1_37 = 500;
unsigned short int var_1_38 = 53707;
signed char var_1_39 = -32;
double var_1_40 = 32.25;
double var_1_41 = 8.6;
signed char var_1_42 = 64;
signed char var_1_43 = 0;
signed char var_1_44 = 32;
signed char var_1_45 = 64;
float var_1_46 = 64.6;
float var_1_49 = 9.8;
float var_1_50 = 1000000000.5;
signed long int var_1_51 = -8;
signed char var_1_52 = 10;
signed char var_1_53 = -64;
unsigned char var_1_54 = 16;
unsigned char var_1_55 = 128;
unsigned long int var_1_56 = 4;
unsigned long int var_1_57 = 4062879764;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 64;
unsigned char var_1_60 = 64;
unsigned char var_1_61 = 64;
signed char var_1_62 = 2;
signed char var_1_63 = -25;
signed short int var_1_64 = -32;
unsigned short int var_1_65 = 8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned long int last_1_var_1_14 = 256;
double last_1_var_1_28 = 64.5;
signed long int last_1_var_1_51 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch120Amount250
	if (! (var_1_17 > -32)) {
		if (! last_1_var_1_1) {
			var_1_24 = (max (var_1_23 , (abs (var_1_25))));
		} else {
			if ((max ((var_1_18 + var_1_22) , last_1_var_1_51)) >= var_1_5) {
				if (((min (var_1_22 , last_1_var_1_14)) + (5 ^ var_1_5)) >= last_1_var_1_51) {
					var_1_24 = (var_1_5 + var_1_26);
				} else {
					var_1_24 = (1u + (var_1_23 + var_1_27));
				}
			}
		}
	}


	// From: Req3Batch120Amount250
	if (last_1_var_1_28 >= (1.4 * var_1_12)) {
		var_1_14 = var_1_5;
	}


	// From: Req6Batch120Amount250
	unsigned long int stepLocal_6 = (max (var_1_14 , var_1_21)) / (var_1_22 + var_1_29);
	signed long int stepLocal_5 = var_1_18;
	if (((var_1_23 + var_1_4) + var_1_26) >= stepLocal_6) {
		if ((var_1_30 - 50) <= stepLocal_5) {
			var_1_28 = var_1_12;
		} else {
			var_1_28 = 31.125;
		}
	} else {
		var_1_28 = var_1_12;
	}


	// From: Req4Batch120Amount250
	signed long int stepLocal_4 = var_1_4;
	if (var_1_5 < stepLocal_4) {
		var_1_15 = (max (((min (var_1_16 , var_1_17)) + var_1_18) , var_1_19));
	} else {
		if (var_1_28 < var_1_12) {
			var_1_15 = (var_1_20 - (min (var_1_21 , (var_1_22 - var_1_23))));
		} else {
			var_1_15 = ((var_1_22 - var_1_23) - var_1_21);
		}
	}


	// From: Req7Batch120Amount250
	var_1_31 = ((25 - 64) + var_1_30);


	// From: Req8Batch120Amount250
	if (var_1_11 <= (abs (var_1_28))) {
		var_1_32 = ((min ((abs (var_1_33)) , 8)) - var_1_34);
	}


	// From: Req9Batch120Amount250
	if (var_1_9) {
		var_1_35 = (var_1_34 - 25);
	} else {
		var_1_35 = ((max (var_1_34 , (min (var_1_18 , var_1_17)))) + var_1_36);
	}


	// From: Req10Batch120Amount250
	var_1_37 = (var_1_38 - var_1_34);


	// From: Req12Batch120Amount250
	signed long int stepLocal_9 = var_1_35;
	if ((var_1_15 % (min (-16 , var_1_42))) > stepLocal_9) {
		var_1_46 = (min (var_1_12 , (max (var_1_49 , var_1_50))));
	}


	// From: Req15Batch120Amount250
	var_1_53 = var_1_34;


	// From: Req16Batch120Amount250
	if (var_1_2 == (max (var_1_19 , (var_1_43 - var_1_22)))) {
		var_1_54 = (var_1_55 - var_1_42);
	}


	// From: Req2Batch120Amount250
	signed long int stepLocal_3 = var_1_5;
	signed long int stepLocal_2 = var_1_15;
	if (stepLocal_2 > var_1_2) {
		if (var_1_4 > stepLocal_3) {
			var_1_10 = var_1_7;
		} else {
			if ((var_1_11 - (8.90019211169373E18 - var_1_12)) < var_1_28) {
				var_1_10 = (var_1_6 || var_1_7);
			} else {
				var_1_10 = var_1_7;
			}
		}
	}


	// From: Req19Batch120Amount250
	signed long int stepLocal_13 = var_1_21 / var_1_38;
	if (! var_1_10) {
		if (var_1_14 <= stepLocal_13) {
			var_1_62 = ((min (var_1_44 , var_1_43)) + var_1_63);
		} else {
			var_1_62 = (abs (var_1_45));
		}
	} else {
		var_1_62 = (min ((var_1_43 - var_1_34) , (min (var_1_33 , (min (8 , var_1_63))))));
	}


	// From: Req13Batch120Amount250
	unsigned long int stepLocal_10 = var_1_24;
	if (! var_1_10) {
		var_1_51 = (min (var_1_33 , (var_1_24 - var_1_38)));
	} else {
		if (stepLocal_10 > var_1_35) {
			var_1_51 = (max (var_1_14 , var_1_21));
		} else {
			var_1_51 = ((max ((var_1_22 - var_1_23) , var_1_30)) - var_1_38);
		}
	}


	// From: Req1Batch120Amount250
	signed long int stepLocal_1 = min (1000000 , (-10 % var_1_2));
	signed long int stepLocal_0 = var_1_4 - var_1_5;
	if (stepLocal_1 > var_1_15) {
		if (stepLocal_0 > (var_1_2 + -64)) {
			var_1_1 = (var_1_6 || ((! var_1_7) || (var_1_10 && var_1_9)));
		}
	}


	// From: Req11Batch120Amount250
	unsigned short int stepLocal_8 = var_1_38;
	unsigned char stepLocal_7 = var_1_6;
	if ((min ((var_1_28 + var_1_11) , (5.2 * var_1_12))) <= (var_1_28 / (max (var_1_40 , var_1_41)))) {
		if (stepLocal_8 < var_1_17) {
			if (var_1_1 || stepLocal_7) {
				var_1_39 = (max (var_1_34 , var_1_33));
			} else {
				var_1_39 = (max (((var_1_42 - var_1_43) - var_1_34) , var_1_33));
			}
		} else {
			var_1_39 = (max ((min ((max (-5 , var_1_42)) , (var_1_43 + var_1_44))) , var_1_34));
		}
	} else {
		var_1_39 = (abs (var_1_45));
	}


	// From: Req14Batch120Amount250
	if (var_1_1 && (var_1_6 || (var_1_26 > 4u))) {
		if (var_1_10 || var_1_1) {
			var_1_52 = (max (var_1_42 , (max (0 , var_1_34))));
		} else {
			var_1_52 = ((var_1_42 - var_1_43) - var_1_34);
		}
	}


	// From: Req17Batch120Amount250
	unsigned char stepLocal_12 = var_1_7;
	signed char stepLocal_11 = var_1_34;
	if ((var_1_2 >= var_1_29) && stepLocal_12) {
		if (var_1_26 > stepLocal_11) {
			var_1_56 = (min ((var_1_57 - 8u) , var_1_55));
		} else {
			var_1_56 = (var_1_21 + var_1_5);
		}
	} else {
		if (var_1_1) {
			var_1_56 = ((1471720303u - (abs (var_1_38))) + (var_1_23 + (min (var_1_43 , var_1_42))));
		}
	}


	// From: Req18Batch120Amount250
	if (var_1_9 || (16u < var_1_34)) {
		if ((var_1_27 + var_1_26) < var_1_35) {
			if (var_1_10) {
				var_1_58 = ((var_1_59 + var_1_60) - var_1_43);
			} else {
				if (! var_1_6) {
					if (var_1_56 < (var_1_23 + (var_1_29 + var_1_56))) {
						if (var_1_5 <= (min (var_1_15 , var_1_2))) {
							var_1_58 = (max (var_1_59 , var_1_42));
						}
					} else {
						var_1_58 = (var_1_43 + var_1_42);
					}
				}
			}
		}
	} else {
		var_1_58 = (((min (var_1_59 , var_1_60)) + var_1_61) - var_1_42);
	}


	// From: Req20Batch120Amount250
	unsigned char stepLocal_15 = var_1_1;
	signed long int stepLocal_14 = var_1_32 + var_1_18;
	if (((var_1_22 + var_1_43) / (33275 - var_1_61)) < stepLocal_14) {
		if (var_1_8 || stepLocal_15) {
			if (var_1_6) {
				var_1_64 = (abs (5));
			} else {
				var_1_64 = ((min (var_1_42 , (var_1_55 + var_1_61))) - 128);
			}
		} else {
			var_1_64 = var_1_34;
		}
	} else {
		var_1_64 = var_1_35;
	}


	// From: Req21Batch120Amount250
	unsigned long int stepLocal_18 = var_1_61 - var_1_14;
	signed long int stepLocal_17 = var_1_17;
	signed char stepLocal_16 = var_1_42;
	if ((abs (var_1_59 - var_1_51)) >= stepLocal_16) {
		if ((abs (var_1_44)) > stepLocal_18) {
			if ((min (var_1_51 , var_1_16)) < stepLocal_17) {
				var_1_65 = var_1_51;
			} else {
				var_1_65 = var_1_34;
			}
		}
	} else {
		var_1_65 = var_1_42;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	assume_abort_if_not(var_1_2 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427388000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -1073741823);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -1073741823);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -1073741823);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483647);
	assume_abort_if_not(var_1_19 <= 2147483646);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 1073741823);
	assume_abort_if_not(var_1_22 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1073741823);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1073741823);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -1);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -126);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -1073741823);
	assume_abort_if_not(var_1_36 <= 1073741823);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 32767);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	assume_abort_if_not(var_1_40 != 0.0F);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	assume_abort_if_not(var_1_41 != 0.0F);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 62);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -63);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -126);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -922337.2036854766000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -922337.2036854766000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 2147483647);
	assume_abort_if_not(var_1_57 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 63);
	assume_abort_if_not(var_1_59 <= 127);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 64);
	assume_abort_if_not(var_1_60 <= 127);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 64);
	assume_abort_if_not(var_1_61 <= 127);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= -63);
	assume_abort_if_not(var_1_63 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_51 = var_1_51;
}

int property(void) {
	return ((((((((((((((((((((((min (1000000 , (-10 % var_1_2))) > var_1_15) ? (((var_1_4 - var_1_5) > (var_1_2 + -64)) ? (var_1_1 == ((unsigned char) (var_1_6 || ((! var_1_7) || (var_1_10 && var_1_9))))) : 1) : 1) && ((var_1_15 > var_1_2) ? ((var_1_4 > var_1_5) ? (var_1_10 == ((unsigned char) var_1_7)) : (((var_1_11 - (8.90019211169373E18 - var_1_12)) < var_1_28) ? (var_1_10 == ((unsigned char) (var_1_6 || var_1_7))) : (var_1_10 == ((unsigned char) var_1_7)))) : 1)) && ((last_1_var_1_28 >= (1.4 * var_1_12)) ? (var_1_14 == ((unsigned long int) var_1_5)) : 1)) && ((var_1_5 < var_1_4) ? (var_1_15 == ((signed long int) (max (((min (var_1_16 , var_1_17)) + var_1_18) , var_1_19)))) : ((var_1_28 < var_1_12) ? (var_1_15 == ((signed long int) (var_1_20 - (min (var_1_21 , (var_1_22 - var_1_23)))))) : (var_1_15 == ((signed long int) ((var_1_22 - var_1_23) - var_1_21)))))) && ((! (var_1_17 > -32)) ? ((! last_1_var_1_1) ? (var_1_24 == ((unsigned long int) (max (var_1_23 , (abs (var_1_25)))))) : (((max ((var_1_18 + var_1_22) , last_1_var_1_51)) >= var_1_5) ? ((((min (var_1_22 , last_1_var_1_14)) + (5 ^ var_1_5)) >= last_1_var_1_51) ? (var_1_24 == ((unsigned long int) (var_1_5 + var_1_26))) : (var_1_24 == ((unsigned long int) (1u + (var_1_23 + var_1_27))))) : 1)) : 1)) && ((((var_1_23 + var_1_4) + var_1_26) >= ((max (var_1_14 , var_1_21)) / (var_1_22 + var_1_29))) ? (((var_1_30 - 50) <= var_1_18) ? (var_1_28 == ((double) var_1_12)) : (var_1_28 == ((double) 31.125))) : (var_1_28 == ((double) var_1_12)))) && (var_1_31 == ((signed short int) ((25 - 64) + var_1_30)))) && ((var_1_11 <= (abs (var_1_28))) ? (var_1_32 == ((signed char) ((min ((abs (var_1_33)) , 8)) - var_1_34))) : 1)) && (var_1_9 ? (var_1_35 == ((signed long int) (var_1_34 - 25))) : (var_1_35 == ((signed long int) ((max (var_1_34 , (min (var_1_18 , var_1_17)))) + var_1_36))))) && (var_1_37 == ((unsigned short int) (var_1_38 - var_1_34)))) && (((min ((var_1_28 + var_1_11) , (5.2 * var_1_12))) <= (var_1_28 / (max (var_1_40 , var_1_41)))) ? ((var_1_38 < var_1_17) ? ((var_1_1 || var_1_6) ? (var_1_39 == ((signed char) (max (var_1_34 , var_1_33)))) : (var_1_39 == ((signed char) (max (((var_1_42 - var_1_43) - var_1_34) , var_1_33))))) : (var_1_39 == ((signed char) (max ((min ((max (-5 , var_1_42)) , (var_1_43 + var_1_44))) , var_1_34))))) : (var_1_39 == ((signed char) (abs (var_1_45)))))) && (((var_1_15 % (min (-16 , var_1_42))) > var_1_35) ? (var_1_46 == ((float) (min (var_1_12 , (max (var_1_49 , var_1_50)))))) : 1)) && ((! var_1_10) ? (var_1_51 == ((signed long int) (min (var_1_33 , (var_1_24 - var_1_38))))) : ((var_1_24 > var_1_35) ? (var_1_51 == ((signed long int) (max (var_1_14 , var_1_21)))) : (var_1_51 == ((signed long int) ((max ((var_1_22 - var_1_23) , var_1_30)) - var_1_38)))))) && ((var_1_1 && (var_1_6 || (var_1_26 > 4u))) ? ((var_1_10 || var_1_1) ? (var_1_52 == ((signed char) (max (var_1_42 , (max (0 , var_1_34)))))) : (var_1_52 == ((signed char) ((var_1_42 - var_1_43) - var_1_34)))) : 1)) && (var_1_53 == ((signed char) var_1_34))) && ((var_1_2 == (max (var_1_19 , (var_1_43 - var_1_22)))) ? (var_1_54 == ((unsigned char) (var_1_55 - var_1_42))) : 1)) && (((var_1_2 >= var_1_29) && var_1_7) ? ((var_1_26 > var_1_34) ? (var_1_56 == ((unsigned long int) (min ((var_1_57 - 8u) , var_1_55)))) : (var_1_56 == ((unsigned long int) (var_1_21 + var_1_5)))) : (var_1_1 ? (var_1_56 == ((unsigned long int) ((1471720303u - (abs (var_1_38))) + (var_1_23 + (min (var_1_43 , var_1_42)))))) : 1))) && ((var_1_9 || (16u < var_1_34)) ? (((var_1_27 + var_1_26) < var_1_35) ? (var_1_10 ? (var_1_58 == ((unsigned char) ((var_1_59 + var_1_60) - var_1_43))) : ((! var_1_6) ? ((var_1_56 < (var_1_23 + (var_1_29 + var_1_56))) ? ((var_1_5 <= (min (var_1_15 , var_1_2))) ? (var_1_58 == ((unsigned char) (max (var_1_59 , var_1_42)))) : 1) : (var_1_58 == ((unsigned char) (var_1_43 + var_1_42)))) : 1)) : 1) : (var_1_58 == ((unsigned char) (((min (var_1_59 , var_1_60)) + var_1_61) - var_1_42))))) && ((! var_1_10) ? ((var_1_14 <= (var_1_21 / var_1_38)) ? (var_1_62 == ((signed char) ((min (var_1_44 , var_1_43)) + var_1_63))) : (var_1_62 == ((signed char) (abs (var_1_45))))) : (var_1_62 == ((signed char) (min ((var_1_43 - var_1_34) , (min (var_1_33 , (min (8 , var_1_63)))))))))) && ((((var_1_22 + var_1_43) / (33275 - var_1_61)) < (var_1_32 + var_1_18)) ? ((var_1_8 || var_1_1) ? (var_1_6 ? (var_1_64 == ((signed short int) (abs (5)))) : (var_1_64 == ((signed short int) ((min (var_1_42 , (var_1_55 + var_1_61))) - 128)))) : (var_1_64 == ((signed short int) var_1_34))) : (var_1_64 == ((signed short int) var_1_35)))) && (((abs (var_1_59 - var_1_51)) >= var_1_42) ? (((abs (var_1_44)) > (var_1_61 - var_1_14)) ? (((min (var_1_51 , var_1_16)) < var_1_17) ? (var_1_65 == ((unsigned short int) var_1_51)) : (var_1_65 == ((unsigned short int) var_1_34))) : 1) : (var_1_65 == ((unsigned short int) var_1_42)))
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

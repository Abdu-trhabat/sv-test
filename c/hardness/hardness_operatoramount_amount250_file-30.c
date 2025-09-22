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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch30Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 256;
unsigned long int var_1_4 = 256;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 64;
unsigned long int var_1_7 = 16;
unsigned long int var_1_8 = 3645380125;
unsigned long int var_1_9 = 32;
unsigned long int var_1_10 = 32;
unsigned long int var_1_11 = 256;
signed char var_1_12 = -5;
signed char var_1_13 = 16;
signed char var_1_14 = -32;
signed char var_1_17 = 0;
signed char var_1_18 = 4;
signed char var_1_19 = 0;
signed long int var_1_20 = -10000;
signed long int var_1_21 = 50;
signed long int var_1_22 = 16;
unsigned char var_1_23 = 10;
unsigned long int var_1_24 = 128;
unsigned long int var_1_25 = 5;
float var_1_26 = -0.5;
float var_1_27 = 0.4;
unsigned char var_1_28 = 128;
unsigned char var_1_29 = 2;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
unsigned long int var_1_33 = 128;
unsigned long int var_1_34 = 128;
unsigned long int var_1_35 = 1174159822;
unsigned short int var_1_37 = 0;
unsigned short int var_1_38 = 36545;
unsigned short int var_1_39 = 16;
unsigned short int var_1_40 = 55479;
signed char var_1_41 = 2;
float var_1_42 = 100.5;
signed char var_1_43 = 0;
unsigned long int var_1_44 = 5;
signed char var_1_45 = 0;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
signed char var_1_48 = -4;
double var_1_49 = 1.5;
double var_1_50 = 128.5;
double var_1_51 = 63.6;
double var_1_52 = 200.6;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
signed short int var_1_56 = 1;
float var_1_57 = 0.25;
float var_1_58 = 0.0;
float var_1_59 = 100000.5;
float var_1_60 = 9.625;
float var_1_61 = 100.375;
signed short int var_1_62 = -100;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
signed short int var_1_65 = -10;
unsigned char var_1_66 = 128;
signed long int var_1_68 = -128;
unsigned short int var_1_69 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 256;
signed long int last_1_var_1_20 = -10000;
unsigned long int last_1_var_1_33 = 128;
unsigned long int last_1_var_1_44 = 5;
signed short int last_1_var_1_65 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch30Amount250
	unsigned long int stepLocal_7 = var_1_11;
	unsigned long int stepLocal_6 = ~ last_1_var_1_1;
	unsigned long int stepLocal_5 = (var_1_4 / var_1_34) + last_1_var_1_20;
	if (var_1_19 >= stepLocal_6) {
		if (var_1_11 < stepLocal_5) {
			if (stepLocal_7 < (var_1_17 * (max (last_1_var_1_33 , var_1_24)))) {
				var_1_33 = ((var_1_28 + var_1_29) + (var_1_35 - var_1_21));
			} else {
				var_1_33 = (var_1_8 - var_1_29);
			}
		} else {
			var_1_33 = (var_1_11 + var_1_35);
		}
	} else {
		if (! (var_1_8 <= (last_1_var_1_44 * var_1_34))) {
			var_1_33 = (var_1_8 - var_1_29);
		} else {
			var_1_33 = var_1_9;
		}
	}


	// From: Req2Batch30Amount250
	var_1_12 = (max (var_1_13 , 2));


	// From: Req4Batch30Amount250
	if (var_1_13 <= -100) {
		var_1_20 = (var_1_17 - ((max (var_1_21 , var_1_18)) + var_1_22));
	}


	// From: Req6Batch30Amount250
	var_1_30 = (! (var_1_31 && var_1_32));


	// From: Req10Batch30Amount250
	if (! (var_1_34 > var_1_28)) {
		if ((- var_1_27) == (min (var_1_26 , var_1_42))) {
			var_1_41 = (abs (var_1_17 - var_1_18));
		}
	} else {
		if (var_1_30) {
			var_1_41 = (var_1_18 - (64 - (min (var_1_17 , var_1_43))));
		} else {
			var_1_41 = (max ((1 - var_1_43) , var_1_17));
		}
	}


	// From: Req12Batch30Amount250
	var_1_46 = (! var_1_47);


	// From: Req13Batch30Amount250
	if (var_1_30) {
		var_1_48 = (var_1_17 + (max (var_1_19 , (var_1_18 - var_1_43))));
	}


	// From: Req14Batch30Amount250
	if (var_1_22 <= (var_1_48 / var_1_40)) {
		if (var_1_30) {
			var_1_49 = (min (var_1_50 , (var_1_51 + var_1_52)));
		} else {
			var_1_49 = (min (var_1_50 , 0.25));
		}
	}


	// From: Req16Batch30Amount250
	signed long int stepLocal_12 = var_1_18 / var_1_28;
	if (var_1_54) {
		if ((var_1_17 / var_1_40) < stepLocal_12) {
			var_1_56 = (abs (var_1_43 - (var_1_45 + var_1_18)));
		} else {
			var_1_56 = (max (var_1_19 , var_1_40));
		}
	}


	// From: Req17Batch30Amount250
	signed long int stepLocal_13 = (var_1_21 + var_1_22) * -100;
	if (stepLocal_13 < var_1_20) {
		var_1_57 = ((max ((var_1_58 - var_1_59) , (max (15.8f , var_1_60)))) - var_1_61);
	} else {
		var_1_57 = (max (var_1_51 , (var_1_60 - var_1_58)));
	}


	// From: Req22Batch30Amount250
	var_1_69 = var_1_45;


	// From: Req11Batch30Amount250
	signed long int stepLocal_10 = var_1_22;
	signed long int stepLocal_9 = var_1_22 << (var_1_45 + 0);
	if (stepLocal_9 < (min (var_1_20 , var_1_33))) {
		if (var_1_8 <= stepLocal_10) {
			var_1_44 = (max (var_1_22 , var_1_28));
		}
	} else {
		var_1_44 = var_1_11;
	}


	// From: Req1Batch30Amount250
	if (var_1_44 == var_1_33) {
		var_1_1 = (max (var_1_4 , (max ((min (var_1_5 , var_1_6)) , var_1_7))));
	} else {
		var_1_1 = (var_1_8 - (max ((max (var_1_9 , var_1_10)) , var_1_11)));
	}


	// From: Req8Batch30Amount250
	unsigned long int stepLocal_8 = 8u;
	if (! var_1_31) {
		var_1_37 = (((min (var_1_1 , var_1_18)) + var_1_29) + 64);
	} else {
		if (((var_1_22 * var_1_8) + var_1_1) <= stepLocal_8) {
			var_1_37 = (abs (var_1_38 - (var_1_29 + var_1_1)));
		} else {
			var_1_37 = var_1_29;
		}
	}


	// From: Req9Batch30Amount250
	var_1_39 = (min (var_1_18 , ((var_1_40 - var_1_1) - var_1_28)));


	// From: Req15Batch30Amount250
	unsigned long int stepLocal_11 = var_1_44;
	if (! (! (var_1_25 == 0u))) {
		if (stepLocal_11 > var_1_33) {
			var_1_53 = (! (! var_1_47));
		} else {
			var_1_53 = (var_1_47 && var_1_54);
		}
	} else {
		if (var_1_49 <= var_1_51) {
			var_1_53 = ((var_1_40 >= var_1_37) && (! var_1_32));
		}
	}


	// From: Req18Batch30Amount250
	if ((min (var_1_1 , (var_1_40 + var_1_11))) <= var_1_21) {
		if (var_1_38 >= var_1_43) {
			if (var_1_53 || (var_1_24 >= var_1_56)) {
				var_1_62 = (max (var_1_18 , var_1_13));
			} else {
				var_1_62 = (min ((var_1_18 + var_1_28) , (min (50 , (min (var_1_13 , var_1_45))))));
			}
		} else {
			if (var_1_46 && var_1_53) {
				var_1_62 = (abs (var_1_41));
			} else {
				var_1_62 = (var_1_43 + var_1_45);
			}
		}
	} else {
		var_1_62 = (var_1_56 + var_1_43);
	}


	// From: Req19Batch30Amount250
	if (var_1_31) {
		var_1_63 = (var_1_47 || (! var_1_32));
	} else {
		var_1_63 = (((var_1_5 > 1u) || var_1_53) && ((var_1_54 || var_1_47) || var_1_64));
	}


	// From: Req20Batch30Amount250
	if ((last_1_var_1_65 <= (var_1_43 - var_1_28)) || ((var_1_66 - var_1_17) >= var_1_33)) {
		if (var_1_46 && var_1_54) {
			var_1_65 = (min ((var_1_43 - var_1_18) , (max ((var_1_69 - var_1_29) , (min (var_1_28 , var_1_40))))));
		}
	} else {
		if (var_1_61 > var_1_49) {
			var_1_65 = var_1_45;
		} else {
			var_1_65 = var_1_69;
		}
	}


	// From: Req21Batch30Amount250
	if ((var_1_33 % var_1_66) != (min (var_1_35 , var_1_1))) {
		var_1_68 = ((min ((var_1_18 - var_1_66) , var_1_40)) + var_1_39);
	}


	// From: Req3Batch30Amount250
	unsigned long int stepLocal_2 = (var_1_18 / var_1_8) / 32u;
	unsigned char stepLocal_1 = var_1_53;
	unsigned char stepLocal_0 = (var_1_11 / 128) >= var_1_7;
	if ((var_1_53 || var_1_46) || stepLocal_0) {
		var_1_14 = ((var_1_17 - var_1_18) + var_1_19);
	} else {
		if ((abs (var_1_6)) < stepLocal_2) {
			if (stepLocal_1 || var_1_46) {
				var_1_14 = -64;
			} else {
				var_1_14 = var_1_19;
			}
		} else {
			var_1_14 = var_1_13;
		}
	}


	// From: Req5Batch30Amount250
	unsigned long int stepLocal_4 = min ((16u % var_1_25) , var_1_44);
	signed char stepLocal_3 = var_1_17;
	if (var_1_19 >= stepLocal_3) {
		if (var_1_63) {
			if (((var_1_8 - var_1_11) / var_1_24) == stepLocal_4) {
				if ((min (var_1_57 , 7.25f)) >= var_1_57) {
					var_1_23 = (var_1_28 - var_1_17);
				}
			} else {
				var_1_23 = (max (var_1_29 , (max (var_1_17 , var_1_28))));
			}
		} else {
			var_1_23 = (min ((abs (var_1_29)) , var_1_18));
		}
	} else {
		var_1_23 = var_1_18;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1073741823);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967295);
	assume_abort_if_not(var_1_24 != 0);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967295);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 127);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 4294967295);
	assume_abort_if_not(var_1_34 != 0);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 1073741823);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 32767);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 49150);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854766000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -461168.6018427383000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -461168.6018427383000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 4611686.018427383000e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854766000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 0);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 127);
	assume_abort_if_not(var_1_66 <= 255);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_65 = var_1_65;
}

int property(void) {
	return ((((((((((((((((((((((var_1_44 == var_1_33) ? (var_1_1 == ((unsigned long int) (max (var_1_4 , (max ((min (var_1_5 , var_1_6)) , var_1_7)))))) : (var_1_1 == ((unsigned long int) (var_1_8 - (max ((max (var_1_9 , var_1_10)) , var_1_11)))))) && (var_1_12 == ((signed char) (max (var_1_13 , 2))))) && (((var_1_53 || var_1_46) || ((var_1_11 / 128) >= var_1_7)) ? (var_1_14 == ((signed char) ((var_1_17 - var_1_18) + var_1_19))) : (((abs (var_1_6)) < ((var_1_18 / var_1_8) / 32u)) ? ((var_1_53 || var_1_46) ? (var_1_14 == ((signed char) -64)) : (var_1_14 == ((signed char) var_1_19))) : (var_1_14 == ((signed char) var_1_13))))) && ((var_1_13 <= -100) ? (var_1_20 == ((signed long int) (var_1_17 - ((max (var_1_21 , var_1_18)) + var_1_22)))) : 1)) && ((var_1_19 >= var_1_17) ? (var_1_63 ? ((((var_1_8 - var_1_11) / var_1_24) == (min ((16u % var_1_25) , var_1_44))) ? (((min (var_1_57 , 7.25f)) >= var_1_57) ? (var_1_23 == ((unsigned char) (var_1_28 - var_1_17))) : 1) : (var_1_23 == ((unsigned char) (max (var_1_29 , (max (var_1_17 , var_1_28))))))) : (var_1_23 == ((unsigned char) (min ((abs (var_1_29)) , var_1_18))))) : (var_1_23 == ((unsigned char) var_1_18)))) && (var_1_30 == ((unsigned char) (! (var_1_31 && var_1_32))))) && ((var_1_19 >= (~ last_1_var_1_1)) ? ((var_1_11 < ((var_1_4 / var_1_34) + last_1_var_1_20)) ? ((var_1_11 < (var_1_17 * (max (last_1_var_1_33 , var_1_24)))) ? (var_1_33 == ((unsigned long int) ((var_1_28 + var_1_29) + (var_1_35 - var_1_21)))) : (var_1_33 == ((unsigned long int) (var_1_8 - var_1_29)))) : (var_1_33 == ((unsigned long int) (var_1_11 + var_1_35)))) : ((! (var_1_8 <= (last_1_var_1_44 * var_1_34))) ? (var_1_33 == ((unsigned long int) (var_1_8 - var_1_29))) : (var_1_33 == ((unsigned long int) var_1_9))))) && ((! var_1_31) ? (var_1_37 == ((unsigned short int) (((min (var_1_1 , var_1_18)) + var_1_29) + 64))) : ((((var_1_22 * var_1_8) + var_1_1) <= 8u) ? (var_1_37 == ((unsigned short int) (abs (var_1_38 - (var_1_29 + var_1_1))))) : (var_1_37 == ((unsigned short int) var_1_29))))) && (var_1_39 == ((unsigned short int) (min (var_1_18 , ((var_1_40 - var_1_1) - var_1_28)))))) && ((! (var_1_34 > var_1_28)) ? (((- var_1_27) == (min (var_1_26 , var_1_42))) ? (var_1_41 == ((signed char) (abs (var_1_17 - var_1_18)))) : 1) : (var_1_30 ? (var_1_41 == ((signed char) (var_1_18 - (64 - (min (var_1_17 , var_1_43)))))) : (var_1_41 == ((signed char) (max ((1 - var_1_43) , var_1_17))))))) && (((var_1_22 << (var_1_45 + 0)) < (min (var_1_20 , var_1_33))) ? ((var_1_8 <= var_1_22) ? (var_1_44 == ((unsigned long int) (max (var_1_22 , var_1_28)))) : 1) : (var_1_44 == ((unsigned long int) var_1_11)))) && (var_1_46 == ((unsigned char) (! var_1_47)))) && (var_1_30 ? (var_1_48 == ((signed char) (var_1_17 + (max (var_1_19 , (var_1_18 - var_1_43)))))) : 1)) && ((var_1_22 <= (var_1_48 / var_1_40)) ? (var_1_30 ? (var_1_49 == ((double) (min (var_1_50 , (var_1_51 + var_1_52))))) : (var_1_49 == ((double) (min (var_1_50 , 0.25))))) : 1)) && ((! (! (var_1_25 == 0u))) ? ((var_1_44 > var_1_33) ? (var_1_53 == ((unsigned char) (! (! var_1_47)))) : (var_1_53 == ((unsigned char) (var_1_47 && var_1_54)))) : ((var_1_49 <= var_1_51) ? (var_1_53 == ((unsigned char) ((var_1_40 >= var_1_37) && (! var_1_32)))) : 1))) && (var_1_54 ? (((var_1_17 / var_1_40) < (var_1_18 / var_1_28)) ? (var_1_56 == ((signed short int) (abs (var_1_43 - (var_1_45 + var_1_18))))) : (var_1_56 == ((signed short int) (max (var_1_19 , var_1_40))))) : 1)) && ((((var_1_21 + var_1_22) * -100) < var_1_20) ? (var_1_57 == ((float) ((max ((var_1_58 - var_1_59) , (max (15.8f , var_1_60)))) - var_1_61))) : (var_1_57 == ((float) (max (var_1_51 , (var_1_60 - var_1_58))))))) && (((min (var_1_1 , (var_1_40 + var_1_11))) <= var_1_21) ? ((var_1_38 >= var_1_43) ? ((var_1_53 || (var_1_24 >= var_1_56)) ? (var_1_62 == ((signed short int) (max (var_1_18 , var_1_13)))) : (var_1_62 == ((signed short int) (min ((var_1_18 + var_1_28) , (min (50 , (min (var_1_13 , var_1_45))))))))) : ((var_1_46 && var_1_53) ? (var_1_62 == ((signed short int) (abs (var_1_41)))) : (var_1_62 == ((signed short int) (var_1_43 + var_1_45))))) : (var_1_62 == ((signed short int) (var_1_56 + var_1_43))))) && (var_1_31 ? (var_1_63 == ((unsigned char) (var_1_47 || (! var_1_32)))) : (var_1_63 == ((unsigned char) (((var_1_5 > 1u) || var_1_53) && ((var_1_54 || var_1_47) || var_1_64)))))) && (((last_1_var_1_65 <= (var_1_43 - var_1_28)) || ((var_1_66 - var_1_17) >= var_1_33)) ? ((var_1_46 && var_1_54) ? (var_1_65 == ((signed short int) (min ((var_1_43 - var_1_18) , (max ((var_1_69 - var_1_29) , (min (var_1_28 , var_1_40)))))))) : 1) : ((var_1_61 > var_1_49) ? (var_1_65 == ((signed short int) var_1_45)) : (var_1_65 == ((signed short int) var_1_69))))) && (((var_1_33 % var_1_66) != (min (var_1_35 , var_1_1))) ? (var_1_68 == ((signed long int) ((min ((var_1_18 - var_1_66) , var_1_40)) + var_1_39))) : 1)) && (var_1_69 == ((unsigned short int) var_1_45))
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

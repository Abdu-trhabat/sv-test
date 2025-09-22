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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch38Amount250.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 200;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 32;
unsigned short int var_1_4 = 32;
unsigned short int var_1_5 = 42139;
unsigned short int var_1_6 = 4;
unsigned short int var_1_7 = 1;
double var_1_9 = 0.1;
signed long int var_1_11 = -64;
signed long int var_1_12 = 1;
float var_1_13 = 10.4;
unsigned char var_1_14 = 0;
float var_1_16 = 256.5;
float var_1_17 = 128.75;
float var_1_18 = 50.2;
signed char var_1_19 = 1;
float var_1_20 = 32.5;
signed char var_1_21 = 64;
signed short int var_1_22 = 10;
signed short int var_1_23 = -64;
signed short int var_1_24 = -1;
signed short int var_1_25 = 4;
signed short int var_1_26 = 2;
signed long int var_1_27 = -8;
unsigned short int var_1_28 = 0;
unsigned short int var_1_29 = 4;
unsigned char var_1_30 = 1;
unsigned short int var_1_31 = 5;
signed long int var_1_32 = -128;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
signed char var_1_35 = 16;
signed char var_1_36 = -1;
signed char var_1_37 = 100;
unsigned char var_1_38 = 0;
signed char var_1_39 = 16;
signed char var_1_40 = 50;
signed char var_1_41 = 5;
signed char var_1_42 = 5;
unsigned char var_1_43 = 5;
unsigned char var_1_44 = 128;
unsigned char var_1_45 = 64;
unsigned long int var_1_46 = 0;
unsigned long int var_1_47 = 3033060551;
unsigned long int var_1_48 = 1523951990;
float var_1_49 = 49.8;
float var_1_50 = 10.625;
double var_1_51 = 3.4;
double var_1_52 = 0.0;
double var_1_53 = 31.75;
signed char var_1_54 = -64;
signed char var_1_55 = 4;
signed char var_1_56 = 2;
unsigned long int var_1_57 = 10;
unsigned long int var_1_58 = 1;
signed char var_1_59 = 64;
signed long int var_1_60 = -16;
unsigned short int var_1_61 = 256;
double var_1_62 = -0.5;
float var_1_63 = 7.6;
float var_1_64 = 0.0;
signed char var_1_65 = 1;
unsigned short int var_1_66 = 32;

// Calibration values

// Last'ed variables
double last_1_var_1_51 = 3.4;
signed long int last_1_var_1_60 = -16;
unsigned short int last_1_var_1_61 = 256;
double last_1_var_1_62 = -0.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch38Amount250
	unsigned short int stepLocal_1 = var_1_6;
	unsigned short int stepLocal_0 = var_1_4;
	if ((last_1_var_1_62 / var_1_9) != last_1_var_1_51) {
		if (var_1_9 >= last_1_var_1_51) {
			var_1_7 = var_1_6;
		} else {
			if (var_1_5 <= stepLocal_1) {
				if (stepLocal_0 < (var_1_3 + last_1_var_1_61)) {
					var_1_7 = var_1_6;
				} else {
					var_1_7 = var_1_5;
				}
			} else {
				var_1_7 = var_1_3;
			}
		}
	} else {
		var_1_7 = var_1_6;
	}


	// From: Req11Batch38Amount250
	var_1_33 = var_1_34;


	// From: Req12Batch38Amount250
	var_1_35 = (var_1_36 + 50);


	// From: Req14Batch38Amount250
	var_1_43 = (var_1_44 - (var_1_45 - (var_1_40 - 1)));


	// From: Req16Batch38Amount250
	if (! var_1_33) {
		var_1_49 = var_1_50;
	} else {
		var_1_49 = (max (var_1_18 , var_1_50));
	}


	// From: Req20Batch38Amount250
	if (var_1_33) {
		var_1_61 = (var_1_5 - var_1_59);
	}


	// From: Req21Batch38Amount250
	if (! var_1_34) {
		var_1_62 = (var_1_53 + 1.0000000000005E12);
	}


	// From: Req22Batch38Amount250
	var_1_63 = (var_1_18 - (var_1_64 - (abs (var_1_53))));


	// From: Req23Batch38Amount250
	if (var_1_63 > var_1_50) {
		var_1_65 = (max (0 , var_1_41));
	} else {
		var_1_65 = var_1_21;
	}


	// From: Req24Batch38Amount250
	if (var_1_33) {
		if (((var_1_52 + var_1_53) - var_1_18) > var_1_50) {
			var_1_66 = ((abs (10)) + var_1_43);
		} else {
			var_1_66 = var_1_39;
		}
	} else {
		var_1_66 = var_1_31;
	}


	// From: Req3Batch38Amount250
	if ((var_1_7 * var_1_5) <= var_1_6) {
		var_1_11 = (var_1_7 - var_1_12);
	} else {
		if (var_1_3 >= var_1_4) {
			var_1_11 = (min ((var_1_5 - var_1_66) , var_1_7));
		}
	}


	// From: Req1Batch38Amount250
	if (var_1_33) {
		var_1_1 = (min ((var_1_3 + var_1_4) , (var_1_5 - (abs (var_1_6)))));
	} else {
		var_1_1 = (min ((var_1_5 - var_1_6) , (var_1_3 + (256 + 1))));
	}


	// From: Req4Batch38Amount250
	unsigned short int stepLocal_2 = var_1_66;
	if (stepLocal_2 <= var_1_6) {
		var_1_13 = var_1_16;
	} else {
		var_1_13 = (min (var_1_16 , (var_1_17 - (7.395661665937694E18f - var_1_18))));
	}


	// From: Req5Batch38Amount250
	if (var_1_62 > (var_1_9 / var_1_20)) {
		if (! var_1_33) {
			if (var_1_33) {
				var_1_19 = (5 - var_1_21);
			} else {
				var_1_19 = (var_1_21 - 16);
			}
		}
	}


	// From: Req7Batch38Amount250
	var_1_27 = ((abs (var_1_66)) + var_1_25);


	// From: Req10Batch38Amount250
	if (var_1_33) {
		var_1_32 = (var_1_11 - var_1_25);
	}


	// From: Req18Batch38Amount250
	if (var_1_34) {
		var_1_54 = ((var_1_41 + (var_1_55 + var_1_56)) - (min (var_1_21 , (var_1_40 + var_1_39))));
	} else {
		if (var_1_38) {
			if (var_1_53 < var_1_18) {
				if (var_1_44 != ((max (var_1_61 , var_1_11)) >> (var_1_57 + var_1_58))) {
					var_1_54 = (max (var_1_42 , var_1_40));
				}
			}
		} else {
			if (var_1_41 < ((var_1_45 - 2) >> var_1_58)) {
				var_1_54 = (var_1_39 - ((var_1_40 - var_1_56) + (1 + var_1_57)));
			} else {
				if ((var_1_42 + var_1_6) >= ((var_1_24 - var_1_11) * (var_1_12 * 50))) {
					if (var_1_33) {
						var_1_54 = (var_1_56 - (max (var_1_41 , (max (var_1_39 , var_1_57)))));
					} else {
						if (((var_1_25 | 64) <= 4) || (var_1_44 <= var_1_11)) {
							var_1_54 = var_1_21;
						}
					}
				} else {
					var_1_54 = (var_1_41 - (var_1_59 - var_1_58));
				}
			}
		}
	}


	// From: Req15Batch38Amount250
	unsigned short int stepLocal_7 = var_1_6;
	if ((- (var_1_5 - 200)) < stepLocal_7) {
		if (! ((var_1_21 * var_1_27) == var_1_7)) {
			var_1_46 = (min ((var_1_47 - var_1_40) , var_1_66));
		}
	} else {
		var_1_46 = ((var_1_48 - (1000000000u - var_1_39)) + var_1_42);
	}


	// From: Req17Batch38Amount250
	unsigned short int stepLocal_9 = var_1_31;
	unsigned long int stepLocal_8 = var_1_46 * var_1_27;
	if (stepLocal_9 <= (var_1_5 - 1)) {
		var_1_51 = (99.25 + var_1_18);
	} else {
		if ((var_1_11 + var_1_45) <= stepLocal_8) {
			var_1_51 = ((24.5 + (var_1_52 - var_1_53)) - (64.125 + 1.000000000025E10));
		}
	}


	// From: Req6Batch38Amount250
	unsigned char stepLocal_3 = var_1_51 > var_1_16;
	if ((min ((var_1_62 * var_1_17) , var_1_9)) <= ((8.7 / var_1_20) * var_1_63)) {
		if (stepLocal_3 && (var_1_21 >= (min (var_1_66 , var_1_12)))) {
			var_1_22 = (min (((min (var_1_21 , var_1_27)) + var_1_23) , (var_1_24 - (64 + var_1_25))));
		} else {
			var_1_22 = ((var_1_25 + var_1_21) - var_1_26);
		}
	} else {
		var_1_22 = (var_1_26 - var_1_21);
	}


	// From: Req8Batch38Amount250
	signed long int stepLocal_4 = var_1_11 * var_1_32;
	if (var_1_33) {
		if (stepLocal_4 <= var_1_24) {
			var_1_28 = var_1_25;
		} else {
			var_1_28 = (var_1_3 + var_1_26);
		}
	}


	// From: Req9Batch38Amount250
	unsigned char stepLocal_5 = var_1_2;
	if (var_1_51 > (64.8f * (max (var_1_20 , var_1_17)))) {
		if (! (var_1_2 || var_1_14)) {
			var_1_29 = (min ((var_1_25 + 1) , (min (var_1_4 , var_1_3))));
		}
	} else {
		if (var_1_14) {
			var_1_29 = (var_1_26 + var_1_21);
		} else {
			if (stepLocal_5 && var_1_30) {
				if (var_1_2) {
					var_1_29 = var_1_5;
				} else {
					var_1_29 = var_1_31;
				}
			} else {
				var_1_29 = var_1_26;
			}
		}
	}


	// From: Req19Batch38Amount250
	unsigned short int stepLocal_11 = var_1_31;
	unsigned long int stepLocal_10 = 200u;
	if (var_1_9 > var_1_51) {
		if (stepLocal_10 < var_1_4) {
			var_1_60 = var_1_41;
		}
	} else {
		if (var_1_51 >= (var_1_53 - var_1_17)) {
			var_1_60 = (var_1_45 + last_1_var_1_60);
		} else {
			if (stepLocal_11 >= last_1_var_1_60) {
				var_1_60 = (((max (var_1_42 , var_1_56)) - var_1_31) + var_1_19);
			} else {
				var_1_60 = (var_1_41 - last_1_var_1_60);
			}
		}
	}


	// From: Req13Batch38Amount250
	signed long int stepLocal_6 = var_1_35 * (var_1_36 * var_1_60);
	if ((~ (max (var_1_21 , var_1_4))) >= stepLocal_6) {
		var_1_37 = ((var_1_39 + (var_1_40 - var_1_41)) - (16 + var_1_42));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	assume_abort_if_not(var_1_20 != 0.0F);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -16383);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -1);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 16383);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 31);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 31);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 127);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 63);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 2147483647);
	assume_abort_if_not(var_1_47 <= 4294967294);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 1073741823);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -922337.2036854766000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 2305843.009213691400e+12F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691400e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 32);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 31);
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 15);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 1);
	assume_abort_if_not(var_1_58 <= 15);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 63);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 4611686.018427383000e+12F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854766000e+12F && var_1_64 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_51 = var_1_51;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_62 = var_1_62;
}

int property(void) {
	return (((((((((((((((((((((((var_1_33 ? (var_1_1 == ((unsigned short int) (min ((var_1_3 + var_1_4) , (var_1_5 - (abs (var_1_6))))))) : (var_1_1 == ((unsigned short int) (min ((var_1_5 - var_1_6) , (var_1_3 + (256 + 1))))))) && (((last_1_var_1_62 / var_1_9) != last_1_var_1_51) ? ((var_1_9 >= last_1_var_1_51) ? (var_1_7 == ((unsigned short int) var_1_6)) : ((var_1_5 <= var_1_6) ? ((var_1_4 < (var_1_3 + last_1_var_1_61)) ? (var_1_7 == ((unsigned short int) var_1_6)) : (var_1_7 == ((unsigned short int) var_1_5))) : (var_1_7 == ((unsigned short int) var_1_3)))) : (var_1_7 == ((unsigned short int) var_1_6)))) && (((var_1_7 * var_1_5) <= var_1_6) ? (var_1_11 == ((signed long int) (var_1_7 - var_1_12))) : ((var_1_3 >= var_1_4) ? (var_1_11 == ((signed long int) (min ((var_1_5 - var_1_66) , var_1_7)))) : 1))) && ((var_1_66 <= var_1_6) ? (var_1_13 == ((float) var_1_16)) : (var_1_13 == ((float) (min (var_1_16 , (var_1_17 - (7.395661665937694E18f - var_1_18)))))))) && ((var_1_62 > (var_1_9 / var_1_20)) ? ((! var_1_33) ? (var_1_33 ? (var_1_19 == ((signed char) (5 - var_1_21))) : (var_1_19 == ((signed char) (var_1_21 - 16)))) : 1) : 1)) && (((min ((var_1_62 * var_1_17) , var_1_9)) <= ((8.7 / var_1_20) * var_1_63)) ? (((var_1_51 > var_1_16) && (var_1_21 >= (min (var_1_66 , var_1_12)))) ? (var_1_22 == ((signed short int) (min (((min (var_1_21 , var_1_27)) + var_1_23) , (var_1_24 - (64 + var_1_25)))))) : (var_1_22 == ((signed short int) ((var_1_25 + var_1_21) - var_1_26)))) : (var_1_22 == ((signed short int) (var_1_26 - var_1_21))))) && (var_1_27 == ((signed long int) ((abs (var_1_66)) + var_1_25)))) && (var_1_33 ? (((var_1_11 * var_1_32) <= var_1_24) ? (var_1_28 == ((unsigned short int) var_1_25)) : (var_1_28 == ((unsigned short int) (var_1_3 + var_1_26)))) : 1)) && ((var_1_51 > (64.8f * (max (var_1_20 , var_1_17)))) ? ((! (var_1_2 || var_1_14)) ? (var_1_29 == ((unsigned short int) (min ((var_1_25 + 1) , (min (var_1_4 , var_1_3)))))) : 1) : (var_1_14 ? (var_1_29 == ((unsigned short int) (var_1_26 + var_1_21))) : ((var_1_2 && var_1_30) ? (var_1_2 ? (var_1_29 == ((unsigned short int) var_1_5)) : (var_1_29 == ((unsigned short int) var_1_31))) : (var_1_29 == ((unsigned short int) var_1_26)))))) && (var_1_33 ? (var_1_32 == ((signed long int) (var_1_11 - var_1_25))) : 1)) && (var_1_33 == ((unsigned char) var_1_34))) && (var_1_35 == ((signed char) (var_1_36 + 50)))) && (((~ (max (var_1_21 , var_1_4))) >= (var_1_35 * (var_1_36 * var_1_60))) ? (var_1_37 == ((signed char) ((var_1_39 + (var_1_40 - var_1_41)) - (16 + var_1_42)))) : 1)) && (var_1_43 == ((unsigned char) (var_1_44 - (var_1_45 - (var_1_40 - 1)))))) && (((- (var_1_5 - 200)) < var_1_6) ? ((! ((var_1_21 * var_1_27) == var_1_7)) ? (var_1_46 == ((unsigned long int) (min ((var_1_47 - var_1_40) , var_1_66)))) : 1) : (var_1_46 == ((unsigned long int) ((var_1_48 - (1000000000u - var_1_39)) + var_1_42))))) && ((! var_1_33) ? (var_1_49 == ((float) var_1_50)) : (var_1_49 == ((float) (max (var_1_18 , var_1_50)))))) && ((var_1_31 <= (var_1_5 - 1)) ? (var_1_51 == ((double) (99.25 + var_1_18))) : (((var_1_11 + var_1_45) <= (var_1_46 * var_1_27)) ? (var_1_51 == ((double) ((24.5 + (var_1_52 - var_1_53)) - (64.125 + 1.000000000025E10)))) : 1))) && (var_1_34 ? (var_1_54 == ((signed char) ((var_1_41 + (var_1_55 + var_1_56)) - (min (var_1_21 , (var_1_40 + var_1_39)))))) : (var_1_38 ? ((var_1_53 < var_1_18) ? ((var_1_44 != ((max (var_1_61 , var_1_11)) >> (var_1_57 + var_1_58))) ? (var_1_54 == ((signed char) (max (var_1_42 , var_1_40)))) : 1) : 1) : ((var_1_41 < ((var_1_45 - 2) >> var_1_58)) ? (var_1_54 == ((signed char) (var_1_39 - ((var_1_40 - var_1_56) + (1 + var_1_57))))) : (((var_1_42 + var_1_6) >= ((var_1_24 - var_1_11) * (var_1_12 * 50))) ? (var_1_33 ? (var_1_54 == ((signed char) (var_1_56 - (max (var_1_41 , (max (var_1_39 , var_1_57))))))) : ((((var_1_25 | 64) <= 4) || (var_1_44 <= var_1_11)) ? (var_1_54 == ((signed char) var_1_21)) : 1)) : (var_1_54 == ((signed char) (var_1_41 - (var_1_59 - var_1_58))))))))) && ((var_1_9 > var_1_51) ? ((200u < var_1_4) ? (var_1_60 == ((signed long int) var_1_41)) : 1) : ((var_1_51 >= (var_1_53 - var_1_17)) ? (var_1_60 == ((signed long int) (var_1_45 + last_1_var_1_60))) : ((var_1_31 >= last_1_var_1_60) ? (var_1_60 == ((signed long int) (((max (var_1_42 , var_1_56)) - var_1_31) + var_1_19))) : (var_1_60 == ((signed long int) (var_1_41 - last_1_var_1_60))))))) && (var_1_33 ? (var_1_61 == ((unsigned short int) (var_1_5 - var_1_59))) : 1)) && ((! var_1_34) ? (var_1_62 == ((double) (var_1_53 + 1.0000000000005E12))) : 1)) && (var_1_63 == ((float) (var_1_18 - (var_1_64 - (abs (var_1_53))))))) && ((var_1_63 > var_1_50) ? (var_1_65 == ((signed char) (max (0 , var_1_41)))) : (var_1_65 == ((signed char) var_1_21)))) && (var_1_33 ? ((((var_1_52 + var_1_53) - var_1_18) > var_1_50) ? (var_1_66 == ((unsigned short int) ((abs (10)) + var_1_43))) : (var_1_66 == ((unsigned short int) var_1_39))) : (var_1_66 == ((unsigned short int) var_1_31)))
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

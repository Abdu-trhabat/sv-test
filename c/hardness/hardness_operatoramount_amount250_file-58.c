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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch58Amount250.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned char var_1_4 = 64;
signed long int var_1_6 = -1;
unsigned short int var_1_7 = 45218;
unsigned short int var_1_8 = 0;
double var_1_9 = 128.4;
unsigned short int var_1_10 = 40875;
double var_1_14 = 7.125;
double var_1_15 = 10.6;
double var_1_16 = 0.6;
double var_1_17 = -0.8;
double var_1_18 = 15.75;
double var_1_19 = 255.25;
double var_1_20 = 63.942;
double var_1_21 = 64.5;
double var_1_22 = 50.75;
signed char var_1_23 = 16;
signed char var_1_24 = 50;
signed char var_1_25 = -4;
signed short int var_1_26 = 64;
unsigned short int var_1_27 = 1;
unsigned short int var_1_28 = 0;
unsigned long int var_1_29 = 5;
unsigned short int var_1_30 = 8;
unsigned short int var_1_31 = 27601;
signed short int var_1_32 = 16;
signed short int var_1_33 = 256;
signed short int var_1_34 = 8;
signed short int var_1_35 = 1;
signed short int var_1_36 = 32264;
signed short int var_1_37 = 1000;
signed char var_1_38 = 4;
signed char var_1_39 = 2;
signed char var_1_40 = 0;
signed char var_1_41 = 2;
signed short int var_1_42 = -16;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 128;
unsigned short int var_1_45 = 256;
unsigned short int var_1_46 = 28587;
float var_1_47 = 127.2;
unsigned long int var_1_48 = 32;
unsigned long int var_1_49 = 16;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 1;
unsigned long int var_1_52 = 25;
signed char var_1_53 = 2;
signed char var_1_54 = 2;
signed char var_1_56 = 32;
unsigned long int var_1_57 = 256;
double var_1_58 = 24.4;
double var_1_59 = 9.6;
double var_1_60 = 0.5;
unsigned long int var_1_61 = 10000000;
unsigned long int var_1_62 = 1968159822;
double var_1_63 = 8.25;
unsigned long int var_1_64 = 32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 1;
signed char last_1_var_1_23 = 16;
signed short int last_1_var_1_26 = 64;
unsigned short int last_1_var_1_27 = 1;
signed short int last_1_var_1_32 = 16;
signed short int last_1_var_1_42 = -16;
unsigned long int last_1_var_1_48 = 32;
unsigned long int last_1_var_1_57 = 256;
double last_1_var_1_58 = 24.4;
double last_1_var_1_63 = 8.25;
unsigned long int last_1_var_1_64 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req14Batch58Amount250
	signed long int stepLocal_13 = min (-100000000 , (last_1_var_1_23 * last_1_var_1_26));
	unsigned char stepLocal_12 = var_1_51;
	unsigned long int stepLocal_11 = last_1_var_1_64;
	if (stepLocal_11 >= last_1_var_1_48) {
		if (var_1_2) {
			var_1_48 = (max ((var_1_49 + var_1_4) , (last_1_var_1_64 + var_1_31)));
		}
	} else {
		if (var_1_50 && stepLocal_12) {
			if ((min (last_1_var_1_64 , var_1_25)) > stepLocal_13) {
				var_1_48 = (abs (var_1_52));
			}
		}
	}


	// From: Req4Batch58Amount250
	if (var_1_2) {
		var_1_26 = (last_1_var_1_26 + var_1_25);
	} else {
		if (((var_1_22 * var_1_17) * var_1_18) == var_1_19) {
			var_1_26 = ((min (var_1_25 , last_1_var_1_26)) + var_1_48);
		}
	}


	// From: Req6Batch58Amount250
	signed long int stepLocal_3 = min (last_1_var_1_32 , (last_1_var_1_27 + var_1_8));
	if (stepLocal_3 >= var_1_10) {
		var_1_29 = (4145023310u - var_1_8);
	} else {
		var_1_29 = (min (last_1_var_1_1 , last_1_var_1_27));
	}


	// From: Req19Batch58Amount250
	if (((63.4f + var_1_18) != var_1_60) && var_1_51) {
		if (var_1_44 > var_1_7) {
			if ((var_1_29 / var_1_46) > ((32u % var_1_7) * var_1_6)) {
				var_1_63 = ((var_1_17 + var_1_59) + var_1_60);
			} else {
				var_1_63 = var_1_59;
			}
		} else {
			var_1_63 = var_1_17;
		}
	}


	// From: Req5Batch58Amount250
	if (last_1_var_1_58 > last_1_var_1_63) {
		var_1_27 = ((abs (min (var_1_8 , last_1_var_1_42))) + var_1_4);
	} else {
		var_1_27 = ((max ((max (last_1_var_1_42 , var_1_8)) , var_1_4)) + var_1_28);
	}


	// From: Req3Batch58Amount250
	signed long int stepLocal_2 = ~ var_1_6;
	if (stepLocal_2 > (min ((var_1_10 - 1) , (min (var_1_4 , var_1_27))))) {
		var_1_23 = (var_1_24 + (abs (abs (var_1_25))));
	}


	// From: Req12Batch58Amount250
	if (var_1_2) {
		var_1_45 = ((var_1_31 + (max (21405 , var_1_46))) - var_1_4);
	}


	// From: Req16Batch58Amount250
	if (var_1_7 != last_1_var_1_57) {
		var_1_57 = (max (50u , var_1_46));
	}


	// From: Req20Batch58Amount250
	unsigned long int stepLocal_15 = - (var_1_62 * var_1_44);
	unsigned long int stepLocal_14 = var_1_57;
	if (stepLocal_14 < var_1_33) {
		var_1_64 = var_1_8;
	} else {
		if ((last_1_var_1_64 * var_1_48) >= stepLocal_15) {
			var_1_64 = var_1_48;
		} else {
			var_1_64 = var_1_43;
		}
	}


	// From: Req17Batch58Amount250
	if ((var_1_63 * 9.7f) <= (max (var_1_16 , (- var_1_21)))) {
		if (var_1_64 != 256u) {
			var_1_58 = (max (var_1_19 , var_1_14));
		}
	} else {
		if (var_1_50 && var_1_2) {
			var_1_58 = (((var_1_59 - var_1_60) + var_1_17) + var_1_16);
		} else {
			if (var_1_41 > ((abs (var_1_54)) << var_1_27)) {
				var_1_58 = var_1_22;
			} else {
				var_1_58 = (var_1_59 - var_1_21);
			}
		}
	}


	// From: Req2Batch58Amount250
	if (var_1_7 < (var_1_10 - var_1_29)) {
		if (var_1_8 > var_1_29) {
			if ((min (var_1_48 , var_1_10)) < ((max (10000 , var_1_48)) - var_1_29)) {
				if ((max (var_1_63 , var_1_58)) != var_1_58) {
					if (var_1_29 >= (var_1_7 * var_1_4)) {
						var_1_9 = (min ((max (var_1_14 , (abs (var_1_15)))) , ((var_1_16 + var_1_17) + (var_1_18 + var_1_19))));
					}
				} else {
					var_1_9 = ((7.204363062650301E18 - var_1_20) - (min (var_1_21 , (7.812042275699702E18 - var_1_22))));
				}
			} else {
				var_1_9 = var_1_18;
			}
		} else {
			var_1_9 = var_1_22;
		}
	}


	// From: Req8Batch58Amount250
	signed long int stepLocal_5 = - (var_1_6 * 10);
	if (var_1_31 <= stepLocal_5) {
		if (var_1_9 > var_1_18) {
			if (var_1_2) {
				var_1_32 = ((var_1_64 + (var_1_4 + var_1_33)) - (max (var_1_34 , var_1_35)));
			} else {
				var_1_32 = (var_1_4 - (min ((abs (last_1_var_1_32)) , (var_1_36 - var_1_64))));
			}
		} else {
			var_1_32 = var_1_64;
		}
	} else {
		var_1_32 = var_1_24;
	}


	// From: Req18Batch58Amount250
	if (var_1_57 == var_1_29) {
		var_1_61 = (var_1_44 + (var_1_62 - var_1_41));
	} else {
		var_1_61 = (min ((32u + var_1_49) , var_1_31));
	}


	// From: Req7Batch58Amount250
	signed long int stepLocal_4 = var_1_8 << var_1_24;
	if ((var_1_27 * (var_1_7 - var_1_28)) < stepLocal_4) {
		var_1_30 = (var_1_8 + (max (var_1_4 , (var_1_31 - var_1_32))));
	} else {
		var_1_30 = 1000;
	}


	// From: Req9Batch58Amount250
	unsigned char stepLocal_7 = var_1_20 > var_1_16;
	unsigned char stepLocal_6 = var_1_58 > var_1_21;
	if (var_1_2 && stepLocal_7) {
		if ((var_1_33 == (var_1_36 - var_1_31)) && stepLocal_6) {
			var_1_37 = ((var_1_33 - (min (64 , 0))) + var_1_4);
		}
	}


	// From: Req10Batch58Amount250
	unsigned short int stepLocal_8 = var_1_7;
	if (var_1_64 <= stepLocal_8) {
		var_1_38 = ((max (var_1_39 , var_1_40)) - var_1_41);
	} else {
		if (var_1_2) {
			var_1_38 = (max (var_1_25 , var_1_40));
		} else {
			var_1_38 = (max (var_1_41 , var_1_40));
		}
	}


	// From: Req13Batch58Amount250
	signed long int stepLocal_10 = (var_1_30 / var_1_36) & (var_1_10 - 256);
	if (((min (var_1_30 , var_1_64)) / var_1_31) >= stepLocal_10) {
		var_1_47 = (min (var_1_15 , var_1_16));
	} else {
		var_1_47 = (var_1_22 - var_1_20);
	}


	// From: Req15Batch58Amount250
	if (var_1_2) {
		var_1_53 = (min (var_1_40 , ((8 - var_1_54) + (min (var_1_25 , var_1_24)))));
	} else {
		if (var_1_64 < var_1_48) {
			var_1_53 = ((min (var_1_24 , (var_1_54 - var_1_56))) + var_1_25);
		}
	}


	// From: Req1Batch58Amount250
	unsigned long int stepLocal_1 = max (-256 , (var_1_61 / var_1_6));
	unsigned char stepLocal_0 = var_1_4;
	if ((last_1_var_1_1 / (8 + var_1_4)) > stepLocal_1) {
		if (stepLocal_0 != var_1_61) {
			var_1_1 = (min (var_1_4 , (var_1_7 - (min (last_1_var_1_1 , var_1_8)))));
		} else {
			var_1_1 = (min (var_1_7 , (var_1_4 + last_1_var_1_1)));
		}
	} else {
		var_1_1 = (abs (var_1_4));
	}


	// From: Req11Batch58Amount250
	signed short int stepLocal_9 = var_1_35;
	if (((min (var_1_43 , var_1_44)) - var_1_4) != stepLocal_9) {
		var_1_42 = (var_1_43 + (var_1_33 - (max (var_1_4 , var_1_1))));
	} else {
		var_1_42 = (((min (var_1_41 , 5)) + var_1_40) + 128);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65535);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -230584.3009213691400e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 16383);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 8191);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32766);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 16383);
	assume_abort_if_not(var_1_36 <= 32766);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -1);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -1);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 127);
	assume_abort_if_not(var_1_43 <= 255);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 127);
	assume_abort_if_not(var_1_44 <= 255);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 16384);
	assume_abort_if_not(var_1_46 <= 32767);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691400e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691400e+12F && var_1_60 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 1073741823);
	assume_abort_if_not(var_1_62 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
}

int property(void) {
	return (((((((((((((((((((((last_1_var_1_1 / (8 + var_1_4)) > (max (-256 , (var_1_61 / var_1_6)))) ? ((var_1_4 != var_1_61) ? (var_1_1 == ((unsigned short int) (min (var_1_4 , (var_1_7 - (min (last_1_var_1_1 , var_1_8))))))) : (var_1_1 == ((unsigned short int) (min (var_1_7 , (var_1_4 + last_1_var_1_1)))))) : (var_1_1 == ((unsigned short int) (abs (var_1_4))))) && ((var_1_7 < (var_1_10 - var_1_29)) ? ((var_1_8 > var_1_29) ? (((min (var_1_48 , var_1_10)) < ((max (10000 , var_1_48)) - var_1_29)) ? (((max (var_1_63 , var_1_58)) != var_1_58) ? ((var_1_29 >= (var_1_7 * var_1_4)) ? (var_1_9 == ((double) (min ((max (var_1_14 , (abs (var_1_15)))) , ((var_1_16 + var_1_17) + (var_1_18 + var_1_19)))))) : 1) : (var_1_9 == ((double) ((7.204363062650301E18 - var_1_20) - (min (var_1_21 , (7.812042275699702E18 - var_1_22))))))) : (var_1_9 == ((double) var_1_18))) : (var_1_9 == ((double) var_1_22))) : 1)) && (((~ var_1_6) > (min ((var_1_10 - 1) , (min (var_1_4 , var_1_27))))) ? (var_1_23 == ((signed char) (var_1_24 + (abs (abs (var_1_25)))))) : 1)) && (var_1_2 ? (var_1_26 == ((signed short int) (last_1_var_1_26 + var_1_25))) : ((((var_1_22 * var_1_17) * var_1_18) == var_1_19) ? (var_1_26 == ((signed short int) ((min (var_1_25 , last_1_var_1_26)) + var_1_48))) : 1))) && ((last_1_var_1_58 > last_1_var_1_63) ? (var_1_27 == ((unsigned short int) ((abs (min (var_1_8 , last_1_var_1_42))) + var_1_4))) : (var_1_27 == ((unsigned short int) ((max ((max (last_1_var_1_42 , var_1_8)) , var_1_4)) + var_1_28))))) && (((min (last_1_var_1_32 , (last_1_var_1_27 + var_1_8))) >= var_1_10) ? (var_1_29 == ((unsigned long int) (4145023310u - var_1_8))) : (var_1_29 == ((unsigned long int) (min (last_1_var_1_1 , last_1_var_1_27)))))) && (((var_1_27 * (var_1_7 - var_1_28)) < (var_1_8 << var_1_24)) ? (var_1_30 == ((unsigned short int) (var_1_8 + (max (var_1_4 , (var_1_31 - var_1_32)))))) : (var_1_30 == ((unsigned short int) 1000)))) && ((var_1_31 <= (- (var_1_6 * 10))) ? ((var_1_9 > var_1_18) ? (var_1_2 ? (var_1_32 == ((signed short int) ((var_1_64 + (var_1_4 + var_1_33)) - (max (var_1_34 , var_1_35))))) : (var_1_32 == ((signed short int) (var_1_4 - (min ((abs (last_1_var_1_32)) , (var_1_36 - var_1_64))))))) : (var_1_32 == ((signed short int) var_1_64))) : (var_1_32 == ((signed short int) var_1_24)))) && ((var_1_2 && (var_1_20 > var_1_16)) ? (((var_1_33 == (var_1_36 - var_1_31)) && (var_1_58 > var_1_21)) ? (var_1_37 == ((signed short int) ((var_1_33 - (min (64 , 0))) + var_1_4))) : 1) : 1)) && ((var_1_64 <= var_1_7) ? (var_1_38 == ((signed char) ((max (var_1_39 , var_1_40)) - var_1_41))) : (var_1_2 ? (var_1_38 == ((signed char) (max (var_1_25 , var_1_40)))) : (var_1_38 == ((signed char) (max (var_1_41 , var_1_40))))))) && ((((min (var_1_43 , var_1_44)) - var_1_4) != var_1_35) ? (var_1_42 == ((signed short int) (var_1_43 + (var_1_33 - (max (var_1_4 , var_1_1)))))) : (var_1_42 == ((signed short int) (((min (var_1_41 , 5)) + var_1_40) + 128))))) && (var_1_2 ? (var_1_45 == ((unsigned short int) ((var_1_31 + (max (21405 , var_1_46))) - var_1_4))) : 1)) && ((((min (var_1_30 , var_1_64)) / var_1_31) >= ((var_1_30 / var_1_36) & (var_1_10 - 256))) ? (var_1_47 == ((float) (min (var_1_15 , var_1_16)))) : (var_1_47 == ((float) (var_1_22 - var_1_20))))) && ((last_1_var_1_64 >= last_1_var_1_48) ? (var_1_2 ? (var_1_48 == ((unsigned long int) (max ((var_1_49 + var_1_4) , (last_1_var_1_64 + var_1_31))))) : 1) : ((var_1_50 && var_1_51) ? (((min (last_1_var_1_64 , var_1_25)) > (min (-100000000 , (last_1_var_1_23 * last_1_var_1_26)))) ? (var_1_48 == ((unsigned long int) (abs (var_1_52)))) : 1) : 1))) && (var_1_2 ? (var_1_53 == ((signed char) (min (var_1_40 , ((8 - var_1_54) + (min (var_1_25 , var_1_24))))))) : ((var_1_64 < var_1_48) ? (var_1_53 == ((signed char) ((min (var_1_24 , (var_1_54 - var_1_56))) + var_1_25))) : 1))) && ((var_1_7 != last_1_var_1_57) ? (var_1_57 == ((unsigned long int) (max (50u , var_1_46)))) : 1)) && (((var_1_63 * 9.7f) <= (max (var_1_16 , (- var_1_21)))) ? ((var_1_64 != 256u) ? (var_1_58 == ((double) (max (var_1_19 , var_1_14)))) : 1) : ((var_1_50 && var_1_2) ? (var_1_58 == ((double) (((var_1_59 - var_1_60) + var_1_17) + var_1_16))) : ((var_1_41 > ((abs (var_1_54)) << var_1_27)) ? (var_1_58 == ((double) var_1_22)) : (var_1_58 == ((double) (var_1_59 - var_1_21))))))) && ((var_1_57 == var_1_29) ? (var_1_61 == ((unsigned long int) (var_1_44 + (var_1_62 - var_1_41)))) : (var_1_61 == ((unsigned long int) (min ((32u + var_1_49) , var_1_31)))))) && ((((63.4f + var_1_18) != var_1_60) && var_1_51) ? ((var_1_44 > var_1_7) ? (((var_1_29 / var_1_46) > ((32u % var_1_7) * var_1_6)) ? (var_1_63 == ((double) ((var_1_17 + var_1_59) + var_1_60))) : (var_1_63 == ((double) var_1_59))) : (var_1_63 == ((double) var_1_17))) : 1)) && ((var_1_57 < var_1_33) ? (var_1_64 == ((unsigned long int) var_1_8)) : (((last_1_var_1_64 * var_1_48) >= (- (var_1_62 * var_1_44))) ? (var_1_64 == ((unsigned long int) var_1_48)) : (var_1_64 == ((unsigned long int) var_1_43))))
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

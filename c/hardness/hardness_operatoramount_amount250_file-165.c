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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = 4;
double var_1_2 = 3.5;
double var_1_3 = 9.25;
double var_1_4 = 99.5;
signed short int var_1_5 = 64;
signed short int var_1_6 = 50;
signed short int var_1_9 = 8;
signed short int var_1_10 = 50;
unsigned char var_1_11 = 1;
signed short int var_1_12 = -25;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned long int var_1_16 = 64;
unsigned long int var_1_18 = 4;
signed char var_1_19 = 4;
signed char var_1_20 = 10;
signed char var_1_21 = 5;
signed char var_1_22 = 5;
unsigned short int var_1_23 = 4;
unsigned short int var_1_24 = 1;
unsigned short int var_1_25 = 64;
unsigned short int var_1_26 = 40221;
double var_1_27 = 1.248;
double var_1_28 = 0.0;
double var_1_29 = 1.4;
double var_1_30 = 256.5;
unsigned long int var_1_31 = 2568241444;
float var_1_32 = 5.875;
float var_1_33 = 9.8;
float var_1_34 = -0.75;
signed char var_1_35 = -8;
signed char var_1_37 = 1;
signed char var_1_38 = 5;
unsigned short int var_1_39 = 32;
unsigned short int var_1_41 = 62708;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 16;
signed char var_1_46 = 16;
double var_1_47 = 8.625;
double var_1_48 = 4.5;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 100;
unsigned char var_1_51 = 2;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 10;
unsigned char var_1_54 = 200;
float var_1_55 = 50.25;
float var_1_56 = 1.25;
unsigned short int var_1_57 = 8;
unsigned short int var_1_58 = 19950;
unsigned short int var_1_59 = 10000;
unsigned char var_1_60 = 1;
unsigned long int var_1_61 = 2;
unsigned short int var_1_62 = 32;
unsigned long int var_1_63 = 3303275160;
signed long int var_1_65 = 128;
signed long int var_1_66 = 4;
unsigned long int var_1_67 = 16;
float var_1_68 = 16.75;
signed char var_1_69 = 64;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 4;
unsigned long int last_1_var_1_16 = 64;
unsigned short int last_1_var_1_23 = 4;
signed char last_1_var_1_35 = -8;
unsigned char last_1_var_1_52 = 1;
unsigned short int last_1_var_1_57 = 8;
unsigned char last_1_var_1_60 = 1;
unsigned long int last_1_var_1_61 = 2;
unsigned long int last_1_var_1_67 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch165Amount250
	if ((500u + 32u) <= (last_1_var_1_61 + (var_1_31 - var_1_38))) {
		if (last_1_var_1_57 >= last_1_var_1_35) {
			var_1_52 = (! var_1_15);
		} else {
			if ((var_1_38 + (last_1_var_1_61 + last_1_var_1_16)) < last_1_var_1_1) {
				if ((var_1_37 - var_1_46) > last_1_var_1_67) {
					var_1_52 = ((last_1_var_1_67 > (last_1_var_1_23 + var_1_49)) || var_1_14);
				} else {
					var_1_52 = (! var_1_43);
				}
			} else {
				var_1_52 = (var_1_44 || (! var_1_43));
			}
		}
	}


	// From: Req18Batch165Amount250
	if (last_1_var_1_60) {
		var_1_65 = var_1_62;
	}


	// From: Req10Batch165Amount250
	if (var_1_14) {
		if (last_1_var_1_16 == (var_1_12 + var_1_38)) {
			var_1_42 = (! var_1_43);
		} else {
			if (var_1_15) {
				var_1_42 = (var_1_43 || (last_1_var_1_52 && var_1_44));
			}
		}
	} else {
		var_1_42 = var_1_44;
	}


	// From: Req2Batch165Amount250
	unsigned char stepLocal_0 = var_1_9 >= var_1_5;
	if ((var_1_10 < (var_1_65 / var_1_12)) || stepLocal_0) {
		var_1_11 = (var_1_13 && ((var_1_42 || var_1_14) && var_1_15));
	}


	// From: Req3Batch165Amount250
	signed short int stepLocal_1 = var_1_9;
	if (stepLocal_1 >= (min (var_1_10 , last_1_var_1_61))) {
		var_1_16 = (min (var_1_10 , var_1_18));
	}


	// From: Req15Batch165Amount250
	signed char stepLocal_14 = var_1_37;
	unsigned long int stepLocal_13 = var_1_16;
	if (var_1_25 > stepLocal_13) {
		var_1_57 = 2;
	} else {
		if ((var_1_51 & (last_1_var_1_57 + var_1_25)) != stepLocal_14) {
			var_1_57 = (var_1_41 - 128);
		} else {
			var_1_57 = ((var_1_58 - (var_1_59 - var_1_25)) + var_1_37);
		}
	}


	// From: Req6Batch165Amount250
	signed long int stepLocal_6 = var_1_12 * var_1_10;
	unsigned long int stepLocal_5 = var_1_18;
	if (var_1_6 < stepLocal_6) {
		var_1_27 = ((var_1_28 - 64.6) - (var_1_29 + (var_1_30 + 16.875)));
	} else {
		if (((var_1_26 + var_1_10) / (var_1_31 - 50u)) >= stepLocal_5) {
			var_1_27 = var_1_30;
		} else {
			var_1_27 = var_1_28;
		}
	}


	// From: Req7Batch165Amount250
	if (var_1_52) {
		var_1_32 = (max ((max (var_1_30 , var_1_29)) , (var_1_33 + var_1_34)));
	} else {
		var_1_32 = (max ((min (var_1_28 , var_1_29)) , var_1_33));
	}


	// From: Req13Batch165Amount250
	signed long int stepLocal_12 = abs (var_1_51);
	if (((min (var_1_24 , var_1_12)) % var_1_49) < stepLocal_12) {
		var_1_53 = (abs ((max (var_1_49 , var_1_54)) - var_1_50));
	} else {
		var_1_53 = (var_1_49 - (min ((1 + var_1_46) , var_1_51)));
	}


	// From: Req14Batch165Amount250
	if (var_1_43) {
		if (10.2 >= var_1_28) {
			var_1_55 = (var_1_29 - var_1_30);
		} else {
			if (var_1_52) {
				var_1_55 = (abs (var_1_28));
			}
		}
	} else {
		var_1_55 = ((var_1_56 - var_1_30) + var_1_29);
	}


	// From: Req19Batch165Amount250
	var_1_66 = var_1_37;


	// From: Req21Batch165Amount250
	var_1_68 = (var_1_30 + var_1_33);


	// From: Req1Batch165Amount250
	if ((var_1_2 - 63.5) >= (min (var_1_3 , var_1_4))) {
		var_1_1 = (var_1_5 + (var_1_6 + 100));
	} else {
		if (var_1_52 && var_1_11) {
			var_1_1 = (var_1_9 - var_1_10);
		}
	}


	// From: Req16Batch165Amount250
	if ((var_1_6 > (var_1_65 & var_1_57)) || var_1_42) {
		var_1_60 = (var_1_13 && (var_1_15 || var_1_14));
	} else {
		var_1_60 = (var_1_42 && var_1_44);
	}


	// From: Req20Batch165Amount250
	if (var_1_60) {
		var_1_67 = var_1_50;
	} else {
		var_1_67 = var_1_16;
	}


	// From: Req8Batch165Amount250
	signed short int stepLocal_9 = var_1_12;
	unsigned long int stepLocal_8 = 5u;
	unsigned short int stepLocal_7 = var_1_26;
	if (stepLocal_8 > (min (var_1_25 , var_1_67))) {
		var_1_35 = ((var_1_37 - var_1_38) + var_1_22);
	} else {
		if (var_1_16 > stepLocal_7) {
			var_1_35 = ((max (var_1_38 , var_1_22)) + var_1_20);
		} else {
			if (stepLocal_9 <= var_1_21) {
				var_1_35 = var_1_21;
			} else {
				var_1_35 = var_1_22;
			}
		}
	}


	// From: Req9Batch165Amount250
	signed long int stepLocal_10 = var_1_66;
	if ((var_1_24 / var_1_26) < stepLocal_10) {
		var_1_39 = ((min (var_1_26 , var_1_41)) - (abs (var_1_24)));
	}


	// From: Req22Batch165Amount250
	if (var_1_50 > (max ((min (var_1_25 , var_1_1)) , var_1_24))) {
		if ((var_1_31 - var_1_26) <= var_1_16) {
			if (var_1_11) {
				var_1_69 = var_1_20;
			}
		} else {
			var_1_69 = var_1_38;
		}
	} else {
		var_1_69 = var_1_20;
	}


	// From: Req17Batch165Amount250
	if (var_1_42) {
		if (var_1_14) {
			var_1_61 = var_1_24;
		} else {
			var_1_61 = (min (var_1_18 , var_1_49));
		}
	} else {
		if (((var_1_30 - var_1_29) >= var_1_27) || (var_1_49 > var_1_46)) {
			if (var_1_65 >= (last_1_var_1_61 / (max (var_1_62 , 64)))) {
				var_1_61 = (max (var_1_58 , var_1_66));
			} else {
				var_1_61 = (var_1_63 - var_1_66);
			}
		} else {
			if (! (var_1_5 < var_1_65)) {
				if (var_1_66 <= var_1_25) {
					if ((var_1_39 * var_1_26) != var_1_20) {
						var_1_61 = (max ((max (25u , var_1_59)) , var_1_63));
					} else {
						var_1_61 = ((min (var_1_26 , var_1_38)) + var_1_66);
					}
				} else {
					var_1_61 = var_1_18;
				}
			} else {
				var_1_61 = (var_1_39 + (min (var_1_50 , var_1_38)));
			}
		}
	}


	// From: Req5Batch165Amount250
	signed long int stepLocal_4 = min (var_1_5 , var_1_12);
	unsigned short int stepLocal_3 = var_1_24;
	if (4 <= stepLocal_4) {
		var_1_23 = ((16 + (var_1_24 + var_1_25)) + 1);
	} else {
		if (stepLocal_3 <= var_1_61) {
			var_1_23 = 5;
		} else {
			var_1_23 = (var_1_26 - var_1_10);
		}
	}


	// From: Req4Batch165Amount250
	unsigned char stepLocal_2 = (var_1_12 > var_1_6) && var_1_42;
	if (((-10000000 < var_1_10) && (var_1_66 <= var_1_23)) && stepLocal_2) {
		var_1_19 = (var_1_20 + (min (var_1_21 , var_1_22)));
	}


	// From: Req11Batch165Amount250
	unsigned long int stepLocal_11 = var_1_61;
	if (((min (var_1_24 , var_1_37)) >> var_1_46) <= stepLocal_11) {
		if ((max ((var_1_3 / 99.8f) , var_1_4)) > var_1_47) {
			if (var_1_4 > var_1_48) {
				if (var_1_52) {
					var_1_45 = var_1_37;
				} else {
					var_1_45 = (var_1_49 - var_1_46);
				}
			} else {
				var_1_45 = (var_1_49 - var_1_46);
			}
		} else {
			var_1_45 = ((var_1_46 + var_1_37) + (var_1_50 - (32 - var_1_51)));
		}
	} else {
		var_1_45 = (min (var_1_49 , (max (var_1_38 , var_1_46))));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -8191);
	assume_abort_if_not(var_1_6 <= 8192);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 8192);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 8191);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 4611686.018427383000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 32767);
	assume_abort_if_not(var_1_41 <= 65534);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 30);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 127);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 63);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 31);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 16383);
	assume_abort_if_not(var_1_58 <= 32767);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 8191);
	assume_abort_if_not(var_1_59 <= 16383);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 65535);
	assume_abort_if_not(var_1_62 != 0);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 2147483647);
	assume_abort_if_not(var_1_63 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_67 = var_1_67;
}

int property(void) {
	return (((((((((((((((((((((((var_1_2 - 63.5) >= (min (var_1_3 , var_1_4))) ? (var_1_1 == ((signed short int) (var_1_5 + (var_1_6 + 100)))) : ((var_1_52 && var_1_11) ? (var_1_1 == ((signed short int) (var_1_9 - var_1_10))) : 1)) && (((var_1_10 < (var_1_65 / var_1_12)) || (var_1_9 >= var_1_5)) ? (var_1_11 == ((unsigned char) (var_1_13 && ((var_1_42 || var_1_14) && var_1_15)))) : 1)) && ((var_1_9 >= (min (var_1_10 , last_1_var_1_61))) ? (var_1_16 == ((unsigned long int) (min (var_1_10 , var_1_18)))) : 1)) && ((((-10000000 < var_1_10) && (var_1_66 <= var_1_23)) && ((var_1_12 > var_1_6) && var_1_42)) ? (var_1_19 == ((signed char) (var_1_20 + (min (var_1_21 , var_1_22))))) : 1)) && ((4 <= (min (var_1_5 , var_1_12))) ? (var_1_23 == ((unsigned short int) ((16 + (var_1_24 + var_1_25)) + 1))) : ((var_1_24 <= var_1_61) ? (var_1_23 == ((unsigned short int) 5)) : (var_1_23 == ((unsigned short int) (var_1_26 - var_1_10)))))) && ((var_1_6 < (var_1_12 * var_1_10)) ? (var_1_27 == ((double) ((var_1_28 - 64.6) - (var_1_29 + (var_1_30 + 16.875))))) : ((((var_1_26 + var_1_10) / (var_1_31 - 50u)) >= var_1_18) ? (var_1_27 == ((double) var_1_30)) : (var_1_27 == ((double) var_1_28))))) && (var_1_52 ? (var_1_32 == ((float) (max ((max (var_1_30 , var_1_29)) , (var_1_33 + var_1_34))))) : (var_1_32 == ((float) (max ((min (var_1_28 , var_1_29)) , var_1_33)))))) && ((5u > (min (var_1_25 , var_1_67))) ? (var_1_35 == ((signed char) ((var_1_37 - var_1_38) + var_1_22))) : ((var_1_16 > var_1_26) ? (var_1_35 == ((signed char) ((max (var_1_38 , var_1_22)) + var_1_20))) : ((var_1_12 <= var_1_21) ? (var_1_35 == ((signed char) var_1_21)) : (var_1_35 == ((signed char) var_1_22)))))) && (((var_1_24 / var_1_26) < var_1_66) ? (var_1_39 == ((unsigned short int) ((min (var_1_26 , var_1_41)) - (abs (var_1_24))))) : 1)) && (var_1_14 ? ((last_1_var_1_16 == (var_1_12 + var_1_38)) ? (var_1_42 == ((unsigned char) (! var_1_43))) : (var_1_15 ? (var_1_42 == ((unsigned char) (var_1_43 || (last_1_var_1_52 && var_1_44)))) : 1)) : (var_1_42 == ((unsigned char) var_1_44)))) && ((((min (var_1_24 , var_1_37)) >> var_1_46) <= var_1_61) ? (((max ((var_1_3 / 99.8f) , var_1_4)) > var_1_47) ? ((var_1_4 > var_1_48) ? (var_1_52 ? (var_1_45 == ((unsigned char) var_1_37)) : (var_1_45 == ((unsigned char) (var_1_49 - var_1_46)))) : (var_1_45 == ((unsigned char) (var_1_49 - var_1_46)))) : (var_1_45 == ((unsigned char) ((var_1_46 + var_1_37) + (var_1_50 - (32 - var_1_51)))))) : (var_1_45 == ((unsigned char) (min (var_1_49 , (max (var_1_38 , var_1_46)))))))) && (((500u + 32u) <= (last_1_var_1_61 + (var_1_31 - var_1_38))) ? ((last_1_var_1_57 >= last_1_var_1_35) ? (var_1_52 == ((unsigned char) (! var_1_15))) : (((var_1_38 + (last_1_var_1_61 + last_1_var_1_16)) < last_1_var_1_1) ? (((var_1_37 - var_1_46) > last_1_var_1_67) ? (var_1_52 == ((unsigned char) ((last_1_var_1_67 > (last_1_var_1_23 + var_1_49)) || var_1_14))) : (var_1_52 == ((unsigned char) (! var_1_43)))) : (var_1_52 == ((unsigned char) (var_1_44 || (! var_1_43)))))) : 1)) && ((((min (var_1_24 , var_1_12)) % var_1_49) < (abs (var_1_51))) ? (var_1_53 == ((unsigned char) (abs ((max (var_1_49 , var_1_54)) - var_1_50)))) : (var_1_53 == ((unsigned char) (var_1_49 - (min ((1 + var_1_46) , var_1_51))))))) && (var_1_43 ? ((10.2 >= var_1_28) ? (var_1_55 == ((float) (var_1_29 - var_1_30))) : (var_1_52 ? (var_1_55 == ((float) (abs (var_1_28)))) : 1)) : (var_1_55 == ((float) ((var_1_56 - var_1_30) + var_1_29))))) && ((var_1_25 > var_1_16) ? (var_1_57 == ((unsigned short int) 2)) : (((var_1_51 & (last_1_var_1_57 + var_1_25)) != var_1_37) ? (var_1_57 == ((unsigned short int) (var_1_41 - 128))) : (var_1_57 == ((unsigned short int) ((var_1_58 - (var_1_59 - var_1_25)) + var_1_37)))))) && (((var_1_6 > (var_1_65 & var_1_57)) || var_1_42) ? (var_1_60 == ((unsigned char) (var_1_13 && (var_1_15 || var_1_14)))) : (var_1_60 == ((unsigned char) (var_1_42 && var_1_44))))) && (var_1_42 ? (var_1_14 ? (var_1_61 == ((unsigned long int) var_1_24)) : (var_1_61 == ((unsigned long int) (min (var_1_18 , var_1_49))))) : ((((var_1_30 - var_1_29) >= var_1_27) || (var_1_49 > var_1_46)) ? ((var_1_65 >= (last_1_var_1_61 / (max (var_1_62 , 64)))) ? (var_1_61 == ((unsigned long int) (max (var_1_58 , var_1_66)))) : (var_1_61 == ((unsigned long int) (var_1_63 - var_1_66)))) : ((! (var_1_5 < var_1_65)) ? ((var_1_66 <= var_1_25) ? (((var_1_39 * var_1_26) != var_1_20) ? (var_1_61 == ((unsigned long int) (max ((max (25u , var_1_59)) , var_1_63)))) : (var_1_61 == ((unsigned long int) ((min (var_1_26 , var_1_38)) + var_1_66)))) : (var_1_61 == ((unsigned long int) var_1_18))) : (var_1_61 == ((unsigned long int) (var_1_39 + (min (var_1_50 , var_1_38))))))))) && (last_1_var_1_60 ? (var_1_65 == ((signed long int) var_1_62)) : 1)) && (var_1_66 == ((signed long int) var_1_37))) && (var_1_60 ? (var_1_67 == ((unsigned long int) var_1_50)) : (var_1_67 == ((unsigned long int) var_1_16)))) && (var_1_68 == ((float) (var_1_30 + var_1_33)))) && ((var_1_50 > (max ((min (var_1_25 , var_1_1)) , var_1_24))) ? (((var_1_31 - var_1_26) <= var_1_16) ? (var_1_11 ? (var_1_69 == ((signed char) var_1_20)) : 1) : (var_1_69 == ((signed char) var_1_38))) : (var_1_69 == ((signed char) var_1_20)))
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

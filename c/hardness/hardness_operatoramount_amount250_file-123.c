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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = -32;
signed short int var_1_4 = -128;
signed short int var_1_5 = -50;
unsigned long int var_1_7 = 5;
signed short int var_1_9 = -8;
signed short int var_1_11 = 4;
signed short int var_1_12 = 32;
signed short int var_1_13 = 0;
signed short int var_1_14 = 32;
double var_1_15 = 100.5;
double var_1_16 = 255.875;
signed long int var_1_17 = 8;
signed long int var_1_19 = 1843694510;
signed long int var_1_20 = 2;
signed long int var_1_21 = 1000000000;
signed long int var_1_22 = 8;
signed long int var_1_23 = 2;
signed short int var_1_24 = -2;
float var_1_25 = 10.8;
float var_1_26 = -0.125;
float var_1_27 = 16.75;
double var_1_28 = 4.2;
double var_1_29 = 8.5;
double var_1_30 = 256.5;
double var_1_31 = 9.9;
signed short int var_1_32 = -8;
signed short int var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
signed long int var_1_39 = -100;
unsigned short int var_1_40 = 8;
unsigned char var_1_41 = 1;
unsigned short int var_1_42 = 5;
unsigned long int var_1_43 = 3842291051;
unsigned short int var_1_44 = 16;
signed long int var_1_45 = -2;
unsigned long int var_1_46 = 10;
unsigned long int var_1_47 = 1790946263;
signed short int var_1_48 = 2;
signed short int var_1_49 = 4;
signed short int var_1_50 = 10000;
signed short int var_1_51 = 10000;
signed short int var_1_52 = 4;
float var_1_53 = 64.2;
double var_1_54 = 0.0;
double var_1_55 = 1000.25;
double var_1_56 = 0.0;
double var_1_57 = 499.363;
unsigned char var_1_58 = 8;
unsigned char var_1_59 = 32;
unsigned char var_1_60 = 8;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 64;
unsigned char var_1_64 = 128;
unsigned char var_1_65 = 2;
unsigned char var_1_66 = 25;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 100;
unsigned char var_1_69 = 4;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 1;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -32;
signed short int last_1_var_1_24 = -2;
unsigned char last_1_var_1_34 = 0;
unsigned char last_1_var_1_38 = 1;
signed long int last_1_var_1_39 = -100;
unsigned short int last_1_var_1_42 = 5;
unsigned long int last_1_var_1_46 = 10;
signed short int last_1_var_1_48 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch123Amount250
	if (! last_1_var_1_38) {
		var_1_41 = (var_1_36 || var_1_37);
	} else {
		var_1_41 = (! ((last_1_var_1_48 > var_1_12) && var_1_36));
	}


	// From: Req1Batch123Amount250
	unsigned long int stepLocal_3 = last_1_var_1_39 % var_1_7;
	unsigned char stepLocal_2 = (last_1_var_1_39 / var_1_4) > var_1_5;
	signed short int stepLocal_1 = var_1_4;
	signed long int stepLocal_0 = last_1_var_1_39;
	if (((last_1_var_1_1 + last_1_var_1_24) / (max (var_1_4 , var_1_5))) <= stepLocal_0) {
		if (stepLocal_3 <= last_1_var_1_46) {
			var_1_1 = var_1_9;
		}
	} else {
		if (last_1_var_1_24 >= stepLocal_1) {
			if (stepLocal_2 && last_1_var_1_38) {
				var_1_1 = (abs (var_1_11));
			} else {
				var_1_1 = (var_1_12 - (var_1_13 + var_1_14));
			}
		} else {
			var_1_1 = (max ((max (-8 , var_1_9)) , (var_1_13 + var_1_14)));
		}
	}


	// From: Req11Batch123Amount250
	unsigned long int stepLocal_11 = last_1_var_1_46;
	signed long int stepLocal_10 = last_1_var_1_42;
	if (last_1_var_1_34) {
		if (stepLocal_11 >= var_1_14) {
			if (stepLocal_10 >= last_1_var_1_46) {
				var_1_40 = (var_1_33 + 32);
			}
		}
	} else {
		var_1_40 = (var_1_33 + 25);
	}


	// From: Req4Batch123Amount250
	signed long int stepLocal_7 = var_1_20;
	if (stepLocal_7 >= last_1_var_1_24) {
		var_1_24 = (var_1_14 + var_1_13);
	} else {
		var_1_24 = (min ((max (var_1_9 , var_1_11)) , var_1_14));
	}


	// From: Req5Batch123Amount250
	if (var_1_9 < var_1_40) {
		var_1_25 = (var_1_26 + var_1_27);
	}


	// From: Req13Batch123Amount250
	signed short int stepLocal_14 = var_1_5;
	signed short int stepLocal_13 = var_1_11;
	unsigned long int stepLocal_12 = (var_1_43 - var_1_23) / 16u;
	if ((var_1_22 * (var_1_7 * var_1_14)) <= stepLocal_12) {
		if (var_1_22 < stepLocal_13) {
			var_1_42 = (abs (var_1_13));
		} else {
			if (var_1_12 == stepLocal_14) {
				var_1_42 = var_1_44;
			}
		}
	} else {
		var_1_42 = (min (var_1_14 , var_1_13));
	}


	// From: Req21Batch123Amount250
	signed long int stepLocal_24 = var_1_22;
	if (! (! (4.811 > var_1_56))) {
		if (var_1_7 < stepLocal_24) {
			var_1_74 = var_1_36;
		} else {
			var_1_74 = var_1_37;
		}
	}


	// From: Req2Batch123Amount250
	unsigned short int stepLocal_4 = var_1_40;
	if (var_1_1 > stepLocal_4) {
		var_1_15 = var_1_16;
	}


	// From: Req14Batch123Amount250
	if (var_1_29 <= var_1_15) {
		if (var_1_14 >= var_1_21) {
			var_1_45 = (min (var_1_44 , var_1_5));
		} else {
			var_1_45 = ((max (var_1_13 , -50)) + (max (var_1_1 , (var_1_40 + var_1_12))));
		}
	}


	// From: Req20Batch123Amount250
	signed long int stepLocal_23 = var_1_69 - 16;
	if (var_1_45 > stepLocal_23) {
		var_1_73 = var_1_37;
	}


	// From: Req10Batch123Amount250
	if (var_1_42 < var_1_4) {
		if (var_1_22 <= var_1_42) {
			var_1_39 = var_1_33;
		} else {
			var_1_39 = ((var_1_14 + var_1_33) - (min ((var_1_21 + var_1_13) , var_1_23)));
		}
	} else {
		var_1_39 = ((max (var_1_13 , (var_1_23 + 128))) - var_1_22);
	}


	// From: Req17Batch123Amount250
	if (((var_1_54 - var_1_55) - (var_1_56 - var_1_57)) < (var_1_31 * var_1_15)) {
		var_1_53 = (min (var_1_29 , (max ((abs (var_1_27)) , var_1_31))));
	}


	// From: Req16Batch123Amount250
	if (var_1_39 == var_1_4) {
		if (((~ var_1_47) + var_1_39) < var_1_23) {
			var_1_48 = ((var_1_33 + 50) - var_1_13);
		} else {
			var_1_48 = (min ((var_1_14 + (min (var_1_13 , var_1_33))) , (var_1_12 - (var_1_49 + var_1_50))));
		}
	} else {
		if (var_1_41) {
			var_1_48 = (var_1_13 - (50 + (var_1_51 - var_1_52)));
		}
	}


	// From: Req8Batch123Amount250
	if (! var_1_73) {
		var_1_34 = (! (! var_1_35));
	} else {
		var_1_34 = ((! 1) || (var_1_36 || var_1_37));
	}


	// From: Req9Batch123Amount250
	signed short int stepLocal_9 = var_1_33;
	if (((var_1_14 << var_1_22) / var_1_7) >= stepLocal_9) {
		var_1_38 = (! (! var_1_37));
	} else {
		var_1_38 = (var_1_34 || var_1_35);
	}


	// From: Req15Batch123Amount250
	unsigned long int stepLocal_16 = 4u;
	signed long int stepLocal_15 = var_1_23;
	if (stepLocal_15 < var_1_13) {
		var_1_46 = (4u + (var_1_33 + var_1_40));
	} else {
		if ((256u << var_1_39) > stepLocal_16) {
			var_1_46 = var_1_20;
		} else {
			var_1_46 = ((var_1_47 - (min (var_1_40 , var_1_13))) + (min (var_1_22 , (var_1_42 + var_1_33))));
		}
	}


	// From: Req7Batch123Amount250
	signed long int stepLocal_8 = var_1_39 + var_1_19;
	if (stepLocal_8 == (var_1_23 - var_1_13)) {
		var_1_32 = (var_1_14 + var_1_13);
	} else {
		var_1_32 = (var_1_13 - (var_1_14 + (max (var_1_33 , 10))));
	}


	// From: Req18Batch123Amount250
	signed long int stepLocal_21 = var_1_19;
	unsigned long int stepLocal_20 = (var_1_45 + var_1_46) ^ (10u + var_1_44);
	unsigned char stepLocal_19 = var_1_36;
	signed short int stepLocal_18 = var_1_12;
	unsigned char stepLocal_17 = var_1_27 >= (var_1_53 * var_1_54);
	if (var_1_26 > var_1_53) {
		if (var_1_38 && stepLocal_17) {
			var_1_58 = var_1_59;
		} else {
			var_1_58 = (var_1_60 + (abs (1)));
		}
	} else {
		if (stepLocal_18 < (var_1_33 * var_1_1)) {
			if (var_1_37 && stepLocal_19) {
				if ((var_1_14 * (- var_1_47)) >= stepLocal_20) {
					var_1_58 = (var_1_60 + (min (var_1_62 , (var_1_63 - 8))));
				} else {
					var_1_58 = (var_1_64 - (var_1_65 + (max (var_1_66 , var_1_67))));
				}
			} else {
				var_1_58 = (var_1_65 + ((var_1_68 - var_1_69) - var_1_66));
			}
		} else {
			if (var_1_66 <= stepLocal_21) {
				var_1_58 = (max (var_1_62 , var_1_70));
			} else {
				var_1_58 = (var_1_69 + ((min (var_1_67 , var_1_66)) + var_1_71));
			}
		}
	}


	// From: Req19Batch123Amount250
	unsigned char stepLocal_22 = var_1_34;
	if (stepLocal_22 && var_1_38) {
		var_1_72 = var_1_36;
	}


	// From: Req3Batch123Amount250
	signed long int stepLocal_6 = var_1_9 * (var_1_5 ^ var_1_40);
	unsigned char stepLocal_5 = var_1_72;
	if (stepLocal_5 && var_1_73) {
		if (stepLocal_6 < var_1_46) {
			var_1_17 = ((min (var_1_13 , (var_1_19 - var_1_14))) - var_1_20);
		} else {
			var_1_17 = (((var_1_21 - var_1_13) + var_1_14) - (max ((var_1_22 + var_1_23) , var_1_19)));
		}
	}


	// From: Req6Batch123Amount250
	if (var_1_14 > var_1_48) {
		var_1_28 = (var_1_29 - var_1_30);
	} else {
		if (var_1_34 && var_1_72) {
			var_1_28 = (var_1_31 + (max (var_1_26 , var_1_27)));
		} else {
			var_1_28 = (var_1_29 - var_1_30);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967295);
	assume_abort_if_not(var_1_7 != 0);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32766);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 1073741822);
	assume_abort_if_not(var_1_19 <= 2147483646);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 536870911);
	assume_abort_if_not(var_1_21 <= 1073741823);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1073741823);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1073741823);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 16383);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967295);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 65534);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 1073741823);
	assume_abort_if_not(var_1_47 <= 2147483647);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 16383);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 16383);
	var_1_51 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_51 >= 8191);
	assume_abort_if_not(var_1_51 <= 16383);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 8191);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 4611686.018427388000e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427388000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 4611686.018427388000e+12F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427388000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 254);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 127);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 63);
	assume_abort_if_not(var_1_63 <= 127);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 127);
	assume_abort_if_not(var_1_64 <= 254);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 64);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 63);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 63);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 95);
	assume_abort_if_not(var_1_68 <= 127);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 32);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 254);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
}

int property(void) {
	return (((((((((((((((((((((((last_1_var_1_1 + last_1_var_1_24) / (max (var_1_4 , var_1_5))) <= last_1_var_1_39) ? (((last_1_var_1_39 % var_1_7) <= last_1_var_1_46) ? (var_1_1 == ((signed short int) var_1_9)) : 1) : ((last_1_var_1_24 >= var_1_4) ? ((((last_1_var_1_39 / var_1_4) > var_1_5) && last_1_var_1_38) ? (var_1_1 == ((signed short int) (abs (var_1_11)))) : (var_1_1 == ((signed short int) (var_1_12 - (var_1_13 + var_1_14))))) : (var_1_1 == ((signed short int) (max ((max (-8 , var_1_9)) , (var_1_13 + var_1_14))))))) && ((var_1_1 > var_1_40) ? (var_1_15 == ((double) var_1_16)) : 1)) && ((var_1_72 && var_1_73) ? (((var_1_9 * (var_1_5 ^ var_1_40)) < var_1_46) ? (var_1_17 == ((signed long int) ((min (var_1_13 , (var_1_19 - var_1_14))) - var_1_20))) : (var_1_17 == ((signed long int) (((var_1_21 - var_1_13) + var_1_14) - (max ((var_1_22 + var_1_23) , var_1_19)))))) : 1)) && ((var_1_20 >= last_1_var_1_24) ? (var_1_24 == ((signed short int) (var_1_14 + var_1_13))) : (var_1_24 == ((signed short int) (min ((max (var_1_9 , var_1_11)) , var_1_14)))))) && ((var_1_9 < var_1_40) ? (var_1_25 == ((float) (var_1_26 + var_1_27))) : 1)) && ((var_1_14 > var_1_48) ? (var_1_28 == ((double) (var_1_29 - var_1_30))) : ((var_1_34 && var_1_72) ? (var_1_28 == ((double) (var_1_31 + (max (var_1_26 , var_1_27))))) : (var_1_28 == ((double) (var_1_29 - var_1_30)))))) && (((var_1_39 + var_1_19) == (var_1_23 - var_1_13)) ? (var_1_32 == ((signed short int) (var_1_14 + var_1_13))) : (var_1_32 == ((signed short int) (var_1_13 - (var_1_14 + (max (var_1_33 , 10)))))))) && ((! var_1_73) ? (var_1_34 == ((unsigned char) (! (! var_1_35)))) : (var_1_34 == ((unsigned char) ((! 1) || (var_1_36 || var_1_37)))))) && ((((var_1_14 << var_1_22) / var_1_7) >= var_1_33) ? (var_1_38 == ((unsigned char) (! (! var_1_37)))) : (var_1_38 == ((unsigned char) (var_1_34 || var_1_35))))) && ((var_1_42 < var_1_4) ? ((var_1_22 <= var_1_42) ? (var_1_39 == ((signed long int) var_1_33)) : (var_1_39 == ((signed long int) ((var_1_14 + var_1_33) - (min ((var_1_21 + var_1_13) , var_1_23)))))) : (var_1_39 == ((signed long int) ((max (var_1_13 , (var_1_23 + 128))) - var_1_22))))) && (last_1_var_1_34 ? ((last_1_var_1_46 >= var_1_14) ? ((last_1_var_1_42 >= last_1_var_1_46) ? (var_1_40 == ((unsigned short int) (var_1_33 + 32))) : 1) : 1) : (var_1_40 == ((unsigned short int) (var_1_33 + 25))))) && ((! last_1_var_1_38) ? (var_1_41 == ((unsigned char) (var_1_36 || var_1_37))) : (var_1_41 == ((unsigned char) (! ((last_1_var_1_48 > var_1_12) && var_1_36)))))) && (((var_1_22 * (var_1_7 * var_1_14)) <= ((var_1_43 - var_1_23) / 16u)) ? ((var_1_22 < var_1_11) ? (var_1_42 == ((unsigned short int) (abs (var_1_13)))) : ((var_1_12 == var_1_5) ? (var_1_42 == ((unsigned short int) var_1_44)) : 1)) : (var_1_42 == ((unsigned short int) (min (var_1_14 , var_1_13)))))) && ((var_1_29 <= var_1_15) ? ((var_1_14 >= var_1_21) ? (var_1_45 == ((signed long int) (min (var_1_44 , var_1_5)))) : (var_1_45 == ((signed long int) ((max (var_1_13 , -50)) + (max (var_1_1 , (var_1_40 + var_1_12))))))) : 1)) && ((var_1_23 < var_1_13) ? (var_1_46 == ((unsigned long int) (4u + (var_1_33 + var_1_40)))) : (((256u << var_1_39) > 4u) ? (var_1_46 == ((unsigned long int) var_1_20)) : (var_1_46 == ((unsigned long int) ((var_1_47 - (min (var_1_40 , var_1_13))) + (min (var_1_22 , (var_1_42 + var_1_33))))))))) && ((var_1_39 == var_1_4) ? ((((~ var_1_47) + var_1_39) < var_1_23) ? (var_1_48 == ((signed short int) ((var_1_33 + 50) - var_1_13))) : (var_1_48 == ((signed short int) (min ((var_1_14 + (min (var_1_13 , var_1_33))) , (var_1_12 - (var_1_49 + var_1_50))))))) : (var_1_41 ? (var_1_48 == ((signed short int) (var_1_13 - (50 + (var_1_51 - var_1_52))))) : 1))) && ((((var_1_54 - var_1_55) - (var_1_56 - var_1_57)) < (var_1_31 * var_1_15)) ? (var_1_53 == ((float) (min (var_1_29 , (max ((abs (var_1_27)) , var_1_31)))))) : 1)) && ((var_1_26 > var_1_53) ? ((var_1_38 && (var_1_27 >= (var_1_53 * var_1_54))) ? (var_1_58 == ((unsigned char) var_1_59)) : (var_1_58 == ((unsigned char) (var_1_60 + (abs (1)))))) : ((var_1_12 < (var_1_33 * var_1_1)) ? ((var_1_37 && var_1_36) ? (((var_1_14 * (- var_1_47)) >= ((var_1_45 + var_1_46) ^ (10u + var_1_44))) ? (var_1_58 == ((unsigned char) (var_1_60 + (min (var_1_62 , (var_1_63 - 8)))))) : (var_1_58 == ((unsigned char) (var_1_64 - (var_1_65 + (max (var_1_66 , var_1_67))))))) : (var_1_58 == ((unsigned char) (var_1_65 + ((var_1_68 - var_1_69) - var_1_66))))) : ((var_1_66 <= var_1_19) ? (var_1_58 == ((unsigned char) (max (var_1_62 , var_1_70)))) : (var_1_58 == ((unsigned char) (var_1_69 + ((min (var_1_67 , var_1_66)) + var_1_71)))))))) && ((var_1_34 && var_1_38) ? (var_1_72 == ((unsigned char) var_1_36)) : 1)) && ((var_1_45 > (var_1_69 - 16)) ? (var_1_73 == ((unsigned char) var_1_37)) : 1)) && ((! (! (4.811 > var_1_56))) ? ((var_1_7 < var_1_22) ? (var_1_74 == ((unsigned char) var_1_36)) : (var_1_74 == ((unsigned char) var_1_37))) : 1)
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

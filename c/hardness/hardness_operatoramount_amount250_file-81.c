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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch81Amount250.c", 13, "reach_error"); }
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
signed long int var_1_1 = 128;
double var_1_2 = 64.25;
double var_1_3 = 127.6;
unsigned char var_1_4 = 0;
signed long int var_1_6 = 64;
signed long int var_1_7 = 50;
signed long int var_1_8 = -100;
float var_1_9 = 32.6;
signed long int var_1_10 = 10;
unsigned char var_1_11 = 0;
float var_1_12 = 31.2;
float var_1_13 = 256.4;
signed char var_1_14 = -2;
signed char var_1_15 = 10;
signed char var_1_16 = 8;
double var_1_17 = 50.5;
float var_1_18 = 10.5;
float var_1_19 = 10.75;
float var_1_20 = 64.875;
unsigned short int var_1_21 = 5;
unsigned short int var_1_22 = 26861;
unsigned short int var_1_23 = 4;
unsigned short int var_1_24 = 19569;
unsigned long int var_1_25 = 16;
float var_1_26 = 8.9;
unsigned long int var_1_29 = 1376075280;
float var_1_30 = 1.375;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
signed long int var_1_37 = 10;
unsigned char var_1_38 = 8;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 8;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 128;
unsigned short int var_1_44 = 16;
unsigned short int var_1_45 = 55698;
signed long int var_1_46 = 0;
signed long int var_1_48 = 128;
unsigned char var_1_49 = 32;
unsigned char var_1_50 = 2;
unsigned long int var_1_51 = 2873210763;
unsigned long int var_1_53 = 256;
unsigned long int var_1_54 = 1813289164;
float var_1_55 = 255.4;
float var_1_56 = 1.5;
float var_1_57 = 3.5;
float var_1_58 = 2.8;
float var_1_59 = 7.875;
float var_1_60 = 0.0;
float var_1_61 = 1.3;
float var_1_62 = 3.625;
signed char var_1_63 = 5;
signed long int var_1_64 = 4;
signed char var_1_65 = 0;
signed char var_1_66 = 1;
unsigned short int var_1_67 = 0;
unsigned char var_1_69 = 4;
signed long int var_1_70 = 64;
unsigned char var_1_71 = 128;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 128;
float last_1_var_1_9 = 32.6;
unsigned short int last_1_var_1_21 = 5;
unsigned long int last_1_var_1_25 = 16;
unsigned char last_1_var_1_40 = 8;
signed long int last_1_var_1_46 = 0;
unsigned long int last_1_var_1_53 = 256;
unsigned short int last_1_var_1_67 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch81Amount250
	unsigned long int stepLocal_15 = var_1_51 - last_1_var_1_67;
	unsigned long int stepLocal_14 = var_1_29;
	unsigned long int stepLocal_13 = last_1_var_1_25;
	unsigned char stepLocal_12 = var_1_43;
	unsigned long int stepLocal_11 = last_1_var_1_53;
	if (last_1_var_1_25 <= stepLocal_11) {
		if (-50 < stepLocal_13) {
			var_1_48 = ((-16 + -100) + var_1_38);
		}
	} else {
		if ((abs (last_1_var_1_25)) >= stepLocal_14) {
			if ((10 / (var_1_49 + var_1_50)) >= stepLocal_12) {
				var_1_48 = (max (var_1_42 , var_1_22));
			}
		} else {
			if ((max (var_1_13 , var_1_19)) != (last_1_var_1_9 + var_1_18)) {
				if (stepLocal_15 > (10000u | last_1_var_1_25)) {
					var_1_48 = (min (-32 , var_1_23));
				} else {
					var_1_48 = var_1_23;
				}
			}
		}
	}


	// From: Req6Batch81Amount250
	unsigned long int stepLocal_7 = last_1_var_1_53;
	if (((max (var_1_18 , var_1_20)) - (max (var_1_19 , var_1_26))) > var_1_13) {
		if ((min (last_1_var_1_1 , last_1_var_1_46)) <= stepLocal_7) {
			var_1_25 = ((var_1_29 + 1084769346u) - (abs (max (last_1_var_1_46 , last_1_var_1_67))));
		} else {
			var_1_25 = (abs (3542476099u - 256u));
		}
	}


	// From: Req10Batch81Amount250
	unsigned long int stepLocal_9 = var_1_25;
	if (stepLocal_9 < (5 << last_1_var_1_40)) {
		var_1_40 = (max ((var_1_38 + var_1_39) , (min (var_1_42 , 100))));
	} else {
		var_1_40 = (var_1_43 - var_1_38);
	}


	// From: Req1Batch81Amount250
	signed long int stepLocal_1 = last_1_var_1_46;
	signed long int stepLocal_0 = ~ (abs (4));
	if (! (var_1_2 > var_1_3)) {
		if (stepLocal_0 >= (last_1_var_1_46 ^ (abs (var_1_6)))) {
			if (var_1_6 <= stepLocal_1) {
				var_1_1 = var_1_7;
			}
		} else {
			var_1_1 = (max (var_1_7 , var_1_8));
		}
	}


	// From: Req4Batch81Amount250
	if (var_1_15 != var_1_7) {
		if (var_1_12 <= ((min (var_1_18 , var_1_19)) - var_1_20)) {
			var_1_17 = (abs (16.125));
		}
	}


	// From: Req7Batch81Amount250
	var_1_30 = (max (var_1_13 , var_1_12));


	// From: Req11Batch81Amount250
	unsigned char stepLocal_10 = var_1_39;
	if (-100000 < stepLocal_10) {
		if ((- var_1_17) > var_1_19) {
			var_1_44 = (var_1_45 - var_1_48);
		}
	} else {
		if (var_1_35) {
			var_1_44 = (max (var_1_38 , 5));
		}
	}


	// From: Req19Batch81Amount250
	if (var_1_1 == var_1_25) {
		var_1_70 = (min (-4 , var_1_50));
	}


	// From: Req20Batch81Amount250
	if ((var_1_35 && (! var_1_34)) && (var_1_70 != var_1_64)) {
		var_1_71 = var_1_42;
	}


	// From: Req12Batch81Amount250
	if (var_1_16 == (last_1_var_1_46 + var_1_25)) {
		if (var_1_35) {
			var_1_46 = (min ((var_1_25 - var_1_39) , var_1_70));
		}
	} else {
		var_1_46 = (var_1_24 + var_1_1);
	}


	// From: Req2Batch81Amount250
	signed long int stepLocal_4 = var_1_8 / var_1_10;
	signed long int stepLocal_3 = var_1_6 + (var_1_46 + var_1_10);
	unsigned char stepLocal_2 = var_1_11;
	if (var_1_46 == stepLocal_4) {
		if (! (var_1_70 <= var_1_8)) {
			if (var_1_4 && stepLocal_2) {
				if (var_1_7 > stepLocal_3) {
					var_1_9 = var_1_12;
				} else {
					var_1_9 = var_1_13;
				}
			} else {
				var_1_9 = var_1_13;
			}
		} else {
			var_1_9 = var_1_12;
		}
	} else {
		var_1_9 = var_1_13;
	}


	// From: Req8Batch81Amount250
	unsigned short int stepLocal_8 = var_1_22;
	if (stepLocal_8 <= ((var_1_48 + var_1_1) * var_1_46)) {
		var_1_31 = (var_1_11 || (! (! var_1_32)));
	} else {
		var_1_31 = (((var_1_1 != var_1_23) && (var_1_33 || var_1_34)) || var_1_35);
	}


	// From: Req3Batch81Amount250
	if (((var_1_3 + var_1_2) != var_1_13) && var_1_31) {
		var_1_14 = (var_1_15 + 10);
	} else {
		if (var_1_15 < (var_1_1 * (var_1_6 / var_1_10))) {
			var_1_14 = (var_1_15 + var_1_16);
		} else {
			var_1_14 = var_1_16;
		}
	}


	// From: Req5Batch81Amount250
	unsigned char stepLocal_6 = var_1_18 >= var_1_19;
	signed long int stepLocal_5 = var_1_6 / -8;
	if ((last_1_var_1_21 ^ var_1_8) < stepLocal_5) {
		if (((min (var_1_6 , var_1_10)) < var_1_8) && stepLocal_6) {
			var_1_21 = (((var_1_22 - var_1_23) + var_1_24) - (23515 - 16));
		} else {
			var_1_21 = (var_1_22 + (min (var_1_24 , var_1_23)));
		}
	} else {
		if (var_1_31) {
			var_1_21 = var_1_22;
		}
	}


	// From: Req18Batch81Amount250
	signed long int stepLocal_24 = var_1_48;
	unsigned char stepLocal_23 = var_1_12 < var_1_60;
	if (stepLocal_23 || (var_1_46 < var_1_70)) {
		var_1_69 = (abs (var_1_66));
	} else {
		if (var_1_39 >= stepLocal_24) {
			if (var_1_31) {
				var_1_69 = var_1_38;
			} else {
				var_1_69 = var_1_39;
			}
		} else {
			var_1_69 = var_1_49;
		}
	}


	// From: Req9Batch81Amount250
	if (-2 > ((var_1_21 - var_1_37) / var_1_10)) {
		var_1_36 = (abs (var_1_38 + var_1_39));
	}


	// From: Req16Batch81Amount250
	unsigned char stepLocal_19 = var_1_31 && var_1_4;
	signed long int stepLocal_18 = 256;
	if (var_1_11 || stepLocal_19) {
		if (stepLocal_18 != ((var_1_64 + var_1_49) - var_1_45)) {
			var_1_63 = (abs (var_1_16 + var_1_15));
		} else {
			var_1_63 = (var_1_65 - var_1_66);
		}
	}


	// From: Req14Batch81Amount250
	unsigned long int stepLocal_17 = var_1_8 ^ var_1_29;
	signed long int stepLocal_16 = var_1_7;
	if (((min (var_1_48 , var_1_45)) / 128) != stepLocal_17) {
		if (var_1_23 >= stepLocal_16) {
			var_1_53 = ((min (var_1_49 , (var_1_48 + var_1_39))) + var_1_40);
		} else {
			var_1_53 = (max ((max (var_1_37 , var_1_22)) , (min (var_1_23 , 4u))));
		}
	} else {
		var_1_53 = ((var_1_29 + var_1_54) - var_1_69);
	}


	// From: Req17Batch81Amount250
	signed long int stepLocal_22 = var_1_1;
	unsigned short int stepLocal_21 = var_1_22;
	signed char stepLocal_20 = var_1_14;
	if ((min (var_1_38 , var_1_66)) > stepLocal_21) {
		if (! (var_1_21 < var_1_37)) {
			var_1_67 = (5 + (max (var_1_38 , var_1_48)));
		} else {
			var_1_67 = (60437 - var_1_25);
		}
	} else {
		if ((var_1_21 * var_1_24) < stepLocal_20) {
			if (((var_1_48 / var_1_50) * var_1_23) != stepLocal_22) {
				var_1_67 = (var_1_45 - var_1_24);
			}
		}
	}


	// From: Req15Batch81Amount250
	if ((var_1_31 || var_1_32) || var_1_31) {
		if (var_1_53 != (var_1_25 * var_1_70)) {
			var_1_55 = (var_1_56 + (var_1_57 + 64.7f));
		} else {
			var_1_55 = ((var_1_58 - var_1_59) + ((var_1_60 - var_1_61) - var_1_62));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 24575);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 8192);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 16384);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 1073741823);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 127);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 128);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967295);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 1073741824);
	assume_abort_if_not(var_1_54 <= 2147483647);
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -461168.6018427383000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -230584.3009213691400e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 2305843.009213691400e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 1073741824);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -1);
	assume_abort_if_not(var_1_65 <= 126);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_67 = var_1_67;
}

int property(void) {
	return ((((((((((((((((((((! (var_1_2 > var_1_3)) ? (((~ (abs (4))) >= (last_1_var_1_46 ^ (abs (var_1_6)))) ? ((var_1_6 <= last_1_var_1_46) ? (var_1_1 == ((signed long int) var_1_7)) : 1) : (var_1_1 == ((signed long int) (max (var_1_7 , var_1_8))))) : 1) && ((var_1_46 == (var_1_8 / var_1_10)) ? ((! (var_1_70 <= var_1_8)) ? ((var_1_4 && var_1_11) ? ((var_1_7 > (var_1_6 + (var_1_46 + var_1_10))) ? (var_1_9 == ((float) var_1_12)) : (var_1_9 == ((float) var_1_13))) : (var_1_9 == ((float) var_1_13))) : (var_1_9 == ((float) var_1_12))) : (var_1_9 == ((float) var_1_13)))) && ((((var_1_3 + var_1_2) != var_1_13) && var_1_31) ? (var_1_14 == ((signed char) (var_1_15 + 10))) : ((var_1_15 < (var_1_1 * (var_1_6 / var_1_10))) ? (var_1_14 == ((signed char) (var_1_15 + var_1_16))) : (var_1_14 == ((signed char) var_1_16))))) && ((var_1_15 != var_1_7) ? ((var_1_12 <= ((min (var_1_18 , var_1_19)) - var_1_20)) ? (var_1_17 == ((double) (abs (16.125)))) : 1) : 1)) && (((last_1_var_1_21 ^ var_1_8) < (var_1_6 / -8)) ? ((((min (var_1_6 , var_1_10)) < var_1_8) && (var_1_18 >= var_1_19)) ? (var_1_21 == ((unsigned short int) (((var_1_22 - var_1_23) + var_1_24) - (23515 - 16)))) : (var_1_21 == ((unsigned short int) (var_1_22 + (min (var_1_24 , var_1_23)))))) : (var_1_31 ? (var_1_21 == ((unsigned short int) var_1_22)) : 1))) && ((((max (var_1_18 , var_1_20)) - (max (var_1_19 , var_1_26))) > var_1_13) ? (((min (last_1_var_1_1 , last_1_var_1_46)) <= last_1_var_1_53) ? (var_1_25 == ((unsigned long int) ((var_1_29 + 1084769346u) - (abs (max (last_1_var_1_46 , last_1_var_1_67)))))) : (var_1_25 == ((unsigned long int) (abs (3542476099u - 256u))))) : 1)) && (var_1_30 == ((float) (max (var_1_13 , var_1_12))))) && ((var_1_22 <= ((var_1_48 + var_1_1) * var_1_46)) ? (var_1_31 == ((unsigned char) (var_1_11 || (! (! var_1_32))))) : (var_1_31 == ((unsigned char) (((var_1_1 != var_1_23) && (var_1_33 || var_1_34)) || var_1_35))))) && ((-2 > ((var_1_21 - var_1_37) / var_1_10)) ? (var_1_36 == ((unsigned char) (abs (var_1_38 + var_1_39)))) : 1)) && ((var_1_25 < (5 << last_1_var_1_40)) ? (var_1_40 == ((unsigned char) (max ((var_1_38 + var_1_39) , (min (var_1_42 , 100)))))) : (var_1_40 == ((unsigned char) (var_1_43 - var_1_38))))) && ((-100000 < var_1_39) ? (((- var_1_17) > var_1_19) ? (var_1_44 == ((unsigned short int) (var_1_45 - var_1_48))) : 1) : (var_1_35 ? (var_1_44 == ((unsigned short int) (max (var_1_38 , 5)))) : 1))) && ((var_1_16 == (last_1_var_1_46 + var_1_25)) ? (var_1_35 ? (var_1_46 == ((signed long int) (min ((var_1_25 - var_1_39) , var_1_70)))) : 1) : (var_1_46 == ((signed long int) (var_1_24 + var_1_1))))) && ((last_1_var_1_25 <= last_1_var_1_53) ? ((-50 < last_1_var_1_25) ? (var_1_48 == ((signed long int) ((-16 + -100) + var_1_38))) : 1) : (((abs (last_1_var_1_25)) >= var_1_29) ? (((10 / (var_1_49 + var_1_50)) >= var_1_43) ? (var_1_48 == ((signed long int) (max (var_1_42 , var_1_22)))) : 1) : (((max (var_1_13 , var_1_19)) != (last_1_var_1_9 + var_1_18)) ? (((var_1_51 - last_1_var_1_67) > (10000u | last_1_var_1_25)) ? (var_1_48 == ((signed long int) (min (-32 , var_1_23)))) : (var_1_48 == ((signed long int) var_1_23))) : 1)))) && ((((min (var_1_48 , var_1_45)) / 128) != (var_1_8 ^ var_1_29)) ? ((var_1_23 >= var_1_7) ? (var_1_53 == ((unsigned long int) ((min (var_1_49 , (var_1_48 + var_1_39))) + var_1_40))) : (var_1_53 == ((unsigned long int) (max ((max (var_1_37 , var_1_22)) , (min (var_1_23 , 4u))))))) : (var_1_53 == ((unsigned long int) ((var_1_29 + var_1_54) - var_1_69))))) && (((var_1_31 || var_1_32) || var_1_31) ? ((var_1_53 != (var_1_25 * var_1_70)) ? (var_1_55 == ((float) (var_1_56 + (var_1_57 + 64.7f)))) : (var_1_55 == ((float) ((var_1_58 - var_1_59) + ((var_1_60 - var_1_61) - var_1_62))))) : 1)) && ((var_1_11 || (var_1_31 && var_1_4)) ? ((256 != ((var_1_64 + var_1_49) - var_1_45)) ? (var_1_63 == ((signed char) (abs (var_1_16 + var_1_15)))) : (var_1_63 == ((signed char) (var_1_65 - var_1_66)))) : 1)) && (((min (var_1_38 , var_1_66)) > var_1_22) ? ((! (var_1_21 < var_1_37)) ? (var_1_67 == ((unsigned short int) (5 + (max (var_1_38 , var_1_48))))) : (var_1_67 == ((unsigned short int) (60437 - var_1_25)))) : (((var_1_21 * var_1_24) < var_1_14) ? ((((var_1_48 / var_1_50) * var_1_23) != var_1_1) ? (var_1_67 == ((unsigned short int) (var_1_45 - var_1_24))) : 1) : 1))) && (((var_1_12 < var_1_60) || (var_1_46 < var_1_70)) ? (var_1_69 == ((unsigned char) (abs (var_1_66)))) : ((var_1_39 >= var_1_48) ? (var_1_31 ? (var_1_69 == ((unsigned char) var_1_38)) : (var_1_69 == ((unsigned char) var_1_39))) : (var_1_69 == ((unsigned char) var_1_49))))) && ((var_1_1 == var_1_25) ? (var_1_70 == ((signed long int) (min (-4 , var_1_50)))) : 1)) && (((var_1_35 && (! var_1_34)) && (var_1_70 != var_1_64)) ? (var_1_71 == ((unsigned char) var_1_42)) : 1)
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

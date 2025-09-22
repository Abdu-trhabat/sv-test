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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch173Amount250.c", 13, "reach_error"); }
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
float var_1_1 = 49.4;
unsigned long int var_1_2 = 64;
unsigned long int var_1_3 = 1;
unsigned long int var_1_4 = 5;
float var_1_5 = 3.6;
float var_1_6 = 3.8;
signed short int var_1_7 = 64;
signed short int var_1_10 = 10;
signed short int var_1_11 = 18539;
signed short int var_1_12 = 5;
signed short int var_1_13 = 10;
signed short int var_1_15 = 4;
float var_1_16 = 4.25;
float var_1_18 = 0.0;
float var_1_19 = 8.6;
signed long int var_1_20 = -200;
unsigned char var_1_22 = 16;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 1;
unsigned short int var_1_27 = 50603;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 25;
signed long int var_1_35 = -4;
double var_1_36 = 0.19999999999999996;
double var_1_37 = 24.8;
double var_1_38 = -0.385;
unsigned char var_1_39 = 4;
unsigned char var_1_40 = 100;
float var_1_41 = 99.625;
float var_1_42 = 0.0;
double var_1_43 = 32.5;
double var_1_44 = 49.5;
unsigned short int var_1_45 = 8;
unsigned short int var_1_46 = 256;
unsigned short int var_1_47 = 128;
unsigned short int var_1_48 = 10000;
unsigned short int var_1_49 = 10000;
unsigned short int var_1_50 = 10000;
unsigned short int var_1_51 = 50;
unsigned short int var_1_52 = 128;
unsigned short int var_1_53 = 40524;
unsigned char var_1_54 = 1;
signed long int var_1_55 = -100;
double var_1_56 = 4.2;
signed short int var_1_57 = 256;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_35 = -4;
float last_1_var_1_41 = 99.625;
double last_1_var_1_43 = 32.5;
unsigned short int last_1_var_1_52 = 128;
unsigned char last_1_var_1_54 = 1;
double last_1_var_1_56 = 4.2;
signed short int last_1_var_1_57 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req14Batch173Amount250
	if (last_1_var_1_57 <= ((var_1_11 - var_1_23) << 16)) {
		if (var_1_24 >= (min ((min (var_1_4 , 16)) , var_1_11))) {
			if (last_1_var_1_43 > (max ((max (last_1_var_1_43 , var_1_37)) , (max (var_1_38 , last_1_var_1_41))))) {
				var_1_45 = (min ((min ((var_1_12 + var_1_40) , var_1_46)) , var_1_25));
			} else {
				var_1_45 = ((min (var_1_13 , var_1_34)) + var_1_23);
			}
		}
	} else {
		if (var_1_38 <= last_1_var_1_56) {
			if (var_1_25 >= ((- var_1_40) % var_1_3)) {
				var_1_45 = (min (var_1_47 , var_1_11));
			} else {
				var_1_45 = (((var_1_48 + var_1_49) - (var_1_50 - 5)) + last_1_var_1_35);
			}
		}
	}


	// From: Req6Batch173Amount250
	if ((var_1_27 - 4) >= (var_1_4 / var_1_24)) {
		var_1_26 = ((! var_1_28) || var_1_29);
	} else {
		if (var_1_10 < last_1_var_1_52) {
			var_1_26 = (last_1_var_1_54 || (last_1_var_1_54 || var_1_28));
		} else {
			var_1_26 = var_1_28;
		}
	}


	// From: Req7Batch173Amount250
	if (var_1_26 && var_1_28) {
		if ((var_1_2 * -2) != var_1_23) {
			var_1_31 = (var_1_28 && (! (! var_1_32)));
		} else {
			var_1_31 = (! var_1_28);
		}
	} else {
		var_1_31 = var_1_28;
	}


	// From: Req1Batch173Amount250
	unsigned long int stepLocal_0 = var_1_4;
	if ((var_1_2 % var_1_3) <= stepLocal_0) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req2Batch173Amount250
	unsigned long int stepLocal_3 = var_1_4;
	signed short int stepLocal_2 = var_1_13;
	unsigned char stepLocal_1 = var_1_31;
	if (var_1_3 >= stepLocal_3) {
		if (var_1_26 || stepLocal_1) {
			var_1_7 = (var_1_10 - (var_1_11 - (min (var_1_12 , var_1_13))));
		}
	} else {
		if (var_1_26) {
			if ((~ var_1_11) != stepLocal_2) {
				var_1_7 = (var_1_13 + var_1_12);
			} else {
				var_1_7 = (min ((max (var_1_13 , var_1_12)) , ((max (var_1_10 , var_1_11)) - var_1_15)));
			}
		}
	}


	// From: Req8Batch173Amount250
	signed long int stepLocal_7 = var_1_25 * var_1_11;
	if (stepLocal_7 <= -8) {
		var_1_33 = (min (var_1_24 , var_1_23));
	} else {
		var_1_33 = (max (128 , (max (var_1_23 , var_1_34))));
	}


	// From: Req11Batch173Amount250
	if (! (var_1_13 >= var_1_11)) {
		if (200 >= var_1_12) {
			var_1_39 = (var_1_23 + var_1_25);
		} else {
			var_1_39 = ((var_1_40 - 32) + var_1_23);
		}
	}


	// From: Req12Batch173Amount250
	if (var_1_37 < 4.5) {
		var_1_41 = (var_1_38 + var_1_19);
	} else {
		var_1_41 = (((var_1_42 + 4.4268958528465377E18f) - var_1_19) - var_1_5);
	}


	// From: Req17Batch173Amount250
	if (var_1_1 > (var_1_37 - var_1_6)) {
		var_1_54 = (var_1_32 && var_1_28);
	}


	// From: Req19Batch173Amount250
	if (var_1_54 && var_1_32) {
		var_1_56 = var_1_6;
	} else {
		var_1_56 = 127.75;
	}


	// From: Req16Batch173Amount250
	if (var_1_31 || ((var_1_24 + var_1_46) > var_1_4)) {
		if ((min ((var_1_6 / 25.4f) , (- var_1_38))) >= var_1_41) {
			var_1_52 = (min (var_1_40 , (var_1_53 - (var_1_33 + var_1_13))));
		}
	} else {
		var_1_52 = 16;
	}


	// From: Req4Batch173Amount250
	if (var_1_54) {
		var_1_20 = (max ((min ((var_1_10 + var_1_52) , var_1_7)) , var_1_11));
	} else {
		var_1_20 = ((max (var_1_11 , var_1_12)) + (max ((min (var_1_52 , var_1_7)) , (var_1_15 - var_1_13))));
	}


	// From: Req9Batch173Amount250
	unsigned char stepLocal_9 = var_1_52 <= (~ 64);
	signed long int stepLocal_8 = (var_1_10 * 8) / var_1_24;
	if (0 == stepLocal_8) {
		if (var_1_26 && stepLocal_9) {
			var_1_35 = (var_1_34 + (1 + var_1_12));
		} else {
			var_1_35 = (var_1_10 + var_1_11);
		}
	}


	// From: Req13Batch173Amount250
	if ((var_1_40 >= 16) && (var_1_5 < var_1_38)) {
		var_1_43 = (var_1_42 + (var_1_19 - (min (var_1_37 , var_1_44))));
	} else {
		if (var_1_54 || var_1_32) {
			var_1_43 = (var_1_44 + (max (var_1_37 , var_1_38)));
		} else {
			var_1_43 = (max (var_1_18 , (max ((var_1_19 - 32.6) , var_1_38))));
		}
	}


	// From: Req15Batch173Amount250
	if (var_1_20 <= var_1_23) {
		var_1_51 = 0;
	}


	// From: Req18Batch173Amount250
	if (var_1_37 >= (var_1_42 - var_1_6)) {
		var_1_55 = (10 - (var_1_13 + (var_1_50 + var_1_35)));
	}


	// From: Req20Batch173Amount250
	signed long int stepLocal_16 = var_1_13 / var_1_50;
	unsigned short int stepLocal_15 = var_1_45;
	unsigned short int stepLocal_14 = var_1_47;
	if (var_1_13 < stepLocal_15) {
		if (var_1_3 != stepLocal_16) {
			if (var_1_55 < stepLocal_14) {
				var_1_57 = var_1_12;
			} else {
				var_1_57 = var_1_40;
			}
		}
	} else {
		var_1_57 = -5;
	}


	// From: Req3Batch173Amount250
	if ((min (var_1_2 , (var_1_3 | var_1_35))) > var_1_4) {
		var_1_16 = ((max (var_1_6 , var_1_5)) - (var_1_18 - var_1_19));
	} else {
		if ((max (var_1_3 , var_1_4)) > var_1_11) {
			var_1_16 = var_1_6;
		} else {
			var_1_16 = var_1_19;
		}
	}


	// From: Req5Batch173Amount250
	unsigned char stepLocal_6 = var_1_26;
	signed long int stepLocal_5 = var_1_55;
	unsigned long int stepLocal_4 = var_1_15 + var_1_2;
	if (stepLocal_6 && var_1_31) {
		if (stepLocal_4 <= var_1_3) {
			var_1_22 = (var_1_23 + 64);
		} else {
			var_1_22 = (var_1_24 - (max ((8 + var_1_25) , 100)));
		}
	} else {
		if (stepLocal_5 < var_1_10) {
			if (var_1_56 > (- (var_1_5 + var_1_18))) {
				var_1_22 = (max (var_1_24 , var_1_25));
			}
		}
	}


	// From: Req10Batch173Amount250
	unsigned long int stepLocal_13 = (var_1_25 << var_1_23) % var_1_3;
	unsigned char stepLocal_12 = var_1_24;
	signed short int stepLocal_11 = var_1_10;
	signed long int stepLocal_10 = var_1_55;
	if (stepLocal_11 < var_1_4) {
		if (stepLocal_10 < var_1_10) {
			var_1_36 = (max (var_1_6 , var_1_5));
		}
	} else {
		if (stepLocal_13 > (var_1_55 | var_1_57)) {
			var_1_36 = (min ((min (var_1_18 , var_1_5)) , 3.625));
		} else {
			if (var_1_31) {
				if (stepLocal_12 <= (min (var_1_27 , (var_1_23 * var_1_55)))) {
					var_1_36 = (((max (var_1_19 , var_1_37)) - 256.5) + var_1_38);
				} else {
					var_1_36 = (var_1_38 + var_1_37);
				}
			} else {
				var_1_36 = (max ((max ((max (var_1_38 , var_1_37)) , var_1_18)) , var_1_5));
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 16383);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65535);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 63);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 2305843.009213691400e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 65534);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 65534);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 8191);
	assume_abort_if_not(var_1_48 <= 16384);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 8192);
	assume_abort_if_not(var_1_49 <= 16383);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 8191);
	assume_abort_if_not(var_1_50 <= 16383);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_35 = var_1_35;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_57 = var_1_57;
}

int property(void) {
	return (((((((((((((((((((((var_1_2 % var_1_3) <= var_1_4) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((var_1_3 >= var_1_4) ? ((var_1_26 || var_1_31) ? (var_1_7 == ((signed short int) (var_1_10 - (var_1_11 - (min (var_1_12 , var_1_13)))))) : 1) : (var_1_26 ? (((~ var_1_11) != var_1_13) ? (var_1_7 == ((signed short int) (var_1_13 + var_1_12))) : (var_1_7 == ((signed short int) (min ((max (var_1_13 , var_1_12)) , ((max (var_1_10 , var_1_11)) - var_1_15)))))) : 1))) && (((min (var_1_2 , (var_1_3 | var_1_35))) > var_1_4) ? (var_1_16 == ((float) ((max (var_1_6 , var_1_5)) - (var_1_18 - var_1_19)))) : (((max (var_1_3 , var_1_4)) > var_1_11) ? (var_1_16 == ((float) var_1_6)) : (var_1_16 == ((float) var_1_19))))) && (var_1_54 ? (var_1_20 == ((signed long int) (max ((min ((var_1_10 + var_1_52) , var_1_7)) , var_1_11)))) : (var_1_20 == ((signed long int) ((max (var_1_11 , var_1_12)) + (max ((min (var_1_52 , var_1_7)) , (var_1_15 - var_1_13)))))))) && ((var_1_26 && var_1_31) ? (((var_1_15 + var_1_2) <= var_1_3) ? (var_1_22 == ((unsigned char) (var_1_23 + 64))) : (var_1_22 == ((unsigned char) (var_1_24 - (max ((8 + var_1_25) , 100)))))) : ((var_1_55 < var_1_10) ? ((var_1_56 > (- (var_1_5 + var_1_18))) ? (var_1_22 == ((unsigned char) (max (var_1_24 , var_1_25)))) : 1) : 1))) && (((var_1_27 - 4) >= (var_1_4 / var_1_24)) ? (var_1_26 == ((unsigned char) ((! var_1_28) || var_1_29))) : ((var_1_10 < last_1_var_1_52) ? (var_1_26 == ((unsigned char) (last_1_var_1_54 || (last_1_var_1_54 || var_1_28)))) : (var_1_26 == ((unsigned char) var_1_28))))) && ((var_1_26 && var_1_28) ? (((var_1_2 * -2) != var_1_23) ? (var_1_31 == ((unsigned char) (var_1_28 && (! (! var_1_32))))) : (var_1_31 == ((unsigned char) (! var_1_28)))) : (var_1_31 == ((unsigned char) var_1_28)))) && (((var_1_25 * var_1_11) <= -8) ? (var_1_33 == ((unsigned char) (min (var_1_24 , var_1_23)))) : (var_1_33 == ((unsigned char) (max (128 , (max (var_1_23 , var_1_34)))))))) && ((0 == ((var_1_10 * 8) / var_1_24)) ? ((var_1_26 && (var_1_52 <= (~ 64))) ? (var_1_35 == ((signed long int) (var_1_34 + (1 + var_1_12)))) : (var_1_35 == ((signed long int) (var_1_10 + var_1_11)))) : 1)) && ((var_1_10 < var_1_4) ? ((var_1_55 < var_1_10) ? (var_1_36 == ((double) (max (var_1_6 , var_1_5)))) : 1) : ((((var_1_25 << var_1_23) % var_1_3) > (var_1_55 | var_1_57)) ? (var_1_36 == ((double) (min ((min (var_1_18 , var_1_5)) , 3.625)))) : (var_1_31 ? ((var_1_24 <= (min (var_1_27 , (var_1_23 * var_1_55)))) ? (var_1_36 == ((double) (((max (var_1_19 , var_1_37)) - 256.5) + var_1_38))) : (var_1_36 == ((double) (var_1_38 + var_1_37)))) : (var_1_36 == ((double) (max ((max ((max (var_1_38 , var_1_37)) , var_1_18)) , var_1_5)))))))) && ((! (var_1_13 >= var_1_11)) ? ((200 >= var_1_12) ? (var_1_39 == ((unsigned char) (var_1_23 + var_1_25))) : (var_1_39 == ((unsigned char) ((var_1_40 - 32) + var_1_23)))) : 1)) && ((var_1_37 < 4.5) ? (var_1_41 == ((float) (var_1_38 + var_1_19))) : (var_1_41 == ((float) (((var_1_42 + 4.4268958528465377E18f) - var_1_19) - var_1_5))))) && (((var_1_40 >= 16) && (var_1_5 < var_1_38)) ? (var_1_43 == ((double) (var_1_42 + (var_1_19 - (min (var_1_37 , var_1_44)))))) : ((var_1_54 || var_1_32) ? (var_1_43 == ((double) (var_1_44 + (max (var_1_37 , var_1_38))))) : (var_1_43 == ((double) (max (var_1_18 , (max ((var_1_19 - 32.6) , var_1_38))))))))) && ((last_1_var_1_57 <= ((var_1_11 - var_1_23) << 16)) ? ((var_1_24 >= (min ((min (var_1_4 , 16)) , var_1_11))) ? ((last_1_var_1_43 > (max ((max (last_1_var_1_43 , var_1_37)) , (max (var_1_38 , last_1_var_1_41))))) ? (var_1_45 == ((unsigned short int) (min ((min ((var_1_12 + var_1_40) , var_1_46)) , var_1_25)))) : (var_1_45 == ((unsigned short int) ((min (var_1_13 , var_1_34)) + var_1_23)))) : 1) : ((var_1_38 <= last_1_var_1_56) ? ((var_1_25 >= ((- var_1_40) % var_1_3)) ? (var_1_45 == ((unsigned short int) (min (var_1_47 , var_1_11)))) : (var_1_45 == ((unsigned short int) (((var_1_48 + var_1_49) - (var_1_50 - 5)) + last_1_var_1_35)))) : 1))) && ((var_1_20 <= var_1_23) ? (var_1_51 == ((unsigned short int) 0)) : 1)) && ((var_1_31 || ((var_1_24 + var_1_46) > var_1_4)) ? (((min ((var_1_6 / 25.4f) , (- var_1_38))) >= var_1_41) ? (var_1_52 == ((unsigned short int) (min (var_1_40 , (var_1_53 - (var_1_33 + var_1_13)))))) : 1) : (var_1_52 == ((unsigned short int) 16)))) && ((var_1_1 > (var_1_37 - var_1_6)) ? (var_1_54 == ((unsigned char) (var_1_32 && var_1_28))) : 1)) && ((var_1_37 >= (var_1_42 - var_1_6)) ? (var_1_55 == ((signed long int) (10 - (var_1_13 + (var_1_50 + var_1_35))))) : 1)) && ((var_1_54 && var_1_32) ? (var_1_56 == ((double) var_1_6)) : (var_1_56 == ((double) 127.75)))) && ((var_1_13 < var_1_45) ? ((var_1_3 != (var_1_13 / var_1_50)) ? ((var_1_55 < var_1_47) ? (var_1_57 == ((signed short int) var_1_12)) : (var_1_57 == ((signed short int) var_1_40))) : 1) : (var_1_57 == ((signed short int) -5)))
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

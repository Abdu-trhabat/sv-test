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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 16;
unsigned long int var_1_4 = 4042214920;
unsigned long int var_1_5 = 10;
signed long int var_1_6 = 10;
signed long int var_1_7 = -32;
unsigned long int var_1_8 = 25;
unsigned long int var_1_9 = 4046303146;
double var_1_10 = 127.2;
unsigned char var_1_11 = 0;
double var_1_12 = 9.2;
double var_1_13 = 100000000.5;
double var_1_14 = 3.5;
float var_1_15 = 32.6;
float var_1_16 = 3.9;
float var_1_17 = 1.875;
float var_1_18 = 16.05;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 200;
unsigned char var_1_21 = 200;
unsigned char var_1_22 = 10;
unsigned char var_1_23 = 32;
signed char var_1_24 = 1;
signed char var_1_25 = 32;
unsigned short int var_1_26 = 8;
signed long int var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 40533;
double var_1_30 = 499.6;
unsigned short int var_1_31 = 10;
signed long int var_1_32 = 2;
unsigned long int var_1_33 = 2002355778;
signed long int var_1_34 = 64;
signed long int var_1_35 = 1;
signed long int var_1_36 = 1777730449;
unsigned char var_1_37 = 100;
signed short int var_1_39 = 256;
float var_1_40 = 2.9;
float var_1_41 = 64.25;
float var_1_42 = 1000000.25;
signed char var_1_43 = -100;
unsigned short int var_1_44 = 32;
unsigned long int var_1_45 = 10000000;
signed short int var_1_46 = -100;
unsigned short int var_1_47 = 64;
unsigned char var_1_48 = 2;
unsigned char var_1_49 = 4;
unsigned char var_1_50 = 25;
unsigned char var_1_51 = 64;
unsigned char var_1_52 = 100;
unsigned char var_1_53 = 64;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 200;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 1;
float var_1_60 = 64.64;
unsigned short int var_1_61 = 46565;
double var_1_62 = 16.75;
float var_1_63 = -0.8;
float var_1_64 = 64.5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_26 = 8;
signed long int last_1_var_1_32 = 2;
signed long int last_1_var_1_35 = 1;
unsigned char last_1_var_1_37 = 100;
signed char last_1_var_1_43 = -100;
unsigned short int last_1_var_1_44 = 32;
unsigned char last_1_var_1_55 = 200;
unsigned char last_1_var_1_57 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch14Amount250
	if ((var_1_6 <= last_1_var_1_37) && last_1_var_1_57) {
		if (var_1_25 != (var_1_8 << var_1_23)) {
			var_1_32 = (var_1_22 - (1 + 50));
		} else {
			if ((var_1_4 - (var_1_33 - last_1_var_1_26)) >= var_1_8) {
				var_1_32 = ((var_1_23 + var_1_8) - var_1_34);
			}
		}
	} else {
		var_1_32 = (last_1_var_1_55 + var_1_20);
	}


	// From: Req21Batch14Amount250
	signed long int stepLocal_16 = (last_1_var_1_44 + last_1_var_1_43) | (last_1_var_1_35 ^ var_1_6);
	if (stepLocal_16 < last_1_var_1_32) {
		var_1_57 = ((var_1_28 || var_1_58) || var_1_59);
	}


	// From: Req8Batch14Amount250
	if (var_1_57) {
		var_1_35 = (min (var_1_29 , (var_1_25 - (var_1_36 - var_1_31))));
	}


	// From: Req2Batch14Amount250
	signed long int stepLocal_0 = var_1_7;
	if (var_1_57) {
		if (stepLocal_0 >= (var_1_5 / var_1_6)) {
			var_1_10 = var_1_12;
		} else {
			var_1_10 = (var_1_13 - var_1_14);
		}
	}


	// From: Req18Batch14Amount250
	unsigned long int stepLocal_15 = 1 - (var_1_8 + var_1_22);
	if (var_1_25 > stepLocal_15) {
		if (var_1_57) {
			var_1_48 = (var_1_21 - (max (var_1_8 , var_1_49)));
		}
	}


	// From: Req3Batch14Amount250
	var_1_15 = (((var_1_16 + var_1_17) + (var_1_18 - 16.8f)) + 7.375f);


	// From: Req10Batch14Amount250
	signed long int stepLocal_9 = var_1_25 - var_1_22;
	if (stepLocal_9 < (var_1_31 << var_1_23)) {
		var_1_39 = (1 + var_1_20);
	} else {
		var_1_39 = (abs (var_1_23));
	}


	// From: Req13Batch14Amount250
	if (var_1_14 > var_1_18) {
		var_1_42 = (min (var_1_16 , (var_1_13 - (min (var_1_14 , var_1_18)))));
	} else {
		var_1_42 = ((max ((49.75f + var_1_18) , var_1_14)) - var_1_13);
	}


	// From: Req17Batch14Amount250
	if (50u > (4u * var_1_7)) {
		var_1_47 = var_1_29;
	}


	// From: Req19Batch14Amount250
	var_1_50 = ((var_1_51 + var_1_52) - ((min (var_1_53 , var_1_54)) - var_1_8));


	// From: Req22Batch14Amount250
	unsigned char stepLocal_19 = ! var_1_57;
	signed long int stepLocal_18 = (min (var_1_29 , var_1_61)) - var_1_25;
	signed long int stepLocal_17 = var_1_32;
	if (stepLocal_18 < (max (var_1_39 , var_1_47))) {
		if (var_1_57 || stepLocal_19) {
			if (25 >= stepLocal_17) {
				var_1_60 = ((var_1_18 + var_1_16) + var_1_17);
			} else {
				var_1_60 = (min ((var_1_17 + var_1_16) , 63.75f));
			}
		}
	}


	// From: Req23Batch14Amount250
	unsigned char stepLocal_20 = var_1_48;
	if (var_1_32 < stepLocal_20) {
		var_1_62 = ((var_1_16 + var_1_18) + 63.875);
	} else {
		var_1_62 = (255.65 - var_1_18);
	}


	// From: Req1Batch14Amount250
	if (var_1_32 >= var_1_35) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		if (((var_1_5 << var_1_4) / (min (var_1_6 , var_1_7))) <= (var_1_35 >> (max (var_1_8 , 10u)))) {
			var_1_1 = ((min (var_1_4 , var_1_9)) - var_1_8);
		} else {
			if (-10 > (var_1_5 << var_1_35)) {
				var_1_1 = (max ((var_1_5 + var_1_8) , var_1_4));
			}
		}
	}


	// From: Req4Batch14Amount250
	signed long int stepLocal_2 = var_1_35 * var_1_7;
	unsigned long int stepLocal_1 = var_1_32 | var_1_5;
	if (var_1_5 < stepLocal_2) {
		var_1_19 = (((max (var_1_20 , var_1_21)) - (var_1_8 + var_1_22)) - var_1_23);
	} else {
		if (var_1_7 <= stepLocal_1) {
			var_1_19 = (var_1_23 + var_1_8);
		}
	}


	// From: Req6Batch14Amount250
	unsigned char stepLocal_5 = (- var_1_10) <= 2.5;
	unsigned char stepLocal_4 = var_1_22;
	signed long int stepLocal_3 = (var_1_27 + var_1_23) - var_1_22;
	if (var_1_32 > stepLocal_3) {
		if (var_1_57) {
			if (! var_1_57) {
				var_1_26 = (max ((var_1_29 - var_1_25) , (abs (var_1_8))));
			} else {
				if (var_1_57 || stepLocal_5) {
					var_1_26 = ((var_1_23 + var_1_21) + 128);
				} else {
					if ((var_1_29 + var_1_23) > stepLocal_4) {
						if (var_1_14 <= (var_1_13 - (max (var_1_18 , var_1_30)))) {
							var_1_26 = (var_1_29 - (31763 - (max (var_1_22 , var_1_21))));
						} else {
							var_1_26 = (var_1_19 + var_1_31);
						}
					}
				}
			}
		}
	}


	// From: Req9Batch14Amount250
	unsigned long int stepLocal_8 = var_1_1;
	unsigned char stepLocal_7 = var_1_23;
	unsigned char stepLocal_6 = var_1_11;
	if (var_1_5 != stepLocal_8) {
		if (stepLocal_6 || var_1_28) {
			var_1_37 = ((min (128 , var_1_20)) - var_1_23);
		} else {
			if (var_1_10 == var_1_17) {
				var_1_37 = (min (var_1_21 , var_1_8));
			}
		}
	} else {
		if (var_1_48 < stepLocal_7) {
			if (var_1_28) {
				var_1_37 = ((64 - var_1_25) + 50);
			}
		} else {
			if (var_1_11) {
				var_1_37 = ((100 - var_1_8) + var_1_25);
			}
		}
	}


	// From: Req12Batch14Amount250
	unsigned long int stepLocal_11 = var_1_1 - var_1_23;
	if ((~ var_1_48) >= stepLocal_11) {
		var_1_41 = (max (var_1_12 , var_1_16));
	}


	// From: Req15Batch14Amount250
	if (((var_1_36 / var_1_45) <= 100000000u) && (-100 >= var_1_1)) {
		var_1_44 = (min ((min (var_1_29 , var_1_23)) , (max (var_1_20 , var_1_1))));
	} else {
		var_1_44 = var_1_25;
	}


	// From: Req5Batch14Amount250
	if ((var_1_20 - var_1_50) == var_1_8) {
		var_1_24 = ((64 - var_1_22) - var_1_25);
	}


	// From: Req11Batch14Amount250
	unsigned long int stepLocal_10 = var_1_8;
	if (var_1_57) {
		var_1_40 = (abs (var_1_18 + 7.9f));
	} else {
		if (var_1_37 <= stepLocal_10) {
			var_1_40 = ((var_1_18 + 1.2f) - var_1_14);
		}
	}


	// From: Req24Batch14Amount250
	unsigned char stepLocal_21 = var_1_52;
	if ((var_1_51 & var_1_1) >= stepLocal_21) {
		if (var_1_18 <= var_1_16) {
			var_1_63 = ((min (var_1_13 , var_1_14)) - (min (var_1_18 , var_1_64)));
		}
	} else {
		var_1_63 = var_1_18;
	}


	// From: Req20Batch14Amount250
	if ((var_1_12 + var_1_41) > var_1_41) {
		var_1_55 = (abs (max (var_1_53 , var_1_54)));
	}


	// From: Req14Batch14Amount250
	signed char stepLocal_14 = var_1_25;
	signed long int stepLocal_13 = var_1_36;
	unsigned char stepLocal_12 = var_1_28;
	if (stepLocal_12 && var_1_11) {
		if (stepLocal_13 < var_1_55) {
			var_1_43 = var_1_22;
		}
	} else {
		if (var_1_4 != stepLocal_14) {
			var_1_43 = -2;
		}
	}


	// From: Req16Batch14Amount250
	if (var_1_57) {
		var_1_46 = var_1_19;
	} else {
		if (var_1_17 == var_1_63) {
			var_1_46 = (max (var_1_8 , (var_1_20 - var_1_25)));
		} else {
			var_1_46 = (var_1_20 - var_1_21);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 2147483647);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 30);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -115292.1504606845700e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 1152921.504606845700e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -115292.1504606845700e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 1152921.504606845700e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 190);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 190);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 31);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1073741824);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 32767);
	assume_abort_if_not(var_1_29 <= 65534);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 1073741823);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 1073741823);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 4294967295);
	assume_abort_if_not(var_1_45 != 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 127);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 63);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 64);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 63);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 63);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 1);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 32767);
	assume_abort_if_not(var_1_61 <= 65535);
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854766000e+12F && var_1_64 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_26 = var_1_26;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_57 = var_1_57;
}

int property(void) {
	return ((((((((((((((((((((((((var_1_32 >= var_1_35) ? (var_1_1 == ((unsigned long int) (var_1_4 - var_1_5))) : ((((var_1_5 << var_1_4) / (min (var_1_6 , var_1_7))) <= (var_1_35 >> (max (var_1_8 , 10u)))) ? (var_1_1 == ((unsigned long int) ((min (var_1_4 , var_1_9)) - var_1_8))) : ((-10 > (var_1_5 << var_1_35)) ? (var_1_1 == ((unsigned long int) (max ((var_1_5 + var_1_8) , var_1_4)))) : 1))) && (var_1_57 ? ((var_1_7 >= (var_1_5 / var_1_6)) ? (var_1_10 == ((double) var_1_12)) : (var_1_10 == ((double) (var_1_13 - var_1_14)))) : 1)) && (var_1_15 == ((float) (((var_1_16 + var_1_17) + (var_1_18 - 16.8f)) + 7.375f)))) && ((var_1_5 < (var_1_35 * var_1_7)) ? (var_1_19 == ((unsigned char) (((max (var_1_20 , var_1_21)) - (var_1_8 + var_1_22)) - var_1_23))) : ((var_1_7 <= (var_1_32 | var_1_5)) ? (var_1_19 == ((unsigned char) (var_1_23 + var_1_8))) : 1))) && (((var_1_20 - var_1_50) == var_1_8) ? (var_1_24 == ((signed char) ((64 - var_1_22) - var_1_25))) : 1)) && ((var_1_32 > ((var_1_27 + var_1_23) - var_1_22)) ? (var_1_57 ? ((! var_1_57) ? (var_1_26 == ((unsigned short int) (max ((var_1_29 - var_1_25) , (abs (var_1_8)))))) : ((var_1_57 || ((- var_1_10) <= 2.5)) ? (var_1_26 == ((unsigned short int) ((var_1_23 + var_1_21) + 128))) : (((var_1_29 + var_1_23) > var_1_22) ? ((var_1_14 <= (var_1_13 - (max (var_1_18 , var_1_30)))) ? (var_1_26 == ((unsigned short int) (var_1_29 - (31763 - (max (var_1_22 , var_1_21)))))) : (var_1_26 == ((unsigned short int) (var_1_19 + var_1_31)))) : 1))) : 1) : 1)) && (((var_1_6 <= last_1_var_1_37) && last_1_var_1_57) ? ((var_1_25 != (var_1_8 << var_1_23)) ? (var_1_32 == ((signed long int) (var_1_22 - (1 + 50)))) : (((var_1_4 - (var_1_33 - last_1_var_1_26)) >= var_1_8) ? (var_1_32 == ((signed long int) ((var_1_23 + var_1_8) - var_1_34))) : 1)) : (var_1_32 == ((signed long int) (last_1_var_1_55 + var_1_20))))) && (var_1_57 ? (var_1_35 == ((signed long int) (min (var_1_29 , (var_1_25 - (var_1_36 - var_1_31)))))) : 1)) && ((var_1_5 != var_1_1) ? ((var_1_11 || var_1_28) ? (var_1_37 == ((unsigned char) ((min (128 , var_1_20)) - var_1_23))) : ((var_1_10 == var_1_17) ? (var_1_37 == ((unsigned char) (min (var_1_21 , var_1_8)))) : 1)) : ((var_1_48 < var_1_23) ? (var_1_28 ? (var_1_37 == ((unsigned char) ((64 - var_1_25) + 50))) : 1) : (var_1_11 ? (var_1_37 == ((unsigned char) ((100 - var_1_8) + var_1_25))) : 1)))) && (((var_1_25 - var_1_22) < (var_1_31 << var_1_23)) ? (var_1_39 == ((signed short int) (1 + var_1_20))) : (var_1_39 == ((signed short int) (abs (var_1_23)))))) && (var_1_57 ? (var_1_40 == ((float) (abs (var_1_18 + 7.9f)))) : ((var_1_37 <= var_1_8) ? (var_1_40 == ((float) ((var_1_18 + 1.2f) - var_1_14))) : 1))) && (((~ var_1_48) >= (var_1_1 - var_1_23)) ? (var_1_41 == ((float) (max (var_1_12 , var_1_16)))) : 1)) && ((var_1_14 > var_1_18) ? (var_1_42 == ((float) (min (var_1_16 , (var_1_13 - (min (var_1_14 , var_1_18))))))) : (var_1_42 == ((float) ((max ((49.75f + var_1_18) , var_1_14)) - var_1_13))))) && ((var_1_28 && var_1_11) ? ((var_1_36 < var_1_55) ? (var_1_43 == ((signed char) var_1_22)) : 1) : ((var_1_4 != var_1_25) ? (var_1_43 == ((signed char) -2)) : 1))) && ((((var_1_36 / var_1_45) <= 100000000u) && (-100 >= var_1_1)) ? (var_1_44 == ((unsigned short int) (min ((min (var_1_29 , var_1_23)) , (max (var_1_20 , var_1_1)))))) : (var_1_44 == ((unsigned short int) var_1_25)))) && (var_1_57 ? (var_1_46 == ((signed short int) var_1_19)) : ((var_1_17 == var_1_63) ? (var_1_46 == ((signed short int) (max (var_1_8 , (var_1_20 - var_1_25))))) : (var_1_46 == ((signed short int) (var_1_20 - var_1_21)))))) && ((50u > (4u * var_1_7)) ? (var_1_47 == ((unsigned short int) var_1_29)) : 1)) && ((var_1_25 > (1 - (var_1_8 + var_1_22))) ? (var_1_57 ? (var_1_48 == ((unsigned char) (var_1_21 - (max (var_1_8 , var_1_49))))) : 1) : 1)) && (var_1_50 == ((unsigned char) ((var_1_51 + var_1_52) - ((min (var_1_53 , var_1_54)) - var_1_8))))) && (((var_1_12 + var_1_41) > var_1_41) ? (var_1_55 == ((unsigned char) (abs (max (var_1_53 , var_1_54))))) : 1)) && ((((last_1_var_1_44 + last_1_var_1_43) | (last_1_var_1_35 ^ var_1_6)) < last_1_var_1_32) ? (var_1_57 == ((unsigned char) ((var_1_28 || var_1_58) || var_1_59))) : 1)) && ((((min (var_1_29 , var_1_61)) - var_1_25) < (max (var_1_39 , var_1_47))) ? ((var_1_57 || (! var_1_57)) ? ((25 >= var_1_32) ? (var_1_60 == ((float) ((var_1_18 + var_1_16) + var_1_17))) : (var_1_60 == ((float) (min ((var_1_17 + var_1_16) , 63.75f))))) : 1) : 1)) && ((var_1_32 < var_1_48) ? (var_1_62 == ((double) ((var_1_16 + var_1_18) + 63.875))) : (var_1_62 == ((double) (255.65 - var_1_18))))) && (((var_1_51 & var_1_1) >= var_1_52) ? ((var_1_18 <= var_1_16) ? (var_1_63 == ((float) ((min (var_1_13 , var_1_14)) - (min (var_1_18 , var_1_64))))) : 1) : (var_1_63 == ((float) var_1_18)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch167Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 0.6;
double var_1_6 = 8.75;
double var_1_7 = 10.5;
double var_1_8 = 3.4;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 5.4;
signed short int var_1_12 = 64;
signed short int var_1_13 = 25;
signed short int var_1_14 = 128;
float var_1_15 = 10.2;
float var_1_16 = 4.5;
float var_1_17 = 15.6;
float var_1_18 = 7.95;
float var_1_19 = -0.875;
float var_1_20 = 31.5;
unsigned char var_1_21 = 2;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 2;
unsigned char var_1_24 = 32;
unsigned short int var_1_25 = 256;
unsigned long int var_1_26 = 1000000000;
unsigned short int var_1_27 = 51624;
signed long int var_1_28 = 32;
signed short int var_1_29 = 16;
float var_1_30 = 64.5;
float var_1_31 = 10.8;
unsigned long int var_1_32 = 16;
unsigned long int var_1_33 = 2;
unsigned char var_1_34 = 200;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 32;
signed long int var_1_38 = -4;
unsigned char var_1_39 = 16;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 100;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 50;
double var_1_44 = -0.5;
double var_1_45 = 256.5;
double var_1_46 = 200.25;
double var_1_47 = 0.0;
double var_1_48 = 31.25;
double var_1_49 = 4.4;
double var_1_50 = 1.425;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
signed short int var_1_59 = -1;
unsigned char var_1_60 = 0;
signed long int var_1_61 = -25;
signed short int var_1_63 = 5;
double var_1_64 = 1.2;
signed char var_1_65 = 8;
double var_1_66 = 99.8;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 0.6;
signed short int last_1_var_1_12 = 64;
float last_1_var_1_15 = 10.2;
unsigned char last_1_var_1_21 = 2;
unsigned short int last_1_var_1_25 = 256;
signed long int last_1_var_1_28 = 32;
signed short int last_1_var_1_29 = 16;
unsigned long int last_1_var_1_32 = 16;
signed long int last_1_var_1_38 = -4;
unsigned char last_1_var_1_43 = 50;
signed short int last_1_var_1_59 = -1;
unsigned char last_1_var_1_60 = 0;
signed long int last_1_var_1_61 = -25;
signed char last_1_var_1_65 = 8;
double last_1_var_1_66 = 99.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch167Amount250
	if (last_1_var_1_61 == last_1_var_1_38) {
		if (var_1_11 <= (- last_1_var_1_1)) {
			if ((min (var_1_26 , var_1_33)) <= var_1_23) {
				var_1_32 = ((max (var_1_24 , last_1_var_1_61)) + var_1_23);
			}
		} else {
			if (last_1_var_1_32 <= last_1_var_1_25) {
				var_1_32 = 16u;
			} else {
				var_1_32 = var_1_22;
			}
		}
	}


	// From: Req14Batch167Amount250
	unsigned char stepLocal_10 = var_1_14 == last_1_var_1_38;
	unsigned char stepLocal_9 = var_1_52;
	if (((var_1_45 - var_1_50) / var_1_47) != (last_1_var_1_1 / var_1_30)) {
		if (stepLocal_10 && last_1_var_1_60) {
			var_1_51 = (var_1_52 && (var_1_53 && (var_1_54 && var_1_55)));
		} else {
			if ((max (var_1_31 , var_1_18)) >= last_1_var_1_15) {
				if (last_1_var_1_66 <= last_1_var_1_15) {
					var_1_51 = (var_1_53 && var_1_56);
				} else {
					var_1_51 = ((! (var_1_56 || var_1_57)) && var_1_55);
				}
			}
		}
	} else {
		if (last_1_var_1_60) {
			if (stepLocal_9 || (last_1_var_1_59 >= last_1_var_1_43)) {
				var_1_51 = ((var_1_54 && last_1_var_1_60) || (var_1_53 && var_1_55));
			}
		}
	}


	// From: Req10Batch167Amount250
	if ((- (last_1_var_1_61 ^ last_1_var_1_32)) <= -128) {
		var_1_38 = ((min ((max (last_1_var_1_29 , 64)) , last_1_var_1_12)) - var_1_36);
	} else {
		var_1_38 = (abs (128));
	}


	// From: Req1Batch167Amount250
	signed long int stepLocal_2 = (min (last_1_var_1_43 , last_1_var_1_61)) + last_1_var_1_65;
	signed long int stepLocal_1 = last_1_var_1_43 * last_1_var_1_65;
	unsigned char stepLocal_0 = var_1_10;
	if (last_1_var_1_21 != stepLocal_2) {
		if (last_1_var_1_21 != stepLocal_1) {
			var_1_1 = (max ((var_1_6 - var_1_7) , var_1_8));
		}
	} else {
		if (var_1_9 || stepLocal_0) {
			var_1_1 = (min (var_1_6 , (var_1_7 - var_1_11)));
		} else {
			if (var_1_10) {
				var_1_1 = (var_1_6 - var_1_7);
			} else {
				var_1_1 = var_1_8;
			}
		}
	}


	// From: Req4Batch167Amount250
	if (var_1_16 > var_1_18) {
		var_1_21 = (min (var_1_22 , 0));
	} else {
		if (((- var_1_7) / 8.272f) == var_1_16) {
			var_1_21 = (var_1_23 + var_1_24);
		}
	}


	// From: Req16Batch167Amount250
	var_1_60 = (var_1_55 && ((! var_1_57) && var_1_52));


	// From: Req19Batch167Amount250
	var_1_65 = var_1_37;


	// From: Req20Batch167Amount250
	if ((var_1_24 << var_1_65) == (var_1_22 / (min (var_1_35 , var_1_63)))) {
		var_1_66 = (max (var_1_7 , var_1_8));
	} else {
		if (var_1_13 < var_1_21) {
			var_1_66 = var_1_20;
		}
	}


	// From: Req9Batch167Amount250
	if (var_1_51) {
		if (var_1_60) {
			var_1_34 = ((max (var_1_23 , var_1_24)) + (var_1_35 - (min (var_1_36 , var_1_37))));
		} else {
			if (var_1_20 == 8.6f) {
				var_1_34 = ((max (var_1_36 , (abs (var_1_23)))) + var_1_37);
			} else {
				var_1_34 = var_1_24;
			}
		}
	} else {
		var_1_34 = var_1_37;
	}


	// From: Req6Batch167Amount250
	if (last_1_var_1_28 > var_1_24) {
		if (var_1_51 && ((var_1_14 > var_1_34) && var_1_60)) {
			var_1_28 = (abs (max (var_1_27 , var_1_38)));
		} else {
			var_1_28 = (last_1_var_1_28 + var_1_38);
		}
	} else {
		if (var_1_1 > (var_1_6 + var_1_1)) {
			var_1_28 = var_1_21;
		} else {
			var_1_28 = var_1_22;
		}
	}


	// From: Req13Batch167Amount250
	signed long int stepLocal_8 = var_1_42 * (abs (var_1_41));
	signed long int stepLocal_7 = 8;
	if (stepLocal_8 > (var_1_36 - var_1_23)) {
		if (var_1_34 > stepLocal_7) {
			var_1_44 = (max ((max (2.55 , var_1_6)) , (abs (abs (var_1_18)))));
		} else {
			if (var_1_11 > var_1_18) {
				var_1_44 = (((max (var_1_45 , var_1_46)) + (var_1_47 - var_1_48)) - (var_1_49 + var_1_50));
			} else {
				var_1_44 = (max (var_1_47 , (min (var_1_20 , var_1_50))));
			}
		}
	} else {
		var_1_44 = (max ((min (var_1_6 , var_1_49)) , var_1_7));
	}


	// From: Req11Batch167Amount250
	if (var_1_1 != ((- var_1_66) * (var_1_17 + var_1_8))) {
		var_1_39 = (max (var_1_22 , (var_1_40 - var_1_37)));
	} else {
		var_1_39 = (((var_1_41 - var_1_42) - var_1_37) + (var_1_35 - var_1_36));
	}


	// From: Req2Batch167Amount250
	unsigned char stepLocal_3 = var_1_7 > (- var_1_11);
	if (var_1_60 || stepLocal_3) {
		var_1_12 = (4 - (var_1_13 + var_1_14));
	}


	// From: Req12Batch167Amount250
	if ((max ((- var_1_66) , 9.99999999992E10f)) == 64.875) {
		var_1_43 = (min (var_1_37 , 16));
	} else {
		var_1_43 = ((var_1_41 - (abs (10))) + var_1_37);
	}


	// From: Req18Batch167Amount250
	signed long int stepLocal_12 = var_1_28 / var_1_41;
	if (stepLocal_12 > (var_1_14 - var_1_36)) {
		var_1_64 = var_1_17;
	}


	// From: Req15Batch167Amount250
	if ((var_1_47 - var_1_46) <= var_1_44) {
		var_1_59 = (max ((min (var_1_13 , (var_1_36 - var_1_41))) , (var_1_22 + 256)));
	}


	// From: Req3Batch167Amount250
	signed long int stepLocal_4 = var_1_28;
	if (stepLocal_4 < (max (var_1_13 , (var_1_43 ^ var_1_14)))) {
		if (var_1_51) {
			var_1_15 = (min ((max (var_1_11 , var_1_6)) , (min (var_1_7 , (var_1_16 + var_1_17)))));
		} else {
			var_1_15 = (var_1_16 + (var_1_18 + var_1_19));
		}
	} else {
		var_1_15 = ((max (var_1_16 , var_1_18)) + ((abs (var_1_19)) + var_1_20));
	}


	// From: Req7Batch167Amount250
	if (var_1_16 == (var_1_7 / (max (var_1_30 , var_1_31)))) {
		var_1_29 = ((min (var_1_59 , (2 + var_1_22))) + (max ((var_1_43 - var_1_13) , var_1_24)));
	}


	// From: Req5Batch167Amount250
	signed short int stepLocal_6 = var_1_13;
	unsigned char stepLocal_5 = var_1_23;
	if (var_1_32 > stepLocal_5) {
		if (var_1_59 > stepLocal_6) {
			var_1_25 = (min (var_1_22 , (abs (var_1_13))));
		} else {
			var_1_25 = (var_1_27 - 128);
		}
	}


	// From: Req17Batch167Amount250
	unsigned long int stepLocal_11 = var_1_32;
	if (stepLocal_11 < var_1_27) {
		if (! ((10 >> var_1_63) < (var_1_41 * var_1_25))) {
			var_1_61 = (min (var_1_32 , (var_1_25 + var_1_59)));
		} else {
			var_1_61 = (min (var_1_38 , -5));
		}
	} else {
		var_1_61 = var_1_39;
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -230584.3009213691400e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -230584.3009213691400e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	assume_abort_if_not(var_1_30 != 0.0F);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	assume_abort_if_not(var_1_31 != 0.0F);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 63);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 127);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 95);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 2305843.009213691400e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 0);
	var_1_63 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 30);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_66 = var_1_66;
}

int property(void) {
	return ((((((((((((((((((((last_1_var_1_21 != ((min (last_1_var_1_43 , last_1_var_1_61)) + last_1_var_1_65)) ? ((last_1_var_1_21 != (last_1_var_1_43 * last_1_var_1_65)) ? (var_1_1 == ((double) (max ((var_1_6 - var_1_7) , var_1_8)))) : 1) : ((var_1_9 || var_1_10) ? (var_1_1 == ((double) (min (var_1_6 , (var_1_7 - var_1_11))))) : (var_1_10 ? (var_1_1 == ((double) (var_1_6 - var_1_7))) : (var_1_1 == ((double) var_1_8))))) && ((var_1_60 || (var_1_7 > (- var_1_11))) ? (var_1_12 == ((signed short int) (4 - (var_1_13 + var_1_14)))) : 1)) && ((var_1_28 < (max (var_1_13 , (var_1_43 ^ var_1_14)))) ? (var_1_51 ? (var_1_15 == ((float) (min ((max (var_1_11 , var_1_6)) , (min (var_1_7 , (var_1_16 + var_1_17))))))) : (var_1_15 == ((float) (var_1_16 + (var_1_18 + var_1_19))))) : (var_1_15 == ((float) ((max (var_1_16 , var_1_18)) + ((abs (var_1_19)) + var_1_20)))))) && ((var_1_16 > var_1_18) ? (var_1_21 == ((unsigned char) (min (var_1_22 , 0)))) : ((((- var_1_7) / 8.272f) == var_1_16) ? (var_1_21 == ((unsigned char) (var_1_23 + var_1_24))) : 1))) && ((var_1_32 > var_1_23) ? ((var_1_59 > var_1_13) ? (var_1_25 == ((unsigned short int) (min (var_1_22 , (abs (var_1_13)))))) : (var_1_25 == ((unsigned short int) (var_1_27 - 128)))) : 1)) && ((last_1_var_1_28 > var_1_24) ? ((var_1_51 && ((var_1_14 > var_1_34) && var_1_60)) ? (var_1_28 == ((signed long int) (abs (max (var_1_27 , var_1_38))))) : (var_1_28 == ((signed long int) (last_1_var_1_28 + var_1_38)))) : ((var_1_1 > (var_1_6 + var_1_1)) ? (var_1_28 == ((signed long int) var_1_21)) : (var_1_28 == ((signed long int) var_1_22))))) && ((var_1_16 == (var_1_7 / (max (var_1_30 , var_1_31)))) ? (var_1_29 == ((signed short int) ((min (var_1_59 , (2 + var_1_22))) + (max ((var_1_43 - var_1_13) , var_1_24))))) : 1)) && ((last_1_var_1_61 == last_1_var_1_38) ? ((var_1_11 <= (- last_1_var_1_1)) ? (((min (var_1_26 , var_1_33)) <= var_1_23) ? (var_1_32 == ((unsigned long int) ((max (var_1_24 , last_1_var_1_61)) + var_1_23))) : 1) : ((last_1_var_1_32 <= last_1_var_1_25) ? (var_1_32 == ((unsigned long int) 16u)) : (var_1_32 == ((unsigned long int) var_1_22)))) : 1)) && (var_1_51 ? (var_1_60 ? (var_1_34 == ((unsigned char) ((max (var_1_23 , var_1_24)) + (var_1_35 - (min (var_1_36 , var_1_37)))))) : ((var_1_20 == 8.6f) ? (var_1_34 == ((unsigned char) ((max (var_1_36 , (abs (var_1_23)))) + var_1_37))) : (var_1_34 == ((unsigned char) var_1_24)))) : (var_1_34 == ((unsigned char) var_1_37)))) && (((- (last_1_var_1_61 ^ last_1_var_1_32)) <= -128) ? (var_1_38 == ((signed long int) ((min ((max (last_1_var_1_29 , 64)) , last_1_var_1_12)) - var_1_36))) : (var_1_38 == ((signed long int) (abs (128)))))) && ((var_1_1 != ((- var_1_66) * (var_1_17 + var_1_8))) ? (var_1_39 == ((unsigned char) (max (var_1_22 , (var_1_40 - var_1_37))))) : (var_1_39 == ((unsigned char) (((var_1_41 - var_1_42) - var_1_37) + (var_1_35 - var_1_36)))))) && (((max ((- var_1_66) , 9.99999999992E10f)) == 64.875) ? (var_1_43 == ((unsigned char) (min (var_1_37 , 16)))) : (var_1_43 == ((unsigned char) ((var_1_41 - (abs (10))) + var_1_37))))) && (((var_1_42 * (abs (var_1_41))) > (var_1_36 - var_1_23)) ? ((var_1_34 > 8) ? (var_1_44 == ((double) (max ((max (2.55 , var_1_6)) , (abs (abs (var_1_18))))))) : ((var_1_11 > var_1_18) ? (var_1_44 == ((double) (((max (var_1_45 , var_1_46)) + (var_1_47 - var_1_48)) - (var_1_49 + var_1_50)))) : (var_1_44 == ((double) (max (var_1_47 , (min (var_1_20 , var_1_50)))))))) : (var_1_44 == ((double) (max ((min (var_1_6 , var_1_49)) , var_1_7)))))) && ((((var_1_45 - var_1_50) / var_1_47) != (last_1_var_1_1 / var_1_30)) ? (((var_1_14 == last_1_var_1_38) && last_1_var_1_60) ? (var_1_51 == ((unsigned char) (var_1_52 && (var_1_53 && (var_1_54 && var_1_55))))) : (((max (var_1_31 , var_1_18)) >= last_1_var_1_15) ? ((last_1_var_1_66 <= last_1_var_1_15) ? (var_1_51 == ((unsigned char) (var_1_53 && var_1_56))) : (var_1_51 == ((unsigned char) ((! (var_1_56 || var_1_57)) && var_1_55)))) : 1)) : (last_1_var_1_60 ? ((var_1_52 || (last_1_var_1_59 >= last_1_var_1_43)) ? (var_1_51 == ((unsigned char) ((var_1_54 && last_1_var_1_60) || (var_1_53 && var_1_55)))) : 1) : 1))) && (((var_1_47 - var_1_46) <= var_1_44) ? (var_1_59 == ((signed short int) (max ((min (var_1_13 , (var_1_36 - var_1_41))) , (var_1_22 + 256))))) : 1)) && (var_1_60 == ((unsigned char) (var_1_55 && ((! var_1_57) && var_1_52))))) && ((var_1_32 < var_1_27) ? ((! ((10 >> var_1_63) < (var_1_41 * var_1_25))) ? (var_1_61 == ((signed long int) (min (var_1_32 , (var_1_25 + var_1_59))))) : (var_1_61 == ((signed long int) (min (var_1_38 , -5))))) : (var_1_61 == ((signed long int) var_1_39)))) && (((var_1_28 / var_1_41) > (var_1_14 - var_1_36)) ? (var_1_64 == ((double) var_1_17)) : 1)) && (var_1_65 == ((signed char) var_1_37))) && (((var_1_24 << var_1_65) == (var_1_22 / (min (var_1_35 , var_1_63)))) ? (var_1_66 == ((double) (max (var_1_7 , var_1_8)))) : ((var_1_13 < var_1_21) ? (var_1_66 == ((double) var_1_20)) : 1))
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

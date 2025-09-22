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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131Amount100.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 500;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 1;
unsigned short int var_1_5 = 256;
unsigned short int var_1_6 = 1;
unsigned short int var_1_7 = 16;
unsigned short int var_1_8 = 23563;
unsigned short int var_1_9 = 4;
signed long int var_1_10 = 200;
unsigned char var_1_11 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_15 = 0;
signed long int var_1_16 = -16;
unsigned short int var_1_17 = 8;
signed long int var_1_18 = 1508034739;
signed long int var_1_19 = -1000000;
double var_1_20 = 1.25;
double var_1_21 = 255.4;
double var_1_22 = 0.0;
double var_1_23 = 2.2;
double var_1_24 = 2.5;
unsigned short int var_1_25 = 5;
double var_1_26 = 63.4;
double var_1_27 = 25.175;
double var_1_28 = 63.75;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_3 = 1;
unsigned char last_1_var_1_29 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch131Amount100
	if (last_1_var_1_29) {
		if (last_1_var_1_29) {
			var_1_11 = (! var_1_13);
		} else {
			var_1_11 = (last_1_var_1_29 && var_1_15);
		}
	} else {
		var_1_11 = var_1_13;
	}


	// From: Req2Batch131Amount100
	unsigned char stepLocal_0 = var_1_11;
	if ((last_1_var_1_3 == var_1_2) || stepLocal_0) {
		var_1_3 = ((var_1_5 + var_1_6) + (max (var_1_7 , (var_1_8 - var_1_9))));
	}


	// From: Req1Batch131Amount100
	var_1_1 = (abs (var_1_2));


	// From: Req3Batch131Amount100
	signed long int stepLocal_1 = var_1_9 * var_1_2;
	if (stepLocal_1 >= (var_1_6 << var_1_5)) {
		var_1_10 = (min (var_1_2 , var_1_5));
	}


	// From: Req5Batch131Amount100
	signed long int stepLocal_2 = var_1_5 * var_1_3;
	if (! var_1_15) {
		if (((var_1_8 >> var_1_17) / 25) < stepLocal_2) {
			var_1_16 = ((var_1_18 - var_1_1) - (max (var_1_9 , var_1_6)));
		} else {
			var_1_16 = var_1_19;
		}
	}


	// From: Req7Batch131Amount100
	if (var_1_13 && var_1_11) {
		if (var_1_18 <= var_1_9) {
			var_1_24 = 99999.55;
		}
	}


	// From: Req8Batch131Amount100
	if (var_1_1 >= 256) {
		if (var_1_5 >= var_1_9) {
			var_1_25 = var_1_17;
		} else {
			var_1_25 = var_1_9;
		}
	} else {
		if (9.6 >= var_1_22) {
			var_1_25 = var_1_5;
		}
	}


	// From: Req9Batch131Amount100
	unsigned short int stepLocal_6 = var_1_2;
	if (! var_1_13) {
		if (stepLocal_6 < (max (var_1_16 , var_1_25))) {
			var_1_26 = (var_1_21 - (8.150042495941105E18 - var_1_23));
		} else {
			var_1_26 = (var_1_23 + var_1_27);
		}
	}


	// From: Req10Batch131Amount100
	if (! (var_1_5 != var_1_16)) {
		var_1_28 = (min ((var_1_22 - var_1_23) , 9.9999999125E7));
	}


	// From: Req11Batch131Amount100
	signed long int stepLocal_8 = var_1_10;
	unsigned short int stepLocal_7 = var_1_9;
	if (var_1_3 < stepLocal_7) {
		if (var_1_11) {
			if ((var_1_3 * var_1_9) >= stepLocal_8) {
				if (var_1_15) {
					var_1_29 = (var_1_11 && var_1_30);
				} else {
					var_1_29 = (! ((! var_1_30) && var_1_13));
				}
			} else {
				var_1_29 = (! (var_1_30 || var_1_31));
			}
		} else {
			var_1_29 = ((! var_1_31) && var_1_13);
		}
	} else {
		if (var_1_11) {
			var_1_29 = var_1_13;
		} else {
			var_1_29 = var_1_30;
		}
	}


	// From: Req6Batch131Amount100
	signed long int stepLocal_5 = var_1_6 + var_1_25;
	signed long int stepLocal_4 = var_1_6 - var_1_8;
	signed long int stepLocal_3 = var_1_10;
	if (var_1_10 < stepLocal_4) {
		if ((var_1_9 / var_1_8) == stepLocal_3) {
			if (stepLocal_5 > var_1_7) {
				var_1_20 = (var_1_21 - (var_1_22 - var_1_23));
			}
		}
	} else {
		var_1_20 = var_1_21;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16384);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 15);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 1073741822);
	assume_abort_if_not(var_1_18 <= 2147483646);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483647);
	assume_abort_if_not(var_1_19 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 4611686.018427383000e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_3 = var_1_3;
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	return ((((((((((var_1_1 == ((unsigned short int) (abs (var_1_2)))) && (((last_1_var_1_3 == var_1_2) || var_1_11) ? (var_1_3 == ((unsigned short int) ((var_1_5 + var_1_6) + (max (var_1_7 , (var_1_8 - var_1_9)))))) : 1)) && (((var_1_9 * var_1_2) >= (var_1_6 << var_1_5)) ? (var_1_10 == ((signed long int) (min (var_1_2 , var_1_5)))) : 1)) && (last_1_var_1_29 ? (last_1_var_1_29 ? (var_1_11 == ((unsigned char) (! var_1_13))) : (var_1_11 == ((unsigned char) (last_1_var_1_29 && var_1_15)))) : (var_1_11 == ((unsigned char) var_1_13)))) && ((! var_1_15) ? ((((var_1_8 >> var_1_17) / 25) < (var_1_5 * var_1_3)) ? (var_1_16 == ((signed long int) ((var_1_18 - var_1_1) - (max (var_1_9 , var_1_6))))) : (var_1_16 == ((signed long int) var_1_19))) : 1)) && ((var_1_10 < (var_1_6 - var_1_8)) ? (((var_1_9 / var_1_8) == var_1_10) ? (((var_1_6 + var_1_25) > var_1_7) ? (var_1_20 == ((double) (var_1_21 - (var_1_22 - var_1_23)))) : 1) : 1) : (var_1_20 == ((double) var_1_21)))) && ((var_1_13 && var_1_11) ? ((var_1_18 <= var_1_9) ? (var_1_24 == ((double) 99999.55)) : 1) : 1)) && ((var_1_1 >= 256) ? ((var_1_5 >= var_1_9) ? (var_1_25 == ((unsigned short int) var_1_17)) : (var_1_25 == ((unsigned short int) var_1_9))) : ((9.6 >= var_1_22) ? (var_1_25 == ((unsigned short int) var_1_5)) : 1))) && ((! var_1_13) ? ((var_1_2 < (max (var_1_16 , var_1_25))) ? (var_1_26 == ((double) (var_1_21 - (8.150042495941105E18 - var_1_23)))) : (var_1_26 == ((double) (var_1_23 + var_1_27)))) : 1)) && ((! (var_1_5 != var_1_16)) ? (var_1_28 == ((double) (min ((var_1_22 - var_1_23) , 9.9999999125E7)))) : 1)) && ((var_1_3 < var_1_9) ? (var_1_11 ? (((var_1_3 * var_1_9) >= var_1_10) ? (var_1_15 ? (var_1_29 == ((unsigned char) (var_1_11 && var_1_30))) : (var_1_29 == ((unsigned char) (! ((! var_1_30) && var_1_13))))) : (var_1_29 == ((unsigned char) (! (var_1_30 || var_1_31))))) : (var_1_29 == ((unsigned char) ((! var_1_31) && var_1_13)))) : (var_1_11 ? (var_1_29 == ((unsigned char) var_1_13)) : (var_1_29 == ((unsigned char) var_1_30))))
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

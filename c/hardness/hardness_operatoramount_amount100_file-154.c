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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch154Amount100.c", 13, "reach_error"); }
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
signed long int var_1_1 = 10;
signed long int var_1_3 = 32;
signed long int var_1_4 = 200;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed char var_1_8 = -5;
signed char var_1_9 = 1;
float var_1_10 = 127.5;
float var_1_11 = 1.2;
float var_1_12 = 7.5;
float var_1_13 = 5.8;
signed char var_1_14 = 5;
signed long int var_1_15 = 5;
double var_1_16 = 7.8;
double var_1_17 = 0.0;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
double var_1_20 = 99.4;
unsigned char var_1_21 = 0;
signed long int var_1_22 = -100;
signed long int var_1_23 = 10;
signed long int var_1_24 = 1712887287;
signed long int var_1_25 = 0;
unsigned long int var_1_26 = 8;
unsigned char var_1_27 = 4;
unsigned char var_1_28 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_5 = 1;
double last_1_var_1_16 = 7.8;
unsigned char last_1_var_1_18 = 1;
signed long int last_1_var_1_22 = -100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch154Amount100
	if (64.75 >= var_1_13) {
		var_1_18 = (var_1_7 && (last_1_var_1_5 || var_1_6));
	}


	// From: Req1Batch154Amount100
	if (last_1_var_1_18) {
		var_1_1 = (var_1_3 - var_1_4);
	} else {
		var_1_1 = (max (var_1_3 , var_1_4));
	}


	// From: Req3Batch154Amount100
	if (var_1_1 > var_1_4) {
		var_1_8 = (abs (abs (var_1_9)));
	}


	// From: Req4Batch154Amount100
	signed char stepLocal_2 = var_1_9;
	if (stepLocal_2 > var_1_3) {
		var_1_10 = ((abs (var_1_11)) - (var_1_12 + var_1_13));
	} else {
		var_1_10 = var_1_12;
	}


	// From: Req7Batch154Amount100
	if (last_1_var_1_16 >= var_1_11) {
		var_1_16 = ((9.164822881984425E18 - var_1_13) - (var_1_17 - var_1_12));
	}


	// From: Req9Batch154Amount100
	if (var_1_7) {
		var_1_19 = (((var_1_12 / var_1_17) < (var_1_13 - var_1_20)) && var_1_21);
	}


	// From: Req10Batch154Amount100
	unsigned char stepLocal_6 = var_1_16 != 1.8f;
	signed char stepLocal_5 = var_1_8;
	signed long int stepLocal_4 = (50 + var_1_23) - (var_1_24 - var_1_25);
	if (var_1_1 > stepLocal_5) {
		if (last_1_var_1_22 <= stepLocal_4) {
			if (stepLocal_6 || var_1_18) {
				var_1_22 = (min (var_1_9 , (var_1_8 + (var_1_25 - var_1_23))));
			}
		} else {
			var_1_22 = ((abs (var_1_9)) - var_1_23);
		}
	} else {
		var_1_22 = var_1_4;
	}


	// From: Req5Batch154Amount100
	if ((min ((max (50 , var_1_1)) , var_1_4)) <= var_1_9) {
		if (var_1_16 <= var_1_13) {
			if (var_1_1 > var_1_8) {
				var_1_14 = var_1_9;
			} else {
				var_1_14 = -4;
			}
		} else {
			var_1_14 = var_1_9;
		}
	}


	// From: Req11Batch154Amount100
	unsigned char stepLocal_7 = var_1_9 >= 16;
	if (stepLocal_7 || (var_1_14 < var_1_22)) {
		var_1_26 = var_1_24;
	}


	// From: Req12Batch154Amount100
	signed long int stepLocal_8 = max ((var_1_23 | var_1_24) , (var_1_22 * var_1_14));
	if (! var_1_19) {
		if ((16.25f + var_1_16) != var_1_16) {
			if (stepLocal_8 < -2) {
				var_1_27 = var_1_28;
			}
		} else {
			var_1_27 = var_1_28;
		}
	}


	// From: Req6Batch154Amount100
	signed long int stepLocal_3 = min ((var_1_3 / 2) , (var_1_22 * var_1_4));
	if (var_1_6) {
		if (stepLocal_3 <= ((var_1_9 + 2) * var_1_14)) {
			if (var_1_7) {
				var_1_15 = var_1_9;
			} else {
				var_1_15 = -2;
			}
		} else {
			var_1_15 = var_1_9;
		}
	}


	// From: Req2Batch154Amount100
	signed long int stepLocal_1 = var_1_4;
	signed long int stepLocal_0 = var_1_3;
	if (stepLocal_0 <= var_1_15) {
		var_1_5 = (var_1_6 && (var_1_19 || var_1_7));
	} else {
		if (var_1_3 == stepLocal_1) {
			var_1_5 = (var_1_7 && var_1_6);
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -126);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 4611686.018427383000e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1073741823);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	return (((((((((((last_1_var_1_18 ? (var_1_1 == ((signed long int) (var_1_3 - var_1_4))) : (var_1_1 == ((signed long int) (max (var_1_3 , var_1_4))))) && ((var_1_3 <= var_1_15) ? (var_1_5 == ((unsigned char) (var_1_6 && (var_1_19 || var_1_7)))) : ((var_1_3 == var_1_4) ? (var_1_5 == ((unsigned char) (var_1_7 && var_1_6))) : 1))) && ((var_1_1 > var_1_4) ? (var_1_8 == ((signed char) (abs (abs (var_1_9))))) : 1)) && ((var_1_9 > var_1_3) ? (var_1_10 == ((float) ((abs (var_1_11)) - (var_1_12 + var_1_13)))) : (var_1_10 == ((float) var_1_12)))) && (((min ((max (50 , var_1_1)) , var_1_4)) <= var_1_9) ? ((var_1_16 <= var_1_13) ? ((var_1_1 > var_1_8) ? (var_1_14 == ((signed char) var_1_9)) : (var_1_14 == ((signed char) -4))) : (var_1_14 == ((signed char) var_1_9))) : 1)) && (var_1_6 ? (((min ((var_1_3 / 2) , (var_1_22 * var_1_4))) <= ((var_1_9 + 2) * var_1_14)) ? (var_1_7 ? (var_1_15 == ((signed long int) var_1_9)) : (var_1_15 == ((signed long int) -2))) : (var_1_15 == ((signed long int) var_1_9))) : 1)) && ((last_1_var_1_16 >= var_1_11) ? (var_1_16 == ((double) ((9.164822881984425E18 - var_1_13) - (var_1_17 - var_1_12)))) : 1)) && ((64.75 >= var_1_13) ? (var_1_18 == ((unsigned char) (var_1_7 && (last_1_var_1_5 || var_1_6)))) : 1)) && (var_1_7 ? (var_1_19 == ((unsigned char) (((var_1_12 / var_1_17) < (var_1_13 - var_1_20)) && var_1_21))) : 1)) && ((var_1_1 > var_1_8) ? ((last_1_var_1_22 <= ((50 + var_1_23) - (var_1_24 - var_1_25))) ? (((var_1_16 != 1.8f) || var_1_18) ? (var_1_22 == ((signed long int) (min (var_1_9 , (var_1_8 + (var_1_25 - var_1_23)))))) : 1) : (var_1_22 == ((signed long int) ((abs (var_1_9)) - var_1_23)))) : (var_1_22 == ((signed long int) var_1_4)))) && (((var_1_9 >= 16) || (var_1_14 < var_1_22)) ? (var_1_26 == ((unsigned long int) var_1_24)) : 1)) && ((! var_1_19) ? (((16.25f + var_1_16) != var_1_16) ? (((max ((var_1_23 | var_1_24) , (var_1_22 * var_1_14))) < -2) ? (var_1_27 == ((unsigned char) var_1_28)) : 1) : (var_1_27 == ((unsigned char) var_1_28))) : 1)
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

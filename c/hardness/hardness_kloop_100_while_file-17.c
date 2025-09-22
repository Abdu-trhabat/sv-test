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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17100_while.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed long int var_1_4 = -10;
signed long int var_1_7 = 32;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1000;
signed long int var_1_11 = -10;
signed short int var_1_12 = 16;
signed short int var_1_13 = 2;
signed short int var_1_14 = 0;
signed short int var_1_15 = 50;
double var_1_16 = 7.3;
double var_1_17 = 0.2;
float var_1_18 = 3.5;
float var_1_19 = 128.2;
float var_1_20 = 5.8;
signed char var_1_21 = 1;
signed char var_1_22 = 16;
unsigned char var_1_23 = 1;
signed long int var_1_24 = -128;
signed long int var_1_25 = 1860288762;
signed long int var_1_26 = 256;
float var_1_27 = 3.5;
float var_1_28 = 2.125;
float var_1_29 = 64.75;
signed short int var_1_30 = -32;
float var_1_31 = 99.65;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_10 = 1000;
signed short int last_1_var_1_14 = 0;
double last_1_var_1_16 = 7.3;
unsigned char last_1_var_1_23 = 1;
signed long int last_1_var_1_24 = -128;
signed short int last_1_var_1_30 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch17100_while
	unsigned char stepLocal_5 = var_1_9;
	if (! (var_1_21 <= last_1_var_1_24)) {
		if (last_1_var_1_16 >= (- 5.7f)) {
			if (stepLocal_5 || last_1_var_1_23) {
				var_1_24 = (last_1_var_1_30 + (last_1_var_1_10 + var_1_12));
			} else {
				var_1_24 = (abs (last_1_var_1_10));
			}
		} else {
			var_1_24 = (((var_1_25 - var_1_21) - (max (256 , var_1_13))) - var_1_26);
		}
	}


	// From: Req10Batch17100_while
	if ((last_1_var_1_14 + var_1_7) == (var_1_12 + last_1_var_1_24)) {
		if (last_1_var_1_14 != var_1_4) {
			var_1_30 = (max (last_1_var_1_14 , last_1_var_1_30));
		} else {
			if (last_1_var_1_23 || var_1_9) {
				var_1_30 = last_1_var_1_14;
			} else {
				var_1_30 = var_1_12;
			}
		}
	}


	// From: Req3Batch17100_while
	var_1_14 = (-2 + (var_1_15 + last_1_var_1_30));


	// From: Req4Batch17100_while
	signed long int stepLocal_1 = -128 * var_1_14;
	if (var_1_14 == stepLocal_1) {
		var_1_16 = (max ((0.875 + (var_1_17 + 64.4)) , 1.0000000000000005E15));
	} else {
		var_1_16 = var_1_17;
	}


	// From: Req5Batch17100_while
	signed long int stepLocal_2 = (var_1_14 + -16) * var_1_14;
	if (stepLocal_2 >= var_1_15) {
		var_1_18 = (64.9f + var_1_19);
	} else {
		var_1_18 = var_1_17;
	}


	// From: Req6Batch17100_while
	signed long int stepLocal_3 = var_1_13 % var_1_22;
	if (stepLocal_3 >= (var_1_24 & var_1_21)) {
		var_1_20 = (min ((abs (63.5f + var_1_17)) , var_1_19));
	} else {
		var_1_20 = var_1_19;
	}


	// From: Req7Batch17100_while
	unsigned long int stepLocal_4 = ~ (var_1_13 * 128u);
	if (! (var_1_17 <= var_1_19)) {
		if (last_1_var_1_23) {
			if (stepLocal_4 == var_1_21) {
				var_1_23 = (! var_1_9);
			}
		} else {
			var_1_23 = var_1_9;
		}
	} else {
		var_1_23 = var_1_9;
	}


	// From: Req9Batch17100_while
	signed long int stepLocal_6 = var_1_26;
	if (var_1_30 != stepLocal_6) {
		var_1_27 = (min (((max (var_1_19 , var_1_17)) + var_1_28) , var_1_29));
	}


	// From: Req11Batch17100_while
	signed long int stepLocal_7 = var_1_24 * var_1_12;
	if ((- var_1_19) >= var_1_18) {
		if (stepLocal_7 >= var_1_25) {
			var_1_31 = var_1_28;
		}
	} else {
		var_1_31 = var_1_19;
	}


	// From: Req2Batch17100_while
	if ((-16 * var_1_30) > ((min (var_1_24 , var_1_14)) / var_1_11)) {
		var_1_10 = (min (var_1_14 , var_1_30));
	} else {
		var_1_10 = (var_1_12 - var_1_13);
	}


	// From: Req1Batch17100_while
	unsigned char stepLocal_0 = (var_1_14 | var_1_24) <= var_1_24;
	if (stepLocal_0 || ((min (var_1_30 , var_1_10)) > var_1_24)) {
		var_1_1 = ((! 1) && var_1_8);
	} else {
		var_1_1 = var_1_9;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -8191);
	assume_abort_if_not(var_1_15 <= 8192);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -128);
	assume_abort_if_not(var_1_22 <= 127);
	assume_abort_if_not(var_1_22 != 0);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 1610612734);
	assume_abort_if_not(var_1_25 <= 2147483646);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 2147483646);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_30 = var_1_30;
}

int property(void) {
	return (((((((((((((var_1_14 | var_1_24) <= var_1_24) || ((min (var_1_30 , var_1_10)) > var_1_24)) ? (var_1_1 == ((unsigned char) ((! 1) && var_1_8))) : (var_1_1 == ((unsigned char) var_1_9))) && (((-16 * var_1_30) > ((min (var_1_24 , var_1_14)) / var_1_11)) ? (var_1_10 == ((signed short int) (min (var_1_14 , var_1_30)))) : (var_1_10 == ((signed short int) (var_1_12 - var_1_13))))) && (var_1_14 == ((signed short int) (-2 + (var_1_15 + last_1_var_1_30))))) && ((var_1_14 == (-128 * var_1_14)) ? (var_1_16 == ((double) (max ((0.875 + (var_1_17 + 64.4)) , 1.0000000000000005E15)))) : (var_1_16 == ((double) var_1_17)))) && ((((var_1_14 + -16) * var_1_14) >= var_1_15) ? (var_1_18 == ((float) (64.9f + var_1_19))) : (var_1_18 == ((float) var_1_17)))) && (((var_1_13 % var_1_22) >= (var_1_24 & var_1_21)) ? (var_1_20 == ((float) (min ((abs (63.5f + var_1_17)) , var_1_19)))) : (var_1_20 == ((float) var_1_19)))) && ((! (var_1_17 <= var_1_19)) ? (last_1_var_1_23 ? (((~ (var_1_13 * 128u)) == var_1_21) ? (var_1_23 == ((unsigned char) (! var_1_9))) : 1) : (var_1_23 == ((unsigned char) var_1_9))) : (var_1_23 == ((unsigned char) var_1_9)))) && ((! (var_1_21 <= last_1_var_1_24)) ? ((last_1_var_1_16 >= (- 5.7f)) ? ((var_1_9 || last_1_var_1_23) ? (var_1_24 == ((signed long int) (last_1_var_1_30 + (last_1_var_1_10 + var_1_12)))) : (var_1_24 == ((signed long int) (abs (last_1_var_1_10))))) : (var_1_24 == ((signed long int) (((var_1_25 - var_1_21) - (max (256 , var_1_13))) - var_1_26)))) : 1)) && ((var_1_30 != var_1_26) ? (var_1_27 == ((float) (min (((max (var_1_19 , var_1_17)) + var_1_28) , var_1_29)))) : 1)) && (((last_1_var_1_14 + var_1_7) == (var_1_12 + last_1_var_1_24)) ? ((last_1_var_1_14 != var_1_4) ? (var_1_30 == ((signed short int) (max (last_1_var_1_14 , last_1_var_1_30)))) : ((last_1_var_1_23 || var_1_9) ? (var_1_30 == ((signed short int) last_1_var_1_14)) : (var_1_30 == ((signed short int) var_1_12)))) : 1)) && (((- var_1_19) >= var_1_18) ? (((var_1_24 * var_1_12) >= var_1_25) ? (var_1_31 == ((float) var_1_28)) : 1) : (var_1_31 == ((float) var_1_19)))
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

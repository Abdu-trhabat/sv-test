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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172100_1loop.c", 13, "reach_error"); }
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
signed short int var_1_1 = -8;
double var_1_2 = 127.5;
double var_1_3 = -0.5;
double var_1_4 = 0.2;
signed short int var_1_5 = 25;
signed short int var_1_6 = 25;
signed char var_1_7 = 4;
signed char var_1_8 = -4;
signed char var_1_9 = 25;
signed char var_1_10 = 8;
float var_1_11 = 10000000000.8;
unsigned char var_1_12 = 0;
float var_1_13 = 25.8;
float var_1_14 = 10.675;
signed long int var_1_15 = 25;
signed long int var_1_16 = 4;
unsigned char var_1_17 = 64;
float var_1_18 = 0.21199999999999997;
unsigned char var_1_19 = 1;
float var_1_20 = 10.5;
float var_1_21 = 24.75;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 100;
unsigned char var_1_24 = 64;
unsigned long int var_1_25 = 64;
signed char var_1_26 = -64;
float var_1_27 = 7.2;
signed char var_1_28 = -5;
unsigned char var_1_29 = 1;
signed short int var_1_30 = -1;
signed char var_1_31 = 8;
float var_1_32 = 2.625;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch172100_1loop
	if ((var_1_2 * var_1_3) > var_1_4) {
		var_1_1 = ((abs (var_1_5)) - var_1_6);
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch172100_1loop
	var_1_7 = (var_1_8 + (var_1_9 - var_1_10));


	// From: Req4Batch172100_1loop
	if (! var_1_12) {
		if ((abs (var_1_6)) >= (var_1_8 * var_1_5)) {
			var_1_15 = ((var_1_6 - var_1_16) + (abs (var_1_7)));
		}
	}


	// From: Req5Batch172100_1loop
	var_1_17 = var_1_9;


	// From: Req6Batch172100_1loop
	unsigned char stepLocal_0 = var_1_19;
	if (var_1_12 && stepLocal_0) {
		var_1_18 = (var_1_20 + var_1_21);
	}


	// From: Req7Batch172100_1loop
	signed long int stepLocal_1 = min (var_1_8 , var_1_10);
	if (var_1_19) {
		if (stepLocal_1 < var_1_15) {
			var_1_22 = ((var_1_23 + var_1_24) - var_1_9);
		}
	} else {
		var_1_22 = var_1_10;
	}


	// From: Req8Batch172100_1loop
	unsigned char stepLocal_3 = var_1_17;
	signed long int stepLocal_2 = var_1_15;
	if ((min (var_1_5 , var_1_15)) != stepLocal_3) {
		if (stepLocal_2 > -1) {
			var_1_25 = (min ((var_1_23 + (min (var_1_6 , var_1_1))) , var_1_16));
		}
	}


	// From: Req9Batch172100_1loop
	unsigned char stepLocal_4 = var_1_22;
	if (! var_1_12) {
		var_1_26 = (var_1_10 - var_1_9);
	} else {
		if (var_1_9 < stepLocal_4) {
			var_1_26 = var_1_10;
		} else {
			var_1_26 = var_1_9;
		}
	}


	// From: Req10Batch172100_1loop
	unsigned long int stepLocal_6 = - 10u;
	signed long int stepLocal_5 = ~ var_1_6;
	if ((var_1_1 ^ (- var_1_25)) != stepLocal_5) {
		if (stepLocal_6 >= var_1_15) {
			var_1_27 = (abs (var_1_21));
		}
	} else {
		var_1_27 = var_1_21;
	}


	// From: Req11Batch172100_1loop
	unsigned char stepLocal_7 = var_1_12 && var_1_29;
	if (var_1_19 && stepLocal_7) {
		var_1_28 = ((16 - var_1_9) + var_1_10);
	}


	// From: Req12Batch172100_1loop
	var_1_30 = var_1_24;


	// From: Req14Batch172100_1loop
	var_1_32 = var_1_13;


	// From: Req3Batch172100_1loop
	if (var_1_12) {
		if (var_1_6 >= (var_1_22 & (-1 / -2))) {
			var_1_11 = (min (var_1_13 , var_1_14));
		} else {
			var_1_11 = 32.625f;
		}
	} else {
		var_1_11 = var_1_13;
	}


	// From: Req13Batch172100_1loop
	unsigned long int stepLocal_9 = var_1_25;
	unsigned long int stepLocal_8 = var_1_25;
	if (9.999999999999994E14 == ((var_1_21 + var_1_4) + var_1_13)) {
		var_1_31 = ((abs (var_1_8)) + var_1_10);
	} else {
		if ((var_1_16 - var_1_1) > stepLocal_8) {
			if (((256.6 * var_1_27) * var_1_32) >= var_1_14) {
				var_1_31 = (min (var_1_10 , var_1_8));
			}
		} else {
			if ((abs (var_1_9 - var_1_10)) < stepLocal_9) {
				var_1_31 = 64;
			} else {
				var_1_31 = var_1_8;
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32766);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 63);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 64);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((((((((var_1_2 * var_1_3) > var_1_4) ? (var_1_1 == ((signed short int) ((abs (var_1_5)) - var_1_6))) : (var_1_1 == ((signed short int) var_1_5))) && (var_1_7 == ((signed char) (var_1_8 + (var_1_9 - var_1_10))))) && (var_1_12 ? ((var_1_6 >= (var_1_22 & (-1 / -2))) ? (var_1_11 == ((float) (min (var_1_13 , var_1_14)))) : (var_1_11 == ((float) 32.625f))) : (var_1_11 == ((float) var_1_13)))) && ((! var_1_12) ? (((abs (var_1_6)) >= (var_1_8 * var_1_5)) ? (var_1_15 == ((signed long int) ((var_1_6 - var_1_16) + (abs (var_1_7))))) : 1) : 1)) && (var_1_17 == ((unsigned char) var_1_9))) && ((var_1_12 && var_1_19) ? (var_1_18 == ((float) (var_1_20 + var_1_21))) : 1)) && (var_1_19 ? (((min (var_1_8 , var_1_10)) < var_1_15) ? (var_1_22 == ((unsigned char) ((var_1_23 + var_1_24) - var_1_9))) : 1) : (var_1_22 == ((unsigned char) var_1_10)))) && (((min (var_1_5 , var_1_15)) != var_1_17) ? ((var_1_15 > -1) ? (var_1_25 == ((unsigned long int) (min ((var_1_23 + (min (var_1_6 , var_1_1))) , var_1_16)))) : 1) : 1)) && ((! var_1_12) ? (var_1_26 == ((signed char) (var_1_10 - var_1_9))) : ((var_1_9 < var_1_22) ? (var_1_26 == ((signed char) var_1_10)) : (var_1_26 == ((signed char) var_1_9))))) && (((var_1_1 ^ (- var_1_25)) != (~ var_1_6)) ? (((- 10u) >= var_1_15) ? (var_1_27 == ((float) (abs (var_1_21)))) : 1) : (var_1_27 == ((float) var_1_21)))) && ((var_1_19 && (var_1_12 && var_1_29)) ? (var_1_28 == ((signed char) ((16 - var_1_9) + var_1_10))) : 1)) && (var_1_30 == ((signed short int) var_1_24))) && ((9.999999999999994E14 == ((var_1_21 + var_1_4) + var_1_13)) ? (var_1_31 == ((signed char) ((abs (var_1_8)) + var_1_10))) : (((var_1_16 - var_1_1) > var_1_25) ? ((((256.6 * var_1_27) * var_1_32) >= var_1_14) ? (var_1_31 == ((signed char) (min (var_1_10 , var_1_8)))) : 1) : (((abs (var_1_9 - var_1_10)) < var_1_25) ? (var_1_31 == ((signed char) 64)) : (var_1_31 == ((signed char) var_1_8)))))) && (var_1_32 == ((float) var_1_13))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}

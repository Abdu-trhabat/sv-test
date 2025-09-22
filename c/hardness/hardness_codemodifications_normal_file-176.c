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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176normal.c", 13, "reach_error"); }
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
signed char var_1_1 = 64;
signed char var_1_2 = -128;
signed char var_1_3 = -100;
signed char var_1_4 = 100;
signed long int var_1_5 = -200;
signed char var_1_6 = 100;
signed char var_1_7 = 4;
signed char var_1_8 = 100;
signed char var_1_9 = 100;
double var_1_10 = 128.5;
unsigned char var_1_11 = 0;
double var_1_12 = 99.975;
double var_1_13 = -0.8;
double var_1_14 = 255.2;
double var_1_15 = 15.4;
unsigned long int var_1_16 = 128;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
float var_1_21 = 32.625;
float var_1_22 = 3.75;
float var_1_23 = 8.5;
float var_1_24 = 10.8;
float var_1_25 = 1000000000.6;
signed char var_1_26 = 0;
unsigned short int var_1_27 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch176normal
	if (((var_1_2 * 4) % (min (var_1_3 , var_1_4))) <= var_1_5) {
		var_1_1 = ((max ((var_1_6 - var_1_7) , var_1_8)) - var_1_9);
	}


	// From: Req2Batch176normal
	if ((var_1_5 <= var_1_3) && var_1_11) {
		if ((max (var_1_12 , var_1_13)) < var_1_14) {
			var_1_10 = var_1_15;
		} else {
			var_1_10 = 31.5;
		}
	} else {
		var_1_10 = var_1_15;
	}


	// From: Req3Batch176normal
	if (var_1_2 > var_1_8) {
		var_1_16 = (var_1_7 + var_1_6);
	}


	// From: Req4Batch176normal
	if (var_1_11 || var_1_18) {
		var_1_17 = (((var_1_10 > var_1_15) || var_1_19) && (! var_1_20));
	} else {
		var_1_17 = 0;
	}


	// From: Req5Batch176normal
	if (var_1_11) {
		var_1_21 = (min (var_1_15 , var_1_22));
	} else {
		if (var_1_2 <= (var_1_1 * var_1_4)) {
			if ((var_1_6 + var_1_1) < var_1_5) {
				var_1_21 = (var_1_23 + var_1_24);
			}
		} else {
			var_1_21 = (var_1_25 - (1.6f + 8.8f));
		}
	}


	// From: Req6Batch176normal
	if ((max (var_1_14 , var_1_21)) >= var_1_24) {
		var_1_26 = (var_1_7 - 8);
	}


	// From: Req7Batch176normal
	var_1_27 = var_1_6;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 62);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 * 4) % (min (var_1_3 , var_1_4))) <= var_1_5) ? (var_1_1 == ((signed char) ((max ((var_1_6 - var_1_7) , var_1_8)) - var_1_9))) : 1) && (((var_1_5 <= var_1_3) && var_1_11) ? (((max (var_1_12 , var_1_13)) < var_1_14) ? (var_1_10 == ((double) var_1_15)) : (var_1_10 == ((double) 31.5))) : (var_1_10 == ((double) var_1_15)))) && ((var_1_2 > var_1_8) ? (var_1_16 == ((unsigned long int) (var_1_7 + var_1_6))) : 1)) && ((var_1_11 || var_1_18) ? (var_1_17 == ((unsigned char) (((var_1_10 > var_1_15) || var_1_19) && (! var_1_20)))) : (var_1_17 == ((unsigned char) 0)))) && (var_1_11 ? (var_1_21 == ((float) (min (var_1_15 , var_1_22)))) : ((var_1_2 <= (var_1_1 * var_1_4)) ? (((var_1_6 + var_1_1) < var_1_5) ? (var_1_21 == ((float) (var_1_23 + var_1_24))) : 1) : (var_1_21 == ((float) (var_1_25 - (1.6f + 8.8f))))))) && (((max (var_1_14 , var_1_21)) >= var_1_24) ? (var_1_26 == ((signed char) (var_1_7 - 8))) : 1)) && (var_1_27 == ((unsigned short int) var_1_6))
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

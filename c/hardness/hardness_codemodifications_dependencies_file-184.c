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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184dependencies.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 100;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 100;
signed long int var_1_5 = -4;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 4;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 2;
double var_1_12 = 128.75;
double var_1_13 = 499.9;
double var_1_14 = 127.6;
double var_1_15 = 7.5;
double var_1_16 = 15.25;
unsigned char var_1_17 = 1;
double var_1_18 = 0.09999999999999998;
double var_1_19 = 1.375;
float var_1_20 = 100000000000000.5;
unsigned short int var_1_22 = 200;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch184dependencies
	if (var_1_4 <= var_1_5) {
		var_1_8 = ((min (var_1_9 , var_1_10)) - (64 - var_1_11));
	} else {
		var_1_8 = (max ((min (var_1_9 , var_1_11)) , var_1_10));
	}


	// From: Req3Batch184dependencies
	if (((var_1_10 | var_1_4) * var_1_8) <= var_1_5) {
		var_1_12 = (var_1_13 - var_1_14);
	} else {
		var_1_12 = (var_1_15 + var_1_16);
	}


	// From: Req4Batch184dependencies
	if (var_1_14 <= (max (var_1_13 , (var_1_18 - var_1_19)))) {
		var_1_17 = var_1_6;
	}


	// From: Req1Batch184dependencies
	if ((var_1_8 / (min (var_1_3 , var_1_4))) <= var_1_5) {
		if (var_1_4 >= 100) {
			var_1_1 = var_1_6;
		} else {
			if (var_1_6) {
				var_1_1 = var_1_7;
			} else {
				var_1_1 = 0;
			}
		}
	} else {
		var_1_1 = 0;
	}


	// From: Req5Batch184dependencies
	if (var_1_7 || (var_1_17 || var_1_6)) {
		if (var_1_1) {
			var_1_20 = (min (var_1_15 , (abs (var_1_16))));
		}
	} else {
		var_1_20 = (var_1_16 + var_1_15);
	}


	// From: Req6Batch184dependencies
	if (! var_1_1) {
		var_1_22 = (abs (min (var_1_8 , var_1_2)));
	} else {
		if (1 < (var_1_3 + var_1_5)) {
			var_1_22 = var_1_9;
		} else {
			var_1_22 = var_1_8;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 127);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_8 / (min (var_1_3 , var_1_4))) <= var_1_5) ? ((var_1_4 >= 100) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_6 ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) 0)))) : (var_1_1 == ((unsigned char) 0))) && ((var_1_4 <= var_1_5) ? (var_1_8 == ((unsigned char) ((min (var_1_9 , var_1_10)) - (64 - var_1_11)))) : (var_1_8 == ((unsigned char) (max ((min (var_1_9 , var_1_11)) , var_1_10)))))) && ((((var_1_10 | var_1_4) * var_1_8) <= var_1_5) ? (var_1_12 == ((double) (var_1_13 - var_1_14))) : (var_1_12 == ((double) (var_1_15 + var_1_16))))) && ((var_1_14 <= (max (var_1_13 , (var_1_18 - var_1_19)))) ? (var_1_17 == ((unsigned char) var_1_6)) : 1)) && ((var_1_7 || (var_1_17 || var_1_6)) ? (var_1_1 ? (var_1_20 == ((float) (min (var_1_15 , (abs (var_1_16)))))) : 1) : (var_1_20 == ((float) (var_1_16 + var_1_15))))) && ((! var_1_1) ? (var_1_22 == ((unsigned short int) (abs (min (var_1_8 , var_1_2))))) : ((1 < (var_1_3 + var_1_5)) ? (var_1_22 == ((unsigned short int) var_1_9)) : (var_1_22 == ((unsigned short int) var_1_8))))
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

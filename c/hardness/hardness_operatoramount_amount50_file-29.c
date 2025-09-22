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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29Amount50.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
double var_1_4 = 99999.75;
double var_1_5 = 31.75;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = 0;
signed short int var_1_9 = 0;
signed short int var_1_10 = 8;
signed char var_1_11 = 1;
signed char var_1_12 = 32;
signed char var_1_13 = -2;
signed char var_1_14 = 8;
signed char var_1_15 = 0;
signed char var_1_16 = 10;
signed char var_1_17 = 32;
unsigned char var_1_18 = 0;
signed char var_1_19 = -1;
signed short int var_1_20 = 100;
double var_1_21 = 9.25;
signed short int var_1_22 = 29265;
float var_1_23 = 31.6;
float var_1_24 = 9.2;
float var_1_25 = 15.6;
float var_1_26 = 25.25;
unsigned long int var_1_27 = 256;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_18 = 0;
unsigned long int last_1_var_1_27 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch29Amount50
	if (last_1_var_1_18) {
		var_1_11 = (var_1_12 + (min (var_1_13 , var_1_14)));
	} else {
		if (last_1_var_1_27 >= var_1_14) {
			var_1_11 = ((var_1_15 + var_1_16) - var_1_17);
		} else {
			if (var_1_7) {
				var_1_11 = var_1_16;
			} else {
				var_1_11 = var_1_12;
			}
		}
	}


	// From: Req4Batch29Amount50
	if (var_1_4 == var_1_5) {
		if (var_1_15 >= (var_1_11 / var_1_19)) {
			var_1_18 = var_1_7;
		}
	}


	// From: Req2Batch29Amount50
	var_1_8 = (var_1_9 - (2 + var_1_10));


	// From: Req5Batch29Amount50
	if ((- (min (var_1_4 , var_1_5))) > (1.625 * var_1_21)) {
		var_1_20 = ((var_1_22 - (var_1_16 + var_1_15)) - var_1_10);
	} else {
		var_1_20 = var_1_19;
	}


	// From: Req6Batch29Amount50
	if (var_1_22 != var_1_12) {
		if (var_1_10 <= var_1_17) {
			var_1_23 = (var_1_24 + (max (var_1_25 , var_1_26)));
		}
	} else {
		var_1_23 = var_1_25;
	}


	// From: Req7Batch29Amount50
	if (! ((var_1_9 - var_1_22) > var_1_12)) {
		var_1_27 = var_1_15;
	}


	// From: Req1Batch29Amount50
	if (var_1_18) {
		var_1_1 = (((-128 <= var_1_27) || (var_1_4 >= var_1_5)) && var_1_6);
	} else {
		var_1_1 = var_1_7;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -128);
	assume_abort_if_not(var_1_19 <= 127);
	assume_abort_if_not(var_1_19 != 0);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 16382);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	return ((((((var_1_18 ? (var_1_1 == ((unsigned char) (((-128 <= var_1_27) || (var_1_4 >= var_1_5)) && var_1_6))) : (var_1_1 == ((unsigned char) var_1_7))) && (var_1_8 == ((signed short int) (var_1_9 - (2 + var_1_10))))) && (last_1_var_1_18 ? (var_1_11 == ((signed char) (var_1_12 + (min (var_1_13 , var_1_14))))) : ((last_1_var_1_27 >= var_1_14) ? (var_1_11 == ((signed char) ((var_1_15 + var_1_16) - var_1_17))) : (var_1_7 ? (var_1_11 == ((signed char) var_1_16)) : (var_1_11 == ((signed char) var_1_12)))))) && ((var_1_4 == var_1_5) ? ((var_1_15 >= (var_1_11 / var_1_19)) ? (var_1_18 == ((unsigned char) var_1_7)) : 1) : 1)) && (((- (min (var_1_4 , var_1_5))) > (1.625 * var_1_21)) ? (var_1_20 == ((signed short int) ((var_1_22 - (var_1_16 + var_1_15)) - var_1_10))) : (var_1_20 == ((signed short int) var_1_19)))) && ((var_1_22 != var_1_12) ? ((var_1_10 <= var_1_17) ? (var_1_23 == ((float) (var_1_24 + (max (var_1_25 , var_1_26))))) : 1) : (var_1_23 == ((float) var_1_25)))) && ((! ((var_1_9 - var_1_22) > var_1_12)) ? (var_1_27 == ((unsigned long int) var_1_15)) : 1)
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

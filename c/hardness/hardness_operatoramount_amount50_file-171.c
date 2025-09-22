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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch171Amount50.c", 13, "reach_error"); }
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
signed short int var_1_1 = -25;
signed short int var_1_4 = 500;
signed short int var_1_5 = 2;
signed short int var_1_6 = 29880;
signed short int var_1_7 = 32;
unsigned long int var_1_8 = 0;
double var_1_9 = 31.75;
double var_1_10 = 999999999999.6;
signed char var_1_11 = -25;
signed char var_1_12 = -1;
signed char var_1_13 = -5;
signed char var_1_14 = -32;
signed char var_1_15 = 64;
unsigned char var_1_16 = 0;
signed long int var_1_17 = 64;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 10000000;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 10;
unsigned char var_1_24 = 100;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch171Amount50
	signed long int stepLocal_0 = -64 * var_1_5;
	if ((var_1_9 * 50.7) <= var_1_10) {
		if (stepLocal_0 >= var_1_7) {
			var_1_8 = (max (var_1_6 , 100u));
		}
	}


	// From: Req3Batch171Amount50
	signed short int stepLocal_1 = var_1_5;
	if (var_1_6 >= stepLocal_1) {
		var_1_11 = (min ((var_1_12 + (min (var_1_13 , var_1_14))) , var_1_15));
	} else {
		var_1_11 = var_1_14;
	}


	// From: Req5Batch171Amount50
	unsigned long int stepLocal_3 = var_1_8;
	signed char stepLocal_2 = var_1_15;
	if (stepLocal_3 <= var_1_6) {
		if (var_1_7 <= stepLocal_2) {
			var_1_19 = (min (var_1_5 , var_1_6));
		} else {
			var_1_19 = var_1_7;
		}
	} else {
		var_1_19 = var_1_4;
	}


	// From: Req6Batch171Amount50
	unsigned long int stepLocal_4 = var_1_17 + (var_1_19 * var_1_6);
	if (var_1_11 >= stepLocal_4) {
		var_1_20 = var_1_21;
	} else {
		var_1_20 = ((var_1_5 <= var_1_6) || var_1_21);
	}


	// From: Req1Batch171Amount50
	if (last_1_var_1_1 != var_1_19) {
		var_1_1 = ((var_1_4 + var_1_5) - (var_1_6 - var_1_7));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req4Batch171Amount50
	if (var_1_19 <= var_1_7) {
		if (-5 <= ((1221592084 - 5) - var_1_17)) {
			var_1_16 = var_1_18;
		}
	}


	// From: Req7Batch171Amount50
	if (! (! var_1_16)) {
		if (var_1_12 > var_1_15) {
			var_1_22 = var_1_24;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 16383);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
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
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	return (((((((last_1_var_1_1 != var_1_19) ? (var_1_1 == ((signed short int) ((var_1_4 + var_1_5) - (var_1_6 - var_1_7)))) : (var_1_1 == ((signed short int) var_1_6))) && (((var_1_9 * 50.7) <= var_1_10) ? (((-64 * var_1_5) >= var_1_7) ? (var_1_8 == ((unsigned long int) (max (var_1_6 , 100u)))) : 1) : 1)) && ((var_1_6 >= var_1_5) ? (var_1_11 == ((signed char) (min ((var_1_12 + (min (var_1_13 , var_1_14))) , var_1_15)))) : (var_1_11 == ((signed char) var_1_14)))) && ((var_1_19 <= var_1_7) ? ((-5 <= ((1221592084 - 5) - var_1_17)) ? (var_1_16 == ((unsigned char) var_1_18)) : 1) : 1)) && ((var_1_8 <= var_1_6) ? ((var_1_7 <= var_1_15) ? (var_1_19 == ((unsigned long int) (min (var_1_5 , var_1_6)))) : (var_1_19 == ((unsigned long int) var_1_7))) : (var_1_19 == ((unsigned long int) var_1_4)))) && ((var_1_11 >= (var_1_17 + (var_1_19 * var_1_6))) ? (var_1_20 == ((unsigned char) var_1_21)) : (var_1_20 == ((unsigned char) ((var_1_5 <= var_1_6) || var_1_21))))) && ((! (! var_1_16)) ? ((var_1_12 > var_1_15) ? (var_1_22 == ((unsigned char) var_1_24)) : 1) : 1)
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

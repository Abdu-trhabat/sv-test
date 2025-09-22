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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51dependencies.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 128;
unsigned long int var_1_2 = 32;
unsigned long int var_1_3 = 128;
double var_1_4 = 32.3;
double var_1_5 = 0.25;
unsigned char var_1_7 = 2;
signed char var_1_8 = -10;
signed char var_1_9 = 5;
signed char var_1_10 = 4;
signed char var_1_11 = 100;
unsigned long int var_1_12 = 8;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned long int var_1_15 = 1114432789;
unsigned long int var_1_16 = 2;
double var_1_17 = 256.8;
double var_1_18 = 1.25;
unsigned long int var_1_19 = 16;
unsigned char var_1_21 = 1;
double var_1_22 = -0.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;

// Calibration values

// Last'ed variables
double last_1_var_1_17 = 256.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch51dependencies
	if (32u >= var_1_2) {
		if (var_1_2 <= var_1_3) {
			if ((var_1_4 - var_1_5) >= last_1_var_1_17) {
				var_1_1 = var_1_7;
			}
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req3Batch51dependencies
	if (var_1_13 && var_1_14) {
		var_1_12 = var_1_11;
	} else {
		if (var_1_13) {
			var_1_12 = ((max (var_1_1 , (var_1_11 + var_1_7))) + (var_1_15 - var_1_16));
		}
	}


	// From: Req4Batch51dependencies
	if ((min ((~ var_1_12) , 8)) > var_1_11) {
		var_1_17 = var_1_18;
	}


	// From: Req2Batch51dependencies
	if (! (var_1_17 > var_1_5)) {
		var_1_8 = ((min (var_1_9 , var_1_10)) - var_1_11);
	} else {
		var_1_8 = -4;
	}


	// From: Req6Batch51dependencies
	if ((var_1_18 / (max (5.5 , var_1_22))) > 10.5) {
		if (var_1_13) {
			if (var_1_2 < var_1_3) {
				var_1_21 = (! var_1_23);
			} else {
				var_1_21 = var_1_24;
			}
		} else {
			var_1_21 = var_1_23;
		}
	} else {
		var_1_21 = var_1_23;
	}


	// From: Req5Batch51dependencies
	if (var_1_21 || ((max (var_1_4 , var_1_17)) > var_1_18)) {
		if (var_1_18 > (abs (var_1_17))) {
			var_1_19 = var_1_16;
		} else {
			var_1_19 = var_1_11;
		}
	} else {
		var_1_19 = var_1_16;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 1073741823);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	return ((((((32u >= var_1_2) ? ((var_1_2 <= var_1_3) ? (((var_1_4 - var_1_5) >= last_1_var_1_17) ? (var_1_1 == ((unsigned char) var_1_7)) : 1) : 1) : (var_1_1 == ((unsigned char) var_1_7))) && ((! (var_1_17 > var_1_5)) ? (var_1_8 == ((signed char) ((min (var_1_9 , var_1_10)) - var_1_11))) : (var_1_8 == ((signed char) -4)))) && ((var_1_13 && var_1_14) ? (var_1_12 == ((unsigned long int) var_1_11)) : (var_1_13 ? (var_1_12 == ((unsigned long int) ((max (var_1_1 , (var_1_11 + var_1_7))) + (var_1_15 - var_1_16)))) : 1))) && (((min ((~ var_1_12) , 8)) > var_1_11) ? (var_1_17 == ((double) var_1_18)) : 1)) && ((var_1_21 || ((max (var_1_4 , var_1_17)) > var_1_18)) ? ((var_1_18 > (abs (var_1_17))) ? (var_1_19 == ((unsigned long int) var_1_16)) : (var_1_19 == ((unsigned long int) var_1_11))) : (var_1_19 == ((unsigned long int) var_1_16)))) && (((var_1_18 / (max (5.5 , var_1_22))) > 10.5) ? (var_1_13 ? ((var_1_2 < var_1_3) ? (var_1_21 == ((unsigned char) (! var_1_23))) : (var_1_21 == ((unsigned char) var_1_24))) : (var_1_21 == ((unsigned char) var_1_23))) : (var_1_21 == ((unsigned char) var_1_23)))
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

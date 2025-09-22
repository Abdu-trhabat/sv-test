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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch90dependencies.c", 13, "reach_error"); }
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
signed long int var_1_1 = -32;
signed long int var_1_2 = 16;
signed long int var_1_3 = 10;
signed long int var_1_4 = 64;
signed long int var_1_5 = -10;
signed long int var_1_10 = 5;
signed long int var_1_11 = -4;
signed char var_1_12 = 4;
signed long int var_1_13 = 100000;
signed char var_1_14 = -16;
double var_1_15 = 2.25;
signed long int var_1_16 = 2;
unsigned char var_1_17 = 0;
signed short int var_1_18 = -1;
signed short int var_1_19 = 4;
signed short int var_1_20 = 32;
double var_1_21 = 4.5;
double var_1_22 = 8.75;
double var_1_23 = 1000.8;
double var_1_24 = 63.5;
double var_1_25 = 31.5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -32;
signed long int last_1_var_1_16 = 2;
double last_1_var_1_21 = 4.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch90dependencies
	if (8.5 <= last_1_var_1_21) {
		if (var_1_17 || ((var_1_11 & var_1_3) != var_1_13)) {
			var_1_16 = var_1_10;
		}
	} else {
		var_1_16 = 0;
	}


	// From: Req3Batch90dependencies
	if ((last_1_var_1_1 + last_1_var_1_16) != var_1_13) {
		var_1_15 = 16.4;
	}


	// From: Req2Batch90dependencies
	if (((var_1_16 * var_1_4) * (-500 / var_1_3)) <= (var_1_2 - var_1_13)) {
		var_1_12 = var_1_14;
	} else {
		var_1_12 = 5;
	}


	// From: Req5Batch90dependencies
	if (var_1_17) {
		var_1_18 = (var_1_19 - var_1_20);
	} else {
		var_1_18 = (var_1_14 + var_1_12);
	}


	// From: Req6Batch90dependencies
	if (-50 == (var_1_3 + var_1_16)) {
		var_1_21 = (((min (var_1_22 , var_1_23)) - var_1_24) + var_1_25);
	} else {
		if (var_1_15 > var_1_25) {
			if ((var_1_19 - var_1_20) <= var_1_13) {
				var_1_21 = var_1_22;
			} else {
				var_1_21 = var_1_25;
			}
		}
	}


	// From: Req1Batch90dependencies
	if ((var_1_2 / (min (var_1_3 , var_1_4))) <= (var_1_5 | last_1_var_1_1)) {
		if ((var_1_21 * var_1_15) < var_1_21) {
			var_1_1 = var_1_10;
		} else {
			var_1_1 = var_1_11;
		}
	} else {
		var_1_1 = var_1_10;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483647);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	return (((((((var_1_2 / (min (var_1_3 , var_1_4))) <= (var_1_5 | last_1_var_1_1)) ? (((var_1_21 * var_1_15) < var_1_21) ? (var_1_1 == ((signed long int) var_1_10)) : (var_1_1 == ((signed long int) var_1_11))) : (var_1_1 == ((signed long int) var_1_10))) && ((((var_1_16 * var_1_4) * (-500 / var_1_3)) <= (var_1_2 - var_1_13)) ? (var_1_12 == ((signed char) var_1_14)) : (var_1_12 == ((signed char) 5)))) && (((last_1_var_1_1 + last_1_var_1_16) != var_1_13) ? (var_1_15 == ((double) 16.4)) : 1)) && ((8.5 <= last_1_var_1_21) ? ((var_1_17 || ((var_1_11 & var_1_3) != var_1_13)) ? (var_1_16 == ((signed long int) var_1_10)) : 1) : (var_1_16 == ((signed long int) 0)))) && (var_1_17 ? (var_1_18 == ((signed short int) (var_1_19 - var_1_20))) : (var_1_18 == ((signed short int) (var_1_14 + var_1_12))))) && ((-50 == (var_1_3 + var_1_16)) ? (var_1_21 == ((double) (((min (var_1_22 , var_1_23)) - var_1_24) + var_1_25))) : ((var_1_15 > var_1_25) ? (((var_1_19 - var_1_20) <= var_1_13) ? (var_1_21 == ((double) var_1_22)) : (var_1_21 == ((double) var_1_25))) : 1))
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

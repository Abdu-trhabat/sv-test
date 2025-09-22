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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch151has_floats.c", 13, "reach_error"); }
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
double var_1_1 = -256.0;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
double var_1_7 = -8.0;
double var_1_8 = 256.0;
double var_1_9 = -4.0;
signed char var_1_10 = -50;
signed char var_1_11 = 100;
signed long int var_1_12 = -8;
signed char var_1_13 = 100;
double var_1_14 = 1.0;
double var_1_15 = -64.0;
unsigned short int var_1_16 = 50;
unsigned short int var_1_17 = 5;

// Calibration values

// Last'ed variables
double last_1_var_1_14 = 1.0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch151has_floats
	unsigned char stepLocal_0 = var_1_2 || var_1_3;
	if (stepLocal_0 && (8.0 == last_1_var_1_14)) {
		var_1_1 = (var_1_7 + (var_1_8 + var_1_9));
	} else {
		var_1_1 = var_1_9;
	}


	// From: Req3Batch151has_floats
	if (var_1_7 < ((- -100.0) + (var_1_1 / var_1_15))) {
		var_1_14 = (min (((var_1_9 + var_1_8) + 5.0) , var_1_7));
	}


	// From: Req2Batch151has_floats
	signed long int stepLocal_1 = var_1_12;
	if ((-32 % var_1_11) <= stepLocal_1) {
		var_1_10 = var_1_13;
	} else {
		if (var_1_7 <= var_1_14) {
			var_1_10 = var_1_13;
		}
	}


	// From: Req4Batch151has_floats
	signed long int stepLocal_2 = var_1_12 * var_1_10;
	if (var_1_2) {
		if (stepLocal_2 < var_1_11) {
			if (var_1_1 > var_1_9) {
				var_1_16 = var_1_17;
			} else {
				var_1_16 = 0;
			}
		}
	} else {
		var_1_16 = var_1_17;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -230584.3009213691400e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -230584.3009213691400e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -128);
	assume_abort_if_not(var_1_11 <= 127);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	return (((((var_1_2 || var_1_3) && (8.0 == last_1_var_1_14)) ? (var_1_1 == ((double) (var_1_7 + (var_1_8 + var_1_9)))) : (var_1_1 == ((double) var_1_9))) && (((-32 % var_1_11) <= var_1_12) ? (var_1_10 == ((signed char) var_1_13)) : ((var_1_7 <= var_1_14) ? (var_1_10 == ((signed char) var_1_13)) : 1))) && ((var_1_7 < ((- -100.0) + (var_1_1 / var_1_15))) ? (var_1_14 == ((double) (min (((var_1_9 + var_1_8) + 5.0) , var_1_7)))) : 1)) && (var_1_2 ? (((var_1_12 * var_1_10) < var_1_11) ? ((var_1_1 > var_1_9) ? (var_1_16 == ((unsigned short int) var_1_17)) : (var_1_16 == ((unsigned short int) 0))) : 1) : (var_1_16 == ((unsigned short int) var_1_17)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162has_floats.c", 13, "reach_error"); }
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
double var_1_1 = -4.0;
unsigned long int var_1_2 = 5;
unsigned long int var_1_3 = 25;
double var_1_4 = -2.0;
double var_1_5 = 10.0;
double var_1_6 = 128.0;
signed long int var_1_7 = -8;
signed long int var_1_8 = 10;
signed long int var_1_9 = 1;
signed long int var_1_10 = 10;
signed long int var_1_11 = 1000000000;
double var_1_12 = 128.0;
double var_1_13 = -64.0;
double var_1_14 = 1.0;
signed char var_1_15 = -8;
signed char var_1_16 = 32;
signed char var_1_17 = 32;
signed char var_1_18 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch162has_floats
	unsigned long int stepLocal_0 = var_1_3;
	if (var_1_2 > stepLocal_0) {
		var_1_1 = (var_1_4 + ((min (var_1_5 , var_1_6)) - 128.0));
	}


	// From: Req2Batch162has_floats
	if (var_1_5 > var_1_6) {
		var_1_7 = (max (((var_1_8 + var_1_9) - var_1_10) , var_1_11));
	}


	// From: Req3Batch162has_floats
	if ((var_1_5 - (var_1_6 + 100.0)) > (var_1_4 + var_1_1)) {
		var_1_12 = ((var_1_13 + var_1_14) + (max (var_1_6 , var_1_4)));
	}


	// From: Req4Batch162has_floats
	if (! (var_1_9 > var_1_11)) {
		var_1_15 = (((var_1_16 - 25) + (var_1_17 - var_1_18)) - 32);
	} else {
		var_1_15 = var_1_18;
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
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -230584.3009213691400e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 31);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 31);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 31);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 > var_1_3) ? (var_1_1 == ((double) (var_1_4 + ((min (var_1_5 , var_1_6)) - 128.0)))) : 1) && ((var_1_5 > var_1_6) ? (var_1_7 == ((signed long int) (max (((var_1_8 + var_1_9) - var_1_10) , var_1_11)))) : 1)) && (((var_1_5 - (var_1_6 + 100.0)) > (var_1_4 + var_1_1)) ? (var_1_12 == ((double) ((var_1_13 + var_1_14) + (max (var_1_6 , var_1_4))))) : 1)) && ((! (var_1_9 > var_1_11)) ? (var_1_15 == ((signed char) (((var_1_16 - 25) + (var_1_17 - var_1_18)) - 32))) : (var_1_15 == ((signed char) var_1_18)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch40has_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -4;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
float var_1_4 = 256.0;
float var_1_5 = 0.0;
float var_1_6 = -128.0;
signed long int var_1_7 = 1768525834;
signed long int var_1_8 = 0;
unsigned long int var_1_9 = 32;
signed short int var_1_10 = -1;
signed short int var_1_11 = 5;
unsigned char var_1_12 = 0;
signed long int var_1_13 = 128;
double var_1_14 = 128.0;
double var_1_15 = -256.0;
double var_1_16 = 10000.0;
double var_1_17 = -500.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch40has_floats
	if (var_1_2) {
		if (var_1_3 && (var_1_4 <= (var_1_5 * var_1_6))) {
			var_1_1 = ((var_1_7 - 25) - var_1_8);
		}
	}


	// From: Req2Batch40has_floats
	signed long int stepLocal_1 = (max (var_1_10 , var_1_11)) - 128;
	unsigned char stepLocal_0 = var_1_2 && var_1_12;
	if (stepLocal_1 >= 5) {
		if (var_1_3 || stepLocal_0) {
			var_1_9 = var_1_8;
		} else {
			var_1_9 = 256u;
		}
	} else {
		var_1_9 = var_1_8;
	}


	// From: Req3Batch40has_floats
	var_1_13 = (max ((abs (-128)) , 10000000));


	// From: Req4Batch40has_floats
	signed long int stepLocal_2 = var_1_8;
	if (var_1_4 > var_1_5) {
		var_1_14 = ((var_1_15 + var_1_16) + (abs (var_1_17)));
	} else {
		if (var_1_1 <= stepLocal_2) {
			var_1_14 = var_1_16;
		} else {
			var_1_14 = var_1_17;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 1073741822);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? ((var_1_3 && (var_1_4 <= (var_1_5 * var_1_6))) ? (var_1_1 == ((signed long int) ((var_1_7 - 25) - var_1_8))) : 1) : 1) && ((((max (var_1_10 , var_1_11)) - 128) >= 5) ? ((var_1_3 || (var_1_2 && var_1_12)) ? (var_1_9 == ((unsigned long int) var_1_8)) : (var_1_9 == ((unsigned long int) 256u))) : (var_1_9 == ((unsigned long int) var_1_8)))) && (var_1_13 == ((signed long int) (max ((abs (-128)) , 10000000))))) && ((var_1_4 > var_1_5) ? (var_1_14 == ((double) ((var_1_15 + var_1_16) + (abs (var_1_17))))) : ((var_1_1 <= var_1_8) ? (var_1_14 == ((double) var_1_16)) : (var_1_14 == ((double) var_1_17))))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189has_floats.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
float var_1_5 = 5.0;
float var_1_8 = 10.0;
float var_1_9 = 16.0;
float var_1_10 = 64.0;
unsigned char var_1_11 = 0;
signed long int var_1_12 = 100;
double var_1_13 = 32.0;
double var_1_14 = 4.0;
signed long int var_1_15 = 5;
signed long int var_1_16 = 16;
signed long int var_1_17 = 100;
signed long int var_1_18 = -32;
double var_1_19 = -8.0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_11 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch189has_floats
	unsigned char stepLocal_0 = var_1_2;
	if (stepLocal_0 && last_1_var_1_11) {
		var_1_11 = (! var_1_3);
	} else {
		var_1_11 = (var_1_2 || var_1_3);
	}


	// From: Req4Batch189has_floats
	if ((- (var_1_13 - var_1_14)) > var_1_8) {
		var_1_12 = (((var_1_15 + var_1_16) - var_1_17) + var_1_18);
	} else {
		var_1_12 = (min (var_1_16 , 5));
	}


	// From: Req5Batch189has_floats
	var_1_19 = var_1_10;


	// From: Req1Batch189has_floats
	if (var_1_11) {
		var_1_1 = var_1_3;
	} else {
		var_1_1 = (! var_1_4);
	}


	// From: Req2Batch189has_floats
	if (! (var_1_11 || var_1_4)) {
		if (var_1_3) {
			var_1_5 = (abs (max ((var_1_8 + var_1_9) , var_1_10)));
		}
	} else {
		var_1_5 = var_1_9;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 536870912);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 536870911);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -1073741823);
	assume_abort_if_not(var_1_18 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	return ((((var_1_11 ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) (! var_1_4)))) && ((! (var_1_11 || var_1_4)) ? (var_1_3 ? (var_1_5 == ((float) (abs (max ((var_1_8 + var_1_9) , var_1_10))))) : 1) : (var_1_5 == ((float) var_1_9)))) && ((var_1_2 && last_1_var_1_11) ? (var_1_11 == ((unsigned char) (! var_1_3))) : (var_1_11 == ((unsigned char) (var_1_2 || var_1_3))))) && (((- (var_1_13 - var_1_14)) > var_1_8) ? (var_1_12 == ((signed long int) (((var_1_15 + var_1_16) - var_1_17) + var_1_18))) : (var_1_12 == ((signed long int) (min (var_1_16 , 5)))))) && (var_1_19 == ((double) var_1_10))
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

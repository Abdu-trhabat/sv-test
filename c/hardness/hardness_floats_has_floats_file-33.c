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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch33has_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = -10;
signed long int var_1_2 = 100;
signed long int var_1_3 = -8;
signed long int var_1_4 = 5;
signed short int var_1_5 = 4;
signed short int var_1_6 = 0;
unsigned char var_1_7 = 200;
unsigned char var_1_8 = 32;
float var_1_9 = 8.0;
signed long int var_1_11 = 100;
float var_1_12 = 4.0;
float var_1_13 = 50.0;
float var_1_14 = 8.0;
float var_1_15 = 10.0;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 16;
unsigned char var_1_18 = 1;
float var_1_19 = 0.0;
float var_1_20 = -128.0;
double var_1_21 = 1000000.0;
signed short int var_1_22 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch33has_floats
	signed long int stepLocal_0 = -1;
	if (((var_1_2 ^ var_1_3) + var_1_4) < stepLocal_0) {
		var_1_1 = 8;
	} else {
		var_1_1 = (128 - (var_1_5 + var_1_6));
	}


	// From: Req2Batch33has_floats
	if (var_1_5 < var_1_3) {
		var_1_7 = (var_1_8 + 1);
	}


	// From: Req4Batch33has_floats
	var_1_16 = ((var_1_6 > (var_1_7 / var_1_17)) || var_1_18);


	// From: Req5Batch33has_floats
	var_1_19 = var_1_20;


	// From: Req6Batch33has_floats
	var_1_21 = -5.0;


	// From: Req7Batch33has_floats
	var_1_22 = var_1_1;


	// From: Req3Batch33has_floats
	if (! var_1_16) {
		if ((- (min (5 , var_1_1))) < var_1_11) {
			var_1_9 = (min (((min (var_1_12 , var_1_13)) - var_1_14) , var_1_15));
		}
	} else {
		var_1_9 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -32768);
	assume_abort_if_not(var_1_17 <= 32767);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 ^ var_1_3) + var_1_4) < -1) ? (var_1_1 == ((signed short int) 8)) : (var_1_1 == ((signed short int) (128 - (var_1_5 + var_1_6))))) && ((var_1_5 < var_1_3) ? (var_1_7 == ((unsigned char) (var_1_8 + 1))) : 1)) && ((! var_1_16) ? (((- (min (5 , var_1_1))) < var_1_11) ? (var_1_9 == ((float) (min (((min (var_1_12 , var_1_13)) - var_1_14) , var_1_15)))) : 1) : (var_1_9 == ((float) var_1_12)))) && (var_1_16 == ((unsigned char) ((var_1_6 > (var_1_7 / var_1_17)) || var_1_18)))) && (var_1_19 == ((float) var_1_20))) && (var_1_21 == ((double) -5.0))) && (var_1_22 == ((signed short int) var_1_1))
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

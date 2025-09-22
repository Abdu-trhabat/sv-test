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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112has_floats.c", 13, "reach_error"); }
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
float var_1_1 = 2.0;
unsigned short int var_1_2 = 10;
unsigned short int var_1_3 = 0;
signed long int var_1_4 = 8;
signed long int var_1_5 = -16;
float var_1_6 = 0.0;
float var_1_7 = 16.0;
float var_1_8 = 4.0;
float var_1_9 = 5.0;
float var_1_10 = 16.0;
float var_1_11 = 50.0;
unsigned short int var_1_12 = 256;
signed char var_1_13 = 16;
signed char var_1_14 = 4;
float var_1_15 = 4.0;
float var_1_16 = 4.0;
float var_1_17 = 10.0;
float var_1_18 = -10000.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch112has_floats
	if ((min (var_1_2 , var_1_3)) > (max (var_1_4 , var_1_5))) {
		if (var_1_3 < (var_1_5 ^ var_1_2)) {
			var_1_1 = (((var_1_6 + var_1_7) - (min (var_1_8 , var_1_9))) + var_1_10);
		} else {
			var_1_1 = 16.0f;
		}
	} else {
		var_1_1 = var_1_11;
	}


	// From: Req2Batch112has_floats
	signed long int stepLocal_1 = (abs (var_1_13)) - var_1_14;
	signed long int stepLocal_0 = var_1_5;
	if (stepLocal_1 <= var_1_2) {
		if (stepLocal_0 == var_1_2) {
			var_1_12 = var_1_14;
		}
	}


	// From: Req3Batch112has_floats
	unsigned short int stepLocal_2 = var_1_12;
	if (var_1_14 >= stepLocal_2) {
		var_1_15 = (max ((var_1_6 + (var_1_9 - var_1_7)) , (var_1_10 + (var_1_16 + var_1_17))));
	}


	// From: Req4Batch112has_floats
	var_1_18 = var_1_17;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((min (var_1_2 , var_1_3)) > (max (var_1_4 , var_1_5))) ? ((var_1_3 < (var_1_5 ^ var_1_2)) ? (var_1_1 == ((float) (((var_1_6 + var_1_7) - (min (var_1_8 , var_1_9))) + var_1_10))) : (var_1_1 == ((float) 16.0f))) : (var_1_1 == ((float) var_1_11))) && ((((abs (var_1_13)) - var_1_14) <= var_1_2) ? ((var_1_5 == var_1_2) ? (var_1_12 == ((unsigned short int) var_1_14)) : 1) : 1)) && ((var_1_14 >= var_1_12) ? (var_1_15 == ((float) (max ((var_1_6 + (var_1_9 - var_1_7)) , (var_1_10 + (var_1_16 + var_1_17)))))) : 1)) && (var_1_18 == ((float) var_1_17))
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

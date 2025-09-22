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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch167has_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = -16;
unsigned char var_1_5 = 10;
signed char var_1_6 = -64;
signed char var_1_7 = 50;
signed char var_1_8 = 4;
signed char var_1_9 = 10;
float var_1_10 = -32.0;
float var_1_11 = 25.0;
float var_1_12 = 2.0;
float var_1_13 = 100.0;
float var_1_14 = 1.0;
float var_1_15 = 5.0;
float var_1_16 = 2.0;
unsigned long int var_1_17 = 50;
unsigned long int var_1_18 = 3836994066;
signed short int var_1_19 = -2;
signed short int var_1_20 = -8;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch167has_floats
	var_1_20 = var_1_8;


	// From: Req1Batch167has_floats
	signed short int stepLocal_1 = var_1_20;
	signed long int stepLocal_0 = var_1_20 % var_1_5;
	if (stepLocal_1 <= (last_1_var_1_1 * var_1_20)) {
		var_1_1 = (min ((abs (var_1_20)) , (last_1_var_1_1 + var_1_20)));
	} else {
		if (stepLocal_0 <= last_1_var_1_1) {
			var_1_1 = var_1_20;
		}
	}


	// From: Req2Batch167has_floats
	signed short int stepLocal_2 = var_1_1;
	if (stepLocal_2 == var_1_5) {
		var_1_6 = (var_1_7 + (max (var_1_8 , var_1_9)));
	}


	// From: Req3Batch167has_floats
	unsigned char stepLocal_3 = var_1_5;
	if ((var_1_20 + var_1_1) >= stepLocal_3) {
		var_1_10 = ((max ((var_1_11 - var_1_12) , var_1_13)) + (var_1_14 - (var_1_15 + var_1_16)));
	}


	// From: Req5Batch167has_floats
	var_1_19 = var_1_20;


	// From: Req4Batch167has_floats
	var_1_17 = ((var_1_18 - var_1_19) - var_1_5);
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 255);
	assume_abort_if_not(var_1_5 != 0);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 3221225470);
	assume_abort_if_not(var_1_18 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	return ((((((var_1_20 <= (last_1_var_1_1 * var_1_20)) ? (var_1_1 == ((signed short int) (min ((abs (var_1_20)) , (last_1_var_1_1 + var_1_20))))) : (((var_1_20 % var_1_5) <= last_1_var_1_1) ? (var_1_1 == ((signed short int) var_1_20)) : 1)) && ((var_1_1 == var_1_5) ? (var_1_6 == ((signed char) (var_1_7 + (max (var_1_8 , var_1_9))))) : 1)) && (((var_1_20 + var_1_1) >= var_1_5) ? (var_1_10 == ((float) ((max ((var_1_11 - var_1_12) , var_1_13)) + (var_1_14 - (var_1_15 + var_1_16))))) : 1)) && (var_1_17 == ((unsigned long int) ((var_1_18 - var_1_19) - var_1_5)))) && (var_1_19 == ((signed short int) var_1_20))) && (var_1_20 == ((signed short int) var_1_8))
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

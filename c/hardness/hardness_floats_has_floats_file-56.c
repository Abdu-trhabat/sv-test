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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56has_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed short int var_1_2 = 5;
signed char var_1_3 = 10;
signed long int var_1_4 = 32;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 16;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 8;
double var_1_9 = 4.0;
double var_1_10 = 8.0;
double var_1_11 = 1.0;
float var_1_12 = -16.0;
float var_1_13 = 8.0;
float var_1_14 = 100.0;
signed char var_1_15 = -100;
signed long int var_1_16 = -16;
signed long int var_1_17 = -32;
signed char var_1_18 = 0;
signed char var_1_19 = 16;
signed char var_1_20 = 10;
signed char var_1_21 = -32;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch56has_floats
	if ((var_1_2 >> var_1_3) >= var_1_4) {
		var_1_1 = (min (var_1_3 , (var_1_5 - (max (var_1_6 , var_1_7)))));
	} else {
		var_1_1 = ((min (var_1_6 , var_1_3)) + (min ((var_1_8 + 1) , var_1_7)));
	}


	// From: Req2Batch56has_floats
	var_1_9 = (min (var_1_10 , var_1_11));


	// From: Req3Batch56has_floats
	if ((var_1_8 / var_1_3) < -256) {
		var_1_12 = (var_1_13 - var_1_14);
	}


	// From: Req4Batch56has_floats
	if (10 < ((var_1_8 + var_1_3) + (var_1_16 * var_1_17))) {
		var_1_15 = (min (((min (var_1_3 , var_1_18)) + (var_1_19 - var_1_20)) , var_1_8));
	} else {
		var_1_15 = var_1_21;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 14);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 64);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 >> var_1_3) >= var_1_4) ? (var_1_1 == ((unsigned char) (min (var_1_3 , (var_1_5 - (max (var_1_6 , var_1_7))))))) : (var_1_1 == ((unsigned char) ((min (var_1_6 , var_1_3)) + (min ((var_1_8 + 1) , var_1_7)))))) && (var_1_9 == ((double) (min (var_1_10 , var_1_11))))) && (((var_1_8 / var_1_3) < -256) ? (var_1_12 == ((float) (var_1_13 - var_1_14))) : 1)) && ((10 < ((var_1_8 + var_1_3) + (var_1_16 * var_1_17))) ? (var_1_15 == ((signed char) (min (((min (var_1_3 , var_1_18)) + (var_1_19 - var_1_20)) , var_1_8)))) : (var_1_15 == ((signed char) var_1_21)))
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

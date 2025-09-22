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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168Amount50.c", 13, "reach_error"); }
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
double var_1_1 = 63.25;
signed long int var_1_2 = -200;
signed long int var_1_3 = -128;
double var_1_4 = 8.75;
double var_1_5 = 3.25;
unsigned short int var_1_6 = 55016;
unsigned short int var_1_7 = 32;
unsigned short int var_1_8 = 5;
signed long int var_1_9 = 10;
unsigned long int var_1_10 = 2768943566;
unsigned long int var_1_11 = 1;
signed char var_1_12 = 8;
signed char var_1_14 = -10;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 5;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 5;
float var_1_20 = 63.519;
unsigned char var_1_21 = 1;
float var_1_22 = 9.1;
float var_1_23 = 63.5;
float var_1_24 = 50.5;
unsigned char var_1_25 = 0;
unsigned long int var_1_26 = 4;
double var_1_27 = 256.1;
double var_1_28 = 32.5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_11 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch168Amount50
	signed long int stepLocal_2 = var_1_3;
	unsigned long int stepLocal_1 = 100u;
	signed long int stepLocal_0 = var_1_9;
	if (var_1_2 > stepLocal_2) {
		var_1_1 = (min (((var_1_4 - 8.25) + var_1_5) , 49.75));
	} else {
		if ((var_1_6 - (var_1_7 + var_1_8)) < stepLocal_0) {
			var_1_1 = (31.8 + var_1_4);
		} else {
			if ((var_1_10 - var_1_8) > stepLocal_1) {
				var_1_1 = var_1_5;
			} else {
				var_1_1 = var_1_4;
			}
		}
	}


	// From: Req2Batch168Amount50
	if (-128 < (var_1_8 ^ (var_1_2 * last_1_var_1_11))) {
		var_1_11 = var_1_7;
	}


	// From: Req4Batch168Amount50
	var_1_15 = (min ((var_1_16 + var_1_17) , (max (var_1_18 , var_1_19))));


	// From: Req5Batch168Amount50
	if (! var_1_21) {
		if (var_1_21) {
			var_1_20 = (var_1_4 + 25.5f);
		} else {
			var_1_20 = ((max ((min (var_1_4 , var_1_22)) , var_1_23)) - var_1_24);
		}
	} else {
		if (var_1_25) {
			var_1_20 = var_1_23;
		} else {
			var_1_20 = var_1_5;
		}
	}


	// From: Req6Batch168Amount50
	signed long int stepLocal_3 = -10;
	if (var_1_25) {
		if (stepLocal_3 < var_1_18) {
			var_1_26 = (abs (var_1_17));
		}
	}


	// From: Req7Batch168Amount50
	var_1_27 = var_1_4;


	// From: Req8Batch168Amount50
	var_1_28 = var_1_22;


	// From: Req3Batch168Amount50
	if (((var_1_28 + var_1_4) * var_1_5) >= var_1_1) {
		var_1_12 = var_1_14;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65535);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16384);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	return ((((((((var_1_2 > var_1_3) ? (var_1_1 == ((double) (min (((var_1_4 - 8.25) + var_1_5) , 49.75)))) : (((var_1_6 - (var_1_7 + var_1_8)) < var_1_9) ? (var_1_1 == ((double) (31.8 + var_1_4))) : (((var_1_10 - var_1_8) > 100u) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) var_1_4))))) && ((-128 < (var_1_8 ^ (var_1_2 * last_1_var_1_11))) ? (var_1_11 == ((unsigned long int) var_1_7)) : 1)) && ((((var_1_28 + var_1_4) * var_1_5) >= var_1_1) ? (var_1_12 == ((signed char) var_1_14)) : 1)) && (var_1_15 == ((unsigned char) (min ((var_1_16 + var_1_17) , (max (var_1_18 , var_1_19))))))) && ((! var_1_21) ? (var_1_21 ? (var_1_20 == ((float) (var_1_4 + 25.5f))) : (var_1_20 == ((float) ((max ((min (var_1_4 , var_1_22)) , var_1_23)) - var_1_24)))) : (var_1_25 ? (var_1_20 == ((float) var_1_23)) : (var_1_20 == ((float) var_1_5))))) && (var_1_25 ? ((-10 < var_1_18) ? (var_1_26 == ((unsigned long int) (abs (var_1_17)))) : 1) : 1)) && (var_1_27 == ((double) var_1_4))) && (var_1_28 == ((double) var_1_22))
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

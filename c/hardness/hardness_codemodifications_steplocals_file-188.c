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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch188stepLocals.c", 13, "reach_error"); }
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
float var_1_1 = 255.25;
double var_1_2 = 3.6;
double var_1_3 = 3.25;
unsigned char var_1_4 = 0;
unsigned short int var_1_5 = 8;
signed char var_1_6 = 4;
signed long int var_1_7 = 128;
signed long int var_1_8 = 1;
float var_1_9 = 99.6;
signed short int var_1_10 = 1;
signed short int var_1_11 = -4;
signed long int var_1_12 = -128;
signed long int var_1_13 = 2;
unsigned long int var_1_14 = 2434691654;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
float var_1_17 = -0.4;
float var_1_18 = 3.8;
float var_1_19 = 99999999.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch188stepLocals
	if (var_1_2 < var_1_3) {
		if (var_1_4 || ((var_1_5 >> var_1_6) != (var_1_7 - var_1_8))) {
			var_1_1 = (256.125f + (128.1f - var_1_9));
		} else {
			var_1_1 = var_1_9;
		}
	} else {
		var_1_1 = var_1_9;
	}


	// From: Req2Batch188stepLocals
	if (var_1_5 >= var_1_8) {
		var_1_10 = (min (var_1_6 , var_1_11));
	}


	// From: Req3Batch188stepLocals
	if (var_1_2 >= (- var_1_1)) {
		var_1_12 = (var_1_10 + (var_1_6 + (min (2 , var_1_11))));
	} else {
		var_1_12 = var_1_6;
	}


	// From: Req4Batch188stepLocals
	if (var_1_10 >= var_1_7) {
		var_1_13 = (min (var_1_10 , var_1_6));
	} else {
		if ((var_1_14 - 128u) > var_1_5) {
			if (var_1_7 != var_1_11) {
				var_1_13 = var_1_6;
			}
		} else {
			var_1_13 = var_1_5;
		}
	}


	// From: Req5Batch188stepLocals
	if (var_1_4) {
		var_1_15 = var_1_16;
	}


	// From: Req6Batch188stepLocals
	unsigned char stepLocal_1 = var_1_13 < var_1_7;
	signed long int stepLocal_0 = max (var_1_7 , (var_1_10 * var_1_12));
	if ((-64 >= var_1_12) || stepLocal_1) {
		if ((max (var_1_13 , -2)) > stepLocal_0) {
			var_1_17 = ((min (var_1_9 , var_1_18)) + var_1_19);
		} else {
			var_1_17 = 7.1f;
		}
	} else {
		var_1_17 = var_1_18;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65535);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 15);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32767);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 < var_1_3) ? ((var_1_4 || ((var_1_5 >> var_1_6) != (var_1_7 - var_1_8))) ? (var_1_1 == ((float) (256.125f + (128.1f - var_1_9)))) : (var_1_1 == ((float) var_1_9))) : (var_1_1 == ((float) var_1_9))) && ((var_1_5 >= var_1_8) ? (var_1_10 == ((signed short int) (min (var_1_6 , var_1_11)))) : 1)) && ((var_1_2 >= (- var_1_1)) ? (var_1_12 == ((signed long int) (var_1_10 + (var_1_6 + (min (2 , var_1_11)))))) : (var_1_12 == ((signed long int) var_1_6)))) && ((var_1_10 >= var_1_7) ? (var_1_13 == ((signed long int) (min (var_1_10 , var_1_6)))) : (((var_1_14 - 128u) > var_1_5) ? ((var_1_7 != var_1_11) ? (var_1_13 == ((signed long int) var_1_6)) : 1) : (var_1_13 == ((signed long int) var_1_5))))) && (var_1_4 ? (var_1_15 == ((unsigned char) var_1_16)) : 1)) && (((-64 >= var_1_12) || (var_1_13 < var_1_7)) ? (((max (var_1_13 , -2)) > (max (var_1_7 , (var_1_10 * var_1_12)))) ? (var_1_17 == ((float) ((min (var_1_9 , var_1_18)) + var_1_19))) : (var_1_17 == ((float) 7.1f))) : (var_1_17 == ((float) var_1_18)))
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

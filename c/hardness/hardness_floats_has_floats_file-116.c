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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116has_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = 5;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 1;
signed long int var_1_4 = -128;
signed long int var_1_5 = 1;
signed long int var_1_6 = -128;
signed short int var_1_7 = 0;
float var_1_8 = -25.0;
float var_1_9 = 256.0;
float var_1_10 = 10.0;
float var_1_11 = 25.0;
float var_1_12 = 64.0;
float var_1_13 = 10.0;
signed short int var_1_14 = 100;
signed short int var_1_15 = 2;
signed short int var_1_16 = 32;
signed short int var_1_17 = 1;
signed short int var_1_18 = 128;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 32;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 64;
float var_1_24 = -128.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch116has_floats
	signed long int stepLocal_0 = (var_1_4 * var_1_5) / var_1_6;
	if ((~ var_1_3) < stepLocal_0) {
		if (var_1_2) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = 8;
		}
	} else {
		var_1_1 = 5;
	}


	// From: Req2Batch116has_floats
	var_1_8 = (((max (var_1_9 , var_1_10)) + var_1_11) - var_1_12);


	// From: Req3Batch116has_floats
	if ((- var_1_11) < -32.0f) {
		var_1_13 = (var_1_11 - var_1_12);
	}


	// From: Req4Batch116has_floats
	var_1_14 = ((var_1_15 + (var_1_16 + var_1_17)) - var_1_18);


	// From: Req5Batch116has_floats
	if (var_1_2) {
		var_1_19 = (var_1_20 + var_1_21);
	} else {
		var_1_19 = (max ((var_1_22 - var_1_20) , (max (var_1_21 , var_1_23))));
	}


	// From: Req6Batch116has_floats
	var_1_24 = var_1_11;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 8192);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 8191);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 127);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((~ var_1_3) < ((var_1_4 * var_1_5) / var_1_6)) ? (var_1_2 ? (var_1_1 == ((signed short int) var_1_7)) : (var_1_1 == ((signed short int) 8))) : (var_1_1 == ((signed short int) 5))) && (var_1_8 == ((float) (((max (var_1_9 , var_1_10)) + var_1_11) - var_1_12)))) && (((- var_1_11) < -32.0f) ? (var_1_13 == ((float) (var_1_11 - var_1_12))) : 1)) && (var_1_14 == ((signed short int) ((var_1_15 + (var_1_16 + var_1_17)) - var_1_18)))) && (var_1_2 ? (var_1_19 == ((unsigned char) (var_1_20 + var_1_21))) : (var_1_19 == ((unsigned char) (max ((var_1_22 - var_1_20) , (max (var_1_21 , var_1_23)))))))) && (var_1_24 == ((float) var_1_11))
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

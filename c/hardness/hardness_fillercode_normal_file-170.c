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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch170normal.c", 13, "reach_error"); }
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
float var_1_1 = 255.2;
float var_1_3 = 9.375;
unsigned char var_1_4 = 1;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = -25;
signed short int var_1_11 = -4;
signed short int var_1_12 = 8;
float var_1_13 = 128.2;
float var_1_16 = 4.5;
float var_1_17 = 9999999.25;
signed long int var_1_18 = -64;
signed char var_1_19 = -2;
signed char var_1_20 = 64;
float var_1_21 = 256.5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_4 = 1;
signed long int last_1_var_1_10 = -25;
float last_1_var_1_13 = 128.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch170normal
	if (-5 > last_1_var_1_10) {
		if (last_1_var_1_10 > 10) {
			var_1_4 = ((last_1_var_1_4 && var_1_6) || var_1_7);
		} else {
			var_1_4 = (var_1_7 && (var_1_8 || var_1_6));
		}
	} else {
		var_1_4 = var_1_9;
	}


	// From: Req3Batch170normal
	signed long int stepLocal_0 = -256;
	if ((var_1_5 + (var_1_11 + var_1_12)) >= stepLocal_0) {
		if (var_1_4) {
			var_1_10 = var_1_12;
		}
	}


	// From: Req1Batch170normal
	if (var_1_4) {
		var_1_1 = var_1_3;
	}


	// From: Req5Batch170normal
	if (var_1_10 > (var_1_10 / (abs (var_1_18)))) {
		var_1_17 = var_1_16;
	}


	// From: Req7Batch170normal
	var_1_21 = var_1_3;


	// From: Req4Batch170normal
	if (var_1_10 == (var_1_5 + var_1_11)) {
		if (var_1_7) {
			if (var_1_3 == (min (var_1_1 , (last_1_var_1_13 * var_1_21)))) {
				var_1_13 = (max ((var_1_16 + 15.8f) , var_1_3));
			} else {
				var_1_13 = (min (99999.1f , var_1_16));
			}
		} else {
			var_1_13 = var_1_3;
		}
	} else {
		var_1_13 = var_1_3;
	}


	// From: Req6Batch170normal
	if (var_1_17 < var_1_3) {
		if (var_1_13 < ((64.1f * var_1_16) / 256.95f)) {
			if (var_1_9) {
				var_1_19 = var_1_20;
			} else {
				var_1_19 = -1;
			}
		}
	} else {
		var_1_19 = var_1_20;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32768);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -2147483647);
	assume_abort_if_not(var_1_18 <= 2147483647);
	assume_abort_if_not(var_1_18 != 0);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_4 = var_1_4;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	return ((((((var_1_4 ? (var_1_1 == ((float) var_1_3)) : 1) && ((-5 > last_1_var_1_10) ? ((last_1_var_1_10 > 10) ? (var_1_4 == ((unsigned char) ((last_1_var_1_4 && var_1_6) || var_1_7))) : (var_1_4 == ((unsigned char) (var_1_7 && (var_1_8 || var_1_6))))) : (var_1_4 == ((unsigned char) var_1_9)))) && (((var_1_5 + (var_1_11 + var_1_12)) >= -256) ? (var_1_4 ? (var_1_10 == ((signed long int) var_1_12)) : 1) : 1)) && ((var_1_10 == (var_1_5 + var_1_11)) ? (var_1_7 ? ((var_1_3 == (min (var_1_1 , (last_1_var_1_13 * var_1_21)))) ? (var_1_13 == ((float) (max ((var_1_16 + 15.8f) , var_1_3)))) : (var_1_13 == ((float) (min (99999.1f , var_1_16))))) : (var_1_13 == ((float) var_1_3))) : (var_1_13 == ((float) var_1_3)))) && ((var_1_10 > (var_1_10 / (abs (var_1_18)))) ? (var_1_17 == ((float) var_1_16)) : 1)) && ((var_1_17 < var_1_3) ? ((var_1_13 < ((64.1f * var_1_16) / 256.95f)) ? (var_1_9 ? (var_1_19 == ((signed char) var_1_20)) : (var_1_19 == ((signed char) -1))) : 1) : (var_1_19 == ((signed char) var_1_20)))) && (var_1_21 == ((float) var_1_3))
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

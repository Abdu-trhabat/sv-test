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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161normal.c", 13, "reach_error"); }
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
float var_1_1 = 3.8;
float var_1_3 = 3.7;
float var_1_4 = 32.375;
float var_1_5 = 1.9;
float var_1_6 = 63.25;
unsigned char var_1_7 = 1;
float var_1_8 = 3.25;
float var_1_9 = 8.75;
float var_1_10 = 127.62;
unsigned long int var_1_11 = 5;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -5;
signed long int var_1_16 = 32;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_11 = 5;
unsigned char last_1_var_1_12 = 1;
signed long int last_1_var_1_15 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch161normal
	signed long int stepLocal_0 = last_1_var_1_15;
	if (stepLocal_0 <= 32) {
		if ((var_1_3 - var_1_4) < var_1_5) {
			var_1_1 = var_1_6;
		} else {
			if (var_1_6 < var_1_4) {
				if (last_1_var_1_12) {
					var_1_1 = (var_1_8 - (var_1_9 + var_1_10));
				} else {
					var_1_1 = var_1_6;
				}
			} else {
				var_1_1 = var_1_9;
			}
		}
	}


	// From: Req2Batch161normal
	if (var_1_3 < ((var_1_1 * var_1_8) + var_1_9)) {
		var_1_11 = (abs (last_1_var_1_11));
	}


	// From: Req3Batch161normal
	if (var_1_7) {
		var_1_12 = (var_1_13 || var_1_14);
	}


	// From: Req4Batch161normal
	unsigned char stepLocal_1 = var_1_12;
	if (var_1_14) {
		if (var_1_12) {
			if (stepLocal_1 || (var_1_9 <= var_1_3)) {
				var_1_15 = (var_1_11 - var_1_16);
			}
		} else {
			var_1_15 = var_1_16;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	return ((((last_1_var_1_15 <= 32) ? (((var_1_3 - var_1_4) < var_1_5) ? (var_1_1 == ((float) var_1_6)) : ((var_1_6 < var_1_4) ? (last_1_var_1_12 ? (var_1_1 == ((float) (var_1_8 - (var_1_9 + var_1_10)))) : (var_1_1 == ((float) var_1_6))) : (var_1_1 == ((float) var_1_9)))) : 1) && ((var_1_3 < ((var_1_1 * var_1_8) + var_1_9)) ? (var_1_11 == ((unsigned long int) (abs (last_1_var_1_11)))) : 1)) && (var_1_7 ? (var_1_12 == ((unsigned char) (var_1_13 || var_1_14))) : 1)) && (var_1_14 ? (var_1_12 ? ((var_1_12 || (var_1_9 <= var_1_3)) ? (var_1_15 == ((signed long int) (var_1_11 - var_1_16))) : 1) : (var_1_15 == ((signed long int) var_1_16))) : 1)
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

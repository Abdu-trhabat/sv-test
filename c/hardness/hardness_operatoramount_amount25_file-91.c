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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch91Amount25.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 100000000;
float var_1_2 = 49.25;
unsigned long int var_1_3 = 64;
unsigned long int var_1_4 = 64;
signed short int var_1_5 = 1;
float var_1_6 = 8.4;
float var_1_7 = -0.25;
signed short int var_1_8 = -128;
signed short int var_1_9 = 1;
float var_1_10 = 25.8;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
float var_1_13 = 16.45;
float var_1_14 = 0.0;
signed short int var_1_15 = 10;
signed long int var_1_16 = 4;

// Calibration values

// Last'ed variables
float last_1_var_1_10 = 25.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch91Amount25
	if (last_1_var_1_10 >= 50.4f) {
		var_1_1 = (max (var_1_3 , var_1_4));
	}


	// From: Req3Batch91Amount25
	if (var_1_11) {
		if (var_1_12) {
			if ((var_1_3 & var_1_1) == var_1_4) {
				var_1_10 = var_1_13;
			} else {
				var_1_10 = var_1_14;
			}
		} else {
			var_1_10 = var_1_13;
		}
	} else {
		var_1_10 = var_1_14;
	}


	// From: Req2Batch91Amount25
	if (var_1_3 == (var_1_1 * var_1_4)) {
		if (var_1_2 >= (var_1_6 + var_1_7)) {
			var_1_5 = (max (var_1_8 , var_1_9));
		} else {
			var_1_5 = var_1_8;
		}
	} else {
		var_1_5 = var_1_8;
	}


	// From: Req4Batch91Amount25
	var_1_15 = -25;


	// From: Req5Batch91Amount25
	var_1_16 = var_1_8;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967294);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
}

int property(void) {
	return (((((last_1_var_1_10 >= 50.4f) ? (var_1_1 == ((unsigned long int) (max (var_1_3 , var_1_4)))) : 1) && ((var_1_3 == (var_1_1 * var_1_4)) ? ((var_1_2 >= (var_1_6 + var_1_7)) ? (var_1_5 == ((signed short int) (max (var_1_8 , var_1_9)))) : (var_1_5 == ((signed short int) var_1_8))) : (var_1_5 == ((signed short int) var_1_8)))) && (var_1_11 ? (var_1_12 ? (((var_1_3 & var_1_1) == var_1_4) ? (var_1_10 == ((float) var_1_13)) : (var_1_10 == ((float) var_1_14))) : (var_1_10 == ((float) var_1_13))) : (var_1_10 == ((float) var_1_14)))) && (var_1_15 == ((signed short int) -25))) && (var_1_16 == ((signed long int) var_1_8))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144no_floats.c", 13, "reach_error"); }
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
signed char var_1_2 = 1;
signed char var_1_3 = -50;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed long int var_1_8 = -5;
signed char var_1_9 = -4;
signed long int var_1_10 = 1;
signed long int var_1_11 = 32;
signed char var_1_12 = 16;
signed char var_1_13 = 5;
signed char var_1_14 = 10;
signed char var_1_15 = 32;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
signed long int var_1_18 = -16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch144no_floats
	signed char stepLocal_0 = var_1_2;
	if (stepLocal_0 < var_1_3) {
		var_1_1 = ((var_1_4 || var_1_5) || (var_1_6 || var_1_7));
	} else {
		var_1_1 = (! var_1_7);
	}


	// From: Req4Batch144no_floats
	if (var_1_5 || var_1_6) {
		var_1_16 = (! var_1_17);
	}


	// From: Req5Batch144no_floats
	var_1_18 = var_1_11;


	// From: Req3Batch144no_floats
	if (var_1_18 < var_1_11) {
		var_1_12 = (var_1_13 - (min (var_1_14 , (abs (var_1_15)))));
	} else {
		var_1_12 = (min ((min (var_1_13 , var_1_15)) , var_1_14));
	}


	// From: Req2Batch144no_floats
	if (var_1_12 == (abs (var_1_9))) {
		if (-32 > (var_1_12 % var_1_10)) {
			var_1_8 = var_1_11;
		} else {
			var_1_8 = -32;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -126);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 < var_1_3) ? (var_1_1 == ((unsigned char) ((var_1_4 || var_1_5) || (var_1_6 || var_1_7)))) : (var_1_1 == ((unsigned char) (! var_1_7)))) && ((var_1_12 == (abs (var_1_9))) ? ((-32 > (var_1_12 % var_1_10)) ? (var_1_8 == ((signed long int) var_1_11)) : (var_1_8 == ((signed long int) -32))) : 1)) && ((var_1_18 < var_1_11) ? (var_1_12 == ((signed char) (var_1_13 - (min (var_1_14 , (abs (var_1_15))))))) : (var_1_12 == ((signed char) (min ((min (var_1_13 , var_1_15)) , var_1_14)))))) && ((var_1_5 || var_1_6) ? (var_1_16 == ((unsigned char) (! var_1_17))) : 1)) && (var_1_18 == ((signed long int) var_1_11))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141no_floats.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
signed long int var_1_2 = 256;
signed long int var_1_3 = -64;
signed char var_1_4 = 64;
signed char var_1_5 = -64;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 10;
unsigned char var_1_9 = 5;
unsigned char var_1_10 = 0;
signed long int var_1_11 = -50;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
signed long int var_1_14 = -10;
signed long int var_1_15 = -10;
signed char var_1_16 = 25;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_10 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch141no_floats
	if (last_1_var_1_10) {
		var_1_6 = (var_1_8 + var_1_9);
	}


	// From: Req3Batch141no_floats
	unsigned char stepLocal_0 = var_1_6;
	if (stepLocal_0 >= (abs (var_1_8))) {
		var_1_10 = 1;
	} else {
		if ((var_1_2 * var_1_3) != var_1_11) {
			var_1_10 = ((! var_1_12) || var_1_13);
		} else {
			var_1_10 = ((var_1_2 < (max (var_1_3 , var_1_11))) && (var_1_7 && var_1_13));
		}
	}


	// From: Req1Batch141no_floats
	if (var_1_2 < var_1_3) {
		if (var_1_2 > var_1_3) {
			var_1_1 = (abs (var_1_4));
		}
	} else {
		var_1_1 = (abs (min (var_1_4 , var_1_5)));
	}


	// From: Req4Batch141no_floats
	var_1_14 = var_1_6;


	// From: Req5Batch141no_floats
	var_1_15 = var_1_14;


	// From: Req6Batch141no_floats
	var_1_16 = var_1_4;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -126);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -126);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
}

int property(void) {
	return ((((((var_1_2 < var_1_3) ? ((var_1_2 > var_1_3) ? (var_1_1 == ((signed char) (abs (var_1_4)))) : 1) : (var_1_1 == ((signed char) (abs (min (var_1_4 , var_1_5)))))) && (last_1_var_1_10 ? (var_1_6 == ((unsigned char) (var_1_8 + var_1_9))) : 1)) && ((var_1_6 >= (abs (var_1_8))) ? (var_1_10 == ((unsigned char) 1)) : (((var_1_2 * var_1_3) != var_1_11) ? (var_1_10 == ((unsigned char) ((! var_1_12) || var_1_13))) : (var_1_10 == ((unsigned char) ((var_1_2 < (max (var_1_3 , var_1_11))) && (var_1_7 && var_1_13))))))) && (var_1_14 == ((signed long int) var_1_6))) && (var_1_15 == ((signed long int) var_1_14))) && (var_1_16 == ((signed char) var_1_4))
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

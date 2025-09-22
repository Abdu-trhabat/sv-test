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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch24no_floats.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 0;
signed long int var_1_5 = -64;
signed long int var_1_6 = 100;
signed char var_1_7 = -1;
signed char var_1_8 = 32;
signed long int var_1_9 = -50;
signed char var_1_10 = -8;
signed long int var_1_11 = -10;
signed char var_1_12 = 0;
signed char var_1_13 = 0;
signed long int var_1_14 = 64;
signed long int var_1_15 = 256;
signed char var_1_16 = 4;
signed char var_1_17 = 0;
signed char var_1_18 = 4;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_11 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch24no_floats
	if (var_1_2 || (16 < last_1_var_1_11)) {
		if (last_1_var_1_11 >= (- last_1_var_1_11)) {
			if (((var_1_5 ^ var_1_6) + (var_1_7 * var_1_8)) <= var_1_9) {
				var_1_1 = var_1_10;
			}
		}
	} else {
		var_1_1 = 8;
	}


	// From: Req3Batch24no_floats
	signed long int stepLocal_2 = var_1_9;
	if (var_1_12 == stepLocal_2) {
		var_1_16 = (var_1_17 - var_1_18);
	} else {
		var_1_16 = (min (var_1_17 , var_1_10));
	}


	// From: Req2Batch24no_floats
	signed char stepLocal_1 = var_1_16;
	signed char stepLocal_0 = var_1_10;
	if (stepLocal_1 == (var_1_12 - var_1_13)) {
		if (var_1_2) {
			if (var_1_1 < stepLocal_0) {
				var_1_11 = (var_1_14 - (abs (var_1_15)));
			} else {
				var_1_11 = var_1_15;
			}
		}
	} else {
		var_1_11 = var_1_15;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483647);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -128);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	return (((var_1_2 || (16 < last_1_var_1_11)) ? ((last_1_var_1_11 >= (- last_1_var_1_11)) ? ((((var_1_5 ^ var_1_6) + (var_1_7 * var_1_8)) <= var_1_9) ? (var_1_1 == ((signed char) var_1_10)) : 1) : 1) : (var_1_1 == ((signed char) 8))) && ((var_1_16 == (var_1_12 - var_1_13)) ? (var_1_2 ? ((var_1_1 < var_1_10) ? (var_1_11 == ((signed long int) (var_1_14 - (abs (var_1_15))))) : (var_1_11 == ((signed long int) var_1_15))) : 1) : (var_1_11 == ((signed long int) var_1_15)))) && ((var_1_12 == var_1_9) ? (var_1_16 == ((signed char) (var_1_17 - var_1_18))) : (var_1_16 == ((signed char) (min (var_1_17 , var_1_10)))))
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

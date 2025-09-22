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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -10;
signed long int var_1_4 = 50;
signed long int var_1_5 = 0;
signed long int var_1_6 = 32;
signed long int var_1_8 = 50;
signed long int var_1_9 = 0;
signed char var_1_10 = 64;
signed char var_1_11 = 64;
signed long int var_1_12 = -10000;
signed long int var_1_13 = 2;
signed long int var_1_14 = 128;
signed long int var_1_15 = 5;
signed char var_1_16 = -64;
signed char var_1_17 = 10;
signed long int var_1_18 = 64;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 10;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_9 = 0;
signed long int last_1_var_1_13 = 2;
signed long int last_1_var_1_18 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch51no_floats
	signed long int stepLocal_1 = last_1_var_1_13;
	signed long int stepLocal_0 = ~ 1;
	if (stepLocal_0 > last_1_var_1_13) {
		if (stepLocal_1 <= last_1_var_1_18) {
			if ((var_1_4 - (min (var_1_5 , var_1_6))) >= last_1_var_1_9) {
				if (var_1_6 == ((abs (var_1_4)) + var_1_5)) {
					var_1_1 = var_1_8;
				} else {
					var_1_1 = -10;
				}
			}
		}
	}


	// From: Req3Batch51no_floats
	var_1_13 = (var_1_14 - var_1_15);


	// From: Req4Batch51no_floats
	var_1_16 = var_1_17;


	// From: Req5Batch51no_floats
	var_1_18 = var_1_11;


	// From: Req6Batch51no_floats
	var_1_19 = var_1_20;


	// From: Req2Batch51no_floats
	signed long int stepLocal_2 = (var_1_13 / var_1_10) / var_1_11;
	if (var_1_1 >= (- var_1_1)) {
		if (stepLocal_2 == (256 % var_1_12)) {
			var_1_9 = var_1_8;
		}
	} else {
		var_1_9 = var_1_8;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -128);
	assume_abort_if_not(var_1_10 <= 127);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -128);
	assume_abort_if_not(var_1_11 <= 127);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	return (((((((~ 1) > last_1_var_1_13) ? ((last_1_var_1_13 <= last_1_var_1_18) ? (((var_1_4 - (min (var_1_5 , var_1_6))) >= last_1_var_1_9) ? ((var_1_6 == ((abs (var_1_4)) + var_1_5)) ? (var_1_1 == ((signed long int) var_1_8)) : (var_1_1 == ((signed long int) -10))) : 1) : 1) : 1) && ((var_1_1 >= (- var_1_1)) ? ((((var_1_13 / var_1_10) / var_1_11) == (256 % var_1_12)) ? (var_1_9 == ((signed long int) var_1_8)) : 1) : (var_1_9 == ((signed long int) var_1_8)))) && (var_1_13 == ((signed long int) (var_1_14 - var_1_15)))) && (var_1_16 == ((signed char) var_1_17))) && (var_1_18 == ((signed long int) var_1_11))) && (var_1_19 == ((unsigned char) var_1_20))
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

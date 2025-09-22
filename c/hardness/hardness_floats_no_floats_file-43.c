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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43no_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = 64;
signed long int var_1_3 = 4;
signed long int var_1_4 = 16;
signed short int var_1_5 = 5;
signed short int var_1_6 = 0;
signed short int var_1_7 = -10;
unsigned char var_1_8 = 50;
signed long int var_1_9 = 16;
signed long int var_1_10 = -32;
unsigned char var_1_11 = 32;
signed long int var_1_12 = 0;
signed long int var_1_13 = -2;
signed long int var_1_14 = 5;
signed long int var_1_15 = 2;
unsigned char var_1_16 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch43no_floats
	if (last_1_var_1_12 != (var_1_3 - var_1_4)) {
		var_1_1 = (max (-5 , var_1_5));
	} else {
		if (last_1_var_1_12 == var_1_3) {
			if (! (var_1_5 >= (var_1_6 + var_1_7))) {
				var_1_1 = var_1_5;
			}
		}
	}


	// From: Req2Batch43no_floats
	signed short int stepLocal_0 = var_1_1;
	if (((var_1_9 ^ 2) + (var_1_5 / var_1_10)) > stepLocal_0) {
		var_1_8 = var_1_11;
	} else {
		var_1_8 = 10;
	}


	// From: Req3Batch43no_floats
	if (var_1_1 <= var_1_8) {
		var_1_12 = (abs (max (var_1_13 , (var_1_14 - var_1_15))));
	} else {
		if (var_1_16) {
			if (var_1_10 <= var_1_1) {
				var_1_12 = var_1_13;
			}
		} else {
			var_1_12 = var_1_15;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32768);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32768);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	return (((last_1_var_1_12 != (var_1_3 - var_1_4)) ? (var_1_1 == ((signed short int) (max (-5 , var_1_5)))) : ((last_1_var_1_12 == var_1_3) ? ((! (var_1_5 >= (var_1_6 + var_1_7))) ? (var_1_1 == ((signed short int) var_1_5)) : 1) : 1)) && ((((var_1_9 ^ 2) + (var_1_5 / var_1_10)) > var_1_1) ? (var_1_8 == ((unsigned char) var_1_11)) : (var_1_8 == ((unsigned char) 10)))) && ((var_1_1 <= var_1_8) ? (var_1_12 == ((signed long int) (abs (max (var_1_13 , (var_1_14 - var_1_15)))))) : (var_1_16 ? ((var_1_10 <= var_1_1) ? (var_1_12 == ((signed long int) var_1_13)) : 1) : (var_1_12 == ((signed long int) var_1_15))))
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

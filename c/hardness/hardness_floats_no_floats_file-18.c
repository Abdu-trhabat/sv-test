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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -2;
signed char var_1_2 = 1;
signed char var_1_3 = -25;
signed long int var_1_4 = -10;
signed long int var_1_5 = -16;
signed long int var_1_6 = 16;
unsigned short int var_1_7 = 8;
signed long int var_1_8 = -1;
unsigned short int var_1_9 = 5;
unsigned short int var_1_10 = 1;
unsigned long int var_1_11 = 4;
unsigned char var_1_12 = 0;
signed long int var_1_13 = -4;
signed long int var_1_14 = 128;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_11 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch18no_floats
	signed long int stepLocal_2 = min (var_1_2 , var_1_8);
	signed long int stepLocal_1 = var_1_8;
	if ((var_1_3 * var_1_2) != stepLocal_1) {
		if (64 <= stepLocal_2) {
			var_1_7 = (max (var_1_9 , var_1_10));
		} else {
			var_1_7 = var_1_9;
		}
	} else {
		var_1_7 = 200;
	}


	// From: Req3Batch18no_floats
	unsigned short int stepLocal_3 = var_1_7;
	if (var_1_12) {
		var_1_11 = (var_1_10 + var_1_9);
	} else {
		if (last_1_var_1_11 <= stepLocal_3) {
			var_1_11 = var_1_9;
		} else {
			var_1_11 = var_1_7;
		}
	}


	// From: Req4Batch18no_floats
	unsigned long int stepLocal_5 = var_1_11;
	unsigned short int stepLocal_4 = var_1_10;
	if (var_1_10 >= stepLocal_5) {
		if (stepLocal_4 <= (var_1_7 + var_1_8)) {
			var_1_13 = (var_1_6 - var_1_14);
		}
	} else {
		var_1_13 = var_1_6;
	}


	// From: Req1Batch18no_floats
	unsigned short int stepLocal_0 = var_1_7;
	if (var_1_11 < stepLocal_0) {
		var_1_1 = var_1_4;
	} else {
		var_1_1 = (var_1_5 + (var_1_6 - 5));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	return ((((var_1_11 < var_1_7) ? (var_1_1 == ((signed long int) var_1_4)) : (var_1_1 == ((signed long int) (var_1_5 + (var_1_6 - 5))))) && (((var_1_3 * var_1_2) != var_1_8) ? ((64 <= (min (var_1_2 , var_1_8))) ? (var_1_7 == ((unsigned short int) (max (var_1_9 , var_1_10)))) : (var_1_7 == ((unsigned short int) var_1_9))) : (var_1_7 == ((unsigned short int) 200)))) && (var_1_12 ? (var_1_11 == ((unsigned long int) (var_1_10 + var_1_9))) : ((last_1_var_1_11 <= var_1_7) ? (var_1_11 == ((unsigned long int) var_1_9)) : (var_1_11 == ((unsigned long int) var_1_7))))) && ((var_1_10 >= var_1_11) ? ((var_1_10 <= (var_1_7 + var_1_8)) ? (var_1_13 == ((signed long int) (var_1_6 - var_1_14))) : 1) : (var_1_13 == ((signed long int) var_1_6)))
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

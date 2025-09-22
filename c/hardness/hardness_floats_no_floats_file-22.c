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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch22no_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = -5;
unsigned char var_1_4 = 0;
unsigned short int var_1_5 = 256;
unsigned short int var_1_6 = 44772;
signed long int var_1_7 = 2;
signed long int var_1_8 = 25;
signed long int var_1_9 = 1;
signed long int var_1_10 = 4;
unsigned char var_1_11 = 10;
unsigned char var_1_12 = 5;
signed long int var_1_13 = 2;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -5;
unsigned short int last_1_var_1_5 = 256;
signed long int last_1_var_1_13 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch22no_floats
	if (last_1_var_1_5 == last_1_var_1_1) {
		var_1_1 = (last_1_var_1_5 + -16);
	} else {
		if (var_1_4) {
			var_1_1 = last_1_var_1_1;
		}
	}


	// From: Req3Batch22no_floats
	if (var_1_6 == var_1_1) {
		var_1_7 = (var_1_8 - 2);
	} else {
		var_1_7 = (((max (var_1_9 , var_1_10)) + 32) - var_1_8);
	}


	// From: Req4Batch22no_floats
	if (var_1_9 <= var_1_7) {
		var_1_11 = var_1_12;
	}


	// From: Req5Batch22no_floats
	signed long int stepLocal_1 = - (var_1_11 / var_1_6);
	if (stepLocal_1 >= last_1_var_1_13) {
		var_1_13 = (var_1_11 - var_1_1);
	} else {
		var_1_13 = var_1_1;
	}


	// From: Req2Batch22no_floats
	signed long int stepLocal_0 = var_1_13;
	if (var_1_4) {
		var_1_5 = var_1_1;
	} else {
		if (var_1_1 <= stepLocal_0) {
			var_1_5 = (max (last_1_var_1_5 , (var_1_6 - 8)));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	return (((((last_1_var_1_5 == last_1_var_1_1) ? (var_1_1 == ((signed short int) (last_1_var_1_5 + -16))) : (var_1_4 ? (var_1_1 == ((signed short int) last_1_var_1_1)) : 1)) && (var_1_4 ? (var_1_5 == ((unsigned short int) var_1_1)) : ((var_1_1 <= var_1_13) ? (var_1_5 == ((unsigned short int) (max (last_1_var_1_5 , (var_1_6 - 8))))) : 1))) && ((var_1_6 == var_1_1) ? (var_1_7 == ((signed long int) (var_1_8 - 2))) : (var_1_7 == ((signed long int) (((max (var_1_9 , var_1_10)) + 32) - var_1_8))))) && ((var_1_9 <= var_1_7) ? (var_1_11 == ((unsigned char) var_1_12)) : 1)) && (((- (var_1_11 / var_1_6)) >= last_1_var_1_13) ? (var_1_13 == ((signed long int) (var_1_11 - var_1_1))) : (var_1_13 == ((signed long int) var_1_1)))
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

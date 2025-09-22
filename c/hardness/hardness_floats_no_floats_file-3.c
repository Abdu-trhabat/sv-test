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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3no_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -64;
signed long int var_1_7 = -5;
signed long int var_1_8 = 500;
signed long int var_1_9 = -5;
signed long int var_1_10 = -100;
unsigned char var_1_11 = 1;
signed long int var_1_12 = 32;
signed long int var_1_14 = -32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned char last_1_var_1_11 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch3no_floats
	unsigned char stepLocal_0 = last_1_var_1_11;
	if (! last_1_var_1_11) {
		if (stepLocal_0 && last_1_var_1_1) {
			var_1_1 = (var_1_4 || var_1_5);
		}
	}


	// From: Req3Batch3no_floats
	signed long int stepLocal_2 = var_1_7;
	signed long int stepLocal_1 = var_1_10;
	if (var_1_8 <= stepLocal_2) {
		if (stepLocal_1 >= var_1_9) {
			var_1_11 = (! var_1_5);
		} else {
			var_1_11 = (var_1_1 || (! var_1_5));
		}
	}


	// From: Req2Batch3no_floats
	if (! var_1_11) {
		var_1_6 = (var_1_7 + var_1_8);
	} else {
		var_1_6 = (((abs (var_1_9)) + var_1_10) + var_1_7);
	}


	// From: Req4Batch3no_floats
	unsigned char stepLocal_4 = var_1_1;
	signed long int stepLocal_3 = var_1_9;
	if (var_1_8 != stepLocal_3) {
		if (stepLocal_4 && ((var_1_8 == var_1_6) || var_1_11)) {
			var_1_12 = var_1_14;
		} else {
			var_1_12 = 10;
		}
	} else {
		var_1_12 = var_1_14;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1073741823);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -1073741823);
	assume_abort_if_not(var_1_8 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -536870912);
	assume_abort_if_not(var_1_9 <= 536870912);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -536870911);
	assume_abort_if_not(var_1_10 <= 536870911);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	return ((((! last_1_var_1_11) ? ((last_1_var_1_11 && last_1_var_1_1) ? (var_1_1 == ((unsigned char) (var_1_4 || var_1_5))) : 1) : 1) && ((! var_1_11) ? (var_1_6 == ((signed long int) (var_1_7 + var_1_8))) : (var_1_6 == ((signed long int) (((abs (var_1_9)) + var_1_10) + var_1_7))))) && ((var_1_8 <= var_1_7) ? ((var_1_10 >= var_1_9) ? (var_1_11 == ((unsigned char) (! var_1_5))) : (var_1_11 == ((unsigned char) (var_1_1 || (! var_1_5))))) : 1)) && ((var_1_8 != var_1_9) ? ((var_1_1 && ((var_1_8 == var_1_6) || var_1_11)) ? (var_1_12 == ((signed long int) var_1_14)) : (var_1_12 == ((signed long int) 10))) : (var_1_12 == ((signed long int) var_1_14)))
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

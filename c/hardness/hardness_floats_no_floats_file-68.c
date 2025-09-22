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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch68no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = 32;
signed long int var_1_2 = 10;
signed long int var_1_3 = 100;
signed long int var_1_4 = 4;
signed long int var_1_5 = -2;
signed long int var_1_6 = 10;
signed long int var_1_7 = -5;
signed long int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 8;
signed long int var_1_11 = -16;
unsigned long int var_1_12 = 256;
unsigned long int var_1_13 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_7 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch68no_floats
	if ((var_1_2 - var_1_3) >= last_1_var_1_7) {
		var_1_1 = (max (var_1_5 , var_1_6));
	} else {
		var_1_1 = (max ((max (128 , var_1_5)) , (abs (128))));
	}


	// From: Req2Batch68no_floats
	signed long int stepLocal_0 = max (var_1_5 , var_1_6);
	if (var_1_4 < -25) {
		if (var_1_1 < stepLocal_0) {
			var_1_7 = (min ((abs (64)) , var_1_8));
		} else {
			var_1_7 = var_1_8;
		}
	} else {
		var_1_7 = var_1_8;
	}


	// From: Req4Batch68no_floats
	var_1_11 = -10;


	// From: Req5Batch68no_floats
	var_1_12 = 10u;


	// From: Req6Batch68no_floats
	var_1_13 = var_1_10;


	// From: Req3Batch68no_floats
	if (((var_1_2 + var_1_7) <= var_1_3) || (var_1_6 >= (var_1_11 | var_1_5))) {
		var_1_9 = 4;
	} else {
		var_1_9 = var_1_10;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483647);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
}

int property(void) {
	return (((((((var_1_2 - var_1_3) >= last_1_var_1_7) ? (var_1_1 == ((signed long int) (max (var_1_5 , var_1_6)))) : (var_1_1 == ((signed long int) (max ((max (128 , var_1_5)) , (abs (128))))))) && ((var_1_4 < -25) ? ((var_1_1 < (max (var_1_5 , var_1_6))) ? (var_1_7 == ((signed long int) (min ((abs (64)) , var_1_8)))) : (var_1_7 == ((signed long int) var_1_8))) : (var_1_7 == ((signed long int) var_1_8)))) && ((((var_1_2 + var_1_7) <= var_1_3) || (var_1_6 >= (var_1_11 | var_1_5))) ? (var_1_9 == ((unsigned short int) 4)) : (var_1_9 == ((unsigned short int) var_1_10)))) && (var_1_11 == ((signed long int) -10))) && (var_1_12 == ((unsigned long int) 10u))) && (var_1_13 == ((unsigned long int) var_1_10))
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

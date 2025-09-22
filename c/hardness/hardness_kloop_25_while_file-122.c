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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12225_while.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 8;
unsigned char var_1_2 = 0;
unsigned long int var_1_3 = 1;
double var_1_4 = 256.5;
double var_1_5 = 24.2;
double var_1_6 = 127.2;
signed short int var_1_7 = 32;
signed short int var_1_8 = 20060;
signed short int var_1_9 = 20275;
signed short int var_1_10 = -50;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_7 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch12225_while
	if ((var_1_4 - var_1_5) < (- var_1_6)) {
		var_1_3 = last_1_var_1_7;
	}


	// From: Req3Batch12225_while
	if (last_1_var_1_7 >= var_1_3) {
		var_1_7 = ((var_1_8 - var_1_2) - ((max (25469 , var_1_9)) - last_1_var_1_7));
	}


	// From: Req1Batch12225_while
	var_1_1 = (abs (min (1 , var_1_2)));


	// From: Req4Batch12225_while
	if (var_1_11 && var_1_12) {
		if (var_1_3 >= (var_1_2 + var_1_8)) {
			var_1_10 = (abs (var_1_7));
		} else {
			var_1_10 = (var_1_2 + var_1_7);
		}
	} else {
		var_1_10 = 100;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 254);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 16382);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 16383);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
}

int property(void) {
	return (((var_1_1 == ((unsigned char) (abs (min (1 , var_1_2))))) && (((var_1_4 - var_1_5) < (- var_1_6)) ? (var_1_3 == ((unsigned long int) last_1_var_1_7)) : 1)) && ((last_1_var_1_7 >= var_1_3) ? (var_1_7 == ((signed short int) ((var_1_8 - var_1_2) - ((max (25469 , var_1_9)) - last_1_var_1_7)))) : 1)) && ((var_1_11 && var_1_12) ? ((var_1_3 >= (var_1_2 + var_1_8)) ? (var_1_10 == ((signed short int) (abs (var_1_7)))) : (var_1_10 == ((signed short int) (var_1_2 + var_1_7)))) : (var_1_10 == ((signed short int) 100)))
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

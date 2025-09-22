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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch725_while.c", 13, "reach_error"); }
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
float var_1_2 = 200.875;
float var_1_3 = 8.2;
float var_1_4 = 100000000000.4;
unsigned char var_1_5 = 5;
float var_1_6 = 32.75;
float var_1_7 = 127.25;
float var_1_8 = 16.2;
float var_1_9 = 9.4;
signed long int var_1_10 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch725_while
	if (var_1_4 > ((min (var_1_3 , var_1_2)) * (- 0.125f))) {
		var_1_6 = (max (var_1_7 , (var_1_8 + var_1_9)));
	}


	// From: Req1Batch725_while
	if (! (var_1_6 <= (var_1_3 - var_1_4))) {
		if (var_1_6 < var_1_3) {
			if (! (var_1_3 > var_1_6)) {
				var_1_1 = var_1_5;
			} else {
				var_1_1 = 1;
			}
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req3Batch725_while
	if (var_1_6 <= var_1_4) {
		if (var_1_8 > var_1_9) {
			var_1_10 = var_1_1;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((! (var_1_6 <= (var_1_3 - var_1_4))) ? ((var_1_6 < var_1_3) ? ((! (var_1_3 > var_1_6)) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) 1))) : (var_1_1 == ((unsigned char) var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) && ((var_1_4 > ((min (var_1_3 , var_1_2)) * (- 0.125f))) ? (var_1_6 == ((float) (max (var_1_7 , (var_1_8 + var_1_9))))) : 1)) && ((var_1_6 <= var_1_4) ? ((var_1_8 > var_1_9) ? (var_1_10 == ((signed long int) var_1_1)) : 1) : 1)
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

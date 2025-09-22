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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch64Amount25.c", 13, "reach_error"); }
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
double var_1_1 = 0.9;
unsigned long int var_1_3 = 2941876006;
unsigned long int var_1_4 = 200;
double var_1_5 = 127.422;
signed long int var_1_6 = 5;
signed long int var_1_7 = 5;
signed long int var_1_8 = 1;
float var_1_9 = 4.698;
unsigned long int var_1_11 = 1;
unsigned char var_1_12 = 5;
unsigned long int var_1_13 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch64Amount25
	var_1_6 = (min (var_1_7 , var_1_8));


	// From: Req4Batch64Amount25
	var_1_12 = var_1_11;


	// From: Req5Batch64Amount25
	var_1_13 = var_1_11;


	// From: Req1Batch64Amount25
	unsigned long int stepLocal_1 = var_1_3;
	unsigned long int stepLocal_0 = var_1_13;
	if (stepLocal_0 <= (var_1_3 - var_1_4)) {
		if (stepLocal_1 < (var_1_4 * var_1_13)) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = 10.8;
		}
	}


	// From: Req3Batch64Amount25
	if (! (var_1_4 <= (var_1_3 - 32u))) {
		if (var_1_1 < ((- var_1_5) + var_1_1)) {
			if (var_1_4 > (var_1_13 >> var_1_11)) {
				var_1_9 = var_1_5;
			}
		}
	} else {
		var_1_9 = var_1_5;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 2147483647);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 31);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_13 <= (var_1_3 - var_1_4)) ? ((var_1_3 < (var_1_4 * var_1_13)) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) 10.8))) : 1) && (var_1_6 == ((signed long int) (min (var_1_7 , var_1_8))))) && ((! (var_1_4 <= (var_1_3 - 32u))) ? ((var_1_1 < ((- var_1_5) + var_1_1)) ? ((var_1_4 > (var_1_13 >> var_1_11)) ? (var_1_9 == ((float) var_1_5)) : 1) : 1) : (var_1_9 == ((float) var_1_5)))) && (var_1_12 == ((unsigned char) var_1_11))) && (var_1_13 == ((unsigned long int) var_1_11))
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

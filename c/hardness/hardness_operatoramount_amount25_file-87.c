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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch87Amount25.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned long int var_1_3 = 3164414017;
unsigned long int var_1_4 = 128;
signed char var_1_5 = -128;
signed char var_1_6 = 10;
signed char var_1_7 = 50;
float var_1_8 = 5.1;
unsigned short int var_1_9 = 1;
float var_1_10 = 63.75;
signed char var_1_11 = 100;
unsigned char var_1_13 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch87Amount25
	if (var_1_2) {
		var_1_1 = (abs (var_1_3 - var_1_4));
	}


	// From: Req2Batch87Amount25
	unsigned long int stepLocal_1 = var_1_4;
	unsigned long int stepLocal_0 = var_1_1;
	if (-8 < stepLocal_1) {
		if (var_1_4 != stepLocal_0) {
			var_1_5 = ((abs (var_1_6)) - var_1_7);
		} else {
			var_1_5 = var_1_6;
		}
	} else {
		var_1_5 = -2;
	}


	// From: Req3Batch87Amount25
	signed long int stepLocal_3 = var_1_7 >> var_1_9;
	signed char stepLocal_2 = var_1_7;
	if (var_1_6 >= stepLocal_3) {
		if (stepLocal_2 != var_1_3) {
			var_1_8 = var_1_10;
		}
	}


	// From: Req4Batch87Amount25
	if (((~ var_1_7) < var_1_1) || var_1_2) {
		if (var_1_2 && var_1_13) {
			var_1_11 = var_1_7;
		} else {
			var_1_11 = var_1_6;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 2147483647);
	assume_abort_if_not(var_1_3 <= 4294967294);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -126);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 6);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((unsigned long int) (abs (var_1_3 - var_1_4)))) : 1) && ((-8 < var_1_4) ? ((var_1_4 != var_1_1) ? (var_1_5 == ((signed char) ((abs (var_1_6)) - var_1_7))) : (var_1_5 == ((signed char) var_1_6))) : (var_1_5 == ((signed char) -2)))) && ((var_1_6 >= (var_1_7 >> var_1_9)) ? ((var_1_7 != var_1_3) ? (var_1_8 == ((float) var_1_10)) : 1) : 1)) && ((((~ var_1_7) < var_1_1) || var_1_2) ? ((var_1_2 && var_1_13) ? (var_1_11 == ((signed char) var_1_7)) : (var_1_11 == ((signed char) var_1_6))) : 1)
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

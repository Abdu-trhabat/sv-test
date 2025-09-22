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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch191normal.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 64;
unsigned short int var_1_3 = 32;
unsigned char var_1_5 = 0;
unsigned char var_1_7 = 0;
unsigned long int var_1_8 = 256;
unsigned long int var_1_9 = 32;
unsigned long int var_1_10 = 4;
double var_1_11 = 64.375;
double var_1_12 = 5.8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 64;
unsigned long int last_1_var_1_8 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch191normal
	unsigned long int stepLocal_0 = last_1_var_1_8 / var_1_3;
	if (stepLocal_0 == last_1_var_1_1) {
		var_1_1 = (max (25u , last_1_var_1_8));
	} else {
		var_1_1 = last_1_var_1_8;
	}


	// From: Req3Batch191normal
	unsigned long int stepLocal_2 = var_1_1 ^ (256u / var_1_3);
	if (stepLocal_2 < var_1_1) {
		var_1_8 = ((var_1_1 + var_1_3) + (min (var_1_9 , var_1_10)));
	} else {
		var_1_8 = (min (var_1_1 , (var_1_10 + var_1_3)));
	}


	// From: Req2Batch191normal
	unsigned long int stepLocal_1 = - 64u;
	if (stepLocal_1 >= var_1_3) {
		var_1_5 = (! var_1_7);
	}


	// From: Req4Batch191normal
	unsigned long int stepLocal_4 = abs (var_1_1);
	unsigned long int stepLocal_3 = max (var_1_8 , (- 2));
	if (stepLocal_3 < (var_1_9 - var_1_3)) {
		if (var_1_9 <= stepLocal_4) {
			var_1_11 = var_1_12;
		}
	} else {
		var_1_11 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	assume_abort_if_not(var_1_3 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
}

int property(void) {
	return (((((last_1_var_1_8 / var_1_3) == last_1_var_1_1) ? (var_1_1 == ((unsigned long int) (max (25u , last_1_var_1_8)))) : (var_1_1 == ((unsigned long int) last_1_var_1_8))) && (((- 64u) >= var_1_3) ? (var_1_5 == ((unsigned char) (! var_1_7))) : 1)) && (((var_1_1 ^ (256u / var_1_3)) < var_1_1) ? (var_1_8 == ((unsigned long int) ((var_1_1 + var_1_3) + (min (var_1_9 , var_1_10))))) : (var_1_8 == ((unsigned long int) (min (var_1_1 , (var_1_10 + var_1_3))))))) && (((max (var_1_8 , (- 2))) < (var_1_9 - var_1_3)) ? ((var_1_9 <= (abs (var_1_1))) ? (var_1_11 == ((double) var_1_12)) : 1) : (var_1_11 == ((double) var_1_12)))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179normal.c", 13, "reach_error"); }
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
double var_1_1 = 8.8;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
double var_1_4 = 127.25;
double var_1_5 = 63.5;
double var_1_6 = 1.974;
double var_1_7 = 15.75;
double var_1_8 = 10.25;
double var_1_9 = 9.5;
unsigned short int var_1_10 = 32;
unsigned short int var_1_11 = 200;
unsigned short int var_1_12 = 1;
double var_1_13 = 32.4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch179normal
	unsigned char stepLocal_0 = var_1_2;
	if (stepLocal_0 && (! var_1_3)) {
		var_1_1 = ((min (var_1_4 , var_1_5)) + 7.5);
	}


	// From: Req2Batch179normal
	if (var_1_1 > (var_1_4 * var_1_5)) {
		if (var_1_1 <= var_1_5) {
			if (var_1_5 > var_1_4) {
				var_1_6 = (var_1_4 + ((max (var_1_7 , var_1_8)) - var_1_9));
			} else {
				var_1_6 = (abs (var_1_7));
			}
		} else {
			var_1_6 = var_1_8;
		}
	} else {
		var_1_6 = var_1_4;
	}


	// From: Req3Batch179normal
	if (var_1_5 > var_1_8) {
		var_1_10 = (((29089 - var_1_11) - 8) + 16);
	} else {
		var_1_10 = (min (var_1_11 , var_1_12));
	}


	// From: Req4Batch179normal
	var_1_13 = var_1_7;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 8192);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 && (! var_1_3)) ? (var_1_1 == ((double) ((min (var_1_4 , var_1_5)) + 7.5))) : 1) && ((var_1_1 > (var_1_4 * var_1_5)) ? ((var_1_1 <= var_1_5) ? ((var_1_5 > var_1_4) ? (var_1_6 == ((double) (var_1_4 + ((max (var_1_7 , var_1_8)) - var_1_9)))) : (var_1_6 == ((double) (abs (var_1_7))))) : (var_1_6 == ((double) var_1_8))) : (var_1_6 == ((double) var_1_4)))) && ((var_1_5 > var_1_8) ? (var_1_10 == ((unsigned short int) (((29089 - var_1_11) - 8) + 16))) : (var_1_10 == ((unsigned short int) (min (var_1_11 , var_1_12)))))) && (var_1_13 == ((double) var_1_7))
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

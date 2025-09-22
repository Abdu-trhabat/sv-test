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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111has_floats.c", 13, "reach_error"); }
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
double var_1_1 = -64.0;
unsigned char var_1_2 = 1;
double var_1_3 = 5.0;
double var_1_4 = -128.0;
double var_1_5 = -4.0;
signed char var_1_6 = 10;
signed char var_1_7 = -16;
signed char var_1_8 = 8;
signed char var_1_9 = 0;
unsigned char var_1_10 = 16;
signed long int var_1_11 = 32;
unsigned char var_1_12 = 50;
unsigned char var_1_13 = 128;
unsigned char var_1_14 = 100;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 5;
unsigned char var_1_17 = 50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch111has_floats
	if (var_1_2) {
		var_1_1 = (4.0 - var_1_3);
	} else {
		var_1_1 = (var_1_4 + var_1_5);
	}


	// From: Req2Batch111has_floats
	signed long int stepLocal_0 = 8 + var_1_8;
	if (var_1_1 >= var_1_3) {
		var_1_6 = (var_1_7 + var_1_8);
	} else {
		if (stepLocal_0 >= var_1_7) {
			var_1_6 = var_1_7;
		} else {
			var_1_6 = -5;
		}
	}


	// From: Req3Batch111has_floats
	var_1_9 = (min (var_1_8 , var_1_7));


	// From: Req4Batch111has_floats
	if ((var_1_8 & var_1_9) <= (var_1_7 + (var_1_9 + var_1_11))) {
		var_1_10 = (max ((max ((4 + var_1_12) , (var_1_13 - var_1_14))) , (max ((min (var_1_15 , var_1_16)) , (var_1_17 + 1)))));
	} else {
		var_1_10 = var_1_14;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 127);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((double) (4.0 - var_1_3))) : (var_1_1 == ((double) (var_1_4 + var_1_5)))) && ((var_1_1 >= var_1_3) ? (var_1_6 == ((signed char) (var_1_7 + var_1_8))) : (((8 + var_1_8) >= var_1_7) ? (var_1_6 == ((signed char) var_1_7)) : (var_1_6 == ((signed char) -5))))) && (var_1_9 == ((signed char) (min (var_1_8 , var_1_7))))) && (((var_1_8 & var_1_9) <= (var_1_7 + (var_1_9 + var_1_11))) ? (var_1_10 == ((unsigned char) (max ((max ((4 + var_1_12) , (var_1_13 - var_1_14))) , (max ((min (var_1_15 , var_1_16)) , (var_1_17 + 1))))))) : (var_1_10 == ((unsigned char) var_1_14)))
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

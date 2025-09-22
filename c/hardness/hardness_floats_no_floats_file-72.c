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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch72no_floats.c", 13, "reach_error"); }
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
signed long int var_1_2 = 10;
signed long int var_1_3 = 5;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
signed short int var_1_9 = -16;
signed short int var_1_10 = 64;
signed short int var_1_11 = -100;
signed short int var_1_12 = -8;
signed short int var_1_13 = 256;
signed short int var_1_14 = 0;
unsigned char var_1_15 = 8;
unsigned char var_1_16 = 10;
signed short int var_1_17 = -5;
signed long int var_1_18 = 1;
signed long int var_1_19 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch72no_floats
	if (var_1_3 >= var_1_2) {
		var_1_1 = (var_1_5 && ((var_1_6 || var_1_7) || var_1_8));
	}


	// From: Req2Batch72no_floats
	if (var_1_1) {
		var_1_9 = (min ((-10000 + var_1_10) , ((var_1_11 + 64) + var_1_12)));
	} else {
		var_1_9 = ((min (16 , var_1_13)) - var_1_14);
	}


	// From: Req4Batch72no_floats
	if ((var_1_18 - var_1_19) <= (min (var_1_3 , var_1_2))) {
		var_1_17 = var_1_11;
	}


	// From: Req3Batch72no_floats
	unsigned char stepLocal_1 = var_1_16;
	signed short int stepLocal_0 = var_1_17;
	if (var_1_12 > stepLocal_0) {
		if (! (! (var_1_1 || var_1_5))) {
			var_1_15 = var_1_16;
		}
	} else {
		if (stepLocal_1 > (- var_1_17)) {
			var_1_15 = var_1_16;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -16383);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -8191);
	assume_abort_if_not(var_1_11 <= 8192);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_3 >= var_1_2) ? (var_1_1 == ((unsigned char) (var_1_5 && ((var_1_6 || var_1_7) || var_1_8)))) : 1) && (var_1_1 ? (var_1_9 == ((signed short int) (min ((-10000 + var_1_10) , ((var_1_11 + 64) + var_1_12))))) : (var_1_9 == ((signed short int) ((min (16 , var_1_13)) - var_1_14))))) && ((var_1_12 > var_1_17) ? ((! (! (var_1_1 || var_1_5))) ? (var_1_15 == ((unsigned char) var_1_16)) : 1) : ((var_1_16 > (- var_1_17)) ? (var_1_15 == ((unsigned char) var_1_16)) : 1))) && (((var_1_18 - var_1_19) <= (min (var_1_3 , var_1_2))) ? (var_1_17 == ((signed short int) var_1_11)) : 1)
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

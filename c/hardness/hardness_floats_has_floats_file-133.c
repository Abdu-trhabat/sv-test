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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch133has_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = -64;
signed long int var_1_2 = 16;
signed long int var_1_3 = 1;
signed short int var_1_4 = -16;
signed short int var_1_5 = 2;
unsigned short int var_1_6 = 5;
unsigned short int var_1_7 = 256;
unsigned short int var_1_8 = 4;
double var_1_9 = 1.0;
unsigned char var_1_10 = 0;
double var_1_11 = 2.0;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 17577;
unsigned short int var_1_14 = 256;
unsigned short int var_1_15 = 5;
unsigned short int var_1_16 = 32;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch133has_floats
	if (8 >= (var_1_2 + var_1_3)) {
		var_1_1 = (min (var_1_4 , (var_1_5 + 10)));
	}


	// From: Req2Batch133has_floats
	signed long int stepLocal_0 = var_1_3;
	if (stepLocal_0 <= var_1_2) {
		var_1_6 = (var_1_7 + var_1_8);
	}


	// From: Req4Batch133has_floats
	signed short int stepLocal_1 = var_1_1;
	if (var_1_8 > stepLocal_1) {
		var_1_12 = ((max ((var_1_13 - var_1_14) , var_1_8)) + ((var_1_15 + var_1_16) + 2));
	}


	// From: Req3Batch133has_floats
	if ((var_1_6 | (var_1_2 * var_1_3)) <= ((var_1_8 << var_1_12) * var_1_7)) {
		if (! var_1_10) {
			var_1_9 = (128.0 + var_1_11);
		} else {
			var_1_9 = var_1_11;
		}
	} else {
		var_1_9 = var_1_11;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 16383);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 8192);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 8192);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((8 >= (var_1_2 + var_1_3)) ? (var_1_1 == ((signed short int) (min (var_1_4 , (var_1_5 + 10))))) : 1) && ((var_1_3 <= var_1_2) ? (var_1_6 == ((unsigned short int) (var_1_7 + var_1_8))) : 1)) && (((var_1_6 | (var_1_2 * var_1_3)) <= ((var_1_8 << var_1_12) * var_1_7)) ? ((! var_1_10) ? (var_1_9 == ((double) (128.0 + var_1_11))) : (var_1_9 == ((double) var_1_11))) : (var_1_9 == ((double) var_1_11)))) && ((var_1_8 > var_1_1) ? (var_1_12 == ((unsigned short int) ((max ((var_1_13 - var_1_14) , var_1_8)) + ((var_1_15 + var_1_16) + 2)))) : 1)
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

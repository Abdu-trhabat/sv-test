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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch122stepLocals.c", 13, "reach_error"); }
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
unsigned short int var_1_2 = 64;
signed long int var_1_3 = 100;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 32;
double var_1_8 = 49.5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
double var_1_11 = 5.375;
unsigned short int var_1_12 = 5;
unsigned long int var_1_13 = 1;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed short int var_1_16 = -8;
unsigned char var_1_17 = 1;
signed short int var_1_18 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch122stepLocals
	if ((- var_1_2) > 5) {
		if ((16 << var_1_2) < var_1_3) {
			var_1_1 = (max ((var_1_4 - (var_1_5 - var_1_6)) , var_1_7));
		} else {
			var_1_1 = var_1_6;
		}
	} else {
		var_1_1 = 0;
	}


	// From: Req2Batch122stepLocals
	if ((var_1_9 && var_1_10) || (var_1_5 <= 32)) {
		var_1_8 = var_1_11;
	}


	// From: Req3Batch122stepLocals
	if ((var_1_5 / (abs (var_1_4))) <= (var_1_6 * (min (var_1_7 , var_1_3)))) {
		var_1_12 = var_1_5;
	}


	// From: Req4Batch122stepLocals
	if (var_1_1 > var_1_12) {
		var_1_13 = var_1_6;
	}


	// From: Req5Batch122stepLocals
	unsigned char stepLocal_0 = var_1_10;
	if (var_1_9 && stepLocal_0) {
		if (var_1_8 < var_1_11) {
			var_1_14 = (var_1_10 && var_1_15);
		} else {
			var_1_14 = var_1_15;
		}
	} else {
		var_1_14 = 1;
	}


	// From: Req6Batch122stepLocals
	unsigned char stepLocal_1 = var_1_5;
	if (var_1_15) {
		if (var_1_1 > stepLocal_1) {
			if (var_1_17) {
				var_1_16 = (abs (5));
			}
		} else {
			var_1_16 = ((50 + var_1_5) + ((min (var_1_1 , var_1_6)) + (var_1_7 - var_1_4)));
		}
	} else {
		var_1_16 = (max (-128 , var_1_7));
	}


	// From: Req7Batch122stepLocals
	var_1_18 = var_1_6;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((- var_1_2) > 5) ? (((16 << var_1_2) < var_1_3) ? (var_1_1 == ((unsigned char) (max ((var_1_4 - (var_1_5 - var_1_6)) , var_1_7)))) : (var_1_1 == ((unsigned char) var_1_6))) : (var_1_1 == ((unsigned char) 0))) && (((var_1_9 && var_1_10) || (var_1_5 <= 32)) ? (var_1_8 == ((double) var_1_11)) : 1)) && (((var_1_5 / (abs (var_1_4))) <= (var_1_6 * (min (var_1_7 , var_1_3)))) ? (var_1_12 == ((unsigned short int) var_1_5)) : 1)) && ((var_1_1 > var_1_12) ? (var_1_13 == ((unsigned long int) var_1_6)) : 1)) && ((var_1_9 && var_1_10) ? ((var_1_8 < var_1_11) ? (var_1_14 == ((unsigned char) (var_1_10 && var_1_15))) : (var_1_14 == ((unsigned char) var_1_15))) : (var_1_14 == ((unsigned char) 1)))) && (var_1_15 ? ((var_1_1 > var_1_5) ? (var_1_17 ? (var_1_16 == ((signed short int) (abs (5)))) : 1) : (var_1_16 == ((signed short int) ((50 + var_1_5) + ((min (var_1_1 , var_1_6)) + (var_1_7 - var_1_4)))))) : (var_1_16 == ((signed short int) (max (-128 , var_1_7)))))) && (var_1_18 == ((signed short int) var_1_6))
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

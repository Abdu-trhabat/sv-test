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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66no_floats.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 8;
unsigned long int var_1_2 = 1;
unsigned long int var_1_3 = 32;
unsigned short int var_1_4 = 4;
unsigned short int var_1_5 = 16;
unsigned short int var_1_6 = 128;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 0;
unsigned short int var_1_9 = 38382;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 32;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 2;
signed long int var_1_16 = -1000000;
signed long int var_1_17 = -1000000000;
unsigned char var_1_18 = 100;
unsigned long int var_1_19 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch66no_floats
	if (var_1_2 <= var_1_3) {
		var_1_1 = (var_1_4 + ((var_1_5 + var_1_6) + (var_1_7 - var_1_8)));
	} else {
		var_1_1 = (var_1_9 - var_1_7);
	}


	// From: Req2Batch66no_floats
	unsigned short int stepLocal_1 = var_1_4;
	unsigned char stepLocal_0 = var_1_4 > var_1_1;
	if (stepLocal_0 || var_1_11) {
		if (var_1_6 != stepLocal_1) {
			var_1_10 = var_1_12;
		} else {
			var_1_10 = (max ((var_1_13 + var_1_14) , (max (var_1_12 , var_1_15))));
		}
	}


	// From: Req3Batch66no_floats
	if (var_1_9 < var_1_4) {
		var_1_16 = (var_1_7 + 16);
	} else {
		if (var_1_11 || (var_1_17 <= var_1_3)) {
			var_1_16 = var_1_4;
		} else {
			var_1_16 = var_1_1;
		}
	}


	// From: Req4Batch66no_floats
	var_1_18 = var_1_15;


	// From: Req5Batch66no_floats
	var_1_19 = var_1_12;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8192);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 8191);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 8191);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 <= var_1_3) ? (var_1_1 == ((unsigned short int) (var_1_4 + ((var_1_5 + var_1_6) + (var_1_7 - var_1_8))))) : (var_1_1 == ((unsigned short int) (var_1_9 - var_1_7)))) && (((var_1_4 > var_1_1) || var_1_11) ? ((var_1_6 != var_1_4) ? (var_1_10 == ((unsigned char) var_1_12)) : (var_1_10 == ((unsigned char) (max ((var_1_13 + var_1_14) , (max (var_1_12 , var_1_15))))))) : 1)) && ((var_1_9 < var_1_4) ? (var_1_16 == ((signed long int) (var_1_7 + 16))) : ((var_1_11 || (var_1_17 <= var_1_3)) ? (var_1_16 == ((signed long int) var_1_4)) : (var_1_16 == ((signed long int) var_1_1))))) && (var_1_18 == ((unsigned char) var_1_15))) && (var_1_19 == ((unsigned long int) var_1_12))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch25no_floats.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 256;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 10;
unsigned short int var_1_4 = 500;
unsigned long int var_1_5 = 0;
unsigned long int var_1_6 = 1509114200;
unsigned long int var_1_7 = 10;
signed long int var_1_8 = 1;
signed long int var_1_10 = 64;
signed long int var_1_12 = 4;
signed long int var_1_13 = -1;
signed long int var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed long int var_1_17 = 16;
signed long int var_1_18 = -16;
signed long int var_1_19 = -8;
signed long int var_1_20 = -64;
signed long int var_1_21 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch25no_floats
	unsigned short int stepLocal_0 = var_1_3;
	if (var_1_2) {
		if (stepLocal_0 <= var_1_4) {
			var_1_1 = ((max (var_1_3 , (var_1_4 + var_1_5))) + (var_1_6 - var_1_7));
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req3Batch25no_floats
	unsigned char stepLocal_1 = var_1_16;
	if (var_1_2) {
		if (var_1_15 && stepLocal_1) {
			var_1_14 = ((var_1_17 + var_1_18) + (abs (var_1_13)));
		} else {
			var_1_14 = (abs (var_1_18 + var_1_13));
		}
	} else {
		var_1_14 = (var_1_17 + var_1_18);
	}


	// From: Req4Batch25no_floats
	var_1_19 = var_1_17;


	// From: Req5Batch25no_floats
	var_1_20 = var_1_21;


	// From: Req2Batch25no_floats
	if ((var_1_14 / var_1_10) < var_1_14) {
		var_1_8 = (min (var_1_12 , (-50 + var_1_13)));
	} else {
		var_1_8 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 1073741823);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	assume_abort_if_not(var_1_10 != 0);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -2147483648);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 ? ((var_1_3 <= var_1_4) ? (var_1_1 == ((unsigned long int) ((max (var_1_3 , (var_1_4 + var_1_5))) + (var_1_6 - var_1_7)))) : 1) : (var_1_1 == ((unsigned long int) var_1_7))) && (((var_1_14 / var_1_10) < var_1_14) ? (var_1_8 == ((signed long int) (min (var_1_12 , (-50 + var_1_13))))) : (var_1_8 == ((signed long int) var_1_13)))) && (var_1_2 ? ((var_1_15 && var_1_16) ? (var_1_14 == ((signed long int) ((var_1_17 + var_1_18) + (abs (var_1_13))))) : (var_1_14 == ((signed long int) (abs (var_1_18 + var_1_13))))) : (var_1_14 == ((signed long int) (var_1_17 + var_1_18))))) && (var_1_19 == ((signed long int) var_1_17))) && (var_1_20 == ((signed long int) var_1_21))
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

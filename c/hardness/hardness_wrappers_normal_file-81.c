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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch81normal.c", 13, "reach_error"); }
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
double var_1_1 = 9999.5;
unsigned char var_1_2 = 1;
double var_1_3 = 4.5;
double var_1_4 = 2.5;
double var_1_5 = 0.0;
double var_1_6 = 999999999999.3;
signed char var_1_7 = -128;
signed long int var_1_9 = 0;
signed long int var_1_10 = -10;
signed char var_1_11 = 16;
signed char var_1_12 = 16;
unsigned short int var_1_13 = 5;
unsigned char var_1_14 = 1;
unsigned short int var_1_15 = 16;
unsigned short int var_1_16 = 32647;
unsigned short int var_1_17 = 128;
signed long int var_1_18 = -8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_18 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch81normal
	unsigned char stepLocal_1 = var_1_14;
	if ((var_1_11 >= last_1_var_1_18) && stepLocal_1) {
		var_1_13 = (min (var_1_15 , 100));
	} else {
		var_1_13 = ((var_1_16 - 5) + var_1_17);
	}


	// From: Req4Batch81normal
	unsigned short int stepLocal_2 = var_1_16;
	if (var_1_13 > stepLocal_2) {
		if (var_1_3 < (var_1_5 - var_1_6)) {
			var_1_18 = (abs (var_1_15));
		} else {
			var_1_18 = var_1_13;
		}
	} else {
		var_1_18 = var_1_15;
	}


	// From: Req1Batch81normal
	if (var_1_2) {
		var_1_1 = (max (var_1_3 , (var_1_4 - (var_1_5 - var_1_6))));
	}


	// From: Req2Batch81normal
	signed long int stepLocal_0 = var_1_9 ^ var_1_10;
	if ((min (-25 , var_1_13)) != stepLocal_0) {
		if (var_1_2) {
			var_1_7 = (var_1_11 + var_1_12);
		}
	} else {
		var_1_7 = (min (var_1_12 , var_1_11));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 4611686.018427383000e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((double) (max (var_1_3 , (var_1_4 - (var_1_5 - var_1_6)))))) : 1) && (((min (-25 , var_1_13)) != (var_1_9 ^ var_1_10)) ? (var_1_2 ? (var_1_7 == ((signed char) (var_1_11 + var_1_12))) : 1) : (var_1_7 == ((signed char) (min (var_1_12 , var_1_11)))))) && (((var_1_11 >= last_1_var_1_18) && var_1_14) ? (var_1_13 == ((unsigned short int) (min (var_1_15 , 100)))) : (var_1_13 == ((unsigned short int) ((var_1_16 - 5) + var_1_17))))) && ((var_1_13 > var_1_16) ? ((var_1_3 < (var_1_5 - var_1_6)) ? (var_1_18 == ((signed long int) (abs (var_1_15)))) : (var_1_18 == ((signed long int) var_1_13))) : (var_1_18 == ((signed long int) var_1_15)))
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

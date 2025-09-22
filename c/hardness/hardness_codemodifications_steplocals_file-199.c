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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199stepLocals.c", 13, "reach_error"); }
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
double var_1_1 = 8.7;
unsigned char var_1_2 = 0;
signed short int var_1_3 = 16;
signed short int var_1_4 = 10;
signed long int var_1_5 = 32;
signed long int var_1_6 = 2;
unsigned char var_1_7 = 1;
double var_1_8 = 0.5;
unsigned short int var_1_9 = 256;
signed short int var_1_10 = 1;
signed short int var_1_11 = 2;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
signed long int var_1_14 = 0;
signed long int var_1_15 = -256;
signed long int var_1_16 = 1000000000;
signed long int var_1_17 = 4;
unsigned char var_1_18 = 5;
unsigned char var_1_19 = 2;
unsigned char var_1_20 = 64;
unsigned short int var_1_21 = 100;
signed short int var_1_22 = 256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch199stepLocals
	signed long int stepLocal_0 = var_1_5 * var_1_6;
	if (var_1_2) {
		if (((-128 / var_1_3) / var_1_4) < stepLocal_0) {
			if (var_1_7) {
				var_1_1 = var_1_8;
			} else {
				var_1_1 = 5.2;
			}
		}
	}


	// From: Req2Batch199stepLocals
	unsigned char stepLocal_2 = var_1_1 < var_1_8;
	signed short int stepLocal_1 = var_1_4;
	if (var_1_7 && stepLocal_2) {
		if (stepLocal_1 <= ((var_1_10 - var_1_11) % (max (var_1_3 , -64)))) {
			var_1_9 = var_1_11;
		} else {
			var_1_9 = 256;
		}
	} else {
		var_1_9 = var_1_11;
	}


	// From: Req3Batch199stepLocals
	signed short int stepLocal_4 = var_1_4;
	signed long int stepLocal_3 = var_1_9 * var_1_5;
	if (var_1_11 != stepLocal_4) {
		if (stepLocal_3 != 5) {
			var_1_12 = var_1_13;
		}
	}


	// From: Req4Batch199stepLocals
	if (var_1_11 < var_1_3) {
		var_1_14 = (var_1_9 + var_1_15);
	} else {
		var_1_14 = (((var_1_16 - var_1_11) + var_1_9) - var_1_17);
	}


	// From: Req5Batch199stepLocals
	unsigned char stepLocal_6 = var_1_13;
	signed short int stepLocal_5 = var_1_3;
	if (var_1_5 <= stepLocal_5) {
		if (stepLocal_6 || (var_1_10 != (var_1_11 >> var_1_19))) {
			var_1_18 = ((abs (100 + var_1_20)) - var_1_19);
		} else {
			if (var_1_2) {
				var_1_18 = var_1_20;
			} else {
				var_1_18 = 32;
			}
		}
	} else {
		var_1_18 = var_1_20;
	}


	// From: Req6Batch199stepLocals
	var_1_21 = var_1_20;


	// From: Req7Batch199stepLocals
	var_1_22 = var_1_20;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -1073741823);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 536870911);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 2147483646);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 14);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 64);
	assume_abort_if_not(var_1_20 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 ? ((((-128 / var_1_3) / var_1_4) < (var_1_5 * var_1_6)) ? (var_1_7 ? (var_1_1 == ((double) var_1_8)) : (var_1_1 == ((double) 5.2))) : 1) : 1) && ((var_1_7 && (var_1_1 < var_1_8)) ? ((var_1_4 <= ((var_1_10 - var_1_11) % (max (var_1_3 , -64)))) ? (var_1_9 == ((unsigned short int) var_1_11)) : (var_1_9 == ((unsigned short int) 256))) : (var_1_9 == ((unsigned short int) var_1_11)))) && ((var_1_11 != var_1_4) ? (((var_1_9 * var_1_5) != 5) ? (var_1_12 == ((unsigned char) var_1_13)) : 1) : 1)) && ((var_1_11 < var_1_3) ? (var_1_14 == ((signed long int) (var_1_9 + var_1_15))) : (var_1_14 == ((signed long int) (((var_1_16 - var_1_11) + var_1_9) - var_1_17))))) && ((var_1_5 <= var_1_3) ? ((var_1_13 || (var_1_10 != (var_1_11 >> var_1_19))) ? (var_1_18 == ((unsigned char) ((abs (100 + var_1_20)) - var_1_19))) : (var_1_2 ? (var_1_18 == ((unsigned char) var_1_20)) : (var_1_18 == ((unsigned char) 32)))) : (var_1_18 == ((unsigned char) var_1_20)))) && (var_1_21 == ((unsigned short int) var_1_20))) && (var_1_22 == ((signed short int) var_1_20))
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

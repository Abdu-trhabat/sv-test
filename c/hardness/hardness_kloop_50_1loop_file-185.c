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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18550_1loop.c", 13, "reach_error"); }
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
float var_1_1 = 31.25;
unsigned short int var_1_2 = 45232;
unsigned short int var_1_3 = 16;
signed long int var_1_4 = -32;
signed long int var_1_5 = -8;
float var_1_8 = 256.875;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 10;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 50;
unsigned short int var_1_17 = 4;
signed short int var_1_18 = 128;
float var_1_19 = 64.4;
float var_1_20 = 32.5;
float var_1_21 = 128.3;
float var_1_22 = 24.8;
float var_1_23 = 31.75;
signed short int var_1_24 = -2;
signed short int var_1_25 = 4;
float var_1_26 = 256.8;
float var_1_27 = 999999.6;
float var_1_28 = 3.2;
float var_1_29 = 50.75;

// Calibration values

// Last'ed variables
float last_1_var_1_29 = 50.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch18550_1loop
	unsigned short int stepLocal_3 = var_1_3;
	if (var_1_8 > last_1_var_1_29) {
		if (var_1_10 >= stepLocal_3) {
			var_1_13 = (! var_1_11);
		}
	} else {
		var_1_13 = (var_1_14 || var_1_15);
	}


	// From: Req7Batch18550_1loop
	if (var_1_10 >= var_1_3) {
		var_1_29 = (abs (var_1_27));
	} else {
		if (var_1_13 || var_1_14) {
			var_1_29 = 64.125f;
		}
	}


	// From: Req2Batch18550_1loop
	signed long int stepLocal_2 = var_1_3 / var_1_10;
	if (stepLocal_2 <= var_1_4) {
		var_1_9 = (((var_1_8 >= var_1_29) || var_1_11) && var_1_12);
	}


	// From: Req5Batch18550_1loop
	if (((max (var_1_19 , var_1_20)) - var_1_21) >= (var_1_22 - var_1_23)) {
		var_1_18 = (min (var_1_24 , var_1_25));
	}


	// From: Req6Batch18550_1loop
	if (var_1_11) {
		var_1_26 = (var_1_27 + var_1_28);
	} else {
		var_1_26 = var_1_28;
	}


	// From: Req1Batch18550_1loop
	signed long int stepLocal_1 = max (var_1_4 , var_1_5);
	unsigned char stepLocal_0 = var_1_13;
	if ((var_1_2 - var_1_3) <= stepLocal_1) {
		if (var_1_9 || stepLocal_0) {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req4Batch18550_1loop
	signed short int stepLocal_4 = var_1_10;
	if (var_1_8 < var_1_26) {
		if (stepLocal_4 == ((var_1_4 * var_1_5) + (var_1_3 >> 2))) {
			var_1_16 = var_1_3;
		} else {
			var_1_16 = var_1_17;
		}
	} else {
		var_1_16 = var_1_17;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 32767);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32768);
	assume_abort_if_not(var_1_10 <= 32767);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32767);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32767);
	assume_abort_if_not(var_1_25 <= 32766);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	return ((((((((var_1_2 - var_1_3) <= (max (var_1_4 , var_1_5))) ? ((var_1_9 || var_1_13) ? (var_1_1 == ((float) var_1_8)) : 1) : (var_1_1 == ((float) var_1_8))) && (((var_1_3 / var_1_10) <= var_1_4) ? (var_1_9 == ((unsigned char) (((var_1_8 >= var_1_29) || var_1_11) && var_1_12))) : 1)) && ((var_1_8 > last_1_var_1_29) ? ((var_1_10 >= var_1_3) ? (var_1_13 == ((unsigned char) (! var_1_11))) : 1) : (var_1_13 == ((unsigned char) (var_1_14 || var_1_15))))) && ((var_1_8 < var_1_26) ? ((var_1_10 == ((var_1_4 * var_1_5) + (var_1_3 >> 2))) ? (var_1_16 == ((unsigned short int) var_1_3)) : (var_1_16 == ((unsigned short int) var_1_17))) : (var_1_16 == ((unsigned short int) var_1_17)))) && ((((max (var_1_19 , var_1_20)) - var_1_21) >= (var_1_22 - var_1_23)) ? (var_1_18 == ((signed short int) (min (var_1_24 , var_1_25)))) : 1)) && (var_1_11 ? (var_1_26 == ((float) (var_1_27 + var_1_28))) : (var_1_26 == ((float) var_1_28)))) && ((var_1_10 >= var_1_3) ? (var_1_29 == ((float) (abs (var_1_27)))) : ((var_1_13 || var_1_14) ? (var_1_29 == ((float) 64.125f)) : 1))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}

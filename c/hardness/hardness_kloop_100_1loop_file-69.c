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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch69100_1loop.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 47136;
unsigned short int var_1_4 = 10;
unsigned long int var_1_6 = 1660677957;
unsigned long int var_1_7 = 128;
unsigned long int var_1_8 = 5;
float var_1_9 = 9.4;
double var_1_10 = 25.5;
float var_1_12 = 16.2;
float var_1_13 = 127.9;
float var_1_14 = 15.5;
double var_1_15 = 9999999.4;
double var_1_16 = 127.8;
signed short int var_1_17 = 32;
signed short int var_1_18 = 4;
signed short int var_1_19 = 32366;
signed short int var_1_20 = 4;
float var_1_21 = 64.05;
float var_1_22 = 63.2;
float var_1_23 = 1.125;
signed long int var_1_24 = 16;
unsigned long int var_1_25 = 2276923240;
unsigned char var_1_26 = 5;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 16;
unsigned char var_1_29 = 4;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
signed char var_1_35 = -2;
signed char var_1_36 = -10;
signed char var_1_37 = -10;
unsigned long int var_1_38 = 3369525895;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch69100_1loop
	signed long int stepLocal_3 = abs (var_1_3);
	unsigned long int stepLocal_2 = var_1_8;
	if (stepLocal_2 <= (var_1_25 - var_1_6)) {
		if ((min (var_1_19 , (var_1_8 + var_1_4))) < stepLocal_3) {
			var_1_24 = var_1_7;
		}
	} else {
		var_1_24 = var_1_3;
	}


	// From: Req8Batch69100_1loop
	unsigned long int stepLocal_4 = var_1_25 * (var_1_6 << var_1_20);
	if ((var_1_19 | var_1_7) < stepLocal_4) {
		var_1_26 = ((var_1_27 + var_1_28) + var_1_29);
	} else {
		var_1_26 = var_1_28;
	}


	// From: Req9Batch69100_1loop
	if (var_1_4 > var_1_3) {
		var_1_30 = ((var_1_2 || var_1_31) && (var_1_32 || var_1_33));
	} else {
		var_1_30 = ((! var_1_34) && ((var_1_8 < var_1_19) || var_1_31));
	}


	// From: Req11Batch69100_1loop
	if (var_1_26 >= var_1_18) {
		var_1_36 = var_1_28;
	}


	// From: Req12Batch69100_1loop
	unsigned long int stepLocal_7 = var_1_38 - var_1_6;
	unsigned long int stepLocal_6 = (max (var_1_29 , var_1_8)) << var_1_3;
	if ((var_1_25 - var_1_27) > stepLocal_7) {
		if (stepLocal_6 < var_1_25) {
			var_1_37 = -64;
		} else {
			var_1_37 = var_1_28;
		}
	} else {
		var_1_37 = var_1_28;
	}


	// From: Req1Batch69100_1loop
	if (var_1_30 && ((var_1_3 - var_1_4) <= var_1_24)) {
		var_1_1 = ((max ((var_1_3 + var_1_4) , (var_1_6 - var_1_7))) + var_1_8);
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req3Batch69100_1loop
	if (var_1_1 >= (var_1_6 | (abs (64u)))) {
		if ((8 + 5) < var_1_6) {
			var_1_14 = var_1_13;
		} else {
			var_1_14 = var_1_12;
		}
	} else {
		var_1_14 = var_1_12;
	}


	// From: Req6Batch69100_1loop
	if (var_1_30) {
		var_1_21 = (var_1_22 - var_1_23);
	}


	// From: Req10Batch69100_1loop
	unsigned char stepLocal_5 = var_1_27 > var_1_1;
	if (var_1_33) {
		if (stepLocal_5 && ((-100 / var_1_19) >= (10000 * var_1_24))) {
			var_1_35 = -50;
		}
	}


	// From: Req4Batch69100_1loop
	if (var_1_10 >= var_1_21) {
		var_1_15 = (abs (var_1_16));
	} else {
		var_1_15 = (var_1_13 + var_1_12);
	}


	// From: Req2Batch69100_1loop
	if ((256.2 * var_1_15) < var_1_15) {
		if (var_1_30) {
			var_1_9 = (var_1_12 + var_1_13);
		}
	}


	// From: Req5Batch69100_1loop
	unsigned char stepLocal_1 = var_1_30;
	unsigned long int stepLocal_0 = max (var_1_8 , (abs (var_1_7)));
	if (var_1_9 <= (var_1_13 / 64.8f)) {
		if (stepLocal_0 >= var_1_24) {
			if (stepLocal_1 && ((- var_1_16) >= var_1_15)) {
				var_1_17 = 8;
			}
		} else {
			var_1_17 = (var_1_18 - (var_1_19 - var_1_20));
		}
	} else {
		var_1_17 = var_1_19;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 1073741823);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 16383);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 2147483647);
	assume_abort_if_not(var_1_25 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 64);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((((((var_1_30 && ((var_1_3 - var_1_4) <= var_1_24)) ? (var_1_1 == ((unsigned long int) ((max ((var_1_3 + var_1_4) , (var_1_6 - var_1_7))) + var_1_8))) : (var_1_1 == ((unsigned long int) var_1_4))) && (((256.2 * var_1_15) < var_1_15) ? (var_1_30 ? (var_1_9 == ((float) (var_1_12 + var_1_13))) : 1) : 1)) && ((var_1_1 >= (var_1_6 | (abs (64u)))) ? (((8 + 5) < var_1_6) ? (var_1_14 == ((float) var_1_13)) : (var_1_14 == ((float) var_1_12))) : (var_1_14 == ((float) var_1_12)))) && ((var_1_10 >= var_1_21) ? (var_1_15 == ((double) (abs (var_1_16)))) : (var_1_15 == ((double) (var_1_13 + var_1_12))))) && ((var_1_9 <= (var_1_13 / 64.8f)) ? (((max (var_1_8 , (abs (var_1_7)))) >= var_1_24) ? ((var_1_30 && ((- var_1_16) >= var_1_15)) ? (var_1_17 == ((signed short int) 8)) : 1) : (var_1_17 == ((signed short int) (var_1_18 - (var_1_19 - var_1_20))))) : (var_1_17 == ((signed short int) var_1_19)))) && (var_1_30 ? (var_1_21 == ((float) (var_1_22 - var_1_23))) : 1)) && ((var_1_8 <= (var_1_25 - var_1_6)) ? (((min (var_1_19 , (var_1_8 + var_1_4))) < (abs (var_1_3))) ? (var_1_24 == ((signed long int) var_1_7)) : 1) : (var_1_24 == ((signed long int) var_1_3)))) && (((var_1_19 | var_1_7) < (var_1_25 * (var_1_6 << var_1_20))) ? (var_1_26 == ((unsigned char) ((var_1_27 + var_1_28) + var_1_29))) : (var_1_26 == ((unsigned char) var_1_28)))) && ((var_1_4 > var_1_3) ? (var_1_30 == ((unsigned char) ((var_1_2 || var_1_31) && (var_1_32 || var_1_33)))) : (var_1_30 == ((unsigned char) ((! var_1_34) && ((var_1_8 < var_1_19) || var_1_31)))))) && (var_1_33 ? (((var_1_27 > var_1_1) && ((-100 / var_1_19) >= (10000 * var_1_24))) ? (var_1_35 == ((signed char) -50)) : 1) : 1)) && ((var_1_26 >= var_1_18) ? (var_1_36 == ((signed char) var_1_28)) : 1)) && (((var_1_25 - var_1_27) > (var_1_38 - var_1_6)) ? ((((max (var_1_29 , var_1_8)) << var_1_3) < var_1_25) ? (var_1_37 == ((signed char) -64)) : (var_1_37 == ((signed char) var_1_28))) : (var_1_37 == ((signed char) var_1_28)))
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

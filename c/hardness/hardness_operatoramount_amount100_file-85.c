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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85Amount100.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 5;
signed char var_1_3 = -128;
signed char var_1_5 = 16;
unsigned short int var_1_6 = 16;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 1;
unsigned long int var_1_12 = 1;
unsigned char var_1_13 = 4;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed long int var_1_17 = 4;
unsigned long int var_1_18 = 32;
unsigned short int var_1_20 = 24836;
unsigned short int var_1_21 = 17487;
signed short int var_1_22 = 256;
double var_1_24 = 2.375;
double var_1_25 = 15.75;
unsigned short int var_1_26 = 32;
unsigned short int var_1_27 = 51776;
unsigned short int var_1_28 = 16;
unsigned long int var_1_29 = 32;
unsigned long int var_1_30 = 3217862217;
unsigned long int var_1_31 = 2401171114;
unsigned long int var_1_32 = 2609417397;
signed long int var_1_33 = -10;
signed char var_1_34 = -16;
float var_1_35 = 15.25;
signed char var_1_36 = -32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_13 = 4;
unsigned short int last_1_var_1_26 = 32;
signed long int last_1_var_1_33 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch85Amount100
	if (last_1_var_1_26 >= (min (last_1_var_1_13 , var_1_6))) {
		if (var_1_6 >= ((var_1_20 + var_1_21) - var_1_8)) {
			var_1_18 = 100u;
		}
	} else {
		var_1_18 = last_1_var_1_33;
	}


	// From: Req5Batch85Amount100
	unsigned char stepLocal_5 = var_1_10;
	signed char stepLocal_4 = var_1_5;
	if (var_1_6 > stepLocal_5) {
		var_1_17 = ((1849001938 - 100) - (var_1_8 + (max (16 , var_1_10))));
	} else {
		if (var_1_18 >= stepLocal_4) {
			var_1_17 = var_1_6;
		} else {
			var_1_17 = var_1_16;
		}
	}


	// From: Req10Batch85Amount100
	if (var_1_15) {
		var_1_33 = var_1_9;
	} else {
		var_1_33 = ((min (var_1_21 , var_1_17)) - var_1_8);
	}


	// From: Req1Batch85Amount100
	signed long int stepLocal_0 = max ((var_1_17 / var_1_3) , (var_1_17 % var_1_5));
	if (stepLocal_0 != -16) {
		var_1_1 = (abs (var_1_6));
	} else {
		var_1_1 = (max (var_1_6 , 32));
	}


	// From: Req3Batch85Amount100
	signed char stepLocal_3 = var_1_3;
	signed char stepLocal_2 = var_1_5;
	if ((var_1_5 + var_1_6) >= stepLocal_3) {
		if (var_1_11) {
			if (stepLocal_2 <= var_1_3) {
				var_1_12 = var_1_8;
			}
		}
	} else {
		var_1_12 = var_1_10;
	}


	// From: Req9Batch85Amount100
	if (var_1_15) {
		var_1_29 = ((max ((max (var_1_30 , var_1_31)) , var_1_32)) - var_1_9);
	} else {
		if (var_1_14) {
			var_1_29 = 128u;
		} else {
			var_1_29 = var_1_28;
		}
	}


	// From: Req11Batch85Amount100
	unsigned long int stepLocal_8 = var_1_18 / (var_1_27 - var_1_8);
	if (((- var_1_24) / var_1_35) < var_1_25) {
		if (stepLocal_8 >= (var_1_33 / (max (var_1_31 , var_1_21)))) {
			var_1_34 = (var_1_9 + var_1_36);
		} else {
			var_1_34 = var_1_8;
		}
	}


	// From: Req8Batch85Amount100
	unsigned char stepLocal_7 = var_1_15;
	unsigned char stepLocal_6 = var_1_8;
	if ((var_1_27 - (max (var_1_18 , var_1_28))) <= stepLocal_6) {
		if (var_1_14 || stepLocal_7) {
			var_1_26 = var_1_29;
		}
	} else {
		var_1_26 = var_1_29;
	}


	// From: Req2Batch85Amount100
	unsigned short int stepLocal_1 = var_1_26;
	if (stepLocal_1 > (min (var_1_3 , var_1_5))) {
		var_1_7 = ((var_1_8 - var_1_9) - var_1_10);
	} else {
		if (var_1_11) {
			var_1_7 = var_1_10;
		} else {
			var_1_7 = var_1_9;
		}
	}


	// From: Req4Batch85Amount100
	if (var_1_29 <= var_1_6) {
		if ((var_1_11 && var_1_14) && var_1_15) {
			var_1_13 = (min ((var_1_8 - 2) , var_1_9));
		} else {
			var_1_13 = var_1_16;
		}
	}


	// From: Req7Batch85Amount100
	if (var_1_29 <= var_1_12) {
		if (63.5 < (var_1_24 + (4.5 * var_1_25))) {
			var_1_22 = (max ((min (var_1_29 , var_1_5)) , var_1_1));
		} else {
			var_1_22 = var_1_8;
		}
	} else {
		var_1_22 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -128);
	assume_abort_if_not(var_1_5 <= 127);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 190);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 16383);
	assume_abort_if_not(var_1_20 <= 32768);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16384);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65535);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	assume_abort_if_not(var_1_35 != 0.0F);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_33 = var_1_33;
}

int property(void) {
	return ((((((((((((max ((var_1_17 / var_1_3) , (var_1_17 % var_1_5))) != -16) ? (var_1_1 == ((unsigned short int) (abs (var_1_6)))) : (var_1_1 == ((unsigned short int) (max (var_1_6 , 32))))) && ((var_1_26 > (min (var_1_3 , var_1_5))) ? (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - var_1_10))) : (var_1_11 ? (var_1_7 == ((unsigned char) var_1_10)) : (var_1_7 == ((unsigned char) var_1_9))))) && (((var_1_5 + var_1_6) >= var_1_3) ? (var_1_11 ? ((var_1_5 <= var_1_3) ? (var_1_12 == ((unsigned long int) var_1_8)) : 1) : 1) : (var_1_12 == ((unsigned long int) var_1_10)))) && ((var_1_29 <= var_1_6) ? (((var_1_11 && var_1_14) && var_1_15) ? (var_1_13 == ((unsigned char) (min ((var_1_8 - 2) , var_1_9)))) : (var_1_13 == ((unsigned char) var_1_16))) : 1)) && ((var_1_6 > var_1_10) ? (var_1_17 == ((signed long int) ((1849001938 - 100) - (var_1_8 + (max (16 , var_1_10)))))) : ((var_1_18 >= var_1_5) ? (var_1_17 == ((signed long int) var_1_6)) : (var_1_17 == ((signed long int) var_1_16))))) && ((last_1_var_1_26 >= (min (last_1_var_1_13 , var_1_6))) ? ((var_1_6 >= ((var_1_20 + var_1_21) - var_1_8)) ? (var_1_18 == ((unsigned long int) 100u)) : 1) : (var_1_18 == ((unsigned long int) last_1_var_1_33)))) && ((var_1_29 <= var_1_12) ? ((63.5 < (var_1_24 + (4.5 * var_1_25))) ? (var_1_22 == ((signed short int) (max ((min (var_1_29 , var_1_5)) , var_1_1)))) : (var_1_22 == ((signed short int) var_1_8))) : (var_1_22 == ((signed short int) var_1_13)))) && (((var_1_27 - (max (var_1_18 , var_1_28))) <= var_1_8) ? ((var_1_14 || var_1_15) ? (var_1_26 == ((unsigned short int) var_1_29)) : 1) : (var_1_26 == ((unsigned short int) var_1_29)))) && (var_1_15 ? (var_1_29 == ((unsigned long int) ((max ((max (var_1_30 , var_1_31)) , var_1_32)) - var_1_9))) : (var_1_14 ? (var_1_29 == ((unsigned long int) 128u)) : (var_1_29 == ((unsigned long int) var_1_28))))) && (var_1_15 ? (var_1_33 == ((signed long int) var_1_9)) : (var_1_33 == ((signed long int) ((min (var_1_21 , var_1_17)) - var_1_8))))) && ((((- var_1_24) / var_1_35) < var_1_25) ? (((var_1_18 / (var_1_27 - var_1_8)) >= (var_1_33 / (max (var_1_31 , var_1_21)))) ? (var_1_34 == ((signed char) (var_1_9 + var_1_36))) : (var_1_34 == ((signed char) var_1_8))) : 1)
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch151Amount100.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 16;
unsigned char var_1_3 = 1;
unsigned short int var_1_7 = 64;
unsigned short int var_1_8 = 56961;
unsigned short int var_1_9 = 8;
unsigned short int var_1_10 = 0;
unsigned long int var_1_11 = 10;
unsigned char var_1_12 = 10;
unsigned short int var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
signed char var_1_18 = -5;
signed char var_1_19 = -1;
double var_1_21 = 0.6;
double var_1_22 = -0.6;
double var_1_23 = 15.6;
double var_1_24 = 10.25;
float var_1_25 = 15.5;
double var_1_26 = 255.25;
unsigned long int var_1_27 = 32;
unsigned short int var_1_28 = 25;
signed long int var_1_29 = -2;
unsigned char var_1_30 = 64;
unsigned short int var_1_31 = 128;
float var_1_32 = 255.6;
unsigned char var_1_33 = 4;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 10;
unsigned long int var_1_36 = 128;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_14 = 1;
unsigned long int last_1_var_1_27 = 32;
signed long int last_1_var_1_29 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch151Amount100
	unsigned char stepLocal_1 = last_1_var_1_14;
	if (stepLocal_1 || ((var_1_10 > var_1_9) && (last_1_var_1_27 > var_1_12))) {
		var_1_13 = var_1_8;
	}


	// From: Req8Batch151Amount100
	unsigned short int stepLocal_4 = var_1_13;
	if ((var_1_10 * (last_1_var_1_27 / var_1_12)) <= stepLocal_4) {
		var_1_27 = ((var_1_8 + var_1_10) + var_1_9);
	}


	// From: Req4Batch151Amount100
	var_1_14 = ((var_1_3 && (! var_1_15)) || (var_1_16 || var_1_17));


	// From: Req9Batch151Amount100
	unsigned char stepLocal_5 = var_1_16;
	if (stepLocal_5 && var_1_15) {
		var_1_28 = ((64942 - var_1_10) - var_1_12);
	}


	// From: Req11Batch151Amount100
	if ((var_1_28 / var_1_31) > (var_1_7 % -5)) {
		var_1_30 = (128 - 16);
	}


	// From: Req12Batch151Amount100
	var_1_32 = var_1_24;


	// From: Req14Batch151Amount100
	var_1_36 = var_1_10;


	// From: Req2Batch151Amount100
	signed long int stepLocal_0 = var_1_9 >> var_1_12;
	if (var_1_10 < stepLocal_0) {
		var_1_11 = (max (var_1_12 , var_1_8));
	} else {
		if (var_1_14) {
			var_1_11 = var_1_27;
		} else {
			var_1_11 = var_1_8;
		}
	}


	// From: Req5Batch151Amount100
	unsigned long int stepLocal_2 = var_1_36;
	if ((min ((var_1_36 + var_1_12) , (abs (var_1_19)))) >= stepLocal_2) {
		var_1_18 = var_1_12;
	}


	// From: Req10Batch151Amount100
	unsigned long int stepLocal_6 = var_1_11 + var_1_10;
	if (stepLocal_6 > var_1_27) {
		var_1_29 = (min (var_1_8 , ((var_1_12 + last_1_var_1_29) - var_1_7)));
	} else {
		var_1_29 = (var_1_10 + var_1_13);
	}


	// From: Req13Batch151Amount100
	if (var_1_14) {
		if (var_1_8 >= 1) {
			var_1_33 = (abs (var_1_12));
		} else {
			var_1_33 = (var_1_34 - (abs (var_1_12)));
		}
	} else {
		if (var_1_12 > (min ((var_1_34 - var_1_35) , (- var_1_29)))) {
			var_1_33 = ((min (5 , var_1_12)) + 16);
		}
	}


	// From: Req6Batch151Amount100
	signed long int stepLocal_3 = min (var_1_29 , var_1_28);
	if (var_1_14) {
		if (var_1_14) {
			var_1_21 = ((min (var_1_22 , var_1_23)) + var_1_24);
		} else {
			if (stepLocal_3 < var_1_12) {
				var_1_21 = var_1_23;
			}
		}
	} else {
		var_1_21 = var_1_24;
	}


	// From: Req7Batch151Amount100
	if (((abs (var_1_23)) * (var_1_22 + var_1_21)) >= ((var_1_26 - 9999999.78) * (var_1_21 * var_1_24))) {
		var_1_25 = 128.75f;
	} else {
		var_1_25 = var_1_23;
	}


	// From: Req1Batch151Amount100
	if ((32.4 == var_1_21) || ((var_1_27 > var_1_11) && var_1_14)) {
		var_1_1 = (abs (var_1_7));
	} else {
		var_1_1 = (var_1_8 - (var_1_9 + var_1_10));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16384);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 15);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65535);
	assume_abort_if_not(var_1_31 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	return (((((((((((((((32.4 == var_1_21) || ((var_1_27 > var_1_11) && var_1_14)) ? (var_1_1 == ((unsigned short int) (abs (var_1_7)))) : (var_1_1 == ((unsigned short int) (var_1_8 - (var_1_9 + var_1_10))))) && ((var_1_10 < (var_1_9 >> var_1_12)) ? (var_1_11 == ((unsigned long int) (max (var_1_12 , var_1_8)))) : (var_1_14 ? (var_1_11 == ((unsigned long int) var_1_27)) : (var_1_11 == ((unsigned long int) var_1_8))))) && ((last_1_var_1_14 || ((var_1_10 > var_1_9) && (last_1_var_1_27 > var_1_12))) ? (var_1_13 == ((unsigned short int) var_1_8)) : 1)) && (var_1_14 == ((unsigned char) ((var_1_3 && (! var_1_15)) || (var_1_16 || var_1_17))))) && (((min ((var_1_36 + var_1_12) , (abs (var_1_19)))) >= var_1_36) ? (var_1_18 == ((signed char) var_1_12)) : 1)) && (var_1_14 ? (var_1_14 ? (var_1_21 == ((double) ((min (var_1_22 , var_1_23)) + var_1_24))) : (((min (var_1_29 , var_1_28)) < var_1_12) ? (var_1_21 == ((double) var_1_23)) : 1)) : (var_1_21 == ((double) var_1_24)))) && ((((abs (var_1_23)) * (var_1_22 + var_1_21)) >= ((var_1_26 - 9999999.78) * (var_1_21 * var_1_24))) ? (var_1_25 == ((float) 128.75f)) : (var_1_25 == ((float) var_1_23)))) && (((var_1_10 * (last_1_var_1_27 / var_1_12)) <= var_1_13) ? (var_1_27 == ((unsigned long int) ((var_1_8 + var_1_10) + var_1_9))) : 1)) && ((var_1_16 && var_1_15) ? (var_1_28 == ((unsigned short int) ((64942 - var_1_10) - var_1_12))) : 1)) && (((var_1_11 + var_1_10) > var_1_27) ? (var_1_29 == ((signed long int) (min (var_1_8 , ((var_1_12 + last_1_var_1_29) - var_1_7))))) : (var_1_29 == ((signed long int) (var_1_10 + var_1_13))))) && (((var_1_28 / var_1_31) > (var_1_7 % -5)) ? (var_1_30 == ((unsigned char) (128 - 16))) : 1)) && (var_1_32 == ((float) var_1_24))) && (var_1_14 ? ((var_1_8 >= 1) ? (var_1_33 == ((unsigned char) (abs (var_1_12)))) : (var_1_33 == ((unsigned char) (var_1_34 - (abs (var_1_12)))))) : ((var_1_12 > (min ((var_1_34 - var_1_35) , (- var_1_29)))) ? (var_1_33 == ((unsigned char) ((min (5 , var_1_12)) + 16))) : 1))) && (var_1_36 == ((unsigned long int) var_1_10))
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

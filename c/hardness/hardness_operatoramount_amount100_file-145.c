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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 100;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 200;
unsigned char var_1_8 = 0;
signed long int var_1_9 = -16;
unsigned char var_1_10 = 1;
signed long int var_1_11 = 5;
unsigned short int var_1_12 = 32;
float var_1_13 = 10000000000.7;
float var_1_14 = 999.4;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 50;
unsigned short int var_1_17 = 0;
float var_1_18 = 32.6;
float var_1_19 = 10.2;
float var_1_20 = 63.606;
float var_1_21 = 1000000000000.25;
unsigned char var_1_22 = 50;
signed long int var_1_23 = 16;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
signed char var_1_26 = 32;
signed char var_1_27 = 50;
signed char var_1_28 = 32;
signed char var_1_29 = 8;
signed char var_1_30 = 5;
signed char var_1_31 = 8;
unsigned long int var_1_32 = 100000;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_12 = 32;
unsigned short int last_1_var_1_17 = 0;
unsigned char last_1_var_1_22 = 50;
signed long int last_1_var_1_23 = 16;
unsigned char last_1_var_1_24 = 1;
unsigned long int last_1_var_1_32 = 100000;
unsigned char last_1_var_1_34 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch145Amount100
	unsigned char stepLocal_6 = last_1_var_1_24;
	signed long int stepLocal_5 = var_1_7 * var_1_11;
	unsigned char stepLocal_4 = var_1_7 <= (- last_1_var_1_12);
	if (stepLocal_5 > (last_1_var_1_32 | last_1_var_1_22)) {
		if (last_1_var_1_24 || stepLocal_4) {
			if ((var_1_5 <= (- last_1_var_1_32)) || stepLocal_6) {
				var_1_18 = (max (var_1_19 , (min ((var_1_20 - var_1_21) , 64.125f))));
			} else {
				var_1_18 = var_1_20;
			}
		}
	}


	// From: Req9Batch145Amount100
	signed long int stepLocal_10 = last_1_var_1_12 + var_1_6;
	unsigned char stepLocal_9 = last_1_var_1_34;
	if ((last_1_var_1_12 > last_1_var_1_23) || stepLocal_9) {
		if (last_1_var_1_17 < stepLocal_10) {
			var_1_24 = var_1_25;
		}
	}


	// From: Req12Batch145Amount100
	unsigned char stepLocal_12 = var_1_25;
	if (var_1_24) {
		if (var_1_24) {
			var_1_34 = (var_1_25 || (var_1_35 || var_1_36));
		}
	} else {
		if (stepLocal_12 && var_1_36) {
			var_1_34 = var_1_35;
		}
	}


	// From: Req3Batch145Amount100
	signed long int stepLocal_2 = last_1_var_1_23;
	if ((var_1_13 + var_1_14) > 10.5f) {
		if (var_1_5 >= stepLocal_2) {
			var_1_12 = (37936 - last_1_var_1_17);
		}
	} else {
		var_1_12 = 50;
	}


	// From: Req5Batch145Amount100
	var_1_17 = (var_1_6 + var_1_7);


	// From: Req7Batch145Amount100
	signed long int stepLocal_7 = - var_1_6;
	if (var_1_18 < (var_1_18 + var_1_20)) {
		if (stepLocal_7 > var_1_12) {
			if (var_1_34) {
				var_1_22 = var_1_16;
			} else {
				var_1_22 = var_1_7;
			}
		} else {
			var_1_22 = var_1_16;
		}
	}


	// From: Req8Batch145Amount100
	signed long int stepLocal_8 = var_1_11;
	if (stepLocal_8 < ((var_1_12 - last_1_var_1_23) + var_1_6)) {
		if (var_1_24) {
			var_1_23 = -25;
		}
	}


	// From: Req11Batch145Amount100
	if (var_1_23 <= (max ((var_1_23 + var_1_11) , (var_1_28 - var_1_30)))) {
		var_1_32 = (var_1_7 + var_1_23);
	}


	// From: Req2Batch145Amount100
	unsigned char stepLocal_1 = var_1_10;
	if (var_1_2 || stepLocal_1) {
		var_1_9 = (max ((var_1_17 + var_1_32) , (var_1_7 + (var_1_5 - var_1_11))));
	} else {
		var_1_9 = (var_1_17 + var_1_7);
	}


	// From: Req4Batch145Amount100
	signed long int stepLocal_3 = var_1_12 + var_1_7;
	if (! var_1_34) {
		var_1_15 = (var_1_8 + var_1_16);
	} else {
		if ((var_1_9 / 1) <= stepLocal_3) {
			var_1_15 = var_1_5;
		}
	}


	// From: Req10Batch145Amount100
	unsigned long int stepLocal_11 = var_1_32;
	if (var_1_16 >= stepLocal_11) {
		var_1_26 = (min (var_1_7 , var_1_27));
	} else {
		var_1_26 = ((var_1_28 - var_1_29) + (var_1_30 - var_1_31));
	}


	// From: Req1Batch145Amount100
	unsigned long int stepLocal_0 = var_1_32;
	if (var_1_24) {
		if (var_1_15 == stepLocal_0) {
			var_1_1 = (max (10 , (min (var_1_5 , var_1_6))));
		} else {
			var_1_1 = ((min ((var_1_7 - 25) , 128)) - var_1_8);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 190);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_34 = var_1_34;
}

int property(void) {
	return (((((((((((var_1_24 ? ((var_1_15 == var_1_32) ? (var_1_1 == ((unsigned char) (max (10 , (min (var_1_5 , var_1_6)))))) : (var_1_1 == ((unsigned char) ((min ((var_1_7 - 25) , 128)) - var_1_8)))) : 1) && ((var_1_2 || var_1_10) ? (var_1_9 == ((signed long int) (max ((var_1_17 + var_1_32) , (var_1_7 + (var_1_5 - var_1_11)))))) : (var_1_9 == ((signed long int) (var_1_17 + var_1_7))))) && (((var_1_13 + var_1_14) > 10.5f) ? ((var_1_5 >= last_1_var_1_23) ? (var_1_12 == ((unsigned short int) (37936 - last_1_var_1_17))) : 1) : (var_1_12 == ((unsigned short int) 50)))) && ((! var_1_34) ? (var_1_15 == ((unsigned char) (var_1_8 + var_1_16))) : (((var_1_9 / 1) <= (var_1_12 + var_1_7)) ? (var_1_15 == ((unsigned char) var_1_5)) : 1))) && (var_1_17 == ((unsigned short int) (var_1_6 + var_1_7)))) && (((var_1_7 * var_1_11) > (last_1_var_1_32 | last_1_var_1_22)) ? ((last_1_var_1_24 || (var_1_7 <= (- last_1_var_1_12))) ? (((var_1_5 <= (- last_1_var_1_32)) || last_1_var_1_24) ? (var_1_18 == ((float) (max (var_1_19 , (min ((var_1_20 - var_1_21) , 64.125f)))))) : (var_1_18 == ((float) var_1_20))) : 1) : 1)) && ((var_1_18 < (var_1_18 + var_1_20)) ? (((- var_1_6) > var_1_12) ? (var_1_34 ? (var_1_22 == ((unsigned char) var_1_16)) : (var_1_22 == ((unsigned char) var_1_7))) : (var_1_22 == ((unsigned char) var_1_16))) : 1)) && ((var_1_11 < ((var_1_12 - last_1_var_1_23) + var_1_6)) ? (var_1_24 ? (var_1_23 == ((signed long int) -25)) : 1) : 1)) && (((last_1_var_1_12 > last_1_var_1_23) || last_1_var_1_34) ? ((last_1_var_1_17 < (last_1_var_1_12 + var_1_6)) ? (var_1_24 == ((unsigned char) var_1_25)) : 1) : 1)) && ((var_1_16 >= var_1_32) ? (var_1_26 == ((signed char) (min (var_1_7 , var_1_27)))) : (var_1_26 == ((signed char) ((var_1_28 - var_1_29) + (var_1_30 - var_1_31)))))) && ((var_1_23 <= (max ((var_1_23 + var_1_11) , (var_1_28 - var_1_30)))) ? (var_1_32 == ((unsigned long int) (var_1_7 + var_1_23))) : 1)) && (var_1_24 ? (var_1_24 ? (var_1_34 == ((unsigned char) (var_1_25 || (var_1_35 || var_1_36)))) : 1) : ((var_1_25 && var_1_36) ? (var_1_34 == ((unsigned char) var_1_35)) : 1))
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

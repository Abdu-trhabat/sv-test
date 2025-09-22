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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch61Amount100.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 64;
unsigned long int var_1_2 = 3511246143;
unsigned char var_1_3 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 5;
signed short int var_1_8 = 25;
unsigned long int var_1_9 = 3482089177;
unsigned long int var_1_10 = 500;
unsigned long int var_1_11 = 32;
unsigned short int var_1_12 = 64;
unsigned short int var_1_13 = 0;
float var_1_14 = 256.2;
float var_1_15 = 3.5;
float var_1_16 = 9.2;
float var_1_17 = 4.25;
float var_1_18 = 5.5;
unsigned short int var_1_19 = 50;
unsigned long int var_1_20 = 256;
unsigned short int var_1_21 = 37018;
unsigned long int var_1_22 = 4;
unsigned char var_1_23 = 8;
unsigned char var_1_24 = 128;
unsigned short int var_1_25 = 32;
signed char var_1_26 = 1;
float var_1_27 = 256.2;
float var_1_28 = 32.3;
signed char var_1_29 = 16;
signed char var_1_30 = 8;
signed char var_1_31 = 10;
signed short int var_1_32 = 128;
unsigned short int var_1_33 = 5;
unsigned char var_1_34 = 5;
signed short int var_1_35 = 2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_19 = 50;
unsigned long int last_1_var_1_22 = 4;
unsigned short int last_1_var_1_25 = 32;
unsigned char last_1_var_1_34 = 5;
signed short int last_1_var_1_35 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch61Amount100
	unsigned long int stepLocal_1 = - last_1_var_1_22;
	unsigned long int stepLocal_0 = last_1_var_1_22 / var_1_8;
	if ((last_1_var_1_22 + (var_1_11 + var_1_10)) > stepLocal_1) {
		var_1_12 = ((last_1_var_1_35 + var_1_8) + var_1_13);
	} else {
		if (stepLocal_0 <= var_1_2) {
			var_1_12 = var_1_13;
		}
	}


	// From: Req13Batch61Amount100
	var_1_33 = (max (0 , var_1_12));


	// From: Req12Batch61Amount100
	signed long int stepLocal_6 = last_1_var_1_19;
	signed long int stepLocal_5 = (min (last_1_var_1_25 , last_1_var_1_19)) | var_1_13;
	if ((var_1_29 - var_1_8) <= stepLocal_6) {
		var_1_32 = (min ((min ((last_1_var_1_25 + var_1_29) , last_1_var_1_35)) , (var_1_8 - 8)));
	} else {
		if (stepLocal_5 != ((var_1_11 >> var_1_8) ^ var_1_10)) {
			var_1_32 = (max ((var_1_29 - last_1_var_1_34) , var_1_24));
		} else {
			var_1_32 = var_1_8;
		}
	}


	// From: Req1Batch61Amount100
	var_1_1 = (var_1_2 - 8u);


	// From: Req3Batch61Amount100
	if ((var_1_1 >> var_1_8) >= ((min (var_1_2 , var_1_9)) - (min (var_1_10 , var_1_11)))) {
		var_1_7 = var_1_8;
	} else {
		var_1_7 = 64;
	}


	// From: Req6Batch61Amount100
	if (var_1_6 && (16.375 <= 4.125)) {
		var_1_17 = ((max (var_1_16 , (max (var_1_15 , var_1_18)))) + 32.875f);
	} else {
		var_1_17 = var_1_15;
	}


	// From: Req9Batch61Amount100
	var_1_23 = (var_1_24 - var_1_8);


	// From: Req11Batch61Amount100
	if (8.98f > (var_1_27 - var_1_28)) {
		var_1_26 = ((min ((var_1_8 - var_1_29) , var_1_30)) + var_1_31);
	} else {
		var_1_26 = (min ((var_1_29 + var_1_30) , (var_1_8 + var_1_31)));
	}


	// From: Req14Batch61Amount100
	var_1_34 = var_1_24;


	// From: Req15Batch61Amount100
	var_1_35 = 256;


	// From: Req8Batch61Amount100
	unsigned long int stepLocal_3 = var_1_20;
	if (stepLocal_3 <= 16u) {
		var_1_22 = (min (16u , (var_1_33 + var_1_1)));
	}


	// From: Req7Batch61Amount100
	if ((var_1_1 * (var_1_9 - var_1_20)) < (- var_1_2)) {
		var_1_19 = (var_1_21 - var_1_32);
	}


	// From: Req10Batch61Amount100
	signed long int stepLocal_4 = -100;
	if (stepLocal_4 > var_1_21) {
		var_1_25 = (var_1_32 + var_1_22);
	} else {
		var_1_25 = var_1_21;
	}


	// From: Req2Batch61Amount100
	if (((- var_1_2) + var_1_22) != var_1_1) {
		if (var_1_2 >= var_1_1) {
			var_1_3 = 1;
		} else {
			var_1_3 = var_1_5;
		}
	} else {
		var_1_3 = var_1_6;
	}


	// From: Req5Batch61Amount100
	signed long int stepLocal_2 = - var_1_8;
	if (var_1_22 != stepLocal_2) {
		var_1_14 = (var_1_15 + (min (4.3f , var_1_16)));
	} else {
		if (var_1_5) {
			var_1_14 = (255.75f + var_1_16);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 2147483647);
	assume_abort_if_not(var_1_2 <= 4294967294);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 31);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -63);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -63);
	assume_abort_if_not(var_1_31 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_35 = var_1_35;
}

int property(void) {
	return ((((((((((((((var_1_1 == ((unsigned long int) (var_1_2 - 8u))) && ((((- var_1_2) + var_1_22) != var_1_1) ? ((var_1_2 >= var_1_1) ? (var_1_3 == ((unsigned char) 1)) : (var_1_3 == ((unsigned char) var_1_5))) : (var_1_3 == ((unsigned char) var_1_6)))) && (((var_1_1 >> var_1_8) >= ((min (var_1_2 , var_1_9)) - (min (var_1_10 , var_1_11)))) ? (var_1_7 == ((unsigned char) var_1_8)) : (var_1_7 == ((unsigned char) 64)))) && (((last_1_var_1_22 + (var_1_11 + var_1_10)) > (- last_1_var_1_22)) ? (var_1_12 == ((unsigned short int) ((last_1_var_1_35 + var_1_8) + var_1_13))) : (((last_1_var_1_22 / var_1_8) <= var_1_2) ? (var_1_12 == ((unsigned short int) var_1_13)) : 1))) && ((var_1_22 != (- var_1_8)) ? (var_1_14 == ((float) (var_1_15 + (min (4.3f , var_1_16))))) : (var_1_5 ? (var_1_14 == ((float) (255.75f + var_1_16))) : 1))) && ((var_1_6 && (16.375 <= 4.125)) ? (var_1_17 == ((float) ((max (var_1_16 , (max (var_1_15 , var_1_18)))) + 32.875f))) : (var_1_17 == ((float) var_1_15)))) && (((var_1_1 * (var_1_9 - var_1_20)) < (- var_1_2)) ? (var_1_19 == ((unsigned short int) (var_1_21 - var_1_32))) : 1)) && ((var_1_20 <= 16u) ? (var_1_22 == ((unsigned long int) (min (16u , (var_1_33 + var_1_1))))) : 1)) && (var_1_23 == ((unsigned char) (var_1_24 - var_1_8)))) && ((-100 > var_1_21) ? (var_1_25 == ((unsigned short int) (var_1_32 + var_1_22))) : (var_1_25 == ((unsigned short int) var_1_21)))) && ((8.98f > (var_1_27 - var_1_28)) ? (var_1_26 == ((signed char) ((min ((var_1_8 - var_1_29) , var_1_30)) + var_1_31))) : (var_1_26 == ((signed char) (min ((var_1_29 + var_1_30) , (var_1_8 + var_1_31))))))) && (((var_1_29 - var_1_8) <= last_1_var_1_19) ? (var_1_32 == ((signed short int) (min ((min ((last_1_var_1_25 + var_1_29) , last_1_var_1_35)) , (var_1_8 - 8))))) : ((((min (last_1_var_1_25 , last_1_var_1_19)) | var_1_13) != ((var_1_11 >> var_1_8) ^ var_1_10)) ? (var_1_32 == ((signed short int) (max ((var_1_29 - last_1_var_1_34) , var_1_24)))) : (var_1_32 == ((signed short int) var_1_8))))) && (var_1_33 == ((unsigned short int) (max (0 , var_1_12))))) && (var_1_34 == ((unsigned char) var_1_24))) && (var_1_35 == ((signed short int) 256))
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

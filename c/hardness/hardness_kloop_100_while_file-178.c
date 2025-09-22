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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch178100_while.c", 13, "reach_error"); }
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
signed long int var_1_1 = -32;
signed long int var_1_4 = -25;
double var_1_5 = 4.4;
double var_1_6 = 99.5;
double var_1_7 = 128.2;
double var_1_8 = 10.5;
signed long int var_1_9 = 64;
unsigned short int var_1_10 = 64;
double var_1_11 = 16.8;
unsigned short int var_1_12 = 4;
unsigned short int var_1_13 = 50;
unsigned short int var_1_14 = 16706;
unsigned short int var_1_15 = 1000;
signed char var_1_16 = 8;
signed char var_1_17 = -5;
signed char var_1_18 = 0;
signed short int var_1_19 = 1;
unsigned short int var_1_20 = 51523;
signed char var_1_21 = -4;
signed char var_1_22 = -1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 50;
unsigned char var_1_26 = 0;
signed char var_1_27 = -10;
signed char var_1_28 = 32;
signed char var_1_29 = -10;
signed char var_1_30 = 1;
signed char var_1_31 = -2;
signed char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
signed char var_1_36 = 0;
signed char var_1_37 = 5;
unsigned long int var_1_38 = 16;
unsigned long int var_1_39 = 2143623825;
unsigned long int var_1_40 = 64;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -32;
signed long int last_1_var_1_9 = 64;
unsigned short int last_1_var_1_10 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch178100_while
	if (last_1_var_1_10 > last_1_var_1_9) {
		var_1_5 = ((max (var_1_6 , var_1_7)) - var_1_8);
	}


	// From: Req5Batch178100_while
	var_1_16 = (max (10 , var_1_17));


	// From: Req6Batch178100_while
	var_1_18 = var_1_17;


	// From: Req8Batch178100_while
	if (var_1_5 < var_1_11) {
		var_1_21 = var_1_17;
	} else {
		var_1_21 = (min ((var_1_22 - 5) , var_1_17));
	}


	// From: Req10Batch178100_while
	var_1_27 = ((max ((min (var_1_28 , var_1_29)) , (var_1_30 + var_1_31))) + ((abs (-1)) + var_1_32));


	// From: Req11Batch178100_while
	if (var_1_20 != var_1_24) {
		var_1_33 = (var_1_34 && (! var_1_26));
	} else {
		var_1_33 = (var_1_34 && var_1_35);
	}


	// From: Req12Batch178100_while
	unsigned char stepLocal_6 = (3057140797u - var_1_14) > var_1_24;
	if ((var_1_17 > var_1_31) && stepLocal_6) {
		var_1_36 = (min (var_1_32 , (max ((var_1_22 - var_1_37) , 8))));
	} else {
		var_1_36 = (max (((var_1_32 + var_1_31) + var_1_30) , (min (var_1_22 , (var_1_29 + var_1_28)))));
	}


	// From: Req14Batch178100_while
	var_1_40 = var_1_37;


	// From: Req1Batch178100_while
	unsigned long int stepLocal_0 = var_1_40;
	if (last_1_var_1_1 < stepLocal_0) {
		var_1_1 = (max (-32 , (var_1_40 + (max (last_1_var_1_1 , var_1_4)))));
	}


	// From: Req7Batch178100_while
	signed long int stepLocal_3 = abs (var_1_12);
	unsigned char stepLocal_2 = (var_1_20 - var_1_12) < var_1_1;
	if ((var_1_13 == var_1_14) || stepLocal_2) {
		if (var_1_20 >= stepLocal_3) {
			var_1_19 = ((abs (2)) + var_1_15);
		}
	}


	// From: Req3Batch178100_while
	unsigned long int stepLocal_1 = var_1_40;
	if (((var_1_1 * var_1_19) + var_1_4) != stepLocal_1) {
		if (var_1_6 >= (var_1_7 * var_1_8)) {
			var_1_9 = (max (var_1_1 , var_1_19));
		} else {
			var_1_9 = var_1_1;
		}
	} else {
		var_1_9 = var_1_4;
	}


	// From: Req13Batch178100_while
	if (var_1_5 <= var_1_7) {
		var_1_38 = ((var_1_39 - var_1_13) + var_1_9);
	}


	// From: Req4Batch178100_while
	if (last_1_var_1_10 < (min (var_1_9 , (var_1_4 * var_1_38)))) {
		if (var_1_5 > (31.2 * (max (var_1_8 , var_1_5)))) {
			var_1_10 = (var_1_12 + var_1_13);
		} else {
			var_1_10 = (var_1_13 + (var_1_14 - var_1_15));
		}
	} else {
		var_1_10 = var_1_14;
	}


	// From: Req9Batch178100_while
	signed long int stepLocal_5 = var_1_9;
	signed long int stepLocal_4 = var_1_10 * var_1_1;
	if ((200 - var_1_24) < stepLocal_4) {
		if (stepLocal_5 < var_1_27) {
			var_1_23 = (var_1_33 && var_1_26);
		}
	} else {
		var_1_23 = 0;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65535);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -1);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -63);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -31);
	assume_abort_if_not(var_1_30 <= 32);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -31);
	assume_abort_if_not(var_1_31 <= 31);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -31);
	assume_abort_if_not(var_1_32 <= 31);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 1073741823);
	assume_abort_if_not(var_1_39 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_10 = var_1_10;
}

int property(void) {
	return ((((((((((((((last_1_var_1_1 < var_1_40) ? (var_1_1 == ((signed long int) (max (-32 , (var_1_40 + (max (last_1_var_1_1 , var_1_4))))))) : 1) && ((last_1_var_1_10 > last_1_var_1_9) ? (var_1_5 == ((double) ((max (var_1_6 , var_1_7)) - var_1_8))) : 1)) && ((((var_1_1 * var_1_19) + var_1_4) != var_1_40) ? ((var_1_6 >= (var_1_7 * var_1_8)) ? (var_1_9 == ((signed long int) (max (var_1_1 , var_1_19)))) : (var_1_9 == ((signed long int) var_1_1))) : (var_1_9 == ((signed long int) var_1_4)))) && ((last_1_var_1_10 < (min (var_1_9 , (var_1_4 * var_1_38)))) ? ((var_1_5 > (31.2 * (max (var_1_8 , var_1_5)))) ? (var_1_10 == ((unsigned short int) (var_1_12 + var_1_13))) : (var_1_10 == ((unsigned short int) (var_1_13 + (var_1_14 - var_1_15))))) : (var_1_10 == ((unsigned short int) var_1_14)))) && (var_1_16 == ((signed char) (max (10 , var_1_17))))) && (var_1_18 == ((signed char) var_1_17))) && (((var_1_13 == var_1_14) || ((var_1_20 - var_1_12) < var_1_1)) ? ((var_1_20 >= (abs (var_1_12))) ? (var_1_19 == ((signed short int) ((abs (2)) + var_1_15))) : 1) : 1)) && ((var_1_5 < var_1_11) ? (var_1_21 == ((signed char) var_1_17)) : (var_1_21 == ((signed char) (min ((var_1_22 - 5) , var_1_17)))))) && (((200 - var_1_24) < (var_1_10 * var_1_1)) ? ((var_1_9 < var_1_27) ? (var_1_23 == ((unsigned char) (var_1_33 && var_1_26))) : 1) : (var_1_23 == ((unsigned char) 0)))) && (var_1_27 == ((signed char) ((max ((min (var_1_28 , var_1_29)) , (var_1_30 + var_1_31))) + ((abs (-1)) + var_1_32))))) && ((var_1_20 != var_1_24) ? (var_1_33 == ((unsigned char) (var_1_34 && (! var_1_26)))) : (var_1_33 == ((unsigned char) (var_1_34 && var_1_35))))) && (((var_1_17 > var_1_31) && ((3057140797u - var_1_14) > var_1_24)) ? (var_1_36 == ((signed char) (min (var_1_32 , (max ((var_1_22 - var_1_37) , 8)))))) : (var_1_36 == ((signed char) (max (((var_1_32 + var_1_31) + var_1_30) , (min (var_1_22 , (var_1_29 + var_1_28))))))))) && ((var_1_5 <= var_1_7) ? (var_1_38 == ((unsigned long int) ((var_1_39 - var_1_13) + var_1_9))) : 1)) && (var_1_40 == ((unsigned long int) var_1_37))
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

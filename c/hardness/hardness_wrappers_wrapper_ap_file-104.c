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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[3] = {
	0, 1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
signed long int signed_long_int_Array_0[2] = {
	128, 256
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed short int signed_short_int_Array_0[3] = {
	256, 1, -1
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[2] = {
	2080937386, 5
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0_ = 128;
signed long int last_1_signed_long_int_Array_0_1_ = 256;
unsigned long int last_1_unsigned_long_int_Array_0_1_ = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch104Wrapper_AP
	signed long int stepLocal_1 = last_1_signed_long_int_Array_0_0_;
	signed long int stepLocal_0 = last_1_signed_long_int_Array_0_0_;
	if (stepLocal_0 > last_1_unsigned_long_int_Array_0_1_) {
		if (stepLocal_1 < (min (last_1_unsigned_long_int_Array_0_1_ , last_1_signed_long_int_Array_0_0_))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = last_1_signed_long_int_Array_0_0_;
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (abs (max (last_1_signed_long_int_Array_0_0_ , last_1_unsigned_long_int_Array_0_1_)));
	}


	// From: Req4Batch104Wrapper_AP
	if ((~ (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) < (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((max (last_1_signed_long_int_Array_0_0_ , ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - last_1_signed_long_int_Array_0_1_))) + (max (last_1_signed_long_int_Array_0_1_ , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))));
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) , last_1_signed_long_int_Array_0_0_)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)));
	}


	// From: Req2Batch104Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)));
	}


	// From: Req3Batch104Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)));
	}


	// From: Req5Batch104Wrapper_AP
	if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) != (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 1073741823);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 2147483647);
}



void updateLastVariables(void) {
	last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
	last_1_signed_long_int_Array_0_1_ = signed_long_int_Array_0[1];
	last_1_unsigned_long_int_Array_0_1_ = unsigned_long_int_Array_0[1];
}

int property(void) {
	return (((((last_1_signed_long_int_Array_0_0_ > last_1_unsigned_long_int_Array_0_1_) ? ((last_1_signed_long_int_Array_0_0_ < (min (last_1_unsigned_long_int_Array_0_1_ , last_1_signed_long_int_Array_0_0_))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) last_1_signed_long_int_Array_0_0_)) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (abs (max (last_1_signed_long_int_Array_0_0_ , last_1_unsigned_long_int_Array_0_1_)))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) : 1)) && (((~ (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) < (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((max (last_1_signed_long_int_Array_0_0_ , ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - last_1_signed_long_int_Array_0_1_))) + (max (last_1_signed_long_int_Array_0_1_ , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) , last_1_signed_long_int_Array_0_0_)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) != (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) : 1) : 1)
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

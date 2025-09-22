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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152Filler_PE_CN.c", 13, "reach_error"); }
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
signed char var_1_1 = 16;
signed char var_1_2 = 1;
signed char var_1_3 = 25;
signed char var_1_4 = -4;
signed char var_1_5 = 1;
signed char var_1_6 = 32;
signed char var_1_7 = 4;
signed long int var_1_8 = 4;
signed char var_1_9 = 100;
signed char var_1_10 = 100;
signed char var_1_11 = 1;
unsigned char var_1_12 = 0;
float var_1_13 = 31.25;
float var_1_14 = 99.5;
signed long int var_1_15 = -64;
float var_1_16 = 10.4;
float var_1_17 = 49.1;
unsigned short int var_1_18 = 0;
float var_1_19 = 0.1;
float var_1_20 = 0.0;
float var_1_21 = 0.0;
float var_1_22 = 0.4;
unsigned short int var_1_23 = 16;
unsigned short int var_1_24 = 2;
signed char var_1_25 = 32;
signed char var_1_26 = 50;
unsigned long int var_1_27 = 256;
unsigned long int var_1_28 = 256;
unsigned long int var_1_29 = 10;
double var_1_30 = 10.4;
double var_1_31 = 9.875;
float var_1_32 = 100000000000000.25;
float var_1_33 = 256.6;
float var_1_34 = 999.25;
float var_1_35 = 9999999999999.4;
float var_1_36 = 9.5;
float var_1_37 = 2.25;
signed short int var_1_38 = 5;
unsigned char var_1_39 = 1;
float var_1_40 = 15.1;
double var_1_41 = 15.625;
unsigned short int var_1_42 = 8;
unsigned short int var_1_43 = 59542;
unsigned short int var_1_44 = 0;
unsigned short int var_1_45 = 64;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
double var_1_49 = 128.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch152Filler_PE_CN
	/* 868L, 13L, 252L, 266L) */ var_1_1 = (
		/* 871L, 12L, 255L, 269L) */ (max (
			/* 871L, 12L, 255L, 269L) */ (
				/* 872L, 6L, 256L, 270L) */ ((
					var_1_2
				) - (
					25
				))
			) , (
				/* 875L, 11L, 259L, 273L) */ ((
					var_1_3
				) + (
					/* 877L, 10L, 261L, 275L) */ ((
						1
					) + (
						var_1_4
					))
				))
			)
		))
	);


	// From: Req5Batch152Filler_PE_CN
	/* 952L, 169L, 572L, 583L) */ if (var_1_12) {
		/* 954L, 168L, 574L, 585L) */ var_1_15 = (
			/* 957L, 167L, 577L, 588L) */ ((
				var_1_2
			) - (
				/* 959L, 166L, 579L, 590L) */ (abs (
					var_1_1
				))
			))
		);
	}


	// From: Req2Batch152Filler_PE_CN
	/* 883L, 45L, 309L, 324L) */ if (/* 884L, 26L, 27L, 310L, 325L) */ ((var_1_15) >= (/* 886L, 25L, 29L, 312L, 327L) */ ((/* 887L, 23L, 30L, 313L, 328L) */ (min (/* 887L, 23L, 30L, 313L, 328L) */ (var_1_3) , (var_1_4)))) * (1))))) {
		/* 891L, 44L, 317L, 332L) */ var_1_5 = (
			var_1_3
		);
	}


	// From: Req3Batch152Filler_PE_CN
	signed long int stepLocal_0 = /* 897L, 64L, 70L, 372L, 405L) */ ((/* 898L, 60L, 71L, 373L, 406L) */ ((var_1_4) | (var_1_3))) + (/* 901L, 63L, 74L, 376L, 409L) */ ((var_1_15) / (var_1_8))));
	/* 929L, 111L, 367L, 400L) */ if (/* 908L, 65L, 66L, 368L, 401L) */ ((/* 907L, 57L, 67L, 369L, 402L) */ ((var_1_2) / (var_1_7))) < (stepLocal_0))) {
		/* 918L, 97L, 379L, 412L) */ var_1_6 = (
			/* 917L, 96L, 382L, 415L) */ ((
				/* 913L, 92L, 383L, 416L) */ (max (
					/* 913L, 92L, 383L, 416L) */ (
						var_1_2
					) , (
						var_1_9
					)
				))
			) - (
				/* 916L, 95L, 386L, 419L) */ ((
					var_1_10
				) - (
					var_1_11
				))
			))
		);
	} else {
		/* 928L, 109L, 389L, 422L) */ if (var_1_12) {
			/* 923L, 104L, 391L, 424L) */ var_1_6 = (
				var_1_3
			);
		} else {
			/* 927L, 108L, 395L, 428L) */ var_1_6 = (
				var_1_9
			);
		}
	}


	// From: Req4Batch152Filler_PE_CN
	/* 936L, 147L, 502L, 520L) */ if (var_1_12) {
		/* 938L, 145L, 504L, 522L) */ if (/* 939L, 126L, 127L, 505L, 523L) */ ((/* 940L, 124L, 128L, 506L, 524L) */ (max (/* 940L, 124L, 128L, 506L, 524L) */ (var_1_15) , (/* 942L, 123L, 130L, 508L, 526L) */ ((var_1_2) - (var_1_11)))))) >= (var_1_1))) {
			/* 946L, 144L, 512L, 530L) */ var_1_13 = (
				var_1_14
			);
		}
	}


	// From: Req6Batch152Filler_PE_CN
	signed char stepLocal_2 = var_1_9;
	signed char stepLocal_1 = var_1_1;
	/* 1006L, 247L, 699L, 741L) */ if (/* 972L, 181L, 182L, 700L, 742L) */ ((/* 970L, 179L, 183L, 701L, 743L) */ ((var_1_13) / (var_1_17))) >= (var_1_14))) {
		/* 1001L, 241L, 705L, 747L) */ if (/* 977L, 197L, 198L, 706L, 748L) */ ((/* 976L, 195L, 199L, 707L, 749L) */ ((var_1_11) << (/* 975L, 194L, 201L, 709L, 751L) */ (abs (var_1_18))))) <= (stepLocal_2))) {
			/* 983L, 215L, 712L, 754L) */ var_1_16 = (
				/* 982L, 214L, 715L, 757L) */ ((
					var_1_19
				) - (
					64.4f
				))
			);
		} else {
			/* 1000L, 239L, 718L, 760L) */ if (/* 985L, 218L, 219L, 719L, 761L) */ ((var_1_15) >= (stepLocal_1))) {
				/* 995L, 234L, 722L, 764L) */ var_1_16 = (
					/* 994L, 233L, 725L, 767L) */ (max (
						/* 994L, 233L, 725L, 767L) */ (
							var_1_14
						) , (
							/* 993L, 232L, 727L, 769L) */ ((
								var_1_19
							) - (
								/* 992L, 231L, 729L, 771L) */ ((
									var_1_20
								) - (
									var_1_21
								))
							))
						)
					))
				);
			} else {
				/* 999L, 238L, 732L, 774L) */ var_1_16 = (
					var_1_22
				);
			}
		}
	} else {
		/* 1005L, 246L, 736L, 778L) */ var_1_16 = (
			var_1_20
		);
	}


	// From: CodeObject1
	/* 5L) */ var_1_23 = (
		var_1_24
	);


	// From: CodeObject2
	/* 13L) */ var_1_25 = (
		var_1_26
	);


	// From: CodeObject3
	/* 28L) */ var_1_27 = (
		/* 27L) */ (min (
			/* 27L) */ (
				/* 23L) */ (max (
					/* 23L) */ (
						/* 21L) */ (abs (
							var_1_24
						))
					) , (
						var_1_23
					)
				))
			) , (
				/* 26L) */ (min (
					/* 26L) */ (
						var_1_28
					) , (
						var_1_29
					)
				))
			)
		))
	);


	// From: CodeObject4
	/* 36L) */ var_1_30 = (
		var_1_31
	);


	// From: CodeObject5
	/* 70L) */ if (/* 44L, 43L) */ ((var_1_30) < (var_1_31))) {
		/* 62L) */ var_1_32 = (
			/* 61L) */ (min (
				/* 61L) */ (
					/* 55L) */ (min (
						/* 55L) */ (
							/* 53L) */ (abs (
								var_1_31
							))
						) , (
							var_1_33
						)
					))
				) , (
					/* 60L) */ ((
						/* 58L) */ ((
							var_1_34
						) + (
							var_1_35
						))
					) + (
						var_1_36
					))
				)
			))
		);
	} else {
		/* 69L) */ var_1_32 = (
			/* 68L) */ ((
				var_1_37
			) - (
				/* 67L) */ (abs (
					var_1_34
				))
			))
		);
	}


	// From: CodeObject6
	/* 111L) */ if (var_1_39) {
		/* 109L) */ if (/* 86L, 85L) */ ((/* 87L, 81L) */ ((/* 88L, 79L) */ ((var_1_34) + (var_1_31))) / (var_1_40))) != (/* 92L, 84L) */ ((var_1_35) / (var_1_41))))) {
			/* 108L) */ var_1_38 = (
				/* 107L) */ (abs (
					var_1_25
				))
			);
		}
	}


	// From: CodeObject7
	/* 148L) */ if (/* 121L, 120L) */ ((var_1_25) < (/* 123L, 119L) */ (~ (-32))))) {
		/* 136L) */ var_1_42 = (
			/* 135L) */ ((
				/* 133L) */ ((
					var_1_43
				) - (
					var_1_44
				))
			) - (
				var_1_45
			))
		);
	} else {
		/* 147L) */ var_1_42 = (
			/* 146L) */ (min (
				/* 146L) */ (
					/* 141L) */ ((
						var_1_43
					) - (
						var_1_44
					))
				) , (
					/* 145L) */ (max (
						/* 145L) */ (
							/* 143L) */ (abs (
								var_1_45
							))
						) , (
							var_1_24
						)
					))
				)
			))
		);
	}


	// From: CodeObject8
	/* 200L) */ if (/* 162L, 161L) */ ((/* 163L, 159L) */ ((var_1_37) - (/* 165L, 158L) */ (abs (var_1_35))))) > (var_1_30))) {
		/* 181L) */ var_1_46 = (
			/* 180L) */ (! (
				/* 179L) */ (! (
					/* 178L) */ ((
						var_1_39
					) || (
						var_1_47
					))
				))
			))
		);
	} else {
		/* 198L) */ if (/* 188L, 187L) */ ((var_1_47) || (var_1_39))) {
			/* 197L) */ var_1_46 = (
				var_1_48
			);
		}
	}


	// From: CodeObject9
	/* 207L) */ var_1_49 = (
		var_1_33
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 126);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -31);
	assume_abort_if_not(var_1_4 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 4611686.018427383000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65534);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967294);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -461168.6018427383000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	assume_abort_if_not(var_1_40 != 0.0F);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	assume_abort_if_not(var_1_41 != 0.0F);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 49150);
	assume_abort_if_not(var_1_43 <= 65534);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 16383);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 227L, 26L, 34L, 340L, 355L, 1028L) */ ((var_1_15) >= (/* 229L, 25L, 36L, 342L, 357L, 1030L) */ ((/* 230L, 23L, 37L, 343L, 358L, 1031L) */ (min (/* 230L, 23L, 37L, 343L, 358L, 1031L) */ (var_1_3) , (var_1_4)))) * (1))))) {
	}
	if (/* 240L, 65L, 77L, 434L, 467L, 1041L) */ ((/* 241L, 57L, 78L, 435L, 468L, 1042L) */ ((var_1_2) / (var_1_7))) < (/* 244L, 64L, 81L, 438L, 471L, 1045L) */ ((/* 245L, 60L, 82L, 439L, 472L, 1046L) */ ((var_1_4) | (var_1_3))) + (/* 248L, 63L, 85L, 442L, 475L, 1049L) */ ((var_1_15) / (var_1_8))))))) {
	} else {
		if (var_1_12) {
		} else {
		}
	}
	if (var_1_12) {
		if (/* 278L, 126L, 134L, 541L, 559L, 1079L) */ ((/* 279L, 124L, 135L, 542L, 560L, 1080L) */ (max (/* 279L, 124L, 135L, 542L, 560L, 1080L) */ (var_1_15) , (/* 281L, 123L, 137L, 544L, 562L, 1082L) */ ((var_1_2) - (var_1_11)))))) >= (var_1_1))) {
		}
	}
	if (var_1_12) {
	}
	if (/* 302L, 181L, 187L, 784L, 826L, 1103L) */ ((/* 303L, 179L, 188L, 785L, 827L, 1104L) */ ((var_1_13) / (var_1_17))) >= (var_1_14))) {
		if (/* 308L, 197L, 204L, 790L, 832L, 1109L) */ ((/* 309L, 195L, 205L, 791L, 833L, 1110L) */ ((var_1_11) << (/* 311L, 194L, 207L, 793L, 835L, 1112L) */ (abs (var_1_18))))) <= (var_1_9))) {
		} else {
			if (/* 321L, 218L, 222L, 803L, 845L, 1122L) */ ((var_1_15) >= (var_1_1))) {
			} else {
			}
		}
	} else {
	}
	return /* 347L) */ ((
	/* 346L) */ ((
		/* 345L) */ ((
			/* 344L) */ ((
				/* 343L) */ ((
					/* 211L, 13L, 280L, 294L, 1012L) */ ((
						var_1_1
					) == (
						/* 211L, 13L, 280L, 294L, 1012L) */ ((signed char) (
							/* 214L, 12L, 283L, 297L, 1015L) */ (max (
								/* 214L, 12L, 283L, 297L, 1015L) */ (
									/* 215L, 6L, 284L, 298L, 1016L) */ ((
										var_1_2
									) - (
										25
									))
								) , (
									/* 218L, 11L, 287L, 301L, 1019L) */ ((
										var_1_3
									) + (
										/* 220L, 10L, 289L, 303L, 1021L) */ ((
											1
										) + (
											var_1_4
										))
									))
								)
							))
						))
					))
				) && (
					/* 226L, 46L, 339L, 354L, 1027L) */ ((
						/* 227L, 26L, 34L, 340L, 355L, 1028L) */ ((
							var_1_15
						) >= (
							/* 229L, 25L, 36L, 342L, 357L, 1030L) */ ((
								/* 230L, 23L, 37L, 343L, 358L, 1031L) */ (min (
									/* 230L, 23L, 37L, 343L, 358L, 1031L) */ (
										var_1_3
									) , (
										var_1_4
									)
								))
							) * (
								1
							))
						))
					) ? (
						/* 234L, 44L, 347L, 362L, 1035L) */ ((
							var_1_5
						) == (
							/* 234L, 44L, 347L, 362L, 1035L) */ ((signed char) (
								var_1_3
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 239L, 112L, 433L, 466L, 1040L) */ ((
					/* 240L, 65L, 77L, 434L, 467L, 1041L) */ ((
						/* 241L, 57L, 78L, 435L, 468L, 1042L) */ ((
							var_1_2
						) / (
							var_1_7
						))
					) < (
						/* 244L, 64L, 81L, 438L, 471L, 1045L) */ ((
							/* 245L, 60L, 82L, 439L, 472L, 1046L) */ ((
								var_1_4
							) | (
								var_1_3
							))
						) + (
							/* 248L, 63L, 85L, 442L, 475L, 1049L) */ ((
								var_1_15
							) / (
								var_1_8
							))
						))
					))
				) ? (
					/* 251L, 97L, 445L, 478L, 1052L) */ ((
						var_1_6
					) == (
						/* 251L, 97L, 445L, 478L, 1052L) */ ((signed char) (
							/* 254L, 96L, 448L, 481L, 1055L) */ ((
								/* 255L, 92L, 449L, 482L, 1056L) */ (max (
									/* 255L, 92L, 449L, 482L, 1056L) */ (
										var_1_2
									) , (
										var_1_9
									)
								))
							) - (
								/* 258L, 95L, 452L, 485L, 1059L) */ ((
									var_1_10
								) - (
									var_1_11
								))
							))
						))
					))
				) : (
					/* 261L, 110L, 455L, 488L, 1062L) */ ((
						var_1_12
					) ? (
						/* 263L, 104L, 457L, 490L, 1064L) */ ((
							var_1_6
						) == (
							/* 263L, 104L, 457L, 490L, 1064L) */ ((signed char) (
								var_1_3
							))
						))
					) : (
						/* 267L, 108L, 461L, 494L, 1068L) */ ((
							var_1_6
						) == (
							/* 267L, 108L, 461L, 494L, 1068L) */ ((signed char) (
								var_1_9
							))
						))
					))
				))
			))
		) && (
			/* 275L, 148L, 538L, 556L, 1076L) */ ((
				var_1_12
			) ? (
				/* 277L, 146L, 540L, 558L, 1078L) */ ((
					/* 278L, 126L, 134L, 541L, 559L, 1079L) */ ((
						/* 279L, 124L, 135L, 542L, 560L, 1080L) */ (max (
							/* 279L, 124L, 135L, 542L, 560L, 1080L) */ (
								var_1_15
							) , (
								/* 281L, 123L, 137L, 544L, 562L, 1082L) */ ((
									var_1_2
								) - (
									var_1_11
								))
							)
						))
					) >= (
						var_1_1
					))
				) ? (
					/* 285L, 144L, 548L, 566L, 1086L) */ ((
						var_1_13
					) == (
						/* 285L, 144L, 548L, 566L, 1086L) */ ((float) (
							var_1_14
						))
					))
				) : (
					1
				))
			) : (
				1
			))
		))
	) && (
		/* 291L, 170L, 594L, 605L, 1092L) */ ((
			var_1_12
		) ? (
			/* 293L, 168L, 596L, 607L, 1094L) */ ((
				var_1_15
			) == (
				/* 293L, 168L, 596L, 607L, 1094L) */ ((signed long int) (
					/* 296L, 167L, 599L, 610L, 1097L) */ ((
						var_1_2
					) - (
						/* 298L, 166L, 601L, 612L, 1099L) */ (abs (
							var_1_1
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 301L, 248L, 783L, 825L, 1102L) */ ((
		/* 302L, 181L, 187L, 784L, 826L, 1103L) */ ((
			/* 303L, 179L, 188L, 785L, 827L, 1104L) */ ((
				var_1_13
			) / (
				var_1_17
			))
		) >= (
			var_1_14
		))
	) ? (
		/* 307L, 242L, 789L, 831L, 1108L) */ ((
			/* 308L, 197L, 204L, 790L, 832L, 1109L) */ ((
				/* 309L, 195L, 205L, 791L, 833L, 1110L) */ ((
					var_1_11
				) << (
					/* 311L, 194L, 207L, 793L, 835L, 1112L) */ (abs (
						var_1_18
					))
				))
			) <= (
				var_1_9
			))
		) ? (
			/* 314L, 215L, 796L, 838L, 1115L) */ ((
				var_1_16
			) == (
				/* 314L, 215L, 796L, 838L, 1115L) */ ((float) (
					/* 317L, 214L, 799L, 841L, 1118L) */ ((
						var_1_19
					) - (
						64.4f
					))
				))
			))
		) : (
			/* 320L, 240L, 802L, 844L, 1121L) */ ((
				/* 321L, 218L, 222L, 803L, 845L, 1122L) */ ((
					var_1_15
				) >= (
					var_1_1
				))
			) ? (
				/* 324L, 234L, 806L, 848L, 1125L) */ ((
					var_1_16
				) == (
					/* 324L, 234L, 806L, 848L, 1125L) */ ((float) (
						/* 327L, 233L, 809L, 851L, 1128L) */ (max (
							/* 327L, 233L, 809L, 851L, 1128L) */ (
								var_1_14
							) , (
								/* 329L, 232L, 811L, 853L, 1130L) */ ((
									var_1_19
								) - (
									/* 331L, 231L, 813L, 855L, 1132L) */ ((
										var_1_20
									) - (
										var_1_21
									))
								))
							)
						))
					))
				))
			) : (
				/* 334L, 238L, 816L, 858L, 1135L) */ ((
					var_1_16
				) == (
					/* 334L, 238L, 816L, 858L, 1135L) */ ((float) (
						var_1_22
					))
				))
			))
		))
	) : (
		/* 338L, 246L, 820L, 862L, 1139L) */ ((
			var_1_16
		) == (
			/* 338L, 246L, 820L, 862L, 1139L) */ ((float) (
				var_1_20
			))
		))
	))
))
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

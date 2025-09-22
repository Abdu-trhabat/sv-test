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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch38Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
double var_1_2 = 128.5;
double var_1_3 = 24.38;
unsigned char var_1_4 = 0;
float var_1_5 = 2.6;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 1;
unsigned short int var_1_10 = 128;
signed long int var_1_11 = 100;
signed long int var_1_12 = 8;
unsigned short int var_1_13 = 128;
double var_1_14 = 64.5;
signed short int var_1_15 = 4;
signed long int var_1_16 = -8;
double var_1_17 = 255.5;
double var_1_18 = 0.6;
double var_1_19 = 1000000000000.5;
double var_1_20 = 999999.25;
signed short int var_1_21 = -64;
unsigned char var_1_22 = 1;
signed short int var_1_23 = -1;
signed short int var_1_24 = -64;
signed char var_1_25 = -128;
unsigned char var_1_26 = 32;
double var_1_27 = 128.375;
double var_1_28 = 25.2;
double var_1_29 = 255.5;
unsigned char var_1_30 = 32;
unsigned char var_1_31 = 25;
unsigned char var_1_32 = 128;
double var_1_33 = 499.6;
double var_1_34 = 3.5;
unsigned char var_1_35 = 200;
unsigned short int var_1_36 = 2;
signed long int var_1_37 = -2;
unsigned short int var_1_40 = 36532;
unsigned short int var_1_41 = 32367;
signed char var_1_42 = -2;
signed char var_1_43 = 1;
signed char var_1_44 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch38Filler_PR_CN
	/* 856L, 37L, 316L, 339L) */ if (/* 857L, 5L, 6L, 317L, 340L) */ ((/* 858L, 3L, 7L, 318L, 341L) */ (- (var_1_2))) <= (var_1_3))) {
		/* 861L, 17L, 321L, 344L) */ var_1_1 = (
			var_1_4
		);
	} else {
		/* 865L, 35L, 325L, 348L) */ if (/* 866L, 20L, 21L, 326L, 349L) */ ((var_1_5) <= (var_1_2))) {
			/* 869L, 30L, 329L, 352L) */ var_1_1 = (
				var_1_6
			);
		} else {
			/* 873L, 34L, 333L, 356L) */ var_1_1 = (
				var_1_4
			);
		}
	}


	// From: CodeObject2
	/* 74L) */ if (/* 58L, 57L) */ ((var_1_29) >= (/* 60L, 56L) */ (min (/* 60L, 56L) */ (var_1_28) , (var_1_27)))))) {
		/* 73L) */ var_1_32 = (
			/* 72L) */ (min (
				/* 72L) */ (
					var_1_30
				) , (
					var_1_31
				)
			))
		);
	}


	// From: CodeObject4
	/* 114L) */ if (/* 93L, 92L) */ ((var_1_29) >= (var_1_34))) {
		/* 112L) */ if (/* 102L, 101L) */ ((-16) > (var_1_30))) {
			/* 111L) */ var_1_35 = (
				16
			);
		}
	}


	// From: Req3Batch38Filler_PR_CN
	signed long int stepLocal_1 = /* 898L, 86L, 92L, 476L, 501L) */ ((/* 899L, 84L, 93L, 477L, 502L) */ (max (/* 899L, 84L, 93L, 477L, 502L) */ (-1) , (var_1_11)))) - (var_1_12));
	signed long int stepLocal_0 = var_1_12;
	/* 921L, 131L, 471L, 496L) */ if (/* 907L, 87L, 88L, 472L, 497L) */ ((/* 906L, 81L, 89L, 473L, 498L) */ ((var_1_9) * (var_1_10))) < (stepLocal_1))) {
		/* 916L, 125L, 481L, 506L) */ if (/* 911L, 110L, 111L, 482L, 507L) */ ((/* 910L, 108L, 112L, 483L, 508L) */ ((var_1_9) + (var_1_10))) < (stepLocal_0))) {
			/* 915L, 124L, 487L, 512L) */ var_1_8 = (
				var_1_13
			);
		}
	} else {
		/* 920L, 130L, 491L, 516L) */ var_1_8 = (
			var_1_13
		);
	}


	// From: Req4Batch38Filler_PR_CN
	/* 928L, 189L, 573L, 608L) */ if (/* 929L, 143L, 144L, 574L, 609L) */ ((/* 930L, 139L, 145L, 575L, 610L) */ ((8) / (var_1_15))) < (/* 933L, 142L, 148L, 578L, 613L) */ ((64) / (var_1_16))))) {
		/* 936L, 183L, 581L, 616L) */ if (/* 937L, 160L, 161L, 582L, 617L) */ ((var_1_12) >= (var_1_15))) {
			/* 940L, 172L, 585L, 620L) */ var_1_14 = (
				/* 943L, 171L, 588L, 623L) */ ((
					var_1_17
				) - (
					var_1_18
				))
			);
		} else {
			/* 946L, 182L, 591L, 626L) */ var_1_14 = (
				/* 949L, 181L, 594L, 629L) */ ((
					var_1_18
				) - (
					/* 951L, 180L, 596L, 631L) */ ((
						64.25
					) + (
						/* 953L, 179L, 598L, 633L) */ (max (
							/* 953L, 179L, 598L, 633L) */ (
								var_1_19
							) , (
								var_1_20
							)
						))
					))
				))
			);
		}
	} else {
		/* 956L, 188L, 601L, 636L) */ var_1_14 = (
			var_1_18
		);
	}


	// From: CodeObject1
	/* 49L) */ if (/* 13L, 12L) */ ((var_1_27) >= (/* 15L, 11L) */ (abs (/* 16L, 10L) */ (max (/* 16L, 10L) */ (var_1_29) , (var_1_28)))))))) {
		/* 43L) */ if (/* 28L, 27L) */ ((var_1_28) <= (var_1_29))) {
			/* 38L) */ var_1_26 = (
				/* 37L) */ (abs (
					var_1_30
				))
			);
		} else {
			/* 42L) */ var_1_26 = (
				50
			);
		}
	} else {
		/* 48L) */ var_1_26 = (
			var_1_31
		);
	}


	// From: Req5Batch38Filler_PR_CN
	/* 963L, 232L, 713L, 736L) */ if (/* 964L, 205L, 206L, 714L, 737L) */ ((/* 965L, 201L, 207L, 715L, 738L) */ ((var_1_8) + (4u))) <= (/* 968L, 204L, 210L, 718L, 741L) */ ((var_1_8) >> (var_1_22))))) {
		/* 971L, 227L, 721L, 744L) */ var_1_21 = (
			/* 974L, 226L, 724L, 747L) */ (min (
				/* 974L, 226L, 724L, 747L) */ (
					/* 975L, 224L, 725L, 748L) */ ((
						var_1_22
					) + (
						var_1_23
					))
				) , (
					var_1_24
				)
			))
		);
	} else {
		/* 979L, 231L, 729L, 752L) */ var_1_21 = (
			var_1_24
		);
	}


	// From: CodeObject3
	/* 85L) */ var_1_33 = (
		var_1_34
	);


	// From: CodeObject5
	/* 209L) */ if (/* 126L, 125L) */ ((-2) > (/* 128L, 124L) */ ((/* 129L, 120L) */ (abs (var_1_26))) | (/* 131L, 123L) */ ((-10) * (var_1_37))))))) {
		/* 152L) */ var_1_36 = (
			/* 151L) */ (max (
				/* 151L) */ (
					/* 146L) */ (min (
						/* 146L) */ (
							25
						) , (
							var_1_26
						)
					))
				) , (
					/* 150L) */ (abs (
						/* 149L) */ ((
							var_1_31
						) + (
							var_1_32
						))
					))
				)
			))
		);
	} else {
		/* 207L) */ if (/* 161L, 160L) */ ((/* 162L, 157L) */ (abs (var_1_37))) <= (/* 164L, 159L) */ (abs (var_1_32))))) {
			/* 197L) */ if (/* 178L, 177L) */ ((/* 179L, 175L) */ ((var_1_37) * (/* 181L, 174L) */ (max (/* 181L, 174L) */ (var_1_35) , (var_1_32)))))) <= (var_1_26))) {
				/* 196L) */ var_1_36 = (
					/* 195L) */ (abs (
						var_1_32
					))
				);
			}
		} else {
			/* 206L) */ var_1_36 = (
				/* 205L) */ ((
					var_1_40
				) - (
					/* 204L) */ ((
						var_1_41
					) - (
						var_1_31
					))
				))
			);
		}
	}


	// From: CodeObject6
	/* 264L) */ if (/* 218L, 217L) */ ((var_1_40) > (var_1_30))) {
		/* 262L) */ if (/* 230L, 229L) */ ((var_1_31) >= (/* 232L, 228L) */ ((var_1_41) << (/* 234L, 227L) */ (abs (1))))))) {
			/* 245L) */ var_1_42 = (
				var_1_43
			);
		} else {
			/* 261L) */ var_1_42 = (
				var_1_44
			);
		}
	}


	// From: Req6Batch38Filler_PR_CN
	/* 985L, 263L, 804L, 817L) */ if (/* 986L, 245L, 246L, 805L, 818L) */ (! (/* 987L, 244L, 247L, 806L, 819L) */ ((var_1_21) > (var_1_12))))) {
		/* 990L, 261L, 809L, 822L) */ if (var_1_4) {
			/* 992L, 260L, 811L, 824L) */ var_1_25 = (
				var_1_22
			);
		}
	}


	// From: Req2Batch38Filler_PR_CN
	/* 878L, 73L, 407L, 423L) */ if (/* 879L, 51L, 52L, 408L, 424L) */ ((var_1_14) < (/* 881L, 50L, 54L, 410L, 426L) */ (max (/* 881L, 50L, 54L, 410L, 426L) */ (var_1_14) , (/* 883L, 49L, 56L, 412L, 428L) */ ((128.5) * (var_1_14)))))))) {
		/* 886L, 72L, 415L, 431L) */ var_1_7 = (
			/* 889L, 71L, 418L, 434L) */ ((
				var_1_1
			) && (
				/* 891L, 70L, 420L, 436L) */ (! (
					1
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65535);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65535);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32768);
	assume_abort_if_not(var_1_15 <= 32767);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 15);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -16383);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32767);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483648);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -127);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -127);
	assume_abort_if_not(var_1_44 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 268L, 5L, 10L, 363L, 386L, 999L) */ ((/* 269L, 3L, 11L, 364L, 387L, 1000L) */ (- (var_1_2))) <= (var_1_3))) {
	} else {
		if (/* 277L, 20L, 24L, 372L, 395L, 1008L) */ ((var_1_5) <= (var_1_2))) {
		} else {
		}
	}
	if (/* 290L, 51L, 59L, 440L, 456L, 1021L) */ ((var_1_14) < (/* 292L, 50L, 61L, 442L, 458L, 1023L) */ (max (/* 292L, 50L, 61L, 442L, 458L, 1023L) */ (var_1_14) , (/* 294L, 49L, 63L, 444L, 460L, 1025L) */ ((128.5) * (var_1_14)))))))) {
	}
	if (/* 306L, 87L, 97L, 522L, 547L, 1037L) */ ((/* 307L, 81L, 98L, 523L, 548L, 1038L) */ ((var_1_9) * (var_1_10))) < (/* 310L, 86L, 101L, 526L, 551L, 1041L) */ ((/* 311L, 84L, 102L, 527L, 552L, 1042L) */ (max (/* 311L, 84L, 102L, 527L, 552L, 1042L) */ (-1) , (var_1_11)))) - (var_1_12))))) {
		if (/* 316L, 110L, 116L, 532L, 557L, 1047L) */ ((/* 317L, 108L, 117L, 533L, 558L, 1048L) */ ((var_1_9) + (var_1_10))) < (var_1_12))) {
		}
	} else {
	}
	if (/* 333L, 143L, 151L, 644L, 679L, 1064L) */ ((/* 334L, 139L, 152L, 645L, 680L, 1065L) */ ((8) / (var_1_15))) < (/* 337L, 142L, 155L, 648L, 683L, 1068L) */ ((64) / (var_1_16))))) {
		if (/* 341L, 160L, 164L, 652L, 687L, 1072L) */ ((var_1_12) >= (var_1_15))) {
		} else {
		}
	} else {
	}
	if (/* 368L, 205L, 213L, 760L, 783L, 1099L) */ ((/* 369L, 201L, 214L, 761L, 784L, 1100L) */ ((var_1_8) + (4u))) <= (/* 372L, 204L, 217L, 764L, 787L, 1103L) */ ((var_1_8) >> (var_1_22))))) {
	} else {
	}
	if (/* 390L, 245L, 250L, 831L, 844L, 1121L) */ (! (/* 391L, 244L, 251L, 832L, 845L, 1122L) */ ((var_1_21) > (var_1_12))))) {
		if (var_1_4) {
		}
	}
	return /* 405L) */ ((
	/* 404L) */ ((
		/* 403L) */ ((
			/* 402L) */ ((
				/* 401L) */ ((
					/* 267L, 38L, 362L, 385L, 998L) */ ((
						/* 268L, 5L, 10L, 363L, 386L, 999L) */ ((
							/* 269L, 3L, 11L, 364L, 387L, 1000L) */ (- (
								var_1_2
							))
						) <= (
							var_1_3
						))
					) ? (
						/* 272L, 17L, 367L, 390L, 1003L) */ ((
							var_1_1
						) == (
							/* 272L, 17L, 367L, 390L, 1003L) */ ((unsigned char) (
								var_1_4
							))
						))
					) : (
						/* 276L, 36L, 371L, 394L, 1007L) */ ((
							/* 277L, 20L, 24L, 372L, 395L, 1008L) */ ((
								var_1_5
							) <= (
								var_1_2
							))
						) ? (
							/* 280L, 30L, 375L, 398L, 1011L) */ ((
								var_1_1
							) == (
								/* 280L, 30L, 375L, 398L, 1011L) */ ((unsigned char) (
									var_1_6
								))
							))
						) : (
							/* 284L, 34L, 379L, 402L, 1015L) */ ((
								var_1_1
							) == (
								/* 284L, 34L, 379L, 402L, 1015L) */ ((unsigned char) (
									var_1_4
								))
							))
						))
					))
				) && (
					/* 289L, 74L, 439L, 455L, 1020L) */ ((
						/* 290L, 51L, 59L, 440L, 456L, 1021L) */ ((
							var_1_14
						) < (
							/* 292L, 50L, 61L, 442L, 458L, 1023L) */ (max (
								/* 292L, 50L, 61L, 442L, 458L, 1023L) */ (
									var_1_14
								) , (
									/* 294L, 49L, 63L, 444L, 460L, 1025L) */ ((
										128.5
									) * (
										var_1_14
									))
								)
							))
						))
					) ? (
						/* 297L, 72L, 447L, 463L, 1028L) */ ((
							var_1_7
						) == (
							/* 297L, 72L, 447L, 463L, 1028L) */ ((unsigned char) (
								/* 300L, 71L, 450L, 466L, 1031L) */ ((
									var_1_1
								) && (
									/* 302L, 70L, 452L, 468L, 1033L) */ (! (
										1
									))
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 305L, 132L, 521L, 546L, 1036L) */ ((
					/* 306L, 87L, 97L, 522L, 547L, 1037L) */ ((
						/* 307L, 81L, 98L, 523L, 548L, 1038L) */ ((
							var_1_9
						) * (
							var_1_10
						))
					) < (
						/* 310L, 86L, 101L, 526L, 551L, 1041L) */ ((
							/* 311L, 84L, 102L, 527L, 552L, 1042L) */ (max (
								/* 311L, 84L, 102L, 527L, 552L, 1042L) */ (
									-1
								) , (
									var_1_11
								)
							))
						) - (
							var_1_12
						))
					))
				) ? (
					/* 315L, 126L, 531L, 556L, 1046L) */ ((
						/* 316L, 110L, 116L, 532L, 557L, 1047L) */ ((
							/* 317L, 108L, 117L, 533L, 558L, 1048L) */ ((
								var_1_9
							) + (
								var_1_10
							))
						) < (
							var_1_12
						))
					) ? (
						/* 321L, 124L, 537L, 562L, 1052L) */ ((
							var_1_8
						) == (
							/* 321L, 124L, 537L, 562L, 1052L) */ ((unsigned short int) (
								var_1_13
							))
						))
					) : (
						1
					))
				) : (
					/* 325L, 130L, 541L, 566L, 1056L) */ ((
						var_1_8
					) == (
						/* 325L, 130L, 541L, 566L, 1056L) */ ((unsigned short int) (
							var_1_13
						))
					))
				))
			))
		) && (
			/* 332L, 190L, 643L, 678L, 1063L) */ ((
				/* 333L, 143L, 151L, 644L, 679L, 1064L) */ ((
					/* 334L, 139L, 152L, 645L, 680L, 1065L) */ ((
						8
					) / (
						var_1_15
					))
				) < (
					/* 337L, 142L, 155L, 648L, 683L, 1068L) */ ((
						64
					) / (
						var_1_16
					))
				))
			) ? (
				/* 340L, 184L, 651L, 686L, 1071L) */ ((
					/* 341L, 160L, 164L, 652L, 687L, 1072L) */ ((
						var_1_12
					) >= (
						var_1_15
					))
				) ? (
					/* 344L, 172L, 655L, 690L, 1075L) */ ((
						var_1_14
					) == (
						/* 344L, 172L, 655L, 690L, 1075L) */ ((double) (
							/* 347L, 171L, 658L, 693L, 1078L) */ ((
								var_1_17
							) - (
								var_1_18
							))
						))
					))
				) : (
					/* 350L, 182L, 661L, 696L, 1081L) */ ((
						var_1_14
					) == (
						/* 350L, 182L, 661L, 696L, 1081L) */ ((double) (
							/* 353L, 181L, 664L, 699L, 1084L) */ ((
								var_1_18
							) - (
								/* 355L, 180L, 666L, 701L, 1086L) */ ((
									64.25
								) + (
									/* 357L, 179L, 668L, 703L, 1088L) */ (max (
										/* 357L, 179L, 668L, 703L, 1088L) */ (
											var_1_19
										) , (
											var_1_20
										)
									))
								))
							))
						))
					))
				))
			) : (
				/* 360L, 188L, 671L, 706L, 1091L) */ ((
					var_1_14
				) == (
					/* 360L, 188L, 671L, 706L, 1091L) */ ((double) (
						var_1_18
					))
				))
			))
		))
	) && (
		/* 367L, 233L, 759L, 782L, 1098L) */ ((
			/* 368L, 205L, 213L, 760L, 783L, 1099L) */ ((
				/* 369L, 201L, 214L, 761L, 784L, 1100L) */ ((
					var_1_8
				) + (
					4u
				))
			) <= (
				/* 372L, 204L, 217L, 764L, 787L, 1103L) */ ((
					var_1_8
				) >> (
					var_1_22
				))
			))
		) ? (
			/* 375L, 227L, 767L, 790L, 1106L) */ ((
				var_1_21
			) == (
				/* 375L, 227L, 767L, 790L, 1106L) */ ((signed short int) (
					/* 378L, 226L, 770L, 793L, 1109L) */ (min (
						/* 378L, 226L, 770L, 793L, 1109L) */ (
							/* 379L, 224L, 771L, 794L, 1110L) */ ((
								var_1_22
							) + (
								var_1_23
							))
						) , (
							var_1_24
						)
					))
				))
			))
		) : (
			/* 383L, 231L, 775L, 798L, 1114L) */ ((
				var_1_21
			) == (
				/* 383L, 231L, 775L, 798L, 1114L) */ ((signed short int) (
					var_1_24
				))
			))
		))
	))
) && (
	/* 389L, 264L, 830L, 843L, 1120L) */ ((
		/* 390L, 245L, 250L, 831L, 844L, 1121L) */ (! (
			/* 391L, 244L, 251L, 832L, 845L, 1122L) */ ((
				var_1_21
			) > (
				var_1_12
			))
		))
	) ? (
		/* 394L, 262L, 835L, 848L, 1125L) */ ((
			var_1_4
		) ? (
			/* 396L, 260L, 837L, 850L, 1127L) */ ((
				var_1_25
			) == (
				/* 396L, 260L, 837L, 850L, 1127L) */ ((signed char) (
					var_1_22
				))
			))
		) : (
			1
		))
	) : (
		1
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

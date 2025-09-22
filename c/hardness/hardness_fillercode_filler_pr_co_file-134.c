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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch134Filler_PR_CO.c", 13, "reach_error"); }
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
signed short int var_1_1 = 64;
signed short int var_1_4 = 32;
signed short int var_1_5 = 10;
unsigned short int var_1_6 = 0;
unsigned short int var_1_7 = 256;
unsigned short int var_1_8 = 50;
unsigned long int var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 32;
signed long int var_1_12 = 256;
unsigned char var_1_14 = 5;
signed long int var_1_15 = -100;
float var_1_16 = 32.2;
float var_1_17 = 7.5;
float var_1_18 = 8.5;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 1;
unsigned long int var_1_21 = 256;
double var_1_22 = 999999999999.75;
unsigned char var_1_23 = 0;
double var_1_24 = 99999.4;
unsigned long int var_1_25 = 10;
unsigned long int var_1_28 = 1000;
unsigned long int var_1_29 = 16;
unsigned long int var_1_30 = 25;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
double var_1_36 = 127.2;
unsigned char var_1_37 = 32;
unsigned char var_1_38 = 50;
float var_1_39 = 999.75;
float var_1_40 = 63.875;
float var_1_41 = 15.6;
float var_1_42 = 99999999.25;
float var_1_43 = 0.75;
signed char var_1_44 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_6 = 0;
unsigned long int last_1_var_1_20 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch134Filler_PR_CO
	signed long int stepLocal_0 = last_1_var_1_6;
	/* 15L, 24L, 285L, 297L, 853L, 883L) */ if (/* 10L, 7L, 8L, 286L, 298L, 848L, 878L) */ ((stepLocal_0) == (/* 9L, 6L, 10L, 288L, 300L, 847L, 877L) */ ((last_1_var_1_20) / (/* 8L, 5L, 12L, 290L, 302L, 846L, 876L) */ (abs (var_1_4))))))) {
		/* 14L, 23L, 292L, 304L, 852L, 882L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req7Batch134Filler_PR_CO
	/* 1010L, 270L, 794L, 800L) */ var_1_20 = (
		var_1_7
	);


	// From: Req8Batch134Filler_PR_CO
	/* 1016L, 280L, 818L, 824L) */ var_1_21 = (
		var_1_7
	);


	// From: Req4Batch134Filler_PR_CO
	/* 934L, 177L, 518L, 546L) */ if (/* 935L, 131L, 132L, 519L, 547L) */ ((/* 936L, 127L, 133L, 520L, 548L) */ ((var_1_5) + (/* 938L, 126L, 135L, 522L, 550L) */ ((var_1_7) - (var_1_8))))) < (/* 941L, 130L, 138L, 525L, 553L) */ ((var_1_21) - (var_1_12))))) {
		/* 944L, 171L, 528L, 556L) */ if (/* 945L, 152L, 153L, 529L, 557L) */ ((16) >= (var_1_21))) {
			/* 948L, 162L, 532L, 560L) */ var_1_11 = (
				var_1_14
			);
		} else {
			/* 952L, 170L, 536L, 564L) */ var_1_11 = (
				8
			);
		}
	} else {
		/* 956L, 176L, 540L, 568L) */ var_1_11 = (
			0
		);
	}


	// From: CodeObject4
	/* 291L, 176L) */ if (/* 292L, 128L, 129L) */ ((var_1_28) >= (/* 294L, 127L, 131L) */ (abs (var_1_30))))) {
		/* 296L, 174L) */ if (/* 297L, 140L, 141L) */ ((/* 298L, 138L, 142L) */ (- (var_1_24))) >= (var_1_22))) {
			/* 301L, 172L) */ if (/* 302L, 152L, 153L) */ ((var_1_21) <= (/* 304L, 151L, 155L) */ (~ (var_1_29))))) {
				/* 306L, 167L) */ var_1_36 = (
					/* 309L, 166L) */ (max (
						/* 309L, 166L) */ (
							/* 310L, 164L) */ (abs (
								24.294
							))
						) , (
							var_1_24
						)
					))
				);
			} else {
				/* 313L, 171L) */ var_1_36 = (
					var_1_24
				);
			}
		}
	}


	// From: CodeObject5
	/* 318L, 185L) */ var_1_37 = (
		/* 321L, 184L) */ ((
			var_1_38
		) + (
			8
		))
	);


	// From: Req5Batch134Filler_PR_CO
	/* 962L, 206L, 630L, 643L) */ if (/* 963L, 188L, 189L, 631L, 644L) */ ((var_1_10) || (/* 965L, 187L, 191L, 633L, 646L) */ (! (0))))) {
		/* 967L, 204L, 635L, 648L) */ if (var_1_10) {
			/* 969L, 203L, 637L, 650L) */ var_1_15 = (
				var_1_20
			);
		}
	}


	// From: CodeObject2
	/* 247L, 83L) */ if (/* 248L, 50L, 51L) */ ((var_1_6) >= (var_1_15))) {
		/* 251L, 81L) */ if (/* 252L, 61L, 62L) */ ((64.8f) <= (/* 254L, 60L, 64L) */ (max (/* 254L, 60L, 64L) */ (var_1_24) , (var_1_22)))))) {
			/* 257L, 80L) */ var_1_25 = (
				/* 260L, 79L) */ ((
					var_1_28
				) + (
					/* 262L, 78L) */ (abs (
						/* 263L, 77L) */ (min (
							/* 263L, 77L) */ (
								var_1_29
							) , (
								var_1_30
							)
						))
					))
				))
			);
		}
	}


	// From: CodeObject7
	/* 349L, 236L) */ var_1_44 = (
		25
	);


	// From: Req3Batch134Filler_PR_CO
	/* 922L, 115L, 470L, 482L) */ if (/* 923L, 99L, 100L, 471L, 483L) */ ((var_1_1) >= (var_1_8))) {
		/* 926L, 113L, 474L, 486L) */ if (var_1_10) {
			/* 928L, 112L, 476L, 488L) */ var_1_9 = (
				var_1_15
			);
		}
	}


	// From: CodeObject3
	/* 267L, 119L) */ if (/* 268L, 92L, 93L) */ ((-64) > (var_1_28))) {
		/* 271L, 107L) */ var_1_31 = (
			/* 274L, 106L) */ ((
				/* 275L, 104L) */ ((
					var_1_23
				) && (
					/* 277L, 103L) */ (! (
						var_1_32
					))
				))
			) || (
				var_1_33
			))
		);
	} else {
		/* 280L, 118L) */ var_1_31 = (
			/* 283L, 117L) */ (! (
				/* 284L, 116L) */ ((
					/* 285L, 112L) */ ((
						var_1_32
					) && (
						var_1_34
					))
				) && (
					/* 288L, 115L) */ ((
						var_1_23
					) || (
						var_1_35
					))
				))
			))
		);
	}


	// From: CodeObject6
	/* 324L, 229L) */ if (/* 325L, 197L, 198L) */ ((/* 326L, 193L, 199L) */ (! (/* 327L, 192L, 200L) */ ((var_1_22) >= (var_1_36))))) && (/* 330L, 196L, 203L) */ ((var_1_28) == (var_1_38))))) {
		/* 333L, 223L) */ var_1_39 = (
			/* 336L, 222L) */ ((
				var_1_40
			) + (
				/* 338L, 221L) */ (min (
					/* 338L, 221L) */ (
						/* 339L, 219L) */ ((
							var_1_41
						) + (
							var_1_42
						))
					) , (
						var_1_43
					)
				))
			))
		);
	} else {
		/* 343L, 228L) */ var_1_39 = (
			/* 346L, 227L) */ (abs (
				var_1_43
			))
		);
	}


	// From: Req2Batch134Filler_PR_CO
	/* 889L, 85L, 335L, 369L) */ if (/* 890L, 38L, 39L, 336L, 370L) */ ((/* 891L, 36L, 40L, 337L, 371L) */ ((/* 892L, 32L, 41L, 338L, 372L) */ (min (/* 892L, 32L, 41L, 338L, 372L) */ (var_1_9) , (50)))) + (/* 895L, 35L, 44L, 341L, 375L) */ ((var_1_4) + (var_1_9))))) != (var_1_5))) {
		/* 899L, 79L, 345L, 379L) */ if (/* 900L, 59L, 60L, 346L, 380L) */ ((var_1_21) > (var_1_9))) {
			/* 903L, 72L, 349L, 383L) */ var_1_6 = (
				/* 906L, 71L, 352L, 386L) */ ((
					/* 907L, 69L, 353L, 387L) */ (abs (
						var_1_7
					))
				) + (
					var_1_8
				))
			);
		} else {
			/* 910L, 78L, 356L, 390L) */ var_1_6 = (
				/* 913L, 77L, 359L, 393L) */ ((
					var_1_7
				) + (
					var_1_8
				))
			);
		}
	} else {
		/* 916L, 84L, 362L, 396L) */ var_1_6 = (
			var_1_8
		);
	}


	// From: Req6Batch134Filler_PR_CO
	unsigned short int stepLocal_2 = var_1_8;
	unsigned char stepLocal_1 = var_1_19;
	/* 1004L, 261L, 681L, 709L) */ if (/* 981L, 216L, 217L, 682L, 710L) */ ((stepLocal_2) <= (var_1_6))) {
		/* 990L, 235L, 685L, 713L) */ if (/* 983L, 224L, 225L, 686L, 714L) */ (! (var_1_10))) {
			/* 989L, 234L, 688L, 716L) */ var_1_16 = (
				/* 988L, 233L, 691L, 719L) */ (max (
					/* 988L, 233L, 691L, 719L) */ (
						var_1_17
					) , (
						var_1_18
					)
				))
			);
		}
	} else {
		/* 1003L, 259L, 694L, 722L) */ if (/* 992L, 239L, 240L, 695L, 723L) */ ((var_1_10) && (stepLocal_1))) {
			/* 998L, 253L, 698L, 726L) */ if (var_1_10) {
				/* 997L, 252L, 700L, 728L) */ var_1_16 = (
					var_1_17
				);
			}
		} else {
			/* 1002L, 258L, 704L, 732L) */ var_1_16 = (
				var_1_18
			);
		}
	}


	// From: CodeObject1
	/* 240L, 42L) */ if (var_1_23) {
		/* 242L, 41L) */ var_1_22 = (
			/* 245L, 40L) */ (abs (
				var_1_24
			))
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 354L, 7L, 14L, 310L, 322L, 862L, 1022L, 25L) */ ((last_1_var_1_6) == (/* 357L, 6L, 16L, 312L, 324L, 861L, 1025L, 24L) */ ((last_1_var_1_20) / (/* 360L, 5L, 18L, 314L, 326L, 860L, 1028L, 23L) */ (abs (var_1_4))))))) {
	}
	if (/* 370L, 38L, 48L, 404L, 438L, 1038L) */ ((/* 371L, 36L, 49L, 405L, 439L, 1039L) */ ((/* 372L, 32L, 50L, 406L, 440L, 1040L) */ (min (/* 372L, 32L, 50L, 406L, 440L, 1040L) */ (var_1_9) , (50)))) + (/* 375L, 35L, 53L, 409L, 443L, 1043L) */ ((var_1_4) + (var_1_9))))) != (var_1_5))) {
		if (/* 380L, 59L, 63L, 414L, 448L, 1048L) */ ((var_1_21) > (var_1_9))) {
		} else {
		}
	} else {
	}
	if (/* 403L, 99L, 103L, 495L, 507L, 1071L) */ ((var_1_1) >= (var_1_8))) {
		if (var_1_10) {
		}
	}
	if (/* 415L, 131L, 141L, 575L, 603L, 1083L) */ ((/* 416L, 127L, 142L, 576L, 604L, 1084L) */ ((var_1_5) + (/* 418L, 126L, 144L, 578L, 606L, 1086L) */ ((var_1_7) - (var_1_8))))) < (/* 421L, 130L, 147L, 581L, 609L, 1089L) */ ((var_1_21) - (var_1_12))))) {
		if (/* 425L, 152L, 156L, 585L, 613L, 1093L) */ ((16) >= (var_1_21))) {
		} else {
		}
	} else {
	}
	if (/* 443L, 188L, 193L, 657L, 670L, 1111L) */ ((var_1_10) || (/* 445L, 187L, 195L, 659L, 672L, 1113L) */ (! (0))))) {
		if (var_1_10) {
		}
	}
	if (/* 455L, 216L, 220L, 738L, 766L, 1123L) */ ((var_1_8) <= (var_1_6))) {
		if (/* 459L, 224L, 227L, 742L, 770L, 1127L) */ (! (var_1_10))) {
		}
	} else {
		if (/* 468L, 239L, 243L, 751L, 779L, 1136L) */ ((var_1_10) && (var_1_19))) {
			if (var_1_10) {
			}
		} else {
		}
	}
	return /* 500L) */ ((
	/* 499L) */ ((
		/* 498L) */ ((
			/* 497L) */ ((
				/* 496L) */ ((
					/* 495L) */ ((
						/* 494L) */ ((
							/* 353L, 25L, 309L, 321L, 867L, 1021L, 30L) */ ((
								/* 354L, 7L, 14L, 310L, 322L, 862L, 1022L, 25L) */ ((
									last_1_var_1_6
								) == (
									/* 357L, 6L, 16L, 312L, 324L, 861L, 1025L, 24L) */ ((
										last_1_var_1_20
									) / (
										/* 360L, 5L, 18L, 314L, 326L, 860L, 1028L, 23L) */ (abs (
											var_1_4
										))
									))
								))
							) ? (
								/* 362L, 23L, 316L, 328L, 866L, 1030L, 29L) */ ((
									var_1_1
								) == (
									/* 362L, 23L, 316L, 328L, 866L, 1030L, 29L) */ ((signed short int) (
										var_1_5
									))
								))
							) : (
								1
							))
						) && (
							/* 369L, 86L, 403L, 437L, 1037L) */ ((
								/* 370L, 38L, 48L, 404L, 438L, 1038L) */ ((
									/* 371L, 36L, 49L, 405L, 439L, 1039L) */ ((
										/* 372L, 32L, 50L, 406L, 440L, 1040L) */ (min (
											/* 372L, 32L, 50L, 406L, 440L, 1040L) */ (
												var_1_9
											) , (
												50
											)
										))
									) + (
										/* 375L, 35L, 53L, 409L, 443L, 1043L) */ ((
											var_1_4
										) + (
											var_1_9
										))
									))
								) != (
									var_1_5
								))
							) ? (
								/* 379L, 80L, 413L, 447L, 1047L) */ ((
									/* 380L, 59L, 63L, 414L, 448L, 1048L) */ ((
										var_1_21
									) > (
										var_1_9
									))
								) ? (
									/* 383L, 72L, 417L, 451L, 1051L) */ ((
										var_1_6
									) == (
										/* 383L, 72L, 417L, 451L, 1051L) */ ((unsigned short int) (
											/* 386L, 71L, 420L, 454L, 1054L) */ ((
												/* 387L, 69L, 421L, 455L, 1055L) */ (abs (
													var_1_7
												))
											) + (
												var_1_8
											))
										))
									))
								) : (
									/* 390L, 78L, 424L, 458L, 1058L) */ ((
										var_1_6
									) == (
										/* 390L, 78L, 424L, 458L, 1058L) */ ((unsigned short int) (
											/* 393L, 77L, 427L, 461L, 1061L) */ ((
												var_1_7
											) + (
												var_1_8
											))
										))
									))
								))
							) : (
								/* 396L, 84L, 430L, 464L, 1064L) */ ((
									var_1_6
								) == (
									/* 396L, 84L, 430L, 464L, 1064L) */ ((unsigned short int) (
										var_1_8
									))
								))
							))
						))
					) && (
						/* 402L, 116L, 494L, 506L, 1070L) */ ((
							/* 403L, 99L, 103L, 495L, 507L, 1071L) */ ((
								var_1_1
							) >= (
								var_1_8
							))
						) ? (
							/* 406L, 114L, 498L, 510L, 1074L) */ ((
								var_1_10
							) ? (
								/* 408L, 112L, 500L, 512L, 1076L) */ ((
									var_1_9
								) == (
									/* 408L, 112L, 500L, 512L, 1076L) */ ((unsigned long int) (
										var_1_15
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
					/* 414L, 178L, 574L, 602L, 1082L) */ ((
						/* 415L, 131L, 141L, 575L, 603L, 1083L) */ ((
							/* 416L, 127L, 142L, 576L, 604L, 1084L) */ ((
								var_1_5
							) + (
								/* 418L, 126L, 144L, 578L, 606L, 1086L) */ ((
									var_1_7
								) - (
									var_1_8
								))
							))
						) < (
							/* 421L, 130L, 147L, 581L, 609L, 1089L) */ ((
								var_1_21
							) - (
								var_1_12
							))
						))
					) ? (
						/* 424L, 172L, 584L, 612L, 1092L) */ ((
							/* 425L, 152L, 156L, 585L, 613L, 1093L) */ ((
								16
							) >= (
								var_1_21
							))
						) ? (
							/* 428L, 162L, 588L, 616L, 1096L) */ ((
								var_1_11
							) == (
								/* 428L, 162L, 588L, 616L, 1096L) */ ((unsigned char) (
									var_1_14
								))
							))
						) : (
							/* 432L, 170L, 592L, 620L, 1100L) */ ((
								var_1_11
							) == (
								/* 432L, 170L, 592L, 620L, 1100L) */ ((unsigned char) (
									8
								))
							))
						))
					) : (
						/* 436L, 176L, 596L, 624L, 1104L) */ ((
							var_1_11
						) == (
							/* 436L, 176L, 596L, 624L, 1104L) */ ((unsigned char) (
								0
							))
						))
					))
				))
			) && (
				/* 442L, 207L, 656L, 669L, 1110L) */ ((
					/* 443L, 188L, 193L, 657L, 670L, 1111L) */ ((
						var_1_10
					) || (
						/* 445L, 187L, 195L, 659L, 672L, 1113L) */ (! (
							0
						))
					))
				) ? (
					/* 447L, 205L, 661L, 674L, 1115L) */ ((
						var_1_10
					) ? (
						/* 449L, 203L, 663L, 676L, 1117L) */ ((
							var_1_15
						) == (
							/* 449L, 203L, 663L, 676L, 1117L) */ ((signed long int) (
								var_1_20
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
			/* 454L, 262L, 737L, 765L, 1122L) */ ((
				/* 455L, 216L, 220L, 738L, 766L, 1123L) */ ((
					var_1_8
				) <= (
					var_1_6
				))
			) ? (
				/* 458L, 236L, 741L, 769L, 1126L) */ ((
					/* 459L, 224L, 227L, 742L, 770L, 1127L) */ (! (
						var_1_10
					))
				) ? (
					/* 461L, 234L, 744L, 772L, 1129L) */ ((
						var_1_16
					) == (
						/* 461L, 234L, 744L, 772L, 1129L) */ ((float) (
							/* 464L, 233L, 747L, 775L, 1132L) */ (max (
								/* 464L, 233L, 747L, 775L, 1132L) */ (
									var_1_17
								) , (
									var_1_18
								)
							))
						))
					))
				) : (
					1
				))
			) : (
				/* 467L, 260L, 750L, 778L, 1135L) */ ((
					/* 468L, 239L, 243L, 751L, 779L, 1136L) */ ((
						var_1_10
					) && (
						var_1_19
					))
				) ? (
					/* 471L, 254L, 754L, 782L, 1139L) */ ((
						var_1_10
					) ? (
						/* 473L, 252L, 756L, 784L, 1141L) */ ((
							var_1_16
						) == (
							/* 473L, 252L, 756L, 784L, 1141L) */ ((float) (
								var_1_17
							))
						))
					) : (
						1
					))
				) : (
					/* 477L, 258L, 760L, 788L, 1145L) */ ((
						var_1_16
					) == (
						/* 477L, 258L, 760L, 788L, 1145L) */ ((float) (
							var_1_18
						))
					))
				))
			))
		))
	) && (
		/* 483L, 270L, 806L, 812L, 1151L) */ ((
			var_1_20
		) == (
			/* 483L, 270L, 806L, 812L, 1151L) */ ((unsigned long int) (
				var_1_7
			))
		))
	))
) && (
	/* 489L, 280L, 830L, 836L, 1157L) */ ((
		var_1_21
	) == (
		/* 489L, 280L, 830L, 836L, 1157L) */ ((unsigned long int) (
			var_1_7
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

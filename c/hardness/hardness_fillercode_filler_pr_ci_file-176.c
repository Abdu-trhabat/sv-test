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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176Filler_PR_CI.c", 13, "reach_error"); }
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
signed char var_1_1 = 64;
signed char var_1_3 = -100;
signed char var_1_4 = 100;
signed char var_1_6 = 100;
signed char var_1_7 = 4;
signed char var_1_8 = 100;
signed char var_1_9 = 100;
double var_1_10 = 128.5;
unsigned char var_1_11 = 0;
double var_1_12 = 99.975;
double var_1_13 = -0.8;
double var_1_14 = 255.2;
double var_1_15 = 15.4;
unsigned long int var_1_16 = 128;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
float var_1_21 = 32.625;
float var_1_22 = 3.75;
float var_1_23 = 8.5;
float var_1_24 = 10.8;
float var_1_25 = 1000000000.6;
signed char var_1_26 = 0;
unsigned short int var_1_27 = 128;
unsigned char var_1_28 = 50;
signed long int var_1_30 = -10000000;
signed long int var_1_31 = -10;
signed long int var_1_32 = -4;
unsigned char var_1_33 = 1;
unsigned short int var_1_34 = 256;
double var_1_36 = 0.6;
double var_1_38 = 2.5;
unsigned char var_1_39 = 0;
unsigned char var_1_41 = 1;
unsigned long int var_1_44 = 0;
signed short int var_1_45 = 16;
unsigned char var_1_46 = 0;
double var_1_49 = 0.2;

// Calibration values

// Last'ed variables
double last_1_var_1_10 = 128.5;
signed char last_1_var_1_26 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch176Filler_PR_CI
	signed char stepLocal_2 = var_1_8;
	/* 57L, 126L, 448L, 459L, 832L, 956L) */ if (/* 50L, 113L, 114L, 449L, 460L, 825L, 949L) */ ((last_1_var_1_26) > (stepLocal_2))) {
		/* 56L, 125L, 452L, 463L, 831L, 955L) */ var_1_16 = (
			/* 55L, 124L, 455L, 466L, 830L, 954L) */ ((
				var_1_7
			) + (
				var_1_6
			))
		);
	}


	// From: CodeObject5
	/* 463L, 268L) */ if (var_1_19) {
		/* 465L, 266L) */ if (/* 466L, 253L, 254L) */ ((var_1_44) <= (var_1_30))) {
			/* 469L, 265L) */ var_1_45 = (
				/* 472L, 264L) */ ((
					var_1_33
				) + (
					var_1_27
				))
			);
		}
	}


	// From: Req4Batch176Filler_PR_CI
	/* 19L, 156L, 493L, 514L, 865L, 961L) */ if (/* 2L, 134L, 135L, 494L, 515L, 848L, 962L) */ ((var_1_11) || (var_1_18))) {
		/* 14L, 151L, 497L, 518L, 860L, 965L) */ var_1_17 = (
			/* 13L, 150L, 500L, 521L, 859L, 968L) */ ((
				/* 10L, 147L, 501L, 522L, 856L, 969L) */ ((
					/* 8L, 145L, 502L, 523L, 854L, 970L) */ ((
						last_1_var_1_10
					) > (
						var_1_15
					))
				) || (
					var_1_19
				))
			) && (
				/* 12L, 149L, 506L, 527L, 858L, 975L) */ (! (
					var_1_20
				))
			))
		);
	} else {
		/* 18L, 155L, 508L, 529L, 864L, 977L) */ var_1_17 = (
			0
		);
	}


	// From: CodeObject3
	/* 407L, 224L) */ if (/* 408L, 167L, 168L) */ ((var_1_38) <= (var_1_12))) {
		/* 411L, 218L) */ if (var_1_19) {
			/* 413L, 212L) */ if (/* 414L, 187L, 188L) */ ((var_1_16) > (/* 416L, 186L, 190L) */ ((/* 417L, 183L, 191L) */ (min (/* 417L, 183L, 191L) */ (var_1_16) , (var_1_33)))) % (/* 420L, 185L, 194L) */ (abs (var_1_41))))))) {
				/* 422L, 207L) */ var_1_39 = (
					var_1_19
				);
			} else {
				/* 426L, 211L) */ var_1_39 = (
					var_1_20
				);
			}
		} else {
			/* 430L, 217L) */ var_1_39 = (
				var_1_20
			);
		}
	} else {
		/* 434L, 223L) */ var_1_39 = (
			var_1_19
		);
	}


	// From: CodeObject4
	/* 438L, 244L) */ if (/* 439L, 230L, 231L) */ ((var_1_41) <= (var_1_16))) {
		/* 442L, 243L) */ var_1_44 = (
			/* 445L, 242L) */ (max (
				/* 445L, 242L) */ (
					var_1_41
				) , (
					/* 447L, 241L) */ (abs (
						var_1_33
					))
				)
			))
		);
	}


	// From: Req2Batch176Filler_PR_CI
	unsigned char stepLocal_1 = var_1_17;
	/* 940L, 105L, 348L, 373L) */ if (/* 921L, 49L, 50L, 349L, 374L) */ ((/* 920L, 47L, 51L, 350L, 375L) */ ((var_1_16) <= (var_1_3))) && (stepLocal_1))) {
		/* 935L, 99L, 354L, 379L) */ if (/* 926L, 64L, 65L, 355L, 380L) */ ((/* 924L, 62L, 66L, 356L, 381L) */ (max (/* 924L, 62L, 66L, 356L, 381L) */ (var_1_12) , (var_1_13)))) < (var_1_14))) {
			/* 930L, 78L, 360L, 385L) */ var_1_10 = (
				var_1_15
			);
		} else {
			/* 934L, 98L, 364L, 389L) */ var_1_10 = (
				31.5
			);
		}
	} else {
		/* 939L, 104L, 368L, 393L) */ var_1_10 = (
			var_1_15
		);
	}


	// From: CodeObject1
	/* 363L, 108L) */ if (var_1_19) {
		/* 365L, 102L) */ if (/* 366L, 83L, 84L) */ ((/* 367L, 81L, 85L) */ ((-10) | (/* 369L, 80L, 87L) */ ((var_1_30) & (var_1_31))))) >= (var_1_32))) {
			/* 373L, 101L) */ var_1_28 = (
				var_1_33
			);
		}
	} else {
		/* 377L, 107L) */ var_1_28 = (
			var_1_33
		);
	}


	// From: CodeObject7
	/* 501L, 343L) */ if (/* 502L, 316L, 317L) */ ((/* 503L, 310L, 318L) */ ((/* 504L, 308L, 319L) */ ((8) << (var_1_33))) % (var_1_41))) < (/* 508L, 315L, 323L) */ (max (/* 508L, 315L, 323L) */ (var_1_32) , (/* 510L, 314L, 325L) */ (max (/* 510L, 314L, 325L) */ (var_1_27) , (var_1_44))))))))) {
		/* 513L, 342L) */ var_1_49 = (
			var_1_15
		);
	}


	// From: Req7Batch176Filler_PR_CI
	/* 1032L, 259L, 799L, 805L) */ var_1_27 = (
		var_1_6
	);


	// From: CodeObject6
	/* 475L, 302L) */ if (/* 476L, 287L, 288L) */ ((/* 477L, 285L, 289L) */ ((var_1_16) + (10))) < (var_1_16))) {
		/* 481L, 301L) */ var_1_46 = (
			var_1_19
		);
	}


	// From: Req1Batch176Filler_PR_CI
	unsigned long int stepLocal_0 = var_1_16;
	/* 911L, 39L, 264L, 285L) */ if (/* 900L, 10L, 11L, 265L, 286L) */ ((/* 899L, 8L, 12L, 266L, 287L) */ ((/* 895L, 4L, 13L, 267L, 288L) */ ((var_1_27) * (4))) % (/* 898L, 7L, 16L, 270L, 291L) */ (min (/* 898L, 7L, 16L, 270L, 291L) */ (var_1_3) , (var_1_4)))))) <= (stepLocal_0))) {
		/* 910L, 38L, 274L, 295L) */ var_1_1 = (
			/* 909L, 37L, 277L, 298L) */ ((
				/* 907L, 35L, 278L, 299L) */ (max (
					/* 907L, 35L, 278L, 299L) */ (
						/* 905L, 33L, 279L, 300L) */ ((
							var_1_6
						) - (
							var_1_7
						))
					) , (
						var_1_8
					)
				))
			) - (
				var_1_9
			))
		);
	}


	// From: CodeObject2
	/* 381L, 158L) */ if (/* 382L, 114L, 115L) */ ((var_1_16) > (200))) {
		/* 385L, 151L) */ if (/* 386L, 127L, 128L) */ ((/* 387L, 123L, 129L) */ ((var_1_12) / (var_1_36))) < (/* 390L, 126L, 132L) */ ((var_1_14) / (var_1_38))))) {
			/* 393L, 145L) */ var_1_34 = (
				var_1_33
			);
		} else {
			/* 397L, 150L) */ var_1_34 = (
				/* 400L, 149L) */ (abs (
					var_1_16
				))
			);
		}
	} else {
		/* 402L, 157L) */ var_1_34 = (
			/* 405L, 156L) */ (abs (
				var_1_33
			))
		);
	}


	// From: Req5Batch176Filler_PR_CI
	/* 983L, 221L, 577L, 613L) */ if (var_1_17) {
		/* 985L, 172L, 579L, 615L) */ var_1_21 = (
			/* 988L, 171L, 582L, 618L) */ (min (
				/* 988L, 171L, 582L, 618L) */ (
					var_1_15
				) , (
					var_1_22
				)
			))
		);
	} else {
		/* 991L, 219L, 585L, 621L) */ if (/* 992L, 177L, 178L, 586L, 622L) */ ((var_1_27) <= (/* 994L, 176L, 180L, 588L, 624L) */ ((var_1_27) * (var_1_4))))) {
			/* 997L, 209L, 591L, 627L) */ if (/* 998L, 192L, 193L, 592L, 628L) */ ((/* 999L, 190L, 194L, 593L, 629L) */ ((var_1_6) + (var_1_27))) < (var_1_16))) {
				/* 1003L, 208L, 597L, 633L) */ var_1_21 = (
					/* 1006L, 207L, 600L, 636L) */ ((
						var_1_23
					) + (
						var_1_24
					))
				);
			}
		} else {
			/* 1009L, 218L, 603L, 639L) */ var_1_21 = (
				/* 1012L, 217L, 606L, 642L) */ ((
					var_1_25
				) - (
					/* 1014L, 216L, 608L, 644L) */ ((
						1.6f
					) + (
						8.8f
					))
				))
			);
		}
	}


	// From: Req6Batch176Filler_PR_CI
	/* 1018L, 250L, 746L, 759L) */ if (/* 1019L, 233L, 234L, 747L, 760L) */ ((/* 1020L, 231L, 235L, 748L, 761L) */ (max (/* 1020L, 231L, 235L, 748L, 761L) */ (var_1_14) , (var_1_21)))) >= (var_1_24))) {
		/* 1024L, 249L, 752L, 765L) */ var_1_26 = (
			/* 1027L, 248L, 755L, 768L) */ ((
				var_1_7
			) - (
				8
			))
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 62);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	assume_abort_if_not(var_1_38 != 0.0F);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 255);
	assume_abort_if_not(var_1_41 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_26 = var_1_26;
}

int property(void) {
	if (/* 518L, 10L, 20L, 307L, 328L, 1038L) */ ((/* 519L, 8L, 21L, 308L, 329L, 1039L) */ ((/* 520L, 4L, 22L, 309L, 330L, 1040L) */ ((var_1_27) * (4))) % (/* 523L, 7L, 25L, 312L, 333L, 1043L) */ (min (/* 523L, 7L, 25L, 312L, 333L, 1043L) */ (var_1_3) , (var_1_4)))))) <= (var_1_16))) {
	}
	if (/* 539L, 49L, 55L, 399L, 424L, 1059L) */ ((/* 540L, 47L, 56L, 400L, 425L, 1060L) */ ((var_1_16) <= (var_1_3))) && (var_1_17))) {
		if (/* 545L, 64L, 70L, 405L, 430L, 1065L) */ ((/* 546L, 62L, 71L, 406L, 431L, 1066L) */ (max (/* 546L, 62L, 71L, 406L, 431L, 1066L) */ (var_1_12) , (var_1_13)))) < (var_1_14))) {
		} else {
		}
	} else {
	}
	if (/* 564L, 113L, 117L, 471L, 482L, 837L, 1084L, 63L) */ ((last_1_var_1_26) > (var_1_8))) {
	}
	if (/* 577L, 134L, 138L, 536L, 557L, 870L, 1097L, 24L) */ ((var_1_11) || (var_1_18))) {
	} else {
	}
	if (var_1_17) {
	} else {
		if (/* 607L, 177L, 183L, 658L, 694L, 1127L) */ ((var_1_27) <= (/* 609L, 176L, 185L, 660L, 696L, 1129L) */ ((var_1_27) * (var_1_4))))) {
			if (/* 613L, 192L, 198L, 664L, 700L, 1133L) */ ((/* 614L, 190L, 199L, 665L, 701L, 1134L) */ ((var_1_6) + (var_1_27))) < (var_1_16))) {
			}
		} else {
		}
	}
	if (/* 634L, 233L, 239L, 773L, 786L, 1154L) */ ((/* 635L, 231L, 240L, 774L, 787L, 1155L) */ (max (/* 635L, 231L, 240L, 774L, 787L, 1155L) */ (var_1_14) , (var_1_21)))) >= (var_1_24))) {
	}
	return /* 657L) */ ((
	/* 656L) */ ((
		/* 655L) */ ((
			/* 654L) */ ((
				/* 653L) */ ((
					/* 652L) */ ((
						/* 517L, 40L, 306L, 327L, 1037L) */ ((
							/* 518L, 10L, 20L, 307L, 328L, 1038L) */ ((
								/* 519L, 8L, 21L, 308L, 329L, 1039L) */ ((
									/* 520L, 4L, 22L, 309L, 330L, 1040L) */ ((
										var_1_27
									) * (
										4
									))
								) % (
									/* 523L, 7L, 25L, 312L, 333L, 1043L) */ (min (
										/* 523L, 7L, 25L, 312L, 333L, 1043L) */ (
											var_1_3
										) , (
											var_1_4
										)
									))
								))
							) <= (
								var_1_16
							))
						) ? (
							/* 527L, 38L, 316L, 337L, 1047L) */ ((
								var_1_1
							) == (
								/* 527L, 38L, 316L, 337L, 1047L) */ ((signed char) (
									/* 530L, 37L, 319L, 340L, 1050L) */ ((
										/* 531L, 35L, 320L, 341L, 1051L) */ (max (
											/* 531L, 35L, 320L, 341L, 1051L) */ (
												/* 532L, 33L, 321L, 342L, 1052L) */ ((
													var_1_6
												) - (
													var_1_7
												))
											) , (
												var_1_8
											)
										))
									) - (
										var_1_9
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 538L, 106L, 398L, 423L, 1058L) */ ((
							/* 539L, 49L, 55L, 399L, 424L, 1059L) */ ((
								/* 540L, 47L, 56L, 400L, 425L, 1060L) */ ((
									var_1_16
								) <= (
									var_1_3
								))
							) && (
								var_1_17
							))
						) ? (
							/* 544L, 100L, 404L, 429L, 1064L) */ ((
								/* 545L, 64L, 70L, 405L, 430L, 1065L) */ ((
									/* 546L, 62L, 71L, 406L, 431L, 1066L) */ (max (
										/* 546L, 62L, 71L, 406L, 431L, 1066L) */ (
											var_1_12
										) , (
											var_1_13
										)
									))
								) < (
									var_1_14
								))
							) ? (
								/* 550L, 78L, 410L, 435L, 1070L) */ ((
									var_1_10
								) == (
									/* 550L, 78L, 410L, 435L, 1070L) */ ((double) (
										var_1_15
									))
								))
							) : (
								/* 554L, 98L, 414L, 439L, 1074L) */ ((
									var_1_10
								) == (
									/* 554L, 98L, 414L, 439L, 1074L) */ ((double) (
										31.5
									))
								))
							))
						) : (
							/* 558L, 104L, 418L, 443L, 1078L) */ ((
								var_1_10
							) == (
								/* 558L, 104L, 418L, 443L, 1078L) */ ((double) (
									var_1_15
								))
							))
						))
					))
				) && (
					/* 563L, 127L, 470L, 481L, 844L, 1083L, 70L) */ ((
						/* 564L, 113L, 117L, 471L, 482L, 837L, 1084L, 63L) */ ((
							last_1_var_1_26
						) > (
							var_1_8
						))
					) ? (
						/* 568L, 125L, 474L, 485L, 843L, 1088L, 69L) */ ((
							var_1_16
						) == (
							/* 568L, 125L, 474L, 485L, 843L, 1088L, 69L) */ ((unsigned long int) (
								/* 571L, 124L, 477L, 488L, 842L, 1091L, 68L) */ ((
									var_1_7
								) + (
									var_1_6
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 576L, 157L, 535L, 556L, 887L, 1096L, 41L) */ ((
					/* 577L, 134L, 138L, 536L, 557L, 870L, 1097L, 24L) */ ((
						var_1_11
					) || (
						var_1_18
					))
				) ? (
					/* 580L, 151L, 539L, 560L, 882L, 1100L, 36L) */ ((
						var_1_17
					) == (
						/* 580L, 151L, 539L, 560L, 882L, 1100L, 36L) */ ((unsigned char) (
							/* 583L, 150L, 542L, 563L, 881L, 1103L, 35L) */ ((
								/* 584L, 147L, 543L, 564L, 878L, 1104L, 32L) */ ((
									/* 585L, 145L, 544L, 565L, 876L, 1105L, 30L) */ ((
										last_1_var_1_10
									) > (
										var_1_15
									))
								) || (
									var_1_19
								))
							) && (
								/* 590L, 149L, 548L, 569L, 880L, 1110L, 34L) */ (! (
									var_1_20
								))
							))
						))
					))
				) : (
					/* 592L, 155L, 550L, 571L, 886L, 1112L, 40L) */ ((
						var_1_17
					) == (
						/* 592L, 155L, 550L, 571L, 886L, 1112L, 40L) */ ((unsigned char) (
							0
						))
					))
				))
			))
		) && (
			/* 598L, 222L, 649L, 685L, 1118L) */ ((
				var_1_17
			) ? (
				/* 600L, 172L, 651L, 687L, 1120L) */ ((
					var_1_21
				) == (
					/* 600L, 172L, 651L, 687L, 1120L) */ ((float) (
						/* 603L, 171L, 654L, 690L, 1123L) */ (min (
							/* 603L, 171L, 654L, 690L, 1123L) */ (
								var_1_15
							) , (
								var_1_22
							)
						))
					))
				))
			) : (
				/* 606L, 220L, 657L, 693L, 1126L) */ ((
					/* 607L, 177L, 183L, 658L, 694L, 1127L) */ ((
						var_1_27
					) <= (
						/* 609L, 176L, 185L, 660L, 696L, 1129L) */ ((
							var_1_27
						) * (
							var_1_4
						))
					))
				) ? (
					/* 612L, 210L, 663L, 699L, 1132L) */ ((
						/* 613L, 192L, 198L, 664L, 700L, 1133L) */ ((
							/* 614L, 190L, 199L, 665L, 701L, 1134L) */ ((
								var_1_6
							) + (
								var_1_27
							))
						) < (
							var_1_16
						))
					) ? (
						/* 618L, 208L, 669L, 705L, 1138L) */ ((
							var_1_21
						) == (
							/* 618L, 208L, 669L, 705L, 1138L) */ ((float) (
								/* 621L, 207L, 672L, 708L, 1141L) */ ((
									var_1_23
								) + (
									var_1_24
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 624L, 218L, 675L, 711L, 1144L) */ ((
						var_1_21
					) == (
						/* 624L, 218L, 675L, 711L, 1144L) */ ((float) (
							/* 627L, 217L, 678L, 714L, 1147L) */ ((
								var_1_25
							) - (
								/* 629L, 216L, 680L, 716L, 1149L) */ ((
									1.6f
								) + (
									8.8f
								))
							))
						))
					))
				))
			))
		))
	) && (
		/* 633L, 251L, 772L, 785L, 1153L) */ ((
			/* 634L, 233L, 239L, 773L, 786L, 1154L) */ ((
				/* 635L, 231L, 240L, 774L, 787L, 1155L) */ (max (
					/* 635L, 231L, 240L, 774L, 787L, 1155L) */ (
						var_1_14
					) , (
						var_1_21
					)
				))
			) >= (
				var_1_24
			))
		) ? (
			/* 639L, 249L, 778L, 791L, 1159L) */ ((
				var_1_26
			) == (
				/* 639L, 249L, 778L, 791L, 1159L) */ ((signed char) (
					/* 642L, 248L, 781L, 794L, 1162L) */ ((
						var_1_7
					) - (
						8
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 647L, 259L, 811L, 817L, 1167L) */ ((
		var_1_27
	) == (
		/* 647L, 259L, 811L, 817L, 1167L) */ ((unsigned short int) (
			var_1_6
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

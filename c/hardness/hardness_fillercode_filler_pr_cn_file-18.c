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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18Filler_PR_CN.c", 13, "reach_error"); }
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
signed char var_1_1 = -1;
float var_1_3 = 32.4;
float var_1_4 = 5.5;
float var_1_5 = 255.475;
unsigned char var_1_7 = 0;
signed char var_1_8 = -5;
signed char var_1_9 = 2;
unsigned char var_1_10 = 16;
unsigned char var_1_11 = 16;
float var_1_12 = 10000000.8;
float var_1_13 = 127.7;
float var_1_14 = 199.2;
float var_1_15 = 999999.5;
signed long int var_1_16 = -8;
signed long int var_1_17 = 32;
signed short int var_1_18 = -8;
double var_1_19 = 5.4;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed char var_1_22 = 1;
signed long int var_1_23 = -16;
signed long int var_1_24 = 16;
signed short int var_1_25 = 4;
signed long int var_1_26 = -100000;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned long int var_1_29 = 5;
signed short int var_1_30 = 256;
unsigned char var_1_31 = 2;
unsigned long int var_1_32 = 10;
unsigned char var_1_33 = 4;
double var_1_34 = 200.25;
double var_1_35 = 49.8;
signed long int var_1_36 = 32;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_16 = -8;
signed short int last_1_var_1_18 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch18Filler_PR_CN
	signed long int stepLocal_0 = last_1_var_1_16;
	/* 21L, 86L, 345L, 364L, 807L, 874L) */ if (/* 6L, 54L, 55L, 346L, 365L, 792L, 859L) */ ((var_1_9) < (stepLocal_0))) {
		/* 16L, 80L, 349L, 368L, 802L, 869L) */ if (/* 11L, 65L, 66L, 350L, 369L, 797L, 864L) */ ((/* 9L, 63L, 67L, 351L, 370L, 795L, 862L) */ ((var_1_4) - (var_1_5))) > (var_1_3))) {
			/* 15L, 79L, 355L, 374L, 801L, 868L) */ var_1_10 = (
				8
			);
		}
	} else {
		/* 20L, 85L, 359L, 378L, 806L, 873L) */ var_1_10 = (
			var_1_11
		);
	}


	// From: CodeObject2
	/* 79L) */ if (/* 61L, 60L) */ ((var_1_23) > (/* 63L, 59L) */ ((/* 64L, 57L) */ ((var_1_24) >> (var_1_25))) * (var_1_26))))) {
		/* 78L) */ var_1_22 = (
			var_1_25
		);
	}


	// From: CodeObject7
	/* 299L) */ if (var_1_20) {
		/* 298L) */ var_1_34 = (
			/* 297L) */ (min (
				/* 297L) */ (
					var_1_35
				) , (
					25.25
				)
			))
		);
	}


	// From: Req4Batch18Filler_PR_CN
	/* 898L, 143L, 501L, 517L) */ if (var_1_7) {
		/* 900L, 133L, 503L, 519L) */ var_1_16 = (
			var_1_8
		);
	} else {
		/* 904L, 142L, 507L, 523L) */ var_1_16 = (
			/* 907L, 141L, 510L, 526L) */ ((
				var_1_11
			) - (
				/* 909L, 140L, 512L, 528L) */ (abs (
					/* 910L, 139L, 513L, 529L) */ ((
						var_1_10
					) - (
						var_1_17
					))
				))
			))
		);
	}


	// From: Req5Batch18Filler_PR_CN
	signed long int stepLocal_1 = var_1_16;
	/* 946L, 198L, 565L, 597L) */ if (/* 920L, 153L, 154L, 566L, 598L) */ ((stepLocal_1) >= (/* 919L, 152L, 156L, 568L, 600L) */ ((var_1_16) + (var_1_17))))) {
		/* 941L, 192L, 571L, 603L) */ if (/* 923L, 166L, 167L, 572L, 604L) */ ((var_1_5) < (999.5f))) {
			/* 936L, 186L, 575L, 607L) */ if (var_1_7) {
				/* 931L, 181L, 577L, 609L) */ var_1_18 = (
					/* 930L, 180L, 580L, 612L) */ ((
						var_1_16
					) + (
						last_1_var_1_18
					))
				);
			} else {
				/* 935L, 185L, 584L, 616L) */ var_1_18 = (
					var_1_8
				);
			}
		} else {
			/* 940L, 191L, 588L, 620L) */ var_1_18 = (
				var_1_9
			);
		}
	} else {
		/* 945L, 197L, 592L, 624L) */ var_1_18 = (
			var_1_8
		);
	}


	// From: CodeObject5
	/* 223L) */ if (/* 181L, 180L) */ ((var_1_31) > (/* 183L, 179L) */ (min (/* 183L, 179L) */ (/* 184L, 177L) */ (~ (var_1_23))) , (var_1_26)))))) {
		/* 221L) */ if (/* 201L, 200L) */ ((/* 202L, 196L) */ ((var_1_29) % (var_1_31))) != (/* 205L, 199L) */ ((4164016188u) - (var_1_24))))) {
			/* 220L) */ var_1_32 = (
				/* 219L) */ ((
					4287938451u
				) - (
					var_1_25
				))
			);
		}
	}


	// From: Req6Batch18Filler_PR_CN
	signed long int stepLocal_2 = var_1_16;
	/* 974L, 241L, 693L, 717L) */ if (/* 956L, 207L, 208L, 694L, 718L) */ (! (/* 955L, 206L, 209L, 695L, 719L) */ ((var_1_18) > (var_1_16))))) {
		/* 966L, 225L, 698L, 722L) */ var_1_19 = (
			/* 965L, 224L, 701L, 725L) */ (max (
				/* 965L, 224L, 701L, 725L) */ (
					var_1_13
				) , (
					/* 964L, 223L, 703L, 727L) */ (min (
						/* 964L, 223L, 703L, 727L) */ (
							/* 962L, 221L, 704L, 728L) */ ((
								0.05
							) + (
								var_1_15
							))
						) , (
							var_1_14
						)
					))
				)
			))
		);
	} else {
		/* 973L, 239L, 708L, 732L) */ if (/* 968L, 228L, 229L, 709L, 733L) */ ((stepLocal_2) > (var_1_9))) {
			/* 972L, 238L, 712L, 736L) */ var_1_19 = (
				var_1_15
			);
		}
	}


	// From: CodeObject4
	/* 170L) */ if (/* 130L, 129L) */ ((64) >= (/* 132L, 128L) */ ((10) * (var_1_22))))) {
		/* 168L) */ if (/* 145L, 144L) */ ((var_1_25) <= (/* 147L, 143L) */ ((var_1_30) >> (var_1_31))))) {
			/* 162L) */ if (var_1_28) {
				/* 161L) */ var_1_29 = (
					var_1_24
				);
			}
		} else {
			/* 167L) */ var_1_29 = (
				var_1_24
			);
		}
	}


	// From: Req3Batch18Filler_PR_CN
	/* 879L, 119L, 422L, 442L) */ if (/* 880L, 96L, 97L, 423L, 443L) */ ((var_1_5) <= (/* 882L, 95L, 99L, 425L, 445L) */ ((var_1_19) / (var_1_3))))) {
		/* 885L, 114L, 428L, 448L) */ var_1_12 = (
			/* 888L, 113L, 431L, 451L) */ (max (
				/* 888L, 113L, 431L, 451L) */ (
					var_1_13
				) , (
					/* 890L, 112L, 433L, 453L) */ ((
						var_1_14
					) + (
						var_1_15
					))
				)
			))
		);
	} else {
		/* 893L, 118L, 436L, 456L) */ var_1_12 = (
			var_1_14
		);
	}


	// From: Req1Batch18Filler_PR_CN
	/* 829L, 46L, 245L, 270L) */ if (/* 830L, 10L, 11L, 246L, 271L) */ ((/* 831L, 4L, 12L, 247L, 272L) */ ((var_1_12) / (var_1_3))) > (/* 834L, 9L, 15L, 250L, 275L) */ ((/* 835L, 7L, 16L, 251L, 276L) */ ((var_1_4) - (var_1_5))) * (var_1_19))))) {
		/* 839L, 40L, 255L, 280L) */ if (var_1_7) {
			/* 841L, 35L, 257L, 282L) */ var_1_1 = (
				var_1_8
			);
		} else {
			/* 845L, 39L, 261L, 286L) */ var_1_1 = (
				var_1_9
			);
		}
	} else {
		/* 849L, 45L, 265L, 290L) */ var_1_1 = (
			var_1_8
		);
	}


	// From: CodeObject1
	/* 49L) */ var_1_20 = (
		var_1_21
	);


	// From: CodeObject3
	/* 121L) */ if (/* 88L, 87L) */ ((/* 89L, 85L) */ ((200) >> (16u))) >= (var_1_22))) {
		/* 119L) */ if (/* 103L, 102L) */ ((var_1_22) >= (/* 105L, 101L) */ ((var_1_24) + (var_1_25))))) {
			/* 118L) */ var_1_27 = (
				/* 117L) */ ((
					var_1_21
				) || (
					var_1_28
				))
			);
		}
	}


	// From: CodeObject6
	/* 286L) */ if (/* 232L, 231L) */ ((var_1_22) < (/* 234L, 230L) */ ((-100) / (var_1_31))))) {
		/* 280L) */ if (/* 245L, 244L) */ ((var_1_23) >= (var_1_26))) {
			/* 274L) */ if (/* 254L, 253L) */ ((var_1_21) || (var_1_27))) {
				/* 264L) */ var_1_33 = (
					/* 263L) */ (abs (
						var_1_31
					))
				);
			} else {
				/* 272L) */ if (var_1_28) {
					/* 271L) */ var_1_33 = (
						var_1_31
					);
				}
			}
		} else {
			/* 279L) */ var_1_33 = (
				var_1_31
			);
		}
	} else {
		/* 285L) */ var_1_33 = (
			var_1_25
		);
	}


	// From: CodeObject8
	/* 308L) */ var_1_36 = (
		var_1_31
	);
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 30);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 14);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 312L, 10L, 20L, 296L, 321L, 979L) */ ((/* 313L, 4L, 21L, 297L, 322L, 980L) */ ((var_1_12) / (var_1_3))) > (/* 316L, 9L, 24L, 300L, 325L, 983L) */ ((/* 317L, 7L, 25L, 301L, 326L, 984L) */ ((var_1_4) - (var_1_5))) * (var_1_19))))) {
		if (var_1_7) {
		} else {
		}
	} else {
	}
	if (/* 337L, 54L, 58L, 384L, 403L, 812L, 1004L, 27L) */ ((var_1_9) < (last_1_var_1_16))) {
		if (/* 342L, 65L, 71L, 388L, 407L, 817L, 1009L, 32L) */ ((/* 343L, 63L, 72L, 389L, 408L, 815L, 1010L, 30L) */ ((var_1_4) - (var_1_5))) > (var_1_3))) {
		}
	} else {
	}
	if (/* 358L, 96L, 102L, 463L, 483L, 1025L) */ ((var_1_5) <= (/* 360L, 95L, 104L, 465L, 485L, 1027L) */ ((var_1_19) / (var_1_3))))) {
	} else {
	}
	if (var_1_7) {
	} else {
	}
	if (/* 393L, 153L, 159L, 630L, 662L, 1060L) */ ((var_1_16) >= (/* 395L, 152L, 161L, 632L, 664L, 1062L) */ ((var_1_16) + (var_1_17))))) {
		if (/* 399L, 166L, 170L, 636L, 668L, 1066L) */ ((var_1_5) < (999.5f))) {
			if (var_1_7) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 425L, 207L, 212L, 742L, 766L, 1092L) */ (! (/* 426L, 206L, 213L, 743L, 767L, 1093L) */ ((var_1_18) > (var_1_16))))) {
	} else {
		if (/* 440L, 228L, 232L, 757L, 781L, 1107L) */ ((var_1_16) > (var_1_9))) {
		}
	}
	return /* 452L) */ ((
	/* 451L) */ ((
		/* 450L) */ ((
			/* 449L) */ ((
				/* 448L) */ ((
					/* 311L, 47L, 295L, 320L, 978L) */ ((
						/* 312L, 10L, 20L, 296L, 321L, 979L) */ ((
							/* 313L, 4L, 21L, 297L, 322L, 980L) */ ((
								var_1_12
							) / (
								var_1_3
							))
						) > (
							/* 316L, 9L, 24L, 300L, 325L, 983L) */ ((
								/* 317L, 7L, 25L, 301L, 326L, 984L) */ ((
									var_1_4
								) - (
									var_1_5
								))
							) * (
								var_1_19
							))
						))
					) ? (
						/* 321L, 41L, 305L, 330L, 988L) */ ((
							var_1_7
						) ? (
							/* 323L, 35L, 307L, 332L, 990L) */ ((
								var_1_1
							) == (
								/* 323L, 35L, 307L, 332L, 990L) */ ((signed char) (
									var_1_8
								))
							))
						) : (
							/* 327L, 39L, 311L, 336L, 994L) */ ((
								var_1_1
							) == (
								/* 327L, 39L, 311L, 336L, 994L) */ ((signed char) (
									var_1_9
								))
							))
						))
					) : (
						/* 331L, 45L, 315L, 340L, 998L) */ ((
							var_1_1
						) == (
							/* 331L, 45L, 315L, 340L, 998L) */ ((signed char) (
								var_1_8
							))
						))
					))
				) && (
					/* 336L, 87L, 383L, 402L, 827L, 1003L, 42L) */ ((
						/* 337L, 54L, 58L, 384L, 403L, 812L, 1004L, 27L) */ ((
							var_1_9
						) < (
							last_1_var_1_16
						))
					) ? (
						/* 341L, 81L, 387L, 406L, 822L, 1008L, 37L) */ ((
							/* 342L, 65L, 71L, 388L, 407L, 817L, 1009L, 32L) */ ((
								/* 343L, 63L, 72L, 389L, 408L, 815L, 1010L, 30L) */ ((
									var_1_4
								) - (
									var_1_5
								))
							) > (
								var_1_3
							))
						) ? (
							/* 347L, 79L, 393L, 412L, 821L, 1014L, 36L) */ ((
								var_1_10
							) == (
								/* 347L, 79L, 393L, 412L, 821L, 1014L, 36L) */ ((unsigned char) (
									8
								))
							))
						) : (
							1
						))
					) : (
						/* 351L, 85L, 397L, 416L, 826L, 1018L, 41L) */ ((
							var_1_10
						) == (
							/* 351L, 85L, 397L, 416L, 826L, 1018L, 41L) */ ((unsigned char) (
								var_1_11
							))
						))
					))
				))
			) && (
				/* 357L, 120L, 462L, 482L, 1024L) */ ((
					/* 358L, 96L, 102L, 463L, 483L, 1025L) */ ((
						var_1_5
					) <= (
						/* 360L, 95L, 104L, 465L, 485L, 1027L) */ ((
							var_1_19
						) / (
							var_1_3
						))
					))
				) ? (
					/* 363L, 114L, 468L, 488L, 1030L) */ ((
						var_1_12
					) == (
						/* 363L, 114L, 468L, 488L, 1030L) */ ((float) (
							/* 366L, 113L, 471L, 491L, 1033L) */ (max (
								/* 366L, 113L, 471L, 491L, 1033L) */ (
									var_1_13
								) , (
									/* 368L, 112L, 473L, 493L, 1035L) */ ((
										var_1_14
									) + (
										var_1_15
									))
								)
							))
						))
					))
				) : (
					/* 371L, 118L, 476L, 496L, 1038L) */ ((
						var_1_12
					) == (
						/* 371L, 118L, 476L, 496L, 1038L) */ ((float) (
							var_1_14
						))
					))
				))
			))
		) && (
			/* 376L, 144L, 533L, 549L, 1043L) */ ((
				var_1_7
			) ? (
				/* 378L, 133L, 535L, 551L, 1045L) */ ((
					var_1_16
				) == (
					/* 378L, 133L, 535L, 551L, 1045L) */ ((signed long int) (
						var_1_8
					))
				))
			) : (
				/* 382L, 142L, 539L, 555L, 1049L) */ ((
					var_1_16
				) == (
					/* 382L, 142L, 539L, 555L, 1049L) */ ((signed long int) (
						/* 385L, 141L, 542L, 558L, 1052L) */ ((
							var_1_11
						) - (
							/* 387L, 140L, 544L, 560L, 1054L) */ (abs (
								/* 388L, 139L, 545L, 561L, 1055L) */ ((
									var_1_10
								) - (
									var_1_17
								))
							))
						))
					))
				))
			))
		))
	) && (
		/* 392L, 199L, 629L, 661L, 1059L) */ ((
			/* 393L, 153L, 159L, 630L, 662L, 1060L) */ ((
				var_1_16
			) >= (
				/* 395L, 152L, 161L, 632L, 664L, 1062L) */ ((
					var_1_16
				) + (
					var_1_17
				))
			))
		) ? (
			/* 398L, 193L, 635L, 667L, 1065L) */ ((
				/* 399L, 166L, 170L, 636L, 668L, 1066L) */ ((
					var_1_5
				) < (
					999.5f
				))
			) ? (
				/* 402L, 187L, 639L, 671L, 1069L) */ ((
					var_1_7
				) ? (
					/* 404L, 181L, 641L, 673L, 1071L) */ ((
						var_1_18
					) == (
						/* 404L, 181L, 641L, 673L, 1071L) */ ((signed short int) (
							/* 407L, 180L, 644L, 676L, 1074L) */ ((
								var_1_16
							) + (
								last_1_var_1_18
							))
						))
					))
				) : (
					/* 411L, 185L, 648L, 680L, 1078L) */ ((
						var_1_18
					) == (
						/* 411L, 185L, 648L, 680L, 1078L) */ ((signed short int) (
							var_1_8
						))
					))
				))
			) : (
				/* 415L, 191L, 652L, 684L, 1082L) */ ((
					var_1_18
				) == (
					/* 415L, 191L, 652L, 684L, 1082L) */ ((signed short int) (
						var_1_9
					))
				))
			))
		) : (
			/* 419L, 197L, 656L, 688L, 1086L) */ ((
				var_1_18
			) == (
				/* 419L, 197L, 656L, 688L, 1086L) */ ((signed short int) (
					var_1_8
				))
			))
		))
	))
) && (
	/* 424L, 242L, 741L, 765L, 1091L) */ ((
		/* 425L, 207L, 212L, 742L, 766L, 1092L) */ (! (
			/* 426L, 206L, 213L, 743L, 767L, 1093L) */ ((
				var_1_18
			) > (
				var_1_16
			))
		))
	) ? (
		/* 429L, 225L, 746L, 770L, 1096L) */ ((
			var_1_19
		) == (
			/* 429L, 225L, 746L, 770L, 1096L) */ ((double) (
				/* 432L, 224L, 749L, 773L, 1099L) */ (max (
					/* 432L, 224L, 749L, 773L, 1099L) */ (
						var_1_13
					) , (
						/* 434L, 223L, 751L, 775L, 1101L) */ (min (
							/* 434L, 223L, 751L, 775L, 1101L) */ (
								/* 435L, 221L, 752L, 776L, 1102L) */ ((
									0.05
								) + (
									var_1_15
								))
							) , (
								var_1_14
							)
						))
					)
				))
			))
		))
	) : (
		/* 439L, 240L, 756L, 780L, 1106L) */ ((
			/* 440L, 228L, 232L, 757L, 781L, 1107L) */ ((
				var_1_16
			) > (
				var_1_9
			))
		) ? (
			/* 443L, 238L, 760L, 784L, 1110L) */ ((
				var_1_19
			) == (
				/* 443L, 238L, 760L, 784L, 1110L) */ ((double) (
					var_1_15
				))
			))
		) : (
			1
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

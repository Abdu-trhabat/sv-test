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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139Filler_PS_CI.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 128;
unsigned char var_1_2 = 1;
float var_1_4 = 5.6;
float var_1_5 = 2.1;
float var_1_6 = 9.625;
unsigned long int var_1_7 = 5;
unsigned long int var_1_8 = 0;
float var_1_9 = 100.5;
double var_1_10 = 16.524;
float var_1_11 = 4.5;
float var_1_12 = 256.5;
float var_1_13 = 256.25;
float var_1_14 = 8.5;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 16;
signed short int var_1_17 = 1;
signed long int var_1_18 = 10;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 10;
unsigned short int var_1_21 = 57151;
float var_1_22 = 9.375;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
signed long int var_1_26 = 10;
signed char var_1_27 = 16;
signed long int var_1_30 = 64;
signed long int var_1_31 = 128;
double var_1_32 = 255.5;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 50;
unsigned char var_1_35 = 8;
unsigned char var_1_36 = 16;
signed char var_1_37 = 50;
unsigned long int var_1_38 = 16;
unsigned long int var_1_39 = 0;
unsigned char var_1_40 = 128;
double var_1_41 = 999999.7;
unsigned char var_1_42 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_20 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 265L, 15L) */ if (/* 266L, 4L, 5L) */ ((var_1_23) || (var_1_24))) {
		/* 269L, 14L) */ var_1_22 = (
			var_1_12
		);
	}


	// From: CodeObject2
	/* 273L, 94L) */ if (/* 274L, 25L, 26L) */ ((/* 275L, 23L, 27L) */ ((/* 276L, 21L, 28L) */ (abs (var_1_16))) / (-5))) < (var_1_1))) {
		/* 280L, 92L) */ if (/* 281L, 44L, 45L) */ ((var_1_12) >= (/* 283L, 43L, 47L) */ (min (/* 283L, 43L, 47L) */ (var_1_5) , (/* 285L, 42L, 49L) */ (max (/* 285L, 42L, 49L) */ (var_1_9) , (5.75f))))))))) {
			/* 288L, 86L) */ if (/* 289L, 65L, 66L) */ ((/* 290L, 62L, 67L) */ (~ (/* 291L, 61L, 68L) */ ((var_1_1) / (var_1_30))))) >= (/* 294L, 64L, 71L) */ (~ (var_1_16))))) {
				/* 296L, 85L) */ var_1_26 = (
					/* 299L, 84L) */ (max (
						/* 299L, 84L) */ (
							var_1_16
						) , (
							var_1_31
						)
					))
				);
			}
		} else {
			/* 302L, 91L) */ var_1_26 = (
				var_1_31
			);
		}
	}


	// From: CodeObject3
	/* 307L, 101L) */ var_1_32 = (
		128.5
	);


	// From: CodeObject4
	/* 312L, 109L) */ var_1_33 = (
		var_1_16
	);


	// From: CodeObject5
	/* 328L, 134L) */ if (var_1_2) {
		/* 330L, 132L) */ if (/* 331L, 119L, 120L) */ ((var_1_1) > (var_1_31))) {
			/* 334L, 131L) */ var_1_34 = (
				/* 337L, 130L) */ (min (
					/* 337L, 130L) */ (
						var_1_27
					) , (
						var_1_35
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 340L, 199L) */ if (/* 341L, 150L, 151L) */ ((/* 342L, 144L, 152L) */ ((/* 343L, 140L, 153L) */ ((8) + (var_1_37))) << (/* 346L, 143L, 156L) */ ((var_1_38) - (var_1_39))))) < (/* 349L, 149L, 159L) */ (min (/* 349L, 149L, 159L) */ (/* 350L, 147L, 160L) */ ((var_1_31) & (var_1_30))) , (var_1_16)))))) {
		/* 354L, 197L) */ if (/* 355L, 179L, 180L) */ ((255.9) < (var_1_13))) {
			/* 358L, 196L) */ var_1_36 = (
				/* 361L, 195L) */ (abs (
					/* 362L, 194L) */ (max (
						/* 362L, 194L) */ (
							/* 363L, 190L) */ ((
								var_1_40
							) - (
								var_1_38
							))
						) , (
							/* 366L, 193L) */ ((
								var_1_37
							) + (
								var_1_16
							))
						)
					))
				))
			);
		}
	}


	// From: CodeObject7
	/* 396L, 251L) */ if (/* 397L, 205L, 206L) */ ((var_1_23) && (var_1_42))) {
		/* 400L, 234L) */ if (/* 401L, 217L, 218L) */ ((/* 402L, 213L, 219L) */ (~ (var_1_40))) > (/* 404L, 216L, 221L) */ ((var_1_16) - (var_1_7))))) {
			/* 407L, 233L) */ var_1_41 = (
				var_1_12
			);
		}
	} else {
		/* 411L, 249L) */ if (/* 412L, 238L, 239L) */ ((var_1_23) && (var_1_24))) {
			/* 415L, 248L) */ var_1_41 = (
				var_1_12
			);
		}
	}


	// From: Req2Batch139Filler_PS_CI
	/* 851L, 82L, 379L, 400L) */ if (/* 852L, 59L, 60L, 380L, 401L) */ ((var_1_10) <= (var_1_6))) {
		/* 855L, 75L, 383L, 404L) */ var_1_9 = (
			/* 858L, 74L, 386L, 407L) */ ((
				/* 859L, 72L, 387L, 408L) */ ((
					var_1_11
				) + (
					/* 861L, 71L, 389L, 410L) */ (max (
						/* 861L, 71L, 389L, 410L) */ (
							var_1_12
						) , (
							var_1_13
						)
					))
				))
			) - (
				var_1_14
			))
		);
	} else {
		/* 865L, 81L, 393L, 414L) */ var_1_9 = (
			/* 868L, 80L, 396L, 417L) */ (min (
				/* 868L, 80L, 396L, 417L) */ (
					var_1_14
				) , (
					var_1_13
				)
			))
		);
	}


	// From: Req3Batch139Filler_PS_CI
	/* 873L, 118L, 464L, 485L) */ if (/* 874L, 93L, 94L, 465L, 486L) */ ((var_1_10) == (/* 876L, 92L, 96L, 467L, 488L) */ (- (/* 877L, 91L, 97L, 468L, 489L) */ ((var_1_5) - (var_1_12))))))) {
		/* 880L, 113L, 471L, 492L) */ var_1_15 = (
			/* 883L, 112L, 474L, 495L) */ (max (
				/* 883L, 112L, 474L, 495L) */ (
					/* 884L, 110L, 475L, 496L) */ ((
						var_1_16
					) + (
						8
					))
				) , (
					50
				)
			))
		);
	} else {
		/* 888L, 117L, 479L, 500L) */ var_1_15 = (
			25
		);
	}


	// From: Req4Batch139Filler_PS_CI
	/* 897L, 151L, 551L, 568L) */ if (/* 898L, 132L, 133L, 552L, 569L) */ ((var_1_10) >= (/* 900L, 131L, 135L, 554L, 571L) */ ((/* 901L, 129L, 136L, 555L, 572L) */ ((var_1_5) + (var_1_4))) + (var_1_13))))) {
		/* 905L, 150L, 559L, 576L) */ var_1_17 = (
			var_1_16
		);
	}


	// From: Req5Batch139Filler_PS_CI
	unsigned char stepLocal_0 = var_1_15;
	/* 935L, 212L, 615L, 640L) */ if (var_1_2) {
		/* 917L, 171L, 617L, 642L) */ var_1_18 = (
			var_1_16
		);
	} else {
		/* 934L, 210L, 621L, 646L) */ if (/* 920L, 174L, 175L, 622L, 647L) */ ((var_1_10) == (var_1_12))) {
			/* 933L, 208L, 625L, 650L) */ if (/* 924L, 185L, 186L, 626L, 651L) */ ((stepLocal_0) <= (/* 923L, 184L, 188L, 628L, 653L) */ ((var_1_17) % (var_1_19))))) {
				/* 928L, 199L, 631L, 656L) */ var_1_18 = (
					var_1_19
				);
			} else {
				/* 932L, 207L, 635L, 660L) */ var_1_18 = (
					var_1_16
				);
			}
		}
	}


	// From: Req1Batch139Filler_PS_CI
	/* 824L, 49L, 268L, 296L) */ if (/* 825L, 11L, 12L, 269L, 297L) */ ((/* 826L, 7L, 13L, 270L, 298L) */ ((var_1_9) * (/* 828L, 6L, 15L, 272L, 300L) */ ((255.8f) / (var_1_4))))) >= (/* 831L, 10L, 18L, 275L, 303L) */ ((var_1_5) - (var_1_6))))) {
		/* 834L, 35L, 278L, 306L) */ var_1_1 = (
			/* 837L, 34L, 281L, 309L) */ (max (
				/* 837L, 34L, 281L, 309L) */ (
					var_1_7
				) , (
					var_1_8
				)
			))
		);
	} else {
		/* 840L, 47L, 284L, 312L) */ if (var_1_2) {
			/* 842L, 42L, 286L, 314L) */ var_1_1 = (
				var_1_7
			);
		} else {
			/* 846L, 46L, 290L, 318L) */ var_1_1 = (
				var_1_8
			);
		}
	}


	// From: Req6Batch139Filler_PS_CI
	/* 941L, 259L, 717L, 744L) */ if (/* 942L, 225L, 226L, 718L, 745L) */ ((/* 943L, 222L, 227L, 719L, 746L) */ (max (/* 943L, 222L, 227L, 719L, 746L) */ (var_1_7) , (/* 945L, 221L, 229L, 721L, 748L) */ ((var_1_21) - (last_1_var_1_20)))))) > (/* 949L, 224L, 232L, 725L, 752L) */ (abs (var_1_1))))) {
		/* 951L, 249L, 727L, 754L) */ var_1_20 = (
			/* 954L, 248L, 730L, 757L) */ (min (
				/* 954L, 248L, 730L, 757L) */ (
					var_1_16
				) , (
					/* 956L, 247L, 732L, 759L) */ (max (
						/* 956L, 247L, 732L, 759L) */ (
							1
						) , (
							5
						)
					))
				)
			))
		);
	} else {
		/* 959L, 257L, 735L, 762L) */ if (var_1_2) {
			/* 961L, 256L, 737L, 764L) */ var_1_20 = (
				var_1_16
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 255);
	assume_abort_if_not(var_1_19 != 0);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65535);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	assume_abort_if_not(var_1_30 != 0);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483647);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 12);
	assume_abort_if_not(var_1_38 <= 24);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 12);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 127);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 421L, 11L, 21L, 325L, 353L, 968L) */ ((/* 422L, 7L, 22L, 326L, 354L, 969L) */ ((var_1_9) * (/* 424L, 6L, 24L, 328L, 356L, 971L) */ ((255.8f) / (var_1_4))))) >= (/* 427L, 10L, 27L, 331L, 359L, 974L) */ ((var_1_5) - (var_1_6))))) {
	} else {
		if (var_1_2) {
		} else {
		}
	}
	if (/* 448L, 59L, 63L, 422L, 443L, 995L) */ ((var_1_10) <= (var_1_6))) {
	} else {
	}
	if (/* 470L, 93L, 100L, 507L, 528L, 1017L) */ ((var_1_10) == (/* 472L, 92L, 102L, 509L, 530L, 1019L) */ (- (/* 473L, 91L, 103L, 510L, 531L, 1020L) */ ((var_1_5) - (var_1_12))))))) {
	} else {
	}
	if (/* 494L, 132L, 140L, 586L, 603L, 1041L) */ ((var_1_10) >= (/* 496L, 131L, 142L, 588L, 605L, 1043L) */ ((/* 497L, 129L, 143L, 589L, 606L, 1044L) */ ((var_1_5) + (var_1_4))) + (var_1_13))))) {
	}
	if (var_1_2) {
	} else {
		if (/* 513L, 174L, 178L, 672L, 697L, 1060L) */ ((var_1_10) == (var_1_12))) {
			if (/* 517L, 185L, 191L, 676L, 701L, 1064L) */ ((var_1_15) <= (/* 519L, 184L, 193L, 678L, 703L, 1066L) */ ((var_1_17) % (var_1_19))))) {
			} else {
			}
		}
	}
	if (/* 534L, 225L, 234L, 772L, 799L, 1081L) */ ((/* 535L, 222L, 235L, 773L, 800L, 1082L) */ (max (/* 535L, 222L, 235L, 773L, 800L, 1082L) */ (var_1_7) , (/* 537L, 221L, 237L, 775L, 802L, 1084L) */ ((var_1_21) - (last_1_var_1_20)))))) > (/* 541L, 224L, 240L, 779L, 806L, 1088L) */ (abs (var_1_1))))) {
	} else {
		if (var_1_2) {
		}
	}
	return /* 562L) */ ((
	/* 561L) */ ((
		/* 560L) */ ((
			/* 559L) */ ((
				/* 558L) */ ((
					/* 420L, 50L, 324L, 352L, 967L) */ ((
						/* 421L, 11L, 21L, 325L, 353L, 968L) */ ((
							/* 422L, 7L, 22L, 326L, 354L, 969L) */ ((
								var_1_9
							) * (
								/* 424L, 6L, 24L, 328L, 356L, 971L) */ ((
									255.8f
								) / (
									var_1_4
								))
							))
						) >= (
							/* 427L, 10L, 27L, 331L, 359L, 974L) */ ((
								var_1_5
							) - (
								var_1_6
							))
						))
					) ? (
						/* 430L, 35L, 334L, 362L, 977L) */ ((
							var_1_1
						) == (
							/* 430L, 35L, 334L, 362L, 977L) */ ((unsigned long int) (
								/* 433L, 34L, 337L, 365L, 980L) */ (max (
									/* 433L, 34L, 337L, 365L, 980L) */ (
										var_1_7
									) , (
										var_1_8
									)
								))
							))
						))
					) : (
						/* 436L, 48L, 340L, 368L, 983L) */ ((
							var_1_2
						) ? (
							/* 438L, 42L, 342L, 370L, 985L) */ ((
								var_1_1
							) == (
								/* 438L, 42L, 342L, 370L, 985L) */ ((unsigned long int) (
									var_1_7
								))
							))
						) : (
							/* 442L, 46L, 346L, 374L, 989L) */ ((
								var_1_1
							) == (
								/* 442L, 46L, 346L, 374L, 989L) */ ((unsigned long int) (
									var_1_8
								))
							))
						))
					))
				) && (
					/* 447L, 83L, 421L, 442L, 994L) */ ((
						/* 448L, 59L, 63L, 422L, 443L, 995L) */ ((
							var_1_10
						) <= (
							var_1_6
						))
					) ? (
						/* 451L, 75L, 425L, 446L, 998L) */ ((
							var_1_9
						) == (
							/* 451L, 75L, 425L, 446L, 998L) */ ((float) (
								/* 454L, 74L, 428L, 449L, 1001L) */ ((
									/* 455L, 72L, 429L, 450L, 1002L) */ ((
										var_1_11
									) + (
										/* 457L, 71L, 431L, 452L, 1004L) */ (max (
											/* 457L, 71L, 431L, 452L, 1004L) */ (
												var_1_12
											) , (
												var_1_13
											)
										))
									))
								) - (
									var_1_14
								))
							))
						))
					) : (
						/* 461L, 81L, 435L, 456L, 1008L) */ ((
							var_1_9
						) == (
							/* 461L, 81L, 435L, 456L, 1008L) */ ((float) (
								/* 464L, 80L, 438L, 459L, 1011L) */ (min (
									/* 464L, 80L, 438L, 459L, 1011L) */ (
										var_1_14
									) , (
										var_1_13
									)
								))
							))
						))
					))
				))
			) && (
				/* 469L, 119L, 506L, 527L, 1016L) */ ((
					/* 470L, 93L, 100L, 507L, 528L, 1017L) */ ((
						var_1_10
					) == (
						/* 472L, 92L, 102L, 509L, 530L, 1019L) */ (- (
							/* 473L, 91L, 103L, 510L, 531L, 1020L) */ ((
								var_1_5
							) - (
								var_1_12
							))
						))
					))
				) ? (
					/* 476L, 113L, 513L, 534L, 1023L) */ ((
						var_1_15
					) == (
						/* 476L, 113L, 513L, 534L, 1023L) */ ((unsigned char) (
							/* 479L, 112L, 516L, 537L, 1026L) */ (max (
								/* 479L, 112L, 516L, 537L, 1026L) */ (
									/* 480L, 110L, 517L, 538L, 1027L) */ ((
										var_1_16
									) + (
										8
									))
								) , (
									50
								)
							))
						))
					))
				) : (
					/* 484L, 117L, 521L, 542L, 1031L) */ ((
						var_1_15
					) == (
						/* 484L, 117L, 521L, 542L, 1031L) */ ((unsigned char) (
							25
						))
					))
				))
			))
		) && (
			/* 493L, 152L, 585L, 602L, 1040L) */ ((
				/* 494L, 132L, 140L, 586L, 603L, 1041L) */ ((
					var_1_10
				) >= (
					/* 496L, 131L, 142L, 588L, 605L, 1043L) */ ((
						/* 497L, 129L, 143L, 589L, 606L, 1044L) */ ((
							var_1_5
						) + (
							var_1_4
						))
					) + (
						var_1_13
					))
				))
			) ? (
				/* 501L, 150L, 593L, 610L, 1048L) */ ((
					var_1_17
				) == (
					/* 501L, 150L, 593L, 610L, 1048L) */ ((signed short int) (
						var_1_16
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 506L, 213L, 665L, 690L, 1053L) */ ((
			var_1_2
		) ? (
			/* 508L, 171L, 667L, 692L, 1055L) */ ((
				var_1_18
			) == (
				/* 508L, 171L, 667L, 692L, 1055L) */ ((signed long int) (
					var_1_16
				))
			))
		) : (
			/* 512L, 211L, 671L, 696L, 1059L) */ ((
				/* 513L, 174L, 178L, 672L, 697L, 1060L) */ ((
					var_1_10
				) == (
					var_1_12
				))
			) ? (
				/* 516L, 209L, 675L, 700L, 1063L) */ ((
					/* 517L, 185L, 191L, 676L, 701L, 1064L) */ ((
						var_1_15
					) <= (
						/* 519L, 184L, 193L, 678L, 703L, 1066L) */ ((
							var_1_17
						) % (
							var_1_19
						))
					))
				) ? (
					/* 522L, 199L, 681L, 706L, 1069L) */ ((
						var_1_18
					) == (
						/* 522L, 199L, 681L, 706L, 1069L) */ ((signed long int) (
							var_1_19
						))
					))
				) : (
					/* 526L, 207L, 685L, 710L, 1073L) */ ((
						var_1_18
					) == (
						/* 526L, 207L, 685L, 710L, 1073L) */ ((signed long int) (
							var_1_16
						))
					))
				))
			) : (
				1
			))
		))
	))
) && (
	/* 533L, 260L, 771L, 798L, 1080L) */ ((
		/* 534L, 225L, 234L, 772L, 799L, 1081L) */ ((
			/* 535L, 222L, 235L, 773L, 800L, 1082L) */ (max (
				/* 535L, 222L, 235L, 773L, 800L, 1082L) */ (
					var_1_7
				) , (
					/* 537L, 221L, 237L, 775L, 802L, 1084L) */ ((
						var_1_21
					) - (
						last_1_var_1_20
					))
				)
			))
		) > (
			/* 541L, 224L, 240L, 779L, 806L, 1088L) */ (abs (
				var_1_1
			))
		))
	) ? (
		/* 543L, 249L, 781L, 808L, 1090L) */ ((
			var_1_20
		) == (
			/* 543L, 249L, 781L, 808L, 1090L) */ ((unsigned char) (
				/* 546L, 248L, 784L, 811L, 1093L) */ (min (
					/* 546L, 248L, 784L, 811L, 1093L) */ (
						var_1_16
					) , (
						/* 548L, 247L, 786L, 813L, 1095L) */ (max (
							/* 548L, 247L, 786L, 813L, 1095L) */ (
								1
							) , (
								5
							)
						))
					)
				))
			))
		))
	) : (
		/* 551L, 258L, 789L, 816L, 1098L) */ ((
			var_1_2
		) ? (
			/* 553L, 256L, 791L, 818L, 1100L) */ ((
				var_1_20
			) == (
				/* 553L, 256L, 791L, 818L, 1100L) */ ((unsigned char) (
					var_1_16
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

// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch150Filler_PS_CI.c", 13, "reach_error"); }
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
double var_1_1 = 0.8;
double var_1_2 = 8.2;
double var_1_3 = 100000000000.5;
double var_1_4 = 63.2;
double var_1_5 = 0.2;
double var_1_6 = 127.5;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
signed short int var_1_12 = 10;
signed long int var_1_16 = -500;
float var_1_17 = 8.25;
unsigned char var_1_19 = 32;
signed long int var_1_21 = 1148353404;
unsigned char var_1_22 = 100;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 8;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 50;
float var_1_27 = 99.6;
unsigned long int var_1_28 = 64;
unsigned long int var_1_29 = 3474601576;
double var_1_30 = 63.2;
signed char var_1_37 = -1;
signed char var_1_38 = 0;
signed char var_1_39 = 2;
signed char var_1_40 = 1;
signed char var_1_41 = -10;
signed char var_1_42 = 8;
unsigned long int var_1_43 = 256;
unsigned char var_1_44 = 1;
signed short int var_1_45 = 128;
signed long int var_1_47 = 8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 224L, 41L) */ if (var_1_11) {
		/* 226L, 35L) */ if (/* 227L, 7L, 8L) */ ((var_1_23) > (var_1_28))) {
			/* 230L, 33L) */ if (var_1_9) {
				/* 232L, 22L) */ var_1_30 = (
					/* 235L, 21L) */ ((
						var_1_5
					) + (
						var_1_6
					))
				);
			} else {
				/* 238L, 32L) */ var_1_30 = (
					var_1_6
				);
			}
		}
	} else {
		/* 242L, 40L) */ var_1_30 = (
			var_1_6
		);
	}


	// From: CodeObject2
	/* 299L, 131L) */ if (/* 300L, 47L, 48L) */ ((var_1_3) < (var_1_6))) {
		/* 303L, 116L) */ if (/* 304L, 56L, 57L) */ ((var_1_19) < (var_1_28))) {
			/* 307L, 70L) */ var_1_37 = (
				/* 310L, 69L) */ ((
					/* 311L, 67L) */ ((
						var_1_38
					) - (
						var_1_39
					))
				) + (
					var_1_40
				))
			);
		} else {
			/* 315L, 114L) */ if (/* 316L, 73L, 74L) */ ((var_1_6) <= (var_1_3))) {
				/* 319L, 87L) */ var_1_37 = (
					/* 322L, 86L) */ (max (
						/* 322L, 86L) */ (
							/* 323L, 84L) */ (max (
								/* 323L, 84L) */ (
									var_1_38
								) , (
									var_1_39
								)
							))
						) , (
							var_1_40
						)
					))
				);
			} else {
				/* 327L, 112L) */ if (/* 328L, 92L, 93L) */ ((var_1_38) > (/* 330L, 91L, 95L) */ ((var_1_40) | (var_1_28))))) {
					/* 333L, 111L) */ var_1_37 = (
						/* 336L, 110L) */ ((
							var_1_40
						) + (
							/* 338L, 109L) */ ((
								/* 339L, 107L) */ (abs (
									var_1_41
								))
							) + (
								var_1_42
							))
						))
					);
				}
			}
		}
	} else {
		/* 342L, 129L) */ if (var_1_7) {
			/* 344L, 124L) */ var_1_37 = (
				var_1_38
			);
		} else {
			/* 348L, 128L) */ var_1_37 = (
				var_1_40
			);
		}
	}


	// From: CodeObject3
	/* 353L, 138L) */ var_1_43 = (
		var_1_38
	);


	// From: CodeObject4
	/* 358L, 146L) */ var_1_44 = (
		var_1_39
	);


	// From: CodeObject5
	/* 362L, 196L) */ if (/* 363L, 157L, 158L) */ ((/* 364L, 155L, 159L) */ ((var_1_6) + (/* 366L, 154L, 161L) */ (min (/* 366L, 154L, 161L) */ (var_1_3) , (63.5)))))) > (var_1_5))) {
		/* 370L, 177L) */ var_1_45 = (
			/* 373L, 176L) */ (abs (
				/* 374L, 175L) */ (abs (
					var_1_29
				))
			))
		);
	} else {
		/* 376L, 194L) */ if (/* 377L, 180L, 181L) */ ((var_1_9) || (var_1_11))) {
			/* 380L, 193L) */ var_1_45 = (
				/* 383L, 192L) */ ((
					var_1_40
				) + (
					/* 385L, 191L) */ (abs (
						var_1_38
					))
				))
			);
		}
	}


	// From: CodeObject6
	/* 387L, 222L) */ if (/* 388L, 202L, 203L) */ ((var_1_39) >= (var_1_29))) {
		/* 391L, 217L) */ var_1_47 = (
			/* 394L, 216L) */ ((
				var_1_40
			) + (
				/* 396L, 215L) */ (abs (
					/* 397L, 214L) */ (max (
						/* 397L, 214L) */ (
							var_1_29
						) , (
							var_1_39
						)
					))
				))
			))
		);
	} else {
		/* 400L, 221L) */ var_1_47 = (
			var_1_24
		);
	}


	// From: Req1Batch150Filler_PS_CI
	/* 800L, 23L, 276L, 290L) */ if (/* 801L, 6L, 7L, 277L, 291L) */ ((var_1_2) < (/* 803L, 5L, 9L, 279L, 293L) */ ((var_1_3) - (var_1_4))))) {
		/* 806L, 22L, 282L, 296L) */ var_1_1 = (
			/* 809L, 21L, 285L, 299L) */ ((
				var_1_5
			) + (
				var_1_6
			))
		);
	}


	// From: Req2Batch150Filler_PS_CI
	/* 814L, 45L, 332L, 347L) */ if (var_1_8) {
		/* 816L, 39L, 334L, 349L) */ var_1_7 = (
			/* 819L, 38L, 337L, 352L) */ ((
				var_1_9
			) && (
				var_1_10
			))
		);
	} else {
		/* 822L, 44L, 340L, 355L) */ var_1_7 = (
			/* 825L, 43L, 343L, 358L) */ (! (
				var_1_11
			))
		);
	}


	// From: Req6Batch150Filler_PS_CI
	/* 894L, 216L, 623L, 640L) */ if (/* 895L, 196L, 197L, 624L, 641L) */ ((var_1_5) >= (/* 897L, 195L, 199L, 626L, 643L) */ (abs (var_1_1))))) {
		/* 899L, 208L, 628L, 645L) */ var_1_24 = (
			var_1_22
		);
	} else {
		/* 903L, 215L, 632L, 649L) */ var_1_24 = (
			/* 906L, 214L, 635L, 652L) */ (abs (
				/* 907L, 213L, 636L, 653L) */ ((
					var_1_25
				) - (
					var_1_26
				))
			))
		);
	}


	// From: Req8Batch150Filler_PS_CI
	/* 931L, 269L, 752L, 764L) */ if (var_1_7) {
		/* 933L, 267L, 754L, 766L) */ if (var_1_7) {
			/* 935L, 266L, 756L, 768L) */ var_1_28 = (
				/* 938L, 265L, 759L, 771L) */ ((
					var_1_29
				) - (
					var_1_25
				))
			);
		}
	}


	// From: Req4Batch150Filler_PS_CI
	/* 845L, 115L, 443L, 458L) */ if (/* 846L, 92L, 93L, 444L, 459L) */ ((/* 847L, 86L, 94L, 445L, 460L) */ ((var_1_3) / (var_1_17))) >= (/* 850L, 91L, 97L, 448L, 463L) */ ((/* 851L, 89L, 98L, 449L, 464L) */ ((var_1_1) / (16.69))) * (var_1_1))))) {
		/* 855L, 114L, 453L, 468L) */ var_1_16 = (
			var_1_28
		);
	}


	// From: Req5Batch150Filler_PS_CI
	unsigned long int stepLocal_1 = var_1_28;
	/* 890L, 187L, 503L, 533L) */ if (/* 866L, 124L, 125L, 504L, 534L) */ ((/* 864L, 122L, 126L, 505L, 535L) */ (- (var_1_6))) > (var_1_3))) {
		/* 889L, 185L, 508L, 538L) */ if (/* 874L, 149L, 150L, 509L, 539L) */ ((stepLocal_1) > (/* 873L, 148L, 152L, 511L, 541L) */ ((/* 869L, 144L, 153L, 512L, 542L) */ ((var_1_24) * (var_1_28))) * (/* 872L, 147L, 156L, 515L, 545L) */ ((var_1_21) - (var_1_28))))))) {
			/* 884L, 179L, 518L, 548L) */ if (var_1_11) {
				/* 879L, 174L, 520L, 550L) */ var_1_19 = (
					var_1_22
				);
			} else {
				/* 883L, 178L, 524L, 554L) */ var_1_19 = (
					128
				);
			}
		} else {
			/* 888L, 184L, 528L, 558L) */ var_1_19 = (
				var_1_23
			);
		}
	}


	// From: Req3Batch150Filler_PS_CI
	signed long int stepLocal_0 = /* 829L, 57L, 61L, 393L, 406L) */ ((/* 830L, 55L, 62L, 394L, 407L) */ ((var_1_19) + (200))) & (var_1_24));
	/* 841L, 78L, 391L, 404L) */ if (/* 836L, 59L, 60L, 392L, 405L) */ ((stepLocal_0) != (var_1_28))) {
		/* 840L, 77L, 399L, 412L) */ var_1_12 = (
			var_1_24
		);
	}


	// From: Req7Batch150Filler_PS_CI
	signed short int stepLocal_2 = var_1_12;
	/* 926L, 249L, 691L, 706L) */ if (/* 919L, 228L, 229L, 692L, 707L) */ ((stepLocal_2) < (/* 918L, 227L, 231L, 694L, 709L) */ ((var_1_25) ^ (/* 917L, 226L, 233L, 696L, 711L) */ ((var_1_24) % (1))))))) {
		/* 925L, 248L, 699L, 714L) */ var_1_27 = (
			/* 924L, 247L, 702L, 717L) */ (min (
				/* 924L, 247L, 702L, 717L) */ (
					var_1_5
				) , (
					var_1_6
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 127);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 2147483647);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -32);
	assume_abort_if_not(var_1_41 <= 32);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -31);
	assume_abort_if_not(var_1_42 <= 31);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 406L, 6L, 12L, 305L, 319L, 944L) */ ((var_1_2) < (/* 408L, 5L, 14L, 307L, 321L, 946L) */ ((var_1_3) - (var_1_4))))) {
	}
	if (var_1_8) {
	} else {
	}
	if (/* 434L, 59L, 67L, 418L, 431L, 972L) */ ((/* 435L, 57L, 68L, 419L, 432L, 973L) */ ((/* 436L, 55L, 69L, 420L, 433L, 974L) */ ((var_1_19) + (200))) & (var_1_24))) != (var_1_28))) {
	}
	if (/* 447L, 92L, 102L, 474L, 489L, 985L) */ ((/* 448L, 86L, 103L, 475L, 490L, 986L) */ ((var_1_3) / (var_1_17))) >= (/* 451L, 91L, 106L, 478L, 493L, 989L) */ ((/* 452L, 89L, 107L, 479L, 494L, 990L) */ ((var_1_1) / (16.69))) * (var_1_1))))) {
	}
	if (/* 462L, 124L, 129L, 564L, 594L, 1000L) */ ((/* 463L, 122L, 130L, 565L, 595L, 1001L) */ (- (var_1_6))) > (var_1_3))) {
		if (/* 467L, 149L, 159L, 569L, 599L, 1005L) */ ((var_1_28) > (/* 469L, 148L, 161L, 571L, 601L, 1007L) */ ((/* 470L, 144L, 162L, 572L, 602L, 1008L) */ ((var_1_24) * (var_1_28))) * (/* 473L, 147L, 165L, 575L, 605L, 1011L) */ ((var_1_21) - (var_1_28))))))) {
			if (var_1_11) {
			} else {
			}
		} else {
		}
	}
	if (/* 492L, 196L, 201L, 658L, 675L, 1030L) */ ((var_1_5) >= (/* 494L, 195L, 203L, 660L, 677L, 1032L) */ (abs (var_1_1))))) {
	} else {
	}
	if (/* 509L, 228L, 236L, 722L, 737L, 1047L) */ ((var_1_12) < (/* 511L, 227L, 238L, 724L, 739L, 1049L) */ ((var_1_25) ^ (/* 513L, 226L, 240L, 726L, 741L, 1051L) */ ((var_1_24) % (1))))))) {
	}
	if (var_1_7) {
		if (var_1_7) {
		}
	}
	return /* 541L) */ ((
	/* 540L) */ ((
		/* 539L) */ ((
			/* 538L) */ ((
				/* 537L) */ ((
					/* 536L) */ ((
						/* 535L) */ ((
							/* 405L, 24L, 304L, 318L, 943L) */ ((
								/* 406L, 6L, 12L, 305L, 319L, 944L) */ ((
									var_1_2
								) < (
									/* 408L, 5L, 14L, 307L, 321L, 946L) */ ((
										var_1_3
									) - (
										var_1_4
									))
								))
							) ? (
								/* 411L, 22L, 310L, 324L, 949L) */ ((
									var_1_1
								) == (
									/* 411L, 22L, 310L, 324L, 949L) */ ((double) (
										/* 414L, 21L, 313L, 327L, 952L) */ ((
											var_1_5
										) + (
											var_1_6
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 419L, 46L, 362L, 377L, 957L) */ ((
								var_1_8
							) ? (
								/* 421L, 39L, 364L, 379L, 959L) */ ((
									var_1_7
								) == (
									/* 421L, 39L, 364L, 379L, 959L) */ ((unsigned char) (
										/* 424L, 38L, 367L, 382L, 962L) */ ((
											var_1_9
										) && (
											var_1_10
										))
									))
								))
							) : (
								/* 427L, 44L, 370L, 385L, 965L) */ ((
									var_1_7
								) == (
									/* 427L, 44L, 370L, 385L, 965L) */ ((unsigned char) (
										/* 430L, 43L, 373L, 388L, 968L) */ (! (
											var_1_11
										))
									))
								))
							))
						))
					) && (
						/* 433L, 79L, 417L, 430L, 971L) */ ((
							/* 434L, 59L, 67L, 418L, 431L, 972L) */ ((
								/* 435L, 57L, 68L, 419L, 432L, 973L) */ ((
									/* 436L, 55L, 69L, 420L, 433L, 974L) */ ((
										var_1_19
									) + (
										200
									))
								) & (
									var_1_24
								))
							) != (
								var_1_28
							))
						) ? (
							/* 441L, 77L, 425L, 438L, 979L) */ ((
								var_1_12
							) == (
								/* 441L, 77L, 425L, 438L, 979L) */ ((signed short int) (
									var_1_24
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 446L, 116L, 473L, 488L, 984L) */ ((
						/* 447L, 92L, 102L, 474L, 489L, 985L) */ ((
							/* 448L, 86L, 103L, 475L, 490L, 986L) */ ((
								var_1_3
							) / (
								var_1_17
							))
						) >= (
							/* 451L, 91L, 106L, 478L, 493L, 989L) */ ((
								/* 452L, 89L, 107L, 479L, 494L, 990L) */ ((
									var_1_1
								) / (
									16.69
								))
							) * (
								var_1_1
							))
						))
					) ? (
						/* 456L, 114L, 483L, 498L, 994L) */ ((
							var_1_16
						) == (
							/* 456L, 114L, 483L, 498L, 994L) */ ((signed long int) (
								var_1_28
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 461L, 188L, 563L, 593L, 999L) */ ((
					/* 462L, 124L, 129L, 564L, 594L, 1000L) */ ((
						/* 463L, 122L, 130L, 565L, 595L, 1001L) */ (- (
							var_1_6
						))
					) > (
						var_1_3
					))
				) ? (
					/* 466L, 186L, 568L, 598L, 1004L) */ ((
						/* 467L, 149L, 159L, 569L, 599L, 1005L) */ ((
							var_1_28
						) > (
							/* 469L, 148L, 161L, 571L, 601L, 1007L) */ ((
								/* 470L, 144L, 162L, 572L, 602L, 1008L) */ ((
									var_1_24
								) * (
									var_1_28
								))
							) * (
								/* 473L, 147L, 165L, 575L, 605L, 1011L) */ ((
									var_1_21
								) - (
									var_1_28
								))
							))
						))
					) ? (
						/* 476L, 180L, 578L, 608L, 1014L) */ ((
							var_1_11
						) ? (
							/* 478L, 174L, 580L, 610L, 1016L) */ ((
								var_1_19
							) == (
								/* 478L, 174L, 580L, 610L, 1016L) */ ((unsigned char) (
									var_1_22
								))
							))
						) : (
							/* 482L, 178L, 584L, 614L, 1020L) */ ((
								var_1_19
							) == (
								/* 482L, 178L, 584L, 614L, 1020L) */ ((unsigned char) (
									128
								))
							))
						))
					) : (
						/* 486L, 184L, 588L, 618L, 1024L) */ ((
							var_1_19
						) == (
							/* 486L, 184L, 588L, 618L, 1024L) */ ((unsigned char) (
								var_1_23
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 491L, 217L, 657L, 674L, 1029L) */ ((
				/* 492L, 196L, 201L, 658L, 675L, 1030L) */ ((
					var_1_5
				) >= (
					/* 494L, 195L, 203L, 660L, 677L, 1032L) */ (abs (
						var_1_1
					))
				))
			) ? (
				/* 496L, 208L, 662L, 679L, 1034L) */ ((
					var_1_24
				) == (
					/* 496L, 208L, 662L, 679L, 1034L) */ ((unsigned char) (
						var_1_22
					))
				))
			) : (
				/* 500L, 215L, 666L, 683L, 1038L) */ ((
					var_1_24
				) == (
					/* 500L, 215L, 666L, 683L, 1038L) */ ((unsigned char) (
						/* 503L, 214L, 669L, 686L, 1041L) */ (abs (
							/* 504L, 213L, 670L, 687L, 1042L) */ ((
								var_1_25
							) - (
								var_1_26
							))
						))
					))
				))
			))
		))
	) && (
		/* 508L, 250L, 721L, 736L, 1046L) */ ((
			/* 509L, 228L, 236L, 722L, 737L, 1047L) */ ((
				var_1_12
			) < (
				/* 511L, 227L, 238L, 724L, 739L, 1049L) */ ((
					var_1_25
				) ^ (
					/* 513L, 226L, 240L, 726L, 741L, 1051L) */ ((
						var_1_24
					) % (
						1
					))
				))
			))
		) ? (
			/* 516L, 248L, 729L, 744L, 1054L) */ ((
				var_1_27
			) == (
				/* 516L, 248L, 729L, 744L, 1054L) */ ((float) (
					/* 519L, 247L, 732L, 747L, 1057L) */ (min (
						/* 519L, 247L, 732L, 747L, 1057L) */ (
							var_1_5
						) , (
							var_1_6
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 524L, 270L, 776L, 788L, 1062L) */ ((
		var_1_7
	) ? (
		/* 526L, 268L, 778L, 790L, 1064L) */ ((
			var_1_7
		) ? (
			/* 528L, 266L, 780L, 792L, 1066L) */ ((
				var_1_28
			) == (
				/* 528L, 266L, 780L, 792L, 1066L) */ ((unsigned long int) (
					/* 531L, 265L, 783L, 795L, 1069L) */ ((
						var_1_29
					) - (
						var_1_25
					))
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch25Filler_PE_CI.c", 13, "reach_error"); }
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
signed long int var_1_1 = -256;
unsigned char var_1_2 = 1;
signed long int var_1_5 = -256;
unsigned short int var_1_6 = 50;
signed long int var_1_7 = 200;
unsigned short int var_1_8 = 64852;
unsigned short int var_1_9 = 5;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed char var_1_15 = -1;
unsigned char var_1_16 = 64;
signed char var_1_17 = 0;
signed char var_1_18 = 0;
signed char var_1_19 = 1;
signed char var_1_20 = 4;
unsigned char var_1_21 = 1;
float var_1_22 = 127.5;
signed short int var_1_23 = -2;
signed char var_1_24 = 32;
unsigned long int var_1_25 = 16;
unsigned long int var_1_27 = 64;
unsigned long int var_1_28 = 4;
double var_1_29 = 15.5;
double var_1_30 = 256.7;
unsigned long int var_1_31 = 5;
signed long int var_1_33 = 32;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 5;
unsigned long int var_1_37 = 64;
unsigned long int var_1_39 = 0;
unsigned long int var_1_40 = 4081086727;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_6 = 50;
unsigned char last_1_var_1_10 = 1;
unsigned char last_1_var_1_21 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch25Filler_PE_CI
	unsigned char stepLocal_1 = /* 5L, 5L, 9L, 255L, 280L, 836L, 896L) */ ((last_1_var_1_21) >= (last_1_var_1_6));
	signed long int stepLocal_0 = 256;
	/* 36L, 47L, 252L, 277L, 859L, 925L) */ if (/* 14L, 6L, 7L, 253L, 278L, 837L, 904L) */ ((last_1_var_1_10) && (stepLocal_1))) {
		/* 31L, 41L, 258L, 283L, 854L, 920L) */ if (/* 21L, 22L, 23L, 259L, 284L, 844L, 910L) */ ((stepLocal_0) != (/* 20L, 21L, 25L, 261L, 286L, 843L, 909L) */ ((last_1_var_1_6) + (last_1_var_1_21))))) {
			/* 30L, 40L, 264L, 289L, 853L, 919L) */ var_1_1 = (
				/* 29L, 39L, 267L, 292L, 852L, 918L) */ (max (
					/* 29L, 39L, 267L, 292L, 852L, 918L) */ (
						/* 26L, 37L, 268L, 293L, 849L, 915L) */ ((
							var_1_5
						) + (
							-25
						))
					) , (
						last_1_var_1_6
					)
				))
			);
		}
	} else {
		/* 35L, 46L, 272L, 297L, 858L, 924L) */ var_1_1 = (
			-100
		);
	}


	// From: Req3Batch25Filler_PE_CI
	unsigned char stepLocal_2 = var_1_11;
	/* 973L, 114L, 498L, 516L) */ if (/* 959L, 94L, 95L, 499L, 517L) */ ((var_1_2) || (stepLocal_2))) {
		/* 967L, 108L, 502L, 520L) */ var_1_10 = (
			/* 966L, 107L, 505L, 523L) */ (! (
				/* 965L, 106L, 506L, 524L) */ (! (
					/* 964L, 105L, 507L, 525L) */ ((
						var_1_12
					) && (
						var_1_13
					))
				))
			))
		);
	} else {
		/* 972L, 113L, 510L, 528L) */ var_1_10 = (
			/* 971L, 112L, 513L, 531L) */ (! (
				var_1_14
			))
		);
	}


	// From: Req5Batch25Filler_PE_CI
	/* 1008L, 198L, 688L, 703L) */ if (/* 1009L, 179L, 180L, 689L, 704L) */ ((16.5f) > (/* 1011L, 178L, 182L, 691L, 706L) */ (max (/* 1011L, 178L, 182L, 691L, 706L) */ (/* 1012L, 176L, 183L, 692L, 707L) */ ((1.75f) * (var_1_22))) , (15.375f)))))) {
		/* 1016L, 197L, 696L, 711L) */ var_1_21 = (
			var_1_20
		);
	}


	// From: Req6Batch25Filler_PE_CI
	signed long int stepLocal_4 = /* 1025L, 222L, 226L, 753L, 774L) */ ((/* 1026L, 220L, 227L, 754L, 775L) */ ((var_1_20) - (var_1_24))) * (var_1_1));
	unsigned char stepLocal_3 = var_1_12;
	/* 1044L, 248L, 746L, 767L) */ if (/* 1032L, 210L, 211L, 747L, 768L) */ ((var_1_10) || (stepLocal_3))) {
		/* 1043L, 246L, 750L, 771L) */ if (/* 1034L, 223L, 224L, 751L, 772L) */ ((var_1_18) > (stepLocal_4))) {
			/* 1038L, 241L, 758L, 779L) */ var_1_23 = (
				var_1_1
			);
		} else {
			/* 1042L, 245L, 762L, 783L) */ var_1_23 = (
				var_1_21
			);
		}
	}


	// From: Req2Batch25Filler_PE_CI
	/* 932L, 82L, 400L, 425L) */ if (/* 933L, 57L, 58L, 401L, 426L) */ ((var_1_5) != (/* 935L, 56L, 60L, 403L, 428L) */ ((var_1_7) | (last_1_var_1_6))))) {
		/* 939L, 77L, 407L, 432L) */ var_1_6 = (
			/* 942L, 76L, 410L, 435L) */ (min (
				/* 942L, 76L, 410L, 435L) */ (
					/* 943L, 74L, 411L, 436L) */ ((
						var_1_8
					) - (
						/* 945L, 73L, 413L, 438L) */ (max (
							/* 945L, 73L, 413L, 438L) */ (
								var_1_23
							) , (
								last_1_var_1_6
							)
						))
					))
				) , (
					var_1_9
				)
			))
		);
	} else {
		/* 950L, 81L, 418L, 443L) */ var_1_6 = (
			var_1_9
		);
	}


	// From: Req4Batch25Filler_PE_CI
	/* 979L, 163L, 572L, 601L) */ if (/* 980L, 122L, 123L, 573L, 602L) */ ((var_1_5) > (var_1_23))) {
		/* 983L, 161L, 576L, 605L) */ if (/* 984L, 134L, 135L, 577L, 606L) */ ((var_1_23) < (/* 986L, 133L, 137L, 579L, 608L) */ ((4) / (var_1_16))))) {
			/* 989L, 150L, 582L, 611L) */ var_1_15 = (
				/* 992L, 149L, 585L, 614L) */ ((
					var_1_17
				) - (
					var_1_18
				))
			);
		} else {
			/* 995L, 160L, 588L, 617L) */ var_1_15 = (
				/* 998L, 159L, 591L, 620L) */ ((
					/* 999L, 157L, 592L, 621L) */ (min (
						/* 999L, 157L, 592L, 621L) */ (
							var_1_18
						) , (
							/* 1001L, 156L, 594L, 623L) */ (min (
								/* 1001L, 156L, 594L, 623L) */ (
									var_1_17
								) , (
									var_1_19
								)
							))
						)
					))
				) - (
					var_1_20
				))
			);
		}
	}


	// From: CodeObject1
	/* 334L, 82L) */ if (var_1_10) {
		/* 336L, 81L) */ var_1_25 = (
			/* 339L, 80L) */ (abs (
				/* 340L, 79L) */ ((
					var_1_27
				) + (
					var_1_28
				))
			))
		);
	}


	// From: CodeObject2
	/* 343L, 149L) */ if (/* 344L, 91L, 92L) */ ((var_1_27) < (var_1_28))) {
		/* 347L, 118L) */ if (/* 348L, 102L, 103L) */ ((var_1_28) < (/* 350L, 101L, 105L) */ ((var_1_27) ^ (var_1_25))))) {
			/* 353L, 117L) */ var_1_29 = (
				/* 356L, 116L) */ (abs (
					2.75
				))
			);
		}
	} else {
		/* 358L, 147L) */ if (/* 359L, 124L, 125L) */ ((var_1_11) || (/* 361L, 123L, 127L) */ ((var_1_25) <= (var_1_28))))) {
			/* 364L, 145L) */ if (var_1_11) {
				/* 366L, 144L) */ var_1_29 = (
					/* 369L, 143L) */ (abs (
						/* 370L, 142L) */ (max (
							/* 370L, 142L) */ (
								var_1_30
							) , (
								4.2
							)
						))
					))
				);
			}
		}
	}


	// From: CodeObject3
	/* 373L, 172L) */ if (/* 374L, 155L, 156L) */ ((var_1_12) || (var_1_10))) {
		/* 377L, 167L) */ var_1_31 = (
			/* 380L, 166L) */ ((
				var_1_28
			) + (
				var_1_27
			))
		);
	} else {
		/* 383L, 171L) */ var_1_31 = (
			var_1_28
		);
	}


	// From: CodeObject4
	/* 387L, 264L) */ if (/* 388L, 178L, 179L) */ ((var_1_29) > (var_1_30))) {
		/* 391L, 262L) */ if (/* 392L, 189L, 190L) */ ((/* 393L, 187L, 191L) */ ((var_1_25) + (var_1_28))) > (var_1_27))) {
			/* 397L, 203L) */ var_1_33 = (
				var_1_5
			);
		} else {
			/* 401L, 260L) */ if (/* 402L, 207L, 208L) */ ((/* 403L, 205L, 209L) */ (- (var_1_29))) <= (var_1_30))) {
				/* 406L, 219L) */ var_1_33 = (
					var_1_5
				);
			} else {
				/* 410L, 259L) */ var_1_33 = (
					-50
				);
			}
		}
	}


	// From: CodeObject5
	/* 415L, 271L) */ var_1_35 = (
		var_1_36
	);


	// From: CodeObject6
	/* 419L, 332L) */ if (var_1_12) {
		/* 421L, 309L) */ if (/* 422L, 281L, 282L) */ ((64) <= (var_1_5))) {
			/* 425L, 307L) */ if (/* 426L, 291L, 292L) */ ((/* 427L, 289L, 293L) */ (- (var_1_39))) <= (var_1_5))) {
				/* 430L, 306L) */ var_1_37 = (
					/* 433L, 305L) */ ((
						/* 434L, 303L) */ (abs (
							var_1_40
						))
					) - (
						64u
					))
				);
			}
		}
	} else {
		/* 437L, 330L) */ if (/* 438L, 313L, 314L) */ ((var_1_5) == (var_1_1))) {
			/* 441L, 325L) */ var_1_37 = (
				/* 444L, 324L) */ (abs (
					/* 445L, 323L) */ (abs (
						var_1_1
					))
				))
			);
		} else {
			/* 447L, 329L) */ var_1_37 = (
				var_1_36
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1073741823);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 255);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 4294967295);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 452L, 6L, 12L, 303L, 328L, 868L, 1050L, 46L) */ ((last_1_var_1_10) && (/* 455L, 5L, 14L, 305L, 330L, 867L, 1053L, 45L) */ ((last_1_var_1_21) >= (last_1_var_1_6))))) {
		if (/* 461L, 22L, 28L, 309L, 334L, 875L, 1059L, 53L) */ ((256) != (/* 463L, 21L, 30L, 311L, 336L, 874L, 1061L, 52L) */ ((last_1_var_1_6) + (last_1_var_1_21))))) {
		}
	} else {
	}
	if (/* 485L, 57L, 63L, 451L, 476L, 1083L) */ ((var_1_5) != (/* 487L, 56L, 65L, 453L, 478L, 1085L) */ ((var_1_7) | (last_1_var_1_6))))) {
	} else {
	}
	if (/* 508L, 94L, 98L, 535L, 553L, 1106L) */ ((var_1_2) || (var_1_11))) {
	} else {
	}
	if (/* 528L, 122L, 126L, 631L, 660L, 1126L) */ ((var_1_5) > (var_1_23))) {
		if (/* 532L, 134L, 140L, 635L, 664L, 1130L) */ ((var_1_23) < (/* 534L, 133L, 142L, 637L, 666L, 1132L) */ ((4) / (var_1_16))))) {
		} else {
		}
	}
	if (/* 557L, 179L, 187L, 719L, 734L, 1155L) */ ((16.5f) > (/* 559L, 178L, 189L, 721L, 736L, 1157L) */ (max (/* 559L, 178L, 189L, 721L, 736L, 1157L) */ (/* 560L, 176L, 190L, 722L, 737L, 1158L) */ ((1.75f) * (var_1_22))) , (15.375f)))))) {
	}
	if (/* 570L, 210L, 214L, 789L, 810L, 1168L) */ ((var_1_10) || (var_1_12))) {
		if (/* 574L, 223L, 231L, 793L, 814L, 1172L) */ ((var_1_18) > (/* 576L, 222L, 233L, 795L, 816L, 1174L) */ ((/* 577L, 220L, 234L, 796L, 817L, 1175L) */ ((var_1_20) - (var_1_24))) * (var_1_1))))) {
		} else {
		}
	}
	return /* 594L) */ ((
	/* 593L) */ ((
		/* 592L) */ ((
			/* 591L) */ ((
				/* 590L) */ ((
					/* 451L, 48L, 302L, 327L, 890L, 1049L, 68L) */ ((
						/* 452L, 6L, 12L, 303L, 328L, 868L, 1050L, 46L) */ ((
							last_1_var_1_10
						) && (
							/* 455L, 5L, 14L, 305L, 330L, 867L, 1053L, 45L) */ ((
								last_1_var_1_21
							) >= (
								last_1_var_1_6
							))
						))
					) ? (
						/* 460L, 42L, 308L, 333L, 885L, 1058L, 63L) */ ((
							/* 461L, 22L, 28L, 309L, 334L, 875L, 1059L, 53L) */ ((
								256
							) != (
								/* 463L, 21L, 30L, 311L, 336L, 874L, 1061L, 52L) */ ((
									last_1_var_1_6
								) + (
									last_1_var_1_21
								))
							))
						) ? (
							/* 468L, 40L, 314L, 339L, 884L, 1066L, 62L) */ ((
								var_1_1
							) == (
								/* 468L, 40L, 314L, 339L, 884L, 1066L, 62L) */ ((signed long int) (
									/* 471L, 39L, 317L, 342L, 883L, 1069L, 61L) */ (max (
										/* 471L, 39L, 317L, 342L, 883L, 1069L, 61L) */ (
											/* 472L, 37L, 318L, 343L, 880L, 1070L, 58L) */ ((
												var_1_5
											) + (
												-25
											))
										) , (
											last_1_var_1_6
										)
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 477L, 46L, 322L, 347L, 889L, 1075L, 67L) */ ((
							var_1_1
						) == (
							/* 477L, 46L, 322L, 347L, 889L, 1075L, 67L) */ ((signed long int) (
								-100
							))
						))
					))
				) && (
					/* 484L, 83L, 450L, 475L, 1082L) */ ((
						/* 485L, 57L, 63L, 451L, 476L, 1083L) */ ((
							var_1_5
						) != (
							/* 487L, 56L, 65L, 453L, 478L, 1085L) */ ((
								var_1_7
							) | (
								last_1_var_1_6
							))
						))
					) ? (
						/* 491L, 77L, 457L, 482L, 1089L) */ ((
							var_1_6
						) == (
							/* 491L, 77L, 457L, 482L, 1089L) */ ((unsigned short int) (
								/* 494L, 76L, 460L, 485L, 1092L) */ (min (
									/* 494L, 76L, 460L, 485L, 1092L) */ (
										/* 495L, 74L, 461L, 486L, 1093L) */ ((
											var_1_8
										) - (
											/* 497L, 73L, 463L, 488L, 1095L) */ (max (
												/* 497L, 73L, 463L, 488L, 1095L) */ (
													var_1_23
												) , (
													last_1_var_1_6
												)
											))
										))
									) , (
										var_1_9
									)
								))
							))
						))
					) : (
						/* 502L, 81L, 468L, 493L, 1100L) */ ((
							var_1_6
						) == (
							/* 502L, 81L, 468L, 493L, 1100L) */ ((unsigned short int) (
								var_1_9
							))
						))
					))
				))
			) && (
				/* 507L, 115L, 534L, 552L, 1105L) */ ((
					/* 508L, 94L, 98L, 535L, 553L, 1106L) */ ((
						var_1_2
					) || (
						var_1_11
					))
				) ? (
					/* 511L, 108L, 538L, 556L, 1109L) */ ((
						var_1_10
					) == (
						/* 511L, 108L, 538L, 556L, 1109L) */ ((unsigned char) (
							/* 514L, 107L, 541L, 559L, 1112L) */ (! (
								/* 515L, 106L, 542L, 560L, 1113L) */ (! (
									/* 516L, 105L, 543L, 561L, 1114L) */ ((
										var_1_12
									) && (
										var_1_13
									))
								))
							))
						))
					))
				) : (
					/* 519L, 113L, 546L, 564L, 1117L) */ ((
						var_1_10
					) == (
						/* 519L, 113L, 546L, 564L, 1117L) */ ((unsigned char) (
							/* 522L, 112L, 549L, 567L, 1120L) */ (! (
								var_1_14
							))
						))
					))
				))
			))
		) && (
			/* 527L, 164L, 630L, 659L, 1125L) */ ((
				/* 528L, 122L, 126L, 631L, 660L, 1126L) */ ((
					var_1_5
				) > (
					var_1_23
				))
			) ? (
				/* 531L, 162L, 634L, 663L, 1129L) */ ((
					/* 532L, 134L, 140L, 635L, 664L, 1130L) */ ((
						var_1_23
					) < (
						/* 534L, 133L, 142L, 637L, 666L, 1132L) */ ((
							4
						) / (
							var_1_16
						))
					))
				) ? (
					/* 537L, 150L, 640L, 669L, 1135L) */ ((
						var_1_15
					) == (
						/* 537L, 150L, 640L, 669L, 1135L) */ ((signed char) (
							/* 540L, 149L, 643L, 672L, 1138L) */ ((
								var_1_17
							) - (
								var_1_18
							))
						))
					))
				) : (
					/* 543L, 160L, 646L, 675L, 1141L) */ ((
						var_1_15
					) == (
						/* 543L, 160L, 646L, 675L, 1141L) */ ((signed char) (
							/* 546L, 159L, 649L, 678L, 1144L) */ ((
								/* 547L, 157L, 650L, 679L, 1145L) */ (min (
									/* 547L, 157L, 650L, 679L, 1145L) */ (
										var_1_18
									) , (
										/* 549L, 156L, 652L, 681L, 1147L) */ (min (
											/* 549L, 156L, 652L, 681L, 1147L) */ (
												var_1_17
											) , (
												var_1_19
											)
										))
									)
								))
							) - (
								var_1_20
							))
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 556L, 199L, 718L, 733L, 1154L) */ ((
			/* 557L, 179L, 187L, 719L, 734L, 1155L) */ ((
				16.5f
			) > (
				/* 559L, 178L, 189L, 721L, 736L, 1157L) */ (max (
					/* 559L, 178L, 189L, 721L, 736L, 1157L) */ (
						/* 560L, 176L, 190L, 722L, 737L, 1158L) */ ((
							1.75f
						) * (
							var_1_22
						))
					) , (
						15.375f
					)
				))
			))
		) ? (
			/* 564L, 197L, 726L, 741L, 1162L) */ ((
				var_1_21
			) == (
				/* 564L, 197L, 726L, 741L, 1162L) */ ((unsigned char) (
					var_1_20
				))
			))
		) : (
			1
		))
	))
) && (
	/* 569L, 249L, 788L, 809L, 1167L) */ ((
		/* 570L, 210L, 214L, 789L, 810L, 1168L) */ ((
			var_1_10
		) || (
			var_1_12
		))
	) ? (
		/* 573L, 247L, 792L, 813L, 1171L) */ ((
			/* 574L, 223L, 231L, 793L, 814L, 1172L) */ ((
				var_1_18
			) > (
				/* 576L, 222L, 233L, 795L, 816L, 1174L) */ ((
					/* 577L, 220L, 234L, 796L, 817L, 1175L) */ ((
						var_1_20
					) - (
						var_1_24
					))
				) * (
					var_1_1
				))
			))
		) ? (
			/* 581L, 241L, 800L, 821L, 1179L) */ ((
				var_1_23
			) == (
				/* 581L, 241L, 800L, 821L, 1179L) */ ((signed short int) (
					var_1_1
				))
			))
		) : (
			/* 585L, 245L, 804L, 825L, 1183L) */ ((
				var_1_23
			) == (
				/* 585L, 245L, 804L, 825L, 1183L) */ ((signed short int) (
					var_1_21
				))
			))
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

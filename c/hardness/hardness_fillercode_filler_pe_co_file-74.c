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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch74Filler_PE_CO.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 64;
signed long int var_1_2 = -1;
signed long int var_1_3 = -2;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 3914692693;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 50;
signed long int var_1_12 = 25;
signed long int var_1_13 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 10;
unsigned short int var_1_19 = 100;
unsigned short int var_1_20 = 27219;
unsigned short int var_1_21 = 27263;
double var_1_22 = 2.75;
double var_1_23 = 100000000000000.25;
double var_1_24 = 0.19999999999999996;
signed long int var_1_25 = -10;
signed char var_1_26 = -16;
signed char var_1_28 = 4;
float var_1_29 = 3.5;
signed short int var_1_30 = -8;
signed short int var_1_31 = 256;
signed char var_1_32 = -32;
signed char var_1_33 = 2;
float var_1_34 = 0.3;
signed long int var_1_35 = 8;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
signed long int var_1_38 = 128;
signed long int var_1_39 = 256;
signed short int var_1_40 = -5;
signed short int var_1_41 = 50;
signed short int var_1_42 = -2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch74Filler_PE_CO
	/* 23L, 35L, 315L, 339L, 890L, 917L) */ if (/* 3L, 5L, 6L, 316L, 340L, 870L, 918L) */ (! (/* 2L, 4L, 7L, 317L, 341L, 869L, 919L) */ ((var_1_2) >= (var_1_3))))) {
		/* 18L, 29L, 320L, 344L, 885L, 922L) */ if (last_1_var_1_8) {
			/* 13L, 24L, 322L, 346L, 880L, 925L) */ var_1_1 = (
				/* 12L, 23L, 325L, 349L, 879L, 928L) */ ((
					/* 10L, 21L, 326L, 350L, 877L, 929L) */ ((
						var_1_5
					) - (
						var_1_6
					))
				) - (
					var_1_7
				))
			);
		} else {
			/* 17L, 28L, 330L, 354L, 884L, 933L) */ var_1_1 = (
				var_1_5
			);
		}
	} else {
		/* 22L, 34L, 334L, 358L, 889L, 937L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req2Batch74Filler_PE_CO
	unsigned long int stepLocal_1 = var_1_1;
	unsigned long int stepLocal_0 = var_1_6;
	/* 961L, 69L, 411L, 428L) */ if (/* 949L, 43L, 44L, 412L, 429L) */ ((var_1_6) < (stepLocal_1))) {
		/* 960L, 67L, 415L, 432L) */ if (/* 951L, 52L, 53L, 416L, 433L) */ ((var_1_1) <= (stepLocal_0))) {
			/* 959L, 66L, 419L, 436L) */ var_1_8 = (
				/* 958L, 65L, 422L, 439L) */ ((
					/* 956L, 63L, 423L, 440L) */ ((
						var_1_4
					) && (
						var_1_9
					))
				) || (
					var_1_10
				))
			);
		}
	}


	// From: Req3Batch74Filler_PE_CO
	unsigned long int stepLocal_3 = /* 972L, 129L, 135L, 501L, 545L) */ ((var_1_7) + (var_1_12));
	unsigned long int stepLocal_2 = /* 967L, 100L, 108L, 493L, 537L) */ ((var_1_5) / (25u));
	/* 1012L, 167L, 479L, 523L) */ if (/* 981L, 80L, 81L, 480L, 524L) */ (! (/* 980L, 79L, 82L, 481L, 525L) */ ((/* 978L, 77L, 83L, 482L, 526L) */ ((var_1_5) > (var_1_7))) || (var_1_8))))) {
		/* 1007L, 161L, 486L, 530L) */ if (/* 987L, 101L, 102L, 487L, 531L) */ ((/* 986L, 97L, 103L, 488L, 532L) */ ((5u) << (/* 985L, 96L, 105L, 490L, 534L) */ ((var_1_12) - (var_1_13))))) > (stepLocal_2))) {
			/* 1002L, 155L, 496L, 540L) */ if (/* 991L, 130L, 131L, 497L, 541L) */ ((/* 990L, 126L, 132L, 498L, 542L) */ ((var_1_6) << (var_1_1))) != (stepLocal_3))) {
				/* 997L, 150L, 504L, 548L) */ var_1_11 = (
					/* 996L, 149L, 507L, 551L) */ (min (
						/* 996L, 149L, 507L, 551L) */ (
							var_1_13
						) , (
							var_1_12
						)
					))
				);
			} else {
				/* 1001L, 154L, 510L, 554L) */ var_1_11 = (
					var_1_12
				);
			}
		} else {
			/* 1006L, 160L, 514L, 558L) */ var_1_11 = (
				var_1_15
			);
		}
	} else {
		/* 1011L, 166L, 518L, 562L) */ var_1_11 = (
			var_1_12
		);
	}


	// From: Req6Batch74Filler_PE_CO
	/* 1053L, 242L, 796L, 802L) */ var_1_22 = (
		8.625
	);


	// From: Req7Batch74Filler_PE_CO
	/* 1059L, 252L, 820L, 826L) */ var_1_23 = (
		var_1_24
	);


	// From: Req8Batch74Filler_PE_CO
	/* 1065L, 262L, 844L, 850L) */ var_1_25 = (
		-4
	);


	// From: Req4Batch74Filler_PE_CO
	/* 1017L, 195L, 655L, 667L) */ if (/* 1018L, 178L, 179L, 656L, 668L) */ ((/* 1019L, 176L, 180L, 657L, 669L) */ (- (/* 1020L, 175L, 181L, 658L, 670L) */ (max (/* 1020L, 175L, 181L, 658L, 670L) */ (var_1_22) , (var_1_23)))))) == (32.2f))) {
		/* 1024L, 194L, 662L, 674L) */ var_1_16 = (
			10
		);
	}


	// From: Req5Batch74Filler_PE_CO
	/* 1031L, 229L, 705L, 728L) */ if (/* 1032L, 203L, 204L, 706L, 729L) */ ((var_1_8) && (var_1_9))) {
		/* 1035L, 219L, 709L, 732L) */ var_1_19 = (
			/* 1038L, 218L, 712L, 735L) */ ((
				/* 1039L, 214L, 713L, 736L) */ ((
					var_1_20
				) + (
					var_1_21
				))
			) - (
				/* 1042L, 217L, 716L, 739L) */ (max (
					/* 1042L, 217L, 716L, 739L) */ (
						var_1_15
					) , (
						var_1_12
					)
				))
			))
		);
	} else {
		/* 1045L, 227L, 719L, 742L) */ if (var_1_8) {
			/* 1047L, 226L, 721L, 744L) */ var_1_19 = (
				var_1_25
			);
		}
	}


	// From: CodeObject1
	/* 255L, 77L) */ if (/* 256L, 58L, 59L) */ ((/* 257L, 56L, 60L) */ (~ (/* 258L, 55L, 61L) */ ((var_1_1) % (200u))))) < (32u))) {
		/* 262L, 76L) */ var_1_26 = (
			/* 265L, 75L) */ ((
				64
			) - (
				var_1_28
			))
		);
	}


	// From: CodeObject2
	/* 268L, 96L) */ if (/* 269L, 83L, 84L) */ ((var_1_28) > (var_1_1))) {
		/* 272L, 95L) */ var_1_29 = (
			/* 275L, 94L) */ (min (
				/* 275L, 94L) */ (
					4.2f
				) , (
					1.25f
				)
			))
		);
	}


	// From: CodeObject3
	/* 279L, 135L) */ if (/* 280L, 105L, 106L) */ ((/* 281L, 103L, 107L) */ (~ (/* 282L, 102L, 108L) */ ((5) + (var_1_25))))) >= (-256))) {
		/* 286L, 126L) */ var_1_30 = (
			/* 289L, 125L) */ (max (
				/* 289L, 125L) */ (
					/* 290L, 122L) */ ((
						var_1_25
					) + (
						var_1_28
					))
				) , (
					/* 293L, 124L) */ (abs (
						var_1_31
					))
				)
			))
		);
	} else {
		/* 295L, 134L) */ var_1_30 = (
			/* 298L, 133L) */ (abs (
				/* 299L, 132L) */ (abs (
					/* 300L, 131L) */ (max (
						/* 300L, 131L) */ (
							var_1_25
						) , (
							var_1_31
						)
					))
				))
			))
		);
	}


	// From: CodeObject4
	/* 304L, 144L) */ var_1_32 = (
		var_1_28
	);


	// From: CodeObject5
	/* 330L, 180L) */ if (/* 331L, 163L, 164L) */ ((/* 332L, 161L, 165L) */ (abs (/* 333L, 160L, 166L) */ (min (/* 333L, 160L, 166L) */ (var_1_29) , (var_1_34)))))) > (0.44999999999999996f))) {
		/* 337L, 179L) */ var_1_33 = (
			var_1_28
		);
	}


	// From: CodeObject6
	/* 371L, 226L) */ if (/* 372L, 187L, 188L) */ ((/* 373L, 185L, 189L) */ (- (var_1_22))) >= (var_1_23))) {
		/* 376L, 224L) */ if (/* 377L, 198L, 199L) */ ((var_1_36) && (var_1_37))) {
			/* 380L, 215L) */ var_1_35 = (
				/* 383L, 214L) */ ((
					/* 384L, 211L) */ ((
						var_1_28
					) - (
						/* 386L, 210L) */ (max (
							/* 386L, 210L) */ (
								var_1_38
							) , (
								var_1_39
							)
						))
					))
				) + (
					/* 389L, 213L) */ (abs (
						var_1_31
					))
				))
			);
		} else {
			/* 391L, 223L) */ var_1_35 = (
				/* 394L, 222L) */ (max (
					/* 394L, 222L) */ (
						/* 395L, 220L) */ (max (
							/* 395L, 220L) */ (
								var_1_11
							) , (
								var_1_38
							)
						))
					) , (
						var_1_1
					)
				))
			);
		}
	}


	// From: CodeObject7
	/* 399L, 253L) */ if (var_1_8) {
		/* 401L, 243L) */ var_1_40 = (
			/* 404L, 242L) */ ((
				/* 405L, 238L) */ (abs (
					var_1_31
				))
			) - (
				/* 407L, 241L) */ (max (
					/* 407L, 241L) */ (
						var_1_28
					) , (
						var_1_41
					)
				))
			))
		);
	} else {
		/* 410L, 252L) */ var_1_40 = (
			/* 413L, 251L) */ (min (
				/* 413L, 251L) */ (
					/* 414L, 249L) */ (abs (
						/* 415L, 248L) */ (max (
							/* 415L, 248L) */ (
								var_1_31
							) , (
								var_1_42
							)
						))
					))
				) , (
					var_1_25
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 3221225470);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 14);
	assume_abort_if_not(var_1_12 <= 29);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 14);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 16383);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16384);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32766);
	assume_abort_if_not(var_1_31 <= 32766);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1073741823);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1073741823);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 32766);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= -32766);
	assume_abort_if_not(var_1_42 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
}

int property(void) {
	if (/* 420L, 5L, 10L, 364L, 388L, 895L, 1071L, 28L) */ (! (/* 421L, 4L, 11L, 365L, 389L, 894L, 1072L, 27L) */ ((var_1_2) >= (var_1_3))))) {
		if (last_1_var_1_8) {
		} else {
		}
	} else {
	}
	if (/* 445L, 43L, 47L, 446L, 463L, 1096L) */ ((var_1_6) < (var_1_1))) {
		if (/* 449L, 52L, 56L, 450L, 467L, 1100L) */ ((var_1_1) <= (var_1_6))) {
		}
	}
	if (/* 462L, 80L, 87L, 568L, 612L, 1113L) */ (! (/* 463L, 79L, 88L, 569L, 613L, 1114L) */ ((/* 464L, 77L, 89L, 570L, 614L, 1115L) */ ((var_1_5) > (var_1_7))) || (var_1_8))))) {
		if (/* 469L, 101L, 111L, 575L, 619L, 1120L) */ ((/* 470L, 97L, 112L, 576L, 620L, 1121L) */ ((5u) << (/* 472L, 96L, 114L, 578L, 622L, 1123L) */ ((var_1_12) - (var_1_13))))) > (/* 475L, 100L, 117L, 581L, 625L, 1126L) */ ((var_1_5) / (25u))))) {
			if (/* 479L, 130L, 138L, 585L, 629L, 1130L) */ ((/* 480L, 126L, 139L, 586L, 630L, 1131L) */ ((var_1_6) << (var_1_1))) != (/* 483L, 129L, 142L, 589L, 633L, 1134L) */ ((var_1_7) + (var_1_12))))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 506L, 178L, 185L, 680L, 692L, 1157L) */ ((/* 507L, 176L, 186L, 681L, 693L, 1158L) */ (- (/* 508L, 175L, 187L, 682L, 694L, 1159L) */ (max (/* 508L, 175L, 187L, 682L, 694L, 1159L) */ (var_1_22) , (var_1_23)))))) == (32.2f))) {
	}
	if (/* 520L, 203L, 207L, 752L, 775L, 1171L) */ ((var_1_8) && (var_1_9))) {
	} else {
		if (var_1_8) {
		}
	}
	return /* 564L) */ ((
	/* 563L) */ ((
		/* 562L) */ ((
			/* 561L) */ ((
				/* 560L) */ ((
					/* 559L) */ ((
						/* 558L) */ ((
							/* 419L, 36L, 363L, 387L, 915L, 1070L, 48L) */ ((
								/* 420L, 5L, 10L, 364L, 388L, 895L, 1071L, 28L) */ (! (
									/* 421L, 4L, 11L, 365L, 389L, 894L, 1072L, 27L) */ ((
										var_1_2
									) >= (
										var_1_3
									))
								))
							) ? (
								/* 424L, 30L, 368L, 392L, 910L, 1075L, 43L) */ ((
									last_1_var_1_8
								) ? (
									/* 427L, 24L, 370L, 394L, 905L, 1078L, 38L) */ ((
										var_1_1
									) == (
										/* 427L, 24L, 370L, 394L, 905L, 1078L, 38L) */ ((unsigned long int) (
											/* 430L, 23L, 373L, 397L, 904L, 1081L, 37L) */ ((
												/* 431L, 21L, 374L, 398L, 902L, 1082L, 35L) */ ((
													var_1_5
												) - (
													var_1_6
												))
											) - (
												var_1_7
											))
										))
									))
								) : (
									/* 435L, 28L, 378L, 402L, 909L, 1086L, 42L) */ ((
										var_1_1
									) == (
										/* 435L, 28L, 378L, 402L, 909L, 1086L, 42L) */ ((unsigned long int) (
											var_1_5
										))
									))
								))
							) : (
								/* 439L, 34L, 382L, 406L, 914L, 1090L, 47L) */ ((
									var_1_1
								) == (
									/* 439L, 34L, 382L, 406L, 914L, 1090L, 47L) */ ((unsigned long int) (
										var_1_7
									))
								))
							))
						) && (
							/* 444L, 70L, 445L, 462L, 1095L) */ ((
								/* 445L, 43L, 47L, 446L, 463L, 1096L) */ ((
									var_1_6
								) < (
									var_1_1
								))
							) ? (
								/* 448L, 68L, 449L, 466L, 1099L) */ ((
									/* 449L, 52L, 56L, 450L, 467L, 1100L) */ ((
										var_1_1
									) <= (
										var_1_6
									))
								) ? (
									/* 452L, 66L, 453L, 470L, 1103L) */ ((
										var_1_8
									) == (
										/* 452L, 66L, 453L, 470L, 1103L) */ ((unsigned char) (
											/* 455L, 65L, 456L, 473L, 1106L) */ ((
												/* 456L, 63L, 457L, 474L, 1107L) */ ((
													var_1_4
												) && (
													var_1_9
												))
											) || (
												var_1_10
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
					) && (
						/* 461L, 168L, 567L, 611L, 1112L) */ ((
							/* 462L, 80L, 87L, 568L, 612L, 1113L) */ (! (
								/* 463L, 79L, 88L, 569L, 613L, 1114L) */ ((
									/* 464L, 77L, 89L, 570L, 614L, 1115L) */ ((
										var_1_5
									) > (
										var_1_7
									))
								) || (
									var_1_8
								))
							))
						) ? (
							/* 468L, 162L, 574L, 618L, 1119L) */ ((
								/* 469L, 101L, 111L, 575L, 619L, 1120L) */ ((
									/* 470L, 97L, 112L, 576L, 620L, 1121L) */ ((
										5u
									) << (
										/* 472L, 96L, 114L, 578L, 622L, 1123L) */ ((
											var_1_12
										) - (
											var_1_13
										))
									))
								) > (
									/* 475L, 100L, 117L, 581L, 625L, 1126L) */ ((
										var_1_5
									) / (
										25u
									))
								))
							) ? (
								/* 478L, 156L, 584L, 628L, 1129L) */ ((
									/* 479L, 130L, 138L, 585L, 629L, 1130L) */ ((
										/* 480L, 126L, 139L, 586L, 630L, 1131L) */ ((
											var_1_6
										) << (
											var_1_1
										))
									) != (
										/* 483L, 129L, 142L, 589L, 633L, 1134L) */ ((
											var_1_7
										) + (
											var_1_12
										))
									))
								) ? (
									/* 486L, 150L, 592L, 636L, 1137L) */ ((
										var_1_11
									) == (
										/* 486L, 150L, 592L, 636L, 1137L) */ ((unsigned char) (
											/* 489L, 149L, 595L, 639L, 1140L) */ (min (
												/* 489L, 149L, 595L, 639L, 1140L) */ (
													var_1_13
												) , (
													var_1_12
												)
											))
										))
									))
								) : (
									/* 492L, 154L, 598L, 642L, 1143L) */ ((
										var_1_11
									) == (
										/* 492L, 154L, 598L, 642L, 1143L) */ ((unsigned char) (
											var_1_12
										))
									))
								))
							) : (
								/* 496L, 160L, 602L, 646L, 1147L) */ ((
									var_1_11
								) == (
									/* 496L, 160L, 602L, 646L, 1147L) */ ((unsigned char) (
										var_1_15
									))
								))
							))
						) : (
							/* 500L, 166L, 606L, 650L, 1151L) */ ((
								var_1_11
							) == (
								/* 500L, 166L, 606L, 650L, 1151L) */ ((unsigned char) (
									var_1_12
								))
							))
						))
					))
				) && (
					/* 505L, 196L, 679L, 691L, 1156L) */ ((
						/* 506L, 178L, 185L, 680L, 692L, 1157L) */ ((
							/* 507L, 176L, 186L, 681L, 693L, 1158L) */ (- (
								/* 508L, 175L, 187L, 682L, 694L, 1159L) */ (max (
									/* 508L, 175L, 187L, 682L, 694L, 1159L) */ (
										var_1_22
									) , (
										var_1_23
									)
								))
							))
						) == (
							32.2f
						))
					) ? (
						/* 512L, 194L, 686L, 698L, 1163L) */ ((
							var_1_16
						) == (
							/* 512L, 194L, 686L, 698L, 1163L) */ ((unsigned char) (
								10
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 519L, 230L, 751L, 774L, 1170L) */ ((
					/* 520L, 203L, 207L, 752L, 775L, 1171L) */ ((
						var_1_8
					) && (
						var_1_9
					))
				) ? (
					/* 523L, 219L, 755L, 778L, 1174L) */ ((
						var_1_19
					) == (
						/* 523L, 219L, 755L, 778L, 1174L) */ ((unsigned short int) (
							/* 526L, 218L, 758L, 781L, 1177L) */ ((
								/* 527L, 214L, 759L, 782L, 1178L) */ ((
									var_1_20
								) + (
									var_1_21
								))
							) - (
								/* 530L, 217L, 762L, 785L, 1181L) */ (max (
									/* 530L, 217L, 762L, 785L, 1181L) */ (
										var_1_15
									) , (
										var_1_12
									)
								))
							))
						))
					))
				) : (
					/* 533L, 228L, 765L, 788L, 1184L) */ ((
						var_1_8
					) ? (
						/* 535L, 226L, 767L, 790L, 1186L) */ ((
							var_1_19
						) == (
							/* 535L, 226L, 767L, 790L, 1186L) */ ((unsigned short int) (
								var_1_25
							))
						))
					) : (
						1
					))
				))
			))
		) && (
			/* 541L, 242L, 808L, 814L, 1192L) */ ((
				var_1_22
			) == (
				/* 541L, 242L, 808L, 814L, 1192L) */ ((double) (
					8.625
				))
			))
		))
	) && (
		/* 547L, 252L, 832L, 838L, 1198L) */ ((
			var_1_23
		) == (
			/* 547L, 252L, 832L, 838L, 1198L) */ ((double) (
				var_1_24
			))
		))
	))
) && (
	/* 553L, 262L, 856L, 862L, 1204L) */ ((
		var_1_25
	) == (
		/* 553L, 262L, 856L, 862L, 1204L) */ ((signed long int) (
			-4
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

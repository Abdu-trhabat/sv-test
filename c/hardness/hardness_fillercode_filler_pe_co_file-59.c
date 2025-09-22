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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59Filler_PE_CO.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 1;
unsigned char var_1_4 = 25;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 62100;
unsigned short int var_1_7 = 27651;
double var_1_8 = 128.9;
double var_1_10 = 16.5;
double var_1_11 = 25.5;
double var_1_12 = 199.75;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned short int var_1_17 = 32;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 1;
unsigned short int var_1_20 = 25;
float var_1_21 = 0.65;
float var_1_22 = 7.579;
unsigned short int var_1_23 = 50;
signed long int var_1_24 = -25;
signed short int var_1_25 = -100;
unsigned long int var_1_26 = 4;
signed short int var_1_27 = 16;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned long int var_1_30 = 0;
unsigned char var_1_31 = 64;
float var_1_32 = 1.25;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 100;
unsigned char var_1_35 = 4;
unsigned char var_1_36 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_5 = 0;
double last_1_var_1_8 = 128.9;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch59Filler_PE_CO
	/* 13L, 229L, 715L, 729L, 856L, 1008L) */ if (/* 3L, 213L, 214L, 716L, 730L, 846L, 1009L) */ ((var_1_12) != (last_1_var_1_8))) {
		/* 8L, 224L, 719L, 733L, 851L, 1013L) */ var_1_15 = (
			/* 7L, 223L, 722L, 736L, 850L, 1016L) */ (! (
				var_1_16
			))
		);
	} else {
		/* 12L, 228L, 724L, 738L, 855L, 1018L) */ var_1_15 = (
			var_1_16
		);
	}


	// From: Req6Batch59Filler_PE_CO
	/* 1024L, 238L, 772L, 778L) */ var_1_17 = (
		var_1_4
	);


	// From: Req7Batch59Filler_PE_CO
	/* 1030L, 248L, 796L, 802L) */ var_1_18 = (
		var_1_16
	);


	// From: Req8Batch59Filler_PE_CO
	/* 1036L, 258L, 820L, 826L) */ var_1_19 = (
		var_1_4
	);


	// From: Req1Batch59Filler_PE_CO
	unsigned short int stepLocal_1 = var_1_17;
	unsigned char stepLocal_0 = /* 874L, 7L, 11L, 265L, 298L) */ ((var_1_17) != (/* 876L, 6L, 13L, 267L, 300L) */ ((16) / (var_1_4))));
	/* 908L, 62L, 263L, 296L) */ if (/* 884L, 9L, 10L, 264L, 297L) */ ((stepLocal_0) && (var_1_15))) {
		/* 903L, 56L, 271L, 304L) */ if (/* 886L, 30L, 31L, 272L, 305L) */ ((stepLocal_1) > (var_1_4))) {
			/* 892L, 42L, 275L, 308L) */ var_1_1 = (
				/* 891L, 41L, 278L, 311L) */ ((
					var_1_4
				) + (
					var_1_17
				))
			);
		} else {
			/* 902L, 54L, 281L, 314L) */ if (var_1_15) {
				/* 897L, 49L, 283L, 316L) */ var_1_1 = (
					var_1_17
				);
			} else {
				/* 901L, 53L, 287L, 320L) */ var_1_1 = (
					var_1_4
				);
			}
		}
	} else {
		/* 907L, 61L, 291L, 324L) */ var_1_1 = (
			var_1_17
		);
	}


	// From: Req2Batch59Filler_PE_CO
	unsigned short int stepLocal_2 = var_1_1;
	/* 940L, 101L, 395L, 422L) */ if (/* 918L, 70L, 71L, 396L, 423L) */ ((stepLocal_2) < (last_1_var_1_5))) {
		/* 927L, 84L, 400L, 427L) */ var_1_5 = (
			/* 926L, 83L, 403L, 430L) */ ((
				var_1_6
			) - (
				/* 925L, 82L, 405L, 432L) */ ((
					var_1_7
				) - (
					last_1_var_1_5
				))
			))
		);
	} else {
		/* 939L, 99L, 409L, 436L) */ if (/* 929L, 86L, 87L, 410L, 437L) */ (! (var_1_15))) {
			/* 938L, 98L, 412L, 439L) */ var_1_5 = (
				/* 937L, 97L, 415L, 442L) */ (max (
					/* 937L, 97L, 415L, 442L) */ (
						last_1_var_1_5
					) , (
						/* 936L, 96L, 418L, 445L) */ ((
							var_1_7
						) + (
							var_1_4
						))
					)
				))
			);
		}
	}


	// From: Req3Batch59Filler_PE_CO
	unsigned char stepLocal_3 = /* 945L, 114L, 119L, 509L, 535L) */ ((var_1_5) < (var_1_6));
	/* 970L, 146L, 503L, 529L) */ if (var_1_18) {
		/* 965L, 140L, 505L, 531L) */ if (/* 952L, 115L, 116L, 506L, 532L) */ ((/* 951L, 111L, 117L, 507L, 533L) */ (! (var_1_15))) || (stepLocal_3))) {
			/* 958L, 133L, 512L, 538L) */ var_1_8 = (
				/* 957L, 132L, 515L, 541L) */ (max (
					/* 957L, 132L, 515L, 541L) */ (
						127.25
					) , (
						var_1_10
					)
				))
			);
		} else {
			/* 964L, 139L, 518L, 544L) */ var_1_8 = (
				/* 963L, 138L, 521L, 547L) */ ((
					var_1_11
				) + (
					var_1_12
				))
			);
		}
	} else {
		/* 969L, 145L, 524L, 550L) */ var_1_8 = (
			var_1_11
		);
	}


	// From: Req4Batch59Filler_PE_CO
	unsigned short int stepLocal_5 = var_1_6;
	unsigned short int stepLocal_4 = var_1_5;
	/* 1003L, 202L, 607L, 634L) */ if (/* 987L, 160L, 161L, 608L, 635L) */ ((stepLocal_4) != (/* 986L, 159L, 163L, 610L, 637L) */ ((/* 982L, 155L, 164L, 611L, 638L) */ ((var_1_6) / (var_1_4))) * (/* 985L, 158L, 167L, 614L, 641L) */ (max (/* 985L, 158L, 167L, 614L, 641L) */ (var_1_5) , (var_1_19)))))))) {
		/* 998L, 196L, 617L, 644L) */ if (/* 989L, 181L, 182L, 618L, 645L) */ ((var_1_5) <= (stepLocal_5))) {
			/* 993L, 191L, 621L, 648L) */ var_1_13 = (
				32
			);
		} else {
			/* 997L, 195L, 625L, 652L) */ var_1_13 = (
				var_1_14
			);
		}
	} else {
		/* 1002L, 201L, 629L, 656L) */ var_1_13 = (
			var_1_14
		);
	}


	// From: CodeObject1
	/* 278L, 46L) */ if (/* 279L, 34L, 35L) */ ((var_1_21) == (var_1_22))) {
		/* 282L, 45L) */ var_1_20 = (
			/* 285L, 44L) */ (abs (
				var_1_23
			))
		);
	}


	// From: CodeObject2
	/* 287L, 79L) */ if (/* 288L, 58L, 59L) */ ((/* 289L, 53L, 60L) */ (abs (var_1_8))) > (/* 291L, 57L, 62L) */ (min (/* 291L, 57L, 62L) */ (128.5f) , (/* 293L, 56L, 64L) */ (abs (var_1_8)))))))) {
		/* 295L, 78L) */ var_1_24 = (
			/* 298L, 77L) */ (max (
				/* 298L, 77L) */ (
					var_1_17
				) , (
					var_1_23
				)
			))
		);
	}


	// From: CodeObject3
	/* 301L, 128L) */ if (/* 302L, 89L, 90L) */ ((/* 303L, 85L, 91L) */ ((var_1_19) / (var_1_26))) < (/* 306L, 88L, 94L) */ ((var_1_23) | (var_1_19))))) {
		/* 309L, 120L) */ if (/* 310L, 107L, 108L) */ ((/* 311L, 105L, 109L) */ (- (var_1_8))) >= (256.75f))) {
			/* 314L, 119L) */ var_1_25 = (
				var_1_27
			);
		}
	} else {
		/* 318L, 127L) */ var_1_25 = (
			/* 321L, 126L) */ (min (
				/* 321L, 126L) */ (
					var_1_27
				) , (
					0
				)
			))
		);
	}


	// From: CodeObject4
	/* 339L, 158L) */ if (/* 340L, 137L, 138L) */ ((/* 341L, 135L, 139L) */ ((var_1_19) ^ (/* 343L, 134L, 141L) */ (~ (var_1_17))))) >= (var_1_19))) {
		/* 346L, 157L) */ var_1_28 = (
			/* 349L, 156L) */ ((
				/* 350L, 154L) */ ((
					var_1_21
				) <= (
					var_1_22
				))
			) || (
				var_1_29
			))
		);
	}


	// From: CodeObject5
	/* 366L, 186L) */ if (/* 367L, 164L, 165L) */ ((var_1_19) < (var_1_5))) {
		/* 370L, 184L) */ if (/* 371L, 173L, 174L) */ ((var_1_22) <= (var_1_21))) {
			/* 374L, 183L) */ var_1_30 = (
				var_1_5
			);
		}
	}


	// From: CodeObject6
	/* 423L, 265L) */ if (/* 424L, 193L, 194L) */ ((var_1_26) < (/* 426L, 192L, 196L) */ (abs (var_1_23))))) {
		/* 428L, 259L) */ if (/* 429L, 207L, 208L) */ ((/* 430L, 204L, 209L) */ (max (/* 430L, 204L, 209L) */ (var_1_22) , (var_1_21)))) == (/* 433L, 206L, 212L) */ (abs (var_1_32))))) {
			/* 435L, 244L) */ if (/* 436L, 222L, 223L) */ ((-50) <= (var_1_23))) {
				/* 439L, 237L) */ var_1_31 = (
					/* 442L, 236L) */ ((
						var_1_33
					) - (
						/* 444L, 235L) */ (abs (
							/* 445L, 234L) */ ((
								var_1_34
							) - (
								var_1_35
							))
						))
					))
				);
			} else {
				/* 448L, 243L) */ var_1_31 = (
					/* 451L, 242L) */ (max (
						/* 451L, 242L) */ (
							var_1_33
						) , (
							25
						)
					))
				);
			}
		} else {
			/* 454L, 257L) */ if (var_1_15) {
				/* 456L, 252L) */ var_1_31 = (
					var_1_34
				);
			} else {
				/* 460L, 256L) */ var_1_31 = (
					var_1_33
				);
			}
		}
	} else {
		/* 464L, 264L) */ var_1_31 = (
			var_1_36
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 16383);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32767);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 63);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_8 = var_1_8;
}

int property(void) {
	if (/* 469L, 9L, 17L, 330L, 363L, 1042L) */ ((/* 470L, 7L, 18L, 331L, 364L, 1043L) */ ((var_1_17) != (/* 472L, 6L, 20L, 333L, 366L, 1045L) */ ((16) / (var_1_4))))) && (var_1_15))) {
		if (/* 477L, 30L, 34L, 338L, 371L, 1050L) */ ((var_1_17) > (var_1_4))) {
		} else {
			if (var_1_15) {
			} else {
			}
		}
	} else {
	}
	if (/* 502L, 70L, 74L, 450L, 477L, 1075L) */ ((var_1_1) < (last_1_var_1_5))) {
	} else {
		if (/* 516L, 86L, 89L, 464L, 491L, 1089L) */ (! (var_1_15))) {
		}
	}
	if (var_1_18) {
		if (/* 531L, 115L, 122L, 558L, 584L, 1104L) */ ((/* 532L, 111L, 123L, 559L, 585L, 1105L) */ (! (var_1_15))) || (/* 534L, 114L, 125L, 561L, 587L, 1107L) */ ((var_1_5) < (var_1_6))))) {
		} else {
		}
	} else {
	}
	if (/* 555L, 160L, 170L, 662L, 689L, 1128L) */ ((var_1_5) != (/* 557L, 159L, 172L, 664L, 691L, 1130L) */ ((/* 558L, 155L, 173L, 665L, 692L, 1131L) */ ((var_1_6) / (var_1_4))) * (/* 561L, 158L, 176L, 668L, 695L, 1134L) */ (max (/* 561L, 158L, 176L, 668L, 695L, 1134L) */ (var_1_5) , (var_1_19)))))))) {
		if (/* 565L, 181L, 185L, 672L, 699L, 1138L) */ ((var_1_5) <= (var_1_6))) {
		} else {
		}
	} else {
	}
	if (/* 582L, 213L, 217L, 744L, 758L, 861L, 1155L, 18L) */ ((var_1_12) != (last_1_var_1_8))) {
	} else {
	}
	return /* 620L) */ ((
	/* 619L) */ ((
		/* 618L) */ ((
			/* 617L) */ ((
				/* 616L) */ ((
					/* 615L) */ ((
						/* 614L) */ ((
							/* 468L, 63L, 329L, 362L, 1041L) */ ((
								/* 469L, 9L, 17L, 330L, 363L, 1042L) */ ((
									/* 470L, 7L, 18L, 331L, 364L, 1043L) */ ((
										var_1_17
									) != (
										/* 472L, 6L, 20L, 333L, 366L, 1045L) */ ((
											16
										) / (
											var_1_4
										))
									))
								) && (
									var_1_15
								))
							) ? (
								/* 476L, 57L, 337L, 370L, 1049L) */ ((
									/* 477L, 30L, 34L, 338L, 371L, 1050L) */ ((
										var_1_17
									) > (
										var_1_4
									))
								) ? (
									/* 480L, 42L, 341L, 374L, 1053L) */ ((
										var_1_1
									) == (
										/* 480L, 42L, 341L, 374L, 1053L) */ ((unsigned short int) (
											/* 483L, 41L, 344L, 377L, 1056L) */ ((
												var_1_4
											) + (
												var_1_17
											))
										))
									))
								) : (
									/* 486L, 55L, 347L, 380L, 1059L) */ ((
										var_1_15
									) ? (
										/* 488L, 49L, 349L, 382L, 1061L) */ ((
											var_1_1
										) == (
											/* 488L, 49L, 349L, 382L, 1061L) */ ((unsigned short int) (
												var_1_17
											))
										))
									) : (
										/* 492L, 53L, 353L, 386L, 1065L) */ ((
											var_1_1
										) == (
											/* 492L, 53L, 353L, 386L, 1065L) */ ((unsigned short int) (
												var_1_4
											))
										))
									))
								))
							) : (
								/* 496L, 61L, 357L, 390L, 1069L) */ ((
									var_1_1
								) == (
									/* 496L, 61L, 357L, 390L, 1069L) */ ((unsigned short int) (
										var_1_17
									))
								))
							))
						) && (
							/* 501L, 102L, 449L, 476L, 1074L) */ ((
								/* 502L, 70L, 74L, 450L, 477L, 1075L) */ ((
									var_1_1
								) < (
									last_1_var_1_5
								))
							) ? (
								/* 506L, 84L, 454L, 481L, 1079L) */ ((
									var_1_5
								) == (
									/* 506L, 84L, 454L, 481L, 1079L) */ ((unsigned short int) (
										/* 509L, 83L, 457L, 484L, 1082L) */ ((
											var_1_6
										) - (
											/* 511L, 82L, 459L, 486L, 1084L) */ ((
												var_1_7
											) - (
												last_1_var_1_5
											))
										))
									))
								))
							) : (
								/* 515L, 100L, 463L, 490L, 1088L) */ ((
									/* 516L, 86L, 89L, 464L, 491L, 1089L) */ (! (
										var_1_15
									))
								) ? (
									/* 518L, 98L, 466L, 493L, 1091L) */ ((
										var_1_5
									) == (
										/* 518L, 98L, 466L, 493L, 1091L) */ ((unsigned short int) (
											/* 521L, 97L, 469L, 496L, 1094L) */ (max (
												/* 521L, 97L, 469L, 496L, 1094L) */ (
													last_1_var_1_5
												) , (
													/* 524L, 96L, 472L, 499L, 1097L) */ ((
														var_1_7
													) + (
														var_1_4
													))
												)
											))
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 528L, 147L, 555L, 581L, 1101L) */ ((
							var_1_18
						) ? (
							/* 530L, 141L, 557L, 583L, 1103L) */ ((
								/* 531L, 115L, 122L, 558L, 584L, 1104L) */ ((
									/* 532L, 111L, 123L, 559L, 585L, 1105L) */ (! (
										var_1_15
									))
								) || (
									/* 534L, 114L, 125L, 561L, 587L, 1107L) */ ((
										var_1_5
									) < (
										var_1_6
									))
								))
							) ? (
								/* 537L, 133L, 564L, 590L, 1110L) */ ((
									var_1_8
								) == (
									/* 537L, 133L, 564L, 590L, 1110L) */ ((double) (
										/* 540L, 132L, 567L, 593L, 1113L) */ (max (
											/* 540L, 132L, 567L, 593L, 1113L) */ (
												127.25
											) , (
												var_1_10
											)
										))
									))
								))
							) : (
								/* 543L, 139L, 570L, 596L, 1116L) */ ((
									var_1_8
								) == (
									/* 543L, 139L, 570L, 596L, 1116L) */ ((double) (
										/* 546L, 138L, 573L, 599L, 1119L) */ ((
											var_1_11
										) + (
											var_1_12
										))
									))
								))
							))
						) : (
							/* 549L, 145L, 576L, 602L, 1122L) */ ((
								var_1_8
							) == (
								/* 549L, 145L, 576L, 602L, 1122L) */ ((double) (
									var_1_11
								))
							))
						))
					))
				) && (
					/* 554L, 203L, 661L, 688L, 1127L) */ ((
						/* 555L, 160L, 170L, 662L, 689L, 1128L) */ ((
							var_1_5
						) != (
							/* 557L, 159L, 172L, 664L, 691L, 1130L) */ ((
								/* 558L, 155L, 173L, 665L, 692L, 1131L) */ ((
									var_1_6
								) / (
									var_1_4
								))
							) * (
								/* 561L, 158L, 176L, 668L, 695L, 1134L) */ (max (
									/* 561L, 158L, 176L, 668L, 695L, 1134L) */ (
										var_1_5
									) , (
										var_1_19
									)
								))
							))
						))
					) ? (
						/* 564L, 197L, 671L, 698L, 1137L) */ ((
							/* 565L, 181L, 185L, 672L, 699L, 1138L) */ ((
								var_1_5
							) <= (
								var_1_6
							))
						) ? (
							/* 568L, 191L, 675L, 702L, 1141L) */ ((
								var_1_13
							) == (
								/* 568L, 191L, 675L, 702L, 1141L) */ ((unsigned char) (
									32
								))
							))
						) : (
							/* 572L, 195L, 679L, 706L, 1145L) */ ((
								var_1_13
							) == (
								/* 572L, 195L, 679L, 706L, 1145L) */ ((unsigned char) (
									var_1_14
								))
							))
						))
					) : (
						/* 576L, 201L, 683L, 710L, 1149L) */ ((
							var_1_13
						) == (
							/* 576L, 201L, 683L, 710L, 1149L) */ ((unsigned char) (
								var_1_14
							))
						))
					))
				))
			) && (
				/* 581L, 230L, 743L, 757L, 871L, 1154L, 28L) */ ((
					/* 582L, 213L, 217L, 744L, 758L, 861L, 1155L, 18L) */ ((
						var_1_12
					) != (
						last_1_var_1_8
					))
				) ? (
					/* 586L, 224L, 747L, 761L, 866L, 1159L, 23L) */ ((
						var_1_15
					) == (
						/* 586L, 224L, 747L, 761L, 866L, 1159L, 23L) */ ((unsigned char) (
							/* 589L, 223L, 750L, 764L, 865L, 1162L, 22L) */ (! (
								var_1_16
							))
						))
					))
				) : (
					/* 591L, 228L, 752L, 766L, 870L, 1164L, 27L) */ ((
						var_1_15
					) == (
						/* 591L, 228L, 752L, 766L, 870L, 1164L, 27L) */ ((unsigned char) (
							var_1_16
						))
					))
				))
			))
		) && (
			/* 597L, 238L, 784L, 790L, 1170L) */ ((
				var_1_17
			) == (
				/* 597L, 238L, 784L, 790L, 1170L) */ ((unsigned short int) (
					var_1_4
				))
			))
		))
	) && (
		/* 603L, 248L, 808L, 814L, 1176L) */ ((
			var_1_18
		) == (
			/* 603L, 248L, 808L, 814L, 1176L) */ ((unsigned char) (
				var_1_16
			))
		))
	))
) && (
	/* 609L, 258L, 832L, 838L, 1182L) */ ((
		var_1_19
	) == (
		/* 609L, 258L, 832L, 838L, 1182L) */ ((unsigned long int) (
			var_1_4
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

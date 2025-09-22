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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch82Filler_PS_CN.c", 13, "reach_error"); }
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
double var_1_1 = 10.8;
double var_1_4 = 5.5;
float var_1_5 = 49.2;
double var_1_6 = 15.1;
signed char var_1_7 = 4;
signed char var_1_8 = 32;
signed char var_1_9 = 2;
signed char var_1_10 = 2;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 1;
signed char var_1_17 = -2;
unsigned short int var_1_19 = 25;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 56857;
unsigned char var_1_22 = 0;
double var_1_23 = 1000000000.5;
double var_1_24 = 2.95;
unsigned char var_1_25 = 10;
unsigned char var_1_26 = 10;
float var_1_27 = 15.5;
unsigned char var_1_28 = 1;
float var_1_29 = 256.6;
signed short int var_1_30 = -2;
float var_1_31 = 7.5;
float var_1_32 = 128.5;
float var_1_33 = 10000000.5;
float var_1_34 = 10.5;
float var_1_35 = 64.25;
signed char var_1_36 = 1;
unsigned long int var_1_37 = 4;
unsigned long int var_1_38 = 4;
signed char var_1_39 = 25;
signed long int var_1_40 = 1;
unsigned char var_1_41 = 1;
signed short int var_1_42 = -32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_19 = 25;
unsigned char last_1_var_1_20 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 39L) */ var_1_23 = (
		var_1_24
	);


	// From: CodeObject2
	/* 60L) */ if (/* 47L, 46L) */ ((var_1_24) <= (var_1_23))) {
		/* 59L) */ var_1_25 = (
			/* 58L) */ (min (
				/* 58L) */ (
					var_1_26
				) , (
					/* 57L) */ (abs (
						128
					))
				)
			))
		);
	}


	// From: CodeObject3
	/* 93L) */ if (var_1_28) {
		/* 91L) */ if (/* 73L, 72L) */ ((var_1_24) < (var_1_23))) {
			/* 82L) */ var_1_27 = (
				var_1_29
			);
		} else {
			/* 90L) */ var_1_27 = (
				/* 89L) */ (max (
					/* 89L) */ (
						/* 87L) */ (abs (
							/* 86L) */ (abs (
								var_1_24
							))
						))
					) , (
						var_1_29
					)
				))
			);
		}
	}


	// From: CodeObject4
	/* 102L) */ var_1_30 = (
		var_1_25
	);


	// From: CodeObject5
	/* 160L) */ if (/* 111L, 110L) */ ((/* 112L, 108L) */ (abs (var_1_25))) > (var_1_26))) {
		/* 126L) */ var_1_31 = (
			/* 125L) */ ((
				var_1_32
			) + (
				/* 124L) */ ((
					var_1_33
				) - (
					var_1_34
				))
			))
		);
	} else {
		/* 158L) */ if (/* 131L, 130L) */ ((0.8f) >= (/* 133L, 129L) */ (abs (var_1_23))))) {
			/* 156L) */ if (/* 142L, 141L) */ ((var_1_25) <= (var_1_26))) {
				/* 155L) */ var_1_31 = (
					/* 154L) */ ((
						var_1_33
					) - (
						/* 153L) */ ((
							var_1_34
						) + (
							var_1_35
						))
					))
				);
			}
		}
	}


	// From: CodeObject6
	/* 224L) */ if (/* 178L, 177L) */ ((/* 179L, 171L) */ ((var_1_25) % (var_1_38))) >= (/* 182L, 176L) */ (max (/* 182L, 176L) */ (var_1_26) , (var_1_37)))))) {
		/* 222L) */ if (/* 197L, 196L) */ ((/* 198L, 194L) */ ((var_1_30) & (var_1_37))) <= (var_1_26))) {
			/* 220L) */ if (/* 210L, 209L) */ ((var_1_25) < (var_1_37))) {
				/* 219L) */ var_1_36 = (
					var_1_39
				);
			}
		}
	}


	// From: CodeObject7
	/* 252L) */ if (/* 235L, 234L) */ ((var_1_28) && (var_1_41))) {
		/* 247L) */ var_1_40 = (
			/* 246L) */ ((
				var_1_25
			) - (
				/* 245L) */ (abs (
					var_1_36
				))
			))
		);
	} else {
		/* 251L) */ var_1_40 = (
			-10
		);
	}


	// From: CodeObject8
	/* 280L) */ if (/* 261L, 260L) */ ((/* 262L, 258L) */ ((var_1_38) ^ (var_1_40))) <= (var_1_26))) {
		/* 278L) */ if (var_1_41) {
			/* 277L) */ var_1_42 = (
				var_1_26
			);
		}
	}


	// From: Req4Batch82Filler_PS_CN
	/* 15L, 147L, 523L, 538L, 974L, 1050L) */ if (last_1_var_1_20) {
		/* 7L, 137L, 525L, 540L, 966L, 1053L) */ var_1_13 = (
			/* 6L, 136L, 528L, 543L, 965L, 1056L) */ (min (
				/* 6L, 136L, 528L, 543L, 965L, 1056L) */ (
					var_1_12
				) , (
					var_1_15
				)
			))
		);
	} else {
		/* 14L, 145L, 531L, 546L, 973L, 1059L) */ if (last_1_var_1_20) {
			/* 13L, 144L, 533L, 548L, 972L, 1062L) */ var_1_13 = (
				var_1_12
			);
		}
	}


	// From: Req3Batch82Filler_PS_CN
	/* 1043L, 116L, 483L, 494L) */ var_1_11 = (
		/* 1046L, 115L, 486L, 497L) */ ((
			200
		) - (
			var_1_12
		))
	);


	// From: Req1Batch82Filler_PS_CN
	unsigned char stepLocal_0 = var_1_13;
	/* 1018L, 78L, 311L, 336L) */ if (/* 997L, 4L, 5L, 312L, 337L) */ ((stepLocal_0) == (var_1_11))) {
		/* 1003L, 16L, 315L, 340L) */ var_1_1 = (
			/* 1002L, 15L, 318L, 343L) */ ((
				var_1_4
			) - (
				4.531
			))
		);
	} else {
		/* 1017L, 76L, 321L, 346L) */ if (/* 1008L, 21L, 22L, 322L, 347L) */ ((/* 1006L, 19L, 23L, 323L, 348L) */ ((var_1_4) - (var_1_5))) > (var_1_6))) {
			/* 1012L, 35L, 327L, 352L) */ var_1_1 = (
				var_1_4
			);
		} else {
			/* 1016L, 75L, 331L, 356L) */ var_1_1 = (
				200.5
			);
		}
	}


	// From: Req2Batch82Filler_PS_CN
	/* 1022L, 105L, 411L, 428L) */ if (/* 1023L, 86L, 87L, 412L, 429L) */ ((var_1_5) < (var_1_1))) {
		/* 1026L, 104L, 415L, 432L) */ var_1_7 = (
			/* 1029L, 103L, 418L, 435L) */ ((
				/* 1030L, 97L, 419L, 436L) */ (max (
					/* 1030L, 97L, 419L, 436L) */ (
						var_1_8
					) , (
						-8
					)
				))
			) + (
				/* 1033L, 102L, 422L, 439L) */ ((
					/* 1034L, 100L, 423L, 440L) */ (min (
						/* 1034L, 100L, 423L, 440L) */ (
							var_1_9
						) , (
							var_1_10
						)
					))
				) + (
					2
				))
			))
		);
	}


	// From: Req6Batch82Filler_PS_CN
	/* 1104L, 255L, 764L, 791L) */ if (/* 1105L, 221L, 222L, 765L, 792L) */ ((var_1_14) || (var_1_16))) {
		/* 1108L, 249L, 768L, 795L) */ if (/* 1109L, 230L, 231L, 769L, 796L) */ ((var_1_8) > (var_1_13))) {
			/* 1112L, 244L, 772L, 799L) */ var_1_19 = (
				/* 1115L, 243L, 775L, 802L) */ ((
					/* 1116L, 241L, 776L, 803L) */ (max (
						/* 1116L, 241L, 776L, 803L) */ (
							var_1_12
						) , (
							var_1_15
						)
					))
				) + (
					last_1_var_1_19
				))
			);
		} else {
			/* 1121L, 248L, 781L, 808L) */ var_1_19 = (
				var_1_11
			);
		}
	} else {
		/* 1125L, 254L, 785L, 812L) */ var_1_19 = (
			var_1_11
		);
	}


	// From: Req7Batch82Filler_PS_CN
	/* 1137L, 293L, 878L, 900L) */ if (/* 1138L, 269L, 270L, 879L, 901L) */ ((var_1_19) <= (/* 1140L, 268L, 272L, 881L, 903L) */ ((var_1_21) - (/* 1142L, 267L, 274L, 883L, 905L) */ (max (/* 1142L, 267L, 274L, 883L, 905L) */ (var_1_11) , (8)))))))) {
		/* 1145L, 291L, 886L, 908L) */ if (var_1_16) {
			/* 1147L, 290L, 888L, 910L) */ var_1_20 = (
				var_1_22
			);
		}
	}


	// From: Req5Batch82Filler_PS_CN
	signed long int stepLocal_1 = /* 1068L, 183L, 187L, 599L, 631L) */ (min (/* 1068L, 183L, 187L, 599L, 631L) */ (/* 1069L, 181L, 188L, 600L, 632L) */ ((var_1_13) * (var_1_12))) , (var_1_11)));
	/* 1099L, 213L, 583L, 615L) */ if (/* 1078L, 157L, 158L, 584L, 616L) */ ((var_1_1) <= (/* 1077L, 156L, 160L, 586L, 618L) */ ((var_1_5) - (var_1_4))))) {
		/* 1082L, 171L, 589L, 621L) */ var_1_17 = (
			var_1_9
		);
	} else {
		/* 1098L, 211L, 593L, 625L) */ if (/* 1084L, 173L, 174L, 594L, 626L) */ (! (var_1_20))) {
			/* 1097L, 209L, 596L, 628L) */ if (/* 1086L, 184L, 185L, 597L, 629L) */ ((var_1_11) > (stepLocal_1))) {
				/* 1090L, 202L, 604L, 636L) */ var_1_17 = (
					var_1_10
				);
			} else {
				/* 1096L, 208L, 608L, 640L) */ var_1_17 = (
					/* 1095L, 207L, 611L, 643L) */ (min (
						/* 1095L, 207L, 611L, 643L) */ (
							var_1_9
						) , (
							var_1_8
						)
					))
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -31);
	assume_abort_if_not(var_1_9 <= 32);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65535);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 4294967295);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 4294967295);
	assume_abort_if_not(var_1_38 != 0);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 287L, 4L, 8L, 362L, 387L, 1153L) */ ((var_1_13) == (var_1_11))) {
	} else {
		if (/* 297L, 21L, 27L, 372L, 397L, 1163L) */ ((/* 298L, 19L, 28L, 373L, 398L, 1164L) */ ((var_1_4) - (var_1_5))) > (var_1_6))) {
		} else {
		}
	}
	if (/* 312L, 86L, 90L, 446L, 463L, 1178L) */ ((var_1_5) < (var_1_1))) {
	}
	if (last_1_var_1_20) {
	} else {
		if (last_1_var_1_20) {
		}
	}
	if (/* 357L, 157L, 163L, 648L, 680L, 1223L) */ ((var_1_1) <= (/* 359L, 156L, 165L, 650L, 682L, 1225L) */ ((var_1_5) - (var_1_4))))) {
	} else {
		if (/* 367L, 173L, 176L, 658L, 690L, 1233L) */ (! (var_1_20))) {
			if (/* 370L, 184L, 192L, 661L, 693L, 1236L) */ ((var_1_11) > (/* 372L, 183L, 194L, 663L, 695L, 1238L) */ (min (/* 372L, 183L, 194L, 663L, 695L, 1238L) */ (/* 373L, 181L, 195L, 664L, 696L, 1239L) */ ((var_1_13) * (var_1_12))) , (var_1_11)))))) {
			} else {
			}
		}
	}
	if (/* 390L, 221L, 225L, 819L, 846L, 1256L) */ ((var_1_14) || (var_1_16))) {
		if (/* 394L, 230L, 234L, 823L, 850L, 1260L) */ ((var_1_8) > (var_1_13))) {
		} else {
		}
	} else {
	}
	if (/* 423L, 269L, 277L, 923L, 945L, 1289L) */ ((var_1_19) <= (/* 425L, 268L, 279L, 925L, 947L, 1291L) */ ((var_1_21) - (/* 427L, 267L, 281L, 927L, 949L, 1293L) */ (max (/* 427L, 267L, 281L, 927L, 949L, 1293L) */ (var_1_11) , (8)))))))) {
		if (var_1_16) {
		}
	}
	return /* 442L) */ ((
	/* 441L) */ ((
		/* 440L) */ ((
			/* 439L) */ ((
				/* 438L) */ ((
					/* 437L) */ ((
						/* 286L, 79L, 361L, 386L, 1152L) */ ((
							/* 287L, 4L, 8L, 362L, 387L, 1153L) */ ((
								var_1_13
							) == (
								var_1_11
							))
						) ? (
							/* 290L, 16L, 365L, 390L, 1156L) */ ((
								var_1_1
							) == (
								/* 290L, 16L, 365L, 390L, 1156L) */ ((double) (
									/* 293L, 15L, 368L, 393L, 1159L) */ ((
										var_1_4
									) - (
										4.531
									))
								))
							))
						) : (
							/* 296L, 77L, 371L, 396L, 1162L) */ ((
								/* 297L, 21L, 27L, 372L, 397L, 1163L) */ ((
									/* 298L, 19L, 28L, 373L, 398L, 1164L) */ ((
										var_1_4
									) - (
										var_1_5
									))
								) > (
									var_1_6
								))
							) ? (
								/* 302L, 35L, 377L, 402L, 1168L) */ ((
									var_1_1
								) == (
									/* 302L, 35L, 377L, 402L, 1168L) */ ((double) (
										var_1_4
									))
								))
							) : (
								/* 306L, 75L, 381L, 406L, 1172L) */ ((
									var_1_1
								) == (
									/* 306L, 75L, 381L, 406L, 1172L) */ ((double) (
										200.5
									))
								))
							))
						))
					) && (
						/* 311L, 106L, 445L, 462L, 1177L) */ ((
							/* 312L, 86L, 90L, 446L, 463L, 1178L) */ ((
								var_1_5
							) < (
								var_1_1
							))
						) ? (
							/* 315L, 104L, 449L, 466L, 1181L) */ ((
								var_1_7
							) == (
								/* 315L, 104L, 449L, 466L, 1181L) */ ((signed char) (
									/* 318L, 103L, 452L, 469L, 1184L) */ ((
										/* 319L, 97L, 453L, 470L, 1185L) */ (max (
											/* 319L, 97L, 453L, 470L, 1185L) */ (
												var_1_8
											) , (
												-8
											)
										))
									) + (
										/* 322L, 102L, 456L, 473L, 1188L) */ ((
											/* 323L, 100L, 457L, 474L, 1189L) */ (min (
												/* 323L, 100L, 457L, 474L, 1189L) */ (
													var_1_9
												) , (
													var_1_10
												)
											))
										) + (
											2
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 332L, 116L, 505L, 516L, 1198L) */ ((
						var_1_11
					) == (
						/* 332L, 116L, 505L, 516L, 1198L) */ ((unsigned char) (
							/* 335L, 115L, 508L, 519L, 1201L) */ ((
								200
							) - (
								var_1_12
							))
						))
					))
				))
			) && (
				/* 339L, 148L, 553L, 568L, 991L, 1205L, 32L) */ ((
					last_1_var_1_20
				) ? (
					/* 342L, 137L, 555L, 570L, 983L, 1208L, 24L) */ ((
						var_1_13
					) == (
						/* 342L, 137L, 555L, 570L, 983L, 1208L, 24L) */ ((unsigned char) (
							/* 345L, 136L, 558L, 573L, 982L, 1211L, 23L) */ (min (
								/* 345L, 136L, 558L, 573L, 982L, 1211L, 23L) */ (
									var_1_12
								) , (
									var_1_15
								)
							))
						))
					))
				) : (
					/* 348L, 146L, 561L, 576L, 990L, 1214L, 31L) */ ((
						last_1_var_1_20
					) ? (
						/* 351L, 144L, 563L, 578L, 989L, 1217L, 30L) */ ((
							var_1_13
						) == (
							/* 351L, 144L, 563L, 578L, 989L, 1217L, 30L) */ ((unsigned char) (
								var_1_12
							))
						))
					) : (
						1
					))
				))
			))
		) && (
			/* 356L, 214L, 647L, 679L, 1222L) */ ((
				/* 357L, 157L, 163L, 648L, 680L, 1223L) */ ((
					var_1_1
				) <= (
					/* 359L, 156L, 165L, 650L, 682L, 1225L) */ ((
						var_1_5
					) - (
						var_1_4
					))
				))
			) ? (
				/* 362L, 171L, 653L, 685L, 1228L) */ ((
					var_1_17
				) == (
					/* 362L, 171L, 653L, 685L, 1228L) */ ((signed char) (
						var_1_9
					))
				))
			) : (
				/* 366L, 212L, 657L, 689L, 1232L) */ ((
					/* 367L, 173L, 176L, 658L, 690L, 1233L) */ (! (
						var_1_20
					))
				) ? (
					/* 369L, 210L, 660L, 692L, 1235L) */ ((
						/* 370L, 184L, 192L, 661L, 693L, 1236L) */ ((
							var_1_11
						) > (
							/* 372L, 183L, 194L, 663L, 695L, 1238L) */ (min (
								/* 372L, 183L, 194L, 663L, 695L, 1238L) */ (
									/* 373L, 181L, 195L, 664L, 696L, 1239L) */ ((
										var_1_13
									) * (
										var_1_12
									))
								) , (
									var_1_11
								)
							))
						))
					) ? (
						/* 377L, 202L, 668L, 700L, 1243L) */ ((
							var_1_17
						) == (
							/* 377L, 202L, 668L, 700L, 1243L) */ ((signed char) (
								var_1_10
							))
						))
					) : (
						/* 381L, 208L, 672L, 704L, 1247L) */ ((
							var_1_17
						) == (
							/* 381L, 208L, 672L, 704L, 1247L) */ ((signed char) (
								/* 384L, 207L, 675L, 707L, 1250L) */ (min (
									/* 384L, 207L, 675L, 707L, 1250L) */ (
										var_1_9
									) , (
										var_1_8
									)
								))
							))
						))
					))
				) : (
					1
				))
			))
		))
	) && (
		/* 389L, 256L, 818L, 845L, 1255L) */ ((
			/* 390L, 221L, 225L, 819L, 846L, 1256L) */ ((
				var_1_14
			) || (
				var_1_16
			))
		) ? (
			/* 393L, 250L, 822L, 849L, 1259L) */ ((
				/* 394L, 230L, 234L, 823L, 850L, 1260L) */ ((
					var_1_8
				) > (
					var_1_13
				))
			) ? (
				/* 397L, 244L, 826L, 853L, 1263L) */ ((
					var_1_19
				) == (
					/* 397L, 244L, 826L, 853L, 1263L) */ ((unsigned short int) (
						/* 400L, 243L, 829L, 856L, 1266L) */ ((
							/* 401L, 241L, 830L, 857L, 1267L) */ (max (
								/* 401L, 241L, 830L, 857L, 1267L) */ (
									var_1_12
								) , (
									var_1_15
								)
							))
						) + (
							last_1_var_1_19
						))
					))
				))
			) : (
				/* 406L, 248L, 835L, 862L, 1272L) */ ((
					var_1_19
				) == (
					/* 406L, 248L, 835L, 862L, 1272L) */ ((unsigned short int) (
						var_1_11
					))
				))
			))
		) : (
			/* 410L, 254L, 839L, 866L, 1276L) */ ((
				var_1_19
			) == (
				/* 410L, 254L, 839L, 866L, 1276L) */ ((unsigned short int) (
					var_1_11
				))
			))
		))
	))
) && (
	/* 422L, 294L, 922L, 944L, 1288L) */ ((
		/* 423L, 269L, 277L, 923L, 945L, 1289L) */ ((
			var_1_19
		) <= (
			/* 425L, 268L, 279L, 925L, 947L, 1291L) */ ((
				var_1_21
			) - (
				/* 427L, 267L, 281L, 927L, 949L, 1293L) */ (max (
					/* 427L, 267L, 281L, 927L, 949L, 1293L) */ (
						var_1_11
					) , (
						8
					)
				))
			))
		))
	) ? (
		/* 430L, 292L, 930L, 952L, 1296L) */ ((
			var_1_16
		) ? (
			/* 432L, 290L, 932L, 954L, 1298L) */ ((
				var_1_20
			) == (
				/* 432L, 290L, 932L, 954L, 1298L) */ ((unsigned char) (
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

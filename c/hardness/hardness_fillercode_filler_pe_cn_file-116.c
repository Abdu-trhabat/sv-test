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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116Filler_PE_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = 100;
signed long int var_1_5 = -128;
unsigned char var_1_6 = 0;
unsigned long int var_1_7 = 32;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 10;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 50;
signed long int var_1_15 = 8;
signed long int var_1_16 = 1155742021;
signed long int var_1_17 = -32;
signed short int var_1_18 = 4;
unsigned short int var_1_19 = 32;
unsigned short int var_1_20 = 128;
signed long int var_1_21 = -16;
signed long int var_1_22 = 100000;
signed short int var_1_23 = -5;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 35397;
unsigned short int var_1_27 = 64;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 200;
float var_1_32 = 16.375;
unsigned char var_1_33 = 10;
unsigned char var_1_34 = 4;
unsigned char var_1_35 = 5;
unsigned char var_1_36 = 1;
unsigned long int var_1_37 = 10;
signed short int var_1_38 = 16;
unsigned char var_1_39 = 10;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_7 = 32;
unsigned short int last_1_var_1_8 = 4;
signed long int last_1_var_1_15 = 8;
signed long int last_1_var_1_17 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch116Filler_PE_CN
	/* 66L, 110L, 452L, 465L, 917L, 982L) */ if (/* 58L, 91L, 92L, 453L, 466L, 909L, 983L) */ ((last_1_var_1_17) <= (last_1_var_1_15))) {
		/* 65L, 108L, 456L, 469L, 916L, 988L) */ if (/* 60L, 99L, 100L, 457L, 470L, 911L, 989L) */ (! (var_1_6))) {
			/* 64L, 107L, 459L, 472L, 915L, 991L) */ var_1_8 = (
				var_1_9
			);
		}
	}


	// From: Req6Batch116Filler_PE_CN
	/* 24L, 211L, 652L, 676L, 875L, 1034L) */ if (/* 6L, 184L, 185L, 653L, 677L, 857L, 1035L) */ ((/* 3L, 182L, 186L, 654L, 678L, 854L, 1036L) */ ((var_1_12) * (last_1_var_1_7))) > (last_1_var_1_7))) {
		/* 12L, 200L, 658L, 682L, 863L, 1042L) */ var_1_15 = (
			/* 11L, 199L, 661L, 685L, 862L, 1045L) */ (max (
				/* 11L, 199L, 661L, 685L, 862L, 1045L) */ (
					var_1_13
				) , (
					var_1_12
				)
			))
		);
	} else {
		/* 23L, 210L, 664L, 688L, 874L, 1048L) */ var_1_15 = (
			/* 22L, 209L, 667L, 691L, 873L, 1051L) */ ((
				/* 20L, 207L, 668L, 692L, 871L, 1052L) */ (max (
					/* 20L, 207L, 668L, 692L, 871L, 1052L) */ (
						/* 17L, 205L, 669L, 693L, 868L, 1053L) */ ((
							var_1_16
						) - (
							var_1_9
						))
					) , (
						last_1_var_1_8
					)
				))
			) - (
				4
			))
		);
	}


	// From: Req5Batch116Filler_PE_CN
	/* 1018L, 170L, 585L, 602L) */ if (/* 1019L, 153L, 154L, 586L, 603L) */ ((var_1_15) >= (1))) {
		/* 1022L, 163L, 589L, 606L) */ var_1_14 = (
			var_1_13
		);
	} else {
		/* 1026L, 169L, 593L, 610L) */ var_1_14 = (
			/* 1029L, 168L, 596L, 613L) */ ((
				var_1_13
			) + (
				5
			))
		);
	}


	// From: Req4Batch116Filler_PE_CN
	/* 999L, 139L, 506L, 526L) */ if (/* 1000L, 120L, 121L, 507L, 527L) */ ((var_1_6) || (var_1_11))) {
		/* 1003L, 132L, 510L, 530L) */ var_1_10 = (
			/* 1006L, 131L, 513L, 533L) */ (max (
				/* 1006L, 131L, 513L, 533L) */ (
					5
				) , (
					var_1_12
				)
			))
		);
	} else {
		/* 1009L, 138L, 516L, 536L) */ var_1_10 = (
			/* 1012L, 137L, 519L, 539L) */ ((
				128
			) - (
				var_1_13
			))
		);
	}


	// From: Req7Batch116Filler_PE_CN
	/* 1061L, 251L, 748L, 774L) */ if (var_1_6) {
		/* 1063L, 229L, 750L, 776L) */ var_1_17 = (
			/* 1066L, 228L, 753L, 779L) */ (max (
				/* 1066L, 228L, 753L, 779L) */ (
					/* 1067L, 226L, 754L, 780L) */ (min (
						/* 1067L, 226L, 754L, 780L) */ (
							var_1_8
						) , (
							var_1_10
						)
					))
				) , (
					-25
				)
			))
		);
	} else {
		/* 1071L, 249L, 758L, 784L) */ if (/* 1072L, 232L, 233L, 759L, 785L) */ ((var_1_15) >= (var_1_8))) {
			/* 1075L, 244L, 762L, 788L) */ var_1_17 = (
				/* 1078L, 243L, 765L, 791L) */ (max (
					/* 1078L, 243L, 765L, 791L) */ (
						var_1_10
					) , (
						var_1_14
					)
				))
			);
		} else {
			/* 1081L, 248L, 768L, 794L) */ var_1_17 = (
				16
			);
		}
	}


	// From: Req1Batch116Filler_PE_CN
	/* 936L, 45L, 258L, 285L) */ if (/* 937L, 9L, 10L, 259L, 286L) */ ((/* 938L, 3L, 11L, 260L, 287L) */ (~ (var_1_8))) < (/* 940L, 8L, 13L, 262L, 289L) */ ((/* 941L, 6L, 14L, 263L, 290L) */ ((var_1_17) * (var_1_15))) / (var_1_5))))) {
		/* 945L, 39L, 267L, 294L) */ if (var_1_6) {
			/* 947L, 34L, 269L, 296L) */ var_1_1 = (
				/* 950L, 33L, 272L, 299L) */ ((
					128
				) - (
					var_1_8
				))
			);
		} else {
			/* 953L, 38L, 275L, 302L) */ var_1_1 = (
				var_1_8
			);
		}
	} else {
		/* 957L, 44L, 279L, 306L) */ var_1_1 = (
			var_1_8
		);
	}


	// From: Req2Batch116Filler_PE_CN
	unsigned char stepLocal_0 = /* 963L, 58L, 64L, 370L, 385L) */ ((var_1_8) <= (var_1_5));
	/* 977L, 83L, 365L, 380L) */ if (/* 970L, 59L, 60L, 366L, 381L) */ ((/* 969L, 55L, 61L, 367L, 382L) */ ((var_1_1) < (var_1_15))) || (stepLocal_0))) {
		/* 976L, 81L, 373L, 388L) */ if (var_1_6) {
			/* 975L, 80L, 375L, 390L) */ var_1_7 = (
				var_1_8
			);
		}
	}


	// From: CodeObject1
	/* 119L) */ if (/* 94L, 93L) */ ((/* 95L, 88L) */ ((var_1_19) / (var_1_20))) < (/* 98L, 92L) */ (min (/* 98L, 92L) */ (/* 99L, 90L) */ (~ (var_1_21))) , (var_1_22)))))) {
		/* 114L) */ var_1_18 = (
			/* 113L) */ (abs (
				var_1_23
			))
		);
	} else {
		/* 118L) */ var_1_18 = (
			var_1_23
		);
	}


	// From: CodeObject2
	/* 138L) */ if (/* 127L, 126L) */ ((var_1_20) != (var_1_21))) {
		/* 137L) */ var_1_24 = (
			/* 136L) */ (! (
				0
			))
		);
	}


	// From: CodeObject3
	/* 177L) */ if (var_1_24) {
		/* 167L) */ if (/* 151L, 150L) */ ((/* 152L, 147L) */ ((var_1_26) - (var_1_27))) > (/* 155L, 149L) */ (abs (var_1_23))))) {
			/* 166L) */ var_1_25 = (
				var_1_28
			);
		}
	} else {
		/* 176L) */ var_1_25 = (
			/* 175L) */ ((
				var_1_28
			) && (
				/* 174L) */ ((
					var_1_29
				) && (
					var_1_30
				))
			))
		);
	}


	// From: CodeObject4
	/* 209L) */ if (/* 193L, 192L) */ ((/* 194L, 190L) */ (abs (/* 195L, 189L) */ (min (/* 195L, 189L) */ (var_1_32) , (63.5f)))))) > (4.5f))) {
		/* 208L) */ var_1_31 = (
			var_1_33
		);
	}


	// From: CodeObject5
	/* 238L) */ if (var_1_29) {
		/* 236L) */ if (/* 219L, 218L) */ ((var_1_19) > (128))) {
			/* 235L) */ var_1_34 = (
				/* 234L) */ (min (
					/* 234L) */ (
						0
					) , (
						/* 233L) */ (min (
							/* 233L) */ (
								/* 229L) */ (abs (
									16
								))
							) , (
								/* 232L) */ (min (
									/* 232L) */ (
										var_1_33
									) , (
										var_1_35
									)
								))
							)
						))
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 255L) */ if (/* 245L, 244L) */ ((var_1_21) > (var_1_23))) {
		/* 254L) */ var_1_36 = (
			var_1_28
		);
	}


	// From: CodeObject7
	/* 281L) */ if (var_1_36) {
		/* 272L) */ var_1_37 = (
			/* 271L) */ ((
				/* 268L) */ (min (
					/* 268L) */ (
						var_1_33
					) , (
						var_1_34
					)
				))
			) + (
				/* 270L) */ (abs (
					var_1_19
				))
			))
		);
	} else {
		/* 280L) */ var_1_37 = (
			/* 279L) */ (max (
				/* 279L) */ (
					256u
				) , (
					/* 278L) */ (max (
						/* 278L) */ (
							var_1_35
						) , (
							var_1_19
						)
					))
				)
			))
		);
	}


	// From: CodeObject8
	/* 300L) */ if (/* 288L, 287L) */ ((var_1_35) >= (var_1_27))) {
		/* 299L) */ var_1_38 = (
			/* 298L) */ ((
				var_1_33
			) - (
				var_1_35
			))
		);
	}


	// From: CodeObject9
	/* 307L) */ var_1_39 = (
		var_1_33
	);
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 1073741822);
	assume_abort_if_not(var_1_16 <= 2147483646);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 65535);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 65535);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -2147483648);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32766);
	assume_abort_if_not(var_1_23 <= 32766);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65535);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 312L, 9L, 18L, 313L, 340L, 1088L) */ ((/* 313L, 3L, 19L, 314L, 341L, 1089L) */ (~ (var_1_8))) < (/* 315L, 8L, 21L, 316L, 343L, 1091L) */ ((/* 316L, 6L, 22L, 317L, 344L, 1092L) */ ((var_1_17) * (var_1_15))) / (var_1_5))))) {
		if (var_1_6) {
		} else {
		}
	} else {
	}
	if (/* 338L, 59L, 67L, 396L, 411L, 1114L) */ ((/* 339L, 55L, 68L, 397L, 412L, 1115L) */ ((var_1_1) < (var_1_15))) || (/* 342L, 58L, 71L, 400L, 415L, 1118L) */ ((var_1_8) <= (var_1_5))))) {
		if (var_1_6) {
		}
	}
	if (/* 354L, 91L, 95L, 479L, 492L, 924L, 1130L, 73L) */ ((last_1_var_1_17) <= (last_1_var_1_15))) {
		if (/* 360L, 99L, 102L, 483L, 496L, 926L, 1136L, 75L) */ (! (var_1_6))) {
		}
	}
	if (/* 371L, 120L, 124L, 547L, 567L, 1147L) */ ((var_1_6) || (var_1_11))) {
	} else {
	}
	if (/* 390L, 153L, 157L, 620L, 637L, 1166L) */ ((var_1_15) >= (1))) {
	} else {
	}
	if (/* 406L, 184L, 190L, 701L, 725L, 884L, 1182L, 33L) */ ((/* 407L, 182L, 191L, 702L, 726L, 881L, 1183L, 30L) */ ((var_1_12) * (last_1_var_1_7))) > (last_1_var_1_7))) {
	} else {
	}
	if (var_1_6) {
	} else {
		if (/* 443L, 232L, 236L, 811L, 837L, 1219L) */ ((var_1_15) >= (var_1_8))) {
		} else {
		}
	}
	return /* 462L) */ ((
	/* 461L) */ ((
		/* 460L) */ ((
			/* 459L) */ ((
				/* 458L) */ ((
					/* 457L) */ ((
						/* 311L, 46L, 312L, 339L, 1087L) */ ((
							/* 312L, 9L, 18L, 313L, 340L, 1088L) */ ((
								/* 313L, 3L, 19L, 314L, 341L, 1089L) */ (~ (
									var_1_8
								))
							) < (
								/* 315L, 8L, 21L, 316L, 343L, 1091L) */ ((
									/* 316L, 6L, 22L, 317L, 344L, 1092L) */ ((
										var_1_17
									) * (
										var_1_15
									))
								) / (
									var_1_5
								))
							))
						) ? (
							/* 320L, 40L, 321L, 348L, 1096L) */ ((
								var_1_6
							) ? (
								/* 322L, 34L, 323L, 350L, 1098L) */ ((
									var_1_1
								) == (
									/* 322L, 34L, 323L, 350L, 1098L) */ ((signed long int) (
										/* 325L, 33L, 326L, 353L, 1101L) */ ((
											128
										) - (
											var_1_8
										))
									))
								))
							) : (
								/* 328L, 38L, 329L, 356L, 1104L) */ ((
									var_1_1
								) == (
									/* 328L, 38L, 329L, 356L, 1104L) */ ((signed long int) (
										var_1_8
									))
								))
							))
						) : (
							/* 332L, 44L, 333L, 360L, 1108L) */ ((
								var_1_1
							) == (
								/* 332L, 44L, 333L, 360L, 1108L) */ ((signed long int) (
									var_1_8
								))
							))
						))
					) && (
						/* 337L, 84L, 395L, 410L, 1113L) */ ((
							/* 338L, 59L, 67L, 396L, 411L, 1114L) */ ((
								/* 339L, 55L, 68L, 397L, 412L, 1115L) */ ((
									var_1_1
								) < (
									var_1_15
								))
							) || (
								/* 342L, 58L, 71L, 400L, 415L, 1118L) */ ((
									var_1_8
								) <= (
									var_1_5
								))
							))
						) ? (
							/* 345L, 82L, 403L, 418L, 1121L) */ ((
								var_1_6
							) ? (
								/* 347L, 80L, 405L, 420L, 1123L) */ ((
									var_1_7
								) == (
									/* 347L, 80L, 405L, 420L, 1123L) */ ((unsigned long int) (
										var_1_8
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
					/* 353L, 111L, 478L, 491L, 932L, 1129L, 81L) */ ((
						/* 354L, 91L, 95L, 479L, 492L, 924L, 1130L, 73L) */ ((
							last_1_var_1_17
						) <= (
							last_1_var_1_15
						))
					) ? (
						/* 359L, 109L, 482L, 495L, 931L, 1135L, 80L) */ ((
							/* 360L, 99L, 102L, 483L, 496L, 926L, 1136L, 75L) */ (! (
								var_1_6
							))
						) ? (
							/* 362L, 107L, 485L, 498L, 930L, 1138L, 79L) */ ((
								var_1_8
							) == (
								/* 362L, 107L, 485L, 498L, 930L, 1138L, 79L) */ ((unsigned short int) (
									var_1_9
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
				/* 370L, 140L, 546L, 566L, 1146L) */ ((
					/* 371L, 120L, 124L, 547L, 567L, 1147L) */ ((
						var_1_6
					) || (
						var_1_11
					))
				) ? (
					/* 374L, 132L, 550L, 570L, 1150L) */ ((
						var_1_10
					) == (
						/* 374L, 132L, 550L, 570L, 1150L) */ ((unsigned char) (
							/* 377L, 131L, 553L, 573L, 1153L) */ (max (
								/* 377L, 131L, 553L, 573L, 1153L) */ (
									5
								) , (
									var_1_12
								)
							))
						))
					))
				) : (
					/* 380L, 138L, 556L, 576L, 1156L) */ ((
						var_1_10
					) == (
						/* 380L, 138L, 556L, 576L, 1156L) */ ((unsigned char) (
							/* 383L, 137L, 559L, 579L, 1159L) */ ((
								128
							) - (
								var_1_13
							))
						))
					))
				))
			))
		) && (
			/* 389L, 171L, 619L, 636L, 1165L) */ ((
				/* 390L, 153L, 157L, 620L, 637L, 1166L) */ ((
					var_1_15
				) >= (
					1
				))
			) ? (
				/* 393L, 163L, 623L, 640L, 1169L) */ ((
					var_1_14
				) == (
					/* 393L, 163L, 623L, 640L, 1169L) */ ((unsigned char) (
						var_1_13
					))
				))
			) : (
				/* 397L, 169L, 627L, 644L, 1173L) */ ((
					var_1_14
				) == (
					/* 397L, 169L, 627L, 644L, 1173L) */ ((unsigned char) (
						/* 400L, 168L, 630L, 647L, 1176L) */ ((
							var_1_13
						) + (
							5
						))
					))
				))
			))
		))
	) && (
		/* 405L, 212L, 700L, 724L, 902L, 1181L, 51L) */ ((
			/* 406L, 184L, 190L, 701L, 725L, 884L, 1182L, 33L) */ ((
				/* 407L, 182L, 191L, 702L, 726L, 881L, 1183L, 30L) */ ((
					var_1_12
				) * (
					last_1_var_1_7
				))
			) > (
				last_1_var_1_7
			))
		) ? (
			/* 413L, 200L, 706L, 730L, 890L, 1189L, 39L) */ ((
				var_1_15
			) == (
				/* 413L, 200L, 706L, 730L, 890L, 1189L, 39L) */ ((signed long int) (
					/* 416L, 199L, 709L, 733L, 889L, 1192L, 38L) */ (max (
						/* 416L, 199L, 709L, 733L, 889L, 1192L, 38L) */ (
							var_1_13
						) , (
							var_1_12
						)
					))
				))
			))
		) : (
			/* 419L, 210L, 712L, 736L, 901L, 1195L, 50L) */ ((
				var_1_15
			) == (
				/* 419L, 210L, 712L, 736L, 901L, 1195L, 50L) */ ((signed long int) (
					/* 422L, 209L, 715L, 739L, 900L, 1198L, 49L) */ ((
						/* 423L, 207L, 716L, 740L, 898L, 1199L, 47L) */ (max (
							/* 423L, 207L, 716L, 740L, 898L, 1199L, 47L) */ (
								/* 424L, 205L, 717L, 741L, 895L, 1200L, 44L) */ ((
									var_1_16
								) - (
									var_1_9
								))
							) , (
								last_1_var_1_8
							)
						))
					) - (
						4
					))
				))
			))
		))
	))
) && (
	/* 432L, 252L, 800L, 826L, 1208L) */ ((
		var_1_6
	) ? (
		/* 434L, 229L, 802L, 828L, 1210L) */ ((
			var_1_17
		) == (
			/* 434L, 229L, 802L, 828L, 1210L) */ ((signed long int) (
				/* 437L, 228L, 805L, 831L, 1213L) */ (max (
					/* 437L, 228L, 805L, 831L, 1213L) */ (
						/* 438L, 226L, 806L, 832L, 1214L) */ (min (
							/* 438L, 226L, 806L, 832L, 1214L) */ (
								var_1_8
							) , (
								var_1_10
							)
						))
					) , (
						-25
					)
				))
			))
		))
	) : (
		/* 442L, 250L, 810L, 836L, 1218L) */ ((
			/* 443L, 232L, 236L, 811L, 837L, 1219L) */ ((
				var_1_15
			) >= (
				var_1_8
			))
		) ? (
			/* 446L, 244L, 814L, 840L, 1222L) */ ((
				var_1_17
			) == (
				/* 446L, 244L, 814L, 840L, 1222L) */ ((signed long int) (
					/* 449L, 243L, 817L, 843L, 1225L) */ (max (
						/* 449L, 243L, 817L, 843L, 1225L) */ (
							var_1_10
						) , (
							var_1_14
						)
					))
				))
			))
		) : (
			/* 452L, 248L, 820L, 846L, 1228L) */ ((
				var_1_17
			) == (
				/* 452L, 248L, 820L, 846L, 1228L) */ ((signed long int) (
					16
				))
			))
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

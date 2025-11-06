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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch69Filler_PE_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 4;
signed short int var_1_2 = -4;
signed short int var_1_3 = 128;
signed short int var_1_4 = 10;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 64;
signed char var_1_9 = -128;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
double var_1_12 = 32.75;
double var_1_13 = 255.6;
unsigned short int var_1_14 = 5;
float var_1_16 = 8.6;
float var_1_17 = 9.5;
float var_1_18 = 99.2;
unsigned char var_1_19 = 128;
float var_1_21 = 8.5;
double var_1_22 = 4.75;
signed short int var_1_23 = -2;
unsigned short int var_1_24 = 64;
unsigned short int var_1_26 = 256;
unsigned short int var_1_27 = 100;
unsigned short int var_1_28 = 16;
unsigned short int var_1_29 = 10;
unsigned long int var_1_30 = 128;
signed short int var_1_31 = 1000;
signed char var_1_32 = -10;
signed short int var_1_34 = -256;
unsigned char var_1_37 = 50;
signed long int var_1_40 = -64;

// Calibration values

// Last'ed variables
double last_1_var_1_12 = 32.75;
signed short int last_1_var_1_23 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch69Filler_PE_CI
	unsigned char stepLocal_5 = var_1_5;
	/* 16L, 213L, 760L, 773L, 1037L, 1165L) */ if (/* 6L, 191L, 192L, 761L, 774L, 1027L, 1156L) */ ((last_1_var_1_12) < (var_1_13))) {
		/* 15L, 211L, 764L, 777L, 1036L, 1164L) */ if (/* 10L, 200L, 201L, 765L, 778L, 1031L, 1159L) */ ((last_1_var_1_23) == (stepLocal_5))) {
			/* 14L, 210L, 768L, 781L, 1035L, 1163L) */ var_1_14 = (
				var_1_7
			);
		}
	}


	// From: Req9Batch69Filler_PE_CI
	/* 1224L, 315L, 1001L, 1007L) */ var_1_23 = (
		var_1_14
	);


	// From: Req1Batch69Filler_PE_CI
	signed long int stepLocal_0 = /* 1055L, 5L, 9L, 323L, 346L) */ ((var_1_3) - (var_1_4));
	/* 1077L, 33L, 320L, 343L) */ if (/* 1060L, 6L, 7L, 321L, 344L) */ ((var_1_14) >= (stepLocal_0))) {
		/* 1070L, 26L, 326L, 349L) */ var_1_1 = (
			/* 1069L, 25L, 329L, 352L) */ ((
				/* 1067L, 23L, 330L, 353L) */ ((
					var_1_5
				) - (
					/* 1066L, 22L, 332L, 355L) */ (min (
						/* 1066L, 22L, 332L, 355L) */ (
							var_1_6
						) , (
							var_1_7
						)
					))
				))
			) - (
				var_1_8
			))
		);
	} else {
		/* 1076L, 32L, 336L, 359L) */ var_1_1 = (
			/* 1075L, 31L, 339L, 362L) */ ((
				32
			) + (
				var_1_7
			))
		);
	}


	// From: Req2Batch69Filler_PE_CI
	unsigned char stepLocal_2 = var_1_11;
	signed short int stepLocal_1 = var_1_4;
	/* 1106L, 77L, 412L, 435L) */ if (/* 1090L, 43L, 44L, 413L, 436L) */ ((/* 1089L, 41L, 45L, 414L, 437L) */ ((var_1_8) - (var_1_5))) >= (stepLocal_1))) {
		/* 1101L, 71L, 418L, 441L) */ if (/* 1092L, 56L, 57L, 419L, 442L) */ ((var_1_10) || (stepLocal_2))) {
			/* 1096L, 66L, 422L, 445L) */ var_1_9 = (
				var_1_6
			);
		} else {
			/* 1100L, 70L, 426L, 449L) */ var_1_9 = (
				var_1_7
			);
		}
	} else {
		/* 1105L, 76L, 430L, 453L) */ var_1_9 = (
			var_1_5
		);
	}


	// From: Req3Batch69Filler_PE_CI
	unsigned char stepLocal_4 = var_1_7;
	unsigned char stepLocal_3 = /* 1112L, 96L, 100L, 638L, 670L) */ ((/* 1113L, 94L, 101L, 639L, 671L) */ ((var_1_9) + (var_1_2))) == (var_1_3));
	/* 1145L, 183L, 632L, 664L) */ if (/* 1122L, 85L, 86L, 633L, 665L) */ ((stepLocal_4) > (var_1_4))) {
		/* 1140L, 177L, 636L, 668L) */ if (/* 1124L, 98L, 99L, 637L, 669L) */ ((stepLocal_3) && (var_1_10))) {
			/* 1135L, 171L, 644L, 676L) */ if (/* 1126L, 114L, 115L, 645L, 677L) */ (! (var_1_11))) {
				/* 1130L, 122L, 647L, 679L) */ var_1_12 = (
					var_1_13
				);
			} else {
				/* 1134L, 170L, 651L, 683L) */ var_1_12 = (
					1.4
				);
			}
		} else {
			/* 1139L, 176L, 655L, 687L) */ var_1_12 = (
				var_1_13
			);
		}
	} else {
		/* 1144L, 182L, 659L, 691L) */ var_1_12 = (
			var_1_13
		);
	}


	// From: Req5Batch69Filler_PE_CI
	/* 1171L, 237L, 814L, 828L) */ if (/* 1172L, 222L, 223L, 815L, 829L) */ (! (/* 1173L, 221L, 224L, 816L, 830L) */ ((var_1_11) && (var_1_10))))) {
		/* 1176L, 236L, 819L, 833L) */ var_1_16 = (
			/* 1179L, 235L, 822L, 836L) */ ((
				var_1_17
			) + (
				var_1_18
			))
		);
	}


	// From: Req6Batch69Filler_PE_CI
	signed short int stepLocal_7 = var_1_23;
	signed short int stepLocal_6 = var_1_23;
	/* 1206L, 286L, 868L, 889L) */ if (/* 1190L, 249L, 250L, 869L, 890L) */ ((stepLocal_7) < (var_1_7))) {
		/* 1205L, 284L, 872L, 893L) */ if (var_1_10) {
			/* 1200L, 278L, 874L, 895L) */ if (/* 1195L, 263L, 264L, 875L, 896L) */ ((stepLocal_6) >= (/* 1194L, 262L, 266L, 877L, 898L) */ ((var_1_6) % (var_1_5))))) {
				/* 1199L, 277L, 880L, 901L) */ var_1_19 = (
					var_1_8
				);
			}
		} else {
			/* 1204L, 283L, 884L, 905L) */ var_1_19 = (
				50
			);
		}
	}


	// From: Req7Batch69Filler_PE_CI
	/* 1212L, 295L, 953L, 959L) */ var_1_21 = (
		var_1_13
	);


	// From: Req8Batch69Filler_PE_CI
	/* 1218L, 305L, 977L, 983L) */ var_1_22 = (
		2.7
	);


	// From: CodeObject1
	/* 269L, 49L) */ if (var_1_10) {
		/* 271L, 48L) */ var_1_24 = (
			/* 274L, 47L) */ ((
				/* 275L, 45L) */ ((
					/* 276L, 43L) */ (max (
						/* 276L, 43L) */ (
							var_1_26
						) , (
							var_1_27
						)
					))
				) + (
					var_1_28
				))
			) + (
				1
			))
		);
	}


	// From: CodeObject2
	/* 282L, 56L) */ var_1_29 = (
		var_1_26
	);


	// From: CodeObject3
	/* 286L, 85L) */ if (/* 287L, 63L, 64L) */ ((var_1_26) > (var_1_28))) {
		/* 290L, 83L) */ if (/* 291L, 72L, 73L) */ ((var_1_14) >= (var_1_26))) {
			/* 294L, 82L) */ var_1_30 = (
				var_1_26
			);
		}
	}


	// From: CodeObject4
	/* 298L, 103L) */ if (/* 299L, 91L, 92L) */ ((var_1_30) <= (100u))) {
		/* 302L, 102L) */ var_1_31 = (
			/* 305L, 101L) */ (abs (
				var_1_28
			))
		);
	}


	// From: CodeObject5
	/* 307L, 201L) */ if (var_1_10) {
		/* 309L, 130L) */ if (/* 310L, 112L, 113L) */ ((var_1_28) <= (var_1_26))) {
			/* 313L, 123L) */ var_1_32 = (
				/* 316L, 122L) */ (abs (
					-32
				))
			);
		} else {
			/* 318L, 129L) */ var_1_32 = (
				/* 321L, 128L) */ (min (
					/* 321L, 128L) */ (
						var_1_6
					) , (
						0
					)
				))
			);
		}
	} else {
		/* 324L, 199L) */ if (/* 325L, 138L, 139L) */ ((/* 326L, 134L, 140L) */ ((var_1_28) % (var_1_34))) != (/* 329L, 137L, 143L) */ ((var_1_14) + (var_1_30))))) {
			/* 332L, 182L) */ if (/* 333L, 157L, 158L) */ ((/* 334L, 155L, 159L) */ (min (/* 334L, 155L, 159L) */ (8.4f) , (var_1_12)))) < (127.2f))) {
				/* 338L, 172L) */ var_1_32 = (
					/* 341L, 171L) */ (abs (
						var_1_7
					))
				);
			} else {
				/* 343L, 181L) */ var_1_32 = (
					var_1_7
				);
			}
		} else {
			/* 347L, 197L) */ if (/* 348L, 186L, 187L) */ ((var_1_28) != (var_1_14))) {
				/* 351L, 196L) */ var_1_32 = (
					var_1_6
				);
			}
		}
	}


	// From: CodeObject6
	/* 355L, 222L) */ if (var_1_10) {
		/* 357L, 212L) */ var_1_37 = (
			/* 360L, 211L) */ (abs (
				var_1_6
			))
		);
	} else {
		/* 362L, 221L) */ var_1_37 = (
			/* 365L, 220L) */ (min (
				/* 365L, 220L) */ (
					var_1_6
				) , (
					/* 367L, 219L) */ (abs (
						/* 368L, 218L) */ ((
							var_1_5
						) - (
							1
						))
					))
				)
			))
		);
	}


	// From: CodeObject7
	/* 371L, 267L) */ if (/* 372L, 229L, 230L) */ ((var_1_7) > (/* 374L, 228L, 232L) */ (abs (var_1_34))))) {
		/* 376L, 265L) */ if (/* 377L, 240L, 241L) */ ((var_1_34) >= (var_1_5))) {
			/* 380L, 263L) */ if (/* 381L, 250L, 251L) */ ((var_1_26) <= (/* 383L, 249L, 253L) */ (~ (var_1_30))))) {
				/* 385L, 262L) */ var_1_40 = (
					var_1_34
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 16384);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16384);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= -32768);
	assume_abort_if_not(var_1_34 <= 32767);
	assume_abort_if_not(var_1_34 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	if (/* 390L, 6L, 12L, 367L, 390L, 1230L) */ ((var_1_14) >= (/* 392L, 5L, 14L, 369L, 392L, 1232L) */ ((var_1_3) - (var_1_4))))) {
	} else {
	}
	if (/* 413L, 43L, 49L, 459L, 482L, 1253L) */ ((/* 414L, 41L, 50L, 460L, 483L, 1254L) */ ((var_1_8) - (var_1_5))) >= (var_1_4))) {
		if (/* 419L, 56L, 60L, 465L, 488L, 1259L) */ ((var_1_10) || (var_1_11))) {
		} else {
		}
	} else {
	}
	if (/* 436L, 85L, 89L, 697L, 729L, 1276L) */ ((var_1_7) > (var_1_4))) {
		if (/* 440L, 98L, 106L, 701L, 733L, 1280L) */ ((/* 441L, 96L, 107L, 702L, 734L, 1281L) */ ((/* 442L, 94L, 108L, 703L, 735L, 1282L) */ ((var_1_9) + (var_1_2))) == (var_1_3))) && (var_1_10))) {
			if (/* 448L, 114L, 117L, 709L, 741L, 1288L) */ (! (var_1_11))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 468L, 191L, 195L, 787L, 800L, 1042L, 1308L, 22L) */ ((last_1_var_1_12) < (var_1_13))) {
		if (/* 473L, 200L, 204L, 791L, 804L, 1046L, 1313L, 26L) */ ((last_1_var_1_23) == (var_1_5))) {
		}
	}
	if (/* 485L, 222L, 227L, 843L, 857L, 1325L) */ (! (/* 486L, 221L, 228L, 844L, 858L, 1326L) */ ((var_1_11) && (var_1_10))))) {
	}
	if (/* 497L, 249L, 253L, 911L, 932L, 1337L) */ ((var_1_23) < (var_1_7))) {
		if (var_1_10) {
			if (/* 503L, 263L, 269L, 917L, 938L, 1343L) */ ((var_1_23) >= (/* 505L, 262L, 271L, 919L, 940L, 1345L) */ ((var_1_6) % (var_1_5))))) {
			}
		} else {
		}
	}
	return /* 542L) */ ((
	/* 541L) */ ((
		/* 540L) */ ((
			/* 539L) */ ((
				/* 538L) */ ((
					/* 537L) */ ((
						/* 536L) */ ((
							/* 535L) */ ((
								/* 389L, 34L, 366L, 389L, 1229L) */ ((
									/* 390L, 6L, 12L, 367L, 390L, 1230L) */ ((
										var_1_14
									) >= (
										/* 392L, 5L, 14L, 369L, 392L, 1232L) */ ((
											var_1_3
										) - (
											var_1_4
										))
									))
								) ? (
									/* 395L, 26L, 372L, 395L, 1235L) */ ((
										var_1_1
									) == (
										/* 395L, 26L, 372L, 395L, 1235L) */ ((unsigned char) (
											/* 398L, 25L, 375L, 398L, 1238L) */ ((
												/* 399L, 23L, 376L, 399L, 1239L) */ ((
													var_1_5
												) - (
													/* 401L, 22L, 378L, 401L, 1241L) */ (min (
														/* 401L, 22L, 378L, 401L, 1241L) */ (
															var_1_6
														) , (
															var_1_7
														)
													))
												))
											) - (
												var_1_8
											))
										))
									))
								) : (
									/* 405L, 32L, 382L, 405L, 1245L) */ ((
										var_1_1
									) == (
										/* 405L, 32L, 382L, 405L, 1245L) */ ((unsigned char) (
											/* 408L, 31L, 385L, 408L, 1248L) */ ((
												32
											) + (
												var_1_7
											))
										))
									))
								))
							) && (
								/* 412L, 78L, 458L, 481L, 1252L) */ ((
									/* 413L, 43L, 49L, 459L, 482L, 1253L) */ ((
										/* 414L, 41L, 50L, 460L, 483L, 1254L) */ ((
											var_1_8
										) - (
											var_1_5
										))
									) >= (
										var_1_4
									))
								) ? (
									/* 418L, 72L, 464L, 487L, 1258L) */ ((
										/* 419L, 56L, 60L, 465L, 488L, 1259L) */ ((
											var_1_10
										) || (
											var_1_11
										))
									) ? (
										/* 422L, 66L, 468L, 491L, 1262L) */ ((
											var_1_9
										) == (
											/* 422L, 66L, 468L, 491L, 1262L) */ ((signed char) (
												var_1_6
											))
										))
									) : (
										/* 426L, 70L, 472L, 495L, 1266L) */ ((
											var_1_9
										) == (
											/* 426L, 70L, 472L, 495L, 1266L) */ ((signed char) (
												var_1_7
											))
										))
									))
								) : (
									/* 430L, 76L, 476L, 499L, 1270L) */ ((
										var_1_9
									) == (
										/* 430L, 76L, 476L, 499L, 1270L) */ ((signed char) (
											var_1_5
										))
									))
								))
							))
						) && (
							/* 435L, 184L, 696L, 728L, 1275L) */ ((
								/* 436L, 85L, 89L, 697L, 729L, 1276L) */ ((
									var_1_7
								) > (
									var_1_4
								))
							) ? (
								/* 439L, 178L, 700L, 732L, 1279L) */ ((
									/* 440L, 98L, 106L, 701L, 733L, 1280L) */ ((
										/* 441L, 96L, 107L, 702L, 734L, 1281L) */ ((
											/* 442L, 94L, 108L, 703L, 735L, 1282L) */ ((
												var_1_9
											) + (
												var_1_2
											))
										) == (
											var_1_3
										))
									) && (
										var_1_10
									))
								) ? (
									/* 447L, 172L, 708L, 740L, 1287L) */ ((
										/* 448L, 114L, 117L, 709L, 741L, 1288L) */ (! (
											var_1_11
										))
									) ? (
										/* 450L, 122L, 711L, 743L, 1290L) */ ((
											var_1_12
										) == (
											/* 450L, 122L, 711L, 743L, 1290L) */ ((double) (
												var_1_13
											))
										))
									) : (
										/* 454L, 170L, 715L, 747L, 1294L) */ ((
											var_1_12
										) == (
											/* 454L, 170L, 715L, 747L, 1294L) */ ((double) (
												1.4
											))
										))
									))
								) : (
									/* 458L, 176L, 719L, 751L, 1298L) */ ((
										var_1_12
									) == (
										/* 458L, 176L, 719L, 751L, 1298L) */ ((double) (
											var_1_13
										))
									))
								))
							) : (
								/* 462L, 182L, 723L, 755L, 1302L) */ ((
									var_1_12
								) == (
									/* 462L, 182L, 723L, 755L, 1302L) */ ((double) (
										var_1_13
									))
								))
							))
						))
					) && (
						/* 467L, 214L, 786L, 799L, 1052L, 1307L, 32L) */ ((
							/* 468L, 191L, 195L, 787L, 800L, 1042L, 1308L, 22L) */ ((
								last_1_var_1_12
							) < (
								var_1_13
							))
						) ? (
							/* 472L, 212L, 790L, 803L, 1051L, 1312L, 31L) */ ((
								/* 473L, 200L, 204L, 791L, 804L, 1046L, 1313L, 26L) */ ((
									last_1_var_1_23
								) == (
									var_1_5
								))
							) ? (
								/* 477L, 210L, 794L, 807L, 1050L, 1317L, 30L) */ ((
									var_1_14
								) == (
									/* 477L, 210L, 794L, 807L, 1050L, 1317L, 30L) */ ((unsigned short int) (
										var_1_7
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
					/* 484L, 238L, 842L, 856L, 1324L) */ ((
						/* 485L, 222L, 227L, 843L, 857L, 1325L) */ (! (
							/* 486L, 221L, 228L, 844L, 858L, 1326L) */ ((
								var_1_11
							) && (
								var_1_10
							))
						))
					) ? (
						/* 489L, 236L, 847L, 861L, 1329L) */ ((
							var_1_16
						) == (
							/* 489L, 236L, 847L, 861L, 1329L) */ ((float) (
								/* 492L, 235L, 850L, 864L, 1332L) */ ((
									var_1_17
								) + (
									var_1_18
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 496L, 287L, 910L, 931L, 1336L) */ ((
					/* 497L, 249L, 253L, 911L, 932L, 1337L) */ ((
						var_1_23
					) < (
						var_1_7
					))
				) ? (
					/* 500L, 285L, 914L, 935L, 1340L) */ ((
						var_1_10
					) ? (
						/* 502L, 279L, 916L, 937L, 1342L) */ ((
							/* 503L, 263L, 269L, 917L, 938L, 1343L) */ ((
								var_1_23
							) >= (
								/* 505L, 262L, 271L, 919L, 940L, 1345L) */ ((
									var_1_6
								) % (
									var_1_5
								))
							))
						) ? (
							/* 508L, 277L, 922L, 943L, 1348L) */ ((
								var_1_19
							) == (
								/* 508L, 277L, 922L, 943L, 1348L) */ ((unsigned char) (
									var_1_8
								))
							))
						) : (
							1
						))
					) : (
						/* 512L, 283L, 926L, 947L, 1352L) */ ((
							var_1_19
						) == (
							/* 512L, 283L, 926L, 947L, 1352L) */ ((unsigned char) (
								50
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 518L, 295L, 965L, 971L, 1358L) */ ((
				var_1_21
			) == (
				/* 518L, 295L, 965L, 971L, 1358L) */ ((float) (
					var_1_13
				))
			))
		))
	) && (
		/* 524L, 305L, 989L, 995L, 1364L) */ ((
			var_1_22
		) == (
			/* 524L, 305L, 989L, 995L, 1364L) */ ((double) (
				2.7
			))
		))
	))
) && (
	/* 530L, 315L, 1013L, 1019L, 1370L) */ ((
		var_1_23
	) == (
		/* 530L, 315L, 1013L, 1019L, 1370L) */ ((signed short int) (
			var_1_14
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

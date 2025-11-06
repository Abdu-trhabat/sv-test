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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 8;
signed long int var_1_3 = 25;
unsigned long int var_1_4 = 1181973178;
unsigned long int var_1_5 = 1000000000;
unsigned long int var_1_6 = 5;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 8;
signed char var_1_11 = -32;
signed char var_1_12 = 2;
signed char var_1_13 = 2;
unsigned char var_1_14 = 10;
double var_1_15 = 7.5;
double var_1_16 = 32.8;
signed char var_1_17 = -128;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 32;
float var_1_22 = 10.5;
unsigned char var_1_23 = 8;
signed long int var_1_24 = -256;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 2;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 8;
unsigned char var_1_30 = 64;
signed long int var_1_31 = 16;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 16;
signed short int var_1_35 = 8;
unsigned long int var_1_36 = 10000000;
float var_1_37 = 1.9;
float var_1_38 = 31.5;
float var_1_39 = 31.3;
float var_1_40 = 3.25;
signed short int var_1_41 = -10;
float var_1_42 = 4.8;
float var_1_43 = 7.25;
float var_1_44 = 3.6;
float var_1_45 = 32.75;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch111Filler_PR_CN
	/* 1034L, 203L, 690L, 696L) */ var_1_14 = (
		var_1_10
	);


	// From: CodeObject1
	/* 15L) */ if (var_1_26) {
		/* 14L) */ var_1_25 = (
			/* 13L) */ (min (
				/* 13L) */ (
					var_1_27
				) , (
					/* 12L) */ ((
						var_1_28
					) + (
						/* 11L) */ (min (
							/* 11L) */ (
								var_1_29
							) , (
								64
							)
						))
					))
				)
			))
		);
	}


	// From: Req7Batch111Filler_PR_CN
	/* 1040L, 213L, 714L, 720L) */ var_1_15 = (
		var_1_16
	);


	// From: Req8Batch111Filler_PR_CN
	/* 1047L, 254L, 739L, 758L) */ if (/* 1048L, 224L, 225L, 740L, 759L) */ ((var_1_14) != (/* 1050L, 223L, 227L, 742L, 761L) */ ((var_1_18) - (/* 1052L, 222L, 229L, 744L, 763L) */ (max (/* 1052L, 222L, 229L, 744L, 763L) */ (var_1_19) , (var_1_20)))))))) {
		/* 1055L, 252L, 747L, 766L) */ if (/* 1056L, 241L, 242L, 748L, 767L) */ ((var_1_20) == (var_1_4))) {
			/* 1059L, 251L, 751L, 770L) */ var_1_17 = (
				var_1_12
			);
		}
	}


	// From: CodeObject4
	/* 126L) */ if (/* 91L, 90L) */ ((/* 92L, 88L) */ ((16) / (var_1_32))) <= (200))) {
		/* 124L) */ if (/* 108L, 107L) */ ((var_1_32) > (/* 110L, 106L) */ (- (/* 111L, 105L) */ (max (/* 111L, 105L) */ (var_1_33) , (var_1_31)))))))) {
			/* 123L) */ var_1_35 = (
				var_1_25
			);
		}
	}


	// From: Req9Batch111Filler_PR_CN
	/* 1064L, 281L, 813L, 824L) */ if (/* 1065L, 268L, 269L, 814L, 825L) */ ((var_1_15) == (var_1_16))) {
		/* 1068L, 280L, 817L, 828L) */ var_1_21 = (
			/* 1071L, 279L, 820L, 831L) */ ((
				var_1_19
			) + (
				var_1_20
			))
		);
	}


	// From: Req10Batch111Filler_PR_CN
	/* 1076L, 290L, 858L, 864L) */ var_1_22 = (
		var_1_16
	);


	// From: Req11Batch111Filler_PR_CN
	/* 1082L, 300L, 882L, 888L) */ var_1_23 = (
		var_1_19
	);


	// From: Req12Batch111Filler_PR_CN
	/* 1088L, 310L, 906L, 912L) */ var_1_24 = (
		-8
	);


	// From: CodeObject6
	/* 165L) */ var_1_41 = (
		/* 164L) */ (min (
			/* 164L) */ (
				var_1_27
			) , (
				var_1_32
			)
		))
	);


	// From: Req1Batch111Filler_PR_CN
	signed long int stepLocal_1 = var_1_24;
	signed long int stepLocal_0 = var_1_24;
	/* 960L, 46L, 315L, 344L) */ if (/* 936L, 4L, 5L, 316L, 345L) */ ((-16) < (stepLocal_0))) {
		/* 953L, 38L, 319L, 348L) */ if (/* 940L, 15L, 16L, 320L, 349L) */ ((stepLocal_1) == (/* 939L, 14L, 18L, 322L, 351L) */ ((100) - (var_1_3))))) {
			/* 952L, 37L, 325L, 354L) */ var_1_1 = (
				/* 951L, 36L, 328L, 357L) */ ((
					/* 949L, 34L, 329L, 358L) */ ((
						/* 945L, 30L, 330L, 359L) */ (min (
							/* 945L, 30L, 330L, 359L) */ (
								var_1_4
							) , (
								1415909508u
							)
						))
					) - (
						/* 948L, 33L, 333L, 362L) */ ((
							var_1_5
						) - (
							var_1_6
						))
					))
				) + (
					var_1_3
				))
			);
		}
	} else {
		/* 959L, 45L, 337L, 366L) */ var_1_1 = (
			/* 958L, 44L, 340L, 369L) */ ((
				2872698422u
			) - (
				2u
			))
		);
	}


	// From: CodeObject3
	/* 82L) */ if (/* 32L, 31L) */ ((/* 33L, 29L) */ ((var_1_27) <= (var_1_30))) || (var_1_26))) {
		/* 76L) */ if (/* 50L, 49L) */ ((var_1_27) <= (/* 52L, 48L) */ ((/* 53L, 44L) */ (abs (var_1_32))) - (/* 55L, 47L) */ ((var_1_33) + (var_1_34))))))) {
			/* 71L) */ var_1_31 = (
				/* 70L) */ ((
					100000000
				) - (
					var_1_28
				))
			);
		} else {
			/* 75L) */ var_1_31 = (
				var_1_29
			);
		}
	} else {
		/* 81L) */ var_1_31 = (
			var_1_27
		);
	}


	// From: CodeObject5
	/* 156L) */ if (/* 137L, 136L) */ ((/* 138L, 134L) */ ((var_1_37) * (/* 140L, 133L) */ ((var_1_38) / (var_1_39))))) > (var_1_40))) {
		/* 155L) */ var_1_36 = (
			/* 154L) */ (abs (
				var_1_28
			))
		);
	}


	// From: Req2Batch111Filler_PR_CN
	/* 967L, 73L, 433L, 448L) */ if (/* 968L, 56L, 57L, 434L, 449L) */ ((/* 969L, 54L, 58L, 435L, 450L) */ (max (/* 969L, 54L, 58L, 435L, 450L) */ (var_1_24) , (var_1_6)))) == (var_1_5))) {
		/* 973L, 72L, 439L, 454L) */ var_1_7 = (
			/* 976L, 71L, 442L, 457L) */ (! (
				/* 977L, 70L, 443L, 458L) */ (! (
					1
				))
			))
		);
	}


	// From: Req3Batch111Filler_PR_CN
	unsigned char stepLocal_2 = var_1_9;
	/* 989L, 96L, 509L, 518L) */ if (/* 984L, 85L, 86L, 510L, 519L) */ ((var_1_7) && (stepLocal_2))) {
		/* 988L, 95L, 513L, 522L) */ var_1_8 = (
			var_1_10
		);
	}


	// From: Req4Batch111Filler_PR_CN
	/* 995L, 159L, 547L, 570L) */ if (/* 996L, 112L, 113L, 548L, 571L) */ ((/* 997L, 106L, 114L, 549L, 572L) */ ((/* 998L, 104L, 115L, 550L, 573L) */ ((var_1_24) * (var_1_1))) + (var_1_4))) < (/* 1002L, 111L, 119L, 554L, 577L) */ ((var_1_6) + (/* 1004L, 110L, 121L, 556L, 579L) */ (min (/* 1004L, 110L, 121L, 556L, 579L) */ (var_1_5) , (var_1_10)))))))) {
		/* 1007L, 138L, 559L, 582L) */ var_1_11 = (
			var_1_12
		);
	} else {
		/* 1011L, 158L, 563L, 586L) */ var_1_11 = (
			32
		);
	}


	// From: CodeObject2
	/* 22L) */ var_1_30 = (
		var_1_29
	);


	// From: CodeObject7
	/* 178L) */ if (var_1_26) {
		/* 177L) */ var_1_42 = (
			/* 176L) */ (abs (
				var_1_43
			))
		);
	}


	// From: CodeObject8
	/* 251L) */ if (/* 190L, 189L) */ ((/* 191L, 185L) */ ((/* 192L, 183L) */ (abs (var_1_39))) * (var_1_42))) > (/* 195L, 188L) */ (max (/* 195L, 188L) */ (var_1_37) , (var_1_40)))))) {
		/* 245L) */ if (/* 209L, 208L) */ ((var_1_28) < (var_1_41))) {
			/* 243L) */ if (/* 220L, 219L) */ ((/* 221L, 216L) */ (abs (var_1_43))) < (/* 223L, 218L) */ (abs (var_1_45))))) {
				/* 237L) */ if (var_1_26) {
					/* 236L) */ var_1_44 = (
						-0.5f
					);
				}
			} else {
				/* 242L) */ var_1_44 = (
					var_1_43
				);
			}
		}
	} else {
		/* 250L) */ var_1_44 = (
			var_1_43
		);
	}


	// From: Req5Batch111Filler_PR_CN
	unsigned char stepLocal_3 = var_1_7;
	/* 1029L, 194L, 637L, 650L) */ if (/* 1024L, 175L, 176L, 638L, 651L) */ ((/* 1023L, 173L, 177L, 639L, 652L) */ ((-128) >= (/* 1022L, 172L, 179L, 641L, 654L) */ (min (/* 1022L, 172L, 179L, 641L, 654L) */ (var_1_10) , (var_1_8)))))) && (stepLocal_3))) {
		/* 1028L, 193L, 645L, 658L) */ var_1_13 = (
			var_1_12
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 1073741823);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 536870911);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 536870911);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 255);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 255);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 64);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	assume_abort_if_not(var_1_39 != 0.0F);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 256L, 4L, 8L, 374L, 403L, 1094L) */ ((-16) < (var_1_24))) {
		if (/* 260L, 15L, 21L, 378L, 407L, 1098L) */ ((var_1_24) == (/* 262L, 14L, 23L, 380L, 409L, 1100L) */ ((100) - (var_1_3))))) {
		}
	} else {
	}
	if (/* 287L, 56L, 62L, 464L, 479L, 1125L) */ ((/* 288L, 54L, 63L, 465L, 480L, 1126L) */ (max (/* 288L, 54L, 63L, 465L, 480L, 1126L) */ (var_1_24) , (var_1_6)))) == (var_1_5))) {
	}
	if (/* 300L, 85L, 89L, 528L, 537L, 1138L) */ ((var_1_7) && (var_1_9))) {
	}
	if (/* 311L, 112L, 124L, 594L, 617L, 1149L) */ ((/* 312L, 106L, 125L, 595L, 618L, 1150L) */ ((/* 313L, 104L, 126L, 596L, 619L, 1151L) */ ((var_1_24) * (var_1_1))) + (var_1_4))) < (/* 317L, 111L, 130L, 600L, 623L, 1155L) */ ((var_1_6) + (/* 319L, 110L, 132L, 602L, 625L, 1157L) */ (min (/* 319L, 110L, 132L, 602L, 625L, 1157L) */ (var_1_5) , (var_1_10)))))))) {
	} else {
	}
	if (/* 332L, 175L, 183L, 664L, 677L, 1170L) */ ((/* 333L, 173L, 184L, 665L, 678L, 1171L) */ ((-128) >= (/* 335L, 172L, 186L, 667L, 680L, 1173L) */ (min (/* 335L, 172L, 186L, 667L, 680L, 1173L) */ (var_1_10) , (var_1_8)))))) && (var_1_7))) {
	}
	if (/* 359L, 224L, 232L, 778L, 797L, 1197L) */ ((var_1_14) != (/* 361L, 223L, 234L, 780L, 799L, 1199L) */ ((var_1_18) - (/* 363L, 222L, 236L, 782L, 801L, 1201L) */ (max (/* 363L, 222L, 236L, 782L, 801L, 1201L) */ (var_1_19) , (var_1_20)))))))) {
		if (/* 367L, 241L, 245L, 786L, 805L, 1205L) */ ((var_1_20) == (var_1_4))) {
		}
	}
	if (/* 376L, 268L, 272L, 836L, 847L, 1214L) */ ((var_1_15) == (var_1_16))) {
	}
	return /* 414L) */ ((
	/* 413L) */ ((
		/* 412L) */ ((
			/* 411L) */ ((
				/* 410L) */ ((
					/* 409L) */ ((
						/* 408L) */ ((
							/* 407L) */ ((
								/* 406L) */ ((
									/* 405L) */ ((
										/* 404L) */ ((
											/* 255L, 47L, 373L, 402L, 1093L) */ ((
												/* 256L, 4L, 8L, 374L, 403L, 1094L) */ ((
													-16
												) < (
													var_1_24
												))
											) ? (
												/* 259L, 39L, 377L, 406L, 1097L) */ ((
													/* 260L, 15L, 21L, 378L, 407L, 1098L) */ ((
														var_1_24
													) == (
														/* 262L, 14L, 23L, 380L, 409L, 1100L) */ ((
															100
														) - (
															var_1_3
														))
													))
												) ? (
													/* 265L, 37L, 383L, 412L, 1103L) */ ((
														var_1_1
													) == (
														/* 265L, 37L, 383L, 412L, 1103L) */ ((unsigned long int) (
															/* 268L, 36L, 386L, 415L, 1106L) */ ((
																/* 269L, 34L, 387L, 416L, 1107L) */ ((
																	/* 270L, 30L, 388L, 417L, 1108L) */ (min (
																		/* 270L, 30L, 388L, 417L, 1108L) */ (
																			var_1_4
																		) , (
																			1415909508u
																		)
																	))
																) - (
																	/* 273L, 33L, 391L, 420L, 1111L) */ ((
																		var_1_5
																	) - (
																		var_1_6
																	))
																))
															) + (
																var_1_3
															))
														))
													))
												) : (
													1
												))
											) : (
												/* 277L, 45L, 395L, 424L, 1115L) */ ((
													var_1_1
												) == (
													/* 277L, 45L, 395L, 424L, 1115L) */ ((unsigned long int) (
														/* 280L, 44L, 398L, 427L, 1118L) */ ((
															2872698422u
														) - (
															2u
														))
													))
												))
											))
										) && (
											/* 286L, 74L, 463L, 478L, 1124L) */ ((
												/* 287L, 56L, 62L, 464L, 479L, 1125L) */ ((
													/* 288L, 54L, 63L, 465L, 480L, 1126L) */ (max (
														/* 288L, 54L, 63L, 465L, 480L, 1126L) */ (
															var_1_24
														) , (
															var_1_6
														)
													))
												) == (
													var_1_5
												))
											) ? (
												/* 292L, 72L, 469L, 484L, 1130L) */ ((
													var_1_7
												) == (
													/* 292L, 72L, 469L, 484L, 1130L) */ ((unsigned char) (
														/* 295L, 71L, 472L, 487L, 1133L) */ (! (
															/* 296L, 70L, 473L, 488L, 1134L) */ (! (
																1
															))
														))
													))
												))
											) : (
												1
											))
										))
									) && (
										/* 299L, 97L, 527L, 536L, 1137L) */ ((
											/* 300L, 85L, 89L, 528L, 537L, 1138L) */ ((
												var_1_7
											) && (
												var_1_9
											))
										) ? (
											/* 303L, 95L, 531L, 540L, 1141L) */ ((
												var_1_8
											) == (
												/* 303L, 95L, 531L, 540L, 1141L) */ ((unsigned char) (
													var_1_10
												))
											))
										) : (
											1
										))
									))
								) && (
									/* 310L, 160L, 593L, 616L, 1148L) */ ((
										/* 311L, 112L, 124L, 594L, 617L, 1149L) */ ((
											/* 312L, 106L, 125L, 595L, 618L, 1150L) */ ((
												/* 313L, 104L, 126L, 596L, 619L, 1151L) */ ((
													var_1_24
												) * (
													var_1_1
												))
											) + (
												var_1_4
											))
										) < (
											/* 317L, 111L, 130L, 600L, 623L, 1155L) */ ((
												var_1_6
											) + (
												/* 319L, 110L, 132L, 602L, 625L, 1157L) */ (min (
													/* 319L, 110L, 132L, 602L, 625L, 1157L) */ (
														var_1_5
													) , (
														var_1_10
													)
												))
											))
										))
									) ? (
										/* 322L, 138L, 605L, 628L, 1160L) */ ((
											var_1_11
										) == (
											/* 322L, 138L, 605L, 628L, 1160L) */ ((signed char) (
												var_1_12
											))
										))
									) : (
										/* 326L, 158L, 609L, 632L, 1164L) */ ((
											var_1_11
										) == (
											/* 326L, 158L, 609L, 632L, 1164L) */ ((signed char) (
												32
											))
										))
									))
								))
							) && (
								/* 331L, 195L, 663L, 676L, 1169L) */ ((
									/* 332L, 175L, 183L, 664L, 677L, 1170L) */ ((
										/* 333L, 173L, 184L, 665L, 678L, 1171L) */ ((
											-128
										) >= (
											/* 335L, 172L, 186L, 667L, 680L, 1173L) */ (min (
												/* 335L, 172L, 186L, 667L, 680L, 1173L) */ (
													var_1_10
												) , (
													var_1_8
												)
											))
										))
									) && (
										var_1_7
									))
								) ? (
									/* 339L, 193L, 671L, 684L, 1177L) */ ((
										var_1_13
									) == (
										/* 339L, 193L, 671L, 684L, 1177L) */ ((signed char) (
											var_1_12
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 345L, 203L, 702L, 708L, 1183L) */ ((
								var_1_14
							) == (
								/* 345L, 203L, 702L, 708L, 1183L) */ ((unsigned char) (
									var_1_10
								))
							))
						))
					) && (
						/* 351L, 213L, 726L, 732L, 1189L) */ ((
							var_1_15
						) == (
							/* 351L, 213L, 726L, 732L, 1189L) */ ((double) (
								var_1_16
							))
						))
					))
				) && (
					/* 358L, 255L, 777L, 796L, 1196L) */ ((
						/* 359L, 224L, 232L, 778L, 797L, 1197L) */ ((
							var_1_14
						) != (
							/* 361L, 223L, 234L, 780L, 799L, 1199L) */ ((
								var_1_18
							) - (
								/* 363L, 222L, 236L, 782L, 801L, 1201L) */ (max (
									/* 363L, 222L, 236L, 782L, 801L, 1201L) */ (
										var_1_19
									) , (
										var_1_20
									)
								))
							))
						))
					) ? (
						/* 366L, 253L, 785L, 804L, 1204L) */ ((
							/* 367L, 241L, 245L, 786L, 805L, 1205L) */ ((
								var_1_20
							) == (
								var_1_4
							))
						) ? (
							/* 370L, 251L, 789L, 808L, 1208L) */ ((
								var_1_17
							) == (
								/* 370L, 251L, 789L, 808L, 1208L) */ ((signed char) (
									var_1_12
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
				/* 375L, 282L, 835L, 846L, 1213L) */ ((
					/* 376L, 268L, 272L, 836L, 847L, 1214L) */ ((
						var_1_15
					) == (
						var_1_16
					))
				) ? (
					/* 379L, 280L, 839L, 850L, 1217L) */ ((
						var_1_21
					) == (
						/* 379L, 280L, 839L, 850L, 1217L) */ ((unsigned char) (
							/* 382L, 279L, 842L, 853L, 1220L) */ ((
								var_1_19
							) + (
								var_1_20
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 387L, 290L, 870L, 876L, 1225L) */ ((
				var_1_22
			) == (
				/* 387L, 290L, 870L, 876L, 1225L) */ ((float) (
					var_1_16
				))
			))
		))
	) && (
		/* 393L, 300L, 894L, 900L, 1231L) */ ((
			var_1_23
		) == (
			/* 393L, 300L, 894L, 900L, 1231L) */ ((unsigned char) (
				var_1_19
			))
		))
	))
) && (
	/* 399L, 310L, 918L, 924L, 1237L) */ ((
		var_1_24
	) == (
		/* 399L, 310L, 918L, 924L, 1237L) */ ((signed long int) (
			-8
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

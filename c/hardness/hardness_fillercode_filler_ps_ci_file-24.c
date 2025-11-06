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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch24Filler_PS_CI.c", 13, "reach_error"); }
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
double var_1_1 = 15.8;
signed long int var_1_2 = -10;
signed long int var_1_3 = 5;
double var_1_4 = 10.5;
double var_1_5 = 1.55;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
signed char var_1_8 = -10;
signed long int var_1_9 = -2;
signed char var_1_10 = -16;
signed char var_1_11 = -4;
signed char var_1_12 = -16;
double var_1_13 = 128.55;
double var_1_14 = 2.3;
double var_1_15 = 4.8;
unsigned long int var_1_16 = 0;
signed long int var_1_17 = 5;
signed long int var_1_18 = 256;
unsigned long int var_1_19 = 50;
unsigned long int var_1_20 = 1;
signed short int var_1_21 = -50;
signed char var_1_22 = 4;
unsigned long int var_1_23 = 3326262720;
unsigned long int var_1_24 = 16;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned long int var_1_33 = 200;
unsigned char var_1_37 = 32;
double var_1_39 = 15.5;
signed long int var_1_41 = -10;
signed long int var_1_42 = -256;
signed long int var_1_43 = 128;
unsigned long int var_1_44 = 10000;
unsigned long int var_1_45 = 4251471014;
signed short int var_1_46 = 64;
unsigned char var_1_47 = 1;
unsigned short int var_1_48 = 64;
float var_1_49 = 49.4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 265L, 21L) */ if (/* 266L, 4L, 5L) */ ((32) >= (var_1_18))) {
		/* 269L, 20L) */ var_1_27 = (
			/* 272L, 19L) */ ((
				/* 273L, 17L) */ ((
					var_1_6
				) || (
					/* 275L, 16L) */ ((
						var_1_30
					) && (
						var_1_31
					))
				))
			) && (
				var_1_32
			))
		);
	}


	// From: CodeObject2
	/* 282L, 57L) */ if (/* 283L, 33L, 34L) */ ((var_1_20) > (/* 285L, 32L, 36L) */ (max (/* 285L, 32L, 36L) */ (/* 286L, 30L, 37L) */ ((16u) | (var_1_16))) , (var_1_16)))))) {
		/* 290L, 55L) */ if (var_1_6) {
			/* 292L, 54L) */ var_1_33 = (
				var_1_20
			);
		}
	}


	// From: CodeObject3
	/* 297L, 141L) */ if (/* 298L, 72L, 73L) */ ((/* 299L, 70L, 74L) */ ((var_1_22) & (-10))) < (var_1_20))) {
		/* 303L, 139L) */ if (/* 304L, 88L, 89L) */ ((/* 305L, 86L, 90L) */ (~ (/* 306L, 85L, 91L) */ (min (/* 306L, 85L, 91L) */ (var_1_20) , (var_1_24)))))) > (var_1_23))) {
			/* 310L, 137L) */ if (/* 311L, 109L, 110L) */ ((/* 312L, 105L, 111L) */ (min (/* 312L, 105L, 111L) */ (var_1_20) , (/* 314L, 104L, 113L) */ ((var_1_23) * (var_1_22)))))) < (/* 317L, 108L, 116L) */ ((var_1_24) ^ (var_1_23))))) {
				/* 320L, 135L) */ if (var_1_30) {
					/* 322L, 134L) */ var_1_37 = (
						var_1_22
					);
				}
			}
		}
	}


	// From: CodeObject4
	/* 327L, 150L) */ var_1_39 = (
		var_1_5
	);


	// From: CodeObject5
	/* 331L, 175L) */ if (/* 332L, 156L, 157L) */ (! (var_1_30))) {
		/* 334L, 164L) */ var_1_41 = (
			var_1_22
		);
	} else {
		/* 338L, 174L) */ var_1_41 = (
			/* 341L, 173L) */ ((
				var_1_22
			) + (
				/* 343L, 172L) */ (max (
					/* 343L, 172L) */ (
						var_1_16
					) , (
						/* 345L, 171L) */ ((
							var_1_42
						) + (
							var_1_43
						))
					)
				))
			))
		);
	}


	// From: CodeObject6
	/* 350L, 186L) */ var_1_44 = (
		/* 353L, 185L) */ ((
			/* 354L, 183L) */ ((
				var_1_45
			) - (
				var_1_3
			))
		) - (
			var_1_22
		))
	);


	// From: CodeObject7
	/* 360L, 242L) */ if (/* 361L, 199L, 200L) */ ((/* 362L, 195L, 201L) */ ((var_1_22) / (var_1_47))) > (/* 365L, 198L, 204L) */ ((var_1_20) / (16))))) {
		/* 368L, 217L) */ var_1_46 = (
			var_1_22
		);
	} else {
		/* 372L, 240L) */ if (/* 373L, 223L, 224L) */ ((/* 374L, 220L, 225L) */ (abs (/* 375L, 219L, 226L) */ (abs (var_1_14))))) != (/* 377L, 222L, 228L) */ (abs (var_1_5))))) {
			/* 379L, 239L) */ var_1_46 = (
				var_1_22
			);
		}
	}


	// From: CodeObject8
	/* 384L, 253L) */ var_1_48 = (
		var_1_2
	);


	// From: CodeObject9
	/* 389L, 261L) */ var_1_49 = (
		var_1_5
	);


	// From: Req1Batch24Filler_PS_CI
	unsigned char stepLocal_1 = var_1_6;
	signed long int stepLocal_0 = var_1_2;
	/* 935L, 33L, 329L, 349L) */ if (/* 920L, 4L, 5L, 330L, 350L) */ ((stepLocal_0) >= (var_1_3))) {
		/* 927L, 17L, 333L, 353L) */ var_1_1 = (
			/* 926L, 16L, 336L, 356L) */ ((
				var_1_4
			) - (
				/* 925L, 15L, 338L, 358L) */ (abs (
					var_1_5
				))
			))
		);
	} else {
		/* 934L, 31L, 340L, 360L) */ if (/* 929L, 20L, 21L, 341L, 361L) */ ((stepLocal_1) || (var_1_7))) {
			/* 933L, 30L, 344L, 364L) */ var_1_1 = (
				128.75
			);
		}
	}


	// From: Req6Batch24Filler_PS_CI
	/* 1049L, 244L, 890L, 896L) */ var_1_25 = (
		var_1_26
	);


	// From: Req2Batch24Filler_PS_CI
	/* 941L, 73L, 458L, 482L) */ if (/* 942L, 43L, 44L, 459L, 483L) */ ((var_1_3) <= (/* 944L, 42L, 46L, 461L, 485L) */ (min (/* 944L, 42L, 46L, 461L, 485L) */ (var_1_2) , (var_1_9)))))) {
		/* 947L, 67L, 464L, 488L) */ if (var_1_25) {
			/* 949L, 66L, 466L, 490L) */ var_1_8 = (
				/* 952L, 65L, 469L, 493L) */ ((
					-16
				) + (
					/* 954L, 64L, 471L, 495L) */ (min (
						/* 954L, 64L, 471L, 495L) */ (
							var_1_10
						) , (
							/* 956L, 63L, 473L, 497L) */ ((
								var_1_11
							) + (
								var_1_12
							))
						)
					))
				))
			);
		}
	} else {
		/* 959L, 72L, 476L, 500L) */ var_1_8 = (
			var_1_12
		);
	}


	// From: Req4Batch24Filler_PS_CI
	/* 992L, 171L, 662L, 692L) */ if (/* 993L, 133L, 134L, 663L, 693L) */ ((var_1_2) >= (/* 995L, 132L, 136L, 665L, 695L) */ ((/* 996L, 130L, 137L, 666L, 696L) */ ((1329162249) - (var_1_17))) - (var_1_18))))) {
		/* 1000L, 157L, 670L, 700L) */ var_1_16 = (
			/* 1003L, 156L, 673L, 703L) */ ((
				/* 1004L, 154L, 674L, 704L) */ (min (
					/* 1004L, 154L, 674L, 704L) */ (
						/* 1005L, 152L, 675L, 705L) */ (max (
							/* 1005L, 152L, 675L, 705L) */ (
								var_1_17
							) , (
								var_1_18
							)
						))
					) , (
						var_1_19
					)
				))
			) + (
				var_1_20
			))
		);
	} else {
		/* 1010L, 169L, 680L, 710L) */ if (var_1_25) {
			/* 1012L, 164L, 682L, 712L) */ var_1_16 = (
				var_1_18
			);
		} else {
			/* 1016L, 168L, 686L, 716L) */ var_1_16 = (
				var_1_19
			);
		}
	}


	// From: Req5Batch24Filler_PS_CI
	/* 1022L, 233L, 782L, 809L) */ if (/* 1023L, 186L, 187L, 783L, 810L) */ ((/* 1024L, 182L, 188L, 784L, 811L) */ (min (/* 1024L, 182L, 188L, 784L, 811L) */ (var_1_16) , (var_1_18)))) <= (/* 1027L, 185L, 191L, 787L, 814L) */ ((var_1_16) + (var_1_20))))) {
		/* 1030L, 231L, 790L, 817L) */ if (/* 1031L, 207L, 208L, 791L, 818L) */ ((var_1_19) >= (/* 1033L, 206L, 210L, 793L, 820L) */ ((var_1_23) - (/* 1035L, 205L, 212L, 795L, 822L) */ (max (/* 1035L, 205L, 212L, 795L, 822L) */ (var_1_24) , (var_1_22)))))))) {
			/* 1038L, 226L, 798L, 825L) */ var_1_21 = (
				/* 1041L, 225L, 801L, 828L) */ (abs (
					var_1_12
				))
			);
		} else {
			/* 1043L, 230L, 803L, 830L) */ var_1_21 = (
				64
			);
		}
	}


	// From: Req3Batch24Filler_PS_CI
	/* 965L, 119L, 554L, 581L) */ if (/* 966L, 83L, 84L, 555L, 582L) */ ((128u) >= (var_1_16))) {
		/* 969L, 108L, 558L, 585L) */ if (/* 970L, 91L, 92L, 559L, 586L) */ (! (var_1_25))) {
			/* 972L, 103L, 561L, 588L) */ var_1_13 = (
				/* 975L, 102L, 564L, 591L) */ ((
					/* 976L, 100L, 565L, 592L) */ ((
						var_1_14
					) - (
						var_1_15
					))
				) + (
					0.25
				))
			);
		} else {
			/* 980L, 107L, 569L, 596L) */ var_1_13 = (
				var_1_14
			);
		}
	} else {
		/* 984L, 117L, 573L, 600L) */ if (var_1_25) {
			/* 986L, 116L, 575L, 602L) */ var_1_13 = (
				var_1_5
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 32);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 31);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741824);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 2147483647);
	assume_abort_if_not(var_1_23 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -536870911);
	assume_abort_if_not(var_1_42 <= 536870912);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -536870911);
	assume_abort_if_not(var_1_43 <= 536870911);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 3221225470);
	assume_abort_if_not(var_1_45 <= 4294967294);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 255);
	assume_abort_if_not(var_1_47 != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 394L, 4L, 8L, 370L, 390L, 1055L) */ ((var_1_2) >= (var_1_3))) {
	} else {
		if (/* 405L, 20L, 24L, 381L, 401L, 1066L) */ ((var_1_6) || (var_1_7))) {
		}
	}
	if (/* 415L, 43L, 49L, 507L, 531L, 1076L) */ ((var_1_3) <= (/* 417L, 42L, 51L, 509L, 533L, 1078L) */ (min (/* 417L, 42L, 51L, 509L, 533L, 1078L) */ (var_1_2) , (var_1_9)))))) {
		if (var_1_25) {
		}
	} else {
	}
	if (/* 439L, 83L, 87L, 609L, 636L, 1100L) */ ((128u) >= (var_1_16))) {
		if (/* 443L, 91L, 94L, 613L, 640L, 1104L) */ (! (var_1_25))) {
		} else {
		}
	} else {
		if (var_1_25) {
		}
	}
	if (/* 466L, 133L, 141L, 723L, 753L, 1127L) */ ((var_1_2) >= (/* 468L, 132L, 143L, 725L, 755L, 1129L) */ ((/* 469L, 130L, 144L, 726L, 756L, 1130L) */ ((1329162249) - (var_1_17))) - (var_1_18))))) {
	} else {
		if (var_1_25) {
		} else {
		}
	}
	if (/* 496L, 186L, 194L, 837L, 864L, 1157L) */ ((/* 497L, 182L, 195L, 838L, 865L, 1158L) */ (min (/* 497L, 182L, 195L, 838L, 865L, 1158L) */ (var_1_16) , (var_1_18)))) <= (/* 500L, 185L, 198L, 841L, 868L, 1161L) */ ((var_1_16) + (var_1_20))))) {
		if (/* 504L, 207L, 215L, 845L, 872L, 1165L) */ ((var_1_19) >= (/* 506L, 206L, 217L, 847L, 874L, 1167L) */ ((var_1_23) - (/* 508L, 205L, 219L, 849L, 876L, 1169L) */ (max (/* 508L, 205L, 219L, 849L, 876L, 1169L) */ (var_1_24) , (var_1_22)))))))) {
		} else {
		}
	}
	return /* 531L) */ ((
	/* 530L) */ ((
		/* 529L) */ ((
			/* 528L) */ ((
				/* 527L) */ ((
					/* 393L, 34L, 369L, 389L, 1054L) */ ((
						/* 394L, 4L, 8L, 370L, 390L, 1055L) */ ((
							var_1_2
						) >= (
							var_1_3
						))
					) ? (
						/* 397L, 17L, 373L, 393L, 1058L) */ ((
							var_1_1
						) == (
							/* 397L, 17L, 373L, 393L, 1058L) */ ((double) (
								/* 400L, 16L, 376L, 396L, 1061L) */ ((
									var_1_4
								) - (
									/* 402L, 15L, 378L, 398L, 1063L) */ (abs (
										var_1_5
									))
								))
							))
						))
					) : (
						/* 404L, 32L, 380L, 400L, 1065L) */ ((
							/* 405L, 20L, 24L, 381L, 401L, 1066L) */ ((
								var_1_6
							) || (
								var_1_7
							))
						) ? (
							/* 408L, 30L, 384L, 404L, 1069L) */ ((
								var_1_1
							) == (
								/* 408L, 30L, 384L, 404L, 1069L) */ ((double) (
									128.75
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 414L, 74L, 506L, 530L, 1075L) */ ((
						/* 415L, 43L, 49L, 507L, 531L, 1076L) */ ((
							var_1_3
						) <= (
							/* 417L, 42L, 51L, 509L, 533L, 1078L) */ (min (
								/* 417L, 42L, 51L, 509L, 533L, 1078L) */ (
									var_1_2
								) , (
									var_1_9
								)
							))
						))
					) ? (
						/* 420L, 68L, 512L, 536L, 1081L) */ ((
							var_1_25
						) ? (
							/* 422L, 66L, 514L, 538L, 1083L) */ ((
								var_1_8
							) == (
								/* 422L, 66L, 514L, 538L, 1083L) */ ((signed char) (
									/* 425L, 65L, 517L, 541L, 1086L) */ ((
										-16
									) + (
										/* 427L, 64L, 519L, 543L, 1088L) */ (min (
											/* 427L, 64L, 519L, 543L, 1088L) */ (
												var_1_10
											) , (
												/* 429L, 63L, 521L, 545L, 1090L) */ ((
													var_1_11
												) + (
													var_1_12
												))
											)
										))
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 432L, 72L, 524L, 548L, 1093L) */ ((
							var_1_8
						) == (
							/* 432L, 72L, 524L, 548L, 1093L) */ ((signed char) (
								var_1_12
							))
						))
					))
				))
			) && (
				/* 438L, 120L, 608L, 635L, 1099L) */ ((
					/* 439L, 83L, 87L, 609L, 636L, 1100L) */ ((
						128u
					) >= (
						var_1_16
					))
				) ? (
					/* 442L, 109L, 612L, 639L, 1103L) */ ((
						/* 443L, 91L, 94L, 613L, 640L, 1104L) */ (! (
							var_1_25
						))
					) ? (
						/* 445L, 103L, 615L, 642L, 1106L) */ ((
							var_1_13
						) == (
							/* 445L, 103L, 615L, 642L, 1106L) */ ((double) (
								/* 448L, 102L, 618L, 645L, 1109L) */ ((
									/* 449L, 100L, 619L, 646L, 1110L) */ ((
										var_1_14
									) - (
										var_1_15
									))
								) + (
									0.25
								))
							))
						))
					) : (
						/* 453L, 107L, 623L, 650L, 1114L) */ ((
							var_1_13
						) == (
							/* 453L, 107L, 623L, 650L, 1114L) */ ((double) (
								var_1_14
							))
						))
					))
				) : (
					/* 457L, 118L, 627L, 654L, 1118L) */ ((
						var_1_25
					) ? (
						/* 459L, 116L, 629L, 656L, 1120L) */ ((
							var_1_13
						) == (
							/* 459L, 116L, 629L, 656L, 1120L) */ ((double) (
								var_1_5
							))
						))
					) : (
						1
					))
				))
			))
		) && (
			/* 465L, 172L, 722L, 752L, 1126L) */ ((
				/* 466L, 133L, 141L, 723L, 753L, 1127L) */ ((
					var_1_2
				) >= (
					/* 468L, 132L, 143L, 725L, 755L, 1129L) */ ((
						/* 469L, 130L, 144L, 726L, 756L, 1130L) */ ((
							1329162249
						) - (
							var_1_17
						))
					) - (
						var_1_18
					))
				))
			) ? (
				/* 473L, 157L, 730L, 760L, 1134L) */ ((
					var_1_16
				) == (
					/* 473L, 157L, 730L, 760L, 1134L) */ ((unsigned long int) (
						/* 476L, 156L, 733L, 763L, 1137L) */ ((
							/* 477L, 154L, 734L, 764L, 1138L) */ (min (
								/* 477L, 154L, 734L, 764L, 1138L) */ (
									/* 478L, 152L, 735L, 765L, 1139L) */ (max (
										/* 478L, 152L, 735L, 765L, 1139L) */ (
											var_1_17
										) , (
											var_1_18
										)
									))
								) , (
									var_1_19
								)
							))
						) + (
							var_1_20
						))
					))
				))
			) : (
				/* 483L, 170L, 740L, 770L, 1144L) */ ((
					var_1_25
				) ? (
					/* 485L, 164L, 742L, 772L, 1146L) */ ((
						var_1_16
					) == (
						/* 485L, 164L, 742L, 772L, 1146L) */ ((unsigned long int) (
							var_1_18
						))
					))
				) : (
					/* 489L, 168L, 746L, 776L, 1150L) */ ((
						var_1_16
					) == (
						/* 489L, 168L, 746L, 776L, 1150L) */ ((unsigned long int) (
							var_1_19
						))
					))
				))
			))
		))
	) && (
		/* 495L, 234L, 836L, 863L, 1156L) */ ((
			/* 496L, 186L, 194L, 837L, 864L, 1157L) */ ((
				/* 497L, 182L, 195L, 838L, 865L, 1158L) */ (min (
					/* 497L, 182L, 195L, 838L, 865L, 1158L) */ (
						var_1_16
					) , (
						var_1_18
					)
				))
			) <= (
				/* 500L, 185L, 198L, 841L, 868L, 1161L) */ ((
					var_1_16
				) + (
					var_1_20
				))
			))
		) ? (
			/* 503L, 232L, 844L, 871L, 1164L) */ ((
				/* 504L, 207L, 215L, 845L, 872L, 1165L) */ ((
					var_1_19
				) >= (
					/* 506L, 206L, 217L, 847L, 874L, 1167L) */ ((
						var_1_23
					) - (
						/* 508L, 205L, 219L, 849L, 876L, 1169L) */ (max (
							/* 508L, 205L, 219L, 849L, 876L, 1169L) */ (
								var_1_24
							) , (
								var_1_22
							)
						))
					))
				))
			) ? (
				/* 511L, 226L, 852L, 879L, 1172L) */ ((
					var_1_21
				) == (
					/* 511L, 226L, 852L, 879L, 1172L) */ ((signed short int) (
						/* 514L, 225L, 855L, 882L, 1175L) */ (abs (
							var_1_12
						))
					))
				))
			) : (
				/* 516L, 230L, 857L, 884L, 1177L) */ ((
					var_1_21
				) == (
					/* 516L, 230L, 857L, 884L, 1177L) */ ((signed short int) (
						64
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 522L, 244L, 902L, 908L, 1183L) */ ((
		var_1_25
	) == (
		/* 522L, 244L, 902L, 908L, 1183L) */ ((unsigned char) (
			var_1_26
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

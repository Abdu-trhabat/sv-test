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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Filler_PE_CO.c", 13, "reach_error"); }
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
signed char var_1_1 = -4;
signed char var_1_3 = 32;
signed char var_1_4 = 16;
double var_1_5 = 128.6;
double var_1_6 = 16.14;
unsigned long int var_1_7 = 1;
float var_1_8 = 50.5;
float var_1_9 = 5.5;
float var_1_10 = 50.2;
float var_1_11 = 1.95;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 64;
unsigned short int var_1_16 = 32;
unsigned long int var_1_17 = 1000;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 4;
unsigned char var_1_22 = 100;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 25;
signed char var_1_26 = -32;
unsigned short int var_1_27 = 16;
unsigned short int var_1_28 = 8;
unsigned short int var_1_29 = 2;
unsigned short int var_1_30 = 1;
unsigned short int var_1_31 = 0;
unsigned short int var_1_32 = 100;
unsigned short int var_1_33 = 64;
unsigned short int var_1_34 = 64;
unsigned short int var_1_35 = 40363;
signed long int var_1_36 = 10000;
signed long int var_1_37 = 1;
float var_1_38 = 15.25;
signed short int var_1_39 = -8;
signed short int var_1_40 = 5;
signed short int var_1_41 = 5;
unsigned char var_1_42 = 0;
unsigned char var_1_44 = 8;
signed short int var_1_45 = 5;
signed short int var_1_48 = -50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch189Filler_PE_CO
	/* 834L, 46L, 332L, 339L) */ var_1_7 = (
		var_1_4
	);


	// From: Req4Batch189Filler_PE_CO
	signed char stepLocal_0 = var_1_4;
	/* 857L, 77L, 358L, 376L) */ if (/* 843L, 57L, 58L, 359L, 377L) */ ((var_1_7) <= (stepLocal_0))) {
		/* 852L, 72L, 362L, 380L) */ var_1_8 = (
			/* 851L, 71L, 365L, 383L) */ (abs (
				/* 850L, 70L, 366L, 384L) */ ((
					var_1_9
				) - (
					/* 849L, 69L, 368L, 386L) */ ((
						var_1_10
					) + (
						var_1_11
					))
				))
			))
		);
	} else {
		/* 856L, 76L, 371L, 389L) */ var_1_8 = (
			var_1_10
		);
	}


	// From: Req5Batch189Filler_PE_CO
	/* 864L, 89L, 433L, 444L) */ var_1_12 = (
		/* 867L, 88L, 436L, 447L) */ (! (
			/* 868L, 87L, 437L, 448L) */ ((
				var_1_13
			) || (
				var_1_14
			))
		))
	);


	// From: Req6Batch189Filler_PE_CO
	/* 873L, 128L, 475L, 492L) */ if (/* 874L, 106L, 107L, 476L, 493L) */ ((/* 875L, 102L, 108L, 477L, 494L) */ ((var_1_7) / (var_1_16))) <= (/* 878L, 105L, 111L, 480L, 497L) */ ((var_1_4) / (var_1_17))))) {
		/* 881L, 127L, 483L, 500L) */ var_1_15 = (
			/* 884L, 126L, 486L, 503L) */ (abs (
				/* 885L, 125L, 487L, 504L) */ (max (
					/* 885L, 125L, 487L, 504L) */ (
						var_1_16
					) , (
						var_1_4
					)
				))
			))
		);
	}


	// From: Req8Batch189Filler_PE_CO
	/* 939L, 227L, 739L, 751L) */ var_1_22 = (
		/* 942L, 226L, 742L, 754L) */ (max (
			/* 942L, 226L, 742L, 754L) */ (
				var_1_4
			) , (
				/* 944L, 225L, 744L, 756L) */ ((
					/* 945L, 223L, 745L, 757L) */ ((
						var_1_20
					) - (
						var_1_21
					))
				) + (
					var_1_23
				))
			)
		))
	);


	// From: Req9Batch189Filler_PE_CO
	/* 951L, 237L, 787L, 793L) */ var_1_24 = (
		var_1_14
	);


	// From: Req1Batch189Filler_PE_CO
	/* 810L, 11L, 242L, 251L) */ if (var_1_12) {
		/* 812L, 10L, 244L, 253L) */ var_1_1 = (
			/* 815L, 9L, 247L, 256L) */ ((
				var_1_3
			) - (
				var_1_4
			))
		);
	}


	// From: Req2Batch189Filler_PE_CO
	/* 822L, 31L, 281L, 294L) */ if (/* 823L, 19L, 20L, 282L, 295L) */ ((var_1_3) > (var_1_15))) {
		/* 826L, 30L, 285L, 298L) */ var_1_5 = (
			/* 829L, 29L, 288L, 301L) */ (abs (
				var_1_6
			))
		);
	}


	// From: Req7Batch189Filler_PE_CO
	/* 891L, 208L, 544L, 593L) */ if (var_1_12) {
		/* 893L, 173L, 546L, 595L) */ if (/* 894L, 144L, 145L, 547L, 596L) */ ((/* 895L, 140L, 146L, 548L, 597L) */ (- (var_1_5))) != (/* 897L, 143L, 148L, 550L, 599L) */ (max (/* 897L, 143L, 148L, 550L, 599L) */ (var_1_11) , (var_1_5)))))) {
			/* 900L, 162L, 553L, 602L) */ var_1_18 = (
				/* 903L, 161L, 556L, 605L) */ ((
					200
				) - (
					var_1_4
				))
			);
		} else {
			/* 906L, 172L, 559L, 608L) */ var_1_18 = (
				/* 909L, 171L, 562L, 611L) */ ((
					var_1_19
				) - (
					/* 911L, 170L, 564L, 613L) */ (max (
						/* 911L, 170L, 564L, 613L) */ (
							var_1_4
						) , (
							/* 913L, 169L, 566L, 615L) */ ((
								var_1_20
							) - (
								var_1_21
							))
						)
					))
				))
			);
		}
	} else {
		/* 916L, 206L, 569L, 618L) */ if (/* 917L, 176L, 177L, 570L, 619L) */ (! (var_1_13))) {
			/* 919L, 196L, 572L, 621L) */ if (/* 920L, 183L, 184L, 573L, 622L) */ ((var_1_7) > (var_1_19))) {
				/* 923L, 195L, 576L, 625L) */ var_1_18 = (
					/* 926L, 194L, 579L, 628L) */ ((
						128
					) - (
						5
					))
				);
			}
		} else {
			/* 929L, 205L, 582L, 631L) */ var_1_18 = (
				/* 932L, 204L, 585L, 634L) */ (min (
					/* 932L, 204L, 585L, 634L) */ (
						var_1_20
					) , (
						/* 934L, 203L, 587L, 636L) */ ((
							var_1_4
						) + (
							var_1_21
						))
					)
				))
			);
		}
	}


	// From: CodeObject1
	/* 215L, 5L) */ var_1_25 = (
		var_1_26
	);


	// From: CodeObject2
	/* 219L, 42L) */ if (/* 220L, 12L, 13L) */ ((var_1_1) <= (var_1_26))) {
		/* 223L, 34L) */ var_1_27 = (
			/* 226L, 33L) */ (min (
				/* 226L, 33L) */ (
					/* 227L, 25L) */ (max (
						/* 227L, 25L) */ (
							/* 228L, 23L) */ (max (
								/* 228L, 23L) */ (
									var_1_28
								) , (
									var_1_29
								)
							))
						) , (
							var_1_30
						)
					))
				) , (
					/* 232L, 32L) */ (max (
						/* 232L, 32L) */ (
							/* 233L, 28L) */ (max (
								/* 233L, 28L) */ (
									var_1_31
								) , (
									var_1_32
								)
							))
						) , (
							/* 236L, 31L) */ ((
								var_1_33
							) + (
								var_1_34
							))
						)
					))
				)
			))
		);
	} else {
		/* 239L, 41L) */ var_1_27 = (
			/* 242L, 40L) */ ((
				/* 243L, 38L) */ (abs (
					var_1_35
				))
			) - (
				var_1_34
			))
		);
	}


	// From: CodeObject3
	/* 246L, 86L) */ if (/* 247L, 50L, 51L) */ ((/* 248L, 48L, 52L) */ ((50) | (var_1_30))) >= (var_1_34))) {
		/* 252L, 84L) */ if (/* 253L, 65L, 66L) */ ((/* 254L, 63L, 67L) */ ((var_1_26) + (var_1_7))) < (-8))) {
			/* 258L, 79L) */ var_1_36 = (
				var_1_35
			);
		} else {
			/* 262L, 83L) */ var_1_36 = (
				var_1_37
			);
		}
	}


	// From: CodeObject4
	/* 267L, 93L) */ var_1_38 = (
		4.75f
	);


	// From: CodeObject5
	/* 271L, 121L) */ if (/* 272L, 100L, 101L) */ ((var_1_7) >= (var_1_31))) {
		/* 275L, 115L) */ var_1_39 = (
			/* 278L, 114L) */ (max (
				/* 278L, 114L) */ (
					/* 279L, 110L) */ (abs (
						var_1_22
					))
				) , (
					/* 281L, 113L) */ ((
						var_1_40
					) - (
						var_1_41
					))
				)
			))
		);
	} else {
		/* 284L, 120L) */ var_1_39 = (
			/* 287L, 119L) */ (abs (
				var_1_26
			))
		);
	}


	// From: CodeObject6
	/* 289L, 143L) */ if (/* 290L, 127L, 128L) */ ((var_1_7) < (var_1_22))) {
		/* 293L, 137L) */ var_1_42 = (
			var_1_44
		);
	} else {
		/* 297L, 142L) */ var_1_42 = (
			/* 300L, 141L) */ (abs (
				var_1_44
			))
		);
	}


	// From: CodeObject7
	/* 302L, 212L) */ if (var_1_24) {
		/* 304L, 206L) */ if (/* 305L, 156L, 157L) */ ((/* 306L, 154L, 158L) */ ((/* 307L, 152L, 159L) */ ((var_1_44) - (var_1_41))) < (var_1_15))) || (var_1_24))) {
			/* 312L, 200L) */ if (/* 313L, 177L, 178L) */ ((/* 314L, 173L, 179L) */ ((var_1_29) + (var_1_40))) < (/* 317L, 176L, 182L) */ ((var_1_15) ^ (var_1_33))))) {
				/* 320L, 199L) */ var_1_45 = (
					/* 323L, 198L) */ (abs (
						/* 324L, 197L) */ ((
							/* 325L, 195L) */ (abs (
								var_1_7
							))
						) + (
							var_1_7
						))
					))
				);
			}
		} else {
			/* 328L, 205L) */ var_1_45 = (
				var_1_7
			);
		}
	} else {
		/* 332L, 211L) */ var_1_45 = (
			var_1_48
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65535);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 4294967295);
	assume_abort_if_not(var_1_17 != 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 63);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 65534);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 65534);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 32767);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483647);
	assume_abort_if_not(var_1_37 <= 2147483646);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= -1);
	assume_abort_if_not(var_1_40 <= 32766);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 32766);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= -32767);
	assume_abort_if_not(var_1_48 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_12) {
	}
	if (/* 349L, 19L, 23L, 308L, 321L, 969L) */ ((var_1_3) > (var_1_15))) {
	}
	if (/* 366L, 57L, 61L, 395L, 413L, 986L) */ ((var_1_7) <= (var_1_4))) {
	} else {
	}
	if (/* 396L, 106L, 114L, 510L, 527L, 1016L) */ ((/* 397L, 102L, 115L, 511L, 528L, 1017L) */ ((var_1_7) / (var_1_16))) <= (/* 400L, 105L, 118L, 514L, 531L, 1020L) */ ((var_1_4) / (var_1_17))))) {
	}
	if (var_1_12) {
		if (/* 416L, 144L, 151L, 645L, 694L, 1036L) */ ((/* 417L, 140L, 152L, 646L, 695L, 1037L) */ (- (var_1_5))) != (/* 419L, 143L, 154L, 648L, 697L, 1039L) */ (max (/* 419L, 143L, 154L, 648L, 697L, 1039L) */ (var_1_11) , (var_1_5)))))) {
		} else {
		}
	} else {
		if (/* 439L, 176L, 179L, 668L, 717L, 1059L) */ (! (var_1_13))) {
			if (/* 442L, 183L, 187L, 671L, 720L, 1062L) */ ((var_1_7) > (var_1_19))) {
			}
		} else {
		}
	}
	return /* 485L) */ ((
	/* 484L) */ ((
		/* 483L) */ ((
			/* 482L) */ ((
				/* 481L) */ ((
					/* 480L) */ ((
						/* 479L) */ ((
							/* 478L) */ ((
								/* 336L, 12L, 260L, 269L, 956L) */ ((
									var_1_12
								) ? (
									/* 338L, 10L, 262L, 271L, 958L) */ ((
										var_1_1
									) == (
										/* 338L, 10L, 262L, 271L, 958L) */ ((signed char) (
											/* 341L, 9L, 265L, 274L, 961L) */ ((
												var_1_3
											) - (
												var_1_4
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 348L, 32L, 307L, 320L, 968L) */ ((
									/* 349L, 19L, 23L, 308L, 321L, 969L) */ ((
										var_1_3
									) > (
										var_1_15
									))
								) ? (
									/* 352L, 30L, 311L, 324L, 972L) */ ((
										var_1_5
									) == (
										/* 352L, 30L, 311L, 324L, 972L) */ ((double) (
											/* 355L, 29L, 314L, 327L, 975L) */ (abs (
												var_1_6
											))
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 360L, 46L, 346L, 353L, 980L) */ ((
								var_1_7
							) == (
								/* 360L, 46L, 346L, 353L, 980L) */ ((unsigned long int) (
									var_1_4
								))
							))
						))
					) && (
						/* 365L, 78L, 394L, 412L, 985L) */ ((
							/* 366L, 57L, 61L, 395L, 413L, 986L) */ ((
								var_1_7
							) <= (
								var_1_4
							))
						) ? (
							/* 369L, 72L, 398L, 416L, 989L) */ ((
								var_1_8
							) == (
								/* 369L, 72L, 398L, 416L, 989L) */ ((float) (
									/* 372L, 71L, 401L, 419L, 992L) */ (abs (
										/* 373L, 70L, 402L, 420L, 993L) */ ((
											var_1_9
										) - (
											/* 375L, 69L, 404L, 422L, 995L) */ ((
												var_1_10
											) + (
												var_1_11
											))
										))
									))
								))
							))
						) : (
							/* 378L, 76L, 407L, 425L, 998L) */ ((
								var_1_8
							) == (
								/* 378L, 76L, 407L, 425L, 998L) */ ((float) (
									var_1_10
								))
							))
						))
					))
				) && (
					/* 386L, 89L, 455L, 466L, 1006L) */ ((
						var_1_12
					) == (
						/* 386L, 89L, 455L, 466L, 1006L) */ ((unsigned char) (
							/* 389L, 88L, 458L, 469L, 1009L) */ (! (
								/* 390L, 87L, 459L, 470L, 1010L) */ ((
									var_1_13
								) || (
									var_1_14
								))
							))
						))
					))
				))
			) && (
				/* 395L, 129L, 509L, 526L, 1015L) */ ((
					/* 396L, 106L, 114L, 510L, 527L, 1016L) */ ((
						/* 397L, 102L, 115L, 511L, 528L, 1017L) */ ((
							var_1_7
						) / (
							var_1_16
						))
					) <= (
						/* 400L, 105L, 118L, 514L, 531L, 1020L) */ ((
							var_1_4
						) / (
							var_1_17
						))
					))
				) ? (
					/* 403L, 127L, 517L, 534L, 1023L) */ ((
						var_1_15
					) == (
						/* 403L, 127L, 517L, 534L, 1023L) */ ((unsigned long int) (
							/* 406L, 126L, 520L, 537L, 1026L) */ (abs (
								/* 407L, 125L, 521L, 538L, 1027L) */ (max (
									/* 407L, 125L, 521L, 538L, 1027L) */ (
										var_1_16
									) , (
										var_1_4
									)
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 413L, 209L, 642L, 691L, 1033L) */ ((
				var_1_12
			) ? (
				/* 415L, 174L, 644L, 693L, 1035L) */ ((
					/* 416L, 144L, 151L, 645L, 694L, 1036L) */ ((
						/* 417L, 140L, 152L, 646L, 695L, 1037L) */ (- (
							var_1_5
						))
					) != (
						/* 419L, 143L, 154L, 648L, 697L, 1039L) */ (max (
							/* 419L, 143L, 154L, 648L, 697L, 1039L) */ (
								var_1_11
							) , (
								var_1_5
							)
						))
					))
				) ? (
					/* 422L, 162L, 651L, 700L, 1042L) */ ((
						var_1_18
					) == (
						/* 422L, 162L, 651L, 700L, 1042L) */ ((unsigned char) (
							/* 425L, 161L, 654L, 703L, 1045L) */ ((
								200
							) - (
								var_1_4
							))
						))
					))
				) : (
					/* 428L, 172L, 657L, 706L, 1048L) */ ((
						var_1_18
					) == (
						/* 428L, 172L, 657L, 706L, 1048L) */ ((unsigned char) (
							/* 431L, 171L, 660L, 709L, 1051L) */ ((
								var_1_19
							) - (
								/* 433L, 170L, 662L, 711L, 1053L) */ (max (
									/* 433L, 170L, 662L, 711L, 1053L) */ (
										var_1_4
									) , (
										/* 435L, 169L, 664L, 713L, 1055L) */ ((
											var_1_20
										) - (
											var_1_21
										))
									)
								))
							))
						))
					))
				))
			) : (
				/* 438L, 207L, 667L, 716L, 1058L) */ ((
					/* 439L, 176L, 179L, 668L, 717L, 1059L) */ (! (
						var_1_13
					))
				) ? (
					/* 441L, 197L, 670L, 719L, 1061L) */ ((
						/* 442L, 183L, 187L, 671L, 720L, 1062L) */ ((
							var_1_7
						) > (
							var_1_19
						))
					) ? (
						/* 445L, 195L, 674L, 723L, 1065L) */ ((
							var_1_18
						) == (
							/* 445L, 195L, 674L, 723L, 1065L) */ ((unsigned char) (
								/* 448L, 194L, 677L, 726L, 1068L) */ ((
									128
								) - (
									5
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 451L, 205L, 680L, 729L, 1071L) */ ((
						var_1_18
					) == (
						/* 451L, 205L, 680L, 729L, 1071L) */ ((unsigned char) (
							/* 454L, 204L, 683L, 732L, 1074L) */ (min (
								/* 454L, 204L, 683L, 732L, 1074L) */ (
									var_1_20
								) , (
									/* 456L, 203L, 685L, 734L, 1076L) */ ((
										var_1_4
									) + (
										var_1_21
									))
								)
							))
						))
					))
				))
			))
		))
	) && (
		/* 461L, 227L, 763L, 775L, 1081L) */ ((
			var_1_22
		) == (
			/* 461L, 227L, 763L, 775L, 1081L) */ ((unsigned char) (
				/* 464L, 226L, 766L, 778L, 1084L) */ (max (
					/* 464L, 226L, 766L, 778L, 1084L) */ (
						var_1_4
					) , (
						/* 466L, 225L, 768L, 780L, 1086L) */ ((
							/* 467L, 223L, 769L, 781L, 1087L) */ ((
								var_1_20
							) - (
								var_1_21
							))
						) + (
							var_1_23
						))
					)
				))
			))
		))
	))
) && (
	/* 473L, 237L, 799L, 805L, 1093L) */ ((
		var_1_24
	) == (
		/* 473L, 237L, 799L, 805L, 1093L) */ ((unsigned char) (
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

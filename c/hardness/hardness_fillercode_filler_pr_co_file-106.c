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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106Filler_PR_CO.c", 13, "reach_error"); }
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
signed short int var_1_1 = -128;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed short int var_1_4 = 25;
signed short int var_1_5 = 64;
signed short int var_1_6 = 1000;
signed short int var_1_7 = 2;
float var_1_8 = 5.55;
signed short int var_1_9 = 4;
float var_1_10 = 9.58;
float var_1_11 = 200.25;
signed short int var_1_12 = -2;
signed short int var_1_13 = 1;
unsigned short int var_1_14 = 32;
unsigned short int var_1_15 = 10;
unsigned char var_1_16 = 100;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 128;
double var_1_20 = 200.5;
double var_1_21 = 1.6;
double var_1_22 = 15.75;
unsigned long int var_1_23 = 1;
unsigned long int var_1_24 = 32;
signed short int var_1_25 = -10;
signed long int var_1_26 = -100;
unsigned long int var_1_27 = 1000000000;
unsigned char var_1_28 = 0;
unsigned long int var_1_29 = 4;
unsigned long int var_1_30 = 256;
unsigned long int var_1_31 = 2517672879;
signed long int var_1_32 = -2;
signed long int var_1_33 = -4;
float var_1_34 = 4.75;
unsigned short int var_1_35 = 25;
unsigned short int var_1_36 = 0;
unsigned short int var_1_37 = 4;
unsigned char var_1_38 = 0;
unsigned short int var_1_39 = 32;
unsigned short int var_1_40 = 46045;
double var_1_41 = 99999999999999.25;
double var_1_42 = 1.8;
double var_1_43 = 255.125;
double var_1_44 = 199.2;
double var_1_45 = 16.4;
double var_1_46 = 1.8;
unsigned long int var_1_47 = 256;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch106Filler_PR_CO
	/* 844L, 32L, 252L, 279L) */ if (var_1_2) {
		/* 846L, 26L, 254L, 281L) */ if (var_1_3) {
			/* 848L, 19L, 256L, 283L) */ var_1_1 = (
				/* 851L, 18L, 259L, 286L) */ (min (
					/* 851L, 18L, 259L, 286L) */ (
						var_1_4
					) , (
						/* 853L, 17L, 261L, 288L) */ ((
							/* 854L, 13L, 262L, 289L) */ ((
								var_1_5
							) + (
								256
							))
						) - (
							/* 857L, 16L, 265L, 292L) */ (min (
								/* 857L, 16L, 265L, 292L) */ (
									var_1_6
								) , (
									var_1_7
								)
							))
						))
					)
				))
			);
		} else {
			/* 860L, 25L, 268L, 295L) */ var_1_1 = (
				/* 863L, 24L, 271L, 298L) */ ((
					var_1_5
				) - (
					var_1_7
				))
			);
		}
	} else {
		/* 866L, 31L, 274L, 301L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: Req2Batch106Filler_PR_CO
	/* 872L, 80L, 361L, 389L) */ if (/* 873L, 44L, 45L, 362L, 390L) */ ((var_1_7) <= (/* 875L, 43L, 47L, 364L, 392L) */ ((var_1_5) + (/* 877L, 42L, 49L, 366L, 394L) */ ((var_1_6) - (var_1_9))))))) {
		/* 880L, 74L, 369L, 397L) */ if (var_1_3) {
			/* 882L, 67L, 371L, 399L) */ var_1_8 = (
				/* 885L, 66L, 374L, 402L) */ ((
					var_1_10
				) - (
					var_1_11
				))
			);
		} else {
			/* 888L, 73L, 377L, 405L) */ var_1_8 = (
				/* 891L, 72L, 380L, 408L) */ (max (
					/* 891L, 72L, 380L, 408L) */ (
						var_1_11
					) , (
						var_1_10
					)
				))
			);
		}
	} else {
		/* 894L, 79L, 383L, 411L) */ var_1_8 = (
			var_1_11
		);
	}


	// From: CodeObject6
	/* 284L, 107L) */ if (var_1_28) {
		/* 286L, 99L) */ var_1_41 = (
			/* 289L, 98L) */ (max (
				/* 289L, 98L) */ (
					/* 290L, 96L) */ (max (
						/* 290L, 96L) */ (
							var_1_42
						) , (
							var_1_43
						)
					))
				) , (
					var_1_44
				)
			))
		);
	} else {
		/* 294L, 106L) */ var_1_41 = (
			/* 297L, 105L) */ (abs (
				/* 298L, 104L) */ ((
					var_1_45
				) - (
					var_1_46
				))
			))
		);
	}


	// From: Req4Batch106Filler_PR_CO
	/* 926L, 137L, 558L, 571L) */ var_1_14 = (
		/* 929L, 136L, 561L, 574L) */ ((
			/* 930L, 134L, 562L, 575L) */ ((
				/* 931L, 132L, 563L, 576L) */ (min (
					/* 931L, 132L, 563L, 576L) */ (
						4
					) , (
						var_1_13
					)
				))
			) + (
				var_1_5
			))
		) + (
			var_1_7
		))
	);


	// From: Req5Batch106Filler_PR_CO
	/* 938L, 149L, 609L, 615L) */ var_1_15 = (
		var_1_6
	);


	// From: CodeObject5
	/* 264L, 85L) */ if (var_1_28) {
		/* 266L, 67L) */ var_1_37 = (
			var_1_36
		);
	} else {
		/* 270L, 83L) */ if (var_1_38) {
			/* 272L, 76L) */ var_1_37 = (
				/* 275L, 75L) */ (max (
					/* 275L, 75L) */ (
						var_1_36
					) , (
						var_1_39
					)
				))
			);
		} else {
			/* 278L, 82L) */ var_1_37 = (
				/* 281L, 81L) */ ((
					var_1_40
				) - (
					32
				))
			);
		}
	}


	// From: CodeObject7
	/* 301L, 183L) */ if (/* 302L, 115L, 116L) */ ((/* 303L, 113L, 117L) */ ((var_1_30) & (var_1_33))) <= (var_1_39))) {
		/* 307L, 149L) */ if (var_1_38) {
			/* 309L, 142L) */ if (/* 310L, 131L, 132L) */ ((var_1_20) <= (var_1_45))) {
				/* 313L, 141L) */ var_1_47 = (
					var_1_30
				);
			}
		} else {
			/* 317L, 148L) */ var_1_47 = (
				/* 320L, 147L) */ (abs (
					var_1_30
				))
			);
		}
	} else {
		/* 322L, 181L) */ if (/* 323L, 160L, 161L) */ ((var_1_42) >= (/* 325L, 159L, 163L) */ ((var_1_44) * (/* 327L, 158L, 165L) */ (abs (var_1_45))))))) {
			/* 329L, 176L) */ var_1_47 = (
				var_1_31
			);
		} else {
			/* 333L, 180L) */ var_1_47 = (
				8u
			);
		}
	}


	// From: Req6Batch106Filler_PR_CO
	unsigned char stepLocal_1 = var_1_2;
	/* 957L, 183L, 632L, 646L) */ if (/* 947L, 158L, 159L, 633L, 647L) */ ((var_1_17) || (stepLocal_1))) {
		/* 956L, 181L, 636L, 650L) */ if (/* 951L, 168L, 169L, 637L, 651L) */ ((var_1_11) > (/* 950L, 167L, 171L, 639L, 653L) */ (- (var_1_8))))) {
			/* 955L, 180L, 641L, 655L) */ var_1_16 = (
				var_1_19
			);
		}
	}


	// From: CodeObject1
	/* 228L, 19L) */ if (var_1_28) {
		/* 230L, 10L) */ var_1_27 = (
			/* 233L, 9L) */ ((
				var_1_29
			) + (
				var_1_30
			))
		);
	} else {
		/* 236L, 18L) */ var_1_27 = (
			/* 239L, 17L) */ ((
				var_1_31
			) - (
				/* 241L, 16L) */ (min (
					/* 241L, 16L) */ (
						var_1_29
					) , (
						var_1_30
					)
				))
			))
		);
	}


	// From: CodeObject3
	/* 255L, 48L) */ var_1_34 = (
		15.8f
	);


	// From: Req8Batch106Filler_PR_CO
	/* 987L, 227L, 773L, 779L) */ var_1_23 = (
		var_1_24
	);


	// From: Req10Batch106Filler_PR_CO
	/* 999L, 247L, 821L, 827L) */ var_1_26 = (
		var_1_23
	);


	// From: CodeObject4
	/* 260L, 56L) */ var_1_35 = (
		var_1_36
	);


	// From: Req3Batch106Filler_PR_CO
	unsigned long int stepLocal_0 = /* 900L, 94L, 100L, 477L, 498L) */ ((var_1_23) * (var_1_9));
	/* 920L, 122L, 472L, 493L) */ if (/* 907L, 95L, 96L, 473L, 494L) */ ((/* 906L, 90L, 97L, 474L, 495L) */ ((var_1_7) + (var_1_6))) > (stepLocal_0))) {
		/* 915L, 117L, 480L, 501L) */ var_1_12 = (
			/* 914L, 116L, 483L, 504L) */ ((
				var_1_5
			) - (
				/* 913L, 115L, 485L, 506L) */ ((
					var_1_13
				) + (
					64
				))
			))
		);
	} else {
		/* 919L, 121L, 488L, 509L) */ var_1_12 = (
			var_1_13
		);
	}


	// From: CodeObject2
	/* 245L, 39L) */ if (/* 246L, 26L, 27L) */ ((var_1_31) >= (/* 248L, 25L, 29L) */ (~ (var_1_23))))) {
		/* 250L, 38L) */ var_1_32 = (
			var_1_33
		);
	}


	// From: Req7Batch106Filler_PR_CO
	unsigned long int stepLocal_2 = var_1_23;
	/* 982L, 218L, 688L, 709L) */ if (/* 967L, 193L, 194L, 689L, 710L) */ ((/* 966L, 191L, 195L, 690L, 711L) */ ((var_1_6) + (var_1_15))) <= (stepLocal_2))) {
		/* 971L, 207L, 694L, 715L) */ var_1_20 = (
			var_1_10
		);
	} else {
		/* 981L, 217L, 698L, 719L) */ var_1_20 = (
			/* 980L, 216L, 701L, 722L) */ (max (
				/* 980L, 216L, 701L, 722L) */ (
					var_1_11
				) , (
					/* 979L, 215L, 703L, 724L) */ (min (
						/* 979L, 215L, 703L, 724L) */ (
							var_1_10
						) , (
							/* 978L, 214L, 705L, 726L) */ ((
								var_1_21
							) + (
								var_1_22
							))
						)
					))
				)
			))
		);
	}


	// From: Req9Batch106Filler_PR_CO
	/* 993L, 237L, 797L, 803L) */ var_1_25 = (
		var_1_12
	);


	// From: CodeObject8
	/* 337L, 226L) */ if (/* 338L, 194L, 195L) */ ((/* 339L, 191L, 196L) */ (min (/* 339L, 191L, 196L) */ (/* 340L, 189L, 197L) */ (min (/* 340L, 189L, 197L) */ (var_1_42) , (var_1_43)))) , (var_1_20)))) < (/* 344L, 193L, 201L) */ (- (var_1_44))))) {
		/* 346L, 224L) */ if (var_1_28) {
			/* 348L, 219L) */ var_1_49 = (
				/* 351L, 218L) */ ((
					var_1_50
				) || (
					var_1_51
				))
			);
		} else {
			/* 354L, 223L) */ var_1_49 = (
				0
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483647);
	assume_abort_if_not(var_1_33 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
		if (var_1_3) {
		} else {
		}
	} else {
	}
	if (/* 387L, 44L, 52L, 418L, 446L, 1033L) */ ((var_1_7) <= (/* 389L, 43L, 54L, 420L, 448L, 1035L) */ ((var_1_5) + (/* 391L, 42L, 56L, 422L, 450L, 1037L) */ ((var_1_6) - (var_1_9))))))) {
		if (var_1_3) {
		} else {
		}
	} else {
	}
	if (/* 414L, 95L, 103L, 515L, 536L, 1060L) */ ((/* 415L, 90L, 104L, 516L, 537L, 1061L) */ ((var_1_7) + (var_1_6))) > (/* 418L, 94L, 107L, 519L, 540L, 1064L) */ ((var_1_23) * (var_1_9))))) {
	} else {
	}
	if (/* 454L, 158L, 162L, 661L, 675L, 1100L) */ ((var_1_17) || (var_1_2))) {
		if (/* 458L, 168L, 173L, 665L, 679L, 1104L) */ ((var_1_11) > (/* 460L, 167L, 175L, 667L, 681L, 1106L) */ (- (var_1_8))))) {
		}
	}
	if (/* 468L, 193L, 199L, 731L, 752L, 1114L) */ ((/* 469L, 191L, 200L, 732L, 753L, 1115L) */ ((var_1_6) + (var_1_15))) <= (var_1_23))) {
	} else {
	}
	return /* 514L) */ ((
	/* 513L) */ ((
		/* 512L) */ ((
			/* 511L) */ ((
				/* 510L) */ ((
					/* 509L) */ ((
						/* 508L) */ ((
							/* 507L) */ ((
								/* 506L) */ ((
									/* 358L, 33L, 306L, 333L, 1004L) */ ((
										var_1_2
									) ? (
										/* 360L, 27L, 308L, 335L, 1006L) */ ((
											var_1_3
										) ? (
											/* 362L, 19L, 310L, 337L, 1008L) */ ((
												var_1_1
											) == (
												/* 362L, 19L, 310L, 337L, 1008L) */ ((signed short int) (
													/* 365L, 18L, 313L, 340L, 1011L) */ (min (
														/* 365L, 18L, 313L, 340L, 1011L) */ (
															var_1_4
														) , (
															/* 367L, 17L, 315L, 342L, 1013L) */ ((
																/* 368L, 13L, 316L, 343L, 1014L) */ ((
																	var_1_5
																) + (
																	256
																))
															) - (
																/* 371L, 16L, 319L, 346L, 1017L) */ (min (
																	/* 371L, 16L, 319L, 346L, 1017L) */ (
																		var_1_6
																	) , (
																		var_1_7
																	)
																))
															))
														)
													))
												))
											))
										) : (
											/* 374L, 25L, 322L, 349L, 1020L) */ ((
												var_1_1
											) == (
												/* 374L, 25L, 322L, 349L, 1020L) */ ((signed short int) (
													/* 377L, 24L, 325L, 352L, 1023L) */ ((
														var_1_5
													) - (
														var_1_7
													))
												))
											))
										))
									) : (
										/* 380L, 31L, 328L, 355L, 1026L) */ ((
											var_1_1
										) == (
											/* 380L, 31L, 328L, 355L, 1026L) */ ((signed short int) (
												var_1_4
											))
										))
									))
								) && (
									/* 386L, 81L, 417L, 445L, 1032L) */ ((
										/* 387L, 44L, 52L, 418L, 446L, 1033L) */ ((
											var_1_7
										) <= (
											/* 389L, 43L, 54L, 420L, 448L, 1035L) */ ((
												var_1_5
											) + (
												/* 391L, 42L, 56L, 422L, 450L, 1037L) */ ((
													var_1_6
												) - (
													var_1_9
												))
											))
										))
									) ? (
										/* 394L, 75L, 425L, 453L, 1040L) */ ((
											var_1_3
										) ? (
											/* 396L, 67L, 427L, 455L, 1042L) */ ((
												var_1_8
											) == (
												/* 396L, 67L, 427L, 455L, 1042L) */ ((float) (
													/* 399L, 66L, 430L, 458L, 1045L) */ ((
														var_1_10
													) - (
														var_1_11
													))
												))
											))
										) : (
											/* 402L, 73L, 433L, 461L, 1048L) */ ((
												var_1_8
											) == (
												/* 402L, 73L, 433L, 461L, 1048L) */ ((float) (
													/* 405L, 72L, 436L, 464L, 1051L) */ (max (
														/* 405L, 72L, 436L, 464L, 1051L) */ (
															var_1_11
														) , (
															var_1_10
														)
													))
												))
											))
										))
									) : (
										/* 408L, 79L, 439L, 467L, 1054L) */ ((
											var_1_8
										) == (
											/* 408L, 79L, 439L, 467L, 1054L) */ ((float) (
												var_1_11
											))
										))
									))
								))
							) && (
								/* 413L, 123L, 514L, 535L, 1059L) */ ((
									/* 414L, 95L, 103L, 515L, 536L, 1060L) */ ((
										/* 415L, 90L, 104L, 516L, 537L, 1061L) */ ((
											var_1_7
										) + (
											var_1_6
										))
									) > (
										/* 418L, 94L, 107L, 519L, 540L, 1064L) */ ((
											var_1_23
										) * (
											var_1_9
										))
									))
								) ? (
									/* 421L, 117L, 522L, 543L, 1067L) */ ((
										var_1_12
									) == (
										/* 421L, 117L, 522L, 543L, 1067L) */ ((signed short int) (
											/* 424L, 116L, 525L, 546L, 1070L) */ ((
												var_1_5
											) - (
												/* 426L, 115L, 527L, 548L, 1072L) */ ((
													var_1_13
												) + (
													64
												))
											))
										))
									))
								) : (
									/* 429L, 121L, 530L, 551L, 1075L) */ ((
										var_1_12
									) == (
										/* 429L, 121L, 530L, 551L, 1075L) */ ((signed short int) (
											var_1_13
										))
									))
								))
							))
						) && (
							/* 436L, 137L, 584L, 597L, 1082L) */ ((
								var_1_14
							) == (
								/* 436L, 137L, 584L, 597L, 1082L) */ ((unsigned short int) (
									/* 439L, 136L, 587L, 600L, 1085L) */ ((
										/* 440L, 134L, 588L, 601L, 1086L) */ ((
											/* 441L, 132L, 589L, 602L, 1087L) */ (min (
												/* 441L, 132L, 589L, 602L, 1087L) */ (
													4
												) , (
													var_1_13
												)
											))
										) + (
											var_1_5
										))
									) + (
										var_1_7
									))
								))
							))
						))
					) && (
						/* 448L, 149L, 621L, 627L, 1094L) */ ((
							var_1_15
						) == (
							/* 448L, 149L, 621L, 627L, 1094L) */ ((unsigned short int) (
								var_1_6
							))
						))
					))
				) && (
					/* 453L, 184L, 660L, 674L, 1099L) */ ((
						/* 454L, 158L, 162L, 661L, 675L, 1100L) */ ((
							var_1_17
						) || (
							var_1_2
						))
					) ? (
						/* 457L, 182L, 664L, 678L, 1103L) */ ((
							/* 458L, 168L, 173L, 665L, 679L, 1104L) */ ((
								var_1_11
							) > (
								/* 460L, 167L, 175L, 667L, 681L, 1106L) */ (- (
									var_1_8
								))
							))
						) ? (
							/* 462L, 180L, 669L, 683L, 1108L) */ ((
								var_1_16
							) == (
								/* 462L, 180L, 669L, 683L, 1108L) */ ((unsigned char) (
									var_1_19
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
				/* 467L, 219L, 730L, 751L, 1113L) */ ((
					/* 468L, 193L, 199L, 731L, 752L, 1114L) */ ((
						/* 469L, 191L, 200L, 732L, 753L, 1115L) */ ((
							var_1_6
						) + (
							var_1_15
						))
					) <= (
						var_1_23
					))
				) ? (
					/* 473L, 207L, 736L, 757L, 1119L) */ ((
						var_1_20
					) == (
						/* 473L, 207L, 736L, 757L, 1119L) */ ((double) (
							var_1_10
						))
					))
				) : (
					/* 477L, 217L, 740L, 761L, 1123L) */ ((
						var_1_20
					) == (
						/* 477L, 217L, 740L, 761L, 1123L) */ ((double) (
							/* 480L, 216L, 743L, 764L, 1126L) */ (max (
								/* 480L, 216L, 743L, 764L, 1126L) */ (
									var_1_11
								) , (
									/* 482L, 215L, 745L, 766L, 1128L) */ (min (
										/* 482L, 215L, 745L, 766L, 1128L) */ (
											var_1_10
										) , (
											/* 484L, 214L, 747L, 768L, 1130L) */ ((
												var_1_21
											) + (
												var_1_22
											))
										)
									))
								)
							))
						))
					))
				))
			))
		) && (
			/* 489L, 227L, 785L, 791L, 1135L) */ ((
				var_1_23
			) == (
				/* 489L, 227L, 785L, 791L, 1135L) */ ((unsigned long int) (
					var_1_24
				))
			))
		))
	) && (
		/* 495L, 237L, 809L, 815L, 1141L) */ ((
			var_1_25
		) == (
			/* 495L, 237L, 809L, 815L, 1141L) */ ((signed short int) (
				var_1_12
			))
		))
	))
) && (
	/* 501L, 247L, 833L, 839L, 1147L) */ ((
		var_1_26
	) == (
		/* 501L, 247L, 833L, 839L, 1147L) */ ((signed long int) (
			var_1_23
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
